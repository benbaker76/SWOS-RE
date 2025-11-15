# -*- coding: utf-8 -*-
# @category Amiga
# Export reachable callees starting from the function under the cursor.
# Writes a <StartName>.c file: prototypes first, then (optionally) raw decompiled C
# in address order. Writes in binary; the decompiler's line endings are preserved.

from ghidra.app.decompiler import DecompInterface, DecompileOptions
from datetime import datetime
import os

prog    = currentProgram
fm      = prog.getFunctionManager()
listing = prog.getListing()

# ----------------- Optional reanalysis support (safe if missing) -----------------
HAVE_AAM = False
try:
    from ghidra.app.services import AutoAnalysisManager
    HAVE_AAM = True
except:
    pass
# -------------------------------------------------------------------------------

# ----------------- Settings -----------------
INCLUDE_EXTERNAL       = False   # include external stubs if encountered
INCLUDE_THUNKS         = True    # include thunk wrappers
INCLUDE_DECOMPILED_C   = True    # include decompiled C blocks after prototypes
DECOMPILE_TIMEOUT_SEC  = 60      # per function
EOL = "\r\n"                     # our own line ending for headers/prototypes
REANALYZE_BEFORE_DECOMP = False  # set True if your build supports AutoAnalysisManager
# --------------------------------------------

def ask_save_path(suggest_name):
    """
    Let the user pick either a folder OR type a filename.
    - If a directory is chosen, append suggest_name.
    - If a file is chosen/typed, use it (add .c if missing).
    """
    f = askFile("Save output .c (choose a folder or type a filename)", "Save")
    if f is None:
        return None
    if f.isDirectory():
        return os.path.join(f.getAbsolutePath(), suggest_name)
    path = f.getAbsolutePath()
    if not path.lower().endswith(".c"):
        path += ".c"
    return path

def function_at_cursor():
    ea = currentAddress
    if ea is None:
        return None
    f = fm.getFunctionAt(ea)
    if f is None:
        f = fm.getFunctionContaining(ea)
    return f

def dtname(dt):
    try:
        return dt.getDisplayName()
    except:
        return "int"

def param_proto(p):
    try:
        t = dtname(p.getDataType())
        n = p.getName() or "param"
        return "%s %s" % (t, n)
    except:
        return "int param"

def function_prototype(f):
    rt = dtname(f.getReturnType())
    cc = f.getCallingConventionName()  # may be None/empty
    ps = f.getParameters()
    if ps is None or len(ps) == 0:
        params = "void"
    else:
        params = ", ".join(param_proto(p) for p in ps)

    if f.hasVarArgs():
        params = ("..." if params == "void" else (params + ", ..."))

    if cc and len(cc.strip()) > 0:
        return "%s %s %s(%s);" % (rt, cc, f.getName(), params)
    else:
        return "%s %s(%s);" % (rt, f.getName(), params)

def iter_call_targets(func):
    """Yield Function objects directly called by 'func' (JSR/BSR/etc.)."""
    body = func.getBody()
    if body is None:
        return
    instrs = listing.getInstructions(body, True)  # forward
    seen_targets = set()
    while instrs.hasNext():
        ins = instrs.next()
        ft = ins.getFlowType()
        if ft is None or not ft.isCall():
            continue
        try:
            flows = ins.getFlows()
        except:
            flows = None
        if not flows:
            continue
        for dest in flows:
            callee = fm.getFunctionAt(dest) or fm.getFunctionContaining(dest)
            if callee is None:
                continue
            try:
                if not INCLUDE_EXTERNAL and callee.isExternal():
                    continue
            except:
                pass
            try:
                if not INCLUDE_THUNKS and callee.isThunk():
                    continue
            except:
                pass
            ep = callee.getEntryPoint()
            key = int(ep.getOffset()) if ep is not None else None
            if key in seen_targets:
                continue
            seen_targets.add(key)
            yield callee

def collect_reachable(start_func):
    """DFS over direct call graph; returns dict {entry_offset:int -> Function}."""
    visited = {}
    stack = [start_func]
    while stack:
        f = stack.pop()
        ep = f.getEntryPoint()
        if ep is None:
            continue
        key = int(ep.getOffset())
        if key in visited:
            continue
        visited[key] = f
        for callee in iter_call_targets(f):
            stack.append(callee)
    return visited

