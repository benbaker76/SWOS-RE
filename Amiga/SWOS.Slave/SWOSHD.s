;*---------------------------------------------------------------------------
;  :Program.	Swos.asm
;  :Contents.	Slave for "SWOS 95-96/96-97" from Sensible Software
;  :Author.	Galahad of Fairlight
;  :History.	12.05.01
;  :Requires.	-
;  :Copyright.	Public Domain
;  :Language.	68000 Assembler
;  :Translator.	PhxAs
;  :To Do.
;---------------------------------------------------------------------------*

	INCLUDE	whdload.i
	INCLUDE	whdmacros.i

    IFD    BARFLY
	OUTPUT	wdh1:SWOS2/SWOS.Slave
	;OPT	O+ OG+			;enable optimizing
    ENDC

BUFFER_SIZE = $800

PROGRAM_LOCATION_OFFSET = $80000

CHIPMEMSIZE = $200000
FASTMEMSIZE = $200000

STUB_FIX_SNOOP_BUG      = $0006
STUB_FIX_MEM            = $000E
STUB_ROB_NORTHEN_LOADER = $0016
STUB_ACCESS             = $001E
STUB_KB_HOOK            = $0026

; 1MB chip + 1,5MB slow mem prog @ $D00000
; D5 07000000: fastmem: 07 = 0111 = 1.5MB
; D6 07000003: chipmem: 03 = 0011 = 1MB
; D7 00280000 : total memory

; chip 2MB: prog @ $180000
; D5 00000000: no fastmem
; D6 0000000F: chipmem: 1111 = 2MB         
; D7 00200000: total memory

; autocompute bit masks (not very useful, as the memory routine
; is so obscure and buggy that it is completely skipped)
CHIPBITS = (1<<(CHIPMEMSIZE/$80000))-1
FASTBITS = ((1<<(FASTMEMSIZE/$80000))-1)<<24
    
;======================================================================

base
		SLAVE_HEADER		;ws_Security + ws_ID
		dc.w	10		;ws_Version
		dc.w	WHDLF_NoError|WHDLF_EmulTrap|WHDLF_ClearMem	;ws_flags
		dc.l	CHIPMEMSIZE		;ws_BaseMemSize
		dc.l	0		;ws_ExecInstall
		dc.w	Start-base	;ws_GameLoader
		dc.w	_data-base		;ws_CurrentDir
		dc.w	0		;ws_DontCache
_keydebug	dc.b	0		;ws_keydebug = none
_keyexit	dc.b	$46		;ws_keyexit = Del
_expmem:
		dc.l	FASTMEMSIZE		;ws_ExpMem
		dc.w	_name-base	;ws_name
		dc.w	_copy-base	;ws_copy
		dc.w	_info-base	;ws_info

DECL_VERSION:MACRO
	dc.b	"2.3"
	IFD BARFLY
		dc.b	" "
		INCBIN	"T:date"
	ENDC
	IFD	DATETIME
		dc.b	" "
		incbin	datetime
	ENDC
	ENDM
    
_name	dc.b	'-+ Sensible World Of Soccer +-'
        IFD CHIP_ONLY
        dc.b    " (DEBUG/CHIP mode)"
        ENDC
        dc.b    0
_copy	dc.b	'1994-97 Sensible Software',0
_info	dc.b	'-------------------------',10
	dc.b	'SWOS v0.9.......94-95',10
	dc.b	'SWOS v1.0.......94-95',10
	dc.b	'SWOS v1.1.......94-95',10
	dc.b	'SWOS............95-96',10
	dc.b	'SWOS UPDATE.....95-96',10
	dc.b	'SWOS EURO96.....95-96',10
	dc.b	'SWOS v1.52 (v1).96-97',10
	dc.b	'SWOS v1.52 (v2).96-97',10
	dc.b	'-------------------------',10
	dc.b	'Version '
    DECL_VERSION
	dc.b	0
	dc.b	-1
	CNOP 0,2

_data:
	dc.b	"data",0
	; slave loads "SWOS2" program, which is designed for A1200...
	; (original SSBOOT program loads SWOS for < kick3.1+68020)
Swos.rel:
	dc.b	'SWOS2.REL',0
Swos.prg:
	dc.b	'SWOS2',0
_savedir:
	dc.b	'SAVE',0
_save_filepath:
	dc.b	'SAVE/'
_save_filename:	ds.b	14
	dc.b	"$","VER: slave "
    DECL_VERSION
	dc.b	10,0	
	even



