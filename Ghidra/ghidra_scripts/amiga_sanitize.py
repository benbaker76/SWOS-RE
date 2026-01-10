# -*- coding: utf-8 -*-
# @category Amiga
# @runtime Jython
#
# IDA XML -> Ghidra (Amiga):
#   PASS 1) Apply __usercall + explicit register storage (RETURN_TYPE and REGISTER_VAR).
#   PASS 2) Define DEFINED_DATA for MMIO registers, set label (TYPEINFO_CMT), and Mutability=volatile.
#   PASS 3) Apply EQUATE_REFERENCE (immediate equates), handling 68k sign-extension correctly.
#   PASS 4) Apply labels/functions from amiga-symbols.txt (next to this script).
#
# Safe guards / intent:
# - CIA ranges can be forced to 8-bit by your XML typing rules (this script preserves your existing logic).
# - For volatile MMIO, we ensure an EXACT data unit exists at the address (clearing only the required range).
# - For equates, validate by operand width (.b/.w/.l) but create equate using the scalar's signed value
#   (since EquateTable matches the internal scalar value).
# - PASS 4 is used as a workaround to keep labels stable across re-analysis (DAT_ relabeling).

from javax.xml.parsers import DocumentBuilderFactory

from ghidra.program.model.scalar import Scalar
from ghidra.program.model.listing import Function, ParameterImpl, VariableStorage

try:
    from ghidra.program.model.listing import FunctionUpdateType as FUpdate
except ImportError:
    FUpdate = Function.FunctionUpdateType

from ghidra.program.model.symbol import SourceType
from ghidra.program.model.data import (
    CategoryPath, PointerDataType, VoidDataType,
    CharDataType, ShortDataType, IntegerDataType, LongLongDataType,
    UnsignedCharDataType, UnsignedShortDataType, UnsignedIntegerDataType, UnsignedLongLongDataType
)

from java.io import File, FileReader, BufferedReader

# ---------- env ----------
prog = currentProgram
fm   = prog.getFunctionManager()
dtm  = prog.getDataTypeManager()
lang = prog.getLanguage()

def log(msg):
    print("[IDA-XML->Ghidra] " + msg)


# ---------- registers ----------
def norm_reg(rname):
    r = (rname or "").strip().lower()
    # Strip m68k size suffix if present (d0.w / a1.l etc)
    if len(r) > 2 and r[-1] in ("b", "w", "l"):
        r = r[:-1]
    return r

def get_reg(regname):
    reg = lang.getRegister(norm_reg(regname))
    if reg is None:
        raise RuntimeError("Unknown register: %s" % regname)
    return reg


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
    if s is None:
        return None
    t = str(s).strip().lower()
    if t.startswith("-0x"):
        return -int(t[3:], 16)
    if t.startswith("0x"):
        return int(t[2:], 16)
    # allow plain hex digits too (IDA XML often uses that)
    return int(t, 16)


# ---------- equate helpers ----------
def mnemonic_size_bits(instr):
    """
    Best-effort: Ghidra 68k typically uses mnemonics like 'move.w'/'move.l'.
    """
    try:
        m = instr.getMnemonicString() or ""
    except:
        return None
    m = m.lower()
    if ".b" in m: return 8
    if ".w" in m: return 16
    if ".l" in m: return 32
    return None

def get_scalar_from_operand(instr, op_index):
    try:
        objs = instr.getOpObjects(op_index)
    except:
        return None
    if not objs:
        return None
    for o in objs:
        if isinstance(o, Scalar):
            return o
    return None

def clear_operand_refs(instr, op_index):
    """
    Ghidra will sometimes prefer a memory/symbol reference over an equate rendering.
    Clearing operand refs for the immediate operand helps ensure the equate shows.
    """
    rm = currentProgram.getReferenceManager()
    try:
        refs = instr.getOperandReferences(op_index)
    except:
        refs = None
    if not refs:
        return
    for r in refs:
        try:
            rm.delete(r)
        except:
            pass

