# -*- coding: utf-8 -*-
# IDA 9.0 — Import Description comments from Variables.md into IDA
#           (and optionally strip g_ prefix and/or rename to Variables.md Name when Address is present)
#
# Reads a Variables.md markdown table with columns:
# |Address|Name|Type|Size (Bytes)|Description|
#
# For each row:
# - Resolve EA:
#   - If Address cell is present -> use it (authoritative row binding)
#   - Else -> look up by Name
# - Renaming:
#   - If Address cell is present:
#       - Compute desired name from Variables.md Name (optionally stripping g_ prefix)
#       - If current name at EA differs, rename to desired (only if safe/available)
#   - Else (no Address):
#       - Legacy conservative behavior: only strip g_ prefix when enabled (safe/available)
# - If Description is non-empty:
#   - Set REGULAR comment (':') from Description if missing, or overwrite if enabled.
# - Converts '<br>' back to newline for multi-line IDA comments.
# - Optional: auto-capitalize first letter (toggle AUTO_CAPITALIZE_FIRST).
# - DRY_RUN prints proposed changes and makes NO database modifications (no comments, no renames).
#
# NOTE:
# - Only supports regular (non-repeatable) comments (shortcut ':').
#
# Save as: import_variables_md_comments.py
# Run: File -> Script file... in IDA

import re
import idaapi
import ida_kernwin
import ida_name
import ida_bytes
import idc

# ==============================
# SETTINGS
# ==============================

DRY_RUN = True                  # True => no changes, only print proposed renames/comments
OVERWRITE_EXISTING = True        # True => replace existing regular comment; False => only set if missing
AUTO_CAPITALIZE_FIRST = True     # Capitalize first alpha character if not already
STRIP_G_PREFIX_RENAME = True     # If True, rename symbols starting with "g_" to remove the prefix

# ==============================
# Markdown parsing helpers
# ==============================

BR_RE = re.compile(r"<br\s*/?>", re.IGNORECASE)

def _unescape_md_cell(s: str) -> str:
    """
    Reverse the escaping used by emitter:
    - <br> => '\n'
    - '\|' => '|'
    """
    if not s:
        return ""
    s = s.strip()
    s = BR_RE.sub("\n", s)
    s = s.replace(r"\|", "|")
    return s

def _auto_capitalize(text: str) -> str:
    if not text:
        return text
    chars = list(text)
    for i, ch in enumerate(chars):
        if ch.isalpha():
            if ch.islower():
                chars[i] = ch.upper()
            break
    return "".join(chars)

def _parse_md_table_lines(lines):
    """
    Parse markdown table rows. Returns list of dicts with keys:
      address, name, type, size, description
    Skips header and separator rows.
    """
    rows = []
    for ln in lines:
        line = ln.strip()
        if not line.startswith("|"):
            continue
        if line.lower().startswith("|address|") or line.startswith("|---"):
            continue

        # Remove exactly one leading and trailing '|'
        s = line
        if s.startswith("|"):
            s = s[1:]
        if s.endswith("|"):
            s = s[:-1]

        # Split on unescaped pipes only (so '\|' stays inside the cell)
        parts = [p.strip() for p in re.split(r'(?<!\\)\|', s)]
        if len(parts) < 5:
            continue

        addr, name, ty, size = parts[0], parts[1], parts[2], parts[3]

        # If a row somehow has extra columns (rare), re-join them back into description.
        desc = "|".join(parts[4:])

        rows.append({
            "address": addr.strip(),
            "name": name.strip(),
            "type": ty.strip(),
            "size": size.strip(),
            "description": desc.strip(),
        })
    return rows

def _ea_from_address_cell(addr_cell: str):
    """
    Accepts formats like:
      0x00123456
      00123456
      $123456
    Returns int EA or BADADDR.
    """
    if not addr_cell:
        return idc.BADADDR
    s = addr_cell.strip()
    if not s:
        return idc.BADADDR

    if s.startswith("$"):
        s = "0x" + s[1:]
    if re.fullmatch(r"[0-9A-Fa-f]{1,8}", s):
        s = "0x" + s

    try:
        return int(s, 16)
    except Exception:
        return idc.BADADDR