;======================================================================
Start	;	A0 = resident loader
;======================================================================

	lea	_resload(pc),a1
	move.l	a0,(a1)			;save for later use

	; configure other expmem buffer
	lea program_location(pc),a1
	move.l  _expmem(pc),a0       
	add.l   #PROGRAM_LOCATION_OFFSET,a0
	move.l  a0,(a1)

	patch   $100,avoid_big_value

	;------------------------------------------------------
	; Load hunk executable "SWOS2" at program_location
	;------------------------------------------------------
	lea     Swos.prg(pc),a0
	move.l  program_location(pc),a1
	bsr     _LoadFileDEC           ; A0=name, A1=dest, D0=size

	; (optional) remember file size as "version" if you want
	lea     swos_version(pc),a0
	move.l  d0,(a0)

	;------------------------------------------------------
	; Relocate AmigaDOS hunk executable in-place
	;   A0 = start of executable in memory
	;   A1 = taglist (we pass ALIGN=8 to mimic LoadSeg)
	;   A2 = _resload
	;   D0 = size of relocated exe on return
	;------------------------------------------------------
	move.l  program_location(pc),a0    ; address of executable

    clr.l   -(a7)                      ; TAG_DONE
	move.l  #$10000,-(a7)              ; chip area pointer = $00010000
	pea     WHDLTAG_CHIPPTR
	pea     8                          ; value
	pea     WHDLTAG_ALIGN              ; tag
	move.l  a7,a1                      ; A1 = taglist

    move.l  _resload(pc),a2
    jsr     (resload_Relocate,a2)

    add.w   #12,a7

    ; keep size of relocated exe in reloc_size (handy for later)
    lea     reloc_size(pc),a0
    move.l  d0,(a0)

    move.w  #$2000,sr

    ;------------------------------------------------------
    ; Install callback addresses into SWOS2 stubs
    ;------------------------------------------------------
    move.l  program_location(pc),a0    ; A0 = base of relocated SWOS2
    bsr     install_callbacks

	; set registers D5-D7 to expected values
	move.l  #CHIPMEMSIZE,D7
	move.l  #FASTBITS,d5
	move.l  #CHIPBITS|FASTBITS,d6     

	;ILLEGAL

	move.l	program_location(pc),a0
	jmp	(a0)			;Execute program!
    
;-----------------------------
    
fix_snoop_bug
	MOVEA.L	#_custom,A6		;102398: 2c7c00dff000
	move.W	#$200,bplcon0(A6)	; colorbit
    rts

avoid_big_value:
	tst.w	d0
	beq.b	.fail
	cmp.w	#$50,d0
	bcs.b	.ok
.fail
	; value in D0 is bogus, this will trigger an access fault
	; clear it, the called routine will run in degraded mode, it doesn't
	; seem to change anything.
	;
	; but fix this value in memory to avoid more issues
	; this will degrade gameplay but won't crash

	move.w	#1,(-2,a0)
	addq.w	#4,a7
	MOVEM.L	(A7)+,D0-D7/A0-A6
	rts
.ok
	SUBQ.W	#1,D0			;14dfec: 5340
	rts


INSTALL_CALLBACK MACRO
    ; A0 = base of relocated SWOS2
    lea     \1(a0),a1         ; A1 -> stub (jsr 0; rts)
    lea     \2(pc),a2         ; A2 = callback address in Slave
    move.l  a2,(2,a1)         ; patch jsr operand
    ENDM

install_callbacks:
    INSTALL_CALLBACK  STUB_FIX_SNOOP_BUG,      fix_snoop_bug
    INSTALL_CALLBACK  STUB_FIX_MEM,            fix_memory_routine
    INSTALL_CALLBACK  STUB_ROB_NORTHEN_LOADER, rob_northen_loader
    INSTALL_CALLBACK  STUB_ACCESS,             access
    INSTALL_CALLBACK  STUB_KB_HOOK,            kb_hook
    rts

fix_memory_routine
    rts

rob_northen_loader:
	move.l	a3,-(a7)
	add.w	d0,d0
	lea		rob_commands_table(pc),a3
	add.w	(a3,d0.w),a3
	jsr		(a3)
	move.l	(a7)+,a3
	rts

; < A0: name
; > A0: name prepended with "SAVE/" if .TAC,.PRE,.DIY,.SEA,.CAR, .HIL file,
; and DF0: prefix removed
; else unchanged

