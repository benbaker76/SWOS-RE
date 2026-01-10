# -*- coding: utf-8 -*-
# IDA 9.0 — Emit C initializers for ALL data symbols (arrays, enums, structs, scalars)
# Target: Amiga 68k (big-endian)
#
# Key features:
# - Walks all non-function named symbols; writes one .c file chosen via save dialog (default name: Data.c)
# - Big-endian aware reads (uses IDA helpers)
# - Strings: strict heuristics (emit only if typed as char[] or no type, and clear NUL found)
# - Enums: prints enum member names via enum_type_data_t (no ida_enum)
# - Arrays: emits full brace-initializers; pointer arrays resolve names or typed hex; enum arrays by names
# - Structs/UDTs: member-wise emission with nested UDTs & unions supported
# - UDT recovery by symbol suffix (e.g., .*Sprite$ -> Sprite) for lost types
#
# Safe for IDA 9.x.

import os
import re
import idaapi
import idc
import idautils
import ida_bytes
import ida_funcs
import ida_segment
import ida_kernwin
import ida_nalt
import ida_ida
import os.path as _osp
import ida_typeinf as tif
import ida_name

DEFAULT_OUT_NAME = "Data.c"

# ==============================
# CONFIG
# ==============================

# Optional formatting overrides by member name
DEFAULT_UNSIGNED_STYLE = "hex"  # "hex" or "dec"
FORMAT_POLICY = {
    # "direction": "dec",
    # "cards": "dec",
}

HEX_MINIMAL = True   # True => 0x70, 0x20000, 0xA00; False => 0x0070, 0x00020000, 0x0A00

# Only emit symbols that live in these segments.
# Use an empty set/list to allow all segments.
INCLUDE_SEGMENTS = {"CHIP_RAM"}

STRUCT_COMMENT_AND_NEWLINE = False  # True => per-field lines + /* name @+offset */, False => compact inline

EMIT_LEADING_COMMENTS = True

PREFER_IDA_RADIX_FOR_UNTYPED_ARRAYS = True
PREFER_IDA_RADIX_FOR_FALLBACK_SCALARS = True
PREFER_IDA_RADIX_FOR_TYPED_UNSIGNED_INTS = True

_HEX_TOKEN_RE = re.compile(r'(\$|0x|\b[0-9A-F]+h\b)', re.IGNORECASE)

# Ordered longest-first to avoid partial matches
_TYPE_REWRITES = [
    # __intN (MSVC/IDA)
    (r"\bunsigned\s+__int8\b",  "uint8_t"),
    (r"\bsigned\s+__int8\b",    "int8_t"),
    (r"\b__int8\b",             "int8_t"),

    (r"\bunsigned\s+__int16\b", "uint16_t"),
    (r"\bsigned\s+__int16\b",   "int16_t"),
    (r"\b__int16\b",            "int16_t"),

    (r"\bunsigned\s+__int32\b", "uint32_t"),
    (r"\bsigned\s+__int32\b",   "int32_t"),
    (r"\b__int32\b",            "int32_t"),

    (r"\bunsigned\s+__int64\b", "uint64_t"),
    (r"\bsigned\s+__int64\b",   "int64_t"),
    (r"\b__int64\b",            "int64_t"),

    # Sometimes shows up
    (r"\bunsigned\s+__int128\b", "unsigned __int128"),  # keep unless you want __int128_t typedefs
    (r"\b__int128\b",            "__int128"),
]

# ==============================
# Endianness / basic helpers
# ==============================

def normalize_ida_cdecl_types(cdecl: str) -> str:
    """
    Rewrite IDA/MSVC integer base types in a C declarator to stdint.h types.
    Intentionally does NOT rewrite 'char' or 'unsigned char' to avoid string/pointer heuristics side effects.
    """
    if not cdecl:
        return cdecl

    out = cdecl
    for pat, repl in _TYPE_REWRITES:
        out = re.sub(pat, repl, out, flags=re.IGNORECASE)
    return out

def _ida_decl_for_symbol(ea: int, name: str):
    cdecl = (idc.get_type(ea) or "").strip()
    if not cdecl:
        return None

    if cdecl.endswith(";"):
        cdecl = cdecl[:-1].rstrip()

    if name in cdecl:
        return normalize_ida_cdecl_types(cdecl)

    injected = re.sub(r"\(\s*\*\s*\)", f"(*{name})", cdecl, count=1)
    if injected != cdecl:
        return normalize_ida_cdecl_types(injected)

    if "[" in cdecl or "]" in cdecl:
        return None

    return normalize_ida_cdecl_types(f"{cdecl} {name}")

def _char_array_decl_prefix_from_cdecl(ea: int) -> str:
    cdecl = (idc.get_type(ea) or "").lower()
    return "const char" if "const" in cdecl else "char"

def _array_elem_ctype_override_from_cdecl(ea: int):
    """
    If the *symbol's* C decl clearly indicates it's an array of (const) char*,
    prefer that over tinfo-derived int8_t* etc.
    Returns "const char *", "char *", or None.
    """
    cdecl = idc.get_type(ea) or ""
    if not cdecl:
        return None

    lc = cdecl.lower()
    # must look like an array-of-pointers declaration
    if "[" not in lc or "]" not in lc or "*" not in lc:
        return None

    # Normalize common const char spellings: "const char", "char const"
    if ("const char" in lc) or ("char const" in lc):
        return "const char *"
    if "char" in lc:
        return "char *"

    return None

def _ptr_cast_for_tinfo(ptr_tif) -> str:
    """
    Return a cast string for a pointer tinfo, e.g. "(uint8_t*)".
    Falls back safely to "(void*)".
    """
    try:
        cty = _ctype_name_for_tinfo(ptr_tif)  # e.g. "uint8_t *"
        return "(" + cty.replace(" ", "") + ")"  # "(uint8_t*)"
    except Exception:
        return "(void*)"

