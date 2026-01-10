# export_sparse_asm.py  -- IDA 9.0 friendly "sparse ASM" exporter with deduped wrapped comments
#
# Updates:
# - MIN_ORG_HOLE_BYTES and name/xref checks to prevent "org spam"
# - Replace uninitialized data / `<?>` with:   ds.b <size> ; Type[Count]
#   (sizes pulled from Local Types; arrays & UDTs supported)
# - Emit Local Types (enums & structs) as EQU values
# - Rewrite sizeof(Type), Type.member, (var.member), and base.member - base(...) to EQUs
# - Nested members supported via MEMBER_CHILD_MAP (e.g., Type.m1.m2 => TYPE_M1 + CHILD_M2)
# - IDA 9.0 API: get_pointed_object() returns a tinfo_t (no out-param)

import re

import idaapi
import ida_bytes
import ida_funcs
import ida_kernwin
import ida_lines
import ida_name
import ida_nalt
import ida_segment
import ida_typeinf
import idautils
import idc
from ida_lines import tag_remove, E_PREV, E_NEXT

# ---------------- settings ----------------
SKIP_SEG_NAMES           = {"AMIGA_CUSTOM", "CIAA", "CIAB"}  # skip these segments
ASM_OUT_EXT              = ".s"
INCLUDE_UNNAMED_SEGS     = True
EMIT_CODE_LABELS         = True
EMIT_DATA_LABELS         = True
EMIT_ORG                 = False
ORG_DIRECTIVE            = "        ORG"
ENTRY_POINT_LABEL        = "j_start"
CODE_SECTION_NAME        = "text,CODE"
INDENT_COL               = 16
COMMENT_COL              = 40
EQU_NAME_COL             = 40
INCLUDE_NAME_IN_PROTO    = True
KEEP_IDA_EOL_COMMENTS    = True
FIX_RELOC_ERRORS         = True

# org emission control
MIN_ORG_HOLE_BYTES       = 16
CHECK_HOLE_NAMES         = True

# If True, ask at runtime whether to emit BSS as EQU
PROMPT_BSS_MODE          = False

# struct EQU lookup:
#   STRUCT_EQU_MAP[struct_name_lower][member_name_lower] -> "STRUCT_MEMBER"
STRUCT_EQU_MAP           = {}
# child UDT lookup for nested members:
#   MEMBER_CHILD_MAP[struct_name_lower][member_name_lower] -> "CHILDSTRUCT" (ASM ID)
MEMBER_CHILD_MAP         = {}

DEFAULT_UNSIGNED_STYLE = "hex"   # "hex" or "dec"
FORMAT_POLICY = {
    # "direction": "dec",
    # "cards": "dec",
}

# ----- regex (compiled once) -----
RE_DECL_PTR_ARRAY = re.compile(r'\*\s*\[\s*(\d+)\s*\]')
RE_UDT_LITERAL = re.compile(r'^\s*([A-Za-z_]\w*)\s*<')
RE_DECL_UDT_ARRAY = re.compile(
    r'^(?:struct\s+|union\s+)?'        # optional 'struct ' or 'union '
    r'([A-Za-z_]\w*)'                  # 1: type name (Sprite)
    r'(?:\s+\**[A-Za-z_]\w*)?'         # optional var name (with optional leading * on var)
    r'\s*\[\s*(\d+)\s*\]\s*;?$'        # [N]
)
RE_SIZEOF = re.compile(r'\bsizeof\s*\(\s*([A-Za-z_]\w*)\s*\)')
RE_TYPE_MEMBER = re.compile(r'\b([A-Za-z_]\w*)\s*\.\s*([A-Za-z_]\w*)\b')
RE_ABS_VAR_DOT_IN_PARENS = re.compile(r'\(\s*([A-Za-z_]\w*)\s*\.\s*([A-Za-z_]\w*)(\s*\+\s*[^)]+)?\s*\)')
RE_ABS_VAR_DOT_BARE = re.compile(r'\b([A-Za-z_]\w*)\s*\.\s*([A-Za-z_]\w*)\b')
RE_STRUCT_DIFF = re.compile(r'\b([A-Za-z_]\w*)\s*\.\s*([A-Za-z_]\w*)\s*-\s*\1(\s*\(([^)]+)\))?')
_RE_JMPJSR_BARE = re.compile(
    r'^(\s*)(jsr|jmp)\s+([^\s(;]+)(\s*)(;.*)?$',  # accept dots/$ in symbol
    re.IGNORECASE
)
RE_SP_MOVE_BW = re.compile(
    r'^(?P<lead>\s*move\.(?P<size>[bw]))\s+(?P<src>sp|a7)\s*(?P<comma>,)',
    flags=re.IGNORECASE,
)
_RE_GLOB_SHORT = re.compile(
    r'\((g_(?:currentMenu|menuEntries)[^)]*)\)\.w'
)
LEA_CURRENTMENU_RE = re.compile(
    r'^(\s*(?:[A-Za-z_][A-Za-z0-9_]*\s*:)?\s*lea\s+.*g_currentMenu.*)\.w(\s*,a[0-7]\s*.*)$'
)

LEA_MENUENTRIES_RE = re.compile(
    r'^(\s*(?:[A-Za-z_][A-Za-z0-9_]*\s*:)?\s*lea\s+.*g_menuEntries.*)\.w(\s*,a[0-7]\s*.*)$'
)

# ----- constants -----
MAX_LITERAL_UDT_RUN_ELEMS = 2048  # (kept for parity; not referenced directly)

_NAME_CACHE = None

_EMITTED_CMTS = {}

# ---------- tiny utils ----------

WRAP_CHARS         = 63
MIN_STR_PREFIX     = 12           # require at least this many printable chars before first NUL
MAX_STRING_AGG     = 1 << 16      # safety cap

CUSTOM_BASE        = 0x00DFF000
CUSTOM_END         = 0x00DFF200   # half-open: ($DFF000, $DFF200)

CIAB_BASE          = 0x00BFD000
CIAB_END           = 0x00BFE000   # half-open

CIAA_BASE          = 0x00BFE000
CIAA_END           = 0x00BFF000   # half-open

# Internal state
_BSS_CHAIN_STATE = {}
_PRINTED_CODE_SECTION = False
_PRINTED_BSS_HEADER   = set()   # set of region names we've bannered (BSS_01, BSS_02…)

BSS_REGIONS = [
    ("BSSInChip", "BSS_0", "CHIP", 0x00000400, 0x00100000),  # ($00000400, $00100000)
    ("bss",       "BSS_1", "",     0x0015736A, 0x00200000),  # ($0015736A, $00200000)
]

def BSS_SECTION_NAME(name):
  return f"{name},BSS"

ENABLE_BSS_OFFSETS = True

DEBUG_STR_WRAP = False

def _collect_prefixed_c_string_allow_nonascii(ea: int, limit: int, max_prefix: int = 4) -> tuple[int, int]:
    """
    Accepts: [<=max_prefix bytes that are NOT ASCII-printable (including 0, <0x20, or >0x7E)]
             + [ASCII-printable run (0x20..0x7E)]
             + [NUL terminator]
    Returns (prefix_len, total_len_including_nul) or (0, 0).
    """
    if limit <= 0 or not ida_bytes.is_loaded(ea):
        return (0, 0)

    # scan up to max_prefix bytes that are NOT printable ASCII (allow 0 and high-bit)
    i = 0
    while i < min(max_prefix, limit) and ida_bytes.is_loaded(ea + i):
        b = ida_bytes.get_wide_byte(ea + i)
        if b is None:
            return (0, 0)
        if 0x20 <= b <= 0x7E:
            break
        i += 1

    prefix = i
    if prefix >= limit or not ida_bytes.is_loaded(ea + prefix):
        return (0, 0)

    # require at least 1 printable ASCII char after prefix
    b0 = ida_bytes.get_wide_byte(ea + prefix)
    if b0 is None or not (0x20 <= b0 <= 0x7E):
        return (0, 0)

    j = 0
    saw = False
    while prefix + j < limit and ida_bytes.is_loaded(ea + prefix + j):
        b = ida_bytes.get_wide_byte(ea + prefix + j)
        if b is None:
            return (0, 0)
        if b == 0:
            return (prefix, prefix + j + 1) if saw else (0, 0)
        if not (0x20 <= b <= 0x7E):
            return (0, 0)
        saw = True
        j += 1

    return (0, 0)


def _is_highbit_prefix_only_then_nul(raw: bytes) -> bool:
    """
    Matches the smallest special case like:
        { 0x9C, 0 }   (and optionally trailing zeros if the array is slightly larger)
    """
    if not raw or len(raw) < 2:
        return False
    if raw[0] < 0x80:
        return False
    if raw[1] != 0:
        return False
    return all(b == 0 for b in raw[2:])


def _reset_bss_chain():
    _BSS_CHAIN_STATE.clear()

# 2) Use the pretty name for padding labels inside the region.
def _emit_bss_chain(fh, name, ea, item_len, addr_expr, reg_name):
    """
    Emit a ds.b chain within a BSS region, including the *leading* padding
    from the region base to the first symbol.
    """
    size, label = item_tinfo_size_and_label(ea, item_len)
    st = _BSS_CHAIN_STATE.get(reg_name)
    size_hex = f"${size:X}"

    # Resolve region base once (if known)
    reg = _bss_region_for_ea(ea)
    base = reg[3] if reg else ea

    if not st:
        # First symbol in this region: if it doesn't start at base, emit the leading padding.
        st = {"last_label": None, "last_ea": base, "last_size": 0}
        if ea > base:
            pretty = _format_bss_banner_name(reg_name) if reg_name else "BSS"
            pad_label = f"{pretty}_{ea:X}"
            fh.write(col_indent(f"{pad_label}:") + "\n")
            fh.write(col_indent(f"ds.b ${ea - base:X}") + "\n")
    else:
        # Subsequent symbols: insert padding from end of previous item if needed.
        prev_end = st["last_ea"] + st["last_size"]
        pad = ea - prev_end
        if pad > 0:
            pretty = _format_bss_banner_name(reg_name) if reg_name else "BSS"
            pad_label = f"{pretty}_{ea:X}"
            fh.write(col_indent(f"{pad_label}:") + "\n")
            fh.write(col_indent(f"ds.b ${pad:X}") + "\n")

    # type (if present)
    if label:
        fh.write(f"; {label}\n")

    # Emit the symbol itself
    fh.write(f"{name}:\n")
    fh.write(col_indent(f"ds.b {size_hex}") + "\n")

    # Update chain state
    st["last_label"] = name
    st["last_ea"]    = ea
    st["last_size"]  = size
    _BSS_CHAIN_STATE[reg_name] = st

def _clamp_array_count_to_item(ea: int, count: int) -> int:
    flags = ida_bytes.get_full_flags(ea)
    item_size = ida_bytes.get_item_size(ea)
    elsize = ida_bytes.get_data_elsize(ea, flags)

    if not elsize:
        return count

    return item_size // elsize

def _array_layout_matches_flags(ea: int, elem_size: int, count: int, max_check: int = 8) -> bool:
    """
    Sanity check: verify that there are no *conflicting* data heads inside
    the declared array.

    We ONLY reject the array if IDA has started a new item head whose size
    disagrees with the element size (e.g. array of words, but a dword head
    starts at element #1 for an embedded pointer).

    This keeps legit arrays like __int8[28] intact, even if IDA hasn't
    created per-element data items.
    """
    if elem_size not in (1, 2, 4) or count <= 1:
        # Exotic sizes or single-element "arrays": don't block them here.
        return True

    seg = ida_segment.getseg(ea)
    if not seg:
        return True

    limit = min(count, max_check)
    for i in range(1, limit):  # skip element 0 at ea
        cur = ea + i * elem_size
        if cur >= seg.end_ea:
            break

        f = ida_bytes.get_full_flags(cur)

        # Only care if there's a *new head* here.
        if ida_bytes.is_head(f):
            sz = ida_bytes.get_item_size(cur) or 0
            # If IDA started an item whose size doesn't match elem_size,
            # this conflicts with a packed array layout.
            if sz and sz != elem_size:
                return False

    return True

def _fix_sp_deref(line: str, ea: int | None = None) -> str:
    # Skip if already parenthesized
    if "(sp)" in line.lower() or "(a7)" in line.lower():
        return line
    # move.b/w sp|a7, → move.b/w (sp|a7),
    return RE_SP_MOVE_BW.sub(
        lambda m: f"{m.group('lead')}  ({m.group('src')}){m.group('comma')}",
        line
    )

def _fix_reloc(line: str, *, ea: int | None = None) -> str:
    if "g_currentMenu" not in line and "g_menuEntries" not in line:
        return line

    original = line

    # convert (...).w -> (...).l
    def _repl(m: re.Match) -> str:
        inner = m.group(1)
        return f"({inner}).l"

    line = _RE_GLOB_SHORT.sub(_repl, line)

    m = LEA_CURRENTMENU_RE.match(line)
    if m:
        return f"{m.group(1)}.l{m.group(2)}"

    m = LEA_MENUENTRIES_RE.match(line)
    if m:
        return f"{m.group(1)}.l{m.group(2)}"

    return line
    

def _fixups(line: str, *, ea: int | None = None) -> str:
    line = _fix_sp_deref(line, ea=ea)
    if FIX_RELOC_ERRORS:
        line = _fix_reloc(line, ea=ea)
    return line

def _write_asm(fh, s: str, *, ea: int | None = None, code_col: int = INDENT_COL, cmt_col: int = COMMENT_COL) -> str:
    """
    Centralized writer for ASM lines:
      - applies textual fixups (SP parenthesization, etc.)
      - forces '(pc)' for JSR/JMP (d16,PC) if 'ea' given
      - normalizes a missing space before ';'
      - indents using col_indent / cmt_col_indent automatically
      - writes to fh with a trailing newline
    Returns the final, printed line (without trailing newline).
    """
    s = _fixups(s or "", ea=ea)
    if ea is not None:
        # If this is the ENTRY_POINT_LABEL's first printed line, drop the CODE section + ORG now.
        _maybe_emit_code_section_for_entry(fh, ea)
        s = _force_pc_relative_jmpjsr_if_needed(ea, s)
    s = pad_eol_comment(s)
    # choose indent function based on whether this is a pure comment line
    indent_fn = cmt_col_indent if s.lstrip().startswith(";") else col_indent
    out = indent_fn(s, code_col=code_col, cmt_col=cmt_col)
    fh.write(out + "\n")
    return out

def _emit_bss_header(fh):
    if not ENABLE_BSS_OFFSETS:
        return
    fh.write("\n")
    fh.write("; ===== BSS REGION =====\n")
    for name, type, mem, base, end in BSS_REGIONS:
        fh.write(_equ_line_keepcase(f"{type}_BASE", f"${base:08X}") + "\n")
        fh.write(_equ_line_keepcase(f"{type}_END",  f"${end:08X}")  + "\n")
    fh.write("; ===== END BSS REGION =====\n")

def _bss_region_for_ea(addr: int):
    """Return (region_name, base, end) or None if addr not in any BSS region."""
    if not ENABLE_BSS_OFFSETS:
        return None
    for name, type, mem, base, end in BSS_REGIONS:
        if base <= addr < end:
            return (name, type, mem, base, end)
    return None

def _fmt_bss_or_abs(addr: int) -> str:
    """Format an absolute address using BSS_X_BASE+off if inside a defined BSS region."""
    reg = _bss_region_for_ea(addr)
    if reg:
        name, type, mem, base, _end = reg
        off = addr - base
        return f"{type}_BASE" if off == 0 else f"{type}_BASE+${off:X}"
    return f"${addr:X}"

def _emit_data_type_comment_if_any(fh, ea):
    tdecl = idc.get_type(ea)
    if tdecl:
        fh.write("; " + tdecl + "\n")

