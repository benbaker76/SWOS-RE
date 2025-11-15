# === Makefile for vasmm68k_mot → WHDLoad Slave ==========================
# Usage:
#   make            # builds SWOS.Slave
#   make clean
#   make rebuild    # clean + build
#
# Customize these to your setup:
VASM        ?= C:\Users\headk\.vscode\extensions\prb28.amiga-assembly-1.8.13\resources\bin\win32\vasmm68k_mot
SRC         ?= SWOSHD.s
OUT         ?= SWOS.Slave

# Path to your ASM includes (NDK / whdload includes / resload.i etc.)
# Example: INCLUDEI = /amiga/NDK3.2R4/Include/include_i
INCLUDEI = D:/Emulation/Amiga/DH0/NDK3.2R4/Include_I
WHDINC   = D:/Emulation/Amiga/DH0/NDK3.2R4/Include_H

# Optional: pass your own -D flags here (examples shown)
DEFINES     ?=
#   e.g. DEFINES = -DCHIP_ONLY=1 -DPROGRAM_LOCATION_OFFSET=0x180000

# Choose your dialect compatibility if needed:
#   -devpac : Devpac compatibility (common for Amiga sources)
#   -phxass : PhxAss compatibility (use if your source expects it)
DIALECT     ?= -devpac

# CPU & output format:
CPU         ?= 68000
FORMAT      ?= hunkexe

# Listing file (optional but handy for debugging)
LST         ?= $(OUT:.Slave=.lst)

# Core flags: position-independent, Motorola syntax, quiet listing
VASMFLAGS = -m$(CPU) -F$(FORMAT) -kick1hunks -pic -nosym $(DIALECT) -quiet \
            -I$(INCLUDEI) -I$(WHDINC) $(DEFINES) -L $(LST)

.PHONY: all clean rebuild

all: $(OUT)

$(OUT): $(SRC)
	$(VASM) $(VASMFLAGS) -o $@ $<

rebuild: clean all

clean:
	$(RM) -f $(OUT) $(LST)