def _ptr_literal(ptr_tif, v: int) -> str:
    """
    Format a raw 32-bit pointer value as a C pointer literal.
    - If value is negative in signed 32-bit, emit cast + signed decimal (sentinels).
    - Otherwise emit cast + hex address.
    """
    if v == 0:
        return "0"

    cast = _ptr_cast_for_tinfo(ptr_tif)

    # Interpret as signed 32-bit if high bit is set (e.g. 0xFFFFFFFE -> -2)
    if v & 0x80000000:
        sv = be_signed(v, 32)
        return f"{cast}{sv}"

    return f"{cast}{fmt_hex(v, 4)}"

def _symbol_is_array(ea: int) -> bool:
    mt = tinfo_at(ea)
    if mt and mt.is_array():
        return True
    cdecl = idc.get_type(ea) or ""
    # crude but effective fallback
    return ("[" in cdecl and "]" in cdecl and "*" not in cdecl)

def _ida_line(ea: int) -> str:
    try:
        # Remove tags so regex won't get confused by color codes
        s = idc.generate_disasm_line(ea, 0) or ""
        return idaapi.tag_remove(s)
    except Exception:
        return ""

def _ida_prefers_hex_at_ea(ea: int) -> bool:
    line = _ida_line(ea)
    # If IDA renders any obvious hex tokens on the line, assume hex.
    return bool(_HEX_TOKEN_RE.search(line))

def _preferred_unsigned_style_for_ea(ea: int) -> str:
    # fall back to DEFAULT_UNSIGNED_STYLE if we can't confidently infer
    try:
        return "hex" if _ida_prefers_hex_at_ea(ea) else "dec"
    except Exception:
        return DEFAULT_UNSIGNED_STYLE

def _infer_elem_size_from_flags(ea: int):
    """
    Infer the element width IDA assigned at EA (byte/word/dword/qword).
    This works even when the item is an "array-sized" blob but lacks tinfo.
    """
    f = ida_bytes.get_flags(ea)
    if ida_bytes.is_qword(f):
        return 8
    if ida_bytes.is_dword(f):
        return 4
    if ida_bytes.is_word(f):
        return 2
    if ida_bytes.is_byte(f):
        return 1
    return None

def _ctype_for_inferred_elem_size(sz: int):
    return {1: "uint8_t", 2: "uint16_t", 4: "uint32_t", 8: "uint64_t"}.get(sz)

def _try_emit_untyped_numeric_array_by_flags(fh, ea: int, name: str, total: int) -> bool:
    """
    If there is no tinfo array type, but IDA's flags indicate word/dword/qword data,
    emit a typed array rather than a uint8_t byte blob.
    """
    esz = _infer_elem_size_from_flags(ea)
    if not esz:
        return False
    if total % esz != 0:
        return False
    count = total // esz
    if count <= 1:
        return False

    cty = _ctype_for_inferred_elem_size(esz)
    if not cty:
        return False

    style = DEFAULT_UNSIGNED_STYLE
    if PREFER_IDA_RADIX_FOR_UNTYPED_ARRAYS:
        style = _preferred_unsigned_style_for_ea(ea)

    parts = []
    cur = ea
    for _ in range(count):
        uv = be_bytes(cur, esz)
        if uv is None:
            uv = 0
        parts.append(str(uv) if style == "dec" else fmt_hex(uv, esz))
        cur += esz

    fh.write(f"{cty} {name}[{count}] = {{ {', '.join(parts)} }};\n")
    return True

def _try_decl_untyped_numeric_array_by_flags(out_h, ea: int, name: str, total: int) -> bool:
    esz = _infer_elem_size_from_flags(ea)
    if not esz or total % esz != 0:
        return False
    count = total // esz
    if count <= 1:
        return False
    cty = _ctype_for_inferred_elem_size(esz)
    if not cty:
        return False
    out_h.write(f"extern {cty} {name}[{count}];\n")
    return True

def _write_leading_symbol_comments(fh, ea: int, name: str):
    """
    Emit only IDA comments (repeatable and non-repeatable) immediately above the declaration.
    No location/banner line, and NO extra blank line.
    """
    if not EMIT_LEADING_COMMENTS:
        return

    wrote_any = False

    for rep in (0, 1):
        try:
            cmt = idc.get_cmt(ea, rep)
        except Exception:
            cmt = None

        if cmt:
            for line in str(cmt).splitlines():
                line = line.rstrip()
                if line:
                    fh.write(f"// {line}\n")
                    wrote_any = True

    # Important: do NOT write an extra '\n' here.
    # If you want a separator between symbols, do it after the definition instead (optional).

def collect_all_named_data(INCLUDE_SEGMENTS=None, include_auto=True):
    """
    Return [(ea, name)] for all named *data* items in the selected segments.
    - INCLUDE_SEGMENTS: set/list of segment names to include, or None/empty for all.
    - include_auto: if False, drop auto-names like byte_xxx/word_xxx/unk_xxx.
    """
    results = []
    for seg_ea in idautils.Segments():
        seg = ida_segment.getseg(seg_ea)
        if not seg:
            continue
        segname = ida_segment.get_segm_name(seg)
        if INCLUDE_SEGMENTS and segname not in INCLUDE_SEGMENTS:
            continue

        start, end = seg.start_ea, seg.end_ea
        for ea in idautils.Heads(start, end):
            flags = ida_bytes.get_flags(ea)
            if ida_bytes.is_code(flags):
                continue  # data only
            name = ida_name.get_name(ea)  # returns auto names too
            if not name:
                continue
            if not include_auto and ida_name.is_auto_name(ea):
                continue
            results.append((ea, name))

    return sorted(results, key=lambda p: p[0])

def is_big_endian() -> bool:
    return bool(ida_ida.inf_is_be())

def native_ptr_size() -> int:
    return 8 if ida_ida.inf_is_64bit() else 4

def _segname_of_ea(ea):
    seg = ida_segment.getseg(ea)
    if not seg:
        return None
    return ida_segment.get_segm_name(seg)


