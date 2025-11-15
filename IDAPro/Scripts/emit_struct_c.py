# IDA 9.0 — Emit C initializers for struct instances (supports arrays)
# Target: Amiga 68k big-endian
#
# Features:
# - Auto-detect array count from symbol's type (if symbol is T[N])
# - Hex/dec for unsigned integers via DEFAULT_UNSIGNED_STYLE
# - Signed decimal for signed members (unless overridden to hex/dec)
# - Optional per-member decimal/hex override via FORMAT_POLICY
# - Char fields as character literals
# - Pointers as (T*)0, (T*)-1, (T*)0xXXXXXXXX
# - Unions (e.g., FixedPoint_) as { <int> }
# - Structs recursively emitted
# - Member offsets in comments
# - Zero-compress arrays of zeros -> { 0 }

import idaapi
import idc
import ida_bytes
import ida_typeinf
import ida_nalt

# ---------------------------
# CONFIG: add (type_name, symbol_name, count) tuples
# count is used if symbol type isn't an array; if symbol is T[N], we auto-detect N.
# ---------------------------
TARGETS = [
    ("Sprite", "big_S_Sprite", 1),
    ("Sprite", "advertInGameSprites", 8),
    # Add more here...
]

# ---------------------------
# DEFAULT unsigned formatting for integers/enums without overrides
#   "hex" -> 0x... (zero-padded by size)
#   "dec" -> decimal
# ---------------------------
DEFAULT_UNSIGNED_STYLE = "hex"  # "hex" or "dec"

# ---------------------------
# OPTIONAL per-member formatting overrides
#   "dec" -> force decimal
#   "hex" -> force hex
# Example: FORMAT_POLICY = {"direction": "dec", "cards": "dec"}
# ---------------------------
FORMAT_POLICY = {
    # "direction": "dec",
    # "cards": "dec",
}

# ---------------------------
# Endian & numeric helpers
# ---------------------------

def be_bytes(ea, size):
    """Read size bytes from ea; return big-endian unsigned int or None."""
    bs = ida_bytes.get_bytes(ea, size)
    if not bs or len(bs) != size:
        return None
    return int.from_bytes(bs, "big", signed=False)

def be_signed(value, bits):
    """Interpret 'value' as signed (two's complement) with 'bits' width."""
    sign_bit = 1 << (bits - 1)
    mask = (1 << bits) - 1
    v = value & mask
    return v - (1 << bits) if (v & sign_bit) else v

def hex_width_for_size(sz):
    """Return hex digit width for padding: bytes->nibbles."""
    return {1: 2, 2: 4, 4: 8, 8: 16}.get(sz, 0)

def fmt_hex(uv, sz):
    """Zero-padded hex according to integer size."""
    w = hex_width_for_size(sz)
    return f"0x{uv:0{w}X}" if w else f"0x{uv:X}"

# ---------------------------
# Local Types lookup (robust)
# ---------------------------

def get_local_type_qtypes_by_ordinal(type_name):
    """
    Fetch (type_qt, fields_qt) from Local Types:
      1) by ordinal (preferred),
      2) fallback: get_named_type(..., flags=1) + parse/serialize if needed.
    """
    til = ida_typeinf.get_idati()
    if not til:
        raise RuntimeError("Could not get local type library (idati).")

    ordno = ida_typeinf.get_type_ordinal(til, type_name)
    if ordno != 0:
        res = ida_typeinf.get_numbered_type(til, ordno)
        if not res:
            raise RuntimeError(f"get_numbered_type failed for '{type_name}' (ord {ordno}).")
        type_qt = res[0]
        fields_qt = res[1] if len(res) > 1 else None
        return til, type_qt, fields_qt

    res = ida_typeinf.get_named_type(til, type_name, 1)
    if not res:
        raise RuntimeError(f"Type '{type_name}' not found in Local Types (flags=1).")

    if isinstance(res, tuple):
        try:
            type_qt = res[0]
            fields_qt = res[1] if len(res) > 1 else None
            return til, type_qt, fields_qt
        except Exception:
            pass

    # res might be a decl string; parse -> serialize to qtypes.
    decl = res if isinstance(res, str) else str(res)
    tif = ida_typeinf.tinfo_t()
    if not ida_typeinf.parse_decl(tif, til, decl, ida_typeinf.PT_SIL):
        raise RuntimeError(f"Found '{type_name}', but failed to parse decl text.")

    type_qt = ida_typeinf.qtype()
    fields_qt = ida_typeinf.qtype()
    if not tif.serialize(type_qt, fields_qt, None, ida_typeinf.SER_FULL):
        raise RuntimeError("Failed to serialize parsed tinfo to qtypes.")
    return til, type_qt, fields_qt

