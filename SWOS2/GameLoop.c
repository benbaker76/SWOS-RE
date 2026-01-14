/*
 * Auto-generated call graph export
 * Start: GameLoop
 * Date : 2026-01-13 11:18:38
 */

/* ===================== INCLUDES ===================== */
#include <stdint.h>
#include <stdbool.h>
#include "LocalTypes.h"
#include "Data.h"

/* ===================== PROTOTYPES ===================== */

short __usercall AssetSys_Dispatch(AssetSysOp op);
ushort __usercall GetKey(void);
void __usercall UpdatePlanePtrsAndBlitParams(void);
void __usercall SwapBuffersAndCameraViewState(void);
void __usercall PanicHaltLoop(void);
ushort __usercall Player1StatusProc(void);
ushort __usercall Player2StatusProc(void);
void __usercall ProcessSpriteBlitQueue(void);
void __usercall SetCameraCoordinates(short newX, short newY);
void __usercall InitCameraMoveView(void);
void __usercall MoveView(short newScreenX, short newScreenY);
void __usercall ScrollToCurrent(void);
void __usercall ScrollXUpdateColumnsAndBlit(void);
void __usercall ScrollYUpdateRowsAndBlit(void);
void __usercall FadeIn(void);
void __usercall FadeOutToBlack(void);
void __usercall FadeOutAndIn(void);
void __usercall nullsub_2(void);
void __usercall nullsub_3(void);
void __usercall nullsub_4(void);
void __usercall BlitterSpan4Planes(void);
void __usercall BlitterSpanCoreMasked(void);
undefined unknown align_and_prepare_left_mask(void);
undefined unknown blitter_rectrow_masked(void);
void __usercall BlitterCopyOverlayToScreen(void);
void __usercall BlitterCopyPanelToScreen(void);
void __usercall HWSprite_LoadFromSpriteGraphics(short spriteIndex);
void __usercall BlitSpritePlanar_Word(void);
void __usercall BlitSpritePlanar_Word_StridedDest(void);
void __usercall BlitSpritePlanar_Long_StridedDest(void);
void __usercall DrawSprite_entry2(void);
void __usercall DrawSprite16Pixels(void);
uchar __usercall CopySprite(ushort srcSprite, ushort xOffset, ushort yOffset, ushort dstSprite);
void __usercall DrawSpriteHotspotInCameraView(void);
void __usercall DrawSpriteInCameraView(void);
void __usercall DarkenRectangle(ushort spriteIndex, ushort x, ushort y);
void __usercall DrawSpriteClipped(void * sprite, ushort x, ushort y);
void __usercall DrawQueuedSprites(void);
void __usercall RenderSpriteBandsToCopperLists(void);
void __usercall RenderSpriteBandPlanePair(void);
void __usercall BuildSpriteBandAndGeneralRenderStacks(void);
void __usercall InitDisplaySprites(void);
void __usercall SortSprites(void);
void __usercall DrawSprites(void);
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
void __usercall TurnCrowdChantsOn(void);
void __usercall TurnCrowdChantsOff(void);
void __usercall PlayCrowdChants(void);
void __usercall AudioFadeCrowdDownThenPulseMusic(void);
void __usercall EnsureSfxLoadedAndStart(void);
void __usercall ClearAudioActiveFlag(void);
void __usercall StopAudioAndClearFlags(void);
void __usercall PlayEnqueuedSamples(void);
void __usercall PlayPenaltySample(void);
void __usercall PlaySample7IfNotTraining(void);
void __usercall sub_107260(void);
void __usercall PlayGoodPassSample(void);
void __usercall PlayKickSample(void);
void __usercall GateKickSampleAndCrowd(short channel, short sfxId);
void __usercall PlayRefereeWhistleSample(void);
void __usercall PlayFoulWhistleSample(void);
void __usercall PlayEndGameWhistleSample(void);
void __usercall PlaySample1IfNotTraining(void);
undefined unknown FUN_001072ee(void);
void __usercall PlaySample2(void);
void __usercall PlaySample3(void);
void __usercall PlayMissGoalSample(void);
void __usercall PlayPenalty(void);
void __usercall PlayGameStateWhistleSample(void);
undefined unknown PlayGoalReplayBottomSample(void);
void __usercall PlayGoalKickOffSample(void);
void __usercall PlayCornerKickSample(void);
void __usercall nullsub_6(void);
void __usercall HandleKickSampleAndCrowd(short mode, short sfxId);
undefined unknown PlaySample(void);
void __usercall StartMenuMusic(void * bankBase, void * songPtr);
void __usercall CrowdTickJump(uint channel, uint waveId);
void __usercall j_AudioApplyPresetToChannels(uint presetId);
void __usercall SetVolumeOrStopChants(uint channelOrAll, uint volume);
void __usercall StopAudio(void);
short __usercall CalculateDeltaXAndY(short speed, short destX, short destY, short curX, short curY);
void __usercall MovePlayers(void);
void __usercall SetNextPlayerFrame(Sprite * player);
void __usercall MovePlayer(Sprite * player);
void __usercall SetPlayerAnimationTableAndPictureIndex(AnimTable * animTable, Sprite * player);
void __usercall SetPlayerAnimationTable(AnimTable * animTable, Sprite * player);
void __usercall SetBallPosition(short ballX, short ballY);
void __usercall MoveCamera(void);
void __usercall UpdateBall(void);
void __usercall ReverseDestXDirection(Sprite * spr, int ballX);
void __usercall ReverseDestYDirection(Sprite * spr, int ballY);
void __usercall DoGoalkeeperSprites(void);
void __usercall RemoveReferee(void);
void __usercall ActivateReferee(void);
void __usercall SetRefereeToLeavingState(void);
void __usercall InitRefereeAnimationTable(AnimTable * animTable);
void __usercall UpdateReferee(void);
void __usercall nullsub_21(void);
void __usercall InjuryUpdateTickGuard(void);
void __usercall InitAdvertisements(void);
void __usercall SetAdvertisementsVisible(void);
void __usercall SetAdvertisementsInvisible(void);
void __usercall ManageAdvertisements(void);
void __usercall UpdateCornerFlagSprite(void);
void __usercall SpinBig_S_Sprite(void);
void __usercall CopyPlayerNameLengths(void);
void __usercall InitGameRestoreTeams(void * leftTeamInGame, void * rightTeamInGame);
void __usercall InitializePlayerSpriteFrameIndices(void);
void __usercall UpdateBookedPlayerNumberSprite(void);
void __usercall UpdateControlledPlayerNumbers(void);
void __usercall MarkPlayer(void);
void __usercall SetCurrentPlayerName(void);
void __usercall ClearSaveFlagForGoalSprites(void);
void __usercall nullsub_8(void);
void __usercall ResetTime(void);
void __usercall UpdateTime(void);
void __usercall BumpPlayersLastPlayedHalfAtHalfStart(void);
void __usercall BumpPlayerLastPlayedHalfAtHalfStart(PlayerInfoHeader * player);
void __usercall BumpPlayersLastPlayedHalfAtHalfEnd(void);
void __usercall BumpPlayerLastPlayedHalfAtHalfEnd(PlayerInfoHeader * player);
void __usercall ResetResultSprites(void);
void __usercall ShowResult(void);
void __usercall SetPitchTypeAndNumber(void);
void __usercall SetHilFileHeader(void);
void __usercall SaveHighlightsPointers(void);
void __usercall RestoreHighlightPointers(void);
void __usercall FadeAndSaveHighlightScene(void);
void __usercall SaveHighlightScene(void);
void __usercall InitCurrentGoalHighlight(void);
void __usercall ThrowInDeadProc(void);
void __usercall SaveCoordinatesForHighlights(short spriteIndexOrMarker, ushort x, ushort y);
uchar * __usercall IncrementHilBufferPointer(uchar * cur);
void __usercall DrawReplayFrame(void);
uchar * __usercall ValidateHilPointerAdd(uchar * p);
uchar * __usercall ValidateHilPointerSub(uchar * p);
void __usercall ReplayUpdateCameraAndSwapBuffers(void);
void __usercall HandleInstantReplayStateSwitch(void);
void __usercall RestoreCameraPosition(void);
void __usercall GoalScored(short scoringTeam, Sprite * scorerSprite);
void __usercall BenchCheckControls(void);
void __usercall CheckForThrowInAndGoalkeepersBall(void);
void __usercall DrawBenchAndSubsMenu(void);
void __usercall DrawOpponentsBench(void);
void __usercall DrawBenchPlayersAndCoach(TeamGame * requestingTeam, TeamGeneralInfo * team, ushort x, ushort y);
void __usercall GameLoop(void);
void __usercall KeepStatisticsOnScreen(void);
void __usercall PlayInstantReplayLoop(void);
void __usercall PlayHighlightsLoop(void);
ushort __usercall ReadTimerDelta(void);
void __usercall SaveRand2State(void);
void __usercall RestoreRand2State(void);
void __usercall Randomize2(ushort seed);
ushort __usercall Rand2(void);
ushort __usercall Rand(void);
void __usercall MainKeysCheck(ushort key);
void __usercall ReplayExitMenuAfterFriendly(void);
void __usercall DrawReplayOrExitMenu(void);
void __usercall DrawMenuBack150x20(ushort color, ushort x, ushort y);
void __usercall DrawReplayContinueShiningFrame(short x, short y);
void __usercall ResetGoalAttempt(void);
void __usercall AllowStatistics(void);
void __usercall StatisticsOff(void);
void __usercall UpdateAndDrawStatistics(void);
void __usercall DrawStatistics(void);
void __usercall WriteStatsNumber(ushort number, ushort x, ushort y, ushort color);
void __usercall WriteStatsPercent(ushort number, ushort x, ushort y);
void __usercall DrawGrid(ushort x, ushort y, ushort width, ushort height);
void __usercall DoPass(Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerKickingBall(Sprite * player, TeamGeneralInfo * team);
void __usercall CalculateIfPlayerWinsBall(ushort dir, Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerTackledTheBallWeak(Sprite * player, TeamGeneralInfo * team);
void __usercall SetPlayerDowntimeAfterTackle(Sprite * player, TeamGeneralInfo * team);
void __usercall UpdatePlayerSpeed(Sprite * player, TeamGeneralInfo * team);
void __usercall UpdatePlayerShotChanceTable(Sprite * player, TeamGeneralInfo * team);
PlayerInfoHeader * __usercall GetPlayerPointerFromShirtNumber(Sprite * player, TeamGeneralInfo * team);
void __usercall CalculateNextBallPosition(void);
void __usercall QueueMaskedSpriteBlitClipped(void * sprite, ushort x, ushort y);
void __usercall SetPlayerWithNoBallDestination(Sprite * player, TeamGeneralInfo * team);
void __usercall PlayerTackled(Sprite * playerSprite, TeamGeneralInfo * team);
void __usercall StartPenalties(void);
void __usercall InitTeamsData(void);
void __usercall UpdateControlledPlayer(TeamGeneralInfo * team);
void __usercall UpdatePlayerBeingPassedTo(TeamGeneralInfo * team);
void __usercall UpdateGameTimersAndCameraBreakMode(TeamGeneralInfo * team);
void __usercall UpdateAndApplyTeamControls(void);
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
void __usercall SendPlayerAway(Sprite * player, TeamGeneralInfo * team);
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
void __usercall NextPenalty(void);
void __usercall GoalkeeperClaimedTheBall(Sprite * goalkeeper, Sprite * ball, TeamGeneralInfo * team);
void __usercall StartingMatch(void);
void __usercall SetCameraMovingToShowerState(void);
void __usercall EndFirstHalf(void);
void __usercall FirstHalfJustEnded(void);
void __usercall EndOfGame(void);
void __usercall PlayersLeavingPitch(void);
void __usercall GoToHalftime(void);
void __usercall GameOver(void);
void __usercall StartFirstExtraTime(void);
void __usercall EndFirstExtraTime(void);
void __usercall PrepareForInitialKick(void);
void __usercall CheckIfGoalkeeperClaimedTheBall(void);
void __usercall ResetBothTeamsPlayerPassingKicking(void);
void __usercall ResetPlayerPassingKicking(TeamGeneralInfo * team);
void __usercall StopAllPlayers(void);
void __usercall StopPlayers(TeamGeneralInfo * team);
void __usercall CheckIfBallOutOfPlay(void);
void __usercall InitPlayersBeforeEnteringPitch(void);
char __usercall UpdatePlayers(TeamGeneralInfo * teamInfo);
void __usercall AI_SetControlsDirection(TeamGeneralInfo * team);
short __usercall AI_SetDirectionTowardOpponentsGoal(TeamGeneralInfo * team);
int __usercall AI_DecideWhetherToTriggerFire(Sprite * player, TeamGeneralInfo * team, ushort dir);
TeamGeneralInfo * __usercall AI_ResumeGameDelay(TeamGeneralInfo * team);
char __usercall AI_Kick(Sprite * player, TeamGeneralInfo * team);
Sprite * __usercall FindClosestPlayerToBallFacing(ushort fullDir, TeamGeneralInfo * team);
void __usercall sub_11FBA2(void);
void __usercall nullsub_9(void);
void __usercall nullsub_10(void);
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
char __usercall AssignFakeGoalsToScorers(ushort winningTeam, ushort numGoals);
void __usercall CalcTeamViewOffset(TeamFile * teamFile);
ushort __usercall GetPlayerPrice(TeamFile * team, PlayerFile * player, ushort position);
ushort __usercall CountNearnessFactor(ushort curBallQuadrant, ushort dstBallQuadrant, ushort price, uchar * curQuadDistFactor, uchar * playerPositions, uchar * coordToQuad);
char __usercall GetPlayerRandomNum(PlayerFile * playerFile);
ushort __usercall GetAveragePlayerPrice(void * team);
void __usercall ApplyTeamTactics(void * playerInfos);
char __usercall AdjustPlayerSkills(ushort playerIndex, TeamFile * teamFile, TeamFile * oppTeamFile, TeamGame * teamGame, PlayerFile * playerFile, PlayerInfoHeader * playerInfoHeader);
short __usercall GetPlayerPricePercentageChange(short factor, void * team);
ushort __usercall ScaleSkill(ushort skill, ushort factor, void * whichSide);
ushort __usercall FindTeamInCache(ushort teamNumber);
void * __usercall VerifyTeamLoaded(ushort teamNumber);
void __usercall FindTeamInDIY(void);
ushort __usercall GetMoreExpensiveTeamsCountWrapper(ushort teamNo, DIY_Competition * comp);
ushort __usercall GetMoreExpensiveTeamsCount(ushort teamNo, DIY_Competition * comp);
ushort __usercall SearchTeamInTmdFile(ushort teamNo);
void __usercall DrawAnimatedPatterns(void);
void __usercall SwapTwoRandomIndicesFromAnimPatternsTable(void);
void __usercall ResetAnimatedPatternsForBothTeams(void);
void __usercall ResetAnimatedPatterns(void);
void __usercall InitAnimatedPatterns(void);
void __usercall DrawPatternFromIndex(ushort patternIndex);
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
    REG_INTENA = 8;
    keyBuffer[1] = keyBuffer[2];
    keyBuffer[2] = keyBuffer[3];
    keyBuffer[3] = keyBuffer[4];
    keyBuffer[4] = keyBuffer[5];
    keyBuffer[5] = keyBuffer[6];
    keyBuffer[6] = keyBuffer[7];
    keyBuffer[7] = keyBuffer[8];
    keyBuffer[8] = keyBuffer[9];
    keyCount = keyCount - 1;
    REG_INTENA = 0x8008;
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


// --- UpdatePlanePtrsAndBlitParams @ 00101f08 ---

void __usercall UpdatePlanePtrsAndBlitParams(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  
  if ((cameraXMod320 & 0xf) == 0) {
    copperListBuffer[0x2d] = PITCH_DEST_MOD_ALIGNED;
    copperListBuffer[0x2f] = PITCH_DEST_MOD_ALIGNED;
    copperListBuffer[0x31] = 0x30;
    copperListBuffer[0x25] = 0;
  }
  else {
    copperListBuffer[0x2d] = PITCH_DEST_MOD_UNALIGNED;
    copperListBuffer[0x2f] = PITCH_DEST_MOD_UNALIGNED;
    copperListBuffer[0x31] = 0x28;
    copperListBuffer[0x25] = (0x10 - (cameraXMod320 & 0xf)) * 0x11;
  }
  iVar10 = 0x2bc30;
  iVar11 = 0x2bc58;
  iVar6 = (uint)cameraYMod320 * ROW_STRIDE_BYTES;
  if (usePlaneOffsetFlag[0] == 0) {
    if (useAltBaseFlag == 0) {
      pbVar7 = frontbufferBasePtr + iVar6;
    }
    else {
      pbVar7 = frontbufferBaseAltPtr + iVar6;
    }
  }
  else {
    pbVar7 = frontbufferMaskBuffer + iVar6;
  }
  uVar1 = cameraXMod320 >> 3 & 0xfffe;
  pbVar7 = pbVar7 + uVar1;
  pbVar8 = frontbufferBasePtr;
  if (usePlaneOffsetFlag[0] != 0) {
    pbVar8 = frontbufferMaskBuffer;
  }
  pbVar8 = pbVar8 + uVar1;
  sVar9 = NUM_PLANES_MINUS1;
  puVar2 = bitPlane0BasePtr;
  puVar3 = bitPlane1BasePtr;
  puVar4 = bitPlane2BasePtr;
  puVar5 = bitPlane3BasePtr;
  do {
    copperListBuffer[0xf] = (word)((uint)puVar5 >> 0x10);
    copperListBuffer[0x11] = (word)puVar5;
    copperListBuffer[0xb] = (word)((uint)puVar4 >> 0x10);
    copperListBuffer[0xd] = (word)puVar4;
    copperListBuffer[7] = (word)((uint)puVar3 >> 0x10);
    copperListBuffer[9] = (word)puVar3;
    copperListBuffer[3] = (word)((uint)puVar2 >> 0x10);
    copperListBuffer[5] = (word)puVar2;
    *(short *)(iVar10 + 6) = (short)pbVar7;
    *(short *)(iVar10 + 2) = (short)((uint)pbVar7 >> 0x10);
    *(short *)(iVar11 + 6) = (short)pbVar8;
    *(short *)(iVar11 + 2) = (short)((uint)pbVar8 >> 0x10);
    puVar5 = (uint *)CONCAT22(copperListBuffer[0xf],copperListBuffer[0x11]);
    puVar4 = (uint *)CONCAT22(copperListBuffer[0xb],copperListBuffer[0xd]);
    puVar3 = (uint *)CONCAT22(copperListBuffer[7],copperListBuffer[9]);
    puVar2 = (uint *)CONCAT22(copperListBuffer[3],copperListBuffer[5]);
    pbVar7 = pbVar7 + PLANE_STRIDE;
    pbVar8 = pbVar8 + PLANE_STRIDE;
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 8;
    sVar9 = sVar9 + -1;
  } while (sVar9 != -1);
  if ((ushort)(0x134 - cameraYMod320) < 0x100) {
    copperListBuffer[0x8a] = 1;
  }
  else {
    copperListBuffer[0x8a] = 0xffe1;
  }
  copperListBuffer[0x8c] = (0x134 - cameraYMod320) * 0x100 | 1;
  return;
}


// --- SwapBuffersAndCameraViewState @ 001021cc ---

void __usercall SwapBuffersAndCameraViewState(void)

{
  if (frontbufferBasePtr == frontbufferBase) {
    bitPlane0BasePtr = bitPlane0BaseAlt;
    bitPlane1BasePtr = bitPlane1BaseAlt;
    bitPlane2BasePtr = bitPlane2BaseAlt;
    bitPlane3BasePtr = bitPlane3BaseAlt;
    bitPlane0BaseAlt[0] = copperZeroLong;
    bitPlane1BaseAlt[0] = copperZeroLong;
    bitPlane2BaseAlt[0] = copperZeroLong;
    bitPlane3BaseAlt[0] = copperZeroLong;
    frontbufferBasePtr = frontbufferBaseAlt;
    frontbufferBaseAltPtr = frontbufferBase;
    spriteBlitQueue = (dword)&kSpriteBlitQueueSentinel_B;
    dstXByteOffsetSaved0 = cameraXMod320;
    dstYStartLinesSaved0 = cameraYMod320;
    oldCameraXSaved0 = g_oldCameraX;
    oldCameraYSaved0 = g_oldCameraY;
    cameraXSaved0 = g_cameraX.s.i;
    cameraYSaved0 = g_cameraY.s.i;
    cameraXMod320 = dstXByteOffsetSaved1;
    cameraYMod320 = dstYStartLinesSaved1;
    g_oldCameraX = oldCameraXSaved1;
    g_oldCameraY = oldCameraYSaved1;
    g_cameraX.s.i = cameraXSaved1;
    g_cameraY.s.i = cameraYSaved1;
  }
  else {
    bitPlane0BasePtr = bitPlane0Base;
    bitPlane1BasePtr = bitPlane1Base;
    bitPlane2BasePtr = bitPlane2Base;
    bitPlane3BasePtr = bitPlane3Base;
    bitPlane0Base[0] = copperZeroLong;
    bitPlane1Base[0] = copperZeroLong;
    bitPlane2Base[0] = copperZeroLong;
    bitPlane3Base[0] = copperZeroLong;
    frontbufferBasePtr = frontbufferBase;
    frontbufferBaseAltPtr = frontbufferBaseAlt;
    spriteBlitQueue = (dword)&kSpriteBlitQueueSentinel_A;
    dstXByteOffsetSaved1 = cameraXMod320;
    dstYStartLinesSaved1 = cameraYMod320;
    oldCameraXSaved1 = g_oldCameraX;
    oldCameraYSaved1 = g_oldCameraY;
    cameraXSaved1 = g_cameraX.s.i;
    cameraYSaved1 = g_cameraY.s.i;
    cameraXMod320 = dstXByteOffsetSaved0;
    cameraYMod320 = dstYStartLinesSaved0;
    g_oldCameraX = oldCameraXSaved0;
    g_oldCameraY = oldCameraYSaved0;
    g_cameraX.s.i = cameraXSaved0;
    g_cameraY.s.i = cameraYSaved0;
  }
  return;
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


// --- ProcessSpriteBlitQueue @ 00102970 ---

void __usercall ProcessSpriteBlitQueue(void)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 *puVar3;
  
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTAFWM = BLT_FWM_ALL;
  REG_BLTALWM = BLT_FWM_ALL;
  REG_BLTCON1 = 0;
  REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
  puVar3 = (undefined4 *)spriteBlitQueue;
  while( true ) {
    REG_DMACON = DMACON_BLT_ON;
    uVar1 = REG_DMACONR._0_1_;
    do {
      bVar2 = REG_DMACONR._0_1_;
    } while ((bVar2 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTAPTH = (void *)*puVar3;
    if ((int)*puVar3 < 0) break;
    REG_BLTDPTH = (void *)puVar3[1];
    REG_BLTAMOD = *(ushort *)(puVar3 + 2);
    REG_BLTDMOD = *(ushort *)(puVar3 + 2);
    REG_BLTSIZE = *(ushort *)((int)puVar3 + 10);
    puVar3 = puVar3 + 3;
  }
  *(undefined4 *)spriteBlitQueue = 0xffffffff;
  return;
}


// --- SetCameraCoordinates @ 00102b32 ---

/* in:
        D1 - new x (whole part)
        D2 - new y (whole part)
   
   Updates *mod320 vars too. */

void __usercall SetCameraCoordinates(short newX,short newY)

{
  while (newX != g_cameraX.s.i) {
    if ((short)(newX - g_cameraX._0_2_) < 0) {
      g_cameraX.s.i = g_cameraX.s.i - 1;
      cameraXMod320 = cameraXMod320 - 1;
      if ((short)cameraXMod320 < 0) {
        cameraXMod320 = 0x15f;
      }
    }
    else {
      g_cameraX.s.i = g_cameraX.s.i + 1;
      cameraXMod320 = cameraXMod320 + 1;
      if (cameraXMod320 == 0x160) {
        cameraXMod320 = 0;
      }
    }
  }
  while (newY != g_cameraY.s.i) {
    if ((short)(newY - g_cameraY._0_2_) < 0) {
      g_cameraY.s.i = g_cameraY.s.i - 1;
      cameraYMod320 = cameraYMod320 - 1;
      if ((short)cameraYMod320 < 0) {
        cameraYMod320 = 0x10f;
      }
    }
    else {
      g_cameraY.s.i = g_cameraY.s.i + 1;
      cameraYMod320 = cameraYMod320 + 1;
      if (cameraYMod320 == 0x110) {
        cameraYMod320 = 0;
      }
    }
  }
  return;
}


// --- InitCameraMoveView @ 00102bbc ---

void __usercall InitCameraMoveView(void)

{
  short unaff_D1w;
  short unaff_D2w;
  
  SetCameraCoordinates(unaff_D1w,0x110);
  ScrollToCurrent();
  SetCameraCoordinates(g_cameraX.s.i,0);
  ScrollToCurrent();
  MoveView(g_cameraX.s.i,unaff_D2w);
  return;
}


// --- MoveView @ 00102bec ---

/* in:
        D1 - new visible screen x
        D2 - new visible screen y */

void __usercall MoveView(short newScreenX,short newScreenY)

{
  while( true ) {
    ScrollToCurrent();
    if (newScreenX == g_cameraX.s.i) break;
    if ((short)(newScreenX - g_cameraX._0_2_) < 0) {
      g_cameraX.s.i = g_cameraX.s.i - 1;
      cameraXMod320 = cameraXMod320 - 1;
      if ((short)cameraXMod320 < 0) {
        cameraXMod320 = 0x15f;
      }
    }
    else {
      g_cameraX.s.i = g_cameraX.s.i + 1;
      cameraXMod320 = cameraXMod320 + 1;
      if (cameraXMod320 == 0x160) {
        cameraXMod320 = 0;
      }
    }
  }
  while( true ) {
    ScrollToCurrent();
    if (newScreenY == g_cameraY.s.i) break;
    if ((short)(newScreenY - g_cameraY._0_2_) < 0) {
      g_cameraY.s.i = g_cameraY.s.i - 1;
      cameraYMod320 = cameraYMod320 - 1;
      if ((short)cameraYMod320 < 0) {
        cameraYMod320 = 0x10f;
      }
    }
    else {
      g_cameraY.s.i = g_cameraY.s.i + 1;
      cameraYMod320 = cameraYMod320 + 1;
      if (cameraYMod320 == 0x110) {
        cameraYMod320 = 0;
      }
    }
  }
  return;
}


// --- ScrollToCurrent @ 00102c8e ---

/* Sets view to cameraX and cameraY.
   Updates oldCameraX and oldCameraY.
   
   out:
        D1 - camera x
        D2 - camera y */

void __usercall ScrollToCurrent(void)

{
  cameraCoordinatesValid = 1;
  ScrollXUpdateColumnsAndBlit();
  ScrollYUpdateRowsAndBlit();
  return;
}


// --- ScrollXUpdateColumnsAndBlit @ 00102ca0 ---

void __usercall ScrollXUpdateColumnsAndBlit(void)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  ushort uVar4;
  undefined1 uVar5;
  byte bVar6;
  ushort uVar7;
  short sVar8;
  int *piVar9;
  
  if (g_cameraX.s.i != g_oldCameraX) {
    if ((short)(g_cameraX.s.i - g_oldCameraX) < 0) {
      sVar8 = 0;
      if ((short)g_cameraX.s.i >> TILE_SHIFT_X == (short)g_oldCameraX >> TILE_SHIFT_X) {
        g_oldCameraX = g_cameraX.s.i;
        cameraCoordinatesValid = 0;
        return;
      }
    }
    else {
      sVar8 = SCROLL_RIGHT_EDGE_X;
      if ((short)(g_cameraX.s.i + SCROLL_RIGHT_EDGE_X) >> TILE_SHIFT_X ==
          (short)(g_oldCameraX + SCROLL_RIGHT_EDGE_X) >> TILE_SHIFT_X) {
        g_oldCameraX = g_cameraX.s.i;
        cameraCoordinatesValid = 0;
        return;
      }
    }
    cameraCoordinatesValid = 0;
    g_oldCameraX = g_cameraX.s.i;
    iVar1 = (int)(short)(((ushort)(sVar8 + g_cameraX.s.i) >> TILE_SHIFT_X) * 4 +
                        (g_cameraY.s.i >> TILE_SHIFT_X) * PITCH_PTR_ROW_BYTES);
    piVar9 = (int *)(iVar1 + 0x400);
    REG_DMACON = DMACON_BLT_ON;
    uVar5 = REG_DMACONR._0_1_;
    do {
      bVar6 = REG_DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTDPTH = frontbufferBasePtr +
                  (uint)cameraYMod320 * ROW_STRIDE_BYTES +
                  ((ushort)(sVar8 + cameraXMod320) >> 3 & 0xfffe);
    REG_BLTAMOD = 0;
    REG_BLTDMOD = BLTDMOD_PLANE_STEP;
    REG_BLTAFWM = BLT_FWM_ALL;
    REG_BLTALWM = BLT_FWM_ALL;
    REG_BLTCON1 = 0;
    REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
    uVar4 = cameraYMod320 & TILE_MASK;
    uVar7 = cameraYMod320;
    if (uVar4 != 0) {
      uVar7 = (TILE_HEIGHT - uVar4) + cameraYMod320;
      iVar2 = *piVar9;
      piVar9 = (int *)(iVar1 + 0x4a8);
      REG_DMACON = DMACON_BLT_ON;
      uVar5 = REG_DMACONR._0_1_;
      do {
        bVar6 = REG_DMACONR._0_1_;
      } while ((bVar6 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTAPTH = (void *)((short)(uVar4 << NUM_PLANES_SHIFT_PLUS1) + iVar2);
      REG_BLTSIZE = (TILE_HEIGHT - uVar4) * 0x100 + 1;
    }
    for (; uVar7 < SCREEN_HEIGHT; uVar7 = uVar7 + TILE_HEIGHT) {
      pvVar3 = (void *)*piVar9;
      piVar9 = piVar9 + 0x2a;
      REG_DMACON = DMACON_BLT_ON;
      uVar5 = REG_DMACONR._0_1_;
      do {
        bVar6 = REG_DMACONR._0_1_;
      } while ((bVar6 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTAPTH = pvVar3;
      REG_BLTSIZE = BLTSIZE_TILE_COL;
    }
    REG_DMACON = DMACON_BLT_ON;
    uVar5 = REG_DMACONR._0_1_;
    do {
      bVar6 = REG_DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTDPTH = frontbufferBasePtr + ((ushort)(sVar8 + cameraXMod320) >> 3 & 0xfffe);
    for (uVar7 = cameraYMod320; TILE_HEIGHT - 1 < uVar7; uVar7 = uVar7 + -TILE_HEIGHT) {
      pvVar3 = (void *)*piVar9;
      piVar9 = piVar9 + 0x2a;
      REG_DMACON = DMACON_BLT_ON;
      uVar5 = REG_DMACONR._0_1_;
      do {
        bVar6 = REG_DMACONR._0_1_;
      } while ((bVar6 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTAPTH = pvVar3;
      REG_BLTSIZE = BLTSIZE_TILE_COL;
    }
    if (uVar7 != 0) {
      REG_DMACON = DMACON_BLT_ON;
      uVar5 = REG_DMACONR._0_1_;
      do {
        bVar6 = REG_DMACONR._0_1_;
      } while ((bVar6 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTAPTH = (void *)*piVar9;
      REG_BLTSIZE = uVar7 * 0x100 + 1;
    }
    REG_DMACON = DMACON_BLT_ON;
    uVar5 = REG_DMACONR._0_1_;
    do {
      bVar6 = REG_DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTAPTH = frontbufferBasePtr + ((ushort)(sVar8 + cameraXMod320) >> 3 & 0xfffe);
    REG_BLTDPTH = frontbufferMaskBuffer +
                  ((int)(frontbufferBasePtr + ((ushort)(sVar8 + cameraXMod320) >> 3 & 0xfffe)) -
                  (int)frontbufferBasePtr);
    REG_BLTAMOD = BLTDMOD_PLANE_STEP;
    REG_BLTSIZE = BLTSIZE_TILE_COL;
    REG_DMACON = DMACON_BLT_ON;
    uVar5 = REG_DMACONR._0_1_;
    do {
      bVar6 = REG_DMACONR._0_1_;
    } while ((bVar6 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTSIZE = 1;
  }
  return;
}


// --- ScrollYUpdateRowsAndBlit @ 00102f8e ---

void __usercall ScrollYUpdateRowsAndBlit(void)

{
  undefined1 uVar1;
  byte bVar2;
  ushort uVar3;
  word wVar4;
  short sVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  undefined2 *puVar11;
  int *piVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  
  uVar3 = g_cameraY.s.i - g_oldCameraY;
  if (uVar3 != 0) {
    if ((int)((uint)uVar3 << 0x10) < 0) {
      sVar8 = 0;
      uVar3 = -uVar3;
    }
    else {
      sVar8 = SCREEN_HEIGHT - uVar3;
    }
    g_oldCameraY = g_cameraY.s.i;
    cameraCoordinatesValid = 0;
    piVar12 = (int *)((int)(short)((g_cameraX.s.i >> TILE_SHIFT_X) << 2) +
                     (uint)((ushort)(sVar8 + g_cameraY.s.i) >> TILE_SHIFT_X) * PITCH_PTR_ROW_BYTES +
                     0x400);
    uVar7 = sVar8 + cameraYMod320;
    if (SCREEN_HEIGHT - 1 < uVar7) {
      uVar7 = uVar7 + -SCREEN_HEIGHT;
    }
    puVar14 = (uint *)(frontbufferBasePtr +
                      (uint)uVar7 * ROW_STRIDE_BYTES + (cameraXMod320 >> 3 & 0xfffe));
    if ((g_cameraX.s.i & 0xf) == 0) {
      sVar9 = 0x14;
      iVar10 = PITCH_DEST_MOD_ALIGNED;
    }
    else {
      sVar9 = 0x15;
      iVar10 = PITCH_DEST_MOD_UNALIGNED;
    }
    puVar17 = puVar14 + 0xb;
    puVar19 = puVar14 + 0x16;
    puVar21 = puVar14 + 0x21;
    uVar7 = sVar8 + cameraYMod320;
    if (SCREEN_HEIGHT - 1 < uVar7) {
      uVar7 = uVar7 + -SCREEN_HEIGHT;
    }
    blitWordCount = sVar9 + 1;
    maskBlitPendingBytesA = 0;
    maskBlitPendingBytesB = 0;
    maskBlitSecondStreamPtr = (uint *)0x0;
    iVar6 = (int)(short)((sVar8 + g_cameraY.s.i & TILE_MASK) << NUM_PLANES_SHIFT_PLUS1);
    sVar8 = uVar3 - 1;
    sVar5 = sVar9;
    piVar13 = piVar12;
    maskBlitDestPtr = puVar14;
    do {
      do {
        puVar11 = (undefined2 *)(iVar6 + *piVar13);
        puVar15 = (uint *)((int)puVar14 + 2);
        *(undefined2 *)puVar14 = *puVar11;
        puVar16 = (uint *)((int)puVar17 + 2);
        *(undefined2 *)puVar17 = puVar11[1];
        puVar18 = (uint *)((int)puVar19 + 2);
        *(undefined2 *)puVar19 = puVar11[2];
        puVar20 = (uint *)((int)puVar21 + 2);
        *(undefined2 *)puVar21 = puVar11[3];
        sVar5 = sVar5 + -1;
        piVar13 = piVar13 + 1;
        puVar14 = puVar15;
        puVar17 = puVar16;
        puVar19 = puVar18;
        puVar21 = puVar20;
      } while (sVar5 != -1);
      maskBlitPendingBytesA = maskBlitPendingBytesA + NUM_PLANES;
      maskBlitPendingBytesB = maskBlitPendingBytesB + NUM_PLANES;
      iVar6 = iVar6 + SRC_SCANLINE_BYTES;
      if ((short)iVar6 == TILE_SIZE) {
        piVar12 = piVar12 + 0x2a;
        iVar6 = 0;
      }
      puVar14 = (uint *)(iVar10 + (int)puVar15);
      puVar17 = (uint *)(iVar10 + (int)puVar16);
      puVar19 = (uint *)(iVar10 + (int)puVar18);
      puVar21 = (uint *)(iVar10 + (int)puVar20);
      uVar7 = uVar7 + 1;
      if (uVar7 == SCREEN_HEIGHT) {
        puVar14 = puVar14 + -0x2ec0;
        puVar17 = puVar17 + -0x2ec0;
        puVar19 = puVar19 + -0x2ec0;
        puVar21 = puVar21 + -0x2ec0;
        uVar7 = 0;
        maskBlitPendingBytesB = 0;
        maskBlitSecondStreamPtr = puVar14;
      }
      sVar8 = sVar8 + -1;
      sVar5 = sVar9;
      piVar13 = piVar12;
    } while (sVar8 != -1);
    REG_DMACON = DMACON_BLT_ON;
    uVar1 = REG_DMACONR._0_1_;
    do {
      bVar2 = REG_DMACONR._0_1_;
    } while ((bVar2 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTAFWM = BLT_FWM_ALL;
    REG_BLTALWM = BLT_FWM_ALL;
    REG_BLTCON1 = 0;
    REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
    uVar3 = (PLANE_STRIDE_DIV2 - blitWordCount) * 2;
    REG_BLTAMOD = uVar3;
    REG_BLTDMOD = uVar3;
    if (maskBlitSecondStreamPtr != (uint *)0x0) {
      maskBlitPendingBytesA = maskBlitPendingBytesA - maskBlitPendingBytesB;
    }
    REG_DMACON = DMACON_BLT_ON;
    uVar1 = REG_DMACONR._0_1_;
    do {
      bVar2 = REG_DMACONR._0_1_;
    } while ((bVar2 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTAPTH = maskBlitDestPtr;
    REG_BLTDPTH = frontbufferMaskBuffer + ((int)maskBlitDestPtr - (int)frontbufferBasePtr);
    while (maskBlitPendingBytesA != 0) {
      wVar4 = maskBlitPendingBytesA;
      if (0x400 < maskBlitPendingBytesA) {
        wVar4 = 0x400;
      }
      maskBlitPendingBytesA = maskBlitPendingBytesA - wVar4;
      REG_DMACON = DMACON_BLT_ON;
      uVar1 = REG_DMACONR._0_1_;
      do {
        bVar2 = REG_DMACONR._0_1_;
      } while ((bVar2 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTSIZE = blitWordCount + wVar4 * 0x40;
    }
    if ((maskBlitSecondStreamPtr != (uint *)0x0) && (maskBlitPendingBytesB != 0)) {
      REG_DMACON = DMACON_BLT_ON;
      uVar1 = REG_DMACONR._0_1_;
      do {
        bVar2 = REG_DMACONR._0_1_;
      } while ((bVar2 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTAPTH = maskBlitSecondStreamPtr;
      REG_BLTDPTH = frontbufferMaskBuffer + ((int)maskBlitSecondStreamPtr - (int)frontbufferBasePtr)
      ;
      while (maskBlitPendingBytesB != 0) {
        wVar4 = maskBlitPendingBytesB;
        if (0x400 < maskBlitPendingBytesB) {
          wVar4 = 0x400;
        }
        maskBlitPendingBytesB = maskBlitPendingBytesB - wVar4;
        REG_DMACON = DMACON_BLT_ON;
        uVar1 = REG_DMACONR._0_1_;
        do {
          bVar2 = REG_DMACONR._0_1_;
        } while ((bVar2 & 0x40) != 0);
        REG_DMACON = DMACON_BLT_OFF;
        REG_BLTSIZE = blitWordCount + wVar4 * 0x40;
      }
    }
  }
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


// --- FadeOutAndIn @ 0010345e ---

void __usercall FadeOutAndIn(void)

{
  FadeOutToBlack();
  FadeIn();
  return;
}


// --- nullsub_2 @ 00103972 ---

void __usercall nullsub_2(void)

{
  return;
}


// --- nullsub_3 @ 00103974 ---

void __usercall nullsub_3(void)

{
  return;
}


// --- nullsub_4 @ 001039dc ---

void __usercall nullsub_4(void)

{
  return;
}


// --- BlitterSpan4Planes @ 00103bd6 ---

void __usercall BlitterSpan4Planes(void)

{
  undefined2 unaff_D0w;
  uint unaff_D1;
  
  align_and_prepare_left_mask
            (CONCAT22((short)((unaff_D1 & 0xffff) * ROW_STRIDE_BYTES >> 0x10),unaff_D0w) &
             0xffff000f);
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
  
  uVar5 = BLTCON0_USEA_USED_LF_F0;
  uVar6 = BLTCON0_USED_LF_00;
  if ((unaff_D4w & 1) != 0) {
    uVar5 = BLTCON0_USEA_USED_LF_FC;
    uVar6 = BLTCON0_USED_LF_FF;
  }
  if (unaff_D1w != 0) {
    uVar4 = *(ushort *)((short)(unaff_D1w * 2) + 0x103c34);
    unaff_D2w = unaff_D2w - (0x10 - (unaff_D1w & 0x7fff));
    if ((short)unaff_D2w < 0) {
      uVar4 = *(ushort *)((int)partialSpanMaskTable + (int)(short)(unaff_D2w * -2)) | uVar4;
      unaff_D2w = 0;
    }
    REG_DMACON = 0x8400;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = 0x400;
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
    REG_DMACON = 0x8400;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = 0x400;
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
    REG_DMACON = 0x8400;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = 0x400;
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
    REG_DMACON = DMACON_BLT_ON;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    *(ushort *)(unaff_A6 + BLTAFWM) = uVar4;
    *(ushort *)(unaff_A6 + BLTALWM) = uVar4;
    *(ushort *)(unaff_A6 + BLTBDAT) = ~uVar4;
    *(int *)(unaff_A6 + BLTAPT) = in_A0;
    *(int *)(unaff_A6 + BLTDPT) = in_A0;
    *(undefined2 *)(unaff_A6 + BLTAMOD) = FB_BLT_MOD_AFTER_1_WORD;
    *(undefined2 *)(unaff_A6 + BLTDMOD) = FB_BLT_MOD_AFTER_1_WORD;
    *(undefined2 *)(unaff_A6 + BLTCON0) = unaff_D5w;
    *(undefined2 *)(unaff_A6 + BLTCON1) = 0;
    *(ushort *)(unaff_A6 + BLTSIZE) = unaff_D3w << 6 | 1;
    in_A0 = in_A0 + 2;
    if (unaff_D2w == 0) {
      return;
    }
  }
  uVar4 = unaff_D2w >> 4;
  if (uVar4 != 0) {
    REG_DMACON = DMACON_BLT_ON;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    *(int *)(unaff_A6 + BLTDPT) = in_A0;
    *(ushort *)(unaff_A6 + BLTDMOD) = uVar4 * -2 + ROW_STRIDE_BYTES;
    *(undefined2 *)(unaff_A6 + BLTCON0) = unaff_D6w;
    *(undefined2 *)(unaff_A6 + BLTCON1) = 0;
    *(ushort *)(unaff_A6 + BLTSIZE) = uVar4 | unaff_D3w << 6;
    in_A0 = (short)(uVar4 * 2) + in_A0;
  }
  if ((unaff_D2w & TILE_MASK) != 0) {
    uVar4 = *(ushort *)((int)tailMaskTable + (int)(short)((unaff_D2w & TILE_MASK) * 2));
    uVar1 = ~uVar4;
    REG_DMACON = DMACON_BLT_ON;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    *(ushort *)(unaff_A6 + BLTAFWM) = uVar1;
    *(ushort *)(unaff_A6 + BLTALWM) = uVar1;
    *(ushort *)(unaff_A6 + BLTBDAT) = uVar4;
    *(int *)(unaff_A6 + BLTAPT) = in_A0;
    *(int *)(unaff_A6 + BLTDPT) = in_A0;
    *(undefined2 *)(unaff_A6 + BLTAMOD) = FB_BLT_MOD_AFTER_1_WORD;
    *(undefined2 *)(unaff_A6 + BLTDMOD) = FB_BLT_MOD_AFTER_1_WORD;
    *(undefined2 *)(unaff_A6 + BLTCON0) = unaff_D5w;
    *(undefined2 *)(unaff_A6 + BLTCON1) = 0;
    *(ushort *)(unaff_A6 + BLTSIZE) = unaff_D3w << 6 | 1;
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
  void *pvVar7;
  
  BlitterSpan4Planes();
  iVar6 = (uint)(ushort)(in_D1w << 2) * PLANE_STRIDE;
  uVar1 = unaff_D2w + -1 + in_D0w;
  sVar5 = (in_D0w >> 4) * 2;
  pvVar7 = (void *)((int)sVar5 + iVar6 + in_A1);
  REG_DMACON = DMACON_BLT_ON;
  uVar3 = REG_DMACONR._0_1_;
  do {
    bVar4 = REG_DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  uVar2 = ((uVar1 >> 4) - (in_D0w >> 4)) + 1;
  REG_BLTCON0 = BLTCON0_USEA_USEB_USED_LF_FC;
  REG_BLTCON1 = 0;
  REG_BLTAFWM = *(ushort *)((int)firstWordMaskTable + (int)(short)((in_D0w & TILE_MASK) * 2));
  REG_BLTALWM = *(ushort *)((int)lastWordMaskTable + (int)(short)((uVar1 & TILE_MASK) * 2));
  REG_BLTAPTH = (void *)((int)sVar5 + iVar6 + in_A0);
  REG_BLTBPTH = pvVar7;
  REG_BLTDPTH = pvVar7;
  uVar1 = uVar2 * -2 + PLANE_STRIDE;
  REG_BLTAMOD = uVar1;
  REG_BLTBMOD = uVar1;
  REG_BLTDMOD = uVar1;
  REG_BLTSIZE = uVar2 | unaff_D3w << 8;
  return;
}


// --- BlitterCopyOverlayToScreen @ 00103efc ---

void __usercall BlitterCopyOverlayToScreen(void)

{
  undefined1 uVar1;
  byte bVar2;
  uchar *puVar3;
  
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTALWM = BLT_FWM_ALL;
  REG_BLTAFWM = BLT_FWM_ALL;
  REG_BLTCON1 = 0;
  REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
  REG_BLTAMOD = 0;
  REG_BLTDMOD = 0;
  REG_BLTDPTH = frontbufferBasePtr;
  puVar3 = frontbufferBase;
  if (frontbufferBasePtr != frontbufferBaseAlt) {
    puVar3 = frontbufferBaseAlt;
  }
  REG_BLTAPTH = puVar3;
  REG_BLTSIZE = BLTSIZE_OVERLAY_PANEL;
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTSIZE = 0x16;
  return;
}


// --- BlitterCopyPanelToScreen @ 00103f98 ---

void __usercall BlitterCopyPanelToScreen(void)

{
  undefined1 uVar1;
  byte bVar2;
  
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTALWM = BLT_FWM_ALL;
  REG_BLTAFWM = BLT_FWM_ALL;
  REG_BLTCON1 = 0;
  REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
  REG_BLTAMOD = 0;
  REG_BLTDMOD = 0;
  REG_BLTAPTH = frontbufferMaskBuffer;
  REG_BLTDPTH = frontbufferBasePtr;
  REG_BLTSIZE = BLTSIZE_OVERLAY_PANEL;
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTSIZE = 0x16;
  return;
}


// --- HWSprite_LoadFromSpriteGraphics @ 0010401e ---

void __usercall HWSprite_LoadFromSpriteGraphics(short spriteIndex)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  
  puVar1 = *(undefined4 **)(spriteGraphicsPtr + (short)(spriteIndex << 2));
  REG_DMACON = DMACON_BLT_ON;
  uVar2 = REG_DMACONR._0_1_;
  do {
    bVar3 = REG_DMACONR._0_1_;
  } while ((bVar3 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTALWM = BLT_FWM_ALL;
  REG_BLTAFWM = BLT_FWM_ALL;
  REG_BLTCON1 = 0;
  REG_BLTCON0 = BLTCON0_USED_LF_F0;
  REG_BLTADAT = 0;
  REG_BLTDMOD = 0;
  REG_BLTDPTH = (void *)*puVar1;
  REG_BLTSIZE = *(short *)((int)puVar1 + TILE_STRIDE) + *(short *)(puVar1 + 3) * 0x100;
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
  
  puVar1 = *(undefined4 **)(spriteGraphicsPtr + (short)(unaff_D0w << 2));
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


// --- BlitSpritePlanar_Word_StridedDest @ 001041a6 ---

void __usercall BlitSpritePlanar_Word_StridedDest(void)

{
  undefined4 *puVar1;
  short sVar2;
  ushort uVar3;
  short unaff_D0w;
  short sVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  puVar1 = *(undefined4 **)(spriteGraphicsPtr + (short)(unaff_D0w << 2));
  if (*(short *)(puVar1 + 2) == 0) {
    puVar6 = (ushort *)puVar1[1];
    puVar5 = (ushort *)*puVar1;
    sVar2 = *(short *)((int)puVar1 + 0xe);
    sVar4 = *(short *)(puVar1 + 3) + -1;
    do {
      *puVar6 = *(ushort *)((int)puVar5 + (int)(short)(sVar2 * 6)) |
                *(ushort *)((int)puVar5 + (int)(short)(sVar2 * 4)) |
                *(ushort *)((int)puVar5 + (int)(short)(sVar2 * 2)) | *puVar5;
      puVar5 = (ushort *)((int)(short)(sVar2 << 3) + (int)puVar5);
      puVar6 = (ushort *)((int)(short)(sVar2 * 2) + (int)puVar6);
      sVar4 = sVar4 + -1;
    } while (sVar4 != -1);
    return;
  }
  puVar6 = (ushort *)puVar1[1];
  puVar5 = (ushort *)*puVar1;
  sVar2 = *(short *)((int)puVar1 + 0xe);
  sVar4 = *(short *)(puVar1 + 3) + -1;
  do {
    uVar3 = *(ushort *)((int)puVar5 + (int)(short)(sVar2 * 6)) |
            *(ushort *)((int)puVar5 + (int)(short)(sVar2 * 4)) |
            *(ushort *)((int)puVar5 + (int)(short)(sVar2 * 2)) | *puVar5;
    *puVar6 = uVar3;
    *(ushort *)((int)puVar6 + (int)(short)(sVar2 * 2)) = uVar3;
    *(ushort *)((int)puVar6 + (int)(short)(sVar2 * 4)) = uVar3;
    *(ushort *)((int)puVar6 + (int)(short)(sVar2 * 6)) = uVar3;
    puVar5 = (ushort *)((int)(short)(sVar2 << 3) + (int)puVar5);
    puVar6 = (ushort *)((int)(short)(sVar2 << 3) + (int)puVar6);
    sVar4 = sVar4 + -1;
  } while (sVar4 != -1);
  return;
}


// --- BlitSpritePlanar_Long_StridedDest @ 0010423c ---

void __usercall BlitSpritePlanar_Long_StridedDest(void)

{
  undefined4 *puVar1;
  short sVar2;
  uint uVar3;
  short unaff_D0w;
  short sVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar1 = *(undefined4 **)(spriteGraphicsPtr + (short)(unaff_D0w << 2));
  if (*(short *)(puVar1 + 2) == 0) {
    puVar6 = (uint *)puVar1[1];
    puVar5 = (uint *)*puVar1;
    sVar2 = *(short *)((int)puVar1 + 0xe);
    sVar4 = *(short *)(puVar1 + 3) + -1;
    do {
      *puVar6 = *(uint *)((int)puVar5 + (int)(short)(sVar2 * 6)) |
                *(uint *)((int)puVar5 + (int)(short)(sVar2 * 4)) |
                *(uint *)((int)puVar5 + (int)(short)(sVar2 * 2)) | *puVar5;
      puVar5 = (uint *)((int)(short)(sVar2 << 3) + (int)puVar5);
      puVar6 = (uint *)((int)(short)(sVar2 * 2) + (int)puVar6);
      sVar4 = sVar4 + -1;
    } while (sVar4 != -1);
    return;
  }
  puVar6 = (uint *)puVar1[1];
  puVar5 = (uint *)*puVar1;
  sVar2 = *(short *)((int)puVar1 + 0xe);
  sVar4 = *(short *)(puVar1 + 3) + -1;
  do {
    uVar3 = *(uint *)((int)puVar5 + (int)(short)(sVar2 * 6)) |
            *(uint *)((int)puVar5 + (int)(short)(sVar2 * 4)) |
            *(uint *)((int)puVar5 + (int)(short)(sVar2 * 2)) | *puVar5;
    *puVar6 = uVar3;
    *(uint *)((int)puVar6 + (int)(short)(sVar2 * 2)) = uVar3;
    *(uint *)((int)puVar6 + (int)(short)(sVar2 * 4)) = uVar3;
    *(uint *)((int)puVar6 + (int)(short)(sVar2 * 6)) = uVar3;
    puVar5 = (uint *)((int)(short)(sVar2 << 3) + (int)puVar5);
    puVar6 = (uint *)((int)(short)(sVar2 << 3) + (int)puVar6);
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
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  void *pvVar5;
  ushort uVar6;
  undefined1 uVar7;
  byte bVar8;
  ushort uVar10;
  int iVar9;
  int iVar11;
  ushort uVar12;
  short sVar13;
  
  piVar2 = *(int **)(spriteGraphicsPtr + (short)(dstSprite << 2));
  puVar3 = *(undefined4 **)(spriteGraphicsPtr + (short)(srcSprite << 2));
  REG_DMACON = DMACON_BLT_ON;
  uVar7 = REG_DMACONR._0_1_;
  do {
    bVar8 = REG_DMACONR._0_1_;
  } while ((bVar8 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  uVar10 = 0;
  uVar12 = *(ushort *)((int)puVar3 + 10) & TILE_MASK;
  if (uVar12 == 0) {
    uVar12 = 0x10;
  }
  sVar13 = *(short *)((int)puVar3 + TILE_STRIDE) + 1;
  if ((ushort)(uVar12 + (xOffset & TILE_MASK)) < 0x11) {
    uVar10 = 0xffff;
    sVar13 = *(short *)((int)puVar3 + TILE_STRIDE);
  }
  REG_BLTALWM = uVar10;
  REG_BLTAFWM = BLT_FWM_ALL;
  uVar12 = xOffset * 0x1000;
  REG_BLTCON1 = uVar12;
  if (puVar3[1] == 0) {
    uVar12 = uVar12 + BLTCON0_BASE_SINGLE;
    REG_BLTADAT = 0xffff;
  }
  else {
    uVar12 = uVar12 + BLTCON0_BASE_LINKED;
  }
  REG_BLTCON0 = uVar12;
  uVar10 = *(short *)((int)piVar2 + TILE_STRIDE) << 3;
  uVar12 = uVar10 >> NUM_PLANES_SHIFT;
  pvVar4 = (void *)(*piVar2 + (uint)yOffset * (uint)uVar10 + (xOffset >> 3 & WORD_ALIGN_EVEN_MASK));
  REG_BLTCPTH = pvVar4;
  REG_BLTDPTH = pvVar4;
  if (*(short *)(puVar3 + 2) != 0) {
    uVar10 = *(short *)((int)puVar3 + TILE_STRIDE) * 2 + sVar13 * -2;
    REG_BLTAMOD = uVar10;
    REG_BLTBMOD = uVar10;
    uVar12 = uVar12 + sVar13 * -2;
    REG_BLTCMOD = uVar12;
    REG_BLTDMOD = uVar12;
    REG_BLTBPTH = (void *)*puVar3;
    REG_BLTAPTH = (void *)puVar3[1];
    REG_BLTSIZE = sVar13 + *(short *)(puVar3 + 3) * 0x100;
    return (uchar)uVar10;
  }
  uVar10 = sVar13 + *(short *)(puVar3 + 3) * 0x40;
  REG_BLTBMOD = *(short *)((int)puVar3 + TILE_STRIDE) * 8 + sVar13 * -2;
  REG_BLTAMOD = *(short *)((int)puVar3 + TILE_STRIDE) * 2 + sVar13 * -2;
  uVar6 = uVar12 * 4 + sVar13 * -2;
  REG_BLTCMOD = uVar6;
  REG_BLTDMOD = uVar6;
  pvVar1 = (void *)puVar3[1];
  REG_BLTBPTH = (void *)*puVar3;
  REG_BLTAPTH = pvVar1;
  REG_BLTSIZE = uVar10;
  iVar9 = (int)(short)uVar12;
  iVar11 = (int)(short)(*(short *)((int)puVar3 + TILE_STRIDE) << 1);
  pvVar4 = (void *)(iVar9 + (int)pvVar4);
  pvVar5 = (void *)(iVar11 + (int)*puVar3);
  REG_DMACON = DMACON_BLT_ON;
  uVar7 = REG_DMACONR._0_1_;
  do {
    bVar8 = REG_DMACONR._0_1_;
  } while ((bVar8 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTCPTH = pvVar4;
  REG_BLTDPTH = pvVar4;
  REG_BLTBPTH = pvVar5;
  REG_BLTAPTH = pvVar1;
  REG_BLTSIZE = uVar10;
  pvVar4 = (void *)(iVar9 + (int)pvVar4);
  pvVar5 = (void *)(iVar11 + (int)pvVar5);
  REG_DMACON = DMACON_BLT_ON;
  uVar7 = REG_DMACONR._0_1_;
  do {
    bVar8 = REG_DMACONR._0_1_;
  } while ((bVar8 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTCPTH = pvVar4;
  REG_BLTDPTH = pvVar4;
  REG_BLTBPTH = pvVar5;
  REG_BLTAPTH = pvVar1;
  REG_BLTSIZE = uVar10;
  pvVar4 = (void *)(iVar9 + (int)pvVar4);
  REG_DMACON = DMACON_BLT_ON;
  uVar7 = REG_DMACONR._0_1_;
  do {
    bVar8 = REG_DMACONR._0_1_;
  } while ((bVar8 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTCPTH = pvVar4;
  REG_BLTDPTH = pvVar4;
  REG_BLTBPTH = (void *)(iVar11 + (int)pvVar5);
  REG_BLTAPTH = pvVar1;
  REG_BLTSIZE = uVar10;
  return (uchar)pvVar4;
}


// --- DrawSpriteHotspotInCameraView @ 00104510 ---

void __usercall DrawSpriteHotspotInCameraView(void)

{
  DrawSpriteInCameraView();
  return;
}


// --- DrawSpriteInCameraView @ 0010452a ---

/* in:
        D0 - sprite index
        D1 - x
        D2 - y
        ebp - save sprite flag, -1 = don't save sprite */

void __usercall DrawSpriteInCameraView(void)

{
  void *sprite;
  ushort x;
  ushort y;
  short unaff_D0w;
  short unaff_D1w;
  short unaff_D2w;
  
  sprite = *(void **)(spriteGraphicsPtr + (short)(unaff_D0w << 2));
  x = unaff_D1w - g_cameraX._0_2_;
  y = unaff_D2w - g_cameraY._0_2_;
  if (((((short)x < SCREEN_WIDTH) && ((short)y < SCREEN_HEIGHT)) &&
      (-*(short *)((int)sprite + 10) < (short)x)) && (-*(short *)((int)sprite + 0xc) < (short)y)) {
    DrawSpriteClipped(sprite,x,y);
    return;
  }
  return;
}


// --- DarkenRectangle @ 00104570 ---

/* in:  
        D0 - sprite index
        D1 - x
        D2 - y
   
   destroys: eax, ebx, ecx, edx, esi, edi
   
   Darkens rectangle of sprite dimensions by setting high bit of every pixel in region.
   Game palette is created in such a way that every color with index smaller than 128
   has its darkened counterpart with index + 128.
   Saves sprite area unconditionally. */

void __usercall DarkenRectangle(ushort spriteIndex,ushort x,ushort y)

{
  DrawSpriteClipped(*(void **)(spriteGraphicsPtr + (short)(spriteIndex << 2)),x,y);
  return;
}


// --- DrawSpriteClipped @ 00104580 ---

void __usercall DrawSpriteClipped(void *sprite,ushort x,ushort y)

{
  uchar *puVar1;
  void *pvVar2;
  ushort uVar3;
  undefined1 uVar4;
  byte bVar5;
  uchar *puVar6;
  int iVar7;
  ushort uVar8;
  word wVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  int *piVar18;
  void *pvVar19;
  
  puVar6 = frontbufferBasePtr;
  if ((*(short *)((int)sprite + 8) == 0) && (*(short *)((int)sprite + 8) == 0)) {
    wVar9 = *(word *)((int)sprite + 0xc);
    sVar10 = 0;
    if ((short)y < 0) {
      sVar10 = -y;
      wVar9 = y + wVar9;
      y = 0;
    }
    uVar3 = wVar9 + y + -SCREEN_HEIGHT;
    if (-1 < (int)((uint)uVar3 << 0x10)) {
      wVar9 = wVar9 - uVar3;
    }
    uVar3 = cameraXMod320 + x;
    uVar8 = cameraYMod320 + y;
    if (SCREEN_HEIGHT - 1 < (short)uVar8) {
      uVar8 = uVar8 + -SCREEN_HEIGHT;
    }
    uVar15 = 0;
    uVar16 = *(ushort *)((int)sprite + 10) & TILE_MASK;
    if (uVar16 == 0) {
      uVar16 = 0x10;
    }
    uVar17 = *(ushort *)((int)sprite + TILE_STRIDE) + 1;
    if ((ushort)(uVar16 + (uVar3 & TILE_MASK)) < 0x11) {
      uVar15 = BLT_FWM_ALL;
      uVar17 = *(ushort *)((int)sprite + TILE_STRIDE);
    }
    REG_DMACON = DMACON_BLT_ON;
    uVar4 = REG_DMACONR._0_1_;
    do {
      bVar5 = REG_DMACONR._0_1_;
    } while ((bVar5 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTALWM = uVar15;
    REG_BLTAFWM = BLT_FWM_ALL;
    uVar16 = uVar3 * 0x1000;
    REG_BLTCON1 = uVar16;
    if (*(int *)((int)sprite + 4) == 0) {
      uVar16 = uVar16 + BLTCON0_BASE_SINGLE;
      REG_BLTADAT = 0xffff;
    }
    else {
      uVar16 = uVar16 + BLTCON0_BASE_LINKED;
    }
    REG_BLTCON0 = uVar16;
    sVar14 = wVar9 + uVar8 + -SCREEN_HEIGHT;
    sVar11 = 0;
    if (SCREEN_HEIGHT - 1 < (ushort)(wVar9 + uVar8) && sVar14 != 0) {
      wVar9 = wVar9 - sVar14;
      sVar11 = sVar14;
    }
    iVar7 = (int)(short)(((short)uVar3 >> TILE_SHIFT_X) << 1);
    puVar1 = frontbufferBasePtr + (uint)uVar8 * ROW_STRIDE_BYTES + iVar7;
    REG_BLTCPTH = puVar1;
    REG_BLTDPTH = puVar1;
    queuedLineCount = wVar9;
    *(uchar **)(spriteBlitQueue + 4) = puVar1;
    *(byte **)spriteBlitQueue = frontbufferMaskBuffer + ((int)puVar1 - (int)puVar6);
    *(ushort *)(spriteBlitQueue + 10) = uVar17 + wVar9 * 0x100;
    uVar3 = uVar17 + wVar9 * 0x40;
    REG_BLTAMOD = *(short *)((int)sprite + TILE_STRIDE) * 2 + uVar17 * -2;
    REG_BLTBMOD = *(short *)((int)sprite + TILE_STRIDE) * 8 + uVar17 * -2;
    *(ushort *)(spriteBlitQueue + 8) = uVar17 * -2 + PLANE_STRIDE;
    uVar8 = uVar17 * -2 + 0xb0;
    REG_BLTCMOD = uVar8;
    REG_BLTDMOD = uVar8;
    iVar13 = 0;
    if (sVar10 != 0) {
      iVar13 = (uint)(ushort)(sVar10 << NUM_PLANES_SHIFT) *
               (uint)*(ushort *)((int)sprite + TILE_STRIDE) * 2;
    }
    savedSrcPlaneA = iVar13 + *(int *)sprite;
    REG_BLTBPTH = (void *)savedSrcPlaneA;
    savedSrcPlaneB =
         CONCAT22((short)((uint)iVar13 >> 0x10),(ushort)iVar13 >> NUM_PLANES_SHIFT) +
         *(int *)((int)sprite + 4);
    REG_BLTAPTH = (void *)savedSrcPlaneB;
    piVar18 = (int *)(spriteBlitQueue + 0xc);
    REG_BLTSIZE = uVar3;
    iVar13 = (int)(short)(*(short *)((int)sprite + TILE_STRIDE) << 1);
    REG_DMACON = DMACON_BLT_ON;
    uVar4 = REG_DMACONR._0_1_;
    do {
      bVar5 = REG_DMACONR._0_1_;
    } while ((bVar5 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTCPTH = puVar1 + PLANE_STRIDE;
    REG_BLTDPTH = puVar1 + PLANE_STRIDE;
    REG_BLTAPTH = (void *)savedSrcPlaneB;
    REG_BLTBPTH = (void *)(iVar13 + savedSrcPlaneA);
    REG_BLTSIZE = uVar3;
    pvVar19 = (void *)(iVar13 + (int)(iVar13 + savedSrcPlaneA));
    REG_DMACON = DMACON_BLT_ON;
    uVar4 = REG_DMACONR._0_1_;
    do {
      bVar5 = REG_DMACONR._0_1_;
    } while ((bVar5 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTCPTH = puVar1 + 0x58;
    REG_BLTDPTH = puVar1 + 0x58;
    REG_BLTAPTH = (void *)savedSrcPlaneB;
    REG_BLTBPTH = pvVar19;
    REG_BLTSIZE = uVar3;
    REG_DMACON = DMACON_BLT_ON;
    uVar4 = REG_DMACONR._0_1_;
    do {
      bVar5 = REG_DMACONR._0_1_;
    } while ((bVar5 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    REG_BLTCPTH = puVar1 + 0x84;
    REG_BLTDPTH = puVar1 + 0x84;
    REG_BLTAPTH = (void *)savedSrcPlaneB;
    REG_BLTBPTH = (void *)(iVar13 + (int)pvVar19);
    REG_BLTSIZE = uVar3;
    if (sVar11 != 0) {
      iVar13 = (uint)queuedLineCount * (uint)*(ushort *)((int)sprite + TILE_STRIDE);
      pvVar19 = (void *)(iVar13 * 2 + savedSrcPlaneB);
      pvVar2 = (void *)(savedSrcPlaneA + iVar13 * 8);
      REG_DMACON = DMACON_BLT_ON;
      uVar4 = REG_DMACONR._0_1_;
      do {
        bVar5 = REG_DMACONR._0_1_;
      } while ((bVar5 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      puVar1 = puVar6 + iVar7;
      REG_BLTCPTH = puVar1;
      REG_BLTDPTH = puVar1;
      REG_BLTAPTH = pvVar19;
      REG_BLTBPTH = pvVar2;
      *(uchar **)(spriteBlitQueue + 0x10) = puVar1;
      *piVar18 = (int)(frontbufferMaskBuffer + ((int)puVar1 - (int)puVar6));
      *(ushort *)(spriteBlitQueue + 0x16) = (uVar17 & 0x7fff) + sVar11 * 0x100;
      uVar3 = (uVar17 & 0x7fff) + sVar11 * 0x40;
      REG_BLTSIZE = uVar3;
      iVar13 = (int)(short)(*(short *)((int)sprite + TILE_STRIDE) << 1);
      pvVar2 = (void *)(iVar13 + (int)pvVar2);
      REG_DMACON = DMACON_BLT_ON;
      uVar4 = REG_DMACONR._0_1_;
      do {
        bVar5 = REG_DMACONR._0_1_;
      } while ((bVar5 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTCPTH = puVar1 + PLANE_STRIDE;
      REG_BLTDPTH = puVar1 + PLANE_STRIDE;
      REG_BLTAPTH = pvVar19;
      REG_BLTBPTH = pvVar2;
      REG_BLTSIZE = uVar3;
      pvVar2 = (void *)(iVar13 + (int)pvVar2);
      REG_DMACON = DMACON_BLT_ON;
      uVar4 = REG_DMACONR._0_1_;
      do {
        bVar5 = REG_DMACONR._0_1_;
      } while ((bVar5 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTCPTH = puVar1 + 0x58;
      REG_BLTDPTH = puVar1 + 0x58;
      REG_BLTAPTH = pvVar19;
      REG_BLTBPTH = pvVar2;
      REG_BLTSIZE = uVar3;
      REG_DMACON = DMACON_BLT_ON;
      uVar4 = REG_DMACONR._0_1_;
      do {
        bVar5 = REG_DMACONR._0_1_;
      } while ((bVar5 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTCPTH = puVar1 + 0x84;
      REG_BLTDPTH = puVar1 + 0x84;
      REG_BLTAPTH = pvVar19;
      REG_BLTBPTH = (void *)(iVar13 + (int)pvVar2);
      REG_BLTSIZE = uVar3;
      *(undefined2 *)(spriteBlitQueue + 0x14) = *(undefined2 *)(spriteBlitQueue + 8);
      piVar18 = (int *)(spriteBlitQueue + 0x18);
    }
    *piVar18 = BLT_BLITQ_END;
    spriteBlitQueue = (dword)piVar18;
    return;
  }
  sVar10 = *(short *)((int)sprite + 0xc);
  sVar14 = 0;
  if ((short)y < 0) {
    sVar14 = -y;
    sVar10 = y + sVar10;
    y = 0;
  }
  uVar3 = (sVar10 + y) - 0x110;
  if (-1 < (int)((uint)uVar3 << 0x10)) {
    sVar10 = sVar10 - uVar3;
  }
  uVar3 = cameraXMod320 + x;
  uVar8 = cameraYMod320 + y;
  if (0x10f < (short)uVar8) {
    uVar8 = uVar8 - 0x110;
  }
  uVar15 = 0;
  uVar16 = *(ushort *)((int)sprite + 10) & 0xf;
  if (uVar16 == 0) {
    uVar16 = 0x10;
  }
  uVar17 = *(ushort *)((int)sprite + 0xe) + 1;
  if ((ushort)(uVar16 + (uVar3 & 0xf)) < 0x11) {
    uVar15 = 0xffff;
    uVar17 = *(ushort *)((int)sprite + 0xe);
  }
  REG_DMACON = 0x8400;
  uVar4 = REG_DMACONR._0_1_;
  do {
    bVar5 = REG_DMACONR._0_1_;
  } while ((bVar5 & 0x40) != 0);
  REG_DMACON = 0x400;
  REG_BLTALWM = uVar15;
  REG_BLTAFWM = 0xffff;
  uVar16 = uVar3 * 0x1000;
  REG_BLTCON1 = uVar16;
  if (*(int *)((int)sprite + 4) == 0) {
    uVar16 = uVar16 + 0x7ca;
    REG_BLTADAT = 0xffff;
  }
  else {
    uVar16 = uVar16 + 0xfca;
  }
  REG_BLTCON0 = uVar16;
  sVar11 = (sVar10 + uVar8) - 0x110;
  sVar12 = 0;
  if (0x10f < (ushort)(sVar10 + uVar8) && sVar11 != 0) {
    sVar10 = sVar10 - sVar11;
    sVar12 = sVar11;
  }
  iVar7 = (int)(short)(((short)uVar3 >> 4) << 1);
  puVar1 = frontbufferBasePtr + (uint)uVar8 * 0xb0 + iVar7;
  REG_BLTCPTH = puVar1;
  REG_BLTDPTH = puVar1;
  *(uchar **)(spriteBlitQueue + 4) = puVar1;
  *(byte **)spriteBlitQueue = frontbufferMaskBuffer + ((int)puVar1 - (int)puVar6);
  uVar3 = uVar17 + sVar10 * 0x100;
  uVar8 = *(short *)((int)sprite + 0xe) * 2 + uVar17 * -2;
  REG_BLTAMOD = uVar8;
  REG_BLTBMOD = uVar8;
  uVar8 = uVar17 * -2 + 0x2c;
  REG_BLTCMOD = uVar8;
  REG_BLTDMOD = uVar8;
  *(ushort *)(spriteBlitQueue + 8) = uVar8;
  iVar13 = 0;
  if (sVar14 != 0) {
    iVar13 = (uint)(ushort)(sVar14 << 2) * (uint)*(ushort *)((int)sprite + 0xe) * 2;
  }
  REG_BLTBPTH = (void *)(iVar13 + *(int *)sprite);
  REG_BLTAPTH = (void *)(iVar13 + *(int *)((int)sprite + 4));
  REG_BLTSIZE = uVar3;
  *(ushort *)(spriteBlitQueue + 10) = uVar3;
  piVar18 = (int *)(spriteBlitQueue + 0xc);
  if (sVar12 != 0) {
    puVar1 = puVar6 + iVar7;
    uVar3 = (uVar17 & 0x7fff) + sVar12 * 0x100;
    *(uchar **)(spriteBlitQueue + 0x10) = puVar1;
    REG_DMACON = 0x8400;
    uVar4 = REG_DMACONR._0_1_;
    do {
      bVar5 = REG_DMACONR._0_1_;
    } while ((bVar5 & 0x40) != 0);
    REG_DMACON = 0x400;
    REG_BLTCPTH = puVar1;
    REG_BLTDPTH = puVar1;
    REG_BLTSIZE = uVar3;
    *piVar18 = (int)(frontbufferMaskBuffer + ((int)puVar1 - (int)puVar6));
    *(undefined2 *)(spriteBlitQueue + 0x14) = *(undefined2 *)(spriteBlitQueue + 8);
    *(ushort *)(spriteBlitQueue + 0x16) = uVar3;
    piVar18 = (int *)(spriteBlitQueue + 0x18);
  }
  *piVar18 = -1;
  spriteBlitQueue = (dword)piVar18;
  return;
}


// --- DrawQueuedSprites @ 00104b04 ---

void __usercall DrawQueuedSprites(void)

{
  void *sprite;
  Sprite *pSVar1;
  ushort y;
  ushort x;
  uint *puVar2;
  
  puVar2 = (uint *)dword_2BCF8;
  while (puVar2 != (uint *)&renderStackBase) {
    y = *(ushort *)((int)puVar2 + -2);
    x = *(ushort *)(puVar2 + -1);
    sprite = (void *)puVar2[-2];
    puVar2 = puVar2 + -3;
    pSVar1 = (Sprite *)*puVar2;
    if (pSVar1->teamNumber != 0) {
      SaveCoordinatesForHighlights(*(short *)((int)sprite + 0x16),x,y);
    }
    if ((pSVar1 < &goalie1Sprite) || ((Sprite *)((int)&team2Player11Sprite.sentAway + 1) < pSVar1))
    {
      if (pSVar1->saveSprite == 0) {
        DrawSpriteClipped(sprite,x,y);
      }
      else {
        DrawSprite_entry2();
      }
    }
    else {
      QueueMaskedSpriteBlitClipped(sprite,x,y);
    }
  }
  return;
}


// --- RenderSpriteBandsToCopperLists @ 00104b56 ---

void __usercall RenderSpriteBandsToCopperLists(void)

{
  undefined1 uVar1;
  byte bVar2;
  uint *puVar3;
  uint *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  puVar4 = bitPlane1BasePtr;
  puVar3 = bitPlane0BasePtr;
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTALWM = BLT_FWM_ALL;
  REG_BLTAFWM = BLT_FWM_ALL;
  REG_BLTCON1 = 0;
  REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
  REG_BLTAMOD = 4;
  REG_BLTDMOD = 0;
  pbVar8 = (byte *)dword_2C044;
  while (pbVar8 != plane01RenderStackBase) {
    puVar5 = (ushort *)(pbVar8 + -2);
    puVar6 = (ushort *)(pbVar8 + -4);
    pbVar7 = pbVar8 + -8;
    pbVar8 = pbVar8 + -0xc;
    if (**(short **)pbVar8 != 0) {
      SaveCoordinatesForHighlights(*(short *)(*(int *)pbVar7 + 0x16),*puVar6,*puVar5);
    }
    RenderSpriteBandPlanePair();
  }
  *puVar3 = copperZeroLong;
  *puVar4 = copperZeroLong;
  puVar4 = bitPlane3BasePtr;
  puVar3 = bitPlane2BasePtr;
  pbVar8 = plane23RenderStackPtr;
  while (pbVar8 != plane23RenderStackBase) {
    puVar5 = (ushort *)(pbVar8 + -2);
    puVar6 = (ushort *)(pbVar8 + -4);
    pbVar7 = pbVar8 + -8;
    pbVar8 = pbVar8 + -0xc;
    if (**(short **)pbVar8 != 0) {
      SaveCoordinatesForHighlights(*(short *)(*(int *)pbVar7 + 0x16),*puVar6,*puVar5);
    }
    RenderSpriteBandPlanePair();
  }
  *puVar3 = copperZeroLong;
  *puVar4 = copperZeroLong;
  return;
}


// --- RenderSpriteBandPlanePair @ 00104c28 ---

void __usercall RenderSpriteBandPlanePair(void)

{
  ushort uVar1;
  short sVar2;
  undefined1 uVar3;
  byte bVar4;
  short unaff_D1w;
  short unaff_D2w;
  ushort uVar5;
  int *unaff_A0;
  short *unaff_A4;
  short *unaff_A5;
  int unaff_A6;
  
  uVar1 = *(short *)(unaff_A0 + 3) + unaff_D2w + 0x24;
  sVar2 = (unaff_D2w + 0x24U) * 0x100 + ((ushort)(unaff_D1w + 0x70U) >> 1 & 0xff);
  *unaff_A4 = sVar2;
  *unaff_A5 = sVar2;
  uVar5 = uVar1 * 0x100;
  if ((unaff_D2w + 0x24U & 0x100) != 0) {
    uVar5 = uVar5 | 4;
  }
  if ((uVar1 & 0x100) != 0) {
    uVar5 = uVar5 | 2;
  }
  if ((unaff_D1w + 0x70U & 1) != 0) {
    uVar5 = uVar5 | 1;
  }
  unaff_A4[1] = uVar5;
  unaff_A5[1] = uVar5;
  *(byte *)((int)unaff_A5 + 3) = *(byte *)((int)unaff_A5 + 3) | 0x80;
  REG_DMACON = DMACON_BLT_ON;
  uVar3 = REG_DMACONR._0_1_;
  do {
    bVar4 = REG_DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  *(int *)(unaff_A6 + BLTAPT) = *unaff_A0;
  *(short **)(unaff_A6 + BLTDPT) = unaff_A4 + 2;
  *(undefined2 *)(unaff_A6 + BLTSIZE) = *(undefined2 *)(unaff_A0 + 5);
  REG_DMACON = DMACON_BLT_ON;
  uVar3 = REG_DMACONR._0_1_;
  do {
    bVar4 = REG_DMACONR._0_1_;
  } while ((bVar4 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  *(int *)(unaff_A6 + BLTAPT) = *unaff_A0 + 4;
  *(short **)(unaff_A6 + BLTDPT) = unaff_A5 + 2;
  *(undefined2 *)(unaff_A6 + BLTSIZE) = *(undefined2 *)(unaff_A0 + 5);
  return;
}


// --- BuildSpriteBandAndGeneralRenderStacks @ 00104cf4 ---

void __usercall BuildSpriteBandAndGeneralRenderStacks(void)

{
  Sprite *pSVar1;
  int iVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  word wVar6;
  short sVar7;
  short sVar8;
  Sprite **ppSVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  word *pwVar13;
  
  if (numSpritesToRender != 0) {
    pbVar10 = plane01RenderStackBase;
    pbVar11 = plane23RenderStackBase;
    pbVar12 = &renderStackBase;
    occlMinYBuckets[0] = 0x7f;
    occlMinYBuckets[1] = 0xff;
    occlMinYBuckets[2] = 0x7f;
    occlMinYBuckets[3] = 0xff;
    occlMinYBuckets[4] = 0x7f;
    occlMinYBuckets[5] = 0xff;
    occlMinYBuckets[6] = 0x7f;
    occlMinYBuckets[7] = 0xff;
    occlMinYBuckets[8] = 0x7f;
    occlMinYBuckets[9] = 0xff;
    occlMinYBucketsActive[0] = 0x7f;
    occlMinYBucketsActive[1] = 0xff;
    occlMinYBucketsActive[2] = 0x7f;
    occlMinYBucketsActive[3] = 0xff;
    occlMinYBucketsActive[4] = 0x7f;
    occlMinYBucketsActive[5] = 0xff;
    occlMinYBucketsActive[6] = 0x7f;
    occlMinYBucketsActive[7] = 0xff;
    occlMinYBucketsActive[8] = 0x7f;
    occlMinYBucketsActive[9] = 0xff;
    occlMinYBucketsActive[10] = 0x7f;
    occlMinYBucketsActive[0xb] = 0xff;
    occlMinYBucketsActive[0xc] = 0x7f;
    occlMinYBucketsActive[0xd] = 0xff;
    occlMinYBucketsActive[0xe] = 0x7f;
    occlMinYBucketsActive[0xf] = 0xff;
    occlMinYBucketsActive[0x10] = 0x7f;
    occlMinYBucketsActive[0x11] = 0xff;
    occlMinYBucketsActive[0x12] = 0x7f;
    occlMinYBucketsActive[0x13] = 0xff;
    occlMinYBucketsActive[0x14] = 0x7f;
    occlMinYBucketsActive[0x15] = 0xff;
    occlMinYBucketsActive[0x16] = 0x7f;
    occlMinYBucketsActive[0x17] = 0xff;
    occlMinYBucketsActive[0x18] = 0x7f;
    occlMinYBucketsActive[0x19] = 0xff;
    occlMinYBucketsActive[0x1a] = 0x7f;
    occlMinYBucketsActive[0x1b] = 0xff;
    occlMinYBucketsActive[0x1c] = 0x7f;
    occlMinYBucketsActive[0x1d] = 0xff;
    occlMinYBucketsActive[0x1e] = 0x7f;
    occlMinYBucketsActive[0x1f] = 0xff;
    occlMinYBucketsActive[0x20] = 0x7f;
    occlMinYBucketsActive[0x21] = 0xff;
    occlMinYBucketsActive[0x22] = 0x7f;
    occlMinYBucketsActive[0x23] = 0xff;
    occlMinYBucketsActive[0x24] = 0x7f;
    occlMinYBucketsActive[0x25] = 0xff;
    occlMinYBucketsActive[0x26] = 0x7f;
    occlMinYBucketsActive[0x27] = 0xff;
    occlMinYBucketsActive[0x28] = 0x7f;
    occlMinYBucketsActive[0x29] = 0xff;
    occlMinYBucketsActive[0x2a] = 0x7f;
    occlMinYBucketsActive[0x2b] = 0xff;
    occlMinYBucketsActive[0x2c] = 0x7f;
    occlMinYBucketsActive[0x2d] = 0xff;
    occlMinYBucketsActive[0x2e] = 0x7f;
    occlMinYBucketsActive[0x2f] = 0xff;
    occlMinYBucketsActive[0x30] = 0x7f;
    occlMinYBucketsActive[0x31] = 0xff;
    occlMinYBucketsActive[0x32] = 0x7f;
    occlMinYBucketsActive[0x33] = 0xff;
    plane01BandTopY = 32000;
    plane23BandTopY = 32000;
    ppSVar9 = (Sprite **)((int)sortedSprites + (int)(short)(numSpritesToRender << 2));
    sVar8 = numSpritesToRender - 1;
    do {
      if (ppSVar9 == sortedSprites) {
        dword_2BCF8 = (dword)pbVar12;
        dword_2C044 = (dword)pbVar10;
        plane23RenderStackPtr = pbVar11;
        return;
      }
      ppSVar9 = ppSVar9 + -1;
      pSVar1 = *ppSVar9;
      if (-1 < (short)pSVar1->imageIndex) {
        iVar2 = *(int *)(spriteGraphicsPtr + (short)(pSVar1->imageIndex << 2));
        sVar5 = ((pSVar1->x).s.i - *(short *)(iVar2 + 0x10)) - g_cameraX._0_2_;
        wVar6 = (((pSVar1->y).s.i - *(short *)(iVar2 + 0x12)) - g_cameraY._0_2_) - (pSVar1->z).s.i;
        if ((((sVar5 < SCREEN_WIDTH) && ((short)wVar6 < SCREEN_HEIGHT)) &&
            (-*(short *)(iVar2 + 10) < sVar5)) && (-*(short *)(iVar2 + 0xc) < (short)wVar6)) {
          if ((overlayActiveFlag == 0) && (*(short *)(iVar2 + 10) < 0x11)) {
            sVar3 = (sVar5 >> 4) << 1;
            sVar7 = ((short)(*(short *)(iVar2 + 10) + sVar5 + -1) >> 4) << 1;
            if ((((short)wVar6 < 0) ||
                (sVar4 = *(short *)(iVar2 + 0xc) + wVar6,
                *(short *)(occlMinYBucketsActive + sVar3) < sVar4)) ||
               (*(short *)(occlMinYBucketsActive + sVar7) < sVar4)) {
enqueue_to_general_stack:
              pSVar1->field_56 = 0;
              *(Sprite **)pbVar12 = pSVar1;
              *(int *)(pbVar12 + 4) = iVar2;
              pwVar13 = (word *)(pbVar12 + 10);
              *(short *)(pbVar12 + 8) = sVar5;
              pbVar12 = pbVar12 + 0xc;
              *pwVar13 = wVar6;
            }
            else if (sVar4 < (short)plane23BandTopY) {
              pSVar1->field_56 = 2;
              plane23BandTopY = wVar6;
              *(Sprite **)pbVar11 = pSVar1;
              *(int *)(pbVar11 + 4) = iVar2;
              pwVar13 = (word *)(pbVar11 + 10);
              *(short *)(pbVar11 + 8) = sVar5;
              pbVar11 = pbVar11 + 0xc;
              *pwVar13 = wVar6;
            }
            else {
              if ((short)plane01BandTopY <= sVar4) goto enqueue_to_general_stack;
              pSVar1->field_56 = 1;
              plane01BandTopY = wVar6;
              *(Sprite **)pbVar10 = pSVar1;
              *(int *)(pbVar10 + 4) = iVar2;
              pwVar13 = (word *)(pbVar10 + 10);
              *(short *)(pbVar10 + 8) = sVar5;
              pbVar10 = pbVar10 + 0xc;
              *pwVar13 = wVar6;
            }
            if ((short)wVar6 < *(short *)(occlMinYBucketsActive + sVar3)) {
              *(word *)(occlMinYBucketsActive + sVar3) = wVar6;
            }
            if ((short)wVar6 < *(short *)(occlMinYBucketsActive + sVar7)) {
              *(word *)(occlMinYBucketsActive + sVar7) = wVar6;
            }
          }
          else {
            sVar7 = (sVar5 >> 4) << 1;
            sVar3 = *(short *)(iVar2 + 10);
            do {
              if ((short)wVar6 < *(short *)(occlMinYBucketsActive + sVar7)) {
                *(word *)(occlMinYBucketsActive + sVar7) = wVar6;
              }
              sVar7 = sVar7 + 2;
            } while (sVar7 <= (short)(((short)(sVar3 + sVar5 + -1) >> 4) * 2));
            pSVar1->field_56 = 0;
            *(Sprite **)pbVar12 = pSVar1;
            *(int *)(pbVar12 + 4) = iVar2;
            pwVar13 = (word *)(pbVar12 + 10);
            *(short *)(pbVar12 + 8) = sVar5;
            pbVar12 = pbVar12 + 0xc;
            *pwVar13 = wVar6;
          }
          pSVar1->onScreen = 1;
        }
        else {
          pSVar1->onScreen = 0;
        }
      }
      sVar8 = sVar8 + -1;
      dword_2BCF8 = (dword)pbVar12;
      dword_2C044 = (dword)pbVar10;
      plane23RenderStackPtr = pbVar11;
    } while (sVar8 != -1);
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


// --- DrawSprites @ 00104fbe ---

void __usercall DrawSprites(void)

{
  SortSprites();
  BuildSpriteBandAndGeneralRenderStacks();
  DrawQueuedSprites();
  RenderSpriteBandsToCopperLists();
  return;
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
  char cVar8;
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
    piVar1 = *(int **)(spriteGraphicsPtr + (short)(spriteNumber << 2));
    dword_10510C = (dword)(short)((*(short *)((int)piVar1 + 0xe) * 4 - *(short *)((int)piVar1 + 0xe)
                                  ) * 2);
    iVar7 = (int)(short)(*(short *)((int)piVar1 + 0xe) << 1);
    puVar17 = (ushort *)*piVar1;
    puVar18 = (ushort *)(iVar7 + (int)puVar17);
    puVar20 = (ushort *)(iVar7 + (int)puVar18);
    puVar22 = (ushort *)(iVar7 + (int)puVar20);
    sVar15 = *(short *)(piVar1 + 3) + -1;
    do {
      sVar13 = *(short *)((int)piVar1 + 0xe) + -1;
      do {
        uVar9 = *puVar17;
        uVar10 = *puVar18;
        uVar11 = *puVar20;
        uVar12 = *puVar22;
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
          uVar2 = *(ushort *)
                   ((int)colorConvTable +
                   (int)(short)(((((ushort)bVar3 << 1 | (ushort)bVar4) * 2 | (ushort)bVar5) * 2 |
                                (ushort)bVar6) * 2));
          if ((uVar2 & 1) != 0) {
            uVar9 = uVar9 | 1;
          }
          if ((uVar2 >> 1 & 1) != 0) {
            uVar10 = uVar10 | 1;
          }
          if ((uVar2 >> 2 & 1) != 0) {
            uVar11 = uVar11 | 1;
          }
          if ((uVar2 >> 3 & 1) != 0) {
            uVar12 = uVar12 | 1;
          }
          sVar14 = sVar14 + -1;
        } while (sVar14 != -1);
        puVar16 = puVar17 + 1;
        *puVar17 = uVar9;
        puVar19 = puVar18 + 1;
        *puVar18 = uVar10;
        puVar21 = puVar20 + 1;
        *puVar20 = uVar11;
        puVar23 = puVar22 + 1;
        *puVar22 = uVar12;
        sVar13 = sVar13 + -1;
        puVar17 = puVar16;
        puVar18 = puVar19;
        puVar20 = puVar21;
        puVar22 = puVar23;
      } while (sVar13 != -1);
      puVar17 = (ushort *)(dword_10510C + (int)puVar16);
      puVar18 = (ushort *)(dword_10510C + (int)puVar19);
      puVar20 = (ushort *)(dword_10510C + (int)puVar21);
      puVar22 = (ushort *)(dword_10510C + (int)puVar23);
      sVar15 = sVar15 + -1;
    } while (sVar15 != -1);
    return (char)(uVar2 >> 4);
  }
  piVar1 = *(int **)(spriteGraphicsPtr + (short)(spriteNumber << 2));
  uVar9 = *(ushort *)((int)piVar1 + 0xe);
  if (0x14 < uVar9) {
    panicReasonCode = 0x982;
    PanicHaltLoop();
  }
  dword_10510C = (dword)(short)((uVar9 * 4 - *(short *)((int)piVar1 + 0xe)) * 2);
  if ((int)dword_10510C < 0) {
    panicReasonCode = 0x987;
    PanicHaltLoop();
  }
  iVar7 = (int)(short)(*(short *)((int)piVar1 + 0xe) << 1);
  puVar17 = (ushort *)*piVar1;
  puVar18 = (ushort *)(iVar7 + (int)puVar17);
  puVar20 = (ushort *)(iVar7 + (int)puVar18);
  puVar22 = (ushort *)(iVar7 + (int)puVar20);
  sVar15 = *(short *)(piVar1 + 3) + -1;
  do {
    sVar13 = *(short *)((int)piVar1 + 0xe) + -1;
    do {
      uVar9 = *puVar17;
      uVar10 = *puVar18;
      uVar11 = *puVar20;
      uVar12 = *puVar22;
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
        uVar2 = (((ushort)bVar3 << 1 | (ushort)bVar4) * 2 | (ushort)bVar5) * 2 | (ushort)bVar6;
        cVar8 = '\0';
        if (uVar2 != 0) {
          uVar2 = *(ushort *)((int)colorConvTable + (int)(short)(uVar2 * 2));
          if ((uVar2 & 1) != 0) {
            uVar9 = uVar9 | 1;
          }
          if ((uVar2 >> 1 & 1) != 0) {
            uVar10 = uVar10 | 1;
          }
          if ((uVar2 >> 2 & 1) != 0) {
            uVar11 = uVar11 | 1;
          }
          cVar8 = (char)(uVar2 >> 4);
          if ((uVar2 >> 3 & 1) != 0) {
            uVar12 = uVar12 | 1;
          }
        }
        sVar14 = sVar14 + -1;
      } while (sVar14 != -1);
      puVar16 = puVar17 + 1;
      *puVar17 = uVar9;
      puVar19 = puVar18 + 1;
      *puVar18 = uVar10;
      puVar21 = puVar20 + 1;
      *puVar20 = uVar11;
      puVar23 = puVar22 + 1;
      *puVar22 = uVar12;
      sVar13 = sVar13 + -1;
      puVar17 = puVar16;
      puVar18 = puVar19;
      puVar20 = puVar21;
      puVar22 = puVar23;
    } while (sVar13 != -1);
    puVar17 = (ushort *)(dword_10510C + (int)puVar16);
    puVar18 = (ushort *)(dword_10510C + (int)puVar19);
    puVar20 = (ushort *)(dword_10510C + (int)puVar21);
    puVar22 = (ushort *)(dword_10510C + (int)puVar23);
    sVar15 = sVar15 + -1;
  } while (sVar15 != -1);
  return cVar8;
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

/* WARNING: Removing unreachable block (ram,0x00105248) */

void __usercall WaitForVSync(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
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
  int iVar5;
  ushort unaff_D3w;
  ushort uVar6;
  
  uVar6 = GetTextWidth(text,charsTable);
  iVar5 = spriteGraphicsPtr;
  if ((ushort)(xOff + uVar6) <=
      *(ushort *)(*(int *)(spriteGraphicsPtr + (short)(dstSpriteIndex << 2)) + 10)) {
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
        sVar3 = *(short *)(*(int *)(iVar5 + (short)(uVar6 * 4)) + 10);
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
  short sVar11;
  ushort uVar12;
  ushort uVar13;
  short unaff_D4w;
  short sVar14;
  ushort uVar15;
  word wVar16;
  ushort uVar17;
  uchar *puVar18;
  void *pvVar19;
  uint *puVar20;
  uint *puVar21;
  
  textBlitPlaneMask = planeMask;
  uVar9 = spriteIndex << 2;
  pbVar1 = *(byte **)(spriteGraphicsPtr + (short)uVar9);
  if (*(short *)(pbVar1 + 8) == 0) {
    uVar12 = *(ushort *)(pbVar1 + 0xc);
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
    uVar13 = 0;
    uVar9 = *(ushort *)(pbVar1 + 10) & 0xf;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar10 = *(short *)(pbVar1 + TILE_STRIDE) + 1;
    if ((ushort)(uVar9 + (x & 0xf)) < 0x11) {
      uVar13 = 0xffff;
      sVar10 = *(short *)(pbVar1 + TILE_STRIDE);
    }
    REG_BLTALWM = uVar13;
    REG_BLTAFWM = BLT_FWM_ALL;
    uVar9 = x * 0x1000;
    REG_BLTCON1 = uVar9;
    bltconShiftBase = uVar9;
    if (*(int *)(pbVar1 + 4) != 0) {
      sVar11 = uVar12 + y + -SCREEN_HEIGHT;
      sVar14 = 0;
      if (SCREEN_HEIGHT - 1 < (ushort)(uVar12 + y) && sVar11 != 0) {
        uVar12 = uVar12 - sVar11;
        sVar14 = sVar11;
      }
      textBlitHeightLines = uVar12;
      iVar7 = (int)(short)(((short)x >> 4) << 1);
      uVar13 = sVar10 + uVar12 * 0x40;
      uVar17 = sVar10 * 2;
      REG_BLTAMOD = *(short *)(pbVar1 + TILE_STRIDE) * 2 + sVar10 * -2;
      REG_BLTBMOD = *(short *)(pbVar1 + TILE_STRIDE) * 8 + sVar10 * -2;
      uVar15 = sVar10 * -2 + 0xb0;
      REG_BLTCMOD = uVar15;
      REG_BLTDMOD = uVar15;
      puVar20 = *(uint **)(pbVar1 + 4);
      sVar10 = *(short *)(pbVar1 + TILE_STRIDE) << 1;
      puVar21 = (uint *)((int)sVar10 + *(int *)pbVar1);
      pvVar19 = (void *)((int)puVar21 + (int)sVar10 + (int)sVar10);
      blitSrcA_MaskPtr = puVar20;
      blitSrcB_GlyphPtr = puVar21;
      iVar8 = (uint)y * ROW_STRIDE_BYTES + iVar7;
      while( true ) {
        puVar18 = frontbufferBasePtr + iVar8;
        sVar10 = 2;
        uVar15 = planeMask;
        do {
          uVar4 = uVar15 & 1;
          uVar15 = uVar15 >> 1;
          if (uVar4 == 0) {
            REG_BLTCON0 = uVar9 + 0xb0a;
            REG_BLTAPTH = puVar20;
            REG_BLTCPTH = puVar18;
            REG_BLTDPTH = puVar18;
          }
          else {
            REG_BLTCON0 = uVar9 + BLTCON0_BASE_LINKED;
            REG_BLTAPTH = puVar20;
            REG_BLTBPTH = puVar21;
            REG_BLTCPTH = puVar18;
            REG_BLTDPTH = puVar18;
          }
          REG_BLTSIZE = uVar13;
          REG_DMACON = DMACON_BLT_ON;
          uVar5 = REG_DMACONR._0_1_;
          do {
            bVar6 = REG_DMACONR._0_1_;
          } while ((bVar6 & 0x40) != 0);
          REG_DMACON = DMACON_BLT_OFF;
          puVar18 = puVar18 + PLANE_STRIDE;
          sVar10 = sVar10 + -1;
        } while (sVar10 != -1);
        if ((uVar15 & 1) == 0) {
          REG_BLTCON0 = uVar9 + BLTCON0_BASE_LINKED;
          REG_BLTAPTH = puVar20;
          REG_BLTBPTH = pvVar19;
          REG_BLTCPTH = puVar18;
          REG_BLTDPTH = puVar18;
        }
        else {
          REG_BLTCON0 = uVar9 + 0xbfa;
          REG_BLTAPTH = puVar20;
          REG_BLTCPTH = puVar18;
          REG_BLTDPTH = puVar18;
        }
        REG_BLTSIZE = uVar13;
        if (sVar14 == 0) break;
        iVar8 = (uint)uVar12 * (uint)*(ushort *)(pbVar1 + 0xe);
        puVar20 = (uint *)(iVar8 * 2 + (int)puVar20);
        pvVar19 = (void *)(iVar8 * 8 + (int)pvVar19);
        puVar21 = puVar21 + iVar8 * 2;
        uVar17 = uVar17 >> 1;
        uVar13 = uVar17 + sVar14 * 0x40;
        sVar14 = 0;
        REG_DMACON = DMACON_BLT_ON;
        uVar5 = REG_DMACONR._0_1_;
        do {
          bVar6 = REG_DMACONR._0_1_;
        } while ((bVar6 & 0x40) != 0);
        REG_DMACON = DMACON_BLT_OFF;
        iVar8 = iVar7;
      }
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
    uVar12 = 0;
    uVar9 = *(ushort *)((int)piVar2 + 10) & 0xf;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar11 = *(short *)((int)piVar2 + 0xe) + 1;
    if ((ushort)(uVar9 + (x & 0xf)) < 0x11) {
      uVar12 = 0xffff;
      sVar11 = *(short *)((int)piVar2 + 0xe);
    }
    REG_BLTALWM = uVar12;
    REG_BLTAFWM = 0xffff;
    bltconShiftBase_glyph = x * 0x1000;
    REG_BLTCON1 = bltconShiftBase_glyph;
    if (piVar2[1] != 0) {
      glyphHeightLinesCache = *(word *)(piVar2 + 3);
      pvVar19 = (void *)(*piVar3 +
                        (uint)y * (uint)dstRowBytesPerPlane * 4 + (int)(short)(((short)x >> 4) << 1)
                        );
      uVar9 = sVar11 + *(word *)(piVar2 + 3) * 0x40;
      REG_BLTAMOD = *(short *)((int)piVar2 + 0xe) * 2 + sVar11 * -2;
      REG_BLTBMOD = *(short *)((int)piVar2 + 0xe) * 8 + sVar11 * -2;
      uVar12 = sVar10 * 8 + sVar11 * -2;
      REG_BLTCMOD = uVar12;
      REG_BLTDMOD = uVar12;
      blitSrcA_MaskPtr_glyph = piVar2[1];
      sVar10 = *(short *)((int)piVar2 + 0xe) << 1;
      blitSrcB_GlyphPtr_glyph = (int)sVar10 + *piVar2;
      sVar11 = 2;
      wVar16 = glyphBlitPlaneMask;
      do {
        uVar12 = wVar16 & 1;
        wVar16 = wVar16 >> 1;
        if (uVar12 == 0) {
          REG_BLTCON0 = bltconShiftBase_glyph + 0xb0a;
          REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
          REG_BLTCPTH = pvVar19;
          REG_BLTDPTH = pvVar19;
        }
        else {
          REG_BLTCON0 = bltconShiftBase_glyph + 0xfca;
          REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
          REG_BLTBPTH = (void *)blitSrcB_GlyphPtr_glyph;
          REG_BLTCPTH = pvVar19;
          REG_BLTDPTH = pvVar19;
        }
        REG_BLTSIZE = uVar9;
        REG_DMACON = 0x8400;
        uVar5 = REG_DMACONR._0_1_;
        do {
          bVar6 = REG_DMACONR._0_1_;
        } while ((bVar6 & 0x40) != 0);
        REG_DMACON = 0x400;
        pvVar19 = (void *)(iVar8 + (int)pvVar19);
        sVar11 = sVar11 + -1;
      } while (sVar11 != -1);
      if ((wVar16 & 1) == 0) {
        REG_BLTCON0 = bltconShiftBase_glyph + 0xfca;
        REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
        REG_BLTBPTH = (void *)(blitSrcB_GlyphPtr_glyph + (int)sVar10 + (int)sVar10);
        REG_BLTCPTH = pvVar19;
        REG_BLTDPTH = pvVar19;
      }
      else {
        REG_BLTCON0 = bltconShiftBase_glyph + 0xbfa;
        REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
        REG_BLTCPTH = pvVar19;
        REG_BLTDPTH = pvVar19;
      }
      REG_BLTSIZE = uVar9;
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
  ushort uVar9;
  void *pvVar10;
  
  glyphBlitPlaneMask = planeMask;
  piVar1 = *(int **)(spriteGraphicsPtr + (short)(glyphIndex << 2));
  if (*(short *)(piVar1 + 2) == 0) {
    piVar2 = *(int **)(spriteGraphicsPtr + (short)(dstSpriteIndex << 2));
    sVar6 = *(short *)((int)piVar2 + TILE_STRIDE);
    dstRowBytesPerPlane = sVar6 * 2;
    iVar5 = (int)(short)dstRowBytesPerPlane;
    dstRowAdvanceBytes[0] = (char)((uint)iVar5 >> 0x18);
    dstRowAdvanceBytes[1] = (char)((uint)iVar5 >> 0x10);
    dstRowAdvanceBytes[2] = (char)((uint)iVar5 >> 8);
    dstRowAdvanceBytes[3] = (char)iVar5;
    REG_DMACON = DMACON_BLT_ON;
    uVar3 = REG_DMACONR._0_1_;
    do {
      bVar4 = REG_DMACONR._0_1_;
    } while ((bVar4 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    uVar8 = 0;
    uVar9 = *(ushort *)((int)piVar1 + 10) & TILE_MASK;
    if (uVar9 == 0) {
      uVar9 = 0x10;
    }
    sVar7 = *(short *)((int)piVar1 + 0xe) + 1;
    if ((ushort)(uVar9 + (xOff & TILE_MASK)) < 0x11) {
      uVar8 = 0xffff;
      sVar7 = *(short *)((int)piVar1 + 0xe);
    }
    REG_BLTALWM = uVar8;
    REG_BLTAFWM = BLT_FWM_ALL;
    bltconShiftBase_glyph = xOff * 0x1000;
    REG_BLTCON1 = bltconShiftBase_glyph;
    if (piVar1[1] != 0) {
      glyphHeightLinesCache = *(word *)(piVar1 + 3);
      pvVar10 = (void *)(*piVar2 +
                        (uint)yOff * (uint)dstRowBytesPerPlane * 4 +
                        (int)(short)(((short)xOff >> 4) << 1));
      uVar9 = sVar7 + *(word *)(piVar1 + 3) * 0x40;
      REG_BLTAMOD = *(short *)((int)piVar1 + 0xe) * 2 + sVar7 * -2;
      REG_BLTBMOD = *(short *)((int)piVar1 + 0xe) * 8 + sVar7 * -2;
      uVar8 = sVar6 * 8 + sVar7 * -2;
      REG_BLTCMOD = uVar8;
      REG_BLTDMOD = uVar8;
      blitSrcA_MaskPtr_glyph = piVar1[1];
      sVar6 = *(short *)((int)piVar1 + 0xe) << 1;
      blitSrcB_GlyphPtr_glyph = (int)sVar6 + *piVar1;
      sVar7 = 2;
      do {
        uVar8 = planeMask & 1;
        planeMask = planeMask >> 1;
        if (uVar8 == 0) {
          REG_BLTCON0 = bltconShiftBase_glyph + 0xb0a;
          REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
          REG_BLTCPTH = pvVar10;
          REG_BLTDPTH = pvVar10;
        }
        else {
          REG_BLTCON0 = bltconShiftBase_glyph + BLTCON0_BASE_LINKED;
          REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
          REG_BLTBPTH = (void *)blitSrcB_GlyphPtr_glyph;
          REG_BLTCPTH = pvVar10;
          REG_BLTDPTH = pvVar10;
        }
        REG_BLTSIZE = uVar9;
        REG_DMACON = DMACON_BLT_ON;
        uVar3 = REG_DMACONR._0_1_;
        do {
          bVar4 = REG_DMACONR._0_1_;
        } while ((bVar4 & 0x40) != 0);
        REG_DMACON = DMACON_BLT_OFF;
        pvVar10 = (void *)(iVar5 + (int)pvVar10);
        sVar7 = sVar7 + -1;
      } while (sVar7 != -1);
      if ((planeMask & 1) == 0) {
        REG_BLTCON0 = bltconShiftBase_glyph + BLTCON0_BASE_LINKED;
        REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
        REG_BLTBPTH = (void *)(blitSrcB_GlyphPtr_glyph + (int)sVar6 + (int)sVar6);
        REG_BLTCPTH = pvVar10;
        REG_BLTDPTH = pvVar10;
      }
      else {
        REG_BLTCON0 = bltconShiftBase_glyph + 0xbfa;
        REG_BLTAPTH = (void *)blitSrcA_MaskPtr_glyph;
        REG_BLTCPTH = pvVar10;
        REG_BLTDPTH = pvVar10;
      }
      REG_BLTSIZE = uVar9;
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
  uchar *src;
  bool bVar2;
  
  src = frontbufferBasePtr;
  if (g_assetCurrentIndex == 4) {
    uVar1 = AssetSys_Dispatch(ASSET_OP_INIT_SOURCE0);
  }
  else {
    bVar2 = g_assetLoaderCacheFlag == 0;
    if ((bVar2) || (AssetCacheCopyByName(filename,frontbufferBasePtr), !bVar2)) {
      bVar2 = false;
      uVar1 = AssetSys_Dispatch(ASSET_OP_INIT_SOURCE0);
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
    if (FRONTBUFFER_SIZE_TOTAL_BYTES < unaff_D1) {
      panicReasonCode = 0xe000;
      PanicHaltLoop();
      if (g_assetCurrentIndex == 4) {
        uVar1 = AssetSys_Dispatch(ASSET_OP_INIT_SOURCE0);
      }
      else {
        bVar2 = g_assetLoaderCacheFlag == 0;
        if ((bVar2) || (AssetCacheCopyByName(filename,src), !bVar2)) {
          bVar2 = false;
          uVar1 = AssetSys_Dispatch(ASSET_OP_INIT_SOURCE0);
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
      RncDecompressV1(frontbufferBasePtr,dst,*(uint *)(frontbufferBasePtr + 4));
    }
    else if (*(int *)frontbufferBasePtr == 0x524e4302) {
      RncDecompressV2(frontbufferBasePtr,dst);
    }
    else {
      do {
        *(uchar *)dst = *src;
        unaff_D1 = unaff_D1 - 1;
        src = src + 1;
        dst = (uchar *)((int)dst + 1);
      } while (unaff_D1 != 0);
    }
    BlitterCopyOverlayToScreen();
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
        g_assetLoaderWorkPtr = (uint *)((int)g_assetLoaderWorkPtr - uVar1);
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
      *pcVar2 = *(char *)src;
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
  byte bVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  ushort uVar6;
  uint uVar5;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  
  pbVar9 = (byte *)((int)src + 0x13);
  bVar7 = (*(char *)((int)src + 0x12) * '\x02' + '\x01') * '\x02';
LAB_00106c7e:
  while (bVar8 = bVar7 * '\x02', bVar1 = bVar8, !CARRY1(bVar7,bVar7)) {
    pbVar10 = pbVar9 + 1;
    pbVar11 = (byte *)((int)dst + 1);
    *(byte *)dst = *pbVar9;
    bVar7 = bVar7 << 2;
    pbVar9 = pbVar10;
    dst = pbVar11;
    bVar1 = bVar7;
    if (CARRY1(bVar8,bVar8)) break;
LAB_00106c7c:
    pbVar9 = pbVar10 + 1;
    dst = pbVar11 + 1;
    *pbVar11 = *pbVar10;
  }
  bVar7 = bVar1;
  pbVar10 = pbVar9;
  if (bVar7 == 0) {
    pbVar10 = pbVar9 + 1;
    bVar8 = *pbVar9;
    bVar7 = bVar8 * '\x02' + 1;
    pbVar11 = dst;
    if (!CARRY1(bVar8,bVar8) && (byte)(bVar8 * '\x02') != -1) goto LAB_00106c7c;
  }
  uVar3 = 2;
  uVar5 = 0;
  bVar14 = CARRY1(bVar7,bVar7);
  bVar8 = bVar7 * '\x02';
  pbVar9 = pbVar10;
  bVar13 = bVar14;
  if (bVar8 == 0) {
    pbVar9 = pbVar10 + 1;
    bVar7 = *pbVar10;
    bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
    bVar8 = bVar7 * '\x02' + bVar14;
  }
  if (bVar13) {
    bVar14 = CARRY1(bVar8,bVar8);
    bVar7 = bVar8 * '\x02';
    pbVar10 = pbVar9;
    bVar13 = bVar14;
    if (bVar7 == 0) {
      pbVar10 = pbVar9 + 1;
      bVar7 = *pbVar9;
      bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
      bVar7 = bVar7 * '\x02' + bVar14;
    }
    if (!bVar13) {
LAB_00106c4c:
      pbVar9 = pbVar10 + 1;
      sVar2 = (short)CONCAT31((int3)(uVar5 >> 8),*pbVar10);
      pbVar11 = (byte *)((int)dst + -(int)sVar2);
      pbVar10 = pbVar11 + -1;
      if ((uVar3 & 1) != 0) {
        *(byte *)dst = pbVar11[-1];
        dst = (byte *)((int)dst + 1);
        pbVar10 = pbVar11;
      }
      sVar4 = (uVar3 >> 1) - 1;
      if (sVar2 == 0) {
        bVar8 = *pbVar10;
        do {
          pbVar10 = (byte *)((int)dst + 1);
          *(byte *)dst = bVar8;
          dst = (void *)((int)dst + 2);
          *pbVar10 = bVar8;
          sVar4 = sVar4 + -1;
        } while (sVar4 != -1);
      }
      else {
        do {
          pbVar12 = pbVar10 + 1;
          pbVar11 = (byte *)((int)dst + 1);
          *(byte *)dst = *pbVar10;
          pbVar10 = pbVar10 + 2;
          dst = (void *)((int)dst + 2);
          *pbVar11 = *pbVar12;
          sVar4 = sVar4 + -1;
        } while (sVar4 != -1);
      }
      goto LAB_00106c7e;
    }
    uVar3 = 3;
    bVar14 = CARRY1(bVar7,bVar7);
    bVar7 = bVar7 * '\x02';
    pbVar12 = pbVar10;
    bVar13 = bVar14;
    if (bVar7 == 0) {
      pbVar12 = pbVar10 + 1;
      bVar7 = *pbVar10;
      bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
      bVar7 = bVar7 * '\x02' + bVar14;
    }
    pbVar11 = pbVar12;
    if (bVar13) {
      pbVar11 = pbVar12 + 1;
      if (*pbVar12 != 0) {
        uVar3 = *pbVar12 + 8;
        goto LAB_00106c2c;
      }
      bVar14 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      pbVar9 = pbVar11;
      bVar13 = bVar14;
      if (bVar7 == 0) {
        pbVar9 = pbVar12 + 2;
        bVar7 = *pbVar11;
        bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
        bVar7 = bVar7 * '\x02' + bVar14;
      }
      if (!bVar13) {
        return;
      }
      goto LAB_00106c7e;
    }
  }
  else {
    bVar7 = bVar8 * '\x02';
    pbVar10 = pbVar9;
    if (bVar7 == 0) {
      pbVar10 = pbVar9 + 1;
      bVar7 = *pbVar9 * '\x02' + CARRY1(bVar8,bVar8);
    }
    uVar6 = (ushort)CARRY1(bVar8,bVar8);
    uVar3 = uVar6 + 4;
    bVar14 = CARRY1(bVar7,bVar7);
    bVar7 = bVar7 * '\x02';
    pbVar11 = pbVar10;
    bVar13 = bVar14;
    if (bVar7 == 0) {
      pbVar11 = pbVar10 + 1;
      bVar7 = *pbVar10;
      bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
      bVar7 = bVar7 * '\x02' + bVar14;
    }
    if (bVar13) {
      bVar13 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      if (bVar7 == 0) {
        bVar7 = *pbVar11 * '\x02' + bVar13;
        pbVar11 = pbVar11 + 1;
      }
      uVar3 = (uVar6 + 3) * 2 + (ushort)bVar13;
      if ((char)uVar3 != '\t') goto LAB_00106c2c;
      sVar2 = 3;
      do {
        bVar13 = CARRY1(bVar7,bVar7);
        bVar7 = bVar7 * '\x02';
        pbVar9 = pbVar11;
        if (bVar7 == 0) {
          pbVar9 = pbVar11 + 1;
          bVar7 = *pbVar11 * '\x02' + bVar13;
        }
        uVar3 = (short)uVar5 * 2 + (ushort)bVar13;
        uVar5 = (uint)uVar3;
        sVar2 = sVar2 + -1;
        pbVar11 = pbVar9;
      } while (sVar2 != -1);
      sVar2 = uVar3 + 2;
      do {
        *(byte *)dst = *pbVar9;
        *(byte *)((int)dst + 1) = pbVar9[1];
        pbVar10 = pbVar9 + 3;
        pbVar11 = (byte *)((int)dst + 3);
        *(byte *)((int)dst + 2) = pbVar9[2];
        pbVar9 = pbVar9 + 4;
        dst = (void *)((int)dst + 4);
        *pbVar11 = *pbVar10;
        sVar2 = sVar2 + -1;
      } while (sVar2 != -1);
      goto LAB_00106c7e;
    }
  }
LAB_00106c2c:
  bVar14 = CARRY1(bVar7,bVar7);
  bVar7 = bVar7 * '\x02';
  pbVar10 = pbVar11;
  bVar13 = bVar14;
  if (bVar7 == 0) {
    pbVar10 = pbVar11 + 1;
    bVar7 = *pbVar11;
    bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
    bVar7 = bVar7 * '\x02' + bVar14;
  }
  if (bVar13) {
    bVar8 = bVar7 * '\x02';
    pbVar9 = pbVar10;
    if (bVar8 == 0) {
      pbVar9 = pbVar10 + 1;
      bVar8 = *pbVar10 * '\x02' + CARRY1(bVar7,bVar7);
    }
    uVar6 = (ushort)CARRY1(bVar7,bVar7);
    bVar14 = CARRY1(bVar8,bVar8);
    bVar7 = bVar8 * '\x02';
    pbVar10 = pbVar9;
    bVar13 = bVar14;
    if (bVar7 == 0) {
      pbVar10 = pbVar9 + 1;
      bVar7 = *pbVar9;
      bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
      bVar7 = bVar7 * '\x02' + bVar14;
    }
    if (bVar13) {
      bVar8 = bVar7 * '\x02';
      pbVar9 = pbVar10;
      if (bVar8 == 0) {
        pbVar9 = pbVar10 + 1;
        bVar8 = *pbVar10 * '\x02' + CARRY1(bVar7,bVar7);
      }
      uVar6 = uVar6 * 2 + (ushort)CARRY1(bVar7,bVar7) | 4;
      bVar14 = CARRY1(bVar8,bVar8);
      bVar7 = bVar8 * '\x02';
      pbVar10 = pbVar9;
      bVar13 = bVar14;
      if (bVar7 == 0) {
        pbVar10 = pbVar9 + 1;
        bVar7 = *pbVar9;
        bVar13 = CARRY1(bVar7,bVar7) || CARRY1(bVar7 * '\x02',bVar14);
        bVar7 = bVar7 * '\x02' + bVar14;
      }
      if (!bVar13) goto LAB_00106c44;
    }
    else if (uVar6 == 0) {
      uVar6 = 1;
LAB_00106c44:
      bVar13 = CARRY1(bVar7,bVar7);
      bVar7 = bVar7 * '\x02';
      if (bVar7 == 0) {
        bVar7 = *pbVar10 * '\x02' + bVar13;
        pbVar10 = pbVar10 + 1;
      }
      uVar6 = uVar6 * 2 + (ushort)bVar13;
    }
    uVar5 = (uint)(ushort)(uVar6 << 8);
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
  uVar4 = RncReadU32(src);
  if (uVar4 == 0x524e4301) {
    uStack_1c0 = 0x1069c2;
    uStack_3c = RncReadU32(src);
    pbVar17 = (byte *)((int)src + 10);
    pbVar1 = (byte *)((int)dst + uStack_3c);
    uStack_1c0 = 0x1069d4;
    uVar4 = RncReadU32(src);
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
        pbVar16 = dst;
        if (-1 < sVar8) {
          do {
            pbVar17 = pbVar18 + 1;
            dst = pbVar16 + 1;
            *pbVar16 = *pbVar18;
            sVar8 = sVar8 + -1;
            pbVar18 = pbVar17;
            pbVar16 = dst;
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
          pbVar16 = dst;
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
  undefined4 local_1c0;
  undefined1 auStack_1bc [128];
  undefined1 auStack_13c [128];
  undefined1 auStack_bc [128];
  
  outTab = (ushort *)auStack_1bc;
  local_1c0 = 0x1069b2;
  uVar4 = RncReadU32(src);
  if (uVar4 == 0x524e4301) {
    local_1c0 = 0x1069c2;
    uVar4 = RncReadU32(src);
    pbVar17 = (byte *)((int)src + 10);
    pbVar1 = (byte *)((int)dst + uVar4);
    local_1c0 = 0x1069d4;
    uVar4 = RncReadU32(src);
    pbVar18 = pbVar17 + uVar4;
    local_1c0 = local_1c0 & 0xffff0000;
    puVar21 = (ushort *)((int)&local_1c0 + 2);
    if ((dst < pbVar18) &&
       (pbVar16 = pbVar1 + *(byte *)((int)src + 8), puVar21 = (ushort *)((int)&local_1c0 + 2),
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
        pbVar16 = dst;
        if (-1 < sVar8) {
          do {
            pbVar17 = pbVar18 + 1;
            dst = pbVar16 + 1;
            *pbVar16 = *pbVar18;
            sVar8 = sVar8 + -1;
            pbVar18 = pbVar17;
            pbVar16 = dst;
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
          pbVar16 = dst;
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
    puVar9 = tab;
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
  char acStack_10 [12];
  undefined4 uStack_4;
  
  uStack_4 = 0x106b2e;
  iVar4 = RncGetBits(0x1f,5);
  sVar2 = (short)iVar4 + -1;
  if (-1 < sVar2) {
    pcVar13 = acStack_10;
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
    pcVar13 = acStack_10;
    do {
      do {
        cVar7 = (char)uVar6;
        psVar12 = outTab;
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
      pcVar13 = acStack_10;
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


// --- TurnCrowdChantsOn @ 00106d44 ---

void __usercall TurnCrowdChantsOn(void)

{
  undefined4 unaff_D0;
  uint unaff_D1;
  
  fadeInChantTimer = 0;
  nextChantTimer = 0;
  fadeOutChantTimer = 0;
  g_crowdChantsOn = 1;
  SetVolumeOrStopChants(CONCAT22((short)((uint)unaff_D0 >> 0x10),2),unaff_D1 & 0xffff0000);
  crowdChantVolume = 0;
  return;
}


// --- TurnCrowdChantsOff @ 00106d72 ---

void __usercall TurnCrowdChantsOff(void)

{
  undefined4 unaff_D0;
  uint unaff_D1;
  
  g_crowdChantsOn = 0;
  SetVolumeOrStopChants(CONCAT22((short)((uint)unaff_D0 >> 0x10),2),unaff_D1 & 0xffff0000);
  crowdChantVolume = 0;
  return;
}


// --- PlayCrowdChants @ 00106d8c ---

void __usercall PlayCrowdChants(void)

{
  word wVar1;
  undefined2 uVar2;
  undefined4 unaff_D0;
  ushort uVar3;
  uint channelOrAll;
  undefined2 uVar4;
  uint unaff_D1;
  
  if (g_trainingGame != 0) {
    return;
  }
  if (g_crowdChantsOn == 0) {
    return;
  }
  uVar2 = (undefined2)((uint)unaff_D0 >> 0x10);
  uVar4 = (undefined2)(unaff_D1 >> 0x10);
  if (fadeInChantTimer != 0) {
    fadeInChantTimer = fadeInChantTimer - 1;
    crowdChantVolume = (ushort)(0x80 - fadeInChantTimer) >> 1;
    SetVolumeOrStopChants(CONCAT22(uVar2,2),CONCAT22(uVar4,crowdChantVolume));
    return;
  }
  if (nextChantTimer != 0) {
    nextChantTimer = nextChantTimer - 1;
    return;
  }
  if (fadeOutChantTimer != 0) {
    fadeOutChantTimer = fadeOutChantTimer - 1;
    crowdChantVolume = fadeOutChantTimer >> 1;
    SetVolumeOrStopChants(CONCAT22(uVar2,2),CONCAT22(uVar4,crowdChantVolume));
    return;
  }
  uVar3 = Rand();
  if (0x7f < uVar3) {
    uVar3 = Rand();
    nextChantTimer = uVar3 * 4 + 500;
    return;
  }
  channelOrAll = CONCAT22(uVar2,2);
  crowdChantVolume = 0;
  SetVolumeOrStopChants(channelOrAll,unaff_D1 & 0xffff0000);
  wVar1 = currentCrowdSample;
  if (currentCrowdSample != 0xffff) {
    uVar3 = Rand();
    channelOrAll = CONCAT22(uVar2,uVar3);
    if (uVar3 < 0x80) goto LAB_00106e24;
  }
  uVar2 = (undefined2)(channelOrAll >> 0x10);
  uVar3 = Rand();
  wVar1 = *(word *)((int)crowdSamples + (int)(short)(uVar3 & 6));
  currentCrowdSample = wVar1;
LAB_00106e24:
  CrowdTickJump(CONCAT22(uVar2,2),CONCAT22(uVar4,wVar1));
  fadeInChantTimer = 0x80;
  uVar3 = Rand();
  fadeOutChantTimer = 0x80;
  nextChantTimer = uVar3 * 2 + 500;
  return;
}


// --- AudioFadeCrowdDownThenPulseMusic @ 00106ef2 ---

/* WARNING: Removing unreachable block (ram,0x00106f1e) */
/* WARNING: Removing unreachable block (ram,0x00106f22) */
/* WARNING: Removing unreachable block (ram,0x00106f2a) */
/* WARNING: Removing unreachable block (ram,0x00106f7a) */
/* WARNING: Removing unreachable block (ram,0x00106f7e) */
/* WARNING: Removing unreachable block (ram,0x00106f86) */

void __usercall AudioFadeCrowdDownThenPulseMusic(void)

{
  undefined2 uVar1;
  uint unaff_D0;
  undefined2 uVar2;
  undefined4 unaff_D1;
  uint volume;
  
  uVar2 = (undefined2)((uint)unaff_D1 >> 0x10);
  uVar1 = (undefined2)(unaff_D0 >> 0x10);
  if (crowdChantVolume == 0) {
    volume = CONCAT22(uVar2,0x40);
    SetVolumeOrStopChants(unaff_D0 & 0xffff0000,volume);
    SetVolumeOrStopChants(CONCAT22(uVar1,1),volume);
    SetVolumeOrStopChants(CONCAT22(uVar1,3),volume);
    do {
    } while( true );
  }
  SetVolumeOrStopChants(CONCAT22(uVar1,2),CONCAT22(uVar2,crowdChantVolume));
  do {
  } while( true );
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


// --- ClearAudioActiveFlag @ 0010708a ---

void __usercall ClearAudioActiveFlag(void)

{
  g_audioActive = 0;
  return;
}


// --- StopAudioAndClearFlags @ 00107092 ---

void __usercall StopAudioAndClearFlags(void)

{
  StopAudio();
  g_audioActive = 0;
  g_audioBankLoaded = 0;
  return;
}


// --- PlayEnqueuedSamples @ 001071ce ---

void __usercall PlayEnqueuedSamples(void)

{
  if ((endOfHalfWriteOnly != 0) &&
     (endOfHalfWriteOnly = endOfHalfWriteOnly - 1, endOfHalfWriteOnly == 0)) {
    PlayPenaltySample();
    sfxQueueWriteIdx = 0xfa;
  }
  if ((goalCounter != 0) && (goalCounter = goalCounter - 1, goalCounter == 0)) {
    PlaySample2();
  }
  if ((sfxQueueWriteIdx != 0) && (sfxQueueWriteIdx = sfxQueueWriteIdx - 1, sfxQueueWriteIdx == 0)) {
    PlaySample7IfNotTraining();
  }
  if (crowdEventFlags != 0) {
    crowdEventFlags = crowdEventFlags - 1;
  }
  if ((sfxQueueCount != 0) && (sfxQueueCount = sfxQueueCount - 1, sfxQueueCount == 0)) {
    PlayCornerKickSample();
  }
  PlayCrowdChants();
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


// --- PlaySample7IfNotTraining @ 0010724e ---

void __usercall PlaySample7IfNotTraining(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  PlaySample();
  return;
}


// --- sub_107260 @ 00107260 ---

void __usercall sub_107260(void)

{
  GateKickSampleAndCrowd(3,0x10);
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


// --- PlayRefereeWhistleSample @ 001072b8 ---

void __usercall PlayRefereeWhistleSample(void)

{
  HandleKickSampleAndCrowd(3,0x31);
  return;
}


// --- PlayFoulWhistleSample @ 001072c4 ---

void __usercall PlayFoulWhistleSample(void)

{
  HandleKickSampleAndCrowd(3,4);
  return;
}


// --- PlayEndGameWhistleSample @ 001072d0 ---

void __usercall PlayEndGameWhistleSample(void)

{
  HandleKickSampleAndCrowd(3,0x16);
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


// --- FUN_001072ee @ 001072ee ---

void FUN_001072ee(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  pendingSampleId3_4 = 1000;
  PlaySample();
  return;
}


// --- PlaySample2 @ 00107308 ---

void __usercall PlaySample2(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  pendingSampleId3_4 = 400;
  PlaySample();
  return;
}


// --- PlaySample3 @ 00107322 ---

void __usercall PlaySample3(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  sfxQueueCount = 10;
  GateKickSampleAndCrowd(3,0x2c);
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


// --- PlayGoalReplayBottomSample @ 001073a0 ---

void PlayGoalReplayBottomSample(void)

{
  if (g_trainingGame != 0) {
    return;
  }
  FUN_001072ee();
  return;
}


// --- PlayGoalKickOffSample @ 001073ae ---

void __usercall PlayGoalKickOffSample(void)

{
  bool bVar1;
  
  if (g_trainingGame != 0) {
    return;
  }
  bVar1 = false;
  HandleKickSampleAndCrowd(3,0x12);
  if (bVar1) {
    crowdEventFlags = 0x39;
  }
  return;
}


// --- PlayCornerKickSample @ 001073d0 ---

void __usercall PlayCornerKickSample(void)

{
  bool bVar1;
  
  if (g_trainingGame != 0) {
    return;
  }
  bVar1 = false;
  HandleKickSampleAndCrowd(3,0xf);
  if (bVar1) {
    crowdEventFlags = 0x32;
  }
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
  audioChannel0._0_4_ = &REG_AUD0LCH;
  audioChannel0[0x2e] = 0;
  audioChannel0[0x2f] = 1;
  audioChannel0[0x86] = 0;
  audioChannel0[0x87] = 1;
  ClearAudioChannelStruct(audioChannel1);
  audioChannel1._0_4_ = &REG_AUD1LCH;
  audioChannel1[0x2e] = 0;
  audioChannel1[0x2f] = 2;
  audioChannel1[0x86] = 0;
  audioChannel1[0x87] = 2;
  ClearAudioChannelStruct(audioChannel2);
  audioChannel2._0_4_ = &REG_AUD2LCH;
  audioChannel2[0x2e] = 0;
  audioChannel2[0x2f] = 4;
  audioChannel2[0x86] = 0;
  audioChannel2[0x87] = 4;
  ClearAudioChannelStruct(audioChannel3);
  audioChannel3._0_4_ = &REG_AUD3LCH;
  audioChannel3[0x2e] = 0;
  audioChannel3[0x2f] = 8;
  audioChannel3[0x86] = 0;
  audioChannel3[0x87] = 8;
  return;
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
  REG_DMACON = 0xf;
  REG_AUD0VOL = 0;
  REG_AUD1VOL = 0;
  REG_AUD2VOL = 0;
  REG_AUD3VOL = 0;
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


// --- MovePlayers @ 00108cac ---

/* Update x and y coordinates and do animation. */

void __usercall MovePlayers(void)

{
  Sprite *player;
  short sVar1;
  Sprite **ppSVar2;
  
  sVar1 = 0x15;
  ppSVar2 = team1SpritesTable;
  do {
    player = *ppSVar2;
    SetNextPlayerFrame(player);
    MovePlayer(player);
    sVar1 = sVar1 + -1;
    ppSVar2 = ppSVar2 + 1;
  } while (sVar1 != -1);
  return;
}


// --- SetNextPlayerFrame @ 00108cc8 ---

/* in:
        A0 -> player
   
   globals:
     read:
       goalScored
       lastTeamScoredPtr
       playerScoredPtr
       currentGameTick
   
   Sets next picture frame for players. Also takes care of cheering after
   scored goal. */

void __usercall SetNextPlayerFrame(Sprite *player)

{
  short sVar1;
  word wVar2;
  
  if (player->onScreen == 0) {
    return;
  }
  wVar2 = player->cycleFramesTimer - 1;
  player->cycleFramesTimer = wVar2;
  if (wVar2 != 0) {
    return;
  }
  player->frameIndex = player->frameIndex + 1;
  player->cycleFramesTimer = player->frameDelay;
  while (sVar1 = *(short *)((int)player->frameIndicesTable + (int)(short)(player->frameIndex << 1)),
        sVar1 < 0) {
    if (sVar1 == -999) {
      player->frameIndex = 0;
    }
    else {
      if (sVar1 == -0x65) {
        player->frameIndex = player->frameIndex - 1;
        return;
      }
      if (sVar1 < -99) {
        player->frameIndex = sVar1 + 100 + player->frameIndex;
      }
      else {
        player->frameDelay = -sVar1;
        player->cycleFramesTimer = -sVar1;
        player->frameIndex = player->frameIndex + 1;
      }
    }
  }
  player->frameSwitchCounter = player->frameSwitchCounter + 1;
  wVar2 = player->frameOffset + sVar1;
  if ((((goalScored != 0) && (player->playerState == PL_NORMAL)) &&
      ((player->direction == 0 || (player->direction == 4)))) &&
     ((lastTeamScoredNumber == player->teamNumber && (player->playerOrdinal != 1)))) {
    if (player == lastPlayerScored) {
      if (100 < (currentGameTick & 0x7f)) goto store_frame_to_sprite;
    }
    else if (0x1f < (currentGameTick + player->playerOrdinal * 4 & 0x3f))
    goto store_frame_to_sprite;
    wVar2 = wVar2 + 0x18;
  }
store_frame_to_sprite:
  player->imageIndex = wVar2;
  return;
}


// --- MovePlayer @ 00108d9c ---

/* in:
        A0 -> player
   
   globals:
     read:
        gameStatePl
        breakCameraMode
        
   Update x and y coordinates based on deltas. If sprite has reached its
   destination stop it, and set standing animation table. */

void __usercall MovePlayer(Sprite *player)

{
  dword dVar1;
  word wVar2;
  
  if ((player->onScreen == 0) && (gameStatePl == ST_GAME_IN_PROGRESS)) {
    wVar2 = player->destX;
    dVar1 = (player->deltaX).raw;
    if (dVar1 != 0) {
      if ((int)dVar1 < 0) {
        (player->x).raw = dVar1 + (player->x).raw;
        if ((short)wVar2 < (short)(player->x).s.i) goto after_x_in_inactive;
      }
      else {
        (player->x).raw = dVar1 + (player->x).raw;
        if ((short)(player->x).s.i < (short)wVar2) goto after_x_in_inactive;
      }
      (player->x).s.i = wVar2;
      (player->deltaX).raw = 0;
    }
after_x_in_inactive:
    wVar2 = player->destY;
    dVar1 = (player->deltaY).raw;
    if (dVar1 != 0) {
      if ((int)dVar1 < 0) {
        (player->y).raw = dVar1 + (player->y).raw;
        if ((short)wVar2 < (short)(player->y).s.i) {
          return;
        }
      }
      else {
        (player->y).raw = dVar1 + (player->y).raw;
        if ((short)(player->y).s.i < (short)wVar2) {
          return;
        }
      }
      (player->y).s.i = wVar2;
      (player->deltaY).raw = 0;
    }
    return;
  }
  dVar1 = (player->deltaX).raw;
  if (dVar1 != 0) {
    if ((int)dVar1 < 0) {
      wVar2 = player->destX;
      (player->x).raw = dVar1 + (player->x).raw;
      if ((short)(player->x).s.i <= (short)wVar2) {
clamp_x_stop_motion:
        (player->x).s.i = wVar2;
        (player->deltaX).raw = 0;
      }
    }
    else {
      wVar2 = player->destX;
      (player->x).raw = dVar1 + (player->x).raw;
      if ((short)wVar2 <= (short)(player->x).s.i) goto clamp_x_stop_motion;
    }
  }
  dVar1 = (player->deltaY).raw;
  if (dVar1 != 0) {
    if ((int)dVar1 < 0) {
      wVar2 = player->destY;
      (player->y).raw = dVar1 + (player->y).raw;
      if ((short)wVar2 < (short)(player->y).s.i) {
        return;
      }
    }
    else {
      wVar2 = player->destY;
      (player->y).raw = dVar1 + (player->y).raw;
      if ((short)(player->y).s.i < (short)wVar2) goto after_y_motion;
    }
    (player->y).s.i = wVar2;
    (player->deltaY).raw = 0;
  }
after_y_motion:
  if (((player->playerState == PL_NORMAL) && ((player->deltaX).raw == 0)) &&
     ((player->deltaY).raw == 0)) {
    if (((gameStatePl != ST_GAME_IN_PROGRESS) && (breakCameraMode == 3)) &&
       (player->destReachedState == 2)) {
      player->destReachedState = 3;
    }
    if (player->animationTable != &playerNormalStandingAnimTable) {
      SetPlayerAnimationTable(&playerNormalStandingAnimTable,player);
    }
  }
  return;
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


// --- MoveCamera @ 00108f90 ---

void __usercall MoveCamera(void)

{
  int iVar1;
  int iVar2;
  dword dVar3;
  word wVar4;
  short sVar6;
  dword dVar5;
  dword dVar7;
  FixedPoint_ FVar8;
  undefined2 uVar9;
  short sVar10;
  FixedPoint_ FVar11;
  undefined2 uVar12;
  short sVar13;
  
  if (showFansCounter != 0) {
    return;
  }
  if (whichCard != 0) {
    cameraXVelocity = 0;
    cameraYVelocity = 0;
    sVar6 = 0x25;
    uVar9 = (bookedPlayer->x).s.i;
    uVar12 = (bookedPlayer->y).s.i;
    goto offset_and_clamp_to_view;
  }
  if (playingPenalties != 0) {
    cameraXVelocity = 0;
    cameraYVelocity = 0;
    sVar6 = 0;
    uVar9 = 0x150;
    uVar12 = 0x6b;
    goto offset_and_clamp_to_view;
  }
  if (g_waitForPlayerToGoInTimer == 0) {
    if (g_leavingSubsMenu != 0) {
      sVar6 = 0x25;
      cameraXVelocity = 0;
      cameraYVelocity = 0;
      uVar9 = 0xd3;
      uVar12 = 0x1c1;
      goto offset_and_clamp_to_view;
    }
    if (g_inSubstitutesMenu == 0) {
      FVar8 = ballSprite.deltaX;
      FVar11 = ballSprite.deltaY;
      if (gameStatePl != ST_GAME_IN_PROGRESS) {
        if ((lastTeamPlayedBeforeBreak == (TeamGeneralInfo *)0x0) ||
           (lastTeamPlayedBeforeBreak->controlledPlayer == (Sprite *)0x0)) {
          wVar4 = cameraDirection;
          if ((short)cameraDirection < 0) {
            FVar8.raw = 0;
            FVar11.raw = 0;
            goto apply_accel_limits_setup;
          }
        }
        else {
          wVar4 = lastTeamPlayedBeforeBreak->controlledPlayer->direction;
        }
        FVar8 = (FixedPoint_)
                ((FixedPoint_ *)((int)nextCameraDirections + (int)(short)(wVar4 << 3)))->raw;
        FVar11 = (FixedPoint_)
                 ((FixedPoint_ *)((int)nextCameraDirections + (short)(wVar4 << 3) + 4))->raw;
      }
apply_accel_limits_setup:
      if (FVar8.raw != 0) {
        if ((int)FVar8.raw < 0) {
          if (cameraXVelocity != 0xffd8) {
            cameraXVelocity = cameraXVelocity - 2;
          }
        }
        else if (cameraXVelocity != 0x28) {
          cameraXVelocity = cameraXVelocity + 2;
        }
      }
      if (FVar11.raw != 0) {
        if ((int)FVar11.raw < 0) {
          if (cameraYVelocity != 0xffd8) {
            cameraYVelocity = cameraYVelocity - 2;
          }
        }
        else if (cameraYVelocity != 0x28) {
          cameraYVelocity = cameraYVelocity + 2;
        }
      }
      sVar6 = 0x3f;
      if ((gameStatePl != ST_GAME_IN_PROGRESS) &&
         (((sVar6 = 0x3f, gameState == ST_CORNER_LEFT || (gameState == ST_CORNER_RIGHT)) ||
          ((ST_THROW_IN_FORWARD_RIGHT - 1 < gameState && (gameState < ST_THROW_IN_BACK_LEFT + 1)))))
         ) {
        sVar6 = 0x25;
      }
      uVar9 = ballSprite.x.s.i;
      uVar12 = ballSprite.y.s.i;
      if ((gameState < ST_STARTING_GAME) || (ST_GAME_ENDED < gameState))
      goto offset_and_clamp_to_view;
      if ((gameState == ST_STARTING_GAME) || (gameState == ST_CAMERA_GOING_TO_SHOWERS)) {
tunnel_halftime_camera_target:
        uVar9 = 0x24e;
        cameraXVelocity = 0;
        cameraYVelocity = 0;
        uVar12 = 0x1c1;
      }
      else {
        if (gameState == ST_FIRST_HALF_ENDED) goto offset_and_clamp_to_view;
        if (gameState == ST_GAME_ENDED) {
          if (-1 < (short)penaltiesState) goto offset_and_clamp_to_view;
        }
        else {
          if ((gameState == ST_GOING_TO_HALFTIME) || (gameState == ST_PLAYERS_GOING_TO_SHOWER))
          goto tunnel_halftime_camera_target;
          if (gameState == ST_RESULT_AFTER_THE_GAME) {
            uVar9 = 0x150;
            cameraXVelocity = 0;
            cameraYVelocity = 0;
            uVar12 = 0x81;
            goto offset_and_clamp_to_view;
          }
        }
        uVar9 = 0x150;
        cameraXVelocity = 0;
        cameraYVelocity = 0;
        uVar12 = 0x1c1;
      }
      goto offset_and_clamp_to_view;
    }
    sVar6 = 0x25;
    if ((((0x12e < g_cameraY.s.i) && (g_cameraY.s.i < 0x144)) &&
        ((sVar6 = 0x25, goal1TopSprite.imageIndex == 0xffff || (goal1TopSprite.onScreen == 0)))) &&
       ((goal2BottomSprite.imageIndex == 0xffff || (goal2BottomSprite.onScreen == 0)))) {
      if (g_substituteInProgress != 0) goto bench_camera_mode;
      sVar6 = 0;
    }
  }
  else {
bench_camera_mode:
    sVar6 = 0x33;
  }
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  uVar9 = g_benchXLimit;
  uVar12 = 0x1c1;
offset_and_clamp_to_view:
  sVar10 = cameraXVelocity + (uVar9 - 0xa8);
  sVar13 = cameraYVelocity + (uVar12 - 0x88);
  if (sVar10 < sVar6) {
    sVar10 = sVar6;
  }
  if ((short)(0x150 - sVar6) <= sVar10) {
    sVar10 = 0x150 - sVar6;
  }
  if (g_trainingGame == 0) {
    if (sVar13 < 0x11) {
      sVar13 = 0x10;
    }
    if (0x24f < sVar13) {
      sVar13 = 0x250;
    }
  }
  else {
    if (sVar13 < 0x51) {
      sVar13 = 0x50;
    }
    if (0x21f < sVar13) {
      sVar13 = 0x220;
    }
  }
  sVar10 = sVar10 - g_cameraX._0_2_;
  sVar13 = sVar13 - g_cameraY._0_2_;
  if ((sVar13 != 0) || (sVar10 != 0)) {
    dVar5 = 0;
    if (sVar10 != 0) {
      dVar5 = (sVar10 >> 2) * 0x4000;
    }
    dVar7 = 0;
    if (sVar13 != 0) {
      dVar7 = (sVar13 >> 2) * 0x4000;
    }
    dVar3 = -maxCameraMovement;
    if ((int)maxCameraMovement <= (int)dVar5) {
      dVar5 = maxCameraMovement;
    }
    if ((int)dVar5 <= (int)dVar3) {
      dVar5 = dVar3;
    }
    if ((int)maxCameraMovement <= (int)dVar7) {
      dVar7 = maxCameraMovement;
    }
    if ((int)dVar7 <= (int)dVar3) {
      dVar7 = dVar3;
    }
    iVar1 = g_cameraX.raw + dVar5;
    iVar2 = g_cameraY.raw + dVar7;
    g_cameraX.s.frac = (short)iVar1;
    g_cameraY.s.frac = (short)iVar2;
    sVar6 = (short)((uint)iVar1 >> 0x10);
    sVar10 = (short)((uint)iVar2 >> 0x10);
    if (iVar1 < 0) {
      sVar6 = 0;
    }
    if (SCREEN_WIDTH - 1 < sVar6) {
      sVar6 = SCREEN_WIDTH;
    }
    if (iVar2 < 0x100000) {
      sVar10 = 0x10;
    }
    if (0x25f < sVar10) {
      sVar10 = 0x260;
    }
    SetCameraCoordinates(sVar6,sVar10);
    cameraCoordinatesValid = 0;
  }
  return;
}


// --- UpdateBall @ 00109380 ---

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void __usercall UpdateBall(void)

{
  FixedPoint_ ballX;
  FixedPoint_ FVar1;
  FixedPoint_ FVar2;
  word wVar3;
  undefined4 unaff_D1;
  undefined4 unaff_D2;
  FixedPoint_ FVar4;
  word wVar5;
  FixedPoint_ FVar6;
  word wVar7;
  short sVar8;
  FixedPoint_ ballY;
  word *pwVar9;
  
  FVar1.raw = ballSprite.z.raw;
  ballY.raw = ballSprite.y.raw;
  ballX.raw = ballSprite.x.raw;
  if (hideBall == 0) {
    ballShadowSprite.imageIndex = SPR_BALL_SHADOW;
    if ((ballSprite.deltaX.raw == 0) && (ballSprite.deltaY.raw == 0)) {
      if (ballSprite.frameIndicesTable != ballStaticFrameIndices) {
        ballSprite.frameIndicesTable = ballStaticFrameIndices;
        ballSprite.frameIndex = 0;
      }
    }
    else if (ballSprite.frameIndicesTable != ballMovingFrameIndices) {
      ballSprite.frameIndicesTable = ballMovingFrameIndices;
      ballSprite.frameIndex = 0;
    }
    if ((ballSprite.speed == 0) ||
       (ballSprite.cycleFramesTimer = ballSprite.cycleFramesTimer - ((ballSprite.speed >> 9) + 1),
       -1 < (int)((uint)ballSprite.cycleFramesTimer << 0x10))) {
      if (-1 < (short)ballSprite.imageIndex) goto has_picture;
    }
    else {
      ballSprite.frameIndex = ballSprite.frameIndex + 1;
      ballSprite.cycleFramesTimer = ballSprite.frameDelay;
    }
    while (ballSprite.imageIndex =
                *(word *)((int)ballSprite.frameIndicesTable +
                         (int)(short)(ballSprite.frameIndex << 1)), (short)ballSprite.imageIndex < 0
          ) {
      ballSprite.frameIndex = 0;
    }
  }
  else {
    ballSprite.imageIndex = 0xffff;
    ballShadowSprite.imageIndex = 0xffff;
  }
has_picture:
  FVar6._0_2_ = (undefined2)((uint)unaff_D1 >> 0x10);
  FVar6.s.frac = ballSprite.destX;
  FVar4._0_2_ = (undefined2)((uint)unaff_D2 >> 0x10);
  FVar4.s.frac = ballSprite.destY;
  wVar3 = CalculateDeltaXAndY(ballSprite.speed,ballSprite.destX,ballSprite.destY,ballSprite.x.s.i,
                              ballSprite.y.s.i);
  ballSprite.direction = wVar3;
  if (-1 < (short)wVar3) {
    ballSprite.direction = (wVar3 + 0x10 & 0xff) >> 5;
    ballSprite.fullDirection = wVar3;
  }
  wVar3 = kBallGroundConstant;
  if ((topTeamData.playerHasBall == 0) && (bottomTeamData.playerHasBall == 0)) {
    wVar3 = pitchBallSpeedFactor + kBallGroundConstant;
  }
  if (ballSprite.z.s.i != 0) {
    wVar3 = kBallAirConstant;
  }
  ballSprite.speed = ballSprite.speed - wVar3;
  if ((int)((uint)ballSprite.speed << 0x10) < 0) {
    ballSprite.speed = 0;
  }
  ballSprite.x.raw = FVar6.raw + ballSprite.x.raw;
  ballSprite.y.raw = FVar4.raw + ballSprite.y.raw;
  ballSprite.deltaX = FVar6;
  ballSprite.deltaY = FVar4;
  if (gameState == ST_KEEPER_HOLDS_BALL) {
    if (((g_substituteInProgress == 0) ||
        ((TeamGeneralInfo *)teamThatSubstitutes != lastTeamPlayedBeforeBreak)) ||
       (*(int *)(teamThatSubstitutes + 0x20) != 0)) {
      if (ballSprite.speed != 0) {
        writeOnlyVar04 = writeOnlyVar04 + 1;
        UpdateBallWithControllingGoalkeeper(lastTeamPlayedBeforeBreak->controlledPlayer);
      }
      if (ballSprite.z.s.i != 5) {
        if ((ushort)ballSprite.z._0_2_ < 6) {
          FVar6.raw = (int)frontbufferBaseAlt + 0x1caa;
        }
        else {
          FVar6.raw = 0xfffefffe;
        }
        goto LAB_00109538;
      }
    }
    else {
                    /* WARNING: Ignoring partial resolution of indirect */
      ballSprite.z.s.i = 0;
    }
LAB_00109572:
    FVar6.raw = 0;
  }
  else {
    FVar6.raw = 0;
    if (ballSprite.deltaZ.raw != 0) {
      FVar6.raw = ballSprite.deltaZ.raw - kGravityConstant | 1;
LAB_00109538:
      ballSprite.z.raw = FVar6.raw + ballSprite.z.raw;
      if ((int)ballSprite.z.raw < 0) {
        ballSprite.speed =
             ballSprite.speed - (short)((uint)ballSprite.speed * (uint)ballSpeedBounceFactor >> 8);
                    /* WARNING: Ignoring partial resolution of indirect */
        ballSprite.z.s.i = 0;
        FVar6.raw = -FVar6.raw - ((int)-FVar6.raw >> 8 & 0xffffU) * (uint)ballBounceFactor | 1;
        if (FVar6.raw < (uchar *)0xa001) goto LAB_00109572;
        sub_107260();
      }
    }
  }
  FVar4 = ballSprite.y;
  if (gameStatePl != ST_GAME_IN_PROGRESS) {
    if (((short)ballSprite.x.s.i < 0x35) || (FVar4 = ballSprite.x, 0x26a < (short)ballSprite.x.s.i))
    {
      ballSprite.destX = ballSprite.x.s.i * 2 - ballSprite.destX;
      ballSprite.speed = ballSprite.speed >> 1;
      FVar4 = ballX;
      ballSprite.y = ballY;
      ballSprite.z = FVar1;
    }
    ballSprite.x = FVar4;
    if (((short)ballSprite.y.s.i < 100) || (FVar4 = ballSprite.y, 799 < (short)ballSprite.y.s.i)) {
      ballSprite.destY = ballSprite.y.s.i * 2 - ballSprite.destY;
      ballSprite.speed = ballSprite.speed >> 1;
      ballSprite.x = ballX;
      FVar4 = ballY;
      ballSprite.z = FVar1;
    }
  }
  ballSprite.y = FVar4;
  FVar4 = ballSprite.y;
  FVar2 = ballSprite.z;
  ballSprite.deltaZ = FVar6;
  if (((short)ballSprite.y.s.i < 0x81) || (0x301 < (short)ballSprite.y.s.i)) {
    sVar8 = ballSprite.x.s.i - 1;
    if (((short)ballSprite.y._0_2_ < 0x81) && (0x70 < (short)ballSprite.y._0_2_)) {
      if ((((short)ballSprite.z.s.i < 0x14) && (0x127 < sVar8)) && (sVar8 < 0x175)) {
        if ((short)ballSprite.y._0_2_ < 0x7c) {
          if (10 < (short)ballSprite.z.s.i) {
LAB_001096be:
            if ((short)FVar1.s.i < 0x10) {
              ballSprite.deltaZ.raw = 1;
              ballSprite.speed = 0;
              ballSprite.x = ballX;
              FVar4 = ballY;
              FVar2 = FVar1;
            }
            else {
              ballSprite.deltaZ.raw = 1;
              ballSprite.destY = ballSprite.y.s.i - 1000;
              ballSprite.speed = 0x200;
              FVar2 = FVar1;
            }
            goto LAB_0010977e;
          }
        }
        else if (0xf < (short)ballSprite.z.s.i) goto LAB_001096be;
        if ((sVar8 < 0x12e) || (0x16e < sVar8)) {
LAB_00109762:
          ReverseDestXDirection(&ballSprite,ballX.raw);
          ResetBothTeamSpinTimers();
          ballSprite.speed = ballSprite.speed >> 2;
          ballSprite.x = ballX;
          FVar4 = ballY;
          FVar2 = ballSprite.z;
        }
        else if ((short)ballSprite.y.s.i < 0x77) {
LAB_0010974c:
          ReverseDestYDirection(&ballSprite,ballY.raw);
          ResetBothTeamSpinTimers();
          ballSprite.speed = ballSprite.speed >> 3;
          ballSprite.x = ballX;
          FVar4 = ballY;
          FVar2 = ballSprite.z;
        }
      }
    }
    else if ((((0x301 < (short)ballSprite.y.s.i) && ((short)ballSprite.y.s.i < 0x311)) &&
             ((short)ballSprite.z.s.i < 0x14)) && ((0x127 < sVar8 && (sVar8 < 0x175)))) {
      if ((short)ballSprite.z.s.i < 0x10) {
        if ((0x12d < sVar8) && (sVar8 < 0x16f)) {
          if ((short)ballSprite.y.s.i < 0x30b) goto LAB_0010977e;
          goto LAB_0010974c;
        }
        goto LAB_00109762;
      }
      if ((short)FVar1.s.i < 0x10) {
        ballSprite.deltaZ.raw = 1;
        ballSprite.speed = 0;
        ballSprite.x = ballX;
        FVar4 = ballY;
        FVar2 = FVar1;
      }
      else {
        ballSprite.deltaZ.raw = 1;
        ballSprite.destY = ballSprite.y.s.i + 1000;
        ballSprite.speed = 0x200;
        FVar2 = FVar1;
      }
    }
  }
LAB_0010977e:
  ballSprite.z = FVar2;
  ballSprite.y = FVar4;
  FVar6 = ballSprite.y;
  if (gameStatePl != ST_GAME_IN_PROGRESS) goto LAB_001098a4;
  sVar8 = ballSprite.x.s.i - 1;
  if (((short)ballSprite.y.s.i < 0x81) ||
     ((((0x84 < (short)ballSprite.y.s.i &&
        ((0x301 < (short)ballSprite.y.s.i || ((short)ballSprite.y.s.i < 0x2fe)))) ||
       (0x13 < (short)ballSprite.z.s.i)) || ((sVar8 < 0x128 || (0x174 < sVar8))))))
  goto LAB_001098a4;
  if ((short)ballSprite.z._0_2_ < 0x10) {
    if ((0x12d < sVar8) && (sVar8 < 0x16f)) goto LAB_001098a4;
    sVar8 = (currentGameTick & 0x1f) * 0x10 + -0x100;
    if (((int)ballSprite.deltaY.raw < -0x5000) || (0x5000 < (int)ballSprite.deltaY.raw))
    goto LAB_0010984c;
    ReverseDestYDirection(&ballSprite,ballY.raw);
    ResetBothTeamSpinTimers();
    ballSprite.destY = sVar8 + ballSprite.destY;
  }
  else {
    sVar8 = (currentGameTick & 0x1f) * 0x10 + -0x100;
    if (((int)ballSprite.deltaY.raw < -0x5000) || (0x5000 < (int)ballSprite.deltaY.raw)) {
LAB_0010984c:
      if ((short)ballSprite.y._0_2_ < 0x1c2) {
        if (-1 < (int)ballSprite.deltaY.raw) goto LAB_001098a4;
      }
      else if ((int)ballSprite.deltaY.raw < 0) goto LAB_001098a4;
      ReverseDestYDirection(&ballSprite,ballY.raw);
      ResetBothTeamSpinTimers();
      ballSprite.destX = sVar8 + ballSprite.destX;
    }
    else {
      ballSprite.deltaZ.raw = -ballSprite.deltaZ.raw;
      ballY.raw = ballY.raw + 0x10000;
      ballSprite.z = FVar1;
    }
  }
  PlaySample3();
  ballSprite.speed = ballSprite.speed - (ballSprite.speed >> 2);
  ballSprite.x = ballX;
  FVar6 = ballY;
LAB_001098a4:
  ballSprite.y = FVar6;
  if (gameStatePl == ST_GAME_IN_PROGRESS) {
    if ((short)ballSprite.x._0_2_ < 0x51) {
      CheckIfBallOutOfPlay();
    }
    else if ((short)ballSprite.x.s.i < 0x24f) {
      if ((short)ballSprite.y._0_2_ < 0x81) {
        CheckIfBallOutOfPlay();
      }
      else if (0x301 < (short)ballSprite.y.s.i) {
        CheckIfBallOutOfPlay();
      }
    }
    else {
      CheckIfBallOutOfPlay();
    }
  }
  ballShadowSprite.x.s.i = (ballSprite.z.s.i >> 1) + ballSprite.x.s.i + 1;
  ballShadowSprite.y.s.i = ((ballSprite.z.s.i >> 2) + ballSprite.y.s.i) - 9;
  ballShadowSprite.z.s.i = 0xfff6;
  CalculateNextBallPosition();
  wVar3 = ballNextX;
  wVar5 = ballNextY;
  if ((((gameStatePl != ST_GAME_IN_PROGRESS) && (gameState != ST_FIRST_HALF_ENDED)) &&
      (gameState != ST_GAME_ENDED)) &&
     (((gameState == ST_KEEPER_HOLDS_BALL || (gameState == ST_GOAL_OUT_LEFT)) ||
      (wVar3 = foulXCoordinate, wVar5 = foulYCoordinate, gameState == ST_GOAL_OUT_RIGHT)))) {
    wVar3 = 0x150;
    wVar5 = 0x1c1;
  }
  wVar7 = 0;
  ballXQuadrantDead = 0;
  pwVar9 = (word *)0x111206;
  if (ballXQuadrantLimits[0] <= wVar3) {
    ballXQuadrantDead = 1;
    wVar7 = 1;
    pwVar9 = (word *)0x111208;
    if (ballXQuadrantLimits[1] <= wVar3) {
      ballXQuadrantDead = 2;
      wVar7 = 2;
      pwVar9 = (word *)0x11120a;
      if (ballXQuadrantLimits[2] <= wVar3) {
        ballXQuadrantDead = 3;
        wVar7 = 3;
        pwVar9 = (word *)0x11120c;
        if (ballXQuadrantLimits[3] <= wVar3) {
          ballXQuadrantDead = 4;
          wVar7 = 4;
          pwVar9 = ballYQuadrantLimits;
        }
      }
    }
  }
  playerXQuadrantOffset = (word)(((short)((wVar3 - pwVar9[-2]) + -0x33) * 5) / 0xf);
  ballYQuadrantDead = 0;
  pwVar9 = (word *)0x111210;
  ballQuadrantIndex = wVar7;
  if (ballYQuadrantLimits[0] <= wVar5) {
    ballYQuadrantDead = 1;
    ballQuadrantIndex = wVar7 + 5;
    pwVar9 = (word *)0x111212;
    if (ballYQuadrantLimits[1] <= wVar5) {
      ballYQuadrantDead = 2;
      ballQuadrantIndex = wVar7 + 10;
      pwVar9 = (word *)0x111214;
      if (ballYQuadrantLimits[2] <= wVar5) {
        ballYQuadrantDead = 3;
        ballQuadrantIndex = wVar7 + 0xf;
        pwVar9 = (word *)0x111216;
        if (ballYQuadrantLimits[3] <= wVar5) {
          ballYQuadrantDead = 4;
          ballQuadrantIndex = wVar7 + 0x14;
          pwVar9 = (word *)0x111218;
          if (ballYQuadrantLimits[4] <= wVar5) {
            ballYQuadrantDead = 5;
            ballQuadrantIndex = wVar7 + 0x19;
            pwVar9 = playerXQuadrantsCoordinates;
            if (ballYQuadrantLimits[5] <= wVar5) {
              ballYQuadrantDead = 6;
              ballQuadrantIndex = wVar7 + 0x1e;
              pwVar9 = (word *)0x11121c;
            }
          }
        }
      }
    }
  }
  playerYQuadrantOffset = (word)(((short)((wVar5 - pwVar9[-2]) + -0x2d) * 5) / 0xf);
  return;
}


// --- ReverseDestXDirection @ 00109a54 ---

/* in:
        D5 -  ball x
        A0 -> ball sprite
   
   Reverse dest x direction around x (by the same delta x amount). */

void __usercall ReverseDestXDirection(Sprite *spr,int ballX)

{
  spr->destX = (short)((uint)ballX >> 0x10) * 2 - spr->destX;
  return;
}


// --- ReverseDestYDirection @ 00109a66 ---

/* in:
        D6 -  ball y
        A0 -> ball sprite
   
   Reverse dest y direction around y (by the same delta y amount). */

void __usercall ReverseDestYDirection(Sprite *spr,int ballY)

{
  spr->destY = (short)((uint)ballY >> 0x10) * 2 - spr->destY;
  return;
}


// --- DoGoalkeeperSprites @ 00109a78 ---

void __usercall DoGoalkeeperSprites(void)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  Sprite *pSVar4;
  TeamGeneralInfo *pTVar5;
  
  pTVar5 = &topTeamData;
  if (topTeamData.goalkeeperDivingRight != 0) {
    sVar2 = 1;
LAB_00109aac:
    pSVar4 = &goalie1Sprite;
    sVar3 = 0x359;
    if ((0x392 < goalie1Sprite.imageIndex) && (goalie1Sprite.imageIndex < 0x3af)) {
      sVar3 = 0x393;
    }
    if (pTVar5->teamNumber != 1) {
      pSVar4 = &goalie2Sprite;
      sVar3 = 0x3cd;
      if ((0x406 < goalie2Sprite.imageIndex) && (goalie2Sprite.imageIndex < 0x423)) {
        sVar3 = 0x407;
      }
    }
    ballSprite.x = pSVar4->x;
    ballSprite.y.s.i = (pSVar4->y).s.i + sVar2;
    ballSprite.z.s.i = 0;
    ballSprite.deltaZ.raw = 0;
    ballSprite.speed = 0;
    uVar1 = pSVar4->imageIndex - sVar3;
    if (0x1b < uVar1) {
      panicReasonCode = 0x237;
      PanicHaltLoop();
    }
    ballSprite.z.s.i = *(word *)((int)dseg_17DEF4 + (int)(short)(uVar1 * 2));
    return;
  }
  if (topTeamData.goalkeeperDivingLeft == 0) {
    pTVar5 = &bottomTeamData;
    if (bottomTeamData.goalkeeperDivingRight != 0) {
      sVar2 = -1;
      goto LAB_00109aac;
    }
    if (bottomTeamData.goalkeeperDivingLeft == 0) {
      return;
    }
    sVar2 = -1;
  }
  else {
    sVar2 = 1;
  }
  pSVar4 = &goalie1Sprite;
  if (pTVar5->teamNumber != 1) {
    pSVar4 = &goalie2Sprite;
  }
  ballSprite.x = pSVar4->x;
  ballSprite.y.s.i = (pSVar4->y).s.i + sVar2;
  ballSprite.deltaZ.raw = 0;
  ballSprite.speed = 0;
  ballSprite.z.s.i =
       *(word *)((int)kGoalKeeperClaimingBallHeight + (int)(short)(pSVar4->frameSwitchCounter << 1))
  ;
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


// --- SetRefereeToLeavingState @ 00109c88 ---

/* Sets off screen x and y destination coordinates for the referee. */

void __usercall SetRefereeToLeavingState(void)

{
  ushort uVar1;
  
  uVar1 = Rand();
  refereeSprite.destY = 0x81;
  if (foulYCoordinate < 0x1c2) {
    refereeSprite.destY = 0x302;
  }
  refereeSprite.destX = refereeSprite.x.s.i + ((uVar1 >> 2) - 0x20);
  InitRefereeAnimationTable((AnimTable *)&refComingAnimTable);
  refState = REF_LEAVING;
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


// --- UpdateReferee @ 00109d04 ---

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* Also queue up sound samples. */

void __usercall UpdateReferee(void)

{
  word wVar1;
  word wVar2;
  short sVar3;
  undefined4 unaff_D1;
  FixedPoint_ FVar4;
  undefined4 unaff_D2;
  FixedPoint_ FVar5;
  
  wVar2 = refereeSprite.direction;
  FVar5.raw = refereeSprite.y.raw;
  FVar4.raw = refereeSprite.x.raw;
  if (refState == 0) {
    return;
  }
  if (refereeSprite.visible == 0) {
    return;
  }
  if (refereeSprite.onScreen == 0) {
    if (gameStatePl == ST_GAME_IN_PROGRESS) {
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
  if (refState == REF_ABOUT_TO_GIVE_CARD) {
    refState = REF_BOOKING;
    if (whichCard == CARD_RED) {
      InitRefereeAnimationTable((AnimTable *)&refRedCardAnimTable);
      return;
    }
    if (whichCard != CARD_SECOND_YELLOW) {
      InitRefereeAnimationTable((AnimTable *)&refYellowCardAnimTable);
      return;
    }
    InitRefereeAnimationTable((AnimTable *)&refSecondYellowAnimTable);
    return;
  }
  if (refState != REF_INCOMING) {
    if (refState != REF_LEAVING) {
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
    refState = REF_WAITING_PLAYER;
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


// --- InjuryUpdateTickGuard @ 00109f4a ---

void __usercall InjuryUpdateTickGuard(void)

{
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


// --- SetAdvertisementsVisible @ 00109fb8 ---

void __usercall SetAdvertisementsVisible(void)

{
  short sVar1;
  Sprite *pSVar2;
  
  pSVar2 = advertInGameSprites;
  sVar1 = 7;
  do {
    pSVar2->visible = 1;
    pSVar2 = pSVar2 + 1;
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  InitDisplaySprites();
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


// --- ManageAdvertisements @ 00109ff2 ---

void __usercall ManageAdvertisements(void)

{
  int *piVar1;
  ushort uVar2;
  word wVar3;
  short sVar4;
  word wVar5;
  Sprite *pSVar6;
  int *piVar7;
  dword *pdVar8;
  
  if (g_trainingGame != 0) {
    return;
  }
  if ((gameStatePl == ST_GAME_IN_PROGRESS) || (0x54 < (short)g_cameraY.s.i)) {
    advertIndex = 0;
    goto teardown_ads_and_reset_counters;
  }
  if (blockAdvertisements != 0) {
    return;
  }
  if (goalCameraMode != 0) {
    return;
  }
  if ((short)advertIndex < 0) {
    return;
  }
  if (gameState == ST_KEEPER_HOLDS_BALL) {
    return;
  }
  if (gameState == ST_RESULT_AFTER_THE_GAME) {
    return;
  }
  wVar3 = advertIndex;
  if (advertIndex == 0) {
    uVar2 = Rand();
    if (uVar2 < 0x81) {
      if (advertInGameSprites[0].visible == 0) {
        SetAdvertisementsVisible();
      }
      uVar2 = Rand();
      wVar3 = (uVar2 & 1) + 1;
      if ((0x145 < (short)foulXCoordinate) &&
         (wVar3 = (uVar2 & 1) + 2, (short)foulXCoordinate < 0x15b)) {
        uVar2 = Rand();
        wVar3 = ((ushort)(uVar2 * 3) >> 8) + 1;
      }
      goto route_to_selected_ad;
    }
  }
  else {
route_to_selected_ad:
    advertIndex = wVar3;
    if (advertIndex == 2) {
      wVar5 = SPR_ADVERT_2_PART_1;
      pdVar8 = advert2Pointers;
      wVar3 = 0x111;
    }
    else if (advertIndex == 3) {
      wVar5 = SPR_ADVERT_3_PART_1;
      pdVar8 = advert3Pointers;
      wVar3 = 0x1b0;
    }
    else {
      wVar5 = SPR_ADVERT_1_PART_1;
      pdVar8 = advert1Pointers;
      wVar3 = 0x70;
    }
    if (advertSlideTimer != 0) {
      advertSlideTimer = advertSlideTimer - 1;
build_ad_strip_loop_entry:
      pSVar6 = advertInGameSprites;
      sVar4 = 7;
      piVar7 = (int *)(spriteGraphicsPtr + (short)(wVar5 << 2));
      do {
        piVar1 = (int *)*piVar7;
        pSVar6->imageIndex = wVar5;
        (pSVar6->x).s.i = wVar3;
        (pSVar6->y).s.i = 0x5a;
        (pSVar6->z).s.i = 0;
        *(undefined2 *)(piVar1 + 3) = 6;
        *piVar1 = *pdVar8 + (uint)currentAnimatedAdLine * (uint)*(ushort *)((int)piVar1 + 0xe) * 8;
        wVar3 = wVar3 + 0x10;
        wVar5 = wVar5 + 1;
        pSVar6 = pSVar6 + 1;
        sVar4 = sVar4 + -1;
        piVar7 = piVar7 + 1;
        pdVar8 = pdVar8 + 1;
      } while (sVar4 != -1);
      return;
    }
    if ((frameCount & 7) != 0) goto build_ad_strip_loop_entry;
    currentAnimatedAdLine = currentAnimatedAdLine + 1;
    if (currentAnimatedAdLine == 6) {
      advertSlideTimer = 0x28;
      goto build_ad_strip_loop_entry;
    }
    if (currentAnimatedAdLine != 0xd) goto build_ad_strip_loop_entry;
  }
  advertIndex = 0xffff;
teardown_ads_and_reset_counters:
  if (advertInGameSprites[0].visible != 0) {
    SetAdvertisementsInvisible();
  }
  advertSlideTimer = 0;
  currentAnimatedAdLine = 0;
  return;
}


// --- UpdateCornerFlagSprite @ 0010a208 ---

void __usercall UpdateCornerFlagSprite(void)

{
  if ((ushort)(g_cameraX.s.i + 0xa8) < 0x150) {
    cornerFlagSprite.x.s.i = 0x51;
  }
  else {
    cornerFlagSprite.x.s.i = 0x24e;
  }
  if ((ushort)(g_cameraY.s.i + 0x88) < 0x1c1) {
    cornerFlagSprite.y.s.i = 0x81;
  }
  else {
    cornerFlagSprite.y.s.i = 0x301;
  }
  cornerFlagSprite.imageIndex =
       cornerFlagPictureIndices[(short)(frameCount >> 1 & 0x1f)] + SPR_CORNER_FLAG_FRAME_0;
  return;
}


// --- SpinBig_S_Sprite @ 0010a28a ---

void __usercall SpinBig_S_Sprite(void)

{
  big_S_Sprite.imageIndex = 0xffff;
  if (g_spinBigS != 0) {
    if ((((g_inSubstitutesMenu == 0) || (g_subsState == 0)) && (showingUserStats == 0)) &&
       (statsTimer == 0)) {
      big_S_index = lastFrameTicks + big_S_index & 0x3f;
    }
    big_S_Sprite.imageIndex = (big_S_index >> 1) + BIG_S_FRAME_00;
    big_S_Sprite.x.s.i = g_cameraX.s.i + 0x12d;
    big_S_Sprite.y.s.i = g_cameraY.s.i + 0x271e;
    if (currentPlayerIndicatorPosition == 3) {
      big_S_Sprite.y.s.i = g_cameraY.s.i + 0x2728;
    }
    big_S_Sprite.z.s.i = 10000;
  }
  return;
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


// --- InitGameRestoreTeams @ 0010a50e ---

/* in:
        A5 -> left team in-game struct
        A6 -> right team in-game struct
   
   Also loads the game palette from pal.256.
    */

void __usercall InitGameRestoreTeams(void *leftTeamInGame,void *rightTeamInGame)

{
  int iVar1;
  ushort *puVar2;
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
  paletteIndex = 2;
  nullsub_5();
  CrowdResetMatchState();
  uVar3 = Rand();
  teamPlayingUp = (uVar3 & 1) + 1;
  uVar3 = Rand();
  teamStarting = (uVar3 & 1) + 1;
  timeDelta = *(word *)((int)gameLenSecondsTable + (int)(short)(gameLengthInGame << 1));
  uVar3 = (pitchNumberAndType & 0xff) << 2;
  puVar2 = *(ushort **)((int)pitchPalettePtrs + (int)(short)uVar3);
  paletteTable[2] = (undefined *)gamePalette;
  gamePalette[0] = *puVar2;
  gamePalette[7] = puVar2[1];
  gamePalette[9] = puVar2[2];
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
      sVar2 = (short)(char)pTVar7->players[0].face;
      if (sVar4 == 10) {
        sVar2 = (short)(char)team1GoalieFaceToPosition[sVar2];
        if (sVar2 == -1) {
          sVar2 = 0;
        }
        wVar3 = sVar2 * 0x3a;
      }
      else {
        wVar3 = sVar2 * 0x65;
      }
      pSVar1->frameOffset = wVar3;
    }
    pSVar1 = *ppSVar6;
    pSVar1->frameOffset = 0;
    if (useIndividualPlayerSkinColor != 0) {
      sVar2 = (short)(char)pTVar8->players[0].face;
      if (sVar4 == 10) {
        sVar2 = (short)(char)team2GoalieFaceToPosition[sVar2];
        if (sVar2 == -1) {
          sVar2 = 0;
        }
        wVar3 = sVar2 * 0x3a;
      }
      else {
        wVar3 = sVar2 * 0x65;
      }
      pSVar1->frameOffset = wVar3;
    }
    pTVar7 = (TeamGame *)(pTVar7->players[0].shortName + 7);
    pTVar8 = (TeamGame *)(pTVar8->players[0].shortName + 7);
    sVar4 = sVar4 + -1;
    ppSVar5 = ppSVar5 + 1;
    ppSVar6 = ppSVar6 + 1;
  } while (sVar4 != -1);
  return;
}


// --- UpdateBookedPlayerNumberSprite @ 0010aefe ---

void __usercall UpdateBookedPlayerNumberSprite(void)

{
  ushort uVar1;
  char *pcVar2;
  TeamGeneralInfo *unaff_A6;
  
  bookedPlayerCardOrNumberSprite.imageIndex = 0xffff;
  if (((whichCard != 0) && (refState == REF_BOOKING)) && (bookedPlayer->playerState == PL_BOOKED)) {
    refTimer = lastFrameTicks + refTimer;
    uVar1 = refTimer >> 3;
    pcVar2 = yellowCardTable;
    if ((whichCard != CARD_YELLOW) && (pcVar2 = redCardTable, whichCard != CARD_RED)) {
      pcVar2 = secondYellowTable;
    }
    if (pcVar2[(short)uVar1] == CARD_YELLOW) {
      bookedPlayerCardOrNumberSprite.imageIndex = SPR_YELLOW_CARD;
    }
    else if (pcVar2[(short)uVar1] == CARD_RED) {
      bookedPlayerCardOrNumberSprite.imageIndex = SPR_RED_CARD;
    }
    else {
      if (pcVar2[(short)uVar1] < '\0') {
        SetRefereeToLeavingState();
        if ((whichCard & 2) != 0) {
          SendPlayerAway(bookedPlayer,unaff_A6);
        }
        whichCard = 0;
        bookedPlayer = (Sprite *)0x0;
        return;
      }
      if (pcVar2[(short)uVar1] == '\0') {
        bookedPlayerCardOrNumberSprite.imageIndex = 0xffff;
        return;
      }
      bookedPlayerCardOrNumberSprite.imageIndex =
           (short)(char)lastTeamBooked->inGameTeamPtr->players[0].shortName
                        [(short)((bookedPlayer->playerOrdinal - 1) * 0x3d) + -9] +
           SPR_CORNER_FLAG_FRAME_3;
    }
    bookedPlayerCardOrNumberSprite.x.s.i = (bookedPlayer->x).s.i;
    bookedPlayerCardOrNumberSprite.z.s.i = 0x14;
    bookedPlayerCardOrNumberSprite.y.s.i = (bookedPlayer->y).s.i;
  }
  return;
}


// --- UpdateControlledPlayerNumbers @ 0010b070 ---

void __usercall UpdateControlledPlayerNumbers(void)

{
  Sprite *pSVar1;
  word wVar2;
  short sVar3;
  Sprite *pSVar4;
  TeamGeneralInfo *pTVar5;
  TeamGame *pTVar6;
  
  sVar3 = 1;
  pSVar4 = &team1CurPlayerNumSprite;
  pTVar5 = &topTeamData;
  pTVar6 = topTeamData.inGameTeamPtr;
  do {
    if ((((pTVar5->isPlCoach == 0) && (pTVar5->playerNumber == 0)) && (g_trainingGame == 0)) ||
       (pSVar1 = pTVar5->controlledPlayer, pSVar1 == (Sprite *)0x0)) goto LAB_0010b0fe;
    wVar2 = pSVar1->playerOrdinal - 1;
    if (wVar2 == pTVar6->markedPlayer) {
      if (sVar3 == 0) {
        if (((byte)currentGameTick & 0x10) == 0) goto LAB_0010b0cc;
      }
      else if (((byte)currentGameTick & 0x10) != 0) goto LAB_0010b0cc;
LAB_0010b0fe:
      pSVar4->imageIndex = 0xffff;
    }
    else {
LAB_0010b0cc:
      pSVar4->imageIndex =
           (short)(char)pTVar6->players[0].shortName[(short)(wVar2 * 0x3d) + -9] +
           SPR_CORNER_FLAG_FRAME_3;
      wVar2 = (pSVar1->z).s.i;
      (pSVar4->x).s.i = (pSVar1->x).s.i;
      (pSVar4->z).s.i = wVar2 + 0x14;
      (pSVar4->y).s.i = (pSVar1->y).s.i;
    }
    pSVar4 = &team2CurPlayerNumSprite;
    pTVar5 = &bottomTeamData;
    sVar3 = sVar3 + -1;
    pTVar6 = bottomTeamData.inGameTeamPtr;
    if (sVar3 == -1) {
      return;
    }
  } while( true );
}


// --- MarkPlayer @ 0010b11a ---

void __usercall MarkPlayer(void)

{
  int iVar1;
  ushort uVar2;
  TeamGeneralInfo *pTVar3;
  
  pTVar3 = &topTeamData;
  if (((byte)currentGameTick & 0x10) != 0) {
    pTVar3 = &bottomTeamData;
  }
  playerMarkSprite.imageIndex = 0xffff;
  uVar2 = pTVar3->inGameTeamPtr->markedPlayer;
  if (((-1 < (short)uVar2) && (uVar2 < 0xb)) &&
     (iVar1 = *(int *)((int)pTVar3->spritesTable + (int)(short)(uVar2 << 2)),
     *(char *)(iVar1 + 0xc) == PL_NORMAL)) {
    playerMarkSprite.imageIndex = 0x442;
    playerMarkSprite.x.s.i = *(word *)(iVar1 + 0x1e);
    playerMarkSprite.z.s.i = *(short *)(iVar1 + 0x26) + 0x14;
    playerMarkSprite.y.s.i = *(word *)(iVar1 + 0x22);
  }
  return;
}


// --- SetCurrentPlayerName @ 0010b180 ---

/* Set sprite that holds current player number and name to be drawn at the top left corner of the
   screen. */

void __usercall SetCurrentPlayerName(void)

{
  short sVar1;
  byte bVar2;
  TeamGeneralInfo *pTVar3;
  Sprite *pSVar4;
  
  currentPlayerNameSprite.visible = 1;
  if (currentPlayerIndicatorPosition == 0) {
    lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
    currentPlayerNameSprite.x.s.i = 25000;
    currentPlayerNameSprite.y.s.i = 25000;
    currentPlayerNameSprite.z.s.i = 25000;
    currentPlayerNameSprite.visible = 1;
    currentPlayerNameSprite.imageIndex = 0xffff;
    return;
  }
  if ((resultTimer != 0) && (currentPlayerIndicatorPosition < 3)) {
    lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
    currentPlayerNameSprite.x.s.i = 25000;
    currentPlayerNameSprite.y.s.i = 25000;
    currentPlayerNameSprite.z.s.i = 25000;
    currentPlayerNameSprite.visible = 1;
    currentPlayerNameSprite.imageIndex = 0xffff;
    return;
  }
  pTVar3 = lastTeamScored;
  pSVar4 = currentScorer;
  if ((currentScorer != (Sprite *)0x0) ||
     (pTVar3 = lastTeamBooked, pSVar4 = bookedPlayer, whichCard != 0)) {
    if (((byte)currentGameTick & 8) == 0) {
      lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
      currentPlayerNameSprite.x.s.i = 25000;
      currentPlayerNameSprite.y.s.i = 25000;
      currentPlayerNameSprite.z.s.i = 25000;
      currentPlayerNameSprite.visible = 1;
      currentPlayerNameSprite.imageIndex = 0xffff;
      return;
    }
    goto LAB_0010b27e;
  }
  pTVar3 = lastTeamScored;
  pSVar4 = lastPlayerBeforeGoalkeeper;
  if (lastPlayerBeforeGoalkeeper == (Sprite *)0x0) {
    pTVar3 = lastTeamPlayed;
    pSVar4 = lastPlayerPlayed;
    if (gameStatePl == ST_GAME_IN_PROGRESS) {
      if (lastPlayerPlayed == (Sprite *)0x0) {
        lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
        currentPlayerNameSprite.x.s.i = 25000;
        currentPlayerNameSprite.y.s.i = 25000;
        currentPlayerNameSprite.z.s.i = 25000;
        currentPlayerNameSprite.visible = 1;
        currentPlayerNameSprite.imageIndex = 0xffff;
        return;
      }
      if (lastTeamPlayed->playerHasBall == 0) goto LAB_0010b26e;
    }
    else {
      if ((lastPlayerPlayed == (Sprite *)0x0) || (lastTeamPlayed->controlledPlayer == (Sprite *)0x0)
         ) {
        nobodysBallLastFrame = 1;
        lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
        currentPlayerNameSprite.x.s.i = 25000;
        currentPlayerNameSprite.y.s.i = 25000;
        currentPlayerNameSprite.z.s.i = 25000;
        currentPlayerNameSprite.visible = 1;
        currentPlayerNameSprite.imageIndex = 0xffff;
        return;
      }
      if (nobodysBallLastFrame != 0) {
        nobodysBallLastFrame = nobodysBallLastFrame - 1;
        lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
        currentPlayerNameSprite.x.s.i = 25000;
        currentPlayerNameSprite.y.s.i = 25000;
        currentPlayerNameSprite.z.s.i = 25000;
        currentPlayerNameSprite.visible = 1;
        currentPlayerNameSprite.imageIndex = 0xffff;
        return;
      }
    }
    nobodysBallTimer = 0x32;
  }
LAB_0010b26e:
  if (nobodysBallTimer == 0) {
    currentPlayerNameSprite.imageIndex = 0xffff;
    currentPlayerNameSprite.x.s.i = 25000;
    currentPlayerNameSprite.y.s.i = 25000;
    currentPlayerNameSprite.z.s.i = 25000;
    lastPlayerBeforeGoalkeeper = (Sprite *)0x0;
    return;
  }
  nobodysBallTimer = nobodysBallTimer - 1;
LAB_0010b27e:
  sVar1 = pSVar4->playerOrdinal - 1;
  bVar2 = plNamesLengthTableCopy[sVar1];
  currentPlayerNameSprite.imageIndex =
       (short)(char)plOrdinalsTable[sVar1] + SPR_TEAM1_PLAYER_NAMES_START;
  if (pTVar3->inGameTeamPtr != &topTeamInGame) {
    bVar2 = plNamesLengthTableCopy[sVar1 + 0x10];
    currentPlayerNameSprite.imageIndex =
         (short)(char)plOrdinalsTable[sVar1 + 0x10] + SPR_TEAM2_PLAYER_NAMES_START;
  }
  currentPlayerNameSprite.z.s.i = 8000;
  if (currentPlayerIndicatorPosition == 1) {
    currentPlayerNameSprite.x.s.i = g_cameraX.s.i + 10;
    currentPlayerNameSprite.y.s.i = g_cameraY.s.i + 0x203b;
    return;
  }
  if (currentPlayerIndicatorPosition == 2) {
    currentPlayerNameSprite.x.s.i = (g_cameraX.s.i + 0x146) - (short)(char)bVar2;
    currentPlayerNameSprite.y.s.i = g_cameraY.s.i + 0x203b;
    return;
  }
  if (currentPlayerIndicatorPosition != 3) {
    currentPlayerNameSprite.x.s.i = g_cameraX.s.i + 0x14;
    currentPlayerNameSprite.y.s.i = g_cameraY.s.i + 0x1f4e;
    return;
  }
  currentPlayerNameSprite.x.s.i = (g_cameraX.s.i + 0x146) - (short)(char)bVar2;
  currentPlayerNameSprite.y.s.i = g_cameraY.s.i + 0x1f4e;
  return;
}


// --- ClearSaveFlagForGoalSprites @ 0010b346 ---

void __usercall ClearSaveFlagForGoalSprites(void)

{
  goal1TopSprite.saveSprite = 1;
  goal2BottomSprite.saveSprite = 1;
  return;
}


// --- nullsub_8 @ 0010b358 ---

void __usercall nullsub_8(void)

{
  return;
}


// --- ResetTime @ 0010b35a ---

void __usercall ResetTime(void)

{
  gameSeconds = 0;
  gameTime[0] = '\0';
  gameTime[1] = '\0';
  gameTime[2] = '\0';
  gameTime[3] = '\0';
  secondsSwitchAccumulator = 0;
  copyTimeSprite = 1;
  currentTimeSprite.imageIndex = SPR_8_MINS;
  currentTimeSprite.visible = 0;
  return;
}


// --- UpdateTime @ 0010b388 ---

/* WARNING: Removing unreachable block (ram,0x0010b3b4) */
/* WARNING: Removing unreachable block (ram,0x0010b3a8) */
/* WARNING: Removing unreachable block (ram,0x0010b3f0) */
/* WARNING: Removing unreachable block (ram,0x0010b3fe) */

void __usercall UpdateTime(void)

{
  char cVar1;
  TeamGeneralInfo *pTVar2;
  char acVar3 [4];
  ushort uVar4;
  ushort uVar5;
  ushort dstSprite;
  bool bVar6;
  bool bVar7;
  
  timeVar = 0x96;
  if (currentTimeSprite.visible == 0) {
    currentTimeSprite.visible = 1;
    InitDisplaySprites();
  }
  acVar3 = gameTime;
  if ((short)gameSeconds < 0) {
    endGameCounter = endGameCounter - lastFrameTicks;
    if (-1 < (short)endGameCounter) {
      if (((gameStatePl == ST_GAME_IN_PROGRESS) && (0xd8 < ballSprite.y.s.i)) &&
         (ballSprite.y.s.i < 0x2aa)) {
        if ((ushort)ballSprite.y._0_2_ < 0x1c2) {
          pTVar2 = &bottomTeamData;
        }
        else {
          pTVar2 = &topTeamData;
        }
        if (lastTeamPlayed != pTVar2) goto no_update_to_time;
      }
last_cycle:
      gameSeconds = 0xffff;
      endGameCounter = 0x32;
      goto no_update_to_time;
    }
check_game_end:
    if (gameTime == (char  [4])0x1) {
      BumpPlayersLastPlayedHalfAtHalfStart();
    }
    if (gameTime == (char  [4])0x406) {
      BumpPlayersLastPlayedHalfAtHalfStart();
    }
    if (gameTime == (char  [4])0x405) {
      if ((short)gameSeconds < 0) {
        gameSeconds = 0;
        PlayEndGameWhistleSample();
        EndFirstHalf();
        BumpPlayersLastPlayedHalfAtHalfEnd();
        goto not_end_of_second_extra;
      }
      goto last_cycle;
    }
    if (gameTime == (char  [4])0x900) {
      if (-1 < (short)gameSeconds) goto last_cycle;
      gameSeconds = 0;
      PlayEndGameWhistleSample();
      BumpPlayersLastPlayedHalfAtHalfEnd();
      statsTeam1GoalsCopy = statsTeam1Goals;
      statsTeam2GoalsCopy = statsTeam2Goals;
      bVar7 = team1TotalGoals < team2TotalGoals;
      bVar6 = team1TotalGoals == team2TotalGoals;
      if (bVar6) {
        if ((secondLeg != 0) && (playing2ndGame == 1)) {
          uVar4 = team2GoalsFirstLeg + statsTeam2Goals * 2;
          uVar5 = statsTeam1Goals + team1GoalsFirstLeg * 2;
          if (uVar5 != uVar4) {
cseg_6FD6C:
            if (uVar4 < uVar5) goto team1_wins;
            goto team2_wins;
          }
        }
        if (extraTimeState == 0) goto cseg_6FBFD;
        extraTimeState = 0xffff;
        StartFirstExtraTime();
      }
      else {
not_draw:
        if (bVar7 || bVar6) {
team2_wins:
          winningTeamPtr = &bottomTeamInGame;
        }
        else {
team1_wins:
          winningTeamPtr = &topTeamInGame;
        }
end_game:
        EndOfGame();
      }
    }
    else if (gameTime == (char  [4])0x10005) {
      if (-1 < (short)gameSeconds) goto last_cycle;
      gameSeconds = 0;
      PlayEndGameWhistleSample();
      EndFirstExtraTime();
    }
    else if (gameTime == (char  [4])0x10200) {
      if (-1 < (short)gameSeconds) goto last_cycle;
      gameSeconds = 0;
      PlayEndGameWhistleSample();
      bVar7 = team1TotalGoals < team2TotalGoals;
      bVar6 = team1TotalGoals == team2TotalGoals;
      if (!bVar6) goto not_draw;
      if ((secondLeg != 0) && (playing2ndGame != 0)) {
        uVar4 = team2GoalsFirstLeg + statsTeam2Goals * 2;
        uVar5 = statsTeam1Goals + team1GoalsFirstLeg * 2;
        if (uVar5 != uVar4) goto cseg_6FD6C;
      }
cseg_6FBFD:
      if (penaltiesState == 0) {
        winningTeamPtr = (TeamGame *)0x0;
        goto end_game;
      }
      penaltiesState = 0xffff;
      StartPenalties();
    }
  }
  else {
    if (((gameStatePl == ST_GAME_IN_PROGRESS) && (playingPenalties == 0)) &&
       (secondsSwitchAccumulator = secondsSwitchAccumulator - timeDelta,
       (short)secondsSwitchAccumulator < 0)) {
      secondsSwitchAccumulator = secondsSwitchAccumulator + 0x31;
      gameSeconds = gameSeconds + 1;
      if (gameSeconds == 0x3c) {
        gameSeconds = 0;
        cVar1 = gameTime[3] + '\x01';
        gameTime[3] = cVar1;
        if (cVar1 == '\n') {
          gameTime[2] = acVar3[2];
          cVar1 = gameTime[2] + '\x01';
          gameTime._0_2_ = acVar3._0_2_;
          gameTime = (char  [4])((uint)CONCAT21(gameTime._0_2_,cVar1) << 8);
          if (cVar1 == '\n') {
            gameTime[1] = acVar3[1];
            gameTime[0] = acVar3[0];
            gameTime = (char  [4])((uint)CONCAT11(gameTime[0],gameTime[1] + '\x01') << 0x10);
          }
        }
        goto check_game_end;
      }
    }
no_update_to_time:
    if (copyTimeSprite == 0) goto set_time_sprite_x;
  }
not_end_of_second_extra:
  uVar4 = 0;
  uVar5 = 0;
  if (gameTime[1] == '\0') {
    if (gameTime[2] != '\0') {
      dstSprite = SPR_PREMIERE_DIVISION_WINNER;
      goto time_two_digits;
    }
    dstSprite = SPR_LITTLE_PLAYER_GENERIC;
  }
  else {
    dstSprite = SPR_INVITATION_TOURNAMENT;
    uVar5 = 5;
time_two_digits:
    CopySprite((short)gameTime[2] + SPR_CUP_WINNER,uVar5,0,dstSprite);
    uVar4 = uVar5 + 6;
  }
  CopySprite((short)gameTime[3] + SPR_CUP_WINNER,uVar4,0,dstSprite);
  currentTimeSprite.imageIndex = dstSprite;
  if (dstSprite == SPR_INVITATION_TOURNAMENT) {
    BlitSpritePlanar_Long_StridedDest();
  }
  else {
    BlitSpritePlanar_Word_StridedDest();
  }
  copyTimeSprite = 0;
set_time_sprite_x:
  currentTimeSprite.x.s.i = g_cameraX.s.i + 0x14;
  currentTimeSprite.y.s.i = g_cameraY.s.i + 0x2721;
  if (currentPlayerIndicatorPosition == 4) {
    currentTimeSprite.y.s.i = g_cameraY.s.i + 0x2729;
  }
  currentTimeSprite.z.s.i = 10000;
  return;
}


// --- BumpPlayersLastPlayedHalfAtHalfStart @ 0010b79e ---

void __usercall BumpPlayersLastPlayedHalfAtHalfStart(void)

{
  short sVar1;
  TeamGame *player;
  TeamGame *player_00;
  
  player = &topTeamInGame;
  player_00 = &bottomTeamInGame;
  sVar1 = 10;
  do {
    BumpPlayerLastPlayedHalfAtHalfStart((PlayerInfoHeader *)player);
    BumpPlayerLastPlayedHalfAtHalfStart((PlayerInfoHeader *)player_00);
    player = (TeamGame *)(player->players[0].shortName + 7);
    player_00 = (TeamGame *)(player_00->players[0].shortName + 7);
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}


// --- BumpPlayerLastPlayedHalfAtHalfStart @ 0010b7c4 ---

/* in:
        A0 -> in-game team player + header */

void __usercall BumpPlayerLastPlayedHalfAtHalfStart(PlayerInfoHeader *player)

{
  if ((player->cards < 2) && (player->halfPlayed != 2)) {
    player->halfPlayed = 1;
  }
  return;
}


// --- BumpPlayersLastPlayedHalfAtHalfEnd @ 0010b7dc ---

void __usercall BumpPlayersLastPlayedHalfAtHalfEnd(void)

{
  short sVar1;
  TeamGame *player;
  TeamGame *player_00;
  
  player = &topTeamInGame;
  player_00 = &bottomTeamInGame;
  sVar1 = 10;
  do {
    BumpPlayerLastPlayedHalfAtHalfEnd((PlayerInfoHeader *)player);
    BumpPlayerLastPlayedHalfAtHalfEnd((PlayerInfoHeader *)player_00);
    player = (TeamGame *)(player->players[0].shortName + 7);
    player_00 = (TeamGame *)(player_00->players[0].shortName + 7);
    sVar1 = sVar1 + -1;
  } while (sVar1 != -1);
  return;
}


// --- BumpPlayerLastPlayedHalfAtHalfEnd @ 0010b802 ---

/* in:
        A0 -> player + header (in-game) */

void __usercall BumpPlayerLastPlayedHalfAtHalfEnd(PlayerInfoHeader *player)

{
  if ((player->cards < 2) && (player->halfPlayed == 1)) {
    player->halfPlayed = 2;
  }
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


// --- ShowResult @ 0010b91a ---

void __usercall ShowResult(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  word *pwVar4;
  Sprite *pSVar5;
  word *pwVar6;
  Sprite *pSVar7;
  
  if (resultTimer == 0) {
    return;
  }
  if ((short)resultTimer < 0) goto LAB_0010bade;
  if (resultTimer == 30000) {
    resultTimer = 0xfa;
LAB_0010b964:
    if (gameState == ST_RESULT_ON_HALFTIME) {
      resultOnHalftimeSprite.visible = 1;
    }
    if (gameState == ST_RESULT_AFTER_THE_GAME) {
      resultAfterTheGameSprite.visible = 1;
    }
    if ((dontShowScorers != 0) || (secondLeg != 0)) {
      team1TotalGoalsDigit2Sprite.visible = 1;
      if ((uint)(int)(short)team1TotalGoals / 10 != 0) {
        team1TotalGoalsDigit1Sprite.visible = 1;
      }
      team2TotalGoalsDigit2Sprite.visible = 1;
      if ((uint)(int)(short)team2TotalGoals / 10 != 0) {
        team2TotalGoalsDigit1Sprite.visible = 1;
      }
    }
    gridUpperRowLeftSprite.visible = 1;
    gridUpperRowRightSprite.visible = 1;
    gridMiddleRowLeftSprite.visible = 1;
    gridMiddleRowRightSprite.visible = 1;
    gridBottomRowLeftSprite.visible = 1;
    gridBottomRowRightSprite.visible = 1;
    team2NameSprite.visible = 1;
    team1GoalsDigit2Sprite.visible = 1;
    if (team1GoalsDigit1 != 0) {
      team1GoalsDigit1Sprite.visible = 1;
    }
    team2GoalsDigit2Sprite.visible = 1;
    if (team2GoalsDigit1 != 0) {
      team2GoalsDigit1Sprite.visible = 1;
    }
    team1NameSprite.visible = 1;
    dashSprite.visible = 1;
    pSVar5 = &team1Scorer1Sprite;
    sVar1 = 7;
    pwVar4 = team1ScorerSpritesWidths;
    do {
      if ((*pwVar4 == 0) || (dontShowScorers != 0)) break;
      pSVar5->visible = 1;
      pSVar5 = pSVar5 + 1;
      sVar1 = sVar1 + -1;
      pwVar4 = pwVar4 + 1;
    } while (sVar1 != -1);
    pSVar5 = &team2Scorer1Sprite;
    sVar1 = 7;
    pwVar4 = team2ScorerSpritesWidths;
    do {
      if ((*pwVar4 == 0) || (dontShowScorers != 0)) break;
      pSVar5->visible = 1;
      pSVar5 = pSVar5 + 1;
      sVar1 = sVar1 + -1;
      pwVar4 = pwVar4 + 1;
    } while (sVar1 != -1);
    InitDisplaySprites();
  }
  else {
    if (resultTimer == 31000) {
      resultTimer = 0x96;
      goto LAB_0010b964;
    }
    if (resultTimer == 32000) {
      resultTimer = 29000;
      goto LAB_0010b964;
    }
  }
  resultTimer = resultTimer - lastFrameTicks;
  if ((-1 < (short)resultTimer) && (resultTimer != 0)) {
    sVar1 = 0;
    sVar3 = 7;
    pwVar4 = team1ScorerSpritesWidths;
    pwVar6 = team2ScorerSpritesWidths;
    do {
      if ((word)(*pwVar6 + *pwVar4) == 0) break;
      sVar1 = sVar1 + -7;
      sVar3 = sVar3 + -1;
      pwVar4 = pwVar4 + 1;
      pwVar6 = pwVar6 + 1;
    } while (sVar3 != -1);
    if (-0xe < sVar1) {
      sVar1 = -0xe;
    }
    team1NameSprite.x.s.i = (g_cameraX.s.i + 0x88) - team1NameLength;
    sVar3 = sVar1 + g_cameraY.s.i;
    team1NameSprite.y.s.i = sVar3 + 0x2806;
    team1NameSprite.z.s.i = 10000;
    gridUpperRowLeftSprite.y.s.i = sVar3 + 0x240f;
    gridUpperRowLeftSprite.x.s.i = g_cameraX.s.i;
    gridUpperRowLeftSprite.z.s.i = 9000;
    gridUpperRowRightSprite.x.s.i = g_cameraX.s.i + 0xa8;
    gridUpperRowRightSprite.z.s.i = 9000;
    gridMiddleRowLeftSprite.y.s.i = sVar3 + 0x242f;
    gridMiddleRowLeftSprite.x.s.i = g_cameraX.s.i;
    gridMiddleRowLeftSprite.z.s.i = 9000;
    gridMiddleRowRightSprite.x.s.i = g_cameraX.s.i + 0xa8;
    gridMiddleRowRightSprite.z.s.i = 9000;
    gridBottomRowLeftSprite.y.s.i = sVar3 + 0x244f;
    gridBottomRowLeftSprite.x.s.i = g_cameraX.s.i;
    gridBottomRowLeftSprite.z.s.i = 9000;
    gridBottomRowRightSprite.x.s.i = g_cameraX.s.i + 0xa8;
    gridBottomRowRightSprite.z.s.i = 9000;
    team2NameSprite.x.s.i = g_cameraX.s.i + 200;
    team2NameSprite.z.s.i = 10000;
    team1GoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0x97;
    team1GoalsDigit2Sprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2801;
    team1GoalsDigit2Sprite.z.s.i = 10000;
    team1GoalsDigit2Sprite.imageIndex = team1GoalsDigit2 + SPR_BIG_0;
    if (team1GoalsDigit1Sprite.visible != 0) {
      team1GoalsDigit1Sprite.x.s.i = g_cameraX.s.i + 0x8b;
      team1GoalsDigit1Sprite.z.s.i = 10000;
      team1GoalsDigit1Sprite.imageIndex = team1GoalsDigit1 + SPR_BIG_0;
      team1GoalsDigit1Sprite.y.s.i = team1GoalsDigit2Sprite.y.s.i;
    }
    if (team1TotalGoalsDigit2Sprite.visible != 0) {
      sVar3 = (short)((uint)(int)(short)team1TotalGoals / 10);
      team1TotalGoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0x9e;
      sVar2 = (short)((uint)(int)(short)team1TotalGoals % 10);
      if (sVar2 == 1) {
        team1TotalGoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0xa2;
      }
      team1TotalGoalsDigit2Sprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2819;
      team1TotalGoalsDigit2Sprite.z.s.i = 0x2712;
      team1TotalGoalsDigit2Sprite.imageIndex = sVar2 + SPR_SMALL_ZERO;
      if (team1TotalGoalsDigit1Sprite.visible != 0) {
        team1TotalGoalsDigit1Sprite.x.s.i = team1TotalGoalsDigit2Sprite.x.s.i - 6;
        if (sVar3 == 1) {
          team1TotalGoalsDigit1Sprite.x.s.i = team1TotalGoalsDigit2Sprite.x.s.i - 2;
        }
        team1TotalGoalsDigit1Sprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2818;
        team1TotalGoalsDigit1Sprite.z.s.i = 0x2711;
        team1TotalGoalsDigit1Sprite.imageIndex = sVar3 + SPR_SMALL_ZERO;
      }
    }
    team2GoalsDigit2Sprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2801;
    team2GoalsDigit2Sprite.z.s.i = 10000;
    team2GoalsDigit2Sprite.imageIndex = team2GoalsDigit2 + SPR_SCROLL_ARROW_UP;
    team2GoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0xad;
    if (team2GoalsDigit1Sprite.visible != 0) {
      team2GoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0xb9;
      team2GoalsDigit1Sprite.z.s.i = 10000;
      team2GoalsDigit1Sprite.imageIndex = team2GoalsDigit1 + SPR_SCROLL_ARROW_UP;
      team2GoalsDigit1Sprite.x.s.i = g_cameraX.s.i + 0xad;
      team2GoalsDigit1Sprite.y.s.i = team2GoalsDigit2Sprite.y.s.i;
    }
    if (team2TotalGoalsDigit2Sprite.visible != 0) {
      sVar3 = (short)((uint)(int)(short)team2TotalGoals / 10);
      team2TotalGoalsDigit2Sprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2819;
      team2TotalGoalsDigit2Sprite.z.s.i = 0x2712;
      team2TotalGoalsDigit2Sprite.imageIndex =
           (short)((uint)(int)(short)team2TotalGoals % 10) + SPR_SMALL_ZERO;
      team2TotalGoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0xab;
      if (team2TotalGoalsDigit1Sprite.visible != 0) {
        team2TotalGoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0xb1;
        if (sVar3 == 1) {
          team2TotalGoalsDigit2Sprite.x.s.i = g_cameraX.s.i + 0xad;
        }
        team2TotalGoalsDigit1Sprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2818;
        team2TotalGoalsDigit1Sprite.z.s.i = 0x2711;
        team2TotalGoalsDigit1Sprite.imageIndex = sVar3 + SPR_SMALL_ZERO;
        team2TotalGoalsDigit1Sprite.x.s.i = g_cameraX.s.i + 0xab;
      }
    }
    dashSprite.x.s.i = g_cameraX.s.i + 0xa5;
    dashSprite.y.s.i = sVar1 + g_cameraY.s.i + 0x2809;
    dashSprite.z.s.i = 10000;
    pSVar5 = &team1Scorer1Sprite;
    sVar3 = sVar1 + 0x107;
    sVar2 = 7;
    pwVar4 = team1ScorerSpritesWidths;
    gridUpperRowRightSprite.y.s.i = gridUpperRowLeftSprite.y.s.i;
    gridMiddleRowRightSprite.y.s.i = gridMiddleRowLeftSprite.y.s.i;
    gridBottomRowRightSprite.y.s.i = gridBottomRowLeftSprite.y.s.i;
    team2NameSprite.y.s.i = team1NameSprite.y.s.i;
    do {
      if (*pwVar4 == 0) break;
      (pSVar5->x).s.i = g_cameraX.s.i;
      (pSVar5->x).s.i = (pSVar5->x).s.i + 0x88;
      (pSVar5->x).s.i = (pSVar5->x).s.i - *pwVar4;
      (pSVar5->y).s.i = g_cameraY.s.i;
      (pSVar5->y).s.i = sVar3 + (pSVar5->y).s.i;
      (pSVar5->z).s.i = 0;
      (pSVar5->y).s.i = (pSVar5->y).s.i + 10000;
      (pSVar5->z).s.i = 10000;
      sVar3 = sVar3 + 7;
      pSVar5 = pSVar5 + 1;
      sVar2 = sVar2 + -1;
      pwVar4 = pwVar4 + 1;
    } while (sVar2 != -1);
    pSVar5 = &team2Scorer1Sprite;
    sVar1 = sVar1 + 0x107;
    sVar3 = 7;
    pwVar4 = team2ScorerSpritesWidths;
    do {
      if (*pwVar4 == 0) break;
      (pSVar5->x).s.i = g_cameraX.s.i;
      (pSVar5->x).s.i = (pSVar5->x).s.i + 200;
      (pSVar5->y).s.i = g_cameraY.s.i;
      (pSVar5->y).s.i = sVar1 + (pSVar5->y).s.i;
      (pSVar5->z).s.i = 0;
      (pSVar5->y).s.i = (pSVar5->y).s.i + 10000;
      (pSVar5->z).s.i = 10000;
      sVar1 = sVar1 + 7;
      pSVar5 = pSVar5 + 1;
      sVar3 = sVar3 + -1;
      pwVar4 = pwVar4 + 1;
    } while (sVar3 != -1);
    resultOnHalftimeSprite.x.s.i = g_cameraX.s.i + 0xa8;
    resultOnHalftimeSprite.y.s.i = gridUpperRowLeftSprite.y.s.i + 0x3de;
    resultOnHalftimeSprite.z.s.i = 10000;
    resultAfterTheGameSprite.x.s.i = g_cameraX.s.i + 0xa8;
    resultAfterTheGameSprite.y.s.i = gridUpperRowLeftSprite.y.s.i + 0x3de;
    resultAfterTheGameSprite.z.s.i = 10000;
    return;
  }
  if ((gameState == ST_RESULT_ON_HALFTIME) || (gameState == ST_RESULT_AFTER_THE_GAME)) {
    statsTimer = 32000;
  }
LAB_0010bade:
  resultTimer = 0;
  if (team1NameSprite.visible != 0) {
    resultOnHalftimeSprite.visible = 0;
    resultAfterTheGameSprite.visible = 0;
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
    pSVar5 = &team1Scorer1Sprite;
    pSVar7 = &team2Scorer1Sprite;
    sVar1 = 7;
    do {
      pSVar5->visible = 0;
      pSVar7->visible = 0;
      pSVar5 = pSVar5 + 1;
      pSVar7 = pSVar7 + 1;
      sVar1 = sVar1 + -1;
    } while (sVar1 != -1);
    InitDisplaySprites();
  }
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


// --- SetHilFileHeader @ 0010c146 ---

void __usercall SetHilFileHeader(void)

{
  short sVar1;
  TeamGame *pTVar2;
  byte *pbVar3;
  TeamGame *pTVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  hilFileBuffer._0_4_ = kHilFileSig;
  hilFileBuffer[4] = 0;
  hilFileBuffer[5] = 2;
  hilFileBuffer[6] = 0xee;
  hilFileBuffer[7] = 0xfe;
  sVar1 = 0x3f9;
  pTVar2 = &topTeamInGame;
  pTVar4 = &bottomTeamInGame;
  pbVar3 = hilFileBuffer + 8;
  do {
    pbVar3[0x3fa] = *(byte *)&pTVar4->prShirtType;
    *pbVar3 = *(byte *)&pTVar2->prShirtType;
    sVar1 = sVar1 + -1;
    pTVar2 = (TeamGame *)((int)&pTVar2->prShirtType + 1);
    pTVar4 = (TeamGame *)((int)&pTVar4->prShirtType + 1);
    pbVar3 = pbVar3 + 1;
  } while (sVar1 != -1);
  sVar1 = 0x27;
  pbVar3 = gameName;
  pbVar5 = &gameRound;
  pbVar6 = hilGameName;
  pbVar7 = hilGameRound;
  do {
    *pbVar6 = *pbVar3;
    *pbVar7 = *pbVar5;
    sVar1 = sVar1 + -1;
    pbVar3 = pbVar3 + 1;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
  } while (sVar1 != -1);
  hilNumGoals = numScenesInHilFile;
  hilTeam1Goals = statsTeam1Goals;
  hilTeam2Goals = statsTeam2Goals;
  hilPitchNumber = pitchNumberAndType;
  hilMaxSubstitutes = gameMaxSubstitutes;
  return;
}


// --- SaveHighlightsPointers @ 0010c1d6 ---

/* Saves pointers to highlight buffers. */

void __usercall SaveHighlightsPointers(void)

{
  if (numScenesInHilFile != 0) {
    normalReplayRunning = 1;
    savedGoalBasePtr = goalBasePtr;
    savedNextGoalPtr = nextGoalPtr;
    savedCurrentHilPtr = currentHilPtr;
    savedCurrentGoalPtr = currentGoalPtr;
    goIntoHighlightsLoop = 1;
    hilSceneNumber = 0xffff;
  }
  return;
}


// --- RestoreHighlightPointers @ 0010c222 ---

void __usercall RestoreHighlightPointers(void)

{
  normalReplayRunning = 0;
  goalBasePtr = savedGoalBasePtr;
  nextGoalPtr = savedNextGoalPtr;
  currentHilPtr = savedCurrentHilPtr;
  currentGoalPtr = savedCurrentGoalPtr;
  goIntoHighlightsLoop = 0;
  return;
}


// --- FadeAndSaveHighlightScene @ 0010c250 ---

void __usercall FadeAndSaveHighlightScene(void)

{
  FadeOutToBlack();
  SaveHighlightScene();
  FadeIn();
  return;
}


// --- SaveHighlightScene @ 0010c264 ---

/* Maximum number of highlights is 10. If there is no room,
   overwrite oldest highlight. */

void __usercall SaveHighlightScene(void)

{
  short sVar2;
  int iVar1;
  short sVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint *puVar6;
  uint *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint *puVar10;
  
  if (numScenesInHilFile == 10) {
    pbVar4 = inGameHilBuffer;
    pbVar8 = hilStartOfGoalsBuffer;
    sVar3 = 8;
    do {
      sVar2 = 0x128d;
      pbVar5 = pbVar4;
      pbVar9 = pbVar8;
      do {
        pbVar4 = pbVar5 + 4;
        pbVar8 = pbVar9 + 4;
        *(undefined4 *)pbVar9 = *(undefined4 *)pbVar5;
        sVar2 = sVar2 + -1;
        pbVar5 = pbVar4;
        pbVar9 = pbVar8;
      } while (sVar2 != -1);
      sVar3 = sVar3 + -1;
    } while (sVar3 != -1);
    numScenesInHilFile = numScenesInHilFile - 1;
  }
  iVar1 = 0;
  puVar7 = currentHilPtr;
  do {
    if (iVar1 == 19000) {
      return;
    }
    iVar1 = iVar1 + 4;
    puVar7 = puVar7 + 1;
    if (puVar7 == nextGoalPtr) {
      puVar7 = goalBasePtr;
    }
  } while ((*puVar7 & 0x80000000) == 0);
  sVar3 = 0x128d;
  puVar10 = (uint *)(hilStartOfGoalsBuffer + (uint)numScenesInHilFile * 19000);
  do {
    puVar6 = puVar7 + 1;
    *puVar10 = *puVar7;
    puVar7 = puVar6;
    if (puVar6 == nextGoalPtr) {
      puVar7 = goalBasePtr;
    }
    sVar3 = sVar3 + -1;
    puVar10 = puVar10 + 1;
  } while (sVar3 != -1);
  numScenesInHilFile = numScenesInHilFile + 1;
  return;
}


// --- InitCurrentGoalHighlight @ 0010c2f8 ---

void __usercall InitCurrentGoalHighlight(void)

{
  short sVar1;
  uint *puVar2;
  
  sVar1 = 0x128d;
  puVar2 = goalBasePtr;
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


// --- ThrowInDeadProc @ 0010c322 ---

void __usercall ThrowInDeadProc(void)

{
  throwInDeadVar = 1;
  return;
}


// --- SaveCoordinatesForHighlights @ 0010c34e ---

/* in:
        D0 - >= 0 - sprite index
             = -2 - mark end of the segment with -1
                < 0 - (usually -1) beginning of frame
        D4 - sprite x coordinate (or camera if D0 < 0)
        D5 - sprite y coordinate (or camera if D0 < 0)
   
   Saves current sprite coordinate for highlights. */

void __usercall SaveCoordinatesForHighlights(short spriteIndexOrMarker,ushort x,ushort y)

{
  int iVar1;
  ushort *puVar2;
  uint *puVar3;
  word *pwVar4;
  
  puVar3 = currentHilPtr;
  if (-1 < spriteIndexOrMarker) {
    iVar1 = CONCAT22((short)(((uint)(ushort)spriteIndexOrMarker << 10) >> 0x10),
                     x & 0x3ff | (ushort)((uint)(ushort)spriteIndexOrMarker << 10)) << 10;
    *currentHilPtr = CONCAT22((short)((uint)iVar1 >> 0x10),y & 0x3ff | (ushort)iVar1) & 0x7fffffff;
    puVar3 = currentHilPtr + 1;
    if (currentHilPtr + 1 == nextGoalPtr) {
      puVar3 = goalBasePtr;
    }
    currentHilPtr = puVar3;
    return;
  }
  if (spriteIndexOrMarker == -2) {
    *currentHilPtr = 0xffffffff;
    return;
  }
  puVar2 = (ushort *)((int)currentHilPtr + 2);
  *(ushort *)currentHilPtr = x | 0x8000;
  *puVar2 = y;
  puVar3 = (uint *)IncrementHilBufferPointer((uchar *)(puVar3 + 1));
  currentHilPtr = puVar3;
  *(word *)puVar3 = team1TotalGoals;
  *(word *)((int)puVar3 + 2) = team2TotalGoals;
  pwVar4 = (word *)IncrementHilBufferPointer((uchar *)(puVar3 + 1));
  *pwVar4 = animPatternsState;
  pwVar4[1] = animPatternsState;
  currentHilPtr = (uint *)IncrementHilBufferPointer((uchar *)(pwVar4 + 2));
  *currentHilPtr = 0xffffffff;
  return;
}


// --- IncrementHilBufferPointer @ 0010c3d2 ---

/* out:
        A1 -> current position in hil buffer */

uchar * __usercall IncrementHilBufferPointer(uchar *cur)

{
  if ((uint *)cur == nextGoalPtr) {
    cur = (uchar *)goalBasePtr;
  }
  return cur;
}


// --- DrawReplayFrame @ 0010c3e2 ---

/* WARNING: Removing unreachable block (ram,0x0010c5e0) */

void __usercall DrawReplayFrame(void)

{
  ushort x;
  uint uVar1;
  ushort x_00;
  uint uVar2;
  word *pwVar3;
  uchar *puVar4;
  uint *puVar5;
  uint *p;
  
  puVar5 = currentGoalPtr;
  if (replayState == 1) {
    replayState = 2;
    savedCameraX = g_cameraX.s.i;
    savedCameraY = g_cameraY.s.i;
    ResetAnimatedPatternsForBothTeams();
    ReplayUpdateCameraAndSwapBuffers();
  }
  p = puVar5 + 1;
  uVar1 = *puVar5;
  if ((uVar1 & 0x80000000) == 0) goto LAB_0010c494;
  pwVar3 = (word *)ValidateHilPointerAdd((uchar *)p);
  MoveView((short)((uVar1 & 0x7fffffff) >> 0x10),(short)(uVar1 & 0x7fffffff));
  hilLeftTeamGoals = *pwVar3;
  hilRightTeamGoals = pwVar3[1];
  puVar4 = ValidateHilPointerAdd((uchar *)(pwVar3 + 2));
  animPatternsState = *(word *)(puVar4 + 2);
  puVar5 = (uint *)ValidateHilPointerAdd(puVar4 + 4);
  DrawAnimatedPatterns();
  uVar1 = *puVar5;
  while( true ) {
    if (uVar1 == 0xffffffff) {
      replayState = 0;
      return;
    }
    p = puVar5 + 1;
    if ((uVar1 & 0x80000000) != 0) break;
LAB_0010c494:
    puVar5 = (uint *)ValidateHilPointerAdd((uchar *)p);
    DarkenRectangle((ushort)(uVar1 >> 0x14),(ushort)((int)(uVar1 << 0xc) >> 0x16),
                    (ushort)((int)(uVar1 << 0x16) >> 0x16));
    uVar1 = *puVar5;
  }
  currentGoalPtr = (uint *)ValidateHilPointerSub((uchar *)puVar5);
  if (normalReplayRunning == 0) {
    DarkenRectangle((currentGameTick >> 1 & 0x1f) + SPR_REPLAY_FRAME_00,0xb,0xe);
  }
  if (normalReplayRunning != 0) {
    x_00 = 0x11;
    uVar2 = (uint)(short)hilLeftTeamGoals;
    uVar1 = uVar2 / 10;
    if (uVar1 != 0) {
      DarkenRectangle((short)uVar1 + SPR_BIG_0,0x11,0x11);
      x_00 = 0x1d;
    }
    DarkenRectangle((short)(uVar2 % 10) + SPR_BIG_0,x_00,0x11);
    DarkenRectangle(0xc3,x_00 + 0xf,0x19);
    x = x_00 + 0x17;
    uVar2 = (uint)(short)hilRightTeamGoals;
    uVar1 = uVar2 / 10;
    if (uVar1 != 0) {
      DarkenRectangle((short)uVar1 + SPR_SCROLL_ARROW_UP,x,0x11);
      x = x_00 + 0x23;
    }
    DarkenRectangle((short)(uVar2 % 10) + SPR_SCROLL_ARROW_UP,x,0x11);
  }
  if ((replayState == 3) && (paused == 0)) {
    do {
    } while( true );
  }
  return;
}


// --- ValidateHilPointerAdd @ 0010c5ee ---

/* in:
        A0 - current pointer in hil buffer, possibly out of bounds
   out:
        A0 - pointer guaranteed to point in hil buffer
   
   Checks if it was safe to increment pointer. If not reset pointer to start of scene buffer. */

uchar * __usercall ValidateHilPointerAdd(uchar *p)

{
  if ((uint *)p == nextGoalPtr) {
    p = (uchar *)goalBasePtr;
  }
  return p;
}


// --- ValidateHilPointerSub @ 0010c5fe ---

/* in:
        A0 - current pointer in hil buffer
   
   Check is it safe to decrement pointer. */

uchar * __usercall ValidateHilPointerSub(uchar *p)

{
  if (p < goalBasePtr) {
    p = (uchar *)nextGoalPtr;
  }
  return p;
}


// --- ReplayUpdateCameraAndSwapBuffers @ 0010c60e ---

void __usercall ReplayUpdateCameraAndSwapBuffers(void)

{
  short unaff_D1w;
  short unaff_D2w;
  
  SetCameraCoordinates(unaff_D1w,unaff_D2w);
  InitCameraMoveView();
  SwapBuffersAndCameraViewState();
  InitCameraMoveView();
  return;
}


// --- HandleInstantReplayStateSwitch @ 0010c648 ---

void __usercall HandleInstantReplayStateSwitch(void)

{
  int iVar1;
  uint *puVar2;
  
  if (replayState == 0) {
    iVar1 = 0;
    puVar2 = currentHilPtr;
    do {
      if (iVar1 == 19000) {
        return;
      }
      iVar1 = iVar1 + 4;
      puVar2 = puVar2 + 1;
      if (puVar2 == nextGoalPtr) {
        puVar2 = goalBasePtr;
      }
    } while ((*puVar2 & 0x80000000) == 0);
    currentGoalPtr = puVar2;
    replayState = 1;
    return;
  }
  if (replayState == 3) {
    replayState = 2;
    return;
  }
  if (replayState == 2) {
    replayState = 3;
    return;
  }
  return;
}


// --- RestoreCameraPosition @ 0010c6b2 ---

void __usercall RestoreCameraPosition(void)

{
  replayState = 0;
  ResetAnimatedPatternsForBothTeams();
  ReplayUpdateCameraAndSwapBuffers();
  return;
}


// --- GoalScored @ 0010c6d8 ---

/* in:
        D0  - number of team that scored (1 or 2)
        A0 -> in-game sprite of the player which scored
   
   Updates goal variables. Puts name of scorer and minute into scorers list.
   If the goal list is too long, it will be broken into up to 8 lines.
   Each line is one sprite. Skips result sprites updating if it's penalty shootout. */

void __usercall GoalScored(short scoringTeam,Sprite *scorerSprite)

{
  undefined4 *puVar1;
  word wVar2;
  short sVar3;
  short sVar4;
  ushort xOff;
  short sVar5;
  ushort dstSpriteIndex;
  ushort uVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  char *text;
  code *pcVar9;
  TeamGame *pTVar10;
  Sprite *pSVar11;
  TeamGame *pTVar12;
  code *pcVar13;
  word *pwVar14;
  Sprite *pSVar15;
  Sprite *pSVar16;
  word *pwVar17;
  bool bVar18;
  
  goalScored = 1;
  runSlower = 1;
  pTVar12 = &topTeamInGame;
  if (scorerSprite->teamNumber != 1) {
    pTVar12 = &bottomTeamInGame;
  }
  lastTeamScored = &topTeamData;
  if (pTVar12 != topTeamData.inGameTeamPtr) {
    lastTeamScored = &bottomTeamData;
  }
  if (scoringTeam == 2) {
    if (team2TotalGoals == 99) {
      currentScorer = scorerSprite;
      goalScored = 1;
      runSlower = 1;
      lastPlayerScored = scorerSprite;
      lastTeamScoredNumber = scoringTeam;
      return;
    }
    if (playingPenalties == 0) {
      team2TotalGoals = team2TotalGoals + 1;
    }
    else {
      team2PenaltyGoals = team2PenaltyGoals + 1;
    }
    statsTeam2Goals = statsTeam2Goals + 1;
    team2GoalsDigit2 = team2GoalsDigit2 + 1;
    if (team2GoalsDigit2 == 10) {
      team2GoalsDigit1 = team2GoalsDigit1 + 1;
      team2GoalsDigit2 = 0;
    }
  }
  else {
    if (team1TotalGoals == 99) {
      currentScorer = scorerSprite;
      goalScored = 1;
      runSlower = 1;
      lastPlayerScored = scorerSprite;
      lastTeamScoredNumber = scoringTeam;
      return;
    }
    if (playingPenalties == 0) {
      team1TotalGoals = team1TotalGoals + 1;
    }
    else {
      team1PenaltyGoals = team1PenaltyGoals + 1;
    }
    statsTeam1Goals = statsTeam1Goals + 1;
    team1GoalsDigit2 = team1GoalsDigit2 + 1;
    if (team1GoalsDigit2 == 10) {
      team1GoalsDigit1 = team1GoalsDigit1 + 1;
      team1GoalsDigit2 = 0;
    }
  }
  if (playingPenalties != 0) {
    currentScorer = scorerSprite;
    goalScored = 1;
    runSlower = 1;
    lastPlayerScored = scorerSprite;
    lastTeamScoredNumber = scoringTeam;
    return;
  }
  currentScorer = scorerSprite;
  lastPlayerScored = scorerSprite;
  lastTeamScoredNumber = scoringTeam;
  if (scorerSprite == (Sprite *)0x0) {
    panicReasonCode = 9;
    PanicHaltLoop();
  }
  sVar4 = 0;
  if (scoringTeam != scorerSprite->teamNumber) {
    sVar4 = GT_OWN_GOAL;
  }
  if (penalty != 0) {
    sVar4 = GT_PENALTY;
  }
  pTVar12 = topTeamPtr;
  pTVar10 = bottomTeamPtr;
  if (scoringTeam == 1) {
    pcVar13 = ShowLoaderIntroSequence;
    pSVar15 = &team1Scorer1Sprite;
    pwVar17 = team1ScorerSpritesWidths;
    if (sVar4 == GT_OWN_GOAL) goto finalize_team_ptr_selection;
  }
  else {
    pcVar13 = (code *)0x10fe26;
    pSVar15 = &team2Scorer1Sprite;
    pwVar17 = team2ScorerSpritesWidths;
    if (sVar4 != GT_OWN_GOAL) goto finalize_team_ptr_selection;
  }
  pTVar12 = bottomTeamPtr;
  pTVar10 = topTeamPtr;
finalize_team_ptr_selection:
  wVar2 = scorerSprite->playerOrdinal;
  if (sVar4 == GT_OWN_GOAL) {
    pTVar12->numOwnGoals = pTVar12->numOwnGoals + 1;
    lastPlayerScored = (Sprite *)0x0;
  }
  sVar3 = (wVar2 - 1) * 0x3d;
  if (sVar4 != GT_OWN_GOAL) {
    pbVar7 = pTVar10->players[0].shortName + sVar3 + -10;
    *pbVar7 = *pbVar7 + 1;
  }
  sVar3 = (short)(char)pTVar10->players[0].shortName[sVar3 + -9];
  if (sVar4 == GT_OWN_GOAL) {
    sVar3 = sVar3 + 100;
  }
  uVar6 = 0;
  sVar5 = 7;
  while (*(short *)pcVar13 != 0) {
    if (sVar3 == *(short *)pcVar13) goto select_scorer_sprite_block;
    uVar6 = *(short *)(pcVar13 + 2) + uVar6;
    if (7 < uVar6) {
      return;
    }
    pcVar13 = pcVar13 + 0x42;
    sVar5 = sVar5 + -1;
    if (sVar5 == -1) {
      return;
    }
  }
  *(short *)(pcVar13 + 4) = 0;
  *(short *)(pcVar13 + 2) = 1;
select_scorer_sprite_block:
  pSVar16 = (Sprite *)(pSVar15->field_3E + (short)(uVar6 * 0x6e) + -0x3e);
  sVar5 = *(short *)(pcVar13 + 2) + -1;
  *(short *)pcVar13 = sVar3;
  sVar3 = *(short *)(pcVar13 + 4);
  if (sVar3 == 10) {
    return;
  }
  *(short *)(pcVar13 + 4) = *(short *)(pcVar13 + 4) + 1;
  sVar3 = sVar3 * 6;
  *(short *)(pcVar13 + sVar3 + 6) = sVar4;
  *(char (*) [4])(pcVar13 + sVar3 + 8) = gameTime;
  pcVar13[sVar3 + 9] = (code)((char)pcVar13[sVar3 + 9] + '0');
  pcVar13[sVar3 + 10] = (code)((char)pcVar13[sVar3 + 10] + '0');
  pcVar13[sVar3 + 0xb] = (code)((char)pcVar13[sVar3 + 0xb] + '0');
  dstSpriteIndex = pSVar16->imageIndex;
  HWSprite_LoadFromSpriteGraphics(dstSpriteIndex);
  pbVar7 = pTVar10->players[0].shortName +
           *(short *)((int)ingameTeamPlayerOffsets +
                     (int)(short)((scorerSprite->playerOrdinal - 1) * 2));
  if ((((*pbVar7 != 0) && (pbVar7[1] != 0)) && (pbVar7[1] == 0x2e)) && (pbVar7[2] == 0x20)) {
    pbVar7 = pbVar7 + 3;
  }
  Text2Sprite(0,0,dstSpriteIndex,(char *)pbVar7,&smallCharsTable);
  xOff = 5;
  sVar4 = *(short *)(pcVar13 + 4) + -1;
  pcVar9 = pcVar13;
  do {
    while( true ) {
      ppuVar8 = alreadyScoredTable;
      if (sVar4 == 0) {
        ppuVar8 = firstGoalScoredTable;
      }
      puVar1 = *(undefined4 **)((int)ppuVar8 + (int)(short)(*(short *)(pcVar9 + 6) << 2));
      *puVar1 = *(undefined4 *)(pcVar9 + 8);
      text = (char *)((int)puVar1 + 1);
      if ((*text == '0') && (text = (char *)((int)puVar1 + 2), *text == '0')) {
        text = (char *)((int)puVar1 + 3);
      }
      bVar18 = false;
      Text2Sprite(xOff,0,dstSpriteIndex,text,&smallCharsTable);
      if (bVar18) break;
      *(ushort *)((int)pwVar17 + (int)(short)(uVar6 << 1)) = xOff;
      uVar6 = uVar6 + 1;
      if (uVar6 == 8) {
        return;
      }
      sVar5 = sVar5 + -1;
      if (sVar5 < 0) {
        *(short *)(pcVar13 + 2) = *(short *)(pcVar13 + 2) + 1;
        pwVar14 = pwVar17 + 6;
        dstSpriteIndex = pSVar15[7].imageIndex;
        for (pSVar11 = pSVar15 + 6; pSVar16 < pSVar11; pSVar11 = pSVar11 + -1) {
          pSVar11[1].imageIndex = pSVar11->imageIndex;
          pwVar14[1] = *pwVar14;
          pwVar14 = pwVar14 + -1;
        }
        pSVar16[1].imageIndex = dstSpriteIndex;
      }
      else {
        dstSpriteIndex = pSVar16[1].imageIndex;
      }
      pSVar16 = pSVar16 + 1;
      HWSprite_LoadFromSpriteGraphics(dstSpriteIndex);
      xOff = 0;
    }
    pcVar9 = pcVar9 + 6;
    sVar4 = sVar4 + -1;
  } while (sVar4 != -1);
  *(ushort *)((int)pwVar17 + (int)(short)(uVar6 << 1)) = xOff;
  return;
}


// --- BenchCheckControls @ 0010ca72 ---

void __usercall BenchCheckControls(void)

{
  Sprite *pSVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  short sVar5;
  undefined1 uVar6;
  word wVar7;
  word wVar8;
  short sVar9;
  short sVar10;
  word wVar11;
  word *pwVar12;
  dword dVar13;
  word *pwVar14;
  TeamGeneralInfo *pTVar15;
  bool bVar16;
  
  if (g_inSubstitutesMenu == 0) {
    if ((benchOff != 0) && (cameraCoordinatesValid != 0)) {
      benchOff = 0;
    }
    if (g_waitForPlayerToGoInTimer != 0) {
      g_waitForPlayerToGoInTimer = g_waitForPlayerToGoInTimer - 1;
      return;
    }
    if (g_cameraLeavingSubsTimer != 0) {
      g_cameraLeavingSubsTimer = g_cameraLeavingSubsTimer - 1;
      return;
    }
    if (g_substituteInProgress != 0) {
      return;
    }
    if (refState != 0) {
      return;
    }
    if (injuriesForever[0] != 0) {
      return;
    }
    if (statsTimer != 0) {
      return;
    }
    if ((((gameStatePl == ST_GAME_IN_PROGRESS) || (whichCard != 0)) || (playingPenalties != 0)) ||
       ((ST_STARTING_GAME - 1 < gameState && (gameState < ST_GAME_ENDED + 1)))) {
      subsPrevPl1Direction = 0xffff;
      subsPl1TapCount = 0;
      pl1BenchTimeoutCounter = 0;
      subsPrevPl2Direction = 0xffff;
      subsPl2TapCount = 0;
      pl2BenchTimeoutCounter = 0;
      bench1Called = 0;
      bench2Called = 0;
      return;
    }
    pTVar15 = &topTeamData;
    if ((bench1Called == 0) && (pTVar15 = &bottomTeamData, bench2Called == 0)) {
      if (((byte)frameCount & 1) == 0) {
        pTVar15 = &bottomTeamData;
      }
      else {
        pTVar15 = &topTeamData;
      }
      if (pTVar15->playerNumber == 0) {
        if (pTVar15->playerCoachNumber == 0) {
          return;
        }
        if (pTVar15->playerCoachNumber == 2) {
          Player2StatusProc();
          subsDirection = pl2Direction;
          subsFire = pl2Fire;
        }
        else {
          Player1StatusProc();
          subsDirection = pl1Direction;
          subsFire = pl1Fire;
        }
      }
      else {
        subsDirection = pTVar15->direction;
        subsFire = pTVar15->firePressed;
      }
      if (pTVar15 != &topTeamData) {
        if ((short)subsDirection < 0) {
          if ((word)(pl2BenchTimeoutCounter + 1) == 0xf) {
            pl2BenchTimeoutCounter = 0;
            subsPrevPl2Direction = 0xffff;
            subsPl2TapCount = 0;
            pl2BenchBlockWhileHoldingDirection = 0;
            return;
          }
          pl2BenchTimeoutCounter = pl2BenchTimeoutCounter + 1;
          pl2BenchBlockWhileHoldingDirection = 0;
          return;
        }
        if (pl2BenchBlockWhileHoldingDirection != 0) {
          return;
        }
        if (-1 < (short)subsPrevPl2Direction) {
          if (subsDirection != subsPrevPl2Direction) {
            pl2BenchTimeoutCounter = 0;
            subsPrevPl2Direction = 0xffff;
            subsPl2TapCount = 0;
            return;
          }
          subsPl2TapCount = subsPl2TapCount + 1;
          pl2BenchTimeoutCounter = 0;
          if (subsPl2TapCount == 2) goto LAB_0010ce48;
        }
        subsPrevPl2Direction = subsDirection;
        pl2BenchBlockWhileHoldingDirection = 1;
        return;
      }
      if ((short)subsDirection < 0) {
        if ((word)(pl1BenchTimeoutCounter + 1) == 0xf) {
          pl1BenchTimeoutCounter = 0;
          subsPrevPl1Direction = 0xffff;
          subsPl1TapCount = 0;
          pl1BenchBlockWhileHoldingDirection = 0;
          return;
        }
        pl1BenchTimeoutCounter = pl1BenchTimeoutCounter + 1;
        pl1BenchBlockWhileHoldingDirection = 0;
        return;
      }
      if (pl1BenchBlockWhileHoldingDirection != 0) {
        return;
      }
      if (-1 < (short)subsPrevPl1Direction) {
        if (subsDirection != subsPrevPl1Direction) {
          pl1BenchTimeoutCounter = 0;
          subsPrevPl1Direction = 0xffff;
          subsPl1TapCount = 0;
          return;
        }
        subsPl1TapCount = subsPl1TapCount + 1;
        pl1BenchTimeoutCounter = 0;
        if (subsPl1TapCount == 2) goto LAB_0010ce48;
      }
      subsPrevPl1Direction = subsDirection;
      pl1BenchBlockWhileHoldingDirection = 1;
      return;
    }
LAB_0010ce48:
    bench1Called = 0;
    bench2Called = 0;
    benchTeamGame = (dword)topTeamPtr;
    if (pTVar15->teamNumber == 2) {
      benchTeamGame = (dword)bottomTeamPtr;
    }
    plToBeSubstitutedPos = 0xffff;
    g_subsState = 0;
    g_benchPlayerIndex = 0;
    subsBlockFire = 1;
    subsBlockDirections = 1;
    g_inSubstitutesMenu = 0x1e;
    g_goToSubsTimer = 0xf;
    timeVar = -timeVar;
    resultTimer = -resultTimer;
    statsTimer = -statsTimer;
    benchY = 0x185;
    wVar11 = 0x1e5;
    if (g_trainingGame == 0) {
      if ((topTeamInGame.teamName[0] & 2) != 0) {
        benchY = 0x1e5;
        wVar11 = 0x185;
      }
      opponentBenchY = wVar11;
      if ((TeamGame *)benchTeamGame != &topTeamInGame) {
        opponentBenchY = benchY;
        benchY = wVar11;
      }
    }
    else {
      subsTrainingTopTeam = 0;
      opponentBenchY = 0x1c8;
      benchY = 0x1c8;
      if ((TeamGame *)benchTeamGame != &topTeamInGame) {
        subsTrainingTopTeam = 1;
      }
    }
    plComingYTmp = 0x1c1;
    plComingY = 0x1c1;
    benchWriteOnly01 = benchY + 0x32;
    g_benchXLimit = 0x1b;
    subsMenuX = 100;
    formationMenuX = 100;
    plLeavingX = 0x27;
    plComingX = 0x1a;
    benchWriteOnly02 = 0x23;
    benchTeam = (dword)pTVar15;
    CheckForThrowInAndGoalkeepersBall();
    return;
  }
  if ((short)g_inSubstitutesMenu < 0) {
    return;
  }
  dVar13 = benchTeam;
  if (subsTeamsSwapped != 0) {
    dVar13 = *(dword *)benchTeam;
  }
  if ((*(short *)(dVar13 + 4) == 1) ||
     ((*(short *)(dVar13 + 4) != 2 && (*(short *)(dVar13 + 6) == 1)))) {
    Player1StatusProc();
    subsDirection = pl1Direction;
    subsFire = pl1Fire;
  }
  else {
    Player2StatusProc();
    subsDirection = pl2Direction;
    subsFire = pl2Fire;
  }
  wVar7 = selectedPlayerInSubs;
  dVar13 = benchTeam;
  wVar11 = plToBeSubstitutedPos;
  pSVar1 = substitutedPlSprite;
  if (cameraCoordinatesValid == 0) {
    g_goToSubsTimer = 0xf;
    return;
  }
  if (g_goToSubsTimer != 0) {
    g_goToSubsTimer = g_goToSubsTimer - 1;
    return;
  }
  if ((short)g_inSubstitutesMenu < 0x1e) {
    return;
  }
  if ((short)g_substituteInProgress < 0) {
    substitutedPlSprite->injuryLevel = 0;
    pSVar1->sentAway = 0;
    dVar13 = benchTeamGame;
    wVar7 = plToEnterGameIndex;
    wVar11 = plToBeSubstitutedPos;
    if (plToBeSubstitutedPos == *(word *)(benchTeamGame + 0x14)) {
      *(undefined2 *)(benchTeamGame + 0x14) = 0xffff;
    }
    if ((wVar7 == *(word *)(dVar13 + 0x14)) &&
       (*(undefined2 *)(dVar13 + 0x14) = 0xffff, wVar11 != 0)) {
      *(word *)(dVar13 + 0x14) = wVar11;
    }
    SwapPlayerNameData(wVar7,wVar11);
    dVar13 = benchTeamGame;
    sVar10 = *(short *)((int)ingameTeamPlayerOffsets + (int)(short)(wVar7 << 1));
    sVar5 = *(short *)((int)ingameTeamPlayerOffsets + (int)(short)(wVar11 << 1));
    *(undefined1 *)(benchTeamGame + 0x2e + (int)sVar5) = 0xff;
    sVar9 = 0x3c;
    do {
      uVar6 = *(undefined1 *)(dVar13 + 0x2a + (int)sVar10);
      *(undefined1 *)(dVar13 + 0x2a + (int)sVar10) = *(undefined1 *)(dVar13 + 0x2a + (int)sVar5);
      *(undefined1 *)(dVar13 + 0x2a + (int)sVar5) = uVar6;
      dVar13 = dVar13 + 1;
      sVar9 = sVar9 + -1;
    } while (sVar9 != -1);
    InitializePlayerSpriteFrameIndices();
    ApplyTeamTactics((void *)benchTeamGame);
    g_waitForPlayerToGoInTimer = 100;
    subsBlockFire = 1;
    LeaveSubsMenu();
    return;
  }
  if ((short)subsDirection < 0) {
LAB_0010ccb8:
    subsBlockDirections = 0;
  }
  else if (subsBlockDirections != 0) {
    if (subsDirection == subsPrevDirection) {
      if (g_subsState == 0) {
        return;
      }
      if ((subsPrevDirection != 0) && (subsPrevDirection != 4)) {
        return;
      }
      if ((word)(subsMovementDelayTimer + 1) != 2) {
        subsMovementDelayTimer = subsMovementDelayTimer + 1;
        return;
      }
    }
    goto LAB_0010ccb8;
  }
  subsMovementDelayTimer = 0;
  subsPrevDirection = subsDirection;
  wVar8 = 0;
  if (subsFire != 0) {
    wVar8 = subsFireTimer + 1;
  }
  subsFireTimer = wVar8;
  if (subsBlockFire != 0) {
    if (subsFire != 0) {
      subsMovementDelayTimer = 0;
      return;
    }
    subsBlockFire = 0;
  }
  if (g_inSubstitutesMenu != 0x1e) {
    return;
  }
  if (g_substituteInProgress != 0) {
    subsMovementDelayTimer = 0;
    return;
  }
  if (g_subsState != 0) {
    if (g_subsState == 1) {
      if (subsFire == 0) {
        UpdateSubstitutePlayerIndices();
        return;
      }
      overlayActiveFlag = 0;
      g_substituteInProgress = 1;
      pwVar12 = &team1NumSubs;
      pwVar14 = &team1GoalkeeperReplaced;
      if (*(short *)(benchTeam + 0x12) != 1) {
        pwVar12 = &team2NumSubs;
        pwVar14 = &team2GoalkeeperReplaced;
      }
      *pwVar12 = *pwVar12 + 1;
      if (plToEnterGameIndex == 0xb) {
        *pwVar14 = *pwVar14 + 1;
      }
      subsBlockFire = 1;
      g_subsState = 0;
      subsWriteOnly = 2;
      teamThatSubstitutes = benchTeam;
      pSVar1 = *(Sprite **)(*(int *)(benchTeam + 0x14) + (int)(short)(plToBeSubstitutedPos << 2));
      substitutedPlSprite = pSVar1;
      pSVar1->cards = 0;
      plSubstitutedX = 0x27;
      plSubstitutedY = 0x1c1;
      substitutedPlDestX = plLeavingX;
      substitutedPlDestY = plComingYTmp;
      substitutedPlX = (pSVar1->x).s.i;
      substitutedPlY = (pSVar1->y).s.i;
      return;
    }
    if (g_subsState == 3) {
      if (subsFire == 0) {
        UpdateSubstitutePlayerIndices();
        return;
      }
      overlayActiveFlag = 0;
      subsMovementDelayTimer = 0;
      subsFireTimer = wVar8;
      return;
    }
    if (g_subsState == 2) {
      if (subsFire == 0) {
        HandleFormationMenuMovement();
        return;
      }
      overlayActiveFlag = 0;
      *(word *)(benchTeam + 0x1c) = selectedFormationEntry;
      if (*(short *)(dVar13 + 0x12) != 1) {
        pl2Tactics = selectedFormationEntry;
        ApplyTeamTactics((void *)benchTeamGame);
        SubsBenchOff();
        return;
      }
      pl1Tactics = selectedFormationEntry;
      ApplyTeamTactics((void *)benchTeamGame);
      SubsBenchOff();
      return;
    }
    if (g_subsState != 4) {
      return;
    }
    if ((*(byte *)(benchTeamGame +
                   (int)*(short *)((int)ingameTeamPlayerOffsets +
                                  (int)(short)(plToBeSubstitutedPos << 1)) + 0x34) < 2) &&
       (wVar8 == 8)) {
      if (plToBeSubstitutedPos == *(word *)(benchTeamGame + 0x14)) {
        wVar11 = 0xffff;
      }
      *(word *)(benchTeamGame + 0x14) = wVar11;
      selectedPlayerInSubs = 0xffff;
      return;
    }
    if (subsFire == 0) {
      UpdateSubstitutePlayerIndices();
      return;
    }
    if ((short)plToBeSubstitutedOrd < 0) {
      subsWriteOnly = 2;
      ShowFormationMenu();
      return;
    }
    if (plToBeSubstitutedOrd == 0) {
      subsMovementDelayTimer = 0;
      subsFireTimer = wVar8;
      return;
    }
    if ((short)selectedPlayerInSubs < 0) {
      if (wVar8 == 1) {
        selectedPlayerInSubs = plToBeSubstitutedPos;
        return;
      }
      subsMovementDelayTimer = 0;
      subsFireTimer = wVar8;
      return;
    }
    if (selectedPlayerInSubs != plToBeSubstitutedPos) {
      wVar8 = selectedPlayerInSubs;
      if ((plToBeSubstitutedPos == *(word *)(benchTeamGame + 0x14)) ||
         (wVar8 = plToBeSubstitutedPos, selectedPlayerInSubs == *(word *)(benchTeamGame + 0x14))) {
        *(word *)(benchTeamGame + 0x14) = wVar8;
      }
      SwapPlayerNameData(wVar11,wVar7);
      sVar10 = *(short *)((int)ingameTeamPlayerOffsets + (int)(short)(wVar11 << 1));
      sVar5 = *(short *)((int)ingameTeamPlayerOffsets + (int)(short)(wVar7 << 1));
      sVar9 = 0x3c;
      dVar13 = benchTeamGame;
      do {
        uVar6 = *(undefined1 *)(dVar13 + 0x2a + (int)sVar10);
        *(undefined1 *)(dVar13 + 0x2a + (int)sVar10) = *(undefined1 *)(dVar13 + 0x2a + (int)sVar5);
        *(undefined1 *)(dVar13 + 0x2a + (int)sVar5) = uVar6;
        dVar13 = dVar13 + 1;
        sVar9 = sVar9 + -1;
      } while (sVar9 != -1);
      iVar2 = *(int *)(*(int *)(benchTeam + 0x14) + (int)(short)(plToBeSubstitutedPos << 2));
      iVar3 = *(int *)(*(int *)(benchTeam + 0x14) + (int)(short)(selectedPlayerInSubs << 2));
      sVar10 = 0x6d;
      do {
        uVar6 = *(undefined1 *)(iVar2 + sVar10);
        *(undefined1 *)(iVar2 + sVar10) = *(undefined1 *)(iVar3 + sVar10);
        *(undefined1 *)(iVar3 + sVar10) = uVar6;
        sVar10 = sVar10 + -1;
      } while (sVar10 != -1);
      uVar4 = *(undefined2 *)(iVar2 + 2);
      *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(iVar3 + 2);
      *(undefined2 *)(iVar3 + 2) = uVar4;
      InitializePlayerSpriteFrameIndices();
      ApplyTeamTactics((void *)benchTeamGame);
      selectedPlayerInSubs = 0xffff;
      overlayActiveFlag = 0;
      SubsBenchOff();
      return;
    }
    if (wVar8 == 1) {
      selectedPlayerInSubs = 0xffff;
      return;
    }
    subsMovementDelayTimer = 0;
    subsFireTimer = wVar8;
    return;
  }
  wVar11 = bench2Called;
  if ((TeamGeneralInfo *)benchTeam == &topTeamData) {
    wVar11 = bench1Called;
  }
  if (wVar11 != 0) goto code_r0x0010cf76;
  if ((g_trainingGame == 0) || (subsTrainingTopTeam == 0)) {
    if (subsDirection == 0) goto LAB_0010d0fc;
    if (subsDirection != 4) goto LAB_0010d096;
  }
  else if (subsDirection != 0) {
    if (subsDirection != 4) {
LAB_0010d096:
      if ((subsDirection != 2) && (subsDirection != 6)) {
        if (subsFire == 0) {
          subsMovementDelayTimer = 0;
          subsFireTimer = wVar8;
          return;
        }
        if (g_benchPlayerIndex == 0) {
          g_subsState = 4;
          subsBlockFire = 1;
          overlayActiveFlag = 1;
          plToBeSubstitutedOrd = 0xffff;
          plToBeSubstitutedPos = 0xffff;
          selectedPlayerInSubs = 0xffff;
          return;
        }
        if ((short)(g_benchPlayerIndex - 1) < 0) {
          subsMovementDelayTimer = 0;
          subsFireTimer = wVar8;
          return;
        }
        iVar2 = benchTeamGame +
                (int)*(short *)((int)ingameTeamPlayerOffsets +
                               (int)(short)((g_benchPlayerIndex + 10) * 2));
        if (-1 < *(char *)(iVar2 + 0x2e)) {
          if (1 < *(byte *)(iVar2 + 0x34)) {
            subsMovementDelayTimer = 0;
            subsFireTimer = wVar8;
            return;
          }
          g_subsState = 1;
          subsBlockFire = 1;
          overlayActiveFlag = 1;
          plToEnterGameIndex = g_benchPlayerIndex + 10;
          if ((5 < gameMaxSubstitutes) && (plToEnterGameIndex == 0xb)) {
            plToBeSubstitutedPos = 0;
            return;
          }
          FindInitialPlayerToBeSubstituted();
          return;
        }
        subsMovementDelayTimer = 0;
        subsFireTimer = wVar8;
        return;
      }
code_r0x0010cf76:
      InitCurrentGoalHighlight();
      benchOff = 1;
      g_cameraLeavingSubsTimer = 0x32;
      g_leavingSubsMenu = 1;
      CheckIfGoalkeeperClaimedTheBall();
      bench1Called = 0;
      bench2Called = 0;
      g_inSubstitutesMenu = 0;
      subsTeamsSwapped = 0;
      overlayActiveFlag = 0;
      writeOnly01 = 1;
      g_subsState = 0;
      plToBeSubstitutedPos = 0xffff;
      pl1BenchTimeoutCounter = 0;
      pl2BenchTimeoutCounter = 0;
      subsPrevPl1Direction = 0xffff;
      subsPrevPl2Direction = 0xffff;
      subsPl1TapCount = 0;
      subsPl2TapCount = 0;
      subsWriteOnly = 2;
      FUN_0010cf6e();
      return;
    }
LAB_0010d0fc:
    if (((g_trainingGame == 0) || (g_benchPlayerIndex != 0)) && (gameState == 3)) {
      subsMovementDelayTimer = 0;
      subsFireTimer = wVar8;
      return;
    }
    subsBlockDirections = 1;
    if (g_benchPlayerIndex == 0) {
      if (g_trainingGame == 0) {
        subsBlockDirections = 1;
        subsMovementDelayTimer = 0;
        subsFireTimer = wVar8;
        return;
      }
      TrainingSwapBenchTeams();
      return;
    }
    goto LAB_0010d146;
  }
  if (gameState == 3) {
    subsMovementDelayTimer = 0;
    subsFireTimer = wVar8;
    return;
  }
  subsBlockDirections = 1;
  if (g_benchPlayerIndex == 5) {
    subsBlockDirections = 1;
    subsMovementDelayTimer = 0;
    subsFireTimer = wVar8;
    return;
  }
  while( true ) {
    wVar11 = g_benchPlayerIndex + 1;
    bVar16 = (short)(g_benchPlayerIndex - 5) < 0;
    g_benchPlayerIndex = wVar11;
    if (wVar11 == 6) break;
    IsThisPlayerOkToSelect();
    if (!bVar16) {
      return;
    }
  }
LAB_0010d146:
  do {
    g_benchPlayerIndex = g_benchPlayerIndex - 1;
    bVar16 = (short)g_benchPlayerIndex < 0;
    if (g_benchPlayerIndex == 0) {
      return;
    }
    IsThisPlayerOkToSelect();
  } while (bVar16);
  return;
}


// --- CheckForThrowInAndGoalkeepersBall @ 0010d408 ---

void __usercall CheckForThrowInAndGoalkeepersBall(void)

{
  Sprite *player;
  
  player = lastTeamPlayedBeforeBreak->controlledPlayer;
  if ((player != (Sprite *)0x0) && (player->playerState == PL_THROW_IN)) {
    hideBall = 0;
    player->playerState = PL_NORMAL;
    SetPlayerAnimationTable(&playerNormalStandingAnimTable,player);
  }
  CheckIfGoalkeeperClaimedTheBall();
  return;
}


// --- DrawBenchAndSubsMenu @ 0010da4e ---

void __usercall DrawBenchAndSubsMenu(void)

{
  dword teamGame;
  short y;
  ushort uVar1;
  word wVar2;
  ushort entryIndex;
  ushort *puVar3;
  word *pwVar4;
  word *pwVar5;
  
  if (g_inSubstitutesMenu == 0) {
    if (g_leavingSubsMenu == 0) {
      return;
    }
    if ((ushort)(g_benchXLimit + 8) <= g_cameraX.s.i) {
      g_leavingSubsMenu = 0;
      return;
    }
  }
  if (g_cameraX.s.i < (ushort)(g_benchXLimit + 8)) {
    initialSubsState = g_subsState;
    if ((g_trainingGame == 0) || (subsTrainingTopTeam == 0)) {
      DrawOpponentsBench();
    }
    wVar2 = g_benchXLimit;
    if (((g_goToSubsTimer == 0) && (g_substituteInProgress == 0)) && (g_subsState == 0)) {
      DrawSpriteInCameraView();
    }
    drawTrainingTopHalfOfTheBench = subsTrainingTopTeam;
    DrawBenchPlayersAndCoach((TeamGame *)benchTeamGame,(TeamGeneralInfo *)benchTeam,wVar2,benchY);
    if ((g_trainingGame != 0) && (subsTrainingTopTeam != 0)) {
      DrawOpponentsBench();
    }
    teamGame = benchTeamGame;
    if ((g_subsState != 1) && (g_subsState != 3)) {
      if (g_subsState == 2) {
        benchColors[0] = *(word *)(benchTeamGame + 2);
        benchColors[1] = *(word *)(benchTeamGame + 4);
        benchColors[2] = *(word *)(benchTeamGame + 6);
        benchColors[3] = *(word *)(benchTeamGame + 8);
        benchColors[4] = 3;
        benchColors[5] = 1;
        benchColors[6] = 3;
        benchColors[7] = 1;
        benchColors[8] = 0xffff;
        pwVar5 = benchColors;
        do {
          do {
            pwVar4 = pwVar5 + 1;
            subsMenuBackgroundColor = *pwVar5;
            pwVar5 = pwVar4;
          } while (subsMenuBackgroundColor == 2);
        } while (subsMenuBackgroundColor == 0xf);
        pwVar5 = benchColors;
        do {
          do {
            pwVar4 = pwVar5 + 1;
            subsMenuHighlightColor = *pwVar5;
            pwVar5 = pwVar4;
          } while (subsMenuHighlightColor == 2);
        } while ((subsMenuHighlightColor == 0xf) ||
                (subsMenuHighlightColor == subsMenuBackgroundColor));
        pwVar5 = benchColors;
        do {
          do {
            pwVar4 = pwVar5 + 1;
            subsMenuEntryFrameColor = *pwVar5;
            pwVar5 = pwVar4;
          } while (subsMenuEntryFrameColor == subsMenuBackgroundColor);
        } while (subsMenuEntryFrameColor == subsMenuHighlightColor);
        if ((short)subsMenuEntryFrameColor < 0) {
          subsMenuEntryFrameColor = subsMenuHighlightColor;
        }
        FillRectangle();
        FillRectangle();
        FillRectangle();
        DrawSprite16Pixels();
        uVar1 = 0x3f;
        entryIndex = 0;
        do {
          wVar2 = subsMenuBackgroundColor;
          if (entryIndex == selectedFormationEntry) {
            wVar2 = subsMenuHighlightColor;
          }
          DrawFormationMenuEntry((uchar *)&smallCharsTable,uVar1,wVar2,entryIndex);
          uVar1 = uVar1 + 10;
          entryIndex = entryIndex + 1;
        } while (entryIndex != 0x12);
        return;
      }
      if (g_subsState != 4) {
        return;
      }
    }
    benchColors[0] = *(word *)(benchTeamGame + 2);
    benchColors[1] = *(word *)(benchTeamGame + 4);
    benchColors[2] = *(word *)(benchTeamGame + 6);
    benchColors[3] = *(word *)(benchTeamGame + 8);
    benchColors[4] = 3;
    benchColors[5] = 1;
    benchColors[6] = 3;
    benchColors[7] = 1;
    benchColors[8] = 0xffff;
    pwVar5 = benchColors;
    do {
      do {
        puVar3 = pwVar5 + 1;
        subsMenuBackgroundColor = *pwVar5;
        pwVar5 = puVar3;
      } while (subsMenuBackgroundColor == 2);
    } while (subsMenuBackgroundColor == 0xf);
    pwVar5 = benchColors;
    do {
      do {
        puVar3 = pwVar5 + 1;
        subsMenuHighlightColor = *pwVar5;
        pwVar5 = puVar3;
      } while (subsMenuHighlightColor == 2);
    } while ((subsMenuHighlightColor == 0xf) || (subsMenuHighlightColor == subsMenuBackgroundColor))
    ;
    pwVar5 = benchColors;
    do {
      do {
        puVar3 = pwVar5 + 1;
        subsMenuEntryFrameColor = *pwVar5;
        pwVar5 = puVar3;
      } while (subsMenuEntryFrameColor == subsMenuBackgroundColor);
    } while (subsMenuEntryFrameColor == subsMenuHighlightColor);
    if ((short)subsMenuEntryFrameColor < 0) {
      subsMenuEntryFrameColor = subsMenuHighlightColor;
    }
    if (g_subsState != 3) {
      if (g_subsState == 4) {
        uVar1 = subsMenuBackgroundColor;
        if ((short)plToBeSubstitutedOrd < 0) {
          uVar1 = subsMenuHighlightColor;
        }
        DrawSubstitutesMenuEntry
                  (0x24,uVar1,-1,&smallCharsTable,(void *)benchTeamGame,ingameTeamPlayerOffsets);
      }
      else {
        DrawSubstitutesMenuEntry
                  (0x24,subsMenuBackgroundColor,plToEnterGameIndex,&smallCharsTable,
                   (void *)benchTeamGame,ingameTeamPlayerOffsets);
      }
    }
    FillRectangle();
    FillRectangle();
    FillRectangle();
    if ((g_subsState != 1) && (g_subsState != 4)) {
      panicReasonCode = 0x4554;
      PanicHaltLoop();
    }
    DrawSprite16Pixels();
    y = 0x58;
    uVar1 = 0;
    do {
      GetBenchPlayerPointer(uVar1);
      wVar2 = subsMenuBackgroundColor;
      if (uVar1 == plToBeSubstitutedPos) {
        wVar2 = subsMenuHighlightColor;
      }
      if ((((g_subsState == 4) && (uVar1 == selectedPlayerInSubs)) &&
          ((wVar2 = 10, subsMenuBackgroundColor == 10 || (subsMenuHighlightColor == 10)))) &&
         ((wVar2 = 0xb, subsMenuBackgroundColor == 0xb || (subsMenuHighlightColor == 0xb)))) {
        wVar2 = 0xe;
      }
      DrawSubstitutesMenuEntry
                (y,wVar2,uVar1,&smallCharsTable,(void *)teamGame,ingameTeamPlayerOffsets);
      y = y + 10;
      uVar1 = uVar1 + 1;
    } while (uVar1 != 0xb);
  }
  return;
}


// --- DrawOpponentsBench @ 0010db88 ---

void __usercall DrawOpponentsBench(void)

{
  word wVar1;
  TeamGame *requestingTeam;
  
  wVar1 = g_subsState;
  requestingTeam = &topTeamInGame;
  if ((TeamGame *)benchTeamGame != &bottomTeamInGame) {
    requestingTeam = &bottomTeamInGame;
  }
  g_subsState = 0xffff;
  drawTrainingTopHalfOfTheBench = subsTrainingTopTeam ^ 1;
  DrawBenchPlayersAndCoach
            (requestingTeam,*(TeamGeneralInfo **)benchTeam,g_benchXLimit,opponentBenchY);
  g_subsState = wVar1;
  return;
}


// --- DrawBenchPlayersAndCoach @ 0010dbe2 ---

/* in:
        D1 - x (for player sprites)
        D2 - y
        A0 -> team that requested team management (in-game)
        A1 -> team data (general info)
   
   Draws all bench sprites. */

void __usercall
DrawBenchPlayersAndCoach(TeamGame *requestingTeam,TeamGeneralInfo *team,ushort x,ushort y)

{
  short sVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if ((g_trainingGame == 0) || (drawTrainingTopHalfOfTheBench == 0)) {
    DrawSpriteHotspotInCameraView();
  }
  pbVar2 = requestingTeam->players[10].shortName + 7;
  if ((g_trainingGame != 0) &&
     (pbVar2 = requestingTeam->players[10].shortName + 7, drawTrainingTopHalfOfTheBench != 0)) {
    pbVar2 = requestingTeam->players[0xe].shortName + 7;
  }
  sVar1 = 1;
  do {
    if (((pbVar2[0x2a] == '\0') && (-1 < (char)pbVar2[0x2e])) && (pbVar2[0x34] < 2)) {
      DrawSpriteHotspotInCameraView();
    }
    pbVar3 = pbVar2 + 0x3d;
    if ((g_trainingGame != 0) && (drawTrainingTopHalfOfTheBench != 0)) {
      pbVar3 = pbVar2 + -0x3d;
    }
    sVar1 = sVar1 + 1;
    pbVar2 = pbVar3;
  } while (sVar1 != 6);
  return;
}


// --- GameLoop @ 0010e8d6 ---

/* WARNING: Removing unreachable block (ram,0x0010e96a) */
/* WARNING: Removing unreachable block (ram,0x0010e96e) */
/* in:
        A5 -> left team in-game struct
        A6 -> right team in-game struct */

void __usercall GameLoop(void)

{
  bool bVar1;
  uint uVar2;
  word wVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined2 y;
  undefined2 unaff_D4w;
  int unaff_A0;
  TeamStatisticsData *pTVar6;
  int unaff_A2;
  void *unaff_A5;
  void *unaff_A6;
  
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
wait_for_vblank_sync:
    REG_DMACON = DMACON_BLT_ON;
    uVar4 = REG_DMACONR._0_1_;
    do {
      bVar5 = REG_DMACONR._0_1_;
    } while ((bVar5 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    uVar2 = g_irqCookieObfuscated ^ 0xcfd1f9bd;
    if (uVar2 != 0x165a) {
      *(undefined1 *)(unaff_A2 + -0x80 + (short)unaff_D4w * 4) =
           *(undefined1 *)&((TeamGeneralInfo *)(unaff_A0 + -1))->opponentsTeam;
      if ((((0 < (int)uVar2) && ((TeamGeneralInfo *)(unaff_A0 + -1) == lastTeamPlayed)) &&
          (*(short *)(unaff_A0 + 0x27) == 0)) && ((0xef < strikeDestX && (strikeDestX < 0x1b0)))) {
        if ((0x12e < strikeDestX) && (strikeDestX < 0x170)) {
          pTVar6 = topTeamData.teamStatsPtr;
          if (ballSprite.y.s.i < 0x1c2) {
            pTVar6 = bottomTeamData.teamStatsPtr;
          }
          pTVar6->onTarget = pTVar6->onTarget + 1;
        }
        pTVar6 = topTeamData.teamStatsPtr;
        if (ballSprite.y.s.i < 0x1c2) {
          pTVar6 = bottomTeamData.teamStatsPtr;
        }
        pTVar6->goalAttempts = pTVar6->goalAttempts + 1;
        isGoalAttempt = 1;
      }
      if (showStats != 0) {
        showStats = 0;
        showingUserStats = 1;
      }
      if (statsTimer != 0) {
        if ((short)statsTimer < 0) {
turn_off_statistics:
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
          if (wVar3 == 0 || bVar1) goto turn_off_statistics;
        }
        DrawStatistics();
      }
      return;
    }
    waitingInterrupt = 1;
    nullsub_5();
    nullsub_4();
    do {
    } while (waitingInterrupt != 0);
    ReadTimerDelta();
    if (paused != 0) {
      do {
      } while( true );
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
      goto wait_for_vblank_sync;
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
    InitGameRestoreTeams(unaff_A5,unaff_A6);
  } while( true );
}


// --- KeepStatisticsOnScreen @ 0010ebc4 ---

/* WARNING: Removing unreachable block (ram,0x0010ebda) */
/* WARNING: Removing unreachable block (ram,0x0010ebde) */
/* WARNING: Removing unreachable block (ram,0x0010ec1a) */

void __usercall KeepStatisticsOnScreen(void)

{
                    /* WARNING: Do nothing block with infinite loop */
  do {
  } while( true );
}


// --- PlayInstantReplayLoop @ 0010ecfa ---

/* WARNING: Removing unreachable block (ram,0x0010ed1c) */
/* WARNING: Removing unreachable block (ram,0x0010ed20) */
/* WARNING: Removing unreachable block (ram,0x0010ed32) */
/* WARNING: Removing unreachable block (ram,0x0010eeb6) */
/* Plays an instant replay when player presses 'R' during the game.
   Doesn't return until it's either played fully or aborted. */

void __usercall PlayInstantReplayLoop(void)

{
  ushort uVar1;
  undefined1 uVar2;
  byte bVar3;
  ushort unaff_D2w;
  ushort unaff_D3w;
  CharTable *unaff_A1;
  int unaff_A5;
  int unaff_A6;
  
  ReadTimerDelta();
  if (paused != 0) {
    do {
    } while( true );
  }
  ProcessSpriteBlitQueue();
  GetKey();
  if (fadeState != 0) {
    MainKeysCheck(currentKey);
    nullsub_10();
    nullsub_9();
  }
  if (replayState == 0) {
    return;
  }
  PlayEnqueuedSamples();
  if (fadeState != 0) {
    if (userRequestedReplay != 0) {
multiplayer_read_joys:
      Player1StatusProc();
      if (pl1Fire == 0) {
        Player2StatusProc();
        bVar3 = pl2Fire;
joined_r0x0010ee02:
        if (bVar3 == 0) goto draw_replay_frame_and_handle_fade;
      }
abort_replay_and_block_fire:
      fireBlocked = 1;
      replayState = 0;
      goto fade_out_and_cleanup_then_return;
    }
    if (teamScoredDataPtr != (TeamGeneralInfo *)0x0) {
      if (teamScoredDataPtr->playerNumber == 1) {
single_read_joy1:
        Player1StatusProc();
        bVar3 = pl1Fire;
        goto joined_r0x0010ee02;
      }
      if (teamScoredDataPtr->playerNumber != 2) {
        if (teamScoredDataPtr->playerCoachNumber == 1) goto single_read_joy1;
        if (teamScoredDataPtr->playerCoachNumber != 2) goto multiplayer_read_joys;
      }
      Player2StatusProc();
      if (pl2Fire != 0) goto abort_replay_and_block_fire;
    }
  }
draw_replay_frame_and_handle_fade:
  DrawReplayFrame();
  if ((fadeState == 0) && (fadeInitFlag == 999)) {
    fadeInitFlag = 0xffff;
  }
  if (replayState != 0) {
    if (fadeAndSaveHighlightScene != 0) {
      FadeAndSaveHighlightScene();
      fadeAndSaveHighlightScene = 0;
    }
    if (instantReplayFlag != 0) {
      HandleInstantReplayStateSwitch();
      instantReplayFlag = 0;
    }
    REG_DMACON = DMACON_BLT_ON;
    uVar2 = REG_DMACONR._0_1_;
    do {
      bVar3 = REG_DMACONR._0_1_;
    } while ((bVar3 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    if (g_irqCookieObfuscated != 0xcfd1efe7) {
      WriteStatsNumber(*(ushort *)(unaff_A6 + 4),0x100,unaff_D2w,unaff_D3w);
      uVar1 = unaff_D2w + 0x12;
      DrawMenuTextCentered(0xa8,uVar1,unaff_D3w,aBookings,unaff_A1);
      WriteStatsNumber(*(ushort *)(unaff_A5 + 6),0x50,uVar1,unaff_D3w);
      WriteStatsNumber(*(ushort *)(unaff_A6 + 6),0x100,uVar1,unaff_D3w);
      uVar1 = unaff_D2w + 0x24;
      DrawMenuTextCentered(0xa8,uVar1,unaff_D3w,aSendingsOff,unaff_A1);
      WriteStatsNumber(*(ushort *)(unaff_A5 + 8),0x50,uVar1,unaff_D3w);
      WriteStatsNumber(*(ushort *)(unaff_A6 + 8),0x100,uVar1,unaff_D3w);
      return;
    }
    do {
    } while( true );
  }
fade_out_and_cleanup_then_return:
  FadeOutToBlack();
  RestoreCameraPosition();
  return;
}


// --- PlayHighlightsLoop @ 0010eebc ---

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0010eee0) */
/* WARNING: Removing unreachable block (ram,0x0010eee4) */
/* WARNING: Removing unreachable block (ram,0x0010f032) */
/* Doesn't return until the playback is done, either by playing all scenes
   or user aborting by pressing fire. */

void __usercall PlayHighlightsLoop(void)

{
  undefined1 uVar1;
  byte bVar2;
  int iVar3;
  
  ReadTimerDelta();
  if (paused != 0) {
    do {
    } while( true );
  }
  ProcessSpriteBlitQueue();
  GetKey();
  MainKeysCheck(currentKey);
  nullsub_10();
  nullsub_9();
  if (replayState != 0) {
    PlayEnqueuedSamples();
    if ((fadeState != 0) &&
       ((Player1StatusProc(), pl1Fire != 0 || (Player2StatusProc(), pl2Fire != 0)))) {
      fireBlocked = 1;
      replayState = 0;
      FadeOutToBlack();
      RestoreCameraPosition();
      goto stop_replay_and_return;
    }
    DrawReplayFrame();
    if ((fadeState == 0) && (fadeInitFlag == 999)) {
      fadeInitFlag = 0xffff;
    }
    if (replayState != 0) goto vblank_irq_wait_gate;
    FadeOutToBlack();
    RestoreCameraPosition();
  }
  hilSceneNumber = hilSceneNumber + 1;
  if (numScenesInHilFile != hilSceneNumber) {
    iVar3 = (uint)hilSceneNumber * 19000;
    goalBasePtr = (uint *)(hilStartOfGoalsBuffer + iVar3);
    currentHilPtr = (uint *)(&hilPitchNumber + (uint)hilSceneNumber * 0x251c);
    nextGoalPtr = (uint *)(inGameHilBuffer + iVar3);
    HandleInstantReplayStateSwitch();
vblank_irq_wait_gate:
    REG_DMACON = DMACON_BLT_ON;
    uVar1 = REG_DMACONR._0_1_;
    do {
      bVar2 = REG_DMACONR._0_1_;
    } while ((bVar2 & 0x40) != 0);
    REG_DMACON = DMACON_BLT_OFF;
    if (g_irqCookieObfuscated != 0xcfd1efe7) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    do {
    } while( true );
  }
stop_replay_and_return:
  RestoreHighlightPointers();
  return;
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
  randXorKey2 = *(byte *)((int)savedRandStatePtr + -1);
  randXorIndex2 = *(byte *)((int)savedRandStatePtr + -2);
  seed2 = *(byte *)((int)savedRandStatePtr + -3);
  savedRandStatePtr = (byte *)((int)savedRandStatePtr + -3);
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


// --- MainKeysCheck @ 0010f442 ---

/* WARNING: Removing unreachable block (ram,0x0010f76a) */
/* Checks keys in game. This is where the pause gets set.
   
   destroys: eax, esi
   + ecx, edx while in multiplayer game
   [ebp safe] */

void __usercall MainKeysCheck(ushort key)

{
  word wVar1;
  TeamGeneralInfo *pTVar2;
  TeamGeneralInfo *pTVar3;
  
  if (key == 0) {
    return;
  }
  if (paused == 0) {
    if (showingUserStats != 0) {
      if (key != 0x53) {
        return;
      }
      StatisticsOff();
      return;
    }
    if ((playHighlightFlag == 0) && (normalReplayRunning == 0)) {
      if (key == 0x52) {
        if (fadeState == 0) {
          return;
        }
        if (g_inSubstitutesMenu != 0) {
          return;
        }
        if (gameState == ST_RESULT_AFTER_THE_GAME) {
          return;
        }
        if (gameState == ST_RESULT_ON_HALFTIME) {
          return;
        }
        if (replayState != 0) {
          instantReplayFlag = 1;
          return;
        }
        userRequestedReplay = 1;
        instantReplayFlag = 1;
        return;
      }
      if (key == 0x48) {
        if (replayState != 0) {
          return;
        }
        if (gameState != ST_RESULT_AFTER_THE_GAME) {
          return;
        }
        SaveHighlightsPointers();
        return;
      }
      if (key == 0x88) {
        g_spinBigS = g_spinBigS ^ 1;
        return;
      }
      if (key == 0x87) {
        currentPlayerIndicatorPosition = currentPlayerIndicatorPosition + 1;
        if (currentPlayerIndicatorPosition == 5) {
          currentPlayerIndicatorPosition = 0;
        }
        return;
      }
      if (key == 0x89) {
        FadeOutAndIn();
        if (g_crowdChantsOn == 0) {
          TurnCrowdChantsOn();
        }
        else {
          TurnCrowdChantsOff();
        }
        return;
      }
      if (key == 0x10) {
        if (replayState != 0) {
          return;
        }
        if ((bottomTeamData.playerNumber == 0) && (bottomTeamData.playerCoachNumber == 0)) {
          return;
        }
        bench2Called = 1;
        return;
      }
      if (key == 0x11) {
        if (replayState != 0) {
          return;
        }
        if ((topTeamData.playerNumber == 0) && (topTeamData.playerCoachNumber == 0)) {
          return;
        }
        bench1Called = 1;
        return;
      }
      if (key == 0x53) {
        if (gameStatePl == ST_GAME_IN_PROGRESS) {
          return;
        }
        if (g_inSubstitutesMenu != 0) {
          return;
        }
        if (replayState != 0) {
          return;
        }
        if ((ST_STARTING_GAME - 1 < gameState) && (gameState < ST_GAME_ENDED + 1)) {
          return;
        }
        AllowStatistics();
        return;
      }
      if (key == 0x57) {
        return;
      }
      if (key == 0x1b) {
        if (replayState != 0) {
          return;
        }
        if (playGame == 0) {
          return;
        }
        playGame = 0;
        overlayActiveFlag = 0;
        writeOnly01 = 1;
        if (gameStatePl != ST_GAME_IN_PROGRESS) {
          if (gameState == ST_PLAYERS_GOING_TO_SHOWER) {
            writeOnly01 = 1;
            overlayActiveFlag = 0;
            playGame = 0;
            return;
          }
          if (gameState == ST_RESULT_AFTER_THE_GAME) {
            writeOnly01 = 1;
            overlayActiveFlag = 0;
            playGame = 0;
            return;
          }
        }
        pTVar2 = &topTeamData;
        pTVar3 = &bottomTeamData;
        if (topTeamData.teamNumber != 1) {
          pTVar2 = &bottomTeamData;
          pTVar3 = &topTeamData;
        }
        if (pTVar2->playerNumber == 0) {
          if (pTVar2->isPlCoach == 0) {
            if ((pTVar3->playerNumber == 0) && (pTVar3->isPlCoach == 0)) {
              writeOnly01 = 1;
              overlayActiveFlag = 0;
              playGame = 0;
              gameCanceled = 1;
              extraTimeState = 0;
              penaltiesState = 0;
              return;
            }
            if (gameTime != (char  [4])0x0) {
              statsTeam1Goals = statsTeam1Goals + 5;
              for (team1TotalGoals = team1TotalGoals + 5; team1TotalGoals <= team2TotalGoals;
                  team1TotalGoals = team1TotalGoals + 1) {
                statsTeam1Goals = statsTeam1Goals + 1;
              }
              AssignFakeGoalsToScorers(1,-(team2TotalGoals - team1TotalGoals));
              statsTeam1GoalsCopy = statsTeam1Goals;
              statsTeam2GoalsCopy = statsTeam2Goals;
              extraTimeState = 0;
              penaltiesState = 0;
              return;
            }
            writeOnly01 = 1;
            overlayActiveFlag = 0;
            playGame = 0;
            gameCanceled = 1;
            extraTimeState = 0;
            penaltiesState = 0;
            return;
          }
          if (pTVar3->playerNumber != 0) {
            writeOnly01 = 1;
            overlayActiveFlag = 0;
            playGame = 0;
            gameCanceled = 1;
            extraTimeState = 0;
            penaltiesState = 0;
            return;
          }
          wVar1 = pTVar3->isPlCoach;
        }
        else {
          if (pTVar3->playerNumber != 0) {
            writeOnly01 = 1;
            overlayActiveFlag = 0;
            playGame = 0;
            gameCanceled = 1;
            extraTimeState = 0;
            penaltiesState = 0;
            return;
          }
          wVar1 = pTVar3->isPlCoach;
        }
        if ((wVar1 == 0) && (gameTime != (char  [4])0x0)) {
          statsTeam2Goals = statsTeam2Goals + 5;
          for (team2TotalGoals = team2TotalGoals + 5; team2TotalGoals <= team1TotalGoals;
              team2TotalGoals = team2TotalGoals + 1) {
            statsTeam2Goals = statsTeam2Goals + 1;
          }
          AssignFakeGoalsToScorers(2,-(team1TotalGoals - team2TotalGoals));
          statsTeam1GoalsCopy = statsTeam1Goals;
          statsTeam2GoalsCopy = statsTeam2Goals;
          extraTimeState = 0;
          penaltiesState = 0;
          return;
        }
        extraTimeState = 0;
        penaltiesState = 0;
        gameCanceled = 1;
        return;
      }
      if (key == 0x20) {
        if (spaceReplayTimer != 0) {
          return;
        }
        fadeAndSaveHighlightScene = 1;
        spaceReplayTimer = 100;
        return;
      }
    }
  }
  if ((key == 0x50) && (g_inSubstitutesMenu == 0)) {
    paused = paused ^ 1;
    if (paused == 0) {
      overlayActiveFlag = overlayFlagBackup;
      return;
    }
    overlayFlagBackup = overlayActiveFlag;
    overlayActiveFlag = 1;
    return;
  }
  return;
}


// --- ReplayExitMenuAfterFriendly @ 0010f8dc ---

/* WARNING: Removing unreachable block (ram,0x0010f95e) */
/* WARNING: Removing unreachable block (ram,0x0010f974) */
/* WARNING: Removing unreachable block (ram,0x0010f966) */
/* WARNING: Removing unreachable block (ram,0x0010f980) */
/* WARNING: Removing unreachable block (ram,0x0010f9a0) */
/* WARNING: Removing unreachable block (ram,0x0010f9aa) */
/* WARNING: Removing unreachable block (ram,0x0010f9b2) */
/* WARNING: Removing unreachable block (ram,0x0010f9ba) */
/* WARNING: Removing unreachable block (ram,0x0010f9c2) */
/* WARNING: Removing unreachable block (ram,0x0010f98e) */
/* WARNING: Removing unreachable block (ram,0x0010f996) */

void __usercall ReplayExitMenuAfterFriendly(void)

{
  LoadFile(aGrafsMenubg2Ra,frontbufferMaskBuffer);
  ProcessSpriteBlitQueue();
  BlitterCopyPanelToScreen();
  SetCameraCoordinates(0,0);
  SwapBuffersAndCameraViewState();
  UpdatePlanePtrsAndBlitParams();
  ProcessSpriteBlitQueue();
  BlitterCopyPanelToScreen();
  SwapBuffersAndCameraViewState();
  UpdatePlanePtrsAndBlitParams();
  replaySelected = 1;
  paletteIndex = 0;
  DrawReplayOrExitMenu();
  FadeIn();
  DrawReplayOrExitMenu();
  do {
  } while( true );
}


// --- DrawReplayOrExitMenu @ 0010f9ca ---

/* WARNING: Removing unreachable block (ram,0x0010fa5a) */
/* WARNING: Removing unreachable block (ram,0x0010fa5e) */

void __usercall DrawReplayOrExitMenu(void)

{
  DrawMenuBack150x20(0xe,0x65,0x6a);
  DrawMenuBack150x20(0xc,0x65,0x88);
  DrawMenuTextCentered(0xb0,0x70,2,aReplay,&bigCharsTable);
  DrawMenuTextCentered(0xb0,0x8e,2,aExit,&bigCharsTable);
  do {
  } while( true );
}


// --- DrawMenuBack150x20 @ 0010fa60 ---

/* in:
        D0 - color
        D1 - x
        D2 - y */

void __usercall DrawMenuBack150x20(ushort color,ushort x,ushort y)

{
  DrawMenuItemBackground(color,x,y,0x96,0x14);
  DrawMenuItemOuterFrame(color,x,y,0x96,0x14);
  return;
}


// --- DrawReplayContinueShiningFrame @ 0010fb22 ---

/* in:
        D0 - x
        D1 - y */

void __usercall DrawReplayContinueShiningFrame(short x,short y)

{
  FillRectangle();
  FillRectangle();
  FillRectangle();
  FillRectangle();
  return;
}


// --- ResetGoalAttempt @ 0011005e ---

void __usercall ResetGoalAttempt(void)

{
  isGoalAttempt = 0;
  return;
}


// --- AllowStatistics @ 00110066 ---

void __usercall AllowStatistics(void)

{
  showStats = 1;
  overlayActiveFlag = 1;
  statsTimer = 32000;
  resultTimer = -resultTimer;
  return;
}


// --- StatisticsOff @ 00110086 ---

void __usercall StatisticsOff(void)

{
  statsTimer = 0;
  showingUserStats = 0;
  overlayActiveFlag = 0;
  return;
}


// --- UpdateAndDrawStatistics @ 0011009a ---

/* destroys: eax, ebx, ecx, edx, esi, edi, ebp
   [ebp unsafe!] */

void __usercall UpdateAndDrawStatistics(void)

{
  bool bVar1;
  word wVar2;
  FixedPoint_ FVar3;
  TeamGeneralInfo *pTVar4;
  TeamStatisticsData *pTVar5;
  
  if (showStats != 0) {
    showStats = 0;
    showingUserStats = 1;
    statsTimer = 32000;
    DrawStatistics();
  }
  if (showingUserStats != 0) {
    Player1StatusProc();
    Player2StatusProc();
    if (pl1Fire == 0) {
      if (pl2Fire == 0) {
        return;
      }
      fireBlocked = 1;
    }
    else {
      fireBlocked = 1;
    }
    goto turn_off_statistics;
  }
  if (playingPenalties == 0) {
    if ((gameStatePl == ST_GAME_IN_PROGRESS) &&
       ((lastTeamPlayed == &topTeamData || (lastTeamPlayed == &bottomTeamData)))) {
      lastTeamPlayed->teamStatsPtr->ballPossession =
           lastTeamPlayed->teamStatsPtr->ballPossession + 1;
    }
    if (gameStatePl == ST_GAME_IN_PROGRESS) {
      if (isGoalAttempt == 0) {
        if (ballInGoalkeeperArea != 0) {
          pTVar4 = &topTeamData;
          FVar3 = ballSprite.deltaY;
          if (ballSprite.y.s.i < 0x1c2) {
            pTVar4 = &bottomTeamData;
            FVar3.raw = -ballSprite.deltaY.raw;
          }
          if ((((0 < (int)FVar3.raw) && (pTVar4 == lastTeamPlayed)) && (pTVar4->playerHasBall == 0))
             && ((0xef < strikeDestX && (strikeDestX < 0x1b0)))) {
            if ((0x12e < strikeDestX) && (strikeDestX < 0x170)) {
              pTVar5 = topTeamData.teamStatsPtr;
              if (ballSprite.y.s.i < 0x1c2) {
                pTVar5 = bottomTeamData.teamStatsPtr;
              }
              pTVar5->onTarget = pTVar5->onTarget + 1;
            }
            pTVar5 = topTeamData.teamStatsPtr;
            if (ballSprite.y.s.i < 0x1c2) {
              pTVar5 = bottomTeamData.teamStatsPtr;
            }
            pTVar5->goalAttempts = pTVar5->goalAttempts + 1;
            isGoalAttempt = 1;
          }
        }
      }
      else {
        pTVar4 = &topTeamData;
        FVar3 = ballSprite.deltaY;
        if (0x1c0 < ballSprite.y.s.i) {
          pTVar4 = &bottomTeamData;
          FVar3.raw = -ballSprite.deltaY.raw;
        }
        if ((pTVar4 == lastTeamPlayed) || (-1 < (int)FVar3.raw)) goto clear_goal_attempt;
      }
    }
    else {
clear_goal_attempt:
      isGoalAttempt = 0;
    }
  }
  if (showStats != 0) {
    showStats = 0;
    showingUserStats = 1;
  }
  if (statsTimer != 0) {
    if ((short)statsTimer < 0) {
turn_off_statistics:
      StatisticsOff();
      return;
    }
    if (statsTimer == 32000) {
      statsTimer = 30000;
      overlayActiveFlag = 1;
    }
    else {
      wVar2 = statsTimer - lastFrameTicks;
      bVar1 = (short)statsTimer < (short)lastFrameTicks;
      statsTimer = wVar2;
      if (wVar2 == 0 || bVar1) goto turn_off_statistics;
    }
    DrawStatistics();
  }
  return;
}


// --- DrawStatistics @ 00110288 ---

void __usercall DrawStatistics(void)

{
  TeamStatisticsData *pTVar1;
  TeamStatisticsData *pTVar2;
  ushort uVar3;
  TeamGeneralInfo *pTVar4;
  TeamGeneralInfo *pTVar5;
  
  DrawGrid(0x50,0x23,0xb0,0x10);
  DrawGrid(0x10,0x37,0x130,0x10);
  DrawGrid(0x10,0x49,0x130,0x10);
  DrawGrid(0x10,0x5b,0x130,0x10);
  DrawGrid(0x10,0x6d,0x130,0x10);
  DrawGrid(0x10,0x7f,0x130,0x10);
  DrawGrid(0x10,0x91,0x130,0x10);
  DrawGrid(0x10,0xa3,0x130,0x10);
  DrawGrid(0x10,0xb5,0x130,0x10);
  DrawGrid(0x10,199,0x130,0x10);
  pTVar4 = &topTeamData;
  pTVar5 = &bottomTeamData;
  if (topTeamData.inGameTeamPtr != &topTeamInGame) {
    pTVar4 = &bottomTeamData;
    pTVar5 = &topTeamData;
  }
  pTVar1 = pTVar4->teamStatsPtr;
  pTVar2 = pTVar5->teamStatsPtr;
  DrawMenuTextCentered(0xa8,0x27,2,aMATCHSTATS,&bigCharsTable);
  uVar3 = 0x50;
  if (g_trainingGame != 0) {
    uVar3 = 0x55;
  }
  DrawMenuTextCentered(uVar3,0x3b,2,(char *)topTeamInGame.teamName,&bigCharsTable);
  uVar3 = 0x100;
  if (g_trainingGame != 0) {
    uVar3 = 0xfb;
  }
  DrawMenuTextCentered(uVar3,0x3b,2,(char *)bottomTeamInGame.teamName,&bigCharsTable);
  DrawMenuTextCentered(0xa8,0x4d,2,aGoals,&bigCharsTable);
  WriteStatsNumber(statsTeam1Goals,0x50,0x4d,2);
  WriteStatsNumber(statsTeam2Goals,0x100,0x4d,2);
  DrawMenuTextCentered(0xa8,0x5f,2,aPossession,&bigCharsTable);
  uVar3 = pTVar2->ballPossession + pTVar1->ballPossession;
  if (uVar3 == 0) {
    DrawMenuTextCentered(0x50,0x5f,2,aMinus,&bigCharsTable);
    DrawMenuTextCentered(0x100,0x5f,2,aMinus,&bigCharsTable);
  }
  else {
    uVar3 = (ushort)(((uint)pTVar1->ballPossession * 100) / (uint)uVar3);
    WriteStatsPercent(uVar3,0x50,0x5f);
    WriteStatsPercent(100 - uVar3,0x100,0x5f);
  }
  DrawMenuTextCentered(0xa8,0x71,2,aGoalAttempts,&bigCharsTable);
  WriteStatsNumber(pTVar1->goalAttempts,0x50,0x71,2);
  WriteStatsNumber(pTVar2->goalAttempts,0x100,0x71,2);
  DrawMenuTextCentered(0xa8,0x83,2,aOnTarget,&bigCharsTable);
  WriteStatsNumber(pTVar1->onTarget,0x50,0x83,2);
  WriteStatsNumber(pTVar2->onTarget,0x100,0x83,2);
  DrawMenuTextCentered(0xa8,0x95,2,aCornersWon,&bigCharsTable);
  WriteStatsNumber(pTVar1->cornersWon,0x50,0x95,2);
  WriteStatsNumber(pTVar2->cornersWon,0x100,0x95,2);
  DrawMenuTextCentered(0xa8,0xa7,2,aFoulsConceded,&bigCharsTable);
  WriteStatsNumber(pTVar1->foulsConceded,0x50,0xa7,2);
  WriteStatsNumber(pTVar2->foulsConceded,0x100,0xa7,2);
  DrawMenuTextCentered(0xa8,0xb9,2,aBookings,&bigCharsTable);
  WriteStatsNumber(pTVar1->bookings,0x50,0xb9,2);
  WriteStatsNumber(pTVar2->bookings,0x100,0xb9,2);
  DrawMenuTextCentered(0xa8,0xcb,2,aSendingsOff,&bigCharsTable);
  WriteStatsNumber(pTVar1->sendingsOff,0x50,0xcb,2);
  WriteStatsNumber(pTVar2->sendingsOff,0x100,0xcb,2);
  return;
}


// --- WriteStatsNumber @ 001105d6 ---

/* in:
        D0 - number for writing
        D1 - x
        D2 - y
        D3 - color
   
   DrawStatistics calls this to convert and write number. */

void __usercall WriteStatsNumber(ushort number,ushort x,ushort y,ushort color)

{
  CharTable *unaff_A1;
  
  Int2Ascii(number,statsNumber);
  DrawMenuTextCentered(x,y,color,statsNumber,unaff_A1);
  return;
}


// --- WriteStatsPercent @ 00110604 ---

/* in:
        D0 - number for writing
        D1 - x
        D2 - y
   
   DrawStatistics calls this to convert and write number with percents (ball possession). */

void __usercall WriteStatsPercent(ushort number,ushort x,ushort y)

{
  ushort unaff_D3w;
  CharTable *unaff_A1;
  
  Int2Ascii(number,statsNumber);
  statsNumber[0] = '%';
  statsNumber[1] = '\0';
  DrawMenuTextCentered(x,y,unaff_D3w,statsNumber,unaff_A1);
  return;
}


// --- DrawGrid @ 00110638 ---

/* in:
        D1 - x
        D2 - y
        D3 - width
        D4 - height
   
   destroys: eax, ebx, ecx, edx, esi, edi, ebp
   [ebp unsafe!]
   
   Draws darkened grid for displaying statistics. */

void __usercall DrawGrid(ushort x,ushort y,ushort width,ushort height)

{
  short sVar1;
  ushort x_00;
  short sVar2;
  short sVar3;
  
  sVar1 = (width >> 4) - 1;
  sVar2 = (height >> 4) - 1;
  x_00 = x;
  sVar3 = sVar1;
  do {
    do {
      DarkenRectangle(SPR_SQUARE_GRID,x_00,y);
      sVar3 = sVar3 + -1;
      x_00 = x_00 + 0x10;
    } while (sVar3 != -1);
    y = y + 0x10;
    sVar2 = sVar2 + -1;
    x_00 = x;
    sVar3 = sVar1;
  } while (sVar2 != -1);
  return;
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


// --- CalculateNextBallPosition @ 00110f70 ---

void __usercall CalculateNextBallPosition(void)

{
  FixedPoint_ FVar1;
  FixedPoint_ FVar2;
  FixedPoint_ FVar3;
  FixedPoint_ FVar4;
  int iVar5;
  
  FVar3 = ballSprite.x;
  FVar4 = ballSprite.y;
  if (ballSprite.speed == 0) goto store_next_xy_and_return;
  if ((int)ballSprite.deltaZ.raw < 1) {
    FVar2 = ballSprite.deltaZ;
    FVar1 = ballSprite.z;
    if (ballSprite.z.s.i < 0x15) {
      do {
        FVar3.raw = ballSprite.deltaX.raw + FVar3.raw;
        FVar4.raw = ballSprite.deltaY.raw + FVar4.raw;
        FVar2.raw = FVar2.raw - kGravityConstant;
        FVar1.raw = FVar2.raw + FVar1.raw;
      } while (-1 < (int)FVar1.raw);
      goto store_next_xy_and_return;
    }
    if (ballSprite.z.s.i < 0x1f) {
      iVar5 = (int)ballSprite.z.raw >> 1;
      FVar1 = ballSprite.deltaZ;
      do {
        FVar3.raw = ballSprite.deltaX.raw * 2 + FVar3.raw;
        FVar4.raw = ballSprite.deltaY.raw * 2 + FVar4.raw;
        FVar1.raw = FVar1.raw + kGravityConstant * -2;
        iVar5 = FVar1.raw + iVar5;
      } while (-1 < iVar5);
      goto store_next_xy_and_return;
    }
    if (ballSprite.z.s.i < 0x24) {
      iVar5 = (int)ballSprite.z.raw >> 2;
      FVar1 = ballSprite.deltaZ;
      do {
        FVar3.raw = ballSprite.deltaX.raw * 4 + FVar3.raw;
        FVar4.raw = ballSprite.deltaY.raw * 4 + FVar4.raw;
        FVar1.raw = FVar1.raw + kGravityConstant * -4;
        iVar5 = FVar1.raw + iVar5;
      } while (-1 < iVar5);
      goto store_next_xy_and_return;
    }
  }
  iVar5 = (int)ballSprite.z.raw >> 3;
  FVar1 = ballSprite.deltaZ;
  do {
    FVar3.raw = ballSprite.deltaX.raw * 8 + FVar3.raw;
    FVar4.raw = ballSprite.deltaY.raw * 8 + FVar4.raw;
    FVar1.raw = FVar1.raw + kGravityConstant * -8;
    iVar5 = FVar1.raw + iVar5;
  } while (-1 < iVar5);
store_next_xy_and_return:
  ballNextX = FVar3.s.i;
  ballNextY = FVar4.s.i;
  return;
}


// --- QueueMaskedSpriteBlitClipped @ 0011100e ---

void __usercall QueueMaskedSpriteBlitClipped(void *sprite,ushort x,ushort y)

{
  ushort uVar1;
  uchar *puVar2;
  undefined1 uVar3;
  byte bVar4;
  uchar *puVar5;
  
  puVar5 = frontbufferBasePtr;
  if ((((*(short *)((int)sprite + 0xc) == 0xf) && (*(ushort *)((int)sprite + 10) < 0x11)) &&
      (*(short *)((int)sprite + 8) != 0)) && ((-1 < (short)y && ((short)y < SPRITE_MAX_Y_DRAW + 1)))
     ) {
    uVar1 = cameraXMod320 + x;
    spriteClippedY = cameraYMod320 + y;
    if (SCREEN_HEIGHT - 1 < (short)spriteClippedY) {
      spriteClippedY = spriteClippedY + -SCREEN_HEIGHT;
    }
    if ((short)spriteClippedY < SPRITE_MAX_Y_DRAW + 1) {
      if ((ushort)(*(short *)((int)sprite + 10) + (uVar1 & TILE_MASK)) < 0x11) {
        REG_DMACON = DMACON_BLT_ON;
        uVar3 = REG_DMACONR._0_1_;
        do {
          bVar4 = REG_DMACONR._0_1_;
        } while ((bVar4 & 0x40) != 0);
        REG_DMACON = DMACON_BLT_OFF;
        REG_BLTCON1 = uVar1 * 0x1000;
        REG_BLTCON0 = uVar1 * 0x1000 + BLTCON0_BASE_LINKED;
        puVar2 = frontbufferBasePtr +
                 (uint)spriteClippedY * ROW_STRIDE_BYTES + (int)(short)(((short)uVar1 >> 4) << 1);
        REG_BLTCPTH = puVar2;
        REG_BLTDPTH = puVar2;
        *(uchar **)(spriteBlitQueue + 4) = puVar2;
        *(byte **)spriteBlitQueue = frontbufferMaskBuffer + ((int)puVar2 - (int)puVar5);
        REG_BLTAMOD = 0;
        REG_BLTBMOD = 0;
        REG_BLTCMOD = PLANE_STRIDE_MINUS2;
        REG_BLTDMOD = PLANE_STRIDE_MINUS2;
        *(undefined2 *)(spriteBlitQueue + 8) = PLANE_STRIDE_MINUS2;
        REG_BLTBPTH = *(void **)sprite;
        REG_BLTAPTH = *(void **)((int)sprite + 4);
        REG_BLTAFWM = BLT_FWM_ALL;
        REG_BLTALWM = BLT_FWM_ALL;
        REG_BLTSIZE = SPRITE_BLTSIZE_W1;
        *(undefined2 *)(spriteBlitQueue + 10) = SPRITE_BLTSIZE_W1;
        *(undefined4 *)(spriteBlitQueue + 0xc) = 0xffffffff;
        spriteBlitQueue = spriteBlitQueue + 0xc;
        return;
      }
      REG_DMACON = DMACON_BLT_ON;
      uVar3 = REG_DMACONR._0_1_;
      do {
        bVar4 = REG_DMACONR._0_1_;
      } while ((bVar4 & 0x40) != 0);
      REG_DMACON = DMACON_BLT_OFF;
      REG_BLTCON1 = uVar1 * 0x1000;
      REG_BLTCON0 = uVar1 * 0x1000 + BLTCON0_BASE_LINKED;
      puVar2 = frontbufferBasePtr +
               (uint)spriteClippedY * ROW_STRIDE_BYTES + (int)(short)(((short)uVar1 >> 4) << 1);
      REG_BLTCPTH = puVar2;
      REG_BLTDPTH = puVar2;
      *(uchar **)(spriteBlitQueue + 4) = puVar2;
      *(byte **)spriteBlitQueue = frontbufferMaskBuffer + ((int)puVar2 - (int)puVar5);
      REG_BLTAMOD = 0xfffe;
      REG_BLTBMOD = 0xfffe;
      REG_BLTCMOD = PLANE_STRIDE_MINUS4;
      REG_BLTDMOD = PLANE_STRIDE_MINUS4;
      *(undefined2 *)(spriteBlitQueue + 8) = PLANE_STRIDE_MINUS4;
      REG_BLTBPTH = *(void **)sprite;
      REG_BLTAPTH = *(void **)((int)sprite + 4);
      REG_BLTAFWM = BLT_FWM_ALL;
      REG_BLTALWM = 0;
      REG_BLTSIZE = SPRITE_BLTSIZE_W2;
      *(undefined2 *)(spriteBlitQueue + 10) = SPRITE_BLTSIZE_W2;
      *(undefined4 *)(spriteBlitQueue + 0xc) = 0xffffffff;
      spriteBlitQueue = spriteBlitQueue + 0xc;
      return;
    }
    x = uVar1 - cameraXMod320;
    y = spriteClippedY - cameraYMod320;
  }
  DrawSpriteClipped(sprite,x,y);
  return;
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


// --- StartPenalties @ 00111910 ---

void __usercall StartPenalties(void)

{
  Sprite *pSVar1;
  ushort uVar2;
  short sVar3;
  Sprite **ppSVar4;
  
  penaltiesState = 0xffff;
  savedTeam1Goals = statsTeam1Goals;
  savedTeam2Goals = statsTeam2Goals;
  statsTeam1Goals = 0;
  team1GoalsDigit1 = 0;
  team1GoalsDigit2 = 0;
  statsTeam2Goals = 0;
  team2GoalsDigit1 = 0;
  team2GoalsDigit2 = 0;
  team1PenaltyGoals = 0;
  team2PenaltyGoals = 0;
  uVar2 = Rand();
  teamPlayingUp = (uVar2 & 1) + 1;
  uVar2 = Rand();
  teamStarting = (uVar2 & 1) + 1;
  team1PenaltyShooterIndex = 0xb;
  team2PenaltyShooterIndex = 0xb;
  team1PenaltyAttempts = 0;
  team2PenaltyAttempts = 0;
  playingPenalties = 1;
  dontShowScorers = 1;
  sVar3 = 10;
  ppSVar4 = team1SpritesTable;
  do {
    pSVar1 = *ppSVar4;
    pSVar1->cards = 0;
    pSVar1->sentAway = 0;
    sVar3 = sVar3 + -1;
    ppSVar4 = ppSVar4 + 1;
  } while (sVar3 != -1);
  sVar3 = 10;
  ppSVar4 = team2SpritesTable;
  do {
    pSVar1 = *ppSVar4;
    pSVar1->cards = 0;
    pSVar1->sentAway = 0;
    sVar3 = sVar3 + -1;
    ppSVar4 = ppSVar4 + 1;
  } while (sVar3 != -1);
  NextPenalty();
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


// --- UpdateControlledPlayer @ 00111b98 ---

/* in:
        A6 -> current team data
        
   Update players distance from the ball. Update controlling player if
   he's closest to the ball. Stop him if he was getting passed to. */

void __usercall UpdateControlledPlayer(TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  uint uVar7;
  short sVar8;
  Sprite **ppSVar9;
  Sprite *pSVar10;
  
  uVar6 = ballSprite.y._0_2_;
  uVar5 = ballSprite.x._0_2_;
  pSVar10 = (Sprite *)0x0;
  uVar7 = 0xffffffff;
  sVar8 = 10;
  ppSVar9 = team->spritesTable;
  do {
    pSVar1 = *ppSVar9;
    sVar3 = (pSVar1->x).s.i - uVar5;
    sVar4 = (pSVar1->y).s.i - uVar6;
    uVar2 = (int)sVar4 * (int)sVar4 + (int)sVar3 * (int)sVar3;
    pSVar1->ballDistance = uVar2;
    if (((((gameStatePl != ST_GAME_IN_PROGRESS) || (pSVar1->onScreen != 0)) &&
         (pSVar1->sentAway == 0)) &&
        ((team->goaliePlayingOrOut != 0 || (pSVar1->playerOrdinal != 1)))) &&
       (((pSVar1 != team->passingKickingPlayer &&
         ((pSVar1->playerState != PL_TACKLING && (pSVar1->playerState != PL_TACKLED)))) &&
        ((pSVar1->playerState != PL_JUMP_HEADING &&
         ((((pSVar1->playerState != PL_STATIC_HEADING && (pSVar1->playerState != PL_ROLLING_INJURED)
            ) && (pSVar1 != team->passToPlayerPtr)) && (uVar2 < uVar7)))))))) {
      uVar7 = uVar2;
      pSVar10 = pSVar1;
    }
    sVar8 = sVar8 + -1;
    ppSVar9 = ppSVar9 + 1;
  } while (sVar8 != -1);
  if (((playingPenalties == 0) || (gameStatePl != ST_GAME_IN_PROGRESS)) &&
     ((pSVar10 != (Sprite *)0x0 && (team->ballOutOfPlay != 0)))) {
    if (((pSVar10 != team->controlledPlayer) &&
        (pSVar1 = team->controlledPlayer, pSVar1 != (Sprite *)0x0)) &&
       (pSVar1->playerState == PL_NORMAL)) {
      pSVar1->destX = (pSVar1->x).s.i;
      pSVar1->destY = (pSVar1->y).s.i;
    }
    team->controlledPlayer = pSVar10;
    if (pSVar10 == team->passToPlayerPtr) {
      pSVar10 = team->passToPlayerPtr;
      if ((pSVar10 != (Sprite *)0x0) && (pSVar10->playerState == PL_NORMAL)) {
        pSVar10->destX = (pSVar10->x).s.i;
        pSVar10->destY = (pSVar10->y).s.i;
      }
      team->passToPlayerPtr = (Sprite *)0x0;
    }
  }
  return;
}


// --- UpdatePlayerBeingPassedTo @ 00111cbe ---

/* in:
        A6 -> team data
        
   Find closest player being passed to and update passToPlayerPtr.
   Stop him so he can get the pass if game is running, do not if game is stopped. */

void __usercall UpdatePlayerBeingPassedTo(TeamGeneralInfo *team)

{
  Sprite *pSVar1;
  uint uVar2;
  short sVar3;
  Sprite **ppSVar4;
  Sprite *pSVar5;
  
  if (gameStatePl == ST_GAME_IN_PROGRESS) {
    team->ballX = ballSprite.x.s.i;
    team->ballY = ballSprite.y.s.i;
    pSVar5 = penaltyShooterSprite;
    if (((team->ballInPlay != 0) && (team->playerSwitchTimer == 0)) &&
       ((team->passingToPlayer == 0 || (team->passToPlayerPtr == (Sprite *)0x0)))) {
      if (playingPenalties == 0) {
        pSVar5 = (Sprite *)0x0;
        uVar2 = 0xffffffff;
        sVar3 = 10;
        ppSVar4 = team->spritesTable;
        do {
          pSVar1 = *ppSVar4;
          if (((pSVar1->onScreen != 0) && (pSVar1->sentAway == 0)) &&
             (((team->ballOutOfPlayOrKeeper != 0 || (pSVar1->playerOrdinal != 1)) &&
              ((((pSVar1 != team->controlledPlayer && (pSVar1 != team->passingKickingPlayer)) &&
                (pSVar1->playerState == PL_NORMAL)) && (pSVar1->ballDistance < uVar2)))))) {
            uVar2 = pSVar1->ballDistance;
            pSVar5 = pSVar1;
          }
          sVar3 = sVar3 + -1;
          ppSVar4 = ppSVar4 + 1;
        } while (sVar3 != -1);
        if (pSVar5 == (Sprite *)0x0) {
          return;
        }
      }
      else {
        if (gameStatePl != ST_PENALTIES) {
          return;
        }
        team->ballInPlay = 0;
      }
      if (((pSVar5 != team->passToPlayerPtr) &&
          (pSVar1 = team->passToPlayerPtr, pSVar1 != (Sprite *)0x0)) &&
         (pSVar1->playerState == PL_NORMAL)) {
        pSVar1->destX = (pSVar1->x).s.i;
        pSVar1->destY = (pSVar1->y).s.i;
      }
      team->passToPlayerPtr = pSVar5;
    }
    return;
  }
  team->ballX = ballSprite.x.s.i;
  team->ballY = ballSprite.y.s.i;
  pSVar5 = penaltyShooterSprite;
  if (((team->ballInPlay != 0) && (team->playerSwitchTimer == 0)) &&
     ((team->passingToPlayer == 0 || (team->passToPlayerPtr == (Sprite *)0x0)))) {
    if (playingPenalties == 0) {
      pSVar5 = (Sprite *)0x0;
      uVar2 = 0xffffffff;
      sVar3 = 10;
      ppSVar4 = team->spritesTable;
      do {
        pSVar1 = *ppSVar4;
        if (((pSVar1->sentAway == 0) &&
            (((team->ballOutOfPlayOrKeeper != 0 || (pSVar1->playerOrdinal != 1)) &&
             (pSVar1 != team->controlledPlayer)))) &&
           (((pSVar1 != team->passingKickingPlayer && (pSVar1->playerState == 0)) &&
            (pSVar1->ballDistance < uVar2)))) {
          uVar2 = pSVar1->ballDistance;
          pSVar5 = pSVar1;
        }
        sVar3 = sVar3 + -1;
        ppSVar4 = ppSVar4 + 1;
      } while (sVar3 != -1);
      if (pSVar5 == (Sprite *)0x0) {
        return;
      }
    }
    else {
      if (gameStatePl != ST_PENALTIES) {
        return;
      }
      team->ballInPlay = 0;
    }
    team->passToPlayerPtr = pSVar5;
  }
  return;
}


// --- UpdateGameTimersAndCameraBreakMode @ 00111e7e ---

void __usercall UpdateGameTimersAndCameraBreakMode(TeamGeneralInfo *team)

{
  Sprite *player;
  byte bVar1;
  word wVar2;
  short sVar3;
  Sprite **ppSVar4;
  TeamGeneralInfo *pTVar5;
  bool bVar6;
  bool bVar7;
  
  if (((playingPenalties != 0) && (gameState != ST_PENALTIES)) &&
     (penaltiesTimer = penaltiesTimer + 1, penaltiesTimer == 100)) {
    NextPenalty();
  }
  if (gameStatePl == ST_GAME_IN_PROGRESS) {
    inGameCounter = lastFrameTicks + inGameCounter;
  }
  else {
    gameNotInProgressCounterWriteOnly = gameNotInProgressCounterWriteOnly + 1;
    stoppageTimerTotal = lastFrameTicks + stoppageTimerTotal;
    if (gameStatePl == ST_WAITING_ON_PLAYER) {
      stoppageTimerActive = lastFrameTicks + stoppageTimerActive;
      if ((lastTeamPlayedBeforeBreak->playerNumber == 0) && (0x2ed < stoppageTimerActive)) {
        PrepareForInitialKick();
        initialKickWriteOnlyTicks = initialKickWriteOnlyTicks + 1;
      }
    }
    else {
      if (((ST_STARTING_GAME - 1 < gameState) && (gameState < ST_GAME_ENDED + 1)) &&
         (((topTeamData.firePressed != 0 || (bottomTeamData.firePressed != 0)) ||
          ((((topTeamData.playerCoachNumber == 1 || (bottomTeamData.playerCoachNumber == 1)) &&
            (Player1StatusProc(), pl1Fire != 0)) ||
           ((((topTeamData.playerCoachNumber == 2 || (bottomTeamData.playerCoachNumber == 2)) &&
             (Player2StatusProc(), pl2Fire != 0)) ||
            ((gameState == ST_RESULT_AFTER_THE_GAME &&
             ((Player1StatusProc(), pl1Fire != 0 || (Player2StatusProc(), pl2Fire != 0)))))))))))) {
        if (gameState == ST_RESULT_ON_HALFTIME) {
          resultTimer = -resultTimer;
          timeVar = -timeVar;
          statsTimer = -statsTimer;
          SetCameraMovingToShowerState();
          PrepareForInitialKick();
          stoppageEventTimer = 0;
          return;
        }
        if (gameState == ST_RESULT_AFTER_THE_GAME) {
          playGame = 0;
          resultTimer = -resultTimer;
          timeVar = -timeVar;
          statsTimer = -statsTimer;
          stoppageEventTimer = 0;
          return;
        }
        if (gameState == ST_STARTING_GAME) {
          showFansCounter = 0;
          PrepareForInitialKick();
          stoppageEventTimer = 0;
          return;
        }
        if (gameState == ST_CAMERA_GOING_TO_SHOWERS) {
          PrepareForInitialKick();
          stoppageEventTimer = 0;
          return;
        }
      }
      pTVar5 = lastTeamPlayedBeforeBreak;
      if (stoppageEventTimer != 0) {
        if ((word)(stoppageEventTimer - lastFrameTicks) != 0 &&
            (short)lastFrameTicks <= (short)stoppageEventTimer) {
          stoppageEventTimer = stoppageEventTimer - lastFrameTicks;
          return;
        }
        stoppageEventTimer = 0;
      }
      if (gameStatePl == ST_STOPPED) {
        if (gameState == ST_RESULT_ON_HALFTIME) {
          resultTimer = -resultTimer;
          timeVar = -timeVar;
          statsTimer = -statsTimer;
          SetCameraMovingToShowerState();
        }
        else if (gameState == ST_RESULT_AFTER_THE_GAME) {
          resultTimer = -resultTimer;
          timeVar = -timeVar;
          statsTimer = -statsTimer;
          playGame = 0;
        }
        else if (gameState == ST_STARTING_GAME) {
          PrepareForInitialKick();
        }
        else if (gameState == ST_CAMERA_GOING_TO_SHOWERS) {
          PrepareForInitialKick();
        }
        else if (gameState == ST_FIRST_HALF_ENDED) {
          FirstHalfJustEnded();
        }
        else if (gameState == ST_GOING_TO_HALFTIME) {
          resultTimer = -resultTimer;
          timeVar = -timeVar;
          statsTimer = -statsTimer;
          GoToHalftime();
        }
        else if (gameState == ST_GAME_ENDED) {
          PlayersLeavingPitch();
        }
        else if (gameState == ST_PLAYERS_GOING_TO_SHOWER) {
          GameOver();
        }
        else if (gameState == ST_FIRST_EXTRA_STARTING) {
          PrepareForInitialKick();
        }
        else if (gameState == ST_FIRST_EXTRA_ENDED) {
          PrepareForInitialKick();
        }
        else {
          gameStatePl = gameState;
          if (((gameState == ST_KEEPER_HOLDS_BALL) && (g_inSubstitutesMenu == 0)) &&
             (g_cameraLeavingSubsTimer == 0)) {
            timeVar = 31000;
          }
          breakCameraMode = 0;
        }
      }
      else if ((g_inSubstitutesMenu == 0) && (g_waitForPlayerToGoInTimer == 0)) {
        if (breakCameraMode == 0) {
          if ((((ballSprite.deltaX.raw == 0) && (ballSprite.deltaY.raw == 0)) &&
              (breakCameraMode = 1, gameState != ST_KEEPER_HOLDS_BALL)) &&
             (stoppageEventTimer = 0x32, goalCameraMode != 0)) {
            stoppageEventTimer = 0x4b;
            return;
          }
        }
        else if (breakCameraMode == 1) {
          if ((playingPenalties == 0) && (goalCameraMode != 0)) {
            if (g_autoSaveHighlights != 0) {
              saveHighlightScene = 1;
            }
            if (g_autoReplays != 0) {
              userRequestedReplay = 0;
              instantReplayFlag = 1;
            }
          }
          currentScorer = (Sprite *)0x0;
          if ((playingPenalties == 0) || (gameState == ST_PENALTIES)) {
            if (gameState != ST_KEEPER_HOLDS_BALL) {
              SetBallPosition(foulXCoordinate,foulYCoordinate);
            }
            breakCameraMode = 2;
            return;
          }
        }
        else if (breakCameraMode == 2) {
          if ((whichCard == 0) && (cameraCoordinatesValid != 0)) {
            goalScored = 0;
            if (gameState == ST_KEEPER_HOLDS_BALL) {
              gameStatePl = 0x66;
              inGameCounter = 0;
              breakState = gameState;
            }
            if (topTeamData.resetControls == 0) {
              sVar3 = 10;
              ppSVar4 = topTeamData.spritesTable;
              do {
                (*ppSVar4)->destReachedState = 1;
                sVar3 = sVar3 + -1;
                ppSVar4 = ppSVar4 + 1;
              } while (sVar3 != -1);
            }
            if (bottomTeamData.resetControls == 0) {
              sVar3 = 10;
              ppSVar4 = bottomTeamData.spritesTable;
              do {
                (*ppSVar4)->destReachedState = 1;
                sVar3 = sVar3 + -1;
                ppSVar4 = ppSVar4 + 1;
              } while (sVar3 != -1);
            }
            if (gameState == ST_KEEPER_HOLDS_BALL) {
              goalie1Sprite.destReachedState = 3;
              goalie2Sprite.destReachedState = 3;
            }
            breakCameraMode = 4;
            return;
          }
        }
        else {
          if (breakCameraMode == 4) {
            breakCameraMode = 3;
            return;
          }
          if (breakCameraMode == 3) {
            if ((refState == 0) && (injuriesForever[0] == 0)) {
              sVar3 = 0x15;
              ppSVar4 = team1SpritesTable;
              while( true ) {
                if (((((gameState == ST_PLAYERS_TO_INITIAL_POSITIONS) || (gameState == ST_PENALTY))
                     || (gameState == ST_PENALTIES)) || ((*ppSVar4)->onScreen != 0)) &&
                   ((*ppSVar4)->destReachedState != 3)) break;
                sVar3 = sVar3 + -1;
                ppSVar4 = ppSVar4 + 1;
                if (sVar3 == -1) {
                  runSlower = 0;
                  if (goalCameraMode != 0) {
                    ResetAnimatedPatternsForBothTeams();
                  }
                  breakCameraMode = 5;
                  return;
                }
              }
            }
          }
          else {
            if (breakCameraMode == 5) {
              whichCard = 0;
              bookedPlayer = (Sprite *)0x0;
              breakCameraMode = 6;
              return;
            }
            if (breakCameraMode == 6) {
              ballOutOfGameTimer = 0;
              if (gameState != ST_KEEPER_HOLDS_BALL) {
                timeVar = 31000;
              }
              breakCameraMode = 7;
              return;
            }
            if (breakCameraMode == 7) {
              lastTeamPlayedBeforeBreak->ballInPlay = 1;
              ballOutOfGameTimer = ballOutOfGameTimer + 1;
              if (ballOutOfGameTimer < 500) {
                if (pTVar5->controlledPlayer != (Sprite *)0x0) {
                  player = pTVar5->controlledPlayer;
                  if (player->playerState == PL_THROW_IN) {
                    SetPlayerAnimationTable(&aboutToThrowInAnimTable,player);
                  }
                  else {
                    SetPlayerAnimationTable(&playerNormalStandingAnimTable,player);
                  }
                  pTVar5->ballOutOfPlay = 1;
                  breakCameraMode = 8;
                  if ((gameState != ST_KEEPER_HOLDS_BALL) && (g_inSubstitutesMenu == 0)) {
                    resultTimer = 31000;
                    return;
                  }
                }
              }
              else {
                deadCameraBreakVar01 = deadCameraBreakVar01 + 1;
                deadCameraBreakVar02 = gameStatePl;
                deadCameraBreakVar03 = gameState;
                CheckIfGoalkeeperClaimedTheBall();
                deadCameraBreakVar04 = deadCameraBreakVar04 + 1;
              }
            }
            else {
              if (breakCameraMode != 8) {
                panicReasonCode = 0xb;
                PanicHaltLoop();
                UpdateGameTimersAndCameraBreakMode(pTVar5);
                if (fireBlocked == 0) {
                  pTVar5 = &topTeamData;
                  if ((pl2Direction & 1) == 0) {
                    pTVar5 = &bottomTeamData;
                  }
                  UpdateControlledPlayer(pTVar5);
                  UpdatePlayerBeingPassedTo(pTVar5);
                  if (pTVar5->playerNumber != 0) {
                    if (pTVar5->playerNumber == 2) {
                      Player2StatusProc();
                      pTVar5->currentAllowedDirection = pl2Direction;
                      pTVar5->direction = pl2Direction;
                      pTVar5->fireThisFrame = pl2ShortFire;
                      pTVar5->firePressed = pl2Fire;
                      bVar1 = pl2Fire;
                      pTVar5->firePressed = pl2Fire;
                      if (bVar1 == 0) {
                        pTVar5->fireCounter = 0;
                      }
                      else {
                        pTVar5->fireCounter = pTVar5->fireCounter + 1;
                      }
                      wVar2 = pl2FireCounter;
                      bVar6 = (short)pl2FireCounter < 0;
                      bVar7 = pl2FireCounter != 0;
                      pTVar5->quickFire = -bVar7;
                      pTVar5->normalFire = -bVar7;
                      if (bVar7) {
                        if (bVar6) {
                          pTVar5->quickFire = 0;
                          if (pTVar5->normalFire != 0) {
                            pTVar5->normalFire = 0;
                          }
                          pTVar5->quickFire = 0;
                          pTVar5->normalFire = -((short)wVar2 < -4);
                          if ((short)wVar2 < -4) {
                            pl2FireCounter = 0;
                          }
                        }
                        else {
                          pTVar5->quickFire = -((short)wVar2 < 5);
                          pTVar5->normalFire = -(4 < (short)wVar2);
                          pl2FireCounter = 0;
                        }
                      }
                      if (pTVar5->resetControls != 0) {
                        return;
                      }
                      if (g_inSubstitutesMenu != 0) {
                        pTVar5->currentAllowedDirection = 0xffff;
                        pTVar5->quickFire = 0;
                        pTVar5->normalFire = 0;
                        pTVar5->firePressed = 0;
                        pTVar5->fireThisFrame = 0;
                        pTVar5->fireCounter = 0;
                      }
                      UpdatePlayers(pTVar5);
                      if (pTVar5->headerOrTackle == 0) {
                        return;
                      }
                      pTVar5->headerOrTackle = 0;
                      pl2FireCounter = 0;
                      return;
                    }
                    Player1StatusProc();
                    pTVar5->currentAllowedDirection = pl1Direction;
                    pTVar5->direction = pl1Direction;
                    pTVar5->fireThisFrame = pl1ShortFire;
                    bVar1 = pl1Fire;
                    pTVar5->firePressed = pl1Fire;
                    if (bVar1 == 0) {
                      pTVar5->fireCounter = 0;
                    }
                    else {
                      pTVar5->fireCounter = pTVar5->fireCounter + 1;
                    }
                    wVar2 = pl1FireCounter;
                    bVar6 = (short)pl1FireCounter < 0;
                    bVar7 = pl1FireCounter != 0;
                    pTVar5->quickFire = -bVar7;
                    pTVar5->normalFire = -bVar7;
                    if (bVar7) {
                      if (bVar6) {
                        pTVar5->quickFire = 0;
                        if (pTVar5->normalFire != 0) {
                          pTVar5->normalFire = 0;
                        }
                        pTVar5->quickFire = 0;
                        pTVar5->normalFire = -((short)wVar2 < -4);
                        if ((short)wVar2 < -4) {
                          pl1FireCounter = 0;
                        }
                      }
                      else {
                        pTVar5->quickFire = -((short)wVar2 < 5);
                        pTVar5->normalFire = -(4 < (short)wVar2);
                        pl1FireCounter = 0;
                      }
                    }
                  }
                  if (pTVar5->resetControls == 0) {
                    if (g_inSubstitutesMenu != 0) {
                      pTVar5->currentAllowedDirection = 0xffff;
                      pTVar5->quickFire = 0;
                      pTVar5->normalFire = 0;
                      pTVar5->firePressed = 0;
                      pTVar5->fireThisFrame = 0;
                      pTVar5->fireCounter = 0;
                    }
                    UpdatePlayers(pTVar5);
                    if (pTVar5->headerOrTackle != 0) {
                      pTVar5->headerOrTackle = 0;
                      pl1FireCounter = 0;
                      return;
                    }
                  }
                }
                else {
                  Player1StatusProc();
                  if ((pl1Fire == 0) && (Player2StatusProc(), pl2Fire == 0)) {
                    fireBlocked = 0;
                    pl1FireCounter = 0;
                    pl2FireCounter = 0;
                  }
                }
                return;
              }
              stoppageAuxFlag = 0;
              if (gameState != ST_KEEPER_HOLDS_BALL) {
                PlayRefereeWhistleSample();
              }
              goalCameraMode = 0;
              gameStatePl = ST_WAITING_ON_PLAYER;
              inGameCounter = 0;
              breakState = gameState;
            }
          }
        }
      }
    }
  }
  return;
}


// --- UpdateAndApplyTeamControls @ 00112508 ---

/* Sets control related fields in team structure. Called once per frame.
   Handles one team per frame (next team in next frame). */

void __usercall UpdateAndApplyTeamControls(void)

{
  byte bVar1;
  word wVar2;
  TeamGeneralInfo *unaff_A6;
  TeamGeneralInfo *team;
  bool bVar3;
  bool bVar4;
  
  UpdateGameTimersAndCameraBreakMode(unaff_A6);
  if (fireBlocked == 0) {
    team = &topTeamData;
    if ((pl2Direction & 1) == 0) {
      team = &bottomTeamData;
    }
    UpdateControlledPlayer(team);
    UpdatePlayerBeingPassedTo(team);
    if (team->playerNumber != 0) {
      if (team->playerNumber == 2) {
        Player2StatusProc();
        team->currentAllowedDirection = pl2Direction;
        team->direction = pl2Direction;
        team->fireThisFrame = pl2ShortFire;
        team->firePressed = pl2Fire;
        bVar1 = pl2Fire;
        team->firePressed = pl2Fire;
        if (bVar1 == 0) {
          team->fireCounter = 0;
        }
        else {
          team->fireCounter = team->fireCounter + 1;
        }
        wVar2 = pl2FireCounter;
        bVar3 = (short)pl2FireCounter < 0;
        bVar4 = pl2FireCounter != 0;
        team->quickFire = -bVar4;
        team->normalFire = -bVar4;
        if (bVar4) {
          if (bVar3) {
            team->quickFire = 0;
            if (team->normalFire != 0) {
              team->normalFire = 0;
            }
            team->quickFire = 0;
            team->normalFire = -((short)wVar2 < -4);
            if ((short)wVar2 < -4) {
              pl2FireCounter = 0;
            }
          }
          else {
            team->quickFire = -((short)wVar2 < 5);
            team->normalFire = -(4 < (short)wVar2);
            pl2FireCounter = 0;
          }
        }
        if (team->resetControls != 0) {
          return;
        }
        if (g_inSubstitutesMenu != 0) {
          team->currentAllowedDirection = 0xffff;
          team->quickFire = 0;
          team->normalFire = 0;
          team->firePressed = 0;
          team->fireThisFrame = 0;
          team->fireCounter = 0;
        }
        UpdatePlayers(team);
        if (team->headerOrTackle == 0) {
          return;
        }
        team->headerOrTackle = 0;
        pl2FireCounter = 0;
        return;
      }
      Player1StatusProc();
      team->currentAllowedDirection = pl1Direction;
      team->direction = pl1Direction;
      team->fireThisFrame = pl1ShortFire;
      bVar1 = pl1Fire;
      team->firePressed = pl1Fire;
      if (bVar1 == 0) {
        team->fireCounter = 0;
      }
      else {
        team->fireCounter = team->fireCounter + 1;
      }
      wVar2 = pl1FireCounter;
      bVar3 = (short)pl1FireCounter < 0;
      bVar4 = pl1FireCounter != 0;
      team->quickFire = -bVar4;
      team->normalFire = -bVar4;
      if (bVar4) {
        if (bVar3) {
          team->quickFire = 0;
          if (team->normalFire != 0) {
            team->normalFire = 0;
          }
          team->quickFire = 0;
          team->normalFire = -((short)wVar2 < -4);
          if ((short)wVar2 < -4) {
            pl1FireCounter = 0;
          }
        }
        else {
          team->quickFire = -((short)wVar2 < 5);
          team->normalFire = -(4 < (short)wVar2);
          pl1FireCounter = 0;
        }
      }
    }
    if (team->resetControls == 0) {
      if (g_inSubstitutesMenu != 0) {
        team->currentAllowedDirection = 0xffff;
        team->quickFire = 0;
        team->normalFire = 0;
        team->firePressed = 0;
        team->fireThisFrame = 0;
        team->fireCounter = 0;
      }
      UpdatePlayers(team);
      if (team->headerOrTackle != 0) {
        team->headerOrTackle = 0;
        pl1FireCounter = 0;
        return;
      }
    }
  }
  else {
    Player1StatusProc();
    if ((pl1Fire == 0) && (Player2StatusProc(), pl2Fire == 0)) {
      fireBlocked = 0;
      pl1FireCounter = 0;
      pl2FireCounter = 0;
    }
  }
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


// --- SendPlayerAway @ 00112bc6 ---

/* in:
        A1 -> booked player
        A6 -> team data
   
   Called when player gets red card. */

void __usercall SendPlayerAway(Sprite *player,TeamGeneralInfo *team)

{
  if ((word)(player->playerOrdinal - 1) == team->inGameTeamPtr->markedPlayer) {
    team->inGameTeamPtr->markedPlayer = 0xffff;
  }
  player->cards = 0xffff;
  player->sentAway = 1;
  player->destX = 0xffec;
  player->destY = 0x1c1;
  return;
}


// --- ShouldGoalkeeperDive @ 00112bf6 ---

short __usercall ShouldGoalkeeperDive(Sprite *goalie,Sprite *ball,TeamGeneralInfo *team)

{
  short sVar1;
  ushort uVar2;
  word wVar3;
  ushort uVar4;
  
  wVar3 = kKeeperPenaltySaveDistanceFar;
  sVar1 = (ball->y).s.i - (goalie->y).s.i;
  if (team != &topTeamData) {
    sVar1 = -sVar1;
  }
  if (sVar1 < 0) {
    if (-0xb < sVar1) {
      return 1;
    }
  }
  else if (-1 < sVar1) {
    if ((playingPenalties == 0) && (penalty == 0)) {
      if (sVar1 <= kKeeperSaveDistance) {
        uVar2 = (ball->y).s.i - (goalie->y).s.i;
        if ((short)uVar2 < 0) {
          uVar2 = -uVar2;
        }
        uVar2 = GetFramesNeededToCoverDistance((ball->deltaY).raw,uVar2);
        if (uVar2 != 0) {
          uVar4 = ballDefensiveX - (goalie->x).s.i;
          if ((short)uVar4 < 0) {
            uVar4 = -uVar4;
          }
          uVar4 = GetFramesNeededToCoverDistance((goalie->deltaX).raw,uVar4);
          if ((uVar4 != 0) && (uVar2 < uVar4)) {
            uVar4 = ballDefensiveX - (goalie->x).s.i;
            if ((short)uVar4 < 0) {
              uVar4 = -uVar4;
            }
            dseg_114EB0 = dseg_114EB0 + 1;
            uVar4 = GetFramesNeededToCoverDistance
                              (*(int *)((int)kGoalkeeperDiveDeltas +
                                       (int)(short)(*(short *)((int)team->shotChanceTable->
                                                                    index_dseg_11061B +
                                                              (int)(short)((currentGameTick & 0x3c)
                                                                          >> 1)) << 2)),uVar4);
            if ((uVar4 != 0) && (uVar2 <= uVar4)) {
              return 1;
            }
          }
        }
      }
    }
    else {
      uVar2 = Rand();
      if ((uVar2 & 0x18) != 0) {
        wVar3 = kKeeperPenaltySaveDistanceNear[0];
      }
      if (sVar1 <= (short)wVar3) {
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
  if (player->ballDistance < 0x81) {
    player->speed = kGoalkeeperNearJumpSpeed;
  }
  else {
    player->speed = kGoalkeeperFarJumpSpeed;
    if ((farJumpVariant != 0) &&
       (player->speed = kGoalkeeperFarJumpSlowerSpeed, farJumpVariant != 1)) {
      player->speed = kGoalkeeperNearJumpSpeed + (currentGameTick & 0xff);
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


// --- NextPenalty @ 00113dec ---

/* Next penalty is about to be shot. Check if penalties are over. If not,
   initialize globals for penalty, set penaltyShooterSprite.
   (penalties after the game) */

void __usercall NextPenalty(void)

{
  word wVar1;
  word *pwVar2;
  
  if ((ushort)(team2PenaltyAttempts + team1PenaltyAttempts) < 10) {
    if ((team2PenaltyGoals <= (ushort)(team1PenaltyGoals + (5 - team1PenaltyAttempts))) &&
       (team1PenaltyGoals <= (ushort)(team2PenaltyGoals + (5 - team2PenaltyAttempts))))
    goto setup_next_penalty_round;
  }
  else if ((team1PenaltyAttempts != team2PenaltyAttempts) ||
          (team1PenaltyGoals == team2PenaltyGoals)) {
setup_next_penalty_round:
    ballSprite.z.s.i = 0;
    teamPlayingUp = 3 - teamPlayingUp;
    teamStarting = 3 - teamStarting;
    hideBall = 0;
    InitTeamsData();
    gameState = ST_PENALTIES;
    breakCameraMode = 0xffff;
    cameraDirection = 0;
    playerTurnFlags = 0x83;
    foulXCoordinate = 0x150;
    foulYCoordinate = 0xbb;
    gameStatePl = ST_STOPPED;
    gameNotInProgressCounterWriteOnly = 0;
    lastTeamPlayedBeforeBreak = &bottomTeamData;
    stoppageTimerTotal = 0;
    stoppageTimerActive = 0;
    StopAllPlayers();
    cameraXVelocity = 0;
    cameraYVelocity = 0;
    penaltiesTimer = 0;
    pwVar2 = &team1PenaltyShooterIndex;
    if (bottomTeamData.teamNumber != 1) {
      pwVar2 = &team2PenaltyShooterIndex;
    }
    wVar1 = *pwVar2;
    *pwVar2 = wVar1 - 1;
    if ((word)(wVar1 - 1) == 0) {
      *pwVar2 = 10;
    }
    penaltyShooterSprite =
         *(Sprite **)((int)bottomTeamData.spritesTable + (int)(short)(*pwVar2 << 2));
    if (bottomTeamData.teamNumber == 1) {
      team1PenaltyAttempts = team1PenaltyAttempts + 1;
      return;
    }
    team2PenaltyAttempts = team2PenaltyAttempts + 1;
    return;
  }
  playingPenalties = 0;
  statsTeam1Goals = savedTeam1Goals;
  statsTeam2Goals = savedTeam2Goals;
  winningTeamPtr = &topTeamInGame;
  if (team1PenaltyGoals <= team2PenaltyGoals) {
    winningTeamPtr = &bottomTeamInGame;
  }
  EndOfGame();
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


// --- SetCameraMovingToShowerState @ 001140a2 ---

/* Called when first half is over. */

void __usercall SetCameraMovingToShowerState(void)

{
  halfNumber = 2;
  teamPlayingUp = 3 - teamPlayingUp;
  teamStarting = 3 - teamStarting;
  SetBallPosition(0x688,0x1c1);
  hideBall = 0;
  InitTeamsData();
  stoppageEventTimer = 100;
  gameState = ST_CAMERA_GOING_TO_SHOWERS;
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
  if (playGame != 0) {
    PlayPenaltySample();
    sfxQueueWriteIdx = 0x15e;
  }
  InitPlayersBeforeEnteringPitch();
  return;
}


// --- EndFirstHalf @ 00114150 ---

void __usercall EndFirstHalf(void)

{
  hideBall = 0;
  stoppageEventTimer = 100;
  gameState = ST_FIRST_HALF_ENDED;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  ResetBothTeamsPlayerPassingKicking();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  if ((playGame != 0) && (goalCounter == 0)) {
    endOfHalfWriteOnly = 0x19;
  }
  return;
}


// --- FirstHalfJustEnded @ 001141c4 ---

void __usercall FirstHalfJustEnded(void)

{
  hideBall = 0;
  stoppageEventTimer = 0xfa;
  gameState = ST_GOING_TO_HALFTIME;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- EndOfGame @ 00114220 ---

void __usercall EndOfGame(void)

{
  hideBall = 0;
  stoppageEventTimer = 0x96;
  gameState = ST_GAME_ENDED;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  ResetBothTeamsPlayerPassingKicking();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  if ((playGame != 0) && (goalCounter == 0)) {
    endOfHalfWriteOnly = 0x19;
  }
  return;
}


// --- PlayersLeavingPitch @ 00114294 ---

void __usercall PlayersLeavingPitch(void)

{
  hideBall = 0;
  stoppageEventTimer = 0xfa;
  gameState = ST_PLAYERS_GOING_TO_SHOWER;
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
  return;
}


// --- GoToHalftime @ 001142f0 ---

void __usercall GoToHalftime(void)

{
  SetBallPosition(0x688,0x1c1);
  resultTimer = 30000;
  timeVar = 32000;
  stoppageEventTimer = 700;
  gameState = ST_RESULT_ON_HALFTIME;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- GameOver @ 00114364 ---

void __usercall GameOver(void)

{
  FadeOutToBlack();
  ReplayUpdateCameraAndSwapBuffers();
  UpdatePlanePtrsAndBlitParams();
  SetBallPosition(0x688,0x1c1);
  resultTimer = 30000;
  timeVar = 32000;
  stoppageEventTimer = 0x5dc;
  gameState = ST_RESULT_AFTER_THE_GAME;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- StartFirstExtraTime @ 001143fc ---

void __usercall StartFirstExtraTime(void)

{
  ushort uVar1;
  
  halfNumber = 1;
  uVar1 = Rand();
  teamPlayingUp = (uVar1 & 1) + 1;
  uVar1 = Rand();
  teamStarting = (uVar1 & 1) + 1;
  hideBall = 0;
  InitTeamsData();
  stoppageEventTimer = 100;
  gameState = ST_FIRST_EXTRA_STARTING;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  if (teamStarting != teamPlayingUp) {
    lastTeamPlayedBeforeBreak = &bottomTeamData;
  }
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- EndFirstExtraTime @ 00114492 ---

void __usercall EndFirstExtraTime(void)

{
  halfNumber = 2;
  teamPlayingUp = 3 - teamPlayingUp;
  teamStarting = 3 - teamStarting;
  hideBall = 0;
  InitTeamsData();
  stoppageEventTimer = 100;
  gameState = ST_FIRST_EXTRA_ENDED;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  cameraDirection = 0xffff;
  lastTeamPlayedBeforeBreak = &topTeamData;
  if (teamStarting != teamPlayingUp) {
    lastTeamPlayedBeforeBreak = &bottomTeamData;
  }
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- PrepareForInitialKick @ 00114520 ---

void __usercall PrepareForInitialKick(void)

{
  SetBallPosition(0x150,0x1c1);
  lastTeamPlayedBeforeBreak = &topTeamData;
  cameraDirection = 4;
  playerTurnFlags = 0x7c;
  if (teamStarting != teamPlayingUp) {
    lastTeamPlayedBeforeBreak = &bottomTeamData;
    cameraDirection = 0;
    playerTurnFlags = 199;
  }
  gameState = ST_PLAYERS_TO_INITIAL_POSITIONS;
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  foulXCoordinate = 0x150;
  foulYCoordinate = 0x1c1;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- CheckIfGoalkeeperClaimedTheBall @ 001145b2 ---

void __usercall CheckIfGoalkeeperClaimedTheBall(void)

{
  Sprite *unaff_A2;
  
  if (gameState == ST_KEEPER_HOLDS_BALL) {
    GoalkeeperClaimedTheBall
              (*lastTeamPlayedBeforeBreak->spritesTable,unaff_A2,lastTeamPlayedBeforeBreak);
    return;
  }
  breakCameraMode = 0xffff;
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
  return;
}


// --- ResetBothTeamsPlayerPassingKicking @ 00114608 ---

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __usercall ResetBothTeamsPlayerPassingKicking(void)

{
  lastCameraDirection = cameraDirection;
  lastPlayerTurnFlags = _playerTurnFlags;
  ResetPlayerPassingKicking(&topTeamData);
  ResetPlayerPassingKicking(&bottomTeamData);
  bottomTeamData.goalkeeperPlaying = 0;
  return;
}


// --- ResetPlayerPassingKicking @ 00114636 ---

/* in:
        A0 -> team data */

void __usercall ResetPlayerPassingKicking(TeamGeneralInfo *team)

{
  team->ballInPlay = 0;
  team->ballOutOfPlay = 0;
  team->controlledPlayer = (Sprite *)0x0;
  team->passToPlayerPtr = (Sprite *)0x0;
  team->passingBall = 0;
  team->passingToPlayer = 0;
  team->playerSwitchTimer = 0;
  team->passingKickingPlayer = (Sprite *)0x0;
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


// --- CheckIfBallOutOfPlay @ 00114700 ---

void __usercall CheckIfBallOutOfPlay(void)

{
  word *pwVar1;
  undefined2 uVar2;
  ushort uVar3;
  short sVar4;
  word wVar5;
  undefined2 uVar6;
  word wVar7;
  byte bVar8;
  Sprite *pSVar9;
  TeamGeneralInfo *pTVar10;
  TeamGeneralInfo *pTVar11;
  
  uVar6 = ballSprite.y._0_2_;
  uVar2 = ballSprite.x.s.i;
  playRefereeWhistle = 0;
  if (gameStatePl == ST_STOPPED) goto exit_check_whistle;
  playRefereeWhistle = 1;
  if ((((short)ballSprite.z._0_2_ < 0x10) && (0x12d < (short)(ballSprite.x.s.i - 1))) &&
     ((short)(ballSprite.x.s.i - 1) < 0x16f)) {
    if ((short)ballSprite.y._0_2_ < 0x1c2) {
      pTVar10 = &bottomTeamData;
      pTVar11 = pTVar10;
      if (bottomTeamData.teamNumber == 1) goto setup_goal_replay_for_top_team;
setup_goal_replay_for_bottom_team:
      pTVar10 = pTVar11;
      pSVar9 = lastPlayerPlayed;
      if ((lastKeeperPlayed != (Sprite *)0x0) &&
         ((lastPlayerPlayed == &goalie1Sprite || (lastPlayerPlayed == &goalie2Sprite)))) {
        pSVar9 = lastKeeperPlayed;
      }
      statsTeam1GoalsCopy2 = statsTeam1Goals;
      statsTeam2GoalsCopy2 = statsTeam2Goals;
      GoalScored(2,pSVar9);
      teamNumThatScored = 2;
    }
    else {
      pTVar10 = &topTeamData;
      pTVar11 = &topTeamData;
      if (topTeamData.teamNumber == 2) goto setup_goal_replay_for_bottom_team;
setup_goal_replay_for_top_team:
      pSVar9 = lastPlayerPlayed;
      if ((lastKeeperPlayed != (Sprite *)0x0) &&
         ((lastPlayerPlayed == &goalie1Sprite || (lastPlayerPlayed == &goalie2Sprite)))) {
        pSVar9 = lastKeeperPlayed;
      }
      statsTeam1GoalsCopy2 = statsTeam1Goals;
      statsTeam2GoalsCopy2 = statsTeam2Goals;
      GoalScored(1,pSVar9);
      teamNumThatScored = 1;
    }
    goalCameraMode = 1;
    teamScoredGamePtr = pTVar10->inGameTeamPtr;
    pTVar11 = pTVar10->opponentsTeam;
    if (pTVar11 == &topTeamData) {
      wVar7 = 4;
      bVar8 = 0x7c;
    }
    else {
      wVar7 = 0;
      bVar8 = 199;
    }
    teamScoredDataPtr = pTVar10;
    PlayGoalReplayBottomSample();
    playRefereeWhistle = 0;
    uVar3 = Rand();
    wVar5 = (uVar3 >> 1) + 100;
    if (playingPenalties == 0) {
      if (statsTeam1Goals == statsTeam2Goals) {
        sVar4 = 200;
      }
      else if (statsTeam1GoalsCopy2 == statsTeam2GoalsCopy2) {
        sVar4 = 300;
      }
      else if ((((word)(statsTeam1GoalsCopy2 - statsTeam2GoalsCopy2) == 1) ||
               ((word)(statsTeam1GoalsCopy2 - statsTeam2GoalsCopy2) == -1)) &&
              (((word)(statsTeam1Goals - statsTeam2Goals) == 2 ||
               ((word)(statsTeam1Goals - statsTeam2Goals) == -2)))) {
        sVar4 = 200;
      }
      else {
        sVar4 = 100;
      }
      uVar3 = Rand();
      wVar5 = uVar3 + sVar4;
    }
    patternsGoalCounter = 1;
    foulXCoordinate = 0x150;
    uVar6 = 0x1c1;
    gameState = ST_PLAYERS_TO_INITIAL_POSITIONS;
    breakCameraMode = 0xffff;
    goalCounter = wVar5;
  }
  else {
    if (((0x2ff < ballSprite.speed) && (0x121 < (short)ballSprite.x.s.i)) &&
       (((short)ballSprite.x.s.i < 0x17e && ((short)(ballSprite.z.s.i + 2) < 0x1a)))) {
      PlayGoalKickOffSample();
      playRefereeWhistle = 0;
    }
    pTVar11 = &topTeamData;
    if ((short)uVar6 < 0x81) {
      if (lastTeamPlayed == &topTeamData) {
        pTVar11 = &bottomTeamData;
        if ((short)uVar2 < 0x150) {
set_corner_left_upper:
          foulXCoordinate = 0x56;
          uVar6 = 0x86;
          wVar7 = 2;
          bVar8 = 0x1c;
          gameState = ST_CORNER_LEFT;
        }
        else {
set_corner_right_upper:
          foulXCoordinate = 0x249;
          uVar6 = 0x86;
          wVar7 = 6;
          bVar8 = 0x70;
          gameState = ST_CORNER_RIGHT;
        }
commit_corner_left_upper:
        breakCameraMode = 0xffff;
        pwVar1 = &pTVar11->teamStatsPtr->cornersWon;
        *pwVar1 = *pwVar1 + 1;
      }
      else {
        if ((short)uVar2 < 0x150) {
setup_goal_out_right_top_half:
          foulXCoordinate = 0x114;
          uVar6 = 0x9a;
          wVar7 = 4;
          bVar8 = 0x7c;
          gameState = ST_GOAL_OUT_RIGHT;
        }
        else {
setup_goal_out_left_top_half:
          foulXCoordinate = 0x18c;
          uVar6 = 0x9a;
          wVar7 = 4;
          bVar8 = 0x7c;
          gameState = ST_GOAL_OUT_LEFT;
        }
commit_goal_out_common:
        breakCameraMode = 0xffff;
        if (pTVar11->playerNumber == 0) {
          bVar8 = bVar8 & 0xbb;
        }
        goalOut = 1;
      }
    }
    else {
      pTVar11 = &bottomTeamData;
      if (0x301 < (short)uVar6) {
        if (lastTeamPlayed != &bottomTeamData) {
          if ((short)uVar2 < 0x150) {
            if (forceLeftTeam == 1) goto setup_goal_out_right_top_half;
            foulXCoordinate = 0x114;
            uVar6 = 0x2e8;
            wVar7 = 0;
            bVar8 = 199;
            gameState = ST_GOAL_OUT_LEFT;
          }
          else {
            if (forceLeftTeam == 1) goto setup_goal_out_left_top_half;
            foulXCoordinate = 0x18c;
            uVar6 = 0x2e8;
            wVar7 = 0;
            bVar8 = 199;
            gameState = ST_GOAL_OUT_RIGHT;
            pTVar11 = &bottomTeamData;
          }
          goto commit_goal_out_common;
        }
        pTVar11 = &topTeamData;
        if ((short)uVar2 < 0x150) {
          if (forceLeftTeam == 1) goto set_corner_left_upper;
          foulXCoordinate = 0x56;
          uVar6 = 0x2fc;
          wVar7 = 2;
          bVar8 = 7;
          gameState = ST_CORNER_RIGHT;
        }
        else {
          if (forceLeftTeam == 1) goto set_corner_right_upper;
          foulXCoordinate = 0x249;
          uVar6 = 0x2fc;
          wVar7 = 6;
          bVar8 = 0xc1;
          gameState = ST_CORNER_LEFT;
          pTVar11 = &topTeamData;
        }
        goto commit_corner_left_upper;
      }
      pTVar11 = lastTeamPlayed->opponentsTeam;
      if ((short)uVar2 < 0x150) {
        foulXCoordinate = 0x51;
        wVar7 = 2;
        bVar8 = 0x1f;
        if (pTVar11 == &topTeamData) {
          if (0x155 < (short)uVar6) {
            if ((short)uVar6 < 0x22c) goto throwin_center_left;
            goto throwin_back_left;
          }
throwin_forward_left:
          gameState = ST_THROW_IN_FORWARD_LEFT;
        }
        else {
          if (0x155 < (short)uVar6) {
            if ((short)uVar6 < 0x22c) goto throwin_center_right;
            goto throwin_forward_right;
          }
throwin_back_right:
          gameState = ST_THROW_IN_BACK_RIGHT;
        }
      }
      else {
        foulXCoordinate = 0x24e;
        wVar7 = 6;
        bVar8 = 0xf1;
        if (pTVar11 == &topTeamData) {
          if ((short)uVar6 < 0x156) {
throwin_forward_right:
            gameState = ST_THROW_IN_FORWARD_RIGHT;
          }
          else {
            if (0x22b < (short)uVar6) goto throwin_back_right;
throwin_center_right:
            gameState = ST_THROW_IN_CENTER_RIGHT;
          }
        }
        else if ((short)uVar6 < 0x156) {
throwin_back_left:
          gameState = ST_THROW_IN_BACK_LEFT;
        }
        else {
          if (0x22b < (short)uVar6) goto throwin_forward_left;
throwin_center_left:
          gameState = ST_THROW_IN_CENTER_LEFT;
        }
      }
      breakCameraMode = 0xffff;
    }
  }
  if (forceLeftTeam == 1) {
    pTVar11 = &topTeamData;
  }
  gameStatePl = ST_STOPPED;
  gameNotInProgressCounterWriteOnly = 0;
  stoppageTimerTotal = 0;
  stoppageTimerActive = 0;
  lastTeamPlayedBeforeBreak = pTVar11;
  foulYCoordinate = uVar6;
  cameraDirection = wVar7;
  playerTurnFlags = bVar8;
  StopAllPlayers();
  cameraXVelocity = 0;
  cameraYVelocity = 0;
exit_check_whistle:
  if (playRefereeWhistle != 0) {
    PlayRefereeWhistleSample();
  }
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
            playerHadBall = (short)(teamInfo->opponentsTeam->playerHasBall != 0);
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
            if (pSVar2->playerState != PL_GOALIE_CATCHING_BALL) {
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
              }
              else if (pSVar2 != lastPlayerPlayed) {
                UpdateBallVariables(pSVar2,&ballSprite,teamInfo);
                uVar12 = CalculateBallNextGroundXYPositions(&ballSprite);
                pTVar10 = (TeamGame *)(uint)uVar12;
                if (((ballInGoalkeeperArea != 0) ||
                    (uVar12 = (currentGameTick & 0xf0) >> 4, pTVar10 = (TeamGame *)(uint)uVar12,
                    uVar12 < teamInfo->shotChanceTable->field_3A)) && (-1 < (short)ballNextGroundX))
                {
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
                if (gameStatePl == ST_GAME_IN_PROGRESS) {
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
                          if ((((teamInfo->controlledPlayer == (Sprite *)0x0) ||
                               (pTVar10 <= (TeamGame *)teamInfo->controlledPlayer->ballDistance)) &&
                              ((teamInfo->passToPlayerPtr == (Sprite *)0x0 ||
                               (pTVar10 <= (TeamGame *)teamInfo->passToPlayerPtr->ballDistance))))
                             && (((pSVar3 = teamInfo->opponentsTeam->controlledPlayer,
                                  pSVar3 == (Sprite *)0x0 ||
                                  (pTVar10 <= (TeamGame *)pSVar3->ballDistance)) &&
                                 ((pSVar3 = teamInfo->opponentsTeam->passToPlayerPtr,
                                  pSVar3 == (Sprite *)0x0 ||
                                  (pTVar10 <= (TeamGame *)pSVar3->ballDistance)))))) {
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
                  if ((teamInfo == lastTeamPlayed) && (playerHadBall == 0)) {
save_attempted_set_burst_speed:
                    pSVar2->speed = kGoalkeeperBurstSpeed[0];
chase_ball_set_dest_from_ball_flat:
                    pSVar2->destX = ballNotHighX;
                    pSVar2->destY = ballNotHighY;
                    goto goalie_can_catch_checks;
                  }
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
                    if (((teamInfo->opponentsTeam->playerHasBall == 0) &&
                        (teamInfo->playerHasBall == 0)) && (teamInfo->plVeryCloseToBall == 0)) {
                      if ((teamInfo == lastTeamPlayed) && (playerHadBall == 0))
                      goto save_attempted_set_burst_speed;
                      if (kShotAtGoalMinumumSpeed < ballSprite.speed) goto shot_at_goal;
                      if (((pSVar2->ballDistance < 0x1389) && (ballSprite.z.s.i < 0xd)) &&
                         (((int)ballSprite.deltaZ.raw < 0x8001 &&
                          (-0x8001 < (int)ballSprite.deltaZ.raw)))) goto mark_opponent_and_chase;
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
                  if ((((((short)teamInfo->goalkeeperSavedCommentTimer < 1) &&
                        (pSVar2->ballDistance < 0x81)) && (teamInfo->ballAbove17 == 0)) &&
                      (pTVar1 = teamInfo->opponentsTeam, pTVar1->firePressed != 0)) &&
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
                    GoalkeeperJumping(wVar13,(short)puVar18,(short)unaff_D3,pSVar2,&ballSprite,
                                      teamInfo);
                    teamInfo->passKickTimer = 0;
                    teamInfo->passingKickingPlayer = (Sprite *)0x0;
                  }
                  goto clamp_keeper_y_min;
                }
              }
              goto return_last_player_block;
            }
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
            if ((((((teamInfo != lastTeamPlayed) || (playerHadBall != 0)) &&
                  ((ballInGoalkeeperArea != 0 ||
                   ((currentGameTick & 0xf0) >> 4 < teamInfo->shotChanceTable->field_3A)))) &&
                 ((((-1 < (short)ballNextGroundX && ((short)ballDefensiveZ < 0x17)) &&
                   (0xc < (short)ballDefensiveZ)) &&
                  ((pSVar2->ballDistance < 0x845 &&
                   (sVar21 = (pSVar2->x).s.i - ballDefensiveX, sVar21 < 0xd)))))) && (-0xd < sVar21)
                ) && ((sVar21 = (pSVar2->y).s.i - ballDefensiveY, sVar21 < 0xd && (-0xd < sVar21))))
            {
              GoalkeeperCaughtTheBall(pSVar2,teamInfo);
            }
            if ((((pSVar2 != lastPlayerPlayed) && (pSVar2->ballDistance < 0x49)) &&
                (teamInfo->ballAbove17 == 0)) &&
               ((pSVar2->playerState == PL_GOALIE_CATCHING_BALL || (teamInfo->ball12To17 == 0)))) {
              pSVar2->destX = (pSVar2->x).s.i;
              pSVar2->destY = (pSVar2->y).s.i;
              if ((teamInfo == lastTeamPlayed) && (playerHadBall == 0)) {
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
return_last_player_block:
            uVar24 = (ushort)((uint)pbVar25 >> 0x10);
            if (gameStatePl != ST_GAME_IN_PROGRESS) goto not_controlled_player;
            if ((frameCount & 0xe) == 0) {
              pTVar10 = (TeamGame *)0x0;
              goto idle_player_common_path;
            }
          }
clamp_keeper_y_min:
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
                  if ((((((teamInfo->playerNumber != 0) && (pSVar2->playerOrdinal != 1)) &&
                        (teamInfo->fireThisFrame != 0)) &&
                       ((short)teamInfo->currentAllowedDirection < 0)) &&
                      (((teamInfo->plVeryCloseToBall != 0 || (teamInfo->plCloseToBall != 0)) ||
                       (teamInfo->plNotFarFromBall != 0)))) &&
                     (((teamInfo->ball8To12 != 0 || (teamInfo->ball12To17 != 0)) ||
                      (teamInfo->ballAbove17 != 0)))) {
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
                    playerHadBall = (short)(teamInfo->opponentsTeam->playerHasBall != 0);
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
                    if ((((((pSVar2->playerOrdinal == 1) || (teamInfo->fireThisFrame == 0)) ||
                          ((short)teamInfo->currentAllowedDirection < 0)) ||
                         (teamInfo->plNotFarFromBall == 0)) ||
                        ((teamInfo->ballLessEqual4 == 0 && (teamInfo->ball4To8 == 0)))) ||
                       ((teamInfo->passToPlayerPtr != (Sprite *)0x0 &&
                        (puVar18 = (undefined1 *)teamInfo->passToPlayerPtr->ballDistance,
                        puVar18 < (undefined1 *)pSVar2->ballDistance)))) {
                      uVar14 = (ushort)((uint)puVar18 >> 0x10);
                      if (((((pSVar2->playerOrdinal == 1) || (teamInfo->fireThisFrame == 0)) ||
                           ((short)teamInfo->currentAllowedDirection < 0)) ||
                          (((teamInfo->plVeryCloseToBall == 0 && (teamInfo->plCloseToBall == 0)) &&
                           (teamInfo->plNotFarFromBall == 0)))) ||
                         (((teamInfo->ball8To12 == 0 && (teamInfo->ball12To17 == 0)) &&
                          (teamInfo->ballAbove17 == 0)))) {
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
          if ((teamInfo->playerNumber != 0) &&
             ((((iVar5._0_2_ = teamInfo->longPass, iVar5._2_2_ = teamInfo->longSpinPass, iVar5 != 0
                || (teamInfo->leftSpin != 0)) || (teamInfo->rightSpin != 0)) &&
              ((0x1ff < ballSprite.speed && (teamInfo->passingToPlayer != 0)))))) {
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
            if ((((pSVar2->playerOrdinal == 1) || (teamInfo->fireThisFrame == 0)) ||
                ((short)teamInfo->currentAllowedDirection < 0)) ||
               (((teamInfo->plNotFarFromBall == 0 ||
                 ((teamInfo->ballLessEqual4 == 0 && (teamInfo->ball4To8 == 0)))) ||
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
                if ((teamInfo == lastTeamPlayed) && (playerHadBall == 0)) {
                  teamInfo->goalkeeperPlaying = 1;
                  *(undefined1 *)&teamInfo->goaliePlayingOrOut = 1;
                  *(undefined1 *)&teamInfo->ballOutOfPlayOrKeeper = 1;
                }
                else {
                  GoalkeeperClaimedTheBall(pSVar2,&ballSprite,teamInfo);
                }
              }
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
                if (((((goalOut != 0) && (pSVar2->playerOrdinal != 1)) && (0xb6 < (short)wVar13)) &&
                    ((short)wVar13 < 0x1e9)) && (((short)wVar20 < 0xe3 || (0x29f < (short)wVar20))))
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
  ushort uVar4;
  ushort uVar5;
  undefined4 unaff_D1;
  byte bVar7;
  word wVar6;
  char cVar8;
  short sVar9;
  char cVar10;
  uint uVar11;
  Sprite *pSVar12;
  short *psVar13;
  int unaff_A2;
  bool bVar14;
  
  if (team->resetControls != 0) {
    return;
  }
  if (AI_counter != 0) {
    AI_counter = AI_counter + -1;
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
  uVar11 = 0xffff;
  pSVar1 = team->controlledPlayer;
  pSVar12 = team->passToPlayerPtr;
  if (pSVar1 != (Sprite *)0x0) {
    uVar11 = (uint)pSVar1->direction;
  }
  if (team == &bottomTeamData) {
    sVar9 = 0x81;
  }
  else {
    sVar9 = 0x301;
  }
  puVar2 = (uchar *)((int)(short)(ballSprite.y.s.i - sVar9) * (int)(short)(ballSprite.y.s.i - sVar9)
                    + (int)(short)(ballSprite.x.s.i - 0x150) *
                      (int)(short)(ballSprite.x.s.i - 0x150));
  bVar14 = false;
  sVar9 = CalculateDeltaXAndY(0x100,0x150,sVar9,ballSprite.x.s.i,ballSprite.y.s.i);
  if (bVar14) {
    sVar9 = 0;
  }
  cVar10 = (char)sVar9;
  uVar4 = (ushort)uVar11;
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
        team->currentAllowedDirection = (sVar9 + 0x10U & 0xff) >> 5;
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
        if (uVar4 == cameraDirection) goto apply_turn_delta_from_angle;
        if ((ushort)ballSprite.x._0_2_ < 0x151) {
          if ((uVar4 == 1) || (uVar4 == 3)) goto apply_turn_delta_from_angle;
        }
        else if ((uVar4 == 5) || (uVar4 == 7)) goto apply_turn_delta_from_angle;
      }
    }
    else {
      if (gameState != ST_PLAYERS_TO_INITIAL_POSITIONS) {
        if ((gameState < ST_FREE_KICK_LEFT1) || (ST_FREE_KICK_RIGHT3 < gameState)) {
          if ((gameState < ST_THROW_IN_FORWARD_RIGHT) || (ST_THROW_IN_BACK_LEFT < gameState)) {
            if (gameState == ST_FOUL) goto foul;
          }
          else {
            bVar7 = AI_throwInDirections[(short)(gameState + -ST_THROW_IN_FORWARD_RIGHT)];
            if (team != &bottomTeamData) {
              bVar7 = bVar7 << 4 | bVar7 >> 4;
            }
            if (((AI_rand & 0xf) != 0) ||
               ((CONCAT31((int3)(CONCAT22((short)((uint)unaff_D1 >> 0x10),
                                          gameState + -ST_THROW_IN_FORWARD_RIGHT) >> 8),bVar7) &
                1 << (uVar11 & 0x1f)) == 0)) goto check_closest_player_facing;
          }
        }
        else {
foul:
          if ((AI_rand & 0xf) == 0) goto check_closest_player_facing;
          if ((sVar9 + 0x10U & 0xff) >> 5 != uVar4) {
            team->currentAllowedDirection = (sVar9 + 0x10U & 0xff) >> 5;
            return;
          }
        }
apply_turn_delta_from_angle:
        if ((short)uVar4 < 0) {
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
        team->currentAllowedDirection = uVar4;
        team->normalFire = 1;
        if ((gameState == ST_PENALTY) || (gameState == ST_PENALTIES)) {
zero_turn_and_return:
          team->AI_ballSpinDirection = 0;
          return;
        }
        if ((gameState == ST_CORNER_LEFT) || (gameState == ST_CORNER_RIGHT)) {
          if ((AI_rand & 7) < 3) {
            wVar6 = 1;
            uVar4 = uVar4 + 1;
          }
          else {
            if (5 < (AI_rand & 7)) goto zero_turn_and_return;
            wVar6 = 0xffff;
            uVar4 = uVar4 - 1;
          }
          if ((playerTurnFlags & '\x01' << (uVar4 & 7)) != 0) {
            team->AI_ballSpinDirection = wVar6;
            return;
          }
          goto zero_turn_and_return;
        }
        AI_resumePlayTimer = 0xf;
        team->currentAllowedDirection = uVar4;
        team->normalFire = 1;
        wVar6 = 0;
        if (gameState == ST_FOUL) {
          if (team == &topTeamData) {
            if (0x2a9 < *(short *)(unaff_A2 + 0x22)) goto apply_turn_and_return;
          }
          else if (*(short *)(unaff_A2 + 0x22) < 0xd9) goto apply_turn_and_return;
        }
        wVar6 = 0xffff;
        if ((char)((char)(uVar4 << 5) - cVar10) < '\0') {
          wVar6 = 1;
        }
apply_turn_and_return:
        team->AI_ballSpinDirection = wVar6;
        return;
      }
      if ((0x95 < stoppageTimerActive) && (uVar4 == cameraDirection))
      goto apply_turn_delta_from_angle;
    }
check_closest_player_facing:
    pSVar12 = FindClosestPlayerToBallFacing(uVar4 << 5,team);
    if ((pSVar12 == (Sprite *)0xffffffff) || (pSVar1->teamNumber != pSVar12->teamNumber)) {
no_player_facing:
      if ((currentGameTick & 0xe) != 0) {
        return;
      }
      if ((short)AI_turnDirection < 0) {
        if ((AI_turnDirection != 0xffff) &&
           (AI_turnDirection = AI_turnDirection + 1, AI_turnDirection != 0xffff)) {
          return;
        }
        wVar6 = 1;
      }
      else {
        if ((AI_turnDirection != 1) &&
           (AI_turnDirection = AI_turnDirection - 1, AI_turnDirection != 1)) {
          return;
        }
        wVar6 = 0xffff;
      }
      uVar4 = AI_turnDirection + uVar4 & 7;
      if ((playerTurnFlags & '\x01' << uVar4) != 0) {
        team->currentAllowedDirection = uVar4;
        return;
      }
      AI_turnDirection = wVar6;
      return;
    }
    goto our_player_closest;
  }
  if (((playingPenalties == 0) && (penalty == 0)) || ((short)team->spinTimer < 0)) {
    if (AI_counter != 0) {
      AI_SetDirectionTowardOpponentsGoal(team);
    }
    if (pSVar1 == (Sprite *)0x0) {
      return;
    }
    if ((short)team->spinTimer < 0) {
      if ((team->plVeryCloseToBall == 0) && (bVar14 = team->plCloseToBall == 0, bVar14)) {
        AI_DecideWhetherToTriggerFire(pSVar1,team,uVar4);
        if (bVar14) {
          return;
        }
        if ((pSVar12 != (Sprite *)0x0) &&
           (0x31 < (int)(pSVar12->ballDistance - pSVar1->ballDistance))) {
          pSVar1 = team->passToPlayerPtr;
          team->passToPlayerPtr = team->controlledPlayer;
          team->controlledPlayer = pSVar1;
          return;
        }
        if (pSVar12 == (Sprite *)0x0) {
derive_allowed_dir_from_full_angle:
          uVar4 = ((byte)((char)pSVar1->fullDirection + 0x80) + 0x10 & 0xff) >> 5;
          if (((uVar4 != pSVar1->direction) && (799 < pSVar1->ballDistance)) &&
             ((currentGameTick & 0xe) != 0)) {
            team->currentAllowedDirection = pSVar1->direction;
            return;
          }
          team->currentAllowedDirection = uVar4;
          return;
        }
        if (deadVarAlways0 == 0) {
          if ((topTeamData.playerNumber == 0) && (bottomTeamData.playerNumber == 0)) {
            uVar5 = 0xffff;
            if ((((short)(pSVar1->x).s.i < 0x111) || (0x18e < (short)(pSVar1->x).s.i)) ||
               ((0x9e < (short)(pSVar1->y).s.i && ((short)(pSVar1->y).s.i < 0x2e4)))) {
              if ((currentGameTick & 0x18) != 0) {
                team->currentAllowedDirection = uVar4;
                return;
              }
              uVar5 = ((byte)((char)(pSVar1->fullDirection +
                                    *(short *)((int)AI_randomRotateTable + (int)(short)(AI_rand & 2)
                                              )) + 0x80) + 0x10 & 0xff) >> 5;
            }
            team->currentAllowedDirection = uVar5;
            return;
          }
          goto derive_allowed_dir_from_full_angle;
        }
        goto set_allowed_dir_from_angle_bucket;
      }
      bVar14 = false;
      AI_DecideWhetherToTriggerFire(pSVar1,team,uVar4);
      if (bVar14) {
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
          cVar8 = '\x0f';
          if (puVar2 < (uchar *)0xc81) {
            cVar8 = '2';
          }
          if (((-1 < (short)pSVar1->direction) &&
              (cVar3 = (char)(pSVar1->direction << 5) - cVar10, cVar3 <= cVar8)) && (-cVar8 < cVar3)
             ) {
            bVar14 = false;
            if (AI_resumePlayTimer != 0) {
              return;
            }
            AI_ResumeGameDelay(team);
            if (!bVar14) {
              return;
            }
            team->AI_afterTouchStrength = 0;
            AI_resumePlayTimer = 0xf;
            team->currentAllowedDirection = uVar4;
            team->normalFire = 1;
            wVar6 = 0xffff;
            if (cVar3 < '\0') {
              wVar6 = 1;
            }
            team->AI_ballSpinDirection = wVar6;
            return;
          }
        }
      }
      if (team->field_84 == 0) {
        if (((uchar *)0x2647 < puVar2) && (pSVar1 != (Sprite *)0x0)) {
          pSVar12 = team->opponentsTeam->controlledPlayer;
          if (pSVar12 == (Sprite *)0x0) {
use_pass_target_if_valid:
            pSVar12 = team->opponentsTeam->passToPlayerPtr;
            if (pSVar12 != (Sprite *)0x0) {
              if (pSVar12->ballDistance < 800) goto evaluate_closest_facing_player_midrange;
              if (pSVar12->ballDistance < 5000) goto far_distance_decision_gate;
            }
          }
          else {
            if (pSVar12->ballDistance < 800) {
evaluate_closest_facing_player_midrange:
              if ((uchar *)0x2bf20 < puVar2) goto decide_immediate_turn_or_gate;
              pSVar12 = FindClosestPlayerToBallFacing(uVar4 << 5,team);
              if ((pSVar12 != (Sprite *)0xffffffff) && (pSVar1->teamNumber == pSVar12->teamNumber))
              {
our_player_closest:
                team->field_84 = 0;
                bVar14 = false;
                if (AI_resumePlayTimer != 0) {
                  return;
                }
                AI_ResumeGameDelay(team);
                if (!bVar14) {
                  return;
                }
                AI_resumePlayTimer = 0xf;
                team->currentAllowedDirection = uVar4;
                team->quickFire = 1;
                if (stoppageTimerActive < AI_maxStoppageTime) {
                  return;
                }
                AI_maxStoppageTime = stoppageTimerActive;
                return;
              }
            }
            else {
              if (4999 < pSVar12->ballDistance) goto use_pass_target_if_valid;
far_distance_decision_gate:
              if ((AI_rand < 9) && ((uchar *)0xbd10 < puVar2)) {
decide_immediate_turn_or_gate:
                uVar5 = ((sVar9 + 0x10U & 0xff) >> 5) - uVar4 & 7;
                if ((uVar5 == 0) || ((uVar5 == 1 || (uVar5 == 0xffff)))) {
                  team->AI_afterTouchStrength = 2;
                  if (puVar2 < frontbufferBase + 0x9be9) {
                    team->AI_afterTouchStrength = 1;
                  }
                  team->currentAllowedDirection = uVar4;
                  team->normalFire = 1;
                  AI_resumePlayTimer = 0xf;
                  wVar6 = 0xffff;
                  if ((char)((char)(uVar4 << 5) - cVar10) < '\0') {
                    wVar6 = 1;
                  }
                  if ((int)ballSprite.deltaY.raw < 0) {
                    if (ballSprite.y.s.i < 0x156) goto commit_turn_to_ai_state;
                  }
                  else if (0x22b < ballSprite.y.s.i) goto commit_turn_to_ai_state;
                  uVar4 = (currentGameTick & 0x1c) >> 2;
                  if ((ballSprite.x.s.i < 0xc1) || (0x1dd < ballSprite.x.s.i)) {
                    if ((ballSprite.x.s.i < 0x76) || (0x229 < ballSprite.x.s.i)) {
                      if (uVar4 < 4) goto commit_turn_to_ai_state;
                    }
                    else {
                      if (uVar4 == 0) goto invert_turn;
                      if (3 < uVar4) goto commit_turn_to_ai_state;
                    }
                  }
                  else if (uVar4 != 0) {
                    if (uVar4 < 5) goto commit_turn_to_ai_state;
invert_turn:
                    wVar6 = -wVar6;
                    goto commit_turn_to_ai_state;
                  }
                  wVar6 = 0;
commit_turn_to_ai_state:
                  team->AI_ballSpinDirection = wVar6;
                  return;
                }
              }
              else {
                if ((currentGameTick & 0xc) != 0) goto choose_dir_when_not_very_close;
                pSVar12 = FindClosestPlayerToBallFacing(uVar4 << 5,team);
                if ((pSVar12 != (Sprite *)0xffffffff) && (pSVar1->teamNumber == pSVar12->teamNumber)
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
          team->currentAllowedDirection = (sVar9 + 0x10U & 0xff) >> 5;
          return;
        }
      }
      else {
        team->field_84 = team->field_84 - 1;
        pSVar12 = FindClosestPlayerToBallFacing(uVar4 << 5,team);
        if ((pSVar12 != (Sprite *)0xffffffff) && (pSVar1->teamNumber == pSVar12->teamNumber))
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
      psVar13 = AI_leftSpinTable;
      goto apply_spin_table_offset;
    }
    if (team->AI_ballSpinDirection != 0) {
      psVar13 = AI_rotateRightTable;
      goto apply_spin_table_offset;
    }
  }
  if (team->AI_afterTouchStrength == 1) {
    team->currentAllowedDirection = 0xffff;
    return;
  }
  psVar13 = AI_longKickTable;
apply_spin_table_offset:
  team->currentAllowedDirection =
       *(short *)((int)psVar13 + (int)(short)(team->AI_afterTouchStrength << 1)) +
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
  short unaff_D0w;
  word wVar1;
  word wVar2;
  
  if (AI_counter == 0) {
    return unaff_D0w;
  }
  wVar1 = ballSprite.x.s.i;
  if (AI_attackHalf == 1) {
    if (team != &bottomTeamData) {
      return ballSprite.x.s.i;
    }
    wVar2 = 1;
    if ((299 < ballSprite.x.s.i) && (wVar2 = 7, ballSprite.x.s.i < 0x174)) {
      wVar2 = 0;
    }
  }
  else {
    if (team != &topTeamData) {
      return ballSprite.x.s.i;
    }
    wVar2 = 3;
    if ((299 < ballSprite.x.s.i) && (wVar2 = 5, ballSprite.x.s.i < 0x174)) {
      wVar2 = 4;
    }
  }
  team->currentAllowedDirection = wVar2;
  return wVar1;
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


// --- sub_11FBA2 @ 0011fba2 ---

void __usercall sub_11FBA2(void)

{
  return;
}


// --- nullsub_9 @ 0011fbae ---

void __usercall nullsub_9(void)

{
  return;
}


// --- nullsub_10 @ 0011fbb0 ---

void __usercall nullsub_10(void)

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
  dstMenu->onInit = *(void **)staticMenu;
  dstMenu->afterDraw = *(void **)((int)staticMenu + 4);
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
      dstMenu->endOfMenuPtr = pMVar5;
      dword_9978C = (int)diyLeagueScratchBuffer - (int)pMVar5;
      dword_99788 = (int)&pMVar5[-0xb8].fg.func2 + 2;
      if (g_irqCookieObfuscated != 0xcfd1efe7) {
        pMVar5 = unaff_A5;
        UnpackMenu(&g_currentMenu,staticMenu_00);
        g_currentMenu.selectedEntry = pMVar5;
        if (g_currentMenu.afterDraw != (void *)0x0) {
          (*g_currentMenu.afterDraw)(&g_currentMenu);
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
    g_errorMessagePtr = "STACK OVERFLOW";
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
    if ((g_currentMenu.selectedEntry)->onSelect != (code *)0x0) {
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
        (*(g_currentMenu.selectedEntry)->onSelect)(wVar2);
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
                (*g_currentMenu.onDraw)();
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
  
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTALWM = BLT_FWM_ALL;
  REG_BLTAFWM = BLT_FWM_ALL;
  REG_BLTCON1 = 0;
  REG_BLTCON0 = BLTCON0_USEA_USED_LF_F0;
  REG_BLTAMOD = 0;
  REG_BLTDMOD = 0;
  REG_BLTAPTH = frontbufferMaskBuffer;
  REG_BLTDPTH = frontbufferBasePtr;
  REG_BLTSIZE = BLTSIZE_OVERLAY_PANEL;
  REG_DMACON = DMACON_BLT_ON;
  uVar1 = REG_DMACONR._0_1_;
  do {
    bVar2 = REG_DMACONR._0_1_;
  } while ((bVar2 & 0x40) != 0);
  REG_DMACON = DMACON_BLT_OFF;
  REG_BLTSIZE = 0x16;
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
     (unaff_D0w = (*item->beforeDraw)(), item->isInvisible != 0)) {
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
  sVar12 = 1;
  if (sVar11 != 1) {
    if (sVar11 == 3) {
      sVar12 = 2;
    }
    else {
      sVar12 = sVar11 >> 1;
    }
  }
  uVar4 = item->y + sVar12;
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
    (*item->afterDraw)(item);
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
    (*g_currentMenu.onDraw)();
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
  Menu *oldPackedMenu;
  
  oldPackedMenu = g_currentMenuPtr;
  oldSelectedEntry = g_currentMenu.selectedEntry;
  menuStatus = 0;
  g_exitMenu = 0;
  ActivateMenu(packedMenu);
  while (g_exitMenu == 0) {
    MenuProc();
  }
  menuStatus = 1;
  g_exitMenu = 0;
  RestorePreviousMenu(oldSelectedEntry,oldPackedMenu);
  return;
}


// --- RestorePreviousMenu @ 001215b4 ---

/* in:
        A5 -> old selected entry
        A6 -> old menu to return to */

void __usercall RestorePreviousMenu(void *oldSelectedEntry,void *oldPackedMenu)

{
  MenuEntry *pMVar1;
  
  g_currentMenuPtr = oldPackedMenu;
  pMVar1 = oldSelectedEntry;
  UnpackMenu(&g_currentMenu,oldPackedMenu);
  g_currentMenu.selectedEntry = pMVar1;
  if (g_currentMenu.afterDraw != (void *)0x0) {
    (*g_currentMenu.afterDraw)(&g_currentMenu);
  }
  return;
}


// --- ActivateMenu @ 001215f6 ---

/* in:
        A6 -> menu to prepare (or activate) */

short __usercall ActivateMenu(Menu *menu)

{
  MenuEntry *pMVar1;
  
  g_currentMenuPtr = menu;
  UnpackMenu(&g_currentMenu,menu);
  pMVar1 = g_currentMenu.selectedEntry;
  if (g_currentMenu.selectedEntry < (MenuEntry *)((int)goalBase + 0x2292U)) {
    g_currentMenu.selectedEntry = CalcMenuEntryAddress((ushort)g_currentMenu.selectedEntry);
  }
  if (g_currentMenu.onInit != (void *)0x0) {
    pMVar1 = (MenuEntry *)(*g_currentMenu.onInit)(&g_currentMenu);
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
  
  if (*(short *)team == 0) {
    if (*(char *)((int)info + 4) == '\x01') {
      if (*(ushort *)((int)team + 0x2b8) < 3) {
        return 0;
      }
    }
    else if (*(ushort *)((int)team + 0x2b8) < 10) {
      return 0;
    }
    uVar1 = *(ushort *)info;
    FindTeamInDIY();
    uVar1 = GetMoreExpensiveTeamsCount(uVar1,team);
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


// --- AssignFakeGoalsToScorers @ 001216f2 ---

/* in:
       D0 - winning team number
       D5 - number of goals to generate
       
   When player aborts the game they are punished with a loss, and this function will
   assign those fictive goals to other team scorers. */

char __usercall AssignFakeGoalsToScorers(ushort winningTeam,ushort numGoals)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  word wVar6;
  short sVar7;
  TeamGame *pTVar8;
  
  sVar5 = numGoals - 1;
  if (sVar5 < 0) {
    return (char)winningTeam;
  }
  pTVar8 = &topTeamInGame;
  wVar6 = pl1Tactics;
  if (winningTeam != 1) {
    pTVar8 = &bottomTeamInGame;
    wVar6 = pl2Tactics;
  }
  iVar1 = *(int *)((int)playersPositionsByTactics + (int)(short)(wVar6 << 2));
  do {
    uVar4 = Rand2();
    if (uVar4 < 0xf8) {
      uVar4 = uVar4 & 0x7f;
      sVar7 = 10;
      if (LAB_001217d8 <= (byte)uVar4) {
        bVar3 = (byte)uVar4 - LAB_001217d8;
        uVar4 = (ushort)bVar3;
        sVar7 = 9;
        if (LAB_001217d8_1 <= bVar3) {
          bVar3 = bVar3 - LAB_001217d8_1;
          uVar4 = (ushort)bVar3;
          sVar7 = 8;
          if (LAB_001217da <= bVar3) {
            bVar3 = bVar3 - LAB_001217da;
            uVar4 = (ushort)bVar3;
            sVar7 = 7;
            if (LAB_001217da_1 <= bVar3) {
              bVar3 = bVar3 - LAB_001217da_1;
              uVar4 = (ushort)bVar3;
              sVar7 = 6;
              if (LAB_001217dc <= bVar3) {
                bVar3 = bVar3 - LAB_001217dc;
                uVar4 = (ushort)bVar3;
                sVar7 = 5;
                if (LAB_001217dc_1 <= bVar3) {
                  bVar3 = bVar3 - LAB_001217dc_1;
                  uVar4 = (ushort)bVar3;
                  sVar7 = 4;
                  if (LAB_001217de <= bVar3) {
                    bVar3 = bVar3 - LAB_001217de;
                    uVar4 = (ushort)bVar3;
                    sVar7 = 3;
                    if (LAB_001217de_1 <= bVar3) {
                      bVar3 = bVar3 - LAB_001217de_1;
                      uVar4 = (ushort)bVar3;
                      sVar7 = 2;
                      if (LAB_001217e0 <= bVar3) {
                        uVar4 = (ushort)(byte)(bVar3 - LAB_001217e0);
                        sVar7 = 1;
                        if (LAB_001217e0_1 <= (byte)(bVar3 - LAB_001217e0)) {
                          uVar4 = Rand2();
                          uVar4 = uVar4 & 0x7f;
                          sVar7 = 1;
                          if (LAB_001217e2 <= (byte)uVar4) {
                            uVar4 = (ushort)(byte)((byte)uVar4 - LAB_001217e2);
                            sVar7 = 0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      pbVar2 = pTVar8->players[0].shortName + (short)((ushort)*(byte *)(iVar1 + sVar7) * 0x3d) + -10
      ;
      *pbVar2 = *pbVar2 + 1;
    }
    else {
      pTVar8->numOwnGoals = pTVar8->numOwnGoals + 1;
    }
    sVar5 = sVar5 + -1;
  } while (sVar5 != -1);
  return (char)uVar4;
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
  if (playerInfos != &topTeamInGame) {
    teamFile = gameTeam2;
    oppTeamFile = gameTeam1;
    wVar2 = pl2Tactics;
  }
  bVar1 = teamFile->tactics;
  teamFile->tactics = (byte)wVar2;
  playerIndex = 0;
  playerInfoHeader = playerInfos;
  do {
    uVar3._0_1_ = teamFile->countryNumber;
    uVar3._1_1_ = teamFile->teamOrdinal;
    playerFile = GetPlayer(uVar3,(short)(char)playerInfoHeader->playerIndex);
    SaveRand2State();
    cVar4 = GetPlayerRandomNum(playerFile);
    uVar3 = CONCAT11(uVar3._0_1_,cVar4);
    Randomize2(gameRandValue ^ uVar3);
    AdjustPlayerSkills(playerIndex,teamFile,oppTeamFile,playerInfos,playerFile,playerInfoHeader);
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
    CalcTeamViewOffset(team);
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
  if (whichSide != &topTeamInGame) {
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


// --- DrawAnimatedPatterns @ 0012f720 ---

/* This proc serves to draw some additional patterns, mostly fans jumping and cheering.
   Called once every frame, also during replays. */

void __usercall DrawAnimatedPatterns(void)

{
  byte *pbVar1;
  byte bVar2;
  TeamGame *pTVar3;
  short sVar5;
  uint uVar4;
  int iVar6;
  ushort patternIndex;
  word wVar7;
  ushort uVar8;
  ushort uVar9;
  word *pwVar10;
  
  if (replayState == 0) {
    if (g_trainingGame != 0) {
      animPatternsState = 0;
      return;
    }
    if (patternsGoalCounter == 0) {
      if (goalCounter != 0) {
        patternsGoalCounter = 1;
      }
    }
    else {
      patternsGoalCounter = patternsGoalCounter + 1;
      if (299 < patternsGoalCounter) {
        patternsGoalCounter = 0;
      }
    }
    if (showFansCounter != 0) {
      showFansCounter = showFansCounter - 1;
    }
    if (showFansCounter != 0) {
game_hasnt_started:
      otherTeamScored = 0;
      animPatternsState = 6;
      uVar8 = 8;
      patternStatic = currentGameTick & 0x1f;
      if (patternStatic < 0x10) {
        patternStatic = 0;
      }
      goto LAB_0012f966;
    }
    if ((gameStatePl == ST_GAME_IN_PROGRESS) ||
       ((gameState == ST_KEEPER_HOLDS_BALL && (lastTeamPlayedBeforeBreak != (TeamGeneralInfo *)0x0))
       )) {
_12F948_game_in_progress:
      otherTeamScored = 0;
      animPatternsState = 7;
      uVar8 = 1;
      patternStatic = currentGameTick & 0x1f;
      if (patternStatic < 0x1a) {
        patternStatic = 0;
      }
      goto LAB_0012f966;
    }
    if (patternsGoalCounter == 0) goto ball_out_of_play;
    if ((ushort)g_cameraY._0_2_ < 0x1b9) {
      if (fansSidesSwapped == 0) goto LAB_0012f864;
LAB_0012f852:
      pTVar3 = &topTeamInGame;
    }
    else {
      if (fansSidesSwapped == 0) goto LAB_0012f852;
LAB_0012f864:
      pTVar3 = &bottomTeamInGame;
    }
    if (teamScoredGamePtr == pTVar3) {
      if (patternsGoalCounter < 0x19) goto greatest_cheers;
      if (patternsGoalCounter < 200) goto middle_cheers;
      if (patternsGoalCounter < 0xe1) goto cheers_fading;
      goto ball_out_of_play;
    }
  }
  else {
    if (animPatternsState == 0) {
      return;
    }
    otherTeamScored = 0;
    if (animPatternsState == 1) {
ball_out_of_play:
      otherTeamScored = 0;
      animPatternsState = 1;
      uVar8 = 5;
      patternStatic = currentGameTick & 0x1f;
      if (patternStatic < 0x1a) {
        patternStatic = 0;
      }
      goto LAB_0012f966;
    }
    if (animPatternsState == 2) {
greatest_cheers:
      otherTeamScored = 0;
      animPatternsState = 2;
      uVar8 = 8;
      patternStatic = 1;
      goto LAB_0012f966;
    }
    if (animPatternsState == 3) {
middle_cheers:
      otherTeamScored = 0;
      animPatternsState = 3;
      uVar8 = 8;
      patternStatic = currentGameTick & 0xf;
      if (patternStatic < 5) {
        patternStatic = 0;
      }
      goto LAB_0012f966;
    }
    if (animPatternsState != 4) {
      if (animPatternsState != 5) {
        if (animPatternsState != 6) {
          if (animPatternsState != 7) {
            panicReasonCode = 0x5665;
            PanicHaltLoop();
            return;
          }
          goto _12F948_game_in_progress;
        }
        goto game_hasnt_started;
      }
cheers_fading:
      otherTeamScored = 0;
      animPatternsState = 5;
      uVar8 = 8;
      patternStatic = 0;
      goto LAB_0012f966;
    }
  }
  animPatternsState = 4;
  uVar8 = 1;
  patternStatic = currentGameTick & 0x1f;
  otherTeamScored = 1;
  if (patternStatic < 0x10) {
    patternStatic = 0;
  }
LAB_0012f966:
  uVar9 = 7;
  pwVar10 = animatedPatterns;
  do {
    wVar7 = patternStatic;
    patternIndex = *pwVar10;
    if ((short)patternIndex < 0) {
      if (uVar9 < uVar8) {
        animPatternsIndex = animPatternsIndex + 1;
        if (animPatternsIndex == 0x40) {
          animPatternsIndex = 0;
        }
        if (g_cameraY.s.i < 0x40) {
          SwapTwoRandomIndicesFromAnimPatternsTable();
          bVar2 = animPatternsRandomTable[(short)animPatternsIndex];
          if (((otherTeamScored != 0) && (0x14 < bVar2)) && (bVar2 < 0x2a)) {
            wVar7 = 0;
          }
          sVar5 = (char)bVar2 + 0x15;
        }
        else {
          if (g_cameraY.s.i < 0x220) goto next;
          SwapTwoRandomIndicesFromAnimPatternsTable();
          sVar5 = (char)animPatternsRandomTable[(short)animPatternsIndex] + 0x42f;
        }
        patternIndex = (short)((uint)(int)sVar5 % 0x15) + (short)((uint)(int)sVar5 / 0x15) * 0x2a +
                       (g_cameraX.s.i >> 4);
        pbVar1 = (byte *)((int)(short)(patternIndex * 4) + 0x400);
        if ((pbVar1 < g_pitchDatBuffer) || (g_pitchDatBuffer + 0x2417 < pbVar1)) {
          panicReasonCode = 0x2772;
          PanicHaltLoop();
        }
        uVar4 = *(int *)pbVar1 - 0x2818U >> 7;
        if ((uVar4 != 0) && (uVar4 < 0x17)) {
          if ((uVar4 & 1) == 0) {
            if (wVar7 == 0) {
              iVar6 = uVar4 - 1;
              goto LAB_0012fa7e;
            }
          }
          else if (wVar7 != 0) {
            iVar6 = uVar4 + 1;
LAB_0012fa7e:
            *pwVar10 = patternIndex;
            *(int *)pbVar1 = (int)&g_currentMenu + iVar6 * 0x80;
            goto draw_pattern;
          }
        }
      }
    }
    else {
      *pwVar10 = 0xffff;
draw_pattern:
      DrawPatternFromIndex(patternIndex);
    }
next:
    uVar9 = uVar9 - 1;
    pwVar10 = pwVar10 + 1;
    if (uVar9 == 0xffff) {
      return;
    }
  } while( true );
}


// --- SwapTwoRandomIndicesFromAnimPatternsTable @ 0012fa9e ---

void __usercall SwapTwoRandomIndicesFromAnimPatternsTable(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  
  uVar2 = Rand();
  uVar2 = (ushort)(uVar2 * 0x3f) >> 8;
  uVar3 = Rand();
  uVar3 = (ushort)(uVar3 * 0x3f) >> 8;
  bVar1 = animPatternsRandomTable[(short)uVar3];
  animPatternsRandomTable[(short)uVar3] = animPatternsRandomTable[(short)uVar2];
  animPatternsRandomTable[(short)uVar2] = bVar1;
  return;
}


// --- ResetAnimatedPatternsForBothTeams @ 0012fb2a ---

void __usercall ResetAnimatedPatternsForBothTeams(void)

{
  uint uVar1;
  short sVar2;
  byte *pbVar3;
  
  if (g_trainingGame == 0) {
    ResetAnimatedPatterns();
    sVar2 = 0x7d;
    pbVar3 = g_pitchDatBuffer + 0x2178;
    do {
      uVar1 = *(int *)pbVar3 - 0x2818;
      if (((uVar1 != 0) && (uVar1 < 0xb01)) && ((uVar1 & 0x80) == 0)) {
        *(int *)pbVar3 = *(int *)pbVar3 + -0x80;
      }
      sVar2 = sVar2 + -1;
      pbVar3 = pbVar3 + 4;
    } while (sVar2 != -1);
    animatedPatterns[0] = 0xffff;
    animatedPatterns[1] = 0xffff;
    animatedPatterns[2] = 0xffff;
    animatedPatterns[3] = 0xffff;
    animatedPatterns[4] = 0xffff;
    animatedPatterns[5] = 0xffff;
    animatedPatterns[6] = 0xffff;
    animatedPatterns[7] = 0xffff;
  }
  return;
}


// --- ResetAnimatedPatterns @ 0012fb4c ---

void __usercall ResetAnimatedPatterns(void)

{
  uint uVar1;
  short unaff_D1w;
  int *unaff_A0;
  
  do {
    uVar1 = *unaff_A0 - 0x2818;
    if (((uVar1 != 0) && (uVar1 < 0xb01)) && ((uVar1 & 0x80) == 0)) {
      *unaff_A0 = *unaff_A0 + -TILE_SIZE;
    }
    unaff_D1w = unaff_D1w + -1;
    unaff_A0 = unaff_A0 + 1;
  } while (unaff_D1w != -1);
  animatedPatterns[0] = 0xffff;
  animatedPatterns[1] = 0xffff;
  animatedPatterns[2] = 0xffff;
  animatedPatterns[3] = 0xffff;
  animatedPatterns[4] = 0xffff;
  animatedPatterns[5] = 0xffff;
  animatedPatterns[6] = 0xffff;
  animatedPatterns[7] = 0xffff;
  return;
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


// --- DrawPatternFromIndex @ 0012fbc8 ---

/* in:
        D3 - pattern index */

void __usercall DrawPatternFromIndex(ushort patternIndex)

{
  short sVar1;
  short sVar2;
  uchar *puVar3;
  
  **(undefined4 **)(spriteGraphicsPtr + 0x224) = *(undefined4 *)((short)(patternIndex << 2) + 0x400)
  ;
  sVar1 = (short)((uint)(int)(short)patternIndex % 0x2a) * 0x10 - g_cameraX._0_2_;
  sVar2 = (short)((uint)(int)(short)patternIndex / 0x2a) * 0x10 - g_cameraY._0_2_;
  if ((((sVar1 < 0x150) && (sVar2 < SCREEN_HEIGHT)) && (-0x10 < sVar1)) && (-0x10 < sVar2)) {
    DrawSprite16Pixels();
    puVar3 = frontbufferBasePtr;
    frontbufferBasePtr = frontbufferMaskBuffer;
    DrawSprite16Pixels();
    frontbufferBasePtr = puVar3;
  }
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
      if ((*(char *)&pMVar5->teamId == *(char *)teamPtr) &&
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
    pTVar1 = GetTeamPointer(teamNumber);
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
      *(ushort *)((int)firstTeam + 2) =
           (ushort)*(byte *)((int)firstTeam + 1) +
           *(short *)((int)teamsCountryNumbers + (int)(short)((ushort)*(byte *)firstTeam << 1));
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