def _is_plain_char_tinfo(mtif) -> bool:
    """Return True only for exact 'char' (not 'signed char', not 'unsigned char',
       not '__int8' variants)."""
    try:
        tn = (mtif.get_type_name() or "").strip().lower()
    except Exception:
        tn = ""
    return tn == "char"

def get_name_at(ea):
    try:
        nm = idc.get_name(ea)
        if nm:
            return nm
    except Exception:
        pass
    return ""

def resolve_name(addr):
    nm = get_name_at(addr)
    return nm if nm else ""

def is_function(ea):
    try:
        return ida_funcs.get_func(ea) is not None
    except Exception:
        return False

def byte_loaded(ea) -> bool:
    return ida_bytes.is_loaded(ea)

def region_is_loaded(ea, size) -> bool:
    if size <= 0:
        return False
    # ensure *every* byte in the span is file-backed
    for i in range(size):
        if not ida_bytes.is_loaded(ea + i):
            return False
    return True

def read_u8(ea):
    if not byte_loaded(ea):
        return None
    v = ida_bytes.get_byte(ea)
    return v if v is not None else None

def read_u16(ea):
    if not (byte_loaded(ea) and byte_loaded(ea+1)):
        return None
    v = idc.get_wide_word(ea)
    return v if v is not None else None

def read_u32(ea):
    if not all(byte_loaded(ea+i) for i in range(4)):
        return None
    v = idc.get_wide_dword(ea)
    return v if v is not None else None

def be_bytes(ea, size):
    if not region_is_loaded(ea, size):
        return None
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
    # uv is already unsigned from be_bytes(); mask anyway for safety.
    if sz and sz > 0:
        uv &= (1 << (sz * 8)) - 1

    if HEX_MINIMAL:
        return "0x%X" % uv

    # legacy padded form
    w = hex_width_for_size(sz)
    return "0x%0*X" % (w, uv) if w else "0x%X" % uv

def _decl_is_char_array(ea) -> bool:
    cdecl = idc.get_type(ea) or ""
    lc = cdecl.lower()
    # accept "char ..." (arrays); ignore "signed char"/"unsigned char" unless you want them too
    return ("char" in lc) and ("[" in lc and "]" in lc)

def c_escape(bs):
    out = []
    for b in bs:
        if b == 0x5C:   out.append("\\\\")  # '\'
        elif b == 0x22: out.append("\\\"")  # '"'
        elif b == 0x09: out.append("\\t")
        elif b == 0x0A: out.append("\\n")
        elif b == 0x0D: out.append("\\r")
        elif 32 <= b <= 126:
            out.append(chr(b))
        else:
            # Emit fixed-width octal to avoid any follow-on ambiguity
            out.append("\\%03o" % b)
    return "".join(out)

def read_uptr(ea, w=4):
    # Amiga 68k: 32-bit pointers in big-endian ROM/RAM blobs
    bs = ida_bytes.get_bytes(ea, w) or b"\x00"*w
    return int.from_bytes(bs, "big", signed=False)

def looks_like_c_string(ea, maxlen=256):
    if not ida_bytes.is_loaded(ea):
        return False
    seen = False
    for i in range(maxlen):
        if not ida_bytes.is_loaded(ea+i):
            return False
        b = ida_bytes.get_byte(ea+i)
        if b is None:
            return False
        if b == 0:
            return seen
        if 32 <= b <= 126 or b == 9 or 160 <= b <= 255:
            seen = True
        else:
            return False
    return False

# ==============================
# TInfo helpers
# ==============================

def tinfo_at(ea):
    mt = tif.tinfo_t()
    ok = ida_nalt.get_tinfo(mt, ea)
    return mt if ok else None

def _ctype_name_for_tinfo(mtif):
    tn = ""
    try:
        tn = mtif.get_type_name() or ""
    except Exception:
        tn = ""
    if tn:
        return tn

    if mtif.is_ptr():
        try:
            pt = mtif.get_pointed_object()
        except Exception:
            pt = None

        # Only force "char *" for real 'char' (not uint8_t/unsigned __int8)
        if pt and pt.is_int() and pt.get_size() == 1 and _is_plain_char_tinfo(pt):
            return "char *"

        base = _ctype_name_for_tinfo(pt) if pt else "void"
        return base + " *"

    if mtif.is_int():
        # Prefer plain 'char' for exact char; otherwise int8_t/uint8_t
        if mtif.get_size() == 1:
            if _is_plain_char_tinfo(mtif):
                return "char"
            return "int8_t" if mtif.is_signed() else "uint8_t"
        sz = mtif.get_size()
        if mtif.is_signed():
            return {2:"int16_t",4:"int32_t",8:"int64_t"}.get(sz, "int")
        else:
            return {2:"uint16_t",4:"uint32_t",8:"uint64_t"}.get(sz, "unsigned int")

    if mtif.is_floating():
        return "double" if mtif.get_size() == 8 else "float"

    return "uint8_t"

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

# ----- Local Types (TIL) deserialization to recover a named UDT

def get_local_type_qtypes_by_ordinal(type_name):
    til = tif.get_idati()
    if not til:
        raise RuntimeError("Could not get local type library (idati).")
    ordno = tif.get_type_ordinal(til, type_name)
    if ordno != 0:
        res = tif.get_numbered_type(til, ordno)
        if not res:
            raise RuntimeError("get_numbered_type failed for '%s' (ord %d)." % (type_name, ordno))
        type_qt = res[0]
        fields_qt = res[1] if len(res) > 1 else None
        return til, type_qt, fields_qt
    res = tif.get_named_type(til, type_name, 1)
    if not res:
        raise RuntimeError("Type '%s' not found in Local Types (flags=1)." % type_name)
    if isinstance(res, tuple):
        try:
            type_qt = res[0]
            fields_qt = res[1] if len(res) > 1 else None
            return til, type_qt, fields_qt
        except Exception:
            pass
    tinfo = tif.tinfo_t()
    if not tif.parse_decl(tinfo, til, str(res), tif.PT_SIL):
        raise RuntimeError("Found '%s', but failed to parse decl text." % type_name)
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

