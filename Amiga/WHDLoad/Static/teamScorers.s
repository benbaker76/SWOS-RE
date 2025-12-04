

; ===== ResetResultSprites =====
; prototype: void __usercall ResetResultSprites()
ResetResultSprites:
                clr.w   (resultOnHalftimeSprite+SPRITE_VISIBLE).l
                clr.w   (resultAfterTheGameSprite+SPRITE_VISIBLE).l
                lea     (team1NameSprite).l,a0
                move.w  #$C1,team1NameSprite+SPRITE_IMAGEINDEX-team1NameSprite(a0)
                lea     (team2NameSprite).l,a0
                move.w  #$C2,team2NameSprite+SPRITE_IMAGEINDEX-team2NameSprite(a0)
                clr.w   (gridUpperRowLeftSprite+SPRITE_VISIBLE).l
                clr.w   (gridUpperRowRightSprite+SPRITE_VISIBLE).l
                clr.w   (gridMiddleRowLeftSprite+SPRITE_VISIBLE).l
                clr.w   (gridMiddleRowRightSprite+SPRITE_VISIBLE).l
                clr.w   (gridBottomRowLeftSprite+SPRITE_VISIBLE).l
                clr.w   (gridBottomRowRightSprite+SPRITE_VISIBLE).l
                clr.w   (team1NameSprite+SPRITE_VISIBLE).l
                clr.w   (team2NameSprite+SPRITE_VISIBLE).l
                clr.w   (team1GoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team1GoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team1TotalGoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team1TotalGoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team2GoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team2GoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team2TotalGoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team2TotalGoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team1NameSprite+SPRITE_VISIBLE).l
                clr.w   (dashSprite+SPRITE_VISIBLE).l
                lea     (team1Scorer1Sprite).l,a1
                lea     (team2Scorer1Sprite).l,a2
                lea     (team1Scorers).l,a3
                lea     (team2Scorers).l,a4
                lea     (team1ScorerSpritesWidths).l,a5
                lea     (team2ScorerSpritesWidths).l,a6
                move.w  #7,d0
loc_10B8E8:
                clr.w   SPRITE_VISIBLE(a1)
                clr.w   SPRITE_VISIBLE(a2)
                clr.w   (a3)
                clr.w   (a4)
                clr.w   (a5)+
                clr.w   (a6)+
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a1
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a2
                adda.l  #SCORERINFO_SIZE+SCORERINFO_SHIRTNUM,a3
                adda.l  #SCORERINFO_SIZE+SCORERINFO_SHIRTNUM,a4
                dbf     d0,loc_10B8E8
                bsr.w   InitDisplaySprites
                rts

; ===== ShowResult =====
; prototype: void __usercall ShowResult()
ShowResult:
                tst.w   (resultTimer).l
                beq.w   locret_10C024
                bmi.w   loc_10BADE
                cmpi.w  #30000,(resultTimer).l
                beq.s   loc_10B952
                cmpi.w  #31000,(resultTimer).l
                beq.s   loc_10B95C
                cmpi.w  #32000,(resultTimer).l
                bne.w   loc_10BAB0
                move.w  #29000,(resultTimer).l
                bra.s   loc_10B964
loc_10B952:
                move.w  #250,(resultTimer).l
                bra.s   loc_10B964
loc_10B95C:
                move.w  #150,(resultTimer).l
loc_10B964:
                cmpi.w  #ST_RESULT_ON_HALFTIME,(gameState).l
                bne.s   loc_10B976
                move.w  #1,(resultOnHalftimeSprite+SPRITE_VISIBLE).l
loc_10B976:
                cmpi.w  #ST_RESULT_AFTER_THE_GAME,(gameState).l
                bne.s   loc_10B988
                move.w  #1,(resultAfterTheGameSprite+SPRITE_VISIBLE).l
loc_10B988:
                tst.w   (dontShowScorers).l
                bne.s   loc_10B998
                tst.w   (secondLeg).l
                beq.s   loc_10B9D4
loc_10B998:
                move.w  #1,(team1TotalGoalsDigit2Sprite+SPRITE_VISIBLE).l
                move.w  (team1TotalGoals).l,d0
                ext.l   d0
                divu.w  #10,d0
                beq.s   loc_10B9B6
                move.w  #1,(team1TotalGoalsDigit1Sprite+SPRITE_VISIBLE).l
loc_10B9B6:
                move.w  #1,(team2TotalGoalsDigit2Sprite+SPRITE_VISIBLE).l
                move.w  (team2TotalGoals).l,d0
                ext.l   d0
                divu.w  #10,d0
                beq.s   loc_10B9D4
                move.w  #1,(team2TotalGoalsDigit1Sprite+SPRITE_VISIBLE).l
loc_10B9D4:
                move.w  #1,(gridUpperRowLeftSprite+SPRITE_VISIBLE).l
                move.w  #1,(gridUpperRowRightSprite+SPRITE_VISIBLE).l
                move.w  #1,(gridMiddleRowLeftSprite+SPRITE_VISIBLE).l
                move.w  #1,(gridMiddleRowRightSprite+SPRITE_VISIBLE).l
                move.w  #1,(gridBottomRowLeftSprite+SPRITE_VISIBLE).l
                move.w  #1,(gridBottomRowRightSprite+SPRITE_VISIBLE).l
                move.w  #1,(team1NameSprite+SPRITE_VISIBLE).l
                move.w  #1,(team2NameSprite+SPRITE_VISIBLE).l
                move.w  #1,(team1GoalsDigit2Sprite+SPRITE_VISIBLE).l
                tst.w   (team1GoalsDigit1).l
                beq.s   loc_10BA2C
                move.w  #1,(team1GoalsDigit1Sprite+SPRITE_VISIBLE).l
loc_10BA2C:
                move.w  #1,(team2GoalsDigit2Sprite+SPRITE_VISIBLE).l
                tst.w   (team2GoalsDigit1).l
                beq.s   loc_10BA44
                move.w  #1,(team2GoalsDigit1Sprite+SPRITE_VISIBLE).l
loc_10BA44:
                move.w  #1,(team1NameSprite+SPRITE_VISIBLE).l
                move.w  #1,(dashSprite+SPRITE_VISIBLE).l
                lea     (team1Scorer1Sprite).l,a1
                lea     (team1ScorerSpritesWidths).l,a2
                move.w  #7,d0
loc_10BA64:
                tst.w   (a2)+
                beq.s   loc_10BA80
                tst.w   (dontShowScorers).l
                bne.s   loc_10BA80
                move.w  #1,SPRITE_VISIBLE(a1)
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a1
                dbf     d0,loc_10BA64
loc_10BA80:
                lea     (team2Scorer1Sprite).l,a1
                lea     (team2ScorerSpritesWidths).l,a2
                move.w  #7,d0
loc_10BA90:
                tst.w   (a2)+
                beq.s   loc_10BAAC
                tst.w   (dontShowScorers).l
                bne.s   loc_10BAAC
                move.w  #1,SPRITE_VISIBLE(a1)
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a1
                dbf     d0,loc_10BA90
loc_10BAAC:
                bsr.w   InitDisplaySprites