def apply_equate_at_operand(addr, op_index, xml_value, name):
    """
    Apply equate NAME to operand op_index at addr.

    Correct 68k behavior:
      - Validate match using operand width (.b/.w/.l) by truncating the operand scalar.
      - Create the equate using the operand scalar's *signed* value (often sign-extended to 32-bit),
        because EquateTable matches against that internal scalar value.

    Returns True if reference was added, False otherwise.
    """
    listing = currentProgram.getListing()
    instr = listing.getInstructionAt(addr)
    if instr is None:
        return False

    # Robust scalar fetch
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
            try:
                return int(long(x))  # Jython compatibility
            except:
                return int(str(x))

    # Unsigned view of scalar
    try:
        sc_u = _to_py_int(sc.getUnsignedValue())
    except:
        try:
            sc_u = _to_py_int(sc.getValue())
        except:
            return False

    # Signed view used for equate value matching
    try:
        sc_s = _to_py_int(sc.getSignedValue())
    except:
        try:
            sc_s = _to_py_int(sc.getValue())
        except:
            v = sc_u & 0xFFFFFFFF
            sc_s = v - 0x100000000 if (v & 0x80000000) else v

    xml_v = int(xml_value)

    def _mask(bits):
        return (1 << bits) - 1

    def _matches(bits):
        m = _mask(bits)
        return ((sc_u & m) == (xml_v & m))

    # Validate: prefer mnemonic width; else accept any common width match
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

    # Clear competing operand references (optional but helps)
    try:
        clear_operand_refs(instr, op_index)
    except:
        pass

    eqt = currentProgram.getEquateTable()
    eq = eqt.getEquate(name)

    # Ensure equate exists with exact scalar signed value
    if eq is not None:
        try:
            if int(eq.getValue()) != int(sc_s):
                removed = False
                try:
                    eqt.removeEquate(name)
                    removed = True
                except:
                    try:
                        eqt.removeEquate(eq)
                        removed = True
                    except:
                        removed = False

                if removed:
                    eq = None
                else:
                    # Can't remove -> deterministic alternate name
                    alt = "%s__%X" % (name, (sc_s & 0xFFFFFFFFFFFFFFFF))
                    eq = eqt.getEquate(alt)
                    if eq is None:
                        eq = eqt.createEquate(alt, sc_s)
                    name = alt
        except:
            pass

    if eq is None:
        try:
            eq = eqt.createEquate(name, sc_s)
        except:
            alt = "%s__%X" % (name, (sc_s & 0xFFFFFFFFFFFFFFFF))
            eq = eqt.getEquate(alt) or eqt.createEquate(alt, sc_s)
            name = alt

    try:
        eq.addReference(addr, op_index)
    except Exception as e:
        log("Equate addReference failed @ %s op%d for %s: %s" % (addr, op_index, name, e))
        return False

    return True


# ---------- datatype helpers ----------
def dt_lookup(name):
    if not name:
        return None
    n = " ".join(name.strip().split())
    nlow = n.lower()
    for q in ("const ", "volatile "):
        if nlow.startswith(q):
            n = n[len(q):]
            nlow = nlow[len(q):]
            n = n.lstrip()
            nlow = nlow.lstrip()
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
    try:
        return nodes.item(0).getTextContent()
    except:
        return None


# ---------- Data helpers ----------
def set_data_mutability_volatile(data):
    try:
        settings = data.getDefaultSettings()
        settings.setLong("mutability", 1)
    except:
        pass

def get_dt_len(dt):
    try:
        ln = dt.getLength()
        return (ln if ln and ln > 0 else 1)
    except:
        return 1

def define_scalar_with_mutability(addr, dt, name=None, make_volatile=False,
                                  force_overwrite=True, max_retries=2):
    """
    If make_volatile=True: ensure an EXACT data unit at (addr, dt.length).
      - If a larger/other data overlaps, surgically clear just that range and create exact data.
    If make_volatile=False: reuse existing exact if present, else create if free; never bulldoze.
    """
    listing = currentProgram.getListing()
    target_len = get_dt_len(dt)
    end_addr   = addr.add(target_len - 1)

    exact = listing.getDataAt(addr)
    if exact is not None and exact.getLength() == target_len:
        if name:
            try:
                createLabel(addr, name, True)
            except Exception as e:
                log("Relabel failed at %s: %s" % (addr, e))
        if make_volatile:
            set_data_mutability_volatile(exact)
        return exact

    container = listing.getDataContaining(addr)

    if make_volatile:
        # Must ensure an exact typed unit exists
        try:
            clearListing(addr, end_addr)
        except:
            if container is not None:
                try:
                    clearListing(container.getMinAddress(), container.getMaxAddress())
                except Exception as e:
                    log("Clear container failed at %s: %s" % (addr, e))

        for _ in range(max_retries):
            try:
                createData(addr, dt)
                data = listing.getDataAt(addr)
                if data is None:
                    raise RuntimeError("No Data after createData")
                if name:
                    try:
                        createLabel(addr, name, True)
                    except Exception as e:
                        log("Label failed at %s: %s" % (addr, e))
                set_data_mutability_volatile(data)
                return data
            except Exception as e:
                log("CreateData (volatile) conflict at %s (%s): %s" % (addr, dt.getName(), e))
                try:
                    clearListing(addr, end_addr)
                except:
                    pass
        return None

    # Non-volatile: be conservative
    if exact is not None:
        if name:
            try:
                createLabel(addr, name, True)
            except Exception as e:
                log("Relabel failed at %s: %s" % (addr, e))
        return exact

    if container is not None:
        if name and container.getMinAddress() == addr:
            try:
                createLabel(addr, name, True)
            except Exception as e:
                log("Relabel failed at %s: %s" % (addr, e))
        return container

    # Free → create
    for _ in range(max_retries):
        try:
            createData(addr, dt)
            data = listing.getDataAt(addr)
            if data is None:
                raise RuntimeError("No Data after createData")
            if name:
                try:
                    createLabel(addr, name, True)
                except Exception as e:
                    log("Label failed at %s: %s" % (addr, e))
            return data
        except Exception as e:
            log("CreateData conflict at %s (%s): %s" % (addr, dt.getName(), e))
            return None

    return None


