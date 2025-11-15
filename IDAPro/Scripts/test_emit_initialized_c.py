# -*- coding: utf-8 -*-
# IDA 9.0 — Deep-debug inspector + C initializer emitter
# Target: Amiga 68k (big-endian DB; reads are endianness-aware using IDA helpers)

import idaapi
import idc
import idautils
import ida_bytes
import ida_segment
import ida_funcs
import ida_name
import ida_kernwin
import ida_nalt
import ida_typeinf as tif

# ==============================
# CONFIG
# ==============================

SYMBOLS = [
    "aEngland",
    "fadeShiftMaskTable",
    "alreadyScoredTable",
    "audioChannel0",
    "newJobOffers",
    "big_S_Sprite",
    "advertInGameSprites",
    "keyDelay",
    "all_countries_list",
    "allSpritesArray",
    "word_11B566",
    "team1SpritesTable",
    "g_tacticsTable",
    "pitchFansConvertTable",
    "pitchTypeProbabilities",
    "shortCountryNames",
]

PTR_NAME_BLACKLIST = {"initial_sp"}  # ignore when detecting ptr->string tables
DEFAULT_UNSIGNED_STYLE = "hex"       # "hex" or "dec"

FORMAT_POLICY = {
    # "direction": "dec",
    # "cards": "dec",
}

# ==============================
# Basic helpers (debug/inspect)
# ==============================

def INF():
    try:
        return idaapi.get_inf()
    except Exception:
        try:
            return idaapi.cvar.inf
        except Exception:
            return None

def be_flag_from_ida():
    inf = INF()
    if not inf:
        return False
    try:
        return bool(inf.is_be())
    except Exception:
        try:
            pn = getattr(inf, "procname", "") or ""
            return "68" in pn or "m68" in pn or "680" in pn
        except Exception:
            return False

def get_name_at(ea):
    try:
        nm = ida_name.get_name(ea)
        if nm:
            return nm
    except Exception:
        pass
    try:
        nm = idc.get_name(ea)
        if nm:
            return nm
    except Exception:
        pass
    return ""

def resolve_ea_by_name(sym):
    # 1) fast path: IDA's simple lookup
    ea = idc.get_name_ea_simple(sym)
    if ea != idc.BADADDR:
        return ea

    # 2) broader resolver (works for some cases get_name_ea_simple misses)
    try:
        import ida_name
        ea2 = ida_name.get_name_ea(idc.BADADDR, sym)
        if ea2 is not None and ea2 != idc.BADADDR:
            return ea2
    except Exception:
        pass

    # 3) fallback: scan Names() (case-sensitive then case-insensitive)
    for nea, nm in idautils.Names():
        if nm == sym:
            return nea
    sym_l = sym.lower()
    for nea, nm in idautils.Names():
        if nm.lower() == sym_l:
            return nea

    return idc.BADADDR

def is_function(ea):
    try:
        return ida_funcs.get_func(ea) is not None
    except Exception:
        return False

def get_item_size_or_bound(ea):
    sz = ida_bytes.get_item_size(ea)
    if sz and sz > 0:
        return sz
    seg = ida_segment.getseg(ea)
    if not seg:
        return 1
    end = seg.end_ea
    best = end
    for nea, _ in idautils.Names():
        if nea > ea and nea < best and ida_segment.getseg(nea) == seg:
            best = nea
    span = max(1, min(best - ea, 0x40000))
    return span

def item_unit_width(ea):
    f = ida_bytes.get_flags(ea)
    if ida_bytes.is_strlit(f):   return 1
    if ida_bytes.is_byte(f):     return 1
    if ida_bytes.is_word(f):     return 2
    if ida_bytes.is_dword(f):    return 4
    return 0

def hex_n(v, nbytes):
    return f"0x{v:0{nbytes*2}X}"

def read_u8(ea):
    v = ida_bytes.get_byte(ea)
    return v if v is not None else 0

def read_u16(ea):
    v = idc.get_wide_word(ea)
    return v if v is not None else 0

