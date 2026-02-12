# -*- coding: utf-8 -*-
# @category Amiga
#
# IDA XML -> Ghidra (Amiga):
#   PASS 1) Apply __usercall + explicit register storage (RETURN_TYPE and REGISTER_VAR).
#   PASS 2) Define DEFINED_DATA for MMIO/registers and set Mutability=volatile when needed.
#   PASS 2b) Force all existing defined data units inside MMIO blocks to Mutability=volatile.
#   PASS 3) Apply EQUATE_REFERENCE (immediate equates), handling 68k sign-extension correctly.
#   PASS 4) Apply labels/functions from amiga-symbols.txt (next to this script).
#   PASS 4b) Force mutability=volatile for addresses referenced by REG_* entries in amiga-symbols.txt
#            by creating an EXACT 2-byte leaf data unit (Undefined2) at that address, then setting
#            mutability=volatile on it. (This matches the proven Test.py behavior.)
#   PASS 5) For CHIP_RAM: set defined data Mutability=WRITABLE, fix function-overrun into data.
#   PASS 6) Apply XML SYMBOL_TABLE into Global namespace (RAM + MMIO).
#   FINAL) Mark MMIO memory blocks volatile (Memory Map flag).
#
# IMPORTANT CHANGE:
# - PASS 6 is now executed BEFORE PASS 4, so amiga-symbols.txt register naming (REG_*) wins.
# - PASS 6 also skips MMIO renaming if a REG_* symbol already exists at that address.

from javax.xml.parsers import DocumentBuilderFactory

from ghidra.program.model.scalar import Scalar
from ghidra.program.model.listing import Function, ParameterImpl, VariableStorage
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.symbol import RefType
from ghidra.program.model.data import (
    CategoryPath, PointerDataType, VoidDataType,
    CharDataType, ShortDataType, IntegerDataType, LongLongDataType,
    UnsignedCharDataType, UnsignedShortDataType, UnsignedIntegerDataType, UnsignedLongLongDataType,
    Undefined2DataType
)
from ghidra.program.model.address import AddressSet
from java.io import File, FileReader, BufferedReader
from java.lang import Long

try:
    from ghidra.program.model.listing import FunctionUpdateType as FUpdate
except ImportError:
    FUpdate = Function.FunctionUpdateType

# ---------- env ----------
prog = currentProgram
fm   = prog.getFunctionManager()
dtm  = prog.getDataTypeManager()
lang = prog.getLanguage()
mem  = prog.getMemory()
listing = prog.getListing()

def log(msg):
    print("[IDA-XML->Ghidra] " + msg)

# ---------- MMIO blocks ----------
MMIO_BLOCKS = set(["AMIGA_CUSTOM", "CIAA", "CIAB"])

def is_mmio_addr(addr):
    blk = mem.getBlock(addr)
    return (blk is not None) and (blk.getName() in MMIO_BLOCKS)

# ---------- registers ----------
def norm_reg(rname):
    r = (rname or "").strip().lower()
    # Strip m68k size suffix if present (d0.w / a1.l etc)
    if len(r) > 2 and r[-2] == "." and r[-1] in ("b", "w", "l"):
        r = r[:-2]
    return r

def get_reg(regname):
    reg = lang.getRegister(norm_reg(regname))
    if reg is None:
        raise RuntimeError("Unknown register: %s" % regname)
    return reg

def get_varstorage_from_regspec(regspec):
    s = (regspec or "").strip()
    if not s:
        return None

    # Support "D1W,D2W" (or "d1.w, d2.w" etc)
    parts = [p.strip() for p in s.split(",") if p.strip()]
    if not parts:
        return None

    regs = []
    for p in parts:
        regs.append(get_reg(p))

    # Jython will coerce Python list -> Register[] for this ctor
    if len(regs) == 1:
        return VariableStorage(prog, regs[0])
    return VariableStorage(prog, regs)

# ---------- datatype lookup ----------
BUILTIN = {
    "void": VoidDataType.dataType,
    "char": CharDataType.dataType,
    "signed char": CharDataType.dataType,
    "unsigned char": UnsignedCharDataType.dataType,
    "uchar": UnsignedCharDataType.dataType,
    "byte": UnsignedCharDataType.dataType,

    "short": ShortDataType.dataType,
    "signed short": ShortDataType.dataType,
    "unsigned short": UnsignedShortDataType.dataType,
    "ushort": UnsignedShortDataType.dataType,
    "word": UnsignedShortDataType.dataType,

    "int": IntegerDataType.dataType,
    "signed int": IntegerDataType.dataType,
    "unsigned int": UnsignedIntegerDataType.dataType,
    "uint": UnsignedIntegerDataType.dataType,
    "dword": UnsignedIntegerDataType.dataType,
    "undefined4": UnsignedIntegerDataType.dataType,

    "long long": LongLongDataType.dataType,
    "signed long long": LongLongDataType.dataType,
    "unsigned long long": UnsignedLongLongDataType.dataType,
}