def _already_emitted(ea, text_norm):
    s = _EMITTED_CMTS.setdefault(ea, set())
    if text_norm in s:
        return True
    s.add(text_norm)
    return False

def _asm_quote_escape(b: int) -> str | None:
    # printable ASCII except backslash/double-quote
    if 32 <= b <= 126 and b not in (34, 92):
        return chr(b)
    if b == 34:  # "
        return '""'
    return None

def _eol_text_at(ea: int) -> str:
    s = ida_lines.tag_remove(ida_lines.generate_disasm_line(ea, 0) or "")
    _code, cmt = _split_code_and_comment(s)
    if not cmt:
        return ""
    c = cmt.strip()
    return "" if c.lower() == "raw" else c

def _eol_at(ea: int) -> str:
    # keep behaviour identical, but normalize 'raw'
    c = _eol_text_at(ea)
    return c

def _norm_cmt(s: str) -> str:
    return re.sub(r"\s+", " ", (s or "").strip())

def strip_semicolon_comment(s: str) -> str:
    return s.split(";", 1)[0].rstrip()

def collect_symbol_comments(ea, include_eol=True, eol_to_exclude="", include_next=False) -> dict:
    extra_prev = _get_extra_block_lines(ea, E_PREV)
    anterior   = _ida_item_anterior_lines(ea)
    repeatable = _ida_item_repeatable_lines(ea)
    # DO NOT recompute the EOL from IDA here; caller decides whether to include it
    eol        = extract_eol_text(ea) if include_eol else ""
    extra_next = _get_extra_block_lines(ea, E_NEXT) if include_next else []

    norm_eol_exc = _norm_cmt(eol_to_exclude or "")
    seen_from_prior_buckets = set()
    merged: list[str] = []

    def add_bucket(lines: list[str], _bucket_name: str):
        # Keep duplicates *within* a bucket (preserves ASCII boxes/diagrams),
        # but still avoid re-adding lines we've already emitted from earlier buckets.
        local_added = set()
        for raw in lines:
            raw = (raw or "").rstrip()
            if not raw:
                continue
            n = _norm_cmt(raw)

            if norm_eol_exc and n == norm_eol_exc:
                continue
            if n in seen_from_prior_buckets:
                continue

            merged.append(raw)
            local_added.add(n)

        seen_from_prior_buckets.update(local_added)

    add_bucket(extra_prev, "extra_prev")
    add_bucket(anterior,   "anterior")
    add_bucket(repeatable, "repeatable")
    if include_eol and eol:
        add_bucket([eol], "eol")
    add_bucket(extra_next, "extra_next")

    result = {
        "lines": merged,
        "by_source": {
            "extra_prev": extra_prev,
            "anterior": anterior,
            "repeatable": repeatable,
            "eol": eol,
            "extra_next": extra_next,
        }
    }
    return result


def emit_wrapped_comments_dedup(fh, ea, base_line_or_text, indent_fn, _seg_end_ea, *, id="", include_next=False):
    printed_code = base_line_or_text if isinstance(base_line_or_text, str) else ""
    _, printed_inline = _split_code_and_comment(printed_code)
    ida_eol = extract_eol_text(ea)
    ida_eol_norm = _norm_cmt(ida_eol)

    include_eol_effective = not printed_inline
    eol_to_exclude = ida_eol if (printed_inline and ida_eol_norm) else ""

    bundle = collect_symbol_comments(
        ea,
        include_eol=include_eol_effective,
        eol_to_exclude=eol_to_exclude,
        include_next=include_next,     # <— changed
    )

    # NEW: if we intend to include the EOL, force-print it first,
    # and remove any duplicate from the merged buckets.
    if include_eol_effective and ida_eol_norm:
        # Cross-call dedupe: only print if not already printed for this EA
        if not _already_emitted(ea, ida_eol_norm):
            #fh.write(indent_fn(f"; [{id} include_next={include_next}]" + ida_eol) + "\n")
            fh.write(indent_fn("; " + ida_eol) + "\n")
            # Mark as emitted for subsequent calls
            _already_emitted(ea, ida_eol_norm)
        bundle["lines"] = [ln for ln in bundle["lines"] if _norm_cmt(ln) != ida_eol_norm]

    for ln in bundle["lines"]:
        n = _norm_cmt(ln)
        if _already_emitted(ea, n):
            continue
        #fh.write(indent_fn(f"; [{id} include_next={include_next}]" + ln) + "\n")
        fh.write(indent_fn("; " + ln) + "\n")

def _get_extra_block_lines(ea: int, which: int) -> list[str]:
    out = []
    i = 0
    while True:
        s = idc.get_extra_cmt(ea, which + i)
        if not s:
            break
        for ln in tag_remove(s).splitlines():
            ln = ln.rstrip()
            if ln:
                out.append(ln)
        i += 1
    return out

def _ida_item_anterior_lines(ea: int) -> list[str]:
    s = ida_bytes.get_cmt(ea, False) or ""
    if not s:
        return []
    return [ln.rstrip() for ln in tag_remove(s).splitlines() if ln.strip()]

def _ida_item_repeatable_lines(ea: int) -> list[str]:
    s = ida_bytes.get_cmt(ea, True) or ""
    if not s:
        return []
    return [ln.rstrip() for ln in tag_remove(s).splitlines() if ln.strip()]

def _find_segment_range(seg_name: str, fb_start: int, fb_end: int) -> tuple[int, int]:
    """Prefer an IDA segment by name, else use provided fallback range."""
    for s_ea in idautils.Segments():
        seg = ida_segment.getseg(s_ea)
        if not seg:
            continue
        nm = (ida_segment.get_segm_name(seg) or "").strip()
        if nm.upper() == seg_name.upper():
            return int(seg.start_ea), int(seg.end_ea)
    return fb_start, fb_end

def _emit_named_region_equ_block(fh, header_title: str, seg_name: str, fb_start: int, fb_end: int):
    """Generic: walk *named heads* in the region and emit NAME EQU $XXXXXXXX."""
    start_ea, end_ea = _find_segment_range(seg_name, fb_start, fb_end)
    seen = set()

    fh.write(f"\n; ===== {header_title} (EQU) =====\n")
    ea = start_ea
    while ea < end_ea:
        nm = explicit_symbol_text_at(ea)
        if nm and nm not in seen:
            seen.add(nm)
            fh.write(_equ_line_keepcase(nm, f"$%08X" % ea) + "\n")

        nxt = ida_bytes.next_head(ea, end_ea)
        if nxt == idc.BADADDR or nxt <= ea:
            ea += 2  # conservative bump (regs are word-aligned/mirrored)
        else:
            ea = nxt
    fh.write(f"; ===== END {header_title} =====\n")

def emit_ciab_equ_block(fh):
    _emit_named_region_equ_block(fh, "AMIGA CIAB REGISTERS", "CIAB", CIAB_BASE, CIAB_END)

def emit_ciaa_equ_block(fh):
    _emit_named_region_equ_block(fh, "AMIGA CIAA REGISTERS", "CIAA", CIAA_BASE, CIAA_END)

def _find_amiga_custom_range() -> tuple[int, int]:
    """Prefer the 'AMIGA_CUSTOM' segment if it exists; otherwise fall back to fixed range."""
    for s_ea in idautils.Segments():
        seg = ida_segment.getseg(s_ea)
        if not seg:
            continue
        nm = (ida_segment.get_segm_name(seg) or "").strip()
        if nm.upper() == "AMIGA_CUSTOM":
            return int(seg.start_ea), int(seg.end_ea)
    return CUSTOM_BASE, CUSTOM_END

def emit_amiga_custom_equ_block(fh):
    """Emit one EQU per *named* head in the custom-chip window."""
    start_ea, end_ea = _find_amiga_custom_range()
    seen = set()

    fh.write("\n; ===== AMIGA CUSTOM REGISTERS (EQU) =====\n")

    ea = start_ea
    while ea < end_ea:
        nm = explicit_symbol_text_at(ea)
        if nm and nm not in seen:
            seen.add(nm)
            # Keep original case; print 8-digit hex with leading zeros.
            fh.write(_equ_line_keepcase(nm, f"$%08X" % ea) + "\n")

        nxt = ida_bytes.next_head(ea, end_ea)
        if nxt == idc.BADADDR or nxt <= ea:
            # advance conservatively (most custom regs are word-aligned)
            ea += 2
        else:
            ea = nxt

    fh.write("; ===== END AMIGA CUSTOM REGISTERS =====\n")

def _cstr_prefix_info(ea: int, limit: int) -> tuple[int, bool, int]:
    """
    Returns (prefix_len, has_nul, total_len_if_has_nul_else_0)
    prefix_len counts printable [0x20..0x7E] from start until NUL/non-printable.
    """
    if limit <= 0 or not ida_bytes.is_loaded(ea):
        return (0, False, 0)
    i = 0
    while i < limit and ida_bytes.is_loaded(ea + i):
        b = ida_bytes.get_wide_byte(ea + i)
        if b == 0:
            return (i, True, i + 1)
        if b < 0x20 or b > 0x7E:
            return (i, False, 0)
        i += 1
    return (i, False, 0)

def _collect_contiguous_byte_heads_until_next_label(ea: int, seg_end: int, limit: int = MAX_STRING_AGG) -> tuple[bytes, int]:
    """
    Starting at ea, collect raw bytes across contiguous BYTE data heads
    until a named address or non-byte head, or seg_end/limit is hit.
    Returns (bytes_blob, end_ea_exclusive).
    """
    out = bytearray()
    cur = ea
    while cur < seg_end and len(out) < limit:
        if cur != ea and name_at(cur):                 # stop at next label
            break
        f = ida_bytes.get_full_flags(cur)
        if not (ida_bytes.is_head(f) and ida_bytes.is_data(f) and ida_bytes.is_byte(f)):
            break
        sz = ida_bytes.get_item_size(cur) or 1
        if not _is_range_loaded(cur, sz):
            break
        out.extend(ida_bytes.get_bytes(cur, sz) or b"")
        nxt = ida_bytes.next_head(cur, seg_end)
        if nxt == idc.BADADDR or nxt <= cur:
            cur += sz
            break
        cur = nxt
    return (bytes(out), cur)

def _emit_wrapped63_from_bytes(fh, blob: bytes):
    """
    blob = full item bytes (may contain text, NUL, and tail data).
    Emits:
      - 63-char quoted lines for the printable prefix up to first NUL
      - appends NUL (0) and remaining tail as tokens on the last line
    """
    if not blob:
        return

    # NEW: compress all-zero blobs and avoid emitting dc.b '' / huge token runs
    if all(b == 0 for b in blob):
        fh.write(col_indent(f"dcb.b ${len(blob):X},0") + "\n")
        return

    # split at first NUL
    nul = blob.find(b"\x00")
    if nul == -1:
        prefix, has_nul, tail = blob, False, b""
    else:
        prefix, has_nul, tail = blob[:nul], True, blob[nul+1:]

    # prefix must be clean printable
    if any((c < 0x20 or c > 0x7E) for c in prefix):
        # caller should have gated this; fall back just in case
        parts = [f"${b:02X}" for b in blob]
        fh.write(col_indent("dc.b " + ",".join(parts)) + "\n")
        return

    # split prefix into 63-char chunks
    def _sq(s: str) -> str: return s.replace("'", "''")
    text = prefix.decode("latin-1", "ignore")
    # IMPORTANT: do NOT force a dummy empty chunk; that causes dc.b '' when prefix is empty
    chunks = [text[i:i+WRAP_CHARS] for i in range(0, len(text), WRAP_CHARS)]

    for c in chunks[:-1]:
        fh.write(col_indent(f"dc.b '{_sq(c)}'") + "\n")

    # tail tokens: include the 0 (if had NUL), then printable groups as quoted,
    # otherwise hex bytes
    tokens = []
    if has_nul:
        tokens.append("0")

    i, n = 0, len(tail)
    while i < n:
        b = tail[i]
        if 0x20 <= b <= 0x7E:
            j = i
            while j < n and 0x20 <= tail[j] <= 0x7E:
                j += 1
            tokens.append("'" + _sq(tail[i:j].decode('latin-1', 'ignore')) + "'")
            i = j
        else:
            tokens.append(f"${b:02X}")
            i += 1

    # Emit final portion with a per-line cap (and without ever producing dc.b '')
    per_line = 16
    all_tokens: list[str] = []
    if chunks:
        all_tokens.append("'" + _sq(chunks[-1]) + "'")
    all_tokens.extend(tokens)

    if not all_tokens:
        # Should be rare (e.g., weird empty blob), but keep output valid.
        fh.write(col_indent("dc.b 0") + "\n")
        return

    for j in range(0, len(all_tokens), per_line):
        chunk = all_tokens[j:j+per_line]
        fh.write(col_indent("dc.b " + ",".join(chunk)) + "\n")

def _collect_prefixed_c_string_nonprintable_prefix(ea: int, limit: int, max_prefix: int = 4) -> tuple[int, int]:
    """
    Accept layouts like:
        [<=max_prefix bytes that are NON-printable and NON-zero] + (printable run + NUL | NUL)

    This is intended for cases like Amiga-style currency prefix bytes, e.g.:
        $9C,'%1K',0
        $9C,0

    Returns (prefix_len, total_len_including_nul) or (0, 0).
    """
    if limit <= 0 or not ida_bytes.is_loaded(ea):
        return (0, 0)

    # scan up to max_prefix bytes that are non-printable AND non-zero
    i = 0
    while i < min(max_prefix, limit) and ida_bytes.is_loaded(ea + i):
        b = ida_bytes.get_wide_byte(ea + i)
        if b is None:
            return (0, 0)
        # stop at NUL (terminator) or at first printable
        if b == 0 or _is_printable(b):
            break
        i += 1

    prefix = i
    if prefix <= 0 or prefix >= limit or not ida_bytes.is_loaded(ea + prefix):
        return (0, 0)

    # If the next byte is NUL: accept "prefix + empty string"
    b0 = ida_bytes.get_wide_byte(ea + prefix)
    if b0 is None:
        return (0, 0)
    if b0 == 0:
        return (prefix, prefix + 1)

    # Otherwise require printable run then NUL
    if not _is_printable(b0):
        return (0, 0)

    j = 0
    saw = False
    while prefix + j < limit and ida_bytes.is_loaded(ea + prefix + j):
        b = ida_bytes.get_wide_byte(ea + prefix + j)
        if b is None:
            return (0, 0)
        if b == 0:
            return (prefix, prefix + j + 1) if saw else (0, 0)
        if not _is_printable(b):
            return (0, 0)
        saw = True
        j += 1

    return (0, 0)


def _collect_bytes_until_next_named_label(ea: int, seg_end_ea: int) -> tuple[bytes, int]:
    """Bytewise collect starting at ea until: next named label (exclusive), segment end, or non-loaded byte."""
    out = bytearray()
    cur = ea
    while cur < seg_end_ea:
        if cur != ea:
            nm = explicit_symbol_text_at(cur)
            if nm:
                break
        if not ida_bytes.is_loaded(cur):
            break
        b = ida_bytes.get_wide_byte(cur)
        if b is None:
            break
        out.append(b)
        cur += 1
    if DEBUG_STR_WRAP:
        print(f"[wrap63] collected {len(out)} bytes from {ea:08X} to {cur:08X}")
    return bytes(out), cur

