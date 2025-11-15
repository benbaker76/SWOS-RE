# -*- coding: utf-8 -*-
# @category Amiga
# IDA XML -> Ghidra:
#   1) Apply __usercall + explicit register storage (RETURN_TYPE and REGISTER_VAR).
#   2) Define DEFINED_DATA for MMIO registers, set label (TYPEINFO_CMT), and Mutability=volatile.
#
# Safe guards:
# - ONLY_MMIO=True restricts DEFINED_DATA to DFFxxx / BFDxxx / BFExxx.
# - CIA ranges are **forced to 8-bit** (uchar), Custom DFFxxx left as-is (typically ushort).
# - If same-sized data already exists, we **reuse** it (no createData), just set volatile + label.

from javax.xml.parsers import DocumentBuilderFactory

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

# ---------- env ----------
prog = currentProgram
fm   = prog.getFunctionManager()
dtm  = prog.getDataTypeManager()
lang = prog.getLanguage()

def log(msg): print("[IDA-XML->Ghidra] " + msg)

# ---------- registers ----------
def norm_reg(rname):
    r = (rname or "").strip().lower()
    if len(r) > 2 and r[-1] in ("b","w","l"):
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

def dt_lookup(name):
    if not name: return None
    n = " ".join(name.strip().split())
    nlow = n.lower()
    for q in ("const ", "volatile "):
        if nlow.startswith(q):
            n = n[len(q):]; nlow = nlow[len(q):]; break
    if nlow in BUILTIN:
        return BUILTIN[nlow]
    dt = dtm.getDataType(CategoryPath("/"), n)
    if dt: return dt
    if "::" in n:
        base = n.split("::")[-1]
        dt = dtm.getDataType(CategoryPath("/"), base)
        if dt: return dt
    return None

def make_ptr(dt, stars):
    out = dt
    for _ in range(stars):
        out = PointerDataType(out)
    return out

def parse_type_with_pointers(type_str):
    s = (type_str or "").strip()
    stars = s.count("*")
    base = s.replace("*","").strip()
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
    if not nodes or nodes.getLength()==0: return None
    try: return nodes.item(0).getTextContent()
    except: return None

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

    # Fast path: exact item already there
    exact = listing.getDataAt(addr)
    if exact is not None and exact.getLength() == target_len:
        if name:
            try: createLabel(addr, name, True)
            except Exception as e: log("Relabel failed at %s: %s" % (addr, e))
        if make_volatile:
            set_data_mutability_volatile(exact)
        return exact

    container = listing.getDataContaining(addr)

    if make_volatile:
        # For volatile items we *must* ensure a proper typed unit at the exact address.
        # 1) Clear exactly the intended byte range (won't nuke the whole container unless needed).
        try:
            clearListing(addr, end_addr)
        except:
            # If exact clear fails, fall back to clearing the whole container containing the range.
            if container is not None:
                try:
                    clearListing(container.getMinAddress(), container.getMaxAddress())
                except Exception as e:
                    log("Clear container failed at %s: %s" % (addr, e))
        # 2) Now create the exact data
        for _ in range(max_retries):
            try:
                createData(addr, dt)
                data = listing.getDataAt(addr)
                if data is None:
                    raise RuntimeError("No Data after createData")
                if name:
                    try: createLabel(addr, name, True)
                    except Exception as e: log("Label failed at %s: %s" % (addr, e))
                set_data_mutability_volatile(data)
                return data
            except Exception as e:
                log("CreateData (volatile) conflict at %s (%s): %s" % (addr, dt.getName(), e))
                # Last try: clear again and retry
                try: clearListing(addr, end_addr)
                except: pass
        return None

    # Non-volatile path: be conservative (don’t split existing items)
    if exact is not None:
        if name:
            try: createLabel(addr, name, True)
            except Exception as e: log("Relabel failed at %s: %s" % (addr, e))
        return exact

    if container is not None:
        # Don’t split containers for non-volatile; optionally label container start
        if name and container.getMinAddress() == addr:
            try: createLabel(addr, name, True)
            except Exception as e: log("Relabel failed at %s: %s" % (addr, e))
        return container

    # Free spot → create
    for _ in range(max_retries):
        try:
            createData(addr, dt)
            data = listing.getDataAt(addr)
            if data is None:
                raise RuntimeError("No Data after createData")
            if name:
                try: createLabel(addr, name, True)
                except Exception as e: log("Label failed at %s: %s" % (addr, e))
            return data
        except Exception as e:
            log("CreateData conflict at %s (%s): %s" % (addr, dt.getName(), e))
            return None

    return None

# ---------- Load XML ----------
xml_file = askFile("Select IDA XML file", "Apply")
doc = DocumentBuilderFactory.newInstance().newDocumentBuilder().parse(xml_file)
doc.getDocumentElement().normalize()

# ================= PASS 1: FUNCTIONS =================
func_nodes = doc.getElementsByTagName("FUNCTION")
f_updated = 0; f_skipped = 0