def parse_hex_int(s):
    t = str(s).strip().lower()
    if t.startswith("-0x"):
        return -int(t[3:], 16)
    if t.startswith("0x"):
        return int(t[2:], 16)
    return int(t, 16)

# ---------- equate helpers ----------
def mnemonic_size_bits(instr):
    m = (instr.getMnemonicString() or "").lower()
    if ".b" in m: return 8
    if ".w" in m: return 16
    if ".l" in m: return 32
    return None

def get_scalar_from_operand(instr, op_index):
    objs = instr.getOpObjects(op_index)
    if not objs:
        return None
    for o in objs:
        if isinstance(o, Scalar):
            return o
    return None

def clear_operand_refs(instr, op_index):
    rm = prog.getReferenceManager()
    refs = instr.getOperandReferences(op_index)
    if not refs:
        return
    for r in refs:
        rm.delete(r)

def apply_equate_at_operand(addr, op_index, xml_value, name):
    instr = listing.getInstructionAt(addr)
    if instr is None:
        return False

    sc = get_scalar_from_operand(instr, op_index)
    if sc is None:
        try:
            sc = instr.getScalar(op_index)
        except:
            sc = None
    if sc is None:
        return False

    op_bits = mnemonic_size_bits(instr)  # 8/16/32 or None

    def _to_py_int(x):
        try:
            return int(x)
        except:
            return int(str(x))

    sc_u = _to_py_int(sc.getUnsignedValue())
    try:
        sc_s = _to_py_int(sc.getSignedValue())
    except:
        v = sc_u & 0xFFFFFFFF
        sc_s = v - 0x100000000 if (v & 0x80000000) else v

    xml_v = int(xml_value)

    def _mask(bits):
        return (1 << bits) - 1

    def _matches(bits):
        m = _mask(bits)
        return ((sc_u & m) == (xml_v & m))

    if op_bits in (8, 16, 32):
        if not _matches(op_bits):
            log("Equate value mismatch @ %s op%d: have 0x%X want 0x%X (%s) [op_bits=%d]" %
                (addr, op_index, (sc_u & _mask(op_bits)), (xml_v & _mask(op_bits)), name, op_bits))
            return False
    else:
        if not (_matches(8) or _matches(16) or _matches(32)):
            log("Equate value mismatch @ %s op%d: have 0x%X want 0x%X (%s) [no size]" %
                (addr, op_index, (sc_u & 0xFFFFFFFF), (xml_v & 0xFFFFFFFF), name))
            return False

    clear_operand_refs(instr, op_index)

    eqt = prog.getEquateTable()
    eq = eqt.getEquate(name)

    if eq is not None:
        try:
            if int(eq.getValue()) != int(sc_s):
                eqt.removeEquate(name)
                eq = None
        except:
            pass

    if eq is None:
        try:
            eq = eqt.createEquate(name, sc_s)
        except:
            alt = "%s__%X" % (name, (sc_s & 0xFFFFFFFFFFFFFFFF))
            eq = eqt.getEquate(alt) or eqt.createEquate(alt, sc_s)
            name = alt

    eq.addReference(addr, op_index)
    return True

# ---------- datatype helpers ----------
def dt_lookup(name):
    if not name:
        return None
    n = " ".join(name.strip().split())
    nlow = n.lower()
    for q in ("const ", "volatile "):
        if nlow.startswith(q):
            n = n[len(q):].lstrip()
            nlow = n.lower()
            break
    if nlow in BUILTIN:
        return BUILTIN[nlow]
    dt = dtm.getDataType(CategoryPath("/"), n)
    if dt:
        return dt
    if "::" in n:
        base = n.split("::")[-1]
        dt = dtm.getDataType(CategoryPath("/"), base)
        if dt:
            return dt
    return None

def make_ptr(dt, stars):
    out = dt
    for _ in range(stars):
        out = PointerDataType(out)
    return out

def parse_type_with_pointers(type_str):
    s = (type_str or "").strip()
    stars = s.count("*")
    base = s.replace("*", "").strip()
    base_dt = dt_lookup(base)
    return base_dt, stars

def sanitize_param_dt(type_str, ctx):
    base_dt, stars = parse_type_with_pointers(type_str)
    if base_dt is None:
        if stars > 0:
            log("Param base unknown; using void* for %s" % ctx)
            return PointerDataType(VoidDataType.dataType)
        log("Param base unknown; using unsigned int for %s" % ctx)
        return UnsignedIntegerDataType.dataType
    dt = make_ptr(base_dt, stars)
    if dt is VoidDataType.dataType:
        log("Param type 'void' not allowed; using unsigned int for %s" % ctx)
        return UnsignedIntegerDataType.dataType
    return dt