def load_named_tinfo(type_name):
    try:
        til, tqt, fqt = get_local_type_qtypes_by_ordinal(type_name)
        return deserialize_tinfo(til, tqt, fqt)
    except Exception:
        return None

# ==============================
# Literals / emission primitives
# ==============================

def char_literal(ea):
    b = ida_bytes.get_byte(ea)
    if b is None:
        return "'\\0'"
    if 32 <= b <= 126 and b not in (34, 92):
        return "'%s'" % chr(b)
    if b == 0:
        return "'\\0'"
    return "'\\x%02X'" % b

# ---- enum name resolver using enum_type_data_t (no ida_enum)

def enum_member_name_by_value(mtif, value):
    try:
        einfo = tif.enum_type_data_t()
        if not mtif.get_enum_details(einfo):
            return None
        for cidx, gstart, gsize in einfo.all_constants():
            edm = einfo[cidx]
            if int(edm.value) == value:
                return edm.name
    except Exception:
        pass
    return None

def enum_literal_or_value(mtif, ea, member_name=None):
    sz = mtif.get_size()
    uv = be_bytes(ea, sz)
    if uv is None:
        return "0"
    nm = enum_member_name_by_value(mtif, uv)
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
    uv = be_bytes(ea, sz)
    if uv is None:
        return "0"

    # Only emit character literals for exact 'char'
    if sz == 1 and _is_plain_char_tinfo(mtif):
        return char_literal(ea)

    policy = FORMAT_POLICY.get(member_name) if member_name else None

    if mtif.is_signed():
        sv = be_signed(uv, sz * 8)
        if policy == "hex":
            return fmt_hex(uv, sz)
        # default for signed: decimal (readable)
        if policy == "dec" or policy is None:
            return str(sv)
    else:
        # unsigned: honor policy; otherwise follow IDA radix if enabled; else fall back to DEFAULT_UNSIGNED_STYLE
        if policy == "hex":
            return fmt_hex(uv, sz)
        if policy == "dec":
            return str(uv)

        if PREFER_IDA_RADIX_FOR_TYPED_UNSIGNED_INTS:
            style = _preferred_unsigned_style_for_ea(ea)
            return str(uv) if style == "dec" else fmt_hex(uv, sz)

        return fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)

def _ida_thinks_string(tgt_ea: int) -> bool:
    try:
        f = ida_bytes.get_full_flags(tgt_ea)
        if ida_bytes.is_strlit(f):
            return True
        cdecl = idc.get_type(tgt_ea) or ""
        if "char" in cdecl.lower():
            return looks_like_c_string(tgt_ea)
    except Exception:
        pass
    return False

def read_value_as_c_literal(mtif, ea, member_name=None):
    # pointers
    if mtif.is_ptr():
        v = be_bytes(ea, 4)
        if v is None:
            return "0"

        if v == 0:
            return "0"

        nm = resolve_name(v)
        if nm:
            # If it’s clearly a string pointer, emit symbol name directly
            try:
                pto = mtif.get_pointed_object()
            except Exception:
                pto = None

            base = (pto.get_type_name() or "").strip().lower() if pto else ""
            if base in ("char", "const char") or _ida_thinks_string(v):
                return nm

            # Arrays/functions decay naturally
            if _symbol_is_array(v) or is_function(v):
                return nm
            return f"&{nm}"

        # IMPORTANT: unresolved pointer constant -> emit as pointer literal (NOT raw bytes)
        return _ptr_literal(mtif, v)

    # arrays (including UDT arrays)
    if mtif.is_array():
        atd = tif.array_type_data_t()
        if not mtif.get_array_details(atd):
            size = mtif.get_size()
            bs = ida_bytes.get_bytes(ea, size) or b""
            hexes = ", ".join("0x%02X" % b for b in bs)
            return "{ " + hexes + " }"
        elem_tif = atd.elem_type
        nelems = atd.nelems
        elem_sz = elem_tif.get_size()
        parts = []
        cur = ea
        for _ in range(nelems):
            parts.append(read_value_as_c_literal(elem_tif, cur, member_name))
            cur += elem_sz
        if parts and all(p in ("0", "'\\0'") for p in parts):
            return "{ 0 }"
        return "{ " + ", ".join(parts) + " }"

    # enums
    if mtif.is_enum():
        return enum_literal_or_value(mtif, ea, member_name)

    # integers
    if mtif.is_int():
        return int_literal_hex_or_signed(mtif, ea, member_name)

    # floats
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
            return "0.0"
        return repr(v)

    # UDTs
    if mtif.is_udt():
        if is_union(mtif):
            sz = mtif.get_size()
            uv = be_bytes(ea, sz)
            if uv is None:
                return "{ 0 }"
            if sz == 4:
                sv = be_signed(uv, 32)
                return "{ %d }" % sv
            return "{ " + (fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)) + " }"
        parts = []
        for sub_name, sub_tif, sub_off in iter_struct_members(mtif):
            parts.append(read_value_as_c_literal(sub_tif, ea + sub_off, sub_name or member_name))
        return "{ " + ", ".join(parts) + " }"

    # unknown: raw bytes
    size = mtif.get_size()
    bs = ida_bytes.get_bytes(ea, size) or b""
    hexes = ", ".join("0x%02X" % b for b in bs)
    return "{ " + hexes + " }"