def read_u32(ea):
    v = idc.get_wide_dword(ea)
    return v if v is not None else 0

def read_uptr(ea, w):
    return read_u32(ea) if w >= 4 else read_u16(ea)

def region_is_fill(ea, size):
    if size <= 0:
        return (False, None)
    first = ida_bytes.get_byte(ea)
    if first is None:
        return (False, None)
    for i in range(1, size):
        b = ida_bytes.get_byte(ea + i)
        if b is None or b != first:
            return (False, None)
    return (True, first)

def hexdump(ea, n):
    bs = []
    for i in range(n):
        b = ida_bytes.get_byte(ea + i)
        if b is None:
            break
        bs.append(f"{b:02x}")
    return "".join(bs)

def looks_like_c_string(ea, maxlen=256):
    if not ida_bytes.is_loaded(ea):
        return False
    got_printable = False
    for i in range(maxlen):
        b = ida_bytes.get_byte(ea+i)
        if b is None:
            return False
        if b == 0:
            return got_printable
        if 32 <= b <= 126 or b == 9 or 160 <= b <= 255:
            got_printable = True
        else:
            return False
    return False

def auto_name_string_target(tgt):
    nm = ida_name.get_name(tgt)
    if nm:
        return nm
    if looks_like_c_string(tgt):
        suggested = f"asc_{tgt:06X}"
        ida_name.set_name(tgt, suggested, ida_name.SN_CHECK)
        nm = ida_name.get_name(tgt)
        return nm or suggested
    return ""

def parse_decl_array(cdecl):
    if not cdecl:
        return ('', 0)
    t = cdecl.strip()
    if t.startswith("struct "):
        t = t[7:].strip()
    if t.startswith("class "):
        t = t[6:].strip()
    if '[' in t and t.endswith(']'):
        base, suf = t.split('[', 1)
        suf = suf[:-1]
        try:
            n = int(suf, 0)
            return (base.strip(), n if n >= 0 else 0)
        except Exception:
            return ('', 0)
    return ('', 0)

def is_decl_stringy_char_array(cdecl: str) -> bool:
    if not cdecl:
        return False
    lc = cdecl.lower()
    # very tolerant: handles "char [N]", "const char [N]", "unsigned char [N]", etc.
    # also avoids false positives like "CountryNumbers[66]"
    has_char = ("char" in lc) and ("country" not in lc)
    return has_char

def try_emit_enum_array_with_initializers(ea, name):
    """If the symbol at ea is typed as an enum array, emit full brace-init
       using the *physical* element width (1/2/4) derived from memory size.
       Returns a string on success, or None if not applicable."""
    mt = tif.tinfo_t()
    if not ida_nalt.get_tinfo(mt, ea):
        return None
    if not mt.is_array():
        return None

    atd = tif.array_type_data_t()
    if not mt.get_array_details(atd):
        return None

    elem_tif = atd.elem_type
    if not elem_tif.is_enum():
        return None

    nelems = atd.nelems
    # Total bytes defined by IDA for the data item at 'ea'
    total = ida_bytes.get_item_size(ea)
    if not total or nelems <= 0:
        return None

    # Determine the *physical* stride from memory (not the enum's logical size).
    # Only proceed if this looks sane.
    if total % nelems != 0:
        return None
    phys_stride = total // nelems
    if phys_stride not in (1, 2, 4, 8):
        return None

    # Build value -> name map from enum details (no ida_enum usage).
    einfo = ida_typeinf.enum_type_data_t()
    if not elem_tif.get_enum_details(einfo):
        return None

    val_to_name = {}
    for cidx, gstart, gsize in einfo.all_constants():  # skips masks
        edm = einfo[cidx]
        v = int(edm.value)
        if v not in val_to_name:
            val_to_name[v] = edm.name

    # Emit elements, reading with the *physical* stride so bytes map correctly.
    parts = []
    cur = ea
    for _ in range(nelems):
        bs = ida_bytes.get_bytes(cur, phys_stride) or b"\x00" * phys_stride
        uv = int.from_bytes(bs, "big", signed=False)
        nm = val_to_name.get(uv)
        if nm:
            parts.append(nm)
        else:
            # If no symbol matches, fall back to a width-appropriate hex literal.
            parts.append(fmt_hex(uv, phys_stride))
        cur += phys_stride

    etname = elem_tif.get_type_name() or "/* enum */ int"
    return f"{etname} {name}[{nelems}] = {{ " + ", ".join(parts) + " }};"