def choose_return_dt(type_str):
    base_dt, stars = parse_type_with_pointers(type_str)
    if base_dt is None:
        return PointerDataType(VoidDataType.dataType) if stars > 0 else UnsignedIntegerDataType.dataType
    return make_ptr(base_dt, stars)

def text_of_first(nodes):
    if not nodes or nodes.getLength() == 0:
        return None
    return nodes.item(0).getTextContent()

# ---------- Mutability ----------
_MUT_KEY = "mutability"
MUT_CODES = {"volatile": 1, "constant": 2, "writable": 3}  # proven in your setup
log("Mutability mapping discovered: %s" % str(MUT_CODES))

def set_data_mutability(data, kind):
    if data is None:
        return False
    code = MUT_CODES.get(kind)
    if code is None:
        return False

    # IMPORTANT: set on the *instance* settings, not the datatype default settings.
    try:
        data.setLong(_MUT_KEY, Long(int(code)))
    except:
        try:
            data.getDefaultSettings().setLong(_MUT_KEY, Long(int(code)))
        except:
            return False

    try:
        if kind == "volatile":
            return bool(data.isVolatile())
        if kind == "constant":
            return bool(data.isConstant())
        if kind == "writable":
            return bool(data.isWritable())
    except:
        pass

    return True

def get_dt_len(dt):
    ln = dt.getLength()
    return (ln if ln and ln > 0 else 1)

def define_scalar_with_mutability(addr, dt, name=None, make_volatile=False, max_retries=2):
    target_len = get_dt_len(dt)
    end_addr   = addr.add(target_len - 1)

    exact = listing.getDataAt(addr)
    if exact is not None and exact.getLength() == target_len:
        if name:
            sym = getSymbolAt(addr)
            if sym is None:
                createLabel(addr, name, True)
            else:
                if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                    sym.setName(name, SourceType.USER_DEFINED)
        if make_volatile:
            set_data_mutability(exact, "volatile")
        return exact

    if make_volatile:
        clearListing(addr, end_addr)
        for _ in range(max_retries):
            createData(addr, dt)
            data = listing.getDataAt(addr)
            if data is None:
                clearListing(addr, end_addr)
                continue
            if name:
                sym = getSymbolAt(addr)
                if sym is None:
                    createLabel(addr, name, True)
                else:
                    if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                        sym.setName(name, SourceType.USER_DEFINED)
            set_data_mutability(data, "volatile")
            return data
        return None

    if exact is not None:
        if name:
            sym = getSymbolAt(addr)
            if sym is None:
                createLabel(addr, name, True)
            else:
                if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                    sym.setName(name, SourceType.USER_DEFINED)
        return exact

    container = listing.getDataContaining(addr)
    if container is not None:
        if name and container.getMinAddress() == addr:
            sym = getSymbolAt(addr)
            if sym is None:
                createLabel(addr, name, True)
            else:
                if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                    sym.setName(name, SourceType.USER_DEFINED)
        return container

    for _ in range(max_retries):
        createData(addr, dt)
        data = listing.getDataAt(addr)
        if data is None:
            return None
        if name:
            sym = getSymbolAt(addr)
            if sym is None:
                createLabel(addr, name, True)
            else:
                if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                    sym.setName(name, SourceType.USER_DEFINED)
        return data

    return None

# ---------- symbols file helpers ----------
def get_script_dir_path():
    # Ghidra scripts run under Jython; __file__ is not reliable.
    # getSourceFile() returns a ghidra.framework.model.ResourceFile (NOT java.io.File).
    try:
        sf = getSourceFile()
        if sf is not None:
            pf = sf.getParentFile()
            if pf is not None:
                return str(pf.getAbsolutePath())
            return str(sf.getAbsolutePath())
    except:
        pass

    try:
        d = getScriptDirectory()
        if d is not None:
            return str(d.getAbsolutePath())
    except:
        pass

    try:
        import java.lang.System as System
        return str(System.getProperty("user.dir"))
    except:
        return None

# ---------- PASS 4/4b: amiga-symbols.txt (registers + labels + functions) ----------

def _parse_addr_any(addr_s):
    s = str(addr_s).strip()
    try:
        if s.lower().startswith("0x"):
            return toAddr(int(s[2:], 16))
        return toAddr(int(s, 16))
    except:
        return toAddr(parse_hex_int(s))

def _dt_from_token(tok):
    """
    New fixed-format tokens only:
      byte, ushort, uint, addr
    """
    tl = str(tok).strip().lower()

    if tl == "byte":
        return (1, UnsignedCharDataType.dataType)

    if tl == "ushort":
        return (2, UnsignedShortDataType.dataType)

    if tl == "uint":
        return (4, UnsignedIntegerDataType.dataType)

    if tl == "addr":
        return (4, PointerDataType(VoidDataType.dataType))

    return (0, None)

