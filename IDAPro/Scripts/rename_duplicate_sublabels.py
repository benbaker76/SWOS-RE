# rename_duplicate_sublabels.py
# IDA 9.0 — Detect & (optionally) rename duplicate sub-labels (inside functions, not function starts).
#
# - Scans only code labels that are inside a function AND not at function start
# - Finds names reused at different EAs
# - Proposes unique names:  _<ADDR>_<OldLabel>   (e.g., _11288A_turn_towards_input_increment)
# - Applies using ida_name.set_name(..., SN_LOCAL) to replace the local label (no double names)
# - Globals & function-start names are ignored
#
# Set APPLY_CHANGES=True to commit the changes; otherwise it's a preview.

import idaapi
import ida_bytes
import ida_funcs
import ida_name
import ida_nalt
import idautils
import idc
import re

# ------------- Settings -------------
APPLY_CHANGES = True

# Ignore obviously auto-generated names (keep this conservative)
IGNORE_PATTERNS = [
    r'^sub_[0-9A-Fa-f]+$',
    r'^loc_[0-9A-Fa-f]+$',
    r'^locret_[0-9A-Fa-f]+$',
]

# ------------------------------------

def _addr6(ea: int) -> str:
    return f"{ea:X}".upper().zfill(6)

def _label_id(s: str) -> str:
    if not s:
        return s
    s2 = re.sub(r'[^A-Za-z0-9_]', '_', s.strip())
    if s2 and s2[0].isdigit():
        s2 = "_" + s2
    return s2

def _is_ignored(name: str) -> bool:
    for pat in IGNORE_PATTERNS:
        if re.search(pat, name):
            return True
    return False

def _visible_name(ea: int) -> str:
    nm = ida_name.get_short_name(ea)
    if nm:
        return nm
    GN_VISIBLE = getattr(ida_name, "GN_VISIBLE", 0x01)
    GN_LOCAL   = getattr(ida_name, "GN_LOCAL",   0x20)
    return idc.get_name(ea, GN_VISIBLE | GN_LOCAL) or ""

def _get_local_name(ea: int) -> str:
    """Return the local (function-scoped) name if present at EA."""
    f = ida_funcs.get_func(ea)
    if not f:
        return ""
    try:
        GN_LOCAL = getattr(ida_name, "GN_LOCAL", 0x20)
        nm = idc.get_name(ea, GN_LOCAL)
        return nm or ""
    except Exception:
        return ""

def _propose_sublabel(old_label: str, ea: int) -> str:
    """
    Sub-label proposal (avoid 'loc_' reserved prefix):
        _<ADDR>_<OldLabel>
    """
    base = _label_id(old_label) or f"_{_addr6(ea)}"
    cand = f"_{_addr6(ea)}_{base}"
    # If that candidate already names a different EA, append address again.
    existing = idc.get_name_ea_simple(cand)
    if existing != idc.BADADDR and existing != ea:
        cand = f"{cand}__{_addr6(ea)}"
    return cand

def _collect_sublabels():
    """
    Return list of { 'ea', 'name', 'func' } for code labels that are:
      - inside a function
      - NOT at the function start
    """
    out = []
    for seg_ea in idautils.Segments():
        seg = idaapi.getseg(seg_ea)
        if not seg:
            continue
        ea, end_ea = seg.start_ea, seg.end_ea
        while ea < end_ea:
            fflags = ida_bytes.get_full_flags(ea)
            if ida_bytes.is_head(fflags) and ida_bytes.is_code(fflags):
                nm = _visible_name(ea)
                if nm:
                    f = ida_funcs.get_func(ea)
                    if f and ea != f.start_ea:  # sub-label (not function start)
                        out.append({'ea': ea, 'name': nm, 'func': f})
            ea = ida_bytes.next_head(ea, end_ea)
            if ea == idc.BADADDR:
                break
    return out

def _group_by_name(entries):
    mp = {}
    for ent in entries:
        nm = ent['name']
        mp.setdefault(nm, []).append(ent)
    return mp

def _apply_local_replace(ea: int, new_name: str) -> bool:
    """
    Replace an existing local label with a new local name at EA using ida_name.set_name.
    Avoid creating a global at the same EA.
    """
    # If already the same, done.
    cur = _visible_name(ea)
    if cur == new_name:
        return True

    # Remove local name (if any), then set new LOCAL name.
    try:
        ida_name.set_name(ea, "", idc.SN_LOCAL | idc.SN_NOWARN)
    except Exception:
        pass

    ok = ida_name.set_name(ea, new_name, idc.SN_LOCAL | idc.SN_CHECK | idc.SN_NOWARN)
    if not ok:
        ok = ida_name.set_name(ea, new_name, idc.SN_LOCAL | idc.SN_FORCE | idc.SN_NOWARN)
    return bool(ok)

def run():
    # gather sublabels only
    labels = _collect_sublabels()

    # duplicates by text
    byname = _group_by_name(labels)
    duplicates = {
        nm: lst for nm, lst in byname.items()
        if len(lst) > 1 and not _is_ignored(nm)
    }

    if not duplicates:
        print("[dup-sublabels] No duplicate sub-label names found. 🎉")
        return

    first_ea = { nm: min(e['ea'] for e in lst) for nm, lst in duplicates.items() }

    print("[dup-sublabels] Duplicate sub-labels detected. Preview below.\n")

    # For stable output: group by function start EA
    func_groups = {}
    for old_name, entries in sorted(duplicates.items(), key=lambda kv: kv[0].lower()):
        for ent in entries:
            ea, f = ent['ea'], ent['func']
            fn_key = f.start_ea
            new_nm = _propose_sublabel(old_name, ea)
            func_groups.setdefault(fn_key, []).append((old_name, new_nm, ea, f))

    for fn_start in sorted(func_groups.keys()):
        f = ida_funcs.get_func(fn_start)
        f_name = _visible_name(fn_start) or f"sub_{fn_start:X}"
        print(f"== {f_name} ==")

        group = sorted(func_groups[fn_start], key=lambda x: x[2])
        w_old = max(len(x[0]) for x in group)
        w_new = max(len(x[1]) for x in group)

        for old_nm, new_nm, ea, _ in group:
            print(f"  {old_nm:<{w_old}}  ->  {new_nm:<{w_new}}   @  0x{ea:08X}  [first: 0x{first_ea[old_nm]:08X}]")
            if APPLY_CHANGES:
                ok = _apply_local_replace(ea, new_nm)
                if not ok:
                    print(f"    [WARN] Failed to set local name '{new_nm}' at 0x{ea:08X}")

        print()

    if not APPLY_CHANGES:
        print("[dup-sublabels] Preview only. No changes were made.")
        print("                Set APPLY_CHANGES=True to write changes.\n")

if __name__ == "__main__":
    run()