loc_10BAB0:
                move.w  (lastFrameTicks).l,d0
                sub.w   d0,(resultTimer).l
                bmi.s   loc_10BAC2
                bne.w   loc_10BB96
loc_10BAC2:
                cmpi.w  #ST_RESULT_ON_HALFTIME,(gameState).l
                beq.s   loc_10BAD6
                cmpi.w  #ST_RESULT_AFTER_THE_GAME,(gameState).l
                bne.s   loc_10BADE
loc_10BAD6:
                move.w  #$7D00,(statsTimer).l
loc_10BADE:
                clr.w   (resultTimer).l
                tst.w   (team1NameSprite+SPRITE_VISIBLE).l
                beq.w   locret_10C024
                clr.w   (resultOnHalftimeSprite+SPRITE_VISIBLE).l
                clr.w   (resultAfterTheGameSprite+SPRITE_VISIBLE).l
                clr.w   (gridUpperRowLeftSprite+SPRITE_VISIBLE).l
                clr.w   (gridUpperRowRightSprite+SPRITE_VISIBLE).l
                clr.w   (gridMiddleRowLeftSprite+SPRITE_VISIBLE).l
                clr.w   (gridMiddleRowRightSprite+SPRITE_VISIBLE).l
                clr.w   (gridBottomRowLeftSprite+SPRITE_VISIBLE).l
                clr.w   (gridBottomRowRightSprite+SPRITE_VISIBLE).l
                clr.w   (team1NameSprite+SPRITE_VISIBLE).l
                clr.w   (team2NameSprite+SPRITE_VISIBLE).l
                clr.w   (team1GoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team1GoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team1TotalGoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team1TotalGoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team2GoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team2GoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team2TotalGoalsDigit2Sprite+SPRITE_VISIBLE).l
                clr.w   (team2TotalGoalsDigit1Sprite+SPRITE_VISIBLE).l
                clr.w   (team1NameSprite+SPRITE_VISIBLE).l
                clr.w   (dashSprite+SPRITE_VISIBLE).l
                lea     (team1Scorer1Sprite).l,a1
                lea     (team2Scorer1Sprite).l,a2
                move.w  #7,d0
loc_10BB76:
                clr.w   SPRITE_VISIBLE(a1)
                clr.w   SPRITE_VISIBLE(a2)
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a1
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a2
                dbf     d0,loc_10BB76
                bsr.w   InitDisplaySprites
                bra.w   locret_10C024
loc_10BB96:
                lea     (team1ScorerSpritesWidths).l,a0
                lea     (team2ScorerSpritesWidths).l,a1
                clr.w   d7
                move.w  #7,d1
loc_10BBA8:
                move.w  (a0)+,d0
                add.w   (a1)+,d0
                beq.s   loc_10BBB4
                subq.w  #7,d7
                dbf     d1,loc_10BBA8
loc_10BBB4:
                cmpi.w  #$FFF2,d7
                ble.s   loc_10BBBE
                move.w  #$FFF2,d7
loc_10BBBE:
                lea     (team1NameSprite).l,a0
                move.w  (g_cameraX).l,team1NameSprite+SPRITE_X-team1NameSprite(a0)
                addi.w  #136,SPRITE_X(a0)
                move.w  (team1NameLength).l,d0
                sub.w   d0,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                addi.w  #246,SPRITE_Y(a0)
                add.w   d7,SPRITE_Y(a0)
                addi.w  #10000,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                move.w  SPRITE_Y(a0),d0
                subi.w  #1015,d0
                lea     (gridUpperRowLeftSprite).l,a1
                move.w  (g_cameraX).l,gridUpperRowLeftSprite+SPRITE_X-gridUpperRowLeftSprite(a1)
                move.w  d0,SPRITE_Y(a1)
                move.w  #9000,SPRITE_Z(a1)
                lea     (gridUpperRowRightSprite).l,a1
                move.w  (g_cameraX).l,gridUpperRowRightSprite+SPRITE_X-gridUpperRowRightSprite(a1)
                addi.w  #168,SPRITE_X(a1)
                move.w  d0,SPRITE_Y(a1)
                move.w  #9000,SPRITE_Z(a1)
                addi.w  #32,d0
                lea     (gridMiddleRowLeftSprite).l,a1
                move.w  (g_cameraX).l,gridMiddleRowLeftSprite+SPRITE_X-gridMiddleRowLeftSprite(a1)
                move.w  d0,SPRITE_Y(a1)
                move.w  #9000,SPRITE_Z(a1)
                lea     (gridMiddleRowRightSprite).l,a1
                move.w  (g_cameraX).l,gridMiddleRowRightSprite+SPRITE_X-gridMiddleRowRightSprite(a1)
                addi.w  #168,SPRITE_X(a1)
                move.w  d0,SPRITE_Y(a1)
                move.w  #9000,SPRITE_Z(a1)
                addi.w  #32,d0
                lea     (gridBottomRowLeftSprite).l,a1
                move.w  (g_cameraX).l,gridBottomRowLeftSprite+SPRITE_X-gridBottomRowLeftSprite(a1)
                move.w  d0,SPRITE_Y(a1)
                move.w  #9000,SPRITE_Z(a1)
                lea     (gridBottomRowRightSprite).l,a1
                move.w  (g_cameraX).l,gridBottomRowRightSprite+SPRITE_X-gridBottomRowRightSprite(a1)
                addi.w  #168,SPRITE_X(a1)
                move.w  d0,SPRITE_Y(a1)
                move.w  #9000,SPRITE_Z(a1)
                lea     (team2NameSprite).l,a1
                move.w  (g_cameraX).l,team2NameSprite+SPRITE_X-team2NameSprite(a1)
                addi.w  #200,SPRITE_X(a1)
                move.w  SPRITE_Y(a0),SPRITE_Y(a1)
                move.w  #10000,SPRITE_Z(a1)
                lea     (team1GoalsDigit2Sprite).l,a0
                move.w  (g_cameraX).l,team1GoalsDigit2Sprite+SPRITE_X-team1GoalsDigit2Sprite(a0)
                addi.w  #151,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                addi.w  #241,SPRITE_Y(a0)
                add.w   d7,SPRITE_Y(a0)
                clr.w   SPRITE_Z(a0)
                addi.w  #10000,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                move.w  #SPR_BIG_0,d0
                add.w   (team1GoalsDigit2).l,d0
                move.w  d0,SPRITE_IMAGEINDEX(a0)
                lea     (team1GoalsDigit1Sprite).l,a1
                tst.w   team1GoalsDigit1Sprite+SPRITE_VISIBLE-team1GoalsDigit1Sprite(a1)
                beq.s   loc_10BD42
                move.w  SPRITE_X(a0),SPRITE_X(a1)
                subi.w  #12,SPRITE_X(a1)
                move.w  SPRITE_Y(a0),SPRITE_Y(a1)
                move.w  SPRITE_Z(a0),SPRITE_Z(a1)
                move.w  #SPR_BIG_0,d0
                add.w   (team1GoalsDigit1).l,d0
                move.w  d0,SPRITE_IMAGEINDEX(a1)