def _emit_array_dc(fh, base_ea: int, ti: ida_typeinf.tinfo_t, off: int, member_label: str):
    atd = ida_typeinf.array_type_data_t()
    if not ti.get_array_details(atd):
        _emit_scalar_dc(fh, base_ea, ti, off, member_label)
        return
    elem_t = atd.elem_type
    cnt    = atd.nelems
    esz    = elem_t.get_size() or 1

    if elem_t.is_udt():
        for i in range(cnt):
            fh.write(col_indent(f"; {member_label}[{i}]") + "\n")
            _emit_udt_instance(fh, base_ea, elem_t, off + i * esz, indent_comment=False)

    elif elem_t.is_ptr():
        # --- NEW: clamp so we never cross a labeled head ---
        seg = ida_segment.getseg(base_ea)
        table_start = base_ea + off
        max_end = table_start + cnt * esz
        if seg:
            next_labeled = _next_named_ea_after(table_start, seg.end_ea)
            if next_labeled and next_labeled < max_end:
                # cap element count so we stop before the next symbol
                cnt = max(0, (next_labeled - table_start) // esz)

        for i in range(cnt):
            pea  = table_start + i * esz
            pval = _read_int_be(pea, esz)
            fh.write(col_indent(f"dc.l {_ptr_text_or_hex(pval)} ; {member_label}[{i}]") + "\n")

    else:
        for i in range(cnt):
            _emit_scalar_dc(fh, base_ea, elem_t, off + i * esz, f"{member_label}[{i}]")

def _emit_string_wrapped63_itemspan(fh, ea: int, total: int):
    """
    Emit 63-char wrapped quoted lines for the printable prefix up to the first NUL,
    then append the remainder (including NUL and any bytes after it) as tail tokens,
    but STRICTLY within 'total' bytes of the current item.
    """
    if total <= 0:
        return
    raw = ida_bytes.get_bytes(ea, total) or b""
    if not raw:
        return

    # NEW: compress all-zero items (e.g., dcb.b $60,0) and avoid dc.b ''
    if raw and all(b == 0 for b in raw):
        line = f"dcb.b ${total:X},0"
        eol = _eol_at(ea)
        if eol:
            line += f" ; {eol}"
        fh.write(col_indent(line) + "\n")
        return

    # UPDATED:
    # Handle "control-prefix + string + 0 + string + 0" layouts like:
    #   5,'ALGERIA',0,'ALGERIAN',0
    # i.e., do NOT require the prefix (before first NUL) to be purely printable.
    def _sq(s: str) -> str:
        return s.replace("'", "''")

    segments: list[str] = []
    i = 0
    n = len(raw)
    while i < n:
        b = raw[i]
        if 0x20 <= b <= 0x7E:
            j = i
            while j < n and 0x20 <= raw[j] <= 0x7E:
                j += 1
            text = raw[i:j].decode("latin-1", "ignore")
            # chunk long printable runs
            for k in range(0, len(text), WRAP_CHARS):
                segments.append("'" + _sq(text[k:k+WRAP_CHARS]) + "'")
            i = j
            continue

        # non-printable byte token
        if b == 0:
            segments.append("0")
        elif b < 0x20:
            # match IDA-style small control bytes as decimal (e.g., 5)
            segments.append(str(b))
        else:
            segments.append(f"${b:02X}")
        i += 1

    if not segments:
        emit_dc_b_numeric_by_tinfo(fh, ea, total)
        return

    # Emit wrapped printable chunks in the "classic" style:
    #   dc.b 'chunk'
    #   dc.b 'chunk'
    #   ...
    #   dc.b 'lastchunk',0,'tail',...         (tail tokens only on the last line)
    #
    # For mixed layouts (control bytes + strings, etc.), fall back to token-per-line grouping.
    first_emitted = True

    def _emit_line(tokens: list[str]):
        nonlocal first_emitted
        out = "dc.b " + ",".join(tokens)
        if first_emitted:
            eol = _eol_at(ea)
            if eol:
                out += f" ; {eol}"
            first_emitted = False
        fh.write(col_indent(out) + "\n")

    # Count leading quoted chunks (i.e. long printable run that got chunked)
    lead_q = 0
    while lead_q < len(segments) and segments[lead_q].startswith("'") and segments[lead_q].endswith("'"):
        lead_q += 1

    if lead_q >= 2:
        # Emit all but the last quoted chunk on their own lines
        for s in segments[:lead_q-1]:
            _emit_line([s])
        segments = segments[lead_q-1:]  # keep last quoted chunk to carry tail tokens

    # Now emit remaining tokens with a conservative per-line cap
    per_line = 16
    for j in range(0, len(segments), per_line):
        _emit_line(segments[j:j+per_line])

def _has_inner_label(ea: int, size: int) -> bool:
    # true if there is a label on any inner byte of the item
    for i in range(1, size):
        if explicit_symbol_text_at(ea + i):
            return True
    return False

def explicit_symbol_text_at(ea: int) -> str:
    """
    Return the exact symbol bound at EA (if any), or "".
    No func-name fallback; no reverse-lookup check.
    """
    # First, the strictest: short name bound exactly at EA
    nm = ida_name.get_short_name(ea)
    if nm:
        return nm
    # Then, visible/local name exactly at EA (no fallback)
    flags = getattr(ida_name, "GN_VISIBLE", 0x01) | getattr(ida_name, "GN_LOCAL", 0x20)
    nm = idc.get_name(ea, flags) or ""
    return nm

def _emit_scalar_dc(fh, base_ea: int, ti: ida_typeinf.tinfo_t, off: int, label: str):
    sz = ti.get_size() or 1
    if ti.is_ptr():
        pval = _read_int_be(base_ea + off, sz)
        text = "0" if pval == 0 else (name_at(pval) or f"$%X" % pval)
        if sz >= 4:
            fh.write(col_indent(f"dc.l {text} ; {label}") + "\n"); return
        elif sz == 2:
            fh.write(col_indent(f"dc.w {text} ; {label}") + "\n"); return
        else:
            fh.write(col_indent(f"dc.b {text} ; {label}") + "\n"); return

    if sz in (1, 2, 4):
        # IMPORTANT: do not inherit IDA EOL on struct members
        _emit_scalar_dc_forced(fh, base_ea + off, sz, label, treat_as_ptr=False, use_eol=False)
        return

    b = _safe_get_bytes(base_ea + off, sz)
    if not b:
        fh.write(col_indent(f"ds.b {sz} ; {label}") + "\n")
        return
    vals = ",".join(str(_to_signed(x, 8)) for x in b)
    fh.write(col_indent(f"dc.b {vals} ; {label} (raw {sz} bytes)") + "\n")

def _emit_scalar_dc_forced(fh, ea, width, label, treat_as_ptr: bool=False, use_eol=False) -> str:
    width = width if width in (1, 2, 4) else 1
    ti = ida_typeinf.tinfo_t()
    have_ti = ida_nalt.get_tinfo(ti, ea)

    # AP_SIGNED override: if set, treat as "unsigned style = hex"
    ap_force_hex = _ap_signed_at(ea)

    # Typed int? Keep signed vs unsigned behaviour strict:
    #   - signed    → decimal (unless AP_SIGNED forces hex)
    #   - unsigned  → hex
    is_signed_int   = bool(have_ti and ti.is_int() and ti.is_signed())
    is_unsigned_int = bool(have_ti and ti.is_int() and not ti.is_signed())

    eol = _eol_text_at(ea) if use_eol else ""
    if not eol:
        if (label or "").strip().lower() != "raw":
            eol = label or ""
        else:
            eol = ""

    def _write(mnem: str, text: str, eol_text: str) -> str:
        cmt = f" ; {eol_text}" if eol_text else ""
        line = col_indent(f"{mnem} {text}{cmt}") + "\n"
        fh.write(line); return line[:-1]

    if width == 1:
        uv = ida_bytes.get_wide_byte(ea)
        if ap_force_hex:
            txt = _fmt_u(uv, 1)
        elif is_signed_int:
            txt = _fmt_s_dec(uv, 8)
        elif is_unsigned_int:
            txt = _fmt_u(uv, 1)
        else:
            txt = _fmt_s_dec(uv, 8) if (uv & 0x80) else _fmt_u(uv, 1)
        return _write("dc.b", txt, eol)

    if width == 2:
        uv = ida_bytes.get_wide_word(ea)
        if ap_force_hex:
            txt = _fmt_u(uv, 2)
        elif is_signed_int:
            txt = _fmt_s_dec(uv, 16)
        elif is_unsigned_int:
            txt = _fmt_u(uv, 2)
        else:
            txt = _fmt_s_dec(uv, 16) if (uv & 0x8000) else _fmt_u(uv, 2)
        return _write("dc.w", txt, eol)

    # width == 4
    uv = ida_bytes.get_wide_dword(ea)

    base_line = disasm_line(ea)
    eol = extract_eol_text(base_line) or label
    eol_lower = (eol or "").strip().lower()

    text_ptr = None
    if treat_as_ptr or (have_ti and ti.is_ptr()):
        text_ptr = _name_or_hex_for_ptr(uv)
    else:
        cand = _name_or_hex_for_ptr(uv)
        if not cand.startswith("$"):
            text_ptr = cand

    if text_ptr is not None:
        synth = None
        if (not eol) or eol_lower == "raw":
            if _looks_like_c_string(uv, maxlen=256):
                chars = []
                i = 0
                while ida_bytes.is_loaded(uv + i):
                    b = ida_bytes.get_wide_byte(uv + i)
                    if b == 0 or i >= 128:
                        break
                    if not _is_printable(b):
                        chars = []
                        break
                    chars.append(chr(b)); i += 1
                if chars:
                    synth = '"' + ''.join(chars).replace('"', '""') + '"'
        final_cmt = synth if synth is not None else (eol if eol_lower != "raw" else "")
        line = col_indent(f"dc.l {text_ptr}" + (f" ; {final_cmt}" if final_cmt else "")) + "\n"
        fh.write(line)
        return line.rstrip("\n")

    if ap_force_hex:
        txt = _fmt_u(uv, 4)
    elif is_signed_int:
        txt = _fmt_s_dec(uv, 32)
    elif is_unsigned_int:
        txt = _fmt_u(uv, 4)
    else:
        txt = _fmt_s_dec(uv, 32) if (uv & 0x80000000) else _fmt_u(uv, 4)
    return _write("dc.l", txt, eol)


def _rebuild_name_cache():
    """Build a fast EA->name map once per export run."""
    global _NAME_CACHE
    _NAME_CACHE = {}
    try:
        for ea, nm in idautils.Names():
            if nm:
                _NAME_CACHE[int(ea)] = nm
    except Exception:
        _NAME_CACHE = {}

def name_at(ea: int) -> str:
    """Best-effort resolver for any label (data or code) at EA."""
    global _NAME_CACHE
    if _NAME_CACHE is None:
        _rebuild_name_cache()

    try:
        if ea in _NAME_CACHE:
            return _NAME_CACHE[ea]
    except Exception:
        pass

    # 1) direct symbol queries
    try:
        nm = ida_name.get_short_name(ea)
        if nm:
            _NAME_CACHE[ea] = nm
            return nm
    except Exception:
        pass

    GN_VISIBLE = getattr(ida_name, "GN_VISIBLE", 0x01)
    GN_LOCAL   = getattr(ida_name, "GN_LOCAL",   0x20)
    GN_DEM     = getattr(ida_name, "GN_DEMANGLED", 0x200) if hasattr(ida_name, "GN_DEMANGLED") else 0
    for getter in (
        lambda a: idc.get_name(a, GN_VISIBLE | GN_LOCAL | GN_DEM),
        lambda a: idc.get_visible_name(a),
        lambda a: ida_name.get_ea_name(a),
        lambda a: ida_name.get_name(a, GN_VISIBLE | GN_LOCAL | GN_DEM),
        lambda a: ida_name.get_name(a, GN_LOCAL),
        lambda a: ida_name.get_name(a, GN_VISIBLE),
        lambda a: ida_name.get_name(a),
    ):
        try:
            nm = getter(ea)
            if nm:
                _NAME_CACHE[ea] = nm
                return nm
        except Exception:
            continue

    # 2) function fallback
    try:
        fn = idc.get_func_name(ea)
        if fn:
            _NAME_CACHE[ea] = fn
            return fn
    except Exception:
        pass

    # 3) function start + offset (last resort)
    try:
        f = ida_funcs.get_func(ea)
        if f:
            base_nm = name_at(f.start_ea)
            if base_nm:
                off = ea - f.start_ea
                nm = base_nm if off == 0 else f"{base_nm}+{off}"
                _NAME_CACHE[ea] = nm
                return nm
    except Exception:
        pass

    return ""


def _collect_prefixed_c_string_allow_zero(ea: int, limit: int, max_prefix: int = 4) -> tuple[int, int]:
    """
    Like _collect_prefixed_c_string(), but allows 0x00 in the prefix.
    Accepts: [<=max_prefix bytes < 0x20 (including 0)] + printable run + NUL
    Returns (prefix_len, total_len_including_nul) or (0, 0).
    """
    if limit <= 0 or not ida_bytes.is_loaded(ea):
        return (0, 0)

    # scan up to max_prefix control bytes (<0x20), allowing 0
    i = 0
    while i < min(max_prefix, limit) and ida_bytes.is_loaded(ea + i):
        b = ida_bytes.get_wide_byte(ea + i)
        if b is None:
            return (0, 0)
        if b >= 0x20:
            break
        i += 1

    prefix = i
    if prefix <= 0 or prefix >= limit or not ida_bytes.is_loaded(ea + prefix):
        return (0, 0)

    # require printable run
    b0 = ida_bytes.get_wide_byte(ea + prefix)
    if b0 is None or not _is_printable(b0):
        return (0, 0)

    j = 0
    saw = False
    while prefix + j < limit and ida_bytes.is_loaded(ea + prefix + j):
        b = ida_bytes.get_wide_byte(ea + prefix + j)
        if b is None:
            return (0, 0)
        if b == 0:
            return (prefix, prefix + j + 1) if saw else (0, 0)
        if not _is_printable(b):
            return (0, 0)
        saw = True
        j += 1

    return (0, 0)


def _collect_prefixed_c_string(ea: int, limit: int, max_prefix: int = 4) -> tuple[int, int]:
    """
    If bytes look like: [<=max_prefix control bytes (<0x20, !=0)] + printable run + NUL,
    return (prefix_len, total_len_including_nul). Otherwise (0, 0).
    """
    if limit <= 0 or not ida_bytes.is_loaded(ea):
        return (0, 0)
    # scan up to max_prefix control bytes (non-zero, < 0x20)
    i = 0
    while i < min(max_prefix, limit) and ida_bytes.is_loaded(ea + i):
        b = ida_bytes.get_wide_byte(ea + i)
        if b == 0 or b >= 0x20:  # stop at NUL or printable
            break
        i += 1
    prefix = i
    # now expect printable run starting at ea+prefix
    start = ea + prefix
    if start >= ea + limit or not ida_bytes.is_loaded(start):
        return (0, 0)
    j = 0
    saw_printable = False
    while prefix + j < limit and ida_bytes.is_loaded(ea + prefix + j):
        b = ida_bytes.get_wide_byte(ea + prefix + j)
        if b == 0:
            # found terminator; require at least 1 printable char
            return (prefix, prefix + j + 1) if saw_printable else (0, 0)
        if not _is_printable(b):
            return (0, 0)
        saw_printable = True
        j += 1
    return (0, 0)

def _split_code_and_comment(raw: str):
    """Return (code, comment|None), ignoring semicolons inside single or double quoted strings.
       Supports doubled quotes ('') and ("") as escapes."""
    if not raw:
        return raw, None
    in_s = False  # inside single quotes
    in_d = False  # inside double quotes
    i, n = 0, len(raw)
    while i < n:
        ch = raw[i]
        # '' inside '...'
        if in_s and ch == "'" and i+1 < n and raw[i+1] == "'":
            i += 2; continue
        # "" inside "..."
        if in_d and ch == '"' and i+1 < n and raw[i+1] == '"':
            i += 2; continue
        if ch == "'" and not in_d:
            in_s = not in_s; i += 1; continue
        if ch == '"' and not in_s:
            in_d = not in_d; i += 1; continue
        if ch == ';' and not in_s and not in_d:
            return raw[:i], raw[i+1:]
        i += 1
    return raw, None


def col_indent(s: str, code_col: int = INDENT_COL, cmt_col: int = COMMENT_COL) -> str:
    raw = s.rstrip("\n")
    if not raw:
        return raw

    # Pure comment line → indent as a comment
    if raw.lstrip().startswith(";"):
        return (" " * code_col) + raw.lstrip()

    code, comment = _split_code_and_comment(raw)

    # True label: code-part ends with ':' (ignore colon in comment)
    if code.rstrip().endswith(":"):
        if comment is None:
            return code.rstrip()  # label alone stays flush-left
        left = code.rstrip()
        pad = max(1, cmt_col - len(left))
        return left + (" " * pad) + "; " + comment.strip()

    # Normal code line
    left = (" " * code_col) + code.strip()
    if comment is None:
        return left
    pad = max(1, cmt_col - len(left))
    return left + (" " * pad) + "; " + comment.strip()

def cmt_col_indent(s: str, code_col: int = INDENT_COL, cmt_col: int = COMMENT_COL) -> str:
    raw = s.rstrip("\n")
    if not raw:
        return raw
    # For pure comment lines, align at the comment column (not code column)
    if raw.lstrip().startswith(";"):
        return (" " * cmt_col) + raw.lstrip()
    # Otherwise, keep normal behavior
    return col_indent(s, code_col, cmt_col)

def _name_or_hex_for_ptr(val: int) -> str:
    """
    Return best symbol for an address or hex if none.
    Tries short/visible/ea names, then func+offset.
    """
    if val == 0:
        return "0"

    # try multiple name APIs
    for getter in (
        ida_name.get_short_name,
        ida_name.get_ea_name,
        ida_name.get_name,
    ):
        try:
            nm = getter(val)
            if nm:
                return nm
        except Exception:
            pass

    try:
        nm = idc.get_name(val, 0) or idc.get_visible_name(val)
        if nm:
            return nm
    except Exception:
        pass

    # function + offset
    try:
        f = ida_funcs.get_func(val)
        if f:
            fname = (ida_name.get_short_name(f.start_ea)
                     or ida_name.get_ea_name(f.start_ea)
                     or idc.get_name(f.start_ea, 0)
                     or "")
            if fname:
                off = val - f.start_ea
                return fname if off == 0 else f"{fname}+{off}"
    except Exception:
        pass

    return f"${val:08X}"

def _looks_like_pointer_array(ea: int, count_cells: int) -> bool:
    """
    Easier heuristic: if >=2 of first up to 16 dwords resolve to a name/func → pointer table.
    """
    sample = min(count_cells, 16)
    if sample <= 0:
        return False
    hits = 0
    cur = ea
    for _ in range(sample):
        uv = ida_bytes.get_wide_dword(cur)
        if uv and (ida_name.get_name(uv) or ida_funcs.get_func(uv) is not None):
            hits += 1
        cur += 4
    return hits >= 2

def emit_dc_b_as_stringy_chunks(fh, ea: int, count: int):
    end = ea + count

    # find first NUL to terminate the visible part
    i = 0
    while ea + i < end:
        b = ida_bytes.get_wide_byte(ea + i)
        if b == 0:
            break
        if _asm_quote_escape(b) is None:
            emit_dc_b_numeric_by_tinfo(fh, ea, count)
            return
        i += 1

    vis_len = i
    parts = []

    if vis_len > 0:
        txt = []
        for k in range(vis_len):
            txt.append(_asm_quote_escape(ida_bytes.get_wide_byte(ea + k)))
        parts.append('"' + "".join(txt) + '"')

    if ea + vis_len < end and ida_bytes.get_wide_byte(ea + vis_len) == 0:
        parts.append("0")
        vis_len += 1

    cur = ea + vis_len
    while cur < end:
        parts.append(_fmt_u(ida_bytes.get_wide_byte(cur), 1))
        cur += 1

    # NEW: chunk into multiple dc.b lines (no token gets split)
    per_line = 16  # tweak to taste (16/24/32)
    # when you build the per-line 'chunk' list:
    for j in range(0, len(parts), per_line):
        chunk = parts[j:j+per_line]
        line = "dc.b " + ",".join(chunk)

        # Attach the original EOL comment to the FIRST emitted dc.b line of the item,
        # even if that line contains multiple tokens (e.g., '"@" , 0').
        # This keeps comments like the string "flags" note on the same line as dc.b.
        if j == 0:
            # EOL is bound to the head at 'ea'
            eol_first = _eol_at(ea)
            if eol_first:
                line += f" ; {eol_first}"

        fh.write(col_indent(line) + "\n")


def emit_dc_b_numeric_by_tinfo(fh, ea: int, count: int):
    ti = ida_typeinf.tinfo_t()
    signed_elem = False
    if ida_nalt.get_tinfo(ti, ea) and ti.is_array():
        atd = ida_typeinf.array_type_data_t()
        if ti.get_array_details(atd):
            et = atd.elem_type
            if et.is_int() and et.get_size() == 1:
                signed_elem = et.is_signed()

    if _ap_signed_at(ea):
        signed_elem = True

    per_line = 16
    end = ea + count
    cur = ea
    first = True
    while cur < end:
        take = min(per_line, end - cur)
        bs = ida_bytes.get_bytes(cur, take) or b""
        parts = []
        for b in bs:
            parts.append(_fmt_s_dec(b, 8) if signed_elem else _fmt_u(b, 1))
        line = "dc.b " + ",".join(parts)

        if first:
            eol = _eol_at(ea)
            if eol:
                line += f" ; {eol}"
            first = False

        fh.write(col_indent(line) + "\n")
        cur += take

def _fmt_u(uv: int, sz: int) -> str:
    if   sz == 1: return f"${uv:02X}"
    elif sz == 2: return f"${uv:04X}"
    elif sz == 4: return f"${uv:08X}"
    return f"${uv:X}"

def _fmt_s_dec(uv: int, bits: int) -> str:
    return str(_to_signed(uv, bits))

def _is_plain_char_tinfo(ti: ida_typeinf.tinfo_t) -> bool:
    try:
        return (ti.get_type_name() or "").strip() == "char"
    except Exception:
        return False

def _is_printable(b: int) -> bool:
    return 0x20 <= b <= 0x7E

def _is_exact_decl_char_array(ea: int) -> bool:
    """
    True only for exact 'char name[N]' (NOT pointer; NOT signed/unsigned char; NOT __int8),
    allowing leading qualifiers like 'const'.
    """
    cdecl = (idc.get_type(ea) or "").strip().lower()

    # Strip common qualifiers anywhere in the decl
    cdecl = re.sub(r'\b(const|volatile|restrict)\b', '', cdecl)

    # Normalize whitespace
    cdecl = cdecl.replace(" ", "")

    return (
        "[" in cdecl and "]" in cdecl and "*" not in cdecl
        and cdecl.startswith("char")               # now matches "const char" too after stripping
        and not cdecl.startswith("signedchar")
        and not cdecl.startswith("unsignedchar")
        and "__int8" not in cdecl
    )

def _looks_like_c_string(ea: int, maxlen=256) -> bool:
    if not ida_bytes.is_loaded(ea):
        return False
    saw = False
    for i in range(maxlen):
        if not ida_bytes.is_loaded(ea+i):
            return False
        v = ida_bytes.get_wide_byte(ea+i)
        if v is None:
            return False
        if v == 0:
            return saw
        if not _is_printable(v):
            return False
        saw = True
    return False

def _asm_id(s: str) -> str:
    s = s or ""
    s = s.replace("struct ", "").replace("union ", "").replace("enum ", "")
    s = re.sub(r"[^A-Za-z0-9_]", "_", s.strip())
    return s.upper()


def _coerce_bool_tuple(ret, default_end=None):
    if isinstance(ret, tuple) and len(ret) == 2:
        return bool(ret[0]), ret[1]
    if isinstance(ret, bool):
        return ret, default_end
    return False, default_end


def _advance_or_min(ea, suggested_end, seg_end_ea, fallback_len=1):
    if suggested_end is None or suggested_end <= ea:
        suggested_end = ea + max(1, int(fallback_len))
    return min(int(suggested_end), int(seg_end_ea))


def _safe_get_bytes(ea: int, size: int) -> bytes:
    try:
        if size is None:
            return b""
        size = int(size)
        if size <= 0:
            return b""
        seg = ida_segment.getseg(ea)
        if seg:
            max_len = max(0, int(seg.end_ea) - int(ea))
            if size > max_len:
                size = max_len
        if size <= 0:
            return b""
        return ida_bytes.get_bytes(int(ea), int(size)) or b""
    except Exception:
        return b""


def _is_range_loaded(ea: int, size: int) -> bool:
    if size <= 0:
        return False
    end = ea + size
    cur = ea
    while cur < end:
        if not ida_bytes.is_loaded(cur):
            return False
        cur += 1
    return True


def _read_int_be(ea: int, size: int) -> int:
    size = int(size)
    if size == 1:
        return ida_bytes.get_wide_byte(int(ea))
    if size == 2:
        return ida_bytes.get_wide_word(int(ea))
    if size == 4:
        return ida_bytes.get_wide_dword(int(ea))
    b = _safe_get_bytes(ea, size)
    v = 0
    for byte in b:
        v = (v << 8) | (byte if isinstance(byte, int) else ord(byte))
    return v

def _ap_signed_at(ea: int) -> bool:
    """
    Return True if the data item at EA has the AP_SIGNED flag set.
    This is our manual override: if set, we always emit numeric values as hex.
    """
    params = ida_nalt.array_parameters_t()
    has_params = ida_nalt.get_array_parameters(params, ea)

    if has_params is None:
        return False
    
    return (params.flags & ida_nalt.AP_SIGNED) != 0

def _to_signed(val: int, bits: int) -> int:
    mask = (1 << bits) - 1
    v = val & mask
    sign = 1 << (bits - 1)
    return v - (1 << bits) if (v & sign) else v

def _dc_mnemonic_for_size(sz: int) -> str:
    if sz == 1: return "dc.b"
    if sz == 2: return "dc.w"
    if sz == 4: return "dc.l"
    return "dc.b"  # fallback


def _ptr_text_or_hex(addr: int) -> str:
    if addr == 0:
        return "0"
    nm = name_at(addr)
    return nm if nm else f"$%X" % addr


def _next_named_ea_after(ea: int, seg_end: int) -> int:
    cur = ida_bytes.next_head(ea, seg_end)
    best = seg_end
    while cur != idc.BADADDR and cur < seg_end:
        if name_at(cur):     # has a label
            best = cur
            break
        cur = ida_bytes.next_head(cur, seg_end)
    return best
    

def _force_pc_relative_jmpjsr_if_needed(ea: int, line: str) -> str:
    """If opcode at ea is JSR/JMP (d16,PC), ensure '(pc)' is present on a bare symbol."""
    try:
        op = ida_bytes.get_wide_word(ea) & 0xFFFF
    except Exception:
        op = 0

    if op not in (0x4EBA, 0x4EFA):  # JSR (PC,disp16) / JMP (PC,disp16)
        return line

    # Look only at the code part (before ';') when checking for '(pc)'
    base, _, comment = line.partition(';')
    if '(pc' in base.lower():
        return line  # already pc-relative

    m = _RE_JMPJSR_BARE.match(base)
    if not m:
        return line

    indent, mnem, target, sp, _ = m.groups()

    # Skip immediates/numerics
    if target.startswith(('#', '$')):
        return line

    patched_base = f"{indent}{mnem} {target}(pc){sp}"
    patched = patched_base + (';' + comment if comment else '')
    return patched


def _data_flags_width_and_count(ea: int):
    f = ida_bytes.get_full_flags(ea)
    if not ida_bytes.is_data(f):
        return (0, 0)
    total = ida_bytes.get_item_size(ea) or 0
    if total <= 0:
        return (0, 0)
    # derive unit from flags
    if ida_bytes.is_word(f):      unit = 2
    elif ida_bytes.is_dword(f):   unit = 4
    elif ida_bytes.is_byte(f):    unit = 1
    else:                         unit = 0
    if unit and total >= unit and (total % unit) == 0 and total > unit:
        return (unit, total // unit)
    return (0, 0)


def _enum_member_name_by_value_from_tinfo(enum_ti: ida_typeinf.tinfo_t, value: int) -> str | None:
    et = ida_typeinf.enum_type_data_t()
    if not enum_ti.get_enum_details(et):
        return None
    # Walk all constants (handles aliases/bitfields lists)
    for idx, _, _ in et.all_constants():
        edm = et[idx]
        if int(edm.value) == int(value):
            nm = getattr(edm, "name", "") or ""
            return nm if nm else None
    return None

def _emit_enum_array_grouped(fh, ea: int, enum_ti: ida_typeinf.tinfo_t, stride: int, count: int, header_comment: str | None = None):
    # NEW: do not trust 'count' blindly – clamp it to the bytes at EA
    count = _clamp_array_count_to_item(ea, count)
    
    if header_comment:
        fh.write(col_indent(f"; {header_comment}") + "\n")
    per_line = {1: 16, 2: 8, 4: 6}.get(stride, 16)
    i = 0
    first = True  # <-- add
    while i < count:
        n = min(per_line, count - i)
        vals = []
        base = ea + i * stride
        for j in range(n):
            bs = _safe_get_bytes(base + j*stride, stride)
            uv = int.from_bytes(bs, "big", signed=False) if bs else 0
            nm = _enum_member_name_by_value_from_tinfo(enum_ti, uv)
            vals.append(nm if nm else (f"$%X" % uv))
        mnem = _dc_mnemonic_for_size(stride)
        line = f"{mnem} " + ",".join(vals)

        if first:
            eol = _eol_at(ea)
            if eol:
                line += f" ; {eol}"
            first = False

        fh.write(col_indent(line) + "\n")
        i += n



# ---------- name/disasm/segment helpers ----------

def disasm_line(ea):
    s = ida_lines.generate_disasm_line(ea, 0) or ""
    s = ida_lines.tag_remove(s)
    if not KEEP_IDA_EOL_COMMENTS:
        semi = s.find(';')
        if semi != -1:
            s = s[:semi].rstrip()
    return s


def seg_iter():
    segs = []
    for s_ea in idautils.Segments():
        seg = ida_segment.getseg(s_ea)
        if not seg:
            continue
        nm = ida_segment.get_segm_name(seg)
        if nm in SKIP_SEG_NAMES:
            continue
        if not nm and not INCLUDE_UNNAMED_SEGS:
            continue
        segs.append(seg)
    segs.sort(key=lambda s: s.start_ea)
    return segs


def get_func_proto_text(f):
    fname = name_at(f.start_ea) or ("sub_%X" % f.start_ea)
    tif = ida_typeinf.tinfo_t()
    proto = None
    if ida_nalt.get_tinfo(tif, f.start_ea) and tif.is_func():
        try:
            proto = tif.dstr()
        except Exception:
            proto = None
    if not proto:
        rtype = "void"
        try:
            fti = f.get_func_type()
            if fti:
                rti = fti.get_rettype()
                if rti:
                    rtype = rti.dstr() or rtype
        except Exception:
            pass
        return " ".join(("%s %s(...)" % (rtype, fname)).split())
    s = " ".join(proto.split())
    if INCLUDE_NAME_IN_PROTO and fname not in s:
        i = s.find('(')
        if i > 0:
            left, right = s[:i].rstrip(), s[i:]
            at = ""
            if left.endswith('>') and '@<' in left:
                j = left.rfind('@<'); at, left = left[j:], left[:j].rstrip()
            s = ("%s %s%s%s" % (left, fname, at, right)).strip()
    return s


def pad_eol_comment(s):
    i = s.find(';')
    if i > 0 and not s[i-1].isspace():
        return s[:i] + ' ' + s[i:]
    return s


def func_comments(f):
    lines = []
    rc = ida_funcs.get_func_cmt(f, False)
    if rc:
        lines.extend(rc.splitlines())
    rr = ida_funcs.get_func_cmt(f, True)
    if rr and rr != rc:
        for ln in rr.splitlines():
            if ln not in lines:
                lines.append(ln)
    return lines


def is_func_start(ea):
    f = ida_funcs.get_func(ea)
    return f is not None and f.start_ea == ea


def _is_align_flag(f):
    return hasattr(ida_bytes, "is_align") and ida_bytes.is_align(f)

def _first_loaded_ea_in_segm(seg):
    ea, end = seg.start_ea, seg.end_ea
    while ea < end:
        f = ida_bytes.get_full_flags(ea)
        if (ida_bytes.is_loaded(ea)
            and ida_bytes.is_head(f)
            and (ida_bytes.is_code(f) or ida_bytes.is_data(f))
            and not _is_align_flag(f)):
            return ea
        ea = ida_bytes.next_not_tail(ea)
        if ea == idc.BADADDR or ea >= end:
            break
    return None

def _compute_global_org_base(segs):
    candidates = []
    for s in segs:
        ea = _first_loaded_ea_in_segm(s)
        if ea is not None:
            candidates.append(ea)
    if candidates:
        return min(candidates)
    return min((s.start_ea for s in segs), default=None)


def write_label(fh, name):
    global _PRINTED_CODE_SECTION
    # If this is the entry label, ensure the CODE section+ORG are printed before the label itself.
    if name == ENTRY_POINT_LABEL and not _PRINTED_CODE_SECTION:
        try:
            entry_ea = idc.get_name_ea_simple(name)
        except Exception:
            entry_ea = idc.BADADDR
        if entry_ea != idc.BADADDR:
            _emit_section_and_org(fh, CODE_SECTION_NAME, entry_ea)
            _PRINTED_CODE_SECTION = True
    fh.write("%s:\n" % name)


def write_comment_block(fh, lines):
    for ln in (lines or []):
        fh.write("; " + ln + "\n")


def _format_bss_banner_name(reg_name: str) -> str:
    """
    Turn BSS_0 -> BSS_00, BSS_1 -> BSS_01, etc. (no +1).
    """
    m = re.match(r"^BSS_(\d+)$", reg_name or "")
    if not m:
        return reg_name or "BSS"
    idx = int(m.group(1))
    return f"BSS_{idx:02d}"

def _ensure_bss_section_banner(fh, reg, at_ea: int):
    """
    Before emitting the first symbol that lives inside a given BSS region,
    print:
        SECTION bss,BSS
        ORG $<base or at_ea>
        ; --- BSS_01 00000000-0x00100000 ---
    Only once per region.
    """
    global _PRINTED_BSS_HEADER

    name, type, mem, base, end = reg

    if type in _PRINTED_BSS_HEADER:
        return

    # Always ORG to region base so we can emit leading padding if the first symbol is not at base
    _emit_section_and_org(fh, BSS_SECTION_NAME(name) + (f",{mem}" if mem else ""), base)
    nice = _format_bss_banner_name(type)
    fh.write(f"; --- {nice} {base:08X}-{end:08X} ---\n\n")
    _PRINTED_BSS_HEADER.add(type)

def _emit_section_and_org(fh, section_name: str, org_addr: int):
    fh.write("\n")
    fh.write(f"    SECTION {section_name}\n")
    if EMIT_ORG:
        fh.write(f"    ORG ${org_addr:08X}\n\n")

def _maybe_emit_code_section_for_entry(fh, ea: int):
    """
    When the first code line at ENTRY_POINT_LABEL is about to be printed,
    print:
        SECTION text,CODE
        ORG $<entry_ea>
    Only once.
    """
    global _PRINTED_CODE_SECTION
    if _PRINTED_CODE_SECTION:
        return
    if not ENTRY_POINT_LABEL:
        return
    try:
        entry_ea = idc.get_name_ea_simple(ENTRY_POINT_LABEL)
    except Exception:
        entry_ea = idc.BADADDR
    if entry_ea != idc.BADADDR and int(ea) == int(entry_ea):
        _emit_section_and_org(fh, CODE_SECTION_NAME, entry_ea)
        _PRINTED_CODE_SECTION = True

# ---------- gap (org) detection ----------
def gap_is_real_hole(start_ea, end_ea):
    if end_ea <= start_ea:
        return False
    gap = end_ea - start_ea
    if gap < MIN_ORG_HOLE_BYTES:
        return False
    ea = start_ea
    while ea < end_ea:
        f = ida_bytes.get_full_flags(ea)
        if not ida_bytes.is_unknown(f):
            return False
        ea += 1
    if CHECK_HOLE_NAMES:
        ea = start_ea
        while ea < end_ea:
            if ida_name.get_short_name(ea):
                return False
            if idautils.XrefsTo(ea) or idautils.XrefsFrom(ea):
                return False
            ea += 1
    f_last = ida_bytes.get_full_flags(end_ea - 1)
    return ida_bytes.is_unknown(f_last)


# ---------- comment handling (wrapped/overflow) ----------
def extract_eol_text(disasm_or_ea):
    """
    Accepts either an EA (int) or a disassembly string.
    Returns the EOL comment text (without leading ';'), with quotes handled.
    """
    try:
        if isinstance(disasm_or_ea, int):
            s = tag_remove(ida_lines.generate_disasm_line(disasm_or_ea, 0) or "")
        else:
            s = str(disasm_or_ea or "")
        code, cmt = _split_code_and_comment(s)  # your helper that ignores ';' inside quotes
        return (cmt or "").strip()
    except Exception:
        return ""


def get_indented_anterior_lines(ea):
    s = ida_bytes.get_cmt(ea, False) or ida_bytes.get_cmt(ea, True) or ""
    if not s:
        return []
    s = tag_remove(s)
    return [ln for ln in s.splitlines() if ln]


def get_extra_posterior_lines(ea):
    out, i = [], 0
    while True:
        s = idc.get_extra_cmt(ea, E_NEXT + i)
        if not s:
            break
        s = tag_remove(s)
        out.extend([ln for ln in s.splitlines() if ln])
        i += 1
    return out


def get_extra_anterior_lines(ea):
    out, i = [], 0
    while True:
        s = idc.get_extra_cmt(ea, E_PREV + i)
        if not s:
            break
        s = tag_remove(s)
        out.extend([ln for ln in s.splitlines() if ln])
        i += 1
    return out


#def emit_wrapped_comments_dedup(fh, ea, _base_line_ignored, indent_fn, _seg_end_ea):
#    bundle = collect_symbol_comments(ea, include_eol=not KEEP_IDA_EOL_COMMENTS)
#    for ln in bundle["lines"]:
#        fh.write(indent_fn("; " + ln) + "\n")


# ---------- type/size helpers ----------
def _normalize_type_label(s: str) -> str:
    if not s:
        return s
    s = s.replace("struct ", "").replace("union ", "").replace("enum ", "")
    s = s.replace("const ", "").replace("volatile ", "").replace("restrict ", "")
    s = s.replace(" *", "*").replace("* ", "*")
    s = " ".join(s.split()).strip().rstrip(";")
    return s


def _type_display_name(tif: ida_typeinf.tinfo_t) -> str:
    s = ""
    try:
        s = tif.get_type_name() or ""
    except Exception:
        pass
    if not s:
        try:
            s = tif.dstr() or ""
        except Exception:
            pass
    if not s:
        try:
            s = ida_typeinf.print_tinfo("", 0, 0, ida_typeinf.PRTYPE_1LINE, tif, "", None) or ""
        except Exception:
            s = ""
    return _normalize_type_label(s) or "?"


def array_details(tif: ida_typeinf.tinfo_t):
    if not tif.is_array():
        return None, 0, 0
    atd = ida_typeinf.array_type_data_t()
    if not tif.get_array_details(atd):
        return None, 0, 0
    elem = atd.elem_type
    esz  = elem.get_size() or 0
    cnt  = atd.nelems
    return elem, esz, cnt


def item_tinfo_size_and_label(ea, fallback_len):
    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, ea):
        return fallback_len, None
    total_sz = tif.get_size() or fallback_len
    label = idc.get_type(ea)
    label = _normalize_type_label(label) if label else None
    if tif.is_array():
        elem, esz, cnt = array_details(tif)
        if elem and esz and cnt:
            total_sz = esz * cnt
            if not label:
                label = f"{_type_display_name(elem)}[{cnt}]"
            else:
                if not re.search(r"\[\s*\d+\s*\]$", label):
                    label = f"{label}[{cnt}]"
            return total_sz, label
    if not label:
        label = _type_display_name(tif)
    return total_sz, label


def is_uninitialized_bytes(ea, size):
    if size <= 0:
        return True
    return not _is_range_loaded(ea, size)


# ---------- Local Types -> EQU (IDA 9) ----------
def _udt_child_struct_name_from_tinfo(mt: ida_typeinf.tinfo_t) -> str or None:
    t = ida_typeinf.tinfo_t(mt)
    if t.is_ptr():
        pt = t.get_pointed_object()
        if pt:
            t = pt
    if t.is_array():
        atd = ida_typeinf.array_type_data_t()
        if t.get_array_details(atd):
            t = atd.elem_type
    if t.is_udt():
        nm = t.get_type_name() or t.dstr() or ""
        return _asm_id(nm) if nm else None
    return None


def emit_localtypes_equ(fh):
    til = idaapi.cvar.idati
    tname = ida_typeinf.first_named_type(til, 1)
    while tname:
        tif = ida_typeinf.tinfo_t()
        if tif.get_named_type(til, tname):
            if tif.is_enum():
                et = ida_typeinf.enum_type_data_t()
                if tif.get_enum_details(et):
                    ename = _asm_id(tname)
                    fh.write(f"\n; ==== ENUM: {ename} ====\n")
                    if not et.is_bf():
                        for edm in et:
                            nm = getattr(edm, "name", "") or ""
                            if not nm:
                                continue
                            fh.write(_equ_line(nm, int(edm.value)) + "\n")

            elif tif.is_udt():
                udt = ida_typeinf.udt_type_data_t()
                if tif.get_udt_details(udt):
                    sname = _asm_id(tname)
                    kind = "UNION" if tif.is_union() else "STRUCT"
                    ssize = int(tif.get_size() or 0)
                    fh.write(f"\n; ==== {kind}: {sname} ====\n")
                    fh.write(_equ_line(f"{sname}_SIZE", ssize) + "\n")

                    s_key = sname.lower()
                    for m in udt:
                        mname = _asm_id(getattr(m, "name", "") or "")
                        if not mname:
                            continue
                        m_key = mname.lower()
                        bitoff = int(getattr(m, "offset", 0))
                        off_bytes = bitoff // 8
                        equ_sym = f"{sname}_{mname}"
                        fh.write(_equ_line(equ_sym, off_bytes) + "\n")
                        STRUCT_EQU_MAP.setdefault(s_key, {})[m_key] = equ_sym

                        msz = 0
                        try:
                            msz = int(m.type.get_size() or 0)
                        except Exception:
                            msz = 0
                        if msz:
                            fh.write(_equ_line(f"{sname}_{mname}_SIZE", msz) + "\n")

                        child = _udt_child_struct_name_from_tinfo(m.type)
                        if child:
                            MEMBER_CHILD_MAP.setdefault(s_key, {})[m_key] = child

                        try:
                            if m.is_bitfield():
                                bf = m.bs
                                blen = int(getattr(bf, "width", 0))
                                inner_off = 0
                                if hasattr(bf, "get_member_bits") and callable(bf.get_member_bits):
                                    inner_off = int(bf.get_member_bits())
                                elif hasattr(bf, "sboff"):
                                    inner_off = int(getattr(bf, "sboff", 0))
                                fh.write(_equ_line(f"{sname}_{mname}__BITOFF", inner_off) + "\n")
                                fh.write(_equ_line(f"{sname}_{mname}__BITLEN", blen) + "\n")
                                if blen > 0:
                                    fh.write(_equ_line(f"{sname}_{mname}__BITMASK", (1 << blen) - 1) + "\n")
                        except Exception:
                            pass
        tname = ida_typeinf.next_named_type(til, tname, 1)


def _equ_line(name: str, value: int, padcol=EQU_NAME_COL) -> str:
    lhs = _asm_id(name)
    if not lhs:
        return ""
    pad = " " * max(1, padcol - len(lhs))
    return f"{lhs}{pad}EQU {value}"


def _equ_line_keepcase(name: str, value: int, padcol=EQU_NAME_COL) -> str:
    lhs = (name or "").strip()
    if not lhs:
        return ""
    pad = " " * max(1, padcol - len(lhs))
    return f"{lhs}{pad}EQU {value}"


# ---------- struct expression rewrites ----------
def _lookup_udt_by_name(struct_name: str) -> ida_typeinf.tinfo_t | None:
    til = idaapi.cvar.idati
    tif = ida_typeinf.tinfo_t()
    if tif.get_named_type(til, struct_name):
        return tif if tif.is_udt() else None
    for pref in ("struct ", "union "):
        t2 = ida_typeinf.tinfo_t()
        if t2.get_named_type(til, pref + struct_name):
            return t2 if t2.is_udt() else None
    return None


def _udt_tinfo_from_literal_line(ea: int) -> tuple[ida_typeinf.tinfo_t | None, str | None]:
    line = disasm_line(ea)
    m = RE_UDT_LITERAL.match(line)
    if not m:
        return None, None
    sname = m.group(1)
    tif = _lookup_udt_by_name(sname)
    return (tif, sname) if tif else (None, None)


def _resolve_struct_name_from_var(var_name: str):
    ea = idc.get_name_ea_simple(var_name)
    if ea == idc.BADADDR:
        return None
    tif = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif, ea):
        return None
    if tif.is_ptr():
        pt = tif.get_pointed_object()
        if pt:
            tif = pt
    if tif.is_array():
        atd = ida_typeinf.array_type_data_t()
        if tif.get_array_details(atd):
            tif = atd.elem_type
            if tif.is_ptr():
                pt = tif.get_pointed_object()
                if pt:
                    tif = pt
    if not tif.is_udt():
        return None
    tname = tif.get_type_name() or tif.dstr() or ""
    return _asm_id(tname) if tname else None