def _add_label(addr, name):
    try:
        sym = getSymbolAt(addr)
        if sym is not None:
            if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                sym.setName(name, SourceType.USER_DEFINED)
            return True
    except:
        pass
    try:
        createLabel(addr, name, False)
        return True
    except:
        try:
            createLabel(addr, name, True)
            return True
        except:
            return False

def _set_primary(addr, name):
    st = prog.getSymbolTable()

    try:
        syms = st.getSymbols(addr)
        if syms is not None:
            it = syms.iterator()
            while it.hasNext():
                s = it.next()
                if s is not None and s.getName() == name:
                    try:
                        s.setName(name, SourceType.USER_DEFINED)
                    except:
                        pass
                    try:
                        s.setPrimary()
                    except:
                        pass
                    return True
    except:
        pass

    try:
        ps = st.getPrimarySymbol(addr)
    except:
        ps = None

    if ps is not None:
        try:
            ps.setName(name, SourceType.USER_DEFINED)
            try:
                ps.setPrimary()
            except:
                pass
            return True
        except:
            pass

    try:
        s = st.createLabel(addr, name, prog.getGlobalNamespace(), SourceType.USER_DEFINED)
        try:
            s.setPrimary()
        except:
            pass
        return True
    except:
        try:
            createLabel(addr, name, True)
            return True
        except:
            return False

def _ensure_data_at(addr, size, dt):
    """
    Ensure an *exact* leaf data unit at addr of length=size/type=dt.

    IMPORTANT CHANGE:
    - If there's a containing data/structure that starts earlier, we still force creation
      for MMIO addresses by clearing the desired range. This is necessary when a big
      register-struct exists at DFF000 and would otherwise block leaf overrides.
    """
    end_addr = addr.add(size - 1)

    d = listing.getDataAt(addr)
    if d is not None and d.getLength() == size:
        # If type differs (e.g., uint -> pointer), recreate.
        try:
            if dt is not None and d.getDataType() is not None and str(d.getDataType()) != str(dt):
                clearListing(addr, end_addr)
                createData(addr, dt)
                return listing.getDataAt(addr)
        except:
            pass
        return d

    cont = listing.getDataContaining(addr)
    if cont is not None and cont.getMinAddress() != addr:
        # Old behavior returned None here.
        # New behavior: if this is MMIO, forcibly clear and create the leaf.
        if not is_mmio_addr(addr):
            return None

    try:
        clearListing(addr, end_addr)
    except:
        pass

    try:
        createData(addr, dt)
    except:
        pass

    return listing.getDataAt(addr)

