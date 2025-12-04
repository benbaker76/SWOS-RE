;
; Resload.s
; -----------------------
; Replacement routines for WHDLoad resload_* file I/O helpers, implemented
; using AmigaOS exec.library and dos.library.
;
; These functions are intended to be binary-compatible with the following
; WHDLoad helpers so existing call sites can be redirected from:
;
;   resload_GetFileSize
;   resload_LoadFile
;   resload_LoadFileDecrunch
;   resload_DeleteFile
;   resload_SaveFile
;   resload_ListFiles
;
; Calling conventions follow the WHDLoad documentation:
;
;   ULONG size = resload_GetFileSize(name)
;       A0 = CPTR  name
;       D0 = ULONG size (0 if file does not exist or on error)
;
;   length,error = resload_LoadFile(name, dest)
;       A0 = CPTR  name
;       A1 = APTR  dest
;       D0 = ULONG length (0 on error)
;       D1 = ULONG error code (0 on success, non-zero on error)
;
;   length,error = resload_LoadFileDecrunch(name, dest)
;       A0 = CPTR  name
;       A1 = APTR  dest
;       D0 = ULONG decompressed length (0 on error)
;       D1 = ULONG error code (0 on error)
;
;   success,error = resload_DeleteFile(name)
;       A0 = CPTR  name
;       D0 = BOOL  success (0 = fail, non-zero = ok)
;       D1 = ULONG error code (0 on success, non-zero on error)
;
;   success,error = resload_SaveFile(size, name, src)
;       D0 = ULONG size
;       A0 = CPTR  name
;       A1 = APTR  src
;       D0 = BOOL  success (0 = fail, non-zero = ok)
;       D1 = ULONG error code (0 on success, non-zero on error)
;
;   amount,error = resload_ListFiles(buffersize, dirname, buffer)
;       D0 = ULONG buffersize
;       A0 = CPTR  dirname
;       A1 = APTR  buffer
;       D0 = ULONG amount of files listed
;       D1 = ULONG error code (0 on success, non-zero on error)
;
; NOTES
; -----
; - These routines assume dos.library has already been opened and its
;   base pointer stored in S_DosBase (APTR). If S_DosBase is 0, calls
;   will fail gracefully.
; - LoadFileDEC uses the game’s built-in RNC decompressors:
;       RncDecompressV1(src=a0, dst=a1, expectedSize=d1)
;       RncDecompressV2(src=a0, dst=a1, expectedSize=d1)
;   which must be provided elsewhere in the link.
; - ListFiles is implemented as a simple stub which currently returns 0
;   files and success. It can be extended later using dos_Lock/Examine/ExNext.
;
; ---------------------------------------------------------------------------
; LVOs and constants
; ---------------------------------------------------------------------------

ExecSupervisor      EQU     -30
ExecForbid          EQU     -132
ExecFindTask        EQU     -294
ExecWaitPort        EQU     -384
ExecGetMsg          EQU     -372
ExecReplyMsg        EQU     -378
ExecOpenLib         EQU     -552
ExecOldOpenLib      EQU     -408
ExecCloseLib        EQU     -414

        ; Exec Library LVOs
exec_AllocMem       EQU     -198
exec_FreeMem        EQU     -210
exec_Forbid         EQU     -132
exec_Permit         EQU     -138
exec_Disable        EQU     -456
exec_Enable         EQU     -462
exec_AttnFlags      EQU     296

        ; Dos Library LVOs
dos_Open            EQU     -30
dos_Close           EQU     -36
dos_Read            EQU     -42
dos_Write           EQU     -48
dos_DeleteFile      EQU     -72
dos_Lock            EQU     -84
dos_UnLock          EQU     -90
dos_Examine         EQU     -102
dos_ExNext          EQU     -108
dos_IoErr           EQU     -132
dos_AllocDosObject  EQU     -228
dos_FreeDosObject   EQU     -234
dos_Exit            EQU     -144
dos_PutStr          EQU     -948

        ; graphics.library LVOs
gfx_ActiView   EQU $22
gfx_copinit    EQU $26
gfx_LOFlist    EQU $32

GfxLoadView    EQU -222
GfxWaitTOF     EQU -270

        ; Process structure offsets

proc_MsgPort        EQU     92              ; pr_MsgPort
proc_CLI            EQU     172             ; pr_CLI (BPTR, 0 = Workbench)

        ; Modes / flags
MODE_OLDFILE        EQU     1005            ; Open existing file for reading
MODE_NEWFILE        EQU     1006            ; Create new file (truncate if exists)

MEMF_CHIP           EQU     $00000002
MEMF_FAST           EQU     $00000004
MEMF_CLEAR          EQU     $00010000

DOS_FIB             EQU     2               ; AllocDosObject type for FileInfoBlock
ACCESS_READ         EQU     -2              ; Lock() access mode

RNC_TYPE1_MAGIC     EQU     $524E4301       ; 'RNC'+1
RNC_TYPE2_MAGIC     EQU     $524E4302       ; 'RNC'+2

LEVEL_1_INTERRUPT_AUTOVECTOR            EQU $64
LEVEL_2_INTERRUPT_AUTOVECTOR            EQU $68
LEVEL_3_INTERRUPT_AUTOVECTOR            EQU $6C
LEVEL_4_INTERRUPT_AUTOVECTOR            EQU $70
LEVEL_5_INTERRUPT_AUTOVECTOR            EQU $74

CIAA_ICR                                EQU $00BFED01
CIAB_ICR                                EQU $00BFDD00

DMACONR                                 EQU $00DFF002
ADKCON                                  EQU $00DFF09E 	
ADKCONR                                 EQU $00DFF010
INTENAR                                 EQU $00DFF01C
DMACON                                  EQU $00DFF096
INTENA                                  EQU $00DFF09A
COLOR00                                 EQU $00DFF180
COP1LC                                  EQU $00DFF080
COP2LC                                  EQU $00DFF084
COPJMP1                                 EQU $00DFF088

    SECTION text,CODE

