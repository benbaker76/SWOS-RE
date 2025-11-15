import ida_bytes, ida_funcs, ida_lines, ida_name, idc
from ida_lines import E_PREV, E_NEXT, tag_remove

def _split_code_and_comment(raw: str):
    in_str = False
    i = 0
    n = len(raw)
    while i < n:
        ch = raw[i]
        if ch == '"':
            if in_str and i + 1 < n and raw[i + 1] == '"':
                i += 2; continue
            in_str = not in_str
        elif ch == ';' and not in_str:
            return raw[:i], raw[i + 1:]
        i += 1
    return raw, None

def dump_cmt(ea: int):
    dl = tag_remove(ida_lines.generate_disasm_line(ea, 0) or "")
    code, eol = _split_code_and_comment(dl)
    print(f"\nEA: {ea:08X}  NAME: {ida_name.get_short_name(ea) or ''}")
    print(f"CODE: {code.rstrip()}")
    print(f"EOL : {eol.strip() if eol else ''}")

    ant = tag_remove(ida_bytes.get_cmt(ea, False) or "")
    rpt = tag_remove(ida_bytes.get_cmt(ea, True) or "")
    print("\n-- anterior (non-repeatable) --")
    print(ant)
    print("-- repeatable --")
    print(rpt)

    print("-- extra anterior (E_PREV) --")
    i = 0
    while True:
        s = idc.get_extra_cmt(ea, E_PREV + i)
        if not s: break
        print(tag_remove(s).rstrip())
        i += 1

    print("-- extra posterior (E_NEXT) --")
    i = 0
    while True:
        s = idc.get_extra_cmt(ea, E_NEXT + i)
        if not s: break
        print(tag_remove(s).rstrip())
        i += 1

dump_cmt(0x10E6B8)