def deserialize_tinfo(til, type_qt, fields_qt):
    tif = ida_typeinf.tinfo_t()
    ok = tif.deserialize(til, type_qt, fields_qt) if fields_qt is not None else tif.deserialize(til, type_qt)
    if not ok:
        raise RuntimeError("Failed to deserialize tinfo_t from qtypes.")
    return tif

# ---------------------------
# Struct traversal utilities
# ---------------------------

def iter_struct_members(tif):
    """Yield (name, member_tinfo, offset_bytes) for each member in a struct/UDT."""
    if not tif.is_udt():
        raise RuntimeError("Type is not a UDT/struct.")
    utd = ida_typeinf.udt_type_data_t()
    if not tif.get_udt_details(utd):
        raise RuntimeError("Failed to get UDT details.")
    for m in utd:
        name = m.name or ""
        mtif = m.type
        off_bytes = m.offset // 8  # bits -> bytes
        yield name, mtif, off_bytes

def is_union(tif):
    return tif.is_union()

# ---------------------------
# Symbol helpers
# ---------------------------

def detect_symbol_array_count(struct_name, symbol_name):
    """If symbol is typed as T[N], return N; else None."""
    ea = idc.get_name_ea_simple(symbol_name)
    if ea == idc.BADADDR:
        return None

    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, ea):
        return None

    if tif.is_array():
        atd = ida_typeinf.array_type_data_t()
        if tif.get_array_details(atd):
            if atd.elem_type.is_udt():
                return atd.nelems
    return None

# ---------------------------
# Literal printers
# ---------------------------

def char_literal(ea):
    """Read one byte and render as C char literal."""
    b = ida_bytes.get_byte(ea)
    if b is None:
        return "'\\0'"
    # Printable ASCII excluding backslash and double-quote
    if 32 <= b <= 126 and b not in (34, 92):
        return f"'{chr(b)}'"
    if b == 0:
        return "'\\0'"
    return f"'\\x{b:02X}'"

def enum_literal_or_value(mtif, ea, member_name=None):
    """
    Prefer named enumerator; fallback to integer literal.
    For 1-byte enums, emit char literal. For other unsigned cases,
    follow FORMAT_POLICY or DEFAULT_UNSIGNED_STYLE.
    """
    sz = mtif.get_size()
    uv = be_bytes(ea, sz)
    if uv is None:
        return "0"

    einfo = ida_typeinf.enum_type_data_t()
    if mtif.get_enum_details(einfo):
        for em in einfo.members:
            if em.value == uv:
                return em.name

    # policy override?
    policy = FORMAT_POLICY.get(member_name) if member_name else None
    if sz == 1:
        # still give a char literal for readability
        if policy == "dec":
            return str(uv)
        if policy == "hex":
            return fmt_hex(uv, sz)
        return char_literal(ea)

    if policy == "dec":
        return str(uv)
    if policy == "hex":
        return fmt_hex(uv, sz)

    # default unsigned enum style
    return fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)

def int_literal_hex_or_signed(mtif, ea, member_name=None):
    """
    For non-char integers:
      - if member type is signed -> print signed decimal (unless policy forces hex/dec)
      - else -> DEFAULT_UNSIGNED_STYLE (hex or dec), unless policy override
    For 1-byte integers -> char literal.
    """
    sz = mtif.get_size()
    if sz == 1:
        return char_literal(ea)

    uv = be_bytes(ea, sz)
    if uv is None:
        return f"/* int{sz*8} read failed */ 0"

    policy = FORMAT_POLICY.get(member_name) if member_name else None

    if mtif.is_signed():
        sv = be_signed(uv, sz * 8)
        if policy == "hex":
            return fmt_hex(uv, sz)
        if policy == "dec" or policy is None:
            return str(sv)

    # Unsigned path
    if policy == "hex":
        return fmt_hex(uv, sz)
    if policy == "dec":
        return str(uv)
    return fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)

def compress_zero_array_literals(parts):
    """
    If array is entirely zeros, compress to '{ 0 }'.
    Handles both numeric "0" and char "'\\0'".
    """
    if not parts:
        return "{ 0 }"
    all_zero_num = all(p == "0" for p in parts)
    all_zero_char = all(p == "'\\0'" for p in parts)
    if all_zero_num or all_zero_char:
        return "{ 0 }"
    return "{ " + ", ".join(parts) + " }"

# ---------------------------
# Recursive reader
# ---------------------------

