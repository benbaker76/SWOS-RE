/*
  Script to make swos menus more readable
  Zlatko Karakas, 2002.-2021.
*/

/* v2.3 - naming convention and formatting updated
   v2.2 - typos fixed
   v2.1 - izbacen "entry text" komentar - od njega se ne vidi sadrzaj
          stringa, sto je mnogo vaznije, a i glupo je i ocigledno
        - ne unistavaju se "-= end of entry..." komentari, koji cesto sadrze
          korisne informacije (rucno uneta imena entry-ja)
   v2.0 - najnovija verzija nadaleko poznatog i sirom planete hvaljenog
          skripta!!!
*/

#include <idc.idc>

//#define DEBUG

static main()
{
    auto addr, menuName, funcBaseName;
    auto i, j, tmp, tmp2;
    auto ftmp, ftmp2, fvalue;
    auto defentry, type, entryNum, templateEntry;

    addr = ScreenEA(); /* get current (starting) address from IDA */

    /* get menu name */
    while ((menuName = AskStr("", "Enter name of menu")) == "")
        if (AskYN(1, "Menu name not entered. Quit?") == 1)
            return -1;

    /* get base name for functions */
    while ((funcBaseName = AskStr("", "Enter base name for functions")) == "")
        if (AskYN(1, "Functions base name not entered. Quit?") == 1)
            return -1;

    /* parse menu name - replace spaces with '_' */
    i = 0;
    for (j = strstr(menuName, " "); j != -1; j = strstr(menuName, " ")) {
        tmp = substr(menuName, i, j);
        tmp2 = substr(menuName, j + 1, -1);
        menuName = tmp + "_" + tmp2;
    }
    i = 0;
    /* parse function base - throw out all spaces */
    for (j = strstr(funcBaseName, " "); j != -1; j = strstr(funcBaseName, "_")) {
        tmp = substr(funcBaseName, i, j);
        tmp2 = substr(funcBaseName, j + 1, -1);
        funcBaseName = tmp + tmp2;
    }

#ifdef DEBUG
    Message("Start address: 0x%X\n", addr);
    Message("Menu name: %s\n", menuName);
    Message("Function base: %s\n", funcBaseName);
#endif

    /* now rollin'... */
    SafeMakeName(addr, menuName + "Menu");
    XMakeData(addr, 4);
    if (Dword(addr) != 0) {
        OpOff(addr, -1, 0);
        SafeMakeName(Dword(addr), funcBaseName + "Init");
    }
    MakeComm(addr, "on init function");

    addr = addr + 4;
    XMakeData(addr, 4);
    if (Dword(addr) != 0) {
        OpOff(addr, -1, 0);
        SafeMakeName(Dword(addr), funcBaseName + "Reinit");
    }
    MakeComm(addr, "on return function");

    addr = addr + 4;
    XMakeData(addr, 4);
    if (Dword(addr) != 0) {
        OpOff(addr, -1, 0);
        SafeMakeName(Dword(addr), funcBaseName + "OnDraw");
    }
    MakeComm(addr, "on draw function");
    addr = addr + 4;
    XMakeData(addr, 4);
    defentry = Dword(addr);
    MakeComm(addr, "default entry");
    OpDecimal(addr, -1);
    addr = addr + 4;

    entryNum = 0;
    while (1) {
        XMakeData(addr, 2);
        OpDecimal(addr, -1);
        type = Word(addr);
        if (type > 32767)
            OpSign(addr, 0);
        #ifdef DEBUG
            Message("Menu header word: %d\n", type);
        #endif
        if (type == 64537) { /* -999 */
            Message("End of menu. All OK.\n");
            MakeComm(addr, "end of " + menuName + "Menu");
            addr = addr + 2;
            break;
        } else if (type == 64538) { /* -998 */
            addr = addr + 2;
            XMakeData(addr, 2);
            OpDecimal(addr, 0);
            tmp = Word(addr);
            if (tmp > 32767)
                OpSign(addr, 0);
            MakeComm(addr, "menu x");
            addr = addr + 2;
            XMakeData(addr, 2);
            OpDecimal(addr, 0);
            tmp = Word(addr);
            if (tmp > 32767)
                OpSign(addr, 0);
            MakeComm(addr, "menu y");
            addr = addr + 2;
            continue;
        } else if (type == 64539) { /* -997 */
            MakeComm(addr, "template menu entry");
            templateEntry = 1;
            XMakeData(addr + 2, 2);
            MakeComm(addr + 2, "x");
            XMakeData(addr + 4, 2);
            MakeComm(addr + 4, "y");
            XMakeData(addr + 6, 2);
            MakeComm(addr + 6, "width");
            XMakeData(addr + 8, 2);
            MakeComm(addr + 8, "height");
            addr = addr + 10;
            continue;
        } else if (type == 64540) { /* -996 */
            MakeComm(addr, "InitMenuEntry");
            addr = addr + 2;
            continue;
        }

        if (!templateEntry) {
            for (i = 0; i < 4; i++) {
                XMakeData(addr + i * 2, 2);
                tmp = Word(addr + i * 2);
                if (tmp > 32767)
                    OpSign(addr + i * 2, 0);
            }
            MakeComm(addr, "x");
            OpDecimal(addr, 0);
            addr = addr + 2;
            MakeComm(addr, "y");
            OpDecimal(addr, 0);
            addr = addr + 2;
            MakeComm(addr, "width");
            OpDecimal(addr, 0);
            addr = addr + 2;
            MakeComm(addr, "height");
            OpDecimal(addr, 0);
            addr = addr + 2;
        }

        #ifdef DEBUG
            Message("Type: %d\n", type);
            Message("Address: 0x%X\n", addr);
        #endif
        while (1) {
            XMakeData(addr, 2);
            OpDecimal(addr, 0);
            type = Word(addr);
            if (type == 0) {
                if (templateEntry)
                    MakeComm(addr, "-= end of template entry =-");
                else {
                    tmp = "-= end of entry " + ltoa(entryNum, 10) + " =-";
                    /* preserve hand made comments */
                    if (!(GetFlags(addr) & FF_COMM))
                        MakeComm(addr, tmp);
                }
                if (!templateEntry)
                    entryNum++;
                templateEntry = 0;
                addr = addr + 2;
                break;
            } else if (type == 1) {
                MakeComm(addr, "type 1 - invisible entry");
                addr = addr + 2;
            } else if (type == 2) {
                MakeComm(addr, "type 2 - positions");
                addr = addr + 2;
                XMakeData(addr, 1);
                OpDecimal(addr, 0);
                if (Byte(addr) == 255)
                    OpSign(addr, 0);
                MakeComm(addr, "left entry");
                XMakeData(addr + 1, 1);
                OpDecimal(addr + 1, 0);
                if (Byte(addr + 1) == 255)
                    OpSign(addr + 1, 0);
                MakeComm(addr + 1, "right entry");
                XMakeData(addr + 2, 1);
                OpDecimal(addr + 2, 0);
                if (Byte(addr + 2) == 255)
                    OpSign(addr + 2, 0);
                MakeComm(addr + 2, "up entry");
                XMakeData(addr + 3, 1);
                OpDecimal(addr + 3, 0);
                if (Byte(addr + 3) == 255)
                    OpSign(addr + 3, 0);
                MakeComm(addr + 3, "down entry");
                addr = addr + 4;
            } else if (type == 3) {
                MakeComm(addr,"type 3 - custom background drawing function");
                addr = addr + 2;
                if (Dword(addr) != 0) {
                    OpOff(addr, -1, 0);
                    SafeMakeName(Dword(addr), funcBaseName + "CustomBackgroudFunc" + ltoa(entryNum, 10));
                    MakeComm(addr, "custom background drawing function");
                }
            } else if (type == 4) {
                MakeComm(addr, "type 4 - entry and frame color");
                addr = addr + 2;
                XMakeData(addr, 2);
                WriteColors(addr);
                addr = addr + 2;
            } else if (type == 5) {
                MakeComm(addr, "type 5 - sprite background");
                addr = addr + 2;
                XMakeData(addr, 2);
                OpDecimal(addr, 0);
                // ne radi
                //OpEnum(addr, 0, 1); /* make a sprite enum */
                addr = addr + 2;
            } else if (type == 6) {
                MakeComm(addr, "type 6 - invalid type");
                XMakeData(addr + 2, 2);
                addr = addr + 4;
            } else if (type == 7) {
                MakeComm(addr, "type 7 - custom foreground function");
                addr = addr + 2;
                XMakeData(addr, 4);
                if (Dword(addr) != 0 && Dword(addr) != 0xFFFFFFFF) {
                    OpOff(addr, -1, 0);
                    SafeMakeName(Dword(addr), funcBaseName + "CustomForegroundFunc" + ltoa(entryNum, 10));
                    MakeComm(addr, "custom foreground drawing function");
                } else
                    OpSign(addr, 0);
                addr = addr + 4;
            } else if (type == 8) {
                MakeComm(addr,"type 8 - entry text pointer");
                addr = addr + 2;
                XMakeData(addr, 2);
                WriteStrFlags(addr);
                addr = addr + 2;
                XMakeData(addr, 4);
                if (Dword(addr) == 0xFFFFFFFF) {
                    MakeComm(addr, "STDMENUTEXT - gets filled later");
                    OpNumber(addr, -1);
                    OpSign(addr, 0);
                } else {
                    if (Dword(addr) != 0)
                        OpOff(addr, -1, 0);
                    //MakeComm(addr, "entry text");
                }
                addr = addr + 4;
            } else if (type == 9) {
                MakeComm(addr, "type 9 - sprite foreground");
                XMakeData(addr + 2, 2);
                OpDecimal(addr + 2, 0);
                // ne radi
                //OpEnum(addr + 2, 0, 1); /* make a sprite enum */
                addr = addr + 4;
            } else if (type == 10) {
                MakeComm(addr, "type 10 - string table");
                XMakeData(addr + 2, 2);
                WriteStrFlags(addr + 2);
                XMakeData(addr + 4, 4);
                MakeComm(addr + 4, "string table pointer");
                if (Dword(addr + 4))
                    OpOff(addr + 4, -1, 0);
                addr = addr + 8;
            } else if (type == 11) {
                MakeComm(addr, "type 11 - multi line text");
                XMakeData(addr + 2, 2);
                WriteStrFlags(addr + 2);
                XMakeData(addr + 4, 4);
                if (Dword(addr + 4))
                    OpOff(addr + 4, -1, 0);
                MakeComm(addr + 4, "pointer to multi-line text");
                addr = addr + 8;
            } else if (type == 12) {
                MakeComm(addr,"type 12 - number");
                XMakeData(addr + 2, 2);
                WriteStrFlags(addr + 2);
                XMakeData(addr + 4, 2);
                MakeComm(addr + 4, "number to print");
                OpDecimal(addr + 4, 0);
                addr = addr + 6;
            } else if (type == 13) {
                MakeComm(addr, "type 13 - on select function - fire only");
                addr = addr + 2;
                XMakeData(addr, 4);
                if (Dword(addr)) {
                    OpOff(addr, -1, 0);
                    if (templateEntry)
                        SafeMakeName(Dword(addr), funcBaseName + "Common");
                    else
                        SafeMakeName(Dword(addr), funcBaseName + "OnSelect"+ ltoa(entryNum, 10));
                }
                addr = addr + 4;
            } else if (type == 14) {
                MakeComm(addr, "type 14 - input function");
                XMakeData(addr + 2, 2);
                WriteCtrlFlags(addr + 2);
                XMakeData(addr + 4, 4);
                addr = addr + 8;
            } else if (type == 15) {
                MakeComm(addr, "type 15 - before draw function");
                addr = addr + 2;
                XMakeData(addr, 4);
                if (Dword(addr)) {
                    OpOff(addr, -1, 0);
                    if (templateEntry)
                        SafeMakeName(Dword(addr), funcBaseName + "BeforeDrawCommon");
                    else
                        SafeMakeName(Dword(addr), funcBaseName + ltoa(entryNum, 10) + "BeforeDraw");
                }
                addr = addr + 4;
            } else if (type == 16) {
                MakeComm(addr, "type 16 - after draw function");
                addr = addr + 2;
                XMakeData(addr, 4);
                if (Dword(addr)) {
                    OpOff(addr, -1, 0);
                    if (templateEntry)
                        SafeMakeName(Dword(addr), funcBaseName + "AfterDrawCommon");
                    else
                        SafeMakeName(Dword(addr), funcBaseName + ltoa(entryNum, 10) + "AfterDraw");
                }
                addr = addr + 4;
            } else if (type == 17 || type == 18 || type == 19 || type == 20) {
                if (type == 17)
                    tmp = " up skip";
                else if (type == 18)
                    tmp = " down skip";
                else if (type == 19)
                    tmp = " left skip";
                else
                    tmp = " right skip";
                MakeComm(addr, "type " + ltoa(type, 10) + " -" + tmp);
                XMakeData(addr + 2, 1);
                OpDecimal(addr + 2, 0);
                XMakeData(addr + 3, 1);
                OpDecimal(addr + 3, 0);
                addr = addr + 4;
            } else if (type == 21) {
                MakeComm(addr, "type 21 - sprite copy");
                addr = addr + 2;
                XMakeData(addr, 4);
                if (Dword(addr) && Dword(addr) != 0xFFFFFFFF)
                    OpOff(addr, -1, 0);
                addr = addr + 4;
                MakeComm(addr + 4, "pointer to sprite copy structure");
            } else {
                Message("Found illegal type at 0x%X\n", addr);
                return 1;
            }
        }
    }

    return 0;
}