def _ea_from_name(name: str):
    if not name:
        return idc.BADADDR
    return idc.get_name_ea_simple(name)

# ==============================
# Comment helpers
# ==============================

def _get_existing_regular_comment(ea: int) -> str:
    try:
        return idc.get_cmt(ea, 0) or ""
    except Exception:
        return ""

def _has_regular_comment(ea: int) -> bool:
    return bool((_get_existing_regular_comment(ea) or "").strip())

def _set_regular_comment(ea: int, text: str) -> bool:
    if not text:
        return False
    return bool(idc.set_cmt(ea, text, 0))  # 0 => regular comment (':')

# ==============================
# Rename helpers
# ==============================

def _fmt_ea(ea: int) -> str:
    return f"0x{ea:08X}"

def _can_rename_to(new_name: str, ea: int = None) -> bool:
    """
    Check whether new_name is usable.
    - Must be valid identifier for IDA naming rules
    - Must not already exist as a global name on a different EA
    """
    if not new_name:
        return False
    if not ida_name.validate_name(new_name, ida_name.VNT_IDENT):
        return False

    existing = idc.get_name_ea_simple(new_name)
    if existing != idc.BADADDR:
        if ea is None or int(existing) != int(ea):
            return False

    return True

def _desired_name_from_md(md_name: str) -> str:
    """
    Apply STRIP_G_PREFIX_RENAME policy to the markdown name and return the target IDA name.
    """
    if STRIP_G_PREFIX_RENAME and md_name.startswith("g_"):
        return md_name[2:]
    return md_name

def _propose_rename_to_md_name_when_address_given(ea: int, md_name: str):
    """
    When the Variables.md row includes an explicit address, use md_name as source of truth:
    - Compute desired name (with optional g_ stripping)
    - If current name at EA differs, propose rename to desired (only if safe)
    Returns (old_name, new_name) or (None, None).
    """
    desired = _desired_name_from_md(md_name).strip()
    if not desired:
        return (None, None)

    cur = (idc.get_name(ea) or "").strip()

    # Only rename if it's actually different
    if cur == desired:
        return (None, None)

    if not _can_rename_to(desired, ea=ea):
        return (None, None)

    return (cur, desired)

def _propose_strip_g_rename(ea: int, md_name: str):
    """
    Legacy/conservative behavior for rows without address:
    If md_name starts with g_, propose renaming the symbol at EA to without it.
    Returns (old_name, new_name) or (None, None) if no rename is applicable.
    """
    if not STRIP_G_PREFIX_RENAME:
        return (None, None)
    if not md_name.startswith("g_"):
        return (None, None)

    new_name = md_name[2:]
    if not new_name:
        return (None, None)

    old_name = (idc.get_name(ea) or "").strip()

    # Keep behavior predictable: rename only if the EA is unnamed or matches md_name,
    # or if it currently starts with g_.
    if old_name != md_name and not old_name.startswith("g_"):
        if old_name and old_name != md_name:
            return (None, None)

    if not _can_rename_to(new_name, ea=ea):
        return (None, None)

    return (old_name or md_name, new_name)

def _do_rename(ea: int, new_name: str) -> bool:
    # SN_CHECK prevents duplicates; SN_FORCE can be too aggressive; prefer safe rename.
    return bool(idc.set_name(ea, new_name, idc.SN_CHECK))

# ==============================
# Main
# ==============================

