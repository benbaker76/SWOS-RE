# find_bad_relocs.py
#
# IDA 9.0 script — INVERSE of swos2_dump_relocs.py
#
# Scans the IDA database for all locations where IDA has created a
# symbolic 32-bit reference (label or label+offset in an operand),
# and checks whether that location has a corresponding entry in SWOS2.REL.
#
# Any symbolic reference WITHOUT a REL entry is a potential bad relocation:
# IDA misinterpreted a raw constant as a symbol reference.  When SWOS2.s
# is assembled, these produce relocations that the Amiga hunk loader
# adjusts at load time, corrupting the value.
#
# Output: data/find_bad_relocs_output.txt (next to this script / IDB)
#
# Usage:  Run from IDA's Script File dialog (File → Script File…)

import os
import struct

import ida_bytes
import ida_funcs
import ida_idaapi
import ida_kernwin
import ida_lines
import ida_loader
import ida_segment
import ida_ua
import idc

# ── CONFIG ──────────────────────────────────────────────────────────────
PROGRAM_BASE = 0x00100000
DEFAULT_REL_FILENAME = "SWOS2.REL"

# ── Helpers ─────────────────────────────────────────────────────────────

def _find_rel_path():
    """Locate SWOS2.REL next to the IDB."""
    try:
        idb_path = ida_loader.get_path(ida_loader.PATH_TYPE_IDB)
    except Exception:
        idb_path = idc.get_idb_path()
    base_dir = os.path.dirname(idb_path)
    p = os.path.join(base_dir, DEFAULT_REL_FILENAME)
    if os.path.isfile(p):
        return p
    print(f"[find_bad_relocs] Cannot find {p}")
    return None


def _load_rel_offsets(rel_path):
    """
    Load SWOS2.REL and return a set of ptr_ea values.

    Each REL entry is a big-endian uint32 offset.
    ptr_ea = PROGRAM_BASE + offset - 1   (the -1 mirrors the 68k tst.b -(a0))
    """
    with open(rel_path, "rb") as f:
        data = f.read()
    count = len(data) // 4
    offsets = set()
    for i in range(count):
        off = struct.unpack(">I", data[i*4 : i*4+4])[0]
        ptr_ea = PROGRAM_BASE + off - 1
        offsets.add(ptr_ea)
    print(f"[find_bad_relocs] Loaded {count} REL entries")
    return offsets


def _is_in_program_range(ea):
    """Check if EA is within the loaded program segments."""
    seg = ida_segment.getseg(ea)
    return seg is not None


def _get_disasm(ea):
    """Get clean disassembly line at ea (no color tags)."""
    line = ida_lines.generate_disasm_line(ea, ida_lines.GENDSM_REMOVE_TAGS)
    return line if line else ""


# ── Main scan ───────────────────────────────────────────────────────────