; ---------------------------------------------------------------------------
; SafeStart
;  - Opens graphics.library (S_GfxBase)
;  - Detects CLI vs Workbench launch (S_WBMsg)
;  - Grabs VBR for 68010+ (S_VBR)
; ---------------------------------------------------------------------------
        xdef    SafeStart
SafeStart:
        move.l  4.w,a6                  ; A6 = Exec base

        ; --- Open graphics.library (optional) ---
        lea.l   S_GfxName(pc),a1        ; "graphics.library"
        moveq   #0,d0                   ; min version = 0 is fine
        jsr     ExecOldOpenLib(a6)      ; D0 = GfxBase or 0
        move.l  d0,S_GfxBase            ; may be 0, that's OK

        clr.w   S_FromWB

        ; --- Find our process/task ---
        sub.l   a1,a1                   ; A1 = NULL (current task)
        jsr     ExecFindTask(a6)        ; D0 = struct Process*
        move.l  d0,a5
        beq.s   .after_wbmsg            ; very unlikely, but be safe

        ; CLI or Workbench?
        tst.l   proc_CLI(a5)            ; non-zero => CLI
        bne.s   .after_wbmsg            ; from CLI: no WB message

        move.w  #1,S_FromWB             ; mark as started from WB

        ; --- Workbench startup: grab WB message ---
        lea.l   proc_MsgPort(a5),a0     ; A0 = WB MsgPort
        jsr     ExecWaitPort(a6)
        lea.l   proc_MsgPort(a5),a0
        jsr     ExecGetMsg(a6)          ; D0 = WB startup message *
        move.l  d0,S_WBMsg              ; remember so we can ReplyMsg later

.after_wbmsg:

        ;jsr     ExecForbid(a6)

        clr.l   S_VBR

        btst.b  #0,exec_AttnFlags+1(a6) ; CPU has VBR?
        beq.s   .no_vbr                 ; 68000 -> VBR stays 0

        ; Call our _GetVBR helper in supervisor mode
        lea.l   _S_GetVBR(pc),a5
        jsr     ExecSupervisor(a6)      ; returns with D0 = VBR
        move.l  d0,S_VBR                ; store VBR

.no_vbr:
        ; Now S_VBR is valid: 0 on 68000, VBR on 010+
        move.l  S_VBR(pc),a0

        ; Save original Exec/OS autovectors
        move.l  LEVEL_1_INTERRUPT_AUTOVECTOR(a0),S_SavedInt1
        move.l  LEVEL_2_INTERRUPT_AUTOVECTOR(a0),S_SavedInt2
        move.l  LEVEL_3_INTERRUPT_AUTOVECTOR(a0),S_SavedInt3
        move.l  LEVEL_4_INTERRUPT_AUTOVECTOR(a0),S_SavedInt4
        move.l  LEVEL_5_INTERRUPT_AUTOVECTOR(a0),S_SavedInt5

        rts

; Supervisor helper: MOVEC VBR,D0 ; RTE
_S_GetVBR:
        dc.l    $4E7A0801               ; MOVEC VBR,D0
        rte

; Uses S_GfxBase opened by SafeStart.
; If SafeStart failed to open graphics.library, this is a no-op.
        xdef    DetachOSDisplay
DetachOSDisplay:
        ; We only need a few temps, no need to save a7
        movem.l d0-d1/a0-a2,-(sp)

        tst.w   S_FromWB
        beq.s   .done

        move.l  S_GfxBase(pc),a6
        beq.s   .done                   ; no gfx.library, nothing to do

        ; Save current View from gfxbase
        move.l  gfx_ActiView(a6),S_SavedView

        ; LoadView(0) – detach WB display
        sub.l   a1,a1                   ; A1 = NULL
        jsr     GfxLoadView(a6)

        ; WaitTOF twice, as recommended
        jsr     GfxWaitTOF(a6)
        jsr     GfxWaitTOF(a6)

        ; Save DMACONR/INTENAR/ADKCONR with SET bit ($8000) for later restore
        move.w  #$8000,d0               ; SET/CLR flag

        move.w  (DMACONR).l,d1
        or.w    d0,d1
        move.w  d1,S_SavedDmaCon

        move.w  (INTENAR).l,d1
        or.w    d0,d1
        move.w  d1,S_SavedIntEna

        move.w  (ADKCONR).l,d1
        or.w    d0,d1
        move.w  d1,S_SavedAdkCon

        btst    #14-8,(DMACONR).l      ; Dummy read / sync
.blt_busy
        btst    #14-8,(DMACONR).l      ; Test blitter busy bit (bit 14 -> bit 6 of high byte)
        bne.s   .blt_busy              ; If busy, spin

        ; Now safe to kill DMA and interrupts
        move.w  #$01FF,(DMACON).l     ; Disable all DMA channels
        move.w  #$3FFF,(INTENA).l     ; Disable all interrupts

.done:
        movem.l (sp)+,d0-d1/a0-a2
        rts


; -------------------------------------------------------------------------------------------------
; Load dos.library if needed
;
; d0 = Pointer to library (or 0 if fail)
; -------------------------------------------------------------------------------------------------
        xdef    LoadDosLibrary
LoadDosLibrary:
        move.l      S_DosBase(pc),d0
        bne.b       .ret                   ; Already loaded, return!

        move.l      4.w,a6                 ; A6 = Exec base
        lea.l       S_DosName(pc),a1       ; Name: dos.library
        move.w      S_DosVer(pc),d0        ; d0 = Minimum Version Number
        jsr         ExecOldOpenLib(a6)     ; a6 = pointer to dos library (takes a1 as name)
        move.l      d0,S_DosBase           ; Store pointer to dos library (0 = failed to open)
.ret:
        rts

        xdef    CloseDosLibrary
CloseDosLibrary:
        move.l      S_DosBase(PC),a1       ; APTR to dos base
        beq.b       .ret                   ; Not loaded, return!

        move.l      4.w,a6                 ; A6 = Exec base
        jsr         ExecCloseLib(a6)       ; Close dos.library  