def _dirpath_from_obj(obj):
    """
    Return a directory path (string) from:
      - java.io.File
      - Ghidra ResourceFile (getAbsolutePath/getParentFile)
      - plain string
    Returns None if it cannot be determined.
    """
    if obj is None:
        return None

    # Already a java.io.File
    if isinstance(obj, File):
        try:
            return obj.getAbsolutePath()
        except:
            return str(obj)

    # Ghidra ResourceFile-ish: has getAbsolutePath()
    try:
        ap = obj.getAbsolutePath()
        if ap:
            # Some objects return a java.io.File, some return a string
            return ap.getAbsolutePath() if isinstance(ap, File) else str(ap)
    except:
        pass

    # Ghidra ResourceFile-ish: has getParentFile()
    try:
        parent = obj.getParentFile()
        if parent is not None:
            return _dirpath_from_obj(parent)
    except:
        pass

    # Fallback: string
    try:
        return str(obj)
    except:
        return None


def get_script_dir_path():
    """
    Best-effort: return the directory containing this running script as a string path.
    """
    # 1) getScriptDirectory() if present
    try:
        gsd = globals().get("getScriptDirectory", None)
        if gsd is not None:
            d = gsd()
            p = _dirpath_from_obj(d)
            if p:
                return p
    except:
        pass

    # 2) getSourceFile() if present
    try:
        gsf = globals().get("getSourceFile", None)
        if gsf is not None:
            sf = gsf()
            # Parent directory of the source file
            try:
                parent = sf.getParentFile()
            except:
                parent = None
            p = _dirpath_from_obj(parent if parent is not None else sf)
            if p:
                return p
    except:
        pass

    return None


def get_script_dir_file():
    """
    Return java.io.File for the directory containing this running script.

    Works across Ghidra versions:
      1) getScriptDirectory() (if provided)
      2) getSourceFile().getParentFile() (most reliable)
    Returns None if neither is available.
    """
    # 1) Some Ghidra versions expose getScriptDirectory()
    try:
        gsd = globals().get("getScriptDirectory", None)
        if gsd is not None:
            d = gsd()
            if d is not None:
                return d
    except:
        pass

    # 2) Common: getSourceFile() gives you the script file
    try:
        gsf = globals().get("getSourceFile", None)
        if gsf is not None:
            sf = gsf()
            if sf is not None:
                return sf.getParentFile()
    except:
        pass

    return None