def emit_instance_body(struct_name, ea):
    ti = load_named_tinfo(struct_name)
    if not ti or not (ti.is_struct() or ti.is_udt()):
        raise RuntimeError("Type '%s' not found or not a UDT." % struct_name)

    # --- FIX: unions can only be initialized with ONE member ---
    if ti.is_union():
        first_member = None
        for sub_name, sub_tif, sub_off in iter_struct_members(ti):
            first_member = (sub_name, sub_tif, sub_off)
            break

        if not first_member:
            # degenerate union; emit zero-init
            body = "0" if not STRUCT_COMMENT_AND_NEWLINE else "    0"
            return body, ti.get_size()

        sub_name, sub_tif, sub_off = first_member
        val = read_value_as_c_literal(sub_tif, ea + sub_off, sub_name)

        if STRUCT_COMMENT_AND_NEWLINE:
            body = "    " + val
        else:
            body = val

        return body, ti.get_size()

    # --- existing struct behavior ---
    parts = []
    for sub_name, sub_tif, sub_off in iter_struct_members(ti):
        val = read_value_as_c_literal(sub_tif, ea + sub_off, sub_name or None)
        if STRUCT_COMMENT_AND_NEWLINE:
            parts.append("    " + val + ", /* %s @+0x%X */" % (sub_name if sub_name else "", sub_off))
        else:
            parts.append(val)

    if STRUCT_COMMENT_AND_NEWLINE:
        body = "\n".join(parts)
    else:
        body = ", ".join(parts)

    return body, ti.get_size()

def emit_variable(struct_name, symbol_name, count_hint=None):
    base_ea = idc.get_name_ea_simple(symbol_name)
    if base_ea == idc.BADADDR:
        return "// ERROR: symbol '%s' not found\n" % symbol_name

    # detect symbol type count if it is an array of the struct
    mt = tinfo_at(base_ea)
    detected = None
    if mt and mt.is_array():
        atd = tif.array_type_data_t()
        if mt.get_array_details(atd):
            if atd.elem_type.is_udt():
                detected = atd.nelems

    count = detected if detected and detected > 0 else (count_hint or 1)
    body0, struct_size = emit_instance_body(struct_name, base_ea)

    # Single instance
    if count == 1:
        if STRUCT_COMMENT_AND_NEWLINE:
            return "%s %s = {\n%s\n};\n" % (struct_name, symbol_name, body0)
        else:
            # compact, single-line
            return "%s %s = { %s };\n" % (struct_name, symbol_name, body0)

    # Array of instances
    elems = []
    for i in range(count):
        elem_ea = base_ea + i * struct_size
        body_i, _ = emit_instance_body(struct_name, elem_ea)
        if STRUCT_COMMENT_AND_NEWLINE:
            elems.append("  {\n%s\n  }, /* [%d] @ 0x%X */" % (body_i, i, elem_ea))
        else:
            # compact element (no per-element comments)
            elems.append("{ %s }" % body_i)

    if STRUCT_COMMENT_AND_NEWLINE:
        return "%s %s[%d] = {\n%s\n};\n" % (struct_name, symbol_name, count, "\n".join(elems))
    else:
        # compact array initializer
        return "%s %s[%d] = { %s };\n" % (struct_name, symbol_name, count, ", ".join(elems))

def emit_array_initialized(ea, elem_tif, nelems):
    parts = []
    elem_sz = elem_tif.get_size()
    cur = ea
    for _ in range(nelems):
        parts.append(read_value_as_c_literal(elem_tif, cur))
        cur += elem_sz
    if parts and all(p == "0" or p == "'\\0'" for p in parts):
        return "{ 0 }"
    return "{ " + ", ".join(parts) + " }"

# ==============================
# High-level emit per symbol
# ==============================

def _is_exact_decl_char_array(ea) -> bool:
    cdecl = idc.get_type(ea) or ""
    lc = cdecl.replace(" ", "").lower()
    # must be array (has [...]), not a pointer (no *), and the base type must be exactly "char"
    # examples that should match: "char aCustom[10]"
    # examples that should NOT match: "signedchar[10]", "unsignedchar[10]", "__int8[10]", "char*[262]"
    return ("char" in lc and "[" in lc and "]" in lc and "*" not in lc and
            not lc.startswith("signedchar") and not lc.startswith("unsignedchar"))

def is_decl_stringy_char_array(cdecl):
    if not cdecl:
        return False
    lc = cdecl.lower()
    return ("char" in lc) and ("country" not in lc)

def _is_char_array_tinfo(mt) -> bool:
    """
    True for T[N] where T is any 1-byte integer scalar (char/signed char/unsigned char),
    i.e., not a pointer/udt/enum/array.
    """
    if not (mt and mt.is_array()):
        return False
    atd = tif.array_type_data_t()
    if not mt.get_array_details(atd):
        return False
    elem = atd.elem_type
    return (elem.is_int() and elem.get_size() == 1
            and not (elem.is_ptr() or elem.is_udt() or elem.is_enum() or elem.is_array()))

def emit_enum_array(fh, ea, name, elem_tif, atd):
    nelems = atd.nelems
    total = ida_bytes.get_item_size(ea) or (nelems * max(1, elem_tif.get_size()))
    if nelems <= 0 or total <= 0:
        return False
    if total % nelems != 0:
        return False
    phys_stride = total // nelems
    if phys_stride not in (1, 2, 4, 8):
        return False

    einfo = tif.enum_type_data_t()
    if not elem_tif.get_enum_details(einfo):
        return False
    val_to_name = {}
    for cidx, gstart, gsize in einfo.all_constants():
        edm = einfo[cidx]
        v = int(edm.value)
        if v not in val_to_name:
            val_to_name[v] = edm.name

    parts = []
    cur = ea
    for _ in range(nelems):
        bs = ida_bytes.get_bytes(cur, phys_stride) or b"\x00"*phys_stride
        uv = int.from_bytes(bs, "big", signed=False)
        nm = val_to_name.get(uv)
        parts.append(nm if nm else fmt_hex(uv, phys_stride))
        cur += phys_stride

    etname = elem_tif.get_type_name() or "/* enum */ int"
    fh.write("%s %s[%d] = { %s };\n" % (etname, name, nelems, ", ".join(parts)))
    return True

def emit_udt_symbol(fh, ea, name, mt):
    struct_name = _ctype_name_for_tinfo(mt)
    decl = emit_variable(struct_name, name, 1)  # returns a string
    fh.write(decl)
    return True

