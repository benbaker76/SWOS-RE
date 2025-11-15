# -*- coding: utf-8 -*-
"""
SWOS menu beautifier (Amiga) – IDAPython
- Uses current cursor location as the start
- Does not change any symbol names
- IDA 9.x compatible

Original IDC: Zlatko Karakaš (2002–2021)
Python port: Ben Baker (2025)
"""

import idc
import idaapi
import ida_bytes
import ida_kernwin
import ida_nalt
import ida_typeinf
import re

_NEG_PAT = re.compile(r"\bdc\.\s*[bwl]\s*-\s*\d")

# ------------------------ helpers ------------------------

def msg(s):
    ida_kernwin.msg(str(s))

def xmake_data(ea, size):
    """Clear any existing items, then create data at EA of given size."""
    ida_bytes.del_items(ea, ida_bytes.DELIT_SIMPLE, size)
    ok = False
    if size == 1:
        ok = idc.create_byte(ea)
    elif size == 2:
        ok = idc.create_word(ea)
    elif size == 4:
        ok = idc.create_dword(ea)
    else:
        ok = ida_bytes.create_data(ea, ida_bytes.FF_BYTE, size, ida_bytes.BADNODE)
    if not ok:
        y = ida_kernwin.ask_yn(
            ida_kernwin.ASKBTN_YES,
            "Could not make data at 0x%X (len %d). Exit IDA?" % (ea, size),
        )
        if y == 1:
            ida_kernwin.hide_wait_box()
            ida_kernwin.qexit(0)

def _line_shows_negative_number(ea):
    s = ida_lines.generate_disasm_line(ea, 0) or ""
    s = ida_lines.tag_remove(s)
    return _NEG_PAT.search(s) is not None

def op_sign(ea, n=0):
    if not _line_shows_negative_number(ea):
        idc.toggle_sign(ea, n)

def set_cmt(ea, text):
    idc.set_cmt(ea, text, 0)

def has_cmt(ea):
    return idc.get_cmt(ea, 0) not in (None, "")

def op_off(ea, n=0):
    idc.op_plain_offset(ea, n, 0)

def op_dec(ea, n=0):
    idc.op_dec(ea, n)
    
    size = ida_bytes.get_item_size(ea)

    if size == 1:
        v = idc.get_wide_byte(ea)
        if v > 0x7F:
            op_sign(ea, n)
    elif size == 2:
        v = idc.get_wide_word(ea)
        if v > 0x7FFF:
            op_sign(ea, n)
    elif size == 4:
        v = idc.get_wide_dword(ea)
        if v > 0x7FFFFFFF:
            op_sign(ea, n)

def op_num(ea, n=0):
    idc.op_num(ea, n)

# ------------------------ flag writers ------------------------

def write_colors(ea):
    flags = idc.get_wide_word(ea)
    entryColor = flags & 0x0F
    frameColor = (flags >> 4) & 0x0F

    # background color
    if entryColor in (1, 2, 7, 9):
        str1 = "pink to brown"
    elif entryColor in (3, 8):
        str1 = "blue to black"
    elif entryColor in (4, 5, 6, 12):
        str1 = "orange to brown"
    elif entryColor == 10:
        str1 = "red"
    elif entryColor == 11:
        str1 = "blue to purple"
    elif entryColor == 13:
        str1 = "light blue to blue"
    else:
        str1 = "yellow-to-green-to-black"

    mapping = {
        1: "gray", 2: "white", 3: "true black", 4: "dark brown", 5: "umber",
        6: "orange", 7: "dark gray", 8: "light gray", 9: "very dark gray",
        10: "red", 11: "blue", 12: "very dark", 13: "pale blue", 14: "green"
    }
    str3 = mapping.get(frameColor, "yellow")

    if entryColor in (1, 2, 3, 7, 8, 9, 10, 13, 14, 15):
        str2 = "gray"
    elif entryColor in (4, 5):
        str2 = "orange"
    elif entryColor == 6:
        str2 = "yellow"
    elif entryColor == 11:
        str2 = "pale blue"
    else:
        str2 = "red"

    str2 = f", outer frame color: {str2}" if entryColor else ", no outer frame"
    str3 = f", inner frame color: {str3}" if frameColor else ", no inner frame"

    set_cmt(ea, "background color: " + str1 + str2 + str3)