def _struct_sym(struct_name_asm: str, member_name: str) -> str | None:
    equs = STRUCT_EQU_MAP.get(struct_name_asm.lower())
    if not equs:
        return None
    return equs.get(member_name.lower())


def _child_struct_of(struct_name_asm: str, member_name: str) -> str | None:
    children = MEMBER_CHILD_MAP.get(struct_name_asm.lower())
    if not children:
        return None
    return children.get(member_name.lower())


def _find_member_equ_by_name(member_name: str) -> str | None:
    member_lc = member_name.lower()
    found = []
    for _, members in STRUCT_EQU_MAP.items():
        equ = members.get(member_lc)
        if equ:
            found.append(equ)
            if len(found) > 1:
                break
    return found[0] if len(found) == 1 else None


def _rewrite_chained_from(struct_name_asm: str, first_member: str, tail_text: str) -> (str, int):
    parts = []
    cur_struct = struct_name_asm
    cur_member = first_member
    sym = _struct_sym(cur_struct, cur_member)
    if not sym:
        return None, 0
    parts.append(sym)

    i = 0
    while True:
        m = re.match(r'\.\s*([A-Za-z_]\w*)', tail_text[i:])
        if not m:
            break
        next_member = m.group(1)
        child_struct = _child_struct_of(cur_struct, cur_member)
        if not child_struct:
            break
        sym2 = _struct_sym(child_struct, next_member)
        if not sym2:
            break
        parts.append('+' + sym2)
        i += m.end()
        cur_struct = child_struct
        cur_member = next_member

    return ''.join(parts), i


