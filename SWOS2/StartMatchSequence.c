/*
 * Auto-generated call graph export
 * Start: StartMatchSequence
 * Date : 2025-11-30 18:37:50
 */

/* ===================== INCLUDES ===================== */
#include <stdint.h>
#include <stdbool.h>
#include "LocalTypes.h"
#include "Data.h"

/* ===================== PROTOTYPES ===================== */

short __usercall AssetSys_Dispatch(AssetSysOp op);
ushort __usercall GetKey(void);
void __usercall PanicHaltLoop(void);
ushort __usercall Player1StatusProc(void);
ushort __usercall Player2StatusProc(void);
void __usercall LoadPitchMap(ushort mapIndex);
void __usercall FixupAndColorPitchFile(void);
void __usercall FadeIn(void);
void __usercall FadeOutToBlack(void);
void __usercall ProcessImageCommandStream(void);
void __usercall BlitDispatch(ushort spriteIndex, ushort xOffset, ushort yOffset, ushort width, ushort height, ushort maskSel, ushort dstX, ushort dstY, void * src, void * planesFlag);
void __usercall BlitterSpan4Planes(void);
void __usercall BlitterSpanCoreMasked(void);
undefined unknown align_and_prepare_left_mask(void);
undefined unknown blitter_rectrow_masked(void);
void __usercall BlitterCopyOverlayToScreen(void);
void __usercall HWSprite_LoadFromSpriteGraphics(void);
void __usercall BlitSpritePlanar_Word(void);
void __usercall DrawSprite_entry2(void);
void __usercall DrawSprite16Pixels(void);
uchar __usercall CopySprite(ushort srcSprite, ushort xOffset, ushort yOffset, ushort dstSprite);
void __usercall DrawSpriteClipped(void * sprite, ushort x, ushort y);
void __usercall InitDisplaySprites(void);
void __usercall SortSprites(void);
char __usercall AdjustFanColor(uchar * destPattern, uchar * pitchConvTable);
char __usercall ConvertSpriteColors(ushort spriteNumber, ushort * colorConvTable);
undefined unknown RectRowMaskedApplyScreenOffset(void);
void __usercall FillRectangle(void);
void __usercall WaitForVSync(void);
ushort __usercall GetTextWidth(char * text, CharTable * charsTable);
short __usercall DrawMenuText(ushort x, ushort y, ushort color, char * text, CharTable * chars);
short __usercall DrawMenuTextRightAligned(ushort x_end, ushort y, ushort color, char * text, CharTable * chars);
short __usercall DrawMenuTextCentered(ushort x_center, ushort y, ushort color, char * text, CharTable * chars);
ushort __usercall Text2Sprite(ushort xOff, ushort yOff, ushort dstSpriteIndex, char * text, CharTable * charsTable);
void __usercall BlitStringToFrontBuffer(ushort spriteIndex, ushort x, ushort y, ushort planeMask);
void __usercall BlitGlyphToSpriteBitmap(ushort glyphIndex, ushort xOff, ushort yOff, ushort planeMask, ushort dstSpriteIndex);
ushort __usercall LoadFile(char * filename, void * dst);
ushort __usercall PlaySong(char * filename);
ushort __usercall AssetCacheAlloc(uint size);
int __usercall AssetCacheFindByName(char * name);
short __usercall AssetCacheCopyByName(char * name, void * dst);
void __usercall AssetCacheStoreFromMemory(char * name, void * src, uint size);
void __usercall RncDecompressV2(void * src, void * dst);
int __usercall RncDecompressV1(void * src, void * dst, uint expectedSize);
int __usercall RncDecodeBlock(void * src, void * dst);
int __usercall RncDecodeSymbol(void * tab);
int __usercall RncGetBits(uint mask, uint nbits);
void __usercall RncRefillBits(void);
uint __usercall RncReadU32(uchar * * pp);
void __usercall RncBuildTable(void * outTab);
void __usercall nullsub_5(void);
void __usercall CrowdResetMatchState(void);
void __usercall LoadSfxResources(void);
void __usercall EnsureSfxLoadedAndStart(void);
void __usercall PlayPenaltySample(void);
void __usercall PlaySample1IfNotTraining(void);
undefined unknown PlaySample(void);
void __usercall StartMenuMusic(void * bankBase, void * songPtr);
void __usercall j_AudioApplyPresetToChannels(uint presetId);
void __usercall SetVolumeOrStopChants(uint channelOrAll, uint volume);
void __usercall StopAudio(void);
void __usercall SetPlayerAnimationTable(AnimTable * animTable, Sprite * player);
void __usercall SetBallPosition(short ballX, short ballY);
void __usercall RemoveReferee(void);
void __usercall InitRefereeAnimationTable(AnimTable * animTable);
void __usercall nullsub_21(void);
void __usercall CopyAdvertisementsData(void);
void __usercall InitAdvertisements(void);
void __usercall SetAdvertisementsInvisible(void);
void __usercall MakeSpritesFromPlayerNames(void * leftTeam, void * rightTeam);
ushort __usercall MakePlayerNameSprite(ushort playerNumber, uchar * shortName, ushort spriteIndex, uchar * nameLenTable);
void __usercall CopyPlayerNameLengths(void);
void __usercall InitGameSaveTeams(void * leftTeamInGame, void * rightTeamInGame);
void __usercall InitGameRestoreTeams(void * leftTeamInGame, void * rightTeamInGame);
char __usercall ConvertColorsAndTextSprites(TeamGame * team1, TeamGame * team2);
void __usercall CountFaces(TeamGame * team);
void __usercall ConvertColorTableToSkinColor(ushort color, ushort * destTable);
char __usercall DetermineGoalieFaces(TeamGame * team, uchar * gkFaceToIndex, uchar * gkFaceIndices);
void __usercall InitializePlayerSpriteFrameIndices(void);
void __usercall ClearSaveFlagForGoalSprites(void);
void __usercall ResetTime(void);
void __usercall ResetResultSprites(void);
void __usercall SetPitchTypeAndNumber(void);
void __usercall InitCurrentGoalHighlight(void);
void __usercall StartMatchSequence(void * topTeam, void * bottomTeam);
ushort __usercall ReadTimerDelta(void);
void __usercall SaveRand2State(void);
void __usercall RestoreRand2State(void);
void __usercall Randomize2(ushort seed);
ushort __usercall Rand2(void);
ushort __usercall Rand(void);
void __usercall ResetGoalAttempt(void);
void __usercall InitTeamsData(void);
void __usercall StartingMatch(void);
void __usercall StopAllPlayers(void);
void __usercall StopPlayers(TeamGeneralInfo * team);
void __usercall InitPlayersBeforeEnteringPitch(void);
void __usercall sub_11FBA2(void);
char * __usercall PanicLookupMessagePtr(ushort code);
void __usercall UnpackMenu(Menu * dstMenu, void * staticMenu);
void __usercall InitMenuEntry(MenuEntry * entry);
void __usercall MenuProc(void);
void __usercall UpdateBlinkingMenuText(void);
void __usercall MenuCheckControls(void);
void __usercall nullsub_1(void);
void __usercall DrawMenuItemOuterFrame(ushort color, ushort x, ushort y, ushort width, ushort height);
void __usercall DrawMenuItemInnerFrame(ushort color, ushort x, ushort y, ushort width, ushort height);
void __usercall DrawMenuItemBackground(ushort color, ushort x, ushort y, ushort width, ushort height);
void __usercall DrawMenuItemBackgroundMasked(void);
uchar __usercall CopyWholeSprite(ushort srcSprite, ushort dstSprite);
void __usercall BlitterCopyPanelToScreen2(void);
void __usercall Int2Ascii(ushort value, char * out);
MenuEntry * __usercall CalcMenuEntryAddress(ushort ordinal);
uchar __usercall GetStringLength(void);
char * __usercall StringCopy(char * src, char * dst);
void __usercall PrintFormatted(char * fmt, char * out, ushort n0, ushort n1, ushort n2, ushort n3, ushort n4, ushort n5, ushort n6, char * a, char * b, char * c);
void __usercall CallDrawMenuItem(MenuEntry * item);
void __usercall DrawMenuItem(MenuEntry * item);
void __usercall DrawMenuBackWithCheck(MenuEntry * entry);
void __usercall DrawSelectedMenuItemFrame(Menu * menu);
void __usercall DrawMenu(void);
void __usercall ShowMenu(void * packedMenu);
void __usercall RestorePreviousMenu(void * oldSelectedEntry, void * oldPackedMenu);
short __usercall ActivateMenu(Menu * menu);
void __usercall DrawMenuPanelBackground(void);
short __usercall CalcTeamPriceRankPercentOffset(void * team, void * info);
void __usercall CalcTeamViewOffset(TeamFile * teamFile);
ushort __usercall GetPlayerPrice(TeamFile * team, PlayerFile * player, ushort position);
ushort __usercall CountNearnessFactor(ushort curBallQuadrant, ushort dstBallQuadrant, ushort price, uchar * curQuadDistFactor, uchar * playerPositions, uchar * coordToQuad);
char __usercall GetPlayerRandomNum(PlayerFile * playerFile);
ushort __usercall GetAveragePlayerPrice(void * team);
void __usercall ApplyTeamTactics(void * playerInfos);
char __usercall AdjustPlayerSkills(ushort playerIndex, TeamFile * teamFile, TeamFile * oppTeamFile, TeamGame * teamGame, PlayerFile * playerFile, PlayerInfoHeader * playerInfoHeader);
short __usercall GetPlayerPricePercentageChange(short factor, void * team);
ushort __usercall ScaleSkill(ushort skill, ushort factor, void * whichSide);
char * __usercall ExtractSurname(char * name, ushort maxLenAndFlags);
ushort __usercall FindTeamInCache(ushort teamNumber);
void * __usercall VerifyTeamLoaded(ushort teamNumber);
void __usercall FindTeamInDIY(void);
ushort __usercall GetMoreExpensiveTeamsCountWrapper(ushort teamNo, DIY_Competition * comp);
ushort __usercall GetMoreExpensiveTeamsCount(ushort teamNo, DIY_Competition * comp);
ushort __usercall SearchTeamInTmdFile(ushort teamNo);
void __usercall InitAnimatedPatterns(void);
void __usercall ShowFsErrorByCode(ushort errCode);
void __usercall ShowErrorMenu(char * errorText);
void __usercall sub_141798(void * teamPtr);
void * __usercall GetTeamPointer(ushort teamId);
void * __usercall GetPlayer(ushort teamNumber, ushort playerFileIndex);
void __usercall SetTeamGlobalNumbers(ushort numTeams, void * firstTeam);
ushort __usercall LoadTeamFile(ushort extNumber);
void __usercall SetLoadedTeamsGlobalNumbers(void);
void __usercall SetLeagueNumbers(void);

/* =================== DECOMPILED C ===================== */

// --- AssetSys_Dispatch @ 001001ac ---

short __usercall AssetSys_Dispatch(AssetSysOp op)

{
  short sVar1;
  
  g_assetSelect = op;
  sVar1 = (*(AssetSys_JumpTable + (short)(op << 1)))();
  g_assetSelect = 0xffff;
  return sVar1;
}


// --- GetKey @ 00101ccc ---

/* out:
         ASCII code in convertedKey 
         scan code in lastKey
         0 if nothing pressed
         
   destroys: eax, ebx, esi
   [ebp safe] */

ushort __usercall GetKey(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  ushort uVar10;
  
  uVar10 = 0;
  do {
    bVar9 = keyBuffer[8];
    bVar8 = keyBuffer[7];
    bVar7 = keyBuffer[6];
    bVar6 = keyBuffer[5];
    bVar5 = keyBuffer[4];
    bVar4 = keyBuffer[3];
    bVar3 = keyBuffer[2];
    bVar1 = keyBuffer[1];
    if (keyCount == 0) {
      currentKey = keyCount;
      return uVar10;
    }
    INTENA = 8;
    keyBuffer[1] = keyBuffer[2];
    keyBuffer[2] = keyBuffer[3];
    keyBuffer[3] = keyBuffer[4];
    keyBuffer[4] = keyBuffer[5];
    keyBuffer[5] = keyBuffer[6];
    keyBuffer[6] = keyBuffer[7];
    keyBuffer[7] = keyBuffer[8];
    keyBuffer[8] = keyBuffer[9];
    keyCount = keyCount - 1;
    INTENA = 0x8008;
    bVar2 = keycodeLut[(short)(ushort)keyBuffer[0]];
    uVar10 = (ushort)bVar2;
    keyBuffer[0] = bVar1;
  } while (bVar2 == 0x3f);
  currentKey = (ushort)bVar2;
  keyBuffer[7] = bVar9;
  keyBuffer[6] = bVar8;
  keyBuffer[5] = bVar7;
  keyBuffer[4] = bVar6;
  keyBuffer[3] = bVar5;
  keyBuffer[2] = bVar4;
  keyBuffer[1] = bVar3;
  keyBuffer[0] = bVar1;
  return (ushort)bVar2;
}


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
  PrintFormatted((char *)panicFormatStr,(char *)panicOutBuf,n0,unaff_D1w,unaff_D2w,unaff_D3w,
                 unaff_D4w,unaff_D5w,unaff_D6w,a,unaff_A3,unaff_A4);
  FadeOutToBlack();
  do {
    do {
      do {
        Player1StatusProc();
      } while (pl1Fire == 0);
    } while (pl1Direction != 0);
    Player2StatusProc();
  } while ((pl2Fire == 0) || (pl2Direction != 0));
  DrawMenuTextCentered(0x98,0xe1,0xf,(char *)panicOutBuf,&bigCharsTable);
  WaitForVSync();
  paletteBankIndex = 4;
  FadeIn();
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


// --- Player1StatusProc @ 00102574 ---

ushort __usercall Player1StatusProc(void)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = JOY1DAT;
  pl1Right = -((uVar1 & 2) != 0);
  pl1Left = -((uVar1 & 0x200) != 0);
  uVar1 = uVar1 >> 1 ^ uVar1;
  pl1Down = -((uVar1 & 1) != 0);
  pl1Up = -((uVar1 & 0x100) != 0);
  pl1Fire = -((CIAA_PRA & 0x80) == 0);
  pl1UpRight = pl1Right & pl1Up;
  pl1DownRight = pl1Right & pl1Down;
  pl1DownLeft = pl1Left & pl1Down;
  pl1UpLeft = pl1Left & pl1Up;
  if (pl1LastFired == 0) {
    bVar2 = pl1Fire != 0;
    pl1ShortFire = -bVar2;
    pl1LastFired = -bVar2;
    if (bVar2) {
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
  bool bVar2;
  
  uVar1 = JOY0DAT;
  pl2Right = -((uVar1 & 2) != 0);
  pl2Left = -((uVar1 & 0x200) != 0);
  uVar1 = uVar1 >> 1 ^ uVar1;
  pl2Down = -((uVar1 & 1) != 0);
  pl2Up = -((uVar1 & 0x100) != 0);
  pl2Fire = -((CIAA_PRA & 0x40) == 0);
  pl2UpRight = pl2Right & pl2Up;
  pl2DownRight = pl2Right & pl2Down;
  pl2DownLeft = pl2Left & pl2Down;
  pl2UpLeft = pl2Left & pl2Up;
  if (pl2LastFired == 0) {
    bVar2 = pl2Fire != 0;
    pl2ShortFire = -bVar2;
    pl2LastFired = -bVar2;
    if (bVar2) {
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


// --- LoadPitchMap @ 00102a08 ---

void __usercall LoadPitchMap(ushort mapIndex)

{
  uint unaff_D1;
  
  LoadFile(*(char **)((int)&swcPitchMapFiles + (int)(short)(mapIndex << 2)),g_pitchDatBuffer);
  if (0xb220 < unaff_D1) {
    panicReasonCode = 3;
    PanicHaltLoop();
  }
  return;
}


// --- FixupAndColorPitchFile @ 00102a36 ---

void __usercall FixupAndColorPitchFile(void)

{
  short sVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  
  sVar1 = 0x905;
  pbVar2 = g_pitchDatBuffer;
  do {
    *(int *)pbVar2 = (int)&g_currentMenu.initFunc + *(int *)pbVar2;
    sVar1 = sVar1 + -1;
    pbVar2 = pbVar2 + 4;
  } while (sVar1 != -1);
  g_cameraX.s.i = 0;
  g_cameraY.s.i = 0;
  cameraXMod320 = 0;
  cameraYMod320 = 0;
  pbVar2 = g_pitchDatBuffer;
  pbVar3 = g_pitchDatBuffer + 0x54;
  bVar4 = (topTeamInGame.teamName[0] & 1) != 0;
  if (bVar4) {
    pbVar2 = g_pitchDatBuffer + 0x54;
    pbVar3 = g_pitchDatBuffer;
  }
  fansSidesSwapped = (word)bVar4;
  pitchFansConvertTable[0xb] = topTeamInGame.secShirtCol;
  pitchFansConvertTable[10] = topTeamInGame.secStripesCol;
  if (topTeamInGame.secStripesCol == topTeamInGame.secShirtCol) {
    pitchFansConvertTable[10] = topTeamInGame.secShortsCol;
  }
  sVar1 = 0x14;
  do {
    AdjustFanColor(*(uchar **)pbVar3,(uchar *)pitchFansConvertTable);
    sVar1 = sVar1 + -1;
    pbVar3 = pbVar3 + 4;
  } while (sVar1 != -1);
  pitchFansConvertTable[0xb] = bottomTeamInGame.secShirtCol;
  pitchFansConvertTable[10] = bottomTeamInGame.secStripesCol;
  if (bottomTeamInGame.secStripesCol == bottomTeamInGame.secShirtCol) {
    pitchFansConvertTable[10] = bottomTeamInGame.secShortsCol;
  }
  sVar1 = 0x14;
  do {
    AdjustFanColor(*(uchar **)pbVar2,(uchar *)pitchFansConvertTable);
    sVar1 = sVar1 + -1;
    pbVar2 = pbVar2 + 4;
  } while (sVar1 != -1);
  return;
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


// --- ProcessImageCommandStream @ 00103464 ---

void __usercall ProcessImageCommandStream(void)

{
  ushort uVar1;
  short sVar2;
  ushort unaff_D1w;
  ushort unaff_D2w;
  ushort *unaff_A0;
  byte *pbVar3;
  ushort *puVar4;
  char *pcVar5;
  ushort *puVar6;
  undefined2 *puVar7;
  dword unaff_A3;
  undefined1 uVar8;
  
  imageStreamCursor = unaff_A3;
read_next_opcode:
  do {
    puVar6 = unaff_A0 + 1;
    if (*unaff_A0 == 0xffff) {
final_copy_and_return:
      sVar2 = 0x5dd7;
      puVar7 = (undefined2 *)frontbufferBasePtr;
      pbVar3 = frontbufferMaskBuffer;
      do {
        *(undefined2 *)pbVar3 = *puVar7;
        sVar2 = sVar2 + -1;
        puVar7 = puVar7 + 1;
        pbVar3 = pbVar3 + 2;
      } while (sVar2 != -1);
      return;
    }
    uVar1 = *unaff_A0 & 0xf000;
    if (uVar1 == 0x7000) {
      pcVar5 = *(char **)puVar6;
process_nested_list:
      uVar8 = puVar6 == (ushort *)0x0;
      do {
        LoadFile(pcVar5,frontbufferMaskBuffer);
      } while (!(bool)uVar8);
      unaff_A0 = unaff_A0 + 3;
      goto read_next_opcode;
    }
    if (uVar1 == 0x8000) {
      pcVar5 = (char *)**(undefined4 **)puVar6;
      goto process_nested_list;
    }
    if (uVar1 == 0xc000) {
      uVar1 = *unaff_A0;
      unaff_D1w = (ushort)*(byte *)puVar6;
      puVar6 = unaff_A0 + 2;
      unaff_D2w = (ushort)*(byte *)((int)unaff_A0 + 3);
dispatch_draw_pack_A:
      unaff_A0 = puVar6 + 1;
      BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,(ushort)*(byte *)puVar6,(ushort)(byte)*puVar6,
                   0xffff,0,0,frontbufferMaskBuffer,(void *)0x0);
    }
    else {
      if (uVar1 == 0x1000) {
        uVar1 = *unaff_A0;
        unaff_D1w = *puVar6;
        puVar6 = unaff_A0 + 3;
        unaff_D2w = unaff_A0[2];
        goto dispatch_draw_pack_A;
      }
      if (uVar1 == 0x5000) {
        uVar1 = *unaff_A0;
        unaff_D1w = *puVar6;
        puVar6 = unaff_A0 + 3;
        unaff_D2w = unaff_A0[2];
        pbVar3 = (byte *)((int)unaff_A0 + 7);
        unaff_A0 = unaff_A0 + 4;
        BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,(ushort)*(byte *)puVar6,(ushort)*pbVar3,
                     0xfffe,0,0,frontbufferMaskBuffer,(void *)0x0);
      }
      else if (uVar1 == 0xd000) {
        uVar1 = *unaff_A0;
        unaff_D1w = (ushort)*(byte *)puVar6;
        puVar6 = unaff_A0 + 2;
        unaff_D2w = (ushort)*(byte *)((int)unaff_A0 + 3);
dispatch_draw_pack_B:
        unaff_A0 = puVar6 + 2;
        BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,(ushort)*(byte *)puVar6,(ushort)(byte)*puVar6
                     ,0xffff,(short)*(char *)(puVar6 + 1),(short)*(char *)((int)puVar6 + 3),
                     frontbufferMaskBuffer,(void *)0x0);
      }
      else {
        if (uVar1 == 0x2000) {
          uVar1 = *unaff_A0;
          unaff_D1w = *puVar6;
          puVar6 = unaff_A0 + 3;
          unaff_D2w = unaff_A0[2];
          goto dispatch_draw_pack_B;
        }
        if (uVar1 == 0xe000) {
          uVar1 = *unaff_A0;
          unaff_D1w = (ushort)*(byte *)puVar6;
          puVar6 = unaff_A0 + 2;
          unaff_D2w = (ushort)*(byte *)((int)unaff_A0 + 3);
dispatch_draw_pack_C:
          unaff_A0 = puVar6 + 3;
          BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,(ushort)*(byte *)puVar6,
                       (ushort)(byte)*puVar6,puVar6[2],(short)*(char *)(puVar6 + 1),
                       (short)*(char *)((int)puVar6 + 3),frontbufferMaskBuffer,(void *)0x0);
        }
        else {
          if (uVar1 == 0x3000) {
            uVar1 = *unaff_A0;
            unaff_D1w = *puVar6;
            puVar6 = unaff_A0 + 3;
            unaff_D2w = unaff_A0[2];
            goto dispatch_draw_pack_C;
          }
          if (uVar1 == 0xa000) {
            uVar1 = *unaff_A0;
            unaff_D1w = *puVar6;
            puVar6 = unaff_A0 + 3;
            unaff_D2w = unaff_A0[2];
            pbVar3 = (byte *)((int)unaff_A0 + 7);
            puVar4 = unaff_A0 + 4;
            pcVar5 = (char *)((int)unaff_A0 + 9);
            unaff_A0 = unaff_A0 + 5;
            BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,(ushort)*(byte *)puVar6,(ushort)*pbVar3,
                         0xffff,(short)*(char *)puVar4,(short)*pcVar5,frontbufferMaskBuffer,
                         (void *)((int)&NULL + 1));
          }
          else if (uVar1 == 0xf000) {
            uVar1 = *unaff_A0;
            unaff_D1w = (ushort)*(byte *)puVar6;
            puVar6 = unaff_A0 + 2;
            unaff_D2w = (ushort)*(byte *)((int)unaff_A0 + 3);
dispatch_draw_pack_D:
            unaff_A0 = puVar6 + 3;
            BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,(ushort)*(byte *)puVar6,
                         (ushort)(byte)*puVar6,puVar6[2],(short)*(char *)(puVar6 + 1),
                         (short)*(char *)((int)puVar6 + 3),frontbufferMaskBuffer,
                         (void *)((int)&NULL + 1));
          }
          else {
            if (uVar1 == 0xb000) {
              uVar1 = *unaff_A0;
              unaff_D1w = *puVar6;
              puVar6 = unaff_A0 + 3;
              unaff_D2w = unaff_A0[2];
              goto dispatch_draw_pack_D;
            }
            if (uVar1 != 0x9000) {
              panicReasonCode = 0x378;
              PanicHaltLoop();
              goto final_copy_and_return;
            }
            uVar1 = *unaff_A0;
            puVar4 = unaff_A0 + 2;
            unaff_A0 = unaff_A0 + 3;
            BlitDispatch(uVar1 & 0xfff,unaff_D1w,unaff_D2w,*puVar6,*puVar4,0xffff,0,0,(void *)0x0,
                         (void *)0x0);
          }
        }
      }
    }
  } while( true );
}


// --- BlitDispatch @ 00103716 ---

void __usercall
BlitDispatch(ushort spriteIndex,ushort xOffset,ushort yOffset,ushort width,ushort height,
            ushort maskSel,ushort dstX,ushort dstY,void *src,void *planesFlag)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  if (maskSel == 0) {
    panicReasonCode = 0xc6;
    PanicHaltLoop();
  }
  if (((playGame == 0) || (useIndividualPlayerSkinColor != 0)) ||
     (((((spriteIndex < 0x148 || (0x1ac < spriteIndex)) &&
        ((spriteIndex < 0x1ad || (0x211 < spriteIndex)))) &&
       ((spriteIndex < 0x277 || (0x2db < spriteIndex)))) &&
      ((((spriteIndex < 0x2dc || (0x340 < spriteIndex)) &&
        ((spriteIndex < 0x37b || (0x3b4 < spriteIndex)))) &&
       ((spriteIndex < 0x3ef || (0x428 < spriteIndex)))))))) {
    *(dword *)((int)spriteGraphicsPtr + (int)(short)(spriteIndex << 2)) = imageStreamCursor;
    currentSpriteIndex = spriteIndex & 0x3fff;
    *(word *)(imageStreamCursor + 0x16) = currentSpriteIndex;
    *(ushort *)(imageStreamCursor + 0x10) = dstX;
    *(ushort *)(imageStreamCursor + 0x12) = dstY;
    *(ushort *)(imageStreamCursor + 10) = width;
    *(ushort *)(imageStreamCursor + 0xc) = height;
    *(undefined2 *)(imageStreamCursor + 8) = 0;
    *(char *)(imageStreamCursor + 8) = -(planesFlag != (void *)0x0);
    if (src != (void *)0x0) {
      src = (void *)((int)src + (uint)yOffset * 0xa0 + (xOffset >> 3 & 0xfffe));
    }
    uVar3 = (ushort)(width + 0xf) >> 4;
    *(ushort *)(imageStreamCursor + 0xe) = uVar3;
    *(ushort *)(imageStreamCursor + 0x14) = uVar3 * 2 + height * 0x40;
    puVar10 = (ushort *)(imageStreamCursor + 0x18);
    *(ushort **)imageStreamCursor = puVar10;
    if ((ushort *)src == (ushort *)0x0) {
      sVar4 = height * 4 + -1;
      sVar1 = uVar3 - 1;
      do {
        do {
          puVar9 = puVar10 + 1;
          *puVar10 = 0x5555;
          sVar1 = sVar1 + -1;
          puVar10 = puVar9;
        } while (sVar1 != -1);
        sVar4 = sVar4 + -1;
        sVar1 = uVar3 - 1;
      } while (sVar4 != -1);
      src = (ushort *)0x0;
    }
    else {
      sVar4 = height * 4 + -1;
      sVar1 = uVar3 - 1;
      do {
        do {
          puVar7 = (ushort *)((int)src + 2);
                    /* WARNING: Load size is inaccurate */
          puVar9 = puVar10 + 1;
          *puVar10 = *src;
          sVar1 = sVar1 + -1;
          src = puVar7;
          puVar10 = puVar9;
        } while (sVar1 != -1);
        src = puVar7 + (0x14 - (short)uVar3);
        sVar4 = sVar4 + -1;
        sVar1 = uVar3 - 1;
      } while (sVar4 != -1);
    }
    *(undefined4 *)(imageStreamCursor + 4) = 0;
    if (maskSel != 0) {
      if ((short)maskSel < 0) {
        *(ushort **)(imageStreamCursor + 4) = puVar9;
        if (((ushort *)src == (ushort *)0x0) || (maskSel == 0xfffe)) {
          sVar4 = *(short *)(imageStreamCursor + 0xe);
          sVar1 = *(short *)(imageStreamCursor + 10);
          sVar5 = *(short *)(imageStreamCursor + 0xc);
          if (planesFlag != (void *)0x0) {
            sVar5 = sVar5 * 4;
          }
          sVar5 = sVar5 + -1;
          do {
            sVar2 = *(short *)(imageStreamCursor + 0xe) + -1;
            do {
              puVar10 = puVar9;
              puVar9 = puVar10 + 1;
              *puVar10 = 0xffff;
              sVar2 = sVar2 + -1;
            } while (sVar2 != -1);
            *puVar10 = -1 << (sVar4 * 0x10 - sVar1 & 0x3fU);
            sVar5 = sVar5 + -1;
          } while (sVar5 != -1);
        }
        else {
          puVar10 = *(ushort **)imageStreamCursor;
          sVar4 = *(short *)(imageStreamCursor + 0xc) + -1;
          do {
            sVar1 = 0;
            if (planesFlag != (void *)0x0) {
              sVar1 = 3;
            }
            do {
              sVar5 = *(short *)(imageStreamCursor + 0xe) + -1;
              puVar7 = puVar10;
              puVar8 = puVar9;
              do {
                sVar2 = 0;
                uVar3 = *puVar7;
                sVar6 = 2;
                do {
                  sVar2 = *(short *)(imageStreamCursor + 0xe) * 2 + sVar2;
                  uVar3 = *(ushort *)((int)puVar7 + (int)sVar2) | uVar3;
                  sVar6 = sVar6 + -1;
                } while (sVar6 != -1);
                puVar9 = puVar8 + 1;
                *puVar8 = uVar3;
                puVar7 = puVar7 + 1;
                sVar5 = sVar5 + -1;
                puVar8 = puVar9;
              } while (sVar5 != -1);
              sVar1 = sVar1 + -1;
            } while (sVar1 != -1);
            puVar10 = (ushort *)
                      ((int)(short)(*(short *)(imageStreamCursor + 0xe) << 3) + (int)puVar10);
            sVar4 = sVar4 + -1;
          } while (sVar4 != -1);
        }
      }
      else {
        *(undefined4 *)(imageStreamCursor + 4) =
             *(undefined4 *)(*(int *)((int)spriteGraphicsPtr + (int)(short)(maskSel << 2)) + 4);
      }
    }
    imageStreamCursor = (dword)puVar9;
    if ((playGame == 0) && (playHighlightFlag == 0)) {
      imageStreamBytesLeft = (int)&g_menuInsBank - (int)puVar9;
      if (puVar9 < &g_menuInsBank) {
        return;
      }
      panicReasonCode = 8;
      PanicHaltLoop();
    }
    imageStreamBytesLeft = (int)&imageStreamCursor - (int)puVar9;
    if ((ushort *)0x6763f < puVar9) {
      panicReasonCode = 8;
      PanicHaltLoop();
    }
  }
  return;
}


// --- BlitterSpan4Planes @ 00103bd6 ---

void __usercall BlitterSpan4Planes(void)

{
  undefined2 unaff_D0w;
  uint unaff_D1;
  
  align_and_prepare_left_mask
            (CONCAT22((short)((unaff_D1 & 0xffff) * 0xb0 >> 0x10),unaff_D0w) & 0xffff000f);
  BlitterSpanCoreMasked();
  BlitterSpanCoreMasked();
  BlitterSpanCoreMasked();
  BlitterSpanCoreMasked();
  return;
}


