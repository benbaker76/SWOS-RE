# -*- coding: utf-8 -*-
# IDA 9.0 — Emit Variables.md (markdown table) for ALL named data symbols
# Target: Amiga 68k (32-bit pointers)
#
# Output columns:
# |Address|Name|Type|Size (Bytes)|Description|
#
# Notes:
# - Name is the IDA symbol name (unchanged)
# - Type/Size are derived from tinfo where possible; fall back to item size
# - Description comes from IDA comments at the symbol address (repeatable + non-repeatable)
# - Newlines in comments are converted to <br> for markdown tables; '|' is escaped as '\|'
#
# Save as: emit_variables_md.py
# Run: File -> Script file... in IDA

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
import ida_name
import ida_typeinf as tif

DEFAULT_OUT_NAME = "Variables.md"

# If True, do NOT emit IDA string literal items (ASCSTR_*).
# This skips only items IDA has typed as a string, NOT generic byte arrays.
SKIP_STRING_LITERALS = True

# Optional: restrict output to certain segments (empty/None => all segments)
INCLUDE_SEGMENTS = {"CHIP_RAM"}  # e.g. {"CHIP_RAM"} or set()

# -----------------------------
# Type rewriting (IDA -> stdint)
# -----------------------------

_TYPE_REWRITES = [
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
]

def is_string_literal(ea: int) -> bool:
    """
    True only if IDA marks this address as a string literal (ASCSTR_*).
    This intentionally does NOT treat uint8_t/int8_t arrays as strings unless IDA did.
    """
    try:
        st = idc.get_str_type(ea)
        if st is not None and st != -1:
            return True
    except Exception:
        pass

    try:
        flags = ida_bytes.get_flags(ea)
        return ida_bytes.is_strlit(flags)
    except Exception:
        return False

def normalize_ida_cdecl_types(cdecl: str) -> str:
    if not cdecl:
        return cdecl
    out = cdecl
    for pat, repl in _TYPE_REWRITES:
        out = re.sub(pat, repl, out, flags=re.IGNORECASE)
    return out

# -----------------------------
# Helpers
# -----------------------------

def is_function(ea: int) -> bool:
    try:
        return ida_funcs.get_func(ea) is not None
    except Exception:
        return False

def _segname_of_ea(ea: int):
    seg = ida_segment.getseg(ea)
    if not seg:
        return None
    return ida_segment.get_segm_name(seg)

def tinfo_at(ea: int):
    mt = tif.tinfo_t()
    ok = ida_nalt.get_tinfo(mt, ea)
    return mt if ok else None

def _is_plain_char_tinfo(mtif) -> bool:
    try:
        tn = (mtif.get_type_name() or "").strip().lower()
    except Exception:
        tn = ""
    return tn == "char"

def _ctype_name_for_tinfo(mtif) -> str:
    """
    Best-effort readable type name for a tinfo.
    Tries get_type_name(); otherwise constructs pointer/int names.
    """
    try:
        tn = mtif.get_type_name() or ""
    except Exception:
        tn = ""
    tn = tn.strip()
    if tn:
        return normalize_ida_cdecl_types(tn)

    if mtif.is_ptr():
        try:
            pt = mtif.get_pointed_object()
        except Exception:
            pt = None

        # keep exact 'char *' when it truly is char
        if pt and pt.is_int() and pt.get_size() == 1 and _is_plain_char_tinfo(pt):
            return "char *"

        base = _ctype_name_for_tinfo(pt) if pt else "void"
        return normalize_ida_cdecl_types(base) + " *"

    if mtif.is_int():
        sz = mtif.get_size()
        if sz == 1:
            if _is_plain_char_tinfo(mtif):
                return "char"
            return "int8_t" if mtif.is_signed() else "uint8_t"
        if mtif.is_signed():
            return {2:"int16_t",4:"int32_t",8:"int64_t"}.get(sz, "int")
        return {2:"uint16_t",4:"uint32_t",8:"uint64_t"}.get(sz, "unsigned int")

    if mtif.is_floating():
        return "double" if mtif.get_size() == 8 else "float"

    if mtif.is_enum():
        try:
            return mtif.get_type_name() or "int"
        except Exception:
            return "int"

    if mtif.is_udt():
        return "struct /* unnamed */"

    return "uint8_t"

def _compact_ptr_spacing(type_str: str) -> str:
    # Convert "Foo *" / "Foo  *" / "Foo* " into "Foo*"
    s = " ".join(type_str.strip().split())
    s = re.sub(r"\s*\*\s*", "*", s)
    return s

def _ctype_md_from_tinfo(mt: tif.tinfo_t) -> str:
    """
    Returns a markdown-friendly type string:
      uint16_t
      CompetitionCup*
      CompetitionCup*[5]
      uint8_t[9]
    """
    if mt.is_array():
        atd = tif.array_type_data_t()
        if mt.get_array_details(atd):
            elem = atd.elem_type
            ne = int(atd.nelems)
            elem_cty = _compact_ptr_spacing(_ctype_name_for_tinfo(elem))
            return f"{elem_cty}[{ne}]"
        return "uint8_t[]"

    cty = _compact_ptr_spacing(_ctype_name_for_tinfo(mt))
    return cty