for i in range(func_nodes.getLength()):
    fn  = func_nodes.item(i)
    fat = fn.getAttributes()
    ep  = fat.getNamedItem("ENTRY_POINT")
    if ep is None: f_skipped += 1; continue

    ea_hex = ep.getNodeValue()
    try: ea = toAddr(int(ea_hex, 16))
    except Exception as e: log("Bad ENTRY_POINT '%s': %s" % (ea_hex, e)); f_skipped += 1; continue

    name = fat.getNamedItem("NAME").getNodeValue() if fat.getNamedItem("NAME") else None

    params = []
    regvars = fn.getElementsByTagName("REGISTER_VAR")
    for j in range(regvars.getLength()):
        pn = regvars.item(j); at = pn.getAttributes()
        p_name = at.getNamedItem("NAME").getNodeValue() if at.getNamedItem("NAME") else ("arg_%d" % j)
        p_type = at.getNamedItem("DATATYPE").getNodeValue() if at.getNamedItem("DATATYPE") else "unsigned int"
        p_regn = at.getNamedItem("REGISTER").getNodeValue() if at.getNamedItem("REGISTER") else None
        if not p_regn:
            log("No REGISTER= for %s.%s @ %s; skipping param" % (name or "func", p_name, ea_hex))
            continue
        params.append((p_name, p_type, p_regn))

    ret_nodes = fn.getElementsByTagName("RETURN_TYPE")
    ret_type = "void"; ret_reg = None
    if ret_nodes.getLength() > 0:
        at = ret_nodes.item(0).getAttributes()
        if at.getNamedItem("DATATYPE"): ret_type = at.getNamedItem("DATATYPE").getNodeValue()
        if at.getNamedItem("REGISTER"): ret_reg  = at.getNamedItem("REGISTER").getNodeValue()

    reg_cmt = text_of_first(fn.getElementsByTagName("REGULAR_CMT"))

    f = fm.getFunctionAt(ea) or fm.createFunction(name, ea, None, SourceType.USER_DEFINED)
    if name and f.getName() != name:
        try: f.setName(name, SourceType.USER_DEFINED)
        except: pass

    gh_params = []
    for (pname, ptype, preg) in params:
        try: vs = VariableStorage(prog, get_reg(preg))
        except Exception as e: log("Skip param %s @ %s: %s" % (pname, ea_hex, e)); continue
        p_dt = sanitize_param_dt(ptype, "%s.%s" % (name or "func", pname))
        gh_params.append(ParameterImpl(pname, p_dt, vs, prog, SourceType.USER_DEFINED))

    ret_dt = choose_return_dt(ret_type)
    is_void_ret = (ret_type.strip().lower() == "void")

    tx = prog.startTransaction("apply function storage @ %s" % ea_hex)
    try:
        f.setCustomVariableStorage(True)
        f.setCallingConvention("__usercall")
        f.setSignatureSource(SourceType.USER_DEFINED)
        f.replaceParameters(FUpdate.CUSTOM_STORAGE, True, SourceType.USER_DEFINED, gh_params)

        if is_void_ret:
            try: f.setReturnType(VoidDataType.dataType, SourceType.USER_DEFINED)
            except: pass
        else:
            if ret_reg:
                try:
                    ret_vs = VariableStorage(prog, get_reg(ret_reg))
                    f.setReturn(ret_dt, ret_vs, SourceType.USER_DEFINED)
                except Exception as e:
                    log("Return reg not applied for %s @ %s: %s" % (name or "func", ea_hex, e))
                    try: f.setReturnType(ret_dt, SourceType.USER_DEFINED)
                    except: pass
            else:
                try: f.setReturnType(ret_dt, SourceType.USER_DEFINED)
                except: pass

        if reg_cmt:
            try: f.setComment(reg_cmt)
            except: pass

        try: f.setSignatureLocked(True)
        except: pass

        prog.endTransaction(tx, True); f_updated += 1
    except Exception as e:
        prog.endTransaction(tx, False)
        log("Failed %s @ %s: %s" % (name or "func", ea_hex, e)); f_skipped += 1

log("Functions updated: %d, skipped: %d (from %s)" % (f_updated, f_skipped, xml_file.getName()))

# ================= PASS 2: DEFINED_DATA (MMIO) =================
dd_nodes = doc.getElementsByTagName("DEFINED_DATA")
d_updated = 0; d_skipped = 0

for i in range(dd_nodes.getLength()):
    dn = dd_nodes.item(i); at = dn.getAttributes()
    a_node = at.getNamedItem("ADDRESS"); t_node = at.getNamedItem("DATATYPE")
    if a_node is None or t_node is None: d_skipped += 1; continue

    addr_hex = a_node.getNodeValue(); type_str = (t_node.getNodeValue() or "").strip()

    try: ea = toAddr(int(addr_hex, 16))
    except Exception as e: log("Bad DEFINED_DATA ADDRESS '%s': %s" % (addr_hex, e)); d_skipped += 1; continue

    dd_name = text_of_first(dn.getElementsByTagName("TYPEINFO_CMT"))
    is_volatile = type_str.lower().startswith("volatile ")
    base_type_str = type_str
    for q in ("volatile ", "const "):
        if base_type_str.lower().startswith(q):
            base_type_str = base_type_str[len(q):].lstrip()

    # --- Core rule: DFFxxx keep XML type; CIA (BFDxxx/BFExxx) **force to byte**.
    a = int(str(ea), 16)
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
            # Default to ushort for Custom if unknown
            dt = UnsignedShortDataType.dataType

    tx = prog.startTransaction("apply DEFINED_DATA @ %s" % addr_hex)
    try:
        data = define_scalar_with_mutability(ea, dt, dd_name, make_volatile=is_volatile,
                                             force_overwrite=True, max_retries=2)
        prog.endTransaction(tx, True)
        if data is None: d_skipped += 1
        else: d_updated += 1
    except Exception as e:
        prog.endTransaction(tx, False)
        log("Failed DEFINED_DATA '%s' @ %s: %s" % (type_str, addr_hex, e)); d_skipped += 1

log("DEFINED_DATA applied: %d, skipped: %d." % (d_updated, d_skipped))