def write_str_flags(ea):
    flags = idc.get_wide_word(ea)
    txtCol = flags & 0x0F
    font = "big" if (flags & 0xF0) else "small"
    if txtCol == 0:
        txtCol = 2

    mapping = {
        1: "gray", 2: "white", 3: "true black", 4: "dark brown", 5: "umber",
        6: "orange", 7: "dark gray", 8: "light gray", 9: "very dark gray",
        10: "red", 11: "blue", 12: "very dark", 13: "pale blue", 14: "green"
    }
    strCol = mapping.get(txtCol, "yellow")

    if (flags & 0x8000):
        align = "left"
    elif (flags & 0x4000):
        align = "right"
    else:
        align = "center"

    set_cmt(ea, f"string flags: color = {strCol}, font = {font}, alignment = {align}")

def write_ctrl_flags(ea):
    flags = idc.get_wide_word(ea)
    s = "control mask: "
    if flags == 0:
        s += "disallow input"
    elif flags == 0xFFFF:
        s += "allow all"
    else:
        parts = []
        if flags & 0x0001: parts.append("fire")
        if flags & 0x0002: parts.append("left(2)")
        if flags & 0x0004: parts.append("right(2)")
        if flags & 0x0008: parts.append("up(2)")
        if flags & 0x0010: parts.append("down(2)")
        if flags & 0x0020: parts.append("short fire")
        if flags & 0x0040: parts.append("left")
        if flags & 0x0080: parts.append("right")
        if flags & 0x0100: parts.append("up")
        if flags & 0x0200: parts.append("down")
        s += ", ".join(parts)
    set_cmt(ea, s)

# ------------------------ main logic ------------------------