.ret:
        rts

        xdef    ExitToDos
ExitToDos:

        move.l  S_VBR(pc),a0

        move.l  S_SavedInt1,LEVEL_1_INTERRUPT_AUTOVECTOR(a0)
        move.l  S_SavedInt2,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)
        move.l  S_SavedInt3,LEVEL_3_INTERRUPT_AUTOVECTOR(a0)
        move.l  S_SavedInt4,LEVEL_4_INTERRUPT_AUTOVECTOR(a0)
        move.l  S_SavedInt5,LEVEL_5_INTERRUPT_AUTOVECTOR(a0)

       ; Wait for blitter idle again (paranoia)
        btst    #14-8,(DMACONR).l
.blt_idle_exit:
        btst    #14-8,(DMACONR).l
        bne.s   .blt_idle_exit

        ; Now safe to kill DMA and interrupts
        ;move.w  #$01FF,(DMACON).l     ; Disable all DMA channels
        ;move.w  #$3FFF,(INTENA).l     ; Disable all interrupts

        ; Restore original view via graphics.library
        move.l  S_GfxBase(pc),a6         ; Load gfxbase
        move.l  gfx_copinit(a6),COP1LC   ; Restore coplist pointer 1
        move.l  gfx_LOFlist(a6),COP2LC   ; Restore coplist pointer 2
        clr.w   COPJMP1                  ; Make Copper use restored pointer
        
        ; Restore DMA / interrupts / ADKCON
        move.w  S_SavedDmaCon,(DMACON).l
        move.w  S_SavedIntEna,(INTENA).l
        move.w  S_SavedAdkCon,(ADKCON).l

        move.l  S_SavedView,a1
        beq.s   .no_view                 ; (paranoia)
        jsr     GfxLoadView(a6)
        move.l  S_GfxBase(pc),a6
        jsr     GfxWaitTOF(a6)
        jsr     GfxWaitTOF(a6)

.no_view:

        tst.w   S_FromWB
        beq.s   .done

        ; --- Hand control back to Workbench / CLI ---
        move.l  4.w,a6                  ; Exec base

        tst.l   S_WBMsg
        beq.s   .no_wbmsg
        move.l  S_WBMsg(pc),a1
        jsr     ExecReplyMsg(a6)
.no_wbmsg:

        ; Close graphics.library if we opened it
        move.l  S_GfxBase(pc),a1
        beq.s   .done
        jsr     ExecCloseLib(a6)

.done:

        movea.l S_SavedSP,sp
        moveq   #0,d0
        rts

; ---------------------------------------------------------------------------
; resload_MakeDataPath
; ---------------------------------------------------------------------------
; In : A0 = filename or dirname
; Out: A0 = possibly modified pointer:
;        - If name has ':' anywhere     -> unchanged (absolute / device path)
;        - If name already starts "data/" (case-sensitive) -> unchanged
;        - Otherwise                    -> "data/" + name in _data_path
; Clobbers: d0-d2/a1-a2 (so call this before your own push/pop)
; ---------------------------------------------------------------------------

        xdef    resload_MakeDataPath
resload_MakeDataPath:
        movem.l d0-d2/a1-a2,-(sp)

        move.l  a0,a1                      ; a1 = src (original name)

        ; Empty string? just return original A0.
        move.b  (a1),d0
        beq.s   .ret

        ; Scan for ':' – if present anywhere, treat as full path/device
        ; and leave A0 unchanged.
        move.l  a1,a2                      ; a2 = scan pointer
.chk_colon:
        move.b  (a2)+,d0
        beq.s   .need_prefix               ; end of string, no colon found
        cmp.b   #':',d0
        beq.s   .ret                       ; has device: -> leave as-is
        bra.s   .chk_colon

.need_prefix:
        ; Build "data/" + original name into _data_path
        lea     _data_path(pc),a1          ; dest
        lea     _data_prefix(pc),a2        ; "data/"

.copy_prefix:
        move.b  (a2)+,d0
        beq.s   .copy_name
        move.b  d0,(a1)+
        bra.s   .copy_prefix

.copy_name:
        move.l  a0,a2                      ; a2 = original name
.cp_loop:
        move.b  (a2)+,d0
        move.b  d0,(a1)+
        beq.s   .set_out                   ; copied terminating 0
        bra.s   .cp_loop

.set_out:
        lea     _data_path(pc),a0          ; return pointer to "data/<name>"

.ret:
        movem.l (sp)+,d0-d2/a1-a2
        rts

; ---------------------------------------------------------------------------
; GetFileSize  (replacement for resload_GetFileSize)
; ---------------------------------------------------------------------------
;
;   size = GetFileSize(name)
;     A0 = name (CPTR)
;     D0 = file size (ULONG) or 0 if not found / error
;
; Uses Lock + AllocDosObject(DOS_FIB) + Examine to obtain fib_Size.

        xdef    resload_GetFileSize
resload_GetFileSize:
        jsr     resload_MakeDataPath       ; A0 -> "data/<name>" if bare

        movem.l d1-d3/d5/a1-a2,-(sp)

        move.l  S_DosBase(pc),a6           ; a6 = dosBase

        ; Lock(name, ACCESS_READ)
        move.l  a0,d1                      ; d1 = name
        moveq   #ACCESS_READ,d2
        jsr     dos_Lock(a6)              ; d0 = lock or 0
        tst.l   d0
        beq.s   .no_file

        move.l  d0,d5                      ; d5 = FileLock

        ; fib = AllocDosObject(DOS_FIB, NULL)
        moveq   #0,d0
        moveq   #DOS_FIB,d1
        moveq   #0,d2
        jsr     dos_AllocDosObject(a6)    ; d0 = fib or 0
        tst.l   d0
        beq.s   .unlock_only

        move.l  d0,d2                      ; d2 = fib

        ; Examine(lock, fib)
        move.l  d5,d1                      ; d1 = lock
        jsr     dos_Examine(a6)           ; d0 = success
        tst.l   d0
        beq.s   .free_fib

        ; fib_Size is at offset 124 in FIB
        move.l  d2,a1
        move.l  124(a1),d0                 ; d0 = size

