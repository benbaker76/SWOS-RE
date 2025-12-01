# swos2_dump_relocs.py
#
# IDA 9.0 script to inspect SWOS2.REL relocations for SWOS WHDLoad slave.
#
# It simulates the relocation loop:
#   a0 = program_base
#   for each long in SWOS2.REL:
#       a0 = program_base + offset
#       ptr_ea = a0 - 1
#       if ptr is 0x00 0x1x ?? ?? with 0x10 <= 1x < 0x18:
#           report ptr_ea and the line at that EA in IDA
#
# The goal is to identify places that *won't* be emitted symbolically
# in your exported ASM (and thus won't relocate correctly when turned
# into a hunk executable).
#
# Adjust PROGRAM_BASE if your SWOS binary is mapped differently.

import os
import struct
import re

import ida_bytes
import ida_kernwin
import ida_lines
import ida_name
import ida_segment
import ida_loader
import idc

# ----------------------------------------------------------------------
# CONFIG

# Where the SWOS main program starts in your IDB (the "a2" / "a0" base).
# For your setup this is 0x00100000 (CHIP_RAM + 0x100000).
PROGRAM_BASE = 0x00100000

# Default relocation filename. You can change or just pick via file dialog.
DEFAULT_REL_FILENAME = "SWOS2.REL"

# If True, only output relocations whose target is *not* referenced
# symbolically in the disassembly line (i.e. IDA shows a raw hex
# address instead of a label or label+offset). These are the places
# most likely to break relocation in your exported ASM.
ONLY_NON_SYMBOLIC_TARGETS = False

# ----------------------------------------------------------------------
# Helpers

def _find_default_rel_path():
    """
    Try to locate SWOS2.REL in the same directory as the IDB.
    """
    try:
        idb_path = ida_loader.get_path(ida_loader.PATH_TYPE_IDB)
    except Exception:
        idb_path = idc.get_idb_path()

    base_dir = os.path.dirname(idb_path)

    p = os.path.join(base_dir, DEFAULT_REL_FILENAME)
    if os.path.isfile(p):
        print(f"[swos2_reloc] Using relocation file: {p}")
        return p

    print(f"[swos2_reloc] Error can't find file: {p}")
    return None


def _is_good_pointer(val):
    """
    Apply the same heuristics as the 68k code:

        tst.b  -(a0)       ; first byte must be 0
        bne.b  .skip

        cmp.b  #$18,(1,a0) ; hi byte < 0x18
        bcc.b  .skip       ; if >= 0x18 -> skip

        cmp.b  #$10,(1,a0) ; hi byte >= 0x10
        bcs.b  .skip       ; if <  0x10 -> skip

    That is:
        first_byte   == 0x00
        0x10 <= second_byte < 0x18
    """
    b0 = (val >> 24) & 0xFF  # MSB
    b1 = (val >> 16) & 0xFF  # next byte

    if b0 != 0:
        return False
    if b1 < 0x10 or b1 >= 0x18:
        return False
    return True


def classify_ea(ea):
    """
    Classify the TARGET EA (not the pointer location).
    """
    flags = ida_bytes.get_full_flags(ea)
    if ida_bytes.is_code(flags):
        return "C"
    if ida_bytes.is_data(flags):
        return "D"
    if not ida_bytes.is_loaded(ea):
        return "U"
    return "?"


REGISTER_NAMES = {f"d{i}" for i in range(8)} | {f"a{i}" for i in range(8)} | {
    "pc", "sp", "sr", "ccr"
}

def has_symbolic_operand(dis_line: str) -> bool:
    """
    Return True if the *operands* in the disassembly line appear to use at
    least one non-register, non-mnemonic identifier.

    This catches things like:
        dc.l bigNumbersColorConversionTable+$60
        dc.l ballShadowSprite, ballSprite, ...
        dc.l aTspvhcfstpvhcf+$E
        cmp.b (facesFrequency+1).l,d1

    but ignores:
        move.w d3,d0
        dc.l 0x00123456 ; SOME COMMENT
    """
    if not dis_line:
        return False

    # Drop comments so words in comments don't count as symbols
    text = dis_line.split(";", 1)[0]

    parts = text.strip().split()
    if not parts:
        return False

    mnemonic = parts[0]
    mn_base = mnemonic.split('.')[0].lower()

    for m in re.finditer(r"[A-Za-z_][A-Za-z0-9_]*", text):
        ident = m.group(0)
        low = ident.lower()

        # skip mnemonic itself
        if low == mn_base:
            continue

        # skip registers
        if low in REGISTER_NAMES:
            continue

        # anything else looks like a symbol in the operand
        return True

    return False

# ----------------------------------------------------------------------