loc_10BD42:
                lea     (team1TotalGoalsDigit2Sprite).l,a0
                tst.w   team1TotalGoalsDigit2Sprite+SPRITE_VISIBLE-team1TotalGoalsDigit2Sprite(a0)
                beq.w   loc_10BDE2
                move.w  (team1TotalGoals).l,d1
                ext.l   d1
                divu.w  #$A,d1
                move.w  d1,d2
                swap    d1
                move.w  (g_cameraX).l,SPRITE_X(a0)
                addi.w  #158,SPRITE_X(a0)
                cmpi.w  #1,d1
                bne.s   loc_10BD78
                addq.w  #4,SPRITE_X(a0)
loc_10BD78:
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                addi.w  #263,SPRITE_Y(a0)
                add.w   d7,SPRITE_Y(a0)
                clr.w   SPRITE_Z(a0)
                addi.w  #10002,SPRITE_Y(a0)
                move.w  #10002,SPRITE_Z(a0)
                move.w  #SPR_SMALL_ZERO,d0
                add.w   d1,d0
                move.w  d0,SPRITE_IMAGEINDEX(a0)
                lea     (team1TotalGoalsDigit1Sprite).l,a1
                tst.w   team1TotalGoalsDigit1Sprite+SPRITE_VISIBLE-team1TotalGoalsDigit1Sprite(a1)
                beq.s   loc_10BDE2
                move.w  SPRITE_X(a0),SPRITE_X(a1)
                subq.w  #6,SPRITE_X(a1)
                cmpi.w  #1,d2
                bne.s   loc_10BDC4
                addq.w  #4,SPRITE_X(a1)
loc_10BDC4:
                move.w  SPRITE_Y(a0),SPRITE_Y(a1)
                move.w  SPRITE_Z(a0),SPRITE_Z(a1)
                subq.w  #1,SPRITE_Y(a1)
                subq.w  #1,SPRITE_Z(a1)
                move.w  #SPR_SMALL_ZERO,d0
                add.w   d2,d0
                move.w  d0,SPRITE_IMAGEINDEX(a1)
loc_10BDE2:
                lea     (team2GoalsDigit2Sprite).l,a0
                move.w  (g_cameraX).l,team2GoalsDigit2Sprite+SPRITE_X-team2GoalsDigit2Sprite(a0)
                addi.w  #173,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                addi.w  #241,SPRITE_Y(a0)
                add.w   d7,SPRITE_Y(a0)
                clr.w   SPRITE_Z(a0)
                addi.w  #10000,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                move.w  #SPR_SCROLL_ARROW_UP,d0
                add.w   (team2GoalsDigit2).l,d0
                move.w  d0,SPRITE_IMAGEINDEX(a0)
                lea     (team2GoalsDigit1Sprite).l,a1
                tst.w   team2GoalsDigit1Sprite+SPRITE_VISIBLE-team2GoalsDigit1Sprite(a1)
                beq.s   loc_10BE58
                move.w  SPRITE_X(a0),SPRITE_X(a1)
                addi.w  #12,SPRITE_X(a0)
                move.w  SPRITE_Y(a0),SPRITE_Y(a1)
                move.w  SPRITE_Z(a0),SPRITE_Z(a1)
                move.w  #SPR_SCROLL_ARROW_UP,d0
                add.w   (team2GoalsDigit1).l,d0
                move.w  d0,SPRITE_IMAGEINDEX(a1)
loc_10BE58:
                lea     (team2TotalGoalsDigit2Sprite).l,a0
                tst.w   team2TotalGoalsDigit2Sprite+SPRITE_VISIBLE-team2TotalGoalsDigit2Sprite(a0)
                beq.w   loc_10BEEE
                move.w  (team2TotalGoals).l,d1
                ext.l   d1
                divu.w  #$A,d1
                move.w  d1,d2
                swap    d1
                move.w  (g_cameraX).l,SPRITE_X(a0)
                addi.w  #171,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                addi.w  #263,SPRITE_Y(a0)
                add.w   d7,SPRITE_Y(a0)
                clr.w   SPRITE_Z(a0)
                addi.w  #10002,SPRITE_Y(a0)
                move.w  #10002,SPRITE_Z(a0)
                move.w  #SPR_SMALL_ZERO,d0
                add.w   d1,d0
                move.w  d0,SPRITE_IMAGEINDEX(a0)
                lea     (team2TotalGoalsDigit1Sprite).l,a1
                tst.w   team2TotalGoalsDigit1Sprite+SPRITE_VISIBLE-team2TotalGoalsDigit1Sprite(a1)
                beq.s   loc_10BEEE
                move.w  SPRITE_X(a0),SPRITE_X(a1)
                addq.w  #6,SPRITE_X(a0)
                cmpi.w  #1,d2
                bne.s   loc_10BED0
                subq.w  #4,SPRITE_X(a0)
loc_10BED0:
                move.w  SPRITE_Y(a0),SPRITE_Y(a1)
                move.w  SPRITE_Z(a0),SPRITE_Z(a1)
                subq.w  #1,SPRITE_Y(a1)
                subq.w  #1,SPRITE_Z(a1)
                move.w  #SPR_SMALL_ZERO,d0
                add.w   d2,d0
                move.w  d0,SPRITE_IMAGEINDEX(a1)
loc_10BEEE:
                lea     (dashSprite).l,a0
                move.w  (g_cameraX).l,dashSprite+SPRITE_X-dashSprite(a0)
                addi.w  #165,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                addi.w  #249,SPRITE_Y(a0)
                add.w   d7,SPRITE_Y(a0)
                addi.w  #10000,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                lea     (team1Scorer1Sprite).l,a0
                lea     (team1Scorers).l,a2
                lea     (team1ScorerSpritesWidths).l,a3
                move.w  #263,d1
                add.w   d7,d1
                move.w  #7,d0
loc_10BF3C:
                tst.w   (a3)+
                beq.s   loc_10BF84
                move.w  (g_cameraX).l,SPRITE_X(a0)
                addi.w  #136,SPRITE_X(a0)
                move.w  -2(a3),d2
                sub.w   d2,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                add.w   d1,SPRITE_Y(a0)
                clr.w   SPRITE_Z(a0)
                addi.w  #10000,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                addq.w  #7,d1
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a0
                adda.l  #SCORERINFO_SIZE+SCORERINFO_SHIRTNUM,a2
                dbf     d0,loc_10BF3C
loc_10BF84:
                lea     (team2Scorer1Sprite).l,a0
                lea     (team2Scorers).l,a2
                lea     (team2ScorerSpritesWidths).l,a3
                move.w  #263,d1
                add.w   d7,d1
                move.w  #7,d0
loc_10BFA0:
                tst.w   (a3)+
                beq.s   loc_10BFE0
                move.w  (g_cameraX).l,SPRITE_X(a0)
                addi.w  #200,SPRITE_X(a0)
                move.w  (g_cameraY).l,SPRITE_Y(a0)
                add.w   d1,SPRITE_Y(a0)
                clr.w   SPRITE_Z(a0)
                addi.w  #10000,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                addq.w  #7,d1
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a0
                adda.l  #SCORERINFO_SIZE+SCORERINFO_SHIRTNUM,a2
                dbf     d0,loc_10BFA0