def apply_amiga_symbols_txt(filename="amiga-symbols.txt"):
    script_dir = get_script_dir_path()
    if not script_dir:
        log("PASS 4: Cannot determine script directory; skipping %s." % filename)
        return {
            "file_found": False,
            "total_lines": 0,
            "reg_lines": 0,
            "reg_unique_addrs": 0,
            "reg_data_defs": 0,
            "reg_primary": 0,
            "reg_alias": 0,
            "reg_volatile_set": 0,
            "labels": 0,
            "funcs": 0,
            "skipped": 0,
        }

    sym_file = File(str(script_dir), str(filename))
    if not sym_file.exists():
        log("PASS 4: '%s' not found next to script (%s); skipping." % (filename, sym_file.getAbsolutePath()))
        return {
            "file_found": False,
            "total_lines": 0,
            "reg_lines": 0,
            "reg_unique_addrs": 0,
            "reg_data_defs": 0,
            "reg_primary": 0,
            "reg_alias": 0,
            "reg_volatile_set": 0,
            "labels": 0,
            "funcs": 0,
            "skipped": 0,
        }

    total_lines = 0
    skipped = 0
    labels = 0
    funcs = 0

    reg_lines = 0
    # by_addr[off] = {"defs":[(name,sz,dt)], "labels":[name..], "want_ptr":bool}
    by_addr = {}

    br = BufferedReader(FileReader(sym_file))
    try:
        while True:
            line = br.readLine()
            if line is None:
                break
            line = line.strip()
            if (not line) or line.startswith("#") or line.startswith(";") or line.startswith("//"):
                continue

            parts = line.split()
            if len(parts) < 2:
                skipped += 1
                continue

            total_lines += 1
            name = parts[0].strip()
            addr = _parse_addr_any(parts[1])

            # New register format (fixed):
            #   REG_NAME 0xADDR byte|ushort|uint|addr D|L
            if len(parts) >= 4 and name.startswith("REG_"):
                typ = parts[2].strip().lower()
                kind = parts[3].strip().upper()
                (sz, dt) = _dt_from_token(typ)
                if sz == 0 or kind not in ("D", "L"):
                    skipped += 1
                    continue

                reg_lines += 1
                off = int(addr.getOffset())
                b = by_addr.get(off)
                if b is None:
                    b = {"defs": [], "labels": [], "want_ptr": False}
                    by_addr[off] = b

                # addr acts as a "pointer hint" even if it's L
                if typ == "addr":
                    b["want_ptr"] = True

                b["labels"].append(name)
                if kind == "D":
                    b["defs"].append((name, sz, dt))
                continue

            # Legacy function format: NAME ADDR f
            if len(parts) >= 3 and parts[2].strip().lower() == "f":
                f = fm.getFunctionAt(addr)
                if f is not None:
                    try:
                        f.setName(name, SourceType.USER_DEFINED)
                        funcs += 1
                    except:
                        skipped += 1
                else:
                    nf = createFunction(addr, name)
                    if nf is not None:
                        try:
                            nf.setName(name, SourceType.USER_DEFINED)
                        except:
                            pass
                        funcs += 1
                    else:
                        skipped += 1
                continue

            # Legacy label
            if _add_label(addr, name):
                labels += 1
            else:
                skipped += 1
    finally:
        br.close()

    reg_unique = len(by_addr)
    reg_data_defs = 0
    reg_primary = 0
    reg_alias = 0
    reg_volatile_set = 0

    # PASS A: define data for D entries (largest-first)
    defs_flat = []
    for off, b in by_addr.items():
        for (n, sz, dt) in b["defs"]:
            defs_flat.append((toAddr(off), n, sz, dt, b["want_ptr"]))

    defs_flat.sort(key=lambda e: (-e[2], int(e[0].getOffset())))

    for (addr, name, sz, dt, want_ptr) in defs_flat:
        if not is_mmio_addr(addr):
            continue

        # If any symbol at this address is marked "addr", force the *32-bit container*
        # to be a pointer, even if the D line says "uint".
        if want_ptr and sz == 4:
            dt = PointerDataType(VoidDataType.dataType)

        d = _ensure_data_at(addr, sz, dt)
        if d is None or d.getLength() != sz:
            continue

        reg_data_defs += 1
        if set_data_mutability(d, "volatile"):
            reg_volatile_set += 1

    # PASS B: primary symbol + aliases
    for off, b in by_addr.items():
        addr = toAddr(off)
        if not is_mmio_addr(addr):
            continue

        primary = b["defs"][0][0] if b["defs"] else (b["labels"][0] if b["labels"] else None)
        if primary and _set_primary(addr, primary):
            reg_primary += 1

        for n in b["labels"]:
            if n == primary:
                continue
            if _add_label(addr, n):
                reg_alias += 1

    return {
        "file_found": True,
        "total_lines": total_lines,
        "reg_lines": reg_lines,
        "reg_unique_addrs": reg_unique,
        "reg_data_defs": reg_data_defs,
        "reg_primary": reg_primary,
        "reg_alias": reg_alias,
        "reg_volatile_set": reg_volatile_set,
        "labels": labels,
        "funcs": funcs,
        "skipped": skipped,
    }

# ---------- PASS 6 helpers: skip clobbering MMIO REG_* ----------
def has_reg_symbol(addr):
    st = prog.getSymbolTable()
    try:
        syms = st.getSymbols(addr)
        if syms is None:
            return False
        it = syms.iterator()
        while it.hasNext():
            s = it.next()
            if s is None:
                continue
            n = s.getName()
            if n and n.startswith("REG_"):
                return True
    except:
        pass
    return False

def apply_memory_references_from_xml(doc):
    mr_nodes = doc.getElementsByTagName("MEMORY_REFERENCE")
    rm = prog.getReferenceManager()

    applied = 0
    skipped = 0

    tx = prog.startTransaction("PASS 3b: apply MEMORY_REFERENCE")
    try:
        for i in range(mr_nodes.getLength()):
            mn = mr_nodes.item(i)
            at = mn.getAttributes()

            a_node = at.getNamedItem("ADDRESS")
            o_node = at.getNamedItem("OPERAND_INDEX")
            t_node = at.getNamedItem("TO_ADDRESS")

            if a_node is None or o_node is None or t_node is None:
                skipped += 1
                continue

            addr_s = a_node.getNodeValue()
            op_s   = o_node.getNodeValue()
            to_s   = t_node.getNodeValue()

            try:
                ea = toAddr(int(addr_s, 16))
            except:
                ea = toAddr(parse_hex_int(addr_s))

            try:
                to_ea = toAddr(int(to_s, 16))
            except:
                to_ea = toAddr(parse_hex_int(to_s))

            try:
                op_index = int(op_s)
            except:
                skipped += 1
                continue

            instr = listing.getInstructionAt(ea)
            if instr is None:
                skipped += 1
                continue

            # Clear existing operand refs so we don’t accumulate stale/incorrect ones
            try:
                clear_operand_refs(instr, op_index)
            except:
                pass

            # Create a memory reference on that operand
            try:
                rm.addMemoryReference(ea, to_ea, RefType.DATA, SourceType.USER_DEFINED, op_index)
                applied += 1
            except:
                # Duplicate ref or unsupported operand—don’t fail the run
                skipped += 1
                continue
    finally:
        prog.endTransaction(tx, True)

    log("PASS 3b: MEMORY_REFERENCE applied: %d, skipped: %d." % (applied, skipped))
    return (applied, skipped)