def dump_swos2_relocs():
    rel_path = _find_default_rel_path()
    if not rel_path:
        return

    with open(rel_path, "rb") as f:
        data = f.read()

    if len(data) % 4 != 0:
        print(
            f"[swos2_reloc] WARNING: relocation file size {len(data)} "
            "is not a multiple of 4 bytes"
        )

    count = len(data) // 4
    print(
        f"[swos2_reloc] Loaded {len(data)} bytes "
        f"({count} longword entries) from {rel_path}"
    )
    print(f"[swos2_reloc] Using PROGRAM_BASE = 0x{PROGRAM_BASE:08X}")

    # Prepare an output file next to the IDB for convenience
    try:
        idb_path = ida_loader.get_path(ida_loader.PATH_TYPE_IDB)
    except Exception:
        idb_path = idc.get_idb_path()
    out_path = os.path.join(os.path.dirname(idb_path), "SWOS2_reloc_dump.txt")
    out_lines = []

    for idx in range(count):
        off_be = data[idx * 4 : idx * 4 + 4]
        offset = struct.unpack(">I", off_be)[0]  # big-endian

        # Emulate: add.l (a1)+, a0  with a0 restored from a2 each time
        a0_after_add = PROGRAM_BASE + offset
        ptr_ea = a0_after_add - 1  # because of tst.b -(a0)

        # Make sure this is a sensible address in IDA
        if not ida_bytes.is_loaded(ptr_ea) or not ida_bytes.is_loaded(ptr_ea + 3):
            line = (
                f"{idx:04d}: off=0x{offset:08X} ptr_ea=0x{ptr_ea:08X} "
                f"-> [NOT LOADED]"
            )
            out_lines.append(line)
            continue

        # Value to be relocated
        ptr_val = ida_bytes.get_dword(ptr_ea)

        # Slave heuristics: skip bogus offsets
        if not _is_good_pointer(ptr_val):
            line = (
                f"{idx:04d}: off=0x{offset:08X} ptr_ea=0x{ptr_ea:08X} "
                f"val=0x{ptr_val:08X} [FILTERED BY HEURISTICS]"
            )
            out_lines.append(line)
            continue

        # target address before relocation; in your IDB this should already be
        # in CHIP_RAM (e.g. 0x0010xxxx)
        target_ea = ptr_val

        kind = classify_ea(target_ea)

        # Get target name if any (robust: try global, then local)
        target_name = ida_name.get_name(target_ea)
        if not target_name:
            target_name = idc.get_name(target_ea, idc.GN_LOCAL) or ""

        # Disassembly / data line at the pointer location itself
        dis_line = ida_lines.generate_disasm_line(
            ptr_ea, ida_lines.GENDSM_REMOVE_TAGS
        )
        if dis_line is None:
            dis_line = ""

        # Classify the *item* containing ptr_ea (handles tails correctly)
        head = ida_bytes.get_item_head(ptr_ea)
        head_flags = ida_bytes.get_full_flags(head)
        ptr_is_code = ida_bytes.is_code(head_flags)
        ptr_is_data = ida_bytes.is_data(head_flags)

        # Is this relocation already "safe" for your exporter?
        #
        # For CODE:
        #   - if target_ea has a name and that name appears in the line,
        #     it's symbolic (jsr InitHardwareAtFrameStart).
        #   - if there's no name at target_ea, but the operand clearly uses
        #     some symbol (has_symbolic_operand), also treat it as symbolic
        #     (e.g. cmp.b (facesFrequency+1).l,d1).
        #
        # For DATA:
        #   - if target_ea has a name at that address, symbolic (dc.l aFoo).
        #   - OR, if the dc.l line uses a symbol in the operand (like
        #     bigNumbersColorConversionTable+$60, ballShadowSprite, etc.),
        #     it's symbolic, even if there's no label exactly at val.
        is_symbolic = False

        if target_name:
            if ptr_is_code:
                # direct match: jsr InitHardwareAtFrameStart
                is_symbolic = (target_name in dis_line)
            elif ptr_is_data:
                # pointer tables, dc.l aFoo, aBar, ...
                is_symbolic = True
        else:
            # No name at target_ea, but we may still have label+offset in
            # either code or data (e.g. facesFrequency+1, aAsThesePlayers+1,
            # bigNumbersColorConversionTable+$60, etc.)
            if (ptr_is_code or ptr_is_data) and has_symbolic_operand(dis_line):
                is_symbolic = True

        # If we only care about relocations that won't be symbolic in the
        # exported ASM, skip already-symbolic ones.
        if ONLY_NON_SYMBOLIC_TARGETS and is_symbolic:
            continue

        # For output, don't show empty name as blank
        if not target_name:
            target_name = "-"

        line = (
            f"{idx:04d}: off=0x{offset:08X} ptr_ea=0x{ptr_ea:08X} "
            f"val=0x{ptr_val:08X} -> target=0x{target_ea:08X} "
            f"[{kind}] {target_name:<40}  {dis_line}"
        )

        out_lines.append(line)

    with open(out_path, "w", encoding="utf-8") as f:
        f.write("\n".join(out_lines))

    print(f"[swos2_reloc] Wrote detailed dump to: {out_path}")


if __name__ == "__main__":
    dump_swos2_relocs()
