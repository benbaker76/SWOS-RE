Yeah, this is a really nice way to “de-hardcode” all those WHDLoad addresses. 👍

Short version of my opinion:

* **Trampolines (jsr $0 / rts)** are the nicest for your **SWOS2.s** side:
  you just write `jsr fix_snoop_bug` etc. and never think about where the real code lives.
* A **pointer table** is slightly more relocation-friendly and compact, but every call becomes `jsr (a0)` style.

Given how you’re working (patching with PL_* and wanting easy stand-alone behaviour later), I’d go with **trampolines**.

---

## 1. Trampoline stub layout

Concept:

```asm
; Somewhere at a fixed, known place in the binary
; (doesn't *have* to be right after j_start, can be at the end of code too)

    ; j_start must still jump to start as before
j_start:
    jmp     start

    ; Optionally align
    cnop    0,4          ; make sure longword aligned if you like

; ----- WHDLoad trampoline stubs -----
; Each stub:
;   fix_snoop_bug:
;       jsr <patched_target>
;       rts
; In your assembled binary the operand is 0; WHDLoad patch changes that.

whd_trampolines:
fix_snoop_bug:
    jsr     0            ; opcodes: 4E B9 00 00 00 00
    rts                  ; 4E 75

fix_memory_routine_9697_1:
    jsr     0
    rts

rob_northen_loader:
    jsr     0
    rts

access:
    jsr     0
    rts

kb_hook:
    jsr     0
    rts
```

Now, **everywhere in SWOS2.s** you just call the labels:

```asm
    jsr     fix_snoop_bug
    ...
    jsr     fix_memory_routine_9697_1
    ...
    jsr     rob_northen_loader
    ...
    jsr     access
    ...
    jsr     kb_hook
```

No absolute `$9FE80A` nonsense anywhere in your game code.

### How WHDLoad patch uses this

In the slave patch, you only ever patch the **longword operand** of each `jsr`:

* At `fix_snoop_bug` the layout is:

  ```asm
  fix_snoop_bug:         ; assume this ends up at $1000XX
      4E B9 00 00 00 00  ; jsr 0
      4E 75              ; rts
  ```

* The operand lives at `fix_snoop_bug+2`, i.e. the longword after the opcode.

Example PL patch (numbers illustrative):

```asm
; addresses in SWOS2 binary:
;   FIX_SNOOP_BUG_ADDR       equ $0010000C
;   FIX_MEM_ROUTINE_ADDR     equ $00100014
;   ROB_NORTHEN_LOADER_ADDR  equ $0010001C
;   ACCESS_ADDR              equ $00100024
;   KB_HOOK_ADDR             equ $0010002C

pl_9697_1
    PL_START

    ; Patch jsr operands (the +2 skips the opcode)
    PL_L    FIX_SNOOP_BUG_ADDR+2, fix_snoop_bug_real
    PL_L    FIX_MEM_ROUTINE_ADDR+2, fix_memory_routine_9697_1_real
    PL_L    ROB_NORTHEN_LOADER_ADDR+2, rob_northen_loader_real
    PL_L    ACCESS_ADDR+2, access_real
    PL_L    KB_HOOK_ADDR+2, kb_hook_real

    PL_END
```

Where `*_real` are the actual entry points in the slave (`$9FE80A`, `$9FE834`, etc).

**Benefits of this approach:**

* Your game code never contains those magic `$9FE8xx` constants.
* If later you want a *stand-alone* build with no WHDLoad, you just:

  * Replace each stub body with your own implementation,
  * Or have them `jmp` into local code.
* Patching is dead simple: one patch per stub, always at `label+2`.

---

## 2. Pointer table alternative (for completeness)

Your table idea would look like:

```asm
j_start:
    jmp     start

    cnop    0,4

whdLoadTable:
    dc.l    0      ; WHD_FIX_SNOOP_BUG
    dc.l    0      ; WHD_FIX_MEM_ROUTINE
    dc.l    0      ; WHD_ROB_NORTHEN
    dc.l    0      ; WHD_ACCESS
    dc.l    0      ; WHD_KB_HOOK

WHD_FIX_SNOOP_BUG   equ whdLoadTable+0
WHD_FIX_MEM_ROUTINE equ whdLoadTable+4
WHD_ROB_NORTHEN     equ whdLoadTable+8
WHD_ACCESS          equ whdLoadTable+12
WHD_KB_HOOK         equ whdLoadTable+16
```

Usage:

```asm
    lea     whdLoadTable(pc),a0
    move.l  (a0),a0           ; or move.l WHD_FIX_SNOOP_BUG(pc),a0
    jsr     (a0)
```

Patch:

```asm
    PL_L    WHD_FIX_SNOOP_BUG,   fix_snoop_bug_real
    PL_L    WHD_FIX_MEM_ROUTINE, fix_memory_routine_9697_1_real
    ...
```

**Pros**:

* Slightly cleaner from a relocation/PC-relative perspective if you later hunk-ify everything.
* All patch targets are in a dense block of data.

**Cons**:

* Every call needs an extra load + indirect JSR.
* You have to remember to use that calling convention everywhere, instead of a normal `jsr label`.

---

## 3. Which one I’d pick for you

Given:

* You already have C-style labels in SWOS2.s (`fix_snoop_bug`, `access`, etc.).
* You want to be able to later drop WHDLoad and just implement them “for real”.
* You mostly want to avoid *hard-coded* SWOS.Slave addresses…

I’d go with the **trampoline/stub method**:

```asm
fix_snoop_bug:
    jsr     0      ; patched by WHDLoad
    rts

; later, for a stand-alone build:
; fix_snoop_bug:
;     <real code here>
;     rts
```

You get:

* Simple `jsr fix_snoop_bug` everywhere in the game.
* Only one place per hook to patch.
* Easy future migration: just change stub bodies instead of touching the whole codebase.

If you want, next step we can sketch a small block showing **exact bytes and offsets** for a minimal set of stubs so you can line them up with your existing PL script.