static XMakeData(ea, len)
{
    auto buf, i;
#ifdef DEBUG
    if (len != 1 && len != 2 && len != 4) {
        buf = form("Invalid len: %d.\nQuiting IDA.", len);
        AskYN(1, buf);
        Exit(1);
    }
#endif
    for (i = 0; i < len; i++)
        MakeUnkn(ea + i, 0);

    if (len == 1)
        i = MakeByte(ea);
    else if (len == 2)
        i = MakeWord(ea);
    else
        i = MakeDword(ea);

    if (!i) {
        buf = form("Could not make data at address 0x%X, length %d.\n Exit IDA?", ea, len);
        if (AskYN(1, buf) == 1)
            Fatal("Exiting IDA...");
    }
}

/* Make name only if it is not already named */
static SafeMakeName(ea, name)
{
    if (!(GetFlags(ea) & FF_NAME))
        MakeName(ea, name);
}

static WriteColors(ea)
{
    auto str1, str2, str3, entryColor, frameColor, tmp, flags;

    flags = Word(ea);

    entryColor = flags & 0x0f;
    frameColor = flags >> 4;

    /* set background color */
    if (entryColor == 1 || entryColor == 2 || entryColor == 7 || entryColor == 9)
        str1 = "pink to brown";
    else if (entryColor == 3 || entryColor == 8)
        str1 = "blue to black";
    else if (entryColor == 4 || entryColor == 5 || entryColor == 6 || entryColor == 12)
        str1 = "orange to brown";
    else if (entryColor == 10)
        str1 = "red";
    else if (entryColor == 11)
        str1 = "blue to purple";
    else if (entryColor == 13)
        str1 = "light blue to blue";
    else
        str1 = "yellow-to-green-to-black";

    /* set inner frame color */
    if (frameColor == 1) str3 = "gray";
    else if (frameColor == 2) str3 = "white";
    else if (frameColor == 3) str3 = "true black";
    else if (frameColor == 4) str3 = "dark brown";
    else if (frameColor == 5) str3 = "umber";
    else if (frameColor == 6) str3 = "orange";
    else if (frameColor == 7) str3 = "dark gray";
    else if (frameColor == 8) str3 = "light gray";
    else if (frameColor == 9) str3 = "very dark gray";
    else if (frameColor == 10) str3 = "red";
    else if (frameColor == 11) str3 = "blue";
    else if (frameColor == 12) str3 = "very dark";
    else if (frameColor == 13) str3 = "pale blue";
    else if (frameColor == 14) str3 = "green";
    else str3 = "yellow";

    /* set outer frame color */
    if (entryColor == 1 || entryColor == 2 || entryColor == 3 ||
        entryColor == 7 || entryColor == 8 || entryColor == 9 ||
        entryColor == 10 || entryColor == 13 || entryColor == 14 ||
        entryColor == 15)
        str2 = "gray";
    else if (entryColor == 4 || entryColor == 5)
        str2 = "orange";
    else if (entryColor == 6)
        str2 = "yellow";
    else if (entryColor == 11)
        str2 = "pale blue";
    else
        str2 = "red";

    if (entryColor)
        str2 = form(", outer frame color: %s", str2);
    else
        str2 = ", no outer frame";

    if (frameColor)
        str3 = form(", inner frame color: %s", str3);
    else
        str3 = ", no inner frame";

    tmp = "background color: " + str1 + str2 + str3;
    MakeComm(ea, tmp);
}