def _sub_abs_var_bare(m):
    var = m.group(1)
    mem = m.group(2)

    # NEW: normalize and short-circuit if it's actually a struct type name
    if _asm_id(var).lower() in STRUCT_EQU_MAP:
        return m.group(0)  # let the Type.member pass handle it

    if idc.get_name_ea_simple(var) == idc.BADADDR:
        return m.group(0)

    sname = _resolve_struct_name_from_var(var)
    repl = None
    if sname:
        repl, _ = _rewrite_chained_from(sname, mem, "")
    else:
        repl = _find_member_equ_by_name(mem)
    if not repl:
        return m.group(0)
    return f"{var}+{repl}"


def _sub_abs_var_paren(m):
    var  = m.group(1)
    mem  = m.group(2)
    tail = m.group(3) or ""

    # --- NEW: if the token on the left is actually a TYPE name, do nothing here ---
    if _asm_id(var).lower() in STRUCT_EQU_MAP:
        return m.group(0)  # let the Type.member pass handle it

    sname = _resolve_struct_name_from_var(var)
    repl  = None
    if sname:
        repl, _ = _rewrite_chained_from(sname, mem, "")
    else:
        equ = _find_member_equ_by_name(mem)
        if equ:
            repl = equ
    if not repl:
        return m.group(0)
    return f"({var}+{repl}{tail})"