def emit_array_symbol(fh, ea, name, mt):
    # --- NEW: if this is a typed char array, always emit as full-length string ---
    if _is_exact_decl_char_array(ea):
        total = ida_bytes.get_item_size(ea) or 0
        if total > 0 and region_is_loaded(ea, total):
            raw = ida_bytes.get_bytes(ea, total) or b""

            # Option A (keep your current style): trim trailing NUL so implicit terminator recreates it
            if raw and raw[-1] == 0:
                raw = raw[:-1]
            text = c_escape(raw)

            prefix = _char_array_decl_prefix_from_cdecl(ea)
            fh.write(f'{prefix} {name}[{total}] = "{text}";\n')
            return True

    atd = tif.array_type_data_t()
    if not mt.get_array_details(atd):
        total = ida_bytes.get_item_size(ea) or 0
        if total <= 0:
            return False
        bs = ida_bytes.get_bytes(ea, total) or b""
        vals = ", ".join(fmt_hex(b, 1) for b in bs)
        fh.write("uint8_t %s[%d] = { %s };\n" % (name, total, vals))
        return True

    elem_tif = atd.elem_type
    nelems = atd.nelems

    if elem_tif.is_enum():
        return emit_enum_array(fh, ea, name, elem_tif, atd)

    if elem_tif.is_udt():
        struct_name = _ctype_name_for_tinfo(elem_tif)
        decl = emit_variable(struct_name, name, nelems)
        fh.write(decl)
        return True

    body = emit_array_initialized(ea, elem_tif, nelems)

    # >>> ADD THIS OVERRIDE <<<
    override_elem_cty = _array_elem_ctype_override_from_cdecl(ea)
    elem_cty = override_elem_cty or _ctype_name_for_tinfo(elem_tif)

    fh.write("%s %s[%d] = %s;\n" % (elem_cty, name, nelems, body))
    return True

def emit_scalar_or_ptr(fh, ea, name, mt):
    # pointer?
    if mt.is_ptr():
        v = be_bytes(ea, 4)
        if v is None:
            v = 0

        # Compute initializer using your existing logic
        if v == 0:
            init = "0"
        else:
            nm = resolve_name(v)
            try:
                pto = mt.get_pointed_object()
            except Exception:
                pto = None

            if nm:
                tn = (pto.get_type_name() or "").strip().lower() if pto else ""
                if tn in ("char", "const char") or _ida_thinks_string(v):
                    init = nm
                elif _symbol_is_array(v) or is_function(v):
                    init = nm
                else:
                    init = f"&{nm}"
            else:
                init = _ptr_literal(mt, v)

        # >>> NEW: use IDA's full declarator if available (handles pointer-to-array etc.)
        decl = _ida_decl_for_symbol(ea, name)
        if decl:
            fh.write(f"{decl} = {init};\n")
            return True

        # Fallback to your previous behavior (simple pointers)
        try:
            pto = mt.get_pointed_object()
            tname = _ctype_name_for_tinfo(pto) if pto else "void"
        except Exception:
            tname = "void"

        fh.write(f"{tname} * {name} = {init};\n")
        return True

    # enum scalar
    if mt.is_enum():
        lit = enum_literal_or_value(mt, ea, name)
        etn = mt.get_type_name() or "int"
        fh.write(f"{etn} {name} = {lit};\n")
        return True

    # integers
    if mt.is_int():
        lit = int_literal_hex_or_signed(mt, ea, name)
        cty = _ctype_name_for_tinfo(mt)
        fh.write(f"{cty} {name} = {lit};\n")
        return True

    # floats
    if mt.is_floating():
        lit = read_value_as_c_literal(mt, ea, name)
        cty = _ctype_name_for_tinfo(mt)
        fh.write(f"{cty} {name} = {lit};\n")
        return True

    return False

def try_emit_string_literal(fh, ea, name, total):
    # Only emit as "const char[]" if: looks like C string AND (typed char[] OR no type)
    cdecl = idc.get_type(ea) or ''
    if looks_like_c_string(ea) and (is_decl_stringy_char_array(cdecl) or not cdecl):
        # trim at first NUL inside the item span
        end = 0
        while end < total:
            b = ida_bytes.get_byte(ea + end)
            if b is None or b == 0:
                break
            end += 1
        if end < total:
            raw = ida_bytes.get_bytes(ea, end) or b""
            text = c_escape(raw)
            fh.write('const char %s[] = "%s";\n' % (name, text))
            return True
    return False

def emit_one_symbol(fh, ea, name):
    if is_function(ea):
        return False

    total = ida_bytes.get_item_size(ea) or 0
    if total <= 0:
        return False

    mt = tinfo_at(ea)
    file_backed = region_is_loaded(ea, total)

    # --- FAST PATH FOR STRINGS ---
    if file_backed and try_emit_string_literal(fh, ea, name, total):
        return True

    # ---------- Arrays ----------
    if mt and mt.is_array():
        if file_backed:
            return emit_array_symbol(fh, ea, name, mt)   # initializer
        else:
            # BSS array: declaration only with exact element type & count
            atd = tif.array_type_data_t()
            if mt.get_array_details(atd):
                elem_cty = _ctype_name_for_tinfo(atd.elem_type)
                fh.write(f"{elem_cty} {name}[{atd.nelems}];\n")
                return True
            fh.write(f"uint8_t {name}[{total}];\n")
            return True

    # ---------- Non-arrays ----------
    if mt:
        # UDT/struct
        if mt.is_udt():
            if file_backed:
                return emit_udt_symbol(fh, ea, name, mt)
            else:
                struct_name = _ctype_name_for_tinfo(mt)
                fh.write(f"{struct_name} {name};\n")
                return True

        # Pointer / enum / integer / float
        if mt.is_ptr() or mt.is_enum() or mt.is_int() or mt.is_floating():
            if file_backed:
                return emit_scalar_or_ptr(fh, ea, name, mt)
            else:
                if mt.is_ptr():
                    decl = _ida_decl_for_symbol(ea, name)
                    if decl:
                        fh.write(f"{decl};\n")
                        return True

                    try:
                        pto = mt.get_pointed_object()
                        tname = _ctype_name_for_tinfo(pto) if pto else "void"
                    except Exception:
                        tname = "void"
                    fh.write(f"{tname} * {name};\n")
                    return True
                if mt.is_enum():
                    etn = mt.get_type_name() or "int"
                    fh.write(f"{etn} {name};\n")
                    return True
                if mt.is_int() or mt.is_floating():
                    cty = _ctype_name_for_tinfo(mt)
                    fh.write(f"{cty} {name};\n")
                    return True

    # No usable IDA type → size-based fallback
    if not file_backed:
        if total == 1:
            fh.write(f"uint8_t {name};\n");  return True
        if total == 2:
            fh.write(f"uint16_t {name};\n"); return True
        if total == 4:
            fh.write(f"uint32_t {name};\n"); return True
        if total == 8:
            fh.write(f"uint64_t {name};\n"); return True
        fh.write(f"uint8_t {name}[{total}];\n"); return True
    else:
        # --- NEW: if untyped but IDA flags indicate word/dword/qword array, emit typed array ---
        if _try_emit_untyped_numeric_array_by_flags(fh, ea, name, total):
            return True
        return emit_fallback_by_size(fh, ea, name)