loc_10BFE0:
                lea     (gridUpperRowLeftSprite).l,a1
                move.w  gridUpperRowLeftSprite+SPRITE_Y-gridUpperRowLeftSprite(a1),d0
                addi.w  #990,d0
                lea     (resultOnHalftimeSprite).l,a0
                move.w  (g_cameraX).l,resultOnHalftimeSprite+SPRITE_X-resultOnHalftimeSprite(a0)
                addi.w  #168,SPRITE_X(a0)
                move.w  d0,SPRITE_Y(a0)
                move.w  #10000,SPRITE_Z(a0)
                lea     (resultAfterTheGameSprite).l,a1
                move.w  SPRITE_X(a0),SPRITE_X(a1)
                move.w  SPRITE_Y(a0),SPRITE_Y(a1)
                move.w  SPRITE_Z(a0),SPRITE_Z(a1)
locret_10C024:
                rts
numScenesInHilFile:
                dc.w $0000
hilSceneNumber:
                dc.w $0000              ; scene ordinal number in hil file
                                        ; init to -1
goIntoHighlightsLoop:
                dc.w $0000              ; set if we have some highlights to play
savedCurrentHilPtr:
                dc.l 0
savedCurrentGoalPtr:
                dc.l 0
savedGoalBasePtr:
                dc.l 0
savedNextGoalPtr:
                dc.l 0

; ===== SetPitchTypeAndNumber =====
; prototype: void __usercall SetPitchTypeAndNumber()
SetPitchTypeAndNumber:
                clr.w   (numScenesInHilFile).l
                tst.w   (gamePitchTypeOrSeason).l
                bne.s   loc_10C058
                move.w  (gamePitchType).l,d1
                bpl.s   loc_10C080
                lea     pitchTypeProbabilities(pc),a0
                bra.s   loc_10C068
loc_10C058:
                lea     pitchTypeSeasonalProbabilities(pc),a0
                move.w  (gameSeason).l,d0
                mulu.w  #7,d0
                adda.l  d0,a0
loc_10C068:
                bsr.w   Rand
                mulu.w  #100,d0
                divu.w  #256,d0
                clr.w   d1
loc_10C076:
                cmp.b   (a0),d0
                blt.s   loc_10C080
                sub.b   (a0)+,d0
                addq.w  #1,d1
                bra.s   loc_10C076
loc_10C080:
                move.w  (currentGameTick).l,d0
                andi.w  #$10,d0
                lsl.w   #4,d0
                tst.w   (plg_D0_param).l
                beq.s   loc_10C0A0
                jsr     Rand
                andi.w  #$F,d0
                bra.s   loc_10C0BA
loc_10C0A0:
                move.w  (topTeamInGame+TEAMGAME_TEAMNAME).l,d0
                move.w  (topTeamInGame+TEAMGAME_PRSHIRTCOL).l,d2
                eor.w   d2,d0
                move.w  (topTeamInGame+TEAMGAME_PRSHORTSCOL).l,d2
                eor.w   d2,d0
                andi.w  #$F,d0
loc_10C0BA:
                lea     (pitchNumberProbabilities).l,a0
                move.b  (a0,d0.w),d0
                lsl.w   #8,d0
                tst.w   (g_trainingGame).l
                beq.s   loc_10C0D2
                move.w  #$500,d0
loc_10C0D2:
                add.w   d0,d1
                move.w  d1,(pitchNumberAndType).l
                rts
pitchNumberProbabilities:
                dc.b $00,$00,$00,$00,$00,$01,$01,$01,$01,$01,$04,$04,$02,$02,$03,$03 ; probabilities:
                                        ; pitch 1 - 31,25%
                                        ; pitch 2 - 31,25%
                                        ; pitch 3 - 12,5%
                                        ; pitch 4 - 12,5%
                                        ; pitch 5 - 12,5%

; ===== CopyTeamsAndHeader =====
; prototype: void __usercall CopyTeamsAndHeader()
; Copies left and right team from higlight file to
; their in-game stuctures, and copies game titles
; to corresponding arrays.
CopyTeamsAndHeader:
                move.w  (hilNumGoals).l,(numScenesInHilFile).l
                move.w  (hilPitchNumber).l,(pitchNumberAndType).l
                lea     (topTeamInGame).l,a0
                lea     (bottomTeamInGame).l,a1
                lea     ((hilFileBuffer+8)).l,a2
                move.w  #1017,d0
loc_10C116:
                move.b  1018(a2),(a1)+
                move.b  (a2)+,(a0)+
                dbf     d0,loc_10C116
                lea     (gameName).l,a0
                lea     (gameRound).l,a1
                lea     (hilGameName).l,a2
                lea     (hilGameRound).l,a3
                move.w  #39,d0
loc_10C13C:
                move.b  (a2)+,(a0)+
                move.b  (a3)+,(a1)+
                dbf     d0,loc_10C13C
                rts

; ===== SetHilFileHeader =====
; prototype: void __usercall SetHilFileHeader()
SetHilFileHeader:
                move.l  (kHilFileSig).l,(hilFileBuffer).l
                move.l  #192254,d0      ; happens to be the maximum hil file size
                move.l  d0,(hilFileBuffer+4).l
                lea     (topTeamInGame).l,a0
                lea     (bottomTeamInGame).l,a1
                lea     ((hilFileBuffer+8)).l,a2
                move.w  #1017,d0
loc_10C172:
                move.b  (a1)+,1018(a2)
                move.b  (a0)+,(a2)+
                dbf     d0,loc_10C172
                lea     (gameName).l,a0
                lea     (gameRound).l,a1
                lea     (hilGameName).l,a2
                lea     (hilGameRound).l,a3
                move.w  #39,d0
loc_10C198:
                move.b  (a0)+,(a2)+
                move.b  (a1)+,(a3)+
                dbf     d0,loc_10C198
                move.w  numScenesInHilFile(pc),(hilNumGoals).l
                move.w  (statsTeam1Goals).l,(hilTeam1Goals).l
                move.w  (statsTeam2Goals).l,(hilTeam2Goals).l
                move.w  (pitchNumberAndType).l,(hilPitchNumber).l
                move.w  (gameMaxSubstitutes).l,(hilMaxSubstitutes).l
                rts
kHilFileSig:
                dc.l $0000000C          ; every *.hil file starts with this dword

; ===== SaveHighlightsPointers =====
; prototype: void __usercall SaveHighlightsPointers()
; Saves pointers to highlight buffers.
SaveHighlightsPointers:
                tst.w   (numScenesInHilFile).l
                beq.w   locret_10C220
                move.w  #1,(normalReplayRunning).l
                move.l  (goalBasePtr).l,(savedGoalBasePtr).l
                move.l  (nextGoalPtr).l,(savedNextGoalPtr).l
                move.l  (currentHilPtr).l,(savedCurrentHilPtr).l
                move.l  (currentGoalPtr).l,(savedCurrentGoalPtr).l
                move.w  #1,(goIntoHighlightsLoop).l
                move.w  #$FFFF,(hilSceneNumber).l
locret_10C220:
                rts