def c_escape(bs):
    out = []
    for b in bs:
        if b == 0x5C:   out.append("\\\\")   # \
        elif b == 0x22: out.append("\\\"")   # "
        elif b == 0x09: out.append("\\t")
        elif b == 0x0A: out.append("\\n")
        elif b == 0x0D: out.append("\\r")
        elif 32 <= b <= 126:
            out.append(chr(b))
        else:
            out.append(f"\\x{b:02X}")
    return "".join(out)

# ==============================
# Ptr->string table detection (generic)
# ==============================

def detect_ptr_string_table(ea, total, verbose=False, label="ptr_str_tab"):
    logs = []
    if total < 4 or (total % 4) != 0:
        return (False, 0, 0, logs)
    count = total // 4
    shown = min(count, 16)
    all_resolve = True
    nonzero = 0
    for i in range(count):
        tgt = read_uptr(ea + i*4, 4)
        nm = get_name_at(tgt)
        isstr = looks_like_c_string(tgt)
        ok = False
        if tgt != 0:
            nonzero += 1
            if nm and nm not in PTR_NAME_BLACKLIST:
                ok = True
            elif isstr:
                ok = True
        if not ok:
            all_resolve = False
        if i < shown or verbose:
            logs.append(f"    [{label}] idx={i:02d} raw={hex_n(tgt,4)} tgt=0x{tgt:X} name='{nm}' str={isstr}")
    ok3 = 0
    for i in range(min(3, count)):
        tgt = read_uptr(ea + i*4, 4)
        nm = get_name_at(tgt)
        if tgt != 0 and nm and nm not in PTR_NAME_BLACKLIST:
            ok3 += 1
        elif tgt != 0 and looks_like_c_string(tgt):
            ok3 += 1
    dense = nonzero >= max(1, count - 1)
    ok = all_resolve or (dense and ok3 >= 2)
    return (ok, 4, count, logs)

# ==============================
# Struct/array emitter core
# ==============================

def be_bytes(ea, size):
    bs = ida_bytes.get_bytes(ea, size)
    if not bs or len(bs) != size:
        return None
    return int.from_bytes(bs, "big", signed=False)

def be_signed(value, bits):
    sign_bit = 1 << (bits - 1)
    mask = (1 << bits) - 1
    v = value & mask
    return v - (1 << bits) if (v & sign_bit) else v

def hex_width_for_size(sz):
    return {1: 2, 2: 4, 4: 8, 8: 16}.get(sz, 0)

def fmt_hex(uv, sz):
    w = hex_width_for_size(sz)
    return f"0x{uv:0{w}X}" if w else f"0x{uv:X}"

def get_local_type_qtypes_by_ordinal(type_name):
    til = tif.get_idati()
    if not til:
        raise RuntimeError("Could not get local type library (idati).")
    ordno = tif.get_type_ordinal(til, type_name)
    if ordno != 0:
        res = tif.get_numbered_type(til, ordno)
        if not res:
            raise RuntimeError(f"get_numbered_type failed for '{type_name}' (ord {ordno}).")
        type_qt = res[0]
        fields_qt = res[1] if len(res) > 1 else None
        return til, type_qt, fields_qt
    res = tif.get_named_type(til, type_name, 1)
    if not res:
        raise RuntimeError(f"Type '{type_name}' not found in Local Types (flags=1).")
    if isinstance(res, tuple):
        try:
            type_qt = res[0]
            fields_qt = res[1] if len(res) > 1 else None
            return til, type_qt, fields_qt
        except Exception:
            pass
    tinfo = tif.tinfo_t()
    if not tif.parse_decl(tinfo, til, str(res), tif.PT_SIL):
        raise RuntimeError(f"Found '{type_name}', but failed to parse decl text.")
    type_qt = tif.qtype()
    fields_qt = tif.qtype()
    if not tinfo.serialize(type_qt, fields_qt, None, tif.SER_FULL):
        raise RuntimeError("Failed to serialize parsed tinfo to qtypes.")
    return til, type_qt, fields_qt