# ---------- Load XML ----------
xml_file = askFile("Select IDA XML file", "Apply")
doc = DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(xml_file)
doc.getDocumentElement().normalize()

# ================= PASS 1: FUNCTIONS =================
func_nodes = doc.getElementsByTagName("FUNCTION")
f_updated = 0
f_skipped = 0

for i in range(func_nodes.getLength()):
    fn  = func_nodes.item(i)
    fat = fn.getAttributes()
    ep  = fat.getNamedItem("ENTRY_POINT")
    if ep is None:
        f_skipped += 1
        continue

    ea_hex = ep.getNodeValue()
    try:
        ea = toAddr(int(ea_hex, 16))
    except:
        f_skipped += 1
        continue

    name = fat.getNamedItem("NAME").getNodeValue() if fat.getNamedItem("NAME") else None

    params = []
    regvars = fn.getElementsByTagName("REGISTER_VAR")
    for j in range(regvars.getLength()):
        pn = regvars.item(j)
        at = pn.getAttributes()
        p_name = at.getNamedItem("NAME").getNodeValue() if at.getNamedItem("NAME") else ("arg_%d" % j)
        p_type = at.getNamedItem("DATATYPE").getNodeValue() if at.getNamedItem("DATATYPE") else "unsigned int"
        p_regn = at.getNamedItem("REGISTER").getNodeValue() if at.getNamedItem("REGISTER") else None
        if not p_regn:
            continue
        params.append((p_name, p_type, p_regn))

    ret_nodes = fn.getElementsByTagName("RETURN_TYPE")
    ret_type = "void"
    ret_reg = None
    if ret_nodes.getLength() > 0:
        at = ret_nodes.item(0).getAttributes()
        if at.getNamedItem("DATATYPE"):
            ret_type = at.getNamedItem("DATATYPE").getNodeValue()
        if at.getNamedItem("REGISTER"):
            ret_reg  = at.getNamedItem("REGISTER").getNodeValue()

    reg_cmt = text_of_first(fn.getElementsByTagName("REGULAR_CMT"))

    f = fm.getFunctionAt(ea) or fm.createFunction(name, ea, None, SourceType.USER_DEFINED)
    if name and f.getName() != name:
        f.setName(name, SourceType.USER_DEFINED)

    gh_params = []
    for (pname, ptype, preg) in params:
        try:
            vs = VariableStorage(prog, get_reg(preg))
        except:
            continue
        p_dt = sanitize_param_dt(ptype, "%s.%s" % (name or "func", pname))
        gh_params.append(ParameterImpl(pname, p_dt, vs, prog, SourceType.USER_DEFINED))

    ret_dt = choose_return_dt(ret_type)
    is_void_ret = (ret_type.strip().lower() == "void")

    tx = prog.startTransaction("PASS 1: apply function storage @ %s" % ea_hex)
    try:
        f.setCustomVariableStorage(True)
        f.setCallingConvention("__usercall")
        f.setSignatureSource(SourceType.USER_DEFINED)
        f.replaceParameters(FUpdate.CUSTOM_STORAGE, True, SourceType.USER_DEFINED, gh_params)

        if ret_reg:
            try:
                ret_vs = get_varstorage_from_regspec(ret_reg)
                if ret_vs is not None:
                    f.setReturn(ret_dt, ret_vs, SourceType.USER_DEFINED)
                else:
                    f.setReturnType(ret_dt, SourceType.USER_DEFINED)
            except:
                f.setReturnType(ret_dt, SourceType.USER_DEFINED)
        else:
            f.setReturnType(ret_dt, SourceType.USER_DEFINED)

        if reg_cmt:
            f.setComment(reg_cmt)

        try:
            f.setSignatureLocked(True)
        except:
            pass

        prog.endTransaction(tx, True)
        f_updated += 1
    except Exception as e:
        prog.endTransaction(tx, False)
        log("Failed %s @ %s: %s" % (name or "func", ea_hex, e))
        f_skipped += 1

log("Functions updated: %d, skipped: %d (from %s)" % (f_updated, f_skipped, xml_file.getName()))

# ================= PASS 2: DEFINED_DATA (MMIO + typing) =================
dd_nodes = doc.getElementsByTagName("DEFINED_DATA")
d_updated = 0
d_skipped = 0