def prepare_decompiler(prog):
    di = DecompInterface()
    # Load options from the program (closer to what the UI uses)
    opts = DecompileOptions()
    try:
        opts.grabFromProgram(prog)
    except:
        pass
    # Prefer Parameter ID and typical “decompile” pipeline
    try:
        opts.setParameterIdEnabled(True)
    except:
        pass
    di.setOptions(opts)
    di.setSimplificationStyle("decompile")
    di.openProgram(prog)
    return di

def decompile_functions_in_order_raw(funcs_sorted, di, monitor):
    """
    Return list of (header_text, c_text) pairs.
    c_text is the raw decompiler output (unaltered). We do not change newlines.
    """
    out = []
    for f in funcs_sorted:
        hdr = "// --- %s @ %s ---" % (f.getName(), f.getEntryPoint())
        try:
            res = di.decompileFunction(f, DECOMPILE_TIMEOUT_SEC, monitor)
            if res is not None and res.decompileCompleted():
                c = res.getDecompiledFunction().getC()
                out.append((hdr, c))
            else:
                msg = res.getErrorMessage() if res else "no result"
                out.append((hdr, "/* decompilation failed: %s */" % msg))
        except Exception as e:
            out.append((hdr, "/* decompilation exception: %s */" % str(e)))
    return out

def main():
    start = function_at_cursor()
    if start is None:
        print("No function under cursor.")
        return

    # Gather reachable functions and sort by address
    reached = collect_reachable(start)
    keys_sorted = sorted(reached.keys())
    funcs_sorted = [reached[k] for k in keys_sorted]

    # (Optional) Re-run analysis over these bodies (only if available & enabled)
    if REANALYZE_BEFORE_DECOMP and HAVE_AAM:
        try:
            from ghidra.program.model.address import AddressSet
            aset = AddressSet()
            for f in funcs_sorted:
                if f.getBody() is not None:
                    aset.add(f.getBody())
            if not aset.isEmpty():
                aam = AutoAnalysisManager.getAnalysisManager(prog)
                aam.reAnalyzeAll(aset)
        except:
            pass

    # Prototypes
    proto_lines = [function_prototype(f) for f in funcs_sorted]

    # Optional: raw decompile text with UI-like options
    raw_pairs = []
    if INCLUDE_DECOMPILED_C:
        di = prepare_decompiler(prog)
        raw_pairs = decompile_functions_in_order_raw(funcs_sorted, di, monitor)

    # Build save path
    safe_name = (start.getName() or "output") + ".c"
    out_path = ask_save_path(safe_name)
    if out_path is None:
        print("No path chosen.")
        return

    parent = os.path.dirname(out_path)
    if parent and not os.path.exists(parent):
        try:
            os.makedirs(parent)
        except Exception as e:
            print("Failed to create directory '%s': %s" % (parent, e))
            return

    # Write in binary; DO NOT touch line endings in decompiled text.
    with open(out_path, "wb") as fh:
        def w(line):
            fh.write(line.encode("utf-8"))

        # Banner
        w("/*" + EOL)
        w(" * Auto-generated call graph export" + EOL)
        w(" * Start: %s" % (start.getName() or "<?>") + EOL)
        w(" * Date : %s" % datetime.now().strftime("%Y-%m-%d %H:%M:%S") + EOL)
        w(" */" + EOL + EOL)
        
        w("/* ===================== INCLUDES ===================== */" + EOL)
        w("#include <stdint.h>" + EOL)
        w("#include <stdbool.h>" + EOL)
        w("#include \"LocalTypes.h\"" + EOL)
        w("#include \"Data.h\"" + EOL + EOL)

        # Prototypes
        w("/* ===================== PROTOTYPES ===================== */" + EOL + EOL)
        for line in proto_lines:
            w(line + EOL)

        # Raw decompiled C (headers use our EOL; C text is written as-is)
        if INCLUDE_DECOMPILED_C:
            w(EOL + "/* =================== DECOMPILED C ===================== */" + EOL + EOL)
            first = True
            for hdr, c in raw_pairs:
                if not first:
                    w(EOL)
                first = False
                w(hdr + EOL)
                fh.write(c.encode("utf-8"))
            w(EOL)

    print("Wrote %d prototypes%s to %s" %
          (len(proto_lines),
           (" and %d decompilations" % len(raw_pairs)) if INCLUDE_DECOMPILED_C else "",
           out_path))

if __name__ == "__main__":
    main()
