# IDA 9.x — Find unknown (undefined) file-backed runs, with optional diagnostics.
# Prints to the Output window only.

import idaapi
import ida_bytes

# ===================== USER OPTIONS =====================

PRINT_LENGTH    = True     # include run lengths in output
REPORT_LONE_DB  = False    # set True to also report single-byte defined data items (dc.b)

# ===================== CORE HELPERS =====================

def is_file_backed(ea: int) -> bool:
    return ida_bytes.is_loaded(ea)

def is_unknown_byte(ea: int) -> bool:
    f = ida_bytes.get_full_flags(ea)
    return ida_bytes.is_loaded(ea) and ida_bytes.is_unknown(f)

def is_lone_db(ea: int) -> bool:
    f = ida_bytes.get_full_flags(ea)
    if not ida_bytes.is_loaded(ea):
        return False
    if ida_bytes.is_code(f):
        return False
    if not ida_bytes.is_data(f):
        return False
    return ida_bytes.get_item_size(ea) == 1

def all_segments():
    for i in range(idaapi.get_segm_qty()):
        seg = idaapi.getnseg(i)
        if seg:
            yield seg

def find_runs(predicate):
    runs = []
    for seg in all_segments():
        ea = seg.start_ea
        end = seg.end_ea
        in_run = False
        run_start = None
        while ea < end:
            hit = predicate(ea)
            if hit and not in_run:
                in_run = True
                run_start = ea
            elif not hit and in_run:
                in_run = False
                runs.append((run_start, ea))
            ea += 1
        if in_run:
            runs.append((run_start, end))
    runs.sort()
    merged = []
    for s, e in runs:
        if not merged or s > merged[-1][1]:
            merged.append([s, e])
        else:
            merged[-1][1] = max(merged[-1][1], e)
    return [(s, e) for s, e in merged]

def debug_ea(ea: int):
    if not is_file_backed(ea):
        return f"{ea:#010x}: not file-backed"
    f = ida_bytes.get_full_flags(ea)
    kinds = []
    if ida_bytes.is_code(f): kinds.append("code")
    if ida_bytes.is_data(f): kinds.append(f"data(sz={ida_bytes.get_item_size(ea)})")
    if ida_bytes.is_unknown(f): kinds.append("unknown")
    if not kinds: kinds.append("other")
    return f"{ea:#010x}: {'/'.join(kinds)}"

def main():
    lines = []

    unk_runs = find_runs(is_unknown_byte)
    lines.append("Undefined (unknown) file-backed data runs:")
    if not unk_runs:
        lines.append("  (none)")
    else:
        for s, e in unk_runs:
            if PRINT_LENGTH:
                lines.append(f"  {s:#010x}  len={e - s}")
            else:
                lines.append(f"  {s:#010x}")

    if REPORT_LONE_DB:
        lines.append("")
        lines.append("Defined single-byte data items (dc.b) (file-backed):")
        db_runs = find_runs(is_lone_db)
        if not db_runs:
            lines.append("  (none)")
        else:
            for s, e in db_runs:
                if PRINT_LENGTH:
                    lines.append(f"  {s:#010x}  len={e - s}")
                else:
                    lines.append(f"  {s:#010x}")

    idaapi.msg("\n".join(lines) + "\n")

if __name__ == "__main__":
    main()