def main():
    md_path = ida_kernwin.ask_file(False, "*.md", "Select Variables.md to import comments from")
    if not md_path:
        raise RuntimeError("User canceled file selection.")

    with open(md_path, "r", encoding="utf-8", errors="replace") as f:
        lines = f.read().splitlines()

    rows = _parse_md_table_lines(lines)
    if not rows:
        idaapi.msg("[import_variables_md_comments] No rows found (is this the right Variables.md?).\n")
        return

    planned_comment = 0
    planned_rename = 0
    did_comment = 0
    did_rename = 0

    skipped_no_desc = 0
    skipped_no_ea = 0
    skipped_existing_comment = 0
    skipped_rename_collision_or_invalid = 0
    skipped_rename_not_applicable = 0

    for r in rows:
        md_name = (r.get("name") or "").strip()
        addr_cell = (r.get("address") or "").strip()
        desc_cell = (r.get("description") or "").strip()

        if not md_name and not addr_cell:
            skipped_no_ea += 1
            continue

        # Resolve EA and record whether it came from an explicit address
        did_address_lookup = False
        ea = _ea_from_address_cell(addr_cell)
        if ea != idc.BADADDR:
            did_address_lookup = True
        else:
            ea = _ea_from_name(md_name)

        if ea == idc.BADADDR:
            skipped_no_ea += 1
            continue

        # ---- renaming ----
        old_name, new_name = (None, None)

        if did_address_lookup:
            # Address provided: enforce Variables.md name (optionally stripping g_)
            old_name, new_name = _propose_rename_to_md_name_when_address_given(ea, md_name)
        else:
            # No address: legacy behavior (only g_-strip)
            old_name, new_name = _propose_strip_g_rename(ea, md_name)

        if new_name:
            planned_rename += 1
            if DRY_RUN:
                shown_old = old_name if old_name else "<no_name>"
                idaapi.msg(f"[DRY_RUN] {_fmt_ea(ea)} rename: {shown_old} -> {new_name}\n")
            else:
                if _do_rename(ea, new_name):
                    did_rename += 1
                else:
                    skipped_rename_collision_or_invalid += 1
        else:
            # Track when we "wanted" to g_-strip but it failed safety checks (legacy path)
            if (not did_address_lookup) and STRIP_G_PREFIX_RENAME and md_name.startswith("g_"):
                skipped_rename_not_applicable += 1

        # ---- comment import (regular only) ----
        if not desc_cell:
            skipped_no_desc += 1
            continue

        has_existing = _has_regular_comment(ea)
        if has_existing and not OVERWRITE_EXISTING:
            if DRY_RUN:
                idaapi.msg(f"[DRY_RUN] {_fmt_ea(ea)} comment: keep existing regular comment for {idc.get_name(ea) or md_name}\n")
                idaapi.msg("  OLD: " + (_get_existing_regular_comment(ea).rstrip("\n")) + "\n")
                idaapi.msg("----\n")
            skipped_existing_comment += 1
            continue

        desc = _unescape_md_cell(desc_cell)
        if AUTO_CAPITALIZE_FIRST:
            desc = _auto_capitalize(desc)

        planned_comment += 1
        if DRY_RUN:
            action = "overwrite" if has_existing else "set"
            idaapi.msg(f"[DRY_RUN] {_fmt_ea(ea)} comment: {action} regular comment for {idc.get_name(ea) or md_name}\n")
            if has_existing:
                idaapi.msg("  OLD: " + (_get_existing_regular_comment(ea).rstrip("\n")) + "\n")
            idaapi.msg("  NEW: " + desc.rstrip("\n") + "\n")
            idaapi.msg("----\n")
        else:
            if _set_regular_comment(ea, desc):
                did_comment += 1

    idaapi.msg(
        "[import_variables_md_comments] Done.\n"
        f"  Planned renames: {planned_rename}\n"
        f"  Applied renames: {did_rename}\n"
        f"  Planned comments: {planned_comment}\n"
        f"  Applied comments: {did_comment}\n"
        f"  Skipped (EA not found): {skipped_no_ea}\n"
        f"  Skipped (no description): {skipped_no_desc}\n"
        f"  Skipped (existing comment): {skipped_existing_comment}\n"
        f"  Skipped renames (collision/invalid/set_name failed): {skipped_rename_collision_or_invalid}\n"
        f"  Skipped renames (not applicable/safety checks): {skipped_rename_not_applicable}\n"
        f"  Settings: DRY_RUN={DRY_RUN}, "
        f"OVERWRITE_EXISTING={OVERWRITE_EXISTING}, "
        f"AUTO_CAPITALIZE_FIRST={AUTO_CAPITALIZE_FIRST}, "
        f"STRIP_G_PREFIX_RENAME={STRIP_G_PREFIX_RENAME}\n"
    )

if __name__ == "__main__":
    main()