static WriteStrFlags(ea)
{
    auto txtCol, font, align, strCol, str, flags;

    flags = Word(ea);
    txtCol = flags & 0x0f;
    if (flags & 0xf0)
        font = "big";
    else
        font = "small";

    if (txtCol == 0)
        txtCol = 2;

    if (txtCol == 1) strCol = "gray";
    else if (txtCol == 2) strCol = "white";
    else if (txtCol == 3) strCol = "true black";
    else if (txtCol == 4) strCol = "dark brown";
    else if (txtCol == 5) strCol = "umber";
    else if (txtCol == 6) strCol = "orange";
    else if (txtCol == 7) strCol = "dark gray";
    else if (txtCol == 8) strCol = "light gray";
    else if (txtCol == 9) strCol = "very dark gray";
    else if (txtCol == 10) strCol = "red";
    else if (txtCol == 11) strCol = "blue";
    else if (txtCol == 12) strCol = "very dark";
    else if (txtCol == 13) strCol = "pale blue";
    else if (txtCol == 14) strCol = "green";
    else strCol = "yellow";

    if (flags & 0x8000)
        align = "left";
    else if (flags & 0x4000)
        align = "right";
    else
        align = "center";

    str = form("string flags: color = %s, font = %s, alignment = %s",
               strCol, font, align);
    MakeComm(ea, str);
}

static WriteCtrlFlags(ea)
{
    auto str, flags, endstring;

    flags = Word(ea);
    str = "control mask: ";

    if (!flags)
        str = str + "disallow input";
    else if (flags == 0xffff)
        str = str + "allow all";
    else {
        if (flags & 0x01) str = str + "fire, ";
        if (flags & 0x02) str = str + "left(2), ";
        if (flags & 0x04) str = str + "right(2), ";
        if (flags & 0x08) str = str + "up(2), ";
        if (flags & 0x10) str = str + "down(2), ";
        if (flags & 0x20) str = str + "short fire, ";
        if (flags & 0x40) str = str + "left, ";
        if (flags & 0x80) str = str + "right, ";
        if (flags & 0x100) str = str + "up, ";
        if (flags & 0x200) str = str + "down, ";
        str = substr(str, 0, strlen(str) - 2);
    }

    MakeComm(ea, str);
}