def rewrite_struct_refs(line: str) -> str:
    semi = line.find(';')
    left, right = (line, "") if semi == -1 else (line[:semi], line[semi:])
    left = RE_SIZEOF.sub(lambda m: _asm_id(f"{m.group(1)}_SIZE"), left)

    # keep struct-diff first
    def _sub_struct_diff(m):
        var, mem, paren_full, _paren_inner = m.group(1), m.group(2), m.group(3), m.group(4)
        sname = _resolve_struct_name_from_var(var)
        if not sname:
            return m.group(0)
        repl, _ = _rewrite_chained_from(sname, mem, "")
        if not repl:
            return m.group(0)
        # If there was a base (e.g., "(a0)"), keep it so we emit disp(base)
        return repl + (paren_full or "")

    # --- NEW: handle Type.member chain FIRST ---
    i = 0
    out = []
    while i < len(left):
        m = RE_TYPE_MEMBER.search(left, i)
        if not m:
            out.append(left[i:]); break
        out.append(left[i:m.start()])
        head, mem = m.group(1), m.group(2)
        if _asm_id(head).lower() in STRUCT_EQU_MAP:
            tail_after = left[m.end():]
            repl, consumed = _rewrite_chained_from(_asm_id(head), mem, tail_after)
            if repl:
                out.append(repl)
                i = m.end() + consumed
                continue
        out.append(left[m.start():m.end()])
        i = m.end()
    left = ''.join(out)

    # THEN allow (var.member) & var.member (actual variables)
    prev = None
    while prev != left:
        prev = left
        left = RE_ABS_VAR_DOT_IN_PARENS.sub(_sub_abs_var_paren, left)
    prev = None
    while prev != left:
        prev = left
        left = RE_ABS_VAR_DOT_BARE.sub(_sub_abs_var_bare, left)

    return left + right

def _find_base_for_ptr(v: int) -> tuple[str | None, int]:
    """
    Given an address v that is likely inside some object (string, array, etc),
    walk backwards in the same segment until we find a named symbol.
    Returns (name, ea) or (None, BADADDR) if no suitable base is found.
    """
    seg = ida_segment.getseg(v)
    if not seg:
        return None, idc.BADADDR

    ea = v
    limit = 0x2000  # don't walk more than 8KB just in case

    while ea >= seg.start_ea and limit > 0:
        nm = idc.get_name(ea, idc.GN_VISIBLE)
        if nm:
            return nm, ea
        ea -= 1
        limit -= 1

    return None, idc.BADADDR


def _format_ptr_array_vals(values: list[int]) -> list[str]:
    """
    Given a small chunk of 32-bit values that we already decided is a pointer array,
    try to detect the 'all point into the same object' pattern (like a big string),
    and emit base+offset. If that pattern isn't there, fall back to the old behavior.
    """
    non_sentinel = [v for v in values if v not in (0, 0xFFFFFFFF)]
    base_name = None
    base_ea = idc.BADADDR
    relative_mode = False

    if non_sentinel:
        # Find base for the first non-sentinel
        nm0, ea0 = _find_base_for_ptr(non_sentinel[0])
        if nm0:
            base_name, base_ea = nm0, ea0
            relative_mode = True
            # Make sure *all* non-sentinel values resolve to the same base
            for v in non_sentinel[1:]:
                nm, ea = _find_base_for_ptr(v)
                if nm != base_name or ea != base_ea:
                    relative_mode = False
                    break

    out: list[str] = []

    # Nice case: everything points into the same object -> base+offset
    if relative_mode and base_name:
        for v in values:
            if v == 0:
                out.append("NULL")
            elif v == 0xFFFFFFFF:
                out.append("$FFFFFFFF")
            else:
                delta = v - base_ea
                if delta == 0:
                    out.append(base_name)
                else:
                    out.append(f"{base_name}+${delta:X}")
        return out

    # Fallback: original pointer behavior (no base+offset trick)
    for v in values:
        if v == 0:
            out.append("NULL")
        elif v == 0xFFFFFFFF:
            out.append("$FFFFFFFF")
        else:
            nm = idc.get_name(v, idc.GN_VISIBLE)
            out.append(nm if nm else _fmt_u(v, 4))
    return out

# ---------- array/scalar emitters ----------
def emit_scalar_array_grouped(
    fh,
    ea: int,
    elem_width: int,
    count: int,
    header_comment: str | None = None,
    signed_elem: bool | None = None,
    elem_t: idaapi.tinfo_t | None = None,
):
    """
    Extended version of scalar array emitter:
    - Emits enum members for enum arrays
    - Emits pointer labels (with base+offset) for pointer-ish long arrays
    - Emits signed/unsigned integers for everything else
    """
    elem_width = 1 if elem_width not in (1, 2, 4) else elem_width
    # NEW: clamp count to actual bytes at EA
    count = _clamp_array_count_to_item(ea, count)
    per_line = {1: 16, 2: 8, 4: 8}[elem_width]

    if header_comment:
        fh.write(col_indent(f"; {header_comment}") + "\n")

    # ---------- ENUM RESOLUTION HELPERS ----------

    def _resolve_enum(ti: idaapi.tinfo_t, v: int) -> str:
        """Return enum name or numeric fallback."""
        enum_t = ti.get_enum()
        if not enum_t:
            return _fmt_u(v, elem_width)

        # exact match
        name = idaapi.get_enum_name(enum_t, v)
        if name:
            return name

        # try bitwise flags
        parts = []
        mid = idaapi.get_first_enum_member(enum_t, v)
        while mid != idc.BADADDR:
            parts.append(idaapi.get_enum_member_name(enum_t, mid))
            mid = idaapi.get_next_enum_member(enum_t, mid, v)
        if parts:
            return "|".join(parts)

        return _fmt_u(v, elem_width)

    # ---------------------------------------------

    if _ap_signed_at(ea):
        signed_elem = True

    first = True
    i = 0

    while i < count:
        n = min(per_line, count - i)
        base = ea + i * elem_width
        vals: list[str] = []

        # ============================
        # BYTE ARRAY
        # ============================
        if elem_width == 1:
            for j in range(n):
                v = ida_bytes.get_wide_byte(base + j)
                vals.append(_fmt_s_dec(v, 8) if signed_elem else _fmt_u(v, 1))
            line = "dc.b " + ",".join(vals)

        # ============================
        # WORD ARRAY
        # ============================
        elif elem_width == 2:
            for j in range(n):
                v = ida_bytes.get_wide_word(base + j * 2)

                if elem_t and elem_t.is_enum():
                    vals.append(_resolve_enum(elem_t, v))
                else:
                    vals.append(_fmt_s_dec(v, 16) if signed_elem else _fmt_u(v, 2))

            line = "dc.w " + ",".join(vals)

        # ============================
        # LONG ARRAY (enum? ptr? int?)
        # ============================
        else:  # elem_width == 4

            # Collect raw values once for this chunk
            raw_vals = [ida_bytes.get_wide_dword(base + j * 4) for j in range(n)]

            # Decide if this array is likely a pointer table
            treat_as_ptr_array = False

            if elem_t and elem_t.is_ptr():
                # Typed as pointer → trust IDA
                treat_as_ptr_array = True
            else:
                # Heuristic: any value that can be tied to a named base
                for vtest in raw_vals:
                    if vtest in (0, 0xFFFFFFFF):
                        continue
                    base_info = _find_base_for_ptr(vtest)
                    if base_info and base_info[1]:
                        treat_as_ptr_array = True
                        break

            # ENUM ARRAY?
            if elem_t and elem_t.is_enum():
                vals = [_resolve_enum(elem_t, v) for v in raw_vals]

            # POINTER ARRAY?
            elif treat_as_ptr_array:
                # Use helper that emits aName, aName+offset, NULL, $FFFFFFFF, etc.
                vals = _format_ptr_array_vals(raw_vals)

            # RAW INTEGER ARRAY
            else:
                vals = [
                    _fmt_s_dec(v, 32) if signed_elem else _fmt_u(v, 4)
                    for v in raw_vals
                ]

            line = "dc.l " + ",".join(vals)

        # Append EOL comment for first line only (existing behavior)
        if first:
            eol = _eol_at(ea)
            if eol:
                line += f" ; {eol}"
            first = False

        fh.write(col_indent(line) + "\n")
        i += n


