# -*- coding: utf-8 -*-
# @category Amiga
# Export reachable callees starting from the function under the cursor as JSONL.
# One JSON object per function capturing metadata, callers/callees, asm, and decompiled C.

from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.program.model.symbol import RefType
from ghidra.program.model.listing import CodeUnit
from ghidra.program.model.address import AddressSet
from datetime import datetime
import os, json

prog    = currentProgram
fm      = prog.getFunctionManager()
listing = prog.getListing()
memory  = prog.getMemory()

# ----------------- Optional reanalysis support (safe if missing) -----------------
HAVE_AAM = False
try:
    from ghidra.app.services import AutoAnalysisManager
    HAVE_AAM = True
except:
    pass
# -------------------------------------------------------------------------------

# ----------------- Settings -----------------
INCLUDE_EXTERNAL       = False    # include external stubs if encountered
INCLUDE_THUNKS         = True     # include thunk wrappers
INCLUDE_DECOMPILED_C   = True     # include raw decompiled C in the record
DECOMPILE_TIMEOUT_SEC  = 60       # per function
REANALYZE_BEFORE_DECOMP = False   # run analysis on the reached set prior to decomp
# --------------------------------------------

EOL = "\n"  # internal newlines; JSON will escape anyway

def ask_save_path_jsonl(suggest_name):
    """
    Let the user pick either a folder OR type a filename.
    If a directory is chosen, append suggest_name.
    If a file is chosen/typed, use it (force .jsonl).
    """
    f = askFile("Save JSONL (choose a folder or type a filename)", "Save")
    if f is None:
        return None
    if f.isDirectory():
        path = os.path.join(f.getAbsolutePath(), suggest_name)
    else:
        path = f.getAbsolutePath()
    if not path.lower().endswith(".jsonl"):
        path += ".jsonl"
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
    opts = DecompileOptions()
    try:
        opts.grabFromProgram(prog)
    except:
        pass
    try:
        opts.setParameterIdEnabled(True)
    except:
        pass
    di.setOptions(opts)
    di.setSimplificationStyle("decompile")
    di.openProgram(prog)
    return di

def decompile_raw(f, di, monitor):
    """Return raw decompiled C text or an error comment."""
    try:
        res = di.decompileFunction(f, DECOMPILE_TIMEOUT_SEC, monitor)
        if res is not None and res.decompileCompleted():
            return res.getDecompiledFunction().getC()
        else:
            msg = res.getErrorMessage() if res else "no result"
            return "/* decompilation failed: %s */" % msg
    except Exception as e:
        return "/* decompilation exception: %s */" % str(e)

def gather_callers(func):
    """
    Return list of {name, entry, addr_hex} for functions that call 'func'.
    Based on references to the function entry with RefType CALL (or flow-to call).
    """
    out = []
    ep = func.getEntryPoint()
    if ep is None:
        return out
    refs = getReferencesTo(ep)
    seen = set()
    for r in refs:
        rt = r.getReferenceType()
        if rt is None:
            continue
        # Accept CALL and CALL_OVERRIDE; be permissive on flows that are calls.
        if not (rt.isCall() or rt.isFlow()):
            continue
        from_addr = r.getFromAddress()
        if from_addr is None:
            continue
        caller = fm.getFunctionContaining(from_addr)
        if caller is None:
            continue
        cep = caller.getEntryPoint()
        key = int(cep.getOffset()) if cep else None
        if key in seen:
            continue
        seen.add(key)
        out.append({
            "name": caller.getName(),
            "entry": "0x%X" % key,
            "addr_hex": "0x%X" % int(from_addr.getOffset())
        })
    return out

def gather_callees(func):
    out = []
    seen = set()
    for callee in iter_call_targets(func):
        ep = callee.getEntryPoint()
        key = int(ep.getOffset()) if ep else None
        if key in seen:
            continue
        seen.add(key)
        out.append({
            "name": callee.getName(),
            "entry": "0x%X" % key
        })
    return out