def find_bad_relocs():
    rel_path = _find_rel_path()
    if not rel_path:
        return

    rel_set = _load_rel_offsets(rel_path)

    # Determine program range from segments
    min_ea = ida_idaapi.BADADDR
    max_ea = 0
    seg = ida_segment.get_first_seg()
    while seg:
        if seg.start_ea < min_ea:
            min_ea = seg.start_ea
        if seg.end_ea > max_ea:
            max_ea = seg.end_ea
        seg = ida_segment.get_next_seg(seg.start_ea)

    print(f"[find_bad_relocs] Scanning range 0x{min_ea:08X} - 0x{max_ea:08X}")

    results = []
    ea = min_ea

    while ea < max_ea and ea != ida_idaapi.BADADDR:
        flags = ida_bytes.get_full_flags(ea)

        if ida_bytes.is_code(flags):
            # Decode the instruction
            insn = ida_ua.insn_t()
            insn_len = ida_ua.decode_insn(insn, ea)
            if insn_len <= 0:
                ea = ida_bytes.next_head(ea, max_ea)
                continue

            # Check each operand for 32-bit immediate or absolute address
            # that IDA has resolved to a symbol
            for op_idx in range(8):
                op = insn.ops[op_idx]
                if op.type == ida_ua.o_void:
                    break

                # We care about operands that embed a 32-bit value in the
                # instruction stream that would become a relocation:
                #
                # o_mem  = absolute memory reference  (e.g. move.w (label).l, d0)
                # o_imm  = immediate value            (e.g. move.l #label, a0)
                # o_near = near branch/jump target    (e.g. jsr label)
                # o_far  = far branch/jump target
                #
                # For 68k, .w absolute addresses (xxx.w) use a 16-bit value
                # and don't produce relocations. We only care about .l (32-bit).
                #
                # We need to figure out WHERE in the instruction stream the
                # 32-bit value lives to check against REL.

                # Get the offset of this operand's data within the instruction
                # op.offb gives the offset from the instruction start to the
                # operand's first byte in the encoded instruction
                if op.offb == 0:
                    # offb == 0 usually means the operand is encoded in the
                    # opcode word itself (register, etc.) — skip
                    continue

                op_ea = ea + op.offb  # address where operand value starts

                if op.type in (ida_ua.o_mem, ida_ua.o_near, ida_ua.o_far):
                    # Check if this is a 32-bit (long) reference
                    # For 68k: if the operand takes 4 bytes, it's .l addressing
                    # We can check by seeing if the next operand (or instruction end)
                    # is 4+ bytes after op_ea
                    next_boundary = ea + insn_len
                    if op_idx + 1 < 8 and insn.ops[op_idx + 1].type != ida_ua.o_void:
                        next_off = insn.ops[op_idx + 1].offb
                        if next_off > 0:
                            next_boundary = ea + next_off

                    op_size = next_boundary - op_ea
                    if op_size < 4:
                        # 16-bit reference — no relocation needed
                        continue

                    # This is a 32-bit absolute reference
                    # Check if IDA has made it symbolic (has a fixup/xref to a named location)
                    target_val = op.addr if op.type == ida_ua.o_mem else op.addr
                    target_name = idc.get_name(target_val, idc.GN_VISIBLE)

                    if not target_name:
                        # No symbol — won't produce a relocation in asm output
                        continue

                    # Check if it's a .w (short) absolute — those don't relocate
                    # In 68k, short absolute is xxx.w = 2 bytes
                    # We already filtered by size above, but double-check
                    # by reading the actual instruction encoding
                    actual_val = ida_bytes.get_dword(op_ea)

                    # Does this operand EA have a corresponding REL entry?
                    if op_ea not in rel_set:
                        disasm = _get_disasm(ea)
                        func = ida_funcs.get_func(ea)
                        func_name = idc.get_func_name(ea) if func else "<no func>"
                        results.append(
                            f"CODE  ea=0x{ea:08X}  op_ea=0x{op_ea:08X}  "
                            f"val=0x{actual_val:08X}  target={target_name}  "
                            f"func={func_name}  |  {disasm}"
                        )

                elif op.type == ida_ua.o_imm:
                    # Immediate operand: e.g. move.l #symbol, a0
                    # or  lea (symbol).l, a0  (IDA may encode as o_mem though)
                    # or  ori.l #(symbol+offset), d0  ← the Bug #1 pattern!

                    if op.offb == 0:
                        continue

                    op_ea = ea + op.offb

                    # Check size of immediate — we only care about 32-bit
                    next_boundary = ea + insn_len
                    if op_idx + 1 < 8 and insn.ops[op_idx + 1].type != ida_ua.o_void:
                        next_off = insn.ops[op_idx + 1].offb
                        if next_off > 0:
                            next_boundary = ea + next_off
                    op_size = next_boundary - op_ea
                    if op_size < 4:
                        continue

                    imm_val = op.value
                    # Check if the immediate value points to a known symbol
                    target_name = idc.get_name(imm_val & 0xFFFFFFFF, idc.GN_VISIBLE)
                    if not target_name:
                        continue

                    disasm = _get_disasm(ea)

                    actual_val = ida_bytes.get_dword(op_ea)

                    if op_ea not in rel_set:
                        func = ida_funcs.get_func(ea)
                        func_name = idc.get_func_name(ea) if func else "<no func>"
                        results.append(
                            f"IMM   ea=0x{ea:08X}  op_ea=0x{op_ea:08X}  "
                            f"val=0x{actual_val:08X}  target={target_name or '?'}  "
                            f"func={func_name}  |  {disasm}"
                        )

            ea = ida_bytes.next_head(ea, max_ea)
            continue

        elif ida_bytes.is_data(flags):
            # Data items: dc.l values that IDA has resolved to symbols
            item_size = ida_bytes.get_item_size(ea)

            if item_size == 4:
                # Single longword — check if IDA treats it as a pointer/symbol
                val = ida_bytes.get_dword(ea)
                target_name = idc.get_name(val, idc.GN_VISIBLE)

                if target_name:
                    if ea not in rel_set:
                        disasm = _get_disasm(ea)
                        func = ida_funcs.get_func(ea)
                        func_name = idc.get_func_name(ea) if func else "<no func>"
                        results.append(
                            f"DATA  ea=0x{ea:08X}  op_ea=0x{ea:08X}  "
                            f"val=0x{val:08X}  target={target_name or '?'}  "
                            f"func={func_name}  |  {disasm}"
                        )

            elif item_size > 4 and (item_size % 4) == 0:
                # Array of longwords (dc.l label1, label2, ...)
                # Check each longword in the array
                for arr_off in range(0, item_size, 4):
                    sub_ea = ea + arr_off
                    val = ida_bytes.get_dword(sub_ea)
                    target_name = idc.get_name(val, idc.GN_VISIBLE)

                    if target_name:
                        if sub_ea not in rel_set:
                            disasm = _get_disasm(ea)
                            func = ida_funcs.get_func(ea)
                            func_name = idc.get_func_name(ea) if func else "<no func>"
                            results.append(
                                f"DATA  ea=0x{ea:08X}+{arr_off:X}  op_ea=0x{sub_ea:08X}  "
                                f"val=0x{val:08X}  target={target_name or '?'}  "
                                f"func={func_name}  |  {disasm}"
                            )

        # Move to next item
        ea = ida_bytes.next_head(ea, max_ea)

    # ── Output ──────────────────────────────────────────────────────────
    print(f"\n[find_bad_relocs] Found {len(results)} suspicious symbolic references "
          f"with NO corresponding REL entry:\n")

    # Write to file
    try:
        idb_path = ida_loader.get_path(ida_loader.PATH_TYPE_IDB)
    except Exception:
        idb_path = idc.get_idb_path()
    out_path = os.path.join(os.path.dirname(idb_path), "find_bad_relocs_output.txt")

    with open(out_path, "w", encoding="utf-8") as f:
        f.write(f"# Bad relocation candidates: symbolic refs in IDA with no SWOS2.REL entry\n")
        f.write(f"# Total: {len(results)}\n")
        f.write(f"#\n")
        f.write(f"# Format:\n")
        f.write(f"#   TYPE  ea=<instruction addr>  op_ea=<operand addr in stream>  "
                f"val=<32-bit value>  target=<symbol name>  func=<containing function>  |  <disassembly>\n")
        f.write(f"#\n")
        f.write(f"# These are locations where IDA created a symbolic reference (label/label+offset)\n")
        f.write(f"# but the original SWOS2.REL file does NOT list this offset for relocation.\n")
        f.write(f"# This means the original binary had a raw constant here, NOT a pointer.\n")
        f.write(f"# When assembled, these produce spurious relocations that corrupt the value.\n")
        f.write(f"#\n\n")
        for line in results:
            f.write(line + "\n")

    print(f"[find_bad_relocs] Output written to: {out_path}")

    # Also print first 50 to IDA console
    for line in results[:50]:
        print(line)
    if len(results) > 50:
        print(f"... and {len(results) - 50} more (see output file)")


if __name__ == "__main__":
    find_bad_relocs()