def emit_array_dc(fh, ea: int) -> bool:
    """
    Arrays with strict rules:
      - exact char[N] AND looks_like_c_string(ea) → dc.b "....",0,...
      - __int8 / unsigned __int8 arrays          → decimal / hex dc.b (respect element signedness)
      - enum arrays                               → enum member names (dc.b/dc.w/dc.l as needed)
      - 16-bit int arrays                         → dc.w (signed→dec, unsigned→hex)
      - 32-bit int arrays                         → dc.l (signed→dec, unsigned→hex)
      - pointer arrays                            → labels where resolvable
      - everything else                           → falls back to numeric bytes (never quoted)
    """
    ti = ida_typeinf.tinfo_t()
    if not (ida_nalt.get_tinfo(ti, ea) and ti.is_array()):
        return False

    atd = ida_typeinf.array_type_data_t()
    if not ti.get_array_details(atd):
        return False

    elem   = atd.elem_type
    nelems = atd.nelems
    if nelems <= 0:
        return False

    esz   = elem.get_size() or 1
    tdisp = _type_display_name(ti)

    # Determine signedness for integer arrays
    # signed_elem=True  -> decimal
    # signed_elem=False -> hex
    signed_elem = False
    if elem.is_int():
        signed_elem = elem.is_signed()

    # AP_SIGNED is our "force hex" override even for signed types
    if _ap_signed_at(ea):
        signed_elem = False

    # 1) true strings only: exact char[N] (including const char[N]) + string guards
    if _is_exact_decl_char_array(ea):
        total = ida_bytes.get_item_size(ea) or (nelems * max(1, esz))
        if _looks_like_c_string(ea):
            emit_dc_b_as_stringy_chunks(fh, ea, total)
            return True
        # NEW: allow NON-printable, NON-zero prefix bytes (e.g. $9C) before a C-string (or empty string)
        if _collect_prefixed_c_string_nonprintable_prefix(ea, total, max_prefix=4)[1]:
            _emit_string_wrapped63_itemspan(fh, ea, total)
            return True
        # Existing: allow a small control-prefix (including 0) before a C-string
        if _collect_prefixed_c_string_allow_zero(ea, total, max_prefix=4)[1]:
            _emit_string_wrapped63_itemspan(fh, ea, total)
            return True

    # 2) ENUM ARRAYS: emit enum member names
    if elem.is_enum():
        total = esz * nelems
        if not _is_range_loaded(ea, total):
            # Can't safely read the full array, fall back to bytes
            emit_dc_b_numeric_by_tinfo(fh, ea, ida_bytes.get_item_size(ea) or total)
            return True

        # Use the enum-aware emitter (dc.b/dc.w/dc.l based on element size)
        _emit_enum_array_grouped(
            fh,
            ea,
            elem,
            esz,
            nelems,
            header_comment=tdisp
        )
        return True

    # 3) byte arrays (no quoting ever here; strings handled above)
    if elem.is_int() and esz == 1:
        total = ida_bytes.get_item_size(ea) or nelems
        emit_dc_b_numeric_by_tinfo(fh, ea, total)
        return True

    # 4) word arrays
    if elem.is_int() and esz == 2:
        per_line = 12
        cur = ea
        for _ in range(0, nelems, per_line):
            take = min(per_line, nelems - (_ // per_line) * per_line)
            parts = []
            for _j in range(take):
                uv = ida_bytes.get_wide_word(cur)
                parts.append(_fmt_s_dec(uv, 16) if signed_elem else _fmt_u(uv, 2))
                cur += 2
            fh.write(col_indent("dc.w " + ",".join(parts)) + "\n")
        return True

    # 5) long arrays
    if esz == 4:
        # pointer-table heuristic OR typed pointer
        treat_as_ptr_array = elem.is_ptr() or _looks_like_pointer_array(ea, nelems)
        per_line = 8
        cur = ea
        for _ in range(0, nelems, per_line):
            take = min(per_line, nelems - (_ // per_line) * per_line)
            parts = []
            for _j in range(take):
                uv = ida_bytes.get_wide_dword(cur)
                if treat_as_ptr_array:
                    parts.append(_name_or_hex_for_ptr(uv))
                else:
                    parts.append(_fmt_s_dec(uv, 32) if signed_elem else _fmt_u(uv, 4))
                cur += 4
            fh.write(col_indent("dc.l " + ",".join(parts)) + "\n")
        return True

    # 6) Fallback: dump bytes numerically (never quoted)
    total = ida_bytes.get_item_size(ea) or (nelems * max(1, esz))
    emit_dc_b_numeric_by_tinfo(fh, ea, total)
    return True


def _emit_udt_instance(fh, base_ea: int, udt_ti: ida_typeinf.tinfo_t, off: int = 0, indent_comment=True):
    full = udt_ti.get_size() or 0
    if full > 0 and not _is_range_loaded(base_ea + off, full):
        note = _type_display_name(udt_ti)
        fh.write(col_indent(f"ds.b {full} ; {note}") + "\n")
        return

    udt = ida_typeinf.udt_type_data_t()
    if not udt_ti.get_udt_details(udt):
        sz = udt_ti.get_size() or 0
        if sz > 0:
            b = _safe_get_bytes(base_ea + off, sz)
            vals = ",".join(str(_to_signed(x, 8)) for x in b)
            note = _type_display_name(udt_ti)
            fh.write(col_indent(f"dc.b {vals} ; {note} (raw {sz} bytes)") + "\n")
        return

    # ===== NEW: union handling (emit ONE member only) =====
    if udt_ti.is_union():
        # Choose a canonical member to display (prefer names like 'raw', then 'value', else first).
        prefer_names = ("raw", "value")
        pick = None
        # First, try preferred names
        for m in udt:
            nm = (getattr(m, "name", "") or "").lower()
            if nm in prefer_names:
                pick = m
                break
        # Fallback: first member
        if pick is None and len(udt) > 0:
            pick = udt[0]

        if pick is None:
            # Degenerate union with no members — emit as raw bytes
            b = _safe_get_bytes(base_ea + off, full)
            vals = ",".join(str(_to_signed(x, 8)) for x in b)
            note = _type_display_name(udt_ti)
            fh.write(col_indent(f"dc.b {vals} ; {note} (empty union {full} bytes)") + "\n")
            return

        # Emit a single chosen member, preserving union size implicitly
        mname  = getattr(pick, "name", "") or f"off_{pick.offset//8}"
        mti    = pick.type
        moff   = (int(getattr(pick, "offset", 0)) // 8)

        sname = _asm_id(udt_ti.get_type_name() or udt_ti.dstr() or "")
        if indent_comment and sname:
            # Avoid redundant banners only when the EA has a *non-array* explicit decl.
            # If the decl is an array (e.g., "Position[22]"), still print the per-element banner.
            tdecl = (idc.get_type(base_ea + off) or "").strip()
            if (not tdecl) or ("[" in tdecl and "]" in tdecl):
                fh.write(col_indent(f"; {sname} (union; showing '{mname}')") + "\n")

        # If chosen member is an array/struct, emit that view; otherwise scalar
        try:
            if pick.is_bitfield():
                _emit_scalar_dc(fh, base_ea, pick.type, off + moff, f"{mname} ; bitfield (union view)")
                return
        except Exception:
            pass

        if mti.is_array():
            _emit_array_dc(fh, base_ea, mti, off + moff, mname)
            return
        elif mti.is_udt():
            fh.write(col_indent(f"; {mname} (struct view of union)") + "\n")
            _emit_udt_instance(fh, base_ea, mti, off + moff, indent_comment=False)
            return
        else:
            _emit_scalar_dc(fh, base_ea, mti, off + moff, mname)
            return
    # ===== END union handling =====

    sname = _asm_id(udt_ti.get_type_name() or udt_ti.dstr() or "")
    if indent_comment and sname:
        # Avoid redundant banners only when the EA has a *non-array* explicit decl.
        # If the decl is an array (e.g., "Position[22]"), still print the per-element banner.
        tdecl = (idc.get_type(base_ea + off) or "").strip()
        if (not tdecl) or ("[" in tdecl and "]" in tdecl):
            fh.write(col_indent(f"; {sname}") + "\n")

    # Struct (non-union): emit all members in order
    for m in udt:
        mname  = getattr(m, "name", "") or f"off_{m.offset//8}"
        mlabel = f"{mname}"
        bitoff = int(getattr(m, "offset", 0))
        moff   = bitoff // 8
        mti    = m.type

        try:
            if m.is_bitfield():
                _emit_scalar_dc(fh, base_ea, m.type, off + moff, f"{mlabel} ; bitfield")
                continue
        except Exception:
            pass

        if mti.is_array():
            _emit_array_dc(fh, base_ea, mti, off + moff, mlabel)
        elif mti.is_udt():
            fh.write(col_indent(f"; {mlabel} (struct)") + "\n")
            _emit_udt_instance(fh, base_ea, mti, off + moff, indent_comment=False)
        else:
            _emit_scalar_dc(fh, base_ea, mti, off + moff, mlabel)

# ---------- structured data (tinfo / literal) ----------
def _emit_udt_array_from_decl(fh, ea: int) -> tuple[bool, int]:
    decl = (idc.get_type(ea) or "").strip()
    m = RE_DECL_UDT_ARRAY.search(decl)
    if not m:
        return False, 0

    type_name = m.group(1)
    try:
        cnt = int(m.group(2))
    except Exception:
        return False, 0
    if cnt <= 0:
        return False, 0

    elem_ti = ida_typeinf.tinfo_t()
    have_ti = ida_nalt.get_tinfo(elem_ti, ea)
    if not (have_ti and elem_ti.is_udt()):
        named = _lookup_udt_by_name(type_name)
        if not (named and named.is_udt()):
            return False, 0
        elem_ti = named

    esz = int(elem_ti.get_size() or 0)
    if esz <= 0:
        return False, 0

    total = cnt * esz
    if not _is_range_loaded(ea, total):
        fh.write(col_indent(f"; {type_name}[{cnt}]") + "\n")
        fh.write(col_indent(f"ds.b {total} ; {type_name}[{cnt}]") + "\n")
        return True, ea + total

    fh.write(col_indent(f"; {type_name}[{cnt}]") + "\n")
    for i in range(cnt):
        fh.write(col_indent(f"; element[{i}]") + "\n")
        _emit_udt_instance(fh, ea, elem_ti, i * esz, indent_comment=True)
    return True, ea + total


def _emit_data_item_structured(fh, ea: int) -> bool:
    """
    Structured emission with strict byte rules:
      - exact 'char name[N]' AND printable+NUL at start → quoted dc.b
      - __int8 arrays → decimal dc.b
      - unsigned __int8 arrays → hex dc.b
      - If NO declared type at EA and looks like a C-string → quoted dc.b (heuristic)
      - word/long arrays → dc.w / dc.l, signedness respected
      - pointer arrays → labels where resolvable
    """
    # Literal UDT handling (unchanged)
    lit_ti, lit_name = _udt_tinfo_from_literal_line(ea)
    if lit_ti and lit_ti.is_udt():
        esz = lit_ti.get_size() or 0
        if esz > 0:
            seg = ida_segment.getseg(ea)
            if seg and _is_range_loaded(ea, esz):
                count, cur = 1, ea
                while True:
                    nxt = ida_bytes.next_head(cur, seg.end_ea)
                    if nxt == idc.BADADDR or nxt != cur + esz:
                        break
                    if name_at(nxt):
                        break
                    if not _is_range_loaded(nxt, esz):
                        break
                    nxt_ti, nxt_nm = _udt_tinfo_from_literal_line(nxt)
                    if nxt_nm != lit_name:
                        break
                    count += 1
                    cur = nxt
                disp = f"{_type_display_name(lit_ti)}[{count}]" if count > 1 else _type_display_name(lit_ti)
                fh.write(col_indent(f"; {disp}") + "\n")
                for i in range(count):
                    if count > 1:
                        fh.write(col_indent(f"; element[{i}]") + "\n")
                    _emit_udt_instance(fh, ea, lit_ti, i * esz, indent_comment=True)
                return True
            else:
                disp = _type_display_name(lit_ti)
                fh.write(col_indent(f"; {disp}") + "\n")
                fh.write(col_indent(f"ds.b {esz} ; {disp}") + "\n")
                return True

    tif = ida_typeinf.tinfo_t()
    have_ti = ida_nalt.get_tinfo(tif, ea)
    decl_text = (idc.get_type(ea) or "").strip().lower().replace(" ", "")

    if have_ti and tif.is_array():
        atd = ida_typeinf.array_type_data_t()
        if not tif.get_array_details(atd):
            return False

        elem_t  = atd.elem_type
        esz     = elem_t.get_size() or 1
        cnt     = int(atd.nelems or 0)
        if not (elem_t and esz > 0 and cnt > 0):
            return False

        # NEW: sanity check that the declared array layout actually matches
        # the data flags (byte/word/dword) of the heads that follow.
        # If not, bail out so we don't smear over embedded pointers like
        # introMenuImageScript's aGrafsCharsetRa.
        if not _array_layout_matches_flags(ea, esz, cnt):
            return False

        tdisp       = _type_display_name(tif)
        total_decl  = esz * cnt
        item_bytes  = ida_bytes.get_item_size(ea) or total_decl

        phys_stride = esz
        if cnt > 0 and item_bytes % cnt == 0 and (item_bytes // cnt) in (1, 2, 4):
            phys_stride = item_bytes // cnt

        # exact char[N] (including const char[N]) + printable/prefixed-string → quoted
        if phys_stride == 1 and _is_exact_decl_char_array(ea):
            total = item_bytes
            if _looks_like_c_string(ea):
                emit_dc_b_as_stringy_chunks(fh, ea, total)
                return True
            # NEW: allow NON-printable, NON-zero prefix bytes (e.g. $9C) before a C-string (or empty string)
            if _collect_prefixed_c_string_nonprintable_prefix(ea, total, max_prefix=4)[1]:
                _emit_string_wrapped63_itemspan(fh, ea, total)
                return True
            # Existing: allow a small control-prefix (including 0) before a C-string
            if _collect_prefixed_c_string_allow_zero(ea, total, max_prefix=4)[1]:
                _emit_string_wrapped63_itemspan(fh, ea, total)
                return True

        # pointer arrays
        if elem_t.is_ptr():
            fh.write(col_indent(f"; {tdisp}") + "\n")
            for i in range(cnt):
                pea  = ea + i * phys_stride
                pval = _read_int_be(pea, phys_stride)
                ptxt = _name_or_hex_for_ptr(pval)
                line = f"dc.l {ptxt} ; element[{i}]"
                if i == 0:
                    eol = _eol_at(ea)
                    if eol:
                        line += f" ; {eol}"
                fh.write(col_indent(line) + "\n")
            return True

        # UDT element arrays
        if elem_t.is_udt():
            needed = total_decl
            if not _is_range_loaded(ea, needed):
                fh.write(col_indent(f"; {tdisp}") + "\n")
                fh.write(col_indent(f"ds.b {needed} ; {tdisp}") + "\n")
                return True
            fh.write(col_indent(f"; {tdisp}") + "\n")
            for i in range(cnt):
                fh.write(col_indent(f"; element[{i}]") + "\n")
                _emit_udt_instance(fh, ea, elem_t, i * esz, indent_comment=True)
            return True

        # float arrays
        if elem_t.is_floating():
            forced_w = 1 if esz not in (1, 2, 4) else esz
            needed   = forced_w * cnt
            if not _is_range_loaded(ea, needed):
                fh.write(col_indent(f"; {tdisp}") + "\n")
                fh.write(col_indent(f"ds.b {needed} ; {tdisp}") + "\n")
                return True
            emit_scalar_array_grouped(fh, ea, forced_w, cnt, header_comment=tdisp)
            return True

        # enum arrays
        if elem_t.is_enum():
            needed = phys_stride * cnt
            if not _is_range_loaded(ea, needed):
                fh.write(col_indent(f"; {tdisp}") + "\n")
                fh.write(col_indent(f"ds.b {needed} ; {tdisp}") + "\n")
                return True
            _emit_enum_array_grouped(fh, ea, elem_t, phys_stride, cnt, header_comment=tdisp)
            return True

        # integer arrays (never quote unless exact char[N])
        # Use item_size/elsize to clamp the element count so we don't
        # walk into embedded pointers or following symbols.
        max_elems = _clamp_array_count_to_item(ea, cnt)

        # If something went weird and clamp returned 0, fall back to cnt.
        if max_elems <= 0:
            max_elems = cnt

        needed = phys_stride * max_elems
        if not _is_range_loaded(ea, needed):
            fh.write(col_indent(f"; {tdisp}") + "\n")
            fh.write(col_indent(f"ds.b {needed} ; {tdisp}") + "\n")
            return True

        if phys_stride == 1:
            # For byte arrays, `max_elems` is also the number of bytes to emit.
            emit_dc_b_numeric_by_tinfo(fh, ea, max_elems)
        else:
            # Respect element signedness:
            #   - signed   → decimal
            #   - unsigned → hex
            is_signed_elem = bool(elem_t.is_int() and elem_t.is_signed())
            emit_scalar_array_grouped(
                fh,
                ea,
                phys_stride,
                max_elems,
                header_comment=tdisp,
                signed_elem=is_signed_elem,
                elem_t=elem_t,
            )
        return True

    # Single UDT
    if have_ti and tif.is_udt():
        size = tif.get_size() or 0
        tdisp = _type_display_name(tif)
        if size <= 0:
            return False
        if not _is_range_loaded(ea, size):
            fh.write(col_indent(f"; {tdisp} ") + "\n")
            fh.write(col_indent(f"ds.b {size} ; {tdisp}") + "\n")
            return True
        fh.write(col_indent(f"; {tdisp}") + "\n")
        _emit_udt_instance(fh, ea, tif, 0, indent_comment=False)
        return True

    # ---- NO type declared at EA: allow "obvious C-strings" to be quoted ----
    if not have_ti:
        # Do not stringify if IDA explicitly declared __int8/unsigned__int8 in the text:
        if ("__int8" not in decl_text) and ("unsigned__int8" not in decl_text):
            if _looks_like_c_string(ea):
                # collect bytes until first NUL and quote
                total = ida_bytes.get_item_size(ea) or 0
                if total <= 0:
                    # fall back to a single line quoted run until first NUL
                    i = 0
                    while _is_range_loaded(ea+i, 1):
                        b = ida_bytes.get_wide_byte(ea+i)
                        if b == 0:
                            i += 1
                            break
                        i += 1
                    total = i
                emit_dc_b_as_stringy_chunks(fh, ea, total)
                return True

    # flags-based fallback
    w, cnt = _data_flags_width_and_count(ea)
    if w and cnt:
        if w == 1:
            emit_dc_b_numeric_by_tinfo(fh, ea, cnt)
        else:
            emit_scalar_array_grouped(fh, ea, w, cnt, header_comment=None)
        return True

    # literal UDT run (already tried above); otherwise not structured
    return False


# ---------- declared pointer arrays ----------
def _decl_ptr_array_info(ea: int):
    decl = (idc.get_type(ea) or "").strip()
    m = RE_DECL_PTR_ARRAY.search(decl)
    if m:
        try:
            n = int(m.group(1))
            tif = ida_typeinf.tinfo_t()
            if ida_nalt.get_tinfo(tif, ea) and (tif.is_array()):
                atd = ida_typeinf.array_type_data_t()
                if tif.get_array_details(atd) and atd.elem_type.is_ptr():
                    psz = atd.elem_type.get_size() or 4
                    return n, psz
            return n, 4
        except Exception:
            pass

    tif = ida_typeinf.tinfo_t()
    if ida_nalt.get_tinfo(tif, ea) and tif.is_array():
        atd = ida_typeinf.array_type_data_t()
        if tif.get_array_details(atd) and atd.elem_type.is_ptr():
            cnt = int(atd.nelems)
            psz = atd.elem_type.get_size() or 4
            if cnt > 0:
                return cnt, psz
    return None, None


def _emit_pointer_array_from_decl(fh, ea: int):
    cnt, psz = _decl_ptr_array_info(ea)
    if not cnt or not psz:
        return False, None

    total = cnt * psz
    if not _is_range_loaded(ea, total):
        decl = (idc.get_type(ea) or "void *[]").strip()
        fh.write(col_indent(f"; {decl}") + "\n")
        fh.write(col_indent(f"ds.b {total} ; {decl}") + "\n")
        return True, ea + total

    decl = (idc.get_type(ea) or "").strip()
    hdr = decl if decl else "void *[]"
    fh.write(col_indent(f"; {hdr}") + "\n")

    for i in range(cnt):
        pval = _read_int_be(ea + i * psz, psz)
        if pval == 0:
            ptxt = "0"
        else:
            nm = name_at(pval)
            ptxt = nm if nm else f"$%X" % pval
        fh.write(col_indent(f"dc.l {ptxt} ; element[{i}]") + "\n")

    return True, ea + total


def try_emit_pointer_array_at(fh, ea: int):
    handled, end_ea = _emit_pointer_array_from_decl(fh, ea)
    if handled:
        return True, end_ea
    return False, None


def _emit_pointer_table_spanning_heads_v2(fh, ea: int) -> tuple[bool, int]:
    tif0 = ida_typeinf.tinfo_t()
    if not ida_nalt.get_tinfo(tif0, ea):
        return False, 0
    if tif0.is_array() or not tif0.is_ptr():
        return False, 0

    ptr_sz = tif0.get_size() or 4
    decl_cnt, _ = _decl_ptr_array_info(ea)
    limit = decl_cnt if decl_cnt else 1_000_000

    seg = ida_segment.getseg(ea)
    if not seg:
        return False, 0

    elems = []
    cur = ea
    while cur < seg.end_ea and limit > 0:
        # ---- NEW: if this head has its own name (and it's not the first),
        # stop so the outer loop can emit that label separately
        if cur != ea and name_at(cur):
            break
        f = ida_bytes.get_full_flags(cur)
        if not (ida_bytes.is_head(f) and ida_bytes.is_data(f)):
            break
        sz = ida_bytes.get_item_size(cur) or 0
        if sz < ptr_sz or (sz % ptr_sz) != 0:
            break

        count_here = sz // ptr_sz
        for i in range(count_here):
            pea = cur + i * ptr_sz
            if pea != ea and name_at(pea):      # ---- NEW: don’t swallow named heads mid-chunk
                limit = 0
                break
            if not _is_range_loaded(pea, ptr_sz):
                limit = 0
                break
            pval = _read_int_be(pea, ptr_sz)
            elems.append(pval)
            limit -= 1
            if limit <= 0:
                break

        nxt = ida_bytes.next_head(cur, seg.end_ea)
        if nxt == idc.BADADDR or nxt <= cur:
            cur += sz
            break
        cur = nxt

        if not decl_cnt:
            tifn = ida_typeinf.tinfo_t()
            if not (ida_nalt.get_tinfo(tifn, cur) and tifn.is_ptr()):
                break

    if not elems:
        return False, 0

    # If we stopped because a *named* next head was encountered immediately,
    # and we only collected the first pointer, just let the caller handle it normally.
    if len(elems) <= 1:
        return False, 0

    decl = idc.get_type(ea) or ""
    hdr = decl if decl else "void*[]"
    fh.write(col_indent(f"; {hdr}") + "\n")
    for i, p in enumerate(elems):
        fh.write(col_indent(f"dc.l {_ptr_text_or_hex(p)} ; element[{i}]") + "\n")

    return True, cur


# ---------- data item emission entry ----------
def emit_one_data_item(fh, ea: int, seg_end_ea: int) -> int:
    fflags = ida_bytes.get_full_flags(ea)
    if not ida_bytes.is_head(fflags) or not ida_bytes.is_data(fflags):
        size = ida_bytes.get_item_size(ea) or 1
        return min(ea + size, seg_end_ea)

    item_len = ida_bytes.get_item_size(ea) or 1

    # === EARLY short-circuit for BSS heads (EQU or ds.b chain) ===
    if is_uninitialized_bytes(ea, item_len):
        nm = name_at(ea)
        if nm:
            addr_expr = _fmt_bss_or_abs(ea)  # "BSS_X_BASE+..." or "$XXXXXXXX"
            reg  = _bss_region_for_ea(ea)
            reg_name  = reg[1] if reg else None
            if reg:
                # region-level SECTION/ORG + banner (once)
                _ensure_bss_section_banner(fh, reg, ea)
            else:
                # OLD: equ_line = _equ_line_keepcase(nm, f"$%X" % ea)
                equ_line = _equ_line_keepcase(nm, _fmt_bss_or_abs(ea))
                if equ_line:
                    fh.write(equ_line + "\n")
                    total_sz, label = item_tinfo_size_and_label(ea, item_len)
                    if label:
                        fh.write(col_indent(f"; {label} (size {total_sz})") + "\n")
                    emit_wrapped_comments_dedup(
                        fh, ea, equ_line, cmt_col_indent, seg_end_ea,
                        id="emit_one_data_item:1", include_next=False
                    )
                next_ea = ida_bytes.next_head(ea, seg_end_ea)
                return next_ea if next_ea != idc.BADADDR else seg_end_ea

            # In ds.b mode, we also want an inline comment after the size (if there was any EOL).
            # Keep it simple & consistent: reuse the computed label text as the trailing comment.
            # FIX: do not reprint the type line after ds.b — it caused the duplicate like "JobOffer[5]"
            _emit_bss_chain(fh, nm, ea, item_len, addr_expr, reg_name)
            
            # print wrapped comments below
            emit_wrapped_comments_dedup(
                fh, ea, "", cmt_col_indent, seg_end_ea,
                id="emit_one_data_item:bss:comments", include_next=False
            )

        next_ea = ida_bytes.next_head(ea, seg_end_ea)
        return next_ea if next_ea != idc.BADADDR else seg_end_ea

    # === 63-char wrapped string emission (generic, safe) ===
    # Decide if this *starts* a string:
    #   - If declared EXACT char[N], prefer that.
    #   - Else, heuristic: printable prefix before NUL is at least MIN_STR_PREFIX.
    # If true, aggregate across contiguous byte heads till next label and emit wrapped lines.
    is_char_arr = _is_exact_decl_char_array(ea)

    prefix_len, has_nul, span = _cstr_prefix_info(ea, item_len)
    looks_like_cstr = (prefix_len >= MIN_STR_PREFIX and has_nul)

    if (is_char_arr and has_nul) or (looks_like_cstr):
        blob, end_ea2 = _collect_contiguous_byte_heads_until_next_label(ea, seg_end_ea)
        if blob:
            _emit_wrapped63_from_bytes(fh, blob)
            # include EOL + all posterior lines (E_NEXT)
            emit_wrapped_comments_dedup(fh, ea, "", cmt_col_indent, seg_end_ea, id="emit_one_data_item:2", include_next=False)
            return end_ea2
        if span > 0:
            _emit_string_wrapped63_itemspan(fh, ea, item_len)
            emit_wrapped_comments_dedup(fh, ea, "", cmt_col_indent, seg_end_ea, id="emit_one_data_item:3", include_next=False)
            next_ea = ida_bytes.next_head(ea, seg_end_ea)
            return next_ea if next_ea != idc.BADADDR else seg_end_ea   

    # 0) Declared UDT arrays like "Sprite[NN]"
    handled_udt_arr, end_udt_arr = _coerce_bool_tuple(_emit_udt_array_from_decl(fh, ea))
    if handled_udt_arr:
        return _advance_or_min(ea, end_udt_arr, seg_end_ea, item_len)

    # 1) Declared pointer arrays ("Type *[N]")
    handled, end_ea = _coerce_bool_tuple(try_emit_pointer_array_at(fh, ea))
    if handled:
        return _advance_or_min(ea, end_ea, seg_end_ea, item_len)

    # 2) Structured via tinfo or literal-UDT runs
    if _emit_data_item_structured(fh, ea):
        # IMPORTANT:
        # Pass the *original* disasm line (with its EOL) to the deduper so it
        # treats the EOL as already-printed and WON'T push it to the next line.
        dl_full = disasm_line(ea)  # KEEP_IDA_EOL_COMMENTS=True -> includes EOL
        base_for_dedupe = dl_full if dl_full else ""

        # Structured items already attach member labels inline; don't add E_NEXT lines.
        emit_wrapped_comments_dedup(
            fh, ea, base_for_dedupe, cmt_col_indent, seg_end_ea,
            id="emit_one_data_item:4", include_next=False
        )
        
        next_ea = ida_bytes.next_head(ea, seg_end_ea)
        return next_ea if next_ea != idc.BADADDR else seg_end_ea

    # 3) Pointer table spanning heads (heuristic)
    handled2, end_ea2 = _coerce_bool_tuple(_emit_pointer_table_spanning_heads_v2(fh, ea))
    if handled2:
        return _advance_or_min(ea, end_ea2, seg_end_ea, item_len)

    # 4) Uninitialized → ds.b (default) or EQU (new mode)
    line = disasm_line(ea)
    must_coerce_to_ds = ("<?>" in line) or is_uninitialized_bytes(ea, item_len)
    if must_coerce_to_ds:
        total_sz, label = item_tinfo_size_and_label(ea, item_len)
        asm = f"ds.b {total_sz}" + (f" ; {label}" if label else "")
        asm = rewrite_struct_refs(asm)
        fh.write(col_indent(asm) + "\n")
        emit_wrapped_comments_dedup(fh, ea, asm, cmt_col_indent, seg_end_ea, id="emit_one_data_item:6", include_next=False)
        return min(ea + total_sz, seg_end_ea)

    # 4.4) Single scalar by item flags (ensure dc.w/dc.l, not bytes)
    if ida_bytes.is_data(fflags):
        if ida_bytes.is_word(fflags) or ida_bytes.is_dword(fflags) or ida_bytes.is_byte(fflags):
            width = 2 if ida_bytes.is_word(fflags) else (4 if ida_bytes.is_dword(fflags) else 1)
            printed_line = _emit_scalar_dc_forced(fh, ea, width, "raw", treat_as_ptr=False, use_eol=True)
            # IMPORTANT: pass the exact printed line so EOL is suppressed
            emit_wrapped_comments_dedup(fh, ea, printed_line, cmt_col_indent, seg_end_ea, id="emit_one_data_item:7", include_next=False)
            next_ea = ida_bytes.next_head(ea, seg_end_ea)
            return next_ea if next_ea != idc.BADADDR else seg_end_ea

    # 4.5) Raw-data fallback for defined data items with no rich type info:
    if ida_bytes.is_data(fflags):
        if ida_bytes.is_word(fflags) or ida_bytes.is_dword(fflags) or ida_bytes.is_byte(fflags):
            width = 2 if ida_bytes.is_word(fflags) else (4 if ida_bytes.is_dword(fflags) else 1)

            # If misaligned OR there's a label inside the cell -> emit bytewise...
            if (width in (2, 4) and (ea & (width - 1)) != 0) or _has_inner_label(ea, width):
                bs = ida_bytes.get_bytes(ea, width) or b""
                parts = [ _fmt_u(b, 1) for b in bs ]
                base_line = disasm_line(ea)
                eol = extract_eol_text(base_line)
                out_line = col_indent("dc.b " + ",".join(parts) + (f" ; {eol}" if eol else ""))
                fh.write(out_line + "\n")
                emit_wrapped_comments_dedup(fh, ea, out_line, cmt_col_indent, seg_end_ea, id="emit_one_data_item:8", include_next=False)
            else:
                printed_line = _emit_scalar_dc_forced(fh, ea, width, "raw", treat_as_ptr=False, use_eol=True)
                emit_wrapped_comments_dedup(fh, ea, printed_line, cmt_col_indent, seg_end_ea, id="emit_one_data_item:9", include_next=False)

            next_ea = ida_bytes.next_head(ea, seg_end_ea)
            return next_ea if next_ea != idc.BADADDR else seg_end_ea

    # 5) Fallback: IDA line
    line = rewrite_struct_refs(line)
    printed = _write_asm(fh, line, ea=ea)  # applies fixups + pc-rel + indent
    emit_wrapped_comments_dedup(
        fh, ea, printed, cmt_col_indent, seg_end_ea,
        id="emit_one_data_item:10"
    )
    next_ea = ida_bytes.next_head(ea, seg_end_ea)
    return next_ea if next_ea != idc.BADADDR else seg_end_ea


# ---------- main sparse export ----------
def set_asm_out_ext(ext: str):
    """Set global output extension (with or without leading dot)."""
    global ASM_OUT_EXT
    if not ext:
        return
    ASM_OUT_EXT = ext if ext.startswith(".") else f".{ext}"

def _default_outfile_name():
    root = ida_nalt.get_root_filename() or "output"
    base = os.path.splitext(root)[0]
    return base + ASM_OUT_EXT

def ask_outfile():
    default = _default_outfile_name()
    return ida_kernwin.ask_file(
        True, default, "Save sparse ASM (heads-only, labels, prototypes, comments)"
    )


def write_sparse_asm(path):
    _EMITTED_CMTS.clear()
    with open(path, "w", encoding="utf-8", newline="\n") as fh:
        fh.write("; Sparse ASM generated by export_sparse_asm.py\n\n")

        _rebuild_name_cache()

        #fh.write("\n; ===== INCLUDES =====\n")
        #fh.write("              INCDIR       \"include\"\n")
        #fh.write("              INCLUDE      \"hw.i\"\n")
        #fh.write("              INCLUDE      \"hardware/cia.i\"\n")
        #fh.write("              INCLUDE      \"hardware/cia_min.i\"   ; <-- minimal aliases we need\n")
        #fh.write("\n; ===== END INCLUDES =====\n")

        fh.write("\n; ===== TYPES / ENUMS (EQU) =====\n")
        emit_amiga_custom_equ_block(fh)
        emit_ciab_equ_block(fh)
        emit_ciaa_equ_block(fh)
        _emit_bss_header(fh)
        emit_localtypes_equ(fh)
        fh.write("\n; ===== END TYPES / ENUMS =====\n")

        for seg in seg_iter():
            _reset_bss_chain()

            sname = ida_segment.get_segm_name(seg) or "SEG_%X" % seg.start_ea
            fh.write("\n; --- segment %s %08X-%08X ---\n" % (sname, seg.start_ea, seg.end_ea - 1))

            fh.write("; [INFO] scanning %s...\n" % sname)

            last_print_end = seg.start_ea
            printed_labels = set()
            ea = seg.start_ea

            while ea < seg.end_ea:
                try:
                    fflags = ida_bytes.get_full_flags(ea)
                    if ida_bytes.is_head(fflags) and (ida_bytes.is_code(fflags) or ida_bytes.is_data(fflags)):
                        if is_func_start(ea):
                            f = ida_funcs.get_func(ea)
                            fname = name_at(ea) or ("sub_%X" % ea)

                            proto = get_func_proto_text(f)
                            fh.write("\n")
                            write_comment_block(fh, [f"===== {fname} ====="])
                            write_comment_block(fh, [f"prototype: {proto}"])
                            write_comment_block(fh, func_comments(f))
                            if ea not in printed_labels:
                                write_label(fh, fname)
                                printed_labels.add(ea)
                        else:
                            # ----- CODE HEADS: emit only explicit labels (no func-name fallback) -----
                            if EMIT_CODE_LABELS and ida_bytes.is_code(fflags):
                                nm_here = explicit_symbol_text_at(ea)
                                if nm_here:
                                    f = ida_funcs.get_func(ea)
                                    func_start = f.start_ea if f else idc.BADADDR
                                    func_name  = idc.get_func_name(ea) or ""
                                    # Don’t re-emit the function’s own name except at the start
                                    if ea != func_start and nm_here != func_name:
                                        if ea not in printed_labels:
                                            write_label(fh, nm_here)
                                            printed_labels.add(ea)

                            # ----- DATA HEADS -----
                            elif EMIT_DATA_LABELS and ida_bytes.is_data(fflags):
                                nm_here = explicit_symbol_text_at(ea)
                                if nm_here and ea not in printed_labels:
                                    item_len = ida_bytes.get_item_size(ea) or 1
                                    is_nb = is_uninitialized_bytes(ea, item_len)
                                    # Always let the BSS chain print labels for uninitialized items, in both modes.
                                    if not is_nb:
                                        _emit_data_type_comment_if_any(fh, ea)
                                        write_label(fh, nm_here)
                                        printed_labels.add(ea)

                        line = disasm_line(ea)
                        if line:
                            if ida_bytes.is_data(fflags):
                                ea = emit_one_data_item(fh, ea, seg.end_ea)
                                if ea >= seg.end_ea:
                                    break
                                continue
                            else:
                                orig_line = disasm_line(ea)
                                line = rewrite_struct_refs(orig_line)
                                printed = _write_asm(fh, line, ea=ea)
                                emit_wrapped_comments_dedup(
                                    fh, ea, printed, cmt_col_indent, seg.end_ea,
                                    id="write_sparse_asm", include_next=False
                                )

                        size = ida_bytes.get_item_size(ea) or 1
                        this_end = ea + size
                        if this_end > last_print_end:
                            last_print_end = this_end

                        ea = ida_bytes.next_head(ea, seg.end_ea)
                        continue

                    ea += 1

                except Exception as ex:
                    fh.write("; [ERR] @ 0x%08X: %s\n" % (ea, str(ex)))
                    ea += 1

            fh.write("; [INFO] finished %s up to 0x%08X\n" % (sname, last_print_end))
        fh.write("\n; EOF\n")


def run():
    path = ask_outfile()
    if not path:
        return
    write_sparse_asm(path)
    print("Wrote:", path)


if __name__ == '__main__':
    run()