def deserialize_tinfo(til, type_qt, fields_qt):
    tinfo = tif.tinfo_t()
    ok = tinfo.deserialize(til, type_qt, fields_qt) if fields_qt is not None else tinfo.deserialize(til, type_qt)
    if not ok:
        raise RuntimeError("Failed to deserialize tinfo_t from qtypes.")
    return tinfo

def iter_struct_members(tinfo):
    if not tinfo.is_udt():
        raise RuntimeError("Type is not a UDT/struct.")
    utd = tif.udt_type_data_t()
    if not tinfo.get_udt_details(utd):
        raise RuntimeError("Failed to get UDT details.")
    for m in utd:
        name = m.name or ""
        mtif = m.type
        off_bytes = m.offset // 8
        yield name, mtif, off_bytes

def is_union(tinfo):
    return tinfo.is_union()

def detect_symbol_array_count(struct_name, symbol_name):
    ea = idc.get_name_ea_simple(symbol_name)
    if ea == idc.BADADDR:
        return None
    mt = tif.tinfo_t()
    if not ida_nalt.get_tinfo(mt, ea):
        return None
    if mt.is_array():
        atd = tif.array_type_data_t()
        if mt.get_array_details(atd):
            if atd.elem_type.is_udt():
                return atd.nelems
    return None

def char_literal(ea):
    b = ida_bytes.get_byte(ea)
    if b is None:
        return "'\\0'"
    if 32 <= b <= 126 and b not in (34, 92):
        return f"'{chr(b)}'"
    if b == 0:
        return "'\\0'"
    return f"'\\x{b:02X}'"

# ---- IDA 9.0-safe enum name resolver (no ida_enum) ----
def _enum_member_name_by_value(eid, value):
    bads = {None, getattr(idc, "BADADDR", None), getattr(idaapi, "BADADDR", None)}
    fn = getattr(idc, "get_enum_member_by_value", None)
    if fn:
        try:
            try:
                cid = fn(eid, value, 0, -1)
            except TypeError:
                cid = fn(eid, value, 0)
            if cid not in bads:
                nfn = getattr(idc, "get_enum_member_name", None)
                if nfn:
                    nm = nfn(cid)
                    if nm:
                        return nm
        except Exception:
            pass
    fn = getattr(idc, "GetEnumMemberByValue", None)
    if fn:
        try:
            try:
                cid = fn(eid, value, 0, -1)
            except TypeError:
                cid = fn(eid, value, 0)
            if cid not in bads:
                nfn = getattr(idc, "GetEnumMemberName", None)
                if nfn:
                    nm = nfn(cid)
                    if nm:
                        return nm
        except Exception:
            pass
    return None

def enum_literal_or_value(mtif, ea, member_name=None):
    sz = mtif.get_size()
    uv = be_bytes(ea, sz)
    if uv is None:
        return "0"
    eid = None
    try:
        eid = mtif.get_enum_id()
    except Exception:
        eid = None
    bads = {None, getattr(idc, "BADADDR", None), getattr(idaapi, "BADADDR", None)}
    if eid not in bads:
        nm = _enum_member_name_by_value(eid, uv)
        if nm:
            return nm
    policy = FORMAT_POLICY.get(member_name) if member_name else None
    if sz == 1:
        if policy == "dec": return str(uv)
        if policy == "hex": return fmt_hex(uv, sz)
        return char_literal(ea)
    if policy == "dec": return str(uv)
    if policy == "hex": return fmt_hex(uv, sz)
    return fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)