def _size_bytes_from_tinfo(mt: tif.tinfo_t) -> str:
    """
    Returns size as string, or "" if unknown.
    If array details are known, uses elem_size * nelems.
    """
    try:
        if mt.is_array():
            atd = tif.array_type_data_t()
            if mt.get_array_details(atd):
                ne = int(atd.nelems)
                esz = int(atd.elem_type.get_size() or 0)
                if ne > 0 and esz > 0:
                    return str(ne * esz)
                return ""
        sz = int(mt.get_size() or 0)
        return str(sz) if sz > 0 else ""
    except Exception:
        return ""

def _fallback_type_and_size_by_item(ea: int):
    n = ida_bytes.get_item_size(ea) or 0
    if n <= 0:
        return ("", "")
    if n == 1: return ("uint8_t", "1")
    if n == 2: return ("uint16_t", "2")
    if n == 4: return ("uint32_t", "4")
    if n == 8: return ("uint64_t", "8")
    return (f"uint8_t[{n}]", str(n))

def _collect_description_from_ida_comments(ea: int) -> str:
    """
    Concatenate non-repeatable + repeatable comments at EA.
    Preserves line breaks (later converted to <br>).
    """
    parts = []
    for rep in (0, 1):
        try:
            cmt = idc.get_cmt(ea, rep)
        except Exception:
            cmt = None
        if cmt:
            parts.append(str(cmt))
    # De-dup exact duplicates, keep order
    seen = set()
    out = []
    for p in parts:
        if p not in seen:
            seen.add(p)
            out.append(p)
    return "\n".join(out).strip()

def _md_escape_cell(s: str) -> str:
    """
    Escape content so it can live safely inside a markdown table cell.
    - newlines => <br>
    - '|' => '\|'
    """
    if not s:
        return ""
    s = s.replace("\r\n", "\n").replace("\r", "\n")
    s = s.replace("|", r"\|")
    s = "<br>".join([ln.rstrip() for ln in s.split("\n")])
    return s.strip()

def _fmt_addr(ea: int) -> str:
    # fixed-width 8-digit hex for 32-bit Amiga addresses
    return f"0x{int(ea):08X}"

def collect_all_named_data(include_segments=None, include_auto=True):
    """
    Return [(ea, name)] for all named *data* items in selected segments.
    """
    results = []
    for seg_ea in idautils.Segments():
        seg = ida_segment.getseg(seg_ea)
        if not seg:
            continue
        segname = ida_segment.get_segm_name(seg)
        if include_segments and segname not in include_segments:
            continue

        for ea in idautils.Heads(seg.start_ea, seg.end_ea):
            flags = ida_bytes.get_flags(ea)
            if ida_bytes.is_code(flags):
                continue
            name = ida_name.get_name(ea)
            if not name:
                continue
            if not include_auto and ida_name.is_auto_name(ea):
                continue
            results.append((int(ea), str(name)))
    return sorted(results, key=lambda p: p[0])

def pick_output_path():
    try:
        base_dir = os.path.dirname(ida_nalt.get_input_file_path() or "")
        if not base_dir:
            base_dir = os.getcwd()
    except Exception:
        base_dir = os.getcwd()

    default_path = os.path.join(base_dir, DEFAULT_OUT_NAME)
    path = ida_kernwin.ask_file(True, default_path, "Save Variables.md as")
    if not path:
        raise RuntimeError("User canceled save dialog")
    return os.path.abspath(path)

# -----------------------------
# Main
# -----------------------------

def main():
    out_path = pick_output_path()

    names = []
    for ea, nm in collect_all_named_data(
        include_segments=INCLUDE_SEGMENTS if INCLUDE_SEGMENTS else None,
        include_auto=True
    ):
        if not nm or is_function(ea):
            continue
        segname = _segname_of_ea(ea)
        if INCLUDE_SEGMENTS and segname not in INCLUDE_SEGMENTS:
            continue
        names.append((ea, nm))
    names.sort(key=lambda p: p[0])

    rows = []
    for ea, nm in names:
        if SKIP_STRING_LITERALS and is_string_literal(ea):
            continue
        
        mt = tinfo_at(ea)

        if mt:
            ty = _ctype_md_from_tinfo(mt)
            sz = _size_bytes_from_tinfo(mt)
            if not ty or ty == "uint8_t[]":
                fty, fsz = _fallback_type_and_size_by_item(ea)
                ty = ty or fty
                sz = sz or fsz
        else:
            ty, sz = _fallback_type_and_size_by_item(ea)

        desc = _collect_description_from_ida_comments(ea)

        rows.append((
            _fmt_addr(ea),
            nm,
            _md_escape_cell(ty),
            _md_escape_cell(sz),
            _md_escape_cell(desc),
        ))

    with open(out_path, "w", encoding="utf-8") as f:
        f.write("|Address|Name|Type|Size (Bytes)|Description|\n")
        f.write("|---:|---|---|---:|---|\n")
        for addr, nm, ty, sz, desc in rows:
            f.write(f"|{addr}|{nm}|{ty}|{sz}|{desc}|\n")

    idaapi.msg(f"[emit_variables_md] Wrote: {out_path} (rows={len(rows)})\n")

if __name__ == "__main__":
    main()