def linearize_asm(func):
    """
    Return a single string with one disassembly line per instruction:
    '0xADDR    TEXT' and includes any EOL comments inline.
    """
    body = func.getBody()
    if body is None:
        return ""
    instrs = listing.getInstructions(body, True)
    lines = []
    while instrs.hasNext():
        ins = instrs.next()
        a = ins.getAddress()
        text = ins.toString()  # mnemonic + operands
        line = "0x%X    %s" % (int(a.getOffset()), text)
        # Append EOL comment if present
        try:
            cmt = listing.getComment(CodeUnit.EOL_COMMENT, a)
            if cmt:
                line += "    ; " + cmt.replace("\r", "").replace("\n", " ")
        except:
            pass
        lines.append(line)
    return EOL.join(lines)

def safe_prog_md5(p):
    try:
        return p.getExecutableMD5()
    except:
        return None

def program_metadata():
    lang = prog.getLanguage().getLanguageDescription().getLanguageID().getIdAsString()
    cspec = prog.getCompilerSpec().getCompilerSpecID().getIdAsString()
    try:
        img_base = memory.getMinAddress()
        img_base_hex = "0x%X" % int(img_base.getOffset())
    except:
        img_base_hex = None
    return {
        "program_name": prog.getName(),
        "language_id": lang,
        "compiler_spec": cspec,
        "image_base": img_base_hex,
        "md5": safe_prog_md5(prog),
        "timestamp": datetime.now().strftime("%Y-%m-%d %H:%M:%S")
    }

def func_record(func, di=None):
    ep = func.getEntryPoint()
    addr_int = int(ep.getOffset()) if ep else None
    addr_hex = "0x%X" % addr_int if addr_int is not None else None

    body = func.getBody()
    size = int(body.getNumAddresses()) if body is not None else 0

    # Parameters & return type (strings only; full types can be added later)
    params = []
    try:
        for p in func.getParameters() or []:
            params.append({"name": (p.getName() or ""), "type": dtname(p.getDataType())})
    except:
        pass

    record = {
        "kind": "function",
        "program": program_metadata(),
        "name": func.getName(),
        "entry": addr_hex,
        "size_bytes": size,
        "prototype": function_prototype(func),
        "return_type": dtname(func.getReturnType()),
        "calling_convention": func.getCallingConventionName(),
        "is_thunk": bool(func.isThunk()) if hasattr(func, "isThunk") else False,
        "is_external": bool(func.isExternal()) if hasattr(func, "isExternal") else False,
        "has_varargs": bool(func.hasVarArgs()),
        "params": params,
        "callees": gather_callees(func),
        "callers": gather_callers(func),
        "asm": linearize_asm(func)
    }

    if INCLUDE_DECOMPILED_C and di is not None:
        record["decompiled_c"] = decompile_raw(func, di, monitor)

    return record

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
            aset = AddressSet()
            for f in funcs_sorted:
                if f.getBody() is not None:
                    aset.add(f.getBody())
            if not aset.isEmpty():
                aam = AutoAnalysisManager.getAnalysisManager(prog)
                aam.reAnalyzeAll(aset)
        except:
            pass

    di = None
    if INCLUDE_DECOMPILED_C:
        di = prepare_decompiler(prog)

    # Save path
    safe_name = (start.getName() or "output") + ".jsonl"
    out_path = ask_save_path_jsonl(safe_name)
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

    count = 0
    with open(out_path, "wb") as fh:
        for f in funcs_sorted:
            # honor flags (external/thunk) at export time too
            try:
                if not INCLUDE_EXTERNAL and f.isExternal():
                    continue
            except:
                pass
            try:
                if not INCLUDE_THUNKS and f.isThunk():
                    continue
            except:
                pass

            rec = func_record(f, di)
            line = json.dumps(rec, ensure_ascii=False).encode("utf-8")
            fh.write(line + b"\n")
            count += 1

    print("Wrote %d function records to %s" % (count, out_path))

if __name__ == "__main__":
    main()