def int_literal_hex_or_signed(mtif, ea, member_name=None):
    sz = mtif.get_size()
    if sz == 1:
        return char_literal(ea)
    uv = be_bytes(ea, sz)
    if uv is None:
        return f"/* int{sz*8} read failed */ 0"
    policy = FORMAT_POLICY.get(member_name) if member_name else None
    if mtif.is_signed():
        sv = be_signed(uv, sz * 8)
        if policy == "hex": return fmt_hex(uv, sz)
        if policy == "dec" or policy is None: return str(sv)
    if policy == "hex": return fmt_hex(uv, sz)
    if policy == "dec": return str(uv)
    return fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)

def read_value_as_c_literal(mtif, ea, member_name=None):
    if mtif.is_ptr():
        v = be_bytes(ea, 4)
        if v is None:
            return "/* ptr read failed */ 0"
        try:
            pto = mtif.get_pointed_object()
            tname = pto.get_type_name() or "void"
        except Exception:
            tname = "void"
        if v == 0:          return f"({tname}*)0"
        if v == 0xFFFFFFFF: return f"({tname}*)-1"
        return f"({tname}*)0x{v:08X}"
    if mtif.is_array():
        atd = tif.array_type_data_t()
        if not mtif.get_array_details(atd):
            size = mtif.get_size()
            bs = ida_bytes.get_bytes(ea, size) or b""
            hexes = ", ".join(f"0x{b:02X}" for b in bs)
            return "{ " + hexes + " }"
        elem_tif = atd.elem_type
        nelems = atd.nelems
        elem_sz = elem_tif.get_size()
        parts = []
        for i in range(nelems):
            parts.append(read_value_as_c_literal(elem_tif, ea + i * elem_sz, member_name))
        return compress_zero_array_literals(parts)
    if mtif.is_enum():
        return enum_literal_or_value(mtif, ea, member_name)
    if mtif.is_int():
        return int_literal_hex_or_signed(mtif, ea, member_name)
    if mtif.is_floating():
        sz = mtif.get_size()
        bs = ida_bytes.get_bytes(ea, sz)
        if not bs or len(bs) != sz:
            return "0.0"
        import struct
        if sz == 4:
            v = struct.unpack(">f", bs)[0]
        elif sz == 8:
            v = struct.unpack(">d", bs)[0]
        else:
            return f"/* unsupported float size {sz} */ 0.0"
        return repr(v)
    if mtif.is_udt():
        if is_union(mtif):
            sz = mtif.get_size()
            uv = be_bytes(ea, sz)
            if uv is None:
                return "{ 0 }"
            if sz == 4:
                sv = be_signed(uv, 32)
                return f"{{ {sv} }}"
            return "{ " + (fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)) + " }"
        else:
            parts = []
            for sub_name, sub_tif, sub_off in iter_struct_members(mtif):
                parts.append(read_value_as_c_literal(sub_tif, ea + sub_off, sub_name or member_name))
            return "{ " + ", ".join(parts) + " }"
    size = mtif.get_size()
    bs = ida_bytes.get_bytes(ea, size) or b""
    hexes = ", ".join(f"0x{b:02X}" for b in bs)
    return "{ " + hexes + " }"

def emit_instance_body(struct_name, ea):
    til, type_qt, fields_qt = get_local_type_qtypes_by_ordinal(struct_name)
    mtinfo = deserialize_tinfo(til, type_qt, fields_qt)
    if not (mtinfo.is_struct() or mtinfo.is_udt()):
        raise RuntimeError(f"'{struct_name}' is not a struct/UDT.")
    lines = []
    for name, sub_tif, off_b in iter_struct_members(mtinfo):
        member_ea = ea + off_b
        val = read_value_as_c_literal(sub_tif, member_ea, name)
        comment = f" // {name} @+0x{off_b:X}" if name else f" // @+0x{off_b:X}"
        lines.append(f"    {val},{comment}")
    return "\n".join(lines), mtinfo.get_size()