def main():
    ea = ida_kernwin.get_screen_ea()

    # Header (no naming)
    xmake_data(ea, 4)
    dw = idc.get_wide_dword(ea)
    if dw != 0:
        op_off(ea)
    set_cmt(ea, "on init function")

    ea += 4
    xmake_data(ea, 4)
    dw = idc.get_wide_dword(ea)
    if dw != 0:
        op_off(ea)
    set_cmt(ea, "on return function")

    ea += 4
    xmake_data(ea, 4)
    dw = idc.get_wide_dword(ea)
    if dw != 0:
        op_off(ea)
    set_cmt(ea, "on draw function")

    ea += 4
    xmake_data(ea, 4)
    set_cmt(ea, "-= default entry =-")
    op_dec(ea)
    ea += 4

    entry_num = 0
    template_entry = 0
    byte_coords = False

    while True:
        xmake_data(ea, 2); op_dec(ea)
        
        t = idc.get_wide_word(ea)

        if t == 64537:  # -999
            msg("End of menu. All OK.\n")
            set_cmt(ea, "-= end menu =-")
            ea += 2
            break

        elif t == 64538:  # -998
            set_cmt(ea, f"-= start menu =-")
            ea += 2
            xmake_data(ea, 2); set_cmt(ea, "menu x"); op_dec(ea); ea += 2
            xmake_data(ea, 2); set_cmt(ea, "menu y"); op_dec(ea); ea += 2
            continue

        elif t == 64539:  # -997 template
            set_cmt(ea, "-= start template =-")
            template_entry = 1
            
            ea += 2
            
            d = idc.get_wide_word(ea)
             
            if d == 65534:
                byte_coords = False
                xmake_data(ea, 2); set_cmt(ea, "wide coords"); ea += 2

            elif d == 65535:
                byte_coords = True
                xmake_data(ea, 2); set_cmt(ea, "byte coords"); ea += 2
            
            if byte_coords:
                xmake_data(ea, 1); set_cmt(ea, "x");      op_dec(ea); ea += 1
                xmake_data(ea, 1); set_cmt(ea, "y");      op_dec(ea); ea += 1
                xmake_data(ea, 1); set_cmt(ea, "width");  op_dec(ea); ea += 1
                xmake_data(ea, 1); set_cmt(ea, "height"); op_dec(ea); ea += 1
            else:
                xmake_data(ea, 2); set_cmt(ea, "x");      op_dec(ea); ea += 2
                xmake_data(ea, 2); set_cmt(ea, "y");      op_dec(ea); ea += 2
                xmake_data(ea, 2); set_cmt(ea, "width");  op_dec(ea); ea += 2
                xmake_data(ea, 2); set_cmt(ea, "height"); op_dec(ea); ea += 2
            continue

        elif t == 64540:  # -996
            set_cmt(ea, "init menu entry"); ea += 2
            continue
        
        elif t == 65534:
            byte_coords = False
            set_cmt(ea, "wide coords"); ea += 2
            continue

        elif t == 65535:
            byte_coords = True
            set_cmt(ea, "byte coords"); ea += 2
            continue

        if not template_entry:
            if byte_coords:
                for i in range(4):
                    xmake_data(ea + i * 1, 1)

                set_cmt(ea, f"x ({entry_num})"); op_dec(ea); ea += 1
                set_cmt(ea, "y"); op_dec(ea); ea += 1
                set_cmt(ea, "width"); op_dec(ea); ea += 1
                set_cmt(ea, "height"); op_dec(ea); ea += 1
            else:
                for i in range(4):
                    xmake_data(ea + i * 2, 2)

                set_cmt(ea, f"x ({entry_num})"); op_dec(ea); ea += 2
                set_cmt(ea, "y"); op_dec(ea); ea += 2
                set_cmt(ea, "width"); op_dec(ea); ea += 2
                set_cmt(ea, "height"); op_dec(ea); ea += 2

        # Entry body
        while True:
            xmake_data(ea, 2)
            op_dec(ea)
            t = idc.get_wide_word(ea)

            if t == 0:
                if template_entry:
                    set_cmt(ea, "-= end template =-")
                else:
                    endtxt = f"-= end entry {entry_num} =-"
                    if not has_cmt(ea):
                        set_cmt(ea, endtxt)
                if not template_entry:
                    entry_num += 1
                template_entry = 0
                ea += 2
                break

            elif t == 1:
                set_cmt(ea, "type 1 - invisible entry")
                ea += 2

            elif t == 2:
                set_cmt(ea, "type 2 - positions")
                ea += 2
                xmake_data(ea, 1);  idc.op_dec(ea, 0)
                if idc.get_wide_byte(ea) == 0xFF: op_sign(ea, 0)
                set_cmt(ea, "left entry")
                xmake_data(ea+1, 1); idc.op_dec(ea+1, 0)
                if idc.get_wide_byte(ea+1) == 0xFF: op_sign(ea+1, 0)
                set_cmt(ea+1, "right entry")
                xmake_data(ea+2, 1); idc.op_dec(ea+2, 0)
                if idc.get_wide_byte(ea+2) == 0xFF: op_sign(ea+2, 0)
                set_cmt(ea+2, "up entry")
                xmake_data(ea+3, 1); idc.op_dec(ea+3, 0)
                if idc.get_wide_byte(ea+3) == 0xFF: op_sign(ea+3, 0)
                set_cmt(ea+3, "down entry")
                ea += 4

            elif t == 3:
                set_cmt(ea, "type 3 - custom background drawing function")
                ea += 2
                xmake_data(ea, 4)
                if idc.get_wide_dword(ea) != 0:
                    op_off(ea)

            elif t == 4:
                set_cmt(ea, "type 4 - entry and frame color")
                ea += 2
                xmake_data(ea, 2)
                write_colors(ea)
                ea += 2

            elif t == 5:
                set_cmt(ea, "type 5 - sprite background")
                ea += 2
                xmake_data(ea, 2)
                op_dec(ea)
                ea += 2

            elif t == 6:
                set_cmt(ea, "type 6 - invalid type")
                xmake_data(ea + 2, 2)
                ea += 4

            elif t == 7:
                set_cmt(ea, "type 7 - custom foreground function")
                ea += 2
                xmake_data(ea, 4)
                dw = idc.get_wide_dword(ea)
                if dw != 0 and dw != 0xFFFFFFFF:
                    op_off(ea)
                else:
                    op_sign(ea)
                ea += 4

            elif t == 8:
                set_cmt(ea, f"type {t} - entry text pointer")
                ea += 2
                xmake_data(ea, 2)
                write_str_flags(ea)
                ea += 2
                
                xmake_data(ea, 4)
                ea += 4


            elif t == 22:
                set_cmt(ea, f"type {t} - entry text pointer")
                ea += 2
                xmake_data(ea, 2)
                write_str_flags(ea)
                ea += 2

            elif t == 9:
                set_cmt(ea, "type 9 - sprite foreground")
                xmake_data(ea + 2, 2)
                idc.op_dec(ea + 2, 0)
                ea += 4

            elif t == 10:
                set_cmt(ea, "type 10 - string table")
                xmake_data(ea + 2, 2)
                write_str_flags(ea + 2)
                xmake_data(ea + 4, 4)
                set_cmt(ea + 4, "string table pointer")
                if idc.get_wide_dword(ea + 4):
                    op_off(ea + 4, 0)
                ea += 8

            elif t == 11:
                set_cmt(ea, "type 11 - multi line text")
                xmake_data(ea + 2, 2)
                write_str_flags(ea + 2)
                xmake_data(ea + 4, 4)
                if idc.get_wide_dword(ea + 4):
                    op_off(ea + 4, 0)
                set_cmt(ea + 4, "pointer to multi-line text")
                ea += 8

            elif t == 12:
                set_cmt(ea, "type 12 - number")
                xmake_data(ea + 2, 2)
                write_str_flags(ea + 2)
                xmake_data(ea + 4, 2)
                set_cmt(ea + 4, "number to print")
                idc.op_dec(ea + 4, 0)
                ea += 6

            elif t == 13:
                set_cmt(ea, "type 13 - on select function - fire only")
                ea += 2
                xmake_data(ea, 4);
                if idc.get_wide_dword(ea):
                    op_off(ea)
                ea += 4

            elif t == 14:
                set_cmt(ea, "type 14 - input function")
                xmake_data(ea + 2, 2)
                write_ctrl_flags(ea + 2)
                xmake_data(ea + 4, 4)
                ea += 8

            elif t == 15:
                set_cmt(ea, "type 15 - before draw function")
                ea += 2
                xmake_data(ea, 4)
                if idc.get_wide_dword(ea):
                    op_off(ea)
                ea += 4

            elif t == 16:
                set_cmt(ea, "type 16 - after draw function")
                ea += 2
                xmake_data(ea, 4)
                if idc.get_wide_dword(ea):
                    op_off(ea)
                ea += 4

            elif t in (17, 18, 19, 20):
                if t == 17: tmp = " up skip"
                elif t == 18: tmp = " down skip"
                elif t == 19: tmp = " left skip"
                else: tmp = " right skip"
                set_cmt(ea, f"type {t} -{tmp}")
                ea += 2
                xmake_data(ea, 1); set_cmt(ea, "arg0"); idc.op_dec(ea, 0); ea += 1
                xmake_data(ea, 1); set_cmt(ea, "arg1"); idc.op_dec(ea, 0); ea += 1

            elif t == 21:
                set_cmt(ea, "type 21 - sprite copy")
                ea += 2
                xmake_data(ea, 4)
                dw = idc.get_wide_dword(ea)
                if dw and dw != 0xFFFFFFFF:
                    op_off(ea)
                ea += 4
                set_cmt(ea + 4, "pointer to sprite copy structure")

            else:
                msg(f"Found illegal type {t} at 0x{ea:X}\n")
                return

    msg("Done.\n")

# ------------------------ run ------------------------

if __name__ == "__main__":
    main()
