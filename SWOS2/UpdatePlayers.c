/*
 * Auto-generated call graph export
 * Start: UpdatePlayers
 * Date : 2026-01-08 19:41:02
 */

/* ===================== INCLUDES ===================== */
#include <stdint.h>
#include <stdbool.h>
#include "LocalTypes.h"
#include "Data.h"

/* ===================== PROTOTYPES ===================== */

void __usercall PanicHaltLoop(void);
ushort __usercall Player1StatusProc(void);
ushort __usercall Player2StatusProc(void);
void __usercall FadeIn(void);
void __usercall FadeOutToBlack(void);
void __usercall InitDisplaySprites(void);
void __usercall SortSprites(void);
void __usercall WaitForVSync(void);
ushort __usercall GetTextWidth(char * text, CharTable * charsTable);
short __usercall DrawMenuText(ushort x, ushort y, ushort color, char * text, CharTable * chars);
short __usercall DrawMenuTextCentered(ushort x_center, ushort y, ushort color, char * text, CharTable * chars);
void __usercall BlitStringToFrontBuffer(ushort spriteIndex, ushort x, ushort y, ushort planeMask);
void __usercall PlayPenaltySample(void);
void __usercall PlayGoodPassSample(void);
void __usercall PlayKickSample(void);
void __usercall GateKickSampleAndCrowd(short channel, short sfxId);
void __usercall PlayFoulWhistleSample(void);
void __usercall PlayMissGoalSample(void);
void __usercall PlayPenalty(void);
void __usercall PlayGameStateWhistleSample(void);
void __usercall nullsub_6(void);
void __usercall HandleKickSampleAndCrowd(short mode, short sfxId);
undefined unknown PlaySample(void);
void __usercall CrowdTickJump(uint channel, uint waveId);
void __usercall j_AudioApplyPresetToChannels(uint presetId);
short __usercall CalculateDeltaXAndY(short speed, short destX, short destY, short curX, short curY);
void __usercall SetPlayerAnimationTableAndPictureIndex(AnimTable * animTable, Sprite * player);
void __usercall SetPlayerAnimationTable(AnimTable * animTable, Sprite * player);
void __usercall ActivateReferee(void);
void __usercall InitRefereeAnimationTable(AnimTable * animTable);
void __usercall ThrowInDeadProc(void);
ushort __usercall Rand(void);
void __usercall DoPass(Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerKickingBall(Sprite * player, TeamGeneralInfo * team);
void __usercall CalculateIfPlayerWinsBall(ushort dir, Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerTackledTheBallWeak(Sprite * player, TeamGeneralInfo * team);
void __usercall SetPlayerDowntimeAfterTackle(Sprite * player, TeamGeneralInfo * team);
void __usercall UpdatePlayerSpeed(Sprite * player, TeamGeneralInfo * team);
void __usercall UpdatePlayerShotChanceTable(Sprite * player, TeamGeneralInfo * team);
PlayerInfoHeader * __usercall GetPlayerPointerFromShirtNumber(Sprite * player, TeamGeneralInfo * team);
void __usercall SetPlayerWithNoBallDestination(Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerTackled(Sprite * playerSprite, TeamGeneralInfo * team);
void __usercall SetJumpHeaderHitAnimTable(Sprite * player);
void __usercall PlayerHittingJumpHeader(Sprite * player, TeamGeneralInfo * team);
void __usercall DoFlyingHeader(Sprite * player, Sprite * ball);
void __usercall DoLobHeader(Sprite * player, Sprite * ball);
void __usercall SetPlayerJumpHeaderHitAnimationTable(Sprite * player);
void __usercall SetStaticHeaderDirection(Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerHittingStaticHeader(Sprite * player, TeamGeneralInfo * team);
void __usercall AttemptStaticHeader(Sprite * player, ushort dir);
ushort __usercall TryBookingThePlayer(Sprite * player, TeamGeneralInfo * team);
ushort __usercall TrySendingOffThePlayer(Sprite * player, TeamGeneralInfo * team);
short __usercall ShouldGoalkeeperDive(Sprite * goalie, Sprite * ball, TeamGeneralInfo * team);
ushort __usercall GetFramesNeededToCoverDistance(int movementDeltaFp16_16, ushort distance);
short __usercall UpdateBallVariables(Sprite * playerSprite, Sprite * ballSprite, TeamGeneralInfo * teamInfo);
short __usercall CalculateBallNextGroundXYPositions(Sprite * ball);
void __usercall PlayerTacklingTestFoul(Sprite * playerSprite, Sprite * ballSprite, TeamGeneralInfo * teamInfo);
void __usercall GoalkeeperCaughtTheBall(Sprite * keeper, TeamGeneralInfo * team);
int __usercall GoalkeeperDeflectedBall(Sprite * ball, TeamGeneralInfo * team);
void __usercall GoalkeeperJumping(short direction, short farJumpVariant, short dir2, Sprite * player, Sprite * ball, TeamGeneralInfo * team);
void __usercall PlayerBeginTackling(short pressedDir, Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerTackledTheBallStrong(Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerAttemptingJumpHeader(short direction, Sprite * player);
short * __usercall GetBallDestCoordinatesTable(void);
Sprite * __usercall GetClosestNonControlledPlayerInDirection(ushort direction, TeamGeneralInfo * team);
void __usercall UpdateControllingPlayer(Sprite * player);
void __usercall UpdateBallWithControllingGoalkeeper(Sprite * playerHoldingBall);
void __usercall UpdatePlayerWithBall(Sprite * player);
void __usercall SetThrowInPlayerDestinationCoordinates(Sprite * player);
void __usercall ApplyBallAfterTouch(TeamGeneralInfo * team);
void __usercall ResetBothTeamSpinTimers(void);
void __usercall TestFoulForPenaltyAndFreeKick(Sprite * player, TeamGeneralInfo * team);
void __usercall GoalkeeperClaimedTheBall(Sprite * goalkeeper, Sprite * ball, TeamGeneralInfo * team);
void __usercall StopAllPlayers(void);
void __usercall StopPlayers(TeamGeneralInfo * team);
char __usercall UpdatePlayers(TeamGeneralInfo * teamInfo);
void __usercall AI_SetControlsDirection(TeamGeneralInfo * team);
short __usercall AI_SetDirectionTowardOpponentsGoal(TeamGeneralInfo * team);
int __usercall AI_DecideWhetherToTriggerFire(Sprite * player, TeamGeneralInfo * team, ushort dir);
TeamGeneralInfo * __usercall AI_ResumeGameDelay(TeamGeneralInfo * team);
char __usercall AI_Kick(Sprite * player, TeamGeneralInfo * team);
Sprite * __usercall FindClosestPlayerToBallFacing(ushort fullDir, TeamGeneralInfo * team);
char * __usercall PanicLookupMessagePtr(ushort code);
void __usercall PrintFormatted(char * fmt, char * out, ushort n0, ushort n1, ushort n2, ushort n3, ushort n4, ushort n5, ushort n6, char * a, char * b, char * c);

/* =================== DECOMPILED C ===================== */

// --- PanicHaltLoop @ 00102464 ---

void __usercall PanicHaltLoop(void)

{
  word n0;
  ushort unaff_D1w;
  ushort unaff_D2w;
  ushort unaff_D3w;
  ushort unaff_D4w;
  ushort unaff_D5w;
  ushort unaff_D6w;
  char *a;
  char *unaff_A3;
  char *unaff_A4;
  
  n0 = panicReasonCode;
  a = PanicLookupMessagePtr(panicReasonCode);
  PrintFormatted(panicFormatStr,panicOutBuf,n0,unaff_D1w,unaff_D2w,unaff_D3w,unaff_D4w,unaff_D5w,
                 unaff_D6w,a,unaff_A3,unaff_A4);
  FadeOutToBlack();
  do {
    do {
      do {
        Player1StatusProc();
      } while (pl1Fire == 0);
    } while (pl1Direction != 0);
    Player2StatusProc();
  } while ((pl2Fire == 0) || (pl2Direction != 0));
  DrawMenuTextCentered(0x98,0xe1,0xf,panicOutBuf,&bigCharsTable);
  WaitForVSync();
  paletteIndex = 4;
  FadeIn();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// --- Player1StatusProc @ 00102574 ---

ushort __usercall Player1StatusProc(void)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  
  uVar1 = REG_JOY1DAT;
  pl1Right = -((uVar1 & 2) != 0);
  pl1Left = -((uVar1 & 0x200) != 0);
  uVar1 = uVar1 >> 1 ^ uVar1;
  pl1Down = -((uVar1 & 1) != 0);
  pl1Up = -((uVar1 & 0x100) != 0);
  bVar2 = REG_CIAA_PRA;
  pl1Fire = -((bVar2 & 0x80) == 0);
  pl1UpRight = pl1Right & pl1Up;
  pl1DownRight = pl1Right & pl1Down;
  pl1DownLeft = pl1Left & pl1Down;
  pl1UpLeft = pl1Left & pl1Up;
  if (pl1LastFired == 0) {
    bVar3 = pl1Fire != 0;
    pl1ShortFire = -bVar3;
    pl1LastFired = -bVar3;
    if (bVar3) {
      pl1FireCounter = 0xffff;
    }
  }
  else {
    pl1ShortFire = 0;
    if (pl1Fire == 0) {
      pl1LastFired = 0;
      pl1FireCounter = -pl1FireCounter;
    }
    else if (pl1FireCounter != 0) {
      pl1FireCounter = pl1FireCounter - 1;
    }
  }
  if ((pl1WasLeft == 0) || (pl1LeftPress = 0, pl1Left == 0)) {
    pl1LeftPress = -(pl1Left != 0);
    pl1WasLeft = -(pl1Left != 0);
  }
  if ((pl1WasRight == 0) || (pl1RightPress = 0, pl1Right == 0)) {
    pl1RightPress = -(pl1Right != 0);
    pl1WasRight = -(pl1Right != 0);
  }
  if ((pl1WasUp == 0) || (pl1UpPress = 0, pl1Up == 0)) {
    pl1UpPress = -(pl1Up != 0);
    pl1WasUp = -(pl1Up != 0);
  }
  if ((pl1WasDown == 0) || (pl1DownPress = 0, pl1Down == 0)) {
    pl1DownPress = -(pl1Down != 0);
    pl1WasDown = -(pl1Down != 0);
  }
  pl1Direction = 1;
  if ((((((pl1Right & pl1Up) == 0) && (pl1Direction = 3, (pl1Right & pl1Down) == 0)) &&
       (pl1Direction = 5, (pl1Left & pl1Down) == 0)) &&
      ((pl1Direction = 7, (pl1Left & pl1Up) == 0 && (pl1Direction = 0, pl1Up == 0)))) &&
     ((pl1Direction = 2, pl1Right == 0 &&
      ((pl1Direction = 4, pl1Down == 0 && (pl1Direction = 6, pl1Left == 0)))))) {
    pl1Direction = 0xffff;
  }
  return pl1Direction;
}


// --- Player2StatusProc @ 00102772 ---

ushort __usercall Player2StatusProc(void)

{
  ushort uVar1;
  byte bVar2;
  bool bVar3;
  
  uVar1 = REG_JOY0DAT;
  pl2Right = -((uVar1 & 2) != 0);
  pl2Left = -((uVar1 & 0x200) != 0);
  uVar1 = uVar1 >> 1 ^ uVar1;
  pl2Down = -((uVar1 & 1) != 0);
  pl2Up = -((uVar1 & 0x100) != 0);
  bVar2 = REG_CIAA_PRA;
  pl2Fire = -((bVar2 & 0x40) == 0);
  pl2UpRight = pl2Right & pl2Up;
  pl2DownRight = pl2Right & pl2Down;
  pl2DownLeft = pl2Left & pl2Down;
  pl2UpLeft = pl2Left & pl2Up;
  if (pl2LastFired == 0) {
    bVar3 = pl2Fire != 0;
    pl2ShortFire = -bVar3;
    pl2LastFired = -bVar3;
    if (bVar3) {
      pl2FireCounter = 0xffff;
    }
  }
  else {
    pl2ShortFire = 0;
    if (pl2Fire == 0) {
      pl2LastFired = 0;
      pl2FireCounter = -pl2FireCounter;
    }
    else if (pl2FireCounter != 0) {
      pl2FireCounter = pl2FireCounter - 1;
    }
  }
  if ((pl2WasLeft == 0) || (pl2LeftPress = 0, pl2Left == 0)) {
    pl2LeftPress = -(pl2Left != 0);
    pl2WasLeft = -(pl2Left != 0);
  }
  if ((pl2WasRight == 0) || (pl2RightPress = 0, pl2Right == 0)) {
    pl2RightPress = -(pl2Right != 0);
    pl2WasRight = -(pl2Right != 0);
  }
  if ((pl2WasUp == 0) || (pl2UpPress = 0, pl2Up == 0)) {
    pl2UpPress = -(pl2Up != 0);
    pl2WasUp = -(pl2Up != 0);
  }
  if ((pl2WasDown == 0) || (pl2DownPress = 0, pl2Down == 0)) {
    pl2DownPress = -(pl2Down != 0);
    pl2WasDown = -(pl2Down != 0);
  }
  pl2Direction = 1;
  if ((((((pl2Right & pl2Up) == 0) && (pl2Direction = 3, (pl2Right & pl2Down) == 0)) &&
       (pl2Direction = 5, (pl2Left & pl2Down) == 0)) &&
      ((pl2Direction = 7, (pl2Left & pl2Up) == 0 && (pl2Direction = 0, pl2Up == 0)))) &&
     ((pl2Direction = 2, pl2Right == 0 &&
      ((pl2Direction = 4, pl2Down == 0 && (pl2Direction = 6, pl2Left == 0)))))) {
    pl2Direction = 0xffff;
  }
  return pl2Direction;
}


// --- FadeIn @ 001033ec ---

void __usercall FadeIn(void)

{
  if (fadeCommand != 999) {
    do {
    } while (fadeState != 0);
    FadeOutToBlack();
  }
  if (fadeState != 0) {
    return;
  }
  do {
  } while( true );
}


// --- FadeOutToBlack @ 00103428 ---

void __usercall FadeOutToBlack(void)

{
  if (fadeInitFlag != 999) {
    do {
    } while (fadeState == 0);
  }
  if (fadeState != 0) {
    if (fadeCommand == 999) {
      fadeCommand = 0xffff;
    }
    do {
    } while (fadeState != 0);
  }
  return;
}


// --- InitDisplaySprites @ 00104f54 ---

/* Copy sprites that are visible from allSpritesArray to sortedSprites.
   Then sort them by y axis. */

void __usercall InitDisplaySprites(void)

{
  Sprite *pSVar1;
  Sprite **ppSVar2;
  Sprite **ppSVar4;
  Sprite **ppSVar3;
  
  numSpritesToRender = 0;
  ppSVar2 = allSpritesArray;
  ppSVar4 = sortedSprites;
  while( true ) {
    ppSVar3 = ppSVar2 + 1;
    pSVar1 = *ppSVar2;
    if (pSVar1 == (Sprite *)0xffffffff) break;
    ppSVar2 = ppSVar3;
    if (pSVar1->visible != 0) {
      *ppSVar4 = pSVar1;
      numSpritesToRender = numSpritesToRender + 1;
      ppSVar4 = ppSVar4 + 1;
    }
  }
  SortSprites();
  return;
}


// --- SortSprites @ 00104f86 ---

/* Sorts sprites using improved version of bubble sort.
   Sort by y axis. Depends on numSpritesToRender. */

void __usercall SortSprites(void)

{
  Sprite *pSVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  Sprite **ppSVar5;
  Sprite **ppSVar6;
  
  sVar2 = numSpritesToRender - 2;
  if (-1 < sVar2) {
    do {
      bVar3 = false;
      sVar4 = sVar2;
      ppSVar5 = sortedSprites;
      do {
        ppSVar6 = ppSVar5 + 1;
        pSVar1 = *ppSVar6;
        if ((short)(pSVar1->y).s.i < (short)((*ppSVar5)->y).s.i) {
          *ppSVar6 = *ppSVar5;
          *ppSVar5 = pSVar1;
          bVar3 = true;
        }
        sVar4 = sVar4 + -1;
        ppSVar5 = ppSVar6;
      } while (sVar4 != -1);
    } while (bVar3);
  }
  return;
}


// --- WaitForVSync @ 00105238 ---

void __usercall WaitForVSync(void)

{
  short sVar1;
  
  waitingInterrupt = 1;
  do {
    sVar1 = waitingInterrupt;
    sVar1 = waitingInterrupt;
  } while (sVar1 != 0);
  return;
}


// --- GetTextWidth @ 0010524a ---

/* in:
        A0 -> text
        A1 -> chars table (big or small)
   out:
        D7 - number of pixels needed to display string */

ushort __usercall GetTextWidth(char *text,CharTable *charsTable)

{
  char cVar1;
  ushort uVar2;
  
  uVar2 = 0;
  while( true ) {
    cVar1 = *text;
    if (cVar1 == '\0') break;
    if (cVar1 == ' ') {
      uVar2 = charsTable->spaceWidth + uVar2;
      text = text + 1;
    }
    else {
      uVar2 = charsTable->charSpacing +
              *(short *)(*(int *)(spriteGraphicsPtr +
                                 (short)((charsTable->spriteIndexOffset +
                                         (ushort)charsTable->conversionTable
                                                 [(short)(ushort)(byte)(cVar1 - 0x20)]) * 4)) + 10)
              + uVar2;
      text = text + 1;
    }
  }
  return uVar2;
}


// --- DrawMenuText @ 00105294 ---

/* in:
        D1 - x
        D2 - y
        D3 - char color
        A0 -> text
        A1 -> chars table
   
   Destroys D0, D1, D4, D5, D6, A0,
            A1, A2, A3, A5,
            eax, ebx, ecx, esi, edi, ebp.
   Saves edx, D2, D3, A4. */

short __usercall DrawMenuText(ushort x,ushort y,ushort color,char *text,CharTable *chars)

{
  word wVar1;
  word wVar2;
  char cVar3;
  int iVar4;
  ushort unaff_D0w;
  ushort x_00;
  char *pcVar5;
  
  iVar4 = spriteGraphicsPtr;
  wVar1 = chars->spriteIndexOffset;
  wVar2 = chars->charSpacing;
  do {
    while( true ) {
      x_00 = x;
      pcVar5 = text + 1;
      cVar3 = *text;
      unaff_D0w = CONCAT11((char)(unaff_D0w >> 8),cVar3);
      if (cVar3 == '\0') {
        return unaff_D0w;
      }
      text = pcVar5;
      if (cVar3 == ' ') break;
      unaff_D0w = wVar1 + chars->conversionTable[(short)(ushort)(byte)(cVar3 - 0x20)];
      x = wVar2 + x_00 + *(short *)(*(int *)(iVar4 + (short)(unaff_D0w * 4)) + 10);
      if (-1 < (short)x_00) {
        if (SCREEN_WIDTH - 1 < x) {
          return unaff_D0w;
        }
        BlitStringToFrontBuffer(unaff_D0w,x_00,y,color);
      }
    }
    x = x_00 + chars->spaceWidth;
  } while (((short)x_00 < 0) || (x < SCREEN_WIDTH));
  return unaff_D0w;
}


// --- DrawMenuTextCentered @ 0010531c ---

/* in:
        D1 - x (center of text)
        D2 - y
        D3 - char color
        A0 -> text
        A1 -> chars table
   
   Draws centered text at y. x coordinate is the center of text.
   
   Destroys D0, D1, D4, D5, D6, D7,
            A0, A1, A2, A3, A5,
            eax, ebx, ecx, esi, edi, ebp.
   Saves edx, D2, D3, A4. */

short __usercall
DrawMenuTextCentered(ushort x_center,ushort y,ushort color,char *text,CharTable *chars)

{
  short sVar1;
  ushort uVar2;
  
  uVar2 = GetTextWidth(text,chars);
  sVar1 = DrawMenuText(x_center - ((ushort)(uVar2 + 1) >> 1),y,color,text,chars);
  return sVar1;
}


// --- BlitStringToFrontBuffer @ 001053ca ---

/* WARNING: Control flow encountered bad instruction data */

void __usercall BlitStringToFrontBuffer(ushort spriteIndex,ushort x,ushort y,ushort planeMask)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar9;
  int iVar7;
  short sVar10;
  int iVar8;
  ushort uVar11;
  short unaff_D4w;
  short sVar12;
  ushort uVar13;
  word wVar14;
  ushort uVar15;
  short sVar16;
  uint *puVar17;
  uint *puVar18;
  
  textBlitPlaneMask = planeMask;
  uVar9 = spriteIndex << 2;
  pbVar1 = *(byte **)(spriteGraphicsPtr + (short)uVar9);
  if (*(short *)(pbVar1 + 8) == 0) {
    uVar11 = *(ushort *)(pbVar1 + 0xc);
    x = cameraXMod320 + x;
    y = cameraYMod320 + y;
    if (SCREEN_HEIGHT - 1 < (short)y) {
      y = y + -SCREEN_HEIGHT;
    }
    REG_DMACON = DMACON_BLT_ON;
    uVar5 = REG_DMACONR._0_1_;
    do {
      bVar6 = REG_DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTALWM = 0;
    uVar9 = *(ushort *)(pbVar1 + 10) & 0xf;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar10 = *(short *)(pbVar1 + TILE_STRIDE) + 1;
    if ((ushort)(uVar9 + (x & 0xf)) < 0x11) {
      REG_BLTALWM = 0xffff;
      sVar10 = *(short *)(pbVar1 + TILE_STRIDE);
    }
    REG_BLTAFWM = BLT_FWM_ALL;
    uVar9 = x * 0x1000;
    REG_BLTCON1 = uVar9;
    bltconShiftBase = uVar9;
    if (*(int *)(pbVar1 + 4) != 0) {
      sVar16 = uVar11 + y + -SCREEN_HEIGHT;
      sVar12 = 0;
      if (SCREEN_HEIGHT - 1 < (ushort)(uVar11 + y) && sVar16 != 0) {
        uVar11 = uVar11 - sVar16;
        sVar12 = sVar16;
      }
      textBlitHeightLines = uVar11;
      iVar7 = (int)(short)(((short)x >> 4) << 1);
      REG_BLTSIZE = sVar10 + uVar11 * 0x40;
      uVar15 = sVar10 * 2;
      REG_BLTAMOD = *(short *)(pbVar1 + TILE_STRIDE) * 2 + sVar10 * -2;
      REG_BLTBMOD = *(short *)(pbVar1 + TILE_STRIDE) * 8 + sVar10 * -2;
      REG_BLTCMOD = sVar10 * -2 + 0xb0;
      REG_BLTDMOD = REG_BLTCMOD;
      REG_BLTAPTH = *(uint **)(pbVar1 + 4);
      sVar10 = *(short *)(pbVar1 + TILE_STRIDE) << 1;
      puVar18 = (uint *)((int)sVar10 + *(int *)pbVar1);
      puVar17 = (uint *)((int)puVar18 + (int)sVar10 + (int)sVar10);
      blitSrcA_MaskPtr = REG_BLTAPTH;
      blitSrcB_GlyphPtr = puVar18;
      iVar8 = (uint)y * ROW_STRIDE_BYTES + iVar7;
      while( true ) {
        REG_BLTCPTH = frontbufferBasePtr + iVar8;
        sVar10 = 2;
        uVar13 = planeMask;
        do {
          uVar4 = uVar13 & 1;
          uVar13 = uVar13 >> 1;
          if (uVar4 != 0) {
            REG_BLTBPTH = puVar18;
          }
          REG_DMACON = DMACON_BLT_ON;
          uVar5 = REG_DMACONR._0_1_;
          do {
            bVar6 = REG_DMACONR._0_1_;
          } while ((bVar6 & 0x40) != 0);
          REG_DMACON = DMACON_BLT_OFF;
          REG_BLTCPTH = REG_BLTCPTH + PLANE_STRIDE;
          sVar10 = sVar10 + -1;
        } while (sVar10 != -1);
        if ((uVar13 & 1) == 0) {
          REG_BLTCON0 = uVar9 + BLTCON0_BASE_LINKED;
          REG_BLTBPTH = puVar17;
        }
        else {
          REG_BLTCON0 = uVar9 + 0xbfa;
        }
        if (sVar12 == 0) break;
        iVar8 = (uint)uVar11 * (uint)*(ushort *)(pbVar1 + 0xe);
        REG_BLTAPTH = (uint *)(iVar8 * 2 + (int)REG_BLTAPTH);
        puVar17 = puVar17 + iVar8 * 2;
        puVar18 = puVar18 + iVar8 * 2;
        uVar15 = uVar15 >> 1;
        REG_BLTSIZE = uVar15 + sVar12 * 0x40;
        sVar12 = 0;
        REG_DMACON = DMACON_BLT_ON;
        uVar5 = REG_DMACONR._0_1_;
        do {
          bVar6 = REG_DMACONR._0_1_;
        } while ((bVar6 & 0x40) != 0);
        REG_DMACON = DMACON_BLT_OFF;
        iVar8 = iVar7;
      }
      REG_BLTDPTH = REG_BLTCPTH;
      return;
    }
  }
  panicReasonCode = 0x1556;
  PanicHaltLoop();
  *pbVar1 = *pbVar1 | 0x28;
  piVar2 = *(int **)(spriteGraphicsPtr + (short)((uVar9 | 0xc3) << 2));
  if (*(short *)(piVar2 + 2) == 0) {
    piVar3 = *(int **)(spriteGraphicsPtr + (short)(unaff_D4w << 2));
    sVar10 = *(short *)((int)piVar3 + 0xe);
    dstRowBytesPerPlane = sVar10 * 2;
    iVar8 = (int)(short)dstRowBytesPerPlane;
    dstRowAdvanceBytes[0] = (char)((uint)iVar8 >> 0x18);
    dstRowAdvanceBytes[1] = (char)((uint)iVar8 >> 0x10);
    dstRowAdvanceBytes[2] = (char)((uint)iVar8 >> 8);
    dstRowAdvanceBytes[3] = (char)iVar8;
    REG_DMACON = 0x8400;
    uVar5 = REG_DMACONR._0_1_;
    do {
      bVar6 = REG_DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    REG_DMACON = 0x400;
    REG_BLTALWM = 0;
    uVar9 = *(ushort *)((int)piVar2 + 10) & 0xf;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar16 = *(short *)((int)piVar2 + 0xe) + 1;
    if ((ushort)(uVar9 + (x & 0xf)) < 0x11) {
      REG_BLTALWM = 0xffff;
      sVar16 = *(short *)((int)piVar2 + 0xe);
    }
    REG_BLTAFWM = 0xffff;
    bltconShiftBase_glyph = x * 0x1000;
    REG_BLTCON1 = bltconShiftBase_glyph;
    if (piVar2[1] != 0) {
      glyphHeightLinesCache = *(word *)(piVar2 + 3);
      REG_BLTCPTH = (uchar *)(*piVar3 +
                             (uint)y * (uint)dstRowBytesPerPlane * 4 +
                             (int)(short)(((short)x >> 4) << 1));
      REG_BLTAMOD = *(short *)((int)piVar2 + 0xe) * 2 + sVar16 * -2;
      REG_BLTBMOD = *(short *)((int)piVar2 + 0xe) * 8 + sVar16 * -2;
      REG_BLTCMOD = sVar10 * 8 + sVar16 * -2;
      REG_BLTDMOD = REG_BLTCMOD;
      sVar10 = *(short *)((int)piVar2 + 0xe) << 1;
      blitSrcB_GlyphPtr_glyph = (int)sVar10 + *piVar2;
      blitSrcA_MaskPtr_glyph = piVar2[1];
      sVar12 = 2;
      wVar14 = glyphBlitPlaneMask;
      do {
        uVar9 = wVar14 & 1;
        wVar14 = wVar14 >> 1;
        if (uVar9 != 0) {
          REG_BLTBPTH = (uint *)blitSrcB_GlyphPtr_glyph;
        }
        REG_DMACON = 0x8400;
        uVar5 = REG_DMACONR._0_1_;
        do {
          bVar6 = REG_DMACONR._0_1_;
        } while ((bVar6 & 0x40) != 0);
        REG_DMACON = 0x400;
        REG_BLTCPTH = (uchar *)(iVar8 + (int)REG_BLTCPTH);
        sVar12 = sVar12 + -1;
      } while (sVar12 != -1);
      if ((wVar14 & 1) == 0) {
        REG_BLTCON0 = bltconShiftBase_glyph + 0xfca;
        REG_BLTBPTH = (uint *)(blitSrcB_GlyphPtr_glyph + (int)sVar10 + (int)sVar10);
      }
      else {
        REG_BLTCON0 = bltconShiftBase_glyph + 0xbfa;
      }
      REG_BLTAPTH = (uint *)piVar2[1];
      REG_BLTSIZE = sVar16 + *(word *)(piVar2 + 3) * 0x40;
      REG_BLTDPTH = (uchar *)(int)REG_BLTCPTH;
      return;
    }
  }
  else {
    panicReasonCode = 0x1566;
    PanicHaltLoop();
    iVar8 = dstRowAdvanceBytes._0_4_;
  }
  dstRowAdvanceBytes._0_4_ = iVar8;
  panicReasonCode = 0x1567;
  PanicHaltLoop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// --- PlayPenaltySample @ 0010723c ---

void __usercall PlayPenaltySample(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  PlaySample();
  return;
}


// --- PlayGoodPassSample @ 0010726e ---

void __usercall PlayGoodPassSample(void)

{
  GateKickSampleAndCrowd(3,0x27);
  return;
}


// --- PlayKickSample @ 0010727a ---

void __usercall PlayKickSample(void)

{
  short sfxId;
  
  sfxId = 0x25;
  if (((byte)currentGameTick & 2) != 0) {
    sfxId = 0x28;
  }
  GateKickSampleAndCrowd(3,sfxId);
  return;
}


// --- GateKickSampleAndCrowd @ 00107294 ---

void __usercall GateKickSampleAndCrowd(short channel,short sfxId)

{
  undefined2 unaff_D0u;
  undefined2 unaff_D1u;
  
  if ((((lastKickSampleTick & 0x8000) != 0) && (lastKickSampleTick != 0xf)) &&
     (lastKickSampleTick != 0x12)) {
    return;
  }
  if ((sfxId == 0x16) || (crowdEventFlags == 0)) {
    lastKickSampleTick = sfxId;
    CrowdTickJump(CONCAT22(unaff_D0u,channel),CONCAT22(unaff_D1u,sfxId));
  }
  return;
}


// --- PlayFoulWhistleSample @ 001072c4 ---

void __usercall PlayFoulWhistleSample(void)

{
  HandleKickSampleAndCrowd(3,4);
  return;
}


// --- PlayMissGoalSample @ 00107340 ---

void __usercall PlayMissGoalSample(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  sfxQueueCount = 10;
  HandleKickSampleAndCrowd(3,0x26);
  return;
}


// --- PlayPenalty @ 0010735e ---

void __usercall PlayPenalty(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  PlayPenaltySample();
  sfxQueueWriteIdx = 0x8c;
  return;
}


// --- PlayGameStateWhistleSample @ 00107376 ---

void __usercall PlayGameStateWhistleSample(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  if ((gameState != ST_PENALTY) || (sfxQueueWriteIdx == 0)) {
    PlayPenaltySample();
  }
  sfxQueueWriteIdx = 0x96;
  return;
}


// --- nullsub_6 @ 001073f2 ---

void __usercall nullsub_6(void)

{
  return;
}


// --- HandleKickSampleAndCrowd @ 0010740e ---

void __usercall HandleKickSampleAndCrowd(short mode,short sfxId)

{
  undefined2 unaff_D0u;
  undefined2 unaff_D1u;
  
  if ((sfxId == 0x16) || (crowdEventFlags == 0)) {
    lastKickSampleTick = sfxId;
    CrowdTickJump(CONCAT22(unaff_D0u,mode),CONCAT22(unaff_D1u,sfxId));
  }
  return;
}


// --- PlaySample @ 00107434 ---

undefined8 PlaySample(void)

{
  uint in_D0;
  undefined4 in_D1;
  
  j_AudioApplyPresetToChannels(in_D0);
  return CONCAT44(in_D0,in_D1);
}


// --- CrowdTickJump @ 00107450 ---

void __usercall CrowdTickJump(uint channel,uint waveId)

{
  int iVar1;
  
  if ((audioFlags[0] & 4) != 0) {
    audioFlags[9] = audioFlags[9] | '\x01' << ((ushort)((short)channel + 4) & 7);
    iVar1 = (int)(short)((short)channel * 0xb0);
    *(int *)(audioChannel0 + iVar1 + 0xa6) =
         audioPresetChannelCmdTable._16_4_ +
         *(int *)(audioPresetChannelCmdTable._8_4_ + (int)(short)((short)waveId << 2));
    audioChannel0[iVar1 + 0xaa] = 6;
    audioChannel0[iVar1 + 0xab] = 1;
    audioChannel0[iVar1 + 0xad] = 1;
  }
  return;
}


// --- j_AudioApplyPresetToChannels @ 00107454 ---

void __usercall j_AudioApplyPresetToChannels(uint presetId)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((int)(short)(((ushort)presetId & 0x3f) * 4) + audioPresetChannelCmdTable._0_4_);
  if (*pbVar1 != 0) {
    AudioChannelNoteOnOff(0,(uint)*pbVar1);
  }
  if (pbVar1[1] != 0) {
    AudioChannelNoteOnOff(1,(uint)pbVar1[1]);
  }
  if (pbVar1[2] != 0) {
    AudioChannelNoteOnOff(2,(uint)pbVar1[2]);
  }
  if (pbVar1[3] != 0) {
    AudioChannelNoteOnOff(3,(uint)pbVar1[3]);
  }
  return;
}


// --- CalculateDeltaXAndY @ 001081f6 ---

/* in:
        D0 - speed
        D1 - destination x
        D2 - destination y
        D3 - current x
        D4 - current y
        (all inputs are 16-bit integers)
   out:
        D0 - angle (0..255) (0 is 270 degrees, start of trigonometric circle is 64)
             -1 if no movement (word)
        D1 - delta x (32-bit fixed point)
        D2 - delta y (32-bit fixed point)
        sign flag: set = no movement, clear = there is movement
   
   Delta x and y are numbers of pixels that sprite needs to be moved in one cycle to reach
   destination coordinates. */

short __usercall CalculateDeltaXAndY(short speed,short destX,short destY,short curX,short curY)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  
  uVar2 = destX - curX;
  uVar3 = destY - curY;
  bVar5 = (short)uVar2 < 0;
  if (bVar5) {
    uVar2 = -uVar2;
  }
  cVar4 = -((short)uVar3 < 0);
  if ((short)uVar3 < 0) {
    uVar3 = -uVar3;
  }
  for (; 0x1f < (short)uVar2; uVar2 = uVar2 >> 1) {
    uVar3 = uVar3 >> 1;
  }
  for (; 0x1f < (short)uVar3; uVar3 = uVar3 >> 1) {
    uVar2 = uVar2 >> 1;
  }
  sVar1 = *(short *)((int)kAngleCoeficients + (int)(short)((uVar3 << 5 | uVar2) << 1));
  if (-1 < sVar1) {
    if ((char)-bVar5 < '\0') {
      if (cVar4 < '\0') {
        uVar2 = sVar1 * -2 + 0x180;
      }
      else {
        uVar2 = sVar1 * 2 + 0x180;
      }
    }
    else if (cVar4 < '\0') {
      uVar2 = sVar1 * 2 + 0x80;
    }
    else {
      uVar2 = sVar1 * -2 + 0x80;
    }
    return (0x300 - (uVar2 & 0x1ff) & 0x1ff) >> 1;
  }
  return -1;
}


// --- SetPlayerAnimationTableAndPictureIndex @ 00108eba ---

/* in:
        A0 -> animation table
        A1 -> player (sprite) */

void __usercall SetPlayerAnimationTableAndPictureIndex(AnimTable *animTable,Sprite *player)

{
  short *psVar1;
  short sVar2;
  word unaff_D1w;
  word unaff_D2w;
  
  player->animationTable = animTable;
  sVar2 = player->teamNumber - 1;
  if (player->playerOrdinal == 1) {
    sVar2 = player->teamNumber + 1;
  }
  player->frameDelay = animTable->frameDelay;
  psVar1 = *(short **)
            ((int)animTable->animFrames + (int)(short)((player->direction + sVar2 * 8) * 4));
  player->frameIndicesTable = psVar1;
  if (psVar1 != (short *)0x0) {
    player->startingDirection = player->direction;
    sVar2 = *(short *)((int)player->frameIndicesTable + (int)(short)(player->frameIndex << 1));
    if (-1 < sVar2) {
      player->imageIndex = player->frameOffset + sVar2;
    }
    return;
  }
  panicReasonCode = 0xe;
  PanicHaltLoop();
  player->animationTable = animTable;
  sVar2 = player->teamNumber - 1;
  if (player->playerOrdinal == 1) {
    sVar2 = player->teamNumber + 1;
  }
  player->frameDelay = animTable->frameDelay;
  psVar1 = *(short **)
            ((int)animTable->animFrames + (int)(short)((player->direction + sVar2 * 8) * 4));
  player->frameIndicesTable = psVar1;
  if (psVar1 != (short *)0x0) {
    player->frameSwitchCounter = 0xffff;
    player->frameIndex = 0xffff;
    player->cycleFramesTimer = 1;
    player->startingDirection = player->direction;
    return;
  }
  panicReasonCode = 0xe;
  PanicHaltLoop();
  ballSprite.speed = 0;
  ballSprite.x.s.i = unaff_D1w;
  ballSprite.x.s.frac = 0;
  ballSprite.y.s.i = unaff_D2w;
  ballSprite.y.s.frac = 0;
  ballSprite.destX = unaff_D1w;
  ballSprite.destY = unaff_D2w;
  ballSprite.z.s.i = 0;
  ballSprite.deltaZ.raw = 0;
  return;
}


// --- SetPlayerAnimationTable @ 00108f10 ---

/* in:
        A0 -> animation table
        A1 -> player
   
   Set player's animation table and frame indices table and sets up starting state. */

void __usercall SetPlayerAnimationTable(AnimTable *animTable,Sprite *player)

{
  short *psVar1;
  short sVar2;
  word unaff_D1w;
  word unaff_D2w;
  
  player->animationTable = animTable;
  sVar2 = player->teamNumber - 1;
  if (player->playerOrdinal == 1) {
    sVar2 = player->teamNumber + 1;
  }
  player->frameDelay = animTable->frameDelay;
  psVar1 = *(short **)
            ((int)animTable->animFrames + (int)(short)((player->direction + sVar2 * 8) * 4));
  player->frameIndicesTable = psVar1;
  if (psVar1 != (short *)0x0) {
    player->frameSwitchCounter = 0xffff;
    player->frameIndex = 0xffff;
    player->cycleFramesTimer = 1;
    player->startingDirection = player->direction;
    return;
  }
  panicReasonCode = 0xe;
  PanicHaltLoop();
  ballSprite.speed = 0;
  ballSprite.x.s.i = unaff_D1w;
  ballSprite.x.s.frac = 0;
  ballSprite.y.s.i = unaff_D2w;
  ballSprite.y.s.frac = 0;
  ballSprite.destX = unaff_D1w;
  ballSprite.destY = unaff_D2w;
  ballSprite.z.s.i = 0;
  ballSprite.deltaZ.raw = 0;
  return;
}


// --- ActivateReferee @ 00109bfe ---

/* Foul has been conceeded. Set referee x, y, speed and destination
   coordinates. Referee comes from above or below screen, depending on
   current camera position. X coordinate is card coordinate +/- 0..7, sign
   depends on which vertical half camera is in. */

void __usercall ActivateReferee(void)

{
  word wVar1;
  ushort uVar2;
  
  wVar1 = foulXCoordinate + 0x1c;
  refereeSprite.destY = foulYCoordinate + 5;
  refereeSprite.destX = wVar1;
  uVar2 = Rand();
  uVar2 = uVar2 >> 3;
  if (0x14f < foulXCoordinate) {
    uVar2 = -uVar2;
  }
  refereeSprite.y.s.i = g_cameraY.s.i - 0x14;
  if (foulYCoordinate < 0x1c2) {
    refereeSprite.y.s.i = g_cameraY.s.i + 0x11f;
  }
  refereeSprite.x.s.i = uVar2 + wVar1;
  refereeSprite.x.s.frac = 0;
  refereeSprite.y.s.frac = 0;
  refereeSprite.speed = kRefereeSpeed[0];
  refereeSprite.visible = 1;
  InitDisplaySprites();
  InitRefereeAnimationTable((AnimTable *)&refComingAnimTable);
  refState = REF_INCOMING;
  return;
}


// --- InitRefereeAnimationTable @ 00109ccc ---

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* in:
        A1 -> referee animation table */

void __usercall InitRefereeAnimationTable(AnimTable *animTable)

{
  word wVar1;
  word wVar2;
  short sVar3;
  undefined4 unaff_D1;
  FixedPoint_ FVar4;
  undefined4 unaff_D2;
  FixedPoint_ FVar5;
  
  refereeSprite.frameDelay = animTable->frameDelay;
  refereeSprite.frameIndicesTable =
       *(short **)((int)animTable->animFrames + (int)(short)(refereeSprite.direction << 2));
  if (refereeSprite.frameIndicesTable != (short *)0x0) {
    refereeSprite.frameSwitchCounter = 0xffff;
    refereeSprite.frameIndex = 0xffff;
    refereeSprite.cycleFramesTimer = 1;
    return;
  }
  panicReasonCode = 0x1112;
  PanicHaltLoop();
  wVar2 = refereeSprite.direction;
  FVar5 = refereeSprite.y;
  FVar4 = refereeSprite.x;
  if (refState == 0) {
    return;
  }
  if (refereeSprite.visible == 0) {
    return;
  }
  if (refereeSprite.onScreen == 0) {
    if (gameStatePl == 100) {
      if (refereeSprite.deltaX.raw != 0) {
        if ((int)refereeSprite.deltaX < 0) {
          refereeSprite.x.raw = refereeSprite.deltaX.raw + refereeSprite.x.raw;
          if ((short)refereeSprite.destX < (short)refereeSprite.x.s.i) goto LAB_00109f08;
        }
        else {
          refereeSprite.x.raw = refereeSprite.deltaX.raw + refereeSprite.x.raw;
          if ((short)refereeSprite.x.s.i < (short)refereeSprite.destX) goto LAB_00109f08;
        }
        refereeSprite.x.s.frac = refereeSprite.deltaX.s.frac + FVar4.s.frac;
        refereeSprite.x.s.i = refereeSprite.destX;
        refereeSprite.deltaX.raw = 0;
      }
LAB_00109f08:
      if (refereeSprite.deltaY.raw != 0) {
        if ((int)refereeSprite.deltaY < 0) {
          refereeSprite.y.raw = refereeSprite.deltaY.raw + refereeSprite.y.raw;
          if ((short)refereeSprite.destY < (short)refereeSprite.y.s.i) {
            return;
          }
        }
        else {
          refereeSprite.y.raw = refereeSprite.deltaY.raw + refereeSprite.y.raw;
          if ((short)refereeSprite.y.s.i < (short)refereeSprite.destY) {
            return;
          }
        }
        refereeSprite.y.s.frac = refereeSprite.deltaY.s.frac + FVar5.s.frac;
        refereeSprite.y.s.i = refereeSprite.destY;
        refereeSprite.deltaY.raw = 0;
      }
      return;
    }
  }
  else {
    refereeSprite.cycleFramesTimer = refereeSprite.cycleFramesTimer - 1;
    if (refereeSprite.cycleFramesTimer == 0) {
      refereeSprite.frameIndex = refereeSprite.frameIndex + 1;
      refereeSprite.cycleFramesTimer = refereeSprite.frameDelay;
      while (wVar1 = *(word *)((int)refereeSprite.frameIndicesTable +
                              (int)(short)(refereeSprite.frameIndex << 1)), (short)wVar1 < 0) {
        if (wVar1 == 0xfc19) {
          refereeSprite.frameIndex = 0;
        }
        else {
          if (wVar1 == 0xff9b) {
            refereeSprite.frameIndex = refereeSprite.frameIndex - 1;
            goto LAB_00109d84;
          }
          if ((short)wVar1 < -99) {
            refereeSprite.frameIndex = wVar1 + 100 + refereeSprite.frameIndex;
          }
          else {
            refereeSprite.frameDelay = -wVar1;
            refereeSprite.frameIndex = refereeSprite.frameIndex + 1;
            refereeSprite.cycleFramesTimer = refereeSprite.frameDelay;
          }
        }
      }
      refereeSprite.frameSwitchCounter = refereeSprite.frameSwitchCounter + 1;
      refereeSprite.imageIndex = wVar1;
    }
  }
LAB_00109d84:
  if (refState == 3) {
    refState = 4;
    if (whichCard == 2) {
      InitRefereeAnimationTable((AnimTable *)&refRedCardAnimTable);
      return;
    }
    if (whichCard != 3) {
      InitRefereeAnimationTable((AnimTable *)&refYellowCardAnimTable);
      return;
    }
    InitRefereeAnimationTable((AnimTable *)&refSecondYellowAnimTable);
    return;
  }
  if (refState != 1) {
    if (refState != 5) {
      return;
    }
    if (refereeSprite.onScreen == 0) {
      refState = 0;
      refereeSprite.visible = 0;
      InitDisplaySprites();
      return;
    }
  }
  refereeSprite.speed = kRefereeSpeed[0];
  FVar4._0_2_ = (undefined2)((uint)unaff_D1 >> 0x10);
  FVar4.s.frac = refereeSprite.destX;
  FVar5._0_2_ = (undefined2)((uint)unaff_D2 >> 0x10);
  FVar5.s.frac = refereeSprite.destY;
  sVar3 = CalculateDeltaXAndY(kRefereeSpeed[0],refereeSprite.destX,refereeSprite.destY,
                              refereeSprite.x.s.i,refereeSprite.y.s.i);
  refereeSprite.direction = (sVar3 + 0x10U & 0xff) >> 5;
  refereeSprite.deltaX = FVar4;
  refereeSprite.deltaY = FVar5;
  if (refereeSprite.direction != wVar2) {
    InitRefereeAnimationTable((AnimTable *)&refComingAnimTable);
  }
  FVar5 = refereeSprite.y;
  FVar4 = refereeSprite.x;
  if (refereeSprite.deltaX.raw != 0) {
    if ((int)refereeSprite.deltaX < 0) {
      refereeSprite.x.raw = refereeSprite.deltaX.raw + refereeSprite.x.raw;
      if ((short)refereeSprite.x.s.i <= (short)refereeSprite.destX) {
LAB_00109e24:
        refereeSprite.x.raw = refereeSprite.deltaX.raw + FVar4.raw;
                    /* WARNING: Ignoring partial resolution of indirect */
        refereeSprite.x.s.i = refereeSprite.destX;
        refereeSprite.deltaX.raw = 0;
      }
    }
    else {
      refereeSprite.x.raw = refereeSprite.deltaX.raw + refereeSprite.x.raw;
      if ((short)refereeSprite.destX <= (short)refereeSprite.x.s.i) goto LAB_00109e24;
    }
  }
  if (refereeSprite.deltaY.raw != 0) {
    if ((int)refereeSprite.deltaY < 0) {
      refereeSprite.y.raw = refereeSprite.deltaY.raw + refereeSprite.y.raw;
      if ((short)refereeSprite.destY < (short)refereeSprite.y.s.i) {
        return;
      }
    }
    else {
      refereeSprite.y.raw = refereeSprite.deltaY.raw + refereeSprite.y.raw;
      if ((short)refereeSprite.y.s.i < (short)refereeSprite.destY) goto LAB_00109e64;
    }
    refereeSprite.y.raw = refereeSprite.deltaY.raw + FVar5.raw;
                    /* WARNING: Ignoring partial resolution of indirect */
    refereeSprite.y.s.i = refereeSprite.destY;
    refereeSprite.deltaY.raw = 0;
  }
LAB_00109e64:
  if ((refereeSprite.deltaX.raw == 0) && (refereeSprite.deltaY.raw == 0)) {
    refState = 2;
    refereeSprite.direction = 6;
    InitRefereeAnimationTable((AnimTable *)&refWaitingAnimTable);
  }
  return;
}


// --- ThrowInDeadProc @ 0010c322 ---

void __usercall ThrowInDeadProc(void)

{
  throwInDeadVar = 1;
  return;
}


// --- Rand @ 0010f3fa ---

/* out:
        D0 - random number 0-255
        
   This one seems to be used during the game itself. */

ushort __usercall Rand(void)

{
  ushort uVar1;
  
  uVar1 = (ushort)seed;
  if (seed == 0) {
    randXorIndex = randXorIndex + 1;
    randXorKey = kRandomTable[(short)(ushort)randXorIndex];
  }
  seed = seed + 1;
  return (ushort)(byte)(randXorKey ^ kRandomTable[(short)uVar1]);
}


// --- DoPass @ 0011074e ---

/* in:
        A1 -> player sprite
        A6 -> team */

void __usercall DoPass(Sprite *player,TeamGeneralInfo *team)

{
  ushort direction;
  short sVar1;
  short sVar2;
  Sprite *pSVar3;
  short *psVar4;
  PlayerInfoHeader *pPVar5;
  
  direction = player->direction;
  team->controlledPlDirection = direction;
  pPVar5 = GetPlayerPointerFromShirtNumber(player,team);
  pSVar3 = GetClosestNonControlledPlayerInDirection(direction,team);
  if (pSVar3 == (Sprite *)0xffffffff) {
    psVar4 = GetBallDestCoordinatesTable();
    ballSprite.destX = *(short *)((int)psVar4 + (int)(short)(direction << 2)) + ballSprite.x.s.i;
    ballSprite.destY = *(short *)((int)psVar4 + (short)(direction << 2) + 2) + ballSprite.y.s.i;
    ballSprite.speed = kFreePassReleasingBallSpeed;
  }
  else {
    team->passToPlayerPtr = pSVar3;
    team->passingBall = 1;
    team->passingToPlayer = 1;
    if (((gameStatePl == ST_GAME_IN_PROGRESS) && (team->playerNumber == 0)) &&
       ((currentGameTick & 0x1e) >> 1 <
        *(ushort *)((int)kAIFailedPassChance + (int)(short)((short)(char)pPVar5->passing << 1)))) {
      sVar1 = (pSVar3->x).s.i - ballSprite.x._0_2_;
      if (((byte)lastGameTick & 0x20) == 0) {
        sVar1 = sVar1 >> 1;
      }
      sVar1 = sVar1 * 0x20;
      sVar2 = (pSVar3->y).s.i - ballSprite.y._0_2_;
      if (((byte)lastGameTick & 0x20) != 0) {
        sVar2 = sVar2 >> 1;
      }
      sVar2 = sVar2 * 0x20;
    }
    else {
      sVar1 = (pSVar3->x).s.i - ballSprite.x._0_2_;
      sVar2 = (pSVar3->y).s.i - ballSprite.y._0_2_;
      if ((sVar1 == 0) && (sVar2 == 0)) {
        sVar1 = 1;
      }
      for (; ((-1 < (short)(sVar1 + ballSprite.x.s.i) && ((short)(sVar1 + ballSprite.x.s.i) < 0x2a0)
              ) && ((-1 < (short)(sVar2 + ballSprite.y.s.i) &&
                    ((short)(sVar2 + ballSprite.y.s.i) < 0x370)))); sVar2 = sVar2 << 1) {
        sVar1 = sVar1 << 1;
      }
    }
    ballSprite.destY = ballSprite.y.s.i + sVar2;
    ballSprite.destX = ballSprite.x.s.i + sVar1;
    sVar1 = kPassingSpeedCloserThan2500;
    if (((((0x9c3 < pSVar3->ballDistance) &&
          (sVar1 = kPassingSpeed_2500_10000, 9999 < pSVar3->ballDistance)) &&
         (sVar1 = kPassingSpeed_10000_22500, 0x57e3 < pSVar3->ballDistance)) &&
        ((sVar1 = kPassingSpeed_22500_40000, 39999 < pSVar3->ballDistance &&
         (sVar1 = kPassingSpeed_40000_62500, 0xf423 < pSVar3->ballDistance)))) &&
       ((sVar1 = kPassingSpeed_62500_90000, frontbufferBase + 0x37e7 < (uchar *)pSVar3->ballDistance
        && (sVar1 = kPassingSpeed_90000_122500,
           frontbufferBase + 0xb6db < (uchar *)pSVar3->ballDistance)))) {
      sVar1 = kPassingSpeedFurtherThan122500;
    }
    ballSprite.speed =
         *(short *)((int)kBallSpeedPassingIncrease + (int)(short)((short)(char)pPVar5->passing << 1)
                   ) + sVar1;
  }
  ResetBothTeamSpinTimers();
  if (team->playerNumber != 0) {
    team->spinTimer = 0;
  }
  team->passInProgress = 1;
  if (((gameStatePl == ST_GAME_IN_PROGRESS) || (gameState < ST_THROW_IN_FORWARD_RIGHT)) ||
     (ST_THROW_IN_BACK_LEFT < gameState)) {
    PlayGoodPassSample();
  }
  return;
}


// --- PlayerKickingBall @ 0011094a ---

/* in:
        A1 -> player sprite
        A6 -> team */

void __usercall PlayerKickingBall(Sprite *player,TeamGeneralInfo *team)

{
  word wVar1;
  short sVar2;
  short *psVar3;
  PlayerInfoHeader *pPVar4;
  
  wVar1 = player->direction;
  team->controlledPlDirection = wVar1;
  psVar3 = GetBallDestCoordinatesTable();
  sVar2 = wVar1 << 2;
  ballSprite.destX = *(short *)((int)psVar3 + (int)sVar2) + ballSprite.x.s.i;
  ballSprite.destY = *(short *)((int)psVar3 + sVar2 + 2) + ballSprite.y.s.i;
  ballSprite.speed = kBallKickingSpeed;
  ballSprite.deltaZ.raw = kBallKickingDeltaZ;
  ResetBothTeamSpinTimers();
  if (((gameStatePl != 100) && (ST_THROW_IN_FORWARD_RIGHT - 1 < gameState)) &&
     (gameState < ST_THROW_IN_BACK_LEFT + 1)) {
    return;
  }
  if (team == &topTeamData) {
    if (((short)ballSprite.y.s.i < 0x22c) ||
       (((topTeamData.controlledPlDirection != 4 && (topTeamData.controlledPlDirection != 3)) &&
        (topTeamData.controlledPlDirection != 5)))) goto not_a_shot_on_goal;
  }
  else if ((0x156 < (short)ballSprite.y.s.i) ||
          (((team->controlledPlDirection != 0 && (team->controlledPlDirection != 1)) &&
           (team->controlledPlDirection != 7)))) goto not_a_shot_on_goal;
  if ((((short)ballSprite.x.s.i < 0xf1) || (0x1af < (short)ballSprite.x.s.i)) ||
     ((0xcb < (short)ballSprite.y.s.i && ((short)ballSprite.y.s.i < 0x2b6)))) {
    pPVar4 = GetPlayerPointerFromShirtNumber(player,team);
    ballSprite.speed =
         *(short *)((int)kBallSpeedKicking + (int)(short)((short)(char)pPVar4->shooting << 1)) +
         ballSprite.speed;
  }
  else {
    pPVar4 = GetPlayerPointerFromShirtNumber(player,team);
    ballSprite.speed =
         *(short *)((int)kBallSpeedFinishing + (int)(short)((short)(char)pPVar4->finishing << 1)) +
         ballSprite.speed;
  }
not_a_shot_on_goal:
  if (((player->playerOrdinal != 1) || ((player->direction != 2 && (player->direction != 6)))) &&
     (-1 < (short)team->opponentsTeam->goalkeeperSavedCommentTimer)) {
    team->spinTimer = 0;
  }
  team->passInProgress = 0;
  PlayKickSample();
  return;
}


// --- CalculateIfPlayerWinsBall @ 00110a80 ---

/* in:
        D0 =  current player direction
        A6 -> team data
        A1 -> current player sprite
        
   When running.
   Sets team's direction of player controlling the ball.
   Updates the ball when controlled by the player (makes it "run away" a bit). */

void __usercall CalculateIfPlayerWinsBall(ushort dir,Sprite *player,TeamGeneralInfo *team)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  byte bVar5;
  short sVar4;
  int unaff_A2;
  PlayerInfoHeader *pPVar6;
  TeamGeneralInfo *pTVar7;
  
  team->passInProgress = 0;
  pTVar7 = team->opponentsTeam;
  if ((((pTVar7->wonTheBallTimer == 0) && (pTVar7->playerHasBall != 0)) &&
      (-1 < (short)pTVar7->currentAllowedDirection)) && (pTVar7->controlledPlayer != (Sprite *)0x0))
  {
    pPVar6 = GetPlayerPointerFromShirtNumber(pTVar7->controlledPlayer,team);
    bVar5 = pPVar6->tackling;
    bVar1 = pPVar6->ballControl;
    pTVar7 = team->opponentsTeam;
    if (pTVar7->controlledPlayer != (Sprite *)0x0) {
      pPVar6 = GetPlayerPointerFromShirtNumber(pTVar7->controlledPlayer,pTVar7);
      bVar5 = ((byte)(bVar1 + bVar5) >> 1) - ((byte)(pPVar6->ballControl + pPVar6->tackling) >> 1);
      if ((short)((ushort)bVar5 << 8) < 0) {
        bVar5 = -bVar5;
        pTVar7 = pTVar7->opponentsTeam;
      }
      uVar3 = Rand();
      if ((byte)plAvgTacklingBallControlDiffChance[(short)(char)bVar5] <= ((byte)uVar3 & 0x1f)) {
        pTVar7 = pTVar7->opponentsTeam;
      }
      pTVar7->wonTheBallTimer = 0xc;
      *(undefined2 *)(unaff_A2 + 0x2c) = 0;
      *(undefined2 *)(unaff_A2 + 0x3a) = *(undefined2 *)(unaff_A2 + 0x1e);
      *(undefined2 *)(unaff_A2 + 0x3c) = *(undefined2 *)(unaff_A2 + 0x22);
      return;
    }
  }
  team->controlledPlDirection = dir;
  if (0 < (int)ballSprite.deltaZ.raw) {
    ballSprite.deltaZ.raw = 0xffffffff;
  }
  if (((dir == 0) && (sVar4 = ballSprite.x.s.i - (player->x).s.i, sVar4 < 4)) && (-4 < sVar4)) {
    if (sVar4 < 0) {
      ballSprite.x.s.i = ballSprite.x.s.i - 1;
    }
    else {
      ballSprite.x.s.i = ballSprite.x.s.i + 1;
    }
  }
  ballSprite.destX =
       *(short *)((int)kDefaultDestinations + (int)(short)(dir << 2)) + (player->x).s.i;
  ballSprite.destY = *(short *)((int)kDefaultDestinations + (short)(dir << 2) + 2) + (player->y).s.i
  ;
  pPVar6 = GetPlayerPointerFromShirtNumber(player,team);
  sVar4 = 0;
  if (((byte)currentGameTick & 2) != 0) {
    sVar4 = *(short *)((int)kBallSpeedDeltaWhenControlled +
                      (int)(short)((short)(char)pPVar6->ballControl << 1));
  }
  ballSprite.speed = player->speed + sVar4;
  cVar2 = ((char)player->fullDirection + -0x80) - (char)(player->direction << 5);
  if (('?' < cVar2) || (cVar2 < -0x3f)) {
    ballSprite.speed = ballSprite.speed + 0x100;
  }
  if ((team->controlledPlDirection != player->direction) &&
     (team->unkBallTimer = team->unkBallTimer + 1,
     *(ushort *)((int)word_1106EA + (int)(short)((short)(char)pPVar6->ballControl << 1)) <=
     team->unkBallTimer)) {
    team->wonTheBallTimer = 8;
  }
  ResetBothTeamSpinTimers();
  return;
}


// --- PlayerTackledTheBallWeak @ 00110c04 ---

/* in:
       A1 -> player
       A6 -> team (general info)
   
   Weak tackle: player speed goes down to 50%, ball speed = 75% of original player speed. */

void __usercall PlayerTackledTheBallWeak(Sprite *player,TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  word wVar5;
  
  team->passInProgress = 0;
  wVar5 = team->currentAllowedDirection;
  if ((short)wVar5 < 0) {
    wVar5 = player->direction;
  }
  uVar3 = player->direction - wVar5;
  if ((uVar3 == 0) || (uVar3 = uVar3 & 7, uVar3 == 4)) {
    uVar3 = player->direction;
  }
  else if (uVar3 < 4) {
    uVar3 = player->direction - 1;
  }
  else {
    uVar3 = player->direction + 1;
  }
  team->controlledPlDirection = uVar3 & 7;
  sVar4 = (uVar3 & 7) << 2;
  ballSprite.destX = ballSprite.x.s.i + *(short *)((int)kDefaultDestinations + (int)sVar4);
  ballSprite.destY = *(short *)((int)kDefaultDestinations + sVar4 + 2) + ballSprite.y.s.i;
  player->speed = player->speed - (player->speed >> 1);
  player->speed = player->speed | 1;
  ballSprite.speed = player->speed + (player->speed >> 1);
  player->tackleState = 1;
  pSVar1 = team->opponentsTeam->controlledPlayer;
  if (((pSVar1 != (Sprite *)0x0) && (8 < pSVar1->ballDistance)) &&
     (sVar4 = (player->x).s.i - (pSVar1->x).s.i, sVar2 = (player->y).s.i - (pSVar1->y).s.i,
     0x20 < (uint)((int)sVar2 * (int)sVar2 + (int)sVar4 * (int)sVar4))) {
    player->tackleState = TS_GOOD_TACKLE;
  }
  PlayKickSample();
  ResetBothTeamSpinTimers();
  return;
}


// --- SetPlayerDowntimeAfterTackle @ 00110cd8 ---

/* in:
        A1 -> sprite
        A6 -> team data
   
   Set how much time will player be lying on the ground after tackle.
   Better tackling skill means less time. */

void __usercall SetPlayerDowntimeAfterTackle(Sprite *player,TeamGeneralInfo *team)

{
  short *psVar1;
  PlayerInfoHeader *pPVar2;
  
  pPVar2 = GetPlayerPointerFromShirtNumber(player,team);
  psVar1 = kPlayerTacklingDownTime;
  if (player->tacklingTimer == 0xffff) {
    psVar1 = kComputerTacklingDownTime;
  }
  player->playerDownTimer =
       (byte)*(undefined2 *)((int)psVar1 + (int)(short)((short)(char)pPVar2->tackling << 1));
  return;
}


// --- UpdatePlayerSpeed @ 00110cfe ---

/* in:
        A1 -> player sprite
        A6 -> player team (general) */

void __usercall UpdatePlayerSpeed(Sprite *player,TeamGeneralInfo *team)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  word wVar4;
  short *psVar5;
  PlayerInfoHeader *pPVar6;
  
  if ((player->playerState == PL_NORMAL) &&
     (((gameStatePl != ST_GAME_IN_PROGRESS || (player->playerOrdinal != 1)) ||
      (player == team->controlledPlayer)))) {
    pPVar6 = GetPlayerPointerFromShirtNumber(player,team);
    psVar5 = kPlayerSpeedsGameInProgress;
    if (gameStatePl != ST_GAME_IN_PROGRESS) {
      psVar5 = kPlayerSpeedsGameStopped;
    }
    player->speed = *(word *)((int)psVar5 + (int)(short)((short)(char)pPVar6->speed << 1));
    if (runSlower != 0) {
      uVar3 = player->speed;
      player->speed = player->speed - (uVar3 >> 2);
      player->speed = player->speed - (uVar3 >> 3);
    }
    if (((team->playerNumber != 0) || (team->playerCoachNumber != 0)) &&
       (pPVar6->injuriesBitfield != 0)) {
      player->speed =
           *(short *)((int)kInjuriesSpeedHandicap +
                     (int)(short)((pPVar6->injuriesBitfield & 0xe0) >> 4)) + player->speed;
    }
    if ((player == team->controlledPlayer) && (team->playerHasBall != 0)) {
      player->speed = player->speed - (player->speed >> 3);
    }
    if (((((team->playerNumber != 0) && (player == team->passToPlayerPtr)) &&
         (team->passingToPlayer != 0)) &&
        (((iVar1._0_2_ = team->longPass, iVar1._2_2_ = team->longSpinPass, iVar1 != 0 ||
          (team->leftSpin != 0)) || (team->rightSpin != 0)))) &&
       (((ballSprite.speed != 0 &&
         (cVar2 = (char)ballSprite.fullDirection - (char)player->fullDirection, cVar2 < '\b')) &&
        (-8 < cVar2)))) {
      wVar4 = 0x200;
      if ((cVar2 < '\x06') && (-6 < cVar2)) {
        wVar4 = 0x100;
      }
      player->speed = wVar4;
    }
    if (gameStatePl != ST_GAME_IN_PROGRESS) {
      if ((gameState == ST_FIRST_HALF_ENDED) || (gameState == ST_GAME_ENDED)) {
        wVar4 = player->speed + stoppageTimerTotal * -0x20;
        player->speed = wVar4;
        if ((short)wVar4 < 0) {
          player->speed = 0;
        }
      }
      else if ((gameState == ST_GOING_TO_HALFTIME) || (gameState == ST_PLAYERS_GOING_TO_SHOWER)) {
        uVar3 = stoppageTimerTotal << 2;
        if (100 < uVar3) {
          uVar3 = 100;
        }
        player->speed = (word)(((uint)uVar3 * (uint)player->speed) / 100);
      }
    }
    uVar3 = 0x500 - player->speed;
    if ((short)uVar3 < 0) {
      uVar3 = 0;
    }
    player->frameDelay = (uVar3 >> 7) + 6;
  }
  return;
}


// --- UpdatePlayerShotChanceTable @ 00110e88 ---

/* in:
        A1 -> sprite (player)
        A6 -> team data */

void __usercall UpdatePlayerShotChanceTable(Sprite *player,TeamGeneralInfo *team)

{
  PlayerInfoHeader *pPVar1;
  
  pPVar1 = GetPlayerPointerFromShirtNumber(player,team);
  if (pPVar1->position != 0) {
    team->shotChanceTable = &teamPlOfs24Table;
    return;
  }
  team->shotChanceTable =
       *(GoalieSkill **)((int)kGoalieSkillTables + (int)(short)((ushort)pPVar1->goalieSkill << 2));
  return;
}


// --- GetPlayerPointerFromShirtNumber @ 00110f4c ---

/* in:
        A1 -> sprite (player)
        A6 -> team data
   out:
        A4 -> player + header (in-game), requires addition of sizeof(TeamGame) to it to be a proper
   pointer */

PlayerInfoHeader * __usercall GetPlayerPointerFromShirtNumber(Sprite *player,TeamGeneralInfo *team)

{
  return (PlayerInfoHeader *)
         (team->inGameTeamPtr->teamName +
         *(short *)((int)ingameTeamPlayerOffsets + (int)(short)((player->playerOrdinal - 1) * 2)) +
         -0x16);
}


// --- SetPlayerWithNoBallDestination @ 00111258 ---

/* in:
        A1 -> current player sprite
        A6 -> team data */

void __usercall SetPlayerWithNoBallDestination(Sprite *player,TeamGeneralInfo *team)

{
  byte bVar1;
  short sVar2;
  word wVar3;
  short sVar4;
  word wVar5;
  short unaff_D6w;
  short unaff_D7w;
  int iVar6;
  
  iVar6 = *(int *)((int)g_tacticsTable + (int)(short)(team->tactics << 2));
  if (((gameState == ST_KEEPER_HOLDS_BALL) || (gameState == ST_GOAL_OUT_LEFT)) ||
     (gameState == ST_GOAL_OUT_RIGHT)) {
    iVar6 = *(int *)((int)g_tacticsTable + (int)(short)((short)*(char *)(iVar6 + 0x171) << 2));
  }
  sVar2 = player->playerOrdinal - 2;
  if (-1 < sVar2) {
    sVar2 = sVar2 * 0x23;
    if (team == &topTeamData) {
      bVar1 = *(byte *)(iVar6 + 9 + (int)(short)(ballQuadrantIndex + sVar2));
    }
    else {
      bVar1 = -*(char *)(iVar6 + 9 + (int)(short)((0x22 - ballQuadrantIndex) + sVar2)) - 0x11;
    }
    sVar2 = *(short *)((int)playerXQuadrantsCoordinates + (int)(short)((ushort)(bVar1 >> 4) << 1)) +
            playerXQuadrantOffset;
    wVar5 = *(short *)((int)playerYQuadrantCoordinates + (int)(short)((bVar1 & 0xf) << 1)) +
            playerYQuadrantOffset;
    wVar3 = sVar2 - 4;
    if (team != &topTeamData) {
      wVar3 = sVar2 + 4;
    }
    if ((short)wVar3 < 0x51) {
      wVar3 = 0x51;
    }
    if (0x24e < (short)wVar3) {
      wVar3 = 0x24e;
    }
    if ((short)wVar5 < 0x81) {
      wVar5 = 0x81;
    }
    if (0x301 < (short)wVar5) {
      wVar5 = 0x301;
    }
    player->destX = wVar3;
    player->destY = wVar5;
    return;
  }
  player->destX = (short)(((uint)(ushort)(unaff_D6w - 0x51) * 0x67) / 0x1fe) + 0x11d;
  sVar2 = 0x87;
  sVar4 = 0xa1;
  if (team != &topTeamData) {
    sVar2 = 0x2e1;
    sVar4 = 0x2fb;
  }
  player->destY =
       sVar2 + (short)(((uint)(ushort)(unaff_D7w - 0x81) * (uint)(ushort)((sVar4 - sVar2) + 1)) /
                      0x281);
  return;
}


// --- PlayerTackled @ 00111388 ---

/* in:
        A1 -> player sprite
        A6 -> team (general)
   
   This function is called when this player was tackled.
   It sets player's state to tackled and sets animation
   table. Also randomly sets injury and injury level. */

void __usercall PlayerTackled(Sprite *playerSprite,TeamGeneralInfo *team)

{
  TeamGame *pTVar1;
  short sVar2;
  word wVar3;
  word wVar4;
  ushort uVar5;
  byte bVar6;
  char *pcVar7;
  
  if ((g_trainingGame == 0) || (uVar5 = Rand(), (uVar5 & 3) == 0)) {
    wVar4 = gameLengthInGame;
    wVar3 = team2NumAllowedInjuries;
    if (team->teamNumber == 1) {
      wVar3 = team1NumAllowedInjuries;
    }
    if (wVar3 != 0) {
      sVar2 = *(short *)((int)ingameTeamPlayerOffsets +
                        (int)(short)((playerSprite->playerOrdinal - 1) * 2));
      pTVar1 = team->inGameTeamPtr;
      pcVar7 = kTackleInjuryProbability;
      if ((pTVar1->players[0].fullName[sVar2 + -3] & 0xe0) == 0x20) {
        pcVar7 = kTackleInjuryProbabilityAlreadyInjured;
      }
      uVar5 = Rand();
      if ((byte)uVar5 < (byte)pcVar7[(short)wVar4]) {
        pcVar7 = kInjuryLevels;
        if ((pTVar1->players[0].fullName[sVar2 + -3] & 0xe0) == 0x20) {
          pcVar7 = kInjuryLevelAlreadyInjured;
        }
        uVar5 = Rand();
        bVar6 = (byte)uVar5 & 0x3f;
        uVar5 = 0x20;
        if ((byte)*pcVar7 <= bVar6) {
          bVar6 = bVar6 - *pcVar7;
          uVar5 = 0x40;
          if (((byte *)pcVar7)[1] <= bVar6) {
            bVar6 = bVar6 - ((byte *)pcVar7)[1];
            uVar5 = 0x60;
            if (((byte *)pcVar7)[2] <= bVar6) {
              bVar6 = bVar6 - ((byte *)pcVar7)[2];
              uVar5 = 0x80;
              if (((byte *)pcVar7)[3] <= bVar6) {
                bVar6 = bVar6 - ((byte *)pcVar7)[3];
                uVar5 = 0xa0;
                if (((byte *)pcVar7)[4] <= bVar6) {
                  bVar6 = bVar6 - ((byte *)pcVar7)[4];
                  uVar5 = 0xc0;
                  if ((((byte *)pcVar7)[5] <= bVar6) &&
                     (uVar5 = 0xe0, ((byte *)pcVar7)[6] <= (byte)(bVar6 - ((byte *)pcVar7)[5]))) {
                    uVar5 = 0;
                  }
                }
              }
            }
          }
        }
        pTVar1->players[0].shortName[sVar2 + -6] = 1;
        if (pTVar1->players[0].fullName[sVar2 + -3] < (byte)uVar5) {
          pTVar1->players[0].fullName[sVar2 + -3] = (byte)uVar5;
        }
        playerSprite->injuryLevel =
             *(word *)((int)kInjuryRecoveryTime + (int)(short)((uVar5 >> 5) << 1));
        if (team->teamNumber == 1) {
          team1NumAllowedInjuries = team1NumAllowedInjuries - 1;
        }
        else {
          team2NumAllowedInjuries = team2NumAllowedInjuries - 1;
        }
      }
    }
  }
  playerSprite->playerState = PL_TACKLED;
  playerSprite->playerDownTimer = 0x32;
  SetPlayerAnimationTable((AnimTable *)&playerTackledAnimTable,playerSprite);
  return;
}


// --- SetJumpHeaderHitAnimTable @ 001126d8 ---

/* in:
        A1 -> player */

void __usercall SetJumpHeaderHitAnimTable(Sprite *player)

{
  if ((((player->animationTable != &jumpHeaderHitAnimTable) && (player->heading == 0)) &&
      (player->playerDownTimer == 0x28)) &&
     ((player->frameSwitchCounter < 3 && (((byte)lastGameTick & 2) != 0)))) {
    SetPlayerAnimationTableAndPictureIndex(&jumpHeaderHitAnimTable,player);
    player->speed = player->speed >> 1;
  }
  return;
}


// --- PlayerHittingJumpHeader @ 00112712 ---

/* in:
       A1 -> player
       A6 -> team
   
   Hitting flying or lob header. Only triggers on ball contact. */

void __usercall PlayerHittingJumpHeader(Sprite *player,TeamGeneralInfo *team)

{
  ushort uVar1;
  short sVar2;
  word wVar3;
  PlayerInfoHeader *pPVar4;
  
  team->passInProgress = 0;
  wVar3 = team->currentAllowedDirection;
  if ((short)wVar3 < 0) {
    wVar3 = player->direction;
  }
  ballSprite.deltaZ.raw = kBallJumpHeaderDeltaZ;
  ballSprite.speed = (player->speed >> 2) + player->speed;
  if ((short)team->currentAllowedDirection < 0) {
    DoFlyingHeader(player,&ballSprite);
  }
  else {
    uVar1 = player->direction - wVar3 & 7;
    if (uVar1 != 0) {
      if (uVar1 != 4) {
        if (uVar1 == 1) {
header_decrement_dir:
          uVar1 = player->direction - 1;
        }
        else {
          if (uVar1 != 7) {
            if (uVar1 == 2) {
              DoFlyingHeader(player,&ballSprite);
              goto header_decrement_dir;
            }
            if (uVar1 == 6) {
              DoFlyingHeader(player,&ballSprite);
            }
            else {
              if (uVar1 == 3) {
                DoLobHeader(player,&ballSprite);
                goto header_decrement_dir;
              }
              DoLobHeader(player,&ballSprite);
            }
          }
          uVar1 = player->direction + 1;
        }
        goto header_apply_dir_and_set_ball_dest;
      }
      DoLobHeader(player,&ballSprite);
    }
  }
  uVar1 = player->direction;
header_apply_dir_and_set_ball_dest:
  team->controlledPlDirection = uVar1 & 7;
  sVar2 = (uVar1 & 7) << 2;
  ballSprite.destX = ballSprite.x.s.i + *(short *)((int)kDefaultDestinations + (int)sVar2);
  ballSprite.destY = *(short *)((int)kDefaultDestinations + sVar2 + 2) + ballSprite.y.s.i;
  pPVar4 = GetPlayerPointerFromShirtNumber(player,team);
  ballSprite.speed =
       *(short *)((int)kPlayerHeaderSpeedIncrease + (int)(short)((short)(char)pPVar4->heading << 1))
       + ballSprite.speed;
  player->speed = player->speed >> 1;
  player->heading = 1;
  PlayKickSample();
  ResetBothTeamSpinTimers();
  return;
}


// --- DoFlyingHeader @ 0011280a ---

void __usercall DoFlyingHeader(Sprite *player,Sprite *ball)

{
  (ball->deltaZ).raw = kHeaderLowJumpHeight;
  ball->speed = ball->speed - (ball->speed >> 2);
  SetPlayerJumpHeaderHitAnimationTable(player);
  return;
}


// --- DoLobHeader @ 00112822 ---

/* in:
       A1 -> player sprite
       A2 -> ball sprite */

void __usercall DoLobHeader(Sprite *player,Sprite *ball)

{
  (ball->deltaZ).raw = kHeaderHighJumpHeight;
  ball->speed = ball->speed - (ball->speed >> 4);
  SetPlayerJumpHeaderHitAnimationTable(player);
  return;
}


// --- SetPlayerJumpHeaderHitAnimationTable @ 0011283a ---

/* in:
       A1 -> player sprite
   
   Table for flying and lob headers. */

void __usercall SetPlayerJumpHeaderHitAnimationTable(Sprite *player)

{
  if (player->frameSwitchCounter < 3) {
    SetPlayerAnimationTableAndPictureIndex(&jumpHeaderHitAnimTable,player);
  }
  return;
}


// --- SetStaticHeaderDirection @ 00112858 ---

/* in:
        A1 -> player (sprite)
        A6 -> team general data
   
   Static header was activated now we need to aim it somewhere. */

void __usercall SetStaticHeaderDirection(Sprite *player,TeamGeneralInfo *team)

{
  ushort uVar1;
  
  if (((-1 < (short)team->currentAllowedDirection) && (player->playerDownTimer < 0x13)) &&
     (player->animationTable == &staticHeaderAttemptAnimTable)) {
    uVar1 = team->currentAllowedDirection - player->direction;
    if ((uVar1 != 0) && (uVar1 = uVar1 & 7, uVar1 != 4)) {
      if (uVar1 < 4) {
        player->direction = player->direction + 1;
      }
      else {
        player->direction = player->direction - 1;
      }
      player->direction = player->direction & 7;
    }
    SetPlayerAnimationTableAndPictureIndex(&staticHeaderAimAnimTable,player);
  }
  return;
}


// --- PlayerHittingStaticHeader @ 001128a2 ---

/* in:
        A1 -> player (sprite)
        A6 -> team general info
   
   Runs when a player makes contact with the ball while doing static header.
   Applies ball speed and destination. Increases player speed, updates delta z
   and plays kick sample. */

void __usercall PlayerHittingStaticHeader(Sprite *player,TeamGeneralInfo *team)

{
  ushort uVar1;
  word wVar2;
  PlayerInfoHeader *pPVar3;
  
  team->passInProgress = 0;
  if (((player->animationTable != &staticHeaderHitAnimTable) &&
      (uVar1 = team->currentAllowedDirection - player->direction, uVar1 != 0)) &&
     (uVar1 = uVar1 & 7, uVar1 != 4)) {
    if (uVar1 < 4) {
      wVar2 = team->currentAllowedDirection;
      player->direction = player->direction + 1;
      player->direction = player->direction & 7;
      if (wVar2 != player->direction) {
        player->direction = player->direction + 1;
      }
    }
    else {
      wVar2 = team->currentAllowedDirection;
      player->direction = player->direction - 1;
      player->direction = player->direction & 7;
      if (wVar2 != player->direction) {
        player->direction = player->direction - 1;
      }
    }
    player->direction = player->direction & 7;
  }
  SetPlayerAnimationTableAndPictureIndex(&staticHeaderHitAnimTable,player);
  wVar2 = team->currentAllowedDirection;
  if ((short)wVar2 < 0) {
    wVar2 = player->direction;
  }
  team->controlledPlDirection = wVar2;
  ballSprite.destX =
       ballSprite.x.s.i + *(short *)((int)kDefaultDestinations + (int)(short)(wVar2 << 2));
  ballSprite.destY =
       *(short *)((int)kDefaultDestinations + (short)(wVar2 << 2) + 2) + ballSprite.y.s.i;
  ballSprite.speed = kStaticHeaderBaseBallSpeed;
  pPVar3 = GetPlayerPointerFromShirtNumber(player,team);
  ballSprite.speed =
       *(short *)((int)kPlayerHeaderSpeedIncrease + (int)(short)((short)(char)pPVar3->heading << 1))
       + ballSprite.speed;
  ballSprite.deltaZ.raw = -ballSprite.deltaZ.raw >> 1;
  player->heading = 1;
  PlayKickSample();
  ResetBothTeamSpinTimers();
  return;
}


// --- AttemptStaticHeader @ 0011297e ---

/* in:
        D0 - some direction
        A1 -> player sprite
   
   Players jumps in place trying to hit static header. */

void __usercall AttemptStaticHeader(Sprite *player,ushort dir)

{
  player->heading = 0;
  player->direction = dir;
  player->destX = (player->x).s.i + *(short *)((int)kDefaultDestinations + (int)(short)(dir << 2));
  player->destY = (player->y).s.i + *(short *)((int)kDefaultDestinations + (short)(dir << 2) + 2);
  player->speed = kStaticHeaderPlayerSpeed;
  SetPlayerAnimationTable(&staticHeaderAttemptAnimTable,player);
  player->playerState = PL_STATIC_HEADING;
  player->playerDownTimer = 0x14;
  return;
}


// --- TryBookingThePlayer @ 001129ea ---

/* in:
        A1 -> player sprite
        A6 -> team (general)
   out:
        zero flag = 1, D0 = 0, card given
        zero flag = 0, D0 = 1, card not given */

ushort __usercall TryBookingThePlayer(Sprite *player,TeamGeneralInfo *team)

{
  TeamGame *pTVar1;
  TeamStatisticsData *pTVar2;
  word *pwVar3;
  short sVar4;
  word wVar5;
  byte *pbVar6;
  
  if (plg_D3_param == 0) {
    if ((team->playerNumber == 0) && (team->playerCoachNumber == 0)) {
      return 1;
    }
  }
  else if (((team->playerNumber == 0) && (team->playerCoachNumber == 0)) && (player->cards != 0)) {
    return 1;
  }
  if (player->cards != 0) {
    wVar5 = team2NumAllowedInjuries;
    if (team->teamNumber == 1) {
      wVar5 = team1NumAllowedInjuries;
    }
    if (wVar5 == 0) {
      return 1;
    }
  }
  pTVar1 = team->inGameTeamPtr;
  sVar4 = *(short *)((int)ingameTeamPlayerOffsets + (int)(short)((player->playerOrdinal - 1) * 2));
  if (plg_D3_param == 0) {
    pbVar6 = cardAnimStatesNoFlag;
    if (pTVar1->players[0].shortName[sVar4 + -3] != 0) {
      pbVar6 = cardAnimStatesWithFlag;
    }
    pTVar1->players[0].shortName[sVar4 + -2] = pbVar6[(short)(player->cards + 1)];
  }
  else if (pTVar1->players[0].shortName[sVar4 + -2] == 0) {
    pTVar1->players[0].shortName[sVar4 + -2] = 1;
  }
  else {
    pTVar1->players[0].shortName[sVar4 + -2] = 3;
  }
  player->cards = player->cards + 1;
  refTimer = 0;
  bookedPlayer = player;
  lastTeamBooked = team;
  if (player->cards != 2) {
    whichCard = CARD_YELLOW;
    pwVar3 = &team->teamStatsPtr->bookings;
    *pwVar3 = *pwVar3 + 1;
    return 0;
  }
  whichCard = CARD_SECOND_YELLOW;
  pTVar2 = team->teamStatsPtr;
  pwVar3 = &pTVar2->bookings;
  *pwVar3 = *pwVar3 - 1;
  pwVar3 = &pTVar2->sendingsOff;
  *pwVar3 = *pwVar3 + 1;
  if (team->teamNumber == 1) {
    team1NumAllowedInjuries = team1NumAllowedInjuries - 1;
  }
  else {
    team2NumAllowedInjuries = team2NumAllowedInjuries - 1;
  }
  return 0;
}


// --- TrySendingOffThePlayer @ 00112afa ---

/* in:
        A1 -> player (sprite)
        A6 -> team (general) */

ushort __usercall TrySendingOffThePlayer(Sprite *player,TeamGeneralInfo *team)

{
  TeamGame *pTVar1;
  TeamStatisticsData *pTVar2;
  word *pwVar3;
  short sVar4;
  word wVar5;
  byte *pbVar6;
  
  if ((team->playerNumber != 0) || (team->playerCoachNumber != 0)) {
    wVar5 = team2NumAllowedInjuries;
    if (team->teamNumber == 1) {
      wVar5 = team1NumAllowedInjuries;
    }
    if (wVar5 != 0) {
      pTVar1 = team->inGameTeamPtr;
      sVar4 = *(short *)((int)ingameTeamPlayerOffsets +
                        (int)(short)((player->playerOrdinal - 1) * 2));
      if (plg_D3_param == 0) {
        pbVar6 = cardAnimStatesNoFlag;
        if (pTVar1->players[0].shortName[sVar4 + -3] != 0) {
          pbVar6 = cardAnimStatesWithFlag;
        }
        pTVar1->players[0].shortName[sVar4 + -2] = pbVar6[(short)((player->cards ^ 1) + 3)];
      }
      else {
        pTVar1->players[0].shortName[sVar4 + -2] = 3;
      }
      refTimer = 0;
      whichCard = CARD_RED;
      pTVar2 = team->teamStatsPtr;
      bookedPlayer = player;
      lastTeamBooked = team;
      if (player->cards == 1) {
        pwVar3 = &pTVar2->bookings;
        *pwVar3 = *pwVar3 - 1;
      }
      pwVar3 = &pTVar2->sendingsOff;
      *pwVar3 = *pwVar3 + 1;
      if (team->teamNumber == 1) {
        team1NumAllowedInjuries = team1NumAllowedInjuries - 1;
      }
      else {
        team2NumAllowedInjuries = team2NumAllowedInjuries - 1;
      }
      return 0;
    }
  }
  return 1;
}


// --- ShouldGoalkeeperDive @ 00112bf6 ---

short __usercall ShouldGoalkeeperDive(Sprite *goalie,Sprite *ball,TeamGeneralInfo *team)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  word wVar4;
  ushort uVar5;
  
  wVar4 = kKeeperPenaltySaveDistanceFar;
  sVar2 = (ball->y).s.i - (goalie->y).s.i;
  if (team != &topTeamData) {
    sVar2 = -sVar2;
  }
  if (sVar2 < 0) {
    if (-0xb < sVar2) {
      return 1;
    }
  }
  else if (-1 < sVar2) {
    if ((playingPenalties == 0) && (penalty == 0)) {
      sVar1 = kKeeperSaveDistance;
      if (sVar2 <= sVar1) {
        uVar3 = (ball->y).s.i - (goalie->y).s.i;
        if ((short)uVar3 < 0) {
          uVar3 = -uVar3;
        }
        uVar3 = GetFramesNeededToCoverDistance((ball->deltaY).raw,uVar3);
        if (uVar3 != 0) {
          uVar5 = ballDefensiveX - (goalie->x).s.i;
          if ((short)uVar5 < 0) {
            uVar5 = -uVar5;
          }
          uVar5 = GetFramesNeededToCoverDistance((goalie->deltaX).raw,uVar5);
          if ((uVar5 != 0) && (uVar3 < uVar5)) {
            uVar5 = ballDefensiveX - (goalie->x).s.i;
            if ((short)uVar5 < 0) {
              uVar5 = -uVar5;
            }
            dseg_114EB0 = dseg_114EB0 + 1;
            uVar5 = GetFramesNeededToCoverDistance
                              (*(int *)((int)kGoalkeeperDiveDeltas +
                                       (int)(short)(*(short *)((int)team->shotChanceTable->
                                                                    index_dseg_11061B +
                                                              (int)(short)((currentGameTick & 0x3c)
                                                                          >> 1)) << 2)),uVar5);
            if ((uVar5 != 0) && (uVar3 <= uVar5)) {
              return 1;
            }
          }
        }
      }
    }
    else {
      uVar3 = Rand();
      if ((uVar3 & 0x18) != 0) {
        wVar4 = kKeeperPenaltySaveDistanceNear[0];
      }
      if (sVar2 <= (short)wVar4) {
        return 1;
      }
    }
  }
  return 0;
}


// --- GetFramesNeededToCoverDistance @ 00112ce0 ---

/* in:
        D0 - movement delta, distance in a single frame (fixed point)
             (absolute value is taken)
        D4 - distance to cover (integer)
   out:
        D7 - frames needed to cover the given distance (integer)
   
   Does division D4/D0 using loops, without direct divide instruction.
   If they're exactly divisible it will return one more, e.g. 9/3 -> 4.
   If D0 is less than 1, scales it up as well as the value which gets
   subtracted from D4 in a loop, to limit the number of loops when D0 < 1.
   It will fail for extremely low D0 values.
   Called to calculate on both x and y directions. */

ushort __usercall GetFramesNeededToCoverDistance(int movementDeltaFp16_16,ushort distance)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  
  if (movementDeltaFp16_16 == 0) {
    return 0;
  }
  if (movementDeltaFp16_16 < 0) {
    movementDeltaFp16_16 = -movementDeltaFp16_16;
  }
  sVar2 = 1;
  for (; (uint)movementDeltaFp16_16 < 0x10000; movementDeltaFp16_16 = movementDeltaFp16_16 << 1) {
    sVar2 = sVar2 << 1;
  }
  iVar1 = (uint)distance << 0x10;
  uVar3 = 0;
  do {
    uVar3 = sVar2 + uVar3;
    iVar1 = iVar1 - movementDeltaFp16_16;
  } while (-1 < iVar1);
  return uVar3;
}


// --- UpdateBallVariables @ 00112d14 ---

/* in:
        A1 -> player sprite
        A2 -> ball sprite
        A6 -> team (general) */

short __usercall
UpdateBallVariables(Sprite *playerSprite,Sprite *ballSprite,TeamGeneralInfo *teamInfo)

{
  dword dVar1;
  dword dVar2;
  short unaff_D0w;
  dword dVar3;
  int iVar4;
  int iVar5;
  dword dVar6;
  uint uVar7;
  uint uVar8;
  dword dVar9;
  bool bVar10;
  
  dVar3 = (ballSprite->x).raw;
  dVar6 = (ballSprite->y).raw;
  uVar8 = (ballSprite->z).raw;
  dVar1 = (ballSprite->deltaX).raw;
  dVar2 = (ballSprite->deltaY).raw;
  dVar9 = (ballSprite->deltaZ).raw;
  if ((int)dVar2 < -0x10000) {
    if (teamInfo == &topTeamData) {
      iVar4 = dVar6 - (playerSprite->y).raw;
      if ((int)dVar6 < (int)(playerSprite->y).raw) {
        ballDefensiveX = (ballSprite->x).s.i;
        ballDefensiveY = (ballSprite->y).s.i;
        ballDefensiveZ = (ballSprite->z).s.i;
        iVar4 = (playerSprite->y).raw + iVar4;
      }
      else {
        do {
          dVar9 = dVar9 - kGravityConstant;
          uVar8 = dVar9 + uVar8;
          dVar3 = dVar1 + dVar3;
          bVar10 = SCARRY4(dVar2,iVar4);
          iVar4 = dVar2 + iVar4;
        } while (bVar10 == iVar4 < 0);
        dVar3 = dVar3 - dVar1;
        uVar8 = uVar8 - dVar9;
        iVar4 = (playerSprite->y).raw + (iVar4 - dVar2);
        uVar7 = uVar8 * 0x10000 | uVar8 >> 0x10;
        ballDefensiveX = (word)(dVar3 >> 0x10);
        ballDefensiveY = (word)((uint)iVar4 >> 0x10);
        if ((int)uVar8 < 0) {
          uVar7 = uVar8 * 0x10000;
        }
        ballDefensiveZ = (word)uVar7;
        uVar8 = uVar7 << 0x10 | uVar7 >> 0x10;
      }
      iVar5 = iVar4 + -0x870000;
      if (iVar4 < 0x870000) {
        ballNotHighX = ballDefensiveX;
        ballNotHighY = ballDefensiveY;
        ballNotHighZ = ballDefensiveZ;
      }
      else {
        do {
          dVar9 = dVar9 - kGravityConstant;
          uVar8 = dVar9 + uVar8;
          dVar3 = dVar1 + dVar3;
          bVar10 = SCARRY4(dVar2,iVar5);
          iVar5 = dVar2 + iVar5;
        } while (bVar10 == iVar5 < 0);
        dVar3 = dVar3 - dVar1;
        uVar8 = uVar8 - dVar9;
        uVar7 = uVar8 * 0x10000 | uVar8 >> 0x10;
        ballNotHighX = (word)(dVar3 >> 0x10);
        ballNotHighY = 0x87;
        if ((int)uVar8 < 0) {
          uVar7 = uVar8 * 0x10000;
        }
        ballNotHighZ = (word)uVar7;
        iVar4 = 0x870000;
        uVar8 = uVar7 << 0x10 | uVar7 >> 0x10;
      }
      iVar5 = iVar4 + -0x810000;
      if (0x80ffff < iVar4) {
        do {
          dVar9 = dVar9 - kGravityConstant;
          uVar8 = dVar9 + uVar8;
          dVar3 = dVar1 + dVar3;
          bVar10 = SCARRY4(dVar2,iVar5);
          iVar5 = dVar2 + iVar5;
        } while (bVar10 == iVar5 < 0);
        strikeDestX = (word)(dVar3 - dVar1 >> 0x10);
        if ((int)(uVar8 - dVar9) < 0) {
          strikeDestY = 0x81;
          strikeDestZ = 0;
          return unaff_D0w;
        }
        strikeDestY = 0x81;
        strikeDestZ = (word)(uVar8 - dVar9 >> 0x10);
        return unaff_D0w;
      }
      strikeDestX = 0;
      strikeDestY = 0;
      strikeDestZ = 0;
      return unaff_D0w;
    }
  }
  else if ((int)dVar2 < 0x10001) {
    if ((int)dVar1 < -0x10000) {
      iVar4 = dVar3 - (playerSprite->x).raw;
      if ((int)(playerSprite->x).raw <= (int)dVar3) {
        do {
          dVar9 = dVar9 - kGravityConstant;
          uVar8 = dVar9 + uVar8;
          dVar6 = dVar2 + dVar6;
          bVar10 = SCARRY4(dVar1,iVar4);
          iVar4 = dVar1 + iVar4;
        } while (bVar10 == iVar4 < 0);
        ballDefensiveZ = (word)(uVar8 - dVar9 >> 0x10);
        ballDefensiveX = (word)((playerSprite->x).raw + (iVar4 - dVar1) >> 0x10);
        ballDefensiveY = (word)(dVar6 - dVar2 >> 0x10);
        if (-1 < (int)(uVar8 - dVar9)) {
          ballNotHighX = ballDefensiveX;
          ballNotHighY = ballDefensiveY;
          ballNotHighZ = ballDefensiveZ;
          strikeDestX = 0;
          strikeDestY = 0;
          strikeDestZ = 0;
          return unaff_D0w;
        }
        ballDefensiveZ = 0;
        ballNotHighX = ballDefensiveX;
        ballNotHighY = ballDefensiveY;
        ballNotHighZ = 0;
        strikeDestX = 0;
        strikeDestY = 0;
        strikeDestZ = 0;
        return unaff_D0w;
      }
    }
    else if ((0x10000 < (int)dVar1) &&
            (iVar4 = dVar3 - (playerSprite->x).raw, (int)dVar3 < (int)(playerSprite->x).raw)) {
      do {
        dVar9 = dVar9 - kGravityConstant;
        uVar8 = dVar9 + uVar8;
        dVar6 = dVar2 + dVar6;
        bVar10 = SCARRY4(dVar1,iVar4);
        iVar4 = dVar1 + iVar4;
      } while (bVar10 != iVar4 < 0);
      ballDefensiveZ = (word)(uVar8 - dVar9 >> 0x10);
      ballDefensiveX = (word)((playerSprite->x).raw + (iVar4 - dVar1) >> 0x10);
      ballDefensiveY = (word)(dVar6 - dVar2 >> 0x10);
      if (-1 < (int)(uVar8 - dVar9)) {
        ballNotHighX = ballDefensiveX;
        ballNotHighY = ballDefensiveY;
        ballNotHighZ = ballDefensiveZ;
        strikeDestX = 0;
        strikeDestY = 0;
        strikeDestZ = 0;
        return unaff_D0w;
      }
      ballDefensiveZ = 0;
      ballNotHighX = ballDefensiveX;
      ballNotHighY = ballDefensiveY;
      ballNotHighZ = 0;
      strikeDestX = 0;
      strikeDestY = 0;
      strikeDestZ = 0;
      return unaff_D0w;
    }
  }
  else if (teamInfo == &bottomTeamData) {
    iVar4 = dVar6 - (playerSprite->y).raw;
    if ((int)dVar6 < (int)(playerSprite->y).raw) {
      do {
        dVar9 = dVar9 - kGravityConstant;
        uVar8 = dVar9 + uVar8;
        dVar3 = dVar1 + dVar3;
        bVar10 = SCARRY4(dVar2,iVar4);
        iVar4 = dVar2 + iVar4;
      } while (bVar10 != iVar4 < 0);
      dVar3 = dVar3 - dVar1;
      uVar8 = uVar8 - dVar9;
      iVar4 = (playerSprite->y).raw + (iVar4 - dVar2);
      uVar7 = uVar8 * 0x10000 | uVar8 >> 0x10;
      ballDefensiveX = (word)(dVar3 >> 0x10);
      ballDefensiveY = (word)((uint)iVar4 >> 0x10);
      if ((int)uVar8 < 0) {
        uVar7 = uVar8 * 0x10000;
      }
      ballDefensiveZ = (word)uVar7;
      uVar8 = uVar7 << 0x10 | uVar7 >> 0x10;
    }
    else {
      ballDefensiveX = (ballSprite->x).s.i;
      ballDefensiveY = (ballSprite->y).s.i;
      ballDefensiveZ = (ballSprite->z).s.i;
      iVar4 = (playerSprite->y).raw + iVar4;
    }
    iVar5 = iVar4 + -0x2fb0000;
    if (iVar4 < 0x2fb0000) {
      do {
        dVar9 = dVar9 - kGravityConstant;
        uVar8 = dVar9 + uVar8;
        dVar3 = dVar1 + dVar3;
        bVar10 = SCARRY4(dVar2,iVar5);
        iVar5 = dVar2 + iVar5;
      } while (bVar10 != iVar5 < 0);
      dVar3 = dVar3 - dVar1;
      uVar8 = uVar8 - dVar9;
      uVar7 = uVar8 * 0x10000 | uVar8 >> 0x10;
      ballNotHighX = (word)(dVar3 >> 0x10);
      ballNotHighY = 0x2fb;
      if ((int)uVar8 < 0) {
        uVar7 = uVar8 * 0x10000;
      }
      ballNotHighZ = (word)uVar7;
      iVar4 = 0x2fb0000;
      uVar8 = uVar7 << 0x10 | uVar7 >> 0x10;
    }
    else {
      ballNotHighX = ballDefensiveX;
      ballNotHighY = ballDefensiveY;
      ballNotHighZ = ballDefensiveZ;
    }
    iVar5 = iVar4 + -0x3010000;
    if (iVar4 < 0x3010000) {
      do {
        dVar9 = dVar9 - kGravityConstant;
        uVar8 = dVar9 + uVar8;
        dVar3 = dVar1 + dVar3;
        bVar10 = SCARRY4(dVar2,iVar5);
        iVar5 = dVar2 + iVar5;
      } while (bVar10 != iVar5 < 0);
      strikeDestX = (word)(dVar3 - dVar1 >> 0x10);
      if ((int)(uVar8 - dVar9) < 0) {
        strikeDestY = 0x301;
        strikeDestZ = 0;
        return unaff_D0w;
      }
      strikeDestY = 0x301;
      strikeDestZ = (word)(uVar8 - dVar9 >> 0x10);
      return unaff_D0w;
    }
    strikeDestX = 0;
    strikeDestY = 0;
    strikeDestZ = 0;
    return unaff_D0w;
  }
  ballNotHighX = (ballSprite->x).s.i;
  ballNotHighY = (ballSprite->y).s.i;
  ballNotHighZ = (ballSprite->z).s.i;
  strikeDestZ = 0;
  strikeDestY = 0;
  strikeDestX = 0;
  ballDefensiveZ = ballNotHighZ;
  ballDefensiveY = ballNotHighY;
  ballDefensiveX = ballNotHighX;
  return unaff_D0w;
}


// --- CalculateBallNextGroundXYPositions @ 0011307e ---

/* in:
        A2 -> ball sprite */

short __usercall CalculateBallNextGroundXYPositions(Sprite *ball)

{
  dword dVar1;
  dword dVar2;
  short unaff_D0w;
  byte *pbVar3;
  dword dVar4;
  dword dVar5;
  byte *pbVar6;
  int iVar7;
  dword dVar8;
  
  dVar4 = (ball->x).raw;
  dVar5 = (ball->y).raw;
  pbVar6 = (byte *)(ball->z).raw;
  dVar1 = (ball->deltaX).raw;
  dVar2 = (ball->deltaY).raw;
  if (((((int)dVar2 < -0x10000) || (0x10000 < (int)dVar2)) || ((int)dVar1 < -0x10000)) ||
     (0x10000 < (int)dVar1)) {
    dVar8 = (ball->deltaZ).raw;
    pbVar3 = &BYTE_00140000;
    while (iVar7 = (int)pbVar6 - (int)pbVar3, iVar7 < 0) {
      if (pbVar3 == (byte *)0xd0000) goto ball_standing;
      pbVar6 = pbVar3 + iVar7;
      pbVar3 = pbVar3 + -0x10000;
    }
    do {
      dVar4 = dVar1 + dVar4;
      dVar5 = dVar2 + dVar5;
      dVar8 = dVar8 - kGravityConstant;
      iVar7 = dVar8 + iVar7;
    } while (-1 < iVar7);
    ballNextGroundX = (word)(dVar4 >> 0x10);
    ballNextYGroundY = (word)(dVar5 >> 0x10);
    ballNextZDeadVar = 0;
  }
  else {
ball_standing:
    ballNextGroundX = 0xffff;
  }
  return unaff_D0w;
}


// --- PlayerTacklingTestFoul @ 00113122 ---

/* in:
        A1 -> sprite (player)
        A2 -> sprite (ball)
        A6 -> team data
   
   Check if the tackle ends up in faul, there must be a few conditions satisfied:
   - opponent has a controlled player
   - distance between them is more than 32 units */

void __usercall
PlayerTacklingTestFoul(Sprite *playerSprite,Sprite *ballSprite,TeamGeneralInfo *teamInfo)

{
  Sprite *pSVar1;
  Sprite *playerSprite_00;
  word *pwVar2;
  word wVar3;
  word wVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  ushort uVar9;
  short sVar10;
  uint uVar11;
  Sprite **ppSVar12;
  bool bVar13;
  
  playerSprite_00 = teamInfo->opponentsTeam->controlledPlayer;
  if ((playerSprite_00 == (Sprite *)0x0) ||
     (sVar10 = (playerSprite->x).s.i - (playerSprite_00->x).s.i,
     sVar8 = (playerSprite->y).s.i - (playerSprite_00->y).s.i,
     0x20 < (uint)((int)sVar8 * (int)sVar8 + (int)sVar10 * (int)sVar10))) {
    return;
  }
  if (playerSprite_00->playerOrdinal == 1) {
    playerSprite->speed = playerSprite->speed >> 1;
    playerSprite->speed = playerSprite->speed >> 1;
    playerSprite->speed = playerSprite->speed | 1;
    return;
  }
  if (playerSprite_00->playerOrdinal == 1) {
    return;
  }
  if ((short)(playerSprite_00->x).s.i < 0x51) {
    return;
  }
  if ((short)(playerSprite_00->y).s.i < 0x81) {
    return;
  }
  if (0x24e < (short)(playerSprite_00->x).s.i) {
    return;
  }
  if (0x301 < (short)(playerSprite_00->y).s.i) {
    return;
  }
  playerSprite->speed = playerSprite->speed >> 1;
  playerSprite->speed = playerSprite->speed >> 1;
  playerSprite->speed = playerSprite->speed | 1;
  PlayerTackled(playerSprite_00,teamInfo->opponentsTeam);
  if (800 < playerSprite_00->ballDistance) {
    return;
  }
  if (playerSprite->tackleState != 0) {
    if (playerSprite->tackleState == TS_GOOD_TACKLE) {
      return;
    }
    sVar10 = playerSprite->direction - playerSprite_00->direction;
    if (sVar10 < -1) {
      return;
    }
    if (1 < sVar10) {
      return;
    }
  }
  pwVar2 = &teamInfo->teamStatsPtr->foulsConceded;
  *pwVar2 = *pwVar2 + 1;
  if ((cardsDisallowed != 0) || (g_trainingGame != 0)) goto skip_cards_go_check_free_kick_penalty;
  wVar3 = (playerSprite_00->x).s.i;
  wVar4 = (playerSprite_00->y).s.i;
  if (((short)wVar3 < 0xc1) ||
     (((0x1de < (short)wVar3 || ((short)wVar4 < 0x81)) || (0x301 < (short)wVar4)))) {
set_discipline_spot_y_for_bottom_team:
    sVar10 = 0x81;
    if (teamInfo != &topTeamData) {
      sVar10 = 0x301;
    }
    sVar8 = (playerSprite_00->x).s.i - 0x150;
    sVar6 = (playerSprite_00->y).s.i - sVar10;
    uVar11 = (int)sVar8 * (int)sVar8 + (int)sVar6 * (int)sVar6;
    sVar8 = 10;
    ppSVar12 = teamInfo->spritesTable;
    dword_2DAB0 = (dword)playerSprite_00;
    do {
      pSVar1 = *ppSVar12;
      if (((pSVar1->sentAway == 0) && (pSVar1->playerOrdinal != 1)) &&
         ((pSVar1 != playerSprite &&
          (sVar6 = (pSVar1->x).s.i - 0x150, sVar7 = (pSVar1->y).s.i - sVar10,
          uVar5 = (int)sVar7 * (int)sVar7 + (int)sVar6 * (int)sVar6, uVar5 <= uVar11)))) {
        uVar11 = uVar5;
        dword_2DAB0 = (dword)pSVar1;
      }
      sVar8 = sVar8 + -1;
      ppSVar12 = ppSVar12 + 1;
    } while (sVar8 != -1);
    if (playerSprite_00 != (Sprite *)dword_2DAB0) goto maybe_issue_card_probabilistic;
    uVar9 = Rand();
    bVar13 = uVar9 == 0x20;
    if (0x1f < uVar9) goto try_straight_red_then_notify;
  }
  else {
    if (teamInfo == &topTeamData) {
      if (0xd8 < (short)wVar4) goto set_discipline_spot_y_for_bottom_team;
    }
    else if ((short)wVar4 < 0x2aa) goto set_discipline_spot_y_for_bottom_team;
maybe_issue_card_probabilistic:
    if (playerCardChance <= (currentGameTick & 0x1e) >> 1)
    goto skip_cards_go_check_free_kick_penalty;
    uVar9 = Rand();
    bVar13 = uVar9 == 0x20;
    if (uVar9 < 0x20) {
try_straight_red_then_notify:
      TrySendingOffThePlayer(playerSprite,teamInfo);
      if (bVar13) {
        TestFoulForPenaltyAndFreeKick(playerSprite_00,teamInfo);
        ActivateReferee();
        return;
      }
      goto skip_cards_go_check_free_kick_penalty;
    }
  }
  TryBookingThePlayer(playerSprite,teamInfo);
  if (bVar13) {
    TestFoulForPenaltyAndFreeKick(playerSprite_00,teamInfo);
    ActivateReferee();
    return;
  }
skip_cards_go_check_free_kick_penalty:
  TestFoulForPenaltyAndFreeKick(playerSprite_00,teamInfo);
  return;
}


// --- GoalkeeperCaughtTheBall @ 001132fe ---

/* There was a shot on goal, but goalkeeper managed to throw himself and catch
   the ball (and save the day). (I think) */

void __usercall GoalkeeperCaughtTheBall(Sprite *keeper,TeamGeneralInfo *team)

{
  if (team == &topTeamData) {
    keeper->direction = 4;
  }
  else {
    keeper->direction = 0;
  }
  team->goalkeeperDivingLeft = 0;
  SetPlayerAnimationTable(&goalieCatchingBallAnimTable,keeper);
  keeper->playerState = PL_GOALIE_CATCHING_BALL;
  keeper->playerDownTimer = 0xf;
  keeper->speed = kGoalkeeperCatchSpeed;
  keeper->destX = ballNextGroundX;
  keeper->destY = ballNextYGroundY;
  if ((short)keeper->destY < 0x8a) {
    keeper->destY = 0x89;
  }
  if (0x2f8 < (short)keeper->destY) {
    keeper->destY = 0x2f9;
  }
  return;
}


// --- GoalkeeperDeflectedBall @ 00113362 ---

/* in:
        A2 -> ball sprite
        A6 -> player team (general) */

int __usercall GoalkeeperDeflectedBall(Sprite *ball,TeamGeneralInfo *team)

{
  dword dVar1;
  ushort uVar2;
  short sVar3;
  word wVar4;
  
  sVar3 = 0;
  if (team != &bottomTeamData) {
    sVar3 = 4;
  }
  ball->destX = *(short *)((int)kDefaultDestinations + (int)(short)(sVar3 << 2)) + (ball->x).s.i;
  ball->destY = *(short *)((int)kDefaultDestinations + (short)(sVar3 << 2) + 2) + (ball->y).s.i;
  ball->destX = (currentGameTick & 0x1f) * 0x20 + -0x200 + ball->destX;
  uVar2 = ((currentGameTick & 0x3c) >> 2) - team->shotChanceTable->field_34;
  wVar4 = kGoalkeeperStrongDeflectBallSpeed;
  if ((-1 < (int)((uint)uVar2 << 0x10)) &&
     (wVar4 = kGoalkeeperMediumDeflectBallSpeed,
     -1 < (int)((uint)(ushort)(uVar2 - team->shotChanceTable->field_36) << 0x10))) {
    wVar4 = kGoalkeeperWeakDeflectBallSpeed;
  }
  ball->speed = wVar4 + ((currentGameTick & 0x1ff) - 0x100);
  dVar1 = kGoalkeeperDeflectDeltaZ + (currentGameTick & 0x7f) * 0x100 + -0x4000;
  (ball->deltaZ).raw = dVar1;
  ResetBothTeamSpinTimers();
  PlayKickSample();
  return dVar1;
}


// --- GoalkeeperJumping @ 0011345e ---

/* in:
        D0 -  direction
        D1 -  goalkeeper far jump speed flag, overrides goalkeeper jump speed if:
                  0 - no influence, use high speed as usual (2048)
                  1 - use lower speed (1280)
                  * - anything else: use low speed (1024) + low byte of currentGameTick
                      effectively random: 1024..1279
        D3 -  also some direction
        A1 -> player sprite
        A6 -> player team (general) */

void __usercall
GoalkeeperJumping(short direction,short farJumpVariant,short dir2,Sprite *player,Sprite *ball,
                 TeamGeneralInfo *team)

{
  word wVar1;
  short sVar2;
  
  if (player->ballDistance < 0x81) {
    wVar1 = kGoalkeeperNearJumpSpeed;
    player->speed = wVar1;
  }
  else {
    player->speed = kGoalkeeperFarJumpSpeed;
    if ((farJumpVariant != 0) &&
       (player->speed = kGoalkeeperFarJumpSlowerSpeed, farJumpVariant != 1)) {
      sVar2 = kGoalkeeperNearJumpSpeed;
      player->speed = sVar2 + (currentGameTick & 0xff);
    }
  }
  *(undefined1 *)&team->field_46 = 0;
  team->goalkeeperDivingRight = 0;
  if (ballNotHighZ < 6) {
    player->playerState = PL_GOALIE_DIVING_LOW;
    if (team == &bottomTeamData) {
      SetPlayerAnimationTable(rightGoalieJumpingLowAnimTable,player);
    }
    else {
      SetPlayerAnimationTable(&leftGoalieJumpingLowAnimTable,player);
    }
  }
  else {
    player->playerState = PL_GOALIE_DIVING_HIGH;
    if (team == &bottomTeamData) {
      SetPlayerAnimationTable(&rightGoalieJumpingHighAnimTable,player);
    }
    else {
      SetPlayerAnimationTable(leftGoalieJumpingHighAnimTable,player);
    }
  }
  player->playerDownTimer = 0x4b;
  team->controlledPlDirection = direction;
  player->destX = (player->x).s.i + *(short *)((int)kDefaultDestinations + (int)(short)(dir2 << 2));
  player->destY = (player->y).s.i + *(short *)((int)kDefaultDestinations + (short)(dir2 << 2) + 2);
  return;
}


// --- PlayerBeginTackling @ 0011353a ---

/* in:
       D0 -  currently pressed direction
       A1 -> player sprite that's tackling
       
   Set player state to tackling. Set his dest x and y with a table, and set speed to taclking speed.
    */

void __usercall PlayerBeginTackling(short pressedDir,Sprite *player,TeamGeneralInfo *team)

{
  player->tackleState = 0;
  team->controlledPlDirection = pressedDir;
  player->direction = pressedDir;
  SetPlayerAnimationTable(&plTacklingAnimTable,player);
  player->playerState = PL_TACKLING;
  player->playerDownTimer = 0x32;
  if (team->inGameTeamPtr->players[0].shortName
      [*(short *)((int)ingameTeamPlayerOffsets + (int)(short)((player->playerOrdinal - 1) * 2)) + -4
      ] != 0) {
    player->playerDownTimer = 0x19;
  }
  player->playerDownTimer = 0xff;
  player->destX =
       (player->x).s.i + *(short *)((int)kDefaultDestinations + (int)(short)(pressedDir << 2));
  player->destY =
       (player->y).s.i + *(short *)((int)kDefaultDestinations + (short)(pressedDir << 2) + 2);
  player->speed = kPlayerTacklingSpeed;
  player->tacklingTimer = 0;
  return;
}


// --- PlayerTackledTheBallStrong @ 001135b6 ---

/* in:
        A1 -> sprite (player)
        A6 -> team (general)
        
   Player is tackling and hitting the ball. Adjust ball direction according to the player direction
   and
   controls direction (do deflected tackles). Set ball destination coordinates far away in that
   direction.
   Adjust ball speed after tackle to 125% of player's speed (100% if CPU player). Set player's speed
   afterward to 50%. If opponent's controlled player is more than 9u away from the ball and distance
   between the 2 players is greater than 32u it is considered a good tackle.
    u = sqr((x1 - x2) ^ 2) + sqr((y1 - y2) ^ 2) */

void __usercall PlayerTackledTheBallStrong(Sprite *player,TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  word wVar5;
  
  wVar5 = team->currentAllowedDirection;
  if ((short)wVar5 < 0) {
    wVar5 = player->direction;
  }
  uVar3 = player->direction - wVar5;
  if ((uVar3 == 0) || (uVar3 = uVar3 & 7, uVar3 == 4)) {
    uVar3 = player->direction;
  }
  else if (uVar3 < 4) {
    uVar3 = player->direction - 1;
  }
  else {
    uVar3 = player->direction + 1;
  }
  team->controlledPlDirection = uVar3 & 7;
  sVar4 = (uVar3 & 7) << 2;
  ballSprite.destX = ballSprite.x.s.i + *(short *)((int)kDefaultDestinations + (int)sVar4);
  ballSprite.destY = *(short *)((int)kDefaultDestinations + sVar4 + 2) + ballSprite.y.s.i;
  if (team->playerNumber == 0) {
    ballSprite.speed = player->speed;
  }
  else {
    ballSprite.speed = player->speed + (player->speed >> 2);
  }
  player->speed = player->speed >> 1;
  player->tackleState = 1;
  pSVar1 = team->opponentsTeam->controlledPlayer;
  if (((pSVar1 != (Sprite *)0x0) && (8 < pSVar1->ballDistance)) &&
     (sVar4 = (player->x).s.i - (pSVar1->x).s.i, sVar2 = (player->y).s.i - (pSVar1->y).s.i,
     0x20 < (uint)((int)sVar2 * (int)sVar2 + (int)sVar4 * (int)sVar4))) {
    player->tackleState = 2;
  }
  PlayKickSample();
  ResetBothTeamSpinTimers();
  return;
}


// --- PlayerAttemptingJumpHeader @ 00113694 ---

/* in:
        D0 -  direction
        A1 -> player sprite
        
   Player starts jumping in attempt to hit the ball with his head. Set his state
   and render him 'inoperable' for the next 55 cycles. Sets his animation table,
   dest x and y, and his speed. Only triggers for flying and lob header attempts,
   not for static ones.  */

void __usercall PlayerAttemptingJumpHeader(short direction,Sprite *player)

{
  player->heading = 0;
  player->direction = direction;
  SetPlayerAnimationTable(&jumpHeaderAttemptAnimTable,player);
  player->playerDownTimer = 0x32;
  player->playerState = PL_JUMP_HEADING;
  player->destX =
       (player->x).s.i + *(short *)((int)kDefaultDestinations + (int)(short)(direction << 2));
  player->destY =
       (player->y).s.i + *(short *)((int)kDefaultDestinations + (short)(direction << 2) + 2);
  player->speed = kJumpHeaderSpeed[0];
  return;
}


// --- GetBallDestCoordinatesTable @ 0011372a ---

/* out:
        A0 -> ball factor table, depending on game state
   
   Even indices are delta x, odd are delta y. They are added to ball
   delta x and y. Tables are different for each type of game halt.
   Called when player kicks the ball or does a pass. */

short * __usercall GetBallDestCoordinatesTable(void)

{
  if ((ST_THROW_IN_FORWARD_RIGHT - 1 < gameState) && (gameState < ST_THROW_IN_BACK_LEFT + 1)) {
    if (foulXCoordinate < 0x151) {
      return (short *)kLeftThrowInBallDestDelta;
    }
    return (short *)kRightThrowInBallDestDelta;
  }
  if ((gameState == ST_PENALTY) || (gameState == ST_PENALTIES)) {
    return (short *)kPenaltyBallDestDelta;
  }
  if ((gameState != ST_CORNER_LEFT) && (gameState != ST_CORNER_RIGHT)) {
    return (short *)kDefaultDestinations;
  }
  if (0x1c1 < foulYCoordinate) {
    if (foulXCoordinate < 0x151) {
      return (short *)kLowerLeftCornerBallDestDelta;
    }
    return (short *)kLowerRightCornerBallDestDelta;
  }
  if (foulXCoordinate < 0x151) {
    return (short *)kUpperLeftCornerBallDestDelta;
  }
  return (short *)kUpperRightCornerBallDestDelta;
}


// --- GetClosestNonControlledPlayerInDirection @ 001137be ---

/* in:
        D0 -  direction
        A6 -> team (general)
   out:
        A0 -> player sprite
        D2 -  ball distance
   
   Return pointer to player closest to the ball facing approximately given
   direction. Also return his distance from the ball. */

Sprite * __usercall GetClosestNonControlledPlayerInDirection(ushort direction,TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  Sprite *pSVar5;
  Sprite **ppSVar6;
  
  pSVar5 = (Sprite *)0xffffffff;
  uVar3 = 0xffffffff;
  sVar4 = 10;
  ppSVar6 = team->spritesTable;
  do {
    pSVar1 = *ppSVar6;
    if ((((pSVar1 != team->controlledPlayer) && (pSVar1->sentAway == 0)) &&
        (pSVar1->playerState == PL_NORMAL)) &&
       (((cVar2 = (char)pSVar1->fullDirection - (char)(direction << 5), -0x11 < cVar2 &&
         (cVar2 < '\x11')) && (pSVar1->ballDistance < uVar3)))) {
      uVar3 = pSVar1->ballDistance;
      pSVar5 = pSVar1;
    }
    sVar4 = sVar4 + -1;
    ppSVar6 = ppSVar6 + 1;
  } while (sVar4 != -1);
  return pSVar5;
}


// --- UpdateControllingPlayer @ 0011381a ---

/* in:
        A1 -> sprite (player) */

void __usercall UpdateControllingPlayer(Sprite *player)

{
  short sVar1;
  
  sVar1 = player->direction << 2;
  ballSprite.x.s.i = *(short *)((int)kBallPlOffsets + (int)sVar1) + (player->x).s.i;
  ballSprite.y.s.i = *(short *)((int)kBallPlOffsets + sVar1 + 2) + (player->y).s.i;
  ballSprite.speed = 0;
  ballSprite.z.s.i = 0;
  ballSprite.deltaZ.raw = ballSprite.deltaZ.raw >> 1;
  ballSprite.destX = ballSprite.x.s.i;
  ballSprite.destY = ballSprite.y.s.i;
  ResetBothTeamSpinTimers();
  return;
}


// --- UpdateBallWithControllingGoalkeeper @ 00113884 ---

/* in:
        A1 -> sprite of player that holds the ball
   
   Set ball coordinates in regard to player that controls it. Ball is
   always about a pixel in front of player, wherever he may be turned.
   If it's in the air, steady it down. */

void __usercall UpdateBallWithControllingGoalkeeper(Sprite *playerHoldingBall)

{
  short sVar1;
  
  sVar1 = playerHoldingBall->direction << 2;
  ballSprite.x.s.i = *(short *)((int)kBallPlOffsets + (int)sVar1) + (playerHoldingBall->x).s.i;
  ballSprite.y.s.i = *(short *)((int)kBallPlOffsets + sVar1 + 2) + (playerHoldingBall->y).s.i;
  ballSprite.speed = 0;
  ballSprite.deltaZ.raw = ballSprite.deltaZ.raw >> 1;
  if (-1 < (int)ballSprite.deltaZ.raw) {
    ballSprite.deltaZ.raw = -ballSprite.deltaZ.raw;
  }
  ballSprite.destX = ballSprite.x.s.i;
  ballSprite.destY = ballSprite.y.s.i;
  ResetBothTeamSpinTimers();
  return;
}


// --- UpdatePlayerWithBall @ 001138cc ---

/* in:
        A1 -> sprite
   
   Set coordinates of player that has the ball. Make him dodge
   a little, by varying x and y coordinates by 1. */

void __usercall UpdatePlayerWithBall(Sprite *player)

{
  word wVar1;
  word wVar2;
  short sVar3;
  
  sVar3 = player->direction << 2;
  wVar1 = *(short *)((int)kPlayerWithBallOffsets + (int)sVar3) + ballSprite.x.s.i;
  wVar2 = *(short *)((int)kPlayerWithBallOffsets + sVar3 + 2) + ballSprite.y.s.i;
  (player->x).s.i = wVar1;
  (player->y).s.i = wVar2;
  player->destX = wVar1;
  player->destY = wVar2;
  ResetBothTeamSpinTimers();
  return;
}


// --- SetThrowInPlayerDestinationCoordinates @ 00113932 ---

/* in:
        A1 -> player sprite that's taking the throw-in
   
   Sets the coordinates of a player that takes the throw in. */

void __usercall SetThrowInPlayerDestinationCoordinates(Sprite *player)

{
  word wVar1;
  
  if (ballSprite.x.s.i < 0x150) {
    wVar1 = ballSprite.x.s.i - 3;
  }
  else {
    wVar1 = ballSprite.x.s.i + 3;
  }
  (player->x).s.i = wVar1;
  player->destX = wVar1;
  (player->y).s.i = ballSprite.y.s.i;
  player->destY = ballSprite.y.s.i;
  return;
}


// --- ApplyBallAfterTouch @ 0011395e ---

/* in:
        A6 -> team data
        
   Apply "after effects" to pass/kick. Apply spin if player holding left/right
   directions, and high kick if player holding back direction. Also update ball
   for normal kicks too. Slow down ball after kick/pass. */

void __usercall ApplyBallAfterTouch(TeamGeneralInfo *team)

{
  int iVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  
  if (team->passInProgress != 0) {
    if (((short)team->opponentsTeam->goalkeeperSavedCommentTimer < 0) ||
       ((gameStatePl != ST_GAME_IN_PROGRESS && (gameState == ST_KEEPER_HOLDS_BALL))))
    goto out_reset_spin_timer;
    if ((short)team->spinTimer < 0) {
      return;
    }
    if (team->spinTimer == 0) {
      team->leftSpin = 0;
      team->rightSpin = 0;
      team->longPass = 0;
      team->longSpinPass = 0;
    }
    if (team->leftSpin == 0) {
      if (team->rightSpin != 0) {
pass_spining_right:
        sVar4 = 4;
        goto apply_spin_factor;
      }
      if (((-1 < (short)team->currentAllowedDirection) &&
          (uVar3 = team->controlledPlDirection - team->currentAllowedDirection, uVar3 != 0)) &&
         (uVar3 = uVar3 & 7, uVar3 != 4)) {
        if (uVar3 < 4) {
          team->leftSpin = 1;
          goto pass_spining_left;
        }
        team->rightSpin = 1;
        goto pass_spining_right;
      }
    }
    else {
pass_spining_left:
      sVar4 = 0;
apply_spin_factor:
      sVar4 = sVar4 + ballSprite.direction * 8;
      sVar2 = *(short *)((int)kSpinMultiplierFactor + (int)(short)(team->spinTimer << 1));
      ballSprite.destX = *(short *)((int)kPassingSpinFactor + (int)sVar4) * sVar2 + ballSprite.destX
      ;
      ballSprite.destY = *(short *)((int)kPassingSpinFactor + sVar4 + 2) * sVar2 + ballSprite.destY;
    }
    iVar1._0_2_ = team->longPass;
    iVar1._2_2_ = team->longSpinPass;
    if (iVar1 == 0) {
      if ((short)team->currentAllowedDirection < 0) {
holding_left_or_right:
        team->longPass = 1;
        ballSprite.speed = (ballSprite.speed >> 3) + ballSprite.speed;
      }
      else {
        uVar3 = team->controlledPlDirection - team->currentAllowedDirection;
        if (uVar3 != 0) {
          uVar3 = uVar3 & 7;
          if ((uVar3 == 2) || (uVar3 == 6)) goto holding_left_or_right;
          if ((2 < uVar3) && (uVar3 < 6)) {
            team->longSpinPass = 1;
            ballSprite.speed = (ballSprite.speed >> 3) + ballSprite.speed;
          }
        }
      }
    }
    team->spinTimer = team->spinTimer + 1;
    if (team->spinTimer != 10) {
      return;
    }
out_reset_spin_timer:
    team->spinTimer = 0xffff;
    return;
  }
  if (((short)team->opponentsTeam->goalkeeperSavedCommentTimer < 0) ||
     ((gameStatePl != ST_GAME_IN_PROGRESS && (gameState == ST_KEEPER_HOLDS_BALL))))
  goto reset_spin_timer_out;
  if ((short)team->spinTimer < 0) {
    return;
  }
  if (team->spinTimer == 0) {
    team->leftSpin = 0;
    team->rightSpin = 0;
  }
  if (team->leftSpin == 0) {
    if (team->rightSpin != 0) {
apply_right_spin:
      sVar4 = 4;
      goto calculate_initial_spin;
    }
    if (((-1 < (short)team->currentAllowedDirection) &&
        (uVar3 = team->controlledPlDirection - team->currentAllowedDirection, uVar3 != 0)) &&
       (uVar3 = uVar3 & 7, uVar3 != 4)) {
      if (uVar3 < 4) {
        team->leftSpin = 1;
        goto apply_left_spin;
      }
      team->rightSpin = 1;
      goto apply_right_spin;
    }
  }
  else {
apply_left_spin:
    sVar4 = 0;
calculate_initial_spin:
    sVar4 = sVar4 + team->controlledPlDirection * 8;
    sVar2 = *(short *)((int)kSpinMultiplierFactor + (int)(short)(team->spinTimer << 1));
    ballSprite.destX = *(short *)(kKickSpinFactor + sVar4) * sVar2 + ballSprite.destX;
    ballSprite.destY = *(short *)(kKickSpinFactor + sVar4 + 2) * sVar2 + ballSprite.destY;
  }
  if (team->spinTimer == 4) {
    if ((short)team->currentAllowedDirection < 0) {
normal_not_high_kick:
      ballSprite.deltaZ.raw = kNormalKickDeltaZ;
      ballSprite.speed = kNormalKickBallSpeed;
    }
    else {
      uVar3 = team->controlledPlDirection - team->currentAllowedDirection;
      if (uVar3 == 0) goto increase_spin_timer;
      uVar3 = uVar3 & 7;
      if ((uVar3 == 2) || (uVar3 == 6)) goto normal_not_high_kick;
      if ((uVar3 < 3) || (5 < uVar3)) goto increase_spin_timer;
      ballSprite.deltaZ.raw = kHighKickDeltaZ;
      ballSprite.speed = kHighKickBallSpeed;
    }
    if ((team->controlledPlDirection == 0) || (team->controlledPlDirection == 4)) {
      ballSprite.speed = ballSprite.speed - (ballSprite.speed >> 2);
    }
    else if ((team->controlledPlDirection & 1) != 0) {
      ballSprite.speed = (ballSprite.speed >> 3) + (ballSprite.speed - (ballSprite.speed >> 2));
    }
  }
increase_spin_timer:
  team->spinTimer = team->spinTimer + 1;
  if (team->spinTimer != 10) {
    return;
  }
reset_spin_timer_out:
  team->spinTimer = 0xffff;
  return;
}


// --- ResetBothTeamSpinTimers @ 00113be6 ---

void __usercall ResetBothTeamSpinTimers(void)

{
  topTeamData.spinTimer = 0xffff;
  bottomTeamData.spinTimer = 0xffff;
  return;
}


// --- TestFoulForPenaltyAndFreeKick @ 00113bf8 ---

/* in:
        A2 -> fouled player (sprite)
        A6 -> team that fouled (general info)
   
   Foul has been made. See where, and make it a penalty or
   free kick, depending on location. If not in appropriate
   areas, it's an ordinary foul. */

void __usercall TestFoulForPenaltyAndFreeKick(Sprite *player,TeamGeneralInfo *team)

{
  if (gameStatePl == ST_STOPPED) {
    return;
  }
  PlayFoulWhistleSample();
  nullsub_6();
  foulXCoordinate = (player->x).s.i;
  foulYCoordinate = (player->y).s.i;
  if (team == &topTeamData) {
    cameraDirection = 0;
    if ((((short)foulYCoordinate < 0xd9) && (0xc0 < (short)foulXCoordinate)) &&
       ((short)foulXCoordinate < 0x1df)) {
      gameState = ST_PENALTY;
      breakCameraMode = 0xffff;
      playerTurnFlags = 0x83;
      foulXCoordinate = 0x150;
      foulYCoordinate = 0xbb;
      PlayPenalty();
      goto apply_break_and_stop_play;
    }
    if ((0xd7 < (short)foulYCoordinate) && ((short)foulYCoordinate < 0x14b))
    goto select_fk_quadrant_by_side;
set_state_foul:
    gameState = ST_FOUL;
  }
  else {
    cameraDirection = 4;
    if (((0x2a9 < (short)foulYCoordinate) && (0xc0 < (short)foulXCoordinate)) &&
       ((short)foulXCoordinate < 0x1df)) {
      gameState = ST_PENALTY;
      breakCameraMode = 0xffff;
      playerTurnFlags = 0x38;
      foulXCoordinate = 0x150;
      foulYCoordinate = 0x2c7;
      PlayPenalty();
      goto apply_break_and_stop_play;
    }
    if (((short)foulYCoordinate < 0x237) || (0x2aa < (short)foulYCoordinate)) goto set_state_foul;
select_fk_quadrant_by_side:
    if (team == &bottomTeamData) {
      if ((short)foulXCoordinate < 0x99) {
set_free_kick_right3:
        gameState = ST_FREE_KICK_RIGHT3;
      }
      else if ((short)foulXCoordinate < 0x105) {
set_free_kick_right2:
        gameState = ST_FREE_KICK_RIGHT2;
      }
      else {
        if (0x134 < (short)foulXCoordinate) {
          if ((short)foulXCoordinate < 0x16a) goto set_free_kick_center;
          if ((short)foulXCoordinate < 0x19a) goto set_free_kick_left3;
          if ((short)foulXCoordinate < 0x206) goto set_free_kick_left2;
          goto set_free_kick_left1;
        }
set_free_kick_right1:
        gameState = ST_FREE_KICK_RIGHT1;
      }
    }
    else if ((short)foulXCoordinate < 0x99) {
set_free_kick_left1:
      gameState = ST_FREE_KICK_LEFT1;
    }
    else if ((short)foulXCoordinate < 0x105) {
set_free_kick_left2:
      gameState = ST_FREE_KICK_LEFT2;
    }
    else if ((short)foulXCoordinate < 0x135) {
set_free_kick_left3:
      gameState = ST_FREE_KICK_LEFT3;
    }
    else {
      if (0x169 < (short)foulXCoordinate) {
        if ((short)foulXCoordinate < 0x19a) goto set_free_kick_right1;
        if ((short)foulXCoordinate < 0x206) goto set_free_kick_right2;
        goto set_free_kick_right3;
      }
set_free_kick_center:
      gameState = ST_FREE_KICK_CENTER;
    }
  }
  breakCameraMode = 0xffff;
  playerTurnFlags = 0xff;
apply_break_and_stop_play:
  if (forceLeftTeam == 1) {
    team = &bottomTeamData;
  }
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  lastTeamPlayedBeforeBreak = team->opponentsTeam;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraYVelocity = 0;
  cameraXVelocity = 0;
  return;
}


// --- GoalkeeperClaimedTheBall @ 00113f4c ---

/* in:
        A1 -> goalkeeper sprite
        A2 -> ball sprite
        A6 -> player team (general) */

void __usercall GoalkeeperClaimedTheBall(Sprite *goalkeeper,Sprite *ball,TeamGeneralInfo *team)

{
  lastPlayerBeforeGoalkeeper = lastPlayerPlayed;
  lastTeamScored = lastTeamPlayed;
  ball->speed = 0;
  if (team == &bottomTeamData) {
    cameraDirection = 0;
    playerTurnFlags = 199;
  }
  else {
    cameraDirection = 4;
    playerTurnFlags = 0x7c;
  }
  if (team->playerNumber == 0) {
    playerTurnFlags = playerTurnFlags & 0xbb;
  }
  if (forceLeftTeam == 1) {
    team = &topTeamData;
  }
  gameState = ST_KEEPER_HOLDS_BALL;
  breakCameraMode = 0xffff;
  foulXCoordinate = ballSprite.x.s.i;
  foulYCoordinate = ballSprite.y.s.i;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  lastTeamPlayedBeforeBreak = team;
  StopAllPlayers();
  if ((team->goalkeeperDivingRight == 0) && (team->goalkeeperDivingLeft == 0)) {
    team->controlledPlayer = goalkeeper;
    *(undefined1 *)&team->ballOutOfPlayOrKeeper = 1;
    goalkeeper->direction = cameraDirection;
    *(undefined1 *)&team->goaliePlayingOrOut = 1;
    UpdatePlayerWithBall(goalkeeper);
    cameraXVelocity = 0;
    cameraYVelocity = 0;
  }
  return;
}


// --- StopAllPlayers @ 00114658 ---

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __usercall StopAllPlayers(void)

{
  lastCameraDirection = cameraDirection;
  lastPlayerTurnFlags = _playerTurnFlags;
  StopPlayers(&topTeamData);
  topTeamData.ballInPlay = 0;
  topTeamData.ballOutOfPlay = 0;
  topTeamData.controlledPlayer = (Sprite *)0x0;
  topTeamData.passToPlayerPtr = (Sprite *)0x0;
  topTeamData.passingBall = 0;
  topTeamData.passingToPlayer = 0;
  topTeamData.playerSwitchTimer = 0;
  topTeamData.passingKickingPlayer = (Sprite *)0x0;
  StopPlayers(&bottomTeamData);
  bottomTeamData.ballInPlay = 0;
  bottomTeamData.ballOutOfPlay = 0;
  bottomTeamData.controlledPlayer = (Sprite *)0x0;
  bottomTeamData.passToPlayerPtr = (Sprite *)0x0;
  bottomTeamData.passingBall = 0;
  bottomTeamData.passingToPlayer = 0;
  bottomTeamData.playerSwitchTimer = 0;
  bottomTeamData.passingKickingPlayer = (Sprite *)0x0;
  bottomTeamData.goalkeeperPlaying = 0;
  return;
}


// --- StopPlayers @ 001146c6 ---

/* in:
        A0 -> team (general info) */

void __usercall StopPlayers(TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  short sVar2;
  Sprite **ppSVar3;
  
  sVar2 = 10;
  ppSVar3 = team->spritesTable;
  do {
    pSVar1 = *ppSVar3;
    if ((((pSVar1->playerState == PL_HAPPY) || (pSVar1->playerState == PL_SAD)) ||
        (pSVar1->playerState == PL_NORMAL)) && (pSVar1->sentAway == 0)) {
      pSVar1->destX = (pSVar1->x).s.i;
      pSVar1->destY = (pSVar1->y).s.i;
    }
    sVar2 = sVar2 + -1;
    ppSVar3 = ppSVar3 + 1;
  } while (sVar2 != -1);
  return;
}


// --- UpdatePlayers @ 00114ee2 ---

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* in:
        A6 -> team data
        
   This is practically main SWOS procedure. Everything happens here.
   Binary size: 0x5438/21,560 bytes */

char __usercall UpdatePlayers(TeamGeneralInfo *teamInfo)

{
  TeamGeneralInfo *pTVar1;
  Sprite *pSVar2;
  Sprite *pSVar3;
  int iVar4;
  int iVar5;
  word *pwVar6;
  byte bVar7;
  word wVar8;
  uint uVar9;
  ushort uVar12;
  TeamGame *pTVar10;
  word wVar13;
  uint uVar11;
  ushort uVar14;
  undefined2 uVar15;
  undefined2 uVar36;
  undefined3 uVar16;
  undefined4 unaff_D1;
  word wVar20;
  short sVar21;
  short sVar22;
  undefined1 *puVar18;
  char cVar23;
  ushort uVar24;
  undefined4 unaff_D2;
  byte *pbVar25;
  short sVar27;
  FixedPoint_ FVar26;
  ushort uVar28;
  uint unaff_D3;
  undefined2 curX;
  ushort uVar29;
  GoalieSkill *pGVar30;
  Sprite **ppSVar31;
  PlayerInfoHeader *pPVar32;
  Sprite **ppSVar33;
  Position **ppPVar34;
  bool bVar35;
  undefined4 uVar17;
  FixedPoint_ FVar19;
  
  prevLastPlayer = (dword)lastPlayerPlayed;
  prevLastTeamPlayed = (dword)lastTeamPlayed;
  if (((lastKeeperPlayed != (Sprite *)0x0) && (lastPlayerPlayed != &goalie1Sprite)) &&
     (lastPlayerPlayed != &goalie2Sprite)) {
    lastKeeperPlayed = (Sprite *)0x0;
  }
  if (teamInfo->goalkeeperSavedCommentTimer != 0) {
    if ((short)teamInfo->goalkeeperSavedCommentTimer < 0) {
      teamInfo->goalkeeperSavedCommentTimer = teamInfo->goalkeeperSavedCommentTimer + 1;
    }
    else {
      teamInfo->goalkeeperSavedCommentTimer = teamInfo->goalkeeperSavedCommentTimer - 1;
    }
  }
  if ((teamInfo->passKickTimer != 0) &&
     (wVar13 = teamInfo->passKickTimer - 1, teamInfo->passKickTimer = wVar13, wVar13 == 0)) {
    teamInfo->passingKickingPlayer = (Sprite *)0x0;
  }
  if (teamInfo->wonTheBallTimer != 0) {
    teamInfo->wonTheBallTimer = teamInfo->wonTheBallTimer - 1;
  }
  if (teamInfo->playerSwitchTimer != 0) {
    teamInfo->playerSwitchTimer = teamInfo->playerSwitchTimer - 1;
  }
  ApplyBallAfterTouch(teamInfo);
  puVar18 = (undefined1 *)CONCAT22((short)((uint)unaff_D1 >> 0x10),ballSprite.x.s.i);
  pbVar25 = (byte *)CONCAT22((short)((uint)unaff_D2 >> 0x10),ballSprite.y.s.i);
  _ballInUpperPenaltyArea = 0;
  ballInGoalkeeperArea = 0;
  if (((0xc0 < (short)ballSprite.x.s.i) && ((short)ballSprite.x.s.i < 0x1df)) &&
     ((0x80 < (short)ballSprite.y.s.i && ((short)ballSprite.y.s.i < 0x302)))) {
    if ((short)ballSprite.y.s.i < 0xd9) {
      _ballInUpperPenaltyArea = 0x10000;
    }
    else {
      if ((short)ballSprite.y.s.i < 0x2aa) goto not_in_penalty_area;
      _ballInUpperPenaltyArea = 1;
    }
    if (((0x110 < (short)ballSprite.x.s.i) && ((short)ballSprite.x.s.i < 399)) &&
       (((short)ballSprite.y.s.i < 0x9f || (0x2e3 < (short)ballSprite.y.s.i)))) {
      ballInGoalkeeperArea = 1;
    }
  }
not_in_penalty_area:
  if (((gameStatePl == ST_GAME_IN_PROGRESS) && (goalOut != 0)) && (_ballInUpperPenaltyArea == 0)) {
    goalOut = 0;
  }
  teamInfo->updatePlayerIndex = teamInfo->updatePlayerIndex + 1;
  if (teamInfo->updatePlayerIndex == 0xb) {
    teamInfo->updatePlayerIndex = 0;
  }
  uVar29 = 10;
  ppSVar31 = teamInfo->spritesTable;
  do {
    uVar24 = (ushort)((uint)pbVar25 >> 0x10);
    uVar14 = (ushort)((uint)puVar18 >> 0x10);
    pSVar2 = *ppSVar31;
    pSVar2->playerDirection = pSVar2->direction;
    pTVar10 = (TeamGame *)((pSVar2->deltaY).raw | (pSVar2->deltaX).raw);
    *(char *)&pSVar2->isMoving = -(pTVar10 != (TeamGame *)0x0);
    if (pSVar2->playerState == PL_TACKLED) {
      bVar7 = pSVar2->playerDownTimer - 1;
      pSVar2->playerDownTimer = bVar7;
      if (bVar7 == 0) {
        if (pSVar2->injuryLevel == 0) {
          pSVar2->playerState = PL_NORMAL;
          SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          goto snap_dest_to_current_pos;
        }
        pSVar2->speed = 0;
        pSVar2->playerState = PL_ROLLING_INJURED;
        pSVar2->playerDownTimer = (byte)pSVar2->injuryLevel;
        SetPlayerAnimationTable(&plInjuredAnimTable,pSVar2);
      }
      else if (pSVar2->speed != 0) {
        if ((((short)(pSVar2->y).s.i < 0x9f) || (0x2e3 < (short)(pSVar2->y).s.i)) &&
           ((0x108 < (short)(pSVar2->x).s.i && ((short)(pSVar2->x).s.i < 0x197)))) {
          pSVar2->speed = pSVar2->speed - (pSVar2->speed >> 2);
        }
        wVar13 = pSVar2->speed - kPlayerGroundConstant;
        pSVar2->speed = wVar13;
        if ((short)wVar13 < 0) {
          pSVar2->speed = 0;
        }
      }
      goto finalize_control_and_speed;
    }
    if (pSVar2->playerState == PL_ROLLING_INJURED) {
      if ((injuriesForever[0] != 0) ||
         (bVar7 = pSVar2->playerDownTimer - 1, pSVar2->playerDownTimer = bVar7, bVar7 != 0))
      goto finalize_control_and_speed;
      pSVar2->playerState = PL_NORMAL;
      SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
      goto snap_dest_to_current_pos;
    }
    uVar28 = (ushort)(unaff_D3 >> 0x10);
    if ((((pSVar2 == teamInfo->controlledPlayer) || (pSVar2->playerOrdinal == 1)) ||
        (pSVar2 == teamInfo->passToPlayerPtr)) || (pSVar2->playerState != PL_NORMAL)) {
      teamInfo->prevPlVeryCloseToBall = teamInfo->plVeryCloseToBall;
      teamInfo->plVeryCloseToBall = 0;
      teamInfo->plCloseToBall = 0;
      teamInfo->plNotFarFromBall = 0;
      uVar11 = pSVar2->ballDistance;
      if (uVar11 < 0x21) {
        teamInfo->plVeryCloseToBall = 1;
      }
      else if (uVar11 < 0x49) {
        teamInfo->plCloseToBall = 1;
      }
      else if (uVar11 < 0x993) {
        teamInfo->plNotFarFromBall = 1;
      }
      teamInfo->ballLessEqual4 = 0;
      teamInfo->ball4To8 = 0;
      teamInfo->ball8To12 = 0;
      teamInfo->ball12To17 = 0;
      teamInfo->ballAbove17 = 0;
      pTVar10 = (TeamGame *)(uint)ballSprite.z.s.i;
      if ((ushort)ballSprite.z._0_2_ < 0x12) {
        if ((ushort)ballSprite.z._0_2_ < 0xd) {
          if ((ushort)ballSprite.z._0_2_ < 9) {
            if ((ushort)ballSprite.z._0_2_ < 5) {
              teamInfo->ballLessEqual4 = 1;
            }
            else {
              teamInfo->ball4To8 = 1;
            }
          }
          else {
            teamInfo->ball8To12 = 1;
          }
        }
        else {
          teamInfo->ball12To17 = 1;
        }
      }
      else {
        teamInfo->ballAbove17 = 1;
      }
      if (pSVar2->playerState == PL_TACKLING) {
        if (-1 < (short)pSVar2->tacklingTimer) {
          pSVar2->tacklingTimer = pSVar2->tacklingTimer + 1;
        }
        bVar7 = pSVar2->playerDownTimer - 1;
        pSVar2->playerDownTimer = bVar7;
        if (bVar7 == 0) {
          pSVar2->playerState = PL_NORMAL;
          SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          goto snap_dest_to_current_pos;
        }
        if (((-1 < (short)pSVar2->tacklingTimer) && (teamInfo->playerNumber != 0)) &&
           ((teamInfo->firePressed == 0 &&
            (pSVar2->tacklingTimer = -pSVar2->tacklingTimer, -3 < (short)pSVar2->tacklingTimer)))) {
          pSVar2->tacklingTimer = 0xffff;
        }
        wVar13 = kPlayerGroundConstant;
        if (pSVar2->speed != 0) {
          wVar20 = pSVar2->speed;
          wVar8 = wVar20 - kPlayerGroundConstant;
          pSVar2->speed = wVar8;
          if (wVar8 == 0 || (short)wVar20 < (short)wVar13) {
            pSVar2->speed = 0;
            SetPlayerDowntimeAfterTackle(pSVar2,teamInfo);
          }
          else if (((short)(pSVar2->x).s.i < 0x49) || (0x256 < (short)(pSVar2->x).s.i)) {
tackle_edge_generic_slowdown:
            pSVar2->speed = pSVar2->speed - (pSVar2->speed >> 3);
          }
          else if (((short)(pSVar2->y).s.i < 0x81) || (0x301 < (short)(pSVar2->y).s.i)) {
            if (((short)(pSVar2->x).s.i < 0x113) || (0x18c < (short)(pSVar2->x).s.i)) {
              if (((short)(pSVar2->y).s.i < 0x79) || (0x309 < (short)(pSVar2->y).s.i))
              goto tackle_edge_generic_slowdown;
            }
            else {
              pSVar2->speed = pSVar2->speed >> 1;
              pSVar2->speed = pSVar2->speed >> 1;
              pSVar2->speed = pSVar2->speed >> 1;
              pSVar2->speed = pSVar2->speed >> 1;
              pSVar2->speed = pSVar2->speed | 1;
            }
          }
          else if ((((gameStatePl == ST_GAME_IN_PROGRESS) && (pSVar2->tackleState == 0)) &&
                   (pSVar2->ballDistance < 0x41)) &&
                  ((teamInfo->ballLessEqual4 != 0 || (teamInfo->ball4To8 != 0)))) {
            penalty = 0;
            playerHadBall = 0;
            if (teamInfo->opponentsTeam->playerHasBall != 0) {
              playerHadBall = 1;
            }
            if (pSVar2->tacklingTimer == 0xffff) {
              lastTeamPlayed = teamInfo;
              lastPlayerPlayed = pSVar2;
              PlayerTackledTheBallWeak(pSVar2,teamInfo);
            }
            else {
              lastTeamPlayed = teamInfo;
              lastPlayerPlayed = pSVar2;
              PlayerTackledTheBallStrong(pSVar2,teamInfo);
            }
            teamInfo->lastHeadingTacklingPlayer = pSVar2;
            teamInfo->passKickTimer = 0x19;
            pTVar1 = teamInfo->opponentsTeam;
            pTVar1->passingToPlayer = 0;
            pTVar1->passingKickingPlayer = (Sprite *)0x0;
            pTVar1->spinTimer = 0xffff;
            pTVar1->wonTheBallTimer = 0xc;
          }
          else if (0x1ff < pSVar2->speed) {
            PlayerTacklingTestFoul(pSVar2,&ballSprite,teamInfo);
          }
        }
      }
      else if (pSVar2->playerState == PL_JUMP_HEADING) {
        bVar7 = pSVar2->playerDownTimer - 1;
        pSVar2->playerDownTimer = bVar7;
        if (bVar7 == 0) {
heading_reset_to_idle:
          pSVar2->playerState = PL_NORMAL;
          SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          goto snap_dest_to_current_pos;
        }
        if (pSVar2->speed == 0) {
heading_boundary_checks:
          if (((short)(pSVar2->x).s.i < 0x49) || (0x256 < (short)(pSVar2->x).s.i)) {
heading_general_oob_slowdown:
            uVar14 = pSVar2->speed;
            pSVar2->speed = pSVar2->speed - (uVar14 >> 2);
            pSVar2->speed = pSVar2->speed - (uVar14 >> 3);
          }
          else {
            if (((short)(pSVar2->y).s.i < 0x84) || (0x2fe < (short)(pSVar2->y).s.i)) {
              if (((0x127 < (short)(pSVar2->x).s.i) && ((short)(pSVar2->x).s.i < 0x178)) &&
                 (((short)(pSVar2->x).s.i < 0x131 || (0x16e < (pSVar2->x).s.i)))) {
heading_stop_and_reset_goalmouth:
                pSVar2->speed = 0;
                pSVar2->playerDownTimer = 0;
                goto heading_reset_to_idle;
              }
              if (((short)(pSVar2->y).s.i < 0x81) || (0x301 < (short)(pSVar2->y).s.i)) {
                if ((0x121 < (short)(pSVar2->x).s.i) && ((short)(pSVar2->x).s.i < 0x17e))
                goto heading_stop_and_reset_goalmouth;
                if (((short)(pSVar2->y).s.i < 0x79) || (0x309 < (short)(pSVar2->y).s.i))
                goto heading_general_oob_slowdown;
              }
            }
            if ((((0x29 < pSVar2->playerDownTimer) && (gameStatePl == ST_GAME_IN_PROGRESS)) &&
                (pSVar2->heading == 0)) &&
               (((pSVar2->ballDistance < 0x41 && (7 < ballSprite.z.s.i)) &&
                (ballSprite.z.s.i < 0x10)))) {
              penalty = 0;
              playerHadBall = 1;
              lastTeamPlayed = teamInfo;
              lastPlayerPlayed = pSVar2;
              PlayerHittingJumpHeader(pSVar2,teamInfo);
              teamInfo->passKickTimer = 0x19;
              pTVar1 = teamInfo->opponentsTeam;
              pTVar1->passingToPlayer = 0;
              pTVar1->passingKickingPlayer = (Sprite *)0x0;
            }
          }
        }
        else {
          SetJumpHeaderHitAnimTable(pSVar2);
          if (pSVar2->animationTable == &jumpHeaderAttemptAnimTable) {
            if (0x25 < pSVar2->playerDownTimer) goto apply_air_drag_until_stop;
            pSVar2->speed = pSVar2->speed >> 1;
          }
          else if (pSVar2->playerDownTimer < 0x12) {
            pSVar2->speed = pSVar2->speed >> 1;
          }
          else {
apply_air_drag_until_stop:
            wVar13 = pSVar2->speed - kPlayerAirConstant;
            pSVar2->speed = wVar13;
            if (-1 < (short)wVar13) goto heading_boundary_checks;
            pSVar2->speed = 0;
          }
        }
      }
      else if (pSVar2->playerState == PL_STATIC_HEADING) {
        bVar7 = pSVar2->playerDownTimer - 1;
        pSVar2->playerDownTimer = bVar7;
        if (bVar7 == 0) {
          pSVar2->playerState = PL_NORMAL;
          SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          goto snap_dest_to_current_pos;
        }
        wVar13 = pSVar2->speed - 0x10;
        pSVar2->speed = wVar13;
        if ((short)wVar13 < 0) {
          pSVar2->speed = 0;
        }
        SetStaticHeaderDirection(pSVar2,teamInfo);
        if (((gameStatePl == ST_GAME_IN_PROGRESS) && (pSVar2->heading == 0)) &&
           ((pSVar2->ballDistance < 0x41 &&
            (((7 < ballSprite.z.s.i && (ballSprite.z.s.i < 0x10)) &&
             (-1 < (short)teamInfo->currentAllowedDirection)))))) {
          penalty = 0;
          playerHadBall = 1;
          lastTeamPlayed = teamInfo;
          lastPlayerPlayed = pSVar2;
          PlayerHittingStaticHeader(pSVar2,teamInfo);
          teamInfo->passKickTimer = 0x19;
          pTVar1 = teamInfo->opponentsTeam;
          pTVar1->passingToPlayer = 0;
          pTVar1->passingKickingPlayer = (Sprite *)0x0;
        }
      }
      else if (pSVar2->playerState == PL_THROW_IN) {
        if (teamInfo->playerNumber == 0) {
          AI_SetControlsDirection(teamInfo);
        }
        if ((playerTurnFlags & '\x01' << (pSVar2->direction & 7)) == 0) {
          pSVar2->direction = cameraDirection;
          disallowedTurnFlagsCounter = disallowedTurnFlagsCounter + 1;
        }
        if ((playerTurnFlags & '\x01' << (pSVar2->direction & 7)) == 0) {
          uVar11 = 7;
          do {
            cameraDirection = (word)uVar11;
            if ((playerTurnFlags & '\x01' << (uVar11 & 7)) != 0) goto apply_throw_in_dir_and_camera;
            uVar11 = (uint)(ushort)(cameraDirection - 1);
          } while ((word)(cameraDirection - 1) != 0xffff);
          cameraDirection = 0;
apply_throw_in_dir_and_camera:
          pSVar2->direction = cameraDirection;
          deadThrowInDirectionVar = deadThrowInDirectionVar + 1;
        }
        if (((g_substituteInProgress == 0) || (pSVar2 != substitutedPlSprite)) &&
           ((ST_THROW_IN_FORWARD_RIGHT - 1 < gameState && (gameState < ST_THROW_IN_BACK_LEFT + 1))))
        {
          if (pSVar2->playerDownTimer == 0) {
manage_throw_in_ui_and_fire_block:
            if (teamInfo->playerNumber == 0) {
              if (0x32 < stoppageTimerActive) goto toggle_stats_timers;
throw_in_fire_input_gate:
              if (((teamInfo->firePressed != 0) || (teamInfo->quickFire != 0)) ||
                 (teamInfo->normalFire != 0)) goto apply_stats_hide_fire_block;
            }
            else {
              if ((short)teamInfo->currentAllowedDirection < 0) goto throw_in_fire_input_gate;
apply_stats_hide_fire_block:
              if (statsTimer != 0) {
                fireBlocked = 1;
              }
toggle_stats_timers:
              timeVar = -timeVar;
              resultTimer = -resultTimer;
            }
            uVar14 = teamInfo->currentAllowedDirection;
            uVar11 = (uint)uVar14;
            if (((short)uVar14 < 0) || ((playerTurnFlags & '\x01' << (uVar14 & 7)) == 0)) {
              teamInfo->currentAllowedDirection = pSVar2->direction;
              uVar11 = (uint)teamInfo->currentAllowedDirection;
            }
            else if (uVar14 != pSVar2->direction) {
              pSVar2->direction = uVar14;
              SetThrowInPlayerDestinationCoordinates(pSVar2);
              uVar11 = (uint)uVar14;
              SetPlayerAnimationTable(&aboutToThrowInAnimTable,pSVar2);
              pSVar2->playerState = PL_THROW_IN;
              pSVar2->playerDownTimer = 0;
            }
            if ((teamInfo->quickFire == 0) || ((playerTurnFlags & '\x01' << (uVar11 & 7)) == 0)) {
              if ((teamInfo->normalFire != 0) && ((playerTurnFlags & '\x01' << (uVar11 & 7)) != 0))
              {
                throwInPassOrKick = 0;
                SetPlayerAnimationTable(throwInKickAnimTable,pSVar2);
                pSVar2->playerDownTimer = 0x19;
              }
            }
            else {
              throwInPassOrKick = 1;
              SetPlayerAnimationTable(&throwInPassAnimTable,pSVar2);
              pSVar2->playerDownTimer = 0x14;
            }
            goto finalize_control_and_speed;
          }
          bVar7 = pSVar2->playerDownTimer - 1;
          pSVar2->playerDownTimer = bVar7;
          if (bVar7 != 0) {
            if (pSVar2->playerDownTimer == 0x12) {
              if (g_inSubstitutesMenu != 0) {
                SetPlayerAnimationTable(&aboutToThrowInAnimTable,pSVar2);
                pSVar2->playerState = PL_THROW_IN;
                pSVar2->playerDownTimer = 0;
                goto manage_throw_in_ui_and_fire_block;
              }
              ballSprite.z.s.i = 0xc;
              hideBall = 0;
              if (throwInPassOrKick == 0) {
                playerHadBall = 1;
                lastTeamPlayed = teamInfo;
                lastPlayerPlayed = pSVar2;
                PlayerKickingBall(pSVar2,teamInfo);
                teamInfo->lastHeadingTacklingPlayer = pSVar2;
                if (gameStatePl != ST_GAME_IN_PROGRESS) {
                  ThrowInDeadProc();
                  gameNotInProgressCounterWriteOnly = 0;
                }
                gameStatePl = ST_GAME_IN_PROGRESS;
                gameState = ST_GAME_IN_PROGRESS;
                teamInfo->ballInPlay = 1;
                teamInfo->ballOutOfPlay = 1;
                pTVar1 = teamInfo->opponentsTeam;
                pTVar1->ballInPlay = 1;
                pTVar1->ballOutOfPlay = 1;
                pTVar1->spinTimer = 0xffff;
                teamInfo->controlledPlayer = (Sprite *)0x0;
                teamInfo->passingKickingPlayer = pSVar2;
                teamInfo->passKickTimer = 0x19;
                teamInfo->ballCanBeControlled = 0;
                pTVar1 = teamInfo->opponentsTeam;
                pTVar1->passingToPlayer = 0;
                pTVar1->passingKickingPlayer = (Sprite *)0x0;
              }
              else {
                playerHadBall = 1;
                lastTeamPlayed = teamInfo;
                lastPlayerPlayed = pSVar2;
                DoPass(pSVar2,teamInfo);
                teamInfo->lastHeadingTacklingPlayer = pSVar2;
                ballSprite.deltaZ.raw = 1;
                if (gameStatePl != ST_GAME_IN_PROGRESS) {
                  ThrowInDeadProc();
                  gameNotInProgressCounterWriteOnly = 0;
                }
                gameStatePl = ST_GAME_IN_PROGRESS;
                gameState = ST_GAME_IN_PROGRESS;
                teamInfo->ballInPlay = 1;
                teamInfo->ballOutOfPlay = 1;
                pTVar1 = teamInfo->opponentsTeam;
                pTVar1->ballInPlay = 1;
                pTVar1->ballOutOfPlay = 1;
                pTVar1->spinTimer = 0xffff;
                teamInfo->controlledPlayer = (Sprite *)0x0;
                teamInfo->passingKickingPlayer = pSVar2;
                teamInfo->passKickTimer = 0x19;
                teamInfo->ballCanBeControlled = 0;
                pTVar1 = teamInfo->opponentsTeam;
                pTVar1->passingToPlayer = 0;
                pTVar1->passingKickingPlayer = (Sprite *)0x0;
              }
            }
            goto finalize_control_and_speed;
          }
        }
        else {
          hideBall = 0;
        }
        pSVar2->playerState = PL_NORMAL;
        SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
      }
      else {
        if ((pSVar2->playerState == PL_GOALIE_DIVING_HIGH) ||
           (pSVar2->playerState == PL_GOALIE_DIVING_LOW)) {
          bVar7 = pSVar2->playerDownTimer - 1;
          pSVar2->playerDownTimer = bVar7;
          if (bVar7 != 0) {
            if ((teamInfo->goalkeeperDivingRight == 0) || (0x2a < pSVar2->playerDownTimer)) {
              if ((gameStatePl != ST_GAME_IN_PROGRESS) || (0x3c < pSVar2->playerDownTimer)) {
                wVar13 = kGoalKeeperRecoveryStepBase;
                if ((((((*(char *)&teamInfo->field_46 == '\0') &&
                       (wVar13 = kGoalKeeperRecoveryStepAlt,
                       pSVar2->imageIndex != SPR_GOALIE1_CAUGHT_BALL_RIGHT)) &&
                      (pSVar2->imageIndex != SPR_GOALIE1_CAUGHT_BALL_LEFT)) &&
                     ((pSVar2->imageIndex != SPR_GOALIE2_CAUGHT_BALL_RIGHT &&
                      (pSVar2->imageIndex != SPR_GOALIE2_CAUGHT_BALL_LEFT)))) &&
                    (pSVar2->imageIndex != 0x3d2)) &&
                   (((pSVar2->imageIndex != 0x3d4 && (pSVar2->imageIndex != 0x36c)) &&
                    (pSVar2->imageIndex != 0x36e)))) {
                  sVar21 = ballSprite.y.s.i - (pSVar2->y).s.i;
                  puVar18 = (undefined1 *)CONCAT22(uVar14,sVar21);
                  if (teamInfo == &topTeamData) {
                    wVar13 = kGoalKeeperRecoveryStepBase;
                    if (sVar21 < -5) {
speed_drop_positional_offset:
                      wVar13 = kGoalKeeperRecoveryStepFar;
                    }
                  }
                  else {
                    wVar13 = kGoalKeeperRecoveryStepBase;
                    if (5 < sVar21) goto speed_drop_positional_offset;
                  }
                }
                wVar13 = pSVar2->speed - wVar13;
                pSVar2->speed = wVar13;
                if ((short)wVar13 < 0) {
                  pSVar2->speed = 0;
                }
                if ((gameStatePl == ST_GAME_IN_PROGRESS) && (*(char *)&teamInfo->field_46 == '\0'))
                {
                  if (teamInfo == &bottomTeamData) {
                    if ((ballSprite.deltaY.raw != 0) && (-1 < (int)ballSprite.deltaY.raw))
                    goto check_ball_x_overlap_with_goalie;
                  }
                  else if ((int)ballSprite.deltaY.raw < 0) {
check_ball_x_overlap_with_goalie:
                    if (-1 < (short)pSVar2->imageIndex) {
                      sVar21 = *(short *)(*(int *)(spriteGraphicsPtr +
                                                  (short)(pSVar2->imageIndex << 2)) + 10);
                      wVar13 = (pSVar2->x).s.i;
                      uVar15 = (undefined2)((uint)puVar18 >> 0x10);
                      if ((int)(pSVar2->deltaX).raw < 0) {
                        uVar14 = wVar13 - 5;
                        puVar18 = (undefined1 *)CONCAT22(uVar15,uVar14);
                        if ((uVar14 < ballSprite.x.s.i) &&
                           (uVar14 = sVar21 + 6 + uVar14,
                           puVar18 = (undefined1 *)CONCAT22(uVar15,uVar14),
                           ballSprite.x.s.i < uVar14)) {
low_ball_height_and_penalty_gate:
                          if (ballSprite.z.s.i < 0x15) {
                            if ((playingPenalties == 0) && (penalty == 0)) {
                              sVar21 = (pSVar2->y).s.i - ballSprite.y._0_2_;
                              if ((sVar21 < 8) && (-8 < sVar21)) {
flag_goalie_intervention_and_slow_player:
                                *(undefined1 *)&teamInfo->field_46 = 1;
                                if (pSVar2->playerState == PL_GOALIE_DIVING_HIGH) {
                                  iVar5 = 2;
                                }
                                else {
                                  iVar5 = 1;
                                }
                                pSVar2->speed = pSVar2->speed - ((short)pSVar2->speed >> iVar5);
                                pGVar30 = teamInfo->shotChanceTable;
                                if ((penalty != 0) || (playingPenalties != 0)) {
                                  pGVar30 = &dseg_17EECC;
                                }
                                penalty = 0;
                                playerHadBall = 0;
                                teamInfo->passKickTimer = 0x19;
                                pTVar1 = teamInfo->opponentsTeam;
                                pTVar1->passingToPlayer = 0;
                                if (-1 < (short)teamInfo->goalkeeperSavedCommentTimer) {
                                  pTVar1->passingKickingPlayer = (Sprite *)0x0;
                                }
                                if (ballInGoalkeeperArea == 0) {
                                  pwVar6 = &teamInfo->opponentsTeam->teamStatsPtr->goalAttempts;
                                  *pwVar6 = *pwVar6 + 1;
                                }
                                ResetBothTeamSpinTimers();
                                uVar14 = (ushort)((uint)puVar18 >> 0x10);
                                if ((short)teamInfo->goalkeeperSavedCommentTimer < 0) {
                                  sVar21 = ((currentGameTick & 0xf0) >> 4) - pGVar30->field_2A;
                                  if (sVar21 < 0) {
comment_timing_gate_fail_dir:
                                    puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
                                    sVar21 = (pSVar2->x).s.i - ballSprite.x._0_2_;
                                    if ((sVar21 < 7) && (-7 < sVar21)) {
                                      ballSprite.x.s.i = (pSVar2->x).s.i;
                                      ballSprite.y.s.i = (pSVar2->y).s.i;
                                      ballSprite.speed = 0;
                                      lastTeamPlayed = teamInfo;
                                      lastPlayerPlayed = pSVar2;
                                      ballSprite.destX = ballSprite.x.s.i;
                                      ballSprite.destY = ballSprite.y.s.i;
                                      teamInfo->goalkeeperDivingRight = 1;
                                      GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
                                      PlayMissGoalSample();
                                      goto finalize_control_and_speed;
                                    }
                                    goto redirect_to_alt_flow_after_timing;
                                  }
                                  if ((short)(sVar21 - pGVar30->field_2C) < 0)
                                  goto redirect_to_alt_flow_after_timing;
continue_post_save_flow:
                                  puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
                                  lastKeeperPlayed = lastPlayerPlayed;
                                  ballSprite.speed = ballSprite.speed - (ballSprite.speed >> 2);
                                  if (0x700 < ballSprite.speed) {
                                    ballSprite.speed = 0x700;
                                  }
                                  if ((short)teamInfo->goalkeeperSavedCommentTimer < 0) {
                                    ballSprite.destX =
                                         (currentGameTick & 0xf) * 0x80 + -0x3c0 + ballSprite.destX;
                                  }
                                  else {
                                    ballSprite.destY =
                                         ballSprite.y.s.i +
                                         ((short)(ballSprite.destY - ballSprite.y._0_2_) >>
                                         (*(ushort *)
                                           ((int)kKeeperEaseBallTable +
                                           (int)(short)(currentGameTick & 0xe)) & 0x3f));
                                    puVar18 = (undefined1 *)CONCAT22(uVar14,ballSprite.destY);
                                    ballSprite.destX = pSVar2->destX;
                                  }
                                }
                                else {
                                  sVar21 = ((currentGameTick & 0xf0) >> 4) - pGVar30->field_2A;
                                  if (sVar21 < 0) goto comment_timing_gate_fail_dir;
                                  if ((short)(sVar21 - pGVar30->field_2C) < 0)
                                  goto continue_post_save_flow;
redirect_to_alt_flow_after_timing:
                                  ballSprite.destY =
                                       (currentGameTick & 0x1f) * 0x10 + -0x100 +
                                       (ballSprite.y.s.i * 2 - ballSprite.destY);
                                  puVar18 = (undefined1 *)CONCAT22(uVar14,ballSprite.destY);
                                  ballSprite.destX = pSVar2->destX;
                                  wVar13 = ballSprite.speed - (ballSprite.speed >> 2);
                                  if (((byte)lastGameTick & 0x10) != 0) {
                                    wVar13 = wVar13 - (ballSprite.speed >> 3);
                                  }
                                  ballSprite.speed = wVar13;
                                  if (0x600 < ballSprite.speed) {
                                    ballSprite.speed = 0x600;
                                  }
                                }
                                sVar21 = 1;
                                if (teamInfo != &topTeamData) {
                                  sVar21 = -1;
                                }
                                ballSprite.y.s.i = sVar21 + (pSVar2->y).s.i;
                                lastTeamPlayed = teamInfo;
                                lastPlayerPlayed = pSVar2;
                                teamInfo->passKickTimer = 0x19;
                                pTVar1 = teamInfo->opponentsTeam;
                                pTVar1->passingToPlayer = 0;
                                if (-1 < (short)teamInfo->goalkeeperSavedCommentTimer) {
                                  pTVar1->passingKickingPlayer = (Sprite *)0x0;
                                }
                                PlayMissGoalSample();
                              }
                            }
                            else {
                              sVar21 = (pSVar2->y).s.i - ballSprite.y._0_2_;
                              if ((sVar21 < 6) && (-6 < sVar21)) {
                                ballSprite.speed = ballSprite.speed - (ballSprite.speed >> 2);
                                goto flag_goalie_intervention_and_slow_player;
                              }
                            }
                          }
                        }
                      }
                      else {
                        uVar14 = wVar13 + 5;
                        puVar18 = (undefined1 *)CONCAT22(uVar15,uVar14);
                        if ((ballSprite.x.s.i <= uVar14) &&
                           (uVar14 = uVar14 - (sVar21 + 6),
                           puVar18 = (undefined1 *)CONCAT22(uVar15,uVar14),
                           uVar14 <= ballSprite.x.s.i)) goto low_ball_height_and_penalty_gate;
                      }
                    }
                  }
                }
                goto finalize_control_and_speed;
              }
            }
            else {
              teamInfo->goalkeeperDivingRight = 0;
              UpdateBallWithControllingGoalkeeper(pSVar2);
              GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
              ballSprite.z.s.i = 5;
            }
          }
          pSVar2->playerState = PL_NORMAL;
          SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          goto snap_dest_to_current_pos;
        }
        if (pSVar2->playerState == PL_GOALIE_CATCHING_BALL) {
          bVar7 = pSVar2->playerDownTimer - 1;
          pSVar2->playerDownTimer = bVar7;
          if (bVar7 == 0) {
            pSVar2->playerState = PL_NORMAL;
            SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
            if (teamInfo->goalkeeperDivingLeft != 0) {
              teamInfo->goalkeeperDivingLeft = 0;
              UpdateBallWithControllingGoalkeeper(pSVar2);
              GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
              ballSprite.z.s.i = 5;
            }
          }
          else if ((teamInfo->goalkeeperDivingLeft == 0) && (teamInfo->plVeryCloseToBall != 0)) {
            puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
            if ((short)(((currentGameTick & 0xf0) >> 4) - teamInfo->shotChanceTable->field_30) < 0)
            {
              pSVar2->speed = 0;
              ballSprite.speed = 0;
              teamInfo->goalkeeperDivingLeft = 1;
              GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
            }
            else {
              GoalkeeperDeflectedBall(&ballSprite,teamInfo);
            }
          }
        }
        else if (pSVar2->playerState == PL_DOWN) {
          bVar7 = pSVar2->playerDownTimer - 1;
          pSVar2->playerDownTimer = bVar7;
          if (bVar7 == 0) {
            pSVar2->playerState = PL_NORMAL;
            SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          }
        }
        else if (pSVar2->playerState == PL_BOOKED) {
          if (whichCard == 0) {
booking_finish_reset_state:
            pSVar2->playerState = PL_NORMAL;
            SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          }
        }
        else if ((pSVar2->playerState == PL_SAD) || (pSVar2->playerState == PL_HAPPY)) {
          if ((gameState == ST_GOING_TO_HALFTIME) || (gameState == ST_PLAYERS_GOING_TO_SHOWER))
          goto booking_finish_reset_state;
        }
        else if (pSVar2->playerState == PL_GOALIE_CLAIMED) {
          bVar7 = pSVar2->playerDownTimer - 1;
          pSVar2->playerDownTimer = bVar7;
          if (bVar7 == 0) {
            pSVar2->playerState = PL_NORMAL;
            SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          }
        }
        else if (pSVar2->playerOrdinal == 1) {
player_goalkeeper:
          if ((playingPenalties != 0) && (0x32 < penaltiesTimer)) goto finalize_control_and_speed;
          UpdatePlayerShotChanceTable(pSVar2,teamInfo);
          if (word_10F1F4 == 0) {
            ballNextGroundX = 0xffff;
            if (teamInfo->goalkeeperPlaying != 0) {
              *(undefined1 *)&teamInfo->goaliePlayingOrOut = 1;
              *(undefined1 *)&teamInfo->ballOutOfPlayOrKeeper = 0;
              if (pSVar2 == teamInfo->controlledPlayer) goto its_controlled_player;
              teamInfo->goalkeeperPlaying = 0;
            }
            bVar35 = gameStatePl != ST_GAME_IN_PROGRESS;
            *(char *)&teamInfo->goaliePlayingOrOut = -bVar35;
            *(char *)&teamInfo->ballOutOfPlayOrKeeper = -bVar35;
            if (bVar35) {
              pSVar2->speed = kGoalkeeperSpeedWhenGameStopped;
            }
            pSVar2->speed = kGoalkeeperGameSpeed;
            if (0x1c1 < (pSVar2->y).s.i) {
              if (teamInfo != &topTeamData) goto goalkeeper_in_upper_half;
              goto return_last_player_block;
            }
            if (teamInfo == &bottomTeamData) goto return_last_player_block;
goalkeeper_in_upper_half:
            if (pSVar2->playerState == PL_GOALIE_CATCHING_BALL) {
              bVar7 = pSVar2->playerDownTimer - 1;
              pSVar2->playerDownTimer = bVar7;
              if (bVar7 == 0) {
                pSVar2->playerState = PL_NORMAL;
                SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
                goto goalie_not_catching_the_ball;
              }
              pSVar2->destX = ballSprite.x.s.i;
              pSVar2->destY = ballSprite.y.s.i;
              if (teamInfo == &bottomTeamData) {
                pSVar2->destY = pSVar2->destY + 1;
              }
              else {
                pSVar2->destY = pSVar2->destY - 1;
              }
goalie_can_catch_checks:
              uVar24 = (ushort)((uint)pbVar25 >> 0x10);
              if (teamInfo == lastTeamPlayed) {
                sVar21 = playerHadBall;
                sVar21 = playerHadBall;
                if (sVar21 != 0) goto if_opponent_last_touched;
              }
              else {
if_opponent_last_touched:
                if ((((((ballInGoalkeeperArea != 0) ||
                       ((currentGameTick & 0xf0) >> 4 < teamInfo->shotChanceTable->field_3A)) &&
                      (-1 < (short)ballNextGroundX)) &&
                     (((short)ballDefensiveZ < 0x17 && (0xc < (short)ballDefensiveZ)))) &&
                    (pSVar2->ballDistance < 0x845)) &&
                   (((sVar21 = (pSVar2->x).s.i - ballDefensiveX, sVar21 < 0xd && (-0xd < sVar21)) &&
                    ((sVar21 = (pSVar2->y).s.i - ballDefensiveY, sVar21 < 0xd && (-0xd < sVar21)))))
                   ) {
                  GoalkeeperCaughtTheBall(pSVar2,teamInfo);
                }
              }
              if ((((pSVar2 != lastPlayerPlayed) && (pSVar2->ballDistance < 0x49)) &&
                  (teamInfo->ballAbove17 == 0)) &&
                 ((pSVar2->playerState == PL_GOALIE_CATCHING_BALL || (teamInfo->ball12To17 == 0))))
              {
                pSVar2->destX = (pSVar2->x).s.i;
                pSVar2->destY = (pSVar2->y).s.i;
                if (teamInfo == lastTeamPlayed) {
                  sVar21 = playerHadBall;
                  sVar21 = playerHadBall;
                  if (sVar21 == 0) {
                    UpdateBallWithControllingGoalkeeper(pSVar2);
                    teamInfo->controlledPlayer = pSVar2;
                    teamInfo->passToPlayerPtr = (Sprite *)0x0;
                    teamInfo->playerSwitchTimer = 0x19;
                    teamInfo->passingBall = 0;
                    teamInfo->passingToPlayer = 0;
                    pSVar2->destX = (pSVar2->x).s.i;
                    pSVar2->destY = (pSVar2->y).s.i;
                    penalty = 0;
                    playerHadBall = 0;
                    lastTeamPlayed = teamInfo;
                    lastPlayerPlayed = pSVar2;
                    teamInfo->passKickTimer = 0;
                    teamInfo->passingKickingPlayer = (Sprite *)0x0;
                    teamInfo->field_74 = 0;
                    teamInfo->goalkeeperPlaying = 1;
                    *(undefined1 *)&teamInfo->goaliePlayingOrOut = 1;
                    *(undefined1 *)&teamInfo->ballOutOfPlayOrKeeper = 1;
                    goto finalize_control_and_speed;
                  }
                }
                lastKeeperPlayed = lastPlayerPlayed;
                penalty = 0;
                playerHadBall = 0;
                lastTeamPlayed = teamInfo;
                lastPlayerPlayed = pSVar2;
                UpdateBallWithControllingGoalkeeper(pSVar2);
                GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
              }
            }
            else {
goalie_not_catching_the_ball:
              if (pSVar2 == teamInfo->controlledPlayer) goto its_controlled_player;
              if (pSVar2 == teamInfo->passToPlayerPtr) goto receiver_expect_pass_tick;
              if (gameStatePl != ST_GAME_IN_PROGRESS) goto not_controlled_player;
              puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
              pbVar25 = (byte *)((uint)uVar24 << 0x10);
              if (teamInfo == &bottomTeamData) {
                wVar13 = ballInLowerPenaltyArea;
              }
              else {
                wVar13 = ballInUpperPenaltyArea;
              }
              if (wVar13 == 0) {
                teamInfo->ballOutOfPlayOrKeeper = 0;
                if (pSVar2 == teamInfo->passToPlayerPtr) {
                  teamInfo->passToPlayerPtr = (Sprite *)0x0;
                  teamInfo->passingBall = 0;
                  teamInfo->passingToPlayer = 0;
                }
                goto return_last_player_block;
              }
              if (pSVar2 == lastPlayerPlayed) goto return_last_player_block;
              UpdateBallVariables(pSVar2,&ballSprite,teamInfo);
              uVar12 = CalculateBallNextGroundXYPositions(&ballSprite);
              pTVar10 = (TeamGame *)(uint)uVar12;
              if (((ballInGoalkeeperArea != 0) ||
                  (uVar12 = (currentGameTick & 0xf0) >> 4, pTVar10 = (TeamGame *)(uint)uVar12,
                  uVar12 < teamInfo->shotChanceTable->field_3A)) && (-1 < (short)ballNextGroundX)) {
                puVar18 = (undefined1 *)CONCAT22(uVar14,ballNextGroundX);
                pbVar25 = (byte *)CONCAT22(uVar24,ballNextYGroundY);
                if (teamInfo == &bottomTeamData) {
                  if ((0x2a9 < (short)ballNextYGroundY) && ((short)ballNextYGroundY < 0x2fa))
                  goto joined_r0x00115332;
                }
                else if ((0x88 < (short)ballNextYGroundY) && ((short)ballNextYGroundY < 0xd9)) {
joined_r0x00115332:
                  if ((0xc0 < (short)ballNextGroundX) && ((short)ballNextGroundX < 0x1df)) {
                    sVar21 = ballNextGroundX - (pSVar2->x).s.i;
                    sVar27 = ballNextYGroundY - (pSVar2->y).s.i;
                    pTVar10 = (TeamGame *)
                              ((int)(short)(ballNextGroundX - ballSprite.x._0_2_) *
                              (int)(short)(ballNextGroundX - ballSprite.x._0_2_));
                    pbVar25 = pTVar10->teamName +
                              (int)(short)(ballNextYGroundY - ballSprite.y._0_2_) *
                              (int)(short)(ballNextYGroundY - ballSprite.y._0_2_) + -0x16;
                    puVar18 = (undefined1 *)
                              (((int)sVar21 * (int)sVar21 + (int)sVar27 * (int)sVar27) * 4);
                    if (puVar18 <= pbVar25) {
                      pSVar2->destX = ballNextGroundX;
                      pSVar2->destY = ballNextYGroundY;
                      pSVar2->speed = kGoalkeeperMoveToBallSpeed;
                      goto goalie_can_catch_checks;
                    }
                  }
                }
              }
              uVar24 = (ushort)((uint)pbVar25 >> 0x10);
              if (gameStatePl != ST_GAME_IN_PROGRESS) goto return_last_player_block;
              if ((strikeDestX < 0x127) || (0x178 < strikeDestX)) {
                if ((pSVar2->ballDistance < 0x200) && (teamInfo->ballAbove17 == 0)) {
                  pSVar2->destX = ballSprite.x.s.i;
                  pSVar2->destY = ballSprite.y.s.i;
                  goto goalie_can_catch_checks;
                }
                if (teamInfo->ballAbove17 != 0) goto evaluate_catchability_and_nearest_owner;
                if (ballInGoalkeeperArea == 0) {
                  if (ballSprite.y.s.i < 0x1c1) {
                    if (-1 < (int)ballSprite.deltaY.raw)
                    goto evaluate_catchability_and_nearest_owner;
                  }
                  else if ((int)ballSprite.deltaY.raw < 1) {
evaluate_catchability_and_nearest_owner:
                    if ((ballSprite.z.s.i < 0x11) && (-1 < (short)ballDefensiveX)) {
                      pTVar10 = (TeamGame *)pSVar2->ballDistance;
                      if (((((teamInfo->controlledPlayer == (Sprite *)0x0) ||
                            (pTVar10 <= (TeamGame *)teamInfo->controlledPlayer->ballDistance)) &&
                           ((teamInfo->passToPlayerPtr == (Sprite *)0x0 ||
                            (pTVar10 <= (TeamGame *)teamInfo->passToPlayerPtr->ballDistance)))) &&
                          ((pSVar3 = teamInfo->opponentsTeam->controlledPlayer,
                           pSVar3 == (Sprite *)0x0 || (pTVar10 <= (TeamGame *)pSVar3->ballDistance))
                          )) && ((pSVar3 = teamInfo->opponentsTeam->passToPlayerPtr,
                                 pSVar3 == (Sprite *)0x0 ||
                                 (pTVar10 <= (TeamGame *)pSVar3->ballDistance)))) {
                        pSVar2->destX = ballDefensiveX;
                        pSVar2->destY = ballDefensiveY;
                        goto goalie_can_catch_checks;
                      }
                    }
                    goto return_last_player_block;
                  }
                  pSVar2->destX = ((short)(ballSprite.x.s.i - 0x150) >> 1) + 0x150;
                }
                else {
                  pSVar2->destX = ballSprite.x.s.i;
                }
                if (ballSprite.y.s.i < 0x1c1) {
                  wVar13 = ((ushort)(ballSprite.y.s.i - 0x81) >> 1) + 0x81;
                }
                else {
                  wVar13 = ballSprite.y.s.i + ((ushort)(0x301 - ballSprite.y._0_2_) >> 1);
                }
                pSVar2->destY = wVar13;
                pSVar2->speed = teamInfo->shotChanceTable->speed_unk;
                goto goalie_can_catch_checks;
              }
              if (teamInfo == lastTeamPlayed) {
                sVar21 = playerHadBall;
                sVar21 = playerHadBall;
                if (sVar21 != 0) goto pre_save_possession_distance_gate;
save_attempted_set_burst_speed:
                pSVar2->speed = kGoalkeeperBurstSpeed[0];
chase_ball_set_dest_from_ball_flat:
                pSVar2->destX = ballNotHighX;
                pSVar2->destY = ballNotHighY;
                goto goalie_can_catch_checks;
              }
pre_save_possession_distance_gate:
              if ((0x1ff < pSVar2->ballDistance) || (teamInfo->ballAbove17 != 0)) {
                if ((pSVar2->ballDistance < 0x801) && (teamInfo->ballAbove17 == 0)) {
                  pSVar2->destX = ((short)(ballSprite.x.s.i - 0x150) >> 1) + 0x150;
                  if (ballSprite.y.s.i < 0x1c1) {
                    wVar13 = ((ushort)(ballSprite.y.s.i - 0x81) >> 1) + 0x81;
                  }
                  else {
                    wVar13 = ballSprite.y.s.i + ((ushort)(0x301 - ballSprite.y._0_2_) >> 1);
                  }
                  pSVar2->destY = wVar13;
                  pSVar2->speed = teamInfo->shotChanceTable->speed_unk;
                  goto shot_at_goal;
                }
                if (((teamInfo->opponentsTeam->playerHasBall == 0) && (teamInfo->playerHasBall == 0)
                    ) && (teamInfo->plVeryCloseToBall == 0)) {
                  if (teamInfo == lastTeamPlayed) {
                    sVar21 = playerHadBall;
                    sVar21 = playerHadBall;
                    if (sVar21 == 0) goto save_attempted_set_burst_speed;
                  }
                  if (kShotAtGoalMinumumSpeed < ballSprite.speed) goto shot_at_goal;
                  if (((pSVar2->ballDistance < 0x1389) && (ballSprite.z.s.i < 0xd)) &&
                     (((int)ballSprite.deltaZ.raw < 0x8001 && (-0x8001 < (int)ballSprite.deltaZ.raw)
                      ))) goto mark_opponent_and_chase;
                }
                else {
mark_opponent_and_chase:
                  if (teamInfo->ballAbove17 == 0) {
                    pSVar2->destX = ballSprite.x.s.i;
                    pSVar2->destY = ballSprite.y.s.i;
                    pSVar2->speed = teamInfo->shotChanceTable->speed_unk;
                    goto goalie_can_catch_checks;
                  }
                }
save_not_attempted_set_run_speed:
                pSVar2->speed = teamInfo->shotChanceTable->speed_unk2;
                goto chase_ball_set_dest_from_ball_flat;
              }
              pSVar2->destX = ballSprite.x.s.i;
              pSVar2->destY = ballSprite.y.s.i;
shot_at_goal:
              if (0x10 < ballSprite.z.s.i) goto save_not_attempted_set_run_speed;
              if (((((short)teamInfo->goalkeeperSavedCommentTimer < 1) &&
                   (pSVar2->ballDistance < 0x81)) &&
                  ((teamInfo->ballAbove17 == 0 &&
                   (pTVar1 = teamInfo->opponentsTeam, pTVar1->firePressed != 0)))) &&
                 ((pTVar1->playerHasBall != 0 || (0x15 < pTVar1->passKickTimer)))) {
                uVar11 = (uint)puVar18 & 0xffff0000;
                pSVar3 = teamInfo->opponentsTeam->lastHeadingTacklingPlayer;
                if (pSVar3 != (Sprite *)0x0) {
                  pPVar32 = GetPlayerPointerFromShirtNumber(pSVar3,teamInfo);
                  uVar11 = CONCAT31((int3)(uVar11 >> 8),pPVar32->finishing);
                }
                pPVar32 = GetPlayerPointerFromShirtNumber(pSVar2,teamInfo);
                uVar15 = (undefined2)(uVar11 >> 0x10);
                sVar21 = (char)((char)uVar11 - pPVar32->goalieSkill) + 7;
                puVar18 = (undefined1 *)CONCAT22(uVar15,sVar21);
                if ((byte)goalScoredChances[sVar21] <= ((byte)(currentGameTick >> 1) & 0xf)) {
                  teamInfo->goalkeeperSavedCommentTimer = 5;
                  goto goalie_save_attempt_entry;
                }
                teamInfo->goalkeeperSavedCommentTimer = 0xfffb;
                puVar18 = (undefined1 *)CONCAT22(uVar15,2);
                if (ballSprite.x.s.i < (pSVar2->x).s.i) {
                  wVar13 = 6;
                  unaff_D3 = CONCAT22(uVar28,6);
                }
                else {
                  wVar13 = 2;
                  unaff_D3 = CONCAT22(uVar28,2);
                }
                pSVar2->direction = wVar13;
                ballSpeed = ballSprite.speed;
                teamInfo->opponentsTeam->spinTimer = 0xffff;
                if (0x600 < ballSprite.speed) {
                  ballSprite.speed = 0x600;
                }
                GoalkeeperJumping(wVar13,2,(short)unaff_D3,pSVar2,&ballSprite,teamInfo);
                dseg_114EA6 = ballSprite.speed;
                teamInfo->passKickTimer = 0;
                teamInfo->passingKickingPlayer = (Sprite *)0x0;
              }
              else {
goalie_save_attempt_entry:
                sVar21 = ShouldGoalkeeperDive(pSVar2,&ballSprite,teamInfo);
                if (sVar21 == 0) goto save_not_attempted_set_run_speed;
                uVar14 = (ushort)((uint)puVar18 >> 0x10);
                if (ballDefensiveX < (pSVar2->x).s.i) {
                  puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
                  if ((playingPenalties != 0) || (penalty != 0)) {
                    puVar18 = (undefined1 *)CONCAT22(uVar14,1);
                    if ((currentGameTick & 0xc) == 0) goto choose_turn_right_for_dive;
                    puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
                  }
choose_turn_left_for_dive:
                  wVar13 = 6;
                  unaff_D3 = CONCAT22(uVar28,6);
                }
                else {
                  puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
                  if ((playingPenalties != 0) || (penalty != 0)) {
                    puVar18 = (undefined1 *)CONCAT22(uVar14,1);
                    if ((currentGameTick & 6) == 0) goto choose_turn_left_for_dive;
                    puVar18 = (undefined1 *)((uint)uVar14 << 0x10);
                  }
choose_turn_right_for_dive:
                  wVar13 = 2;
                  unaff_D3 = CONCAT22(uVar28,2);
                }
                pSVar2->direction = wVar13;
                GoalkeeperJumping(wVar13,(short)puVar18,(short)unaff_D3,pSVar2,&ballSprite,teamInfo)
                ;
                teamInfo->passKickTimer = 0;
                teamInfo->passingKickingPlayer = (Sprite *)0x0;
              }
            }
          }
          else {
return_last_player_block:
            uVar24 = (ushort)((uint)pbVar25 >> 0x10);
            if (gameStatePl != ST_GAME_IN_PROGRESS) goto not_controlled_player;
            if ((frameCount & 0xe) == 0) {
              pTVar10 = (TeamGame *)0x0;
              goto idle_player_common_path;
            }
          }
          if ((short)pSVar2->destY < 0x81) {
            pSVar2->destY = 0x81;
          }
          if (0x301 < (short)pSVar2->destY) {
            pSVar2->destY = 0x301;
          }
        }
        else if (pSVar2 == teamInfo->controlledPlayer) {
its_controlled_player:
          if ((playingPenalties == 0) || (gameState == ST_PENALTIES)) {
            if (teamInfo->playerNumber == 0) {
              AI_SetControlsDirection(teamInfo);
            }
            teamInfo->allowedDirections = teamInfo->playerHasBall;
            teamInfo->playerHasBall = 0;
            if ((teamInfo->shooting != 0) &&
               (sVar21._0_1_ = teamInfo->firePressed, sVar21._1_1_ = teamInfo->fireThisFrame,
               sVar21 == 0)) {
              teamInfo->shooting = 0;
            }
            if (gameStatePl != ST_GAME_IN_PROGRESS) {
              if (teamInfo != lastTeamPlayedBeforeBreak) goto finalize_control_and_speed;
              if ((playerTurnFlags & '\x01' << (pSVar2->direction & 7)) == 0) {
                pSVar2->direction = cameraDirection;
                turnDirCopiedFromCameraCount = turnDirCopiedFromCameraCount + 1;
              }
              if ((playerTurnFlags & '\x01' << (pSVar2->direction & 7)) == 0) {
                uVar11 = 7;
                do {
                  cameraDirection = (word)uVar11;
                  if ((playerTurnFlags & '\x01' << (uVar11 & 7)) != 0)
                  goto apply_direction_to_camera_and_player;
                  uVar11 = (uint)(ushort)(cameraDirection - 1);
                } while ((word)(cameraDirection - 1) != 0xffff);
                cameraDirection = 0;
apply_direction_to_camera_and_player:
                pSVar2->direction = cameraDirection;
                deadThrowInDirectionVar = deadThrowInDirectionVar + 1;
              }
              if (teamInfo->playerNumber == 0) {
                if (0x32 < stoppageTimerActive) goto flip_time_and_result_timers;
check_any_fire_inputs:
                if (((teamInfo->firePressed != 0) || (teamInfo->quickFire != 0)) ||
                   (teamInfo->normalFire != 0)) goto block_fire_if_stats_timer;
              }
              else {
                if ((short)teamInfo->currentAllowedDirection < 0) goto check_any_fire_inputs;
block_fire_if_stats_timer:
                if (statsTimer != 0) {
                  fireBlocked = 1;
                }
flip_time_and_result_timers:
                timeVar = -timeVar;
                resultTimer = -resultTimer;
              }
              uVar28 = teamInfo->currentAllowedDirection;
              if (((short)uVar28 < 0) || ((playerTurnFlags & '\x01' << (uVar28 & 7)) == 0)) {
                teamInfo->currentAllowedDirection = pSVar2->direction;
              }
              else {
                pSVar2->direction = uVar28;
                UpdatePlayerWithBall(pSVar2);
              }
            }
            if ((pSVar2->z).s.i == 0) {
              if ((short)teamInfo->currentAllowedDirection < 0) {
                pSVar2->destX = (pSVar2->x).s.i;
                pSVar2->destY = (pSVar2->y).s.i;
              }
              if (((gameStatePl == ST_GAME_IN_PROGRESS) &&
                  (sVar27._0_1_ = teamInfo->quickFire, sVar27._1_1_ = teamInfo->normalFire,
                  sVar27 == 0)) && (teamInfo->shooting == 0)) {
                if ((teamInfo->plVeryCloseToBall != 0) || (teamInfo->plCloseToBall != 0)) {
                  if (teamInfo->allowedDirections == 0) {
                    teamInfo->unkBallTimer = 0;
                  }
                  teamInfo->playerHasBall = 1;
                  teamInfo->opponentsTeam->spinTimer = 0xffff;
                }
                uVar28 = teamInfo->currentAllowedDirection;
                uVar11 = (uint)uVar28;
                if ((short)uVar28 < 0) {
                  if (((((teamInfo->playerNumber != 0) && (pSVar2->playerOrdinal != 1)) &&
                       (teamInfo->fireThisFrame != 0)) &&
                      ((short)teamInfo->currentAllowedDirection < 0)) &&
                     ((((teamInfo->plVeryCloseToBall != 0 || (teamInfo->plCloseToBall != 0)) ||
                       (teamInfo->plNotFarFromBall != 0)) &&
                      (((teamInfo->ball8To12 != 0 || (teamInfo->ball12To17 != 0)) ||
                       (teamInfo->ballAbove17 != 0)))))) {
                    teamInfo->headerOrTackle = 1;
                    AttemptStaticHeader(pSVar2,pSVar2->direction);
                    teamInfo->lastHeadingTacklingPlayer = pSVar2;
                    teamInfo->ballCanBeControlled = 0;
                  }
                }
                else {
                  if (teamInfo->opponentsTeam->playerHasBall == 0) {
                    teamInfo->wonTheBallTimer = 0;
                  }
                  if (teamInfo->wonTheBallTimer == 0) {
                    if (((teamInfo->plVeryCloseToBall == 0) || (teamInfo->ballAbove17 != 0)) ||
                       (teamInfo->ball12To17 != 0)) goto attempt_quick_pass;
                    if (teamInfo->prevPlVeryCloseToBall == 0) {
                      teamInfo->ballCanBeControlled = 0;
                    }
                    if (uVar28 != teamInfo->ballControllingPlayerDirection) {
                      teamInfo->ballCanBeControlled = 0;
                    }
                    teamInfo->ballCanBeControlled = teamInfo->ballCanBeControlled + 1;
                    teamInfo->ballControllingPlayerDirection = uVar28;
                    penalty = 0;
                    playerHadBall = 0;
                    if (teamInfo->opponentsTeam->playerHasBall != 0) {
                      playerHadBall = 1;
                    }
                    lastTeamPlayed = teamInfo;
                    lastPlayerPlayed = pSVar2;
                    CalculateIfPlayerWinsBall(uVar28,pSVar2,teamInfo);
                    pTVar1 = teamInfo->opponentsTeam;
                    pTVar1->spinTimer = 0xffff;
                    pTVar1->passingToPlayer = 0;
                    pTVar1->passingKickingPlayer = (Sprite *)0x0;
                  }
compute_oob_dir_mask_and_block:
                  wVar13 = (pSVar2->x).s.i;
                  puVar18 = (undefined1 *)CONCAT22(uVar14,wVar13);
                  wVar20 = (pSVar2->y).s.i;
                  uVar9 = unaff_D3 & 0xffffff00;
                  if ((short)wVar13 < 0x4f) {
                    uVar9 = CONCAT31((int3)(unaff_D3 >> 8),0xe0);
                  }
                  unaff_D3 = uVar9;
                  if (0x250 < (short)wVar13) {
                    unaff_D3 = unaff_D3 | 0xe;
                  }
                  if ((short)wVar20 < 0x7f) {
                    unaff_D3 = unaff_D3 | 0x83;
                  }
                  if (0x303 < (short)wVar20) {
                    unaff_D3 = unaff_D3 | 0x38;
                  }
                  if ((unaff_D3 & 1 << (uVar11 & 0x1f)) == 0) {
                    iVar5 = (int)(short)((short)uVar11 << 2);
                    wVar20 = (pSVar2->x).s.i + *(short *)((int)kDefaultDestinations + iVar5);
                    puVar18 = (undefined1 *)CONCAT22(uVar14,wVar20);
                    sVar21 = *(short *)((int)kDefaultDestinations + iVar5 + 2);
                    wVar13 = (pSVar2->y).s.i;
                    pSVar2->destX = wVar20;
                    pSVar2->destY = wVar13 + sVar21;
                  }
                  else {
                    pSVar2->destX = (pSVar2->x).s.i;
                    pSVar2->destY = (pSVar2->y).s.i;
                  }
                }
              }
              else {
attempt_quick_pass:
                if ((((teamInfo->quickFire == 0) || ((short)teamInfo->currentAllowedDirection < 0))
                    || (((teamInfo->plVeryCloseToBall == 0 && (teamInfo->plCloseToBall == 0)) ||
                        ((gameStatePl != ST_GAME_IN_PROGRESS &&
                         ((playerTurnFlags & '\x01' << (teamInfo->currentAllowedDirection & 7)) == 0
                         )))))) || ((pSVar2->playerOrdinal != 1 && (teamInfo->ballLessEqual4 == 0)))
                   ) {
                  if (((((teamInfo->normalFire == 0) ||
                        ((short)teamInfo->currentAllowedDirection < 0)) ||
                       ((teamInfo->plVeryCloseToBall == 0 && (teamInfo->plCloseToBall == 0)))) ||
                      ((gameStatePl != ST_GAME_IN_PROGRESS &&
                       ((playerTurnFlags & '\x01' << (teamInfo->currentAllowedDirection & 7)) == 0))
                      )) || ((pSVar2->playerOrdinal != 1 && (teamInfo->ballLessEqual4 == 0)))) {
                    if (((((pSVar2->playerOrdinal == 1) || (teamInfo->fireThisFrame == 0)) ||
                         ((short)teamInfo->currentAllowedDirection < 0)) ||
                        (teamInfo->plNotFarFromBall == 0)) ||
                       (((teamInfo->ballLessEqual4 == 0 && (teamInfo->ball4To8 == 0)) ||
                        ((teamInfo->passToPlayerPtr != (Sprite *)0x0 &&
                         (puVar18 = (undefined1 *)teamInfo->passToPlayerPtr->ballDistance,
                         puVar18 < (undefined1 *)pSVar2->ballDistance)))))) {
                      uVar14 = (ushort)((uint)puVar18 >> 0x10);
                      if (((pSVar2->playerOrdinal == 1) || (teamInfo->fireThisFrame == 0)) ||
                         (((short)teamInfo->currentAllowedDirection < 0 ||
                          ((((teamInfo->plVeryCloseToBall == 0 && (teamInfo->plCloseToBall == 0)) &&
                            (teamInfo->plNotFarFromBall == 0)) ||
                           (((teamInfo->ball8To12 == 0 && (teamInfo->ball12To17 == 0)) &&
                            (teamInfo->ballAbove17 == 0)))))))) {
                        if ((gameStatePl == ST_GAME_IN_PROGRESS) &&
                           (uVar11 = (uint)teamInfo->currentAllowedDirection,
                           -1 < (short)teamInfo->currentAllowedDirection))
                        goto compute_oob_dir_mask_and_block;
                      }
                      else {
                        teamInfo->headerOrTackle = 1;
                        PlayerAttemptingJumpHeader(teamInfo->currentAllowedDirection,pSVar2);
                        teamInfo->lastHeadingTacklingPlayer = pSVar2;
                        teamInfo->ballCanBeControlled = 0;
                      }
                    }
                    else {
                      teamInfo->headerOrTackle = 1;
                      PlayerBeginTackling(teamInfo->currentAllowedDirection,pSVar2,teamInfo);
                      teamInfo->ballCanBeControlled = 0;
                    }
                    goto finalize_control_and_speed;
                  }
                  penalty = 0;
                  playerHadBall = 0;
                  lastTeamPlayed = teamInfo;
                  lastPlayerPlayed = pSVar2;
                  PlayerKickingBall(pSVar2,teamInfo);
                  teamInfo->lastHeadingTacklingPlayer = pSVar2;
                  if (gameStatePl != 100) {
                    ThrowInDeadProc();
                    gameNotInProgressCounterWriteOnly = 0;
                  }
                  if (gameState == ST_PENALTY) {
                    penalty = 1;
                  }
                  gameStatePl = ST_GAME_IN_PROGRESS;
                  gameState = ST_GAME_IN_PROGRESS;
                  teamInfo->ballInPlay = 1;
                  teamInfo->ballOutOfPlay = 1;
                  pTVar1 = teamInfo->opponentsTeam;
                  pTVar1->ballInPlay = 1;
                  pTVar1->ballOutOfPlay = 1;
                  pTVar1->spinTimer = 0xffff;
                  teamInfo->controlledPlayer = (Sprite *)0x0;
                  teamInfo->passingKickingPlayer = pSVar2;
                  teamInfo->passKickTimer = 0x19;
                  teamInfo->ballCanBeControlled = 0;
                  teamInfo->shooting = 1;
                  pTVar1 = teamInfo->opponentsTeam;
                  pTVar1->passingToPlayer = 0;
                  pTVar1->passingKickingPlayer = (Sprite *)0x0;
                }
                else {
                  penalty = 0;
                  playerHadBall = 0;
                  ballSprite.z.s.i = 0;
                  lastTeamPlayed = teamInfo;
                  lastPlayerPlayed = pSVar2;
                  DoPass(pSVar2,teamInfo);
                  teamInfo->lastHeadingTacklingPlayer = pSVar2;
                  if (gameStatePl != ST_GAME_IN_PROGRESS) {
                    ThrowInDeadProc();
                    gameNotInProgressCounterWriteOnly = 0;
                  }
                  if (gameState == ST_PENALTY) {
                    penalty = 1;
                  }
                  gameStatePl = ST_GAME_IN_PROGRESS;
                  gameState = ST_GAME_IN_PROGRESS;
                  teamInfo->ballInPlay = 1;
                  teamInfo->ballOutOfPlay = 1;
                  pTVar1 = teamInfo->opponentsTeam;
                  pTVar1->ballInPlay = 1;
                  pTVar1->ballOutOfPlay = 1;
                  pTVar1->spinTimer = 0xffff;
                  teamInfo->controlledPlayer = (Sprite *)0x0;
                  teamInfo->passingKickingPlayer = pSVar2;
                  teamInfo->passKickTimer = 0x19;
                  teamInfo->ballCanBeControlled = 0;
                  pTVar1 = teamInfo->opponentsTeam;
                  pTVar1->passingToPlayer = 0;
                  pTVar1->passingKickingPlayer = (Sprite *)0x0;
                }
snap_dest_to_current_pos:
                pSVar2->destX = (pSVar2->x).s.i;
                pSVar2->destY = (pSVar2->y).s.i;
              }
            }
          }
        }
        else {
          if (pSVar2 != teamInfo->passToPlayerPtr) {
            panicReasonCode = 2;
            PanicHaltLoop();
            goto player_goalkeeper;
          }
receiver_expect_pass_tick:
          wVar13 = (pSVar2->x).s.i;
          puVar18 = (undefined1 *)CONCAT22(uVar14,wVar13);
          if ((((short)wVar13 < 0x51) || (0x24e < (short)wVar13)) ||
             ((wVar13 = (pSVar2->y).s.i, (short)wVar13 < 0x81 || (0x301 < (short)wVar13)))) {
            teamInfo->passingToPlayer = 0;
            teamInfo->passingBall = 0;
            goto snap_dest_to_current_pos;
          }
          if (((teamInfo->playerNumber != 0) &&
              (((iVar5._0_2_ = teamInfo->longPass, iVar5._2_2_ = teamInfo->longSpinPass, iVar5 != 0
                || (teamInfo->leftSpin != 0)) || (teamInfo->rightSpin != 0)))) &&
             ((0x1ff < ballSprite.speed && (teamInfo->passingToPlayer != 0)))) {
            if ((short)ballSprite.direction < 0) {
pass_assist_set_landing_to_player_xy:
              teamInfo->ballX = (pSVar2->x).s.i;
              teamInfo->ballY = (pSVar2->y).s.i;
            }
            else {
              cVar23 = (char)ballSprite.fullDirection - (char)pSVar2->fullDirection;
              if ((cVar23 < 'A') && (-0x41 < cVar23)) {
                if ((cVar23 < '\x05') && (-5 < cVar23)) goto pass_assist_set_landing_to_player_xy;
                uVar16 = (undefined3)((uint)puVar18 >> 8);
                uVar17 = CONCAT31(uVar16,0xc0);
                iVar4._0_2_ = teamInfo->longPass;
                iVar4._2_2_ = teamInfo->longSpinPass;
                if (iVar4 != 0) {
                  uVar17 = CONCAT31(uVar16,0xe0);
                }
                if (-1 < cVar23) {
                  uVar17 = CONCAT31((int3)((uint)uVar17 >> 8),-(char)uVar17);
                }
                sVar21 = (((byte)((char)uVar17 + (char)ballSprite.fullDirection) + 4 & 0xff) >> 3)
                         << 2;
                teamInfo->ballX = *(short *)((int)kBallFriction + (int)sVar21) + (pSVar2->x).s.i;
                wVar13 = *(short *)((int)kBallFriction + sVar21 + 2) + (pSVar2->y).s.i;
                puVar18 = (undefined1 *)CONCAT22((short)((uint)uVar17 >> 0x10),wVar13);
                teamInfo->ballY = wVar13;
              }
              else {
                teamInfo->passingToPlayer = 0;
                teamInfo->passingBall = 0;
              }
            }
          }
          if (teamInfo->playerNumber == 0) {
            AI_Kick(pSVar2,teamInfo);
          }
          if (gameStatePl == ST_GAME_IN_PROGRESS) {
            if (((((pSVar2->playerOrdinal == 1) || (teamInfo->fireThisFrame == 0)) ||
                 ((short)teamInfo->currentAllowedDirection < 0)) ||
                (teamInfo->plNotFarFromBall == 0)) ||
               (((teamInfo->ballLessEqual4 == 0 && (teamInfo->ball4To8 == 0)) ||
                ((teamInfo->controlledPlayer != (Sprite *)0x0 &&
                 (puVar18 = (undefined1 *)teamInfo->controlledPlayer->ballDistance,
                 puVar18 < (undefined1 *)pSVar2->ballDistance)))))) {
              if ((teamInfo->ballLessEqual4 == 0) ||
                 (((ballSprite.speed < 0x600 || (teamInfo->plCloseToBall == 0)) &&
                  (teamInfo->plVeryCloseToBall == 0))))
              goto pass_follow_decide_controller_or_anchor;
              teamInfo->controlledPlayer = teamInfo->passToPlayerPtr;
              teamInfo->passToPlayerPtr = (Sprite *)0x0;
              teamInfo->playerSwitchTimer = 0x19;
              teamInfo->passingBall = 0;
              teamInfo->passingToPlayer = 0;
              teamInfo->shooting = 0;
              pSVar2->destX = (pSVar2->x).s.i;
              pSVar2->destY = (pSVar2->y).s.i;
              if (pSVar2->playerOrdinal == 1) {
                UpdateBallWithControllingGoalkeeper(pSVar2);
              }
              else {
                UpdateControllingPlayer(pSVar2);
              }
              teamInfo->passKickTimer = 0;
              teamInfo->passingKickingPlayer = (Sprite *)0x0;
              teamInfo->field_74 = 0;
              if (pSVar2->playerOrdinal == 1) {
                if (teamInfo == lastTeamPlayed) {
                  sVar21 = playerHadBall;
                  sVar21 = playerHadBall;
                  if (sVar21 == 0) {
                    teamInfo->goalkeeperPlaying = 1;
                    *(undefined1 *)&teamInfo->goaliePlayingOrOut = 1;
                    *(undefined1 *)&teamInfo->ballOutOfPlayOrKeeper = 1;
                    goto autoswitch_finish_bookkeeping;
                  }
                }
                GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
              }
autoswitch_finish_bookkeeping:
              penalty = 0;
              playerHadBall = 0;
              lastTeamPlayed = teamInfo;
              lastPlayerPlayed = pSVar2;
            }
            else {
              teamInfo->headerOrTackle = 1;
              PlayerBeginTackling(teamInfo->currentAllowedDirection,pSVar2,teamInfo);
              teamInfo->ballCanBeControlled = 0;
              pTVar1 = teamInfo->opponentsTeam;
              pTVar1->passingToPlayer = 0;
              pTVar1->passingKickingPlayer = (Sprite *)0x0;
            }
          }
          else if (teamInfo == lastTeamPlayedBeforeBreak) {
            if (((gameState == ST_KEEPER_HOLDS_BALL) && (pSVar2->playerOrdinal == 1)) ||
               (pSVar2->ballDistance == 0)) {
              if (7 < cameraDirection) {
                cameraDirection = pSVar2->direction;
                cameraSnapToPlayerCount = cameraSnapToPlayerCount + 1;
              }
              pSVar2->direction = cameraDirection;
              teamInfo->controlledPlayer = teamInfo->passToPlayerPtr;
              teamInfo->passToPlayerPtr = (Sprite *)0x0;
              teamInfo->playerSwitchTimer = 0x19;
              teamInfo->passingBall = 0;
              teamInfo->passingToPlayer = 0;
              teamInfo->shooting = 0;
              ballSprite.speed = 0;
              penalty = 0;
              playerHadBall = 0;
              lastTeamPlayed = teamInfo;
              lastPlayerPlayed = pSVar2;
              UpdatePlayerWithBall(pSVar2);
              teamInfo->passKickTimer = 0;
              teamInfo->passingKickingPlayer = (Sprite *)0x0;
              teamInfo->field_74 = 0;
              if ((ST_THROW_IN_FORWARD_RIGHT - 1 < gameState) &&
                 (gameState < ST_THROW_IN_BACK_LEFT + 1)) {
                SetThrowInPlayerDestinationCoordinates(pSVar2);
                SetPlayerAnimationTable(&aboutToThrowInAnimTable,pSVar2);
                pSVar2->playerState = PL_THROW_IN;
                pSVar2->playerDownTimer = 0;
                hideBall = 1;
              }
            }
            else {
pass_follow_decide_controller_or_anchor:
              if (teamInfo->passingBall == 0) {
                pSVar3 = teamInfo->controlledPlayer;
                if (((pSVar3 == (Sprite *)0x0) || (0xc80 < pSVar3->ballDistance)) ||
                   (pSVar2->ballDistance < pSVar3->ballDistance)) {
                  teamInfo->passingBall = 1;
                }
                else if (pSVar2->ballDistance < 0xc81) {
                  pSVar2->destX = (pSVar2->x).s.i;
                  pSVar2->destY = (pSVar2->y).s.i;
                  goto finalize_control_and_speed;
                }
              }
              pSVar2->destX = teamInfo->ballX;
              pSVar2->destY = teamInfo->ballY;
              wVar13 = (pSVar2->x).s.i;
              puVar18 = (undefined1 *)CONCAT22((short)((uint)puVar18 >> 0x10),wVar13);
              wVar20 = (pSVar2->y).s.i;
              if ((wVar13 != pSVar2->destX) || (wVar20 != pSVar2->destY)) {
                if ((gameStatePl == ST_GAME_IN_PROGRESS) &&
                   ((pSVar2->playerOrdinal == 1 && (teamInfo->goalkeeperPlaying == 0)))) {
                  if (teamInfo == &bottomTeamData) {
                    if (0x2b3 < (short)wVar20) goto joined_r0x00116e9a;
                  }
                  else if ((short)wVar20 < 0xcf) {
joined_r0x00116e9a:
                    if ((0xca < (short)wVar13) && ((short)wVar13 < 0x1d5))
                    goto finalize_control_and_speed;
                  }
                  teamInfo->passToPlayerPtr = (Sprite *)0x0;
                  teamInfo->passingBall = 0;
                  teamInfo->passingToPlayer = 0;
                  goto snap_dest_to_current_pos;
                }
                if ((((goalOut != 0) && (pSVar2->playerOrdinal != 1)) && (0xb6 < (short)wVar13)) &&
                   (((short)wVar13 < 0x1e9 && (((short)wVar20 < 0xe3 || (0x29f < (short)wVar20))))))
                goto snap_dest_to_current_pos;
              }
            }
          }
        }
      }
finalize_control_and_speed:
      UpdatePlayerSpeed(pSVar2,teamInfo);
      uVar36 = (undefined2)((uint)puVar18 >> 0x10);
      FVar19.s.frac = pSVar2->destX;
      FVar26.s.i = uVar24;
      FVar26.s.frac = pSVar2->destY;
      uVar14 = CalculateDeltaXAndY(pSVar2->speed,pSVar2->destX,pSVar2->destY,(pSVar2->x).s.i,
                                   (pSVar2->y).s.i);
      pSVar2->deltaX = FVar19;
      pSVar2->deltaY = FVar26;
      if (((pSVar2->playerOrdinal == 1) && (gameStatePl == ST_GAME_IN_PROGRESS)) &&
         ((teamInfo->goalkeeperPlaying == 0 && (_ballInUpperPenaltyArea != 0)))) {
compute_facing_from_full_direction:
        uVar14 = pSVar2->fullDirection + 0x80 & 0xff;
quantize_direction_to_octant:
        pSVar2->direction = (uVar14 + 0x10 & 0xff) >> 5;
      }
      else {
        if (-1 < (short)uVar14) goto quantize_direction_to_octant;
        if ((pSVar2 != teamInfo->controlledPlayer) && (pSVar2 != teamInfo->passingKickingPlayer))
        goto compute_facing_from_full_direction;
      }
      uVar15 = ballSprite.y.s.i;
      curX = ballSprite.x.s.i;
      if ((gameStatePl != ST_GAME_IN_PROGRESS) && (gameState < ST_THROW_IN_BACK_LEFT + 1)) {
        uVar15 = foulYCoordinate;
        curX = foulXCoordinate;
      }
      unaff_D3 = CONCAT22((short)(unaff_D3 >> 0x10),curX);
      wVar13 = (pSVar2->x).s.i;
      puVar18 = (undefined1 *)CONCAT22(uVar36,wVar13);
      wVar20 = (pSVar2->y).s.i;
      pbVar25 = (byte *)CONCAT22(uVar24,wVar20);
      bVar35 = false;
      uVar14 = CalculateDeltaXAndY(0x100,wVar13,wVar20,curX,uVar15);
      pTVar10 = (TeamGame *)(uint)uVar14;
      if (bVar35) {
        pTVar10 = (TeamGame *)0x0;
      }
      pSVar2->fullDirection = (word)pTVar10;
      if (pSVar2->playerState == PL_NORMAL) {
        uVar11 = (pSVar2->deltaY).raw | (pSVar2->deltaX).raw;
        cVar23 = -(uVar11 != 0);
        puVar18 = (undefined1 *)CONCAT31((int3)(uVar11 >> 8),cVar23);
        if ((cVar23 != *(char *)&pSVar2->isMoving) ||
           (pTVar10 = (TeamGame *)(uint)pSVar2->playerDirection,
           pSVar2->playerDirection != pSVar2->direction)) {
          if (cVar23 == '\0') {
            SetPlayerAnimationTable(&playerNormalStandingAnimTable,pSVar2);
          }
          else {
            SetPlayerAnimationTable(&playerRunningAnimTable,pSVar2);
          }
        }
      }
    }
    else {
      if ((injuriesForever[0] != 0) && (pSVar2->injuryLevel == 0xffff)) {
        pSVar2->speed = kInjuryForeverSpeed;
        pSVar2->destY = pSVar2->destY - 8;
        goto finalize_control_and_speed;
      }
not_controlled_player:
      if ((g_substituteInProgress == 0) || (pSVar2 != substitutedPlSprite)) {
        pTVar10 = (TeamGame *)(uint)teamInfo->updatePlayerIndex;
        if (teamInfo->updatePlayerIndex == uVar29) {
          if (((((gameStatePl != ST_GAME_IN_PROGRESS) && (gameState == ST_GAME_ENDED)) &&
               (winningTeamPtr != (TeamGame *)0x0)) &&
              ((pSVar2->playerState == 0 && (pSVar2->playerOrdinal != 1)))) &&
             (pTVar10 = (TeamGame *)((pSVar2->deltaY).raw | (pSVar2->deltaX).raw),
             pTVar10 == (TeamGame *)0x0)) {
            uVar14 = Rand();
            pTVar10 = (TeamGame *)(uint)uVar14;
            if (uVar14 < 0x41) {
              pTVar10 = teamInfo->inGameTeamPtr;
              if (pTVar10 == winningTeamPtr) {
                SetPlayerAnimationTable(&playerWinningReactionAnimTable,pSVar2);
                pSVar2->playerState = PL_HAPPY;
              }
              else {
                SetPlayerAnimationTable(&playerLosingReactionAnimTable,pSVar2);
                pSVar2->playerState = PL_SAD;
              }
            }
          }
          goto idle_player_common_path;
        }
      }
      else {
idle_player_common_path:
        uVar24 = (ushort)((uint)pbVar25 >> 0x10);
        if (((gameStatePl != ST_GAME_IN_PROGRESS) || (0x19 < inGameCounter)) ||
           (((breakState != ST_CORNER_LEFT && (breakState != ST_CORNER_RIGHT)) &&
            ((breakState < ST_FREE_KICK_LEFT1 || (ST_FREE_KICK_RIGHT3 < breakState)))))) {
          if (pSVar2->destReachedState == 1) {
            pSVar2->destReachedState = 2;
          }
          if ((teamInfo->controlledPlayer == (Sprite *)0x0) && (teamInfo->playerNumber == 0)) {
            AI_SetControlsDirection(teamInfo);
          }
          wVar13 = foulYCoordinate;
          uVar15 = (undefined2)((uint)puVar18 >> 0x10);
          if (pSVar2 == bookedPlayer) {
            wVar20 = foulXCoordinate + 0x15;
            puVar18 = (undefined1 *)CONCAT22(uVar15,wVar20);
            if ((wVar20 == (pSVar2->x).s.i) && (foulYCoordinate == (pSVar2->y).s.i)) {
              if (refState == REF_WAITING_PLAYER) {
                refState = REF_ABOUT_TO_GIVE_CARD;
                if (whichCard == CARD_YELLOW) {
                  SetPlayerAnimationTable(&plGettingYellowCardAnimTable,pSVar2);
                }
                else if (whichCard == CARD_RED) {
                  SetPlayerAnimationTable(&plGettingRedCardAnimTable,pSVar2);
                }
                else {
                  SetPlayerAnimationTable(&plGetting2ndYellowCardAnimTable,pSVar2);
                }
                pSVar2->playerState = PL_BOOKED;
                pSVar2->playerDownTimer = 1;
                PlayGameStateWhistleSample();
              }
            }
            else {
              pSVar2->destX = wVar20;
              pSVar2->destY = wVar13;
            }
            goto finalize_control_and_speed;
          }
          if (g_substituteInProgress != 0) {
            if ((short)g_substituteInProgress < 0) {
              if (((pSVar2 == substitutedPlSprite) &&
                  (pSVar2->speed = kSubstitutedPlayerSpeed, (pSVar2->deltaX).raw == 0)) &&
                 ((pSVar2->deltaY).raw == 0)) {
                g_substituteInProgress = 0;
              }
            }
            else if (pSVar2 == substitutedPlSprite) {
              if (pSVar2->injuryLevel != 0xfffe) {
                if ((substitutedPlDestX == (pSVar2->x).s.i) &&
                   (substitutedPlDestY == (pSVar2->y).s.i)) {
                  if (g_substituteInProgress == 2) goto finalize_substituted_player;
                  g_substituteInProgress = 2;
                  substitutedPlDestX = plComingX;
                  substitutedPlDestY = plComingY;
                }
                pSVar2->destX = substitutedPlDestX;
                pSVar2->destY = substitutedPlDestY;
                pSVar2->speed = kSubstitutedPlayerSpeed;
                goto finalize_control_and_speed;
              }
finalize_substituted_player:
              g_substituteInProgress = 0xffff;
              (pSVar2->x).s.i = plSubstitutedX;
              (pSVar2->y).s.i = plSubstitutedY;
              pSVar2->speed = kSubstitutedPlayerSpeed;
              pSVar2->sentAway = 0;
            }
          }
          if (pSVar2->sentAway != 0) goto finalize_control_and_speed;
          if (playingPenalties == 0) {
            wVar13 = gameState;
            if (gameStatePl != ST_GAME_IN_PROGRESS) goto prep_out_of_play_positioning;
          }
          else {
            wVar13 = ST_PENALTIES;
prep_out_of_play_positioning:
            if ((gameState == ST_FIRST_HALF_ENDED) || (gameState == ST_GAME_ENDED))
            goto finalize_control_and_speed;
            if ((gameState == ST_KEEPER_HOLDS_BALL) ||
               ((gameState == ST_GOAL_OUT_LEFT || (gameState == ST_GOAL_OUT_RIGHT))))
            goto set_player_with_no_ball_destination;
            if ((forceLeftTeam == ST_GOAL_OUT_LEFT) &&
               (((gameState == ST_CORNER_LEFT || (gameState == ST_CORNER_RIGHT)) &&
                ((short)foulYCoordinate < 0x1c1)))) {
use_top_outofplay_table:
              ppPVar34 = topBallOutOfPlayPositions;
            }
            else {
              if (playingPenalties == 0) {
                if (teamInfo == lastTeamPlayedBeforeBreak) goto use_bottom_outofplay_table;
                goto use_top_outofplay_table;
              }
              if (teamInfo != &bottomTeamData) goto use_top_outofplay_table;
use_bottom_outofplay_table:
              ppPVar34 = bottomBallOutOfPlayPositions;
            }
            iVar5 = *(int *)((int)ppPVar34 + (int)(short)(wVar13 << 2));
            if (iVar5 != 0) {
              freeKickDestX = 0;
              if (((((teamInfo == lastTeamPlayedBeforeBreak) || (gameState < ST_FREE_KICK_LEFT1)) ||
                   ((ST_FREE_KICK_RIGHT3 < gameState ||
                    ((gameState == ST_FREE_KICK_LEFT1 || (gameState == ST_FREE_KICK_RIGHT3)))))) ||
                  (pSVar2->playerOrdinal < 2)) || (5 < pSVar2->playerOrdinal)) {
                wVar13 = pSVar2->playerOrdinal;
              }
              else {
                wVar13 = 2;
                ppSVar33 = teamInfo->spritesTable;
                for (wVar20 = 2; ppSVar33 = ppSVar33 + 1, wVar20 != pSVar2->playerOrdinal;
                    wVar20 = wVar20 + 1) {
                  if (-1 < (short)(*ppSVar33)->cards) {
                    wVar13 = wVar13 + 1;
                  }
                }
                uVar14 = *(ushort *)((int)freeKickFactorsX + (int)(short)((gameState - 6) * 2));
                freeKickDestX = uVar14 << 2;
                puVar18 = (undefined1 *)CONCAT22(uVar15,3);
                ppSVar33 = teamInfo->spritesTable;
                do {
                  ppSVar33 = ppSVar33 + 1;
                  if (-1 < (short)(*ppSVar33)->cards) {
                    freeKickDestX = freeKickDestX - (uVar14 & 0x3fff);
                  }
                  sVar21 = (short)puVar18 + -1;
                  puVar18 = (undefined1 *)CONCAT22((short)((uint)puVar18 >> 0x10),sVar21);
                } while (sVar21 != -1);
              }
              sVar21 = (wVar13 - 1) * 4;
              if (*(short *)(iVar5 + sVar21) != 0x56ce) {
                uVar15 = (undefined2)((uint)puVar18 >> 0x10);
                if (teamInfo == &topTeamData) {
                  sVar22 = *(short *)(iVar5 + sVar21);
                  sVar27 = *(short *)(iVar5 + 2 + (int)sVar21);
                  if (sVar22 < -999) {
                    sVar21 = freeKickDestX + sVar22 + 1000;
                  }
                  else {
                    if (sVar22 < 1000) {
                      sVar22 = sVar22 + 5;
apply_local_to_world_offsets:
                      puVar18 = (undefined1 *)CONCAT22(uVar15,sVar22 + 0x51U);
                      pSVar2->destX = sVar22 + 0x51U;
                      pSVar2->destY = sVar27 + 0x81;
                      goto finalize_control_and_speed;
                    }
                    sVar21 = freeKickDestX + sVar22 + -1000;
                  }
                }
                else {
                  unaff_D3 = (uint)uVar28 << 0x10;
                  sVar22 = *(short *)(iVar5 + sVar21);
                  sVar27 = *(short *)(iVar5 + 2 + (int)sVar21);
                  if (sVar22 < -999) {
                    sVar27 = -sVar27;
                    sVar21 = -freeKickDestX - (sVar22 + 1000);
                  }
                  else {
                    if (sVar22 < 1000) {
                      sVar22 = 0x1f8 - *(short *)(iVar5 + sVar21);
                      sVar27 = 0x280 - *(short *)(iVar5 + 2 + (int)sVar21);
                      goto apply_local_to_world_offsets;
                    }
                    sVar27 = -sVar27;
                    sVar21 = -freeKickDestX - (sVar22 + -1000);
                  }
                }
                puVar18 = (undefined1 *)CONCAT22(uVar15,foulXCoordinate + sVar21);
                wVar13 = foulYCoordinate + sVar27;
                pSVar2->destX = foulXCoordinate + sVar21;
                pSVar2->destY = wVar13;
                goto finalize_control_and_speed;
              }
            }
          }
set_player_with_no_ball_destination:
          SetPlayerWithNoBallDestination(pSVar2,teamInfo);
          if ((((gameStatePl != ST_GAME_IN_PROGRESS) && (pSVar2->playerOrdinal != 1)) &&
              (teamInfo != lastTeamPlayedBeforeBreak)) &&
             (sVar21 = pSVar2->destX - foulXCoordinate, sVar27 = pSVar2->destY - foulYCoordinate,
             puVar18 = (undefined1 *)((int)sVar27 * (int)sVar27),
             puVar18 + (int)sVar21 * (int)sVar21 < g_pitchDatBuffer + 0xc82)) {
            if ((short)foulXCoordinate < 0x150) {
              wVar13 = foulXCoordinate + 0x46;
            }
            else {
              wVar13 = foulXCoordinate - 0x46;
            }
            pSVar2->destX = wVar13;
          }
          goto finalize_control_and_speed;
        }
      }
    }
    uVar29 = uVar29 - 1;
    ppSVar31 = ppSVar31 + 1;
  } while (uVar29 != 0xffff);
  if ((gameStatePl == ST_GAME_IN_PROGRESS) || (gameState == ST_KEEPER_HOLDS_BALL)) {
    if (lastPlayerPlayed == &goalie1Sprite) {
      pSVar2 = &goalie1Sprite;
    }
    else {
      if (lastPlayerPlayed != &goalie2Sprite) goto update_players_ret;
      pSVar2 = &goalie2Sprite;
    }
    if ((Sprite *)prevLastPlayer != pSVar2) {
      lastPlayerBeforeGoalkeeper = (Sprite *)prevLastPlayer;
      lastTeamScored = (TeamGeneralInfo *)prevLastTeamPlayed;
      nobodysBallTimer = 0x32;
    }
  }
update_players_ret:
  return (char)pTVar10;
}


// --- AI_SetControlsDirection @ 00117588 ---

/* in:
        A6 -> team data */

void __usercall AI_SetControlsDirection(TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  uchar *puVar2;
  char cVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 unaff_D1;
  byte bVar8;
  word wVar7;
  char cVar9;
  short sVar10;
  char cVar11;
  uint uVar12;
  Sprite *pSVar13;
  short *psVar14;
  int unaff_A2;
  bool bVar15;
  
  if (team->resetControls != 0) {
    return;
  }
  sVar10 = AI_counter;
  sVar10 = AI_counter;
  if (sVar10 != 0) {
    sVar10 = AI_counter;
    AI_counter = sVar10 + -1;
  }
  if (AI_resumePlayTimer != 0) {
    AI_resumePlayTimer = AI_resumePlayTimer - 1;
  }
  AI_rand = Rand();
  team->AI_timer = team->AI_timer + 1;
  team->currentAllowedDirection = 0xffff;
  team->firePressed = 0;
  team->fireThisFrame = 0;
  team->quickFire = 0;
  team->normalFire = 0;
  if (g_inSubstitutesMenu != 0) {
    return;
  }
  uVar12 = 0xffff;
  pSVar1 = team->controlledPlayer;
  pSVar13 = team->passToPlayerPtr;
  if (pSVar1 != (Sprite *)0x0) {
    uVar12 = (uint)pSVar1->direction;
  }
  if (team == &bottomTeamData) {
    sVar10 = 0x81;
  }
  else {
    sVar10 = 0x301;
  }
  puVar2 = (uchar *)((int)(short)(ballSprite.y.s.i - sVar10) *
                     (int)(short)(ballSprite.y.s.i - sVar10) +
                    (int)(short)(ballSprite.x.s.i - 0x150) * (int)(short)(ballSprite.x.s.i - 0x150))
  ;
  bVar15 = false;
  sVar10 = CalculateDeltaXAndY(0x100,0x150,sVar10,ballSprite.x.s.i,ballSprite.y.s.i);
  if (bVar15) {
    sVar10 = 0;
  }
  cVar11 = (char)sVar10;
  uVar5 = (ushort)uVar12;
  if (gameStatePl != ST_GAME_IN_PROGRESS) {
    if (team != lastTeamPlayedBeforeBreak) {
      return;
    }
    if ((((ST_STARTING_GAME - 1 < gameState) && (gameState < ST_GAME_ENDED + 1)) &&
        (team1Computer != 0)) && (team2Computer != 0)) {
      if ((gameState == ST_RESULT_ON_HALFTIME) || (gameState == ST_RESULT_AFTER_THE_GAME)) {
        if (stoppageTimerTotal < 600) {
          return;
        }
      }
      else if (stoppageTimerTotal < 0x15e) {
        return;
      }
      team->firePressed = 1;
      return;
    }
    if (stoppageTimerActive < (ushort)((currentGameTick & 0x3f) + 100)) {
      if (resultTimer != 0) {
        return;
      }
      if (((gameState != ST_GOAL_OUT_LEFT) && (gameState != ST_GOAL_OUT_RIGHT)) &&
         ((gameState != ST_KEEPER_HOLDS_BALL &&
          ((gameState < ST_THROW_IN_FORWARD_RIGHT || (ST_THROW_IN_BACK_LEFT < gameState)))))) {
        if (gameState != ST_FOUL) {
          if (gameState < ST_FREE_KICK_LEFT1) {
            return;
          }
          if (ST_FREE_KICK_RIGHT3 < gameState) {
            return;
          }
        }
        team->currentAllowedDirection = (sVar10 + 0x10U & 0xff) >> 5;
        return;
      }
      goto no_player_facing;
    }
    if ((playingPenalties != 0) || (gameState == ST_PENALTY)) {
      if ((playerTurnFlags & '\x01' << (AI_rand & 7)) != 0) {
        team->currentAllowedDirection = AI_rand & 7;
        return;
      }
      if (pSVar1->direction == 0) {
        return;
      }
      if (pSVar1->direction == 4) {
        return;
      }
      goto apply_turn_delta_from_angle;
    }
    if (((gameState == ST_KEEPER_HOLDS_BALL) || (gameState == ST_GOAL_OUT_LEFT)) ||
       (gameState == ST_GOAL_OUT_RIGHT)) {
      if ((AI_rand & 1) != 0) {
        if (uVar5 == cameraDirection) goto apply_turn_delta_from_angle;
        if ((ushort)ballSprite.x._0_2_ < 0x151) {
          if ((uVar5 == 1) || (uVar5 == 3)) goto apply_turn_delta_from_angle;
        }
        else if ((uVar5 == 5) || (uVar5 == 7)) goto apply_turn_delta_from_angle;
      }
    }
    else {
      if (gameState != ST_PLAYERS_TO_INITIAL_POSITIONS) {
        if ((gameState < ST_FREE_KICK_LEFT1) || (ST_FREE_KICK_RIGHT3 < gameState)) {
          if ((gameState < ST_THROW_IN_FORWARD_RIGHT) || (ST_THROW_IN_BACK_LEFT < gameState)) {
            if (gameState == ST_FOUL) goto foul;
          }
          else {
            bVar8 = AI_throwInDirections[(short)(gameState + -ST_THROW_IN_FORWARD_RIGHT)];
            if (team != &bottomTeamData) {
              bVar8 = bVar8 << 4 | bVar8 >> 4;
            }
            if (((AI_rand & 0xf) != 0) ||
               ((CONCAT31((int3)(CONCAT22((short)((uint)unaff_D1 >> 0x10),
                                          gameState + -ST_THROW_IN_FORWARD_RIGHT) >> 8),bVar8) &
                1 << (uVar12 & 0x1f)) == 0)) goto check_closest_player_facing;
          }
        }
        else {
foul:
          if ((AI_rand & 0xf) == 0) goto check_closest_player_facing;
          if ((sVar10 + 0x10U & 0xff) >> 5 != uVar5) {
            team->currentAllowedDirection = (sVar10 + 0x10U & 0xff) >> 5;
            return;
          }
        }
apply_turn_delta_from_angle:
        if ((short)uVar5 < 0) {
          return;
        }
        if (AI_maxStoppageTime <= stoppageTimerActive) {
          AI_maxStoppageTime = stoppageTimerActive;
        }
        AI_resumePlayTimer = 0xf;
        if ((gameState == ST_PENALTY) || (gameState == ST_PENALTIES)) {
set_aftertouch_none:
          team->AI_afterTouchStrength = 0;
        }
        else {
          if ((gameState < ST_FREE_KICK_LEFT1) || (ST_FREE_KICK_RIGHT3 < gameState)) {
            if ((gameState == ST_CORNER_LEFT) || (gameState == ST_CORNER_RIGHT)) {
set_aftertouch_medium:
              team->AI_afterTouchStrength = 1;
              goto apply_dir_and_normal_fire;
            }
            if ((AI_rand & 0x18) != 0) goto aftertouch_by_distance;
          }
          else {
aftertouch_by_distance:
            if (puVar2 < (uchar *)0x7080) goto set_aftertouch_none;
            if (puVar2 < (uchar *)0xe1c8) goto set_aftertouch_medium;
          }
          team->AI_afterTouchStrength = 2;
        }
apply_dir_and_normal_fire:
        team->currentAllowedDirection = uVar5;
        team->normalFire = 1;
        if ((gameState == ST_PENALTY) || (gameState == ST_PENALTIES)) {
zero_turn_and_return:
          team->AI_ballSpinDirection = 0;
          return;
        }
        if ((gameState == ST_CORNER_LEFT) || (gameState == ST_CORNER_RIGHT)) {
          if ((AI_rand & 7) < 3) {
            wVar7 = 1;
            uVar5 = uVar5 + 1;
          }
          else {
            if (5 < (AI_rand & 7)) goto zero_turn_and_return;
            wVar7 = 0xffff;
            uVar5 = uVar5 - 1;
          }
          if ((playerTurnFlags & '\x01' << (uVar5 & 7)) != 0) {
            team->AI_ballSpinDirection = wVar7;
            return;
          }
          goto zero_turn_and_return;
        }
        AI_resumePlayTimer = 0xf;
        team->currentAllowedDirection = uVar5;
        team->normalFire = 1;
        wVar7 = 0;
        if (gameState == ST_FOUL) {
          if (team == &topTeamData) {
            if (0x2a9 < *(short *)(unaff_A2 + 0x22)) goto apply_turn_and_return;
          }
          else if (*(short *)(unaff_A2 + 0x22) < 0xd9) goto apply_turn_and_return;
        }
        wVar7 = 0xffff;
        if ((char)((char)(uVar5 << 5) - cVar11) < '\0') {
          wVar7 = 1;
        }
apply_turn_and_return:
        team->AI_ballSpinDirection = wVar7;
        return;
      }
      if ((0x95 < stoppageTimerActive) && (uVar5 == cameraDirection))
      goto apply_turn_delta_from_angle;
    }
check_closest_player_facing:
    pSVar13 = FindClosestPlayerToBallFacing(uVar5 << 5,team);
    if ((pSVar13 == (Sprite *)0xffffffff) || (pSVar1->teamNumber != pSVar13->teamNumber)) {
no_player_facing:
      if ((currentGameTick & 0xe) != 0) {
        return;
      }
      if ((short)AI_turnDirection < 0) {
        if ((AI_turnDirection != 0xffff) &&
           (AI_turnDirection = AI_turnDirection + 1, AI_turnDirection != 0xffff)) {
          return;
        }
        wVar7 = 1;
      }
      else {
        if ((AI_turnDirection != 1) &&
           (AI_turnDirection = AI_turnDirection - 1, AI_turnDirection != 1)) {
          return;
        }
        wVar7 = 0xffff;
      }
      uVar5 = AI_turnDirection + uVar5 & 7;
      if ((playerTurnFlags & '\x01' << uVar5) != 0) {
        team->currentAllowedDirection = uVar5;
        return;
      }
      AI_turnDirection = wVar7;
      return;
    }
    goto our_player_closest;
  }
  if (((playingPenalties == 0) && (penalty == 0)) || ((short)team->spinTimer < 0)) {
    sVar4 = AI_counter;
    sVar4 = AI_counter;
    if (sVar4 != 0) {
      AI_SetDirectionTowardOpponentsGoal(team);
    }
    if (pSVar1 == (Sprite *)0x0) {
      return;
    }
    if ((short)team->spinTimer < 0) {
      if ((team->plVeryCloseToBall == 0) && (bVar15 = team->plCloseToBall == 0, bVar15)) {
        AI_DecideWhetherToTriggerFire(pSVar1,team,uVar5);
        if (bVar15) {
          return;
        }
        if ((pSVar13 != (Sprite *)0x0) &&
           (0x31 < (int)(pSVar13->ballDistance - pSVar1->ballDistance))) {
          pSVar1 = team->passToPlayerPtr;
          team->passToPlayerPtr = team->controlledPlayer;
          team->controlledPlayer = pSVar1;
          return;
        }
        if (pSVar13 == (Sprite *)0x0) {
derive_allowed_dir_from_full_angle:
          uVar5 = ((byte)((char)pSVar1->fullDirection + 0x80) + 0x10 & 0xff) >> 5;
          if (((uVar5 != pSVar1->direction) && (799 < pSVar1->ballDistance)) &&
             ((currentGameTick & 0xe) != 0)) {
            team->currentAllowedDirection = pSVar1->direction;
            return;
          }
          team->currentAllowedDirection = uVar5;
          return;
        }
        if (deadVarAlways0 == 0) {
          if ((topTeamData.playerNumber == 0) && (bottomTeamData.playerNumber == 0)) {
            uVar6 = 0xffff;
            if ((((short)(pSVar1->x).s.i < 0x111) || (0x18e < (short)(pSVar1->x).s.i)) ||
               ((0x9e < (short)(pSVar1->y).s.i && ((short)(pSVar1->y).s.i < 0x2e4)))) {
              if ((currentGameTick & 0x18) != 0) {
                team->currentAllowedDirection = uVar5;
                return;
              }
              uVar6 = ((byte)((char)(pSVar1->fullDirection +
                                    *(short *)((int)AI_randomRotateTable + (int)(short)(AI_rand & 2)
                                              )) + 0x80) + 0x10 & 0xff) >> 5;
            }
            team->currentAllowedDirection = uVar6;
            return;
          }
          goto derive_allowed_dir_from_full_angle;
        }
        goto set_allowed_dir_from_angle_bucket;
      }
      bVar15 = false;
      AI_DecideWhetherToTriggerFire(pSVar1,team,uVar5);
      if (bVar15) {
        return;
      }
      if (((deadVarAlways0 != 0) && (team->opponentsTeam == playerKickerPtr)) &&
         (team->opponentsTeam->playerHasBall != 0)) {
        return;
      }
      if ((pSVar1->direction == 2) || (pSVar1->direction == 6)) {
        if (team == &topTeamData) {
          if ((short)ballSprite.y.s.i < 0x2e4) goto distance_and_random_fire_gate;
        }
        else if (0x9e < (short)ballSprite.y.s.i) goto distance_and_random_fire_gate;
      }
      else {
distance_and_random_fire_gate:
        if ((puVar2 < (uchar *)0x7081) && ((puVar2 < (uchar *)0x3200 || ((AI_rand & 3) == 0)))) {
          cVar9 = '\x0f';
          if (puVar2 < (uchar *)0xc81) {
            cVar9 = '2';
          }
          if (((-1 < (short)pSVar1->direction) &&
              (cVar3 = (char)(pSVar1->direction << 5) - cVar11, cVar3 <= cVar9)) && (-cVar9 < cVar3)
             ) {
            bVar15 = false;
            if (AI_resumePlayTimer != 0) {
              return;
            }
            AI_ResumeGameDelay(team);
            if (!bVar15) {
              return;
            }
            team->AI_afterTouchStrength = 0;
            AI_resumePlayTimer = 0xf;
            team->currentAllowedDirection = uVar5;
            team->normalFire = 1;
            wVar7 = 0xffff;
            if (cVar3 < '\0') {
              wVar7 = 1;
            }
            team->AI_ballSpinDirection = wVar7;
            return;
          }
        }
      }
      if (team->field_84 == 0) {
        if (((uchar *)0x2647 < puVar2) && (pSVar1 != (Sprite *)0x0)) {
          pSVar13 = team->opponentsTeam->controlledPlayer;
          if (pSVar13 == (Sprite *)0x0) {
use_pass_target_if_valid:
            pSVar13 = team->opponentsTeam->passToPlayerPtr;
            if (pSVar13 != (Sprite *)0x0) {
              if (pSVar13->ballDistance < 800) goto evaluate_closest_facing_player_midrange;
              if (pSVar13->ballDistance < 5000) goto far_distance_decision_gate;
            }
          }
          else {
            if (pSVar13->ballDistance < 800) {
evaluate_closest_facing_player_midrange:
              if ((uchar *)0x2bf20 < puVar2) goto decide_immediate_turn_or_gate;
              pSVar13 = FindClosestPlayerToBallFacing(uVar5 << 5,team);
              if ((pSVar13 != (Sprite *)0xffffffff) && (pSVar1->teamNumber == pSVar13->teamNumber))
              {
our_player_closest:
                team->field_84 = 0;
                bVar15 = false;
                if (AI_resumePlayTimer != 0) {
                  return;
                }
                AI_ResumeGameDelay(team);
                if (!bVar15) {
                  return;
                }
                AI_resumePlayTimer = 0xf;
                team->currentAllowedDirection = uVar5;
                team->quickFire = 1;
                if (stoppageTimerActive < AI_maxStoppageTime) {
                  return;
                }
                AI_maxStoppageTime = stoppageTimerActive;
                return;
              }
            }
            else {
              if (4999 < pSVar13->ballDistance) goto use_pass_target_if_valid;
far_distance_decision_gate:
              if ((AI_rand < 9) && ((uchar *)0xbd10 < puVar2)) {
decide_immediate_turn_or_gate:
                uVar6 = ((sVar10 + 0x10U & 0xff) >> 5) - uVar5 & 7;
                if ((uVar6 == 0) || ((uVar6 == 1 || (uVar6 == 0xffff)))) {
                  team->AI_afterTouchStrength = 2;
                  if (puVar2 < frontbufferBase + 0x9be9) {
                    team->AI_afterTouchStrength = 1;
                  }
                  team->currentAllowedDirection = uVar5;
                  team->normalFire = 1;
                  AI_resumePlayTimer = 0xf;
                  wVar7 = 0xffff;
                  if ((char)((char)(uVar5 << 5) - cVar11) < '\0') {
                    wVar7 = 1;
                  }
                  if ((int)ballSprite.deltaY.raw < 0) {
                    if (ballSprite.y.s.i < 0x156) goto commit_turn_to_ai_state;
                  }
                  else if (0x22b < ballSprite.y.s.i) goto commit_turn_to_ai_state;
                  uVar5 = (currentGameTick & 0x1c) >> 2;
                  if ((ballSprite.x.s.i < 0xc1) || (0x1dd < ballSprite.x.s.i)) {
                    if ((ballSprite.x.s.i < 0x76) || (0x229 < ballSprite.x.s.i)) {
                      if (uVar5 < 4) goto commit_turn_to_ai_state;
                    }
                    else {
                      if (uVar5 == 0) goto invert_turn;
                      if (3 < uVar5) goto commit_turn_to_ai_state;
                    }
                  }
                  else if (uVar5 != 0) {
                    if (uVar5 < 5) goto commit_turn_to_ai_state;
invert_turn:
                    wVar7 = -wVar7;
                    goto commit_turn_to_ai_state;
                  }
                  wVar7 = 0;
commit_turn_to_ai_state:
                  team->AI_ballSpinDirection = wVar7;
                  return;
                }
              }
              else {
                if ((currentGameTick & 0xc) != 0) goto choose_dir_when_not_very_close;
                pSVar13 = FindClosestPlayerToBallFacing(uVar5 << 5,team);
                if ((pSVar13 != (Sprite *)0xffffffff) && (pSVar1->teamNumber == pSVar13->teamNumber)
                   ) goto our_player_closest;
              }
            }
            if ((team->field_84 == 0) && ((frameCount & 0x7f) < 0x20)) {
              team->field_84 = 4;
              goto closest_facing_player_not_ours;
            }
          }
        }
choose_dir_when_not_very_close:
        if (team->plVeryCloseToBall != 0) {
set_allowed_dir_from_angle_bucket:
          team->currentAllowedDirection = (sVar10 + 0x10U & 0xff) >> 5;
          return;
        }
      }
      else {
        team->field_84 = team->field_84 - 1;
        pSVar13 = FindClosestPlayerToBallFacing(uVar5 << 5,team);
        if ((pSVar13 != (Sprite *)0xffffffff) && (pSVar1->teamNumber == pSVar13->teamNumber))
        goto our_player_closest;
closest_facing_player_not_ours:
        if (team->plVeryCloseToBall != 0) {
          if ((currentGameTick & 0x80) != 0) {
            team->currentAllowedDirection = pSVar1->direction + 1 & 7;
            return;
          }
          team->currentAllowedDirection = pSVar1->direction - 1 & 7;
          return;
        }
      }
      team->currentAllowedDirection = pSVar1->direction;
      return;
    }
  }
  if (((playingPenalties == 0) && (penalty == 0)) && ((AI_rand & 1) != 0)) {
    if ((short)team->AI_ballSpinDirection < 0) {
      psVar14 = AI_leftSpinTable;
      goto apply_spin_table_offset;
    }
    if (team->AI_ballSpinDirection != 0) {
      psVar14 = AI_rotateRightTable;
      goto apply_spin_table_offset;
    }
  }
  if (team->AI_afterTouchStrength == 1) {
    team->currentAllowedDirection = 0xffff;
    return;
  }
  psVar14 = AI_longKickTable;
apply_spin_table_offset:
  team->currentAllowedDirection =
       *(short *)((int)psVar14 + (int)(short)(team->AI_afterTouchStrength << 1)) +
       team->controlledPlDirection & 7;
  return;
}


// --- AI_SetDirectionTowardOpponentsGoal @ 00118112 ---

/* in:
       A6 -> team data
   
   Set the direction toward the opposing goal and the ball.
   Limits for ball x are less than 300, 300...371 and greater than 371. */

short __usercall AI_SetDirectionTowardOpponentsGoal(TeamGeneralInfo *team)

{
  short sVar1;
  short unaff_D0w;
  word wVar2;
  word wVar3;
  
  sVar1 = AI_counter;
  sVar1 = AI_counter;
  if (sVar1 == 0) {
    return unaff_D0w;
  }
  wVar2 = ballSprite.x.s.i;
  sVar1 = AI_attackHalf;
  if (sVar1 == 1) {
    if (team != &bottomTeamData) {
      return ballSprite.x.s.i;
    }
    wVar3 = 1;
    if ((299 < ballSprite.x.s.i) && (wVar3 = 7, ballSprite.x.s.i < 0x174)) {
      wVar3 = 0;
    }
  }
  else {
    if (team != &topTeamData) {
      return ballSprite.x.s.i;
    }
    wVar3 = 3;
    if ((299 < ballSprite.x.s.i) && (wVar3 = 5, ballSprite.x.s.i < 0x174)) {
      wVar3 = 4;
    }
  }
  team->currentAllowedDirection = wVar3;
  return wVar2;
}


// --- AI_DecideWhetherToTriggerFire @ 0011817c ---

/* in:
        D7 - controlled player direction
        A5 -> controlled player sprite
        A6 -> team general data
   out:
        D0, zero flag - 0/set: firing, !0/clear: not gonna fire */

int __usercall AI_DecideWhetherToTriggerFire(Sprite *player,TeamGeneralInfo *team,ushort dir)

{
  ushort uVar1;
  undefined4 unaff_D0;
  ushort uVar2;
  
  uVar1 = (ushort)((uint)unaff_D0 >> 0x10);
  if (player->playerOrdinal != 1) {
    if (team == &topTeamData) {
      if (((dir != 3) && (dir != 4)) && (dir != 5)) goto no_fire_return_one;
    }
    else if (((dir != 7) && (dir != 0)) && (dir != 1)) goto no_fire_return_one;
    if (player->ballDistance < 0x289) {
      if ((int)ballSprite.deltaZ.raw < 0) {
        if ((ballSprite.z.s.i < 0xc) || (0x14 < ballSprite.z.s.i)) goto no_fire_return_one;
      }
      else if ((ballSprite.z.s.i < 8) || (0xe < ballSprite.z.s.i)) goto no_fire_return_one;
      team->fireThisFrame = 1;
      team->currentAllowedDirection = (ushort)((byte)((char)player->fullDirection + 0x80U) >> 5);
      uVar2 = ((byte)((char)player->fullDirection + 0x80) + 0x10 & 0xff) >> 5;
      if (uVar2 == dir) {
        team->currentAllowedDirection = uVar2;
        AI_counter = 0xf;
        AI_counterWriteOnly = uVar2;
        AI_attackHalf = 2;
        if (team != &topTeamData) {
          AI_attackHalf = 1;
        }
        return (uint)uVar1 << 0x10;
      }
    }
  }
no_fire_return_one:
  return CONCAT22(uVar1,1);
}


// --- AI_ResumeGameDelay @ 0011825c ---

/* in:
        A6 -> team (general)
   out:
        A0 -> opponents team
        carry flag = pass/kick time == 13
   
   Only used by AI. */

TeamGeneralInfo * __usercall AI_ResumeGameDelay(TeamGeneralInfo *team)

{
  return team->opponentsTeam;
}


// --- AI_Kick @ 00118290 ---

/* in:
        A1 -> player controlling the ball
        A6 -> team general info */

char __usercall AI_Kick(Sprite *player,TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  byte unaff_D0b;
  
  if (((deadVarAlways0 == 0) ||
      ((team != playerKickerPtr && (team->opponentsTeam != playerKickerPtr)))) &&
     (unaff_D0b = (byte)currentGameTick & 6, player->ballDistance < 0xc9)) {
    if (((team->opponentsTeam->playerHasBall != 0) &&
        (pSVar1 = team->opponentsTeam->controlledPlayer, pSVar1 != (Sprite *)0x0)) &&
       ((unaff_D0b = (char)(pSVar1->direction << 5) - (char)(player->direction << 5),
        (char)unaff_D0b < -0x20 || (' ' < (char)unaff_D0b)))) {
      team->currentAllowedDirection = player->direction;
      team->firePressed = 1;
      team->fireThisFrame = 1;
      team->normalFire = 1;
    }
  }
  return unaff_D0b;
}


// --- FindClosestPlayerToBallFacing @ 00118304 ---

/* in:
        D0 -  full direction player must be facing (+/- 16)
        A6 -> team (general)
   out:
        D2 - ball distance
        A0 -> player
   
   Find player closest to ball facing specified direction. Search both teams. */

Sprite * __usercall FindClosestPlayerToBallFacing(ushort fullDir,TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  char cVar2;
  uint uVar3;
  short sVar4;
  short sVar5;
  Sprite *pSVar6;
  Sprite **ppSVar7;
  
  pSVar6 = (Sprite *)0xffffffff;
  uVar3 = 0xffffffff;
  sVar4 = 1;
  sVar5 = 10;
  ppSVar7 = topTeamData.spritesTable;
  do {
    do {
      pSVar1 = *ppSVar7;
      if ((((pSVar1 != team->controlledPlayer) && (pSVar1->sentAway == 0)) &&
          (pSVar1->playerState == PL_NORMAL)) &&
         (((cVar2 = (char)pSVar1->fullDirection - (char)fullDir, -0x11 < cVar2 && (cVar2 < '\x11'))
          && (pSVar1->ballDistance < uVar3)))) {
        uVar3 = pSVar1->ballDistance;
        pSVar6 = pSVar1;
      }
      sVar5 = sVar5 + -1;
      ppSVar7 = ppSVar7 + 1;
    } while (sVar5 != -1);
    sVar5 = 10;
    sVar4 = sVar4 + -1;
    ppSVar7 = bottomTeamData.spritesTable;
  } while (sVar4 != -1);
  return pSVar6;
}


// --- PanicLookupMessagePtr @ 0011fc30 ---

char * __usercall PanicLookupMessagePtr(ushort code)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  sVar3 = 3;
  pbVar4 = byte_11FC60;
  do {
    code = code << 4 | code >> 0xc;
    bVar1 = (byte)code & 0xf;
    bVar2 = bVar1 + 0x30;
    if (0x39 < bVar2) {
      bVar2 = bVar1 + 0x37;
    }
    pbVar5 = pbVar4 + 1;
    *pbVar4 = bVar2;
    sVar3 = sVar3 + -1;
    pbVar4 = pbVar5;
  } while (sVar3 != -1);
  *pbVar5 = 0;
  return (char *)byte_11FC60;
}


// --- PrintFormatted @ 00120cb8 ---

/* in:
       A0 -> format string
       A1 -> converted string in the end (words)
       D0 - number 0
       D1 - number 1
       D2 - number 2
       D3 - number 3
       D4 - number 4
       D5 - number 5
       D6 - number 6
       A2 - string a
       A3 - string b
       A4 - string c
   
   Format string can contain simple commands that start with %.
   %a, %b and %c mark string insertation, where actual strings
   are in A2, A3 and A4. Ascii representation of 0, 1,
   2, 3, 4, 5, or 6 after % means converting number in D0-D6
   to ascii and inserting in output string. */

void __usercall
PrintFormatted(char *fmt,char *out,ushort n0,ushort n1,ushort n2,ushort n3,ushort n4,ushort n5,
              ushort n6,char *a,char *b,char *c)

{
  char cVar1;
  ushort uVar3;
  uint uVar2;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  do {
    while (*fmt == '%') {
      pcVar4 = fmt + 2;
      pcVar5 = out;
      pcVar6 = a;
      if (((fmt[1] == 'a') || (pcVar6 = b, fmt[1] == 'b')) || (pcVar6 = c, fmt[1] == 'c')) {
        do {
          out = pcVar5;
          cVar1 = *pcVar6;
          *out = cVar1;
          fmt = pcVar4;
          pcVar5 = out + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
      }
      else {
        uVar2 = (uint)n0;
        if (((((fmt[1] != '0') && (uVar2 = (uint)n1, fmt[1] != '1')) &&
             ((uVar2 = (uint)n2, fmt[1] != '2' &&
              ((uVar2 = (uint)n3, fmt[1] != '3' && (uVar2 = (uint)n4, fmt[1] != '4')))))) &&
            (uVar2 = (uint)n5, fmt[1] != '5')) && (uVar2 = (uint)n6, fmt[1] != '6')) {
          panicReasonCode = 0x5916;
          PanicHaltLoop();
        }
        uVar3 = (ushort)uVar2;
        if (9 < uVar3) {
          if (99 < uVar3) {
            if (999 < uVar3) {
              if (9999 < uVar3) {
                uVar3 = (ushort)(uVar2 % 10000);
                *out = (char)(uVar2 / 10000);
                pcVar5 = out + 1;
                *out = *out + '0';
              }
              uVar2 = (uint)(short)uVar3;
              uVar3 = (ushort)(uVar2 % 1000);
              *pcVar5 = (char)(uVar2 / 1000);
              out = pcVar5 + 1;
              *pcVar5 = *pcVar5 + '0';
            }
            uVar2 = (uint)(short)uVar3;
            uVar3 = (ushort)(uVar2 % 100);
            *out = (char)(uVar2 / 100);
            pcVar5 = out + 1;
            *out = *out + '0';
          }
          uVar2 = (uint)(int)(short)uVar3 % 10;
          *pcVar5 = (char)((uint)(int)(short)uVar3 / 10);
          out = pcVar5 + 1;
          *pcVar5 = *pcVar5 + '0';
        }
        *out = (char)uVar2;
        *out = *out + '0';
        fmt = pcVar4;
        out = out + 1;
      }
    }
    cVar1 = *fmt;
    *out = cVar1;
    fmt = fmt + 1;
    out = out + 1;
  } while (cVar1 != '\0');
  return;
}