def emit_variable(struct_name, symbol_name, count_hint=None):
    base_ea = idc.get_name_ea_simple(symbol_name)
    if base_ea == idc.BADADDR:
        return f"// ERROR: symbol '{symbol_name}' not found\n"
    detected = detect_symbol_array_count(struct_name, symbol_name)
    count = detected if detected and detected > 0 else (count_hint or 1)
    body0, struct_size = emit_instance_body(struct_name, base_ea)
    if count == 1:
        return f"{struct_name} {symbol_name} = {{\n{body0}\n}};\n"
    elems = []
    for i in range(count):
        elem_ea = base_ea + i * struct_size
        body_i, _ = emit_instance_body(struct_name, elem_ea)
        elems.append("  {\n" + body_i + "\n  }," + f" // [{i}] @ 0x{elem_ea:X}")
    return f"{struct_name} {symbol_name}[{count}] = {{\n" + "\n".join(elems) + "\n};\n"

def compress_zero_array_literals(parts):
    if not parts:
        return "{ 0 }"
    if all(p == "0" for p in parts) or all(p == "'\\0'" for p in parts):
        return "{ 0 }"
    return "{ " + ", ".join(parts) + " }"

def _ctype_name_for_tinfo(mtif):
    tn = ""
    try:
        tn = mtif.get_type_name() or ""
    except Exception:
        tn = ""
    if tn:
        return tn
    # Fallback mapping for common ints/floats when no name is available
    if mtif.is_int():
        sz = mtif.get_size()
        if mtif.is_signed():
            return {1:"int8_t",2:"int16_t",4:"int32_t",8:"int64_t"}.get(sz, "int")
        else:
            return {1:"uint8_t",2:"uint16_t",4:"uint32_t",8:"uint64_t"}.get(sz, "unsigned int")
    if mtif.is_floating():
        return "double" if mtif.get_size() == 8 else "float"
    return "uint8_t"

def emit_array_initialized(ea, elem_tif, nelems):
    parts = []
    elem_sz = elem_tif.get_size()
    cur = ea
    for _ in range(nelems):
        parts.append(read_value_as_c_literal(elem_tif, cur))
        cur += elem_sz
    return "{ " + ", ".join(parts) + " }"

# ==============================
# Emit helpers for simple scalars/blobs
# ==============================

def emit_scalar_debug(var, ea, width):
    if width == 1:
        return f"uint8_t {var} = {hex_n(read_u8(ea),1)};"
    elif width == 2:
        return f"uint16_t {var} = {hex_n(read_u16(ea),2)};"
    else:
        return f"uint32_t {var} = {hex_n(read_u32(ea),4)};"

def emit_zero_array_debug(var, size):
    return f"char {var}[{size}];"

def emit_uintN_array_decl(var, total, unit):
    cnt = total // unit
    cty = {1:"uint8_t",2:"uint16_t",4:"uint32_t"}[unit]
    return f"{cty} {var}[{cnt}];"

def emit_uint8_blob_debug(var, ea, size):
    vals = [hex_n(read_u8(ea+i),1) for i in range(size)]
    return f"uint8_t {var}[{size}] = {{ {', '.join(vals)} }};"

# ==============================
# Inspect + emit one symbol (generic only)
# ==============================

