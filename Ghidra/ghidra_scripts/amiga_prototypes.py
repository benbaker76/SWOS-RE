# -*- coding: utf-8 -*-
# @category Amiga
# Export all function prototypes in address order (as laid out in the binary).
# Prompts ONLY for the output .txt file.

from ghidra.program.model.listing import Parameter
from ghidra.program.model.symbol import SymbolType
from java.lang import String

prog = currentProgram
fm   = prog.getFunctionManager()

# --- settings (adjust if you want) ---
SKIP_EXTERNAL = True     # skip external stubs
SKIP_THUNKS   = True     # skip thunks/wrappers

def ask_output_file(default_name="Prototypes.txt"):
    return askFile("Save prototypes as .txt", "Save")

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
        if params == "void":
            params = "..."
        else:
            params += ", ..."

    if cc and len(cc.strip()) > 0:
        return "%s %s %s(%s);" % (rt, cc, f.getName(), params)
    else:
        return "%s %s(%s);" % (rt, f.getName(), params)

def main():
    out_file = ask_output_file()
    if out_file is None:
        print("No output chosen.")
        return

    out_lines = []
    it = fm.getFunctions(True)  # True = forward by address
    count = 0
    while it.hasNext():
        f = it.next()
        # optional filters
        try:
            if SKIP_EXTERNAL and f.isExternal():
                continue
        except:
            pass
        try:
            if SKIP_THUNKS and f.isThunk():
                continue
        except:
            pass

        out_lines.append(function_prototype(f))
        count += 1

    with open(out_file.getPath(), "w") as fh:
        for line in out_lines:
            fh.write(line + "\n")

    print("Wrote %d prototypes to %s" % (count, out_file.getPath()))

if __name__ == "__main__":
    main()