for i in range(dd_nodes.getLength()):
    dn = dd_nodes.item(i)
    at = dn.getAttributes()
    a_node = at.getNamedItem("ADDRESS")
    t_node = at.getNamedItem("DATATYPE")
    if a_node is None or t_node is None:
        d_skipped += 1
        continue

    addr_hex = a_node.getNodeValue()
    type_str = (t_node.getNodeValue() or "").strip()

    try:
        ea = toAddr(int(addr_hex, 16))
    except:
        d_skipped += 1
        continue

    dd_name = text_of_first(dn.getElementsByTagName("TYPEINFO_CMT"))

    xml_volatile  = type_str.lower().startswith("volatile ")
    mmio_volatile = is_mmio_addr(ea)
    is_volatile = xml_volatile or mmio_volatile

    base_type_str = type_str
    for q in ("volatile ", "const "):
        if base_type_str.lower().startswith(q):
            base_type_str = base_type_str[len(q):].lstrip()

    dt = dt_lookup(base_type_str)
    if dt is None:
        bl = base_type_str.lower()
        if bl in ("ushort", "unsigned short", "word"):
            dt = UnsignedShortDataType.dataType
        elif bl in ("short", "signed short"):
            dt = ShortDataType.dataType
        elif bl in ("byte", "uchar", "unsigned char"):
            dt = UnsignedCharDataType.dataType
        elif bl in ("char", "signed char"):
            dt = CharDataType.dataType
        elif bl in ("uint", "unsigned int", "dword", "undefined4", "int32_t", "uint32_t"):
            dt = UnsignedIntegerDataType.dataType
        else:
            dt = UnsignedShortDataType.dataType

    tx = prog.startTransaction("PASS 2: apply DEFINED_DATA @ %s" % addr_hex)
    try:
        data = define_scalar_with_mutability(
            ea, dt, dd_name,
            make_volatile=is_volatile,
            max_retries=2
        )
        prog.endTransaction(tx, True)
        if data is None:
            d_skipped += 1
        else:
            d_updated += 1
    except Exception as e:
        prog.endTransaction(tx, False)
        log("Failed DEFINED_DATA '%s' @ %s: %s" % (type_str, addr_hex, e))
        d_skipped += 1

log("DEFINED_DATA applied: %d, skipped: %d." % (d_updated, d_skipped))

# ================= PASS 2b: FORCE existing MMIO data units to VOLATILE =================
def force_block_data_mutability(block_name, kind):
    blk = mem.getBlock(block_name)
    if blk is None:
        return 0

    it = listing.getDefinedData(blk.getStart(), True)
    changed = 0
    while it.hasNext():
        d = it.next()
        if d is None:
            continue
        if d.getAddress().compareTo(blk.getEnd()) > 0:
            break
        set_data_mutability(d, kind)
        changed += 1
    return changed

tx = prog.startTransaction("PASS 2b: force MMIO data volatile")
try:
    c1 = force_block_data_mutability("AMIGA_CUSTOM", "volatile")
    c2 = force_block_data_mutability("CIAA", "volatile")
    c3 = force_block_data_mutability("CIAB", "volatile")
finally:
    prog.endTransaction(tx, True)

log("PASS 2b: forced volatile data units in MMIO blocks: AMIGA_CUSTOM=%d CIAA=%d CIAB=%d" % (c1, c2, c3))

# ================= PASS 3: EQUATE_REFERENCE =================
eq_nodes = doc.getElementsByTagName("EQUATE_REFERENCE")
eq_applied = 0
eq_skipped = 0

tx = prog.startTransaction("PASS 3: apply EQUATE_REFERENCE")
try:
    for i in range(eq_nodes.getLength()):
        en = eq_nodes.item(i)
        at = en.getAttributes()

        a_node = at.getNamedItem("ADDRESS")
        o_node = at.getNamedItem("OPERAND_INDEX")
        v_node = at.getNamedItem("VALUE")
        n_node = at.getNamedItem("NAME")

        if a_node is None or o_node is None or v_node is None or n_node is None:
            eq_skipped += 1
            continue

        addr_hex = a_node.getNodeValue()
        op_idx_s = o_node.getNodeValue()
        val_hex  = v_node.getNodeValue()
        eq_name  = n_node.getNodeValue()

        try:
            ea = toAddr(int(addr_hex, 16))
        except:
            ea = toAddr(parse_hex_int(addr_hex))

        op_index = int(op_idx_s)
        value = parse_hex_int(val_hex)

        if apply_equate_at_operand(ea, op_index, value, eq_name):
            eq_applied += 1
        else:
            eq_skipped += 1
finally:
    prog.endTransaction(tx, True)

log("EQUATE_REFERENCE applied: %d, skipped: %d." % (eq_applied, eq_skipped))
apply_memory_references_from_xml(doc)