fix_filename:
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
	lea		_save_filename(pc),a3
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
	bsr		fix_filename
	bsr	_LoadFile
	movem.l	(a7)+,d0-d7/a0-a6
	move.l	size(pc),d1
	moveq	#0,d0
	rts
	
rob_save:
	movem.l	d0-d7/a0-a6,-(a7)
	bsr		fix_filename
	move.l	d1,d0		; size
	bsr	_SaveFile
	movem.l	(a7)+,d0-d7/a0-a6
	move.l	size(pc),d1
	moveq	#0,d0
	rts
	
rob_delete:
	movem.l	d0-d7/a0-a6,-(a7)
	bsr		fix_filename
	bsr	_Deletefile
	movem.l	(a7)+,d0-d7/a0-a6
	moveq	#0,d0
	rts
	
rob_format_disk:
	moveq	#0,d0
	rts

rob_get_file_size:
	movem.l	d2-d7/a0-a6,-(a7)	
	bsr		fix_filename
	bsr		_GetFileSize
	move.l	d0,d1
	movem.l	(a7)+,d2-d7/a0-a6
	moveq	#0,d0
	rts
	
rob_list_directory:
	movem.l	d0-d7/a0-a6,-(a7)
	move.l	_resload(pc),a2
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
	lea		_savedir(pc),a0
	; a0: directory path, stripped from drive prefix
	; a1: buffer, save it
	move.l	a1,a3
	lea		listdir_buffer(pc),a1
	move.l	#BUFFER_SIZE,D0
	jsr		resload_ListFiles(a2)
	lea		size(pc),a0
	move.w	d0,(a0)				; number of files
	beq.b	.empty
	subq	#1,d0			; minus one for dbf
	
	lea		listdir_buffer(pc),a1
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
	
_flushcache:
	move.l	a2,-(a7)
	move.l	_resload(pc),a2
	jsr	resload_FlushCache(a2)
	move.l	(a7)+,a2
	rts

request:
		
; Fixes bug with Highlights play! JOTD: potential issue if A1 is in fast!!!
access:
	adda.l	$18(a5),a1			;Game
	move.l	a1,d1
	and.l	#$00ffffff,d1			;Clear high bytes!
	move.l	d1,a1
	moveq	#0,d1				;Game
	rts

kb_hook
    move.b  $bfec01,d0
    move.w  d0,-(a7)
    not.b   d0
    ror.b   #1,d0
    cmp.b   _keyexit(pc),d0
    beq.b   quit
	move.w  (a7)+,d0
    rts
    
quit
	pea	TDREASON_OK
	move.l	_resload(pc),-(a7)
	addq.l	#resload_Abort,(a7)
	rts
    
copylock:
    MOVE.L #$71583efc,(A3)
    rts
    
;---------------

_resload
		dc.l	0		;address of resident loader
_freefast:
		dc.l    0
_freechip:
		dc.l    0
size:
		dc.l	0
reloc_size:
		dc.l	0
swos_version:
		dc.l	0
program_location
    dc.l    0
listdir_buffer:
	ds.b	BUFFER_SIZE
	dc.l	0		; safety
;--------------------------------
; IN:	d0=offset d1=size d2=disk a0=dest
; OUT:	d0=success

		cnop	0,4

_GetFileSize:
		movem.l	d1/a0-a2,-(a7)
		move.l	_resload(pc),a2
		jsr	resload_GetFileSize(a2)
		movem.l	(a7)+,d1/a0-a2
		rts
_LoadFile:
		movem.l	d0-d1/a0-a2,-(a7)
		move.l	_resload(pc),a2
		jsr	resload_LoadFile(a2)
		lea	size(pc),a0
		move.l	d0,(a0)
		movem.l	(a7)+,d0-d1/a0-a2
		rts

_LoadFileDEC:
		movem.l	d1/a0-a2,-(a7)
		move.l	_resload(pc),a2
		jsr	resload_LoadFileDecrunch(a2)
		movem.l	(a7)+,d1/a0-a2
		rts
_Deletefile:
		movem.l	d1/a0-a2,-(a7)
		move.l	_resload(pc),a2
		jsr	resload_DeleteFile(a2)
		movem.l	(a7)+,d1/a0-a2
		rts
_SaveFile:
		movem.l	d0-d1/a0-a2,-(a7)
		move.l	_resload(pc),a2
		jsr	resload_SaveFile(a2)
au:		movem.l	(a7)+,d0-d1/a0-a2
		rts
;==========================================