# ==============================
# Output control
# ==============================

def pick_output_path():
    path = ida_kernwin.ask_file(True, DEFAULT_OUT_NAME, "Save emitted C as")
    if not path:
        raise RuntimeError("User canceled save dialog")
    return os.path.abspath(path)

# ----- Header helpers / declarations -----

def _derive_header_path(c_path: str) -> str:
    base, _ = _osp.splitext(c_path)
    return base + ".h"

def _write_header_prelude(out_h):
    out_h.write("/* Auto-emitted prototypes (IDA 9.x) */\n")
    out_h.write("#pragma once\n")
    out_h.write("#include <stdint.h>\n\n")

def emit_fallback_by_size(fh, ea, name):
    n = ida_bytes.get_item_size(ea) or 0

    # Prefer IDA radix for simple scalars if requested
    style = DEFAULT_UNSIGNED_STYLE
    if PREFER_IDA_RADIX_FOR_FALLBACK_SCALARS:
        style = _preferred_unsigned_style_for_ea(ea)

    if n == 1:
        v = read_u8(ea)
        uv = (v if v is not None else 0)
        fh.write(f"uint8_t {name}  = {uv};\n" if style == "dec" else f"uint8_t {name}  = {fmt_hex(uv, 1)};\n")
        return True

    if n == 2:
        v = read_u16(ea)
        uv = (v if v is not None else 0)
        fh.write(f"uint16_t {name} = {uv};\n" if style == "dec" else f"uint16_t {name} = {fmt_hex(uv, 2)};\n")
        return True

    if n == 4:
        v = read_u32(ea)
        uv = (v if v is not None else 0)
        fh.write(f"uint32_t {name} = {uv};\n" if style == "dec" else f"uint32_t {name} = {fmt_hex(uv, 4)};\n")
        return True

    if n == 8:
        uv = be_bytes(ea, 8) or 0
        fh.write(f"uint64_t {name} = {uv};\n" if style == "dec" else f"uint64_t {name} = {fmt_hex(uv, 8)};\n")
        return True

    if n > 0:
        # If it’s actually a string, prefer a char[] declaration.
        if looks_like_c_string(ea):
            end = 0
            while end < n:
                b = ida_bytes.get_byte(ea + end)
                if b is None or b == 0: break
                end += 1
            raw = ida_bytes.get_bytes(ea, end) or b""
            fh.write(f'const char {name}[] = "{c_escape(raw)}";\n')
            return True

        bs = ida_bytes.get_bytes(ea, n) or b""
        vals = ", ".join(fmt_hex(b, 1) for b in bs)
        fh.write(f"uint8_t {name}[{n}] = {{ {vals} }};\n")
        return True
    return False

def _decl_array_symbol(out_h, ea, name, mt):
    # --- NEW: exact extern for typed char arrays ---
    if _is_exact_decl_char_array(ea):
        total = ida_bytes.get_item_size(ea) or 0
        if total > 0:
            out_h.write(f"extern char {name}[{total}];\n")
            return True

    atd = tif.array_type_data_t()
    if not mt.get_array_details(atd):
        total = ida_bytes.get_item_size(ea) or 0
        if total > 0:
            out_h.write(f"extern uint8_t {name}[{total}];\n")
        return True

    elem_tif = atd.elem_type
    nelems = atd.nelems
    if nelems <= 0:
        return False

    # >>> ADD THIS OVERRIDE <<<
    override_elem_cty = _array_elem_ctype_override_from_cdecl(ea)
    if override_elem_cty:
        out_h.write(f"extern {override_elem_cty} {name}[{nelems}];\n")
        return True

    if elem_tif.is_enum():
        etname = elem_tif.get_type_name() or "int"
        out_h.write(f"extern {etname} {name}[{nelems}];\n")
        return True
    if elem_tif.is_udt():
        struct_name = _ctype_name_for_tinfo(elem_tif)
        out_h.write(f"extern {struct_name} {name}[{nelems}];\n")
        return True

    elem_cty = _ctype_name_for_tinfo(elem_tif)
    out_h.write(f"extern {elem_cty} {name}[{nelems}];\n")
    return True

def _decl_scalar_or_ptr(out_h, ea, name, mt):
    if mt.is_ptr():
        decl = _ida_decl_for_symbol(ea, name)
        if decl:
            out_h.write(f"extern {decl};\n")
            return True

        try:
            pto = mt.get_pointed_object()
            tname = _ctype_name_for_tinfo(pto) if pto else "void"
        except Exception:
            tname = "void"
        out_h.write(f"extern {tname} * {name};\n")
        return True
    if mt.is_enum():
        etn = mt.get_type_name() or "int"
        out_h.write(f"extern {etn} {name};\n")
        return True
    if mt.is_int() or mt.is_floating():
        cty = _ctype_name_for_tinfo(mt)
        out_h.write(f"extern {cty} {name};\n")
        return True
    return False