.free_fib:
        moveq   #DOS_FIB,d1
        jsr     dos_FreeDosObject(a6)

.unlock_only:
        move.l  d5,d1
        jsr     dos_UnLock(a6)
        bra.s   .done

.no_file:
        moveq   #0,d0                      ; size = 0 on error
        bra.s   .done

.no_dos:
        moveq   #0,d0                      ; size = 0, no DOS

.done:
        movem.l (sp)+,d1-d3/d5/a1-a2
        rts

; ---------------------------------------------------------------------------
; LoadFile  (replacement for resload_LoadFile)
; ---------------------------------------------------------------------------
;
;   length,error = LoadFile(name, dest)
;     A0 = name (CPTR)
;     A1 = dest buffer (APTR)
;     D0 = length of file loaded (ULONG), 0 on error
;     D1 = error code (0 on success, non-zero on error)
;
; Uses DOS:Open/Read/Close. Preserves D2–D7/A2–A6 per usual Amiga ABI.

        xdef    resload_LoadFile
resload_LoadFile:
        ; On entry: A0 = filename, A1 = destination

        move.l  a1,a3                  ; save caller's dest in a preserved reg

        jsr     resload_MakeDataPath   ; may trash A0/A1, that's fine now

        movem.l d2-d5/a2,-(sp)         ; save our temps

        move.l  S_DosBase(pc),a6       ; a6 = dos.library base

        ; Open(name, MODE_OLDFILE)
        move.l  a0,d1                  ; d1 = name
        move.l  #MODE_OLDFILE,d2
        jsr     dos_Open(a6)           ; d0 = file handle or 0
        move.l  d0,d4                  ; d4 = handle
        beq.s   .lf_error

        ; Read(handle, dest, max_len)
        move.l  d4,d1                  ; d1 = handle
        move.l  a3,d2                  ; d2 = *original* dest (saved A1)
        move.l #$7FFFFFFF,d3           ; d3 = max length (large positive)
        jsr     dos_Read(a6)           ; d0 = bytes read (or error)

        move.l  d0,d5                  ; save bytes read

        ; Close(handle)
        move.l  d4,d1
        jsr     dos_Close(a6)          ; ignore return

        move.l  d5,d0                  ; restore bytes read
        tst.l   d0
        beq.s   .lf_error              ; 0 bytes -> treat as error for now

        moveq   #0,d1                  ; error = 0
        bra.s   .lf_done

.lf_error:
        move.w  #$F00,(COLOR00).l
        move.l  a0,d2                   ; d2 = filename pointer
        bsr     PrintFileErrorToConsole ; print error message

.lf_done:
        movem.l (sp)+,d2-d5/a2
        rts

; ---------------------------------------------------------------------------
; LoadFileDEC  (replacement for resload_LoadFileDecrunch)
; ---------------------------------------------------------------------------
;
;   length,error = LoadFileDEC(name, dest)
;     A0 = name (CPTR)
;     A1 = dest buffer (APTR)
;     D0 = decompressed length (ULONG), 0 on error
;     D1 = error code (0 on success, non-zero on error)
;
; The file is first loaded into a temporary FastMem buffer, then:
;   - If it begins with 'RNC'+1 or 'RNC'+2, it is decompressed via
;     RncDecompressV1 / RncDecompressV2 into the caller’s buffer.
;   - Otherwise it is treated as raw and copied directly.
;
; The temporary buffer is always freed before returning.

        xdef    resload_LoadFileDEC
resload_LoadFileDEC:
        jsr     resload_MakeDataPath       ; A0 -> "data/<name>" if bare

        movem.l d2-d7/a2-a3,-(sp)

        ; Get size of the file
        move.l  a0,-(sp)                   ; preserve name for GetFileSize
        jsr     resload_GetFileSize
        move.l  (sp)+,a0                   ; restore name
        move.l  d0,d6                      ; d6 = file size
        beq.w   .lfd_error                 ; 0 size -> error / not found

        ; Allocate temporary FastMem buffer for compressed data
        move.l  4.w,a6                     ; execBase
        move.l  d6,d0                      ; size
        move.l  #MEMF_FAST,d1
        jsr     exec_AllocMem(a6)         ; d0 = buffer or 0
        move.l  d0,a2                      ; a2 = temp buffer
        beq.w   .lfd_error

        ; Open file via DOS
        move.l  S_DosBase(pc),a6          ; a6 = dosBase

        move.l  a0,d1                      ; d1 = name
        move.l  #MODE_OLDFILE,d2
        jsr     dos_Open(a6)              ; d0 = handle or 0
        move.l  d0,d5                      ; d5 = handle
        beq.s   .lfd_freebuf

        ; Read entire file into temp buffer
        move.l  d5,d1                      ; d1 = handle
        move.l  a2,d2                      ; d2 = buffer
        move.l  d6,d3                      ; d3 = length
        jsr     dos_Read(a6)              ; d0 = bytes read

        ; Close(handle)
        move.l  d5,d1
        jsr     dos_Close(a6)

        cmp.l   d6,d0
        bne.s   .lfd_freebuf               ; short read -> error

        ; Decide whether to RNC-decompress or copy raw
        movea.l a2,a0                      ; a0 = src (RNC header or raw)
        cmpi.l  #RNC_TYPE2_MAGIC,(a0)
        beq.s   .lfd_rnc2
        cmpi.l  #RNC_TYPE1_MAGIC,(a0)
        beq.s   .lfd_rnc1

        ; Raw copy path: copy d6 bytes from a2 to a1
        move.l  d6,d0
        movea.l a1,a3                      ; a3 = dest
.raw_loop:
        move.b  (a2)+,(a3)+
        subq.l  #1,d0
        bne.s   .raw_loop

        move.l  d6,d0                      ; D0 = decompressed length
        moveq   #0,d1                      ; no error
        bra.s   .lfd_success