# ================= PASS 6: Apply XML SYMBOL_TABLE into Global namespace =================
def ensure_global_label(addr, name):
    # Do not let XML SYMBOL_TABLE clobber MMIO register naming if REG_* is already present
    if is_mmio_addr(addr) and has_reg_symbol(addr):
        return

    symtab = prog.getSymbolTable()
    global_ns = prog.getGlobalNamespace()

    f = fm.getFunctionAt(addr)
    if f is not None:
        try:
            f.setName(name, SourceType.USER_DEFINED)
        except:
            pass
        return

    try:
        ps = symtab.getPrimarySymbol(addr)
        if ps is not None and ps.getName() == name and ps.getParentNamespace() == global_ns:
            return
    except:
        ps = None

    if ps is not None:
        try:
            ps.setNameAndNamespace(name, global_ns, SourceType.USER_DEFINED)
            try:
                ps.setPrimary()
            except:
                pass
            return
        except:
            pass

    try:
        s = symtab.createLabel(addr, name, global_ns, SourceType.USER_DEFINED)
        try:
            s.setPrimary()
        except:
            pass
    except:
        pass

sym_nodes = doc.getElementsByTagName("SYMBOL")
applied = 0
skipped = 0

tx = prog.startTransaction("PASS 6: apply XML SYMBOL_TABLE")
try:
    for i in range(sym_nodes.getLength()):
        sn = sym_nodes.item(i)
        at = sn.getAttributes()
        a_node = at.getNamedItem("ADDRESS")
        n_node = at.getNamedItem("NAME")
        if a_node is None or n_node is None:
            skipped += 1
            continue

        addr_hex = a_node.getNodeValue()
        name = n_node.getNodeValue()
        addr = toAddr(int(addr_hex, 16))

        blk = mem.getBlock(addr)
        if blk is None:
            skipped += 1
            continue

        blkname = blk.getName()
        if blkname in ("CHIP_RAM", "AMIGA_CUSTOM", "CIAA", "CIAB"):
            ensure_global_label(addr, name)
            applied += 1
        else:
            skipped += 1
finally:
    prog.endTransaction(tx, True)

log("PASS 6: XML SYMBOL_TABLE applied: %d, skipped: %d" % (applied, skipped))

# ================= PASS 4: APPLY amiga-symbols.txt (registers + labels + functions) =================
tx = prog.startTransaction("PASS 4: apply amiga-symbols.txt (merged)")
try:
    r = apply_amiga_symbols_txt("amiga-symbols.txt")
finally:
    prog.endTransaction(tx, True)

if not r["file_found"]:
    log("PASS 4: amiga-symbols.txt not applied (missing).")
else:
    log("PASS 4: amiga-symbols.txt applied: total_lines=%d skipped=%d labels=%d funcs=%d" %
        (r["total_lines"], r["skipped"], r["labels"], r["funcs"]))
    log("PASS 4: REG_* applied: reg_lines=%d unique_addrs=%d data_defs=%d primary=%d aliases=%d volatile_set=%d" %
        (r["reg_lines"], r["reg_unique_addrs"], r["reg_data_defs"], r["reg_primary"], r["reg_alias"], r["reg_volatile_set"]))

# ================= PASS 5: CHIP_RAM -> WRITABLE + FIX FUNCTION OVERRUN =================
def is_terminal_instruction(ins):
    ft = ins.getFlowType()
    return ft is not None and ft.isTerminal()

def shrink_function_tail_at(func, cut_addr):
    body = func.getBody()
    maxa = body.getMaxAddress()
    if maxa is None or cut_addr.compareTo(maxa) > 0:
        return False
    aset = AddressSet(body)
    aset.deleteRange(cut_addr, maxa)
    func.setBody(aset)
    return True

chip = mem.getBlock("CHIP_RAM")
changed = 0
scanned = 0
fixed_funcs = 0

if chip is None:
    log("PASS 5: CHIP_RAM block not found; skipping.")
else:
    start = chip.getStart()
    end   = chip.getEnd()

    data_iter = listing.getDefinedData(start, True)
    tx = prog.startTransaction("PASS 5: CHIP_RAM mutability+overrun fixes")
    try:
        while data_iter.hasNext():
            d = data_iter.next()
            if d is None:
                continue
            a = d.getAddress()
            if a.compareTo(end) > 0:
                break

            scanned += 1
            set_data_mutability(d, "writable")
            changed += 1

            func = fm.getFunctionContaining(a)
            if func is not None:
                prev_ins = listing.getInstructionBefore(a)
                if prev_ins is not None and func.getBody().contains(prev_ins.getAddress()) and is_terminal_instruction(prev_ins):
                    if shrink_function_tail_at(func, a):
                        fixed_funcs += 1
    finally:
        prog.endTransaction(tx, True)

    log("PASS 5: CHIP_RAM defined data mutability set to WRITABLE: changed=%d, scanned=%d" % (changed, scanned))
    log("PASS 5: Function tails shrunk at terminal->data boundaries: %d" % fixed_funcs)

# ---------- FINAL: Mark MMIO blocks as volatile in the Memory Map ----------
for name in ["AMIGA_CUSTOM", "CIAA", "CIAB"]:
    blk = mem.getBlock(name)
    if blk is None:
        print("Missing block:", name)
        continue
    blk.setVolatile(True)
    print("Set volatile:", name, blk.getStart(), blk.getEnd())
