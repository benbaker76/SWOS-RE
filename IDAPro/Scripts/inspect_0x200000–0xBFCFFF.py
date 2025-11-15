# audit_and_prune_gap.py
# Inspect 0x200000–0xBFCFFF for content/xrefs; optionally delete overlapping segments.

import ida_segment, ida_bytes, ida_funcs, ida_xref, idautils, ida_name

REGION_START = 0x00200000
REGION_END   = 0x00BFCFFF   # inclusive

# Safety toggles
MAX_XREF_SAMPLES   = 20   # how many xref examples to print
AUTO_DELETE_UNUSED = False  # set True to automatically delete empty/unused segments in range

def segs_overlapping(start, end):
    out = []
    for s_ea in idautils.Segments():
        seg = ida_segment.getseg(s_ea)
        if not seg:
            continue
        s0, s1 = seg.start_ea, seg.end_ea - 1
        if not (s1 < start or s0 > end):
            out.append(seg)
    return out

def in_region(ea):
    return REGION_START <= ea <= REGION_END

def count_defined_and_names(seg):
    s0, s1 = seg.start_ea, seg.end_ea
    defined = data = code = names = 0
    for head in idautils.Heads(s0, s1):
        if not ida_bytes.is_unknown(ida_bytes.get_full_flags(head)):
            defined += 1
            if ida_bytes.is_code(ida_bytes.get_full_flags(head)):
                code += 1
            else:
                data += 1
            if ida_name.get_name(head):
                names += 1
    return defined, code, data, names

def xrefs_into_region():
    hits = []
    # Walk all functions and instructions, collect xrefs that land inside the region
    for f_ea in idautils.Functions():
        func = ida_funcs.get_func(f_ea)
        if not func:
            continue
        for head in idautils.Heads(func.start_ea, func.end_ea):
            for xr in idautils.XrefsFrom(head, 0):
                if in_region(xr.to):
                    hits.append((head, xr.to))
    return hits

def print_seg(seg):
    name = ida_segment.get_segm_name(seg)
    r = 'R' if (seg.perm & ida_segment.SEGPERM_READ)  else '-'
    w = 'W' if (seg.perm & ida_segment.SEGPERM_WRITE) else '-'
    x = 'X' if (seg.perm & ida_segment.SEGPERM_EXEC)  else '-'
    print("SEG %-16s %08X-%08X  %s%s%s  class=%s type=%s" %
          (name, seg.start_ea, seg.end_ea-1, r,w,x, seg.sclass, seg.type))

def main():
    print("=== Auditing gap %08X-%08X ===" % (REGION_START, REGION_END))

    # 1) Segments overlapping the gap
    segs = segs_overlapping(REGION_START, REGION_END)
    if not segs:
        print("No segments overlap this region.")
    else:
        print("Overlapping segments:")
        for seg in segs:
            print_seg(seg)

    # 2) Defined items & names inside each overlapping segment
    any_defined = False
    for seg in segs:
        d, c, da, nm = count_defined_and_names(seg)
        print("  %-16s defined=%d  code=%d  data=%d  names=%d" %
              (ida_segment.get_segm_name(seg), d, c, da, nm))
        if d or nm:
            any_defined = True

    # 3) Xrefs into the region (from code anywhere)
    hits = xrefs_into_region()
    print("Xrefs into region: %d" % len(hits))
    for i, (src, dst) in enumerate(hits[:MAX_XREF_SAMPLES]):
        print("  %08X -> %08X  (%s)" % (src, dst, ida_name.get_func_name(src) or ""))

    # 4) Optional pruning
    if AUTO_DELETE_UNUSED and segs:
        if any_defined or hits:
            print("Will NOT delete: found defined items or xrefs.")
        else:
            print("No defined items or xrefs found. Deleting overlapping segments...")
            for seg in segs:
                print("  Deleting segment:", ida_segment.get_segm_name(seg))
                # Keep bytes == fine (there likely aren't any). Use silent to avoid prompts.
                ida_segment.del_segm(seg.start_ea, ida_segment.SEGMOD_SILENT)
            print("Done. Re-open Segments view to verify.")

    print("=== Done ===")

if __name__ == "__main__":
    main()