.lfd_rnc2:
        move.l  4(a0),d1                   ; expected size from RNC header
        movem.l d1,-(sp)
        ; A0 = src, A1 = dst (already set by caller)
        jsr     RncDecompressV2
        movem.l (sp)+,d1
        move.l  d1,d0                      ; report expected size
        moveq   #0,d1                      ; error = 0
        bra.s   .lfd_success

.lfd_rnc1:
        move.l  4(a0),d1                   ; expected size from RNC header
        movem.l d1,-(sp)
        ; A0 = src, A1 = dst (already set by caller)
        jsr     RncDecompressV1
        movem.l (sp)+,d1
        move.l  d1,d0                      ; report expected size
        moveq   #0,d1                      ; error = 0
        bra.s   .lfd_success

.lfd_freebuf:
        ; Free the temporary buffer (if allocated)
        cmpa.l  #0,a2
        beq.s   .lfd_error
        move.l  4.w,a6
        move.l  a2,a1
        move.l  d6,d0
        jsr     exec_FreeMem(a6)

.lfd_error:
        moveq   #0,d0
        moveq   #1,d1
        bra.s   .lfd_done

.lfd_success:
        ; Free the temporary buffer on success as well
        cmpa.l  #0,a2
        beq.s   .lfd_done
        move.l  4.w,a6
        move.l  a2,a1
        move.l  d6,d0
        jsr     exec_FreeMem(a6)

.lfd_done:
        movem.l (sp)+,d2-d7/a2-a3
        rts

; ---------------------------------------------------------------------------
; Deletefile  (replacement for resload_DeleteFile)
; ---------------------------------------------------------------------------
;
;   success,error = Deletefile(name)
;     A0 = name (CPTR)
;     D0 = BOOL success (0 = fail, non-zero = ok)
;     D1 = ULONG error code (0 on success, non-zero on error)
;
; Uses dos_DeleteFile(name). For now, D1 is set to 0 on success, 1 on error
; instead of a full IoErr() mapping.

        xdef    resload_Deletefile
resload_Deletefile:
        jsr     resload_MakeDataPath       ; A0 -> "data/<name>" if bare

        movem.l d2/a2,-(sp)

        move.l  S_DosBase(pc),a6          ; a6 = dosBase

        move.l  a0,d1                      ; d1 = name
        jsr     dos_DeleteFile(a6)        ; d0 = success (0/<>0)
        tst.l   d0
        beq.s   .df_error

        moveq   #0,d1                      ; errorcode = 0
        bra.s   .df_done

.df_error:
        moveq   #0,d0                      ; success = 0
        moveq   #1,d1                      ; simple non-zero error

.df_done:
        movem.l (sp)+,d2/a2
        rts

; ---------------------------------------------------------------------------
; SaveFile  (replacement for resload_SaveFile)
; ---------------------------------------------------------------------------
;
;   success,error = SaveFile(size, name, src)
;     D0 = size in bytes to write
;     A0 = filename (CPTR)
;     A1 = source buffer (APTR)
;     D0 = BOOL success (0 = fail, non-zero = ok)
;     D1 = ULONG error code (0 on success, non-zero on error)
;
; Creates/truncates the file and writes exactly D0 bytes.

        xdef    resload_SaveFile
resload_SaveFile:
        jsr     resload_MakeDataPath       ; A0 -> "data/<name>" if bare

        movem.l d2-d4/a2,-(sp)

        move.l  d0,d3                      ; d3 = size to write
        move.l  S_DosBase(pc),a6          ; a6 = dosBase

        ; Open(name, MODE_NEWFILE)
        move.l  a0,d1                      ; d1 = name
        move.l  #MODE_NEWFILE,d2
        jsr     dos_Open(a6)              ; d0 = handle or 0
        move.l  d0,d4                      ; d4 = handle
        beq.s   .sf_error

        ; Write(handle, src, size)
        move.l  d4,d1                      ; d1 = handle
        move.l  a1,d2                      ; d2 = src
        move.l  d3,d3                      ; d3 = size
        jsr     dos_Write(a6)             ; d0 = bytes written

        cmp.l   d3,d0
        bne.s   .sf_write_error

        ; Close(handle)
        move.l  d4,d1
        jsr     dos_Close(a6)

        moveq   #1,d0                      ; success = TRUE
        moveq   #0,d1                      ; errorcode = 0
        bra.s   .sf_done

.sf_write_error:
        move.l  d4,d1
        jsr     dos_Close(a6)

.sf_error:
        moveq   #0,d0                      ; success = FALSE
        moveq   #1,d1                      ; simple non-zero error

.sf_done:
        movem.l (sp)+,d2-d4/a2
        rts

; ---------------------------------------------------------------------------
; ListFiles  (replacement for resload_ListFiles)
; ---------------------------------------------------------------------------
;
;   amount,error = ListFiles(buffersize, dirname, buffer)
;     D0 = ULONG buffersize     (in bytes)
;     A0 = CPTR  dirname        (directory path, e.g. "save")
;     A1 = APTR  buffer         (output buffer)
;
;   Returns:
;     D0 = amount of files listed in buffer
;          (each name is 0-terminated, names packed back to back)
;     D1 = error code (0 on success / partial success, non-zero on hard error)
;
; NOTES:
;   - Only files are listed; directories are skipped (as per WHDLoad docs).
;   - If the buffer is too small, the loop stops when there is no room
;     for the next "name + trailing 0". The function returns the number
;     of successfully written names and D1 remains 0 (like a “soft”
;     success). There is no explicit overflow indication.
;   - On hard errors (no dos.library, Lock/Examine/AllocDosObject failing),
;     D0 = 0 and D1 is non-zero (IoErr() if available, or 1 as generic error).
;
; ---------------------------------------------------------------------------

        xdef    resload_ListFiles