; ===== RestoreHighlightPointers =====
; prototype: void __usercall RestoreHighlightPointers()
RestoreHighlightPointers:
                clr.w   (normalReplayRunning).l
                move.l  savedGoalBasePtr(pc),(goalBasePtr).l
                move.l  savedNextGoalPtr(pc),(nextGoalPtr).l
                move.l  savedCurrentHilPtr(pc),(currentHilPtr).l
                move.l  savedCurrentGoalPtr(pc),(currentGoalPtr).l
                clr.w   (goIntoHighlightsLoop).l
                rts

; ===== FadeAndSaveHighlightScene =====
; prototype: void __usercall FadeAndSaveHighlightScene()
FadeAndSaveHighlightScene:
                jsr     FadeOutToBlack
                jsr     SaveHighlightScene
                jsr     FadeIn
                rts

; ===== SaveHighlightScene =====
; prototype: void __usercall SaveHighlightScene()
; Maximum number of highlights is 10. If there is no room,
; overwrite oldest highlight.
SaveHighlightScene:
                move.w  #10,d0
                beq.w   locret_10C2F6
                cmpi.w  #10,(numScenesInHilFile).l
                bne.s   loc_10C2A0
                move.w  #8,d1
                bmi.s   loc_10C29A
                lea     (inGameHilBuffer).l,a0
                lea     (hilStartOfGoalsBuffer).l,a1
                move.w  #8,d1
loc_10C28C:
                move.w  #4749,d0
loc_10C290:
                move.l  (a0)+,(a1)+
                dbf     d0,loc_10C290
                dbf     d1,loc_10C28C
loc_10C29A:
                subq.w  #1,(numScenesInHilFile).l
loc_10C2A0:
                clr.l   d0
                movea.l (currentHilPtr).l,a0
loc_10C2A8:
                cmpi.l  #19000,d0
                beq.s   locret_10C2F6
                addq.l  #4,d0
                addq.l  #4,a0
                cmpa.l  (nextGoalPtr).l,a0
                bne.s   loc_10C2C2
                movea.l (goalBasePtr).l,a0
loc_10C2C2:
                btst    #7,(a0)
                beq.s   loc_10C2A8
                lea     (hilStartOfGoalsBuffer).l,a1
                move.w  numScenesInHilFile(pc),d0
                mulu.w  #19000,d0
                adda.l  d0,a1
                move.w  #4749,d0
loc_10C2DC:
                move.l  (a0)+,(a1)+
                cmpa.l  (nextGoalPtr).l,a0
                bne.s   loc_10C2EC
                movea.l (goalBasePtr).l,a0
loc_10C2EC:
                dbf     d0,loc_10C2DC
                addq.w  #1,(numScenesInHilFile).l
locret_10C2F6:
                rts

; ===== InitCurrentGoalHighlight =====
; prototype: void __usercall InitCurrentGoalHighlight()
InitCurrentGoalHighlight:
                movea.l (goalBasePtr).l,a0
                move.w  #4749,d0        ; 19000 / 4 - 1
loc_10C302:
                clr.l   (a0)+
                dbf     d0,loc_10C302
                move.l  (goalBasePtr).l,(currentHilPtr).l
                clr.w   (replayState).l
                move.w  #1,(throwInDeadVar).l
                rts

; ===== ThrowInDeadProc =====
; prototype: void __usercall ThrowInDeadProc()
ThrowInDeadProc:
                move.w  #1,(throwInDeadVar).l
                rts
                movea.l (goalBasePtr).l,a0
                move.w  #$128D,d0
loc_10C336:
                clr.l   (a0)+
                dbf     d0,loc_10C336
                move.l  (goalBasePtr).l,(currentHilPtr).l
                clr.w   (replayState).l
                rts

; ===== SaveCoordinatesForHighlights =====
; prototype: void __usercall SaveCoordinatesForHighlights(__int16 spriteIndexOrMarker@<d0>, unsigned __int16 x@<d4>, unsigned __int16 y@<d5>)
; in:
;      D0 - >= 0 - sprite index
;           = -2 - mark end of the segment with -1
;              < 0 - (usually -1) beginning of frame
;      D4 - sprite x coordinate (or camera if D0 < 0)
;      D5 - sprite y coordinate (or camera if D0 < 0)
; 
; Saves current sprite coordinate for highlights.
SaveCoordinatesForHighlights:
                movea.l (currentHilPtr).l,a1
                tst.w   d0
                bmi.s   loc_10C386
                moveq   #10,d3
                lsl.l   d3,d0
                andi.w  #$3FF,d4
                or.w    d4,d0
                lsl.l   d3,d0
                andi.w  #$3FF,d5
                or.w    d5,d0
                bclr    #$1F,d0
                move.l  d0,(a1)+
                cmpa.l  (nextGoalPtr).l,a1
                bne.s   loc_10C37E
                movea.l (goalBasePtr).l,a1
loc_10C37E:
                move.l  a1,(currentHilPtr).l
                rts
loc_10C386:
                cmpi.w  #$FFFE,d0
                bne.s   loc_10C394
                move.l  #$FFFFFFFF,(a1)
                rts
loc_10C394:
                bset    #$F,d4
                move.w  d4,(a1)+
                move.w  d5,(a1)+
                bsr.w   IncrementHilBufferPointer
                move.l  a1,(currentHilPtr).l
                move.w  (team1TotalGoals).l,(a1)+
                move.w  (team2TotalGoals).l,(a1)+
                bsr.w   IncrementHilBufferPointer
                move.w  (animPatternsState).l,(a1)+
                move.w  (animPatternsState).l,(a1)+
                bsr.s   IncrementHilBufferPointer
                move.l  a1,(currentHilPtr).l
                move.l  #$FFFFFFFF,(a1)
                rts

; ===== IncrementHilBufferPointer =====
; prototype: unsigned __int8 *__usercall IncrementHilBufferPointer@<a1>(unsigned __int8 *cur@<a1>)
; out:
;      A1 -> current position in hil buffer
IncrementHilBufferPointer:
                cmpa.l  (nextGoalPtr).l,a1
                bne.s   locret_10C3E0
                movea.l (goalBasePtr).l,a1
locret_10C3E0:
                rts

; ===== DrawReplayFrame =====
; prototype: void __usercall DrawReplayFrame()
DrawReplayFrame:
                movea.l (currentGoalPtr).l,a0
                cmpi.w  #1,(replayState).l
                bne.w   loc_10C434
                move.w  #2,(replayState).l
                move.w  (g_cameraX).l,(savedCameraX).l
                move.w  (g_cameraY).l,(savedCameraY).l
                move.l  (a0),d1
                bclr    #$1F,d1
                move.l  d1,d2
                swap    d1
                movem.l d0-d7/a0-a6,-(sp)
                jsr     ResetAnimatedPatternsForBothTeams
                movem.l (sp)+,d0-d7/a0-a6
                movem.l a0,-(sp)
                bsr.w   ReplayUpdateCameraAndSwapBuffers
                movem.l (sp)+,a0