def report_symbol(ea, name):
    if ea == idc.BADADDR:
        print(f"!!! Symbol {name} not found")
        return

    seg = ida_segment.getseg(ea)
    segname = ida_segment.get_segm_name(seg) if seg else None
    isfunc = is_function(ea)
    flags = ida_bytes.get_flags(ea)
    total = get_item_size_or_bound(ea)
    unit = item_unit_width(ea)
    is_be_now = be_flag_from_ida()

    print(f"\n=== {name} @ 0x{ea:X} ===")
    print(f"  segment     : {segname}")
    print(f"  is_function : {isfunc}")
    print(f"  flags       : 0x{flags:X}")
    print(f"  item_size   : {total}")
    print(f"  endian      : {'big' if is_be_now else 'little'}")

    cdecl = idc.get_type(ea) or ''
    print(f"  tinfo       : {cdecl}")

    elem_from_decl, n_from_decl = parse_decl_array(cdecl)
    is_array_mem = (unit in (1,2,4)) and (total > unit) and ((total % unit) == 0)
    print(f"  is_array    : {bool(n_from_decl) or is_array_mem}")
    if n_from_decl:
        print(f"  elem_from_decl : '{elem_from_decl}'  len={n_from_decl}")

    print(f"  hexdump[0:16]: {hexdump(ea, 16)}")
    print(f"  strlit? {'yes' if looks_like_c_string(ea) else 'no'}")

    isfill, fb = region_is_fill(ea, total)
    print(f"  is_fill     : {isfill} byte={'-' if fb is None else fb}")

    # Decide if we should even attempt ptr->string table detection.
    # If IDA already says this is a typed array whose element type is NOT a pointer,
    # then skip the heuristic to avoid false-positives (e.g., __int8[20]).
    mt_for_ptrtab = tif.tinfo_t()
    have_tinfo_for_ptrtab = ida_nalt.get_tinfo(mt_for_ptrtab, ea)
    skip_ptrtab = False
    if have_tinfo_for_ptrtab and mt_for_ptrtab.is_array():
        atd_tmp = tif.array_type_data_t()
        if mt_for_ptrtab.get_array_details(atd_tmp):
            elem_tif_tmp = atd_tmp.elem_type
            if not elem_tif_tmp.is_ptr():
                skip_ptrtab = True

    if not skip_ptrtab:
        ok_ptrtab, pw, pcount, ptrlogs = detect_ptr_string_table(ea, total, verbose=True, label=name)
        print(f"  ptr_str_tab : {ok_ptrtab} (w={pw}, count={pcount})")
        for line in ptrlogs:
            print(line)
    else:
        ok_ptrtab, pw, pcount = (False, 0, 0)
        print(f"  ptr_str_tab : skipped (typed non-pointer array)")

    print("  candidate_emission:")

    # ---- NEW (revised): emit clean C string only if type is char[] or no type ----
    cdecl = idc.get_type(ea) or ''
    typed_char_array = is_decl_stringy_char_array(cdecl)

    if looks_like_c_string(ea) and (typed_char_array or not cdecl):
        # find first NUL within 'total'
        end = 0
        while end < total:
            b = ida_bytes.get_byte(ea + end)
            if b is None:
                break
            if b == 0:
                break
            end += 1
        if end < total:  # NUL found inside the item span
            raw = ida_bytes.get_bytes(ea, end) or b""
            text = c_escape(raw)
            print(f'    const char {name}[] = "{text}";')
            return
    # ---- END revised string path ----
    
    # Try enum-array brace initializer (e.g., CountryNumbers[66])
    enum_arr_decl = try_emit_enum_array_with_initializers(ea, name)
    if enum_arr_decl:
        print(f"    {enum_arr_decl}")
        return

    # 2) Pointer-to-string table (typed if possible)
    if (not skip_ptrtab) and ok_ptrtab and pw == 4:
        # Determine pointer element decl/type if we have tinfo
        elem_decl = "char *"  # fallback for truly untyped tables
        pto_tif = None
        if have_tinfo_for_ptrtab and mt_for_ptrtab.is_array():
            atd_tmp = tif.array_type_data_t()
            if mt_for_ptrtab.get_array_details(atd_tmp):
                elem_tif_tmp = atd_tmp.elem_type
                if elem_tif_tmp.is_ptr():
                    try:
                        pto_tif = elem_tif_tmp.get_pointed_object()
                        base = _ctype_name_for_tinfo(pto_tif) or "void"
                        elem_decl = f"{base} *"
                    except Exception:
                        elem_decl = "void *"

        def _points_to_plain_char(pto):
            """True if pointed-to type is exactly 'char' or 'const char' (for char* tables)."""
            if not pto:
                return False
            try:
                tn = (pto.get_type_name() or "").strip().lower()
                # accept 'char' or 'const char' forms
                return tn == "char" or tn == "const char"
            except Exception:
                return False

        items = []
        cur = ea
        cnt = len(items)
        for _ in range(cnt):
            tgt = read_uptr(cur, 4)
            nm  = idc.get_name(tgt)

            if tgt == 0 or (nm and nm in PTR_NAME_BLACKLIST):
                items.append("0")
            else:
                if nm:
                    if pto_tif:  # we know the pointed type from the array's element type
                        if _points_to_plain_char(pto_tif):
                            # true char* table → symbol name is fine (array decays to pointer)
                            items.append(nm)
                        else:
                            # NOT char* → always take address-of the object/UDT
                            items.append(f"&{nm}")
                    else:
                        # Unknown pointed type (rare): only fall back to string heuristic if we must
                        items.append(nm if looks_like_c_string(tgt) else f"&{nm}")
                else:
                    base = _ctype_name_for_tinfo(pto_tif) if pto_tif else "void"
                    items.append(f"({base}*)0x{tgt:08X}")

            cur += 4

        print(f"    {elem_decl} {name}[{pcount}] = {{ {', '.join(items)} }};")
        return

    # 3) If we have proper tinfo, emit by type (generic for all cases)
    mt = tif.tinfo_t()
    have_tinfo = ida_nalt.get_tinfo(mt, ea)

    if have_tinfo:
        # Array types (covers enums, ints, floats, pointers, UDT arrays)
        if mt.is_array():
            atd = tif.array_type_data_t()
            if mt.get_array_details(atd):
                elem_tif = atd.elem_type
                nelems = atd.nelems
                elem_cty = _ctype_name_for_tinfo(elem_tif)

                if elem_tif.is_udt():
                    # Emit full brace-initialized struct array at symbol address
                    struct_name = elem_cty
                    decl = emit_variable(struct_name, name, nelems)
                    for ln in decl.splitlines():
                        print("    " + ln if ln and not ln.startswith("//") else "    " + ln)
                    return

                # Non-UDT array: emit full initialized array
                body = emit_array_initialized(ea, elem_tif, nelems)
                print(f"    {elem_cty} {name}[{nelems}] = {body};")
                return

        # Single UDT at symbol
        if mt.is_udt():
            struct_name = _ctype_name_for_tinfo(mt)
            decl = emit_variable(struct_name, name, 1)
            for ln in decl.splitlines():
                print("    " + ln if ln and not ln.startswith("//") else "    " + ln)
            return

    # 4) Fallbacks (keep your previous heuristics intact)

    if elem_from_decl and n_from_decl:
        print(f"    {elem_from_decl} {name}[{n_from_decl}];")
        return

    if isfill and fb == 0:
        # Single element of native width? Emit as a scalar instead of a zero array.
        if unit in (1, 2, 4) and total == unit:
            print(f"    {emit_scalar_debug(name, ea, unit)}")
        else:
            print(f"    {emit_zero_array_debug(name, total)}")
        return

    if isfill and fb == 0xFF:
        if unit in (1,2,4) and (total % unit) == 0:
            print(f"    {emit_uintN_array_decl(name, total, unit)}")
        else:
            print(f"    uint8_t {name}[{total}];")
        return

    if unit in (1,2,4):
        if total == unit:
            print(f"    {emit_scalar_debug(name, ea, unit)}")
            return
        if (total % unit) == 0:
            print(f"    {emit_uintN_array_decl(name, total, unit)}")
            return

    print(f"    {emit_uint8_blob_debug(name, ea, total)}")

# ==============================
# main
# ==============================

def main():
    print("[emit-debug] Inspecting symbols")
    for sym in SYMBOLS:
        ea = resolve_ea_by_name(sym)
        report_symbol(ea, sym)
    print("\n[emit-debug] Done.")

if __name__ == "__main__":
    main()