resload_ListFiles:
        jsr     resload_MakeDataPath       ; A0 -> "data/<name>" if bare

        movem.l d2-d7/a2-a4,-(sp)

        move.l  d0,d7                  ; d7 = total buffer size
        moveq   #0,d4                  ; d4 = count of files written
        moveq   #0,d1                  ; d1 = error code (default: no error)
        clr.l   d5                     ; d5 = dir lock (0 = none)
        move.l  #0,a2                  ; a2 = FIB pointer (0 = none)

        ; Need some buffer space at least for one name + terminator.
        tst.l   d7
        ble.w   .lf_no_space

        ; Get dos.library base
        move.l  S_DosBase(pc),a6

        ; -------------------------------------------------------------------
        ; Lock the directory
        ; -------------------------------------------------------------------
        move.l  a0,d1                  ; d1 = dirname
        moveq   #ACCESS_READ,d2        ; read-only
        jsr     dos_Lock(a6)          ; d0 = lock or 0
        move.l  d0,d5                  ; d5 = lock
        tst.l   d5
        bne.s   .lf_lock_ok

        ; Lock failed – get IoErr() if possible
        jsr     dos_IoErr(a6)         ; d0 = error
        move.l  d0,d1                  ; D1 = error code
        bra.w   .lf_return_zero

.lf_lock_ok:
        ; -------------------------------------------------------------------
        ; Allocate a FileInfoBlock
        ; -------------------------------------------------------------------
        moveq   #0,d0
        moveq   #DOS_FIB,d1
        moveq   #0,d2
        jsr     dos_AllocDosObject(a6) ; d0 = fib or 0
        move.l  d0,a2                  ; a2 = fib
        cmpa.l  #0,a2
        bne.s   .lf_fib_ok

        ; Could not allocate FIB
        moveq   #1,d1                  ; generic error
        bra.s   .lf_unlock_only

.lf_fib_ok:
        ; Prime directory scan with Examine(dirlock, fib)
        move.l  d5,d1                  ; d1 = lock
        move.l  a2,d2                  ; d2 = fib
        jsr     dos_Examine(a6)       ; d0 = success
        tst.l   d0
        bne.s   .lf_scan_init_ok

        ; Examine failed
        moveq   #1,d1                  ; generic error
        bra.s   .lf_free_fib

.lf_scan_init_ok:
        ; -------------------------------------------------------------------
        ; Directory iteration loop using ExNext
        ; -------------------------------------------------------------------
        move.l  d7,d6                  ; d6 = remaining bytes in buffer
        move.l  a1,a3                  ; a3 = current write pointer in buffer
        clr.l   d4                     ; d4 = file count

.lf_next_entry:
        ; ExNext(dirlock, fib)
        move.l  d5,d1
        move.l  a2,d2
        jsr     dos_ExNext(a6)        ; d0 = success
        tst.l   d0
        beq.s   .lf_no_more_entries   ; 0 -> no more entries or error

        ; Skip directories: fib_DirEntryType at offset 4
        move.l  a2,a0
        move.l  4(a0),d2              ; d2 = fib_DirEntryType
        tst.l   d2
        bgt.s   .lf_next_entry        ; >0 = directory -> skip

        ; -------------------------------------------------------------------
        ; We have a file entry: get its name length
        ; fib_FileName is at offset 8 in FIB
        ; -------------------------------------------------------------------
        lea     8(a2),a0              ; a0 = filename (char[...])
        moveq   #0,d2                 ; d2 = length (without terminator)

.lf_len_loop:
        move.b  (a0)+,d3
        beq.s   .lf_len_done
        addq.l  #1,d2
        bra.s   .lf_len_loop

.lf_len_done:
        ; Required bytes = len + 1 (for trailing 0)
        move.l  d2,d0
        addq.l  #1,d0                 ; d0 = required bytes

        ; Enough room left in buffer?
        cmp.l   d0,d6
        blo.s   .lf_no_more_entries   ; not enough space -> stop gracefully

        ; -------------------------------------------------------------------
        ; Copy name + terminator to buffer
        ; -------------------------------------------------------------------
        lea     8(a2),a0              ; a0 = filename again
        move.l  d0,d3                 ; d3 = bytes to copy

.lf_copy_loop:
        move.b  (a0)+,(a3)+
        subq.l  #1,d3
        bne.s   .lf_copy_loop

        ; Update remaining buffer and file count
        sub.l   d0,d6                 ; consume (len+1) bytes
        addq.l  #1,d4                 ; one more file written

        bra.s   .lf_next_entry

.lf_no_more_entries:
        ; Directory scan complete. d4 = amount, d1 = error (still 0).

.lf_free_fib:
        cmpa.l  #0,a2
        beq.s   .lf_unlock_only
        moveq   #DOS_FIB,d1
        move.l  a2,d2
        jsr     dos_FreeDosObject(a6)

.lf_unlock_only:
        tst.l   d5
        beq.s   .lf_finish
        move.l  d5,d1
        jsr     dos_UnLock(a6)

.lf_finish:
        move.l  d4,d0                 ; amount in D0
        bra.s   .lf_exit

.lf_no_dos:
.lf_no_space:
        moveq   #0,d4                 ; no files
        moveq   #1,d1                 ; generic error
        bra.w   .lf_return_zero

.lf_return_zero:
        moveq   #0,d0                 ; amount = 0

.lf_exit:
        movem.l (sp)+,d2-d7/a2-a4
        rts

        xdef    resload_FlushCache
resload_FlushCache:
        rts                     ; no-op now that we’re not under WHDLoad

; -------------------------------------------------------------------
; Compatibility wrappers for old WHDLoad-style entry points
; used by Rob Northen loader code
; -------------------------------------------------------------------

        xdef    _GetFileSize
        xdef    _LoadFile
        xdef    _SaveFile
        xdef    _Deletefile
        xdef    _ListFiles

        ; Global size variable (as used by existing code)
        xref    size

        even