loc_10C434:
                move.l  (a0)+,d0
                btst    #$1F,d0
                beq.s   loc_10C494
                bsr.w   ValidateHilPointerAdd
                bclr    #$1F,d0
                move.l  d0,d1
                swap    d1
                move.w  d0,d2
                movem.l a0,-(sp)
                jsr     MoveView
                movem.l (sp)+,a0
                move.w  (a0)+,(hilLeftTeamGoals).l
                move.w  (a0)+,(hilRightTeamGoals).l
                bsr.w   ValidateHilPointerAdd
                move.w  (a0)+,(animPatternsState).l
                move.w  (a0)+,(animPatternsState).l
                bsr.w   ValidateHilPointerAdd
                movem.l d0-d7/a0-a6,-(sp)
                jsr     DrawAnimatedPatterns
                movem.l (sp)+,d0-d7/a0-a6
                move.l  (a0)+,d0
                cmpi.l  #$FFFFFFFF,d0
                bne.w   loc_10C4D0
                bra.s   loc_10C4C4
loc_10C494:
                bsr.w   ValidateHilPointerAdd
                move.l  d0,d1
                moveq   #$C,d3
                lsl.l   d3,d1
                moveq   #$16,d3
                asr.l   d3,d1
                move.l  d0,d2
                lsl.l   d3,d2
                asr.l   d3,d2
                moveq   #$14,d3
                lsr.l   d3,d0
                movem.l a0,-(sp)
                jsr DarkenRectangle(pc)
                movem.l (sp)+,a0
                move.l  (a0)+,d0
                cmpi.l  #$FFFFFFFF,d0
                bne.w   loc_10C4D0
loc_10C4C4:
                clr.w   (replayState).l
                rts
                bra.w   loc_10C4E2
loc_10C4D0:
                btst    #$1F,d0
                beq.s   loc_10C494
                subq.l  #4,a0
                bsr.w   ValidateHilPointerSub
                move.l  a0,(currentGoalPtr).l
loc_10C4E2:
                tst.w   (normalReplayRunning).l
                bne.s   loc_10C50E
                move.w  (currentGameTick).l,d0
                lsr.w   #1,d0
                andi.w  #$1F,d0
                addi.w  #SPR_REPLAY_FRAME_00,d0
                move.w  #$B,d1
                move.w  #$E,d2
                movem.l a0,-(sp)
                jsr DarkenRectangle(pc)
                movem.l (sp)+,a0
loc_10C50E:
                tst.w   (normalReplayRunning).l
                beq.w   loc_10C5BC
                movem.l d0-d3/a0,-(sp)
                move.w  #$D,d1
                move.w  #$D,d2
                addq.w  #4,d1
                addq.w  #4,d2
                move.w  (hilLeftTeamGoals).l,d3
                ext.l   d3
                divu.w  #$A,d3
                beq.s   loc_10C54C
                move.w  d3,d0
                addi.w  #SPR_BIG_0,d0
                movem.l d1-d3/a0,-(sp)
                jsr DarkenRectangle(pc)
                movem.l (sp)+,d1-d3/a0
                addi.w  #$C,d1
loc_10C54C:
                swap    d3
                move.w  d3,d0
                addi.w  #SPR_BIG_0,d0
                movem.l d1-d2/a0,-(sp)
                jsr DarkenRectangle(pc)
                movem.l (sp)+,d1-d2/a0
                addi.w  #$F,d1
                addq.w  #8,d2
                move.w  #$C3,d0
                movem.l d1-d2/a0,-(sp)
                jsr     DarkenRectangle
                movem.l (sp)+,d1-d2/a0
                subq.w  #8,d2
                addq.w  #8,d1
                move.w  (hilRightTeamGoals).l,d3
                ext.l   d3
                divu.w  #$A,d3
                beq.s   loc_10C5A2
                move.w  d3,d0
                addi.w  #SPR_SCROLL_ARROW_UP,d0
                movem.l d1-d3/a0,-(sp)
                jsr     DarkenRectangle
                movem.l (sp)+,d1-d3/a0
                addi.w  #$C,d1
loc_10C5A2:
                swap    d3
                move.w  d3,d0
                addi.w  #SPR_SCROLL_ARROW_UP,d0
                movem.l d1-d2/a0,-(sp)
                jsr     DarkenRectangle
                movem.l (sp)+,d1-d2/a0
                movem.l (sp)+,d0-d3/a0
loc_10C5BC:
                cmpi.w  #3,(replayState).l
                bne.s   locret_10C5E4
                tst.w   (paused).l
                bne.s   locret_10C5E4
                move.w  #1,d1
loc_10C5D2:
                move.w  (currentGameTick).l,d0
loc_10C5D8:
                cmp.w   (currentGameTick).l,d0
                beq.s   loc_10C5D8
                dbf     d1,loc_10C5D2
locret_10C5E4:
                rts
                clr.w   (replayState).l
                rts

; ===== ValidateHilPointerAdd =====
; prototype: unsigned __int8 *__usercall ValidateHilPointerAdd@<a0>(unsigned __int8 *p@<a0>)
; in:
;      A0 - current pointer in hil buffer, possibly out of bounds
; out:
;      A0 - pointer guaranteed to point in hil buffer
; 
; Checks if it was safe to increment pointer. If not reset pointer to start of scene buffer.
ValidateHilPointerAdd:
                cmpa.l  (nextGoalPtr).l,a0
                bne.s   locret_10C5FC
                movea.l (goalBasePtr).l,a0
locret_10C5FC:
                rts

; ===== ValidateHilPointerSub =====
; prototype: unsigned __int8 *__usercall ValidateHilPointerSub@<a0>(unsigned __int8 *p@<a0>)
; in:
;      A0 - current pointer in hil buffer
; 
; Check is it safe to decrement pointer.
ValidateHilPointerSub:
                cmpa.l  (goalBasePtr).l,a0
                bcc.s   locret_10C60C
                movea.l (nextGoalPtr).l,a0
locret_10C60C:
                rts

; ===== ReplayUpdateCameraAndSwapBuffers =====
; prototype: void __usercall ReplayUpdateCameraAndSwapBuffers()
ReplayUpdateCameraAndSwapBuffers:
                movem.l d1-d2,-(sp)
                jsr     SetCameraCoordinates
                movem.l (sp)+,d1-d2
                movem.l d1-d2,-(sp)
                jsr     InitCameraMoveView
                movem.l (sp)+,d1-d2
                movem.l d1-d2,-(sp)
                jsr     SwapBuffersAndCameraViewState
                movem.l (sp)+,d1-d2
                movem.l d1-d2,-(sp)
                jsr     InitCameraMoveView
                movem.l (sp)+,d1-d2
                rts

; ===== HandleInstantReplayStateSwitch =====
; prototype: void __usercall HandleInstantReplayStateSwitch()
HandleInstantReplayStateSwitch:
                tst.w   (replayState).l
                bne.s   loc_10C688
                clr.l   d0
                movea.l (currentHilPtr).l,a0
loc_10C658:
                cmpi.l  #19000,d0
                beq.s   locret_10C686
                addq.l  #4,d0
                addq.l  #4,a0
                cmpa.l  (nextGoalPtr).l,a0
                bne.s   loc_10C672
                movea.l (goalBasePtr).l,a0
loc_10C672:
                btst    #7,(a0)
                beq.s   loc_10C658
                move.l  a0,(currentGoalPtr).l
                move.w  #1,(replayState).l
locret_10C686:
                rts
loc_10C688:
                cmpi.w  #3,(replayState).l
                beq.s   loc_10C69E
                cmpi.w  #2,(replayState).l
                beq.s   loc_10C6A8
                rts