def read_value_as_c_literal(mtif, ea, member_name=None):
    """Read a value of type mtif at ea and return a C initializer literal."""

    # Pointers (68k = 4 bytes)
    if mtif.is_ptr():
        v = be_bytes(ea, 4)
        if v is None:
            return "/* ptr read failed */ 0"
        try:
            pto = mtif.get_pointed_object()
            tname = pto.get_type_name() or "void"
        except Exception:
            tname = "void"
        if v == 0:
            return f"({tname}*)0"
        if v == 0xFFFFFFFF:
            return f"({tname}*)-1"
        return f"({tname}*)0x{v:08X}"

    # Arrays (emit element-wise; do not collapse char[] into C-strings)
    if mtif.is_array():
        atd = ida_typeinf.array_type_data_t()
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

    # Enums
    if mtif.is_enum():
        return enum_literal_or_value(mtif, ea, member_name)

    # Integers (signed/unsigned w/ policy + DEFAULT_UNSIGNED_STYLE)
    if mtif.is_int():
        return int_literal_hex_or_signed(mtif, ea, member_name)

    # Floats (big-endian)
    if mtif.is_floating():
        sz = mtif.get_size()
        bs = ida_bytes.get_bytes(ea, sz)
        if not bs or len(bs) != sz:
            return "/* float read failed */ 0.0"
        import struct
        if sz == 4:
            v = struct.unpack(">f", bs)[0]
        elif sz == 8:
            v = struct.unpack(">d", bs)[0]
        else:
            return f"/* unsupported float size {sz} */ 0.0"
        return repr(v)

    # UDTs (struct / union): recurse
    if mtif.is_udt():
        if is_union(mtif):
            # Union (e.g., fixed-point packed) -> single-brace with raw payload
            sz = mtif.get_size()
            uv = be_bytes(ea, sz)
            if uv is None:
                return "{ 0 }"
            if sz == 4:
                sv = be_signed(uv, 32)
                return f"{{ {sv} }}"
            # follow default unsigned style for non-4B payloads
            return "{ " + (fmt_hex(uv, sz) if DEFAULT_UNSIGNED_STYLE == "hex" else str(uv)) + " }"
        else:
            # Struct: recurse over members
            parts = []
            for sub_name, sub_tif, sub_off in iter_struct_members(mtif):
                parts.append(read_value_as_c_literal(sub_tif, ea + sub_off, sub_name or member_name))
            return "{ " + ", ".join(parts) + " }"

    # Fallback: raw bytes
    size = mtif.get_size()
    bs = ida_bytes.get_bytes(ea, size) or b""
    hexes = ", ".join(f"0x{b:02X}" for b in bs)
    return "{ " + hexes + " }"

# ---------------------------
# Emit one struct instance body (no type/var decl)
# ---------------------------

def emit_instance_body(struct_name, ea):
    til, type_qt, fields_qt = get_local_type_qtypes_by_ordinal(struct_name)
    tif = deserialize_tinfo(til, type_qt, fields_qt)

    if not (tif.is_struct() or tif.is_udt()):
        raise RuntimeError(f"'{struct_name}' is not a struct/UDT.")

    lines = []
    for name, mtif, off_b in iter_struct_members(tif):
        member_ea = ea + off_b
        val = read_value_as_c_literal(mtif, member_ea, name)
        comment = f" // {name} @+0x{off_b:X}" if name else f" // @+0x{off_b:X}"
        lines.append(f"    {val},{comment}")
    return "\n".join(lines), tif.get_size()

# ---------------------------
# Emit full variable (single or array)
# ---------------------------

def emit_variable(struct_name, symbol_name, count):
    base_ea = idc.get_name_ea_simple(symbol_name)
    if base_ea == idc.BADADDR:
        return f"// ERROR: symbol '{symbol_name}' not found\n", 0

    # Auto-detect array count from symbol type if possible
    detected = detect_symbol_array_count(struct_name, symbol_name)
    if detected and detected > 0:
        count = detected

    body0, struct_size = emit_instance_body(struct_name, base_ea)

    if count == 1:
        decl = f"{struct_name} {symbol_name} = {{\n{body0}\n}};\n"
        return decl, struct_size

    # Array: emit N elements using struct size stride
    elems = []
    for i in range(count):
        elem_ea = base_ea + i * struct_size
        body_i, _ = emit_instance_body(struct_name, elem_ea)
        elems.append("  {\n" + body_i + "\n  }," + f" // [{i}] @ 0x{elem_ea:X}")

    decl = f"{struct_name} {symbol_name}[{count}] = {{\n" + "\n".join(elems) + "\n};\n"
    return decl, struct_size

# ---------------------------
# Main
# ---------------------------

if __name__ == "__main__":
    if DEFAULT_UNSIGNED_STYLE not in ("hex", "dec"):
        raise SystemExit("[CONFIG] DEFAULT_UNSIGNED_STYLE must be 'hex' or 'dec'")

    outputs = []
    try:
        for (tname, sname, cnt) in TARGETS:
            decl, _ = emit_variable(tname, sname, cnt)
            outputs.append(decl)

        print("\n--- Generated C Initializers ---")
        for out in outputs:
            print(out)
        print("--------------------------------\n")
    except Exception as e:
        print(f"[ERROR] {e}")