; --- _GetFileSize ---------------------------------------------------------
; In:  A0 = filename
; Out: D0 = size, D1 = error (from GetFileSize)
_GetFileSize:
        movem.l d0/a0-a1,-(sp)

        move.l  a0,a1                  ; save filename

        move.l  S_VBR(pc),a0
        move.l  S_SavedInt2,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        move.l  a1,a0                  ; restore filename
        jsr     resload_GetFileSize    ; D0=size, D1=error

        move.l  S_VBR(pc),a0
        move.l  #Int2KeyboardHandler,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        movem.l (sp)+,d0/a0-a1
        rts

; --- _Deletefile ----------------------------------------------------------
; In:  A0 = filename
; Out: whatever Deletefile returns (callers ignore)
_Deletefile:
        movem.l a0-a1,-(sp)

        move.l  a0,a1                  ; save filename

        move.l  S_VBR(pc),a0
        move.l  S_SavedInt2,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        move.l  a1,a0                  ; restore filename
        jsr     resload_Deletefile

        move.l  S_VBR(pc),a0
        move.l  #Int2KeyboardHandler,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        movem.l (sp)+,a0-a1
        rts

; --- _LoadFile ------------------------------------------------------------
; In:  A0 = filename, A1 = destination buffer
; Out: global 'size' updated with length; caller registers restored
_LoadFile:
        movem.l d0-d1/a0-a2,-(sp)

        move.l  a0,a2                  ; save filename

        ; Exec owns level 2 while we do DOS I/O
        move.l  S_VBR(pc),a0
        move.l  S_SavedInt2,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        move.l  a2,a0                  ; restore filename for resload_LoadFile
        jsr     resload_LoadFile       ; D0 = length, D1 = error

        move.l  S_VBR(pc),a0
        move.l  #Int2KeyboardHandler,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        ; store returned length for rob_*
        lea     size(pc),a0
        move.l  d0,(a0)

        movem.l (sp)+,d0-d1/a0-a2
        rts

; --- _SaveFile ------------------------------------------------------------
; In:  D0 = size, A0 = filename, A1 = source buffer
; Out: global 'size' updated (for legacy use), regs restored
_SaveFile:
        movem.l d0-d1/a0-a2,-(sp)

        move.l  a0,a2                  ; save filename
        ; D0 and A1 are already preserved on the stack

        move.l  S_VBR(pc),a0
        move.l  S_SavedInt2,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        move.l  a2,a0                  ; restore filename
        jsr     resload_SaveFile       ; D0 = success, D1 = error

        move.l  S_VBR(pc),a0
        move.l  #Int2KeyboardHandler,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        lea     size(pc),a0
        move.l  d0,(a0)

        movem.l (sp)+,d0-d1/a0-a2
        rts

; --- _ListFiles -----------------------------------------------------------
; In: D0 = buffersize, A0 = dirname, A1 = buffer
; Out: D0 = count, D1 = error
_ListFiles:
        movem.l d0/a0-a2,-(sp)

        move.l  a0,a2                  ; save dirname
        ; D0 and A1 are on the stack

        move.l  S_VBR(pc),a0
        move.l  S_SavedInt2,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        move.l  a2,a0                  ; restore dirname
        jsr     resload_ListFiles

        move.l  S_VBR(pc),a0
        move.l  #Int2KeyboardHandler,LEVEL_2_INTERRUPT_AUTOVECTOR(a0)

        movem.l (sp)+,d0/a0-a2
        rts

; ---------------------------------------------------------------------------

; ---------------------------------------------------------------------------
; Very Simple Console Printing Routine
;
; Input: d2 = Filename String
;        a6 = dosBase
; ---------------------------------------------------------------------------
PrintFileErrorToConsole:
        move.l    #ErrorString1,d1
        jsr       dos_PutStr(a6)     ; error = PutStr(str/d1)
        move.l    d2,d1
        jsr       dos_PutStr(a6)     ; error = PutStr(str/d1)
        move.l    #NewLine,d1
        jsr       dos_PutStr(a6)     ; error = PutStr(str/d1)
        rts


; Input: d1 = String
;        a6 = dosBase
PrintErrorToConsole:
        jsr       dos_PutStr(a6)     ; error = PutStr(str/d1)
        move.l    #NewLine,d1
        jsr       dos_PutStr(a6)     ; error = PutStr(str/d1)
        rts
; ---------------------------------------------------------------------------

        xdef    S_SavedSP
        xdef    S_SavedInt1
        xdef    S_SavedInt2
        xdef    S_SavedInt3
        xdef    S_SavedInt4
        xdef    S_SavedInt5
        xdef    S_VBR

S_DosVer     dc.w    39
S_DosHandle: dc.l    0
S_DosBase:   dc.l    0
S_GfxBase:   dc.l    0
S_GfxName:   dc.b    "graphics.library",0
S_DosName:   dc.b    "dos.library",0
S_FromWB:    dc.w    0
S_WBMsg:     dc.l    0
S_VBR:       dc.l    0
S_SavedView:    dc.l 0
S_SavedDmaCon:  dc.w 0
S_SavedIntEna:  dc.w 0 
S_SavedAdkCon:  dc.w 0
S_DetachedDisplay: dc.w 0
S_SavedSP:    dc.l 0
S_SavedInt1:  dc.l 0
S_SavedInt2:  dc.l 0
S_SavedInt3:  dc.l 0
S_SavedInt4:  dc.l 0
S_SavedInt5:  dc.l 0
ErrorString1:
          dc.b "Error - Could not open file: ",0
NewLine:
          dc.b $a,0

BUFFER_SIZE     = 2048              ; used by rob_list_directory/listfiles

_data_path:
          ds.b 256
_data_prefix:
          dc.b "data/",0
_save_filename: 
          ds.b 14
_save_filepath:
          dc.b "save/",0
_savedir:
          dc.b "save",0
listdir_buffer:
          ds.b	BUFFER_SIZE
          dc.l	0		; safety
size:     dc.l  0
_resload: dc.l  0

        even

; ---------------------------------------------------------------------------
        xdef    RobNorthenLoader