loc_10C69E:
                move.w  #2,(replayState).l
                rts
loc_10C6A8:
                move.w  #3,(replayState).l
                rts

; ===== RestoreCameraPosition =====
; prototype: void __usercall RestoreCameraPosition()
RestoreCameraPosition:
                clr.w   (replayState).l
                move.w  (savedCameraX).l,d1
                move.w  (savedCameraY).l,d2
                movem.l d0-d7/a0-a6,-(sp)
                jsr     ResetAnimatedPatternsForBothTeams
                movem.l (sp)+,d0-d7/a0-a6
                bsr.w   ReplayUpdateCameraAndSwapBuffers
                rts

; ===== GoalScored =====
; prototype: void __usercall GoalScored(__int16 scoringTeam@<d0>, struct Sprite *scorerSprite@<a0>)
; in:
;      D0  - number of team that scored (1 or 2)
;      A0 -> in-game sprite of the player which scored
; 
; Updates goal variables. Puts name of scorer and minute into scorers list.
; If the goal list is too long, it will be broken into up to 8 lines.
; Each line is one sprite. Skips result sprites updating if it's penalty shootout.
GoalScored:
                move.w  #1,(goalScored).l
                move.w  #1,(runSlower).l
                move.w  d0,(lastTeamScoredNumber).l
                move.l  a0,(lastPlayerScored).l
                move.l  a0,(currentScorer).l
                lea     (topTeamInGame).l,a3
                cmpi.w  #1,(a0)
                beq.s   select_teamdata_by_scorer_side
                lea     (bottomTeamInGame).l,a3
select_teamdata_by_scorer_side:
                lea     (topTeamData).l,a2
                cmpa.l  topTeamData+TEAMGENERALINFO_INGAMETEAMPTR-topTeamData(a2),a3
                beq.s   save_lastTeamScored_ptr
                lea     (bottomTeamData).l,a2
save_lastTeamScored_ptr:
                move.l  a2,(lastTeamScored).l ; A3 -> in-game team, A2 -> team general info
                cmpi.w  #2,d0
                beq.s   inc_team2_goal_counters
                cmpi.w  #99,(team1TotalGoals).l ; can't register more than 99 goals...
                beq.w   goal_scored_exit
                tst.w   (playingPenalties).l
                beq.s   inc_team1_goal_counters
                addq.w  #1,(team1PenaltyGoals).l
                bra.w   update_team1_scoreboard
inc_team1_goal_counters:
                addq.w  #1,(team1TotalGoals).l
update_team1_scoreboard:
                addq.w  #1,(statsTeam1Goals).l
                addq.w  #1,(team1GoalsDigit2).l
                cmpi.w  #10,(team1GoalsDigit2).l
                bne.s   skip_if_penalties
                addq.w  #1,(team1GoalsDigit1).l
                clr.w   (team1GoalsDigit2).l
                bra.s   skip_if_penalties
inc_team2_goal_counters:
                cmpi.w  #99,(team2TotalGoals).l
                beq.w   goal_scored_exit
                tst.w   (playingPenalties).l
                beq.s   inc_team2_total_goals
                addq.w  #1,(team2PenaltyGoals).l
                bra.w   update_team2_scoreboard
inc_team2_total_goals:
                addq.w  #1,(team2TotalGoals).l
update_team2_scoreboard:
                addq.w  #1,(statsTeam2Goals).l
                addq.w  #1,(team2GoalsDigit2).l
                cmpi.w  #10,(team2GoalsDigit2).l
                bne.s   skip_if_penalties
                addq.w  #1,(team2GoalsDigit1).l
                clr.w   (team2GoalsDigit2).l
skip_if_penalties:
                tst.w   (playingPenalties).l
                bne.w   goal_scored_exit
                cmpa.l  #0,a0           ; A0 -> player which scored
                bne.s   determine_goal_type
                move.w  #9,(panicReasonCode).l
                jsr     PanicHaltLoop
determine_goal_type:
                clr.w   d1              ; regular goal (0)
                cmp.w   (a0),d0
                beq.s   apply_penalty_override
                move.w  #GT_OWN_GOAL,d1 ; own goal (2)
apply_penalty_override:
                tst.w   (penalty).l
                beq.s   select_scorer_tables_by_team
                move.w  #GT_PENALTY,d1  ; penalty goal (1)
select_scorer_tables_by_team:
                cmpi.w  #1,d0
                bne.s   team2_branch_select_tables
                lea     (team1Scorers).l,a3
                lea     (team1Scorer1Sprite).l,a4
                lea     (team1ScorerSpritesWidths).l,a6
                cmpi.w  #GT_OWN_GOAL,d1
                beq.s   set_team_ptrs_own_goal_order
set_team_ptrs_normal_order:
                movea.l (topTeamPtr).l,a2
                movea.l (bottomTeamPtr).l,a1
                bra.s   finalize_team_ptr_selection
team2_branch_select_tables:
                lea     (team2Scorers).l,a3
                lea     (team2Scorer1Sprite).l,a4
                lea     (team2ScorerSpritesWidths).l,a6
                cmpi.w  #GT_OWN_GOAL,d1
                beq.s   set_team_ptrs_normal_order
set_team_ptrs_own_goal_order:
                movea.l (bottomTeamPtr).l,a2
                movea.l (topTeamPtr).l,a1
finalize_team_ptr_selection:
                move.w  2(a0),d0        ; A0 -> player which scored
                                        ; D0 = shirt number of the player that scored
                cmpi.w  #GT_OWN_GOAL,d1
                bne.s   prep_scorer_index_and_counts
                addq.b  #1,TEAMGAME_NUMOWNGOALS(a1)
                clr.l   (lastPlayerScored).l
prep_scorer_index_and_counts:
                subq.w  #1,d0
                mulu.w  #PLAYERINFO_SIZE+PLAYERINFO_SKIP,d0
                cmpi.w  #GT_OWN_GOAL,d1
                beq.s   compute_scorer_entry_key
                addq.b  #1,PLAYERINFOHEADER_GOALSSCORED(a2,d0.w)