def apply_symbols_file(filename="amiga-symbols.txt"):
    fm = currentProgram.getFunctionManager()

    script_dir_path = get_script_dir_path()
    if not script_dir_path:
        log("PASS 4: Cannot determine script directory; skipping %s." % filename)
        return (0, 0, 0, 0, 0, 0)

    # Force (String, String) ctor to avoid File-type coercion issues
    sym_file = File(str(script_dir_path), str(filename))
    if not sym_file.exists():
        log("PASS 4: '%s' not found in %s; skipping." % (filename, sym_file.getParent()))
        return (0, 0, 0, 0, 0, 0)

    total = 0
    lbl_created = 0
    lbl_renamed = 0
    fun_created = 0
    fun_renamed = 0
    skipped = 0

    br = None
    try:
        br = BufferedReader(FileReader(sym_file))
        while True:
            line = br.readLine()
            if line is None:
                break

            line = line.strip()
            if not line:
                continue
            if line.startswith("#") or line.startswith(";") or line.startswith("//"):
                continue

            parts = line.split()
            if len(parts) < 2:
                skipped += 1
                continue

            name = parts[0]
            addr_s = parts[1]
            kind = parts[2].lower() if len(parts) >= 3 else "l"

            # Address parsing: allow toAddr("0x...") or fallback to numeric parse
            try:
                addr = toAddr(addr_s)
            except:
                try:
                    addr = toAddr(parse_hex_int(addr_s))
                except:
                    log("PASS 4: Bad address '%s' for symbol '%s' (line: %s)" % (addr_s, name, line))
                    skipped += 1
                    continue

            total += 1

            if kind == "f":
                try:
                    func = fm.getFunctionAt(addr)
                    if func is not None:
                        old = func.getName()
                        if old != name or func.getSymbol().getSource() != SourceType.USER_DEFINED:
                            func.setName(name, SourceType.USER_DEFINED)
                            fun_renamed += 1
                    else:
                        nf = createFunction(addr, name)
                        if nf is not None:
                            try:
                                nf.setName(name, SourceType.USER_DEFINED)
                            except:
                                pass
                            fun_created += 1
                        else:
                            skipped += 1
                except Exception as e:
                    log("PASS 4: Failed function '%s' @ %s: %s" % (name, addr, e))
                    skipped += 1
                continue

            # Label create/rename (default)
            try:
                sym = getSymbolAt(addr)
                if sym is not None:
                    if sym.getName() != name or sym.getSource() != SourceType.USER_DEFINED:
                        sym.setName(name, SourceType.USER_DEFINED)
                        lbl_renamed += 1
                else:
                    try:
                        createLabel(addr, name, True)
                    except:
                        createLabel(addr, name, False)
                    lbl_created += 1
            except Exception as e:
                log("PASS 4: Failed label '%s' @ %s: %s" % (name, addr, e))
                skipped += 1

    finally:
        try:
            if br is not None:
                br.close()
        except:
            pass

    return (total, lbl_created, lbl_renamed, fun_created, fun_renamed, skipped)


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
    except Exception as e:
        log("Bad ENTRY_POINT '%s': %s" % (ea_hex, e))
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
            log("No REGISTER= for %s.%s @ %s; skipping param" % (name or "func", p_name, ea_hex))
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
        try:
            f.setName(name, SourceType.USER_DEFINED)
        except:
            pass

    gh_params = []
    for (pname, ptype, preg) in params:
        try:
            vs = VariableStorage(prog, get_reg(preg))
        except Exception as e:
            log("Skip param %s @ %s: %s" % (pname, ea_hex, e))
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

        if is_void_ret:
            try:
                f.setReturnType(VoidDataType.dataType, SourceType.USER_DEFINED)
            except:
                pass
        else:
            if ret_reg:
                try:
                    ret_vs = VariableStorage(prog, get_reg(ret_reg))
                    f.setReturn(ret_dt, ret_vs, SourceType.USER_DEFINED)
                except Exception as e:
                    log("Return reg not applied for %s @ %s: %s" % (name or "func", ea_hex, e))
                    try:
                        f.setReturnType(ret_dt, SourceType.USER_DEFINED)
                    except:
                        pass
            else:
                try:
                    f.setReturnType(ret_dt, SourceType.USER_DEFINED)
                except:
                    pass

        if reg_cmt:
            try:
                f.setComment(reg_cmt)
            except:
                pass

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


# ================= PASS 2: DEFINED_DATA (MMIO) =================
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
    except Exception as e:
        log("Bad DEFINED_DATA ADDRESS '%s': %s" % (addr_hex, e))
        d_skipped += 1
        continue

    dd_name = text_of_first(dn.getElementsByTagName("TYPEINFO_CMT"))
    is_volatile = type_str.lower().startswith("volatile ")
    base_type_str = type_str
    for q in ("volatile ", "const "):
        if base_type_str.lower().startswith(q):
            base_type_str = base_type_str[len(q):].lstrip()

    # Your existing rule-set:
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
            dt = UnsignedShortDataType.dataType  # fallback for unknown Custom regs

    tx = prog.startTransaction("PASS 2: apply DEFINED_DATA @ %s" % addr_hex)
    try:
        data = define_scalar_with_mutability(
            ea, dt, dd_name,
            make_volatile=is_volatile,
            force_overwrite=True,
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
            try:
                ea = toAddr(parse_hex_int(addr_hex))
            except:
                log("Bad EQUATE_REFERENCE ADDRESS '%s'" % addr_hex)
                eq_skipped += 1
                continue

        try:
            op_index = int(op_idx_s)
        except:
            eq_skipped += 1
            continue

        try:
            value = parse_hex_int(val_hex)
        except:
            log("Bad EQUATE_REFERENCE VALUE '%s' @ %s" % (val_hex, addr_hex))
            eq_skipped += 1
            continue

        if apply_equate_at_operand(ea, op_index, value, eq_name):
            eq_applied += 1
        else:
            eq_skipped += 1
finally:
    prog.endTransaction(tx, True)

log("EQUATE_REFERENCE applied: %d, skipped: %d." % (eq_applied, eq_skipped))


# ================= PASS 4: APPLY amiga-symbols.txt =================
tx = prog.startTransaction("PASS 4: apply amiga-symbols.txt")
try:
    (total, lbl_c, lbl_r, fun_c, fun_r, sk) = apply_symbols_file("amiga-symbols.txt")
finally:
    prog.endTransaction(tx, True)

log("amiga-symbols.txt applied: total=%d, labels(created=%d renamed=%d), funcs(created=%d renamed=%d), skipped=%d."
    % (total, lbl_c, lbl_r, fun_c, fun_r, sk))