// --- BlitterSpanCoreMasked @ 00103c54 ---

void __usercall BlitterSpanCoreMasked(void)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort unaff_D1w;
  ushort unaff_D2w;
  short unaff_D3w;
  ushort unaff_D4w;
  undefined2 uVar5;
  undefined2 uVar6;
  int unaff_A0;
  int unaff_A6;
  
  uVar5 = 0x9f0;
  uVar6 = 0x100;
  if ((unaff_D4w & 1) != 0) {
    uVar5 = 0x9fc;
    uVar6 = 0x1ff;
  }
  if (unaff_D1w != 0) {
    uVar4 = *(ushort *)((short)(unaff_D1w * 2) + 0x103c34);
    unaff_D2w = unaff_D2w - (0x10 - (unaff_D1w & 0x7fff));
    if ((short)unaff_D2w < 0) {
      uVar4 = *(ushort *)((int)partialSpanMaskTable + (int)(short)(unaff_D2w * -2)) | uVar4;
      unaff_D2w = 0;
    }
    DMACON = 0x8400;
    uVar2 = DMACONR._0_1_;
    do {
      bVar3 = DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    DMACON = 0x400;
    *(ushort *)(unaff_A6 + 0x44) = uVar4;
    *(ushort *)(unaff_A6 + 0x46) = uVar4;
    *(ushort *)(unaff_A6 + 0x72) = ~uVar4;
    *(int *)(unaff_A6 + 0x50) = unaff_A0;
    *(int *)(unaff_A6 + 0x54) = unaff_A0;
    *(undefined2 *)(unaff_A6 + 100) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x66) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x40) = uVar5;
    *(undefined2 *)(unaff_A6 + 0x42) = 0;
    *(ushort *)(unaff_A6 + 0x58) = unaff_D3w << 6 | 1;
    unaff_A0 = unaff_A0 + 2;
    if (unaff_D2w == 0) {
      return;
    }
  }
  uVar4 = unaff_D2w >> 4;
  if (uVar4 != 0) {
    DMACON = 0x8400;
    uVar2 = DMACONR._0_1_;
    do {
      bVar3 = DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    DMACON = 0x400;
    *(int *)(unaff_A6 + 0x54) = unaff_A0;
    *(ushort *)(unaff_A6 + 0x66) = uVar4 * -2 + 0xb0;
    *(undefined2 *)(unaff_A6 + 0x40) = uVar6;
    *(undefined2 *)(unaff_A6 + 0x42) = 0;
    *(ushort *)(unaff_A6 + 0x58) = uVar4 | unaff_D3w << 6;
    unaff_A0 = (short)(uVar4 * 2) + unaff_A0;
  }
  if ((unaff_D2w & 0xf) != 0) {
    uVar4 = *(ushort *)((int)tailMaskTable + (int)(short)((unaff_D2w & 0xf) * 2));
    uVar1 = ~uVar4;
    DMACON = 0x8400;
    uVar2 = DMACONR._0_1_;
    do {
      bVar3 = DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    DMACON = 0x400;
    *(ushort *)(unaff_A6 + 0x44) = uVar1;
    *(ushort *)(unaff_A6 + 0x46) = uVar1;
    *(ushort *)(unaff_A6 + 0x72) = uVar4;
    *(int *)(unaff_A6 + 0x50) = unaff_A0;
    *(int *)(unaff_A6 + 0x54) = unaff_A0;
    *(undefined2 *)(unaff_A6 + 100) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x66) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x40) = uVar5;
    *(undefined2 *)(unaff_A6 + 0x42) = 0;
    *(ushort *)(unaff_A6 + 0x58) = unaff_D3w << 6 | 1;
  }
  return;
}


// --- align_and_prepare_left_mask @ 00103c68 ---

void align_and_prepare_left_mask(void)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort uVar4;
  ushort in_D1w;
  ushort unaff_D2w;
  short unaff_D3w;
  undefined2 unaff_D5w;
  undefined2 unaff_D6w;
  int in_A0;
  int unaff_A6;
  
  if (in_D1w != 0) {
    uVar4 = *(ushort *)((short)(in_D1w * 2) + 0x103c34);
    unaff_D2w = unaff_D2w - (0x10 - (in_D1w & 0x7fff));
    if ((short)unaff_D2w < 0) {
      uVar4 = *(ushort *)((int)partialSpanMaskTable + (int)(short)(unaff_D2w * -2)) | uVar4;
      unaff_D2w = 0;
    }
    DMACON = 0x8400;
    uVar2 = DMACONR._0_1_;
    do {
      bVar3 = DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    DMACON = 0x400;
    *(ushort *)(unaff_A6 + 0x44) = uVar4;
    *(ushort *)(unaff_A6 + 0x46) = uVar4;
    *(ushort *)(unaff_A6 + 0x72) = ~uVar4;
    *(int *)(unaff_A6 + 0x50) = in_A0;
    *(int *)(unaff_A6 + 0x54) = in_A0;
    *(undefined2 *)(unaff_A6 + 100) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x66) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x40) = unaff_D5w;
    *(undefined2 *)(unaff_A6 + 0x42) = 0;
    *(ushort *)(unaff_A6 + 0x58) = unaff_D3w << 6 | 1;
    in_A0 = in_A0 + 2;
    if (unaff_D2w == 0) {
      return;
    }
  }
  uVar4 = unaff_D2w >> 4;
  if (uVar4 != 0) {
    DMACON = 0x8400;
    uVar2 = DMACONR._0_1_;
    do {
      bVar3 = DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    DMACON = 0x400;
    *(int *)(unaff_A6 + 0x54) = in_A0;
    *(ushort *)(unaff_A6 + 0x66) = uVar4 * -2 + 0xb0;
    *(undefined2 *)(unaff_A6 + 0x40) = unaff_D6w;
    *(undefined2 *)(unaff_A6 + 0x42) = 0;
    *(ushort *)(unaff_A6 + 0x58) = uVar4 | unaff_D3w << 6;
    in_A0 = (short)(uVar4 * 2) + in_A0;
  }
  if ((unaff_D2w & 0xf) != 0) {
    uVar4 = *(ushort *)((int)tailMaskTable + (int)(short)((unaff_D2w & 0xf) * 2));
    uVar1 = ~uVar4;
    DMACON = 0x8400;
    uVar2 = DMACONR._0_1_;
    do {
      bVar3 = DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    DMACON = 0x400;
    *(ushort *)(unaff_A6 + 0x44) = uVar1;
    *(ushort *)(unaff_A6 + 0x46) = uVar1;
    *(ushort *)(unaff_A6 + 0x72) = uVar4;
    *(int *)(unaff_A6 + 0x50) = in_A0;
    *(int *)(unaff_A6 + 0x54) = in_A0;
    *(undefined2 *)(unaff_A6 + 100) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x66) = 0xae;
    *(undefined2 *)(unaff_A6 + 0x40) = unaff_D5w;
    *(undefined2 *)(unaff_A6 + 0x42) = 0;
    *(ushort *)(unaff_A6 + 0x58) = unaff_D3w << 6 | 1;
  }
  return;
}


// --- blitter_rectrow_masked @ 00103de2 ---

void blitter_rectrow_masked(void)