compute_scorer_entry_key:
                move.b  PLAYERINFOHEADER_SHIRTNUMBER(a2,d0.w),d0
                ext.w   d0
                cmpi.w  #GT_OWN_GOAL,d1
                bne.s   init_scorer_search
                addi.w  #100,d0         ; this is to differentiate a player that scored own goal from a guy with the same
                                        ; number in the opposite team (since own-goals appear under the opponent's goals)
init_scorer_search:
                clr.w   d7              ; current sprite index that we check if it's free
                move.w  #7,d2           ; 8 sprites (max)
scan_scorer_slots:
                tst.w   (a3)
                beq.s   init_scorer_slot_if_empty
                cmp.w   (a3),d0
                beq.s   select_scorer_sprite_block
                add.w   SCORERINFO_NUMSPRITESTAKEN(a3),d7 ; this slot is taken by another scorer, skip all his sprites
                cmpi.w  #8,d7           ; 8 sprites is maximum
                bcc.w   goal_scored_exit_early
                adda.l  #SCORERINFO_SIZE+SCORERINFO_SHIRTNUM,a3 ; move to next scorer
                dbf     d2,scan_scorer_slots
                bra.w   goal_scored_exit_early
init_scorer_slot_if_empty:
                clr.w   SCORERINFO_NUMGOALS(a3)
                move.w  #1,SCORERINFO_NUMSPRITESTAKEN(a3)
select_scorer_sprite_block:
                move.w  d7,d6
                mulu.w  #SPRITE_SIZE+SPRITE_TEAMNUMBER,d6
                lea     (a4,d6.w),a5
                move.w  SCORERINFO_NUMSPRITESTAKEN(a3),d6
                subq.w  #1,d6
                movea.l a3,a1
                move.w  d0,(a1)
                move.w  SCORERINFO_NUMGOALS(a1),d0
                cmpi.w  #10,d0
                beq.w   goal_scored_exit_early
                addq.w  #1,SCORERINFO_NUMGOALS(a1)
                mulu.w  #SCORERINFO_GOALS,d0
                move.w  d1,SCORERINFO_GOALS(a1,d0.w)
                move.l  gameTime(pc),SCORERINFO_GOALS+GOALINFO_TIME(a1,d0.w)
                addi.b  #'0',SCORERINFO_GOALS+GOALINFO_TIME+1(a1,d0.w)
                addi.b  #'0',SCORERINFO_GOALS+GOALINFO_TIME+2(a1,d0.w)
                addi.b  #'0',SCORERINFO_GOALS+GOALINFO_TIME+3(a1,d0.w)
                move.w  SPRITE_IMAGEINDEX(a5),d4
                move.w  d4,d0
                movem.l d4/d6-d7/a0-a6,-(sp)
                jsr     HWSprite_LoadFromSpriteGraphics
                movem.l (sp)+,d4/d6-d7/a0-a6
                move.w  SPRITE_PLAYERORDINAL(a0),d0
                subq.w  #1,d0
                lsl.w   #1,d0
                lea     (ingameTeamPlayerOffsets).l,a0
                move.w  (a0,d0.w),d0
                lea     PLAYERINFOHEADER_SHORTNAME(a2,d0.w),a0
                tst.b   (a0)
                beq.s   skip_initials_in_player_name
                tst.b   1(a0)
                beq.s   skip_initials_in_player_name
                cmpi.b  #'.',1(a0)
                bne.s   skip_initials_in_player_name
                cmpi.b  #' ',2(a0)
                bne.s   skip_initials_in_player_name
                addq.l  #3,a0
skip_initials_in_player_name:
                clr.w   d1
                clr.w   d2
                move.l  a1,-(sp)
                lea     (smallCharsTable).l,a1
                move.w  #2,d3
                movem.l d2/d4/d6-d7/a1/a3-a6,-(sp)
                bsr.w   Text2Sprite
                movem.l (sp)+,d2/d4/d6-d7/a1/a3-a6
                movea.l (sp)+,a1
                addq.w  #5,d1           ; make some space between name and goal list
                move.w  SCORERINFO_NUMGOALS(a3),d5
                subq.w  #1,d5           ; D5 = last goal index (check if last to skip comma)
write_time_field_loop:
                lea     (alreadyScoredTable).l,a0 ; has comma attached to strings
                tst.w   d5
                bne.s   select_time_format_entry
                lea     (firstGoalScoredTable).l,a0
select_time_format_entry:
                move.w  SCORERINFO_GOALS+GOALINFO_GOALTYPE(a1),d0 ; A1 -> current ScorerInfo + GoalInfo
                lsl.w   #2,d0
                movea.l (a0,d0.w),a0    ; A0 -> goal placeholder string to fill with time
                move.l  GOALINFO_TIME+6(a1),(a0)
                addq.l  #1,a0           ; skip unused byte
                cmpi.b  #$30,(a0)       ; '0'; find first non-zero digit
                                        ; find first non-zero digit
                bne.s   render_time_substring
                addq.l  #1,a0
                cmpi.b  #$30,(a0)       ; '0'
                bne.s   render_time_substring
                addq.l  #1,a0
render_time_substring:
                movem.l a1,-(sp)
                lea     (smallCharsTable).l,a1
                move.w  #2,d3
                movem.l d2/d4-d7/a0-a1/a3-a6,-(sp)
                bsr.w   Text2Sprite
                movem.l (sp)+,d2/d4-d7/a0-a1/a3-a6
                movem.l (sp)+,a1
                beq.w   advance_to_next_time_field ; fits ok
                move.w  d7,d0           ; next scorer sprite index, need one more sprite
                lsl.w   #1,d0
                move.w  d1,(a6,d0.w)    ; A6 -> scorer sprite widths
                addq.w  #1,d7
                cmpi.w  #8,d7
                beq.w   goal_scored_exit_early
                subq.w  #1,d6
                bpl.w   advance_row_cursor
                addq.w  #1,SCORERINFO_NUMSPRITESTAKEN(a3)
                move.l  a3,-(sp)
                lea     660(a4),a2      ; 6 * sizeof(Sprite)
                lea     12(a6),a3       ; A3 -> width of 2nd to last sprite
                move.w  SPRITE_IMAGEINDEX+$6E(a2),d4 ; picture index of last sprite
shift_scorer_rows_down:
                cmpa.l  a5,a2           ; A5 -> text scorer sprite
                                        ; shift everything one place right, start from 2nd last sprite down to current
                bls.s   finalize_row_shift
                move.w  SPRITE_IMAGEINDEX(a2),SPRITE_IMAGEINDEX+$6E(a2)
                move.w  (a3),2(a3)      ; shift width
                suba.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a2
                subq.w  #2,a3
                bra.s   shift_scorer_rows_down
finalize_row_shift:
                movea.l (sp)+,a3        ; we shifted out last row, as we need more space for this scorer
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a5
                move.w  d4,SPRITE_IMAGEINDEX(a5) ; go to next sprite
                bra.s   load_row_sprite_gfx
advance_row_cursor:
                adda.l  #SPRITE_SIZE+SPRITE_TEAMNUMBER,a5 ; point to next scorer sprite
                move.w  SPRITE_IMAGEINDEX(a5),d4
load_row_sprite_gfx:
                move.w  d4,d0
                movem.l d2/d4-d7/a0-a1/a3-a6,-(sp)
                jsr     HWSprite_LoadFromSpriteGraphics
                movem.l (sp)+,d2/d4-d7/a0-a1/a3-a6
                clr.w   d1              ; reset x coordinate, start from left edge
                bra.w   write_time_field_loop
advance_to_next_time_field:
                addq.l  #6,a1
                dbf     d5,write_time_field_loop
                move.w  d7,d0
                lsl.w   #1,d0
                move.w  d1,(a6,d0.w)    ; D1 -> current x from concatenating sprites
                                        ; A6 -> scorer sprites widths, team 1 or 2
                                        ; write width
goal_scored_exit:
                rts
goal_scored_exit_early:
                rts

...
; ScorerInfo[8]
team1Scorers:
				dc.b 528
; ScorerInfo[8]
team2Scorers:
				dc.b 528
team1ScorerSpritesWidths:
                dc.w 0,0,0,0,0,0,0,0
team2ScorerSpritesWidths:
                dc.w 0,0,0,0,0,0,0,0