RobNorthenLoader:
        move.l	a3,-(a7)
        add.w	d0,d0
        lea     rob_commands_table(pc),a3
        add.w	(a3,d0.w),a3
        jsr     (a3)
        move.l	(a7)+,a3
        rts

; < A0: name
; > A0: name prepended with "SAVE/" if .TAC,.PRE,.DIY,.SEA,.CAR, .HIL file,
; and DF0: prefix removed
; else unchanged

FixFilename:
        move.l	a0,a2
        cmp.b	#':',(3,a0)
        bne.b	.loop
        addq.w	#4,a0		; skip DF0:
.loop
        tst.b	(a2)+
        bne.b	.loop
        subq.w	#1,a2	; back
        ; try to match one of the save extensions
        move.b	-(a2),d0
        ror.l	#8,d0
        move.b	-(a2),d0
        ror.l	#8,d0
        move.b	-(a2),d0
        ror.l	#8,d0
        move.b	-(a2),d0
        ror.l	#8,d0
        lea		_ext_table(pc),a3
.comp
        move.l	(a3)+,d2
        beq.b	.no_userdata
        cmp.l	d0,d2
        bne.b	.comp
        
        ; user data file: copy to buffer with "SAVE/"
        lea     _save_filename(pc),a3
        move.l	a0,a2
.copy
        move.b	(a2)+,(a3)+
        bne.b	.copy
        lea	_save_filepath(pc),a0
.no_userdata
        rts
        
_ext_table:
        dc.l	".DIY"
        dc.l	".PRE"
        dc.l	".SEA"
        dc.l	".CAR"
        dc.l	".TAC"
        dc.l	".HIL"
        dc.l	0

        even
        
rob_commands_table:
        dc.w	rob_load-rob_commands_table
        dc.w	rob_save-rob_commands_table
        dc.w	rob_delete-rob_commands_table
        dc.w	rob_list_directory-rob_commands_table
        dc.w	rob_format_disk-rob_commands_table
        dc.w	rob_get_file_size-rob_commands_table
        dc.w	nothing-rob_commands_table
        dc.w	nothing-rob_commands_table
        
rob_load:
        movem.l	d0-d7/a0-a6,-(a7)
        bsr     FixFilename
        jsr	_LoadFile
        movem.l	(a7)+,d0-d7/a0-a6
        move.l	size(pc),d1
        moveq	#0,d0
        rts
        
rob_save:
        movem.l	d0-d7/a0-a6,-(a7)
        bsr     FixFilename
        move.l	d1,d0		; size
        jsr	_SaveFile
        movem.l	(a7)+,d0-d7/a0-a6
        move.l	size(pc),d1
        moveq	#0,d0
        rts
        
rob_delete:
        movem.l	d0-d7/a0-a6,-(a7)
        bsr     FixFilename
        jsr	_Deletefile
        movem.l	(a7)+,d0-d7/a0-a6
        moveq	#0,d0
        rts
        
rob_format_disk:
        moveq	#0,d0
        rts

rob_get_file_size:
        movem.l	d2-d7/a0-a6,-(a7)	
        bsr     FixFilename
        jsr     _GetFileSize
        move.l	d0,d1
        movem.l	(a7)+,d2-d7/a0-a6
        moveq	#0,d0
        rts
        
rob_list_directory:
        movem.l	d0-d7/a0-a6,-(a7)
        ; no need for _resload or a2 anymore

        ; skip colon
        moveq	#0,d1
.sk
        move.b	(a0,d1.w),d0
        beq.b	.out
        cmp.b	#':',d0
        beq.b	.colon
        addq	#1,d1
        bra.b	.sk
.colon
        ; colon found: skip it
        addq.w	#1,a0
        add.w	d1,a0
.out
        lea	_savedir(pc),a0          ; directory path
        ; a0: directory path, stripped from drive prefix
        ; a1: buffer, save it
        move.l	a1,a3                   ; rob’s caller buffer
        lea     listdir_buffer(pc),a1   ; our scratch buffer
        move.l	#BUFFER_SIZE,d0
        jsr     _ListFiles
        lea     size(pc),a0
        move.w	d0,(a0)				; number of files
        beq.b	.empty
        subq	#1,d0			; minus one for dbf
        
        lea     listdir_buffer(pc),a1
.copy_loop:
        moveq	#0,d1
.copy_file:
        move.b	(a1)+,(2,a3,d1.w)
        beq.b	.copyout
        addq	#1,d1
        bra.b	.copy_file
        ; set name length
.copyout:
        move.b	d1,(1,a3)
        ; try to mimic rob output...
        move.b	#$FD,(a3)
        add.w	#$20,a3		; next entry
        dbf		d0,.copy_loop
        
.empty:	
        movem.l	(a7)+,d0-d7/a0-a6
        move.w	size(pc),d1
        moveq	#0,d0
        rts
        
nothing:

        nop
        rts

_custom	    = $dff000
bplcon0     EQU $100
        even

        xdef    FixSnoopBug
FixSnoopBug
        movea.l	#_custom,A6		;102398: 2c7c00dff000
        move.w	#$200,bplcon0(A6)	; colorbit
    rts

        xdef    FixMemoryRoutine
FixMemoryRoutine
    rts

; Fixes bug with Highlights play! JOTD: potential issue if A1 is in fast!!!
        xdef    Access
Access:
        adda.l	$18(a5),a1			;Game
        move.l	a1,d1
        and.l	#$00ffffff,d1			;Clear high bytes!
        move.l	d1,a1
        moveq	#0,d1				;Game
        rts

        xdef    KBHook
KBHook
    move.b  $bfec01,d0
    move.w  d0,-(a7)
    not.b   d0
    ror.b   #1,d0
    cmp.b   _keyexit(pc),d0
    beq.b   quit
    move.w  (a7)+,d0
    rts

quit:
    move.w  (a7)+,d0
    move.w  #1,g_quitToDos
    rts

_keyexit	dc.b	$46		;ws_keyexit = Del
        xdef    g_quitToDos
g_quitToDos:
        dc.w    0