{
  ushort uVar1;
  ushort uVar2;
  undefined1 uVar3;
  byte bVar4;
  short sVar5;
  ushort in_D0w;
  short in_D1w;
  int iVar6;
  short unaff_D2w;
  short unaff_D3w;
  int in_A0;
  int in_A1;
  
  BlitterSpan4Planes();
  iVar6 = (uint)(ushort)(in_D1w << 2) * 0x2c;
  uVar1 = unaff_D2w + -1 + in_D0w;
  sVar5 = (in_D0w >> 4) * 2;
  DAT_00dff04c = (int)sVar5 + iVar6 + in_A1;
  DMACON = 0x8400;
  uVar3 = DMACONR._0_1_;
  do {
    bVar4 = DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  DMACON = 0x400;
  uVar2 = ((uVar1 >> 4) - (in_D0w >> 4)) + 1;
  DAT_00dff040 = 0xdfc;
  DAT_00dff042 = 0;
  DAT_00dff044 = *(undefined2 *)((int)firstWordMaskTable + (int)(short)((in_D0w & 0xf) * 2));
  DAT_00dff046 = *(undefined2 *)((int)lastWordMaskTable + (int)(short)((uVar1 & 0xf) * 2));
  DAT_00dff050 = (int)sVar5 + iVar6 + in_A0;
  DAT_00dff054 = DAT_00dff04c;
  DAT_00dff064 = uVar2 * -2 + 0x2c;
  DAT_00dff062 = DAT_00dff064;
  DAT_00dff066 = DAT_00dff064;
  DAT_00dff058 = uVar2 | unaff_D3w << 8;
  return;
}


// --- BlitterCopyOverlayToScreen @ 00103efc ---

void __usercall BlitterCopyOverlayToScreen(void)

{
  undefined1 uVar1;
  byte bVar2;
  
  DMACON = 0x8400;
  uVar1 = DMACONR._0_1_;
  do {
    bVar2 = DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff046 = 0xffff;
  DAT_00dff044 = 0xffff;
  DAT_00dff042 = 0;
  DAT_00dff040 = 0x9f0;
  DAT_00dff064 = 0;
  DAT_00dff066 = 0;
  DAT_00dff054 = frontbufferBasePtr;
  DAT_00dff050 = frontbufferBase;
  if ((byte *)frontbufferBasePtr != frontbufferBaseAlt) {
    DAT_00dff050 = frontbufferBaseAlt;
  }
  DMACON = 0x8400;
  uVar1 = DMACONR._0_1_;
  do {
    bVar2 = DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff058 = 0x16;
  return;
}


// --- HWSprite_LoadFromSpriteGraphics @ 0010401e ---

void __usercall HWSprite_LoadFromSpriteGraphics(void)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  short unaff_D0w;
  
  puVar1 = *(undefined4 **)((int)spriteGraphicsPtr + (int)(short)(unaff_D0w << 2));
  DMACON = 0x8400;
  uVar2 = DMACONR._0_1_;
  do {
    bVar3 = DMACONR._0_1_;
  } while ((bVar3 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff046 = 0xffff;
  DAT_00dff044 = 0xffff;
  DAT_00dff042 = 0;
  DAT_00dff040 = 0x1f0;
  DAT_00dff074 = 0;
  DAT_00dff066 = 0;
  DAT_00dff054 = *puVar1;
  DAT_00dff058 = *(short *)((int)puVar1 + 0xe) + *(short *)(puVar1 + 3) * 0x100;
  return;
}


// --- BlitSpritePlanar_Word @ 00104084 ---

void __usercall BlitSpritePlanar_Word(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  short unaff_D0w;
  short sVar4;
  short sVar5;
  short sVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar1 = *(undefined4 **)((int)spriteGraphicsPtr + (int)(short)(unaff_D0w << 2));
  if (*(short *)(puVar1 + 2) != 0) {
    puVar8 = (uint *)puVar1[1];
    puVar7 = (uint *)*puVar1;
    sVar5 = *(short *)((int)puVar1 + 0xe);
    if (sVar5 == 2) {
      sVar5 = *(short *)(puVar1 + 3) + -1;
      do {
        uVar3 = puVar7[3] | puVar7[2] | puVar7[1] | *puVar7;
        *puVar8 = uVar3;
        puVar8[1] = uVar3;
        puVar8[2] = uVar3;
        puVar8[3] = uVar3;
        puVar7 = puVar7 + 4;
        puVar8 = puVar8 + 4;
        sVar5 = sVar5 + -1;
      } while (sVar5 != -1);
      return;
    }
    sVar4 = *(short *)(puVar1 + 3) + -1;
    do {
      sVar6 = *(short *)((int)puVar1 + 0xe) + -1;
      do {
        uVar2 = *(ushort *)((int)puVar7 + (int)(short)(sVar5 * 6)) |
                *(ushort *)((int)puVar7 + (int)(short)(sVar5 * 4)) |
                *(ushort *)((int)puVar7 + (int)(short)(sVar5 * 2)) | *(ushort *)puVar7;
        *(ushort *)puVar8 = uVar2;
        *(ushort *)((int)puVar8 + (int)(short)(sVar5 * 2)) = uVar2;
        *(ushort *)((int)puVar8 + (int)(short)(sVar5 * 4)) = uVar2;
        *(ushort *)((int)puVar8 + (int)(short)(sVar5 * 6)) = uVar2;
        puVar7 = (uint *)((int)puVar7 + 2);
        puVar8 = (uint *)((int)puVar8 + 2);
        sVar6 = sVar6 + -1;
      } while (sVar6 != -1);
      puVar7 = (uint *)((int)(short)(sVar5 * 6) + (int)puVar7);
      puVar8 = (uint *)((int)(short)(sVar5 * 6) + (int)puVar8);
      sVar4 = sVar4 + -1;
    } while (sVar4 != -1);
    return;
  }
  puVar8 = (uint *)puVar1[1];
  puVar7 = (uint *)*puVar1;
  sVar5 = *(short *)((int)puVar1 + 0xe);
  if (sVar5 == 2) {
    sVar5 = *(short *)(puVar1 + 3) + -1;
    do {
      *puVar8 = puVar7[3] | puVar7[2] | puVar7[1] | *puVar7;
      puVar7 = puVar7 + 4;
      sVar5 = sVar5 + -1;
    } while (sVar5 != -1);
    return;
  }
  sVar4 = *(short *)(puVar1 + 3) + -1;
  do {
    sVar6 = *(short *)((int)puVar1 + 0xe) + -1;
    do {
      *(ushort *)puVar8 =
           *(ushort *)((int)puVar7 + (int)(short)(sVar5 * 6)) |
           *(ushort *)((int)puVar7 + (int)(short)(sVar5 * 4)) |
           *(ushort *)((int)puVar7 + (int)(short)(sVar5 * 2)) | *(ushort *)puVar7;
      puVar7 = (uint *)((int)puVar7 + 2);
      puVar8 = (uint *)((int)puVar8 + 2);
      sVar6 = sVar6 + -1;
    } while (sVar6 != -1);
    puVar7 = (uint *)((int)(short)(sVar5 * 6) + (int)puVar7);
    sVar4 = sVar4 + -1;
  } while (sVar4 != -1);
  return;
}


// --- DrawSprite_entry2 @ 001042d2 ---

void __usercall DrawSprite_entry2(void)

{
  dword dVar1;
  ushort unaff_D1w;
  ushort unaff_D2w;
  void *unaff_A0;
  
  dVar1 = spriteBlitQueue;
  DrawSpriteClipped(unaff_A0,unaff_D1w,unaff_D2w);
  spriteBlitQueue = dVar1;
  *(undefined4 *)dVar1 = 0xffffffff;
  return;
}


// --- DrawSprite16Pixels @ 001042ee ---

void __usercall DrawSprite16Pixels(void)

{
  DrawSprite_entry2();
  return;
}


// --- CopySprite @ 00104312 ---

/* Copies sprite2 into sprite1. Sprite 1 must be big enough.
   in:
        D0 - src sprite (2)
        D1 - x offset in dest sprite
        D2 - y offset in dest sprite (only in EGA)
        D3 - dest sprite (1)
   
   Note: x offset can only start from even number (rounded down). */

uchar __usercall CopySprite(ushort srcSprite,ushort xOffset,ushort yOffset,ushort dstSprite)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  
  piVar1 = *(int **)((int)spriteGraphicsPtr + (int)(short)(dstSprite << 2));
  piVar2 = *(int **)((int)spriteGraphicsPtr + (int)(short)(srcSprite << 2));
  DMACON = 0x8400;
  uVar3 = DMACONR._0_1_;
  do {
    bVar4 = DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff046 = 0;
  uVar6 = *(ushort *)((int)piVar2 + 10) & 0xf;
  if (uVar6 == 0) {
    uVar6 = 0x10;
  }
  sVar7 = *(short *)((int)piVar2 + 0xe) + 1;
  if ((ushort)(uVar6 + (xOffset & 0xf)) < 0x11) {
    DAT_00dff046 = 0xffff;
    sVar7 = *(short *)((int)piVar2 + 0xe);
  }
  DAT_00dff044 = 0xffff;
  DAT_00dff042 = xOffset * 0x1000;
  if (piVar2[1] == 0) {
    DAT_00dff040 = DAT_00dff042 + 0x7ca;
    DAT_00dff074 = 0xffff;
  }
  else {
    DAT_00dff040 = DAT_00dff042 + 0xfca;
  }
  uVar6 = *(short *)((int)piVar1 + 0xe) << 3;
  uVar5 = uVar6 >> 2;
  DAT_00dff048 = *piVar1 + (uint)yOffset * (uint)uVar6 + (xOffset >> 3 & 0xfffe);
  DAT_00dff054 = DAT_00dff048;
  if (*(short *)(piVar2 + 2) != 0) {
    DAT_00dff064 = *(short *)((int)piVar2 + 0xe) * 2 + sVar7 * -2;
    DAT_00dff062 = DAT_00dff064;
    DAT_00dff060 = uVar5 + sVar7 * -2;
    DAT_00dff066 = DAT_00dff060;
    DAT_00dff04c = *piVar2;
    DAT_00dff050 = piVar2[1];
    DAT_00dff058 = sVar7 + *(short *)(piVar2 + 3) * 0x100;
    return (uchar)DAT_00dff064;
  }
  DAT_00dff062 = *(short *)((int)piVar2 + 0xe) * 8 + sVar7 * -2;
  DAT_00dff064 = *(short *)((int)piVar2 + 0xe) * 2 + sVar7 * -2;
  DAT_00dff060 = uVar5 * 4 + sVar7 * -2;
  DAT_00dff066 = DAT_00dff060;
  DAT_00dff048 = (short)uVar5 * 3 + DAT_00dff048;
  DMACON = 0x8400;
  uVar3 = DMACONR._0_1_;
  do {
    bVar4 = DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  DMACON = 0x400;
  DMACON = 0x8400;
  uVar3 = DMACONR._0_1_;
  do {
    bVar4 = DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  DMACON = 0x400;
  DMACON = 0x8400;
  uVar3 = DMACONR._0_1_;
  do {
    bVar4 = DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff054 = DAT_00dff048;
  DAT_00dff04c = (short)(*(short *)((int)piVar2 + 0xe) << 1) * 3 + *piVar2;
  DAT_00dff050 = piVar2[1];
  DAT_00dff058 = sVar7 + *(short *)(piVar2 + 3) * 0x40;
  return (uchar)DAT_00dff048;
}


// --- DrawSpriteClipped @ 00104580 ---

void __usercall DrawSpriteClipped(void *sprite,ushort x,ushort y)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  byte bVar4;
  dword dVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  short sVar12;
  int iVar10;
  int iVar11;
  ushort uVar13;
  ushort uVar14;
  int *piVar15;
  
  dVar5 = frontbufferBasePtr;
  if ((*(short *)((int)sprite + 8) == 0) && (*(short *)((int)sprite + 8) == 0)) {
    sVar8 = *(short *)((int)sprite + 0xc);
    sVar12 = 0;
    if ((short)y < 0) {
      sVar12 = -y;
      sVar8 = y + sVar8;
      y = 0;
    }
    uVar1 = (sVar8 + y) - 0x110;
    if (-1 < (int)((uint)uVar1 << 0x10)) {
      sVar8 = sVar8 - uVar1;
    }
    uVar1 = cameraXMod320 + x;
    uVar7 = cameraYMod320 + y;
    if (0x10f < (short)uVar7) {
      uVar7 = uVar7 - 0x110;
    }
    DAT_00dff046 = 0;
    uVar13 = *(ushort *)((int)sprite + 10) & 0xf;
    if (uVar13 == 0) {
      uVar13 = 0x10;
    }
    uVar14 = *(ushort *)((int)sprite + 0xe) + 1;
    if ((ushort)(uVar13 + (uVar1 & 0xf)) < 0x11) {
      DAT_00dff046 = 0xffff;
      uVar14 = *(ushort *)((int)sprite + 0xe);
    }
    DMACON = 0x8400;
    uVar3 = DMACONR._0_1_;
    do {
      bVar4 = DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff044 = 0xffff;
    DAT_00dff042 = uVar1 * 0x1000;
    if (*(int *)((int)sprite + 4) == 0) {
      DAT_00dff040 = DAT_00dff042 + 0x7ca;
      DAT_00dff074 = 0xffff;
    }
    else {
      DAT_00dff040 = DAT_00dff042 + 0xfca;
    }
    sVar2 = (sVar8 + uVar7) - 0x110;
    sVar9 = 0;
    if (0x10f < (ushort)(sVar8 + uVar7) && sVar2 != 0) {
      sVar8 = sVar8 - sVar2;
      sVar9 = sVar2;
    }
                    /* WARNING: Read-only address (ram,0x00104932) is written */
    iVar6 = (int)(short)(((short)uVar1 >> 4) << 1);
    iVar11 = frontbufferBasePtr + (uint)uVar7 * 0xb0 + iVar6;
    sRam00104932 = sVar8;
    *(int *)(spriteBlitQueue + 4) = iVar11;
    *(byte **)spriteBlitQueue = frontbufferMaskBuffer + (iVar11 - dVar5);
    *(ushort *)(spriteBlitQueue + 10) = uVar14 + sVar8 * 0x100;
    DAT_00dff058 = uVar14 + sVar8 * 0x40;
    DAT_00dff064 = *(short *)((int)sprite + 0xe) * 2 + uVar14 * -2;
    DAT_00dff062 = *(short *)((int)sprite + 0xe) * 8 + uVar14 * -2;
    *(ushort *)(spriteBlitQueue + 8) = uVar14 * -2 + 0x2c;
    DAT_00dff060 = uVar14 * -2 + 0xb0;
    iVar10 = (int)sVar12;
    if (iVar10 != 0) {
      iVar10 = (uint)(ushort)(sVar12 << 2) * (uint)*(ushort *)((int)sprite + 0xe) * 2;
    }
                    /* WARNING: Load size is inaccurate */
    iRam00104938 = iVar10 + *sprite;
    iRam00104934 = CONCAT22((short)((uint)iVar10 >> 0x10),(ushort)iVar10 >> 2) +
                   *(int *)((int)sprite + 4);
    piVar15 = (int *)(spriteBlitQueue + 0xc);
                    /* WARNING: Read-only address (ram,0x00104934) is written */
                    /* WARNING: Read-only address (ram,0x00104938) is written */
    DAT_00dff04c = (short)(*(short *)((int)sprite + 0xe) << 1) * 3 + iRam00104938;
    DMACON = 0x8400;
    uVar3 = DMACONR._0_1_;
    do {
      bVar4 = DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    DMACON = 0x400;
    DMACON = 0x8400;
    uVar3 = DMACONR._0_1_;
    do {
      bVar4 = DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff048 = iVar11 + 0x84;
    DMACON = 0x8400;
    uVar3 = DMACONR._0_1_;
    do {
      bVar4 = DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff050 = iRam00104934;
    DAT_00dff054 = DAT_00dff048;
    DAT_00dff066 = DAT_00dff060;
    if (sVar9 != 0) {
      DMACON = 0x8400;
      uVar3 = DMACONR._0_1_;
      do {
        bVar4 = DMACONR._0_1_;
      } while ((bVar4 & 0x40) != 0);
      DMACON = 0x400;
      iVar6 = dVar5 + iVar6;
      *(int *)(spriteBlitQueue + 0x10) = iVar6;
      *piVar15 = (int)(frontbufferMaskBuffer + (iVar6 - dVar5));
      *(ushort *)(spriteBlitQueue + 0x16) = (uVar14 & 0x7fff) + sVar9 * 0x100;
      DAT_00dff058 = (uVar14 & 0x7fff) + sVar9 * 0x40;
      DMACON = 0x8400;
      uVar3 = DMACONR._0_1_;
      do {
        bVar4 = DMACONR._0_1_;
      } while ((bVar4 & 0x40) != 0);
      DMACON = 0x400;
      DMACON = 0x8400;
      uVar3 = DMACONR._0_1_;
      do {
        bVar4 = DMACONR._0_1_;
      } while ((bVar4 & 0x40) != 0);
      DMACON = 0x400;
      DAT_00dff048 = iVar6 + 0x84;
      DAT_00dff04c = (short)(*(short *)((int)sprite + 0xe) << 1) * 3;
      DMACON = 0x8400;
      uVar3 = DMACONR._0_1_;
      do {
        bVar4 = DMACONR._0_1_;
      } while ((bVar4 & 0x40) != 0);
      DMACON = 0x400;
      DAT_00dff050 = 0;
      DAT_00dff054 = DAT_00dff048;
      *(undefined2 *)(spriteBlitQueue + 0x14) = *(undefined2 *)(spriteBlitQueue + 8);
      piVar15 = (int *)(spriteBlitQueue + 0x18);
    }
    *piVar15 = -1;
    spriteBlitQueue = (dword)piVar15;
    return;
  }
  sVar8 = *(short *)((int)sprite + 0xc);
  sVar12 = 0;
  if ((short)y < 0) {
    sVar12 = -y;
    sVar8 = y + sVar8;
    y = 0;
  }
  uVar1 = (sVar8 + y) - 0x110;
  if (-1 < (int)((uint)uVar1 << 0x10)) {
    sVar8 = sVar8 - uVar1;
  }
  uVar1 = cameraXMod320 + x;
  uVar7 = cameraYMod320 + y;
  if (0x10f < (short)uVar7) {
    uVar7 = uVar7 - 0x110;
  }
  DAT_00dff046 = 0;
  uVar13 = *(ushort *)((int)sprite + 10) & 0xf;
  if (uVar13 == 0) {
    uVar13 = 0x10;
  }
  uVar14 = *(ushort *)((int)sprite + 0xe) + 1;
  if ((ushort)(uVar13 + (uVar1 & 0xf)) < 0x11) {
    DAT_00dff046 = 0xffff;
    uVar14 = *(ushort *)((int)sprite + 0xe);
  }
  DMACON = 0x8400;
  uVar3 = DMACONR._0_1_;
  do {
    bVar4 = DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff044 = 0xffff;
  DAT_00dff042 = uVar1 * 0x1000;
  if (*(int *)((int)sprite + 4) == 0) {
    DAT_00dff040 = DAT_00dff042 + 0x7ca;
    DAT_00dff074 = 0xffff;
  }
  else {
    DAT_00dff040 = DAT_00dff042 + 0xfca;
  }
  sVar2 = (sVar8 + uVar7) - 0x110;
  sVar9 = 0;
  if (0x10f < (ushort)(sVar8 + uVar7) && sVar2 != 0) {
    sVar8 = sVar8 - sVar2;
    sVar9 = sVar2;
  }
  iVar6 = (int)(short)(((short)uVar1 >> 4) << 1);
  iVar11 = frontbufferBasePtr + (uint)uVar7 * 0xb0 + iVar6;
  DAT_00dff048 = iVar11;
  DAT_00dff054 = iVar11;
  *(int *)(spriteBlitQueue + 4) = iVar11;
  *(byte **)spriteBlitQueue = frontbufferMaskBuffer + (iVar11 - dVar5);
  DAT_00dff058 = uVar14 + sVar8 * 0x100;
  DAT_00dff062 = *(short *)((int)sprite + 0xe) * 2 + uVar14 * -2;
  DAT_00dff060 = uVar14 * -2 + 0x2c;
  DAT_00dff064 = DAT_00dff062;
  DAT_00dff066 = DAT_00dff060;
  *(short *)(spriteBlitQueue + 8) = DAT_00dff060;
  iVar11 = (int)sVar12;
  if (iVar11 != 0) {
    iVar11 = (uint)(ushort)(sVar12 << 2) * (uint)*(ushort *)((int)sprite + 0xe) * 2;
  }
                    /* WARNING: Load size is inaccurate */
  DAT_00dff04c = iVar11 + *sprite;
  DAT_00dff050 = iVar11 + *(int *)((int)sprite + 4);
  *(short *)(spriteBlitQueue + 10) = DAT_00dff058;
  piVar15 = (int *)(spriteBlitQueue + 0xc);
  if (sVar9 != 0) {
    DAT_00dff048 = dVar5 + iVar6;
    sVar8 = (uVar14 & 0x7fff) + sVar9 * 0x100;
    *(int *)(spriteBlitQueue + 0x10) = DAT_00dff048;
    DMACON = 0x8400;
    uVar3 = DMACONR._0_1_;
    do {
      bVar4 = DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff054 = DAT_00dff048;
    DAT_00dff058 = sVar8;
    *piVar15 = (int)(frontbufferMaskBuffer + (DAT_00dff048 - dVar5));
    *(undefined2 *)(spriteBlitQueue + 0x14) = *(undefined2 *)(spriteBlitQueue + 8);
    *(short *)(spriteBlitQueue + 0x16) = sVar8;
    piVar15 = (int *)(spriteBlitQueue + 0x18);
  }
  *piVar15 = -1;
  spriteBlitQueue = (dword)piVar15;
  return;
}


// --- InitDisplaySprites @ 00104f54 ---

/* Copy sprites that are visible from allSpritesArray to sortedSprites.
   Then sort them by y axis. */

void __usercall InitDisplaySprites(void)

{
  Sprite *pSVar1;
  Sprite **ppSVar2;
  dword *pdVar4;
  Sprite **ppSVar3;
  
  numSpritesToRender = 0;
  ppSVar2 = allSpritesArray;
  pdVar4 = sortedSprites;
  while( true ) {
    ppSVar3 = ppSVar2 + 1;
    pSVar1 = *ppSVar2;
    if (pSVar1 == (Sprite *)0xffffffff) break;
    ppSVar2 = ppSVar3;
    if (pSVar1->visible != 0) {
      *pdVar4 = (dword)pSVar1;
      numSpritesToRender = numSpritesToRender + 1;
      pdVar4 = pdVar4 + 1;
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
  dword dVar1;
  short sVar2;
  bool bVar3;
  short sVar4;
  dword *pdVar5;
  dword *pdVar6;
  
  sVar2 = numSpritesToRender - 2;
  if (-1 < sVar2) {
    do {
      bVar3 = false;
      sVar4 = sVar2;
      pdVar5 = sortedSprites;
      do {
        pdVar6 = pdVar5 + 1;
        dVar1 = *pdVar6;
        if (*(short *)(dVar1 + 0x22) < *(short *)(*pdVar5 + 0x22)) {
          *pdVar6 = *pdVar5;
          *pdVar5 = dVar1;
          bVar3 = true;
        }
        sVar4 = sVar4 + -1;
        pdVar5 = pdVar6;
      } while (sVar4 != -1);
    } while (bVar3);
  }
  return;
}


// --- AdjustFanColor @ 00104fce ---

/* in:
        A1 - dest pattern
        A0 - pitch convert table
   
   Synchronizes fan color with teams that are playing. Fans are on the
   upper and lower part of pitch.
   Algorithm:
   Get byte from dest, use it as a word index into src, get byte and
   store it into dest (replacing previous index). */

char __usercall AdjustFanColor(uchar *destPattern,uchar *pitchConvTable)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  short sVar10;
  short sVar11;
  ushort *puVar12;
  ushort *puVar13;
  ushort *puVar14;
  
  puVar12 = (ushort *)(destPattern + 2);
  puVar13 = (ushort *)(destPattern + 4);
  puVar14 = (ushort *)(destPattern + 6);
  sVar10 = 0xf;
  do {
    uVar6 = *(ushort *)destPattern;
    uVar7 = *puVar12;
    uVar8 = *puVar13;
    uVar9 = *puVar14;
    sVar11 = 0xf;
    do {
      bVar2 = (short)uVar9 < 0;
      uVar9 = uVar9 << 1;
      bVar3 = (short)uVar8 < 0;
      uVar8 = uVar8 << 1;
      bVar4 = (short)uVar7 < 0;
      uVar7 = uVar7 << 1;
      bVar5 = (short)uVar6 < 0;
      uVar6 = uVar6 << 1;
      uVar1 = *(ushort *)
               (pitchConvTable +
               (short)(((((ushort)bVar2 * 2 | (ushort)bVar3) * 2 | (ushort)bVar4) * 2 |
                       (ushort)bVar5) * 2));
      if ((uVar1 & 1) != 0) {
        uVar6 = uVar6 | 1;
      }
      if ((uVar1 >> 1 & 1) != 0) {
        uVar7 = uVar7 | 1;
      }
      if ((uVar1 >> 2 & 1) != 0) {
        uVar8 = uVar8 | 1;
      }
      if ((uVar1 >> 3 & 1) != 0) {
        uVar9 = uVar9 | 1;
      }
      sVar11 = sVar11 + -1;
    } while (sVar11 != -1);
    *(ushort *)destPattern = uVar6;
    *puVar12 = uVar7;
    *puVar13 = uVar8;
    *puVar14 = uVar9;
    destPattern = (uchar *)((int)destPattern + 8);
    puVar12 = puVar12 + 4;
    puVar13 = puVar13 + 4;
    puVar14 = puVar14 + 4;
    sVar10 = sVar10 + -1;
  } while (sVar10 != -1);
  return (char)(uVar1 >> 4);
}


// --- ConvertSpriteColors @ 0010504c ---

/* in:
        D0 -  sprite number
        A0 -> color conversion table
   
   Converts sprites to 8 colors. */

char __usercall ConvertSpriteColors(ushort spriteNumber,ushort *colorConvTable)

{
  int *piVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  ushort *puVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  
  if (*colorConvTable != 0) {
    piVar1 = *(int **)((int)spriteGraphicsPtr + (int)(short)(spriteNumber << 2));
    iRam0010510c = (int)(short)((*(short *)((int)piVar1 + 0xe) * 4 - *(short *)((int)piVar1 + 0xe))
                               * 2);
                    /* WARNING: Read-only address (ram,0x0010510c) is written */
    iVar7 = (int)(short)(*(short *)((int)piVar1 + 0xe) << 1);
    puVar16 = (ushort *)*piVar1;
    puVar18 = (ushort *)(iVar7 + (int)puVar16);
    puVar20 = (ushort *)(iVar7 + (int)puVar18);
    puVar22 = (ushort *)(iVar7 + (int)puVar20);
    sVar15 = *(short *)(piVar1 + 3) + -1;
    do {
      sVar13 = *(short *)((int)piVar1 + 0xe) + -1;
      puVar17 = puVar16;
      puVar19 = puVar18;
      puVar21 = puVar20;
      puVar23 = puVar22;
      do {
        uVar9 = *puVar17;
        uVar10 = *puVar19;
        uVar11 = *puVar21;
        uVar12 = *puVar23;
        sVar14 = 0xf;
        do {
          bVar3 = (short)uVar12 < 0;
          uVar12 = uVar12 << 1;
          bVar4 = (short)uVar11 < 0;
          uVar11 = uVar11 << 1;
          bVar5 = (short)uVar10 < 0;
          uVar10 = uVar10 << 1;
          bVar6 = (short)uVar9 < 0;
          uVar9 = uVar9 << 1;
          uVar8 = *(ushort *)
                   ((int)colorConvTable +
                   (int)(short)(((((ushort)bVar3 << 1 | (ushort)bVar4) * 2 | (ushort)bVar5) * 2 |
                                (ushort)bVar6) * 2));
          if ((uVar8 & 1) != 0) {
            uVar9 = uVar9 | 1;
          }
          if ((uVar8 >> 1 & 1) != 0) {
            uVar10 = uVar10 | 1;
          }
          if ((uVar8 >> 2 & 1) != 0) {
            uVar11 = uVar11 | 1;
          }
          if ((uVar8 >> 3 & 1) != 0) {
            uVar12 = uVar12 | 1;
          }
          sVar14 = sVar14 + -1;
        } while (sVar14 != -1);
        puVar16 = puVar17 + 1;
        *puVar17 = uVar9;
        puVar18 = puVar19 + 1;
        *puVar19 = uVar10;
        puVar20 = puVar21 + 1;
        *puVar21 = uVar11;
        puVar22 = puVar23 + 1;
        *puVar23 = uVar12;
        sVar13 = sVar13 + -1;
        puVar17 = puVar16;
        puVar19 = puVar18;
        puVar21 = puVar20;
        puVar23 = puVar22;
      } while (sVar13 != -1);
      sVar15 = sVar15 + -1;
    } while (sVar15 != -1);
    return (char)(uVar8 >> 4);
  }
  piVar1 = *(int **)((int)spriteGraphicsPtr + (int)(short)(spriteNumber << 2));
  uVar9 = *(ushort *)((int)piVar1 + 0xe);
  if (0x14 < uVar9) {
    panicReasonCode = 0x982;
    PanicHaltLoop();
  }
  iRam0010510c = (int)(short)((uVar9 * 4 - *(short *)((int)piVar1 + 0xe)) * 2);
                    /* WARNING: Read-only address (ram,0x0010510c) is written */
  if (iRam0010510c < 0) {
    panicReasonCode = 0x987;
    PanicHaltLoop();
  }
  iVar7 = (int)(short)(*(short *)((int)piVar1 + 0xe) << 1);
  puVar16 = (ushort *)*piVar1;
  puVar18 = (ushort *)(iVar7 + (int)puVar16);
  puVar20 = (ushort *)(iVar7 + (int)puVar18);
  puVar22 = (ushort *)(iVar7 + (int)puVar20);
  sVar15 = *(short *)(piVar1 + 3) + -1;
  do {
    sVar13 = *(short *)((int)piVar1 + 0xe) + -1;
    puVar17 = puVar16;
    puVar19 = puVar18;
    puVar21 = puVar20;
    puVar23 = puVar22;
    do {
      uVar9 = *puVar17;
      uVar10 = *puVar19;
      uVar11 = *puVar21;
      uVar12 = *puVar23;
      sVar14 = 0xf;
      do {
        bVar3 = (short)uVar12 < 0;
        uVar12 = uVar12 << 1;
        bVar4 = (short)uVar11 < 0;
        uVar11 = uVar11 << 1;
        bVar5 = (short)uVar10 < 0;
        uVar10 = uVar10 << 1;
        bVar6 = (short)uVar9 < 0;
        uVar9 = uVar9 << 1;
        uVar8 = (((ushort)bVar3 << 1 | (ushort)bVar4) * 2 | (ushort)bVar5) * 2 | (ushort)bVar6;
        if (uVar8 != 0) {
          uVar2 = *(ushort *)((int)colorConvTable + (int)(short)(uVar8 * 2));
          if ((uVar2 & 1) != 0) {
            uVar9 = uVar9 | 1;
          }
          if ((uVar2 >> 1 & 1) != 0) {
            uVar10 = uVar10 | 1;
          }
          if ((uVar2 >> 2 & 1) != 0) {
            uVar11 = uVar11 | 1;
          }
          uVar8 = uVar2 >> 4;
          if ((uVar2 >> 3 & 1) != 0) {
            uVar12 = uVar12 | 1;
          }
        }
        sVar14 = sVar14 + -1;
      } while (sVar14 != -1);
      puVar16 = puVar17 + 1;
      *puVar17 = uVar9;
      puVar18 = puVar19 + 1;
      *puVar19 = uVar10;
      puVar20 = puVar21 + 1;
      *puVar21 = uVar11;
      puVar22 = puVar23 + 1;
      *puVar23 = uVar12;
      sVar13 = sVar13 + -1;
      puVar17 = puVar16;
      puVar19 = puVar18;
      puVar21 = puVar20;
      puVar23 = puVar22;
    } while (sVar13 != -1);
    sVar15 = sVar15 + -1;
  } while (sVar15 != -1);
  return (char)uVar8;
}


// --- RectRowMaskedApplyScreenOffset @ 001051e4 ---

void RectRowMaskedApplyScreenOffset(void)

{
  blitter_rectrow_masked();
  return;
}


// --- FillRectangle @ 001051f4 ---

void __usercall FillRectangle(void)

{
  short sVar1;
  short sVar2;
  short unaff_D1w;
  short unaff_D3w;
  short sVar3;
  
  sVar1 = cameraYMod320 + unaff_D1w;
  if (0x10f < sVar1) {
    sVar1 = sVar1 + -0x110;
  }
  sVar2 = (unaff_D3w + sVar1) - 0x110;
  sVar3 = 0;
  if (0x10f < (ushort)(unaff_D3w + sVar1) && sVar2 != 0) {
    sVar3 = sVar2;
  }
  BlitterSpan4Planes();
  if (sVar3 != 0) {
    BlitterSpan4Planes();
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
              *(short *)(*(int *)((int)spriteGraphicsPtr +
                                 (int)(short)((charsTable->spriteIndexOffset +
                                              (ushort)charsTable->conversionTable
                                                      [(short)(ushort)(byte)(cVar1 - 0x20)]) * 4)) +
                        10) + uVar2;
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
  SpriteGraphics **ppSVar4;
  ushort unaff_D0w;
  ushort x_00;
  char *pcVar5;
  
  ppSVar4 = spriteGraphicsPtr;
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
      x = wVar2 + x_00 + *(short *)(*(int *)((int)ppSVar4 + (int)(short)(unaff_D0w * 4)) + 10);
      if (-1 < (short)x_00) {
        if (0x14f < x) {
          return unaff_D0w;
        }
        BlitStringToFrontBuffer(unaff_D0w,x_00,y,color);
      }
    }
    x = x_00 + chars->spaceWidth;
  } while (((short)x_00 < 0) || (x < 0x150));
  return unaff_D0w;
}


// --- DrawMenuTextRightAligned @ 00105308 ---

/* in:
        D1 - x (end of text)
        D2 - y
        D3 - char color
        A0 -> text
        A1 -> chars table
   
   Draws right aligned text. x coordinate matches the end of the text.
    */

short __usercall
DrawMenuTextRightAligned(ushort x_end,ushort y,ushort color,char *text,CharTable *chars)

{
  short sVar1;
  ushort uVar2;
  
  uVar2 = GetTextWidth(text,chars);
  sVar1 = DrawMenuText((x_end - uVar2) + 1,y,color,text,chars);
  return sVar1;
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


// --- Text2Sprite @ 00105332 ---

/* in:
        D1 - x offset in dest sprite
        D2 - y offset in dest sprite (only in EGA)
        D4 - dest sprite index
        A0 -> text
        A1 -> chars table
   out:
        D0 = 0:OK (& zf set), 1:error (& zf clear) (text wider than sprite)
        D1 = total width in pixels of entire sprite after concatenation
   
   Converts text in A0 and concatenates it to sprite in D4.
   In case of not enough space in the sprite to write the text, the sprite
   will not be modified.
   Sets ebp to -1 unconditionally. */

ushort __usercall
Text2Sprite(ushort xOff,ushort yOff,ushort dstSpriteIndex,char *text,CharTable *charsTable)

{
  word wVar1;
  word wVar2;
  short sVar3;
  char cVar4;
  SpriteGraphics **ppSVar5;
  ushort unaff_D3w;
  ushort uVar6;
  
  uVar6 = GetTextWidth(text,charsTable);
  ppSVar5 = spriteGraphicsPtr;
  if ((ushort)(xOff + uVar6) <=
      *(ushort *)(*(int *)((int)spriteGraphicsPtr + (int)(short)(dstSpriteIndex << 2)) + 10)) {
    wVar1 = charsTable->spriteIndexOffset;
    wVar2 = charsTable->charSpacing;
    while( true ) {
      cVar4 = *text;
      if (cVar4 == '\0') break;
      if (cVar4 == ' ') {
        text = text + 1;
        xOff = xOff + charsTable->spaceWidth;
      }
      else {
        uVar6 = wVar1 + charsTable->conversionTable[(short)(ushort)(byte)(cVar4 - 0x20)];
        sVar3 = *(short *)(*(int *)((int)ppSVar5 + (int)(short)(uVar6 * 4)) + 10);
        BlitGlyphToSpriteBitmap(uVar6,xOff,yOff,unaff_D3w,dstSpriteIndex);
        text = text + 1;
        xOff = wVar2 + xOff + sVar3;
      }
    }
    BlitSpritePlanar_Word();
    return 0;
  }
  return 1;
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
  dword dVar17;
  dword dVar18;
  
  textBlitPlaneMask = planeMask;
  uVar9 = spriteIndex << 2;
  pbVar1 = *(byte **)((int)spriteGraphicsPtr + (int)(short)uVar9);
  if (*(short *)(pbVar1 + 8) == 0) {
    uVar11 = *(ushort *)(pbVar1 + 0xc);
    x = cameraXMod320 + x;
    y = cameraYMod320 + y;
    if (0x10f < (short)y) {
      y = y - 0x110;
    }
    DMACON = 0x8400;
    uVar5 = DMACONR._0_1_;
    do {
      bVar6 = DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff046 = 0;
    uVar9 = *(ushort *)(pbVar1 + 10) & 0xf;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar10 = *(short *)(pbVar1 + 0xe) + 1;
    if ((ushort)(uVar9 + (x & 0xf)) < 0x11) {
      DAT_00dff046 = 0xffff;
      sVar10 = *(short *)(pbVar1 + 0xe);
    }
    DAT_00dff044 = 0xffff;
    uVar9 = x * 0x1000;
    DAT_00dff042 = uVar9;
    bltconShiftBase = uVar9;
    if (*(int *)(pbVar1 + 4) != 0) {
      sVar16 = (uVar11 + y) - 0x110;
      sVar12 = 0;
      if (0x10f < (ushort)(uVar11 + y) && sVar16 != 0) {
        uVar11 = uVar11 - sVar16;
        sVar12 = sVar16;
      }
      textBlitHeightLines = uVar11;
      iVar7 = (int)(short)(((short)x >> 4) << 1);
      DAT_00dff058 = sVar10 + uVar11 * 0x40;
      uVar15 = sVar10 * 2;
      DAT_00dff064 = *(short *)(pbVar1 + 0xe) * 2 + sVar10 * -2;
      DAT_00dff062 = *(short *)(pbVar1 + 0xe) * 8 + sVar10 * -2;
      DAT_00dff060 = sVar10 * -2 + 0xb0;
      DAT_00dff066 = DAT_00dff060;
      DAT_00dff050 = *(dword *)(pbVar1 + 4);
      sVar10 = *(short *)(pbVar1 + 0xe) << 1;
      dVar18 = (int)sVar10 + *(int *)pbVar1;
      dVar17 = (int)sVar10 + dVar18 + (int)sVar10;
      blitSrcA_MaskPtr = DAT_00dff050;
      blitSrcB_GlyphPtr = dVar18;
      iVar8 = (uint)y * 0xb0 + iVar7;
      while( true ) {
        DAT_00dff048 = frontbufferBasePtr + iVar8;
        sVar10 = 2;
        uVar13 = planeMask;
        do {
          uVar4 = uVar13 & 1;
          uVar13 = uVar13 >> 1;
          if (uVar4 != 0) {
            DAT_00dff04c = dVar18;
          }
          DMACON = 0x8400;
          uVar5 = DMACONR._0_1_;
          do {
            bVar6 = DMACONR._0_1_;
          } while ((bVar6 & 0x40) != 0);
          DMACON = 0x400;
          DAT_00dff048 = DAT_00dff048 + 0x2c;
          sVar10 = sVar10 + -1;
        } while (sVar10 != -1);
        if ((uVar13 & 1) == 0) {
          DAT_00dff040 = uVar9 + 0xfca;
          DAT_00dff04c = dVar17;
        }
        else {
          DAT_00dff040 = uVar9 + 0xbfa;
        }
        if (sVar12 == 0) break;
        DAT_00dff050 = (uint)uVar11 * (uint)*(ushort *)(pbVar1 + 0xe) * 2 + DAT_00dff050;
        iVar8 = (uint)uVar11 * (uint)*(ushort *)(pbVar1 + 0xe) * 8;
        dVar17 = iVar8 + dVar17;
        dVar18 = iVar8 + dVar18;
        uVar15 = uVar15 >> 1;
        DAT_00dff058 = uVar15 + sVar12 * 0x40;
        sVar12 = 0;
        DMACON = 0x8400;
        uVar5 = DMACONR._0_1_;
        do {
          bVar6 = DMACONR._0_1_;
        } while ((bVar6 & 0x40) != 0);
        DMACON = 0x400;
        iVar8 = iVar7;
      }
      DAT_00dff054 = DAT_00dff048;
      return;
    }
  }
  panicReasonCode = 0x1556;
  PanicHaltLoop();
  *pbVar1 = *pbVar1 | 0x28;
  piVar2 = *(int **)((int)spriteGraphicsPtr + (int)(short)((uVar9 | 0xc3) << 2));
  if (*(short *)(piVar2 + 2) == 0) {
    piVar3 = *(int **)((int)spriteGraphicsPtr + (int)(short)(unaff_D4w << 2));
    sVar10 = *(short *)((int)piVar3 + 0xe);
    dstRowBytesPerPlane = sVar10 * 2;
    iVar8 = (int)(short)dstRowBytesPerPlane;
    dstRowAdvanceBytes[0] = (char)((uint)iVar8 >> 0x18);
    dstRowAdvanceBytes[1] = (char)((uint)iVar8 >> 0x10);
    dstRowAdvanceBytes[2] = (char)((uint)iVar8 >> 8);
    dstRowAdvanceBytes[3] = (char)iVar8;
    DMACON = 0x8400;
    uVar5 = DMACONR._0_1_;
    do {
      bVar6 = DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff046 = 0;
    uVar9 = *(ushort *)((int)piVar2 + 10) & 0xf;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar16 = *(short *)((int)piVar2 + 0xe) + 1;
    if ((ushort)(uVar9 + (x & 0xf)) < 0x11) {
      DAT_00dff046 = 0xffff;
      sVar16 = *(short *)((int)piVar2 + 0xe);
    }
    DAT_00dff044 = 0xffff;
    bltconShiftBase_glyph = x * 0x1000;
    DAT_00dff042 = bltconShiftBase_glyph;
    if (piVar2[1] != 0) {
      glyphHeightLinesCache = *(word *)(piVar2 + 3);
      DAT_00dff048 = *piVar3 + (uint)y * (uint)dstRowBytesPerPlane * 4 +
                               (int)(short)(((short)x >> 4) << 1);
      DAT_00dff064 = *(short *)((int)piVar2 + 0xe) * 2 + sVar16 * -2;
      DAT_00dff062 = *(short *)((int)piVar2 + 0xe) * 8 + sVar16 * -2;
      DAT_00dff060 = sVar10 * 8 + sVar16 * -2;
      DAT_00dff066 = DAT_00dff060;
      sVar10 = *(short *)((int)piVar2 + 0xe) << 1;
      blitSrcB_GlyphPtr_glyph = (int)sVar10 + *piVar2;
      blitSrcA_MaskPtr_glyph = piVar2[1];
      sVar12 = 2;
      wVar14 = glyphBlitPlaneMask;
      do {
        uVar9 = wVar14 & 1;
        wVar14 = wVar14 >> 1;
        if (uVar9 != 0) {
          DAT_00dff04c = blitSrcB_GlyphPtr_glyph;
        }
        DMACON = 0x8400;
        uVar5 = DMACONR._0_1_;
        do {
          bVar6 = DMACONR._0_1_;
        } while ((bVar6 & 0x40) != 0);
        DMACON = 0x400;
        DAT_00dff048 = iVar8 + DAT_00dff048;
        sVar12 = sVar12 + -1;
      } while (sVar12 != -1);
      if ((wVar14 & 1) == 0) {
        DAT_00dff040 = bltconShiftBase_glyph + 0xfca;
        DAT_00dff04c = (int)sVar10 + blitSrcB_GlyphPtr_glyph + (int)sVar10;
      }
      else {
        DAT_00dff040 = bltconShiftBase_glyph + 0xbfa;
      }
      DAT_00dff050 = piVar2[1];
      DAT_00dff058 = sVar16 + *(word *)(piVar2 + 3) * 0x40;
      DAT_00dff054 = DAT_00dff048;
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


// --- BlitGlyphToSpriteBitmap @ 0010561c ---

/* WARNING: Control flow encountered bad instruction data */

void __usercall
BlitGlyphToSpriteBitmap
          (ushort glyphIndex,ushort xOff,ushort yOff,ushort planeMask,ushort dstSpriteIndex)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  short sVar9;
  
  glyphBlitPlaneMask = planeMask;
  piVar1 = *(int **)((int)spriteGraphicsPtr + (int)(short)(glyphIndex << 2));
  if (*(short *)(piVar1 + 2) == 0) {
    piVar2 = *(int **)((int)spriteGraphicsPtr + (int)(short)(dstSpriteIndex << 2));
    sVar6 = *(short *)((int)piVar2 + 0xe);
    dstRowBytesPerPlane = sVar6 * 2;
    iVar5 = (int)(short)dstRowBytesPerPlane;
    dstRowAdvanceBytes[0] = (char)((uint)iVar5 >> 0x18);
    dstRowAdvanceBytes[1] = (char)((uint)iVar5 >> 0x10);
    dstRowAdvanceBytes[2] = (char)((uint)iVar5 >> 8);
    dstRowAdvanceBytes[3] = (char)iVar5;
    DMACON = 0x8400;
    uVar3 = DMACONR._0_1_;
    do {
      bVar4 = DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    DMACON = 0x400;
    DAT_00dff046 = 0;
    uVar8 = *(ushort *)((int)piVar1 + 10) & 0xf;
    if (uVar8 == 0) {
      uVar8 = 0x10;
    }
    sVar9 = *(short *)((int)piVar1 + 0xe) + 1;
    if ((ushort)(uVar8 + (xOff & 0xf)) < 0x11) {
      DAT_00dff046 = 0xffff;
      sVar9 = *(short *)((int)piVar1 + 0xe);
    }
    DAT_00dff044 = 0xffff;
    bltconShiftBase_glyph = xOff * 0x1000;
    DAT_00dff042 = bltconShiftBase_glyph;
    if (piVar1[1] != 0) {
      glyphHeightLinesCache = *(word *)(piVar1 + 3);
      DAT_00dff048 = *piVar2 + (uint)yOff * (uint)dstRowBytesPerPlane * 4 +
                               (int)(short)(((short)xOff >> 4) << 1);
      DAT_00dff064 = *(short *)((int)piVar1 + 0xe) * 2 + sVar9 * -2;
      DAT_00dff062 = *(short *)((int)piVar1 + 0xe) * 8 + sVar9 * -2;
      DAT_00dff060 = sVar6 * 8 + sVar9 * -2;
      DAT_00dff066 = DAT_00dff060;
      sVar6 = *(short *)((int)piVar1 + 0xe) << 1;
      blitSrcB_GlyphPtr_glyph = (int)sVar6 + *piVar1;
      blitSrcA_MaskPtr_glyph = piVar1[1];
      sVar7 = 2;
      do {
        uVar8 = planeMask & 1;
        planeMask = planeMask >> 1;
        if (uVar8 != 0) {
          DAT_00dff04c = blitSrcB_GlyphPtr_glyph;
        }
        DMACON = 0x8400;
        uVar3 = DMACONR._0_1_;
        do {
          bVar4 = DMACONR._0_1_;
        } while ((bVar4 & 0x40) != 0);
        DMACON = 0x400;
        DAT_00dff048 = iVar5 + DAT_00dff048;
        sVar7 = sVar7 + -1;
      } while (sVar7 != -1);
      if ((planeMask & 1) == 0) {
        DAT_00dff040 = bltconShiftBase_glyph + 0xfca;
        DAT_00dff04c = (int)sVar6 + blitSrcB_GlyphPtr_glyph + (int)sVar6;
      }
      else {
        DAT_00dff040 = bltconShiftBase_glyph + 0xbfa;
      }
      DAT_00dff050 = piVar1[1];
      DAT_00dff058 = sVar9 + *(word *)(piVar1 + 3) * 0x40;
      DAT_00dff054 = DAT_00dff048;
      return;
    }
  }
  else {
    panicReasonCode = 0x1566;
    PanicHaltLoop();
    iVar5 = dstRowAdvanceBytes._0_4_;
  }
  dstRowAdvanceBytes._0_4_ = iVar5;
  panicReasonCode = 0x1567;
  PanicHaltLoop();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// --- LoadFile @ 0010594c ---

/* WARNING: Removing unreachable block (ram,0x00105ab4) */
/* WARNING: Removing unreachable block (ram,0x00105ab8) */
/* WARNING: Removing unreachable block (ram,0x00105a2a) */
/* WARNING: Removing unreachable block (ram,0x00105a2e) */
/* in:
        A0 -> file name
        A1 -> buffer
   out:
        zero flag set - all OK
          -||-  clear - error
        D0 contains result (0 - OK)
        D1 returns file size
   
   Loads entire file into given buffer. Reads 64k at a time. If the file can't be found,
   or some error happens, writes the name of the file to screen, and terminates the program. */

ushort __usercall LoadFile(char *filename,void *dst)

{
  ushort uVar1;
  uint unaff_D1;
  undefined1 *src;
  bool bVar2;
  
  src = (undefined1 *)frontbufferBasePtr;
  if (g_assetCurrentIndex == 4) {
    uVar1 = AssetSys_Dispatch(ASSET_OP_LOAD_FILE);
  }
  else {
    bVar2 = g_assetLoaderCacheFlag == 0;
    if ((bVar2) || (AssetCacheCopyByName(filename,(void *)frontbufferBasePtr), !bVar2)) {
      bVar2 = false;
      uVar1 = AssetSys_Dispatch(ASSET_OP_LOAD_FILE);
      if (!bVar2) {
        if (g_assetCurrentIndex == 4) {
          return uVar1;
        }
        do {
        } while( true );
      }
      if ((g_assetLoaderCacheFlag != 0) && (g_assetLoaderAltPathReady != 0)) {
        AssetCacheStoreFromMemory(filename,src,unaff_D1);
      }
    }
    if (0xbbb0 < unaff_D1) {
      panicReasonCode = 0xe000;
      PanicHaltLoop();
      if (g_assetCurrentIndex == 4) {
        uVar1 = AssetSys_Dispatch(ASSET_OP_LOAD_FILE);
      }
      else {
        bVar2 = g_assetLoaderCacheFlag == 0;
        if ((bVar2) || (AssetCacheCopyByName(filename,src), !bVar2)) {
          bVar2 = false;
          uVar1 = AssetSys_Dispatch(ASSET_OP_LOAD_FILE);
          if (!bVar2) {
            if (g_assetCurrentIndex == 4) {
              return uVar1;
            }
            do {
            } while( true );
          }
          if ((g_assetLoaderCacheFlag != 0) && (g_assetLoaderAltPathReady != 0)) {
            AssetCacheStoreFromMemory(filename,src,unaff_D1);
          }
        }
        uVar1 = 0;
      }
      return uVar1;
    }
    if (*(int *)frontbufferBasePtr == 0x524e4301) {
      RncDecompressV1((void *)frontbufferBasePtr,dst,*(uint *)(frontbufferBasePtr + 4));
    }
    else if (*(int *)frontbufferBasePtr == 0x524e4302) {
      RncDecompressV2((void *)frontbufferBasePtr,dst);
    }
    else {
      do {
        *(undefined1 *)dst = *src;
        unaff_D1 = unaff_D1 - 1;
        src = src + 1;
        dst = (undefined1 *)((int)dst + 1);
      } while (unaff_D1 != 0);
    }
    BlitterCopyOverlayToScreen();
    uVar1 = 0;
  }
  return uVar1;
}


// --- PlaySong @ 00105a42 ---

/* WARNING: Removing unreachable block (ram,0x00105ab4) */
/* WARNING: Removing unreachable block (ram,0x00105ab8) */

ushort __usercall PlaySong(char *filename)

{
  ushort uVar1;
  uint unaff_D1;
  void *unaff_A1;
  bool bVar2;
  
  if (g_assetCurrentIndex == 4) {
    uVar1 = AssetSys_Dispatch(ASSET_OP_LOAD_FILE);
  }
  else {
    bVar2 = g_assetLoaderCacheFlag == 0;
    if ((bVar2) || (AssetCacheCopyByName(filename,unaff_A1), !bVar2)) {
      bVar2 = false;
      uVar1 = AssetSys_Dispatch(ASSET_OP_LOAD_FILE);
      if (!bVar2) {
        if (g_assetCurrentIndex == 4) {
          return uVar1;
        }
        do {
        } while( true );
      }
      if ((g_assetLoaderCacheFlag != 0) && (g_assetLoaderAltPathReady != 0)) {
        AssetCacheStoreFromMemory(filename,unaff_A1,unaff_D1);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


// --- AssetCacheAlloc @ 001067de ---

ushort __usercall AssetCacheAlloc(uint size)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = size + 1 & 0xfffffffe;
  piVar3 = (int *)g_assetLoaderCacheFlag;
  if (g_assetLoaderCacheFlag != 0) {
    while( true ) {
      if ((*(short *)(piVar3 + 1) != 0) && (uVar1 <= *(uint *)((int)piVar3 + 6))) {
        iVar2 = (*(int *)((int)piVar3 + 6) - uVar1) + -0x30;
        *(uint *)((int)piVar3 + 6) = uVar1;
        *(uint *)((int)piVar3 + 10) = size;
        *(undefined2 *)(piVar3 + 1) = 0;
        if (-1 < iVar2) {
          piVar4 = (int *)((int)piVar3 + uVar1 + 0x30);
          *piVar4 = *piVar3;
          *piVar3 = (int)piVar4;
          *(int *)((int)piVar4 + 6) = iVar2;
          *(undefined2 *)(piVar4 + 1) = 1;
        }
        g_assetLoaderWorkPtr = g_assetLoaderWorkPtr - uVar1;
        return 0;
      }
      if (*piVar3 == 0) break;
      piVar3 = (int *)*piVar3;
    }
  }
  return 1;
}


// --- AssetCacheFindByName @ 0010685a ---

int __usercall AssetCacheFindByName(char *name)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int *piVar4;
  
  piVar4 = (int *)g_assetLoaderCacheFlag;
  if (g_assetLoaderCacheFlag != 0) {
    while( true ) {
      if (*(short *)(piVar4 + 1) == 0) {
        pcVar2 = name;
        pcVar3 = (char *)((int)piVar4 + 0xe);
        while( true ) {
          if (*pcVar2 != *pcVar3) break;
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
          pcVar3 = pcVar3 + 1;
          if (cVar1 == '\0') {
            return *(int *)((int)piVar4 + 10);
          }
        }
      }
      if (*piVar4 == 0) break;
      piVar4 = (int *)*piVar4;
    }
  }
  return -1;
}


// --- AssetCacheCopyByName @ 001068a4 ---

short __usercall AssetCacheCopyByName(char *name,void *dst)

{
  uint uVar1;
  short sVar2;
  
  uVar1 = AssetCacheFindByName(name);
  if (uVar1 == 0xffffffff) {
    return -1;
  }
  if (((((uVar1 & 1) == 0) && (((uint)dst & 1) == 0)) && (((uint)name & 1) == 0)) &&
     (uVar1 < 0x20001)) {
    sVar2 = (short)(uVar1 >> 1) + -1;
    do {
      *(undefined2 *)dst = *(undefined2 *)name;
      sVar2 = sVar2 + -1;
      name = name + 2;
      dst = (undefined2 *)((int)dst + 2);
    } while (sVar2 != -1);
  }
  else {
    do {
      *(char *)dst = *name;
      uVar1 = uVar1 - 1;
      name = name + 1;
      dst = (char *)((int)dst + 1);
    } while (uVar1 != 0);
  }
  return 0;
}


// --- AssetCacheStoreFromMemory @ 0010694c ---

void __usercall AssetCacheStoreFromMemory(char *name,void *src,uint size)

{
  char cVar1;
  char *pcVar2;
  bool bVar3;
  
  bVar3 = size == 0;
  AssetCacheAlloc(size);
  if (bVar3) {
    pcVar2 = name + 0x30;
    do {
                    /* WARNING: Load size is inaccurate */
      *pcVar2 = *src;
      size = size - 1;
      src = (char *)((int)src + 1);
      pcVar2 = pcVar2 + 1;
    } while (size != 0);
    pcVar2 = name + 0xe;
    do {
      cVar1 = *name;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      name = name + 1;
    } while (cVar1 != '\0');
  }
  return;
}


// --- RncDecompressV2 @ 00106974 ---

void __usercall RncDecompressV2(void *src,void *dst)

{
  short sVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar5;
  uint uVar4;
  byte bVar6;
  byte bVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  bool bVar13;
  
  pbVar8 = (byte *)((int)src + 0x13);
  bVar6 = (*(char *)((int)src + 0x12) * '\x02' + '\x01') * '\x02';
LAB_00106c7e:
  while( true ) {
    bVar12 = CARRY1(bVar6,bVar6);
    bVar7 = bVar6 * '\x02';
    if (bVar12) break;
    pbVar9 = pbVar8 + 1;
    pbVar10 = (byte *)((int)dst + 1);
    *(byte *)dst = *pbVar8;
    bVar12 = CARRY1(bVar7,bVar7);
    bVar6 = bVar6 << 2;
    pbVar8 = pbVar9;
    dst = pbVar10;
    bVar7 = bVar6;
    if (bVar12) break;
LAB_00106c7c:
    pbVar8 = pbVar9 + 1;
    dst = pbVar10 + 1;
    *pbVar10 = *pbVar9;
  }
  bVar6 = bVar7;
  pbVar9 = pbVar8;
  if (bVar6 == 0) {
    pbVar9 = pbVar8 + 1;
    bVar7 = *pbVar8;
    bVar6 = bVar7 * '\x02' + bVar12;
    pbVar10 = (byte *)dst;
    if (!CARRY1(bVar7,bVar7) && !CARRY1(bVar7 * '\x02',bVar12)) goto LAB_00106c7c;
  }
  uVar2 = 2;
  uVar4 = 0;
  bVar13 = CARRY1(bVar6,bVar6);
  bVar7 = bVar6 * '\x02';
  pbVar8 = pbVar9;
  bVar12 = bVar13;
  if (bVar7 == 0) {
    pbVar8 = pbVar9 + 1;
    bVar6 = *pbVar9;
    bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
    bVar7 = bVar6 * '\x02' + bVar13;
  }
  if (bVar12) {
    bVar13 = CARRY1(bVar7,bVar7);
    bVar6 = bVar7 * '\x02';
    pbVar9 = pbVar8;
    bVar12 = bVar13;
    if (bVar6 == 0) {
      pbVar9 = pbVar8 + 1;
      bVar6 = *pbVar8;
      bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
      bVar6 = bVar6 * '\x02' + bVar13;
    }
    if (!bVar12) {
LAB_00106c4c:
      pbVar8 = pbVar9 + 1;
      sVar1 = (short)CONCAT31((int3)(uVar4 >> 8),*pbVar9);
      pbVar10 = (byte *)((int)dst + -(int)sVar1);
      pbVar9 = pbVar10 + -1;
      if ((uVar2 & 1) != 0) {
        *(byte *)dst = pbVar10[-1];
        dst = (byte *)((int)dst + 1);
        pbVar9 = pbVar10;
      }
      sVar3 = (uVar2 >> 1) - 1;
      if (sVar1 == 0) {
        bVar7 = *pbVar9;
        do {
          pbVar9 = (byte *)((int)dst + 1);
          *(byte *)dst = bVar7;
          dst = (void *)((int)dst + 2);
          *pbVar9 = bVar7;
          sVar3 = sVar3 + -1;
        } while (sVar3 != -1);
      }
      else {
        do {
          pbVar11 = pbVar9 + 1;
          pbVar10 = (byte *)((int)dst + 1);
          *(byte *)dst = *pbVar9;
          pbVar9 = pbVar9 + 2;
          dst = (void *)((int)dst + 2);
          *pbVar10 = *pbVar11;
          sVar3 = sVar3 + -1;
        } while (sVar3 != -1);
      }
      goto LAB_00106c7e;
    }
    uVar2 = 3;
    bVar13 = CARRY1(bVar6,bVar6);
    bVar6 = bVar6 * '\x02';
    pbVar11 = pbVar9;
    bVar12 = bVar13;
    if (bVar6 == 0) {
      pbVar11 = pbVar9 + 1;
      bVar6 = *pbVar9;
      bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
      bVar6 = bVar6 * '\x02' + bVar13;
    }
    pbVar10 = pbVar11;
    if (bVar12) {
      pbVar10 = pbVar11 + 1;
      if (*pbVar11 != 0) {
        uVar2 = *pbVar11 + 8;
        goto LAB_00106c2c;
      }
      bVar13 = CARRY1(bVar6,bVar6);
      bVar6 = bVar6 * '\x02';
      pbVar8 = pbVar10;
      bVar12 = bVar13;
      if (bVar6 == 0) {
        pbVar8 = pbVar11 + 2;
        bVar6 = *pbVar10;
        bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
        bVar6 = bVar6 * '\x02' + bVar13;
      }
      if (!bVar12) {
        return;
      }
      goto LAB_00106c7e;
    }
  }
  else {
    bVar6 = bVar7 * '\x02';
    pbVar9 = pbVar8;
    if (bVar6 == 0) {
      pbVar9 = pbVar8 + 1;
      bVar6 = *pbVar8 * '\x02' + CARRY1(bVar7,bVar7);
    }
    uVar5 = (ushort)CARRY1(bVar7,bVar7);
    uVar2 = uVar5 + 4;
    bVar13 = CARRY1(bVar6,bVar6);
    bVar6 = bVar6 * '\x02';
    pbVar10 = pbVar9;
    bVar12 = bVar13;
    if (bVar6 == 0) {
      pbVar10 = pbVar9 + 1;
      bVar6 = *pbVar9;
      bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
      bVar6 = bVar6 * '\x02' + bVar13;
    }
    if (bVar12) {
      bVar12 = CARRY1(bVar6,bVar6);
      bVar6 = bVar6 * '\x02';
      if (bVar6 == 0) {
        bVar6 = *pbVar10 * '\x02' + bVar12;
        pbVar10 = pbVar10 + 1;
      }
      uVar2 = (uVar5 + 3) * 2 + (ushort)bVar12;
      if ((char)uVar2 != '\t') goto LAB_00106c2c;
      sVar1 = 3;
      do {
        bVar12 = CARRY1(bVar6,bVar6);
        bVar6 = bVar6 * '\x02';
        pbVar8 = pbVar10;
        if (bVar6 == 0) {
          pbVar8 = pbVar10 + 1;
          bVar6 = *pbVar10 * '\x02' + bVar12;
        }
        uVar2 = (short)uVar4 * 2 + (ushort)bVar12;
        uVar4 = (uint)uVar2;
        sVar1 = sVar1 + -1;
        pbVar10 = pbVar8;
      } while (sVar1 != -1);
      sVar1 = uVar2 + 2;
      do {
        *(byte *)dst = *pbVar8;
        *(byte *)((int)dst + 1) = pbVar8[1];
        pbVar9 = pbVar8 + 3;
        pbVar10 = (byte *)((int)dst + 3);
        *(byte *)((int)dst + 2) = pbVar8[2];
        pbVar8 = pbVar8 + 4;
        dst = (void *)((int)dst + 4);
        *pbVar10 = *pbVar9;
        sVar1 = sVar1 + -1;
      } while (sVar1 != -1);
      goto LAB_00106c7e;
    }
  }
LAB_00106c2c:
  bVar13 = CARRY1(bVar6,bVar6);
  bVar6 = bVar6 * '\x02';
  pbVar9 = pbVar10;
  bVar12 = bVar13;
  if (bVar6 == 0) {
    pbVar9 = pbVar10 + 1;
    bVar6 = *pbVar10;
    bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
    bVar6 = bVar6 * '\x02' + bVar13;
  }
  if (bVar12) {
    bVar7 = bVar6 * '\x02';
    pbVar8 = pbVar9;
    if (bVar7 == 0) {
      pbVar8 = pbVar9 + 1;
      bVar7 = *pbVar9 * '\x02' + CARRY1(bVar6,bVar6);
    }
    uVar5 = (ushort)CARRY1(bVar6,bVar6);
    bVar13 = CARRY1(bVar7,bVar7);
    bVar6 = bVar7 * '\x02';
    pbVar9 = pbVar8;
    bVar12 = bVar13;
    if (bVar6 == 0) {
      pbVar9 = pbVar8 + 1;
      bVar6 = *pbVar8;
      bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
      bVar6 = bVar6 * '\x02' + bVar13;
    }
    if (bVar12) {
      bVar7 = bVar6 * '\x02';
      pbVar8 = pbVar9;
      if (bVar7 == 0) {
        pbVar8 = pbVar9 + 1;
        bVar7 = *pbVar9 * '\x02' + CARRY1(bVar6,bVar6);
      }
      uVar5 = uVar5 * 2 + (ushort)CARRY1(bVar6,bVar6) | 4;
      bVar13 = CARRY1(bVar7,bVar7);
      bVar6 = bVar7 * '\x02';
      pbVar9 = pbVar8;
      bVar12 = bVar13;
      if (bVar6 == 0) {
        pbVar9 = pbVar8 + 1;
        bVar6 = *pbVar8;
        bVar12 = CARRY1(bVar6,bVar6) || CARRY1(bVar6 * '\x02',bVar13);
        bVar6 = bVar6 * '\x02' + bVar13;
      }
      if (!bVar12) goto LAB_00106c44;
    }
    else if (uVar5 == 0) {
      uVar5 = 1;
LAB_00106c44:
      bVar12 = CARRY1(bVar6,bVar6);
      bVar6 = bVar6 * '\x02';
      if (bVar6 == 0) {
        bVar6 = *pbVar9 * '\x02' + bVar12;
        pbVar9 = pbVar9 + 1;
      }
      uVar5 = uVar5 * 2 + (ushort)bVar12;
    }
    uVar4 = (uint)(ushort)(uVar5 << 8);
  }
  goto LAB_00106c4c;
}


// --- RncDecompressV1 @ 00106978 ---

int __usercall RncDecompressV1(void *src,void *dst,uint expectedSize)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *outTab;
  undefined4 uStack_1c0;
  undefined1 auStack_1bc [128];
  undefined1 auStack_13c [128];
  undefined1 auStack_bc [128];
  uint uStack_3c;
  
  uStack_3c = RncDecodeBlock(src,dst);
  if (((uStack_3c != 0) && (uStack_3c != -1)) && (uStack_3c != -2)) {
    return uStack_3c;
  }
  panicReasonCode = 0xe003;
  PanicHaltLoop();
  outTab = (ushort *)auStack_1bc;
  uStack_1c0 = 0x1069b2;
  uVar4 = RncReadU32((uchar **)src);
  if (uVar4 == 0x524e4301) {
    uStack_1c0 = 0x1069c2;
    uStack_3c = RncReadU32((uchar **)src);
    pbVar17 = (byte *)((int)src + 10);
    pbVar1 = (byte *)((int)dst + uStack_3c);
    uStack_1c0 = 0x1069d4;
    uVar4 = RncReadU32((uchar **)src);
    pbVar18 = pbVar17 + uVar4;
    uStack_1c0 = uStack_1c0 & 0xffff0000;
    puVar21 = (ushort *)((int)&uStack_1c0 + 2);
    if ((dst < pbVar18) &&
       (pbVar16 = pbVar1 + *(byte *)((int)src + 8), puVar21 = (ushort *)((int)&uStack_1c0 + 2),
       pbVar18 < pbVar16)) {
      if (((uint)pbVar18 & 1) != 0) {
        pbVar18 = pbVar18 + 1;
        pbVar16 = pbVar16 + 1;
      }
      if (((uint)pbVar16 & 1) != 0) {
        pbVar16 = pbVar16 + 1;
      }
      uVar4 = 0;
      puVar19 = (undefined1 *)outTab;
      while (pbVar1 != pbVar16) {
        pbVar16 = pbVar16 + -1;
        puVar20 = (ushort *)(puVar19 + -2);
        puVar19 = puVar19 + -2;
        *puVar20 = (ushort)*pbVar16;
        uVar4 = (uint)(byte)((char)uVar4 + 1);
      }
      puVar21 = (ushort *)(puVar19 + -2);
      *(short *)(puVar19 + -2) = (short)uVar4;
      pbVar16 = pbVar16 + uVar4;
      do {
        pbVar2 = pbVar18 + -0x20;
        uVar5 = *(undefined4 *)pbVar2;
        uVar9 = *(undefined4 *)(pbVar18 + -0x1c);
        uVar10 = *(undefined4 *)(pbVar18 + -0x18);
        uVar11 = *(undefined4 *)(pbVar18 + -0x14);
        uVar12 = *(undefined4 *)(pbVar18 + -0x10);
        uVar14 = *(undefined4 *)(pbVar18 + -0xc);
        uVar15 = *(undefined4 *)(pbVar18 + -8);
        *(undefined4 *)(pbVar16 + -4) = *(undefined4 *)(pbVar18 + -4);
        *(undefined4 *)(pbVar16 + -8) = uVar15;
        *(undefined4 *)(pbVar16 + -0xc) = uVar14;
        *(undefined4 *)(pbVar16 + -0x10) = uVar12;
        *(undefined4 *)(pbVar16 + -0x14) = uVar11;
        *(undefined4 *)(pbVar16 + -0x18) = uVar10;
        *(undefined4 *)(pbVar16 + -0x1c) = uVar9;
        pbVar16 = pbVar16 + -0x20;
        *(undefined4 *)pbVar16 = uVar5;
        pbVar18 = pbVar2;
      } while (pbVar17 < pbVar2);
      pbVar17 = pbVar16 + ((int)pbVar17 - (int)pbVar2);
    }
    puVar21[-0xffffffff00000002] = 0x10;
    puVar21[-0xffffffff00000001] = 0x6a3c;
    RncGetBits(2,2);
    do {
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a42;
      RncBuildTable(outTab);
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a4a;
      RncBuildTable(auStack_13c);
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a52;
      RncBuildTable(auStack_bc);
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a5a;
      iVar6 = RncGetBits(0xffffffff,0x10);
      sVar13 = (short)iVar6 + -1;
      while( true ) {
        puVar21[-0xffffffff00000002] = 0x10;
        puVar21[-0xffffffff00000001] = 0x6a80;
        iVar6 = RncDecodeSymbol(outTab);
        sVar8 = (short)iVar6 + -1;
        pbVar18 = pbVar17;
        pbVar16 = (byte *)dst;
        if (-1 < sVar8) {
          do {
            pbVar17 = pbVar18 + 1;
            dst = pbVar16 + 1;
            *pbVar16 = *pbVar18;
            sVar8 = sVar8 + -1;
            pbVar18 = pbVar17;
            pbVar16 = (byte *)dst;
          } while (sVar8 != -1);
        }
        sVar13 = sVar13 + -1;
        if (sVar13 == -1) break;
        puVar21[-0xffffffff00000002] = 0x10;
        puVar21[-0xffffffff00000001] = 0x6a68;
        iVar6 = RncDecodeSymbol(auStack_13c);
        pbVar18 = (byte *)((int)dst + (-1 - iVar6));
        puVar21[-0xffffffff00000002] = 0x10;
        puVar21[-0xffffffff00000001] = 0x6a74;
        uVar4 = RncDecodeSymbol(auStack_bc);
        *(byte *)dst = *pbVar18;
        pbVar16 = (byte *)((int)dst + 1);
        do {
          pbVar18 = pbVar18 + 1;
          dst = pbVar16 + 1;
          *pbVar16 = *pbVar18;
          uVar7 = (short)uVar4 - 1;
          uVar4 = (uint)uVar7;
          pbVar16 = (byte *)dst;
        } while (uVar7 != 0xffff);
      }
    } while (dst < pbVar1);
    outTab = puVar21 + 1;
    uVar7 = *puVar21;
    puVar21 = puVar21 + 1;
    if (uVar7 != 0) {
      do {
        outTab = puVar21 + 1;
        *(byte *)dst = (byte)*puVar21;
        bVar3 = (char)uVar7 - 1;
        uVar7 = (ushort)bVar3;
        dst = (byte *)((int)dst + 1);
        puVar21 = puVar21 + 1;
      } while (bVar3 != 0);
    }
  }
  else {
    uStack_3c = 0;
  }
  return *(int *)((int)outTab + 0x180);
}


// --- RncDecodeBlock @ 001069a4 ---

int __usercall RncDecodeBlock(void *src,void *dst)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  short sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  ushort *outTab;
  undefined4 uStack_1c0;
  undefined1 local_1bc [128];
  undefined1 local_13c [128];
  undefined1 local_bc [128];
  
  outTab = (ushort *)local_1bc;
  uStack_1c0 = 0x1069b2;
  uVar4 = RncReadU32((uchar **)src);
  if (uVar4 == 0x524e4301) {
    uStack_1c0 = 0x1069c2;
    uVar4 = RncReadU32((uchar **)src);
    pbVar17 = (byte *)((int)src + 10);
    pbVar1 = (byte *)((int)dst + uVar4);
    uStack_1c0 = 0x1069d4;
    uVar4 = RncReadU32((uchar **)src);
    pbVar18 = pbVar17 + uVar4;
    uStack_1c0 = uStack_1c0 & 0xffff0000;
    puVar21 = (ushort *)((int)&uStack_1c0 + 2);
    if ((dst < pbVar18) &&
       (pbVar16 = pbVar1 + *(byte *)((int)src + 8), puVar21 = (ushort *)((int)&uStack_1c0 + 2),
       pbVar18 < pbVar16)) {
      if (((uint)pbVar18 & 1) != 0) {
        pbVar18 = pbVar18 + 1;
        pbVar16 = pbVar16 + 1;
      }
      if (((uint)pbVar16 & 1) != 0) {
        pbVar16 = pbVar16 + 1;
      }
      uVar4 = 0;
      puVar19 = (undefined1 *)outTab;
      while (pbVar1 != pbVar16) {
        pbVar16 = pbVar16 + -1;
        puVar20 = (ushort *)(puVar19 + -2);
        puVar19 = puVar19 + -2;
        *puVar20 = (ushort)*pbVar16;
        uVar4 = (uint)(byte)((char)uVar4 + 1);
      }
      puVar21 = (ushort *)(puVar19 + -2);
      *(short *)(puVar19 + -2) = (short)uVar4;
      pbVar16 = pbVar16 + uVar4;
      do {
        pbVar2 = pbVar18 + -0x20;
        uVar5 = *(undefined4 *)pbVar2;
        uVar9 = *(undefined4 *)(pbVar18 + -0x1c);
        uVar10 = *(undefined4 *)(pbVar18 + -0x18);
        uVar11 = *(undefined4 *)(pbVar18 + -0x14);
        uVar12 = *(undefined4 *)(pbVar18 + -0x10);
        uVar14 = *(undefined4 *)(pbVar18 + -0xc);
        uVar15 = *(undefined4 *)(pbVar18 + -8);
        *(undefined4 *)(pbVar16 + -4) = *(undefined4 *)(pbVar18 + -4);
        *(undefined4 *)(pbVar16 + -8) = uVar15;
        *(undefined4 *)(pbVar16 + -0xc) = uVar14;
        *(undefined4 *)(pbVar16 + -0x10) = uVar12;
        *(undefined4 *)(pbVar16 + -0x14) = uVar11;
        *(undefined4 *)(pbVar16 + -0x18) = uVar10;
        *(undefined4 *)(pbVar16 + -0x1c) = uVar9;
        pbVar16 = pbVar16 + -0x20;
        *(undefined4 *)pbVar16 = uVar5;
        pbVar18 = pbVar2;
      } while (pbVar17 < pbVar2);
      pbVar17 = pbVar16 + ((int)pbVar17 - (int)pbVar2);
    }
    puVar21[-0xffffffff00000002] = 0x10;
    puVar21[-0xffffffff00000001] = 0x6a3c;
    RncGetBits(2,2);
    do {
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a42;
      RncBuildTable(outTab);
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a4a;
      RncBuildTable(local_13c);
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a52;
      RncBuildTable(local_bc);
      puVar21[-0xffffffff00000002] = 0x10;
      puVar21[-0xffffffff00000001] = 0x6a5a;
      iVar6 = RncGetBits(0xffffffff,0x10);
      sVar13 = (short)iVar6 + -1;
      while( true ) {
        puVar21[-0xffffffff00000002] = 0x10;
        puVar21[-0xffffffff00000001] = 0x6a80;
        iVar6 = RncDecodeSymbol(outTab);
        sVar8 = (short)iVar6 + -1;
        pbVar18 = pbVar17;
        pbVar16 = (byte *)dst;
        if (-1 < sVar8) {
          do {
            pbVar17 = pbVar18 + 1;
            dst = pbVar16 + 1;
            *pbVar16 = *pbVar18;
            sVar8 = sVar8 + -1;
            pbVar18 = pbVar17;
            pbVar16 = (byte *)dst;
          } while (sVar8 != -1);
        }
        sVar13 = sVar13 + -1;
        if (sVar13 == -1) break;
        puVar21[-0xffffffff00000002] = 0x10;
        puVar21[-0xffffffff00000001] = 0x6a68;
        iVar6 = RncDecodeSymbol(local_13c);
        pbVar18 = (byte *)((int)dst + (-1 - iVar6));
        puVar21[-0xffffffff00000002] = 0x10;
        puVar21[-0xffffffff00000001] = 0x6a74;
        uVar4 = RncDecodeSymbol(local_bc);
        *(byte *)dst = *pbVar18;
        pbVar16 = (byte *)((int)dst + 1);
        do {
          pbVar18 = pbVar18 + 1;
          dst = pbVar16 + 1;
          *pbVar16 = *pbVar18;
          uVar7 = (short)uVar4 - 1;
          uVar4 = (uint)uVar7;
          pbVar16 = (byte *)dst;
        } while (uVar7 != 0xffff);
      }
    } while (dst < pbVar1);
    outTab = puVar21 + 1;
    uVar7 = *puVar21;
    puVar21 = puVar21 + 1;
    if (uVar7 != 0) {
      do {
        outTab = puVar21 + 1;
        *(byte *)dst = (byte)*puVar21;
        bVar3 = (char)uVar7 - 1;
        uVar7 = (ushort)bVar3;
        dst = (byte *)((int)dst + 1);
        puVar21 = puVar21 + 1;
      } while (bVar3 != 0);
    }
  }
  return *(int *)((int)outTab + 0x180);
}


// --- RncDecodeSymbol @ 00106ac2 ---

int __usercall RncDecodeSymbol(void *tab)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  undefined2 uVar7;
  undefined4 unaff_D0;
  uint uVar8;
  uint unaff_D6;
  char unaff_D7b;
  ushort *puVar9;
  
  do {
    puVar9 = (ushort *)tab;
    uVar7 = (undefined2)((uint)unaff_D0 >> 0x10);
    sVar6 = ((ushort)unaff_D6 & *puVar9) - puVar9[1];
    unaff_D0 = CONCAT22(uVar7,sVar6);
    tab = puVar9 + 2;
  } while (sVar6 != 0);
  bVar2 = *(byte *)(puVar9 + 0x20);
  bVar4 = unaff_D7b - bVar2;
  if (SBORROW1(unaff_D7b,bVar2) != (short)((ushort)bVar4 << 8) < 0) {
    RncRefillBits();
  }
  cVar3 = *(char *)((int)puVar9 + 0x41);
  uVar8 = CONCAT31((int3)((uint)unaff_D0 >> 8),cVar3);
  if ('\x01' < cVar3) {
    bVar5 = cVar3 - 1;
    uVar1 = puVar9[0x21];
    if (SBORROW1(bVar4,bVar5) != (short)((ushort)(byte)(bVar4 - bVar5) << 8) < 0) {
      RncRefillBits();
    }
    uVar8 = CONCAT22(uVar7,(ushort)(unaff_D6 >> (bVar2 & 0x3f)) & uVar1) | 1 << (bVar5 & 0x1f);
  }
  return uVar8;
}


// --- RncGetBits @ 00106af8 ---

int __usercall RncGetBits(uint mask,uint nbits)

{
  ushort unaff_D6w;
  char unaff_D7b;
  
  if (unaff_D7b < (char)nbits) {
    RncRefillBits();
  }
  return CONCAT22((short)(mask >> 0x10),unaff_D6w & (ushort)mask);
}


// --- RncRefillBits @ 00106b04 ---

void __usercall RncRefillBits(void)

{
  return;
}


// --- RncReadU32 @ 00106b1c ---

uint __usercall RncReadU32(uchar **pp)

{
  uint unaff_D0;
  short sVar1;
  
  sVar1 = 3;
  do {
    unaff_D0 = CONCAT31((int3)unaff_D0,*(undefined1 *)pp);
    sVar1 = sVar1 + -1;
    pp = (uchar **)((int)pp + 1);
  } while (sVar1 != -1);
  return unaff_D0;
}


// --- RncBuildTable @ 00106b28 ---

void __usercall RncBuildTable(void *outTab)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  short sVar9;
  uint uVar8;
  uint uVar10;
  ushort unaff_D6w;
  short sVar11;
  short *psVar12;
  char *pcVar13;
  bool bVar14;
  char local_10 [12];
  undefined4 uStack_4;
  
  uStack_4 = 0x106b2e;
  iVar4 = RncGetBits(0x1f,5);
  sVar2 = (short)iVar4 + -1;
  if (-1 < sVar2) {
    pcVar13 = local_10;
    sVar9 = sVar2;
    do {
      iVar4 = RncGetBits(0xf,4);
      *pcVar13 = (char)iVar4;
      sVar9 = sVar9 + -1;
      pcVar13 = pcVar13 + 1;
    } while (sVar9 != -1);
    uVar5 = 0x80000000;
    uVar6 = 1;
    uVar8 = 0;
    sVar9 = sVar2;
    pcVar13 = local_10;
    do {
      do {
        cVar7 = (char)uVar6;
        psVar12 = (short *)outTab;
        if (cVar7 == *pcVar13) {
          *(short *)outTab = (1 << (uVar6 & 0x3f)) + -1;
          uVar10 = uVar8 >> 0x10;
          bVar14 = (short)uVar6 == 0;
          sVar11 = (short)uVar6 + -1;
          do {
            uVar3 = uVar10 & 0x8000;
            uVar10 = (uint)(ushort)((short)uVar10 << 1 | (ushort)bVar14);
            bVar14 = (unaff_D6w & 1) != 0;
            unaff_D6w = (ushort)(uVar3 != 0) << 0xf | unaff_D6w >> 1;
            sVar11 = sVar11 + -1;
          } while (sVar11 != -1);
          psVar12 = (short *)((int)outTab + 4);
          *(ushort *)((int)outTab + 2) = unaff_D6w >> (0x10U - cVar7 & 0x3f);
          *(char *)((int)outTab + 0x40) = cVar7;
          cVar1 = (char)sVar2 - (char)sVar9;
          *(char *)((int)outTab + 0x41) = cVar1;
          unaff_D6w = (1 << (cVar1 - 1U & 0x3f)) - 1;
          *(ushort *)((int)outTab + 0x42) = unaff_D6w;
          uVar8 = uVar5 + uVar8;
        }
        sVar9 = sVar9 + -1;
        outTab = psVar12;
        pcVar13 = pcVar13 + 1;
      } while (sVar9 != -1);
      uVar5 = uVar5 >> 1;
      uVar6 = (uint)(byte)(cVar7 + 1U);
      sVar9 = sVar2;
      pcVar13 = local_10;
    } while ((byte)(cVar7 + 1U) != 0x11);
  }
  return;
}


// --- nullsub_5 @ 00106cec ---

void __usercall nullsub_5(void)

{
  return;
}


// --- CrowdResetMatchState @ 00106d0a ---

void __usercall CrowdResetMatchState(void)

{
  patternsGoalCounter = 0;
  showFansCounter = 0;
  crowdChantVolume = 0;
  sfxQueueCount = 0;
  sfxQueueWriteIdx = 0;
  goalCounter = 0;
  crowdEventFlags = 0;
  currentCrowdSample = 0xffff;
  return;
}


// --- LoadSfxResources @ 0010700e ---

void __usercall LoadSfxResources(void)

{
  bool bVar1;
  
  do {
    do {
      do {
        StopAudio();
        g_audioBankLoaded = 0;
        bVar1 = true;
        PlaySong(aSoundSfxSng);
      } while (!bVar1);
      PlaySong(aSoundSfxIn1);
    } while (!bVar1);
    PlaySong(aSoundSfxIn2);
  } while (!bVar1);
  return;
}


// --- EnsureSfxLoadedAndStart @ 0010704c ---

void __usercall EnsureSfxLoadedAndStart(void)

{
  undefined4 unaff_D0;
  undefined4 unaff_D1;
  
  if (g_audioBankLoaded == 0) {
    StopAudio();
    StartMenuMusic(&g_sfxSongData,poolplyrDatBuffer);
    g_audioBankLoaded = 1;
  }
  SetVolumeOrStopChants
            (CONCAT22((short)((uint)unaff_D0 >> 0x10),0xffff),
             CONCAT22((short)((uint)unaff_D1 >> 0x10),0x40));
  g_audioActive = 1;
  return;
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


// --- PlaySample1IfNotTraining @ 001072dc ---

void __usercall PlaySample1IfNotTraining(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  PlaySample();
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


// --- StartMenuMusic @ 0010744c ---

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __usercall StartMenuMusic(void *bankBase,void *songPtr)

{
  ushort uVar1;
  undefined4 uVar2;
  short sVar4;
  int iVar3;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  
  audioState._0_4_ = (int)songPtr + 4;
  piVar6 = (int *)((int)bankBase + 8);
  pbVar7 = audioState;
  sVar4 = 6;
  do {
    pbVar7 = pbVar7 + 4;
    iVar3 = *piVar6;
    *(int **)pbVar7 = piVar6 + 1;
    uVar2 = audioState._0_4_;
    piVar6 = (int *)(iVar3 + (int)(piVar6 + 1));
    sVar4 = sVar4 + -1;
  } while (sVar4 != -1);
  audioPresetChannelCmdTable[0x14] = 0;
  audioPresetChannelCmdTable[0x15] = 0x40;
  audioFlags[5] = 0x40;
  audioFlags[6] = 0x40;
  audioFlags[7] = 0x40;
  audioFlags[8] = 0x40;
  _audioCounter = 0xd;
  audioFlags[1] = 0;
  audioFlags[2] = 0;
  audioFlags[3] = 0xff;
  audioFlags[4] = 0xff;
  uVar5 = *(uint *)(audioState._4_4_ + -4);
  piVar6 = (int *)audioState._4_4_;
  do {
    *piVar6 = uVar2 + *piVar6;
    iVar3 = piVar6[1];
    if (iVar3 != 0) {
      iVar3 = uVar2 + iVar3;
    }
    piVar6[1] = iVar3;
    iVar3 = piVar6[2];
    if (iVar3 != 0) {
      iVar3 = uVar2 + iVar3;
    }
    piVar6[2] = iVar3;
    *(short *)(piVar6 + 4) = *(short *)(piVar6 + 4) * 2;
    piVar6 = piVar6 + 8;
    uVar1 = (short)uVar5 - 0x20;
    uVar5 = (uint)uVar1;
  } while (uVar1 != 0);
  ClearAudioChannelStruct(audioChannel0);
  audioChannel0._0_4_ = &AUD0LC;
  audioChannel0[0x2e] = 0;
  audioChannel0[0x2f] = 1;
  audioChannel0[0x86] = 0;
  audioChannel0[0x87] = 1;
  ClearAudioChannelStruct(audioChannel1);
  audioChannel1._0_4_ = &AUD1LC;
  audioChannel1[0x2e] = 0;
  audioChannel1[0x2f] = 2;
  audioChannel1[0x86] = 0;
  audioChannel1[0x87] = 2;
  ClearAudioChannelStruct(audioChannel2);
  audioChannel2._0_4_ = &AUD2LC;
  audioChannel2[0x2e] = 0;
  audioChannel2[0x2f] = 4;
  audioChannel2[0x86] = 0;
  audioChannel2[0x87] = 4;
  ClearAudioChannelStruct(audioChannel3);
  audioChannel3._0_4_ = &AUD3LC;
  audioChannel3[0x2e] = 0;
  audioChannel3[0x2f] = 8;
  audioChannel3[0x86] = 0;
  audioChannel3[0x87] = 8;
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


// --- SetVolumeOrStopChants @ 0010745c ---

void __usercall SetVolumeOrStopChants(uint channelOrAll,uint volume)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  if ((ushort)volume != 0x40) {
    volume = (uint)((ushort)volume & 0x3f);
  }
  bVar4 = (byte)volume;
  bVar1 = bVar4;
  bVar2 = bVar4;
  bVar3 = bVar4;
  if (-1 < (char)channelOrAll) {
    audioFlags[(short)((ushort)channelOrAll & 3) + 5] = bVar4;
    bVar4 = audioFlags[5];
    bVar1 = audioFlags[6];
    bVar2 = audioFlags[7];
    bVar3 = audioFlags[8];
  }
  audioFlags[8] = bVar3;
  audioFlags[7] = bVar2;
  audioFlags[6] = bVar1;
  audioFlags[5] = bVar4;
  return;
}


// --- StopAudio @ 00107460 ---

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __usercall StopAudio(void)

{
  audioPresetChannelCmdTable[0x14] = 0;
  audioPresetChannelCmdTable[0x15] = 0;
  _audioCounter = 0;
  DMACON = 0xf;
  DAT_00dff0a8 = 0;
  DAT_00dff0b8 = 0;
  DAT_00dff0c8 = 0;
  DAT_00dff0d8 = 0;
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


// --- SetBallPosition @ 00108f60 ---

/* in:
        D1 - ball x
        D2 - ball y
   
   Stop ball and put it to the ground (z = 0). */

void __usercall SetBallPosition(short ballX,short ballY)

{
  ballSprite.speed = 0;
  ballSprite.x.s.i = ballX;
  ballSprite.x.s.frac = 0;
  ballSprite.y.s.i = ballY;
  ballSprite.y.s.frac = 0;
  ballSprite.destX = ballX;
  ballSprite.destY = ballY;
  ballSprite.z.s.i = 0;
  ballSprite.deltaZ.raw = 0;
  return;
}


// --- RemoveReferee @ 00109b9e ---

void __usercall RemoveReferee(void)

{
  refState = 0;
  refereeSprite.visible = 0;
  refereeSprite.x.s.i = 0x114;
  refereeSprite.y.s.i = 0x1b7;
  refereeSprite.destX = 0x114;
  refereeSprite.destY = 0x1b7;
  refereeSprite.z.s.i = 0;
  refereeSprite.speed = 0;
  refereeSprite.playerDownTimer = 0;
  refereeSprite.frameIndex = 0xffff;
  refereeSprite.cycleFramesTimer = 1;
  refereeSprite.imageIndex = 0xffff;
  refereeSprite.direction = 0;
  refereeSprite.onScreen = 1;
  InitRefereeAnimationTable((AnimTable *)&refWaitingAnimTable);
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


// --- nullsub_21 @ 00109f36 ---

void __usercall nullsub_21(void)

{
  return;
}


// --- CopyAdvertisementsData @ 00109f56 ---

void __usercall CopyAdvertisementsData(void)

{
  short sVar1;
  SpriteGraphics **ppSVar2;
  SpriteGraphics **ppSVar3;
  dword *pdVar4;
  
  ppSVar3 = spriteGraphicsPtr;
  sVar1 = 7;
  ppSVar2 = spriteGraphicsPtr + 0x71;
  pdVar4 = advert1Pointers;
  do {
    *pdVar4 = (dword)(*ppSVar2)->sprData;
    sVar1 = sVar1 + -1;
    ppSVar2 = ppSVar2 + 1;
    pdVar4 = pdVar4 + 1;
  } while (sVar1 != -1);
  sVar1 = 7;
  ppSVar2 = ppSVar3 + 0x79;
  pdVar4 = advert2Pointers;
  do {
    *pdVar4 = (dword)(*ppSVar2)->sprData;
    sVar1 = sVar1 + -1;
    ppSVar2 = ppSVar2 + 1;
    pdVar4 = pdVar4 + 1;
  } while (sVar1 != -1);
  sVar1 = 7;
  ppSVar3 = ppSVar3 + 0x81;
  pdVar4 = advert3Pointers;
  do {
    *pdVar4 = (dword)(*ppSVar3)->sprData;
    sVar1 = sVar1 + -1;
    ppSVar3 = ppSVar3 + 1;
    pdVar4 = pdVar4 + 1;
  } while (sVar1 != -1);
  return;
}


// --- InitAdvertisements @ 00109fa0 ---

void __usercall InitAdvertisements(void)

{
  advertIndex = 0;
  advertSlideTimer = 0;
  currentAnimatedAdLine = 0;
  SetAdvertisementsInvisible();
  return;
}


// --- SetAdvertisementsInvisible @ 00109fd6 ---

void __usercall SetAdvertisementsInvisible(void)

{
  short sVar1;
  Sprite *pSVar2;
  
  pSVar2 = advertInGameSprites;
  sVar1 = 7;
  do {
    pSVar2->visible = 0;
    pSVar2 = pSVar2 + 1;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  InitDisplaySprites();
  return;
}


// --- MakeSpritesFromPlayerNames @ 0010a31c ---

/* in:
        A5 -> left team (game)
        A6 -> right team (game)
   
   Make sprites from player names from both teams.
    */

void __usercall MakeSpritesFromPlayerNames(void *leftTeam,void *rightTeam)

{
  ushort unaff_D0w;
  ushort spriteIndex;
  short sVar1;
  
  spriteIndex = SPR_TEAM1_PLAYER_NAMES_START;
  sVar1 = 0xf;
  do {
    unaff_D0w = CONCAT11((char)(unaff_D0w >> 8),*(undefined1 *)((int)leftTeam + 0x2d));
    spriteIndex = MakePlayerNameSprite
                            (unaff_D0w,(uchar *)((int)leftTeam + 0x36),spriteIndex,
                             plNamesLengthTable);
    leftTeam = (void *)((int)leftTeam + 0x3d);
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  sVar1 = 0xf;
  do {
    unaff_D0w = CONCAT11((char)(unaff_D0w >> 8),*(undefined1 *)((int)rightTeam + 0x2d));
    spriteIndex = MakePlayerNameSprite
                            (unaff_D0w,(uchar *)((int)rightTeam + 0x36),spriteIndex,
                             plNamesLengthTable);
    rightTeam = (void *)((int)rightTeam + 0x3d);
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}


// --- MakePlayerNameSprite @ 0010a358 ---

/* in:
        D0 -  player number
        A0 -> player short name
        D6 -  sprite index to copy name to
        A4 -> table of pl. name lengths
   
   out:
        D6 - sprite index + 1
   
   From player surname and number makes a sprite. */

ushort __usercall
MakePlayerNameSprite(ushort playerNumber,uchar *shortName,ushort spriteIndex,uchar *nameLenTable)

{
  char *src;
  
  Int2Ascii((short)(char)playerNumber,numberBuffer);
  numberBuffer[0] = ' ';
  HWSprite_LoadFromSpriteGraphics();
  src = ExtractSurname((char *)shortName,0x400b);
  StringCopy(src,numberBuffer + 1);
  Text2Sprite(0,0,spriteIndex,numberBuffer,&smallCharsTable);
  *nameLenTable = '\0';
  return spriteIndex + 1;
}


// --- CopyPlayerNameLengths @ 0010a3c8 ---

void __usercall CopyPlayerNameLengths(void)

{
  short sVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar3 = plNamesLengthTable;
  pbVar5 = plNamesLengthTableCopy;
  sVar1 = 0;
  pbVar2 = plOrdinalsTable;
  do {
    pbVar2[0x10] = (byte)sVar1;
    *pbVar2 = (byte)sVar1;
    pbVar4 = pbVar3 + 1;
    pbVar6 = pbVar5 + 1;
    *pbVar5 = *pbVar3;
    pbVar3 = pbVar3 + 2;
    pbVar5 = pbVar5 + 2;
    *pbVar6 = *pbVar4;
    sVar1 = sVar1 + 1;
    pbVar2 = pbVar2 + 1;
  } while (sVar1 != 0x10);
  return;
}


// --- InitGameSaveTeams @ 0010a492 ---

/* in:
        A5 -> left team in-game struct
        A6 -> right team in-game struct */

void __usercall InitGameSaveTeams(void *leftTeamInGame,void *rightTeamInGame)

{
  short sVar1;
  TeamGame *pTVar2;
  TeamGame *pTVar3;
  TeamGame *pTVar4;
  TeamGame *pTVar5;
  
  sVar1 = 0x3f9;
  pTVar2 = &topTeamInGame;
  pTVar3 = &topTeamSaved;
  pTVar4 = &bottomTeamInGame;
  pTVar5 = &bottomTeamSaved;
  do {
    *(undefined1 *)&pTVar3->prShirtType = *(undefined1 *)&pTVar2->prShirtType;
    *(undefined1 *)&pTVar5->prShirtType = *(undefined1 *)&pTVar4->prShirtType;
    sVar1 = sVar1 + -1;
    pTVar2 = (TeamGame *)((int)&pTVar2->prShirtType + 1);
    pTVar3 = (TeamGame *)((int)&pTVar3->prShirtType + 1);
    pTVar4 = (TeamGame *)((int)&pTVar4->prShirtType + 1);
    pTVar5 = (TeamGame *)((int)&pTVar5->prShirtType + 1);
  } while (sVar1 != -1);
  topTeamPtr = (TeamGame *)leftTeamInGame;
  bottomTeamPtr = (TeamGame *)rightTeamInGame;
  LoadPitchMap(pitchNumberAndType >> 8);
  FixupAndColorPitchFile();
  ConvertColorsAndTextSprites((TeamGame *)leftTeamInGame,(TeamGame *)rightTeamInGame);
  do {
    do {
      Player1StatusProc();
    } while (pl1Fire != 0);
    Player2StatusProc();
  } while (pl2Fire != 0);
  FadeOutToBlack();
  paletteBankIndex = 2;
  InitGameRestoreTeams(leftTeamInGame,rightTeamInGame);
  return;
}


// --- InitGameRestoreTeams @ 0010a50e ---

/* in:
        A5 -> left team in-game struct
        A6 -> right team in-game struct
   
   Also loads the game palette from pal.256.
    */

void __usercall InitGameRestoreTeams(void *leftTeamInGame,void *rightTeamInGame)

{
  int iVar1;
  word *pwVar2;
  ushort uVar3;
  short sVar4;
  TeamGame *pTVar5;
  TeamGame *pTVar6;
  TeamGame *pTVar7;
  TeamGame *pTVar8;
  
  InitAdvertisements();
  CopyPlayerNameLengths();
  iVar1 = *(int *)((int)&playerCardChancesPerGameLength + (int)(short)(gameLengthInGame << 2));
  uVar3 = Rand();
  playerCardChance = *(word *)(iVar1 + (short)(uVar3 & 0x1e));
  overlayActiveFlag = 0;
  sVar4 = 0x3f9;
  pTVar5 = &topTeamInGame;
  pTVar6 = &topTeamSaved;
  pTVar7 = &bottomTeamInGame;
  pTVar8 = &bottomTeamSaved;
  do {
    *(undefined1 *)&pTVar5->prShirtType = *(undefined1 *)&pTVar6->prShirtType;
    *(undefined1 *)&pTVar7->prShirtType = *(undefined1 *)&pTVar8->prShirtType;
    sVar4 = sVar4 + -1;
    pTVar5 = (TeamGame *)((int)&pTVar5->prShirtType + 1);
    pTVar6 = (TeamGame *)((int)&pTVar6->prShirtType + 1);
    pTVar7 = (TeamGame *)((int)&pTVar7->prShirtType + 1);
    pTVar8 = (TeamGame *)((int)&pTVar8->prShirtType + 1);
  } while (sVar4 != -1);
  InitializePlayerSpriteFrameIndices();
  gameRandValue = Rand();
  ApplyTeamTactics(&topTeamInGame);
  ApplyTeamTactics(&bottomTeamInGame);
  paletteBankIndex = 2;
  nullsub_5();
  CrowdResetMatchState();
  uVar3 = Rand();
  teamPlayingUp = (uVar3 & 1) + 1;
  uVar3 = Rand();
  teamStarting = (uVar3 & 1) + 1;
  timeDelta = *(word *)((int)gameLenSecondsTable + (int)(short)(gameLengthInGame << 1));
  uVar3 = (pitchNumberAndType & 0xff) << 2;
  pwVar2 = *(word **)((int)kPaletteTripletPtrs + (int)(short)uVar3);
  currentCopperList[0] = (undefined *)g_copperList;
  g_copperList[0] = *pwVar2;
  g_copperList[7] = pwVar2[1];
  g_copperList[9] = pwVar2[2];
  uVar3 = uVar3 >> 1;
  pitchBallSpeedFactor = *(word *)((int)kPitchBallSpeedInfluence + (int)(short)uVar3);
  ballSpeedBounceFactor = *(word *)((int)kBallSpeedBounceFactorTable + (int)(short)uVar3);
  ballBounceFactor = *(word *)((int)kBallBounceFactorTable + (int)(short)uVar3);
  playingPenalties = 0;
  dontShowScorers = 0;
  statsTimer = 0;
  showStats = 0;
  showingUserStats = 0;
  subsTeamsSwapped = 0;
  g_inSubstitutesMenu = 0;
  g_cameraLeavingSubsTimer = 0;
  benchOff = 0;
  g_leavingSubsMenu = 0;
  g_waitForPlayerToGoInTimer = 0;
  g_substituteInProgress = 0;
  statsTeam1Goals = 0;
  team1GoalsDigit1 = 0;
  team1GoalsDigit2 = 0;
  statsTeam2Goals = 0;
  team2GoalsDigit1 = 0;
  team2GoalsDigit2 = 0;
  team1TotalGoals = 0;
  team2TotalGoals = 0;
  if (secondLeg != 0) {
    team1TotalGoals = team1GoalsFirstLeg;
    team2TotalGoals = team2GoalsFirstLeg;
  }
  team1NumSubs = 0;
  team2NumSubs = 0;
  team1GoalkeeperReplaced = 0;
  team2GoalkeeperReplaced = 0;
  team1StatsData.ballPossession = 0;
  team1StatsData.cornersWon = 0;
  team1StatsData.foulsConceded = 0;
  team1StatsData.bookings = 0;
  team1StatsData.sendingsOff = 0;
  team1StatsData.goalAttempts = 0;
  team1StatsData.onTarget = 0;
  team2StatsData.ballPossession = 0;
  team2StatsData.cornersWon = 0;
  team2StatsData.foulsConceded = 0;
  team2StatsData.bookings = 0;
  team2StatsData.sendingsOff = 0;
  team2StatsData.goalAttempts = 0;
  team2StatsData.onTarget = 0;
  InitDisplaySprites();
  InitCurrentGoalHighlight();
  ResetTime();
  ResetResultSprites();
  ClearSaveFlagForGoalSprites();
  ResetGoalAttempt();
  InitAnimatedPatterns();
  StartingMatch();
  PlaySample1IfNotTraining();
  if (playGame != 0) {
    PlayPenaltySample();
    sfxQueueWriteIdx = 500;
    if (g_trainingGame == 0) {
      showFansCounter = 100;
    }
  }
  return;
}


// --- ConvertColorsAndTextSprites @ 0010a78e ---

/* Loads proper team sprite files and converts colors of various sprites.
   Makes sprites from names and numbers of players, which will be shown
   in the upper left corner during the game.
   
   in:
        A5 -> team1 (game)
        A6 -> team2 (game) */

char __usercall ConvertColorsAndTextSprites(TeamGame *team1,TeamGame *team2)

{
  short sVar1;
  ushort uVar3;
  uint uVar2;
  byte bVar4;
  short *psVar5;
  ushort *puVar7;
  short *psVar6;
  ushort *puVar8;
  
  team1Filename = *(dword *)((int)&teamFilenamesTable + (int)(short)(team1->prShirtType << 2));
  team2Filename = *(dword *)((int)&teamFilenamesTable + (int)(short)(team2->prShirtType << 2));
  ProcessImageCommandStream();
  CopyAdvertisementsData();
  MakeSpritesFromPlayerNames(team1,team2);
  bigNumbersColorConversionTable[0xb] = 2;
  bigNumbersColorConversionTable[10] = 2;
  ConvertSpriteColors(SPR_EDIT_TEAMS_SOCKS,bigNumbersColorConversionTable);
  uVar3 = SPR_BIG_0;
  do {
    ConvertSpriteColors(uVar3,bigNumbersColorConversionTable);
    uVar3 = uVar3 + 1;
  } while (uVar3 != SPR_SCROLL_ARROW_UP);
  uVar3 = SPR_SCROLL_ARROW_UP;
  do {
    ConvertSpriteColors(uVar3,bigNumbersColorConversionTable);
    uVar3 = uVar3 + 1;
  } while (uVar3 != SPR_EDIT_TEAMS_PRIMARY_SHIRT);
  HWSprite_LoadFromSpriteGraphics();
  Text2Sprite(0,0,SPR_EDIT_TEAMS_PRIMARY_SHIRT,(char *)team1->teamName,&bigCharsTable);
  team1NameLength = 0;
  HWSprite_LoadFromSpriteGraphics();
  Text2Sprite(0,0,SPR_EDIT_TEAMS_SHORTS,(char *)team2->teamName,&bigCharsTable);
  team2NameLength = 0;
  colorTableReserves[0xf] = team1->prShirtCol;
  colorTableReserves[0xb] = team1->prStripesCol;
  if (colorTableReserves[0xb] == team1->prShirtCol) {
    colorTableReserves[0xb] = team1->prShortsCol;
  }
  uVar3 = 0x4ac;
  do {
    ConvertSpriteColors(uVar3,colorTableReserves);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x4b8);
  colorTableReserves[0xf] = team2->prShirtCol;
  colorTableReserves[0xb] = team2->prStripesCol;
  if (colorTableReserves[0xb] == team2->prShirtCol) {
    colorTableReserves[0xb] = team2->prShortsCol;
  }
  uVar3 = 0x4b8;
  do {
    ConvertSpriteColors(uVar3,colorTableReserves);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x4c4);
  DetermineGoalieFaces(team1,team1GoalieFaceToPosition,&team1GoalieFaces);
  DetermineGoalieFaces(team2,team2GoalieFaceToPosition,&byte_10AE4A);
  uVar3 = 0x400;
  if (useIndividualPlayerSkinColor == 0) {
    CountFaces(team1);
    bVar4 = facesFrequency[0];
    if (facesFrequency[0] < facesFrequency[1]) {
      bVar4 = facesFrequency[1];
    }
    team1MostFrequentFace = (word)(facesFrequency[0] < facesFrequency[1]);
    if (bVar4 < facesFrequency[2]) {
      team1MostFrequentFace = 2;
    }
    psVar5 = *(short **)
              ((int)skinAndHairColorConversionTable + (int)(short)(team1MostFrequentFace << 2));
    while( true ) {
      psVar6 = psVar5 + 1;
      sVar1 = *psVar5;
      if (sVar1 < 0) break;
      psVar5 = psVar5 + 2;
      *(short *)((int)team1PlayersColorTable + (int)(short)(sVar1 << 1)) = *psVar6;
    }
    CountFaces(team2);
    bVar4 = facesFrequency[0];
    if (facesFrequency[0] < facesFrequency[1]) {
      bVar4 = facesFrequency[1];
    }
    team2MostFrequentFace = (word)(facesFrequency[0] < facesFrequency[1]);
    if (bVar4 < facesFrequency[2]) {
      team2MostFrequentFace = 2;
    }
    puVar7 = *(ushort **)
              ((int)skinAndHairColorConversionTable + (int)(short)(team2MostFrequentFace << 2));
    while( true ) {
      puVar8 = puVar7 + 1;
      uVar3 = *puVar7;
      if ((short)uVar3 < 0) break;
      puVar7 = puVar7 + 2;
      *(ushort *)((int)team2PlayersColorTable + (int)(short)(uVar3 << 1)) = *puVar8;
    }
  }
  team1PlayersColorTable[0xb] = team1->prShirtCol;
  team1PlayersColorTable[10] = team1->prStripesCol;
  if (team1->prShirtType == 2) {
    team1PlayersColorTable[0xb] = team1->prStripesCol;
    team1PlayersColorTable[10] = team1->prShirtCol;
  }
  team1PlayersColorTable[0xe] = team1->prShortsCol;
  team1PlayersColorTable[0xf] = team1->prSocksCol;
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor(uVar3 & 0xff00,team1PlayersColorTable);
  }
  uVar2 = 0xe3;
  do {
    ConvertSpriteColors((ushort)uVar2,team1PlayersColorTable);
    uVar3 = (ushort)uVar2 + 1;
    uVar2 = (uint)uVar3;
  } while (uVar3 != 0x148);
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor(0x101,team1PlayersColorTable);
    uVar2 = 0x148;
    do {
      ConvertSpriteColors((ushort)uVar2,team1PlayersColorTable);
      uVar3 = (ushort)uVar2 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 != 0x1ad);
  }
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor((ushort)CONCAT31((int3)(uVar2 >> 8),2),team1PlayersColorTable);
    uVar2 = 0x1ad;
    do {
      ConvertSpriteColors((ushort)uVar2,team1PlayersColorTable);
      uVar3 = (ushort)uVar2 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 != 0x212);
  }
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor
              ((ushort)CONCAT31((int3)(uVar2 >> 8),team1GoalieFaces),team1PlayersColorTable);
  }
  uVar3 = 0x341;
  do {
    ConvertSpriteColors(uVar3,team1PlayersColorTable);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x37b);
  uVar3 = 0x37b;
  if ((useIndividualPlayerSkinColor != 0) &&
     (uVar3 = CONCAT11(3,team2GoalieFaces), -1 < (char)team2GoalieFaces)) {
    ConvertColorTableToSkinColor(uVar3,team1PlayersColorTable);
    uVar3 = 0x37b;
    do {
      ConvertSpriteColors(uVar3,team1PlayersColorTable);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x3b5);
  }
  team2PlayersColorTable[0xb] = team2->prShirtCol;
  team2PlayersColorTable[10] = team2->prStripesCol;
  if (team2->prShirtType == 2) {
    team2PlayersColorTable[0xb] = team2->prStripesCol;
    team2PlayersColorTable[10] = team2->prShirtCol;
  }
  team2PlayersColorTable[0xe] = team2->prShortsCol;
  team2PlayersColorTable[0xf] = team2->prSocksCol;
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor(uVar3 & 0xff00,team2PlayersColorTable);
  }
  uVar2 = 0x212;
  do {
    ConvertSpriteColors((ushort)uVar2,team2PlayersColorTable);
    uVar3 = (ushort)uVar2 + 1;
    uVar2 = (uint)uVar3;
  } while (uVar3 != 0x277);
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor(0x201,team2PlayersColorTable);
    uVar2 = 0x277;
    do {
      ConvertSpriteColors((ushort)uVar2,team2PlayersColorTable);
      uVar3 = (ushort)uVar2 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 != 0x2dc);
  }
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor((ushort)CONCAT31((int3)(uVar2 >> 8),2),team2PlayersColorTable);
    uVar2 = 0x2dc;
    do {
      ConvertSpriteColors((ushort)uVar2,team2PlayersColorTable);
      uVar3 = (ushort)uVar2 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar3 != 0x341);
  }
  if (useIndividualPlayerSkinColor != 0) {
    ConvertColorTableToSkinColor
              ((ushort)CONCAT31((int3)(uVar2 >> 8),byte_10AE4A),team2PlayersColorTable);
  }
  uVar3 = 0x3b5;
  do {
    ConvertSpriteColors(uVar3,team2PlayersColorTable);
    uVar3 = uVar3 + 1;
  } while (uVar3 != 0x3ef);
  uVar3 = 0x3ef;
  if ((useIndividualPlayerSkinColor != 0) &&
     (uVar3 = CONCAT11(3,byte_10AE4B), -1 < (char)byte_10AE4B)) {
    ConvertColorTableToSkinColor(uVar3,team2PlayersColorTable);
    uVar3 = 0x3ef;
    do {
      ConvertSpriteColors(uVar3,team2PlayersColorTable);
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x429);
  }
  return (char)uVar3;
}


// --- CountFaces @ 0010ac58 ---

/* in:
        A1 -> team (game)
   out:
        face frequencies in facesFrequency */

void __usercall CountFaces(TeamGame *team)

{
  short sVar1;
  
  facesFrequency[0] = 0;
  facesFrequency[1] = 0;
  facesFrequency[2] = 0;
  sVar1 = 0xf;
  do {
    facesFrequency[(short)(char)team->unk4[5]] = facesFrequency[(short)(char)team->unk4[5]] + 1;
    team = (TeamGame *)(team->unk4 + 0x13);
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}


// --- ConvertColorTableToSkinColor @ 0010ac82 ---

/* in:
        D0 -  skin/hair color
        A1 -> dest color table */

void __usercall ConvertColorTableToSkinColor(ushort color,ushort *destTable)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  
  psVar2 = *(short **)((int)skinAndHairColorConversionTable + (int)(short)((short)(char)color << 2))
  ;
  while( true ) {
    psVar3 = psVar2 + 1;
    sVar1 = *psVar2;
    if (sVar1 < 0) break;
    psVar2 = psVar2 + 2;
    *(short *)((int)destTable + (int)(short)(sVar1 << 1)) = *psVar3;
  }
  return;
}


// --- DetermineGoalieFaces @ 0010ac9e ---

/* in:
        A0 -> team (game)
        A1 -> goalkeeper face to index table
        A2 -> goalkeeper face indices (for main and reserve, if present)
   
   Set up color conversion table for the goalkeeper, by assigning face color for main and reserve.
   Algorithm will go through players in team, and set face colors of goalkeepers,
   or first available face from a player if goalkeeper not found (not on the team for this game). */

char __usercall DetermineGoalieFaces(TeamGame *team,uchar *gkFaceToIndex,uchar *gkFaceIndices)

{
  byte bVar1;
  ushort unaff_D0w;
  short sVar2;
  short sVar3;
  
  *gkFaceToIndex = '\0';
  gkFaceToIndex[1] = '\0';
  gkFaceToIndex[2] = '\0';
  *gkFaceIndices = 0xff;
  gkFaceIndices[1] = 0xff;
  sVar2 = 0;
  sVar3 = 0xf;
  do {
    if (-1 < (char)team->unk4[4]) {
      bVar1 = team->unk4[5];
      unaff_D0w = (ushort)bVar1;
      if ((bVar1 != *gkFaceIndices) && ((team->unk4[4] == 0 || (bVar1 != gkFaceIndices[1])))) {
        unaff_D0w = (ushort)(char)bVar1;
        gkFaceToIndex[(short)unaff_D0w] = (uchar)sVar2;
        gkFaceIndices[sVar2] = bVar1;
        if (((sVar3 == 0xf) || (team->unk4[4] == 0)) && (sVar2 = sVar2 + 1, sVar2 == 2)) {
          return bVar1;
        }
      }
    }
    team = (TeamGame *)(team->unk4 + 0x13);
    sVar3 = sVar3 + -1;
    if (sVar3 == -1) {
      return (char)unaff_D0w;
    }
  } while( true );
}


// --- InitializePlayerSpriteFrameIndices @ 0010ae4c ---

/* Initialize player sprite frame indices. They are decided based on their skin color.
   There are three sets of player sprites based on skin color (team1: 341-441, 442-542, 543-643,
   team2: 745-845, 846-946, 947-1004), and two sets of goalkeeper sprites (team1: main: 940-1004,
   reserve: 1005-1062, team2: main: 1063-1120, reserve: 1121-1178).
   Goalkeeper skin color is already applied. */

void __usercall InitializePlayerSpriteFrameIndices(void)

{
  Sprite *pSVar1;
  short sVar2;
  word wVar3;
  short sVar4;
  Sprite **ppSVar5;
  Sprite **ppSVar6;
  TeamGame *pTVar7;
  TeamGame *pTVar8;
  
  sVar4 = 10;
  ppSVar5 = team1SpritesTable;
  ppSVar6 = team2SpritesTable;
  pTVar7 = topTeamPtr;
  pTVar8 = bottomTeamPtr;
  do {
    pSVar1 = *ppSVar5;
    pSVar1->frameOffset = 0;
    if (useIndividualPlayerSkinColor != 0) {
      if (sVar4 == 10) {
        sVar2 = (short)(char)team1GoalieFaceToPosition[(short)(char)pTVar7->unk4[5]];
        if (sVar2 == -1) {
          sVar2 = 0;
        }
        wVar3 = sVar2 * 0x3a;
      }
      else {
        wVar3 = (char)pTVar7->unk4[5] * 0x65;
      }
      pSVar1->frameOffset = wVar3;
    }
    pSVar1 = *ppSVar6;
    pSVar1->frameOffset = 0;
    if (useIndividualPlayerSkinColor != 0) {
      if (sVar4 == 10) {
        sVar2 = (short)(char)team2GoalieFaceToPosition[(short)(char)pTVar8->unk4[5]];
        if (sVar2 == -1) {
          sVar2 = 0;
        }
        wVar3 = sVar2 * 0x3a;
      }
      else {
        wVar3 = (char)pTVar8->unk4[5] * 0x65;
      }
      pSVar1->frameOffset = wVar3;
    }
    pTVar7 = (TeamGame *)(pTVar7->unk4 + 0x13);
    pTVar8 = (TeamGame *)(pTVar8->unk4 + 0x13);
    sVar4 = sVar4 + -1;
    ppSVar5 = ppSVar5 + 1;
    ppSVar6 = ppSVar6 + 1;
  } while (sVar4 != -1);
  return;
}


// --- ClearSaveFlagForGoalSprites @ 0010b346 ---

void __usercall ClearSaveFlagForGoalSprites(void)

{
  goal1TopSprite.saveSprite = 1;
  goal2BottomSprite.saveSprite = 1;
  return;
}


// --- ResetTime @ 0010b35a ---

void __usercall ResetTime(void)

{
  gameSeconds = 0;
  gameTime = 0;
  secondsSwitchAccumulator = 0;
  copyTimeSprite = 1;
  currentTimeSprite.imageIndex = SPR_LITTLE_PLAYER_GENERIC;
  currentTimeSprite.visible = 0;
  return;
}


// --- ResetResultSprites @ 0010b830 ---

void __usercall ResetResultSprites(void)

{
  short sVar1;
  Sprite *pSVar2;
  Sprite *pSVar3;
  code *pcVar4;
  undefined2 *puVar5;
  word *pwVar6;
  word *pwVar7;
  
  resultOnHalftimeSprite.visible = 0;
  resultAfterTheGameSprite.visible = 0;
  team1NameSprite.imageIndex = 0xc1;
  team2NameSprite.imageIndex = 0xc2;
  gridUpperRowLeftSprite.visible = 0;
  gridUpperRowRightSprite.visible = 0;
  gridMiddleRowLeftSprite.visible = 0;
  gridMiddleRowRightSprite.visible = 0;
  gridBottomRowLeftSprite.visible = 0;
  gridBottomRowRightSprite.visible = 0;
  team2NameSprite.visible = 0;
  team1GoalsDigit2Sprite.visible = 0;
  team1GoalsDigit1Sprite.visible = 0;
  team1TotalGoalsDigit2Sprite.visible = 0;
  team1TotalGoalsDigit1Sprite.visible = 0;
  team2GoalsDigit2Sprite.visible = 0;
  team2GoalsDigit1Sprite.visible = 0;
  team2TotalGoalsDigit2Sprite.visible = 0;
  team2TotalGoalsDigit1Sprite.visible = 0;
  team1NameSprite.visible = 0;
  dashSprite.visible = 0;
  pSVar2 = &team1Scorer1Sprite;
  pSVar3 = &team2Scorer1Sprite;
  pcVar4 = ShowLoaderIntroSequence;
  puVar5 = (undefined2 *)0x10fe26;
  sVar1 = 7;
  pwVar6 = team1ScorerSpritesWidths;
  pwVar7 = team2ScorerSpritesWidths;
  do {
    pSVar2->visible = 0;
    pSVar3->visible = 0;
    *(undefined2 *)pcVar4 = 0;
    *puVar5 = 0;
    *pwVar6 = 0;
    *pwVar7 = 0;
    pSVar2 = pSVar2 + 1;
    pSVar3 = pSVar3 + 1;
    pcVar4 = pcVar4 + 0x42;
    puVar5 = puVar5 + 0x21;
    sVar1 = sVar1 + -1;
    pwVar6 = pwVar6 + 1;
    pwVar7 = pwVar7 + 1;
  } while (sVar1 != -1);
  InitDisplaySprites();
  return;
}


// --- SetPitchTypeAndNumber @ 0010c03c ---

void __usercall SetPitchTypeAndNumber(void)

{
  ushort uVar2;
  uint uVar1;
  short sVar3;
  word wVar4;
  uchar *puVar5;
  
  numScenesInHilFile = 0;
  if (gamePitchTypeOrSeason == 0) {
    wVar4 = gamePitchType;
    if (-1 < (short)gamePitchType) goto pitch_type_selected;
    puVar5 = pitchTypeProbabilities;
  }
  else {
    puVar5 = pitchTypeSeasonalProbabilities + (uint)gameSeason * 7;
  }
  uVar2 = Rand();
  uVar1 = ((uint)uVar2 * 100) / 0x100;
  wVar4 = 0;
  for (; (char)*puVar5 <= (char)uVar1; puVar5 = puVar5 + 1) {
    uVar1 = (uint)(byte)((char)uVar1 - *puVar5);
    wVar4 = wVar4 + 1;
  }
pitch_type_selected:
  if (plg_D0_param == 0) {
    uVar2 = topTeamInGame.prShortsCol ^ topTeamInGame.prShirtCol ^ topTeamInGame.teamName._0_2_;
  }
  else {
    uVar2 = Rand();
  }
  sVar3 = (ushort)pitchNumberProbabilities[(short)(uVar2 & 0xf)] << 8;
  if (g_trainingGame != 0) {
    sVar3 = 0x500;
  }
  pitchNumberAndType = sVar3 + wVar4;
  return;
}


// --- InitCurrentGoalHighlight @ 0010c2f8 ---

void __usercall InitCurrentGoalHighlight(void)

{
  short sVar1;
  undefined4 *puVar2;
  
  sVar1 = 0x128d;
  puVar2 = (undefined4 *)goalBasePtr;
  do {
    *puVar2 = 0;
    sVar1 = sVar1 + -1;
    puVar2 = puVar2 + 1;
  } while (sVar1 != -1);
  currentHilPtr = goalBasePtr;
  replayState = 0;
  throwInDeadVar = 1;
  return;
}


// --- StartMatchSequence @ 0010e8be ---

void __usercall StartMatchSequence(void *topTeam,void *bottomTeam)

{
  bool bVar1;
  uint uVar2;
  word wVar3;
  short sVar4;
  short sVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined2 y;
  short sVar8;
  undefined2 unaff_D4w;
  int unaff_A0;
  TeamStatisticsData *pTVar9;
  int unaff_A2;
  
  LoadSfxResources();
  playGame = 1;
  EnsureSfxLoadedAndStart();
  SetPitchTypeAndNumber();
  InitGameSaveTeams(topTeam,bottomTeam);
  do {
    gameCanceled = 0;
    instantReplayFlag = 0;
    saveHighlightScene = 0;
    fadeAndSaveHighlightScene = 0;
    spaceReplayTimer = 0;
    if (g_trainingGame == 0) {
      Rand();
    }
    ReplayUpdateCameraAndSwapBuffers();
    UpdatePlanePtrsAndBlitParams();
    nullsub_2();
    ReadTimerDelta();
    do {
      GetKey();
    } while (currentKey != 0);
GameLoop_wait_for_vblank_sync:
    DMACON = 0x8400;
    uVar6 = DMACONR._0_1_;
    do {
      bVar7 = DMACONR._0_1_;
    } while ((bVar7 & 0x40) != 0);
    DMACON = 0x400;
    uVar2 = g_irqCookieObfuscated ^ 0xcfd1f9bd;
    if (uVar2 != 0x165a) {
      *(undefined1 *)(unaff_A2 + -0x80 + (short)unaff_D4w * 4) =
           *(undefined1 *)&((TeamGeneralInfo *)(unaff_A0 + -1))->opponentsTeam;
      if ((((0 < (int)uVar2) && ((TeamGeneralInfo *)(unaff_A0 + -1) == lastTeamPlayed)) &&
          (*(short *)(unaff_A0 + 0x27) == 0)) && ((0xef < strikeDestX && (strikeDestX < 0x1b0)))) {
        if ((0x12e < strikeDestX) && (strikeDestX < 0x170)) {
          pTVar9 = topTeamData.teamStatsPtr;
          if (ballSprite.y.s.i < 0x1c2) {
            pTVar9 = bottomTeamData.teamStatsPtr;
          }
          pTVar9->onTarget = pTVar9->onTarget + 1;
        }
        pTVar9 = topTeamData.teamStatsPtr;
        if (ballSprite.y.s.i < 0x1c2) {
          pTVar9 = bottomTeamData.teamStatsPtr;
        }
        pTVar9->goalAttempts = pTVar9->goalAttempts + 1;
        isGoalAttempt = 1;
      }
      if (showStats != 0) {
        showStats = 0;
        showingUserStats = 1;
      }
      if (statsTimer != 0) {
        if ((short)statsTimer < 0) {
UpdateAndDrawStatistics_turn_off_statistics:
          StatisticsOff();
          return;
        }
        if (statsTimer == 32000) {
          statsTimer = 30000;
          overlayActiveFlag = 1;
        }
        else {
          wVar3 = statsTimer - lastFrameTicks;
          bVar1 = (short)statsTimer < (short)lastFrameTicks;
          statsTimer = wVar3;
          if (wVar3 == 0 || bVar1) goto UpdateAndDrawStatistics_turn_off_statistics;
        }
        DrawStatistics();
      }
      return;
    }
    waitingInterrupt = 1;
    nullsub_5();
    nullsub_4();
    do {
      sVar8 = waitingInterrupt;
      sVar8 = waitingInterrupt;
    } while (sVar8 != 0);
    ReadTimerDelta();
    while (paused != 0) {
      sVar8 = 0;
      do {
        sVar4 = currentTick;
        do {
          sVar5 = currentTick;
        } while (sVar4 == sVar5);
        sVar8 = sVar8 + -1;
      } while (sVar8 != -1);
      GetKey();
      MainKeysCheck(currentKey);
      nullsub_10();
      PlayEnqueuedSamples();
      nullsub_5();
      nullsub_4();
    }
    if (showingUserStats != 0) {
      KeepStatisticsOnScreen();
    }
    frameCount = frameCount + 1;
    if (spaceReplayTimer != 0) {
      spaceReplayTimer = spaceReplayTimer - 1;
    }
    ProcessSpriteBlitQueue();
    if (subsWriteOnly != 0) {
      BlitterCopyPanelToScreen();
      subsWriteOnly = subsWriteOnly - 1;
    }
    GetKey();
    MainKeysCheck(currentKey);
    nullsub_10();
    nullsub_9();
    if (playGame != 0) {
      if ((fadeState == 0) && (fadeInitFlag == 999)) {
        fadeInitFlag = 0xffff;
      }
      if (goIntoHighlightsLoop == 0) {
        if (replayState == 0) {
          MoveCamera();
          ScrollToCurrent();
          y = g_cameraY.s.i;
          unaff_D4w = g_cameraX.s.i;
          SaveCoordinatesForHighlights(-1,g_cameraX.s.i,g_cameraY.s.i);
          PlayEnqueuedSamples();
          UpdateTime();
          nullsub_8();
          UpdateAndApplyTeamControls();
          UpdateBall();
          MovePlayers();
          UpdateReferee();
          InjuryUpdateTickGuard();
          UpdateCornerFlagSprite();
          SpinBig_S_Sprite();
          ManageAdvertisements();
          DoGoalkeeperSprites();
          UpdateControlledPlayerNumbers();
          MarkPlayer();
          SetCurrentPlayerName();
          UpdateBookedPlayerNumberSprite();
          ShowResult();
          DrawAnimatedPatterns();
          DrawSprites();
          DrawBenchAndSubsMenu();
          BenchCheckControls();
          UpdateAndDrawStatistics();
          SaveCoordinatesForHighlights(-2,unaff_D4w,y);
          if (saveHighlightScene != 0) {
            SaveHighlightScene();
            saveHighlightScene = 0;
          }
          if (fadeAndSaveHighlightScene != 0) {
            FadeAndSaveHighlightScene();
            fadeAndSaveHighlightScene = 0;
          }
          if (instantReplayFlag != 0) {
            HandleInstantReplayStateSwitch();
            instantReplayFlag = 0;
            goalCameraMode = 0;
          }
        }
        else {
          FadeOutToBlack();
          PlayInstantReplayLoop();
        }
      }
      else {
        FadeOutToBlack();
        PlayHighlightsLoop();
      }
      goto GameLoop_wait_for_vblank_sync;
    }
    FadeOutToBlack();
    nullsub_3();
    SetHilFileHeader();
    AudioFadeCrowdDownThenPulseMusic();
    ClearAudioActiveFlag();
    if (((isGameFriendly == 0) || (g_trainingGame != 0)) ||
       (ReplayExitMenuAfterFriendly(), replaySelected == 0)) {
      StopAudioAndClearFlags();
      return;
    }
    team1NumAllowedInjuries = 4;
    team2NumAllowedInjuries = 4;
    playGame = 1;
    EnsureSfxLoadedAndStart();
    SetPitchTypeAndNumber();
    InitGameRestoreTeams(topTeam,bottomTeam);
  } while( true );
}


// --- ReadTimerDelta @ 0010f036 ---

/* Read timer difference and update time of last drawn frame. */

ushort __usercall ReadTimerDelta(void)

{
  lastFrameTicks = currentGameTick - lastGameTick;
  lastGameTick = currentGameTick;
  return lastFrameTicks;
}


// --- SaveRand2State @ 0010f1fa ---

void __usercall SaveRand2State(void)

{
  byte *pbVar1;
  
  *savedRandStatePtr = seed2;
  pbVar1 = savedRandStatePtr + 2;
  savedRandStatePtr[1] = randXorIndex2;
  savedRandStatePtr = savedRandStatePtr + 3;
  *pbVar1 = randXorKey2;
  if (byte_10F2EA + 0xe < savedRandStatePtr) {
    panicReasonCode = 0x9793;
    PanicHaltLoop();
  }
  return;
}


// --- RestoreRand2State @ 0010f234 ---

void __usercall RestoreRand2State(void)

{
  randXorKey2 = savedRandStatePtr[-1];
  randXorIndex2 = savedRandStatePtr[-2];
  seed2 = savedRandStatePtr[-3];
  savedRandStatePtr = savedRandStatePtr + -3;
  return;
}


// --- Randomize2 @ 0010f258 ---

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __usercall Randomize2(ushort seed)

{
  _seed2 = randomSeed ^ seed;
  randXorKey2 = kRandomTable[(short)((randomSeed ^ seed) & 0xff)];
  return;
}


// --- Rand2 @ 0010f2a0 ---

/* out:
       D0 - random number 0..255 */

ushort __usercall Rand2(void)

{
  ushort uVar1;
  
  uVar1 = (ushort)seed2;
  if (seed2 == 0) {
    randXorIndex2 = randXorIndex2 + 1;
    randXorKey2 = kRandomTable[(short)(ushort)randXorIndex2];
  }
  seed2 = seed2 + 1;
  return (ushort)(byte)(randXorKey2 ^ kRandomTable[(short)uVar1]);
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


// --- ResetGoalAttempt @ 0011005e ---

void __usercall ResetGoalAttempt(void)

{
  isGoalAttempt = 0;
  return;
}


// --- InitTeamsData @ 001119da ---

void __usercall InitTeamsData(void)

{
  word wVar1;
  word wVar2;
  word wVar3;
  word wVar4;
  short sVar5;
  TeamGeneralInfo *pTVar6;
  TeamGeneralInfo *pTVar7;
  Sprite **ppSVar8;
  TeamGame *pTVar9;
  TeamStatisticsData *pTVar10;
  word *pwVar11;
  
  currentScorer = (Sprite *)0x0;
  lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
  goalScored = 0;
  runSlower = 0;
  whichCard = 0;
  bookedPlayer = (Sprite *)0x0;
  playerHadBall = 0;
  lastKeeperPlayed = (Sprite *)0x0;
  lastTeamPlayed = (TeamGeneralInfo *)0x0;
  lastPlayerPlayed = (Sprite *)0x0;
  penalty = 0;
  goalCameraMode = 0;
  goalOut = 0;
  gameNotInProgressCounterWriteOnly = 0;
  fireBlocked = 0;
  lastTeamPlayedBeforeBreak = (TeamGeneralInfo *)0x0;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  stoppageEventTimer = 0;
  inGameCounter = 0;
  gameStatePl = ST_GAME_IN_PROGRESS;
  gameState = ST_GAME_IN_PROGRESS;
  breakState = 0;
  breakCameraMode = 0xffff;
  sVar5 = 1;
  pTVar6 = &topTeamData;
  pTVar7 = &bottomTeamData;
  ppSVar8 = team1SpritesTable;
  pwVar11 = &pl1Tactics;
  wVar3 = 1;
  wVar1 = pl1Coach;
  wVar2 = topTeamCoachNo;
  wVar4 = topTeamPlayerNo;
  pTVar9 = topTeamPtr;
  pTVar10 = &team1StatsData;
  if (teamPlayingUp != 1) {
    pTVar6 = &bottomTeamData;
    pTVar7 = &topTeamData;
    pTVar10 = &team1StatsData;
  }
  do {
    pTVar6->opponentsTeam = pTVar7;
    pTVar6->inGameTeamPtr = pTVar9;
    pTVar6->teamStatsPtr = pTVar10;
    pTVar6->playerNumber = wVar4;
    pTVar6->playerCoachNumber = wVar2;
    pTVar6->isPlCoach = wVar1;
    pTVar6->spritesTable = ppSVar8;
    pTVar6->teamNumber = wVar3;
    pTVar6->tactics = *pwVar11;
    pTVar6->goalkeeperPlaying = 0;
    pTVar6->resetControls = 0;
    pTVar6->updatePlayerIndex = 10;
    pTVar6->controlledPlayer = (Sprite *)0x0;
    pTVar6->passToPlayerPtr = (Sprite *)0x0;
    pTVar6->passingKickingPlayer = (Sprite *)0x0;
    pTVar6->playerHasBall = 0;
    pTVar6->goalkeeperDivingRight = 0;
    pTVar6->goalkeeperDivingLeft = 0;
    pTVar6->ballOutOfPlayOrKeeper = 0;
    pTVar6->goaliePlayingOrOut = 0;
    pTVar6->passingBall = 0;
    pTVar6->passingToPlayer = 0;
    pTVar6->playerSwitchTimer = 0;
    pTVar6->ballInPlay = 0;
    pTVar6->ballOutOfPlay = 0;
    pTVar6->passKickTimer = 0;
    pTVar6->ballCanBeControlled = 0;
    pTVar6->field_72 = 0;
    pTVar6->ballControllingPlayerDirection = 0xffff;
    pTVar6->field_74 = 0;
    pTVar6->wonTheBallTimer = 0;
    pTVar6->spinTimer = 0xffff;
    pTVar6->field_3C = 0;
    pTVar6->goalkeeperSavedCommentTimer = 0;
    pTVar6->lastHeadingTacklingPlayer = (Sprite *)0x0;
    pTVar6->field_4E = 0;
    pTVar6->headerOrTackle = 0;
    pTVar6->shooting = 0;
    pTVar6->passInProgress = 0;
    pTVar6 = &bottomTeamData;
    pTVar7 = &topTeamData;
    ppSVar8 = team2SpritesTable;
    pTVar10 = &team2StatsData;
    pwVar11 = &pl2Tactics;
    wVar3 = 2;
    if (teamPlayingUp != 1) {
      pTVar6 = &topTeamData;
      pTVar7 = &bottomTeamData;
    }
    sVar5 = sVar5 + -1;
    wVar1 = pl2Coach;
    wVar2 = bottomTeamCoachNo;
    wVar4 = bottomTeamPlayerNo;
    pTVar9 = bottomTeamPtr;
  } while (sVar5 != -1);
  return;
}


// --- StartingMatch @ 00114022 ---

void __usercall StartingMatch(void)

{
  halfNumber = 1;
  SetBallPosition(0x688,0x1c1);
  hideBall = 0;
  InitTeamsData();
  stoppageEventTimer = 100;
  gameState = ST_STARTING_GAME;
  breakCameraMode = 0xffff;
  gameStatePl = 0x65;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  cameraMoveToShowerLatch = 1;
  InitPlayersBeforeEnteringPitch();
  return;
}


// --- StopAllPlayers @ 00114658 ---

void __usercall StopAllPlayers(void)

{
  lastCameraDirection = cameraDirection;
  lastPlayerTurnFlags = playerTurnFlags;
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


// --- InitPlayersBeforeEnteringPitch @ 00114bca ---

void __usercall InitPlayersBeforeEnteringPitch(void)

{
  Sprite *player;
  ushort uVar1;
  short sVar2;
  short sVar3;
  Sprite **ppSVar4;
  Position *pPVar5;
  word *pwVar6;
  
  RemoveReferee();
  nullsub_21();
  ppSVar4 = team1SpritesTable;
  if (teamPlayingUp != 1) {
    ppSVar4 = team2SpritesTable;
  }
  pPVar5 = kTeamsStartingCoordinates;
  sVar3 = 1;
  do {
    sVar2 = 10;
    do {
      player = *ppSVar4;
      pwVar6 = &pPVar5->y;
      (player->x).s.i = pPVar5->x;
      (player->x).s.i = (player->x).s.i + 0x24f;
      pPVar5 = pPVar5 + 1;
      (player->y).s.i = *pwVar6;
      (player->y).s.i = (player->y).s.i + 0x1c1;
      uVar1 = Rand();
      (player->x).s.i = (uVar1 & 7) + (player->x).s.i;
      player->destX = (player->x).s.i;
      player->destY = (player->y).s.i;
      (player->z).s.i = 0;
      player->speed = 0;
      player->playerState = 0;
      player->playerDownTimer = 0;
      player->frameIndex = 0xffff;
      player->cycleFramesTimer = 1;
      player->imageIndex = 0xffff;
      player->direction = 0;
      player->onScreen = 1;
      if (gameState == ST_STARTING_GAME) {
        player->sentAway = 0;
        player->cards = 0;
        player->injuryLevel = 0;
      }
      SetPlayerAnimationTable(&playerNormalStandingAnimTable,player);
      sVar2 = sVar2 + -1;
      ppSVar4 = ppSVar4 + 1;
    } while (sVar2 != -1);
    ppSVar4 = team1SpritesTable;
    if (teamPlayingUp != 2) {
      ppSVar4 = team2SpritesTable;
    }
    sVar3 = sVar3 + -1;
  } while (sVar3 != -1);
  return;
}


// --- sub_11FBA2 @ 0011fba2 ---

void __usercall sub_11FBA2(void)

{
  return;
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


// --- UnpackMenu @ 0011fc88 ---

/* in:
        A1 -> ptr to buffer where the menu will be unpacked
              (usually g_currentMenu)
        A0 -> static menu for conversion
   
   Unpacks static menu in A0 to screen menu (held in g_currentMenu).
   Doesn't execute any of the menu functions, only does the unpacking. */

void __usercall UnpackMenu(Menu *dstMenu,void *staticMenu)

{
  bool bVar1;
  short sVar2;
  word *pwVar3;
  word *pwVar4;
  Menu *staticMenu_00;
  MenuEntry *pMVar5;
  MenuEntry *unaff_A4;
  MenuEntry *unaff_A5;
  
  bVar1 = false;
  if (diyLeagueScratchBuffer < dstMenu + 1) {
    panicReasonCode = 0x9091;
    PanicHaltLoop();
    panicReasonCode = 0x9092;
    PanicHaltLoop();
LAB_00120054:
    panicReasonCode = 0x9093;
    PanicHaltLoop();
    unaff_A4->background = 0;
    (unaff_A4->bg).func1 = 0;
    unaff_A4->content = 0;
    (unaff_A4->fg).func2 = 0;
    unaff_A4->isInvisible = 0;
    unaff_A4->isDisabled = 0;
    unaff_A4->leftEntry = 0xff;
    unaff_A4->rightEntry = 0xff;
    unaff_A4->upEntry = 0xff;
    unaff_A4->downEntry = 0xff;
    unaff_A4->directionLeft = 0xff;
    unaff_A4->directionRight = 0xff;
    unaff_A4->directionUp = 0xff;
    unaff_A4->directionDown = 0xff;
    unaff_A4->skipLeftEntry = 0xff;
    unaff_A4->skipRightEntry = 0xff;
    unaff_A4->skipUpEntry = 0xff;
    unaff_A4->skipDownEntry = 0xff;
    unaff_A4->onSelect = (void *)0x0;
    unaff_A4->controlMask = 0;
    unaff_A4->beforeDraw = (void *)0x0;
    unaff_A4->afterDraw = (void *)0x0;
    return;
  }
  menuX = 0;
  menuY = 0;
  unaff_A4 = &templateMenuEntry;
  InitMenuEntry(&templateMenuEntry);
                    /* WARNING: Load size is inaccurate */
  dstMenu->initFunc = *staticMenu;
  dstMenu->onReturn = *(void **)((int)staticMenu + 4);
  dstMenu->onDraw = *(void **)((int)staticMenu + 8);
  pwVar3 = (word *)((int)staticMenu + 0x10);
  dstMenu->selectedEntry = *(MenuEntry **)((int)staticMenu + 0xc);
  pMVar5 = (MenuEntry *)(dstMenu + 1);
  while (*pwVar3 != 0xfc19) {
    if (*pwVar3 == 0xfc1a) {
      pwVar4 = pwVar3 + 2;
      menuX = pwVar3[1];
      pwVar3 = pwVar3 + 3;
      menuY = *pwVar4;
    }
    else {
      if (*pwVar3 == 0xfc1b) {
        pMVar5 = &templateMenuEntry;
        pwVar3 = pwVar3 + 1;
LAB_0011fd04:
        pMVar5->background = templateMenuEntry.background;
        pMVar5->bg = templateMenuEntry.bg;
        pMVar5->content = templateMenuEntry.content;
        pMVar5->stringFlags = templateMenuEntry.stringFlags;
        pMVar5->fg = templateMenuEntry.fg;
        pMVar5->isInvisible = templateMenuEntry.isInvisible;
        pMVar5->isDisabled = templateMenuEntry.isDisabled;
        pMVar5->leftEntry = templateMenuEntry.leftEntry;
        pMVar5->rightEntry = templateMenuEntry.rightEntry;
        pMVar5->upEntry = templateMenuEntry.upEntry;
        pMVar5->downEntry = templateMenuEntry.downEntry;
        *(undefined4 *)&pMVar5->directionLeft = templateMenuEntry._12_4_;
        *(undefined4 *)&pMVar5->skipLeftEntry = templateMenuEntry._16_4_;
        pMVar5->onSelect = templateMenuEntry.onSelect;
        pMVar5->controlMask = templateMenuEntry.controlMask;
        pMVar5->beforeDraw = templateMenuEntry.beforeDraw;
        pMVar5->afterDraw = templateMenuEntry.afterDraw;
        pMVar5->alreadyDrawn = 0;
        if (*pwVar3 == 0xffff) {
          bVar1 = true;
          pwVar3 = pwVar3 + 1;
        }
        else if (*pwVar3 == 0xfffe) {
          bVar1 = false;
          pwVar3 = pwVar3 + 1;
        }
        if (bVar1) {
          pMVar5->x = menuX + *(byte *)pwVar3 + 0x18;
          pMVar5->y = menuY + (byte)*pwVar3 + 0x24;
          pMVar5->dwWidth = (ushort)*(byte *)(pwVar3 + 1);
          pwVar4 = pwVar3 + 2;
          pMVar5->dwHeight = (ushort)*(byte *)((int)pwVar3 + 3);
        }
        else {
          pMVar5->x = *pwVar3;
          pMVar5->x = pMVar5->x + 0x18;
          pMVar5->x = menuX + pMVar5->x;
          pMVar5->y = pwVar3[1];
          pMVar5->y = pMVar5->y + 0x24;
          pMVar5->y = menuY + pMVar5->y;
          pMVar5->dwWidth = pwVar3[2];
          pwVar4 = pwVar3 + 4;
          pMVar5->dwHeight = pwVar3[3];
        }
                    /* WARNING: Could not recover jumptable at 0x0011fe10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)((int)&menuTypesJumpTable + (int)(short)(*pwVar4 << 2)))();
        return;
      }
      if (*pwVar3 != 0xfc1c) goto LAB_0011fd04;
      InitMenuEntry(&templateMenuEntry);
      pwVar3 = pwVar3 + 1;
    }
  }
  dstMenu->numEntries = 0;
  staticMenu_00 = dstMenu + 1;
  sVar2 = dstMenu->numEntries - 1;
  do {
    if ((*(short *)&staticMenu_00[1].selectedEntry == ENTRY_STRING) &&
       (*(int *)&staticMenu_00[1].numEntries == -1)) {
      *(MenuEntry **)&staticMenu_00[1].numEntries = pMVar5;
      pMVar5->alreadyDrawn = 0x5354;
      pMVar5->ordinal = 0x444d;
      *(void **)&pMVar5->isInvisible = (void *)0x454e5554;
      *(void **)&pMVar5->leftEntry = (void *)0x45585400;
      pMVar5 = (MenuEntry *)&pMVar5[1].directionUp;
      if (diyLeagueScratchBuffer < pMVar5) goto LAB_00120054;
    }
    staticMenu_00 = (Menu *)&staticMenu_00[2].selectedEntry;
    sVar2 = sVar2 + -1;
    if (sVar2 == -1) {
      dstMenu->menuEndPtr = pMVar5;
      dword_9978C = (int)diyLeagueScratchBuffer - (int)pMVar5;
      dword_99788 = (int)&pMVar5[-0xb8].fg.func2 + 2;
      if (g_irqCookieObfuscated != 0xcfd1efe7) {
        pMVar5 = unaff_A5;
        UnpackMenu(&g_currentMenu,staticMenu_00);
        g_currentMenu.selectedEntry = pMVar5;
        if (g_currentMenu.onReturn != (void *)0x0) {
          (*(code *)g_currentMenu.onReturn)(&g_currentMenu);
        }
        return;
      }
      return;
    }
  } while( true );
}


// --- InitMenuEntry @ 00120062 ---

void __usercall InitMenuEntry(MenuEntry *entry)

{
  entry->background = 0;
  (entry->bg).func1 = 0;
  entry->content = 0;
  (entry->fg).func2 = 0;
  entry->isInvisible = 0;
  entry->isDisabled = 0;
  entry->leftEntry = 0xff;
  entry->rightEntry = 0xff;
  entry->upEntry = 0xff;
  entry->downEntry = 0xff;
  entry->directionLeft = 0xff;
  entry->directionRight = 0xff;
  entry->directionUp = 0xff;
  entry->directionDown = 0xff;
  entry->skipLeftEntry = 0xff;
  entry->skipRightEntry = 0xff;
  entry->skipUpEntry = 0xff;
  entry->skipDownEntry = 0xff;
  entry->onSelect = (void *)0x0;
  entry->controlMask = 0;
  entry->beforeDraw = (void *)0x0;
  entry->afterDraw = (void *)0x0;
  return;
}


// --- MenuProc @ 00120114 ---

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Draws currentMenu and loops waiting for a key.
   Refreshes keyboard/joypad variables. */

void __usercall MenuProc(void)

{
  byte bVar1;
  word wVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  MenuEntry *pMVar6;
  MenuEntry *pMVar7;
  
  ReadTimerDelta();
  if (magicValue != 0x12345678) {
    panicReasonCode = 0x9999;
    g_errorMessagePtr = 0x120130;
    PanicHaltLoop();
  }
  if (g_irqCookieObfuscated == 0xcfd1efe7) {
    if (menuStatus == 0) {
      DrawSelectedMenuItemFrame(&g_currentMenu);
      WaitForVSync();
    }
    menuCursorFrame = menuCursorFrame + 1;
    if (menuStatus != 0) {
      DrawMenu();
    }
    if (menuFade != 0) {
      FadeIn();
      menuFade = 0;
    }
    UpdateBlinkingMenuText();
    MenuCheckControls();
    pMVar7 = g_currentMenu.selectedEntry;
    controlMask = 0;
    if ((code *)(g_currentMenu.selectedEntry)->onSelect != (code *)0x0) {
      uVar4 = 0;
      if (shortFire != 0) {
        uVar4 = 0x20;
      }
      if (fire != 0) {
        uVar4 = uVar4 | 1;
      }
      if (left != 0) {
        uVar4 = uVar4 | 2;
      }
      if (right != 0) {
        uVar4 = uVar4 | 4;
      }
      if (up != 0) {
        uVar4 = uVar4 | 8;
      }
      if (down != 0) {
        uVar4 = uVar4 | 0x10;
      }
      wVar2 = menuControlsDirection;
      if (-1 < (short)menuControlsDirection) {
        wVar2 = menuControlsDirection >> 1;
        if (wVar2 == 0) {
          uVar4 = uVar4 | 0x100;
        }
        else if (wVar2 == 1) {
          uVar4 = uVar4 | 0x80;
        }
        else if (wVar2 == 2) {
          uVar4 = uVar4 | 0x200;
        }
        else {
          uVar4 = uVar4 | 0x40;
        }
      }
      if (((g_currentMenu.selectedEntry)->controlMask == 0xffff) ||
         (uVar4 = (g_currentMenu.selectedEntry)->controlMask & uVar4, uVar4 != 0)) {
        controlMask = uVar4;
        (*(code *)(g_currentMenu.selectedEntry)->onSelect)(wVar2);
      }
    }
    if ((fire == 0) && (-1 < (short)menuControlsDirection)) {
      uVar3 = (uint)*(ushort *)
                     ((int)nextEntryDirectionOffsets + (int)(short)(menuControlsDirection & 6));
      pMVar6 = pMVar7;
      while (bVar1 = (&pMVar6->leftEntry)[(short)uVar3], bVar1 != 0xff) {
        while( true ) {
          pMVar6 = CalcMenuEntryAddress((ushort)bVar1);
          if ((pMVar6->isDisabled == 0) && (pMVar6->isInvisible == 0)) {
            g_currentMenu.selectedEntry = pMVar6;
            if (pMVar7->background == NO_BACKGROUND) {
              menuStatus = 0;
              menuTextBlinkCounter = 0;
              BlitterCopyPanelToScreen2();
              DrawMenuPanelBackground();
              pMVar7 = g_menuEntries;
              sVar5 = g_currentMenu.numEntries - 1;
              do {
                pMVar7->alreadyDrawn = 0;
                pMVar7 = pMVar7 + 1;
                sVar5 = sVar5 + -1;
              } while (sVar5 != -1);
              if (g_currentMenu.onDraw != (void *)0x0) {
                (*(code *)g_currentMenu.onDraw)();
              }
              pMVar7 = g_menuEntries;
              sVar5 = g_currentMenu.numEntries - 1;
              do {
                DrawMenuItem(pMVar7);
                pMVar7 = pMVar7 + 1;
                sVar5 = sVar5 + -1;
              } while (sVar5 != -1);
              WaitForVSync();
              BlitterCopyOverlayToScreen();
              return;
            }
            CallDrawMenuItem(pMVar7);
            return;
          }
          sVar5 = (short)uVar3;
          if ((&pMVar6->directionLeft)[sVar5] == 0xff) break;
          bVar1 = (&pMVar6->skipLeftEntry)[sVar5];
          uVar3 = CONCAT31((int3)(uVar3 >> 8),(&pMVar6->directionLeft)[sVar5]);
        }
      }
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// --- UpdateBlinkingMenuText @ 001202c0 ---

void __usercall UpdateBlinkingMenuText(void)

{
  word wVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  MenuEntry *entry;
  
  menuTextBlinkCounter = menuTextBlinkCounter + 1 & 0x1f;
  sVar3 = 1;
  while( true ) {
    sVar2 = 0;
    sVar4 = g_currentMenu.numEntries - 1;
    entry = g_menuEntries;
    do {
      if ((entry->content != NO_FOREGROUND) && ((entry->stringFlags & 0x2000) != 0)) {
        if (menuTextBlinkCounter == 0) {
          DrawMenuBackWithCheck(entry);
          DrawMenuItem(entry);
          sVar2 = sVar2 + 1;
        }
        else if (menuTextBlinkCounter == 0x18) {
          wVar1 = entry->content;
          entry->content = 0;
          DrawMenuBackWithCheck(entry);
          DrawMenuItem(entry);
          sVar2 = sVar2 + 1;
          entry->content = wVar1;
        }
      }
      entry = entry + 1;
      sVar4 = sVar4 + -1;
    } while (sVar4 != -1);
    if (sVar2 == 0) break;
    WaitForVSync();
    sVar3 = sVar3 + -1;
    if (sVar3 == -1) {
      return;
    }
  }
  return;
}


// --- MenuCheckControls @ 001206ec ---

void __usercall MenuCheckControls(void)

{
  word wVar1;
  
  GetKey();
  nullsub_1();
  sub_11FBA2();
  wVar1 = lastFrameTicks;
  if (0 < (short)fireCounter) {
    fireCounter = 0;
  }
  if (player1ClearFlag == 0) {
    Player1StatusProc();
    if ((pl1FireCounter != 0) && (fireCounter = pl1FireCounter, -1 < (short)pl1FireCounter)) {
      pl1FireCounter = 0;
    }
    if (pl1Fire == 0) {
      if (g_allowShorterMenuItemsWithFrames._2_2_ != 0) {
        pl1SkipFireCounter = pl1SkipFireCounter + 1;
        pl1Fire = (byte)pl1SkipFireCounter & 1;
      }
      if (g_allowShorterMenuItemsWithFrames._0_2_ != 0) {
        pl1Fire = 1;
      }
    }
    shortFire = (word)pl1ShortFire;
    fire = (word)pl1Fire;
    left = pl1Left;
    right = pl1Right;
    up = pl1Up;
    down = pl1Down;
    menuControlsDirection = pl1Direction;
  }
  else {
    pl1Fire = 0;
    shortFire = shortFire & 0xff00;
    fire = fire & 0xff00;
    left = 0;
    right = 0;
    up = 0;
    down = 0;
    menuControlsDirection = 0xffff;
  }
  pl2Fire = 0;
  menuControlsDirection2 = menuControlsDirection;
  if ((player2ClearFlag == 0) && (twoPlayers != 0)) {
    Player2StatusProc();
    if ((pl2FireCounter != 0) && (fireCounter = pl2FireCounter, -1 < (short)pl2FireCounter)) {
      pl2FireCounter = 0;
    }
    if ((pl2Fire == 0) && (pl2SkipFireCounter != 0)) {
      pl2Fire = 1;
    }
    shortFire = CONCAT11(shortFire._0_1_,pl2ShortFire | (byte)shortFire);
    fire = CONCAT11(fire._0_1_,pl2Fire | (byte)fire);
    left = pl2Left | left;
    right = pl2Right | right;
    up = pl2Up | up;
    down = pl2Down | down;
    if ((short)pl1Direction < 0) {
      menuControlsDirection = pl2Direction;
      menuControlsDirection2 = pl2Direction;
    }
  }
  if (fireResetFlag != 0) {
    if (fire == 0) {
      fireResetFlag = 0;
    }
    else {
      fire = 0;
      shortFire = 0;
    }
  }
  if (shortFire == 0) {
    if ((fire != 0) && (longFireTime = wVar1 + longFireTime, 0x17 < longFireTime)) {
      longFireTime = 0x10;
      longFireFlag = longFireFlag + 1;
      shortFire = 1;
    }
  }
  else {
    longFireTime = 0;
    longFireFlag = 0;
  }
  if (fire == 0) {
    if (menuControlsDirection != lastControls) {
LAB_00120998:
      controlsHeldTimer = 0;
      lastControls = menuControlsDirection;
      goto LAB_001209aa;
    }
    if (0xb < (ushort)(wVar1 + controlsHeldTimer)) {
      controlsHeldTimer = 8;
      goto LAB_001209aa;
    }
  }
  else {
    if (menuControlsDirection != lastControls) goto LAB_00120998;
    if (0x17 < (ushort)(wVar1 + controlsHeldTimer)) {
      controlsHeldTimer = 0x10;
      goto LAB_001209aa;
    }
  }
  controlsHeldTimer = wVar1 + controlsHeldTimer;
  menuControlsDirection = 0xffff;
LAB_001209aa:
  wVar1 = menuControlsDirection;
  if ((((fire == 0) && ((short)menuControlsDirection < 0)) && (wVar1 = 0, currentKey != 0x10)) &&
     (((wVar1 = 2, currentKey != 0x12 && (wVar1 = 4, currentKey != 0x11)) &&
      ((wVar1 = 6, currentKey != 0x13 && (wVar1 = menuControlsDirection, currentKey == 0xd)))))) {
    shortFire = 1;
    fire = 1;
  }
  menuControlsDirection = wVar1;
  return;
}


// --- nullsub_1 @ 00120a0e ---

void __usercall nullsub_1(void)

{
  return;
}


// --- DrawMenuItemOuterFrame @ 00120a30 ---

/* in:
        D0 - color
        D1 - x
        D2 - y
        D3 - width
        D4 - height
   
   Draw rectangle on that coordinates.
   Do color conversion. */

void __usercall DrawMenuItemOuterFrame(ushort color,ushort x,ushort y,ushort width,ushort height)

{
  byte bVar1;
  byte bVar2;
  ushort y_00;
  
  bVar1 = outerFrameColorsTable[(short)(color << 1) + 1];
  bVar2 = outerFrameColorsTable[(short)(color << 1)];
  DrawMenuItemBackground((short)(char)bVar2,x,y,width,1);
  DrawMenuItemBackground((short)(char)bVar2,x,y,1,height);
  y_00 = (height + y) - 1;
  DrawMenuItemBackground((short)(char)bVar1,x,y_00,width,1);
  DrawMenuItemBackground((short)(char)bVar1,(width + x) - 1,(y_00 - height) + 1,1,height);
  return;
}


// --- DrawMenuItemInnerFrame @ 00120ab8 ---

/* in:
        D0 - color
        D1 - x
        D2 - y
        D3 - width
        D4 - height
   
   Draw rectangle on that coordinates.
   No color conversion. */

void __usercall DrawMenuItemInnerFrame(ushort color,ushort x,ushort y,ushort width,ushort height)

{
  ushort y_00;
  
  DrawMenuItemBackground(color,x,y,width,1);
  DrawMenuItemBackground(color,x,y,1,height);
  y_00 = (height + y) - 1;
  DrawMenuItemBackground(color,x,y_00,width,1);
  DrawMenuItemBackground(color,(width + x) - 1,(y_00 - height) + 1,1,height);
  return;
}


// --- DrawMenuItemBackground @ 00120b1a ---

/* in:
        D0 - color
        D1 - x
        D2 - y
        D3 - width
        D4 - height */

void __usercall DrawMenuItemBackground(ushort color,ushort x,ushort y,ushort width,ushort height)

{
  FillRectangle();
  return;
}


// --- DrawMenuItemBackgroundMasked @ 00120b32 ---

void __usercall DrawMenuItemBackgroundMasked(void)

{
  RectRowMaskedApplyScreenOffset();
  return;
}


// --- CopyWholeSprite @ 00120b66 ---

/* in:
        D0 = src sprite index
        D1 = dest sprite index */

uchar __usercall CopyWholeSprite(ushort srcSprite,ushort dstSprite)

{
  uchar uVar1;
  
  uVar1 = CopySprite(srcSprite,0,0,dstSprite);
  return uVar1;
}


// --- BlitterCopyPanelToScreen2 @ 00120b72 ---

void __usercall BlitterCopyPanelToScreen2(void)

{
  undefined1 uVar1;
  byte bVar2;
  
  DMACON = 0x8400;
  uVar1 = DMACONR._0_1_;
  do {
    bVar2 = DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff046 = 0xffff;
  DAT_00dff044 = 0xffff;
  DAT_00dff042 = 0;
  DAT_00dff040 = 0x9f0;
  DAT_00dff064 = 0;
  DAT_00dff066 = 0;
  DAT_00dff050 = frontbufferMaskBuffer;
  DAT_00dff054 = frontbufferBasePtr;
  DMACON = 0x8400;
  uVar1 = DMACONR._0_1_;
  do {
    bVar2 = DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  DMACON = 0x400;
  DAT_00dff058 = 0x16;
  return;
}


// --- Int2Ascii @ 00120bf8 ---

void __usercall Int2Ascii(ushort value,char *out)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = (char)value;
  pcVar2 = out;
  if (9 < value) {
    if (99 < value) {
      if (999 < value) {
        *out = (char)((uint)(int)(short)value / 1000);
        pcVar2 = out + 1;
        *out = *out + '0';
        value = (ushort)((uint)(int)(short)value % 1000);
      }
      *pcVar2 = (char)((uint)(int)(short)value / 100);
      out = pcVar2 + 1;
      *pcVar2 = *pcVar2 + '0';
      value = (ushort)((uint)(int)(short)value % 100);
    }
    cVar1 = (char)((uint)(int)(short)value % 10);
    *out = (char)((uint)(int)(short)value / 10);
    pcVar2 = out + 1;
    *out = *out + '0';
  }
  *pcVar2 = cVar1;
  *pcVar2 = *pcVar2 + '0';
  pcVar2[1] = '\0';
  return;
}


// --- CalcMenuEntryAddress @ 00120c4c ---

/* in:
        D0 - menu item ordinal that we're converting
   
   returns:
        D0 -  offset to menu entry
        A0 -> pointer to menu entry
   
   destroys:
        eax, ebx, edx, D0, A0
        [ebp safe] */

MenuEntry * __usercall CalcMenuEntryAddress(ushort ordinal)

{
  return g_menuEntries + ordinal;
}


// --- GetStringLength @ 00120c6e ---

uchar __usercall GetStringLength(void)

{
  uchar uVar1;
  char *unaff_A0;
  
  uVar1 = '\0';
  while (*unaff_A0 != '\0') {
    uVar1 = uVar1 + '\x01';
    unaff_A0 = unaff_A0 + 1;
  }
  return uVar1;
}


// --- StringCopy @ 00120c9e ---

/* in:
        A0 -> src
        A1 -> dest
   out:
        A1 -> ending zero
         */

char * __usercall StringCopy(char *src,char *dst)

{
  char cVar1;
  char *pcVar2;
  
  do {
    pcVar2 = dst;
    cVar1 = *src;
    *pcVar2 = cVar1;
    src = src + 1;
    dst = pcVar2 + 1;
  } while (cVar1 != '\0');
  return pcVar2;
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


// --- CallDrawMenuItem @ 00121062 ---

/* in:
        A5 - ptr to item to draw */

void __usercall CallDrawMenuItem(MenuEntry *item)

{
  DrawMenuBackWithCheck(item);
  DrawMenuItem(item);
  WaitForVSync();
  DrawMenuBackWithCheck(item);
  DrawMenuItem(item);
  WaitForVSync();
  return;
}


// --- DrawMenuItem @ 0012107e ---

/* in:
        A5 -> menu item to draw */

void __usercall DrawMenuItem(MenuEntry *item)

{
  undefined4 *puVar1;
  ushort *puVar2;
  CharTable *pCVar3;
  ushort uVar4;
  ushort height;
  ushort uVar5;
  word wVar6;
  word wVar7;
  char cVar8;
  ushort unaff_D0w;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  short sVar12;
  char *text;
  char *pcVar13;
  byte *text_00;
  
  if (item->isInvisible != 0) {
    return;
  }
  item->alreadyDrawn = 1;
  if ((item->beforeDraw != (void *)0x0) &&
     (unaff_D0w = (*(code *)item->beforeDraw)(), item->isInvisible != 0)) {
    return;
  }
  if (deadVar03 != 0) goto post_draw_callback;
  if (item->background != NO_BACKGROUND) {
    if (item->background == ENTRY_FRAME_AND_BACK_COLOR) {
      uVar4 = item->x;
      uVar9 = item->y;
      uVar10 = item->dwWidth;
      height = item->dwHeight;
      uVar5 = (item->bg).backAndFrameColor;
      unaff_D0w = uVar5 & 0xf;
      if ((uVar5 & 0xf) == 0) {
        if (forceDrawTransparentMenuItems == 0) {
          DrawMenuItemBackgroundMasked();
        }
        else {
          unaff_D0w = YELLOW_GREEN_BLACK_15;
          DrawMenuItemBackground(YELLOW_GREEN_BLACK_15,uVar4,uVar9,uVar10,height);
        }
      }
      else {
        if (height < 9) {
          DrawMenuItemBackground(uVar5 & 0xf,uVar4,uVar9,uVar10,height);
        }
        else {
          DrawMenuItemBackground(uVar5 & 0xf,uVar4,uVar9,uVar10,height);
          DrawMenuItemOuterFrame(unaff_D0w,uVar4,uVar9,uVar10,height);
        }
        unaff_D0w = ((item->bg).backAndFrameColor & 0xf0) >> 4;
        if (unaff_D0w != 0) {
          DrawMenuItemInnerFrame
                    (unaff_D0w,item->x + 1,item->y + 1,item->dwWidth - 2,item->dwHeight - 2);
        }
      }
    }
    else if (item->background == ENTRY_SPRITE1) {
      unaff_D0w = (item->bg).backAndFrameColor;
      DrawSprite16Pixels();
    }
    else {
      if (item->background != ENTRY_FUNC1) goto panic_unknown_entry_type;
      unaff_D0w = (*(code *)item->bg)();
    }
  }
  if (item->content == NO_FOREGROUND) goto post_draw_callback;
  if (item->content == ENTRY_STRING) {
    if ((item->fg).func2 == 0) goto post_draw_callback;
    text_00 = *(byte **)&(item->fg).sprite2;
  }
  else {
    if (item->content == ENTRY_SPRITE2) {
fg_sprite_draw_core:
      DrawSprite16Pixels();
      goto post_draw_callback;
    }
    if (item->content == ENTRY_STRING_TABLE) {
      puVar1 = (undefined4 *)(item->fg).func2;
      text_00 = *(byte **)((int)puVar1 +
                          (short)((*(short *)*puVar1 - *(short *)(puVar1 + 1)) * 4) + 6);
    }
    else {
      if (item->content == ENTRY_MULTI_LINE_TEXT) {
        if ((item->fg).func2 != 0) {
          pCVar3 = *(CharTable **)
                    ((int)&charTables + (int)(short)((item->stringFlags & STR_FLAGS_MASK) >> 2));
          uVar4 = item->dwWidth;
          wVar6 = item->x;
          text = (char *)(item->fg).func2 + 1;
          cVar8 = *(char *)(item->fg).func2;
          if (cVar8 != '\0') {
            sVar11 = (short)cVar8;
            sVar12 = (short)((uint)(int)(short)(item->dwHeight - pCVar3->charHeight * sVar11) /
                            (uint)(ushort)(sVar11 + 1));
            uVar9 = sVar12 + item->y;
            wVar7 = pCVar3->charHeight;
            sVar11 = sVar11 + -1;
            do {
              uVar10 = item->stringFlags & STR_COLOR_MASK;
              if (uVar10 == 0) {
                uVar10 = 2;
              }
              DrawMenuTextCentered(wVar6 + (uVar4 >> 1),uVar9,uVar10,text,pCVar3);
              uVar9 = wVar7 + sVar12 + uVar9;
              pcVar13 = text;
              do {
                text = pcVar13 + 1;
                cVar8 = *pcVar13;
                pcVar13 = text;
              } while (cVar8 != '\0');
              sVar11 = sVar11 + -1;
            } while (sVar11 != -1);
          }
        }
        goto post_draw_callback;
      }
      if (item->content != ENTRY_NUMBER) {
        if (item->content == ENTRY_FUNC2) {
          (*(code *)item->fg)();
          goto post_draw_callback;
        }
        if (item->content != ENTRY_SPRITE_COPY) {
panic_unknown_entry_type:
          panicReasonCode = 0x1209;
          PanicHaltLoop();
          sVar11 = unaff_D0w - 1;
          do {
            if (item->isInvisible != 0) {
              DrawMenuBackWithCheck(item);
            }
            item = item + 1;
            sVar11 = sVar11 + -1;
          } while (sVar11 != -1);
          return;
        }
        puVar2 = (ushort *)(item->fg).func2;
        CopyWholeSprite(*puVar2,puVar2[1]);
        ConvertSpriteColors(puVar2[1],puVar2 + 2);
        goto fg_sprite_draw_core;
      }
      Int2Ascii((item->fg).sprite2,(char *)numbersBuffer);
      text_00 = numbersBuffer;
    }
  }
  pCVar3 = *(CharTable **)
            ((int)&charTables + (int)(short)((item->stringFlags & STR_FLAGS_MASK) >> 2));
  sVar11 = item->dwHeight - pCVar3->charHeight;
  if (sVar11 != 1) {
    if (sVar11 == 3) {
      sVar11 = 2;
    }
    else {
      sVar11 = sVar11 >> 1;
    }
  }
  uVar4 = item->y + sVar11;
  if ((item->stringFlags & 0x8000) == 0) {
    if ((item->stringFlags & 0x4000) == 0) {
      uVar9 = item->stringFlags & STR_COLOR_MASK;
      if (uVar9 == 0) {
        uVar9 = 2;
      }
      DrawMenuTextCentered(item->x + (item->dwWidth >> 1),uVar4,uVar9,(char *)text_00,pCVar3);
    }
    else {
      sVar11 = item->dwWidth + item->x;
      uVar9 = sVar11 - 1;
      if (item->background != NO_BACKGROUND) {
        uVar9 = sVar11 - 3;
      }
      uVar10 = item->stringFlags & STR_COLOR_MASK;
      if (uVar10 == 0) {
        uVar10 = 2;
      }
      DrawMenuTextRightAligned(uVar9,uVar4,uVar10,(char *)text_00,pCVar3);
    }
  }
  else {
    uVar9 = item->x;
    if (item->background != NO_BACKGROUND) {
      uVar9 = uVar9 + 2;
    }
    uVar10 = item->stringFlags & STR_COLOR_MASK;
    if (uVar10 == 0) {
      uVar10 = 2;
    }
    DrawMenuText(uVar9,uVar4,uVar10,(char *)text_00,pCVar3);
  }
post_draw_callback:
  if (item->afterDraw != (void *)0x0) {
    (*(code *)item->afterDraw)(item);
  }
  return;
}


// --- DrawMenuBackWithCheck @ 0012144c ---

/* in:
        A5 -> menu entry */

void __usercall DrawMenuBackWithCheck(MenuEntry *entry)

{
  if ((entry->isInvisible != 0) && (entry->alreadyDrawn != 0)) {
    entry->alreadyDrawn = entry->alreadyDrawn << 8;
    if ((entry->dwWidth != 0) && (entry->dwHeight != 0)) {
      if (forceDrawTransparentMenuItems != 0) {
        DrawMenuItemBackground(0xf,entry->x,entry->y,entry->dwWidth,entry->dwHeight);
        return;
      }
      DrawMenuItemBackgroundMasked();
    }
  }
  return;
}


// --- DrawSelectedMenuItemFrame @ 00121498 ---

/* in:
       A6 -> menu
   
   Draws a frame around the currently selected item. */

void __usercall DrawSelectedMenuItemFrame(Menu *menu)

{
  MenuEntry *pMVar1;
  
  pMVar1 = menu->selectedEntry;
  if (pMVar1 != (MenuEntry *)0x0) {
    if ((pMVar1->dwHeight != 0) || (pMVar1->dwWidth != 0)) {
      DrawMenuItemInnerFrame
                (*(ushort *)((int)kColorTableShine + (int)(short)(menuCursorFrame & 0xe)),pMVar1->x,
                 pMVar1->y,pMVar1->dwWidth,pMVar1->dwHeight);
      return;
    }
  }
  return;
}


// --- DrawMenu @ 001214d4 ---

void __usercall DrawMenu(void)

{
  short sVar1;
  MenuEntry *pMVar2;
  
  menuStatus = 0;
  menuTextBlinkCounter = 0;
  BlitterCopyPanelToScreen2();
  DrawMenuPanelBackground();
  pMVar2 = g_menuEntries;
  sVar1 = g_currentMenu.numEntries - 1;
  do {
    pMVar2->alreadyDrawn = 0;
    pMVar2 = pMVar2 + 1;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  if (g_currentMenu.onDraw != (void *)0x0) {
    (*(code *)g_currentMenu.onDraw)();
  }
  pMVar2 = g_menuEntries;
  sVar1 = g_currentMenu.numEntries - 1;
  do {
    DrawMenuItem(pMVar2);
    pMVar2 = pMVar2 + 1;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  WaitForVSync();
  BlitterCopyOverlayToScreen();
  return;
}


// --- ShowMenu @ 0012156c ---

/* in:
        A6 -> menu to show on screen (packed form)
   
   After showing this menu, returns to previous menu. */

void __usercall ShowMenu(void *packedMenu)

{
  MenuEntry *oldSelectedEntry;
  dword oldPackedMenu;
  
  oldPackedMenu = g_currentMenuPtr;
  oldSelectedEntry = g_currentMenu.selectedEntry;
  menuStatus = 0;
  g_exitMenu = 0;
  ActivateMenu((Menu *)packedMenu);
  while (g_exitMenu == 0) {
    MenuProc();
  }
  menuStatus = 1;
  g_exitMenu = 0;
  RestorePreviousMenu(oldSelectedEntry,(void *)oldPackedMenu);
  return;
}


// --- RestorePreviousMenu @ 001215b4 ---

/* in:
        A5 -> old selected entry
        A6 -> old menu to return to */

void __usercall RestorePreviousMenu(void *oldSelectedEntry,void *oldPackedMenu)

{
  MenuEntry *pMVar1;
  
  g_currentMenuPtr = (dword)oldPackedMenu;
  pMVar1 = (MenuEntry *)oldSelectedEntry;
  UnpackMenu(&g_currentMenu,oldPackedMenu);
  g_currentMenu.selectedEntry = pMVar1;
  if (g_currentMenu.onReturn != (void *)0x0) {
    (*(code *)g_currentMenu.onReturn)(&g_currentMenu);
  }
  return;
}


// --- ActivateMenu @ 001215f6 ---

/* in:
        A6 -> menu to prepare (or activate) */

short __usercall ActivateMenu(Menu *menu)

{
  MenuEntry *pMVar1;
  
  g_currentMenuPtr = (dword)menu;
  UnpackMenu(&g_currentMenu,menu);
  pMVar1 = g_currentMenu.selectedEntry;
  if (g_currentMenu.selectedEntry < (MenuEntry *)((int)goalBase + 0x2292U)) {
    g_currentMenu.selectedEntry = CalcMenuEntryAddress((ushort)g_currentMenu.selectedEntry);
  }
  if (g_currentMenu.initFunc != (void *)0x0) {
    pMVar1 = (MenuEntry *)(*(code *)g_currentMenu.initFunc)(&g_currentMenu);
  }
  if (g_exitMenu == 0) {
    DrawMenu();
    return (short)pMVar1;
  }
  return (short)pMVar1;
}


// --- DrawMenuPanelBackground @ 0012164a ---

void __usercall DrawMenuPanelBackground(void)

{
  if (forceDrawTransparentMenuItems != 0) {
    DrawMenuItemBackground(7,0x18,0x24,0x130,200);
    return;
  }
  return;
}


// --- CalcTeamPriceRankPercentOffset @ 00121684 ---

short __usercall CalcTeamPriceRankPercentOffset(void *team,void *info)

{
  short unaff_D1w;
  ushort uVar1;
  short sVar2;
  
                    /* WARNING: Load size is inaccurate */
  if (*team == 0) {
    if (*(char *)((int)info + 4) == '\x01') {
      if (*(ushort *)((int)team + 0x2b8) < 3) {
        return 0;
      }
    }
    else if (*(ushort *)((int)team + 0x2b8) < 10) {
      return 0;
    }
                    /* WARNING: Load size is inaccurate */
    uVar1 = *info;
    FindTeamInDIY();
    uVar1 = GetMoreExpensiveTeamsCount(uVar1,(DIY_Competition *)team);
    sVar2 = *(short *)((int)team + 0x32) + -1;
    if (sVar2 != 0) {
      sVar2 = (short)(((short)(uVar1 - unaff_D1w) * 100) / (int)sVar2);
      if (0x32 < sVar2) {
        sVar2 = 0x32;
      }
      if (sVar2 < -0x32) {
        sVar2 = -0x32;
      }
      return sVar2 >> 1;
    }
  }
  return 0;
}


// --- CalcTeamViewOffset @ 001217e6 ---

/* in:
       A0 -> team (file)
   out:
       D1 - offsetX (-12, +12)
       D2 - offsetY (-12, +12)
       D3 - noiseIndex
       
   Might be returning some x, y offsets.. but for what
   dos: cseg_2C88E */

void __usercall CalcTeamViewOffset(TeamFile *teamFile)

{
  return;
}


// --- GetPlayerPrice @ 00124694 ---

/* in:
        A0 -> team (file)
        A1 -> player (file)
        D7 = player number (position)
   out:
        D7 - player price
        
   Calculate and return player's price. Deduce tactics from player's team. */

ushort __usercall GetPlayerPrice(TeamFile *team,PlayerFile *player,ushort position)

{
  uchar *playerPositions;
  byte bVar1;
  undefined3 uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  ushort dstBallQuadrant;
  ushort uVar8;
  uint uVar7;
  uchar *curQuadDistFactor;
  dword dVar9;
  
  bVar1 = player[2].positionAndFace;
  uVar7._0_1_ = player[2].passing;
  uVar7._1_1_ = player[2].shootingHeading;
  uVar7._2_1_ = player[2].tacklingBallControl;
  uVar7._3_1_ = player[2].speedFinishing;
  plPositions = *(int *)((int)g_tacticsTable + (int)(short)((short)(char)team->tactics << 2)) + 9;
  playerPositions = (uchar *)(plPositions + (int)(short)((position - 1) * 0x23));
  curQuadDistFactor = quadrantDistanceFactor + 0x4a6;
  totalSkillsFactorSum = 0;
  uVar6 = 0x22;
  do {
    uVar8 = 0;
    dstBallQuadrant =
         (ushort)(byte)quadrantCoordinatesToBallQuadrant
                       [(short)(ushort)playerPositions[(short)uVar6]];
    if ((((team->teamControls != TEAM_COMPUTER) && (numPlayersAtQuadrant = 1, 4 < uVar6)) &&
        (uVar6 < 0x1e)) && (uVar6 != 7)) {
      numPlayersAtQuadrant = 0;
      sVar3 = 9;
      dVar9 = plPositions;
      do {
        if (quadrantCoordinatesToBallQuadrant[(short)(ushort)*(byte *)(dVar9 + (int)(short)uVar6)]
            == quadrantCoordinatesToBallQuadrant[(short)(ushort)playerPositions[(short)uVar6]]) {
          numPlayersAtQuadrant = numPlayersAtQuadrant + 1;
        }
        dVar9 = dVar9 + 0x23;
        sVar3 = sVar3 + -1;
      } while (sVar3 != -1);
    }
    uVar5 = *(uint *)((int)priceSkillPonders + (int)(short)(dstBallQuadrant << 2));
    sVar3 = 6;
    uVar4 = (uVar7 & 0x7777777) + 0x1111111;
    do {
      if ((uVar5 & 0xf) != 0) {
        uVar8 = ((ushort)uVar4 & 0xf) * (ushort)skillValuePonders[(short)((ushort)uVar5 & 0xf)] +
                uVar8;
      }
      uVar4 = uVar4 >> 4;
      uVar5 = uVar5 >> 4;
      sVar3 = sVar3 + -1;
    } while (sVar3 != -1);
    uVar5 = ((uint)(uVar8 >> 1) *
             (uint)(ushort)(short)*(char *)((short)((ushort)(bVar1 >> 5) * 0x23) + 0x122d6b +
                                           (int)(short)dstBallQuadrant) & 0xffff) *
            (uint)(ushort)(short)(char)curQuadDistFactor[(short)dstBallQuadrant] >> 3;
    if ((team->teamControls != TEAM_COMPUTER) && ((word)(numPlayersAtQuadrant - 1) != 0)) {
      uVar5 = uVar5 / (ushort)(numPlayersAtQuadrant - 1) & 0xffff;
    }
    uVar8 = (ushort)uVar5;
    if (team->teamControls != TEAM_COMPUTER) {
      uVar8 = CountNearnessFactor(uVar6,dstBallQuadrant,uVar8,curQuadDistFactor,playerPositions,
                                  (uchar *)quadrantCoordinatesToBallQuadrant);
    }
    totalSkillsFactorSum = uVar8 + totalSkillsFactorSum;
    curQuadDistFactor = curQuadDistFactor + -0x23;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0xffff);
  uVar6 = (short)((uint)(int)(short)totalSkillsFactorSum / 0x15e) - 8;
  uVar7 = (uint)uVar6;
  if ((short)uVar6 < 0) {
    uVar7 = 0;
  }
  else if (0x31 < uVar6) {
    uVar7 = 0x31;
  }
  uVar6 = (ushort)uVar7;
  bVar1 = (char)uVar7 - player[2].price;
  uVar2 = (undefined3)(uVar7 >> 8);
  if (-1 < (short)((ushort)bVar1 << 8)) {
    uVar6 = (ushort)CONCAT31(uVar2,player[2].price +
                                   plPricesIncreaseTable[(short)CONCAT31(uVar2,bVar1)]);
  }
  return uVar6;
}


// --- CountNearnessFactor @ 00124800 ---

/* in:
        D3 -  current ball quadrant
        D6 -  destination ball quadrant
        D7 -  price currently calculated value
        A2 -> quadrant distance factor table for current ball quadrant
        A3 -> players positions (from tactics)
        A4 -> player coordinates to quadrants table
   out:
        D7 - fixed price value, with destination quadrants factor included
        
   Multiply price value with ratio of near quadrants to near destination quadrants. It's <= 1. */

ushort __usercall
CountNearnessFactor(ushort curBallQuadrant,ushort dstBallQuadrant,ushort price,
                   uchar *curQuadDistFactor,uchar *playerPositions,uchar *coordToQuad)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  uVar1 = 0x22;
  do {
    if (((uVar1 != curBallQuadrant) && (7 < curQuadDistFactor[(short)uVar1])) &&
       (uVar3 = uVar3 + 1,
       3 < quadrantDistanceFactor
           [(int)(short)(ushort)coordToQuad[(short)(ushort)playerPositions[(short)uVar1]] +
            (int)(short)(dstBallQuadrant * 0x23)])) {
      uVar2 = uVar2 + 1;
    }
    uVar1 = uVar1 - 1;
  } while (uVar1 != 0xffff);
  return (ushort)(((uint)price * (uint)uVar2) / (uint)uVar3);
}


// --- GetPlayerRandomNum @ 0012646e ---

/* in:
        A0 -> team (file struct)
   out:
        D0 - random number
   
   Get random number bound to player. */

char __usercall GetPlayerRandomNum(PlayerFile *playerFile)

{
  return kRandomTable
         [(short)(ushort)(byte)(newRandomSeedCopy ^
                               (byte)currentSeasonShowing ^
                               playerFile[2].playerName[10] ^
                               playerFile[2].playerName[0] ^
                               playerFile[2].positionAndFace & 0xfb ^ playerFile[2].price)];
}


// --- GetAveragePlayerPrice @ 001266ee ---

ushort __usercall GetAveragePlayerPrice(void *team)

{
  short sVar1;
  short sVar2;
  
  sVar1 = 0;
  sVar2 = 0xf;
  do {
    sVar1 = (ushort)*(byte *)((int)team + 0x6c) + sVar1;
    team = (void *)((int)team + 0x26);
    sVar2 = sVar2 + -1;
  } while (sVar2 != -1);
  return (ushort)((uint)(int)sVar1 / 0x10);
}


// --- ApplyTeamTactics @ 00126ad0 ---

void __usercall ApplyTeamTactics(void *playerInfos)

{
  byte bVar1;
  word wVar2;
  ushort uVar3;
  char cVar4;
  ushort playerIndex;
  PlayerFile *playerFile;
  TeamFile *teamFile;
  TeamFile *oppTeamFile;
  PlayerInfoHeader *playerInfoHeader;
  
  teamFile = gameTeam1;
  oppTeamFile = gameTeam2;
  wVar2 = pl1Tactics;
  if ((TeamGame *)playerInfos != &topTeamInGame) {
    teamFile = gameTeam2;
    oppTeamFile = gameTeam1;
    wVar2 = pl2Tactics;
  }
  bVar1 = teamFile->tactics;
  teamFile->tactics = (byte)wVar2;
  playerIndex = 0;
  playerInfoHeader = (PlayerInfoHeader *)playerInfos;
  do {
    uVar3._0_1_ = teamFile->countryNumber;
    uVar3._1_1_ = teamFile->teamOrdinal;
    playerFile = (PlayerFile *)GetPlayer(uVar3,(short)(char)playerInfoHeader->playerIndex);
    SaveRand2State();
    cVar4 = GetPlayerRandomNum(playerFile);
    uVar3 = CONCAT11(uVar3._0_1_,cVar4);
    Randomize2(gameRandValue ^ uVar3);
    AdjustPlayerSkills(playerIndex,teamFile,oppTeamFile,(TeamGame *)playerInfos,playerFile,
                       playerInfoHeader);
    RestoreRand2State();
    playerInfoHeader = (PlayerInfoHeader *)(playerInfoHeader->shortName + 7);
    playerIndex = playerIndex + 1;
  } while (playerIndex != 0xb);
  teamFile->tactics = bVar1;
  return;
}


// --- AdjustPlayerSkills @ 00126b76 ---

/* in:
        D2  - current player index
        A2 -> team (file)
        A3 -> opponent team (file)
        A4 -> team (game)
        A5 -> player (file) + header
        A6 -> player (game) + header */

char __usercall
AdjustPlayerSkills(ushort playerIndex,TeamFile *teamFile,TeamFile *oppTeamFile,TeamGame *teamGame,
                  PlayerFile *playerFile,PlayerInfoHeader *playerInfoHeader)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar5;
  byte *pbVar6;
  
  if (playerIndex == 0) {
    uVar5 = (ushort)(char)playerFile[2].price;
  }
  else {
    uVar5 = GetPlayerPrice(teamFile,playerFile,playerIndex);
  }
  uVar3 = (ushort)(char)playerFile[2].price;
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  sVar4 = (short)(((uint)uVar5 * 100) / (uint)uVar3);
  if (teamFile->teamControls == TEAM_COMPUTER) {
    sVar4 = 100;
  }
  if ((((plg_D0_param == 0) && (teamGame == &bottomTeamInGame)) &&
      ((teamFile->teamControls != TEAM_COMPUTER || (oppTeamFile->teamControls != TEAM_PLAYER_COACH))
      )) && (sVar4 = sVar4 + -0xc, sVar4 < 0)) {
    sVar4 = 0;
  }
  uVar5 = GetPlayerPricePercentageChange(sVar4,teamFile);
  uVar2._0_1_ = playerFile[2].passing;
  uVar2._1_1_ = playerFile[2].shootingHeading;
  uVar2._2_1_ = playerFile[2].tacklingBallControl;
  uVar2._3_1_ = playerFile[2].speedFinishing;
  uVar2 = (uVar2 & 0x7777777) << 4;
  sVar4 = 6;
  pbVar6 = &playerInfoHeader->passing;
  do {
    uVar2 = uVar2 << 4 | uVar2 >> 0x1c;
    uVar3 = ScaleSkill((short)(char)((byte)uVar2 & 0xf),uVar5,teamGame);
    bVar1 = (byte)uVar3;
    if (7 < uVar3) {
      bVar1 = 7;
    }
    *pbVar6 = bVar1;
    sVar4 = sVar4 + -1;
    pbVar6 = pbVar6 + 1;
  } while (sVar4 != -1);
  playerInfoHeader->goalieSkill = 0;
  bVar1 = playerFile[2].positionAndFace >> 5;
  if (bVar1 != 0) {
    return bVar1;
  }
  uVar5 = gameRandValue & 1;
  if (teamGame != &topTeamInGame) {
    uVar5 = (gameRandValue & 2) >> 1;
  }
  sVar4 = uVar5 + 1 + (short)((uint)(int)(short)(char)(playerFile[2].price + 3) / 7);
  if (oppTeamFile->teamControls == TEAM_PLAYER_COACH) {
    sVar4 = sVar4 + TEAM_COMPUTER;
  }
  else if (((teamFile->teamControls != TEAM_PLAYER_COACH) ||
           (oppTeamFile->teamControls != TEAM_COMPUTER)) &&
          ((teamFile->teamControls != TEAM_COMPUTER ||
           (oppTeamFile->teamControls != TEAM_PLAYER_COACH)))) goto set_goalie_skill;
  if (7 < sVar4) {
    sVar4 = 7;
  }
  if (sVar4 < 0) {
    sVar4 = 0;
  }
set_goalie_skill:
  playerInfoHeader->goalieSkill = (byte)sVar4;
  return (byte)sVar4;
}


// --- GetPlayerPricePercentageChange @ 00126ca4 ---

/* in:
       D0 -
       D4 - player price change factor
       A2 -> team (file)
   out:
       D4 - player price percentage of increase/decrease */

short __usercall GetPlayerPricePercentageChange(short factor,void *team)

{
  short unaff_D0w;
  short sVar1;
  ushort uVar2;
  
  if ((isGameFriendly == 0) && (*(char *)((int)team + 4) != TEAM_PLAYER_COACH)) {
    CalcTeamViewOffset((TeamFile *)team);
    sVar1 = CalcTeamPriceRankPercentOffset(&DIY_competitionStart,team);
    factor = sVar1 + unaff_D0w + factor;
  }
  uVar2 = Rand2();
  return (((ushort)(uVar2 * 0x18) >> 8) - 0xc) + factor;
}


// --- ScaleSkill @ 00126cee ---

ushort __usercall ScaleSkill(ushort skill,ushort factor,void *whichSide)

{
  uint uVar1;
  ushort uVar2;
  word wVar3;
  ushort uVar4;
  
  if ((short)factor < 0x4b) {
    factor = 0x4b;
  }
  if (0x7d < (short)factor) {
    factor = 0x7d;
  }
  wVar3 = team1AppPercent;
  if ((TeamGame *)whichSide != &topTeamInGame) {
    wVar3 = team2AppPercent;
  }
  uVar1 = (uint)skill * (((uint)factor * (uint)wVar3) / 100 & 0xffff);
  uVar4 = (ushort)(uVar1 / 100);
  uVar2 = Rand2();
  if ((ushort)(uVar2 * 100) >> 8 < (ushort)(uVar1 % 100)) {
    uVar4 = uVar4 + 1;
  }
  return uVar4;
}


// --- ExtractSurname @ 00127276 ---

char * __usercall ExtractSurname(char *name,ushort maxLenAndFlags)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  sVar4 = 0;
  if ((maxLenAndFlags & 0xc000) == 0) {
    bVar1 = GetStringLength();
    if (bVar1 <= maxLenAndFlags) {
      return name;
    }
  }
  else if ((maxLenAndFlags & 0x8000) == 0) {
    maxLenAndFlags = maxLenAndFlags & 0xbfff;
    sVar4 = -1;
  }
  else {
    maxLenAndFlags = maxLenAndFlags & 0x7fff;
    sVar4 = 1;
  }
  uVar5 = 0;
  do {
    pbVar7 = (byte *)name;
    name = (char *)(pbVar7 + 1);
  } while (*pbVar7 == 0x20);
  pbVar9 = pbVar7;
  if (*pbVar7 == 0) {
    surnameBuf[0] = 0;
    goto return_surnameBuf;
  }
  do {
    pbVar6 = pbVar9;
    if (*pbVar6 == 0) break;
    pbVar9 = pbVar6 + 1;
  } while (*pbVar6 != 0x20);
  sVar2 = (short)pbVar6 - (short)pbVar7;
  pbVar9 = pbVar7;
  do {
    pbVar8 = pbVar9;
    pbVar9 = pbVar8 + 1;
  } while (*pbVar8 != 0);
  do {
    pbVar8 = pbVar8 + -1;
    pbVar9 = pbVar8;
  } while (*pbVar8 == 0x20);
  do {
    pbVar10 = pbVar9;
    pbVar9 = surnameBuf;
    if (pbVar10 == pbVar7) goto copy_remainder_with_limit;
    pbVar9 = pbVar10 + -1;
  } while (pbVar9 != pbVar6);
  sVar3 = (short)pbVar8 - (short)pbVar9;
  pbVar9 = surnameBuf;
  if (sVar4 < 0) {
copy_remainder_with_limit:
    do {
      pbVar7 = pbVar9;
      pbVar9 = pbVar7 + 1;
      *pbVar7 = *pbVar10;
      if (pbVar10[1] == 0) goto terminate_output_and_done;
      uVar5 = uVar5 + 1;
      pbVar10 = pbVar10 + 1;
    } while (maxLenAndFlags != uVar5);
    *pbVar7 = 0x2e;
  }
  else {
    if ((sVar4 != 0) || (maxLenAndFlags < (ushort)(sVar3 + sVar2 + 1U))) {
      surnameBuf[0] = *pbVar7;
      surnameBuf[1] = 0x2e;
      surnameBuf[2] = 0x20;
      uVar5 = 3;
      pbVar9 = surnameBuf + 3;
      goto copy_remainder_with_limit;
    }
    sVar2 = sVar2 + -1;
    do {
      pbVar6 = pbVar9;
      *pbVar6 = *pbVar7;
      sVar2 = sVar2 + -1;
      pbVar9 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
    } while (sVar2 != -1);
    pbVar6[1] = 0x20;
    sVar3 = sVar3 + -1;
    pbVar7 = pbVar6 + 2;
    do {
      pbVar9 = pbVar7 + 1;
      *pbVar7 = *pbVar10;
      sVar3 = sVar3 + -1;
      pbVar7 = pbVar9;
      pbVar10 = pbVar10 + 1;
    } while (sVar3 != -1);
  }
terminate_output_and_done:
  *pbVar9 = 0;
return_surnameBuf:
  return (char *)surnameBuf;
}


// --- FindTeamInCache @ 0012ac0a ---

ushort __usercall FindTeamInCache(ushort teamNumber)

{
  short sVar1;
  dword *pdVar2;
  
  if (teamNumber == currentTeamNumber) {
    return 0;
  }
  if (((word_12F6E0 == 0) || (teamNumber != careerTeam._0_2_)) && (teamNumber != selTeamNumber)) {
    if (g_numSelectedTeams != 0) {
      sVar1 = g_numSelectedTeams - 1;
      pdVar2 = &selTeamsPtr;
      do {
        if (teamNumber == *(ushort *)pdVar2) {
          return (g_numSelectedTeams - sVar1) - 1;
        }
        pdVar2 = pdVar2 + 0xab;
        sVar1 = sVar1 + -1;
      } while (sVar1 != -1);
    }
    return teamNumber;
  }
  return 0;
}


// --- VerifyTeamLoaded @ 0012ac6e ---

/* in:
        D0 - team number
   out:
        A0 -> ptr to team (file)
   
   Crashes program if team could not be found in memory. */

void * __usercall VerifyTeamLoaded(ushort teamNumber)

{
  void *unaff_A0;
  undefined1 in_ZF;
  
  FindTeamInCache(teamNumber);
  if ((bool)in_ZF) {
    return unaff_A0;
  }
  panicReasonCode = 0x8888;
  PanicHaltLoop();
  return &DIY_competitionStart;
}


// --- FindTeamInDIY @ 0012ef38 ---

/* in:
       D0 -  team file number
       A6 -> DIY competition
   out:
       D1 -  index of that team in DIY competition, or -1 if not found */

void __usercall FindTeamInDIY(void)

{
  ushort unaff_D0w;
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  word wVar4;
  ushort uVar5;
  DIY_Competition *pDVar6;
  void *pvVar7;
  byte *pbVar8;
  DIY_Competition *unaff_A6;
  DIY_Competition *pDVar9;
  
  word_12F0EA = 0;
  wVar4 = unaff_A6->numTeams;
  if (unaff_A6->competitionType == DIY_CUP) {
    word_12F0EC._0_1_ = -(*(short *)(unaff_A6->field_39 + 0x1c) != 0);
    word_12F0EC = (ushort)word_12F0EC._0_1_ << 8;
LAB_0012ef92:
    uVar3 = 0xffff;
    while (wVar4 = wVar4 - 1, -1 < (short)wVar4) {
      uVar3 = uVar3 + 1;
      if (unaff_D0w ==
          *(ushort *)
           (unaff_A6[6].field_2 +
           (short)((short)(char)unaff_A6[7].field_2[(short)uVar3 + 0x2c] << 1) + 0xc)) {
        if ((*(short *)(unaff_A6->field_39 + 0x1c) != 0) && (uVar3 < 2)) {
          if (unaff_D0w == *(ushort *)unaff_A6->field_39) {
            word_12F0EA = 0;
            return;
          }
          return;
        }
        if ((ushort)(*(short *)(unaff_A6->field_39 + 0x16) << 1) <= uVar3) {
          word_12F0EA = 1;
          for (uVar2 = 0x20; uVar3 < uVar2; uVar2 = uVar2 >> 1) {
          }
          return;
        }
        return;
      }
    }
  }
  else {
    if (unaff_A6->competitionType == DIY_TOURNAMENT) {
      word_12F0EC._0_1_ = -(*(short *)(unaff_A6->field_39 + 0x1e) != 0);
      word_12F0EC = (ushort)word_12F0EC._0_1_ << 8;
      uVar3 = 0xffff;
      do {
        wVar4 = wVar4 - 1;
        if ((short)wVar4 < 0) goto LAB_0012f0bc;
        uVar3 = uVar3 + 1;
      } while (unaff_D0w !=
               *(ushort *)
                (unaff_A6[1].field_39 +
                (short)((short)(char)unaff_A6->field_39[(short)uVar3 + 0x20] << 1)));
      sVar1 = *(short *)(unaff_A6->field_39 + 0x1a);
      if ((*(short *)(unaff_A6->field_39 + 0x1e) == 0) ||
         (*(ushort *)(unaff_A6[3].field_39 + (short)(sVar1 * 0x76) + 8) <= uVar3)) {
        if (uVar3 < *(ushort *)(unaff_A6[3].field_39 + (short)(sVar1 * 0x76) + 8)) {
          return;
        }
        word_12F0EA = 1;
        pDVar9 = unaff_A6;
        if (*(short *)unaff_A6[3].field_39 != 0) {
          if (uVar3 == 3) {
            word_12F0EA = 1;
            return;
          }
          if (uVar3 == 4) {
            word_12F0EA = 1;
            return;
          }
        }
        do {
          pDVar6 = pDVar9;
          uVar2 = *(ushort *)(pDVar6[4].field_39 + 0x1e);
          pDVar9 = (DIY_Competition *)(pDVar6[1].field_2 + 0x14);
        } while (uVar3 < uVar2);
        uVar3 = *(ushort *)(pDVar6[3].field_39 + 8);
        if (word_12F0EE == 0) {
          word_12F0EA = 1;
          return;
        }
        uVar5 = GetMoreExpensiveTeamsCountWrapper(unaff_D0w,unaff_A6);
        if (uVar5 < uVar2) {
          return;
        }
        if (uVar3 <= uVar5) {
          return;
        }
        return;
      }
      pDVar9 = unaff_A6 + 0xb;
      wVar4 = unaff_A6[0xb].numTeams;
      pDVar6 = unaff_A6 + 3;
      unaff_A6 = pDVar9;
      if (*(short *)(pDVar6->field_39 + (short)(sVar1 * 0x76) + 4) == 0) goto LAB_0012ef92;
    }
    else {
      word_12F0EC._0_1_ = -(unaff_A6[1].competitionType == 0);
      word_12F0EC = (ushort)word_12F0EC._0_1_ << 8;
      pDVar9 = unaff_A6;
    }
    sVar1 = -2;
    while (wVar4 = wVar4 - 1, unaff_A6 = pDVar9, -1 < (short)wVar4) {
      sVar1 = sVar1 + 2;
      if (unaff_D0w ==
          *(ushort *)
           (pDVar9[3].field_2 +
           (short)((short)((uint)(int)*(short *)(pDVar9[1].field_2 + sVar1 + 0xc) / 0x12) << 1) +
           0xc)) {
        return;
      }
    }
  }
LAB_0012f0bc:
  if (isNationalSelector == 0) {
    panicReasonCode = 0x6006;
    PanicHaltLoop();
    wVar4 = unaff_A6->numTeams;
    pbVar8 = unaff_A6[3].field_2 + 0xc;
    if ((unaff_A6->competitionType != 0) &&
       (pbVar8 = unaff_A6[6].field_2 + 0xc, unaff_A6->competitionType != 1)) {
      pbVar8 = unaff_A6[1].field_39;
    }
    pvVar7 = VerifyTeamLoaded(unaff_D0w);
    GetAveragePlayerPrice(pvVar7);
    sVar1 = wVar4 - 1;
    do {
      if (*(ushort *)pbVar8 != unaff_D0w) {
        pvVar7 = VerifyTeamLoaded(*(ushort *)pbVar8);
        GetAveragePlayerPrice(pvVar7);
      }
      sVar1 = sVar1 + -1;
      pbVar8 = pbVar8 + 2;
    } while (sVar1 != -1);
    return;
  }
  return;
}


// --- GetMoreExpensiveTeamsCountWrapper @ 0012f0ca ---

ushort __usercall GetMoreExpensiveTeamsCountWrapper(ushort teamNo,DIY_Competition *comp)

{
  ushort uVar1;
  
  uVar1 = GetMoreExpensiveTeamsCount(teamNo,comp);
  return uVar1;
}


// --- GetMoreExpensiveTeamsCount @ 0012f0f0 ---

ushort __usercall GetMoreExpensiveTeamsCount(ushort teamNo,DIY_Competition *comp)

{
  word wVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  void *pvVar6;
  byte *pbVar7;
  
  wVar1 = comp->numTeams;
  pbVar7 = comp[3].field_2 + 0xc;
  if ((comp->competitionType != DIY_LEAGUE) &&
     (pbVar7 = comp[6].field_2 + 0xc, comp->competitionType != DIY_CUP)) {
    pbVar7 = comp[1].field_39;
  }
  pvVar6 = VerifyTeamLoaded(teamNo);
  uVar2 = GetAveragePlayerPrice(pvVar6);
  uVar4 = 0;
  sVar5 = wVar1 - 1;
  do {
    if (*(ushort *)pbVar7 != teamNo) {
      pvVar6 = VerifyTeamLoaded(*(ushort *)pbVar7);
      uVar3 = GetAveragePlayerPrice(pvVar6);
      if (uVar2 < uVar3) {
        uVar4 = uVar4 + 1;
      }
    }
    sVar5 = sVar5 + -1;
    pbVar7 = pbVar7 + 2;
  } while (sVar5 != -1);
  return uVar4;
}


// --- SearchTeamInTmdFile @ 0012f634 ---

/* in:
        D0 - team number to search for
   out:
        zero flag: set = found, clear = not found */

ushort __usercall SearchTeamInTmdFile(ushort teamNo)

{
  short sVar1;
  byte *pbVar2;
  
  if (careerFileBuffer != 0) {
    sVar1 = careerFileBuffer - 1;
    pbVar2 = tmdFileBuffer;
    do {
      if (teamNo == *(ushort *)pbVar2) {
        return teamNo;
      }
      pbVar2 = (byte *)((int)pbVar2 + 0x2ac);
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
  }
  return 1;
}


// --- InitAnimatedPatterns @ 0012fb96 ---

void __usercall InitAnimatedPatterns(void)

{
  animatedPatterns[0] = 0xffff;
  animatedPatterns[1] = 0xffff;
  animatedPatterns[2] = 0xffff;
  animatedPatterns[3] = 0xffff;
  animatedPatterns[4] = 0xffff;
  animatedPatterns[5] = 0xffff;
  animatedPatterns[6] = 0xffff;
  animatedPatterns[7] = 0xffff;
  patternsGoalCounter = 0;
  animPatternsIndex = 0;
  return;
}


// --- ShowFsErrorByCode @ 0013fc00 ---

void __usercall ShowFsErrorByCode(ushort errCode)

{
  char *errorText;
  
  errorText = aDiskWriteProte;
  if ((((errCode != 0x1c) && (errorText = aNoDiskInDrive, errCode != 0x1d)) &&
      (errorText = aFileNotFound, errCode != 0xcd)) &&
     ((errorText = aDiskFull, errCode != 0xdd && (errorText = aCannotFormatGa, errCode != 0xff9c))))
  {
    errorText = aDiskError;
  }
  ShowErrorMenu(errorText);
  return;
}


// --- ShowErrorMenu @ 001408cc ---

void __usercall ShowErrorMenu(char *errorText)

{
  errorPromptsEnabled = 1;
  ::errorText = (dword)errorText;
  ShowMenu(&continueMenu);
  return;
}


// --- sub_141798 @ 00141798 ---

void __usercall sub_141798(void *teamPtr)

{
  short sVar1;
  short sVar2;
  PlayerFile *pPVar3;
  undefined2 *puVar4;
  MarketPlayer *pMVar5;
  
  if ((g_gameType == GAME_TYPE_CAREER) && (numForeignMarketPlayers2 != 0)) {
    sVar2 = numForeignMarketPlayers2 - 1;
    pMVar5 = careerForeignMarketPlayers;
    do {
                    /* WARNING: Load size is inaccurate */
      if ((*(char *)&pMVar5->teamId == *teamPtr) &&
         ((char)pMVar5->teamId == *(char *)((int)teamPtr + 1))) {
        sVar1 = 0x12;
        pPVar3 = &pMVar5->player;
        puVar4 = (undefined2 *)((int)teamPtr + (short)((char)pMVar5->playerOrdinal * 0x26) + 0x4c);
        do {
          *puVar4 = *(undefined2 *)pPVar3;
          sVar1 = sVar1 + -1;
          pPVar3 = (PlayerFile *)&pPVar3->shirtNumber;
          puVar4 = puVar4 + 1;
        } while (sVar1 != -1);
      }
      pMVar5 = pMVar5 + 1;
      sVar2 = sVar2 + -1;
    } while (sVar2 != -1);
  }
  return;
}


// --- GetTeamPointer @ 00146746 ---

void * __usercall GetTeamPointer(ushort teamId)

{
  ushort *unaff_A0;
  undefined1 in_ZF;
  
  FindTeamInCache(teamId);
  if (!(bool)in_ZF) {
    SearchTeamInTmdFile(teamId);
    if (!(bool)in_ZF) {
      LoadTeamFile(teamId >> 8);
      for (unaff_A0 = (ushort *)(teamFileBuffer + 2); teamId != *unaff_A0;
          unaff_A0 = unaff_A0 + 0x156) {
      }
      sub_141798(unaff_A0);
    }
  }
  return unaff_A0;
}


// --- GetPlayer @ 00146796 ---

/* in:
        D0 - team number (country number << 8 + ordinal)
        D1 - player index in team (file)
   out:
        A0 -> player ptr (file) - header
        D1 - value retained
        
   Return a pointer to player with given index into file team structure. */

void * __usercall GetPlayer(ushort teamNumber,ushort playerFileIndex)

{
  TeamFile *pTVar1;
  
  if (teamNumber == currentTeamNumber) {
    pTVar1 = &currentTeam;
  }
  else if (teamNumber == selTeamNumber) {
    pTVar1 = (TeamFile *)careerTeam;
  }
  else {
    pTVar1 = (TeamFile *)GetTeamPointer(teamNumber);
  }
  return pTVar1->teamName + (short)(playerFileIndex * 0x26) + -5;
}


// --- SetTeamGlobalNumbers @ 0014df94 ---

/* in:
        D0 =  number of teams
        A0 -> first team */

void __usercall SetTeamGlobalNumbers(ushort numTeams,void *firstTeam)

{
  short sVar1;
  
  sVar1 = numTeams - 1;
  if (-1 < sVar1) {
    do {
                    /* WARNING: Load size is inaccurate */
      *(ushort *)((int)firstTeam + 2) =
           (ushort)*(byte *)((int)firstTeam + 1) +
           *(short *)((int)teamsCountryNumbers + (int)(short)((ushort)*firstTeam << 1));
      firstTeam = (void *)((int)firstTeam + 0x2ac);
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
  }
  return;
}


// --- LoadTeamFile @ 00151c1e ---

/* WARNING: Control flow encountered bad instruction data */

ushort __usercall LoadTeamFile(ushort extNumber)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  ushort errCode;
  uint unaff_D1;
  short *unaff_A4;
  bool bVar4;
  undefined1 uVar5;
  
  while( true ) {
    bVar3 = (byte)extNumber;
    if ((teamsLoaded != 0) && (bVar3 == lastLoadedExtNumber)) {
      return extNumber;
    }
    teamsLoaded = 1;
    lastLoadedExtNumber = bVar3;
    if (bVar3 == 100) break;
    uVar1 = (extNumber & 0xff) % 100;
    aDataTeamNnn[10] = (char)((extNumber & 0xff) / 100) + '0';
    aDataTeamNnn[0xb] = (char)(uVar1 / 10) + '0';
    aDataTeamNnn[0xc] = (char)(uVar1 % 10) + '0';
    uVar5 = aDataTeamNnn[0xc] == '\0';
    StringCopy(aDataTeamNnn,(char *)teamFilenameBuffer);
    LoadFile((char *)teamFilenameBuffer,teamFileBuffer);
    if ((bool)uVar5) {
      if (64000 < unaff_D1) {
FatalError:
        panicReasonCode = 0x1939;
        bVar4 = false;
        PanicHaltLoop();
        if (!bVar4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (0 < **(int **)(unaff_A4 + 0x3697)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *unaff_A4 = *unaff_A4 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      SetLoadedTeamsGlobalNumbers();
      if ((g_gameType == GAME_TYPE_CAREER) && (skipLeagueNumbers == 0)) {
        SetLeagueNumbers();
      }
LAB_00151cf8:
      uVar2 = teamFileBuffer._0_2_;
      teamFileBuffer[0] = SUB21(teamFileBuffer._0_2_,1);
      teamFileBuffer[1] = (byte)teamFileBuffer._0_2_;
      word_B6C0._0_1_ = teamFileBuffer[0];
      word_B6C0._1_1_ = teamFileBuffer[1];
      dword_B68A = (uint)(ushort)teamFileBuffer._0_2_ * 0x2ac + 2;
      teamFileBuffer._0_2_ = uVar2;
      return extNumber;
    }
    panicReasonCode = 0x8008;
    PanicHaltLoop();
  }
  bVar4 = false;
  errCode = LoadFile(aCustomsEdt,teamFileBuffer);
  if (!bVar4) {
    if (errCode == 0xcd) {
      ShowErrorMenu(aEditedCustomTe);
    }
    else {
      ShowFsErrorByCode(errCode);
    }
    teamsLoaded = 0;
    return extNumber;
  }
  if (64000 < unaff_D1) goto FatalError;
  SetLoadedTeamsGlobalNumbers();
  goto LAB_00151cf8;
}


// --- SetLoadedTeamsGlobalNumbers @ 00151d5a ---

void __usercall SetLoadedTeamsGlobalNumbers(void)

{
  SetTeamGlobalNumbers(teamFileBuffer._0_2_,teamFileBuffer + 2);
  return;
}


// --- SetLeagueNumbers @ 00151d6a ---

void __usercall SetLeagueNumbers(void)

{
  short sVar1;
  int iVar2;
  
  if (teamFileBuffer._0_2_ != 0) {
    iVar2 = 0x4a122;
    sVar1 = teamFileBuffer._0_2_ + -1;
    do {
      *(char *)(iVar2 + 0x19) = someLeaguesTable[*(short *)(iVar2 + 2)] + *(char *)(iVar2 + 0x19);
      iVar2 = iVar2 + 0x2ac;
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
  }
  return;
}