def _decl_fallback_by_size_h(out_h, ea, name):
    n = ida_bytes.get_item_size(ea) or 0
    if n <= 0:
        return False

    is_loaded = region_is_loaded(ea, n)

    if not is_loaded:
        if n == 1:
            out_h.write(f"extern uint8_t {name};\n");  return True
        if n == 2:
            out_h.write(f"extern uint16_t {name};\n"); return True
        if n == 4:
            out_h.write(f"extern uint32_t {name};\n"); return True
        if n == 8:
            out_h.write(f"extern uint64_t {name};\n"); return True
        out_h.write(f"extern uint8_t {name}[{n}];\n")
        return True

    # --- NEW: inferred typed arrays for loaded, untyped items ---
    if _try_decl_untyped_numeric_array_by_flags(out_h, ea, name, n):
        return True

    if n == 4:
        out_h.write(f"extern uint32_t {name};\n"); return True
    if n == 2:
        out_h.write(f"extern uint16_t {name};\n"); return True
    if n == 1:
        out_h.write(f"extern uint8_t {name};\n");  return True

    if looks_like_c_string(ea, maxlen=min(n, 256)):
        out_h.write(f'extern const char {name}[];\n')
        return True

    out_h.write(f"extern uint8_t {name}[{n}];\n")
    return True

def _would_emit_as_c_string(ea, name, total):
    cdecl = idc.get_type(ea) or ''
    # IMPORTANT: only consider it a string if a NUL is found within THIS item
    maxlen = min(max(1, total), 256)
    return looks_like_c_string(ea, maxlen=maxlen) and (is_decl_stringy_char_array(cdecl) or not cdecl)

def _decl_udt_variable(out_h, struct_name, name, ea):
    """
    Emit an extern for a UDT instance (or UDT array if typed as such).
    """
    mt = tinfo_at(ea)
    if mt and mt.is_array():
        atd = tif.array_type_data_t()
        if mt.get_array_details(atd) and atd.elem_type.is_udt():
            out_h.write(f"extern {struct_name} {name}[{atd.nelems}];\n")
            return True
    out_h.write(f"extern {struct_name} {name};\n")
    return True

def _decl_one_symbol(out_h, ea, name):
    if is_function(ea):
        return False
    total = ida_bytes.get_item_size(ea) or 0
    if total <= 0:
        return False

    # Preserve exact typed char[N] (including const) in header
    if _is_exact_decl_char_array(ea):
        total = ida_bytes.get_item_size(ea) or 0
        if total > 0:
            cdecl = (idc.get_type(ea) or "").lower()
            prefix = "const char" if "const" in cdecl else "char"
            out_h.write(f"extern {prefix} {name}[{total}];\n")
            return True

    # strings (typed char[] or untyped-but-looks-like string)
    if _would_emit_as_c_string(ea, name, total):
        out_h.write(f'extern const char {name}[];\n')
        return True

    # Decide if we should attempt ptr->string-table declaration.
    mt = tinfo_at(ea)
    if mt and mt.is_array():
        atd_tmp = tif.array_type_data_t()
        if mt.get_array_details(atd_tmp):
            elem_tif_tmp = atd_tmp.elem_type

    # UDT/struct instance
    if mt and mt.is_udt():
        struct_name = _ctype_name_for_tinfo(mt)
        _decl_udt_variable(out_h, struct_name, name, ea)
        return True

    # typed arrays
    if mt and mt.is_array():
        return _decl_array_symbol(out_h, ea, name, mt)

    # typed scalars / pointers / enums / floats
    if mt and (mt.is_ptr() or mt.is_int() or mt.is_enum() or mt.is_floating()):
        return _decl_scalar_or_ptr(out_h, ea, name, mt)

    # fallback
    return _decl_fallback_by_size_h(out_h, ea, name)

# ==============================
# Main
# ==============================

def main():
    out_path = pick_output_path()
    h_path  = _derive_header_path(out_path)
    emitted = skipped = 0
    # Collect names, optionally filtering by segment allow-list (shared for .c and .h)
    names = []
    #for ea, nm in idautils.Names():
    for ea, nm in collect_all_named_data(INCLUDE_SEGMENTS=INCLUDE_SEGMENTS, include_auto=True):
        if not nm or is_function(ea):
            continue
        segname = _segname_of_ea(ea)
        if INCLUDE_SEGMENTS and (segname not in INCLUDE_SEGMENTS):
            continue
        names.append((ea, nm))
    names.sort(key=lambda p: p[0])

    # --- Write header first ---
    with open(h_path, "w", encoding="utf-8") as out_h:
        _write_header_prelude(out_h)
        for ea, nm in names:
            try:
                _decl_one_symbol(out_h, ea, nm)
            except Exception as ex:
                out_h.write(f"/* DECL SKIP 0x{ea:X} ({nm}): {ex!r} */\n")

    # --- Then write .c definitions ---
    with open(out_path, "w", encoding="utf-8") as out:
        out.write("/* Auto-emitted by emit_initialized_c.py (IDA 9.x) */\n")
        out.write("#include <stdint.h>\n")
        # include the header we just wrote, so declarations stay in sync
        try:
            hname = _osp.basename(h_path)
            out.write(f'#include "{hname}"\n')
            out.write(f'#include "LocalTypes.h"\n\n')
        except Exception:
            out.write("\n")

        for ea, nm in names:
            try:
                _write_leading_symbol_comments(out, ea, nm)
                if emit_one_symbol(out, ea, nm):
                    emitted += 1
                else:
                    skipped += 1
            except Exception as ex:
                out.write("/* SKIP 0x%X (%s): %r */\n" % (ea, nm, ex))
                skipped += 1
    idaapi.msg("[emit_initialized_c] Wrote: %s and %s (emitted=%d, skipped=%d)\n" % (out_path, h_path, emitted, skipped))

if __name__ == "__main__":
    main()