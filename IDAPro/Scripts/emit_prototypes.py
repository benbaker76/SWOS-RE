# -*- coding: utf-8 -*-
# IDA Pro 9.0 — Emit function prototypes with address ranges
# Target: Amiga 68000
#
# Output format (one line per function):
#   0014D50C-0014D523 void __usercall ImportTacticsSelectTactics(MenuEntry *cur@<a5>)
#
# Notes:
# - Uses func.start_ea and func.end_ea (IDA end_ea is the end address as stored by IDA; typically “one past last byte”)
# - Tries to print the full 1-line function declaration including calling convention and register args
# - Falls back gracefully if type info is missing
#
# Save as: emit_prototypes.py
# Run: File -> Script file... in IDA

import os

import idaapi
import ida_funcs
import ida_kernwin
import ida_name
import ida_nalt
import ida_typeinf as tif
import idautils
import idc

DEFAULT_OUT_NAME = "Prototypes.txt"

# -----------------------------
# Formatting
# -----------------------------

def _fmt_ea(ea: int) -> str:
    return f"{int(ea):08X}"

def _pick_output_path():
    try:
        base_dir = os.path.dirname(ida_nalt.get_input_file_path() or "")
        if not base_dir:
            base_dir = os.getcwd()
    except Exception:
        base_dir = os.getcwd()

    default_path = os.path.join(base_dir, DEFAULT_OUT_NAME)
    path = ida_kernwin.ask_file(True, default_path, "Save prototypes as")
    if not path:
        raise RuntimeError("User canceled save dialog.")
    return os.path.abspath(path)

# -----------------------------
# Prototype printing
# -----------------------------

def _print_func_decl_1line(ea: int) -> str:
    """
    Best-effort: return a 1-line prototype including name.
    Example: 'void __usercall Foo(Bar *x@<a5>)'
    """
    name = ida_name.get_name(ea) or idaapi.get_func_name(ea) or f"sub_{ea:08X}"

    # Prefer typeinfo (tinfo) so we get __usercall + reg args
    ti = tif.tinfo_t()
    if ida_nalt.get_tinfo(ti, ea):
        try:
            # Print a one-liner declaration with the function name
            # (semicolon excluded; we want exactly what you showed)
            decl = tif.print_tinfo(
                "",
                0,
                0,
                tif.PRTYPE_1LINE,
                ti,
                name,
                ""
            )
            if decl:
                return decl.strip()
        except Exception:
            pass

    # Fallback: IDA's string type (may already include name)
    try:
        t = idc.get_type(ea) or ""
    except Exception:
        t = ""

    t = (t or "").strip()
    if t:
        # If the returned type string doesn't contain the name, inject it.
        # Common pattern: "void __usercall(...)" (no name)
        if name not in t:
            # Try to insert name before the first '('
            p = t.find("(")
            if p != -1:
                return (t[:p].rstrip() + " " + name + t[p:]).strip()
        return t

    # Last resort: just emit a minimal signature
    return f"void {name}(void)"

# -----------------------------
# Main
# -----------------------------

def main():
    out_path = _pick_output_path()

    funcs = []
    for ea in idautils.Functions():
        f = ida_funcs.get_func(ea)
        if not f:
            continue
        funcs.append(f)

    funcs.sort(key=lambda fn: int(fn.start_ea))

    with open(out_path, "w", encoding="utf-8") as fp:
        for fn in funcs:
            start = int(fn.start_ea)
            end = int(fn.end_ea)

            proto = _print_func_decl_1line(start)
            fp.write(f"{_fmt_ea(start)}-{_fmt_ea(end)} {proto}\n")

    idaapi.msg(f"[emit_prototypes] Wrote: {out_path} (functions={len(funcs)})\n")

if __name__ == "__main__":
    main()
