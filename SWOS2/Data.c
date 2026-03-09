/* Auto-emitted by emit_initialized_c.py (IDA 9.x) */
#include <stdint.h>
#include "Data.h"
#include "LocalTypes.h"

uint32_t NULL;
uint32_t DIVIDE_BY_ZERO;
uint32_t LEVEL_1_INTERRUPT_AUTOVECTOR;
uint32_t LEVEL_2_INTERRUPT_AUTOVECTOR;
uint32_t LEVEL_3_INTERRUPT_AUTOVECTOR;
uint32_t LEVEL_4_INTERRUPT_AUTOVECTOR;
uint32_t LEVEL_5_INTERRUPT_AUTOVECTOR;
uint32_t LEVEL_6_INTERRUPT_AUTOVECTOR;
uint32_t LEVEL_7_INTERRUPT_AUTOVECTOR;
// This represents virtual pitch - array of pointers to
// 16 x 16 patterns, whole pitch is 44 x 57 patterns,
// and the scrollable part is 42 x 53
uint8_t pitchDatBuffer[9240];
Menu currentMenu;
MenuEntry menuEntries[100];
uint8_t diyLeagueScratchBuffer[2000];
// Buffer caching team grid data for up to 10 primary Euro Cup qualified teams; each record is 684 bytes
TeamFile primaryQualifiedTeamGrids[10];
// Buffer caching team grid data for 1 tertiary (UEFA Cup) qualified team.
TeamFile tertiaryQualifiedTeamGrid;
// Cached team grid for the Euro Cup title holder, populated during career European cup draws.
TeamFile euroCupTitleHolderGrid;
// Cached team grid for the Cup Winners Cup title holder.
TeamFile cupWinnersCupTitleHolderGrid;
// Cached team grid for the UEFA Cup title holder.
TeamFile uefaCupTitleHolderGrid;
uint8_t competitionFilename[14];
uint8_t hilFilename[14];
uint8_t importTacticsFilename[14];
uint8_t playerPositionsArray[32];
uint8_t oldPlayerPositionsArray[32];
// Total byte size of loaded team file data, computed as teamCount * 684 + 2.
uint32_t teamFileDataSize;
uint8_t teamFilenameBuffer[50];
// Number of teams in the currently loaded team file.
uint16_t teamFileTeamCount;
uint8_t lastLoadedExtNumber;
TeamGame topTeamSaved;
TeamGame bottomTeamSaved;
TeamGame topTeamInGame;
TeamGame bottomTeamInGame;
uint32_t magicValue;
uint8_t gameName[100];
uint8_t gameRound;
TacticsPosition tacticsPosition442;
TacticsPosition tacticsPosition541;
TacticsPosition tacticsPosition451;
TacticsPosition tacticsPosition532;
TacticsPosition tacticsPosition352;
TacticsPosition tacticsPosition433;
TacticsPosition tacticsPosition424;
TacticsPosition tacticsPosition343;
TacticsPosition tacticsPositionSweep;
TacticsPosition tacticsPosition523;
TacticsPosition tacticsPositionAttack;
TacticsPosition tacticsPositionDefend;
TacticsPosition tacticsPositionUSERA;
TacticsPosition tacticsPositionUSERB;
TacticsPosition tacticsPositionUSERC;
TacticsPosition tacticsPositionUSERD;
TacticsPosition tacticsPositionUSERE;
TacticsPosition tacticsPositionUSERF;
uint8_t teamsTable[100];
uint8_t teamsIndex[100];
uint8_t teamsPtrTable[400];
TeamTactics editTacticsCurrentTactics;
TeamTactics savedCurrentTactics;
uint8_t teamPointers[256];
uint8_t dwArrayCountries[256];
// Temporary buffer used in Career_SortTeamFilePtrsByAvgPlayerPrice for sorting team records.
uint8_t teamSortBuffer[256];
uint16_t panicReasonCode;
char * errorMessagePtr;
uint32_t panicRegDumpBlock;
// Asset system disk image context structure passed to AssetSys_Dispatch with ASSET_OP_INIT_CONTEXT.
uint8_t diskImageContext;
uint8_t goalBase[19000];
uint16_t nextGoal;
uint8_t frontbufferBase[48048];
uint8_t frontbufferBaseAlt[48048];
uint32_t bitPlane0Base[225];
uint32_t bitPlane1Base[225];
uint32_t bitPlane2Base[225];
uint32_t bitPlane3Base[225];
uint32_t bitPlane0BaseAlt[225];
uint32_t bitPlane1BaseAlt[225];
uint32_t bitPlane2BaseAlt[225];
uint32_t bitPlane3BaseAlt[225];
uint32_t * bitPlane0BasePtr;
uint32_t * bitPlane1BasePtr;
uint32_t * bitPlane2BasePtr;
uint32_t * bitPlane3BasePtr;
uint8_t copperListBuffer[320];
uint32_t copperZeroLong;
uint16_t bootTemp0;
uint16_t bootTemp1;
uint16_t bootTemp2;
uint16_t bootTemp3;
uint16_t bootTemp4;
uint16_t bootTemp5;
uint16_t bootTemp6;
uint8_t * frontbufferBasePtr;
uint8_t * frontbufferBaseAltPtr;
uint8_t plOrdinalsTable[32];
uint8_t plNamesLengthTable[32];
uint8_t plNamesLengthTableCopy[32];
// Current position pointer into the sprite render stack; elements are popped during DrawQueuedSprites.
uint8_t * renderStackPtr;
uint8_t renderStackBase[840];
// Current position pointer into the bitplane 0/1 sprite band render stack.
uint8_t * plane01RenderStackPtr;
uint8_t plane01RenderStackBase[360];
uint8_t * plane23RenderStackPtr;
uint8_t plane23RenderStackBase[360];
uint16_t kSpriteBlitQueueSentinel_A;
uint16_t kSpriteBlitQueueSentinel_B;
void * spriteBlitQueue;
uint16_t ballSpeed;
// Stores ball sprite speed after goalkeeper jump/save processing.
uint16_t ballSpeedAfterSave;
// Computed gate receipts factor derived from signed multiply/divide of average player price.
uint16_t gateReceiptsFactor;
uint16_t foreignMarketRandomPickRetries;
uint16_t homeMarketRandomPickRetries;
// Counter incremented during transfer offer candidate team search iterations.
uint16_t offerSearchRetryCount;
// Counter incremented each time goalkeeper dive evaluation proceeds past initial distance checks.
uint16_t goalkeeperDiveAttemptCount;
// Pointer to nearest teammate sprite found during foul/card processing distance loop.
void * nearestTeammatePtr;
DIY_Competition diyFileBufferCopy;
// Array of 16-bit team IDs for DIY tournament competitions.
uint16_t diyTournamentTeamIds[451];
DIY_Competition diyCompetitionStart;
uint16_t diyMinSubstitutes;
uint16_t diyPointsForAWin;
uint16_t diyLeagueMinSubstitutes;
uint16_t diyLeagueMaxSubstitutes;
// Flag indicating DIY league has groups/divisions.
uint16_t diyHasGroups;
uint16_t diyTeamEntryOffsetsByIndex;
// Array of cup bracket match result bytes indexed by current round.\
uint8_t diyCupRoundResults[100];
uint16_t diyTeamShuffleIndices;
// Array of 16-bit team IDs for DIY league competitions (type 0).
uint8_t diyLeagueTeamIds[28];
// Competition format field; value 1 triggers league-round progression.
uint16_t diyCompetitionFormat;
// Competition round format; when equal to 2, bypasses team grid reordering.
uint16_t diyRoundFormat;
// Counter of matches played in the current DIY competition.
uint16_t diyMatchesPlayedCount;
// Current career slot index for league processing.
uint16_t diyLeagueCurrentSlot;
// Current match progress count compared against a 75% threshold.
uint16_t diyLeagueMatchProgress;
// Total match count for DIY league; multiplied by 3/4 to compute the threshold for enabling view options.
uint16_t diyLeagueTotalMatches;
// Array of 16-bit team IDs for DIY cup competitions (type 1).
uint8_t diyCupTeamIds[128];
// Array of byte-sized team grid indices shuffled randomly for match pairings.
uint8_t diyTeamGridPairings[64];
// Array of sequential byte indices initialized 0..N-1 and shuffled for randomized team ordering.
uint8_t diyTeamShuffleOrder[698];
// Buffer for audio instrument bank data loaded from sound/hero.ins via RNC decompression.
uint8_t audioInstrumentBank[364];
uint8_t imageCmdWorkBuf[65500];
uint32_t menuInsBank;
uint8_t menuSongData;
// Temporary 684-byte team data buffer used in career mode to save/restore careerTeam.
TeamFile tempTeamBuffer;
uint16_t numberOfFiles;
uint8_t foundFilenamesBuffer[1918];
uint8_t teamFileBuffer[64014];
// BSS address reference used for address arithmetic to compute the 58-byte record stride for poolplyr.dat entries.
uint8_t poolPlayerStrideRef;
uint8_t * imageStreamCursor;
uint8_t * menuImageStreamBaseEnd;
uint32_t imageStreamBytesLeft;
// State of in-game replay on 'R'.
// 0 = not replaying
// 1 = init - fading in
// 2 = replaying now at normal speed
// 3 = slow motion playback
uint16_t replayState;
// Boolean, 1 if replay initiated by user, 0 if automatic replay
// (when auto replays set to on); sticky
uint16_t userRequestedReplay;
uint16_t throwInDeadVar;
// Points to current goal in *.hil file that
// is being shown in highlights
uint32_t * currentGoalPtr;
uint32_t * currentHilPtr;
uint16_t savedCameraX;
uint16_t savedCameraY;
// 0  = No
// !0 = yes
uint16_t teamsLoaded;
// 0  = No
// !0 = yes
uint16_t poolplyrLoaded;
uint8_t poolplyrDatBuffer[52200];
// BSS end-marker whose address is compared against 0x100000 to verify the program fits within 1 MB.
uint32_t memBoundaryMarker;
uint8_t sfxInsBank2;
uint8_t assetLoaderBank0Base;
uint8_t sfxSongData;
uint8_t frontbufferMaskBuffer[48048];
uint8_t highestScorersTable;
// Metadata byte at offset 0x1E within highestScorersTable, loaded during top goal scorers display.
uint8_t scorerTableMeta;
uint8_t inMenuKeyboardBuffer[100];
// Stores the end-of-menu-entries offset relative to g_currentMenu after building DIY menu entry strings.
uint32_t menuDataOffset;
// Stores remaining free bytes between the current menu string write position and the scratch buffer limit.
uint32_t menuFreeSpace;
MenuEntry templateMenuEntry;
uint16_t exitMenu;
uint8_t spriteGraphics[4880];
// Number of sprites in spritesPtrArray
uint16_t numSpritesToRender;
Sprite * sortedSprites[78];
// ASCII string of initial funds from team offering job
uint8_t fundsBuffer[100];
uint8_t resultString[70];
// 2 Dword as a signature (08 00 00 00 5A F4 02 00), then 2 teams (general)
uint8_t hilFileBuffer[2044];
uint8_t hilGameName[100];
uint8_t hilGameRound[100];
// 0 = No hil file loaded; disable view and save highlights
// >0 = hil file loaded, all entries enabled
uint16_t hilNumGoals;
uint16_t hilTeam1Goals;
uint16_t hilTeam2Goals;
uint16_t hilPitchNumber;
uint16_t hilMaxSubstitutes;
uint8_t hilStartOfGoalsBuffer[19000];
// Hils are stored here during the game
uint8_t inGameHilBuffer[171000];
uint8_t assetLoaderMainRegion[195000];
const char aSensibleWorldO[] = "SENSIBLE WORLD OF SOCCER";
const char aCopyrightC1994[] = "Copyright (C) 1994/1995 Sensible Software (6/11/1996)";
const char aCopyrightC1994_0[] = "Copyright (C) 1994/1995 Chris Chapman (6/11/1996)";
const char aSwosVersion152[] = "SWOS VERSION 152";
const char a0611961355Asm6[] = "(06/11/96 13.55) ASM 6/11/1996";
const char aCj0611143807[] = "CJ0611143807";
const char * kDriveListPtrs[4] = { aDf0, aDf1, aDf2, aDf3 };
const char aDf0[] = "DF0:";
const char aDf1[] = "DF1:";
const char aDf2[] = "DF2:";
const char aDf3[] = "DF3:";
uint16_t assetResolveDummyWord = 0;
uint16_t assetCriticalDummyWord = 0;
uint16_t assetSavedSourceSlot = 0;
uint16_t assetSavedIndex = 0;
uint16_t assetSelect = 0;
uint8_t * assetBasePtr = 0;
uint8_t * assetAltBasePtr = 0;
uint32_t assetSourceVec[4] = { 0, 0, 0, 0 };
void * assetSource0 = 0;
void * assetSource1 = 0;
void * assetSource2 = 0;
void * assetSource3 = 0;
uint16_t assetCurrentSourceSlot = 0;
uint16_t assetCurrentIndex = 0;
uint16_t assetIndexStartBytes = 0;
uint16_t assetParamBlock = 0;
char assetFilename[50] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
uint8_t floppyTmpBuf0[10] = { 0 };
uint8_t floppyTmpBuf1[26] = { 0 };
uint16_t floppyIoStatusWord = 0;
uint16_t floppyIoErrorWord = 0;
uint16_t floppyIoCylinder = 0;
uint16_t floppyIoSector = 0;
uint16_t floppyIoMode = 0;
uint16_t floppyCurrentDrive = 0;
uint8_t floppyDriveFlags[32] = { 0 };
// Floppy drive head-position calibration table, one word per drive (up to 4).
uint8_t floppyStepPositions[8] = { 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF };
uint16_t gamePalette[16] = { 0x360, 0x999, 0xFFF, 0x0, 0x721, 0xA40, 0xF71, 0x250, 0x30, 0x370, 0xF00, 0xF, 0x702, 0x88F, 0x380, 0xFF0 };
uint8_t kTitleLogoColors[48] = { 0x0, 0x0, 0x22, 0xAA, 0x0, 0x0, 0xFF, 0xBB, 0x0, 0x33, 0x33, 0x33, 0x44, 0x33, 0xAA, 0x0, 0x88, 0x0, 0xCC, 0xCC, 0xCC, 0x88, 0x88, 0x88, 0x55, 0x55, 0x55, 0xFF, 0xFF, 0x99, 0xDD, 0xDD, 0x88, 0xBB, 0xBB, 0x77, 0x99, 0x99, 0x66, 0x77, 0x77, 0x44, 0x55, 0x55, 0x33, 0x33, 0x33, 0x22 };
uint8_t kTitleScreenColors[48] = { 0x0, 0x0, 0x23, 0x0, 0x0, 0x0, 0x23, 0x23, 0x23, 0x47, 0x47, 0x47, 0x77, 0x77, 0x77, 0x9B, 0x9B, 0x9B, 0xCF, 0xCF, 0xCF, 0xEF, 0xEF, 0xEF, 0x0, 0x33, 0xAB, 0x0, 0x8B, 0xCF, 0xEF, 0xCF, 0x33, 0x8B, 0x0, 0x0, 0xAB, 0x0, 0x0, 0xDF, 0x0, 0x0, 0x0, 0x67, 0x0, 0xFF, 0xFF, 0xFF };
uint8_t kTitleTextColors[48] = { 0x0, 0x0, 0x22, 0xFF, 0x0, 0x44, 0xFF, 0x0, 0x44, 0x0, 0x0, 0x44, 0xFF, 0x0, 0x44, 0xFF, 0x0, 0x44, 0xFF, 0x0, 0x44, 0xFF, 0x0, 0x44, 0x0, 0x0, 0x66, 0xFF, 0xFF, 0x99, 0xDD, 0xDD, 0x88, 0xBB, 0xBB, 0x77, 0x99, 0x99, 0x66, 0x77, 0x77, 0x44, 0x55, 0x55, 0x33, 0x33, 0x33, 0x22 };
uint16_t blackPalette[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t titleLogoPalette[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t titleScreenPalette[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t titleTextPalette[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t panicPalette[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15 };
uint16_t fadeStep = 0x20;
const char aSoundMenuSng[] = "sound/menu.sng";
const char aSoundMenuIns[] = "sound/menu.ins";
const char aSoundHeroSng[] = "sound/hero.sng";
const char aSoundHeroIns[] = "sound/hero.ins";
const char aSoundSfxSng[] = "sound/sfx.sng";
const char aSoundSfxIn1[] = "sound/sfx.in1";
const char aSoundSfxIn2[] = "sound/sfx.in2";
const char aGrafsSoccerSRa[] = "grafs/soccer_s.raw";
const char aDataPoolplyrDa[] = "data/poolplyr.dat";
const char aGrafsLoader00R[] = "grafs/loader00.raw";
const char aGrafsLoader01R[] = "grafs/loader01.raw";
const char aGrafsLoader1Ra[] = "grafs/loader1.raw";
const char aGrafsLoader2Ra[] = "grafs/loader2.raw";
const char aGrafsLoader3Ra[] = "grafs/loader3.raw";
const char aGrafsLoader4Ra[] = "grafs/loader4.raw";
const char aGrafsLoader5Ra[] = "grafs/loader5.raw";
const char aGrafsLoader6Ra[] = "grafs/loader6.raw";
const char aGrafsLoader7Ra[] = "grafs/loader7.raw";
const char aGrafsLoader8aR[] = "grafs/loader8a.raw";
const char aGrafsLoader8bR[] = "grafs/loader8b.raw";
const char aGrafsLoader9Ra[] = "grafs/loader9.raw";
const char aGrafsLoader10R[] = "grafs/loader10.raw";
const char aGrafsMenubgRaw[] = "grafs/menubg.raw";
const char aGrafsMenubg2Ra[] = "grafs/menubg2.raw";
const char aGrafsMenusRaw[] = "grafs/menus.raw";
const char aGrafsMenus2Raw[] = "grafs/menus2.raw";
const char aGrafsCharsetRa[] = "grafs/charset.raw";
const char aGrafsSwcpich1M[] = "grafs/swcpich1.map";
const char aGrafsSwcpich2M[] = "grafs/swcpich2.map";
const char aGrafsSwcpich3M[] = "grafs/swcpich3.map";
const char aGrafsSwcpich4M[] = "grafs/swcpich4.map";
const char aGrafsSwcpich5M[] = "grafs/swcpich5.map";
const char aGrafsSwcpich6M[] = "grafs/swcpich6.map";
const char aGrafsCjcbitsRa[] = "grafs/cjcbits.raw";
const char aGrafsCjcteam1R[] = "grafs/cjcteam1.raw";
const char aGrafsCjcteam2R[] = "grafs/cjcteam2.raw";
const char aGrafsCjcteam3R[] = "grafs/cjcteam3.raw";
const char aGrafsCjcteamgR[] = "grafs/cjcteamg.raw";
const char aGrafsCjcgrafsR[] = "grafs/cjcgrafs.raw";
const char aGrafsCjcbenchR[] = "grafs/cjcbench.raw";
const char aGrafsWinscrnRa[] = "grafs/winscrn.raw";
const char aGrafsTacticsRa[] = "grafs/tactics.raw";
const char aGrafsDisk22Raw[] = "grafs/disk22.raw";
const char aGrafsOlddisk1R[] = "grafs/olddisk1.raw";
const char aGrafsSocpicRaw[] = "grafs/socpic.raw";
uint32_t team1Filename = 0;
uint32_t team2Filename = 0;
uint16_t keyDelay = 0;
// Number of keys in the buffer
uint16_t keyCount = 0;
uint8_t keyBuffer[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t writeOnly01 = 1;
uint16_t lastVBlankServiceTick = 0;
uint8_t blank_bytes  = 0;
uint8_t keycodeLut[128] = { 0x27, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x30, 0x2D, 0x3D, 0x5C, 0x3F, 0xB0, 0x51, 0x57, 0x45, 0x52, 0x54, 0x59, 0x55, 0x49, 0x4F, 0x50, 0x5B, 0x5D, 0x3F, 0xB1, 0xB2, 0xB3, 0x41, 0x53, 0x44, 0x46, 0x47, 0x48, 0x4A, 0x4B, 0x4C, 0x3B, 0x27, 0x3F, 0x3F, 0xB4, 0xB5, 0xB6, 0x3F, 0x5A, 0x58, 0x43, 0x56, 0x42, 0x4E, 0x4D, 0x2C, 0x2E, 0x2F, 0x3F, 0x3F, 0xB7, 0xB8, 0xB9, 0x20, 0x7F, 0x3F, 0xD, 0xD, 0x1B, 0x7E, 0x3F, 0x3F, 0x3F, 0xAD, 0x3F, 0x10, 0x11, 0x12, 0x13, 0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0xA8, 0xA9, 0xAF, 0xAA, 0xAB, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F, 0x3F };
uint16_t copperListTemplate[160] = { 0x1401, 0xFFFE, 0x120, 0x0, 0x122, 0x0, 0x124, 0x0, 0x126, 0x0, 0x128, 0x0, 0x12A, 0x0, 0x12C, 0x0, 0x12E, 0x0, 0x130, 0x0, 0x132, 0x0, 0x134, 0x0, 0x136, 0x0, 0x138, 0x0, 0x13A, 0x0, 0x13C, 0x0, 0x13E, 0x0, 0x100, 0x4000, 0x102, 0x0, 0x104, 0x24, 0x106, 0xC00, 0x10C, 0x11, 0x108, 0x0, 0x10A, 0x0, 0x92, 0x28, 0x94, 0xD0, 0x8E, 0x2471, 0x90, 0x34C1, 0x180, 0x0, 0x182, 0x0, 0x184, 0x0, 0x186, 0x0, 0x188, 0x0, 0x18A, 0x0, 0x18C, 0x0, 0x18E, 0x0, 0x190, 0x0, 0x192, 0x0, 0x194, 0x0, 0x196, 0x0, 0x198, 0x0, 0x19A, 0x0, 0x19C, 0x0, 0x19E, 0x0, 0x1A0, 0x0, 0x1A2, 0x0, 0x1A4, 0x0, 0x1A6, 0x0, 0x1A8, 0x0, 0x1AA, 0x0, 0x1AC, 0x0, 0x1AE, 0x0, 0x1B0, 0x0, 0x1B2, 0x0, 0x1B4, 0x0, 0x1B6, 0x0, 0x1B8, 0x0, 0x1BA, 0x0, 0x1BC, 0x0, 0x1BE, 0x0, 0x2401, 0xFFFE, 0xE0, 0x0, 0xE2, 0x0, 0xE4, 0x0, 0xE6, 0x0, 0xE8, 0x0, 0xEA, 0x0, 0xEC, 0x0, 0xEE, 0x0, 0xFFE1, 0xFFFE, 0x1, 0xFFFE, 0xE0, 0x0, 0xE2, 0x0, 0xE4, 0x0, 0xE6, 0x0, 0xE8, 0x0, 0xEA, 0x0, 0xEC, 0x0, 0xEE, 0x0, 0xFFFF, 0xFFFE };
const char panicFormatStr[] = "%a";
char panicOutBuf[96] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
uint8_t pad_102555[9] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0xC0, 0xFC, 0x0, 0xA };
int16_t pitchFansConvertTable[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, -1, -1, 12, 13, 14, 15 };
uint16_t blitWordCount = 0;
uint32_t * maskBlitDestPtr = 0;
uint16_t maskBlitPendingBytesA = 0;
uint32_t * maskBlitSecondStreamPtr = 0;
uint16_t maskBlitPendingBytesB = 0;
int8_t fadeShiftMaskTable[20] = { 0, 4, 0, 0, 0, 3, 1, 17, 0, 2, 3, 51, 0, 1, 7, 119, 0, 0, 15, -1 };
uint16_t currentSpriteIndex = 0xFFFF;
// Synchronization flag in dead code; initialized to 1, spin loop tests it waiting for 0.
uint16_t syncWaitFlag = 1;
// Synchronization signal in dead code; set to 1 to indicate readiness.
uint16_t syncReadyFlag = 0;
uint16_t int5SerialBusBufferFull = 0;
uint32_t * oldStackPtr = 0;
uint32_t * tmpStackPtr = ReturnFromFunction;
uint16_t isrTrampolineGuard[201] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t leftMaskTable[15] = { 0x8000, 0xC000, 0xE000, 0xF000, 0xF800, 0xFC00, 0xFE00, 0xFF00, 0xFF80, 0xFFC0, 0xFFE0, 0xFFF0, 0xFFF8, 0xFFFC, 0xFFFE };
uint16_t partialSpanMaskTable[16] = { 0x4E75, 0x1, 0x3, 0x7, 0xF, 0x1F, 0x3F, 0x7F, 0xFF, 0x1FF, 0x3FF, 0x7FF, 0xFFF, 0x1FFF, 0x3FFF, 0x7FFF };
uint16_t tailMaskTable[16] = { 0xFFFF, 0x8000, 0xC000, 0xE000, 0xF000, 0xF800, 0xFC00, 0xFE00, 0xFF00, 0xFF80, 0xFFC0, 0xFFE0, 0xFFF0, 0xFFF8, 0xFFFC, 0xFFFE };
uint16_t firstWordMaskTable[16] = { 0xFFFF, 0x7FFF, 0x3FFF, 0x1FFF, 0xFFF, 0x7FF, 0x3FF, 0x1FF, 0xFF, 0x7F, 0x3F, 0x1F, 0xF, 0x7, 0x3, 0x1 };
uint16_t lastWordMaskTable[16] = { 0x8000, 0xC000, 0xE000, 0xF000, 0xF800, 0xFC00, 0xFE00, 0xFF00, 0xFF80, 0xFFC0, 0xFFE0, 0xFFF0, 0xFFF8, 0xFFFC, 0xFFFE, 0xFFFF };
uint16_t overlayActiveFlag = 0;
uint16_t plane01BandTopY = 0;
uint16_t plane23BandTopY = 0;
uint8_t pad_104F12[2] = { 0x77, 0x77 };
uint8_t occlMinYBuckets[10] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint8_t occlMinYBucketsActive[52] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint8_t pad_104F52[2] = { 0x77, 0x77 };
uint16_t bltconShiftBase = 0;
uint16_t textBlitPlaneMask = 0;
uint16_t textBlitHeightLines = 0;
uint32_t * blitSrcA_MaskPtr = 0;
uint32_t * blitSrcB_GlyphPtr = 0;
uint16_t bltconShiftBase_glyph = 0;
uint16_t glyphBlitPlaneMask = 0;
uint16_t glyphHeightLinesCache = 0;
uint32_t blitSrcA_MaskPtr_glyph = 0;
uint32_t blitSrcB_GlyphPtr_glyph = 0;
uint16_t dstRowBytesPerPlane = 0;
uint8_t dstRowAdvanceBytes[56] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
const char aSwos4Dk1[] = "swos4.dk1";
const char aSwos4Dk2[] = "swos4.dk2";
const char aSwos4Dku[] = "swos4.dku";
const char aGrafsDisk2Raw[] = "grafs/disk2.raw";
void * assetLoaderCacheFlag = 0;
uint32_t * assetLoaderWorkPtr = 0;
uint16_t assetLoaderAltPathReady = 0;
uint8_t LoaderBootstrapBlobPI[2226] = { 0x26, 0xBC, 0xCF, 0xD1, 0xEF, 0xE7, 0x20, 0x13, 0x4E, 0x75, 0x26, 0xBC, 0x71, 0x58, 0x3E, 0xFC, 0x20, 0x13, 0x4E, 0x75, 0x23, 0xDF, 0x0, 0x0, 0x0, 0x10, 0x20, 0x4F, 0x4E, 0x7A, 0x0, 0x2, 0x2F, 0x40, 0x0, 0x3C, 0x2, 0x80, 0x7F, 0xFF, 0x7E, 0xFE, 0x4E, 0x7B, 0x0, 0x2, 0x2E, 0x48, 0x4C, 0xFA, 0x7F, 0xFF, 0x0, 0x2, 0x2F, 0x3C, 0x4E, 0x73, 0x0, 0x0, 0x2F, 0x3C, 0x0, 0x0, 0x0, 0x10, 0x2F, 0x3C, 0x0, 0x4, 0xDD, 0xB9, 0x2F, 0x3C, 0xBD, 0x96, 0xBD, 0xAE, 0x2F, 0x3C, 0xB3, 0x86, 0xB5, 0x86, 0x2F, 0x3C, 0xD0, 0x46, 0xD2, 0x46, 0x2F, 0x3C, 0x2, 0x46, 0xA7, 0x1F, 0x2F, 0x3C, 0x0, 0x2, 0x3C, 0x17, 0x2F, 0x3C, 0x0, 0x4, 0x2C, 0x6F, 0x2F, 0x3C, 0xBD, 0x96, 0xBD, 0xAE, 0x23, 0xCF, 0x0, 0x0, 0x0, 0x24, 0x0, 0x7C, 0xA7, 0x1F, 0x5C, 0xB9, 0x0, 0x0, 0x0, 0x24, 0x72, 0x85, 0x71, 0x2C, 0x2F, 0x18, 0x6D, 0x85, 0xDA, 0x2C, 0x2F, 0x34, 0x6D, 0x85, 0x83, 0x54, 0x2F, 0x2C, 0xE9, 0xBD, 0x6B, 0x3E, 0x27, 0x39, 0xBE, 0x34, 0x73, 0x3D, 0x72, 0x3D, 0xBF, 0x93, 0xA9, 0x68, 0x6F, 0x39, 0x6D, 0x7C, 0xE8, 0x76, 0xBF, 0x93, 0xD, 0x35, 0x7E, 0xBF, 0x90, 0xC5, 0x5F, 0x6, 0x2F, 0x18, 0x6F, 0xBD, 0x92, 0xC0, 0xE4, 0x78, 0xFF, 0xBF, 0x41, 0x5F, 0x65, 0x45, 0xF2, 0xCD, 0x27, 0xFD, 0x5B, 0x3, 0x9E, 0xB2, 0xC8, 0x54, 0x16, 0x7F, 0xD5, 0x74, 0x53, 0xD1, 0x24, 0xF8, 0x68, 0x3, 0x65, 0xFD, 0x94, 0xC1, 0x27, 0x39, 0x93, 0x77, 0x84, 0xC2, 0x7A, 0x3E, 0x40, 0x6C, 0x8D, 0x3, 0x6F, 0x39, 0x92, 0x43, 0x6B, 0xB8, 0xD8, 0xC2, 0x61, 0x70, 0x79, 0xB5, 0xA6, 0x9, 0x27, 0xF9, 0x1C, 0x91, 0x8, 0x3, 0xCD, 0x90, 0x12, 0xFF, 0x8E, 0x9E, 0xFE, 0xBF, 0x6F, 0x3A, 0x59, 0x4D, 0xD0, 0xE7, 0x74, 0xB4, 0x5, 0xA, 0x27, 0xBF, 0x54, 0xBC, 0xFF, 0xBF, 0xED, 0xC6, 0x2, 0x85, 0x3D, 0x90, 0xED, 0x38, 0x94, 0x83, 0x2F, 0xBD, 0x89, 0xCA, 0x8E, 0xDE, 0x47, 0x43, 0x98, 0xBD, 0xB, 0x3C, 0xC8, 0x74, 0xE9, 0x80, 0xFB, 0xC3, 0x8C, 0xCD, 0xFC, 0x39, 0x0, 0x40, 0x7C, 0x42, 0xFF, 0x7A, 0xAE, 0x14, 0xEC, 0xB4, 0xDC, 0xB5, 0xF5, 0x12, 0xFF, 0x5E, 0x7A, 0x3D, 0x6F, 0xD5, 0x4B, 0x28, 0x6F, 0x39, 0x1D, 0x4F, 0xC, 0xF3, 0x30, 0xC2, 0x2F, 0x18, 0xF6, 0x39, 0x78, 0xB8, 0x40, 0x83, 0x3D, 0xC2, 0xFF, 0x5E, 0x6F, 0xBD, 0x42, 0xC6, 0xFE, 0x7F, 0x2F, 0xF9, 0xA3, 0x45, 0xB5, 0x3, 0x10, 0xD7, 0x27, 0xFD, 0xCF, 0x65, 0xD2, 0x39, 0xCD, 0xB7, 0xAB, 0x89, 0x3D, 0x2B, 0xC6, 0x5, 0x9E, 0xC2, 0xFF, 0x39, 0x3C, 0xC9, 0x41, 0x0, 0x44, 0x39, 0xC0, 0x40, 0x14, 0x11, 0x10, 0x3F, 0x7D, 0xA6, 0xBB, 0x39, 0xDA, 0x46, 0x8E, 0x11, 0x6C, 0x7F, 0x69, 0x46, 0xCD, 0x46, 0x9E, 0x2A, 0xF5, 0x3F, 0x9, 0x4E, 0xA, 0x5, 0xDB, 0x18, 0x18, 0x2A, 0xD2, 0x40, 0x29, 0xB8, 0xAF, 0x31, 0xD1, 0x7, 0xF7, 0xBB, 0x16, 0x96, 0x48, 0xFF, 0x7E, 0xC, 0x29, 0x56, 0xC8, 0xFF, 0xDA, 0x0, 0xC0, 0x7B, 0x59, 0xCB, 0xB5, 0x3F, 0x2E, 0x73, 0x4A, 0x5, 0xFC, 0x25, 0x92, 0x80, 0x9B, 0x87, 0x4E, 0x8F, 0x71, 0x2B, 0x92, 0x80, 0x80, 0xCF, 0x4E, 0x8F, 0x72, 0x49, 0x52, 0x41, 0x43, 0x41, 0x92, 0x6, 0xDC, 0x35, 0x9, 0x47, 0x29, 0x46, 0xB8, 0x4F, 0x57, 0xD3, 0x9A, 0x46, 0x3, 0x96, 0x26, 0x7D, 0xB9, 0x8C, 0xA, 0x7C, 0x9A, 0x67, 0xBC, 0xBB, 0x2E, 0x8F, 0xFF, 0xBD, 0xB9, 0x8C, 0xAE, 0x79, 0x9A, 0x67, 0xBF, 0x3B, 0xFF, 0x77, 0xE0, 0x11, 0xBD, 0xB9, 0x9B, 0x17, 0x48, 0xBF, 0x88, 0x75, 0x21, 0xE, 0x3A, 0xFA, 0xDA, 0x40, 0x9B, 0x8, 0xB5, 0x7F, 0x49, 0xF5, 0x48, 0x45, 0x99, 0xA3, 0x2, 0x81, 0x87, 0x47, 0x2B, 0x31, 0xA4, 0xB7, 0x64, 0xAE, 0xBA, 0x7, 0xAE, 0x9B, 0x56, 0x85, 0xE0, 0xD4, 0x66, 0x36, 0xD0, 0x8, 0xAA, 0x87, 0x74, 0x7F, 0xC5, 0x81, 0x30, 0xFA, 0x32, 0x38, 0xBB, 0x3F, 0x5F, 0x7, 0x50, 0x81, 0xC5, 0xFD, 0xE3, 0x13, 0x78, 0xBA, 0x9A, 0xBD, 0xA2, 0xC7, 0xB3, 0xAF, 0xB3, 0x7E, 0x57, 0xC6, 0xB4, 0x3B, 0x67, 0xCE, 0x78, 0x39, 0x94, 0xB, 0xB3, 0x8D, 0xCF, 0x82, 0x62, 0x7C, 0x70, 0x5F, 0xBF, 0x4F, 0x3A, 0x38, 0x70, 0xCD, 0x34, 0xFF, 0xB2, 0x8F, 0x25, 0x50, 0x78, 0xFA, 0x5C, 0x90, 0xF0, 0x5D, 0x34, 0xFF, 0xB2, 0x9F, 0x41, 0xA8, 0x26, 0xF2, 0xCC, 0x34, 0x78, 0xBE, 0xB6, 0x5A, 0x62, 0x5E, 0x92, 0xF7, 0x78, 0xA2, 0x2, 0xA5, 0xA1, 0xFF, 0xB2, 0xDB, 0x9, 0xBC, 0x53, 0xB4, 0xA0, 0x14, 0x70, 0x5F, 0x7C, 0x1F, 0x34, 0x79, 0xB2, 0x9B, 0x95, 0xD0, 0x2C, 0x7A, 0xE7, 0x9C, 0xE0, 0xD4, 0x9A, 0x42, 0xFA, 0x9B, 0x32, 0x3B, 0x7D, 0xD4, 0x5F, 0x7, 0x95, 0xDC, 0xC1, 0xFD, 0x26, 0x4E, 0xF6, 0x2B, 0xC7, 0x5E, 0xA8, 0xBB, 0xB4, 0xEB, 0x30, 0xFA, 0x43, 0x52, 0xBB, 0x3F, 0xBE, 0xE8, 0x12, 0xFC, 0x1, 0x35, 0x23, 0x3B, 0x2E, 0x6D, 0xE0, 0x67, 0xD1, 0x57, 0x32, 0x31, 0xB6, 0xC7, 0xFF, 0xF0, 0xA3, 0xBA, 0xD4, 0x54, 0x5F, 0x7, 0xFA, 0x6F, 0xA0, 0x3D, 0x28, 0x39, 0x9, 0xD2, 0x3A, 0x77, 0xA4, 0xB7, 0xEA, 0x1B, 0xBA, 0x39, 0x45, 0x95, 0x78, 0x7B, 0x3C, 0xC3, 0x57, 0x99, 0x6, 0xF1, 0x9, 0xD4, 0x28, 0xA1, 0xA4, 0xB7, 0x89, 0x2D, 0xEB, 0x60, 0x5F, 0x7, 0x61, 0x49, 0xC1, 0xFD, 0xD2, 0xDB, 0xB5, 0xDD, 0x32, 0x38, 0xD0, 0x92, 0xCF, 0x9D, 0x2A, 0x29, 0x70, 0x40, 0x5A, 0x99, 0xAB, 0xA4, 0x45, 0x51, 0x78, 0x67, 0x2, 0xD3, 0x59, 0x5A, 0xA, 0x56, 0x9, 0xD0, 0x4, 0x58, 0x5F, 0x18, 0x4B, 0xD3, 0x3E, 0x57, 0x2E, 0x2D, 0x76, 0x44, 0x4D, 0xCE, 0x5F, 0x18, 0xF5, 0x2A, 0x16, 0x26, 0x2E, 0x2D, 0x48, 0x36, 0xCE, 0x56, 0x5F, 0x18, 0xB3, 0xCE, 0xC1, 0xB4, 0x2E, 0x2D, 0xC0, 0x5E, 0x1, 0x19, 0x5F, 0x18, 0xBE, 0x2A, 0xA0, 0x9D, 0x2E, 0x2D, 0x5, 0xD2, 0x21, 0x39, 0x5F, 0x18, 0xE6, 0x1E, 0x70, 0x24, 0x2E, 0x2D, 0x29, 0xB9, 0x1, 0x1B, 0x5F, 0x18, 0x89, 0xCE, 0xC1, 0xB4, 0x2E, 0x2D, 0xCA, 0x5E, 0x1, 0x19, 0x5F, 0x18, 0xFB, 0xAA, 0xA0, 0x9D, 0x2E, 0x2D, 0x42, 0xD2, 0x21, 0x39, 0x5F, 0x18, 0x20, 0xAF, 0x70, 0x24, 0x2E, 0x2D, 0x0, 0xAA, 0xFE, 0xEE, 0x5F, 0x18, 0xC, 0x31, 0xF0, 0xA4, 0x2E, 0x2D, 0x54, 0x27, 0x4F, 0x60, 0x5F, 0x18, 0xC8, 0x52, 0x3E, 0x55, 0x2E, 0x2D, 0x87, 0xC0, 0xBC, 0xBF, 0x53, 0xD8, 0x5, 0xDE, 0x70, 0x34, 0x5, 0xDE, 0x0, 0xC, 0x22, 0xDE, 0xC5, 0xD6, 0x1, 0x35, 0xC3, 0x6F, 0x1, 0x35, 0xC5, 0xDA, 0x1, 0x35, 0x0, 0x24, 0x3D, 0x1A, 0x0, 0x9C, 0x3D, 0x5C, 0xF8, 0x63, 0x2, 0x1A, 0xF8, 0x71, 0x22, 0x35, 0xF8, 0x9, 0x0, 0x1A, 0xF8, 0x75, 0x48, 0xFD, 0xC7, 0x85, 0x3C, 0xFD, 0x21, 0x15, 0xDE, 0x6F, 0xC6, 0x85, 0xCA, 0x6F, 0xE0, 0x84, 0xB4, 0x6C, 0x9C, 0x84, 0xD5, 0x6C, 0x9D, 0x94, 0xB2, 0x62, 0xED, 0x95, 0xD3, 0x62, 0xEF, 0x47, 0xB2, 0x62, 0xED, 0xEB, 0xD3, 0x62, 0xED, 0xC3, 0xB2, 0x62, 0xEC, 0xE7, 0xF8, 0xE4, 0x8A, 0xE9, 0xB2, 0x66, 0xE0, 0xE3, 0xE0, 0x64, 0xE2, 0xE1, 0xE0, 0x67, 0xB3, 0x2E, 0x1F, 0xBF, 0xD2, 0x2E, 0x1F, 0x75, 0xE0, 0x2C, 0x3F, 0x73, 0xAC, 0xF3, 0x30, 0x8F, 0xCC, 0xF3, 0x33, 0x37, 0x9D, 0x7C, 0x1C, 0x4B, 0x9D, 0x7C, 0x33, 0x33, 0x9D, 0x78, 0x3, 0xF, 0x14, 0x6C, 0x31, 0x33, 0x14, 0x5E, 0x70, 0xC9, 0x17, 0x34, 0x11, 0xC9, 0x16, 0x18, 0x7A, 0xC9, 0x16, 0x9C, 0x48, 0xF5, 0x16, 0x9B, 0xD8, 0x6D, 0x47, 0x52, 0x27, 0x91, 0xF7, 0xEE, 0x82, 0xE2, 0x24, 0x7E, 0xE4, 0x38, 0x65, 0x84, 0xE7, 0x74, 0x61, 0x2B, 0xE7, 0x74, 0x65, 0x85, 0xE7, 0x70, 0x2, 0xE7, 0xD7, 0x4C, 0x8B, 0xF6, 0xB6, 0x4C, 0x8A, 0xCC, 0xD1, 0x14, 0x86, 0x9C, 0xFB, 0x85, 0xE0, 0x7A, 0xD5, 0x5, 0xD0, 0x46, 0x5C, 0x17, 0xB1, 0x46, 0x5D, 0x3F, 0xD6, 0x0, 0x51, 0x6F, 0x7C, 0x92, 0x37, 0x9F, 0x5E, 0x92, 0x17, 0x88, 0x3F, 0x92, 0x17, 0xB6, 0x54, 0x58, 0x27, 0x8A, 0xDD, 0x4C, 0x46, 0x8A, 0xDC, 0x42, 0x21, 0xA6, 0xD0, 0x12, 0x8B, 0x32, 0xB6, 0xE2, 0xA9, 0x25, 0xD7, 0xC4, 0xC2, 0x91, 0xE7, 0xF8, 0x4B, 0xC0, 0x86, 0xF8, 0x4A, 0x9C, 0x36, 0x84, 0x49, 0x30, 0x5B, 0x96, 0xF9, 0x4C, 0x5E, 0xAA, 0x97, 0x40, 0x6C, 0x96, 0x97, 0x4B, 0xB0, 0x10, 0xB, 0xD3, 0xE1, 0xD9, 0xF4, 0x29, 0xB1, 0x56, 0xBA, 0x5C, 0x21, 0xD7, 0xD1, 0x4C, 0xE1, 0x2B, 0xD1, 0x28, 0x61, 0xEA, 0x61, 0x14, 0x61, 0xE8, 0xC, 0x10, 0x11, 0xE8, 0x42, 0x65, 0x61, 0x17, 0xC, 0x10, 0x20, 0xED, 0xE, 0xD0, 0x12, 0xD1, 0xE, 0xC9, 0x32, 0xED, 0xE, 0xCC, 0xC9, 0x93, 0xCE, 0x30, 0xC9, 0x82, 0x9C, 0xB0, 0xF9, 0x42, 0xCD, 0x79, 0x6, 0xB4, 0x83, 0xC, 0x67, 0xB4, 0x83, 0x34, 0x6, 0xB4, 0x82, 0xE8, 0x3C, 0xB4, 0xD0, 0xA8, 0x5B, 0xAC, 0xD8, 0x91, 0x5B, 0xAE, 0xD0, 0x17, 0xBB, 0xAD, 0xB6, 0x19, 0xCB, 0xAF, 0xD7, 0x19, 0xCA, 0x1, 0xDF, 0x20, 0xCA, 0x3, 0xD7, 0xA6, 0x2A, 0x0, 0x99, 0xD3, 0x1A, 0x5, 0xF2, 0xDF, 0x7B, 0x5, 0xF3, 0x43, 0x31, 0x83, 0x94, 0x59, 0x7B, 0x80, 0xF3, 0x4F, 0x35, 0xF5, 0x83, 0xB0, 0x26, 0x35, 0x83, 0xF, 0xE4, 0xF5, 0x8B, 0x8F, 0xE4, 0xF2, 0xEA, 0x87, 0x94, 0xEC, 0x8A, 0x87, 0x96, 0xF2, 0xFA, 0x78, 0x85, 0x32, 0xFA, 0xC7, 0x47, 0xF2, 0xAC, 0xC5, 0x42, 0x72, 0xBF, 0x5, 0x42, 0xCD, 0x7D, 0xC5, 0x47, 0xD, 0x6E, 0x5, 0x47, 0xB2, 0xAC, 0xC5, 0x10, 0xB0, 0xE2, 0xB0, 0x71, 0xB0, 0xE2, 0x48, 0x93, 0xF9, 0xE2, 0x9, 0x13, 0xF9, 0xD1, 0x48, 0x13, 0xDD, 0xE2, 0x9, 0x13, 0xF9, 0xC2, 0x35, 0x13, 0xF9, 0xE9, 0xB1, 0x72, 0xF9, 0xEB, 0xB7, 0x7A, 0xD0, 0xEB, 0xB6, 0x72, 0xE6, 0x8D, 0xB8, 0x13, 0xE6, 0x8C, 0x54, 0x75, 0x14, 0xED, 0x54, 0x75, 0xE8, 0x9D, 0xAB, 0x3B, 0x9D, 0xFC, 0xAB, 0x3B, 0x69, 0x8C, 0xAB, 0x75, 0x1C, 0xAA, 0xE3, 0x14, 0x1C, 0xAA, 0x5F, 0x26, 0x20, 0x2A, 0x5F, 0x9, 0x1C, 0xD5, 0xA9, 0x68, 0x55, 0xFA, 0x95, 0x2, 0xAD, 0x84, 0x61, 0x2D, 0x91, 0xCE, 0x48, 0x2, 0xB7, 0xE1, 0x74, 0x70, 0xB7, 0x9C, 0xC9, 0x5F, 0x8B, 0xF6, 0x33, 0x66, 0x76, 0xD9, 0xF, 0x54, 0x5F, 0xF6, 0x29, 0x7B, 0x63, 0x9C, 0xD3, 0x42, 0x9E, 0xB3, 0xEF, 0x70, 0xB7, 0x9C, 0xC9, 0x5F, 0x8B, 0x9C, 0xD3, 0x17, 0x4F, 0xB3, 0xEF, 0x1F, 0x66, 0x9C, 0xD7, 0x30, 0x5A, 0xAC, 0xEB, 0x1C, 0x98, 0x9F, 0xAA, 0x1C, 0xBC, 0xAC, 0xEB, 0x1C, 0x98, 0x88, 0xA4, 0xD3, 0xDF, 0xC7, 0x4B, 0xD3, 0xF3, 0xA6, 0x4B, 0xD3, 0x63, 0x86, 0x4A, 0x9D, 0x16, 0xE7, 0x4A, 0x9D, 0x4C, 0xD5, 0x76, 0x1D, 0x4C, 0xFA, 0x4A, 0x53, 0x3D, 0x9B, 0x3, 0x7C, 0x1, 0x46, 0x3, 0x34, 0xD3, 0x69, 0x3F, 0x34, 0xD7, 0x46, 0xBC, 0x1B, 0xEB, 0x14, 0xFD, 0x3C, 0xEE, 0x3B, 0xC1, 0x3C, 0xF4, 0x7E, 0xFF, 0x13, 0xC8, 0xA3, 0xFF, 0x2C, 0xDD, 0x8C, 0xC3, 0x2C, 0xD9, 0xA3, 0x40, 0x3, 0xE5, 0xD1, 0x40, 0x24, 0xE0, 0xFE, 0x7C, 0x24, 0xFA, 0xB6, 0xB8, 0xB, 0xC6, 0xBE, 0x91, 0x24, 0xFE, 0x8D, 0xD0, 0x24, 0xDA, 0xBE, 0x91, 0x24, 0xFE, 0x9A, 0xDE, 0xEB, 0xB9, 0xD5, 0x31, 0xEB, 0x91, 0xB4, 0x31, 0xEB, 0xA5, 0x94, 0x30, 0xA5, 0xD0, 0xD7, 0xC9, 0xA5, 0xF, 0x64, 0x30, 0x96, 0x73, 0x24, 0x30, 0xA5, 0x2B, 0x7, 0x78, 0xA5, 0xB, 0x34, 0x38, 0xA5, 0x75, 0x7, 0x44, 0x25, 0x65, 0x34, 0xAE, 0x16, 0x19, 0x52, 0xAE, 0x25, 0xFB, 0x61, 0xD2, 0xB0, 0xFB, 0x52, 0x30, 0x83, 0x87, 0x52, 0x32, 0xB0, 0x67, 0x1C, 0x47, 0x83, 0x1B, 0x1C, 0x45, 0xB0, 0xFB, 0x2F, 0x39, 0xF0, 0xFB, 0x1C, 0x61, 0xC3, 0x87, 0x18, 0x61, 0xF0, 0x65, 0x56, 0x14, 0xD0, 0x59, 0x56, 0x14, 0xFB, 0xDD, 0x37, 0x14, 0xFB, 0x1, 0x3F, 0x2D, 0xFB, 0x4, 0x37, 0xAB, 0x1B, 0x0, 0x50, 0xA1, 0x7A, 0x0, 0x50, 0x61, 0x1C, 0xF0, 0x20, 0x9E, 0x52, 0x85, 0x50, 0x9E, 0x1C, 0xF0, 0x6F, 0x9E, 0xFE, 0xBC, 0x8D, 0xD6, 0x8C, 0xBC, 0x1D, 0x92, 0xE6, 0xB8, 0x6F, 0x6D, 0xA2, 0xF8, 0xE, 0x6D, 0xA2, 0xCC, 0x36, 0x72, 0xC2, 0xAC, 0x44, 0x27, 0xCA, 0x95, 0x44, 0x23, 0xC2, 0x13, 0xA4, 0x26, 0xA5, 0x7, 0x8B, 0x27, 0xD5, 0x6, 0xF9, 0xD8, 0xB4, 0x6, 0xF9, 0xC2, 0x96, 0x19, 0xA8, 0xB, 0x69, 0xF1, 0x98, 0xA, 0x27, 0x84, 0xE0, 0xA, 0x46, 0x84, 0xE0, 0x36, 0x36, 0xD1, 0x70, 0x77, 0xE6, 0x91, 0x3E, 0x2, 0xAC, 0x91, 0x59, 0x2E, 0x93, 0x91, 0x38, 0x2E, 0x93, 0xA7, 0x72, 0x2F, 0xF5, 0xA3, 0x7A, 0xAF, 0xF5, 0xA2, 0x72, 0x2F, 0xF5, 0xA2, 0x61, 0xEF, 0xF5, 0x1D, 0xA3, 0x2F, 0xFD, 0xDD, 0xA3, 0x2F, 0xEE, 0x1D, 0xA3, 0x90, 0x2C, 0xDD, 0xD3, 0x94, 0x4D, 0xED, 0xE3, 0x8B, 0x1E, 0xED, 0x85, 0x5B, 0x50, 0x98, 0xE4, 0x5B, 0x50, 0x92, 0xF7, 0x9B, 0x50, 0x2D, 0x35, 0x5B, 0x1E, 0x58, 0x25, 0x62, 0x1E, 0xE7, 0xE4, 0x5B, 0x1E, 0xE7, 0xE4, 0x24, 0x48, 0xE5, 0xE1, 0xA4, 0x1F, 0xE7, 0xE9, 0xA0, 0x1F, 0xE7, 0x8E, 0xA4, 0x17, 0x67, 0x8E, 0xA6, 0x59, 0x12, 0xEF, 0xA6, 0x59, 0x32, 0xE7, 0x9F, 0x59, 0x32, 0xEF, 0x19, 0x87, 0x32, 0x89, 0xEF, 0xD4, 0xB2, 0xEF, 0x1, 0x9A, 0xC7, 0xE7, 0x38, 0x9A, 0xC7, 0xEF, 0xBE, 0x44, 0xC7, 0x89, 0xA2, 0x17, 0x47, 0xEE, 0xBA, 0x4, 0xBB, 0xEE, 0xB2, 0x17, 0xF8, 0x30, 0xBA, 0x4, 0x4, 0x30, 0x76, 0x17, 0x47, 0xE4, 0xBA, 0x4, 0xBB, 0xE4, 0xB8, 0x17, 0xF8, 0x31, 0xBA, 0x59, 0x8D, 0x8F, 0x63, 0x85, 0x94, 0xDE, 0xD5, 0xCC, 0x26, 0x8E, 0x87, 0x76, 0xF8, 0xE6, 0x79, 0x4E, 0xA, 0x2E, 0xAB, 0x19, 0x5C, 0xAF, 0x1D, 0xA0, 0xEE, 0xAF, 0xCF, 0xAC, 0xC0, 0x78, 0xC1, 0x4, 0xD2, 0x51, 0xF3, 0x71, 0x24, 0x83, 0x65, 0xB9, 0xB6, 0x55, 0x17, 0xA6, 0x88, 0xF, 0x9, 0xFF, 0x9A, 0xF9, 0x3B, 0x8C, 0xEC, 0x31, 0xBA, 0x59, 0x8D, 0x7C, 0x55, 0x59, 0xF5, 0x31, 0xBA, 0x59, 0x8D, 0x1D, 0xD4, 0x59, 0xA1, 0x31, 0x54, 0x14, 0x4E, 0x31, 0x2C, 0x38, 0x8E, 0x1D, 0xED, 0x48, 0x8E, 0x6F, 0xED, 0x5, 0x74, 0x6F, 0xFD, 0x29, 0x5A, 0x90, 0x1, 0xF5, 0xE3, 0x90, 0x1, 0x29, 0x52, 0x90, 0x7D, 0x8E, 0x4D, 0x96, 0xC4, 0x8E, 0x4D, 0x90, 0x39, 0x8E, 0x4D, 0x0, 0x24, 0x4F, 0x81, 0xA7, 0x0, 0x90, 0x2D, 0xBF, 0x41, 0xD8, 0xFF, 0xDE, 0xE, 0xBF, 0x41, 0xFF, 0x4F, 0x92, 0x2A, 0xBF, 0x41, 0xEB, 0xDF, 0xEF, 0x82, 0xBF, 0x41, 0xE8, 0xEE, 0x90, 0x1, 0xBF, 0x41, 0x8A, 0x4C, 0x90, 0xC3, 0xBF, 0x41, 0xFE, 0x80, 0xF6, 0x87, 0xBF, 0x41, 0xC0, 0x6, 0xD2, 0xE4, 0xBF, 0x41, 0xC1, 0xFA, 0xB0, 0x76, 0xBF, 0x41, 0x85, 0xD8, 0xC9, 0xFD, 0xBF, 0x41, 0xC1, 0xFA, 0xF0, 0x7B, 0xBF, 0x41, 0x84, 0x20, 0xC9, 0xFD, 0xBF, 0x41, 0x76, 0xC0, 0x43, 0xBD, 0xBF, 0x41, 0x14, 0xC0, 0xFF, 0x71, 0xBF, 0x41, 0x87, 0x2, 0xF7, 0x5D, 0xBF, 0x41, 0xE9, 0x7B, 0x90, 0x7F, 0xBF, 0x41, 0x87, 0x2E, 0x90, 0xC5, 0xBF, 0x41, 0xEA, 0xFA, 0x6F, 0x93, 0xBF, 0x41, 0xA7, 0x0, 0x90, 0x6D, 0xBF, 0x41, 0xA7, 0x14, 0xB3, 0xA2, 0xBF, 0x41, 0xA7, 0x4, 0xD8, 0x7, 0xBF, 0x41, 0x1A, 0x96, 0x2D, 0xD3, 0xD1, 0x87, 0xA7, 0x2E, 0xB2, 0x35, 0x3, 0x81, 0xA7, 0x8, 0x90, 0x7D, 0xB4, 0x1, 0xA7, 0x8, 0x90, 0x7D, 0xB6, 0x1, 0xA7, 0x8, 0x90, 0x7D, 0xB8, 0x34, 0x49, 0x81, 0xA7, 0x8, 0x90, 0x7D, 0xB3, 0xB2, 0xA7, 0x8, 0x90, 0x59, 0x4E, 0x71, 0x4E, 0x75 };
uint16_t crowdEventFlags = 0;
uint16_t sfxQueueCount = 0;
uint16_t sfxQueueWriteIdx = 0;
uint16_t endOfHalfWriteOnly = 0;
// Gets set to some value after goal is scored, and counts down to zero
// probably something with patterns, or samples
uint16_t goalCounter = 0;
uint16_t pendingSampleId3_4 = 0;
int16_t crowdChantsOn = 1;
uint16_t cameraMoveToShowerLatch = 0xFFFF;
uint8_t pad_106CFE[2] = { 0, 0 };
uint16_t lastKickSampleTick = 0xFFFF;
uint8_t audioDbgFlagA  = 0;
uint8_t pad_106D03  = 0;
uint16_t audioActive = 0;
uint16_t audioBankLoaded = 0;
uint8_t pad_106D08[2] = { 0, 0 };
uint16_t crowdSamples[4] = { 0x37, 0x38, 0x3A, 0x3E };
uint16_t currentCrowdSample = 0;
uint16_t fadeInChantTimer = 0;
uint16_t nextChantTimer = 0;
uint16_t fadeOutChantTimer = 0;
uint16_t crowdChantVolume = 0;
const char aCodedByAndiSmi[] = "CODED BY ANDI SMITHERS, VECTORDEAN (C) MILLENNIUM 1992";
uint16_t kAmigaNotePeriodTable[36] = { 453, 480, 508, 538, 570, 604, 640, 678, 720, 762, 808, 856, 226, 240, 254, 269, 285, 302, 320, 339, 360, 381, 404, 428, 113, 120, 127, 135, 143, 151, 160, 170, 180, 190, 202, 214 };
AudioChannel audioChannel0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
AudioChannel audioChannel1 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
AudioChannel audioChannel2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
AudioChannel audioChannel3 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
AudioState audioState = { 0, { 0 }, 0, 0, 0, 0, 0, 0, { 0 }, 0, 0 };
int16_t kSineCosineTable[256] = { 0, 804, 1608, 2410, 3212, 4011, 4808, 5602, 6393, 7179, 7962, 8739, 9512, 10278, 11039, 11793, 12539, 13279, 14010, 14732, 15446, 16151, 16846, 17530, 18204, 18867, 19519, 20159, 20787, 21402, 22005, 22594, 23170, 23731, 24279, 24811, 25329, 25832, 26319, 26790, 27245, 27683, 28105, 28510, 28898, 29268, 29621, 29956, 30273, 30571, 30852, 31113, 31356, 31580, 31785, 31971, 32137, 32285, 32412, 32521, 32609, 32678, 32728, 32757, 32767, 32757, 32728, 32678, 32609, 32521, 32412, 32285, 32137, 31971, 31785, 31580, 31356, 31113, 30852, 30571, 30273, 29956, 29621, 29268, 28898, 28510, 28105, 27683, 27245, 26790, 26319, 25832, 25329, 24812, 24279, 23731, 23170, 22594, 22005, 21403, 20787, 20159, 19519, 18868, 18204, 17530, 16846, 16151, 15446, 14732, 14010, 13279, 12539, 11793, 11039, 10278, 9512, 8739, 7962, 7179, 6393, 5602, 4808, 4011, 3212, 2411, 1608, 804, 0, -804, -1608, -2410, -3212, -4011, -4808, -5602, -6393, -7179, -7962, -8739, -9512, -10278, -11039, -11793, -12539, -13279, -14010, -14732, -15446, -16151, -16846, -17530, -18204, -18868, -19519, -20159, -20787, -21403, -22005, -22594, -23170, -23731, -24279, -24812, -25329, -25832, -26319, -26790, -27245, -27683, -28105, -28510, -28898, -29268, -29621, -29956, -30273, -30571, -30852, -31113, -31356, -31580, -31785, -31971, -32137, -32285, -32412, -32521, -32609, -32678, -32728, -32757, -32767, -32757, -32728, -32678, -32609, -32521, -32412, -32285, -32137, -31971, -31785, -31580, -31356, -31113, -30852, -30571, -30273, -29956, -29621, -29268, -28898, -28510, -28105, -27683, -27245, -26790, -26319, -25832, -25329, -24811, -24279, -23731, -23170, -22594, -22005, -21402, -20787, -20159, -19519, -18867, -18204, -17530, -16845, -16151, -15446, -14732, -14009, -13278, -12539, -11792, -11039, -10278, -9512, -8739, -7961, -7179, -6392, -5602, -4808, -4011, -3211, -2410, -1608, -804 };
int16_t kAngleCoeficients[1024] = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 32, 16, 11, 8, 6, 5, 5, 4, 4, 3, 3, 3, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 64, 48, 32, 21, 16, 13, 11, 9, 8, 7, 6, 6, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 2, 2, 64, 53, 43, 32, 24, 19, 16, 14, 12, 11, 10, 9, 8, 7, 7, 6, 6, 6, 5, 5, 5, 5, 4, 4, 4, 4, 4, 4, 3, 3, 3, 3, 64, 56, 48, 40, 32, 26, 21, 18, 16, 14, 13, 12, 11, 10, 9, 9, 8, 8, 7, 7, 6, 6, 6, 6, 5, 5, 5, 5, 5, 4, 4, 4, 64, 58, 51, 45, 38, 32, 27, 23, 20, 18, 16, 15, 13, 12, 11, 11, 10, 9, 9, 8, 8, 8, 7, 7, 7, 6, 6, 6, 6, 6, 5, 5, 64, 59, 53, 48, 43, 37, 32, 27, 24, 21, 19, 17, 16, 15, 14, 13, 12, 11, 11, 10, 10, 9, 9, 8, 8, 8, 7, 7, 7, 7, 6, 6, 64, 59, 55, 50, 46, 41, 37, 32, 28, 25, 22, 20, 19, 17, 16, 15, 14, 13, 12, 12, 11, 11, 10, 10, 9, 9, 9, 8, 8, 8, 7, 7, 64, 60, 56, 52, 48, 44, 40, 36, 32, 28, 26, 23, 21, 20, 18, 17, 16, 15, 14, 13, 13, 12, 12, 11, 11, 10, 10, 9, 9, 9, 9, 8, 64, 60, 57, 53, 50, 46, 43, 39, 36, 32, 29, 26, 24, 22, 21, 19, 18, 17, 16, 15, 14, 14, 13, 13, 12, 12, 11, 11, 10, 10, 10, 9, 64, 61, 58, 54, 51, 48, 45, 42, 38, 35, 32, 29, 27, 25, 23, 21, 20, 19, 18, 17, 16, 15, 15, 14, 13, 13, 12, 12, 11, 11, 11, 10, 64, 61, 58, 55, 52, 49, 47, 44, 41, 38, 35, 32, 29, 27, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 15, 14, 14, 13, 13, 12, 12, 11, 64, 61, 59, 56, 53, 51, 48, 45, 43, 40, 37, 35, 32, 30, 27, 26, 24, 23, 21, 20, 19, 18, 17, 17, 16, 15, 15, 14, 14, 13, 13, 12, 64, 62, 59, 57, 54, 52, 49, 47, 44, 42, 39, 37, 34, 32, 30, 28, 26, 24, 23, 22, 21, 20, 19, 18, 17, 17, 16, 15, 15, 14, 14, 13, 64, 62, 59, 57, 55, 53, 50, 48, 46, 43, 41, 39, 37, 34, 32, 30, 28, 26, 25, 24, 22, 21, 20, 19, 19, 18, 17, 17, 16, 15, 15, 14, 64, 62, 60, 58, 55, 53, 51, 49, 47, 45, 43, 41, 38, 36, 34, 32, 30, 28, 27, 25, 24, 23, 22, 21, 20, 19, 18, 18, 17, 17, 16, 15, 64, 62, 60, 58, 56, 54, 52, 50, 48, 46, 44, 42, 40, 38, 36, 34, 32, 30, 28, 27, 26, 24, 23, 22, 21, 20, 20, 19, 18, 18, 17, 17, 64, 62, 60, 58, 56, 55, 53, 51, 49, 47, 45, 43, 41, 40, 38, 36, 34, 32, 30, 29, 27, 26, 25, 24, 23, 22, 21, 20, 19, 19, 18, 18, 64, 62, 60, 59, 57, 55, 53, 52, 50, 48, 46, 44, 43, 41, 39, 37, 36, 34, 32, 30, 29, 27, 26, 25, 24, 23, 22, 21, 21, 20, 19, 19, 64, 62, 61, 59, 57, 56, 54, 52, 51, 49, 47, 45, 44, 42, 40, 39, 37, 35, 34, 32, 30, 29, 28, 26, 25, 24, 23, 23, 22, 21, 20, 20, 64, 62, 61, 59, 58, 56, 54, 53, 51, 50, 48, 46, 45, 43, 42, 40, 38, 37, 35, 34, 32, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 21, 64, 62, 61, 59, 58, 56, 55, 53, 52, 50, 49, 47, 46, 44, 43, 41, 40, 38, 37, 35, 34, 32, 31, 29, 28, 27, 26, 25, 24, 23, 22, 22, 64, 63, 61, 60, 58, 57, 55, 54, 52, 51, 49, 48, 47, 45, 44, 42, 41, 39, 38, 36, 35, 33, 32, 31, 29, 28, 27, 26, 25, 24, 23, 23, 64, 63, 61, 60, 58, 57, 56, 54, 53, 51, 50, 49, 47, 46, 45, 43, 42, 40, 39, 38, 36, 35, 33, 32, 31, 29, 28, 27, 26, 25, 25, 24, 64, 63, 61, 60, 59, 57, 56, 55, 53, 52, 51, 49, 48, 47, 45, 44, 43, 41, 40, 39, 37, 36, 35, 33, 32, 31, 30, 28, 27, 26, 26, 25, 64, 63, 61, 60, 59, 58, 56, 55, 54, 52, 51, 50, 49, 47, 46, 45, 44, 42, 41, 40, 38, 37, 36, 35, 33, 32, 31, 30, 29, 28, 27, 26, 64, 63, 62, 60, 59, 58, 57, 55, 54, 53, 52, 50, 49, 48, 47, 46, 44, 43, 42, 41, 39, 38, 37, 36, 34, 33, 32, 31, 30, 29, 28, 27, 64, 63, 62, 60, 59, 58, 57, 56, 55, 53, 52, 51, 50, 49, 47, 46, 45, 44, 43, 41, 40, 39, 38, 37, 36, 34, 33, 32, 31, 30, 29, 28, 64, 63, 62, 61, 59, 58, 57, 56, 55, 54, 53, 51, 50, 49, 48, 47, 46, 45, 43, 42, 41, 40, 39, 38, 37, 35, 34, 33, 32, 31, 30, 29, 64, 63, 62, 61, 60, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 36, 35, 34, 33, 32, 31, 30, 64, 63, 62, 61, 60, 59, 58, 57, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 39, 38, 37, 36, 35, 34, 33, 32, 31, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32 };
uint16_t pad_108CAA = 0x1A00;
uint32_t maxCameraMovement = 0x50000;
// Given direction 0..7 this table decides signs for x/y camera movement
// (elements are actually pairs)
// it's used when camera is sliding slowly, with no control
int32_t nextCameraDirections[16] = { 0, -1, 1, -1, 1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1 };
// -40..40
// Gets added to camera coordinates each frame
uint16_t cameraXVelocity = 0;
// -40..40
uint16_t cameraYVelocity = 0;
// Determines which advertisement is shown during the game, -1 = none
uint16_t advertIndex = 0;
uint16_t advertSlideTimer = 0;
// What line are we drawing of an animated pattern
uint16_t currentAnimatedAdLine = 0;
uint32_t advert1Pointers[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
uint32_t advert2Pointers[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
uint32_t advert3Pointers[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
// Don't animate advertisements if this is true
uint16_t blockAdvertisements = 0;
uint8_t cornerFlagPictureIndices[32] = { 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3 };
int16_t spinBigS = 0;
// Index of that annoying big S that keeps spining
// in the upper right corner during the game
uint16_t bigSIndex = 1;
int8_t numberBuffer[16] = { 0 };
uint16_t normalPalette[3] = { 0x790, 0x690, 0x990 };
uint16_t dryPalette[3] = { 0x990, 0x890, 0x790 };
uint16_t wetPalette[3] = { 0x390, 0x790, 0x390 };
uint16_t softPalette[3] = { 0x370, 0x770, 0x370 };
uint16_t hardPalette[3] = { 0x970, 0x870, 0x770 };
uint16_t frozenPalette[3] = { 0x996, 0x896, 0x796 };
uint16_t muddyPalette[3] = { 0x750, 0x650, 0x550 };
uint16_t * pitchPalettePtrs[7] = { frozenPalette, muddyPalette, wetPalette, softPalette, normalPalette, dryPalette, hardPalette };
uint8_t pitchTypeSeasonalProbabilities[84] = { 30, 20, 30, 20, 0, 0, 0, 20, 30, 20, 20, 10, 0, 0, 10, 30, 10, 30, 20, 0, 0, 0, 10, 10, 30, 40, 10, 0, 0, 0, 0, 10, 40, 40, 10, 0, 0, 0, 0, 40, 40, 20, 0, 0, 0, 0, 30, 30, 40, 0, 0, 0, 0, 50, 30, 20, 0, 0, 0, 20, 40, 30, 10, 0, 20, 0, 40, 30, 10, 0, 10, 30, 10, 40, 10, 0, 0, 20, 30, 20, 30, 0, 0, 0 };
uint8_t pitchTypeProbabilities[8] = { 5, 5, 10, 20, 30, 20, 10, 0 };
// Number of occurences of each face type in a team
uint8_t facesFrequency[4] = { 0x0, 0x0, 0x0, 0x0 };
uint16_t team1PlayersColorTable[16] = { 0, 1, 2, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0 };
uint16_t team2PlayersColorTable[16] = { 0, 1, 2, 3, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0 };
// Color table for reserve players, sitting and standing
uint16_t colorTableReserves[32] = { 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0x0, 0xC, 0xD, 0xE, 0x0, 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x0, 0xB, 0xC, 0xD, 0xE, 0xF };
// Table for spr 309, 287-296, 297-306 (big numbers for result)
int16_t bigNumbersColorConversionTable[87] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 0, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12, 13, 14, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 11, 12, 13, 14, 15, 6, 6, 5, 5, 4, 4, 13, 3, 9, 3, 12, 3, -1, 6, 6, 5, 5, 4, 4, 13, 6, 9, 5, 12, 4, -1, 6, 4, 5, 4, 4, 3, 13, 3, 9, 3, 12, 3, -1 };
int16_t * skinAndHairColorConversionTable[3] = { &bigNumbersColorConversionTable[0x30], &bigNumbersColorConversionTable[0x3D], &bigNumbersColorConversionTable[0x4A] };
// Values are 0 or 1 (0 primary, 1 reserve goalkeeper)
uint8_t team1GoalieFaceToPosition[3] = { 0, 0, 0 };
uint8_t team2GoalieFaceToPosition[3] = { 0, 0, 0 };
uint8_t team1GoalieFaces  = 0;
uint8_t team2GoalieFaces  = 0;
// Skin/face type index for team 2 main goalkeeper, used for sprite skin color conversion.
uint8_t team2GoalieSkinType  = 0;
// Skin/face type index for team 2 reserve goalkeeper. Negative means no reserve keeper.
uint8_t team2ReserveGoalieSkinType  = 0;
int8_t yellowCardTable[30] = { 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 };
int8_t redCardTable[30] = { 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1 };
int8_t secondYellowTable[46] = { 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0 };
uint16_t nobodysBallTimer = 0;
uint16_t nobodysBallLastFrame = 0;
Sprite * currentScorer = 0;
TeamGeneralInfo * lastTeamScored = 0;
Sprite * lastPlayerBeforeGoalkeeper = 0;
// 1 Only right before the game starts
// if true, in UpdateTime fill time placeholder sprite
// after that, set this to zero
uint16_t copyTimeSprite = 0;
// Time left until game time will be increased
// (when timeDelta elapses, game seconds increase)
uint16_t secondsSwitchAccumulator = 0;
// Number of seconds elapsed since last minute change
// scaled as needed, so seconds in a 3 min. game go faster than in a 10 min. game
// -1 is special value when there is an overflow and we're switching to the next minute
// this allows prolonging last minute of the game
uint16_t gameSeconds = 0;
// In BCD format:
// +0 = not used
// +1 = first digit
// +2 = second digit
// +3 = third digit (single minutes)
// for example 118 would be 0x08010100
// (in memory 0x00010108)
uint8_t gameTime[4] = { 0 };
// Depends on game length selected (3, 5, 7, 10 mins.)
uint16_t timeDelta = 0;
int16_t gameLenSecondsTable[4] = { 30, 18, 12, 9 };
// When the game is about to end, this is set to 55 (frames)
// it counts down then, and when reaches -1, game ends
// (game, or half, extra time... etc.)
uint16_t endGameCounter = 1;
uint16_t numScenesInHilFile = 0;
// Scene ordinal number in hil file
// init to -1
uint16_t hilSceneNumber = 0;
// Set if we have some highlights to play
uint16_t goIntoHighlightsLoop = 0;
uint32_t * savedCurrentHilPtr = 0;
uint32_t * savedCurrentGoalPtr = 0;
uint32_t * savedGoalBasePtr = 0;
uint32_t * savedNextGoalPtr = 0;
// Probabilities:
// pitch 1 - 31,25%
// pitch 2 - 31,25%
// pitch 3 - 12,5%
// pitch 4 - 12,5%
// pitch 5 - 12,5%
uint8_t pitchNumberProbabilities[16] = { 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 4, 4, 2, 2, 3, 3 };
// Every *.hil file starts with this dword
uint32_t kHilFileSig = 0xC;
const char aAsc_0[] = "****";
const char aAsc_1[] = "****,";
const char aPen[] = "****(PEN)";
const char aPen_0[] = "****(PEN),";
const char aOg[] = "****(OG)";
const char aAsc_2[] = "****,";
char * alreadyScoredTable[3] = { aAsc_1, aPen_0, aAsc_2 };
char * firstGoalScoredTable[3] = { aAsc_0, aPen, aOg };
// When drawing player list in substitutes menu during the game
// this align saves the day so we can add three digit number support ;)
const char playerNumberString[] = "--";
// When drawing substitutes menu during the game
uint16_t playerFacesTable[3] = { 1179, 1180, 1181 };
// Init when drawing subs menus
uint16_t benchColors[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Used as a background color for substitute menu entries, and also
// as a frame color for tactics icon sprite in formation menu
uint16_t subsMenuBackgroundColor = 0;
// Highlight color for entries in substitutes menu,
// also border color for tactics icon sprite in formation menu
uint16_t subsMenuHighlightColor = 0;
// Entry frame color of formation/substitutes title menu entry during the game
uint16_t subsMenuEntryFrameColor = 0;
uint16_t ourCoachFrames[16] = { 2, 1, 0, 2, 0, 1, 0, 1, 2, 2, 1, 1, 0, 2, 1, 0 };
uint16_t opponentCoachFrames[16] = { 2, 1, 2, 2, 1, 2, 0, 1, 2, 0, 1, 1, 1, 0, 1, 2 };
uint8_t pad_10E512[2] = { 1, 0 };
uint16_t kGoalkeeperBurstSpeed[2] = { 512, 1024 };
// =3.0
uint16_t kGoalkeeperCatchSpeed = 768;
// =4.0, Speed when moving to the predicted place where ball hits the ground
uint16_t kGoalkeeperMoveToBallSpeed = 1024;
uint16_t kGoalkeeperFarJumpSpeed = 2048;
// =5.0
uint16_t kGoalkeeperFarJumpSlowerSpeed = 1280;
uint16_t kGoalkeeperStrongDeflectBallSpeed = 1536;
uint16_t kGoalkeeperMediumDeflectBallSpeed = 1024;
uint16_t kGoalkeeperWeakDeflectBallSpeed = 512;
uint32_t kGoalkeeperDeflectDeltaZ = 49152;
// Fixed-point delta Z value applied to ball when goalkeeper deflects it.
uint32_t goalkeeperDeflectDeltaZ = 0x20000;
// Table of ball speed values for goalkeeper deflections; values: 512, 128, -128, -640.
uint16_t goalkeeperDeflectBallSpeeds[4] = { 512, 128, 65408, 64896 };
uint16_t kGoalKeeperRecoveryStepBase = 0x70;
// Speed delta when goalie caught the ball on the ground
uint16_t kGoalKeeperRecoveryStepAlt = 0xC0;
// Goalkeeper speed delta while diving for the ball
uint16_t kGoalKeeperRecoveryStepFar = 0x80;
uint8_t pad_10E53C[2] = { 1, 0 };
uint16_t kShotAtGoalMinumumSpeed = 0x200;
// Fixed point values:
// 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6
uint32_t kGoalkeeperDiveDeltas[8] = { 0x30000, 0x38000, 0x40000, 0x48000, 0x50000, 0x58000, 0x60000, 0x68000 };
uint16_t pad_10E560 = 0;
uint16_t kKeeperEaseBallTable[8] = { 1, 4, 3, 3, 3, 2, 2, 2 };
// 25% Chance for great goalkeeper performance
uint16_t kKeeperPenaltySaveDistanceFar = 20;
uint16_t kKeeperPenaltySaveDistanceNear[17] = { 12, 2048, 176, 168, 152, 128, 96, 56, 16, 0, 2560, 512, 448, 384, 320, 2560, 2560 };
// =6.0
uint16_t kSubstitutedPlayerSpeed = 1536;
uint16_t pad_10E598 = 0x500;
// =4.0
uint16_t kGoalkeeperSpeedWhenGameStopped = 1024;
uint8_t pad_10E59C[2] = { 0x1, 0x80 };
// Applied when some player is controlling the ball
uint16_t kBallGroundConstant = 16;
// Applied when ball z > 0
uint16_t kBallAirConstant = 10;
// Subtract from players speed when he's on the ground
// and also when tackling
uint16_t kPlayerGroundConstant = 96;
// Speed decrement while player is heading
uint16_t kPlayerAirConstant = 72;
// =0.625, Set player z to this when flying/lob header hits the ball
uint32_t kBallJumpHeaderDeltaZ = 0xA000;
// Multiply ball speed with this when it bounces
uint16_t ballSpeedBounceFactor = 0;
// Multiply ball delta z with this when bouncing
uint16_t ballBounceFactor = 0;
// Applied only when no player is controlling the ball
uint16_t pitchBallSpeedFactor = 0;
uint16_t kBallSpeedBounceFactorTable[7] = { 24, 80, 80, 72, 64, 40, 32 };
uint16_t kBallBounceFactorTable[7] = { 88, 112, 104, 104, 96, 88, 80 };
// This gets subtracted from the ball speed
int16_t kPitchBallSpeedInfluence[7] = { -2, 2, 3, 0, 0, -1, -1 };
// = 0.0502166748046875 (~0.05)
// Subtract from ball delta z
uint32_t kGravityConstant = 4608;
uint16_t pad_10E5DE[44] = { 0, 6144, 1089, 1024, 1089, 1088, 1216, 1216, 1024, 1089, 1088, 1216, 1216, 1216, 1216, 1216, 1216, 1216, 1216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 896, 64, 64, 64, 64, 1024 };
// =4.0
uint16_t kGoalkeeperGameSpeed = 1024;
// =7.0, Set player speed to this when they go in tackling state
uint16_t kPlayerTacklingSpeed = 1792;
// =8.0, Player speed when he's jumping in attempt to head the ball (flying/lob headers not static)
uint16_t kJumpHeaderSpeed[12] = { 2048, 1536, 1536, 1792, 2048, 1792, 0, 8192, 48, 1, 0, 2048 };
// =1.25, Height delta of kicked ball
uint32_t kBallKickingDeltaZ = 0x14000;
// =8.625, Ball speed when kicked
uint16_t kBallKickingSpeed = 2208;
// =2.0, Controls ball height increment per frame during high kicks
uint32_t kHighKickDeltaZ = 0x20000;
// =10.5
uint16_t kHighKickBallSpeed = 2688;
// =1.375
uint32_t kNormalKickDeltaZ = 0x16000;
// =10.0
uint16_t kNormalKickBallSpeed = 2560;
// Inverse proportional to time elapsed since pass/kick
uint16_t kSpinMultiplierFactor[10] = { 5, 4, 3, 2, 2, 2, 2, 1, 1, 1 };
// Apply curved trajectory to kick (ball spin)
// elements of array are delta x and delta y values for corresponding
// direction and left/right spin
// formula: direction * 4 + 2 * right spin = index of delta x, delta y is next
// (right spin = 1 or 0)
// Format is the same as table below.
int8_t kKickSpinFactor[64] = { -1, -32, 0, 0, 0, 32, 0, 0, 0, 0, -1, -23, 0, 23, 0, 0, 0, 0, -1, -32, 0, 0, 0, 32, 0, 23, 0, 0, 0, 0, 0, 23, 0, 32, 0, 0, -1, -32, 0, 0, 0, 0, 0, 23, -1, -23, 0, 0, 0, 0, 0, 32, 0, 0, -1, -32, -1, -23, 0, 0, 0, 0, -1, -23 };
// Applying curved trajectory to the ball during passes
// holds delta x and y values, and it's indexed in following way:
// 0 - left spin X  \
// 1 - left spin Y   |
// 2 - right spin X  +-> ball direction 0
// 3 - right spin Y /
// 4 - left spin X  \
// 5 - left spin Y   |
// 6 - right spin X  +-> ball direction 1
// 7 - right spin Y /
int16_t kPassingSpinFactor[32] = { -16, 0, 16, 0, 0, -11, 11, 0, 0, -16, 0, 16, 11, 0, 0, 11, 16, 0, -16, 0, 0, 11, -11, 0, 0, 16, 0, -16, -11, 0, 0, -11 };
uint16_t kRefereeSpeed[2] = { 1024, 1280 };
uint16_t kInjuryForeverSpeed = 768;
// 0  = Instant replay is running (show big spinning "R")
// !0 = standard replay running (don't show big "R")
uint16_t normalReplayRunning = 0;
// Set when 'R' is pressed
uint16_t instantReplayFlag = 0;
// In game (after goal, when space is pressed etc.)
uint16_t saveHighlightScene = 0;
// Space has been pressed - fade and save replay
uint16_t fadeAndSaveHighlightScene = 0;
// This is timer; while it is ticking, saving of highlights is disallowed
uint16_t spaceReplayTimer = 0;
uint16_t subsWriteOnly = 0;
uint16_t playGame = 0;
// 0  = Dont play highlight
// !0 = play it
// used as exit flag from viewing hl
uint16_t playHighlightFlag = 0;
uint16_t subsTeamsSwapped = 0;
// Managing top training team if true, and the arrow is in the top
// part of the bench in a training game
uint16_t subsTrainingTopTeam = 0;
// Only for training bench; are we currently drawing top half of it?
uint16_t drawTrainingTopHalfOfTheBench = 0;
uint16_t initialSubsState = 0;
// Values 30 or 0
// if true, p key is not effecting pause state
uint16_t inSubstitutesMenu = 0;
// Init to 55. Minimal time that must elapse between camera departure
// and game resumption.
uint16_t cameraLeavingSubsTimer = 0;
// Set very briefly when camera goes away from the bench, but effectively never used
uint16_t benchOff = 0;
// This variable is only valid when the camera starts moving away from the bench
// (when g_inSubstitutesMenu is false)
// it's shortly set to 1 when the camera is leaving substitutes menu
uint16_t leavingSubsMenu = 0;
// After a player has been substituted, new player comes in from the left side;
// this starts counting from 100, and when it reaches zero, the camera returns
// from subs menu to where it originally was on the pitch
uint16_t waitForPlayerToGoInTimer = 0;
// Init to 15, small delay before entering bench state
// without it, it could be too difficult to hit side 3 times (it might go back from the bench immediately)
uint16_t goToSubsTimer = 0;
// Set to true when bench key is detected
// it is set only shortly through out the frame and then reset
uint16_t bench1Called = 0;
uint16_t bench2Called = 0;
// Bench roof right vertical line x coordinate (where player sprites start)
// when camera x is at this number + 8 (=35) or greater, bench is completely out of site
// this - 12 (=15) is subs arrow x coordinate
// (the value is 27)
uint16_t benchXLimit = 0;
uint16_t benchY = 0;
uint16_t opponentBenchY = 0;
// X coordinate of substitutes menu during the game (= 100)
// actually it's coordinate for the shadow, real menu starts 2 pixels left (98)
uint16_t subsMenuX = 0;
// X coordinate of formation menu during the game
uint16_t formationMenuX = 0;
uint16_t plLeavingX = 0;
uint16_t plComingYTmp = 0;
uint16_t plComingX = 0;
uint16_t plComingY = 0;
uint16_t plSubstitutedX = 0;
uint16_t plSubstitutedY = 0;
uint16_t benchWriteOnly02 = 0;
uint16_t benchWriteOnly01 = 0;
// -1 = Old player exited the field, new about to go in
//  0 = no substitute in progress
//  1 = waiting for player to come to bench
//  2 = set for only one frame before the new player comes in
uint16_t substituteInProgress = 0;
Sprite * substitutedPlSprite = 0;
TeamGeneralInfo * teamThatSubstitutes = 0;
// In subs menu, 0 = coach, 1 = first reserve, ... 5 = last reserve
uint16_t benchPlayerIndex = 0;
// 0 = Not in any substitutes submenu
// 1 = about to substitute bench player
// 2 = in formations menu
// 3 = seems unused (never assigned) (draw subs menu without the header)
// 4 = listing players, above is formations entry
// -1 = undefined (when drawing opponent's bench)
uint16_t subsState = 0;
uint16_t selectedFormationEntry = 0;
// When in subs menu fire is pressed, and bench player is standing, waiting
// for some player from team to be selected
// zero based, -1 if coach is standing
uint16_t plToBeSubstitutedOrd = 0;
// Position of player that's about to be substituted in subs menu (not substituted yet, fire must be pressed)
// 1..11 - it comes from positions for tactics
uint16_t plToBeSubstitutedPos = 0;
// Index of player that is standing and about to come into the game in subs menu
// (but fire still needs to be pressed) (sticky var)
// = benchPlayerIndex + 10 when about to enter (11..16)
uint16_t plToEnterGameIndex = 0;
// Points to team that requested bench (TeamGeneralInfo)
TeamGeneralInfo * benchTeam = 0;
// Points to team that requested bench (in-game structure)
TeamGame * benchTeamGame = 0;
uint16_t deadBenchVar = 0;
// Number of ticks to wait for next tap to happen and be counted toward bench call
uint16_t pl1BenchTimeoutCounter = 0;
uint16_t pl2BenchTimeoutCounter = 0;
uint16_t subsPrevPl1Direction = 0xFFFF;
uint16_t subsPrevPl2Direction = 0xFFFF;
uint16_t subsPl1TapCount = 0;
uint16_t subsPl2TapCount = 0;
// A direction is currently pressed, don't update timers or anything
uint16_t pl1BenchBlockWhileHoldingDirection = 0;
uint16_t pl2BenchBlockWhileHoldingDirection = 0;
// True if any direction is held while in subs menu
uint16_t subsBlockDirections = 0;
// True if player is holding fire while in subs menu
// set to true when switching menus to prevent unwanted rapid selections
uint16_t subsBlockFire = 0;
// Logs controls movement (no fire) during subs menu
// format: 0 - up, 1 - up right, ...
uint16_t subsPrevDirection = 0;
uint16_t subsMovementDelayTimer = 0;
// 0 - Up
//  1 - up right
//  2 - right
//  3 - down right
//  4 - down
//  5 - down left
//  6 - left
//  7 - up left
// -1 - nothing
// Matches player directions.
uint16_t subsDirection = 0;
uint8_t subsFire  = 0;
uint8_t pad_10F0D1  = 0;
// Times how long fire is being pressed while in subs menu
uint16_t subsFireTimer = 0;
// Selected player in substitutes menu, fill his menu entry with marked color
uint16_t selectedPlayerInSubs = 0;
uint8_t pl1WasLeft  = 0;
uint8_t pl1WasRight  = 0;
uint8_t pl1WasUp  = 0;
uint8_t pl1WasDown  = 0;
uint8_t pl1LastFired  = 0;
uint8_t pl1Left  = 0;
uint8_t pl1Right  = 0;
uint8_t pl1Up  = 0;
uint8_t pl1Down  = 0;
uint8_t pl1Fire  = 0;
uint8_t pl1UpRight  = 0;
uint8_t pl1UpLeft  = 0;
uint8_t pl1DownRight  = 0;
uint8_t pl1DownLeft  = 0;
uint8_t pl1LeftPress  = 0;
uint8_t pl1RightPress  = 0;
uint8_t pl1UpPress  = 0;
uint8_t pl1DownPress  = 0;
uint8_t pl1ShortFire  = 0;
uint8_t pad_10F0E9  = 0;
uint16_t pl1FireCounter = 0;
uint16_t pl1Direction = 0;
uint8_t pl2WasLeft  = 0;
uint8_t pl2WasRight  = 0;
uint8_t pl2WasUp  = 0;
uint8_t pl2WasDown  = 0;
uint8_t pl2LastFired  = 0;
uint8_t pl2Left  = 0;
uint8_t pl2Right  = 0;
uint8_t pl2Up  = 0;
uint8_t pl2Down  = 0;
uint8_t pl2Fire  = 0;
uint8_t pl2UpRight  = 0;
uint8_t pl2UpLeft  = 0;
uint8_t pl2DownRight  = 0;
uint8_t pl2DownLeft  = 0;
uint8_t pl2LeftPress  = 0;
uint8_t pl2RightPress  = 0;
uint8_t pl2UpPress  = 0;
uint8_t pl2DownPress  = 0;
uint8_t pl2ShortFire  = 0;
uint8_t pad_10F101  = 0;
uint16_t pl2FireCounter = 0;
uint16_t pl2Direction = 0;
uint16_t frameCount = 0;
uint16_t lastGameTick = 0;
uint16_t currentGameTick = 0;
int16_t currentTick = 0;
uint16_t lastFrameTicks = 0;
uint8_t pad_10F110  = 0;
uint8_t keyIn  = 0;
uint16_t currentKey = 0;
int16_t waitingInterrupt = 0;
uint16_t didSwapThisFrame = 0;
uint16_t cameraXMod320 = 0;
uint16_t cameraYMod320 = 0;
// Coordinates from previous frame, and also location of
// virtual screen right before rendering begins
uint16_t oldCameraX = 0;
uint16_t oldCameraY = 0;
// 0..352, Coordinate of the left corner of the screen
/* SKIP 0x10F120 (cameraX): TypeError("Wrong number or type of arguments for overloaded function 'get_bytes'.\n  Possible C/C++ prototypes are:\n    py_get_bytes(ea_t,unsigned int,int)\n    py_get_bytes(ea_t,unsigned int)\n") */
// 16..680, Coordinate of the top corner of the screen
/* SKIP 0x10F124 (cameraY): TypeError("Wrong number or type of arguments for overloaded function 'get_bytes'.\n  Possible C/C++ prototypes are:\n    py_get_bytes(ea_t,unsigned int,int)\n    py_get_bytes(ea_t,unsigned int)\n") */
uint16_t dstXByteOffsetSaved0 = 0;
uint16_t dstYStartLinesSaved0 = 0;
uint16_t oldCameraXSaved0 = 0;
uint16_t oldCameraYSaved0 = 0;
uint16_t cameraXSaved0 = 0;
uint16_t cameraYSaved0 = 0;
uint16_t dstXByteOffsetSaved1 = 0;
uint16_t dstYStartLinesSaved1 = 0;
uint16_t oldCameraXSaved1 = 0;
uint16_t oldCameraYSaved1 = 0;
uint16_t cameraXSaved1 = 0;
uint16_t cameraYSaved1 = 0;
uint16_t cameraCoordinatesValid = 1;
uint16_t fansSidesSwapped = 0;
// 0  = Show
// !0 = hide
// always zero during the game except when throw-in
uint16_t hideBall = 0;
// Is game paused (boolean)?
uint16_t paused = 0;
uint16_t overlayFlagBackup = 0;
uint16_t forceLeftTeam = 2;
uint8_t pad_10F14C[2] = { 0, 1 };
uint16_t currentPlayerIndicatorPosition = 4;
uint16_t hilLeftTeamGoals = 0;
uint16_t hilRightTeamGoals = 0;
TeamGame * winningTeamPtr = 0;
uint16_t statsTeam1GoalsCopy2 = 0;
uint16_t statsTeam2GoalsCopy2 = 0;
uint16_t savedTeam1Goals = 0;
uint16_t savedTeam2Goals = 0;
uint16_t statsTeam1GoalsCopy = 0;
uint16_t statsTeam2GoalsCopy = 0;
uint16_t statsTeam1Goals = 0;
uint16_t statsTeam2Goals = 0;
uint16_t team1TotalGoals = 0;
uint16_t team2TotalGoals = 0;
uint16_t team1GoalsDigit2 = 0;
uint16_t team2GoalsDigit2 = 0;
uint16_t team1GoalsDigit1 = 0;
uint16_t team2GoalsDigit1 = 0;
uint16_t team1NameLength = 0;
uint16_t team2NameLength = 0;
TeamGame * topTeamPtr = 0;
TeamGame * bottomTeamPtr = 0;
uint16_t team1NumSubs = 0;
uint16_t team2NumSubs = 0;
uint16_t team1GoalkeeperReplaced = 0;
uint16_t team2GoalkeeperReplaced = 0;
uint16_t team1MostFrequentFace = 0;
uint16_t team2MostFrequentFace = 0;
uint16_t pitchNumberAndType = 0;
char * swcPitchMapFiles[6] = { aGrafsSwcpich1M, aGrafsSwcpich2M, aGrafsSwcpich3M, aGrafsSwcpich4M, aGrafsSwcpich5M, aGrafsSwcpich6M };
uint16_t resultTimer = 0;
uint16_t timeVar = 0;
uint16_t fadeState = 0;
uint16_t fadeCommand = 0x3E7;
uint16_t fadeInitFlag = 0x3E7;
uint16_t paletteIndex = 0;
uint8_t * paletteTable[7] = { menuPalette, &blackPalette, gamePalette, &titleScreenPalette, &panicPalette, &titleTextPalette, &titleLogoPalette };
uint8_t pad_10F1CE[2] = { 0x12, 0x34 };
uint16_t cameraSnapToPlayerCount = 0;
uint16_t turnDirCopiedFromCameraCount = 0;
uint16_t deadCameraBreakVar04 = 0;
uint16_t deadThrowInDirectionVar = 0;
uint8_t pad_10F1D8[2] = { 0, 0 };
uint16_t initialKickWriteOnlyTicks = 0;
uint16_t disallowedTurnFlagsCounter = 0;
uint8_t pad_10F1DE[6] = { 0, 0, 0, 0, 0, 0 };
uint16_t writeOnlyVar04 = 0;
uint8_t pad_10F1E6[2] = { 0, 0 };
uint16_t deadCameraBreakVar01 = 0;
uint16_t deadCameraBreakVar02 = 0x1234;
uint16_t deadCameraBreakVar03 = 0x1234;
uint8_t pad_10F1EE[2] = { 0x12, 0x34 };
uint16_t AI_maxStoppageTime = 0;
uint8_t pad_10F1F2[2] = { 0, 0 };
// When non-zero, goalkeeper processing is bypassed in goalkeeper control code.
uint16_t goalkeeperSkipFlag = 0;
uint16_t lastCameraDirection = 0;
uint16_t lastPlayerTurnFlags = 0;
uint8_t (*savedRandStatePtr)[15] = savedRandState;
// Buffer for saving random number generator state; pointed to by savedRandStatePtr.
uint8_t savedRandState[15] = { 0 };
int8_t kRandomTable[257] = { 124, -102, -110, 70, 101, -6, -83, 89, 117, 26, 67, 12, -18, -109, -30, 34, 78, -57, -3, 107, 125, 87, -86, -48, -68, 72, 5, 51, -32, -10, -111, 32, 110, -22, 68, 43, 99, 39, -53, 86, -79, -93, -58, -94, -128, 16, 93, -1, -108, 10, 59, 54, -81, -34, -54, -7, 127, -31, -84, -17, 8, -42, -114, -21, -89, 73, 44, 7, -126, 105, 114, 97, -11, -97, 56, -59, -43, -35, -76, -127, 106, 69, -77, 95, 90, 46, 103, 122, -40, 80, 45, -100, 18, 36, -122, -69, -27, -70, -72, -112, 109, -106, -73, -121, 29, -5, -82, 71, -33, -12, -24, 83, 81, -92, 25, 79, 62, -56, 65, -75, -124, 55, -15, 21, -4, 82, -78, 123, -37, -29, -105, 76, 91, 28, 6, -2, 119, -25, 85, 14, -20, -71, 108, 24, 111, 40, 98, 35, -88, -67, 41, 74, 102, -47, 96, -103, -80, -123, -9, 50, 33, 52, 113, -115, -50, 42, 3, -96, -39, -95, -63, 64, -113, -51, -74, -23, -117, 37, -19, 84, -125, 121, 4, 22, 20, -62, -13, -87, 0, -55, 48, 61, 9, -44, -119, 57, 1, 126, -101, 92, 31, -61, 19, 88, -28, 116, 15, 94, -65, -46, 47, 60, -38, 115, -16, 118, -98, 104, -118, -85, 13, 120, -45, 27, -99, -14, 66, -49, -104, 30, 2, -116, -60, 17, -66, -107, 75, -26, 38, 11, 77, 100, -64, -36, -52, -90, -91, 53, 112, -120, 23, 63, 49, -8, -41, 58, 26 };
uint8_t seed  = 0;
uint8_t randXorIndex  = 0;
uint8_t randXorKey  = 0;
uint8_t pad_10F441  = 0;
uint32_t corePrecacheTable = 1054812;
char * menuPrecacheTable[23] = { aGrafsMenusRaw, aGrafsMenus2Raw, aGrafsCjcgrafsR, aGrafsCjcbenchR, aGrafsCjcbitsRa, aGrafsCjcteam1R, aGrafsCjcteam2R, aGrafsCjcteam3R, aGrafsCjcteamgR, aGrafsMenubgRaw, aGrafsSwcpich1M, aGrafsSwcpich3M, aGrafsSwcpich4M, aGrafsSwcpich5M, aGrafsSwcpich6M, aDataPoolplyrDa, aGrafsSoccerSRa, aSoundMenuSng, aSoundMenuIns, aSoundSfxSng, aSoundSfxIn1, aDataTeam008, (int8_t*)-1 };
const char aDataTeam008[] = "data/team.008";
uint16_t replayContTbl[16] = { 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0x0, 0xB, 0xC, 0xD, 0xE, 0xF };
uint8_t pad_10FBE2[34] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t replaySelected = 0;
uint16_t loaderModeFlag = 0;
uint8_t scorer_padding[194] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint16_t team1ScorerSpritesWidths[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t team2ScorerSpritesWidths[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
// Are statistics on screen? (boolean)
// because user called it
// loops until it becomes zero
uint16_t showingUserStats = 0;
// On screen, an order, it gets reset at first chance
uint16_t showStats = 0;
// Positive: stats shown
// zero or negative: stats hidden
uint16_t statsTimer = 0;
// 1 If this strike was goal attempt, regardless
// of wheter it was on target; shortly set
uint16_t isGoalAttempt = 0;
// For converting numbers in statistics
int8_t statsNumber[6] = { 0 };
// Player's passing skill is index in this table, result is ball speed increase after the pass
int16_t kBallSpeedPassingIncrease[8] = { 0, 48, 96, 144, 192, 256, 320, 384 };
// =6.0, If distance from the ball to player getting passed to is less than 2500, use this speed for player passing the ball
int16_t kPassingSpeedCloserThan2500 = 1536;
// =6.5
int16_t kPassingSpeed_2500_10000 = 1664;
// =7.0
int16_t kPassingSpeed_10000_22500 = 1792;
// =7.33~
int16_t kPassingSpeed_22500_40000 = 1877;
// =7.66~
int16_t kPassingSpeed_40000_62500 = 1962;
// =8.0
int16_t kPassingSpeed_62500_90000 = 2048;
// =8.33~
int16_t kPassingSpeed_90000_122500 = 2133;
// =8.66~
int16_t kPassingSpeedFurtherThan122500 = 2218;
// =7.0, This will be the speed of the player that just did free pass
int16_t kFreePassReleasingBallSpeed = 1792;
// Indexed by player speed (0..7) from file structure
int16_t kPlayerSpeedsGameInProgress[8] = { 928, 974, 1020, 1066, 1112, 1158, 1204, 1250 };
int16_t kPlayerSpeedsGameStopped[8] = { 1136, 1152, 1168, 1184, 1200, 1216, 1232, 1248 };
int16_t kPlayerTacklingDownTime[8] = { 30, 27, 24, 21, 18, 15, 12, 9 };
int16_t kComputerTacklingDownTime[8] = { 3, 3, 3, 3, 3, 3, 3, 3 };
int8_t plAvgTacklingBallControlDiffChance[8] = { 16, 17, 18, 19, 20, 21, 22, 23 };
int16_t kBallSpeedDeltaWhenControlled[8] = { 130, 116, 102, 88, 74, 60, 46, 32 };
// Table indexed by ball control skill (0-7); thresholds for losing ball on direction change.
int16_t ballControlTurnThresholds[8] = { 4, 5, 6, 8, 11, 14, 17, 21 };
// Indexed by player's passing, lower is better
// compared to random timer value 0..15, if greater or equal, the pass is botched
int16_t kAIFailedPassChance[8] = { 6, 4, 3, 2, 1, 0, 0, 0 };
// Indexed by (player finishing - goalkeeper skill) + 7
int8_t goalScoredChances[16] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0 };
int16_t kGoalkeeperNearJumpSpeed = 1024;
// If ball distance by y <= this, at least try saving
int16_t kKeeperSaveDistance = 24;
int16_t kBallSpeedKicking[8] = { -384, -270, -162, -54, 54, 162, 270, 384 };
// Ball speed offsets
int16_t kBallSpeedFinishing[8] = { -288, -160, -32, 96, 224, 352, 480, 608 };
// Indexed by player's heading skill, add to his speed
int16_t kPlayerHeaderSpeedIncrease[8] = { -336, -288, -240, -192, -144, -96, -48, 0 };
uint16_t pad_110BFE[3] = { 3, 3, 0 };
uint16_t kInjuriesSpeedHandicap[8] = { 0, 65440, 65408, 65376, 65344, 65312, 65280, 65248 };
GoalieSkill * kGoalieSkillTables[8] = { &kGoalieSkill0Table, &kGoalieSkill1Table, &kGoalieSkill2Table, &kGoalieSkill3Table, &kGoalieSkill4Table, &kGoalieSkill5Table, &kGoalieSkill6Table, &kGoalieSkill7Table };
// GoalieSkill struct loaded during penalty/shootout; all 16 index fields set to max making keeper hardest to beat.
GoalieSkill penaltyGoalieSkillTable = { 1, 1024, 176, 1024, 256, { 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 }, 2, 0, 14, 13, 3, 10, 5, 1, 8 };
GoalieSkill teamPlOfs24Table = { 8, 1024, 112, 800, 144, { 7, 7, 7, 3, 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7 }, 1, 6, 9, 4, 12, 1, 6, 9, 4 };
uint16_t ballNextX = 0;
uint16_t ballNextY = 0;
uint8_t pad_110F6C[4] = { 0, 0, 0, 0 };
uint16_t spriteClippedY = 0;
// For tactics, 0..34
uint16_t ballQuadrantIndex = 0;
uint16_t ballXQuadrantDead = 0;
uint16_t ballYQuadrantDead = 0;
// Offset inside quadrant, relative to quadrant center
uint16_t playerXQuadrantOffset = 0;
uint16_t playerYQuadrantOffset = 0;
uint8_t pad_111202[2] = { 0x0, 0x51 };
uint16_t ballXQuadrantLimits[5] = { 183, 285, 387, 489, 129 };
uint16_t ballYQuadrantLimits[6] = { 220, 312, 403, 495, 586, 678 };
uint16_t playerXQuadrantsCoordinates[15] = { 98, 132, 166, 200, 234, 268, 302, 336, 370, 404, 438, 472, 506, 540, 574 };
uint16_t playerYQuadrantCoordinates[16] = { 149, 189, 229, 269, 309, 349, 389, 429, 469, 509, 549, 589, 629, 669, 709, 749 };
int8_t kInjuryLevels[7] = { 42, 7, 5, 4, 3, 2, 1 };
int8_t kInjuryLevelAlreadyInjured[7] = { 14, 15, 12, 9, 7, 5, 2 };
int16_t kInjuryRecoveryTime[8] = { 0, 60, 70, 80, 90, 100, 110, 130 };
// Probabilities that tackle will be injury
// indexed by game length
// if game is longer, players get injured more rarely
// (injury probability is decreased)
int8_t kTackleInjuryProbability[4] = { 48, 28, 20, 14 };
// Injury probabilties for already injured player
// indexed by game length
int8_t kTackleInjuryProbabilityAlreadyInjured[4] = { 96, 57, 41, 28 };
TeamStatisticsData team1StatsData = { 0, 0, 0, 0, 0, 0, 0 };
TeamStatisticsData team2StatsData = { 0, 0, 0, 0, 0, 0, 0 };
// Or upper team data... during the game
TeamGeneralInfo topTeamData = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
TeamGeneralInfo bottomTeamData = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Something like ball take over (set when players are close, when
// foul, penalty, good tackle...)
// also set when player start heading the ball
int16_t playerHadBall = 0;
// But it's set only when keeper caught slow ball,
// on fast balls remains zero
Sprite * lastKeeperPlayed = 0;
// Points to last team that touched the ball (general)
TeamGeneralInfo * lastTeamPlayed = 0;
// Points to player that last touched the ball (sprite)
Sprite * lastPlayerPlayed = 0;
// Set to true when player shoots the ball from the white spot
// remains true until someone touches the ball, or it settles for
// goal out; this is only for penalties during the first 90 minutes, not
// for shootout
uint16_t penalty = 0;
// Set when goal is scored, reset when camera moves to the center
uint16_t goalScored = 0;
// Players run slower when goal is scored
// (62.5% of capacity, that is)
uint16_t runSlower = 0;
// Pointer to in-game sprite of a player that last scored (sticky)
Sprite * lastPlayerScored = 0;
// 0, 1 Or 2
uint16_t lastTeamScoredNumber = 0;
// Set when goal is scored, reset when camera is moved to the center
uint16_t goalCameraMode = 0;
// Number of team that scored (1 or 2) (sticky)
uint16_t teamNumThatScored = 0;
TeamGeneralInfo * teamScoredDataPtr = 0;
// Pointer to team that last scored
// not initialized at the beginning, check num. goals
// not influenced by side swapping
TeamGame * teamScoredGamePtr = 0;
// Ball is in goal out; stays 1 until goalkeeper brings ball
// back into play
uint16_t goalOut = 0;
uint16_t gameNotInProgressCounterWriteOnly = 0;
// Block fire when exiting dialogs, highlights etc. so it doesn't transfer
// into an accidental kick
uint16_t fireBlocked = 0;
// Pointer to team data structure that last had the ball
// in possesion after the break; points to upper or lower
// team, same team has different pointer in first and second
// half; can be null if the game is not started yet
TeamGeneralInfo * lastTeamPlayedBeforeBreak = 0;
// Measures total time when game is stopped (in ticks)
// reset when the ball comes into play
uint16_t stoppageTimerTotal = 0;
// Counting time when game is stopped, but only when a player is able to do something
// it's reset when the ball comes into play
// (for example, some player kicks the ball out of play, upper timer starts
// counting immediately, while this one starts only when another player
// comes to the line, and is ready to do throw in)
uint16_t stoppageTimerActive = 0;
// Similar to gameState
// 100 game in progress
// 101 when game not running (starting, half-time, keeper holding the ball, etc.)
// 102 when waiting on player to continue the game (take penalty, free kick, trow-in, etc.)
// in other situations, copy of gameState
uint16_t gameStatePl = 0;
// 0   - Players going to their starting positions
//    1   - left gol out (to team that's got the ball)
//    2   - right goal out
//    3   - keeper is holding the ball
//    4   - left corner
//    5   - right corner
//  6..12 - free kicks (areas from left to right)
//   13   - foul
//   14   - penalty
// 15..20 - throw in (at various positions)
//   21   - game is starting
//   22   - camera going from center to shower on halftime
//   23   - players going to shower for halftime
//   24   - players going to shower
//   25   - showing result on halftime
//   26   - showing result after the game
//   27   - game ended, first extra time about to begin
//   28   - second extra time ended
//   29   - first half ended
//   30   - game has ended
//   31   - penalties shootout
//  100   - game in progress
uint16_t gameState = 0;
// Something 0..8
// -1 when game just starting, at halftime, game over
// 0 when the game is stopped but the ball is still moving
// 1 when the game is stopped and the ball is standing still
// 2 when waiting on players to go to their positions
// 3 on initial kick-off/goal (also when moving to it)
//   also seen shortly on other breaks
// 4 when goalkeeper's ball
// 5 seen for a moment during kick-off
// 7 show up only for a short time, maybe when a player is coming
// 8 when player can change camera direction with controls
// (throw-in, for example)
// while the game is running unpaused simply keeps last the value
uint16_t breakCameraMode = 0;
// When in game, when it counts to zero after the break, ball is set where it should be
// times interval to keep score and stats on screen after the game and on half time
// also times various inter-states, such as when player go to shower, and when they return to pitch
// 110 until start of first extra time
// possibly number of ticks until next "scene" (or camera mode transition)
uint16_t stoppageEventTimer = 0;
// Coordinates where the ball was when the foul has
// happened - where the referee must run to
// might also be ball coordinates when the game is interrupted
// (definitely used for throw-in)
uint16_t foulXCoordinate = 0;
uint16_t foulYCoordinate = 0;
// Shows direction in which camera should travel after the ball is out of play
// -1 when not playing (at the start before pressing fire, half-time, after game ends...)
uint16_t cameraDirection = 0;
// Bit set represents allowed directions when the player puts
// the ball back into play (throw in, penalty..) - bits 0..7
uint8_t playerTurnFlags  = 0;
uint8_t pad_111673  = 0;
// Counts when the ball is in play
// halted when the game is stopped
// resets when player resumes control
uint16_t inGameCounter = 0;
// Gets set after the break, when player is about to put ball
// back in play - then it's a copy of gameState; 0 when not playing,
// and after the goal; keeps last value right until player regains control
uint16_t breakState = 0;
uint16_t substitutedPlDestX = 0;
uint16_t substitutedPlDestY = 0;
uint16_t substitutedPlX = 0;
uint16_t substitutedPlY = 0;
// 1 (Or non-zero) = pass, 0 = kick
uint16_t throwInPassOrKick = 0;
// Normal or extra time half number (1 or 2)
uint16_t halfNumber = 0;
// Number of team that starts the game or half
// gets random value 1 or 2; on halftime inverted (1 = 2, 2 = 1)
// gets new random value before start of first extra time
uint16_t teamStarting = 1;
// 1 Or 2
uint16_t teamPlayingUp = 1;
// After the game, boolean
uint16_t playingPenalties = 0;
// If true, do not show list of scorers along with result
// needed because we don't care about it when (if) penalties start
// set to true, by of course StartPenalties
uint16_t dontShowScorers = 0;
// Current number of penalty attempts team has made (after the game
// ended up tied); this number comprises current attempt too
uint16_t team1PenaltyAttempts = 0;
uint16_t team2PenaltyAttempts = 0;
// When penalty is shot, counts down and when reaches
// zero, next penalty is to be taken
// (only on penalties after game!)
uint16_t penaltiesTimer = 0;
uint16_t team1PenaltyShooterIndex = 0;
uint16_t team2PenaltyShooterIndex = 0;
// Pointer to player that is about to do penalty
// changed when penaltiesTimer expires
// NULL before penalties time
Sprite * penaltyShooterSprite = 0;
// Used when doing long passes
int16_t kBallFriction[64] = { 0, -1000, 199, -1000, 414, -1000, 668, -1000, 1000, -1000, 1000, -668, 1000, -414, 1000, -199, 1000, 0, 1000, 199, 1000, 414, 1000, 668, 1000, 1000, 668, 1000, 414, 1000, 199, 1000, 0, 1000, -199, 1000, -414, 1000, -668, 1000, -1000, 1000, -1000, 668, -1000, 414, -1000, 199, -1000, 0, -1000, -199, -1000, -414, -1000, -668, -1000, -1000, -668, -1000, -414, -1000, -199, -1000 };
// Values that are used as x/y destination depending on direction player is moving
// they're also used for the ball while the game is running
int16_t kDefaultDestinations[16] = { 0, -1000, 1000, -1000, 1000, 0, 1000, 1000, 0, 1000, -1000, 1000, -1000, 0, -1000, -1000 };
int16_t kLeftThrowInBallDestDelta[16] = { 250, -1000, 1000, -1000, 1000, 0, 1000, 1000, 250, 1000, -1000, 1000, -1000, 0, -1000, -1000 };
int16_t kRightThrowInBallDestDelta[16] = { -250, -1000, 1000, -1000, 1000, 0, 1000, 1000, -250, 1000, -1000, 1000, -1000, 0, -1000, -1000 };
int16_t kPenaltyBallDestDelta[16] = { 0, -1000, 500, -1000, 1000, 0, 500, 1000, 0, 1000, -500, 1000, -1000, 0, -500, -1000 };
int16_t kUpperLeftCornerBallDestDelta[16] = { 0, -1000, 1000, -1000, 1000, 150, 1000, 300, 250, 1000, -1000, 1000, -1000, 0, -1000, -1000 };
int16_t kUpperRightCornerBallDestDelta[16] = { 0, -1000, 1000, -1000, 1000, 0, 1000, 1000, -250, 1000, -1000, 350, -1000, 150, -1000, -1000 };
int16_t kLowerLeftCornerBallDestDelta[16] = { 250, -1000, 1000, -350, 1000, -150, 1000, 1000, 0, 1000, -1000, 1000, -1000, 0, -1000, -1000 };
int16_t kLowerRightCornerBallDestDelta[16] = { -250, -1000, 1000, -1000, 1000, 0, 1000, 1000, 0, 1000, -1000, 1000, -1000, -150, -1000, -350 };
// Lookup table of ball Z values indexed by goalkeeper animation frame offset during dive animations.
uint16_t goalkeeperDiveBallHeights[28] = { 7, 13, 11, 8, 5, 2, 20, 2, 5, 8, 11, 13, 7, 20, 5, 11, 9, 6, 3, 0, 20, 0, 3, 6, 9, 11, 5, 20 };
uint16_t kGoalKeeperClaimingBallHeight[7] = { 17, 17, 17, 10, 8, 5, 255 };
// 0 = Dont draw referee
// 1 = referee incoming
// 2 = waiting player
// 3 = very short, when red card
// 4 = booking player and showing card
// 5 = leaving
uint16_t refState = 0;
// Dead variable; if true, player never gets out of injured state
// probably something for testing
uint16_t injuriesForever[7] = { 0, 0, 0, 0, 0, 0, 0 };
// If true don't book players
uint16_t cardsDisallowed = 0;
// Card handing out in progress:
// 0 = nothing
// 1 = yellow
// 2 = red
// 3 = second yellow, red
// Can be interpreted as bit field, bit 0 = yellow card, bit 1 = red card
uint16_t whichCard = 0;
// Pointer to a player that's beeing booked
Sprite * bookedPlayer = 0;
// Points to a team whose player last made bookable offence
TeamGeneralInfo * lastTeamBooked = 0;
// Starts counting from zero when bookable offence is made,
// and goes upwards to 232
uint16_t refTimer = 0;
// CurrentGameTick bits 1-4 need to be greater than this in order
// for the referee to give out a card when there's a foul;
// gotten from the tables below
uint16_t playerCardChance = 0;
uint16_t playerCardChances3min[16] = { 0x4, 0x4, 0x4, 0x4, 0x5, 0x5, 0x5, 0x5, 0x6, 0x6, 0x6, 0x7, 0x7, 0x8, 0x9, 0xA };
uint16_t playerCardChances5min[16] = { 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5, 5, 6 };
uint16_t playerCardChances7min[16] = { 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 4 };
uint16_t playerCardChances10min[16] = { 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 3 };
uint32_t playerCardChancesPerGameLength = 1120384;
// I think this is timer for camera when the ball goes out of play
uint16_t ballOutOfGameTimer = 0;
uint16_t stoppageAuxFlag = 0;
// =2.0, For flying headers
uint32_t kHeaderLowJumpHeight = 0x20000;
// =4.25, For lob headers
uint32_t kHeaderHighJumpHeight = 0x24000;
uint16_t kStaticHeaderBaseBallSpeed = 0x700;
// =1.0
uint16_t kStaticHeaderPlayerSpeed = 256;
// Only updates inside penalty areas
uint16_t ballDefensiveX = 0;
uint16_t ballDefensiveY = 0;
uint16_t ballDefensiveZ = 0;
uint16_t ballNotHighX = 0;
uint16_t ballNotHighY = 0;
// Ball z for the goalkeeper
uint16_t ballNotHighZ = 0;
// If strike is crossing pitch line by y
uint16_t strikeDestX = 0;
uint16_t strikeDestY = 0;
uint16_t strikeDestZ = 0;
uint16_t ballNextGroundX = 0;
uint16_t ballNextYGroundY = 0;
// Not much sense anyway, since z goes to zero (or close) during the calculations
uint16_t ballNextZDeadVar = 0;
// Red card tables
uint8_t cardAnimStatesNoFlag[5] = { 0, 1, 3, 3, 3 };
uint8_t cardAnimStatesWithFlag[5] = { 1, 2, 4, 4, 4 };
// Player direction is index
// even indices are for x, and odd for y coordinate
// these values are added to x and y coordinate of player
// to form ball coordinates when player has the ball
// indexed with direction of player
int16_t kBallPlOffsets[16] = { 0, -1, 1, -1, 1, 0, 1, 1, 0, 1, -1, 1, -1, 0, -1, -1 };
int16_t kPlayerWithBallOffsets[16] = { 0, 1, -1, 1, -1, 0, -1, -1, 0, -1, 1, -1, 1, 0, 1, 1 };
uint16_t playRefereeWhistle = 0;
Position kTeamsStartingCoordinates[22] = { { 300, 69 }, { 280, 46 }, { 260, 34 }, { 240, 24 }, { 220, 16 }, { 200, 9 }, { 180, 3 }, { 160, -2 }, { 140, -8 }, { 120, -9 }, { 100, -11 }, { 300, -65 }, { 280, -42 }, { 260, -30 }, { 240, -20 }, { 220, -12 }, { 200, -5 }, { 180, 1 }, { 160, 6 }, { 140, 12 }, { 120, 13 }, { 100, 15 } };
GoalieSkill kGoalieSkill7Table = { 99, 1408, 226, 1024, 256, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3 }, 9, 6, 1, 12, 4, 9, 6, 1, 12 };
GoalieSkill kGoalieSkill6Table = { 1, 1408, 226, 1024, 256, { 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4 }, 8, 6, 2, 11, 5, 8, 6, 2, 11 };
GoalieSkill kGoalieSkill5Table = { 2, 1244, 180, 992, 240, { 0, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 4, 5 }, 7, 6, 3, 10, 6, 7, 6, 3, 10 };
GoalieSkill kGoalieSkill4Table = { 3, 1080, 134, 960, 224, { 0, 1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, 6 }, 6, 6, 4, 9, 7, 6, 6, 4, 9 };
GoalieSkill kGoalieSkill3Table = { 4, 916, 88, 928, 208, { 1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6, 7 }, 6, 5, 5, 8, 8, 5, 6, 5, 8 };
GoalieSkill kGoalieSkill2Table = { 5, 752, 42, 896, 192, { 2, 3, 4, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 6, 7, 7 }, 5, 5, 6, 7, 9, 4, 6, 6, 7 };
GoalieSkill kGoalieSkill1Table = { 6, 588, -4, 864, 176, { 3, 4, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 7, 7, 7 }, 4, 5, 7, 6, 10, 3, 6, 7, 6 };
GoalieSkill kGoalieSkill0Table = { 7, 424, -50, 832, 160, { 4, 5, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7 }, 3, 5, 8, 5, 11, 2, 6, 8, 5 };
uint16_t ballInUpperPenaltyArea = 0;
uint16_t ballInLowerPenaltyArea = 0;
uint16_t ballInGoalkeeperArea = 0;
uint32_t prevLastPlayer = 0;
uint32_t prevLastTeamPlayed = 0;
uint16_t freeKickFactorsX[7] = { 0, 3, 4, 5, 4, 3, 0 };
uint16_t freeKickDestX = 0;
uint16_t deadVarAlways0 = 0;
TeamGeneralInfo * playerKickerPtr = 0;
uint16_t aiTurnDirection = 1;
// When AI puts the ball back into play this counts down from 15 to 0
uint16_t aiResumePlayTimer = 0;
// Random number generated each time DoAI is called; 0..255
uint16_t aiRand = 0x0;
uint8_t pad_11826C[2] = { 0, 0 };
int16_t aiRandomRotateTable[2] = { -32, 32 };
int16_t aiLeftSpinTable[3] = { -1, -2, -3 };
int16_t aiRotateRightTable[3] = { 1, 2, 3 };
int16_t aiLongKickTable[3] = { 0, -999, 4 };
// Zero during the game
// positive, counts down to zero
// while non-zero, AI is allowed to modify direction (for ball spin?)
int16_t aiCounter = 0;
// Which half does the AI attack? 1 or 2
// set when AI decides to trigger fire
int16_t aiAttackHalf = 0;
int16_t aiCounterWriteOnly = 0;
// Angle range 0..255, indexed by game state enum, values for throw-in
int8_t aiThrowInDirections[6] = { 3, 6, 12, -127, -64, 96 };
uint16_t introMenuImageScript[343] = { 0x7000, 16, 6594, 0xC000, 0x0, 0x606, 0xC001, 0x7000, 0x206, 0xC002, 0x8000, 0x306, 0xC003, 0x9000, 0x306, 0xC004, 0xC000, 0x206, 0xC005, 0xD000, 0x406, 0xC006, 0xE000, 0x206, 0xC007, 0xF000, 0x606, 0xC008, 0x8, 0x606, 0xC009, 0x1008, 0x206, 0xC00A, 0x2008, 0x606, 0xC00B, 0x3008, 0x606, 0xC00C, 0x4008, 0x606, 0xC00D, 0x5008, 0x606, 0xC00E, 0x6008, 0x606, 0xC00F, 0x7008, 0x606, 0xC010, 0x8008, 0x606, 0xC011, 0x9008, 0x606, 0xC012, 0x1010, 0x606, 0xC013, 0x2010, 0x606, 0xC014, 0x3010, 0x606, 0xC015, 0x4010, 0x606, 0xC016, 0x5010, 0x606, 0xC017, 0x6010, 0x606, 0xC018, 0x7010, 0x606, 0xC019, 0x8010, 0x606, 0xC01A, 0x9010, 0x206, 0xC01B, 0xA010, 0x606, 0xC01C, 0xB010, 0x606, 0xC01D, 0xC010, 0x606, 0xC01E, 0xD010, 0x606, 0xC01F, 0xE010, 0x606, 0xC020, 0xF010, 0x606, 0xC021, 0x18, 0x606, 0xC022, 0x1018, 0x606, 0xC023, 0x2018, 0x606, 0xC024, 0x3018, 0x606, 0xC025, 0x4018, 0x606, 0xC026, 0x5018, 0x606, 0xC027, 0x6018, 0x606, 0xC028, 0x7018, 0x606, 0xC029, 0x8018, 0x606, 0xC02A, 0x9018, 0x606, 0xC02B, 0xA018, 0x606, 0xC02C, 0xF068, 0x606, 0xC02D, 0xA000, 0x606, 0xC02E, 0xC038, 0x606, 0xC02F, 0x30, 0x606, 0xC030, 0xF008, 0x606, 0xC031, 0xA008, 0x206, 0xC032, 0xB000, 0x606, 0xC033, 0x5000, 0x606, 0xC034, 0xB008, 0x306, 0xC035, 0xE030, 0x606, 0xC036, 0xA038, 0x606, 0xC037, 0x9038, 0x606, 0xC038, 0xF038, 0x306, 0xC039, 0x70, 0x808, 0xC03A, 0x7070, 0x208, 0xC03B, 0x8070, 0x408, 0xC03C, 0x9070, 0x408, 0xC03D, 0xC070, 0x308, 0xC03E, 0xD070, 0x508, 0xC03F, 0xE070, 0x308, 0xC040, 0xF070, 0x808, 0xC041, 0x78, 0x808, 0xC042, 0x1078, 0x508, 0xC043, 0x2078, 0x808, 0xC044, 0x3078, 0x808, 0xC045, 0x4078, 0x808, 0xC046, 0x5078, 0x808, 0xC047, 0x6078, 0x808, 0xC048, 0x7078, 0x808, 0xC049, 0x8078, 0x808, 0xC04A, 0x9078, 0x808, 0xC04B, 0x1080, 0x808, 0xC04C, 0x2080, 0x808, 0xC04D, 0x3080, 0x808, 0xC04E, 0x4080, 0x808, 0xC04F, 0x5080, 0x808, 0xC050, 0x6080, 0x808, 0xC051, 0x7080, 0x808, 0xC052, 0x8080, 0x808, 0xC053, 0x9080, 0x508, 0xC054, 0xA080, 0x808, 0xC055, 0xB080, 0x808, 0xC056, 0xC080, 0x808, 0xC057, 0xD080, 0x808, 0xC058, 0xE080, 0x708, 0xC059, 0xF080, 0x808, 0xC05A, 0x88, 0x808, 0xC05B, 0x1088, 0x808, 0xC05C, 0x2088, 0x808, 0xC05D, 0x3088, 0x808, 0xC05E, 0x4088, 0x708, 0xC05F, 0x5088, 0x808, 0xC060, 0x6088, 0x808, 0xC061, 0x7088, 0x808, 0xC062, 0x8088, 0x708, 0xC063, 0x9088, 0x708, 0xC064, 0xA088, 0x808, 0xC065, 0xF0D8, 0x808, 0xC066, 0xA070, 0x808, 0xC067, 0xC0A8, 0x808, 0xC068, 0xA0, 0x808, 0xC069, 0xF078, 0x808, 0xC06A, 0xA078, 0x308, 0xC06B, 0xB070, 0x808, 0xC06C, 0x5070, 0x808, 0xC06D, 0xB078, 0x408, 0xC06E, 0xE0A0, 0x808, 0xC06F, 0xA0A8, 0x808, 0xC070, 0x90A8, 0x808, 0xFFFF };
uint16_t menuColorAndTextScript[5166] = { 0x7000, 16, 6820, 0xA071, 0x0, 0xDD, 0x1012, 0x0, 0xA072, 0x10, 0xDD, 0x1012, 0x0, 0xA073, 0x20, 0xDD, 0x1012, 0x0, 0xA074, 0x30, 0xDD, 0x1012, 0x0, 0xA075, 0x40, 0xDD, 0x1012, 0x0, 0xA076, 0x50, 0xDD, 0x1012, 0x0, 0xA077, 0x60, 0xDD, 0x1012, 0x0, 0xA078, 0x70, 0xDD, 0x1012, 0x0, 0xA079, 0x60, 0xBD, 0x1012, 0x0, 0xA07A, 0x70, 0xBD, 0x1012, 0x0, 0xA07B, 0x80, 0xBD, 0x1012, 0x0, 0xA07C, 0x90, 0xBD, 0x1012, 0x0, 0xA07D, 0xA0, 0xBD, 0x1012, 0x0, 0xA07E, 0xB0, 0xBD, 0x1012, 0x0, 0xA07F, 0xC0, 0xBD, 0x1012, 0x0, 0xA080, 0xD0, 0xBD, 0x1012, 0x0, 0xA081, 0x90, 0xDD, 0x1012, 0x0, 0xA082, 0xA0, 0xDD, 0x1012, 0x0, 0xA083, 0xB0, 0xDD, 0x1012, 0x0, 0xA084, 0xC0, 0xDD, 0x1012, 0x0, 0xA085, 0xD0, 0xDD, 0x1012, 0x0, 0xA086, 0xE0, 0xDD, 0x1012, 0x0, 0xA087, 0xF0, 0xDD, 0x1012, 0x0, 0xA088, 0x100, 0xDD, 0x1012, 0x0, 0xC089, 0x88, 0x1010, 0xC08A, 0x50, 0xA820, 0xC08B, 0xB0A7, 0x808, 0xC08C, 0xA0A7, 0x808, 0x908D, 0x50, 0x6, 0x908E, 0x50, 0x6, 0x908F, 0x50, 0x6, 0x9090, 0x50, 0x6, 0x9091, 0x50, 0x6, 0x9092, 0x50, 0x6, 0x9093, 0x50, 0x6, 0x9094, 0x50, 0x6, 0x9095, 0x50, 0x6, 0x9096, 0x50, 0x6, 0x9097, 0x50, 0x6, 0x9098, 0x50, 0x6, 0x9099, 0x50, 0x6, 0x909A, 0x50, 0x6, 0x909B, 0x50, 0x6, 0x909C, 0x50, 0x6, 0x909D, 0x50, 0x6, 0x909E, 0x50, 0x6, 0x909F, 0x50, 0x6, 0x90A0, 0x50, 0x6, 0x90A1, 0x50, 0x6, 0x90A2, 0x50, 0x6, 0x90A3, 0x50, 0x6, 0x90A4, 0x50, 0x6, 0x90A5, 0x50, 0x6, 0x90A6, 0x50, 0x6, 0x90A7, 0x50, 0x6, 0x90A8, 0x50, 0x6, 0x90A9, 0x50, 0x6, 0x90AA, 0x50, 0x6, 0x90AB, 0x50, 0x6, 0x90AC, 0x50, 0x6, 0xC0AD, 0x25, 0xC13, 0xC0AE, 0x1025, 0xC13, 0xC0AF, 0x2025, 0xC13, 0xC0B0, 0x3025, 0xC13, 0xC0B1, 0x4025, 0xC13, 0xC0B2, 0x5025, 0xC13, 0xC0B3, 0x6025, 0xC13, 0xC0B4, 0x7025, 0xC13, 0xC0B5, 0x8025, 0xC13, 0xC0B6, 0x9025, 0xC13, 0xC0B7, 0x38, 0xC13, 0xC0B8, 0x1038, 0xC13, 0xC0B9, 0x2038, 0xC13, 0xC0BA, 0x3038, 0xC13, 0xC0BB, 0x4038, 0xC13, 0xC0BC, 0x5038, 0xC13, 0xC0BD, 0x6038, 0xC13, 0xC0BE, 0x7038, 0xC13, 0xC0BF, 0x8038, 0xC13, 0xC0C0, 0x9038, 0xC13, 0x90C1, 0x88, 0xB, 0x90C2, 0x88, 0xB, 0xC0C3, 0x2000, 0x604, 0x90C4, 0x78, 0x7, 0x90C5, 0x78, 0x7, 0x90C6, 0x78, 0x7, 0x90C7, 0x78, 0x7, 0x90C8, 0x78, 0x7, 0x90C9, 0x78, 0x7, 0x90CA, 0x78, 0x7, 0x90CB, 0x78, 0x7, 0x90CC, 0x78, 0x7, 0x90CD, 0x78, 0x7, 0x90CE, 0x78, 0x7, 0x90CF, 0x78, 0x7, 0x90D0, 0x78, 0x7, 0x90D1, 0x78, 0x7, 0x90D2, 0x78, 0x7, 0x90D3, 0x78, 0x7, 0xD0D4, 0xC3, 0x440A, 0x2205, 0xD0D5, 0xCE, 0x440A, 0x2205, 0xC0D6, 0x3000, 0x1F0B, 0xC0D7, 0x3018, 0x250B, 0xC0D8, 0x300C, 0x2A0B, 0x50D9, 0x0, 0x78, 0x60A, 0x50DA, 0x10, 0x78, 0x60A, 0x50DB, 0x20, 0x78, 0x60A, 0x50DC, 0x30, 0x78, 0x60A, 0x50DD, 0x40, 0x78, 0x60A, 0x50DE, 0x50, 0x78, 0x60A, 0x50DF, 0x60, 0x78, 0x60A, 0x50E0, 0x70, 0x78, 0x60A, 0x50E1, 0x80, 0x78, 0x60A, 0x50E2, 0x90, 0x78, 0x60A, 0x8000, 16, 6948, 0xA0E3, 0x0, 0x0, 0xC0F, 0x40C, 0xA0E4, 0x10, 0x0, 0xD0F, 0x50C, 0xA0E5, 0x20, 0x0, 0xB0F, 0x30C, 0xA0E6, 0x30, 0x0, 0xC0F, 0x40C, 0xA0E7, 0x40, 0x0, 0xB0F, 0x30C, 0xA0E8, 0x50, 0x0, 0xD0F, 0x50C, 0xA0E9, 0x60, 0x0, 0x90F, 0x20C, 0xA0EA, 0x70, 0x0, 0xB0F, 0x40C, 0xA0EB, 0x80, 0x0, 0xA0F, 0x30C, 0xA0EC, 0x90, 0x0, 0x90F, 0x20C, 0xA0ED, 0xA0, 0x0, 0x90F, 0x30C, 0xA0EE, 0xB0, 0x0, 0xB0F, 0x30C, 0xA0EF, 0x0, 0x10, 0x90F, 0x20C, 0xA0F0, 0x10, 0x10, 0x80F, 0x10C, 0xA0F1, 0x20, 0x10, 0xA0F, 0x30C, 0xA0F2, 0x30, 0x10, 0x90F, 0x20C, 0xA0F3, 0x40, 0x10, 0x90F, 0x20C, 0xA0F4, 0x50, 0x10, 0xB0F, 0x30C, 0xA0F5, 0x60, 0x10, 0xA0F, 0x30C, 0xA0F6, 0x70, 0x10, 0x80F, 0x10C, 0xA0F7, 0x80, 0x10, 0x90F, 0x20C, 0xA0F8, 0x90, 0x10, 0xB0F, 0x30C, 0xA0F9, 0xA0, 0x10, 0x90F, 0x20C, 0xA0FA, 0xB0, 0x10, 0x90F, 0x20C, 0xA0FB, 0x90, 0x40, 0xC0F, 0x40C, 0xA0FC, 0xA0, 0x40, 0xC0F, 0x40C, 0xA0FD, 0xB0, 0x40, 0xC0F, 0x40C, 0xA0FE, 0x90, 0x50, 0xC0F, 0x40C, 0xA0FF, 0xA0, 0x50, 0xC0F, 0x40C, 0xA100, 0xB0, 0x50, 0xB0F, 0x40C, 0xD101, 0x4020, 0xB12, 0x310, 0xD102, 0x5020, 0xB13, 0x311, 0xD103, 0x6020, 0xB0F, 0x30D, 0xD104, 0x4038, 0xB12, 0x310, 0xD105, 0x5038, 0xB13, 0x311, 0xD106, 0x6038, 0xB0E, 0x30C, 0xD107, 0x4050, 0xA12, 0x30F, 0xD108, 0x5050, 0x913, 0x210, 0xD109, 0x6050, 0x80F, 0x20C, 0xD10A, 0x4068, 0x912, 0x10F, 0xD10B, 0x5068, 0xA13, 0x210, 0xD10C, 0x6068, 0xB0F, 0x40C, 0xD10D, 0x4080, 0x812, 0x10F, 0xD10E, 0x5080, 0x913, 0x210, 0xD10F, 0x6080, 0xB0F, 0x40C, 0xD110, 0x4098, 0xA12, 0x30F, 0xD111, 0x5098, 0x913, 0x210, 0xD112, 0x6098, 0x80F, 0x10C, 0xD113, 0x40B0, 0x812, 0x10F, 0xD114, 0x50B0, 0x913, 0x210, 0xD115, 0x60B0, 0xB0F, 0x40C, 0xD116, 0x40C8, 0xA12, 0x30F, 0xD117, 0x50C8, 0x913, 0x210, 0xD118, 0x60C8, 0x80F, 0x10C, 0xD119, 0xC000, 0xA0D, 0x403, 0xD11A, 0xD000, 0xC0F, 0x40A, 0xD11B, 0xE000, 0xD0B, 0x308, 0xD11C, 0xF000, 0xD0B, 0x808, 0x211D, 0x100, 0x0, 0xB0D, 0x307, 0x211E, 0x110, 0x0, 0xC0D, 0x607, 0x211F, 0x120, 0x0, 0xE0A, 0x403, 0x2120, 0x130, 0x0, 0xD0C, 0x703, 0xD121, 0xC010, 0xA0F, 0x40D, 0xD122, 0xD011, 0xA0E, 0x400, 0xD123, 0xE00F, 0xF0A, 0xD05, 0xD124, 0xF010, 0xF0A, 0x5, 0x2125, 0x100, 0x10, 0xE0C, 0xA01, 0x2126, 0x110, 0x10, 0xE0D, 0x201, 0x2127, 0x120, 0x10, 0xE0D, 0xB09, 0x2128, 0x130, 0x10, 0xE0C, 0x109, 0xD129, 0x7020, 0xC0C, 0x8, 0xD12A, 0x8020, 0xD0C, 0x8, 0xD12B, 0x9020, 0xC0C, 0xA08, 0xD12C, 0xA020, 0xD0C, 0xB08, 0xD12D, 0x7038, 0xB0E, 0x30C, 0xD12E, 0x8039, 0xB0D, 0x30B, 0xD12F, 0x20, 0x1012, 0x40D, 0xD130, 0x38, 0x1012, 0x40D, 0xD131, 0x50, 0xA13, 0x40D, 0xD132, 0x68, 0xB13, 0xD, 0xD133, 0x80, 0xB13, 0xD, 0xD134, 0x98, 0xC13, 0x40D, 0xD135, 0xB0, 0xB13, 0xD, 0xD136, 0xC8, 0xC13, 0x40D, 0xD137, 0x1020, 0xF11, 0x40D, 0xD138, 0x1038, 0xF11, 0x40D, 0xD139, 0x1050, 0xB12, 0x40D, 0xD13A, 0x1068, 0xB12, 0xD, 0xD13B, 0x1080, 0xD12, 0xD, 0xD13C, 0x1098, 0xE12, 0x40D, 0xD13D, 0x10B0, 0xD12, 0xD, 0xD13E, 0x10C8, 0xE12, 0x40D, 0xD13F, 0x2020, 0x1012, 0x30D, 0xD140, 0x2038, 0x1012, 0x30D, 0xD141, 0x2050, 0xE13, 0x80E, 0xD142, 0x2068, 0xF13, 0xE, 0xD143, 0x2080, 0x1013, 0x10E, 0xD144, 0x2098, 0x1013, 0x70E, 0xD145, 0x20B0, 0x1013, 0x10E, 0xD146, 0x20C8, 0x1013, 0x70E, 0xD147, 0x20C8, 0xC14, 0x20F, 0xF148, 0x0, 0xC0F, 0x40C, 0xE3, 0xF149, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF14A, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF14B, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF14C, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF14D, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF14E, 0x6000, 0x90F, 0x20C, 0xE9, 0xF14F, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF150, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF151, 0x9000, 0x90F, 0x20C, 0xEC, 0xF152, 0xA000, 0x90F, 0x30C, 0xED, 0xF153, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF154, 0x10, 0x90F, 0x20C, 0xEF, 0xF155, 0x1010, 0x80F, 0x10C, 0xF0, 0xF156, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF157, 0x3010, 0x90F, 0x20C, 0xF2, 0xF158, 0x4010, 0x90F, 0x20C, 0xF3, 0xF159, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF15A, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF15B, 0x7010, 0x80F, 0x10C, 0xF6, 0xF15C, 0x8010, 0x90F, 0x20C, 0xF7, 0xF15D, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF15E, 0xA010, 0x90F, 0x20C, 0xF9, 0xF15F, 0xB010, 0x90F, 0x20C, 0xFA, 0xF160, 0x9040, 0xC0F, 0x40C, 0xFB, 0xF161, 0xA040, 0xC0F, 0x40C, 0xFC, 0xF162, 0xB040, 0xC0F, 0x40C, 0xFD, 0xF163, 0x9050, 0xC0F, 0x40C, 0xFE, 0xF164, 0xA050, 0xC0F, 0x40C, 0xFF, 0xF165, 0xB050, 0xB0F, 0x40C, 0x100, 0xE166, 0x4020, 0xB12, 0x310, 0x101, 0xE167, 0x5020, 0xB13, 0x311, 0x102, 0xE168, 0x6020, 0xB0F, 0x30D, 0x103, 0xE169, 0x4038, 0xB12, 0x310, 0x104, 0xE16A, 0x5038, 0xB13, 0x311, 0x105, 0xE16B, 0x6038, 0xB0E, 0x30C, 0x106, 0xE16C, 0x4050, 0xA12, 0x30F, 0x107, 0xE16D, 0x5050, 0x913, 0x210, 0x108, 0xE16E, 0x6050, 0x80F, 0x20C, 0x109, 0xE16F, 0x4068, 0x912, 0x10F, 0x10A, 0xE170, 0x5068, 0xA13, 0x210, 0x10B, 0xE171, 0x6068, 0xB0F, 0x40C, 0x10C, 0xE172, 0x4080, 0x812, 0x10F, 0x10D, 0xE173, 0x5080, 0x913, 0x210, 0x10E, 0xE174, 0x6080, 0xB0F, 0x40C, 0x10F, 0xE175, 0x4098, 0xA12, 0x30F, 0x110, 0xE176, 0x5098, 0x913, 0x210, 0x111, 0xE177, 0x6098, 0x80F, 0x10C, 0x112, 0xE178, 0x40B0, 0x812, 0x10F, 0x113, 0xE179, 0x50B0, 0x913, 0x210, 0x114, 0xE17A, 0x60B0, 0xB0F, 0x40C, 0x115, 0xE17B, 0x40C8, 0xA12, 0x30F, 0x116, 0xE17C, 0x50C8, 0x913, 0x210, 0x117, 0xE17D, 0x60C8, 0x80F, 0x10C, 0x118, 0xE17E, 0xC000, 0xA0D, 0x403, 0x119, 0xE17F, 0xD000, 0xC0F, 0x40A, 0x11A, 0xE180, 0xE000, 0xD0B, 0x308, 0x11B, 0xE181, 0xF000, 0xD0B, 0x808, 0x11C, 0x3182, 0x100, 0x0, 0xB0D, 0x307, 0x11D, 0x3183, 0x110, 0x0, 0xC0D, 0x607, 0x11E, 0x3184, 0x120, 0x0, 0xE0A, 0x403, 0x11F, 0x3185, 0x130, 0x0, 0xD0C, 0x703, 0x120, 0xE186, 0xC010, 0xA0F, 0x40D, 0x121, 0xE187, 0xD011, 0xA0E, 0x400, 0x122, 0xE188, 0xE00F, 0xF0A, 0xD05, 0x123, 0xE189, 0xF010, 0xF0A, 0x5, 0x124, 0x318A, 0x100, 0x10, 0xE0C, 0xA01, 0x125, 0x318B, 0x110, 0x10, 0xE0D, 0x201, 0x126, 0x318C, 0x120, 0x10, 0xE0D, 0xB09, 0x127, 0x318D, 0x130, 0x10, 0xE0C, 0x109, 0x128, 0xE18E, 0x7020, 0xC0C, 0x8, 0x129, 0xE18F, 0x8020, 0xD0C, 0x8, 0x12A, 0xE190, 0x9020, 0xC0C, 0xA08, 0x12B, 0xE191, 0xA020, 0xD0C, 0xB08, 0x12C, 0xE192, 0x7038, 0xB0E, 0x30C, 0x12D, 0xE193, 0x8039, 0xB0D, 0x30B, 0x12E, 0xE194, 0x20, 0x1012, 0x40D, 0x12F, 0xE195, 0x38, 0x1012, 0x40D, 0x130, 0xE196, 0x50, 0xA13, 0x40D, 0x131, 0xE197, 0x68, 0xB13, 0xD, 0x132, 0xE198, 0x80, 0xB13, 0xD, 0x133, 0xE199, 0x98, 0xC13, 0x40D, 0x134, 0xE19A, 0xB0, 0xB13, 0xD, 0x135, 0xE19B, 0xC8, 0xC13, 0x40D, 0x136, 0xE19C, 0x1020, 0xF11, 0x40D, 0x137, 0xE19D, 0x1038, 0xF11, 0x40D, 0x138, 0xE19E, 0x1050, 0xB12, 0x40D, 0x139, 0xE19F, 0x1068, 0xB12, 0xD, 0x13A, 0xE1A0, 0x1080, 0xD12, 0xD, 0x13B, 0xE1A1, 0x1098, 0xE12, 0x40D, 0x13C, 0xE1A2, 0x10B0, 0xD12, 0xD, 0x13D, 0xE1A3, 0x10C8, 0xE12, 0x40D, 0x13E, 0xE1A4, 0x2020, 0x1012, 0x30D, 0x13F, 0xE1A5, 0x2038, 0x1012, 0x30D, 0x140, 0xE1A6, 0x2050, 0xE13, 0x80E, 0x141, 0xE1A7, 0x2068, 0xF13, 0xE, 0x142, 0xE1A8, 0x2080, 0x1013, 0x10E, 0x143, 0xE1A9, 0x2098, 0x1013, 0x70E, 0x144, 0xE1AA, 0x20B0, 0x1013, 0x10E, 0x145, 0xE1AB, 0x20C8, 0x1013, 0x70E, 0x146, 0xE1AC, 0x20C8, 0xC14, 0x20F, 0x147, 0xF1AD, 0x0, 0xC0F, 0x40C, 0xE3, 0xF1AE, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF1AF, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF1B0, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF1B1, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF1B2, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF1B3, 0x6000, 0x90F, 0x20C, 0xE9, 0xF1B4, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF1B5, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF1B6, 0x9000, 0x90F, 0x20C, 0xEC, 0xF1B7, 0xA000, 0x90F, 0x30C, 0xED, 0xF1B8, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF1B9, 0x10, 0x90F, 0x20C, 0xEF, 0xF1BA, 0x1010, 0x80F, 0x10C, 0xF0, 0xF1BB, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF1BC, 0x3010, 0x90F, 0x20C, 0xF2, 0xF1BD, 0x4010, 0x90F, 0x20C, 0xF3, 0xF1BE, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF1BF, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF1C0, 0x7010, 0x80F, 0x10C, 0xF6, 0xF1C1, 0x8010, 0x90F, 0x20C, 0xF7, 0xF1C2, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF1C3, 0xA010, 0x90F, 0x20C, 0xF9, 0xF1C4, 0xB010, 0x90F, 0x20C, 0xFA, 0xF1C5, 0x9040, 0xC0F, 0x40C, 0xFB, 0xF1C6, 0xA040, 0xC0F, 0x40C, 0xFC, 0xF1C7, 0xB040, 0xC0F, 0x40C, 0xFD, 0xF1C8, 0x9050, 0xC0F, 0x40C, 0xFE, 0xF1C9, 0xA050, 0xC0F, 0x40C, 0xFF, 0xF1CA, 0xB050, 0xB0F, 0x40C, 0x100, 0xE1CB, 0x4020, 0xB12, 0x310, 0x101, 0xE1CC, 0x5020, 0xB13, 0x311, 0x102, 0xE1CD, 0x6020, 0xB0F, 0x30D, 0x103, 0xE1CE, 0x4038, 0xB12, 0x310, 0x104, 0xE1CF, 0x5038, 0xB13, 0x311, 0x105, 0xE1D0, 0x6038, 0xB0E, 0x30C, 0x106, 0xE1D1, 0x4050, 0xA12, 0x30F, 0x107, 0xE1D2, 0x5050, 0x913, 0x210, 0x108, 0xE1D3, 0x6050, 0x80F, 0x20C, 0x109, 0xE1D4, 0x4068, 0x912, 0x10F, 0x10A, 0xE1D5, 0x5068, 0xA13, 0x210, 0x10B, 0xE1D6, 0x6068, 0xB0F, 0x40C, 0x10C, 0xE1D7, 0x4080, 0x812, 0x10F, 0x10D, 0xE1D8, 0x5080, 0x913, 0x210, 0x10E, 0xE1D9, 0x6080, 0xB0F, 0x40C, 0x10F, 0xE1DA, 0x4098, 0xA12, 0x30F, 0x110, 0xE1DB, 0x5098, 0x913, 0x210, 0x111, 0xE1DC, 0x6098, 0x80F, 0x10C, 0x112, 0xE1DD, 0x40B0, 0x812, 0x10F, 0x113, 0xE1DE, 0x50B0, 0x913, 0x210, 0x114, 0xE1DF, 0x60B0, 0xB0F, 0x40C, 0x115, 0xE1E0, 0x40C8, 0xA12, 0x30F, 0x116, 0xE1E1, 0x50C8, 0x913, 0x210, 0x117, 0xE1E2, 0x60C8, 0x80F, 0x10C, 0x118, 0xE1E3, 0xC000, 0xA0D, 0x403, 0x119, 0xE1E4, 0xD000, 0xC0F, 0x40A, 0x11A, 0xE1E5, 0xE000, 0xD0B, 0x308, 0x11B, 0xE1E6, 0xF000, 0xD0B, 0x808, 0x11C, 0x31E7, 0x100, 0x0, 0xB0D, 0x307, 0x11D, 0x31E8, 0x110, 0x0, 0xC0D, 0x607, 0x11E, 0x31E9, 0x120, 0x0, 0xE0A, 0x403, 0x11F, 0x31EA, 0x130, 0x0, 0xD0C, 0x703, 0x120, 0xE1EB, 0xC010, 0xA0F, 0x40D, 0x121, 0xE1EC, 0xD011, 0xA0E, 0x400, 0x122, 0xE1ED, 0xE00F, 0xF0A, 0xD05, 0x123, 0xE1EE, 0xF010, 0xF0A, 0x5, 0x124, 0x31EF, 0x100, 0x10, 0xE0C, 0xA01, 0x125, 0x31F0, 0x110, 0x10, 0xE0D, 0x201, 0x126, 0x31F1, 0x120, 0x10, 0xE0D, 0xB09, 0x127, 0x31F2, 0x130, 0x10, 0xE0C, 0x109, 0x128, 0xE1F3, 0x7020, 0xC0C, 0x8, 0x129, 0xE1F4, 0x8020, 0xD0C, 0x8, 0x12A, 0xE1F5, 0x9020, 0xC0C, 0xA08, 0x12B, 0xE1F6, 0xA020, 0xD0C, 0xB08, 0x12C, 0xE1F7, 0x7038, 0xB0E, 0x30C, 0x12D, 0xE1F8, 0x8039, 0xB0D, 0x30B, 0x12E, 0xE1F9, 0x20, 0x1012, 0x40D, 0x12F, 0xE1FA, 0x38, 0x1012, 0x40D, 0x130, 0xE1FB, 0x50, 0xA13, 0x40D, 0x131, 0xE1FC, 0x68, 0xB13, 0xD, 0x132, 0xE1FD, 0x80, 0xB13, 0xD, 0x133, 0xE1FE, 0x98, 0xC13, 0x40D, 0x134, 0xE1FF, 0xB0, 0xB13, 0xD, 0x135, 0xE200, 0xC8, 0xC13, 0x40D, 0x136, 0xE201, 0x1020, 0xF11, 0x40D, 0x137, 0xE202, 0x1038, 0xF11, 0x40D, 0x138, 0xE203, 0x1050, 0xB12, 0x40D, 0x139, 0xE204, 0x1068, 0xB12, 0xD, 0x13A, 0xE205, 0x1080, 0xD12, 0xD, 0x13B, 0xE206, 0x1098, 0xE12, 0x40D, 0x13C, 0xE207, 0x10B0, 0xD12, 0xD, 0x13D, 0xE208, 0x10C8, 0xE12, 0x40D, 0x13E, 0xE209, 0x2020, 0x1012, 0x30D, 0x13F, 0xE20A, 0x2038, 0x1012, 0x30D, 0x140, 0xE20B, 0x2050, 0xE13, 0x80E, 0x141, 0xE20C, 0x2068, 0xF13, 0xE, 0x142, 0xE20D, 0x2080, 0x1013, 0x10E, 0x143, 0xE20E, 0x2098, 0x1013, 0x70E, 0x144, 0xE20F, 0x20B0, 0x1013, 0x10E, 0x145, 0xE210, 0x20C8, 0x1013, 0x70E, 0x146, 0xE211, 0x20C8, 0xC14, 0x20F, 0x147, 0x8000, 16, 6952, 0xF212, 0x0, 0xC0F, 0x40C, 0xE3, 0xF213, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF214, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF215, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF216, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF217, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF218, 0x6000, 0x90F, 0x20C, 0xE9, 0xF219, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF21A, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF21B, 0x9000, 0x90F, 0x20C, 0xEC, 0xF21C, 0xA000, 0x90F, 0x30C, 0xED, 0xF21D, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF21E, 0x10, 0x90F, 0x20C, 0xEF, 0xF21F, 0x1010, 0x80F, 0x10C, 0xF0, 0xF220, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF221, 0x3010, 0x90F, 0x20C, 0xF2, 0xF222, 0x4010, 0x90F, 0x20C, 0xF3, 0xF223, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF224, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF225, 0x7010, 0x80F, 0x10C, 0xF6, 0xF226, 0x8010, 0x90F, 0x20C, 0xF7, 0xF227, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF228, 0xA010, 0x90F, 0x20C, 0xF9, 0xF229, 0xB010, 0x90F, 0x20C, 0xFA, 0xF22A, 0x9040, 0xC0F, 0x40C, 0xFB, 0xF22B, 0xA040, 0xC0F, 0x40C, 0xFC, 0xF22C, 0xB040, 0xC0F, 0x40C, 0xFD, 0xF22D, 0x9050, 0xC0F, 0x40C, 0xFE, 0xF22E, 0xA050, 0xC0F, 0x40C, 0xFF, 0xF22F, 0xB050, 0xB0F, 0x40C, 0x100, 0xE230, 0x4020, 0xB12, 0x310, 0x101, 0xE231, 0x5020, 0xB13, 0x311, 0x102, 0xE232, 0x6020, 0xB0F, 0x30D, 0x103, 0xE233, 0x4038, 0xB12, 0x310, 0x104, 0xE234, 0x5038, 0xB13, 0x311, 0x105, 0xE235, 0x6038, 0xB0E, 0x30C, 0x106, 0xE236, 0x4050, 0xA12, 0x30F, 0x107, 0xE237, 0x5050, 0x913, 0x210, 0x108, 0xE238, 0x6050, 0x80F, 0x20C, 0x109, 0xE239, 0x4068, 0x912, 0x10F, 0x10A, 0xE23A, 0x5068, 0xA13, 0x210, 0x10B, 0xE23B, 0x6068, 0xB0F, 0x40C, 0x10C, 0xE23C, 0x4080, 0x812, 0x10F, 0x10D, 0xE23D, 0x5080, 0x913, 0x210, 0x10E, 0xE23E, 0x6080, 0xB0F, 0x40C, 0x10F, 0xE23F, 0x4098, 0xA12, 0x30F, 0x110, 0xE240, 0x5098, 0x913, 0x210, 0x111, 0xE241, 0x6098, 0x80F, 0x10C, 0x112, 0xE242, 0x40B0, 0x812, 0x10F, 0x113, 0xE243, 0x50B0, 0x913, 0x210, 0x114, 0xE244, 0x60B0, 0xB0F, 0x40C, 0x115, 0xE245, 0x40C8, 0xA12, 0x30F, 0x116, 0xE246, 0x50C8, 0x913, 0x210, 0x117, 0xE247, 0x60C8, 0x80F, 0x10C, 0x118, 0xE248, 0xC000, 0xA0D, 0x403, 0x119, 0xE249, 0xD000, 0xC0F, 0x40A, 0x11A, 0xE24A, 0xE000, 0xD0B, 0x308, 0x11B, 0xE24B, 0xF000, 0xD0B, 0x808, 0x11C, 0x324C, 0x100, 0x0, 0xB0D, 0x307, 0x11D, 0x324D, 0x110, 0x0, 0xC0D, 0x607, 0x11E, 0x324E, 0x120, 0x0, 0xE0A, 0x403, 0x11F, 0x324F, 0x130, 0x0, 0xD0C, 0x703, 0x120, 0xE250, 0xC010, 0xA0F, 0x40D, 0x121, 0xE251, 0xD011, 0xA0E, 0x400, 0x122, 0xE252, 0xE00F, 0xF0A, 0xD05, 0x123, 0xE253, 0xF010, 0xF0A, 0x5, 0x124, 0x3254, 0x100, 0x10, 0xE0C, 0xA01, 0x125, 0x3255, 0x110, 0x10, 0xE0D, 0x201, 0x126, 0x3256, 0x120, 0x10, 0xE0D, 0xB09, 0x127, 0x3257, 0x130, 0x10, 0xE0C, 0x109, 0x128, 0xE258, 0x7020, 0xC0C, 0x8, 0x129, 0xE259, 0x8020, 0xD0C, 0x8, 0x12A, 0xE25A, 0x9020, 0xC0C, 0xA08, 0x12B, 0xE25B, 0xA020, 0xD0C, 0xB08, 0x12C, 0xE25C, 0x7038, 0xB0E, 0x30C, 0x12D, 0xE25D, 0x8039, 0xB0D, 0x30B, 0x12E, 0xE25E, 0x20, 0x1012, 0x40D, 0x12F, 0xE25F, 0x38, 0x1012, 0x40D, 0x130, 0xE260, 0x50, 0xA13, 0x40D, 0x131, 0xE261, 0x68, 0xB13, 0xD, 0x132, 0xE262, 0x80, 0xB13, 0xD, 0x133, 0xE263, 0x98, 0xC13, 0x40D, 0x134, 0xE264, 0xB0, 0xB13, 0xD, 0x135, 0xE265, 0xC8, 0xC13, 0x40D, 0x136, 0xE266, 0x1020, 0xF11, 0x40D, 0x137, 0xE267, 0x1038, 0xF11, 0x40D, 0x138, 0xE268, 0x1050, 0xB12, 0x40D, 0x139, 0xE269, 0x1068, 0xB12, 0xD, 0x13A, 0xE26A, 0x1080, 0xD12, 0xD, 0x13B, 0xE26B, 0x1098, 0xE12, 0x40D, 0x13C, 0xE26C, 0x10B0, 0xD12, 0xD, 0x13D, 0xE26D, 0x10C8, 0xE12, 0x40D, 0x13E, 0xE26E, 0x2020, 0x1012, 0x30D, 0x13F, 0xE26F, 0x2038, 0x1012, 0x30D, 0x140, 0xE270, 0x2050, 0xE13, 0x80E, 0x141, 0xE271, 0x2068, 0xF13, 0xE, 0x142, 0xE272, 0x2080, 0x1013, 0x10E, 0x143, 0xE273, 0x2098, 0x1013, 0x70E, 0x144, 0xE274, 0x20B0, 0x1013, 0x10E, 0x145, 0xE275, 0x20C8, 0x1013, 0x70E, 0x146, 0xE276, 0x20C8, 0xC14, 0x20F, 0x147, 0xF277, 0x0, 0xC0F, 0x40C, 0xE3, 0xF278, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF279, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF27A, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF27B, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF27C, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF27D, 0x6000, 0x90F, 0x20C, 0xE9, 0xF27E, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF27F, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF280, 0x9000, 0x90F, 0x20C, 0xEC, 0xF281, 0xA000, 0x90F, 0x30C, 0xED, 0xF282, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF283, 0x10, 0x90F, 0x20C, 0xEF, 0xF284, 0x1010, 0x80F, 0x10C, 0xF0, 0xF285, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF286, 0x3010, 0x90F, 0x20C, 0xF2, 0xF287, 0x4010, 0x90F, 0x20C, 0xF3, 0xF288, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF289, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF28A, 0x7010, 0x80F, 0x10C, 0xF6, 0xF28B, 0x8010, 0x90F, 0x20C, 0xF7, 0xF28C, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF28D, 0xA010, 0x90F, 0x20C, 0xF9, 0xF28E, 0xB010, 0x90F, 0x20C, 0xFA, 0xF28F, 0x9040, 0xC0F, 0x40C, 0xFB, 0xF290, 0xA040, 0xC0F, 0x40C, 0xFC, 0xF291, 0xB040, 0xC0F, 0x40C, 0xFD, 0xF292, 0x9050, 0xC0F, 0x40C, 0xFE, 0xF293, 0xA050, 0xC0F, 0x40C, 0xFF, 0xF294, 0xB050, 0xB0F, 0x40C, 0x100, 0xE295, 0x4020, 0xB12, 0x310, 0x101, 0xE296, 0x5020, 0xB13, 0x311, 0x102, 0xE297, 0x6020, 0xB0F, 0x30D, 0x103, 0xE298, 0x4038, 0xB12, 0x310, 0x104, 0xE299, 0x5038, 0xB13, 0x311, 0x105, 0xE29A, 0x6038, 0xB0E, 0x30C, 0x106, 0xE29B, 0x4050, 0xA12, 0x30F, 0x107, 0xE29C, 0x5050, 0x913, 0x210, 0x108, 0xE29D, 0x6050, 0x80F, 0x20C, 0x109, 0xE29E, 0x4068, 0x912, 0x10F, 0x10A, 0xE29F, 0x5068, 0xA13, 0x210, 0x10B, 0xE2A0, 0x6068, 0xB0F, 0x40C, 0x10C, 0xE2A1, 0x4080, 0x812, 0x10F, 0x10D, 0xE2A2, 0x5080, 0x913, 0x210, 0x10E, 0xE2A3, 0x6080, 0xB0F, 0x40C, 0x10F, 0xE2A4, 0x4098, 0xA12, 0x30F, 0x110, 0xE2A5, 0x5098, 0x913, 0x210, 0x111, 0xE2A6, 0x6098, 0x80F, 0x10C, 0x112, 0xE2A7, 0x40B0, 0x812, 0x10F, 0x113, 0xE2A8, 0x50B0, 0x913, 0x210, 0x114, 0xE2A9, 0x60B0, 0xB0F, 0x40C, 0x115, 0xE2AA, 0x40C8, 0xA12, 0x30F, 0x116, 0xE2AB, 0x50C8, 0x913, 0x210, 0x117, 0xE2AC, 0x60C8, 0x80F, 0x10C, 0x118, 0xE2AD, 0xC000, 0xA0D, 0x403, 0x119, 0xE2AE, 0xD000, 0xC0F, 0x40A, 0x11A, 0xE2AF, 0xE000, 0xD0B, 0x308, 0x11B, 0xE2B0, 0xF000, 0xD0B, 0x808, 0x11C, 0x32B1, 0x100, 0x0, 0xB0D, 0x307, 0x11D, 0x32B2, 0x110, 0x0, 0xC0D, 0x607, 0x11E, 0x32B3, 0x120, 0x0, 0xE0A, 0x403, 0x11F, 0x32B4, 0x130, 0x0, 0xD0C, 0x703, 0x120, 0xE2B5, 0xC010, 0xA0F, 0x40D, 0x121, 0xE2B6, 0xD011, 0xA0E, 0x400, 0x122, 0xE2B7, 0xE00F, 0xF0A, 0xD05, 0x123, 0xE2B8, 0xF010, 0xF0A, 0x5, 0x124, 0x32B9, 0x100, 0x10, 0xE0C, 0xA01, 0x125, 0x32BA, 0x110, 0x10, 0xE0D, 0x201, 0x126, 0x32BB, 0x120, 0x10, 0xE0D, 0xB09, 0x127, 0x32BC, 0x130, 0x10, 0xE0C, 0x109, 0x128, 0xE2BD, 0x7020, 0xC0C, 0x8, 0x129, 0xE2BE, 0x8020, 0xD0C, 0x8, 0x12A, 0xE2BF, 0x9020, 0xC0C, 0xA08, 0x12B, 0xE2C0, 0xA020, 0xD0C, 0xB08, 0x12C, 0xE2C1, 0x7038, 0xB0E, 0x30C, 0x12D, 0xE2C2, 0x8039, 0xB0D, 0x30B, 0x12E, 0xE2C3, 0x20, 0x1012, 0x40D, 0x12F, 0xE2C4, 0x38, 0x1012, 0x40D, 0x130, 0xE2C5, 0x50, 0xA13, 0x40D, 0x131, 0xE2C6, 0x68, 0xB13, 0xD, 0x132, 0xE2C7, 0x80, 0xB13, 0xD, 0x133, 0xE2C8, 0x98, 0xC13, 0x40D, 0x134, 0xE2C9, 0xB0, 0xB13, 0xD, 0x135, 0xE2CA, 0xC8, 0xC13, 0x40D, 0x136, 0xE2CB, 0x1020, 0xF11, 0x40D, 0x137, 0xE2CC, 0x1038, 0xF11, 0x40D, 0x138, 0xE2CD, 0x1050, 0xB12, 0x40D, 0x139, 0xE2CE, 0x1068, 0xB12, 0xD, 0x13A, 0xE2CF, 0x1080, 0xD12, 0xD, 0x13B, 0xE2D0, 0x1098, 0xE12, 0x40D, 0x13C, 0xE2D1, 0x10B0, 0xD12, 0xD, 0x13D, 0xE2D2, 0x10C8, 0xE12, 0x40D, 0x13E, 0xE2D3, 0x2020, 0x1012, 0x30D, 0x13F, 0xE2D4, 0x2038, 0x1012, 0x30D, 0x140, 0xE2D5, 0x2050, 0xE13, 0x80E, 0x141, 0xE2D6, 0x2068, 0xF13, 0xE, 0x142, 0xE2D7, 0x2080, 0x1013, 0x10E, 0x143, 0xE2D8, 0x2098, 0x1013, 0x70E, 0x144, 0xE2D9, 0x20B0, 0x1013, 0x10E, 0x145, 0xE2DA, 0x20C8, 0x1013, 0x70E, 0x146, 0xE2DB, 0x20C8, 0xC14, 0x20F, 0x147, 0xF2DC, 0x0, 0xC0F, 0x40C, 0xE3, 0xF2DD, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF2DE, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF2DF, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF2E0, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF2E1, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF2E2, 0x6000, 0x90F, 0x20C, 0xE9, 0xF2E3, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF2E4, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF2E5, 0x9000, 0x90F, 0x20C, 0xEC, 0xF2E6, 0xA000, 0x90F, 0x30C, 0xED, 0xF2E7, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF2E8, 0x10, 0x90F, 0x20C, 0xEF, 0xF2E9, 0x1010, 0x80F, 0x10C, 0xF0, 0xF2EA, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF2EB, 0x3010, 0x90F, 0x20C, 0xF2, 0xF2EC, 0x4010, 0x90F, 0x20C, 0xF3, 0xF2ED, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF2EE, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF2EF, 0x7010, 0x80F, 0x10C, 0xF6, 0xF2F0, 0x8010, 0x90F, 0x20C, 0xF7, 0xF2F1, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF2F2, 0xA010, 0x90F, 0x20C, 0xF9, 0xF2F3, 0xB010, 0x90F, 0x20C, 0xFA, 0xF2F4, 0x9040, 0xC0F, 0x40C, 0xFB, 0xF2F5, 0xA040, 0xC0F, 0x40C, 0xFC, 0xF2F6, 0xB040, 0xC0F, 0x40C, 0xFD, 0xF2F7, 0x9050, 0xC0F, 0x40C, 0xFE, 0xF2F8, 0xA050, 0xC0F, 0x40C, 0xFF, 0xF2F9, 0xB050, 0xB0F, 0x40C, 0x100, 0xE2FA, 0x4020, 0xB12, 0x310, 0x101, 0xE2FB, 0x5020, 0xB13, 0x311, 0x102, 0xE2FC, 0x6020, 0xB0F, 0x30D, 0x103, 0xE2FD, 0x4038, 0xB12, 0x310, 0x104, 0xE2FE, 0x5038, 0xB13, 0x311, 0x105, 0xE2FF, 0x6038, 0xB0E, 0x30C, 0x106, 0xE300, 0x4050, 0xA12, 0x30F, 0x107, 0xE301, 0x5050, 0x913, 0x210, 0x108, 0xE302, 0x6050, 0x80F, 0x20C, 0x109, 0xE303, 0x4068, 0x912, 0x10F, 0x10A, 0xE304, 0x5068, 0xA13, 0x210, 0x10B, 0xE305, 0x6068, 0xB0F, 0x40C, 0x10C, 0xE306, 0x4080, 0x812, 0x10F, 0x10D, 0xE307, 0x5080, 0x913, 0x210, 0x10E, 0xE308, 0x6080, 0xB0F, 0x40C, 0x10F, 0xE309, 0x4098, 0xA12, 0x30F, 0x110, 0xE30A, 0x5098, 0x913, 0x210, 0x111, 0xE30B, 0x6098, 0x80F, 0x10C, 0x112, 0xE30C, 0x40B0, 0x812, 0x10F, 0x113, 0xE30D, 0x50B0, 0x913, 0x210, 0x114, 0xE30E, 0x60B0, 0xB0F, 0x40C, 0x115, 0xE30F, 0x40C8, 0xA12, 0x30F, 0x116, 0xE310, 0x50C8, 0x913, 0x210, 0x117, 0xE311, 0x60C8, 0x80F, 0x10C, 0x118, 0xE312, 0xC000, 0xA0D, 0x403, 0x119, 0xE313, 0xD000, 0xC0F, 0x40A, 0x11A, 0xE314, 0xE000, 0xD0B, 0x308, 0x11B, 0xE315, 0xF000, 0xD0B, 0x808, 0x11C, 0x3316, 0x100, 0x0, 0xB0D, 0x307, 0x11D, 0x3317, 0x110, 0x0, 0xC0D, 0x607, 0x11E, 0x3318, 0x120, 0x0, 0xE0A, 0x403, 0x11F, 0x3319, 0x130, 0x0, 0xD0C, 0x703, 0x120, 0xE31A, 0xC010, 0xA0F, 0x40D, 0x121, 0xE31B, 0xD011, 0xA0E, 0x400, 0x122, 0xE31C, 0xE00F, 0xF0A, 0xD05, 0x123, 0xE31D, 0xF010, 0xF0A, 0x5, 0x124, 0x331E, 0x100, 0x10, 0xE0C, 0xA01, 0x125, 0x331F, 0x110, 0x10, 0xE0D, 0x201, 0x126, 0x3320, 0x120, 0x10, 0xE0D, 0xB09, 0x127, 0x3321, 0x130, 0x10, 0xE0C, 0x109, 0x128, 0xE322, 0x7020, 0xC0C, 0x8, 0x129, 0xE323, 0x8020, 0xD0C, 0x8, 0x12A, 0xE324, 0x9020, 0xC0C, 0xA08, 0x12B, 0xE325, 0xA020, 0xD0C, 0xB08, 0x12C, 0xE326, 0x7038, 0xB0E, 0x30C, 0x12D, 0xE327, 0x8039, 0xB0D, 0x30B, 0x12E, 0xE328, 0x20, 0x1012, 0x40D, 0x12F, 0xE329, 0x38, 0x1012, 0x40D, 0x130, 0xE32A, 0x50, 0xA13, 0x40D, 0x131, 0xE32B, 0x68, 0xB13, 0xD, 0x132, 0xE32C, 0x80, 0xB13, 0xD, 0x133, 0xE32D, 0x98, 0xC13, 0x40D, 0x134, 0xE32E, 0xB0, 0xB13, 0xD, 0x135, 0xE32F, 0xC8, 0xC13, 0x40D, 0x136, 0xE330, 0x1020, 0xF11, 0x40D, 0x137, 0xE331, 0x1038, 0xF11, 0x40D, 0x138, 0xE332, 0x1050, 0xB12, 0x40D, 0x139, 0xE333, 0x1068, 0xB12, 0xD, 0x13A, 0xE334, 0x1080, 0xD12, 0xD, 0x13B, 0xE335, 0x1098, 0xE12, 0x40D, 0x13C, 0xE336, 0x10B0, 0xD12, 0xD, 0x13D, 0xE337, 0x10C8, 0xE12, 0x40D, 0x13E, 0xE338, 0x2020, 0x1012, 0x30D, 0x13F, 0xE339, 0x2038, 0x1012, 0x30D, 0x140, 0xE33A, 0x2050, 0xE13, 0x80E, 0x141, 0xE33B, 0x2068, 0xF13, 0xE, 0x142, 0xE33C, 0x2080, 0x1013, 0x10E, 0x143, 0xE33D, 0x2098, 0x1013, 0x70E, 0x144, 0xE33E, 0x20B0, 0x1013, 0x10E, 0x145, 0xE33F, 0x20C8, 0x1013, 0x70E, 0x146, 0xE340, 0x20C8, 0xC14, 0x20F, 0x147, 0x7000, 16, 6801, 0xF341, 0x0, 0xC0F, 0x40C, 0xE3, 0xF342, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF343, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF344, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF345, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF346, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF347, 0x6000, 0x90F, 0x20C, 0xE9, 0xF348, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF349, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF34A, 0x9000, 0x90F, 0x20C, 0xEC, 0xF34B, 0xA000, 0x90F, 0x30C, 0xED, 0xF34C, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF34D, 0x10, 0x90F, 0x20C, 0xEF, 0xF34E, 0x1010, 0x80F, 0x10C, 0xF0, 0xF34F, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF350, 0x3010, 0x90F, 0x20C, 0xF2, 0xF351, 0x4010, 0x90F, 0x20C, 0xF3, 0xF352, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF353, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF354, 0x7010, 0x80F, 0x10C, 0xF6, 0xF355, 0x8010, 0x90F, 0x20C, 0xF7, 0xF356, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF357, 0xA010, 0x90F, 0x20C, 0xF9, 0xF358, 0xB010, 0x90F, 0x20C, 0xFA, 0xD359, 0x50, 0x1011, 0x50D, 0xD35A, 0x104D, 0x1014, 0xA10, 0xD35B, 0x204F, 0x1012, 0xC0E, 0xD35C, 0x3051, 0x1010, 0xC0C, 0xD35D, 0x4055, 0x100C, 0xD08, 0xD35E, 0x5056, 0x100B, 0xD07, 0xD35F, 0x6055, 0xE0B, 0x808, 0xD360, 0x70, 0x100B, 0xFE07, 0xD361, 0x106F, 0x100C, 0x8, 0xD362, 0x206B, 0x1010, 0x10C, 0xD363, 0x3069, 0x1012, 0x10E, 0xD364, 0x4067, 0x1014, 0x110, 0xD365, 0x506A, 0x1011, 0x40D, 0xD366, 0x606F, 0xD0B, 0x207, 0xD367, 0x80, 0x1011, 0x50D, 0xD368, 0x107D, 0x1014, 0xA10, 0xD369, 0x207F, 0x1012, 0xC0E, 0xD36A, 0x3081, 0x1010, 0xC0C, 0xD36B, 0x4085, 0x100C, 0xD08, 0xD36C, 0x5086, 0x100B, 0xD07, 0xD36D, 0x6086, 0xE0A, 0x808, 0xD36E, 0xA0, 0x100B, 0xFE07, 0xD36F, 0x109F, 0x100C, 0x8, 0xD370, 0x209B, 0x1010, 0x10C, 0xD371, 0x3099, 0x1012, 0x10E, 0xD372, 0x4097, 0x1014, 0x110, 0xD373, 0x509A, 0x1011, 0x40D, 0xD374, 0x60A0, 0xD0A, 0x207, 0xD375, 0x20, 0xF10, 0x40E, 0xD376, 0x1020, 0x1011, 0x40F, 0xD377, 0x2020, 0x1013, 0x311, 0xD378, 0x38, 0xF10, 0x40E, 0xD379, 0x1038, 0x1011, 0x40F, 0xD37A, 0x2038, 0x1013, 0x311, 0xF37B, 0x0, 0xC0F, 0x40C, 0xE3, 0xF37C, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF37D, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF37E, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF37F, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF380, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF381, 0x6000, 0x90F, 0x20C, 0xE9, 0xF382, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF383, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF384, 0x9000, 0x90F, 0x20C, 0xEC, 0xF385, 0xA000, 0x90F, 0x30C, 0xED, 0xF386, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF387, 0x10, 0x90F, 0x20C, 0xEF, 0xF388, 0x1010, 0x80F, 0x10C, 0xF0, 0xF389, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF38A, 0x3010, 0x90F, 0x20C, 0xF2, 0xF38B, 0x4010, 0x90F, 0x20C, 0xF3, 0xF38C, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF38D, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF38E, 0x7010, 0x80F, 0x10C, 0xF6, 0xF38F, 0x8010, 0x90F, 0x20C, 0xF7, 0xF390, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF391, 0xA010, 0x90F, 0x20C, 0xF9, 0xF392, 0xB010, 0x90F, 0x20C, 0xFA, 0xE393, 0x50, 0x1011, 0x50D, 0x359, 0xE394, 0x104D, 0x1014, 0xA10, 0x35A, 0xE395, 0x204F, 0x1012, 0xC0E, 0x35B, 0xE396, 0x3051, 0x1010, 0xC0C, 0x35C, 0xE397, 0x4055, 0x100C, 0xD08, 0x35D, 0xE398, 0x5056, 0x100B, 0xD07, 0x35E, 0xE399, 0x6055, 0xE0B, 0x808, 0x35F, 0xE39A, 0x70, 0x100B, 0xFE07, 0x360, 0xE39B, 0x106F, 0x100C, 0x8, 0x361, 0xE39C, 0x206B, 0x1010, 0x10C, 0x362, 0xE39D, 0x3069, 0x1012, 0x10E, 0x363, 0xE39E, 0x4067, 0x1014, 0x110, 0x364, 0xE39F, 0x506A, 0x1011, 0x40D, 0x365, 0xE3A0, 0x606F, 0xD0B, 0x207, 0x366, 0xE3A1, 0x80, 0x1011, 0x50D, 0x367, 0xE3A2, 0x107D, 0x1014, 0xA10, 0x368, 0xE3A3, 0x207F, 0x1012, 0xC0E, 0x369, 0xE3A4, 0x3081, 0x1010, 0xC0C, 0x36A, 0xE3A5, 0x4085, 0x100C, 0xD08, 0x36B, 0xE3A6, 0x5086, 0x100B, 0xD07, 0x36C, 0xE3A7, 0x6086, 0xE0A, 0x808, 0x36D, 0xE3A8, 0xA0, 0x100B, 0xFE07, 0x36E, 0xE3A9, 0x109F, 0x100C, 0x8, 0x36F, 0xE3AA, 0x209B, 0x1010, 0x10C, 0x370, 0xE3AB, 0x3099, 0x1012, 0x10E, 0x371, 0xE3AC, 0x4097, 0x1014, 0x110, 0x372, 0xE3AD, 0x509A, 0x1011, 0x40D, 0x373, 0xE3AE, 0x60A0, 0xD0A, 0x207, 0x374, 0xE3AF, 0x20, 0xF10, 0x40E, 0x375, 0xE3B0, 0x1020, 0x1011, 0x40F, 0x376, 0xE3B1, 0x2020, 0x1013, 0x311, 0x377, 0xE3B2, 0x38, 0xF10, 0x40E, 0x378, 0xE3B3, 0x1038, 0x1011, 0x40F, 0x379, 0xE3B4, 0x2038, 0x1013, 0x311, 0x37A, 0xF3B5, 0x0, 0xC0F, 0x40C, 0xE3, 0xF3B6, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF3B7, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF3B8, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF3B9, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF3BA, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF3BB, 0x6000, 0x90F, 0x20C, 0xE9, 0xF3BC, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF3BD, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF3BE, 0x9000, 0x90F, 0x20C, 0xEC, 0xF3BF, 0xA000, 0x90F, 0x30C, 0xED, 0xF3C0, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF3C1, 0x10, 0x90F, 0x20C, 0xEF, 0xF3C2, 0x1010, 0x80F, 0x10C, 0xF0, 0xF3C3, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF3C4, 0x3010, 0x90F, 0x20C, 0xF2, 0xF3C5, 0x4010, 0x90F, 0x20C, 0xF3, 0xF3C6, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF3C7, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF3C8, 0x7010, 0x80F, 0x10C, 0xF6, 0xF3C9, 0x8010, 0x90F, 0x20C, 0xF7, 0xF3CA, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF3CB, 0xA010, 0x90F, 0x20C, 0xF9, 0xF3CC, 0xB010, 0x90F, 0x20C, 0xFA, 0xE3CD, 0x50, 0x1011, 0x50D, 0x359, 0xE3CE, 0x104D, 0x1014, 0xA10, 0x35A, 0xE3CF, 0x204F, 0x1012, 0xC0E, 0x35B, 0xE3D0, 0x3051, 0x1010, 0xC0C, 0x35C, 0xE3D1, 0x4055, 0x100C, 0xD08, 0x35D, 0xE3D2, 0x5056, 0x100B, 0xD07, 0x35E, 0xE3D3, 0x6055, 0xE0B, 0x808, 0x35F, 0xE3D4, 0x70, 0x100B, 0xFE07, 0x360, 0xE3D5, 0x106F, 0x100C, 0x8, 0x361, 0xE3D6, 0x206B, 0x1010, 0x10C, 0x362, 0xE3D7, 0x3069, 0x1012, 0x10E, 0x363, 0xE3D8, 0x4067, 0x1014, 0x110, 0x364, 0xE3D9, 0x506A, 0x1011, 0x40D, 0x365, 0xE3DA, 0x606F, 0xD0B, 0x207, 0x366, 0xE3DB, 0x80, 0x1011, 0x50D, 0x367, 0xE3DC, 0x107D, 0x1014, 0xA10, 0x368, 0xE3DD, 0x207F, 0x1012, 0xC0E, 0x369, 0xE3DE, 0x3081, 0x1010, 0xC0C, 0x36A, 0xE3DF, 0x4085, 0x100C, 0xD08, 0x36B, 0xE3E0, 0x5086, 0x100B, 0xD07, 0x36C, 0xE3E1, 0x6086, 0xE0A, 0x808, 0x36D, 0xE3E2, 0xA0, 0x100B, 0xFE07, 0x36E, 0xE3E3, 0x109F, 0x100C, 0x8, 0x36F, 0xE3E4, 0x209B, 0x1010, 0x10C, 0x370, 0xE3E5, 0x3099, 0x1012, 0x10E, 0x371, 0xE3E6, 0x4097, 0x1014, 0x110, 0x372, 0xE3E7, 0x509A, 0x1011, 0x40D, 0x373, 0xE3E8, 0x60A0, 0xD0A, 0x207, 0x374, 0xE3E9, 0x20, 0xF10, 0x40E, 0x375, 0xE3EA, 0x1020, 0x1011, 0x40F, 0x376, 0xE3EB, 0x2020, 0x1013, 0x311, 0x377, 0xE3EC, 0x38, 0xF10, 0x40E, 0x378, 0xE3ED, 0x1038, 0x1011, 0x40F, 0x379, 0xE3EE, 0x2038, 0x1013, 0x311, 0x37A, 0xF3EF, 0x0, 0xC0F, 0x40C, 0xE3, 0xF3F0, 0x1000, 0xD0F, 0x50C, 0xE4, 0xF3F1, 0x2000, 0xB0F, 0x30C, 0xE5, 0xF3F2, 0x3000, 0xC0F, 0x40C, 0xE6, 0xF3F3, 0x4000, 0xB0F, 0x30C, 0xE7, 0xF3F4, 0x5000, 0xD0F, 0x50C, 0xE8, 0xF3F5, 0x6000, 0x90F, 0x20C, 0xE9, 0xF3F6, 0x7000, 0xB0F, 0x40C, 0xEA, 0xF3F7, 0x8000, 0xA0F, 0x30C, 0xEB, 0xF3F8, 0x9000, 0x90F, 0x20C, 0xEC, 0xF3F9, 0xA000, 0x90F, 0x30C, 0xED, 0xF3FA, 0xB000, 0xB0F, 0x30C, 0xEE, 0xF3FB, 0x10, 0x90F, 0x20C, 0xEF, 0xF3FC, 0x1010, 0x80F, 0x10C, 0xF0, 0xF3FD, 0x2010, 0xA0F, 0x30C, 0xF1, 0xF3FE, 0x3010, 0x90F, 0x20C, 0xF2, 0xF3FF, 0x4010, 0x90F, 0x20C, 0xF3, 0xF400, 0x5010, 0xB0F, 0x30C, 0xF4, 0xF401, 0x6010, 0xA0F, 0x30C, 0xF5, 0xF402, 0x7010, 0x80F, 0x10C, 0xF6, 0xF403, 0x8010, 0x90F, 0x20C, 0xF7, 0xF404, 0x9010, 0xB0F, 0x30C, 0xF8, 0xF405, 0xA010, 0x90F, 0x20C, 0xF9, 0xF406, 0xB010, 0x90F, 0x20C, 0xFA, 0xE407, 0x50, 0x1011, 0x50D, 0x359, 0xE408, 0x104D, 0x1014, 0xA10, 0x35A, 0xE409, 0x204F, 0x1012, 0xC0E, 0x35B, 0xE40A, 0x3051, 0x1010, 0xC0C, 0x35C, 0xE40B, 0x4055, 0x100C, 0xD08, 0x35D, 0xE40C, 0x5056, 0x100B, 0xD07, 0x35E, 0xE40D, 0x6055, 0xE0B, 0x808, 0x35F, 0xE40E, 0x70, 0x100B, 0xFE07, 0x360, 0xE40F, 0x106F, 0x100C, 0x8, 0x361, 0xE410, 0x206B, 0x1010, 0x10C, 0x362, 0xE411, 0x3069, 0x1012, 0x10E, 0x363, 0xE412, 0x4067, 0x1014, 0x110, 0x364, 0xE413, 0x506A, 0x1011, 0x40D, 0x365, 0xE414, 0x606F, 0xD0B, 0x207, 0x366, 0xE415, 0x80, 0x1011, 0x50D, 0x367, 0xE416, 0x107D, 0x1014, 0xA10, 0x368, 0xE417, 0x207F, 0x1012, 0xC0E, 0x369, 0xE418, 0x3081, 0x1010, 0xC0C, 0x36A, 0xE419, 0x4085, 0x100C, 0xD08, 0x36B, 0xE41A, 0x5086, 0x100B, 0xD07, 0x36C, 0xE41B, 0x6086, 0xE0A, 0x808, 0x36D, 0xE41C, 0xA0, 0x100B, 0xFE07, 0x36E, 0xE41D, 0x109F, 0x100C, 0x8, 0x36F, 0xE41E, 0x209B, 0x1010, 0x10C, 0x370, 0xE41F, 0x3099, 0x1012, 0x10E, 0x371, 0xE420, 0x4097, 0x1014, 0x110, 0x372, 0xE421, 0x509A, 0x1011, 0x40D, 0x373, 0xE422, 0x60A0, 0xD0A, 0x207, 0x374, 0xE423, 0x20, 0xF10, 0x40E, 0x375, 0xE424, 0x1020, 0x1011, 0x40F, 0x376, 0xE425, 0x2020, 0x1013, 0x311, 0x377, 0xE426, 0x38, 0xF10, 0x40E, 0x378, 0xE427, 0x1038, 0x1011, 0x40F, 0x379, 0xE428, 0x2038, 0x1013, 0x311, 0x37A, 0x7000, 16, 6726, 0xA429, 0x0, 0x30, 0x404, 0x103, 0xA42A, 0x10, 0x30, 0x404, 0x103, 0xA42B, 0x20, 0x30, 0x404, 0x103, 0xA42C, 0x30, 0x30, 0x404, 0x103, 0xA42D, 0x40, 0x30, 0x404, 0x103, 0xA42E, 0x0, 0xC8, 0x100C, 0x608, 0xA42F, 0x10, 0xC8, 0x100C, 0x608, 0xA430, 0x20, 0xC8, 0x100C, 0x608, 0xA431, 0x30, 0xC8, 0x100C, 0x608, 0xA432, 0x50, 0x30, 0x305, 0x102, 0xA433, 0x50, 0x35, 0x305, 0x102, 0xA434, 0x50, 0x3A, 0x305, 0x102, 0xA435, 0x50, 0x3F, 0x305, 0x102, 0xA436, 0x50, 0x44, 0x305, 0x102, 0xA437, 0x50, 0x49, 0x305, 0x102, 0xA438, 0x50, 0x4E, 0x305, 0x102, 0xA439, 0x50, 0x53, 0x305, 0x102, 0xA43A, 0x50, 0x58, 0x305, 0x102, 0xA43B, 0x50, 0x5D, 0x505, 0x202, 0xA43C, 0x50, 0x62, 0x305, 0x102, 0xA43D, 0x50, 0x67, 0x505, 0x202, 0xA43E, 0x50, 0x6C, 0x505, 0x202, 0xA43F, 0x50, 0x71, 0x505, 0x202, 0xA440, 0x50, 0x76, 0x505, 0x202, 0xA441, 0x50, 0x7B, 0x505, 0x202, 0xA442, 0x50, 0x80, 0x505, 0x202, 0xD443, 0x40, 0x4907, 0x17, 0xD444, 0x50, 0x491C, 0x1B, 0xC445, 0x0, 0x1010, 0xC446, 0x6050, 0x1117, 0x7000, 16, 6250, 0xC447, 0x14, 0x2017, 0xC448, 0x2014, 0x2017, 0xC449, 0x4014, 0x2017, 0xC44A, 0x6014, 0x2017, 0xC44B, 0x8014, 0x2017, 0xC44C, 0xA014, 0x2017, 0xC44D, 0xC014, 0x2017, 0xC44E, 0xE014, 0x2017, 0xC44F, 0x2B, 0x2017, 0xC450, 0x202B, 0x2017, 0xC451, 0x402B, 0x2017, 0xC452, 0x602B, 0x2017, 0xC453, 0x802B, 0x2017, 0xC454, 0xA02B, 0x2017, 0xC455, 0xC02B, 0x2017, 0xC456, 0xE02B, 0x2017, 0xC457, 0x42, 0x2017, 0xC458, 0x2042, 0x2017, 0xC459, 0x4042, 0x2017, 0xC45A, 0x6042, 0x2017, 0xC45B, 0x8042, 0x2017, 0xC45C, 0xA042, 0x2017, 0xC45D, 0xC042, 0x2017, 0xC45E, 0xE042, 0x2017, 0xC45F, 0x59, 0x2017, 0xC460, 0x2059, 0x2017, 0xC461, 0x4059, 0x2017, 0xC462, 0x6059, 0x2017, 0xC463, 0x8059, 0x2017, 0xC464, 0xA059, 0x2017, 0xC465, 0xC059, 0x2017, 0xC466, 0xE059, 0x2017, 0xC467, 0x70, 0x2017, 0xC468, 0x2070, 0x2017, 0xC469, 0x4070, 0x2017, 0xC46A, 0x6070, 0x2017, 0xC46B, 0x8070, 0x2017, 0xC46C, 0xA070, 0x2017, 0xC46D, 0xC070, 0x2017, 0xC46E, 0xE070, 0x2017, 0xC46F, 0x87, 0x2017, 0xC470, 0x2087, 0x2017, 0xC471, 0x4087, 0x2017, 0xC472, 0x6087, 0x2017, 0xC473, 0x8087, 0x2017, 0xC474, 0xA087, 0x2017, 0xC475, 0xC087, 0x2017, 0xC476, 0xE087, 0x2017, 0xC477, 0x9E, 0x2017, 0xC478, 0x209E, 0x2017, 0xC479, 0x409E, 0x2017, 0xC47A, 0x609E, 0x2017, 0xC47B, 0x809E, 0x2017, 0xC47C, 0xA09E, 0x2017, 0xC47D, 0xC09E, 0x2017, 0xC47E, 0xE09E, 0x2017, 0xC47F, 0xB5, 0x2017, 0xC480, 0x20B5, 0x2017, 0xC481, 0x40B5, 0x2017, 0xC482, 0x60B5, 0x2017, 0xC483, 0x80B5, 0x2017, 0xC484, 0xA0B5, 0x2017, 0xC485, 0xC0B5, 0x2017, 0xC486, 0xE0B5, 0x2017, 0x7000, 16, 6839, 0xD487, 0x8030, 0xC0F, 0x40C, 0xD488, 0x9030, 0xD0F, 0x50C, 0xD489, 0xA030, 0xB0F, 0x30C, 0xD48A, 0xB030, 0xC0F, 0x40C, 0xD48B, 0xC030, 0xB0F, 0x30C, 0xD48C, 0xD030, 0xD0F, 0x50C, 0xD48D, 0x8050, 0x90F, 0x20C, 0xD48E, 0x9050, 0x910, 0x20D, 0xD48F, 0xA050, 0xC10, 0x50D, 0xD490, 0xB050, 0xB0F, 0x40C, 0xD491, 0xC050, 0xB0F, 0x40C, 0x1492, 0x110, 0x78, 0x908, 0x1493, 0x110, 0x30, 0x1044, 0x1494, 0x120, 0x30, 0x544, 0x1495, 0x130, 0x30, 0x1044, 0x1496, 0x110, 0xA8, 0x231B, 0x1497, 0x110, 0xC8, 0x251D, 0x1498, 0x100, 0x78, 0x808, 0x2499, 0x100, 0x80, 0x506, 0x203, 0x249A, 0x100, 0x87, 0x506, 0x203, 0x149B, 0x130, 0x88, 0x808, 0x149C, 0x130, 0x98, 0x808, 0x149D, 0x130, 0x90, 0x808, 0xD49E, 0x1000, 0xA12, 0x0, 0xD49F, 0x2000, 0x812, 0x0, 0xD4A0, 0x3000, 0x812, 0x0, 0x24A1, 0x100, 0x0, 0x90F, 0xF800, 0x24A2, 0x110, 0x0, 0x90F, 0xF800, 0x24A3, 0x120, 0x0, 0x90F, 0xF800, 0x24A4, 0x130, 0x0, 0x90F, 0xF800, 0xE4A5, 0x1018, 0xA12, 0x0, 0x49E, 0xE4A6, 0x2018, 0x812, 0x0, 0x49F, 0xE4A7, 0x3018, 0x812, 0x0, 0x4A0, 0x34A8, 0x100, 0x18, 0x90F, 0xF800, 0x4A1, 0x34A9, 0x110, 0x18, 0x90F, 0xF800, 0x4A2, 0x34AA, 0x120, 0x18, 0x90F, 0xF800, 0x4A3, 0x34AB, 0x130, 0x18, 0x90F, 0xF800, 0x4A4, 0xD4AC, 0x4000, 0x812, 0x0, 0xD4AD, 0x5000, 0x812, 0x0, 0xD4AE, 0x6000, 0x812, 0x0, 0xD4AF, 0x7000, 0x812, 0x0, 0xD4B0, 0x8000, 0x812, 0x0, 0xD4B1, 0x9000, 0x812, 0x0, 0xD4B2, 0xA000, 0x90F, 0xF800, 0xD4B3, 0xB000, 0x90F, 0xF800, 0xD4B4, 0xC000, 0x90F, 0xF800, 0xD4B5, 0xD000, 0x90F, 0xF800, 0xD4B6, 0xE000, 0x90F, 0xF800, 0xD4B7, 0xF000, 0x90F, 0xF800, 0xE4B8, 0x4000, 0x812, 0x0, 0x4AC, 0xE4B9, 0x5000, 0x812, 0x0, 0x4AD, 0xE4BA, 0x6000, 0x812, 0x0, 0x4AE, 0xE4BB, 0x7000, 0x812, 0x0, 0x4AF, 0xE4BC, 0x8000, 0x812, 0x0, 0x4B0, 0xE4BD, 0x9000, 0x812, 0x0, 0x4B1, 0xE4BE, 0xA000, 0x90F, 0xF800, 0x4B2, 0xE4BF, 0xB000, 0x90F, 0xF800, 0x4B3, 0xE4C0, 0xC000, 0x90F, 0xF800, 0x4B4, 0xE4C1, 0xD000, 0x90F, 0xF800, 0x4B5, 0xE4C2, 0xE000, 0x90F, 0xF800, 0x4B6, 0xE4C3, 0xF000, 0x90F, 0xF800, 0x4B7, 0xFFFF };
uint16_t menuBGImageCmdStream[406] = { 0x7000, 16, 6561, 0x1071, 0x100, 0x0, 0x2008, 0x1072, 0x100, 0x9, 0x2008, 0x1073, 0x100, 0x12, 0x2008, 0x1074, 0x100, 0x1B, 0x2008, 0x1075, 0x100, 0x24, 0x2008, 0x1076, 0x100, 0x2D, 0x2008, 0x1077, 0x100, 0x36, 0x2008, 0x1078, 0x100, 0x3F, 0x2008, 0x1079, 0x100, 0x48, 0x2008, 0x107A, 0x100, 0x51, 0x2008, 0xD07B, 0xB060, 0x505, 0x204, 0xD07C, 0xB000, 0x608, 0x206, 0xD07D, 0xC000, 0x608, 0x206, 0xD07E, 0xD000, 0x608, 0x206, 0xD07F, 0xB000, 0x608, 0x206, 0xD080, 0xC000, 0x608, 0x206, 0xD081, 0xD000, 0x608, 0x206, 0xD082, 0xB000, 0x608, 0x206, 0xD083, 0xC000, 0x608, 0x206, 0xD084, 0xD000, 0x608, 0x206, 0xD085, 0xB010, 0x608, 0x206, 0xD086, 0xC010, 0x608, 0x206, 0xD087, 0xD010, 0x608, 0x206, 0xD088, 0xB020, 0x608, 0x206, 0xD089, 0xC020, 0x608, 0x206, 0xD08A, 0xD020, 0x608, 0x206, 0xD08B, 0xB030, 0x608, 0x206, 0xD08C, 0xC030, 0x608, 0x206, 0xD08D, 0xD030, 0x608, 0x206, 0xD08E, 0xB040, 0x608, 0x206, 0xD08F, 0xC040, 0x608, 0x206, 0xD090, 0xD040, 0x608, 0x206, 0xC091, 0x20, 0x708, 0xC092, 0x28, 0x708, 0xC093, 0x30, 0xC08, 0xC094, 0x38, 0xC08, 0xD095, 0xB050, 0xB08, 0x505, 0xD096, 0xC050, 0xB08, 0x505, 0xD097, 0xD050, 0xB08, 0x505, 0xC098, 0x88, 0xC08, 0xC099, 0x70, 0x808, 0xC09A, 0x78, 0x808, 0xC09B, 0x80, 0x808, 0xC09C, 0x40, 0xC08, 0xC09D, 0x48, 0xC08, 0xC09E, 0x50, 0xC08, 0xC09F, 0x58, 0xC08, 0xC0A0, 0x60, 0xC08, 0xC0A1, 0x68, 0xC08, 0xD0A2, 0x1020, 0x206, 0x5, 0xD0A3, 0x1026, 0x406, 0x105, 0xD0A4, 0x102C, 0x406, 0x105, 0xD0A5, 0x1032, 0x406, 0x105, 0xD0A6, 0x1038, 0x406, 0x105, 0xD0A7, 0x103E, 0x406, 0x105, 0xD0A8, 0x1044, 0x406, 0x105, 0xD0A9, 0x104A, 0x406, 0x105, 0xD0AA, 0x1050, 0x406, 0x105, 0xD0AB, 0x1056, 0x606, 0x205, 0xD0AC, 0x105C, 0x406, 0x105, 0xD0AD, 0xE000, 0x70A, 0x308, 0xD0AE, 0xF000, 0x909, 0x107, 0xD0AF, 0xE010, 0xA07, 0x2, 0xD0B0, 0xF010, 0x909, 0x0, 0xD0B1, 0xE020, 0x70A, 0x300, 0xD0B2, 0xF020, 0x909, 0x701, 0xD0B3, 0xE030, 0xA07, 0x803, 0xD0B4, 0xF030, 0x909, 0x707, 0xC0B5, 0x5000, 0x707, 0xC0B6, 0x5008, 0x707, 0xC0B7, 0x2000, 0x60C, 0xC0B8, 0x3000, 0x60C, 0xC0B9, 0x10, 0x909, 0xC0BA, 0x4000, 0x808, 0xC0BB, 0x4008, 0x808, 0xC0BC, 0x4010, 0x808, 0xC0BD, 0x4018, 0x808, 0xC0BE, 0x6000, 0x2C1D, 0xC0BF, 0x6020, 0x1C0F, 0xC0C0, 0x6030, 0x210F, 0xC0C1, 0x6000, 0x2C1D, 0xC0C2, 0x6020, 0x1C0F, 0xC0C3, 0x6030, 0x210F, 0xC0C4, 0x6000, 0x2C1D, 0xC0C5, 0x6020, 0x1C0F, 0xC0C6, 0x6030, 0x210F, 0xC0C7, 0x9000, 0x1610, 0xC0C8, 0x9010, 0x1610, 0xC0C9, 0x9020, 0x1610, 0xC0CA, 0x9030, 0x1610, 0xC0CB, 0x2050, 0x1010, 0xC0CC, 0x3050, 0x1010, 0xC0CD, 0x4050, 0x1010, 0xC0CE, 0x2068, 0xB0D, 0xC0CF, 0x3068, 0xB0D, 0xC0D0, 0x1070, 0x708, 0xC0D1, 0x1078, 0x708, 0xC0D2, 0x8068, 0x90C, 0xC0D3, 0x8078, 0x90C, 0xC0D4, 0x8088, 0x90C, 0xC0D5, 0x8098, 0x90C, 0xC0D6, 0x8068, 0x90C, 0xC0D7, 0x9067, 0xD0C, 0xC0D8, 0xA067, 0x80C, 0xC0D9, 0xB067, 0xB0C, 0xC0DA, 0xC067, 0x90C, 0xC0DB, 0xD067, 0xD0C, 0xC0DC, 0xE067, 0xD0C, 0xC0DD, 0xF067, 0x90C, 0x10DE, 0x100, 0x67, 0x70C, 0x10DF, 0x110, 0x67, 0xD0C, 0x7000, 16, 6577, 0xC0E0, 0x0, 0x805A, 0xC0E1, 0x5A, 0x847D, 0xC0E2, 0xB000, 0x82C8, 0xFFFF, 0xFFFF };
int16_t jumpHeaderTeam1UpFrames[12] = { -5, 303, -5, 311, -5, 319, -5, 311, -5, 303, 227, -101 };
int16_t jumpHeaderHitTeam1DownFrames[12] = { -5, 304, -5, 312, -5, 320, -5, 312, -5, 304, 230, -101 };
int16_t jumpHeaderHitTeam1RightFrames[12] = { -5, 305, -5, 313, -5, 321, -5, 313, -5, 305, 233, -101 };
int16_t jumpHeaderHitTeam1LeftFrames[12] = { -5, 306, -5, 314, -5, 322, -5, 314, -5, 306, 236, -101 };
int16_t jumpHeaderHitTeam1UpRightFrames[12] = { -5, 310, -5, 318, -5, 326, -5, 318, -5, 310, 248, -101 };
int16_t jumpHeaderHitTeam1UpLeftFrames[12] = { -5, 309, -5, 317, -5, 325, -5, 317, -5, 309, 245, -101 };
int16_t jumpHeaderHitTeam1DownRightFrames[12] = { -5, 308, -5, 316, -5, 324, -5, 316, -5, 308, 242, -101 };
int16_t jumpHeaderHitTeam1DownLeftFrames[12] = { -5, 307, -5, 315, -5, 323, -5, 315, -5, 307, 239, -101 };
int16_t jumpHeaderHitTeam2UpFrames[12] = { -5, 606, -5, 614, -5, 622, -5, 614, -5, 606, 530, -101 };
int16_t jumpHeaderHitTeam2DownFrames[12] = { -5, 607, -5, 615, -5, 623, -5, 615, -5, 607, 533, -101 };
int16_t jumpHeaderHitTeam2RightFrames[12] = { -5, 608, -5, 616, -5, 624, -5, 616, -5, 608, 536, -101 };
int16_t jumpHeaderHitTeam2LeftFrames[12] = { -5, 609, -5, 617, -5, 625, -5, 617, -5, 609, 539, -101 };
int16_t jumpHeaderHitTeam2UpRightFrames[12] = { -5, 613, -5, 621, -5, 629, -5, 621, -5, 613, 551, -101 };
int16_t jumpHeaderHitTeam2UpLeftFrames[12] = { -5, 612, -5, 620, -5, 628, -5, 620, -5, 612, 548, -101 };
int16_t jumpHeaderHitTeam2DownRightFrames[12] = { -5, 611, -5, 619, -5, 627, -5, 619, -5, 611, 545, -101 };
int16_t jumpHeaderHitTeam2DownLeftFrames[12] = { -5, 610, -5, 618, -5, 626, -5, 618, -5, 610, 542, -101 };
int16_t jumpHeaderAttemptTeam1UpFrames[8] = { -5, 303, -5, 311, -10, 319, 289, -101 };
int16_t jumpHeaderAttemptTeam1DownFrames[8] = { -5, 304, -5, 312, -10, 320, 290, -101 };
int16_t jumpHeaderAttemptTeam1RightFrames[8] = { -5, 305, -5, 313, -10, 321, 292, -101 };
int16_t jumpHeaderAttemptTeam1LeftFrames[8] = { -5, 306, -5, 314, -10, 322, 291, -101 };
int16_t jumpHeaderAttemptTeam1UpRightFrames[8] = { -5, 310, -5, 318, -10, 326, 296, -101 };
int16_t jumpHeaderAttemptTeam1UpLeftFrames[8] = { -5, 309, -5, 317, -10, 325, 295, -101 };
int16_t jumpHeaderAttemptTeam1DownRightFrames[8] = { -5, 308, -5, 316, -10, 324, 294, -101 };
int16_t jumpHeaderAttemptTeam1DownLeftFrames[8] = { -5, 307, -5, 315, -10, 323, 293, -101 };
int16_t jumpHeaderAttemptTeam2UpFrames[8] = { -5, 606, -5, 614, -10, 622, 592, -101 };
int16_t jumpHeaderAttemptTeam2DownFrames[8] = { -5, 607, -5, 615, -10, 623, 593, -101 };
int16_t jumpHeaderAttemptTeam2RightFrames[8] = { -5, 608, -5, 616, -10, 624, 595, -101 };
int16_t jumpHeaderAttemptTeam2LeftFrames[8] = { -5, 609, -5, 617, -10, 625, 594, -101 };
int16_t jumpHeaderAttemptTeam2UpRightFrames[8] = { -5, 613, -5, 621, -10, 629, 599, -101 };
int16_t jumpHeaderAttemptTeam2UpLeftFrames[8] = { -5, 612, -5, 620, -10, 628, 598, -101 };
int16_t jumpHeaderAttemptTeam2DownRightFrames[8] = { -5, 611, -5, 619, -10, 627, 597, -101 };
int16_t jumpHeaderAttemptTeam2DownLeftFrames[8] = { -5, 610, -5, 618, -10, 626, 596, -101 };
int16_t team1LosingReactionFrames[6] = { -2, 230, -30, 301, 302, -101 };
int16_t team2LosingReactionFrames[6] = { -2, 533, -30, 604, 605, -101 };
int16_t team1WinningReactionFrames[5] = { -20, 254, -20, 230, -999 };
int16_t team2WinningReactionFrames[5] = { -20, 557, -20, 533, -999 };
int16_t team1PlGettingYellowCardFrames[6] = { -20, 230, -65, 301, 301, -101 };
int16_t team2PlGettingYellowCardFrames[6] = { -20, 533, -65, 604, 604, -101 };
int16_t team1PlayerGettingRedCardFrames[8] = { -20, 230, -70, 301, 301, -50, 302, -101 };
int16_t team2PlayerGettingRedCardFrames[8] = { -20, 533, -70, 604, 604, -50, 605, -101 };
int16_t team1PlGetting2ndYellowCardFrames[10] = { -20, 230, -80, 301, 301, 301, -75, 302, 302, -101 };
int16_t team2PlGetting2ndYellowCardFrames[10] = { -20, 533, -80, 604, 604, 604, -75, 605, 605, -101 };
int16_t playerRunningUpTeam1[5] = { 229, 227, 228, 227, -999 };
int16_t playerRunningDownTeam1[5] = { 232, 230, 231, 230, -999 };
int16_t playerRunningRightTeam1[5] = { 235, 233, 234, 233, -999 };
int16_t playerRunningLeftTeam1[5] = { 238, 236, 237, 236, -999 };
int16_t playerRunningUpRightTeam1[5] = { 250, 249, 248, 249, -999 };
int16_t playerRunningUpLeftTeam1[5] = { 247, 246, 245, 246, -999 };
int16_t playerRunningDownRightTeam1[5] = { 244, 243, 242, 243, -999 };
int16_t playerRunningDownLeftTeam1[5] = { 241, 240, 239, 240, -999 };
int16_t team1PlayerStandingFacingUpFrames[2] = { 227, -999 };
int16_t team1PlayerStandingFacingBottomFrames[2] = { 230, -999 };
int16_t team1PlayerStandingFacingRightFrames[2] = { 233, -999 };
int16_t team1PlayerStandingFacingLeftFrames[2] = { 236, -999 };
int16_t team1PlayerStandingFacingUpRightFrames[2] = { 249, -999 };
int16_t team1PlayerStandingFacingTopLeftFrames[2] = { 246, -999 };
int16_t team1PlayerStandingFacingBottomRightFrames[2] = { 243, -999 };
int16_t team1PlayerStandingFacingBottomLeftFrames[2] = { 240, -999 };
int16_t team1TacklingUpFrames[2] = { 281, -999 };
int16_t team1TacklingDownFrames[2] = { 282, -999 };
int16_t team1TacklingRightFrames[2] = { 284, -999 };
int16_t team1TacklingLeftFrames[2] = { 283, -999 };
int16_t team1TacklingUpRightFrames[2] = { 288, -999 };
int16_t team1TacklingUpLeftFrames[2] = { 287, -999 };
int16_t team1TacklingDownRightFrames[2] = { 286, -999 };
int16_t team1TacklingDownLeftFrames[2] = { 285, -999 };
int16_t team1TackledUpFrames[2] = { 289, -999 };
int16_t team1TackledDownFrames[2] = { 290, -999 };
int16_t team1TackledRightFrames[2] = { 292, -999 };
int16_t team1TackledLeftFrames[2] = { 291, -999 };
int16_t team1TackledUpRightFrames[2] = { 296, -999 };
int16_t team1TackledUpLeftFrames[2] = { 295, -999 };
int16_t team1TackledDownRightFrames[2] = { 294, -999 };
int16_t team1TackledDownLeftFrames[2] = { 293, -999 };
int16_t staticHeaderAttemptTeam1UpFrames[9] = { -10, 303, -15, 311, -5, 303, -10, 227, -101 };
int16_t staticHeaderAttemptTeam1DownFrames[9] = { -10, 304, -15, 312, -5, 304, -10, 230, -101 };
int16_t staticHeaderAttemptTeam1RightFrames[9] = { -10, 305, -15, 313, -5, 305, -10, 233, -101 };
int16_t staticHeaderAttemptTeam1LeftFrames[9] = { -10, 306, -15, 314, -5, 306, -10, 236, -101 };
int16_t staticHeaderAttemptTeam1UpRightFrames[9] = { -10, 310, -15, 318, -5, 310, -10, 248, -101 };
int16_t staticHeaderAttemptTeam1UpLeftFrames[9] = { -10, 309, -15, 317, -5, 309, -10, 245, -101 };
int16_t staticHeaderAttemptTeam1DownRightFrames[9] = { -10, 308, -15, 316, -5, 308, -10, 242, -101 };
int16_t staticHeaderAttemptTeam1DownLeftFrames[9] = { -10, 307, -15, 315, -5, 307, -10, 239, -101 };
int16_t staticHeaderAttemptTeam2UpFrames[9] = { -10, 606, -15, 614, -5, 606, -10, 530, -101 };
int16_t staticHeaderAttemptTeam2DownFrames[9] = { -10, 607, -15, 615, -5, 607, -10, 533, -101 };
int16_t staticHeaderAttemptTeam2RightFrames[9] = { -10, 608, -15, 616, -5, 608, -10, 536, -101 };
int16_t staticHeaderAttemptTeam2LeftFrames[9] = { -10, 609, -15, 617, -5, 609, -10, 539, -101 };
int16_t staticHeaderAttemptTeam2UpRightFrames[9] = { -10, 613, -15, 621, -5, 613, -10, 551, -101 };
int16_t staticHeaderAttemptTeam2UpLeftFrames[9] = { -10, 612, -15, 620, -5, 612, -10, 548, -101 };
int16_t staticHeaderAttemptTeam2DownRightFrames[9] = { -10, 611, -15, 619, -5, 611, -10, 545, -101 };
int16_t staticHeaderAttemptTeam2DownLeftFrames[9] = { -10, 610, -15, 618, -5, 610, -10, 542, -101 };
int16_t staticHeaderAimHitTeam1UpFrames[9] = { -10, 303, -15, 319, -5, 303, -10, 227, -101 };
int16_t staticHeaderAimHitTeam1DownFrames[9] = { -10, 304, -15, 320, -5, 304, -10, 230, -101 };
int16_t staticHeaderAimHitTeam1RightFrames[9] = { -10, 305, -15, 321, -5, 305, -10, 233, -101 };
int16_t staticHeaderAimHitTeam1LeftFrames[9] = { -10, 306, -15, 322, -5, 306, -10, 236, -101 };
int16_t staticHeaderAimHitTeam1UpRightFrames[9] = { -10, 310, -15, 326, -5, 310, -10, 248, -101 };
int16_t staticHeaderAimHitTeam1UpLeftFrames[9] = { -10, 309, -15, 325, -5, 309, -10, 245, -101 };
int16_t staticHeaderAimHitTeam1DownRightFrames[9] = { -10, 308, -15, 324, -5, 308, -10, 242, -101 };
int16_t staticHeaderAimHitTeam1DownLeftFrames[9] = { -10, 307, -15, 323, -5, 307, -10, 239, -101 };
int16_t staticHeaderAimHitTeam2UpFrames[9] = { -10, 606, -15, 622, -5, 606, -10, 530, -101 };
int16_t staticHeaderAimHitTeam2DownFrames[9] = { -10, 607, -15, 623, -5, 607, -10, 533, -101 };
int16_t staticHeaderAimHitTeam2RightFrames[9] = { -10, 608, -15, 624, -5, 608, -10, 536, -101 };
int16_t staticHeaderAimHitTeam2LeftFrames[9] = { -10, 609, -15, 625, -5, 609, -10, 539, -101 };
int16_t staticHeaderAimHitTeam2UpRightFrames[9] = { -10, 613, -15, 629, -5, 613, -10, 551, -101 };
int16_t staticHeaderAimHitTeam2UpLeftFrames[9] = { -10, 612, -15, 628, -5, 612, -10, 548, -101 };
int16_t staticHeaderAimHitTeam2DownRightFrames[9] = { -10, 611, -15, 627, -5, 611, -10, 545, -101 };
int16_t staticHeaderAimHitTeam2DownLeftFrames[9] = { -10, 610, -15, 626, -5, 610, -10, 542, -101 };
int16_t aboutToThrowInTeam1UpFrames[7] = { -90, 258, -20, 257, -20, 258, -104 };
int16_t aboutToThrowInTeam1DownFrames[7] = { -90, 261, -20, 260, -20, 261, -104 };
int16_t aboutToThrowInTeam1RightFrames[7] = { -90, 264, -20, 263, -20, 264, -104 };
int16_t aboutToThrowInTeam1LeftFrames[7] = { -90, 267, -20, 266, -20, 267, -104 };
int16_t aboutToThrowInTeam1UpRightFrames[7] = { -90, 279, -20, 278, -20, 279, -104 };
int16_t aboutToThrowInTeam1UpLeftFrames[7] = { -90, 276, -20, 275, -20, 276, -104 };
int16_t aboutToThrowInTeam1DownRightFrames[7] = { -90, 273, -20, 272, -20, 273, -104 };
int16_t aboutToThrowInTeam1DownLeftFrames[7] = { -90, 270, -20, 269, -20, 270, -104 };
int16_t throwInPassTeam1UpFrames[4] = { -5, 258, 259, -101 };
int16_t throwInPassTeam1DownFrames[4] = { -5, 261, 262, -101 };
int16_t throwInPassTeam1RightFrames[4] = { -5, 264, 265, -101 };
int16_t throwInPassTeam1LeftFrames[4] = { -5, 267, 268, -101 };
int16_t throwInPassTeam1UpRightFrames[4] = { -5, 279, 280, -101 };
int16_t throwInPassTeam1UpLeftFrames[4] = { -5, 276, 277, -101 };
int16_t throwInPassTeam1DownRightFrames[4] = { -5, 273, 274, -101 };
int16_t throwInPassTeam1DownLeftFrames[4] = { -5, 270, 271, -101 };
int16_t throwInKickTeam1UpFrames[6] = { -5, 258, 257, 258, 259, -101 };
int16_t throwInKickTeam1DownFrames[6] = { -5, 261, 260, 261, 262, -101 };
int16_t throwInKickTeam1RightFrames[6] = { -5, 264, 263, 264, 265, -101 };
int16_t throwInKickTeam1LeftFrames[6] = { -5, 267, 266, 267, 268, -101 };
int16_t throwInKickTeam1UpRightFrames[6] = { -5, 279, 278, 279, 280, -101 };
int16_t throwInKickTeam1UpLeftFrames[6] = { -5, 276, 275, 276, 277, -101 };
int16_t throwInKickTeam1DownRightFrames[6] = { -5, 273, 272, 273, 274, -101 };
int16_t throwInKickTeam1DownLeftFrames[6] = { -5, 270, 269, 270, 271, -101 };
int16_t team1InjuredPlayerTopRightTable[5] = { 297, -20, 298, -20, -999 };
int16_t team1InjuredPlayerTopLeftTable[5] = { 299, -20, 300, -20, -999 };
int16_t playerRunningUpTeam2[5] = { 532, 530, 531, 530, -999 };
int16_t playerRunningDownTeam2[5] = { 535, 533, 534, 533, -999 };
int16_t playerRunningRightTeam2[5] = { 538, 536, 537, 536, -999 };
int16_t playerRunningLeftTeam2[5] = { 541, 539, 540, 539, -999 };
int16_t playerRunningUpRightTeam2[5] = { 553, 551, 552, 551, -999 };
int16_t playerRunningUpLeftTeam2[5] = { 550, 548, 549, 548, -999 };
int16_t playerRunningDownRightTeam2[5] = { 547, 545, 546, 545, -999 };
int16_t playerRunningDownLeftTeam2[5] = { 544, 542, 543, 542, -999 };
int16_t team2PlayerStandingFacingUpFrames[2] = { 530, -999 };
int16_t team2PlayerStandingFacingDownFrames[2] = { 533, -999 };
int16_t team2PlayerStandingFacingRightFrames[2] = { 536, -999 };
int16_t team2PlayerStandingFacingLeftFrames[2] = { 539, -999 };
int16_t team2PlayerStandingFacingUpRightFrames[2] = { 552, -999 };
int16_t team2PlayerStandingFacingUpLeftFrames[2] = { 549, -999 };
int16_t team2PlayerStandingFacingDownRightFrames[2] = { 546, -999 };
int16_t team2PlayerStandingFacingDownLeftFrames[2] = { 543, -999 };
int16_t team2TacklingUpFrames[2] = { 584, -999 };
int16_t team2TacklingDownFrames[2] = { 585, -999 };
int16_t team2TacklingRightFrames[2] = { 587, -999 };
int16_t team2TacklingLeftFrames[2] = { 586, -999 };
int16_t team2TacklingUpRightFrames[2] = { 591, -999 };
int16_t team2TacklingUpLeftFrames[2] = { 590, -999 };
int16_t team2TacklingDownRightFrames[2] = { 589, -999 };
int16_t team2TacklingDownLeftFrames[2] = { 588, -999 };
int16_t team2TackledUpFrames[2] = { 592, -999 };
int16_t team2TackledDownFrames[2] = { 593, -999 };
int16_t team2TackledRightFrames[2] = { 595, -999 };
int16_t team2TackledLeftFrames[2] = { 594, -999 };
int16_t team2TackledUpRightFrames[2] = { 599, -999 };
int16_t team2TackledUpLeftFrames[2] = { 598, -999 };
int16_t team2TackledDownRightFrames[2] = { 597, -999 };
// Also contains 8 embedded team1 standing-recovery sequences after first -999
int16_t team2TackledDownLeftFrames[26] = { 596, -999, -50, 303, -999, -50, 304, -999, -50, 305, -999, -50, 306, -999, -50, 310, -999, -50, 309, -999, -50, 308, -999, -50, 307, -999 };
int16_t aboutToThrowInTeam2UpFrames[7] = { -90, 561, -20, 560, -20, 561, -104 };
int16_t aboutToThrowInTeam2DownFrames[7] = { -90, 564, -20, 563, -20, 564, -104 };
int16_t aboutToThrowInTeam2RightFrames[7] = { -90, 567, -20, 566, -20, 567, -104 };
int16_t aboutToThrowInTeam2LeftFrames[7] = { -90, 570, -20, 569, -20, 570, -104 };
int16_t aboutToThrowInTeam2UpRightFrames[7] = { -90, 582, -20, 581, -20, 582, -104 };
int16_t aboutToThrowInTeam2UpLeftFrames[7] = { -90, 579, -20, 578, -20, 579, -104 };
int16_t aboutToThrowInTeam2DownRightFrames[7] = { -90, 576, -20, 575, -20, 576, -104 };
int16_t aboutToThrowInTeam2DownLeftFrames[7] = { -90, 573, -20, 572, -20, 573, -104 };
int16_t throwInPassTeam2UpFrames[4] = { -5, 561, 562, -101 };
int16_t throwInPassTeam2DownFrames[4] = { -5, 564, 565, -101 };
int16_t throwInPassTeam2RightFrames[4] = { -5, 567, 568, -101 };
int16_t throwInPassTeam2LeftFrames[4] = { -5, 570, 571, -101 };
int16_t throwInPassTeam2UpRightFrames[4] = { -5, 582, 583, -101 };
int16_t throwInPassTeam2UpLeftFrames[4] = { -5, 579, 580, -101 };
int16_t throwInPassTeam2DownRightFrames[4] = { -5, 576, 577, -101 };
int16_t throwInPassTeam2DownLeftFrames[4] = { -5, 573, 574, -101 };
int16_t throwInKickTeam2UpFrames[6] = { -5, 561, 560, 561, 562, -101 };
int16_t throwInKickTeam2DownFrames[6] = { -5, 564, 563, 564, 565, -101 };
int16_t throwInKickTeam2RightFrames[6] = { -5, 567, 566, 567, 568, -101 };
int16_t throwInKickTeam2LeftFrames[6] = { -5, 570, 569, 570, 571, -101 };
int16_t throwInKickTeam2UpRightFrames[6] = { -5, 582, 581, 582, 583, -101 };
int16_t throwInKickTeam2UpLeftFrames[6] = { -5, 579, 578, 579, 580, -101 };
int16_t throwInKickTeam2DownRightFrames[6] = { -5, 576, 575, 576, 577, -101 };
int16_t throwInKickTeam2DownLeftFrames[6] = { -5, 573, 572, 573, 574, -101 };
int16_t team2InjuredPlayerTopRightTable[5] = { 600, -20, 601, -20, -999 };
int16_t team2InjuredPlayerTopLeftTable[5] = { 602, -20, 603, -20, -999 };
int16_t goalkeeperRunningUpTeam1[5] = { 835, 833, 834, 833, -999 };
int16_t goalkeeperRunningDownTeam1[5] = { 838, 836, 837, 836, -999 };
int16_t goalkeeperRunningRightTeam1[5] = { 841, 839, 840, 839, -999 };
int16_t goalkeeperRunningLeftTeam1[5] = { 844, 842, 843, 842, -999 };
int16_t goalkeeperRunningUpRightTeam1[5] = { 856, 855, 854, 855, -999 };
int16_t goalkeeperRunningUpLeftTeam1[5] = { 853, 852, 851, 852, -999 };
int16_t goalkeeperRunningDownRightTeam1[5] = { 850, 849, 848, 849, -999 };
int16_t goalkeeperRunningDownLeftTeam1[5] = { 847, 846, 845, 846, -999 };
int16_t goalie1StandingFacingUpFrames[2] = { 833, -999 };
int16_t goalie1StandingFacingDownFrames[2] = { 836, -999 };
int16_t goalie1StandingFacingRightFrames[2] = { 839, -999 };
int16_t goalie1StandingFacingLeftFrames[2] = { 842, -999 };
int16_t goalie1StandingFacingUpRightFrames[2] = { 855, -999 };
int16_t goalie1StandingFacingUpLeftFrames[2] = { 852, -999 };
int16_t goalie1StandingFacingDownRightFrames[2] = { 849, -999 };
int16_t goalie1StandingFacingDownLeftFrames[2] = { 846, -999 };
int16_t goalie1CatchBallFacingUpFrames[10] = { -5, 885, 886, 887, -3, 886, -2, 885, 833, -101 };
int16_t goalie1CatchBallFacingDownFrames[10] = { -5, 888, 889, 890, -3, 889, -2, 888, 836, -101 };
int16_t goalie1GoalKickRightFrames[13] = { -2, 857, -2, 861, -2, 862, 862, -2, 862, -62, 862, 833, -101 };
int16_t goalie1GoalKickLeftFrames[13] = { -2, 869, -2, 865, -2, 864, 864, -2, 864, -62, 864, 833, -101 };
int16_t goalie1HighDiveHoldRightFrames[13] = { -2, 871, -2, 875, -2, 876, 876, -2, 876, -62, 876, 836, -101 };
int16_t goalie1HighDiveHoldLeftFrames[13] = { -2, 883, -2, 879, -2, 878, 878, -2, 878, -62, 878, 836, -101 };
int16_t goalie1LowDiveRightFaceUpFrames[13] = { -5, 857, -5, 861, -5, 862, 862, -2, 862, -50, 862, 833, -101 };
int16_t goalie1LowDiveLeftFaceUpFrames[13] = { -5, 869, -5, 865, -5, 864, 864, -2, 864, -50, 864, 833, -101 };
int16_t goalie1LowDiveRightFaceDownFrames[13] = { -5, 871, -5, 875, -5, 876, 876, -2, 876, -50, 876, 836, -101 };
int16_t goalie1LowDiveLeftFaceDownFrames[13] = { -5, 883, -5, 879, -5, 878, 878, -2, 878, -50, 878, 836, -101 };
int16_t goalie1HighDiveReachRightFaceUpFrames[13] = { -5, 857, -7, 858, -3, 859, 860, -2, 861, -50, 862, 833, -101 };
int16_t goalie1HighDiveReachLeftFaceUpFrames[13] = { -5, 869, -7, 868, -3, 867, 866, -2, 865, -50, 864, 833, -101 };
int16_t goalie1HighDiveReachRightFaceDownFrames[13] = { -5, 871, -7, 872, -3, 873, 874, -2, 875, -50, 876, 836, -101 };
int16_t goalie1HighDiveReachLeftFaceDownFrames[13] = { -5, 883, -7, 882, -3, 881, 880, -2, 879, -50, 878, 836, -101 };
int16_t goalie1DiveLandFacingUpFrames[6] = { -4, 886, -2, 885, 833, -101 };
int16_t goalie1DiveLandFacingDownFrames[6] = { -4, 889, -2, 888, 836, -101 };
int16_t goalie1DeflectBallFacingUpFrames[6] = { -4, 886, -2, 885, 833, -101 };
int16_t goalie1DeflectBallFacingDownFrames[6] = { -8, 889, -4, 888, 836, -101 };
int16_t goalkeeperRunningUpTeam2[5] = { 951, 949, 950, 949, -999 };
int16_t goalkeeperRunningDownTeam2[5] = { 954, 952, 953, 952, -999 };
int16_t goalkeeperRunningRightTeam2[5] = { 957, 955, 956, 955, -999 };
int16_t goalkeeperRunningLeftTeam2[5] = { 960, 958, 959, 958, -999 };
int16_t goalkeeperRunningUpRightTeam2[5] = { 972, 971, 970, 971, -999 };
int16_t goalkeeperRunningUpLeftTeam2[5] = { 969, 968, 967, 968, -999 };
int16_t goalkeeperRunningDownRightTeam2[5] = { 966, 965, 964, 965, -999 };
int16_t goalkeeperRunningDownLeftTeam2[5] = { 963, 962, 961, 962, -999 };
int16_t goalie2StandingFacingUpFrames[2] = { 949, -999 };
int16_t goalie2StandingFacingDownFrames[2] = { 952, -999 };
int16_t goalie2StandingFacingRightFrames[2] = { 955, -999 };
int16_t goalie2StandingFacingLeftFrames[2] = { 958, -999 };
int16_t goalie2StandingFacingUpRightFrames[2] = { 971, -999 };
int16_t goalie2StandingFacingUpLeftFrames[2] = { 968, -999 };
int16_t goalie2StandingFacingDownRightFrames[2] = { 965, -999 };
int16_t goalie2StandingFacingDownLeftFrames[2] = { 962, -999 };
int16_t goalie2CatchBallFacingUpFrames[10] = { -5, 1001, 1002, 1003, -3, 1002, -2, 1001, 949, -101 };
int16_t goalie2CatchBallFacingDownFrames[10] = { -5, 1004, 1005, 1006, -3, 1005, -2, 1004, 952, -101 };
int16_t goalie2GoalKickRightFrames[13] = { -2, 973, -2, 977, -2, 978, 978, -2, 978, -62, 978, 949, -101 };
int16_t goalie2GoalKickLeftFrames[13] = { -2, 985, -2, 981, -2, 980, 980, -2, 980, -62, 980, 949, -101 };
int16_t goalie2HighDiveHoldRightFrames[13] = { -2, 987, -2, 991, -2, 992, 992, -2, 992, -62, 992, 952, -101 };
int16_t goalie2HighDiveHoldLeftFrames[13] = { -2, 999, -2, 995, -2, 994, 994, -2, 994, -62, 994, 952, -101 };
int16_t goalie2LowDiveRightFaceUpFrames[13] = { -5, 973, -5, 977, -5, 978, 978, -2, 978, -50, 978, 949, -101 };
int16_t goalie2LowDiveLeftFaceUpFrames[13] = { -5, 985, -5, 981, -5, 980, 980, -2, 980, -50, 980, 949, -101 };
int16_t goalie2LowDiveRightFaceDownFrames[13] = { -5, 987, -5, 991, -5, 992, 992, -2, 992, -50, 992, 952, -101 };
int16_t goalie2LowDiveLeftFaceDownFrames[13] = { -5, 999, -5, 995, -5, 994, 994, -2, 994, -50, 994, 952, -101 };
int16_t goalie2HighDiveReachRightFaceUpFrames[13] = { -5, 973, -7, 974, -3, 975, 976, -2, 977, -50, 978, 949, -101 };
int16_t goalie2HighDiveReachLeftFaceUpFrames[13] = { -5, 985, -7, 984, -3, 983, 982, -2, 981, -50, 980, 949, -101 };
int16_t goalie2HighDiveReachRightFaceDownFrames[13] = { -5, 987, -7, 988, -3, 989, 990, -2, 991, -50, 992, 952, -101 };
int16_t goalie2HighDiveReachLeftFaceDownFrames[13] = { -5, 999, -7, 998, -3, 997, 996, -2, 995, -50, 994, 952, -101 };
int16_t goalie2DiveLandFacingUpFrames[6] = { -4, 1002, -2, 1001, 949, -101 };
int16_t goalie2DiveLandFacingDownFrames[6] = { -4, 1005, -2, 1004, 952, -101 };
int16_t goalie2DeflectBallFacingUpFrames[6] = { -4, 1002, -2, 1001, 949, -101 };
int16_t goalie2DeflectBallFacingDownFrames[6] = { -4, 1005, -2, 1004, 952, -101 };
int16_t refComingUpFrames[5] = { 1161, 1159, 1160, 1159, -999 };
int16_t refComingDownFrames[5] = { 1164, 1162, 1163, 1162, -999 };
int16_t refStandingFacingUpFrames[2] = { 1159, -999 };
int16_t refStandingFacingDownFrames[2] = { 1162, -999 };
int16_t refStandingFacingSideFrames[2] = { 1165, -999 };
int16_t refYellowCardFrames[25] = { -10, 1165, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -20, 1165, -80, 1166, -50, 1165, -101 };
int16_t refRedCardFrames[25] = { -10, 1165, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -20, 1165, -80, 1167, -50, 1165, -101 };
int16_t refSecondYellowFrames[29] = { -10, 1165, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -12, 1168, -12, 1169, -20, 1165, -80, 1166, -20, 1165, -80, 1167, -50, 1165, -101 };
AnimTable staticHeaderAttemptAnimTable = { 5, { staticHeaderAttemptTeam1UpFrames, staticHeaderAttemptTeam1UpRightFrames, staticHeaderAttemptTeam1RightFrames, staticHeaderAttemptTeam1DownRightFrames, staticHeaderAttemptTeam1DownFrames, staticHeaderAttemptTeam1DownLeftFrames, staticHeaderAttemptTeam1LeftFrames, staticHeaderAttemptTeam1UpLeftFrames, staticHeaderAttemptTeam2UpFrames, staticHeaderAttemptTeam2UpRightFrames, staticHeaderAttemptTeam2RightFrames, staticHeaderAttemptTeam2DownRightFrames, staticHeaderAttemptTeam2DownFrames, staticHeaderAttemptTeam2DownLeftFrames, staticHeaderAttemptTeam2LeftFrames, staticHeaderAttemptTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable staticHeaderAimAnimTable = { 5, { staticHeaderAimHitTeam1UpFrames, staticHeaderAimHitTeam1UpRightFrames, staticHeaderAimHitTeam1RightFrames, staticHeaderAimHitTeam1DownRightFrames, staticHeaderAimHitTeam1DownFrames, staticHeaderAimHitTeam1DownLeftFrames, staticHeaderAimHitTeam1LeftFrames, staticHeaderAimHitTeam1UpLeftFrames, staticHeaderAimHitTeam2UpFrames, staticHeaderAimHitTeam2UpRightFrames, staticHeaderAimHitTeam2RightFrames, staticHeaderAimHitTeam2DownRightFrames, staticHeaderAimHitTeam2DownFrames, staticHeaderAimHitTeam2DownLeftFrames, staticHeaderAimHitTeam2LeftFrames, staticHeaderAimHitTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable staticHeaderHitAnimTable = { 5, { staticHeaderAimHitTeam1UpFrames, staticHeaderAimHitTeam1UpRightFrames, staticHeaderAimHitTeam1RightFrames, staticHeaderAimHitTeam1DownRightFrames, staticHeaderAimHitTeam1DownFrames, staticHeaderAimHitTeam1DownLeftFrames, staticHeaderAimHitTeam1LeftFrames, staticHeaderAimHitTeam1UpLeftFrames, staticHeaderAimHitTeam2UpFrames, staticHeaderAimHitTeam2UpRightFrames, staticHeaderAimHitTeam2RightFrames, staticHeaderAimHitTeam2DownRightFrames, staticHeaderAimHitTeam2DownFrames, staticHeaderAimHitTeam2DownLeftFrames, staticHeaderAimHitTeam2LeftFrames, staticHeaderAimHitTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable jumpHeaderAttemptAnimTable = { 5, { jumpHeaderAttemptTeam1UpFrames, jumpHeaderAttemptTeam1UpRightFrames, jumpHeaderAttemptTeam1RightFrames, jumpHeaderAttemptTeam1DownRightFrames, jumpHeaderAttemptTeam1DownFrames, jumpHeaderAttemptTeam1DownLeftFrames, jumpHeaderAttemptTeam1LeftFrames, jumpHeaderAttemptTeam1UpLeftFrames, jumpHeaderAttemptTeam2UpFrames, jumpHeaderAttemptTeam2UpRightFrames, jumpHeaderAttemptTeam2RightFrames, jumpHeaderAttemptTeam2DownRightFrames, jumpHeaderAttemptTeam2DownFrames, jumpHeaderAttemptTeam2DownLeftFrames, jumpHeaderAttemptTeam2LeftFrames, jumpHeaderAttemptTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// Player hitting flying or lob headers (on ball contact)
AnimTable jumpHeaderHitAnimTable = { 5, { jumpHeaderTeam1UpFrames, jumpHeaderHitTeam1UpRightFrames, jumpHeaderHitTeam1RightFrames, jumpHeaderHitTeam1DownRightFrames, jumpHeaderHitTeam1DownFrames, jumpHeaderHitTeam1DownLeftFrames, jumpHeaderHitTeam1LeftFrames, jumpHeaderHitTeam1UpLeftFrames, jumpHeaderHitTeam2UpFrames, jumpHeaderHitTeam2UpRightFrames, jumpHeaderHitTeam2RightFrames, jumpHeaderHitTeam2DownRightFrames, jumpHeaderHitTeam2DownFrames, jumpHeaderHitTeam2DownLeftFrames, jumpHeaderHitTeam2LeftFrames, jumpHeaderHitTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable playerRunningAnimTable = { 5, { playerRunningUpTeam1, playerRunningUpRightTeam1, playerRunningRightTeam1, playerRunningDownRightTeam1, playerRunningDownTeam1, playerRunningDownLeftTeam1, playerRunningLeftTeam1, playerRunningUpLeftTeam1, playerRunningUpTeam2, playerRunningUpRightTeam2, playerRunningRightTeam2, playerRunningDownRightTeam2, playerRunningDownTeam2, playerRunningDownLeftTeam2, playerRunningLeftTeam2, playerRunningUpLeftTeam2, goalkeeperRunningUpTeam1, goalkeeperRunningUpRightTeam1, goalkeeperRunningRightTeam1, goalkeeperRunningDownRightTeam1, goalkeeperRunningDownTeam1, goalkeeperRunningDownLeftTeam1, goalkeeperRunningLeftTeam1, goalkeeperRunningUpLeftTeam1, goalkeeperRunningUpTeam2, goalkeeperRunningUpRightTeam2, goalkeeperRunningRightTeam2, goalkeeperRunningDownRightTeam2, goalkeeperRunningDownTeam2, goalkeeperRunningDownLeftTeam2, goalkeeperRunningLeftTeam2, goalkeeperRunningUpLeftTeam2 } };
AnimTable playerNormalStandingAnimTable = { 5, { team1PlayerStandingFacingUpFrames, team1PlayerStandingFacingUpRightFrames, team1PlayerStandingFacingRightFrames, team1PlayerStandingFacingBottomRightFrames, team1PlayerStandingFacingBottomFrames, team1PlayerStandingFacingBottomLeftFrames, team1PlayerStandingFacingLeftFrames, team1PlayerStandingFacingTopLeftFrames, team2PlayerStandingFacingUpFrames, team2PlayerStandingFacingUpRightFrames, team2PlayerStandingFacingRightFrames, team2PlayerStandingFacingDownRightFrames, team2PlayerStandingFacingDownFrames, team2PlayerStandingFacingDownLeftFrames, team2PlayerStandingFacingLeftFrames, team2PlayerStandingFacingUpLeftFrames, goalie1StandingFacingUpFrames, goalie1StandingFacingUpRightFrames, goalie1StandingFacingRightFrames, goalie1StandingFacingDownRightFrames, goalie1StandingFacingDownFrames, goalie1StandingFacingDownLeftFrames, goalie1StandingFacingLeftFrames, goalie1StandingFacingUpLeftFrames, goalie2StandingFacingUpFrames, goalie2StandingFacingUpRightFrames, goalie2StandingFacingRightFrames, goalie2StandingFacingDownRightFrames, goalie2StandingFacingDownFrames, goalie2StandingFacingDownLeftFrames, goalie2StandingFacingLeftFrames, goalie2StandingFacingUpLeftFrames } };
AnimTable plTacklingAnimTable = { 5, { team1TacklingUpFrames, team1TacklingUpRightFrames, team1TacklingRightFrames, team1TacklingDownRightFrames, team1TacklingDownFrames, team1TacklingDownLeftFrames, team1TacklingLeftFrames, team1TacklingUpLeftFrames, team2TacklingUpFrames, team2TacklingUpRightFrames, team2TacklingRightFrames, team2TacklingDownRightFrames, team2TacklingDownFrames, team2TacklingDownLeftFrames, team2TacklingLeftFrames, team2TacklingUpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable_20 plTacklingAnimTable_2 = { 5, { team1TacklingUpFrames, team1TacklingUpRightFrames, team1TacklingRightFrames, team1TacklingDownRightFrames, team1TacklingDownFrames, team1TacklingDownLeftFrames, team1TacklingLeftFrames, team1TacklingUpLeftFrames, team2TacklingUpFrames, team2TacklingUpRightFrames, team2TacklingRightFrames, team2TacklingDownRightFrames, team2TacklingDownFrames, team2TacklingDownLeftFrames, team2TacklingLeftFrames, team2TacklingUpLeftFrames, 0, 0, 0, 0 } };
AnimTable_20 playerTackledAnimTable = { 5, { team1TackledUpFrames, team1TackledUpRightFrames, team1TackledRightFrames, team1TackledDownRightFrames, team1TackledDownFrames, team1TackledDownLeftFrames, team1TackledLeftFrames, team1TackledUpLeftFrames, team2TackledUpFrames, team2TackledUpRightFrames, team2TackledRightFrames, team2TackledDownRightFrames, team2TackledDownFrames, team2TackledDownLeftFrames, team2TackledLeftFrames, team2TackledUpLeftFrames, 0, 0, 0, 0 } };
AnimTable goalieCatchingBallAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1CatchBallFacingUpFrames, goalie1CatchBallFacingUpFrames, goalie1CatchBallFacingUpFrames, goalie1CatchBallFacingDownFrames, goalie1CatchBallFacingDownFrames, goalie1CatchBallFacingDownFrames, goalie1CatchBallFacingDownFrames, goalie1CatchBallFacingUpFrames, goalie2CatchBallFacingUpFrames, goalie2CatchBallFacingUpFrames, goalie2CatchBallFacingUpFrames, goalie2CatchBallFacingDownFrames, goalie2CatchBallFacingDownFrames, goalie2CatchBallFacingDownFrames, goalie2CatchBallFacingDownFrames, goalie2CatchBallFacingUpFrames } };
AnimTable aboutToThrowInAnimTable = { 5, { aboutToThrowInTeam1UpFrames, aboutToThrowInTeam1UpRightFrames, aboutToThrowInTeam1RightFrames, aboutToThrowInTeam1DownRightFrames, aboutToThrowInTeam1DownFrames, aboutToThrowInTeam1DownLeftFrames, aboutToThrowInTeam1LeftFrames, aboutToThrowInTeam1UpLeftFrames, aboutToThrowInTeam2UpFrames, aboutToThrowInTeam2UpRightFrames, aboutToThrowInTeam2RightFrames, aboutToThrowInTeam2DownRightFrames, aboutToThrowInTeam2DownFrames, aboutToThrowInTeam2DownLeftFrames, aboutToThrowInTeam2LeftFrames, aboutToThrowInTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable throwInPassAnimTable = { 5, { throwInPassTeam1UpFrames, throwInPassTeam1UpRightFrames, throwInPassTeam1RightFrames, throwInPassTeam1DownRightFrames, throwInPassTeam1DownFrames, throwInPassTeam1DownLeftFrames, throwInPassTeam1LeftFrames, throwInPassTeam1UpLeftFrames, throwInPassTeam2UpFrames, throwInPassTeam2UpRightFrames, throwInPassTeam2RightFrames, throwInPassTeam2DownRightFrames, throwInPassTeam2DownFrames, throwInPassTeam2DownLeftFrames, throwInPassTeam2LeftFrames, throwInPassTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable throwInKickAnimTable = { 5, { throwInKickTeam1UpFrames, throwInKickTeam1UpRightFrames, throwInKickTeam1RightFrames, throwInKickTeam1DownRightFrames, throwInKickTeam1DownFrames, throwInKickTeam1DownLeftFrames, throwInKickTeam1LeftFrames, throwInKickTeam1UpLeftFrames, throwInKickTeam2UpFrames, throwInKickTeam2UpRightFrames, throwInKickTeam2RightFrames, throwInKickTeam2DownRightFrames, throwInKickTeam2DownFrames, throwInKickTeam2DownLeftFrames, throwInKickTeam2LeftFrames, throwInKickTeam2UpLeftFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable goalieGoalKickAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1GoalKickRightFrames, 0, 0, 0, goalie1GoalKickLeftFrames, 0, 0, 0, goalie2GoalKickRightFrames, 0, 0, 0, goalie2GoalKickLeftFrames, 0 } };
AnimTable leftGoalieJumpingHighAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1HighDiveReachRightFaceUpFrames, 0, 0, 0, goalie1HighDiveReachLeftFaceUpFrames, 0, 0, 0, goalie2HighDiveReachRightFaceUpFrames, 0, 0, 0, goalie2HighDiveReachLeftFaceUpFrames, 0 } };
AnimTable goalieDiveHighHoldAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1HighDiveHoldRightFrames, 0, 0, 0, goalie1HighDiveHoldLeftFrames, 0, 0, 0, goalie2HighDiveHoldRightFrames, 0, 0, 0, goalie2HighDiveHoldLeftFrames, 0 } };
AnimTable rightGoalieJumpingHighAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1HighDiveReachRightFaceDownFrames, 0, 0, 0, goalie1HighDiveReachLeftFaceDownFrames, 0, 0, 0, goalie2HighDiveReachRightFaceDownFrames, 0, 0, 0, goalie2HighDiveReachLeftFaceDownFrames, 0 } };
AnimTable leftGoalieJumpingLowAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1LowDiveRightFaceUpFrames, 0, 0, 0, goalie1LowDiveLeftFaceUpFrames, 0, 0, 0, goalie2LowDiveRightFaceUpFrames, 0, 0, 0, goalie2LowDiveLeftFaceUpFrames, 0 } };
AnimTable rightGoalieJumpingLowAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1LowDiveRightFaceDownFrames, 0, 0, 0, goalie1LowDiveLeftFaceDownFrames, 0, 0, 0, goalie2LowDiveRightFaceDownFrames, 0, 0, 0, goalie2LowDiveLeftFaceDownFrames, 0 } };
AnimTable goalieDiveLandAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1DiveLandFacingUpFrames, goalie1DiveLandFacingUpFrames, goalie1DiveLandFacingUpFrames, goalie1DiveLandFacingDownFrames, goalie1DiveLandFacingDownFrames, goalie1DiveLandFacingDownFrames, goalie1DiveLandFacingDownFrames, goalie1DiveLandFacingUpFrames, goalie2DiveLandFacingUpFrames, goalie2DiveLandFacingUpFrames, goalie2DiveLandFacingUpFrames, goalie2DiveLandFacingDownFrames, goalie2DiveLandFacingDownFrames, goalie2DiveLandFacingDownFrames, goalie2DiveLandFacingDownFrames, goalie2DiveLandFacingUpFrames } };
AnimTable goalieDeflectBallAnimTable = { 5, { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, goalie1DeflectBallFacingUpFrames, goalie1DeflectBallFacingUpFrames, goalie1DeflectBallFacingUpFrames, goalie1DeflectBallFacingDownFrames, goalie1DeflectBallFacingDownFrames, goalie1DeflectBallFacingDownFrames, goalie1DeflectBallFacingDownFrames, goalie1DeflectBallFacingUpFrames, goalie2DeflectBallFacingUpFrames, goalie2DeflectBallFacingUpFrames, goalie2DeflectBallFacingUpFrames, goalie2DeflectBallFacingDownFrames, goalie2DeflectBallFacingDownFrames, goalie2DeflectBallFacingDownFrames, goalie2DeflectBallFacingDownFrames, goalie2DeflectBallFacingUpFrames } };
AnimTable plGettingYellowCardAnimTable = { 5, { team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team1PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, team2PlGettingYellowCardFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable plGettingRedCardAnimTable = { 5, { team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team1PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, team2PlayerGettingRedCardFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable plGetting2ndYellowCardAnimTable = { 5, { team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team1PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, team2PlGetting2ndYellowCardFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable plInjuredAnimTable = { 5, { team1InjuredPlayerTopLeftTable, team1InjuredPlayerTopLeftTable, team1InjuredPlayerTopLeftTable, team1InjuredPlayerTopLeftTable, team1InjuredPlayerTopRightTable, team1InjuredPlayerTopRightTable, team1InjuredPlayerTopRightTable, team1InjuredPlayerTopRightTable, team2InjuredPlayerTopLeftTable, team2InjuredPlayerTopLeftTable, team2InjuredPlayerTopLeftTable, team2InjuredPlayerTopLeftTable, team2InjuredPlayerTopRightTable, team2InjuredPlayerTopRightTable, team2InjuredPlayerTopRightTable, team2InjuredPlayerTopRightTable, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable playerLosingReactionAnimTable = { 5, { team1LosingReactionFrames, team1LosingReactionFrames, team1LosingReactionFrames, team1LosingReactionFrames, team1LosingReactionFrames, team1LosingReactionFrames, team1LosingReactionFrames, team1LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, team2LosingReactionFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable playerWinningReactionAnimTable = { 5, { team1WinningReactionFrames, team1WinningReactionFrames, team1WinningReactionFrames, team1WinningReactionFrames, team1WinningReactionFrames, team1WinningReactionFrames, team1WinningReactionFrames, team1WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, team2WinningReactionFrames, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
AnimTable_8 refComingAnimTable = { 5, { refComingUpFrames, refComingUpFrames, refComingUpFrames, refComingDownFrames, refComingDownFrames, refComingDownFrames, refComingDownFrames, refComingUpFrames } };
AnimTable_12 refWaitingAnimTable = { 5, { refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingSideFrames, refStandingFacingDownFrames, refStandingFacingDownFrames, refStandingFacingSideFrames, refStandingFacingUpFrames } };
AnimTable_8 refYellowCardAnimTable = { 5, { refYellowCardFrames, refYellowCardFrames, refYellowCardFrames, refYellowCardFrames, refYellowCardFrames, refYellowCardFrames, refYellowCardFrames, refYellowCardFrames } };
AnimTable_8 refRedCardAnimTable = { 5, { refRedCardFrames, refRedCardFrames, refRedCardFrames, refRedCardFrames, refRedCardFrames, refRedCardFrames, refRedCardFrames, refRedCardFrames } };
AnimTable_8 refSecondYellowAnimTable = { 5, { refSecondYellowFrames, refSecondYellowFrames, refSecondYellowFrames, refSecondYellowFrames, refSecondYellowFrames, refSecondYellowFrames, refSecondYellowFrames, refSecondYellowFrames } };
CharTable smallCharsTable = { 6, 6, 327685, 0, 3, 0, { 0, 0, 0, 0, 0, 51, 0, 1, 2, 3, 45, 50, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 49, 52, 0, 0, 0, 48, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 54, 0, 46, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44 } };
CharTable bigCharsTable = { 8, 8, 458759, 0, 4, 57, { 0, 0, 0, 0, 0, 51, 0, 1, 2, 3, 45, 50, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 49, 52, 0, 0, 0, 48, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 54, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44 } };
int16_t ballMovingFrameIndices[5] = { 1068, 1067, 1066, 1065, -1 };
int16_t ballStaticFrameIndices[3] = { 1068, 1068, -1 };
uint16_t pad_11D00A[24] = { 0xE3, 0xE4, 0xE5, 0xE6, 0xE7, 0xE8, 0xE9, 0xEA, 0xEB, 0xEC, 0xED, 0xEE, 0x212, 0x213, 0x214, 0x215, 0x216, 0x217, 0x218, 0x219, 0x21A, 0x21B, 0x21C, 0x21D };
Sprite big_S_Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite cornerFlagSprite = { 3, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite advertInGameSprites[8] = { { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 } };
Sprite refereeSprite = { 3, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite currentTimeSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite resultOnHalftimeSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 212, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite resultAfterTheGameSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 213, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite gridUpperRowLeftSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 138, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite gridUpperRowRightSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 138, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite gridMiddleRowLeftSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 138, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite gridMiddleRowRightSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 138, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite gridBottomRowLeftSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 138, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite gridBottomRowRightSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 138, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1NameSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2NameSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1GoalsDigit2Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1GoalsDigit1Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2GoalsDigit2Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2GoalsDigit1Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1TotalGoalsDigit2Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1TotalGoalsDigit1Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2TotalGoalsDigit2Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2TotalGoalsDigit1Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite dashSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 195, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer1Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 196, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer2Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 197, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer3Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 198, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer4Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 199, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer5Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 200, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer6Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 201, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer7Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 202, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Scorer8Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 203, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer1Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 204, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer2Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 205, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer3Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 206, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer4Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 207, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer5Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 208, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer6Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 209, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer7Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 210, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Scorer8Sprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, 211, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite goal1TopSprite = { 3, 0, 0, (AnimTable*)-1, -1, 0xFF, 0, 0, 0, 0, -1, 5, 1, 0, { 19660800 }, { 8454144 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 300, 129, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x1 }, 1, 1091, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite goal2BottomSprite = { 3, 0, 0, (AnimTable*)-1, -1, 0xFF, 0, 0, 0, 0, -1, 5, 1, 0, { 19660800 }, { 50987008 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 300, 778, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x1 }, 1, 1092, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite ballSprite = { 3, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite ballShadowSprite = { 3, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite playerMarkSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite currentPlayerNameSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1CurPlayerNumSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2CurPlayerNumSprite = { 0, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite bookedPlayerCardOrNumberSprite = { 3, 0, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite goalie1Sprite = { 1, 1, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player2Sprite = { 1, 2, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player3Sprite = { 1, 3, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player4Sprite = { 1, 4, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player5Sprite = { 1, 5, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player6Sprite = { 1, 6, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player7Sprite = { 1, 7, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player8Sprite = { 1, 8, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player9Sprite = { 1, 9, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player10Sprite = { 1, 10, 0, (AnimTable*)-1, -1, 0xFF, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team1Player11Sprite = { 1, 11, 0, (AnimTable*)-1, -1, 0xFF, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite goalie2Sprite = { 2, 1, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player2Sprite = { 2, 2, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player3Sprite = { 2, 3, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player4Sprite = { 2, 4, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player5Sprite = { 2, 5, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player6Sprite = { 2, 6, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player7Sprite = { 2, 7, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player8Sprite = { 2, 8, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player9Sprite = { 2, 9, 0, (AnimTable*)-1, -1, 255, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0, 0, 0, 0, 0, 1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player10Sprite = { 2, 10, 0, (AnimTable*)-1, -1, 0xFF, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Sprite team2Player11Sprite = { 2, 11, 0, (AnimTable*)-1, -1, 0xFF, 0, 0, 0, 0, -1, 5, 1, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0 }, { 0 }, { 0 }, 0, 0, { 0x0, 0x0, 0x0, 0x0, 0x0, 0x1 }, 1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0 };
Position bottomCornerLeftPositions[11] = { { 250, 5 }, { 100, 600 }, { 200, 277 }, { 300, 277 }, { 490, 600 }, { 150, 500 }, { 250, 600 }, { 350, 500 }, { 450, 555 }, { 210, 611 }, { 290, 611 } };
Position topCornerLeftPositions[11] = { { 250, 2 }, { 175, 38 }, { 225, 22 }, { 275, 22 }, { 325, 38 }, { 150, 111 }, { 200, 55 }, { 300, 83 }, { 400, 166 }, { 200, 300 }, { 300, 300 } };
Position bottomCornerRightPositions[11] = { { 250, 5 }, { 10, 600 }, { 200, 277 }, { 300, 277 }, { 400, 277 }, { 50, 555 }, { 150, 500 }, { 250, 600 }, { 350, 500 }, { 210, 611 }, { 290, 611 } };
Position topCornerRightPositions[11] = { { 250, 2 }, { 175, 38 }, { 225, 22 }, { 275, 22 }, { 325, 38 }, { 100, 166 }, { 200, 83 }, { 300, 55 }, { 350, 111 }, { 200, 300 }, { 300, 300 } };
Position bottomGoalOutLeftPositions[11] = { { 290, 10 }, { 100, 166 }, { 200, 133 }, { 300, 133 }, { 400, 166 }, { 100, 355 }, { 200, 277 }, { 300, 277 }, { 400, 355 }, { 200, 444 }, { 300, 444 } };
Position topGoalOutLeftPositions[11] = { { 250, 11 }, { 100, 144 }, { 200, 144 }, { 300, 144 }, { 400, 144 }, { 100, 244 }, { 200, 277 }, { 300, 277 }, { 400, 244 }, { 200, 444 }, { 300, 444 } };
Position bottomGoalOutRightPositions[11] = { { 210, 10 }, { 100, 166 }, { 200, 133 }, { 300, 133 }, { 400, 166 }, { 100, 355 }, { 200, 277 }, { 300, 277 }, { 400, 355 }, { 200, 444 }, { 300, 444 } };
Position topGoalOutRightPositions[11] = { { 250, 11 }, { 100, 144 }, { 200, 144 }, { 300, 144 }, { 400, 144 }, { 100, 244 }, { 200, 277 }, { 300, 277 }, { 400, 244 }, { 200, 444 }, { 300, 444 } };
Position bottomKeeperHoldsBallPositions[11] = { { 1000, 0 }, { 100, 166 }, { 200, 133 }, { 300, 133 }, { 400, 166 }, { 100, 355 }, { 200, 277 }, { 300, 277 }, { 400, 355 }, { 200, 444 }, { 300, 444 } };
Position topKeeperHoldsBallPositions[11] = { { 250, 11 }, { 100, 144 }, { 200, 144 }, { 300, 144 }, { 400, 144 }, { 100, 244 }, { 200, 277 }, { 300, 277 }, { 400, 244 }, { 200, 444 }, { 300, 444 } };
Position bottomStartingPositions[11] = { { 250, 1 }, { 100, 155 }, { 200, 133 }, { 300, 133 }, { 400, 155 }, { 60, 320 }, { 190, 244 }, { 310, 244 }, { 355, 320 }, { 220, 320 }, { 260, 316 } };
Position topStartingPositions[11] = { { 250, 11 }, { 120, 133 }, { 210, 133 }, { 290, 133 }, { 380, 133 }, { 90, 244 }, { 220, 200 }, { 280, 200 }, { 410, 244 }, { 200, 277 }, { 300, 277 } };
Position topFreeKickCenterPositions[11] = { { 250, 2 }, { -1015, -54 }, { -1005, -55 }, { 1005, -55 }, { 1015, -54 }, { -1080, 20 }, { -1050, -55 }, { 1060, -45 }, { 1070, 40 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickCenterPositions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1090, 20 }, { -1035, -35 }, { 1020, -60 }, { 1120, 30 }, { -1020, -10 }, { 1040, -15 } };
Position topFreeKickRight3Positions[11] = { { 250, 2 }, { 290, 22 }, { 220, 27 }, { -1048, -29 }, { -1043, -37 }, { 160, 88 }, { 160, 50 }, { 250, 27 }, { 310, 22 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickRight3Positions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1000, -15 }, { 1030, -25 }, { 200, 500 }, { 340, 522 }, { 220, 605 }, { 260, 611 } };
Position topFreeKickLeft1Positions[11] = { { 250, 2 }, { 1043, -37 }, { 1048, -29 }, { 280, 27 }, { 210, 22 }, { 190, 22 }, { 250, 27 }, { 340, 50 }, { 340, 88 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickLeft1Positions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 160, 522 }, { 300, 500 }, { -1030, -25 }, { 1000, -15 }, { 240, 611 }, { 280, 605 } };
Position topFreeKickRight2Positions[11] = { { 250, 2 }, { -1048, -26 }, { -1043, -31 }, { -1037, -36 }, { -1030, -41 }, { 190, 11 }, { 220, 38 }, { 250, 33 }, { 300, 22 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickRight2Positions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1000, -15 }, { 1030, -25 }, { 250, 411 }, { 340, 522 }, { 220, 611 }, { 260, 611 } };
Position topFreeKickLeft2Positions[11] = { { 250, 2 }, { 1030, -41 }, { 1037, -36 }, { 1043, -31 }, { 1048, -26 }, { 200, 22 }, { 250, 33 }, { 280, 38 }, { 310, 11 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickLeft2Positions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 160, 522 }, { 250, 411 }, { -1030, -25 }, { 1000, -15 }, { 240, 611 }, { 280, 611 } };
Position topFreeKickRight1Positions[11] = { { 250, 2 }, { -1038, -44 }, { -1031, -47 }, { -1023, -50 }, { -1014, -53 }, { 190, 11 }, { 220, 38 }, { 250, 33 }, { 300, 22 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickRight1Positions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1000, -15 }, { 1030, -25 }, { 250, 411 }, { 340, 522 }, { 220, 611 }, { 260, 611 } };
Position topFreeKickLeft3Positions[11] = { { 250, 2 }, { 1014, -53 }, { 1023, -50 }, { 1031, -47 }, { 1038, -44 }, { 200, 22 }, { 250, 33 }, { 280, 38 }, { 310, 11 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomFreeKickLeft3Positions[11] = { { 250, 5 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 160, 522 }, { 250, 411 }, { -1030, -25 }, { 1000, -15 }, { 240, 611 }, { 280, 611 } };
Position bottomPenaltyPositions[11] = { { 250, 5 }, { 100, 277 }, { 200, 277 }, { 300, 277 }, { 400, 277 }, { 100, 500 }, { 200, 500 }, { 300, 500 }, { 400, 500 }, { 220, 555 }, { 250, 522 } };
Position topPenaltyPositions[11] = { { 250, 2 }, { 175, 88 }, { 225, 122 }, { 275, 122 }, { 325, 88 }, { 70, 155 }, { 200, 166 }, { 300, 166 }, { 430, 155 }, { 150, 300 }, { 300, 300 } };
Position bottomThrowInForwardRightPositions[11] = { { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1075, 0 }, { -1025, 0 }, { 22222, 22222 }, { 22222, 22222 }, { -1075, 50 }, { -1050, 75 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomThrowInCenterRightPositions[11] = { { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1100, 25 }, { -1075, -20 }, { -1025, -25 }, { 22222, 22222 }, { -1075, 75 } };
Position bottomThrowInBackRightPositions[11] = { { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { -1075, -50 }, { -1075, 0 }, { -1025, 0 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomThrowInForwardLeftPositions[11] = { { 22222, 22222 }, { 1025, 0 }, { 1075, 0 }, { 22222, 22222 }, { 22222, 22222 }, { 1075, 50 }, { 1050, 75 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomThrowInCenterLeftPositions[12] = { { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 1025, -25 }, { 1075, -20 }, { 1100, 25 }, { 22222, 22222 }, { 22222, 22222 }, { 1075, 75 }, { 22222, 22222 } };
Position bottomThrowInBackLeftPositions[11] = { { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 }, { 1025, 0 }, { 1075, 0 }, { 1075, -50 }, { 22222, 22222 }, { 22222, 22222 }, { 22222, 22222 } };
Position bottomStartingGamePositions[11] = { { 380, 255 }, { 365, 261 }, { 350, 266 }, { 335, 272 }, { 320, 277 }, { 305, 283 }, { 290, 288 }, { 275, 294 }, { 260, 300 }, { 245, 305 }, { 230, 311 } };
Position topStartingGamePositions[11] = { { 120, 255 }, { 135, 261 }, { 150, 266 }, { 165, 272 }, { 180, 277 }, { 195, 283 }, { 210, 288 }, { 225, 294 }, { 240, 300 }, { 255, 305 }, { 270, 311 } };
Position bottomLeavingPitchPositions[11] = { { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 }, { 550, 277 } };
Position topLeavingPitchPositions[11] = { { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 }, { -50, 377 } };
Position bottomFirstExtraStartingPositions[11] = { { 250, 1 }, { 100, 155 }, { 200, 133 }, { 300, 133 }, { 400, 155 }, { 60, 320 }, { 190, 244 }, { 310, 244 }, { 355, 320 }, { 220, 320 }, { 260, 316 } };
Position topFirstExtraStartingPositions[11] = { { 250, 11 }, { 120, 133 }, { 210, 133 }, { 290, 133 }, { 380, 133 }, { 90, 244 }, { 220, 200 }, { 280, 200 }, { 410, 244 }, { 200, 277 }, { 300, 277 } };
Position bottomPenaltiesPositions[11] = { { 200, 522 }, { 260, 344 }, { 280, 333 }, { 300, 333 }, { 320, 344 }, { 260, 366 }, { 280, 355 }, { 300, 355 }, { 320, 366 }, { 280, 377 }, { 300, 377 } };
Position topPenaltiesPositions[11] = { { 250, 2 }, { 260, 277 }, { 280, 266 }, { 300, 266 }, { 320, 277 }, { 260, 300 }, { 280, 288 }, { 300, 288 }, { 320, 300 }, { 280, 311 }, { 300, 311 } };
// Indexed by gameState, states < 32
// each pointer points to table of 22 elements, x & y position,
// player ordinal * 2 is index
Position * bottomBallOutOfPlayPositions[32] = { bottomStartingPositions, bottomGoalOutLeftPositions, bottomGoalOutRightPositions, bottomKeeperHoldsBallPositions, bottomCornerLeftPositions, bottomCornerRightPositions, bottomFreeKickLeft1Positions, bottomFreeKickLeft2Positions, bottomFreeKickLeft3Positions, bottomFreeKickCenterPositions, bottomFreeKickRight1Positions, bottomFreeKickRight2Positions, bottomFreeKickRight3Positions, 0, bottomPenaltyPositions, bottomThrowInForwardRightPositions, bottomThrowInCenterRightPositions, bottomThrowInBackRightPositions, bottomThrowInForwardLeftPositions, bottomThrowInCenterLeftPositions, bottomThrowInBackLeftPositions, bottomStartingGamePositions, bottomStartingGamePositions, bottomLeavingPitchPositions, bottomLeavingPitchPositions, bottomLeavingPitchPositions, bottomLeavingPitchPositions, bottomFirstExtraStartingPositions, bottomFirstExtraStartingPositions, 0, 0, bottomPenaltiesPositions };
// Indexed by game state
Position * topBallOutOfPlayPositions[32] = { topStartingPositions, topGoalOutLeftPositions, topGoalOutRightPositions, topKeeperHoldsBallPositions, topCornerLeftPositions, topCornerRightPositions, topFreeKickLeft1Positions, topFreeKickLeft2Positions, topFreeKickLeft3Positions, topFreeKickCenterPositions, topFreeKickRight1Positions, topFreeKickRight2Positions, topFreeKickRight3Positions, 0, topPenaltyPositions, 0, 0, 0, 0, 0, 0, topStartingGamePositions, topStartingGamePositions, topLeavingPitchPositions, topLeavingPitchPositions, topLeavingPitchPositions, topLeavingPitchPositions, topFirstExtraStartingPositions, topFirstExtraStartingPositions, 0, 0, topPenaltiesPositions };
Sprite * team1SpritesTable[11] = { &goalie1Sprite, &team1Player2Sprite, &team1Player3Sprite, &team1Player4Sprite, &team1Player5Sprite, &team1Player6Sprite, &team1Player7Sprite, &team1Player8Sprite, &team1Player9Sprite, &team1Player10Sprite, &team1Player11Sprite };
Sprite * team2SpritesTable[11] = { &goalie2Sprite, &team2Player2Sprite, &team2Player3Sprite, &team2Player4Sprite, &team2Player5Sprite, &team2Player6Sprite, &team2Player7Sprite, &team2Player8Sprite, &team2Player9Sprite, &team2Player10Sprite, &team2Player11Sprite };
Sprite * allSpritesArray[79] = { &ballShadowSprite, &ballSprite, &goal1TopSprite, &goal2BottomSprite, &goalie1Sprite, &team1Player2Sprite, &team1Player3Sprite, &team1Player4Sprite, &team1Player5Sprite, &team1Player6Sprite, &team1Player7Sprite, &team1Player8Sprite, &team1Player9Sprite, &team1Player10Sprite, &team1Player11Sprite, &goalie2Sprite, &team2Player2Sprite, &team2Player3Sprite, &team2Player4Sprite, &team2Player5Sprite, &team2Player6Sprite, &team2Player7Sprite, &team2Player8Sprite, &team2Player9Sprite, &team2Player10Sprite, &team2Player11Sprite, &team1CurPlayerNumSprite, &team2CurPlayerNumSprite, &playerMarkSprite, &bookedPlayerCardOrNumberSprite, &currentTimeSprite, &resultOnHalftimeSprite, &resultAfterTheGameSprite, &gridUpperRowLeftSprite, &gridUpperRowRightSprite, &gridMiddleRowLeftSprite, &gridMiddleRowRightSprite, &gridBottomRowLeftSprite, &gridBottomRowRightSprite, &team1NameSprite, &team2NameSprite, &dashSprite, &team1GoalsDigit1Sprite, &team2GoalsDigit1Sprite, &team1GoalsDigit2Sprite, &team2GoalsDigit2Sprite, &team1TotalGoalsDigit1Sprite, &team2TotalGoalsDigit1Sprite, &team1TotalGoalsDigit2Sprite, &team2TotalGoalsDigit2Sprite, &team1Scorer1Sprite, &team2Scorer1Sprite, &team1Scorer2Sprite, &team2Scorer2Sprite, &team1Scorer3Sprite, &team2Scorer3Sprite, &team1Scorer4Sprite, &team2Scorer4Sprite, &team1Scorer5Sprite, &team2Scorer5Sprite, &team1Scorer6Sprite, &team2Scorer6Sprite, &team1Scorer7Sprite, &team2Scorer7Sprite, &team1Scorer8Sprite, &team2Scorer8Sprite, &refereeSprite, &cornerFlagSprite, &big_S_Sprite, &currentPlayerNameSprite, advertInGameSprites, &advertInGameSprites[0x1], &advertInGameSprites[0x2], &advertInGameSprites[0x3], &advertInGameSprites[0x4], &advertInGameSprites[0x5], &advertInGameSprites[0x6], &advertInGameSprites[0x7], (Sprite*)-1 };
uint16_t debugMode = 0;
uint16_t useAltBaseFlag = 0;
uint16_t usePlaneOffsetFlag[8] = { 0x0, 0x178, 0x1AD, 0x9B, 0x172, 0x18, 0x0, 0x1 };
// For any player input
uint16_t fireCounter = 0;
// These are perhaps the same flags as menuControlsDirection,
// but there is no blocking on key repeats
uint16_t menuControlsDirection2 = 0;
// 0 - Up
//  1 - up right
//  2 - right
//  3 - down right
//  4 - down
//  5 - down left
//  6 - left
//  7 - up left
// -1 - nothing
uint16_t menuControlsDirection = 0;
// CheckControls local controls in previous cycle
uint16_t lastControls = 0;
// CheckControls local
// times how long controls are held
uint16_t controlsHeldTimer = 0;
// -1 - Pressed
//  0 - not pressed
// these are combined input variables for the menus
uint16_t fire = 0;
uint16_t shortFire = 0;
uint16_t longFireTime = 0;
uint16_t longFireFlag = 0;
uint8_t up  = 0;
uint8_t down  = 0;
uint8_t left  = 0;
uint8_t right  = 0;
uint16_t fireResetFlag = 0;
// Current menu, in packed form
Menu * currentMenuPtr = 0;
// 0 = Entering menu
// 1 = exiting
uint16_t menuStatus = 0;
// Fade screen?
// 0 - no, 1 - yes (does it only
// once, when first showing the menu)
uint16_t menuFade = 0;
// Set by MenuProc:
// bit  9  8  7  6  5  4  3  2  1  0
//      |  |  |  |  |  |  |  |  |  +-- fire
//      |  |  |  |  |  |  |  |  +----- left
//      |  |  |  |  |  |  |  +-------- right
//      |  |  |  |  |  |  +----------- up
//      |  |  |  |  |  +-------------- down
//      |  |  |  |  +----------------- short fire
//      |  |  |  +-------------------- up left
//      |  |  +----------------------- down right
//      |  +-------------------------- up right
//      +----------------------------- down left
// It's been AND-ed by entries control mask.
uint16_t controlMask = 0;
// When text is blinking (not frame)
uint16_t menuTextBlinkCounter = 0;
uint16_t deadInputTextVar = 0;
uint16_t deadVar03 = 0;
uint32_t charTables = 1166878;
uint8_t numbersBuffer[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t shirtColorTable[10] = { 1, 2, 3, 6, 10, 11, 12, 13, 14, 15 };
// Buffer for converting a 32-bit value to an 8-digit hex ASCII string with null terminator.
uint8_t hexLongStringBuffer[10] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
// Buffer for converting a 16-bit panic code to a 4-digit hex ASCII string.
uint8_t hexWordStringBuffer[6] = { 0, 0, 0, 0, 0, 0 };
uint8_t * menuTypesJumpTable[23] = { _11FEA0_next_entry, invisible_item, set_positions, func1, entry_frame, sprite1, invalid_type, func2, string_entry, sprite2, string_table, multiLine_text, number, on_select_fire_only, on_select, before_draw_func, after_draw_func, left_skip, right_skip, up_skip, down_skip, sprite_copy, string_entry2 };
uint16_t nextEntryDirectionOffsets[4] = { 2, 1, 3, 0 };
char * defaultNamesTable[6] = { aChris, aJon, aGraeme, aMark, aDavid, aDavid_0 };
char * defaultSurnamesTable[6] = { aChapman, aHare, aBoxall, aDearsley, aWilkin, aNottingham };
const char aChris[] = "CHRIS";
const char aChapman[] = "CHAPMAN";
const char aJon[] = "JON";
const char aHare[] = "HARE";
const char aGraeme[] = "GRAEME";
const char aBoxall[] = "BOXALL";
const char aMark[] = "MARK";
const char aDearsley[] = "DEARSLEY";
const char aDavid[] = "DAVID";
const char aWilkin[] = "WILKIN";
const char aDavid_0[] = "DAVID";
const char aNottingham[] = "NOTTINGHAM";
// If this is true then menu items on the right side of the screen (x >= 160) will have outer
// frames even if their height is a bit shorter (>6 px), otherwise all items must have height
// at least 9 pixels in order to have their frame drawn
// it's used to give tactics entries a frame in play match menu (it gets set to 1 in
// PlayMatchMenuInit() and reset in ExitPlayMatch())
uint32_t allowShorterMenuItemsWithFrames = 0;
// Never written (the only write depends on top variable being true)
uint16_t pl1SkipFireCounter = 0;
// Never written
uint16_t pl2SkipFireCounter = 0;
uint8_t outerFrameColorsTable[32] = { 1, 9, 1, 9, 1, 9, 1, 9, 5, 9, 6, 4, 2, 4, 1, 9, 1, 9, 1, 3, 6, 9, 13, 8, 10, 8, 1, 9, 1, 9, 1, 9 };
// Enter, left shift, right shift, escape,
// backspace, 'special'(?), space, '-', '/', '.', terminator
uint8_t inputAllowedControlKeys[12] = { 0xD, 0x12, 0x13, 0x1B, 0x7F, 0x7E, 0x20, 0x2D, 0x2F, 0x2E, 0xFF, 0x0 };
// If true, allows '.' when typing in... at least in theory
uint16_t allowExtraCharsFlag = 0;
uint8_t pad_120F68[2] = { 0x53, 0x40 };
const char aSwosDate0[] = "SWOS DATE: %0";
uint8_t pad_121558[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// If this is true menu entries with background color 0 (transparent) will be
// rendered with background color 15 (yellow)
// it never seems to be set anywhere, it's most likely debug-only variable
uint16_t forceDrawTransparentMenuItems = 0;
uint16_t menuX = 0;
uint16_t menuY = 0;
uint8_t kTeamColorsTable[20] = { 0, 1, 0, 2, 0, 3, 0, 6, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15 };
int8_t kAbortLossScorerWeightTable[12] = { 35, 25, 20, 15, 11, 7, 5, 4, 3, 2, 124, 4 };
const char kUserTeamOffsetBiasLUT[] = "\375";
const char kMenuIrqCookieFailTrap[] = "\377";
uint8_t kTeamViewOffsetBaseLUT[256] = { 0, 0, 1, 2, 1, 1, 3, 1, 0, 1, 5, 3, 1, 2, 4, 0, 255, 250, 254, 0, 1, 6, 2, 5, 255, 253, 255, 2, 4, 1, 0, 0, 3, 5, 252, 0, 1, 253, 4, 6, 3, 255, 0, 253, 2, 0, 3, 252, 2, 3, 0, 254, 254, 255, 254, 254, 0, 1, 1, 0, 253, 4, 254, 0, 255, 251, 253, 254, 252, 255, 0, 255, 2, 3, 0, 0, 255, 254, 255, 0, 2, 4, 1, 0, 254, 252, 255, 251, 253, 251, 4, 255, 254, 252, 1, 2, 1, 0, 255, 255, 0, 3, 254, 0, 255, 3, 252, 250, 253, 1, 0, 1, 254, 253, 255, 254, 255, 253, 0, 0, 0, 2, 1, 2, 2, 2, 0, 0, 0, 0, 1, 2, 1, 0, 1, 1, 0, 253, 4, 254, 1, 2, 4, 253, 251, 4, 255, 254, 254, 254, 252, 255, 0, 255, 251, 253, 255, 254, 252, 0, 255, 2, 3, 0, 2, 1, 2, 1, 1, 2, 2, 0, 1, 254, 253, 0, 1, 6, 2, 3, 5, 252, 0, 253, 2, 0, 3, 252, 2, 5, 0, 0, 0, 255, 250, 254, 255, 253, 255, 2, 4, 1, 0, 1, 253, 4, 6, 3, 255, 3, 0, 254, 0, 1, 5, 3, 254, 0, 1, 3, 1, 0, 255, 254, 255, 0, 2, 4, 1, 0, 254, 252, 255, 251, 255, 254, 255, 0, 255, 3, 252, 250, 253, 1, 0, 255, 255, 253, 0, 3, 254, 0, 0, 2, 0, 0 };
// Lookup table indexed by team strength difference, with 4 random outcomes per level, for simulated goal count.
uint8_t simGoalsByStrengthDiffTable[128] = { 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 2, 0, 1, 1, 2, 0, 1, 2, 2, 0, 1, 2, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 1, 2, 3, 1, 2, 2, 3, 2, 2, 2, 3, 2, 2, 2, 4, 2, 2, 3, 3, 2, 2, 3, 4, 2, 3, 3, 3, 2, 3, 3, 4, 3, 3, 3, 4, 3, 3, 3, 5, 3, 3, 4, 5, 3, 4, 4, 5, 4, 4, 4, 5, 4, 4, 5, 5, 4, 5, 5, 6, 5, 5, 6, 7, 5, 6, 6, 7, 6, 6, 7, 8, 7, 8, 9, 255 };
// Fallback high goal count values used when the strength difference table returns the sentinel.
uint8_t simHighGoalFallbackValues[6] = { 0xA, 0xB, 0xC, 0xD, 0xE, 0xF };
// Array of 18 pointers to cumulative probability threshold arrays, indexed by tactic for simulated goals.
char * simGoalProbByTacticPtrs[18] = { simGoalProbThreshA, simGoalProbThreshA, simGoalProbThreshB, simGoalProbThreshB, simGoalProbThreshC, simGoalProbThreshC, simGoalProbThreshC, simGoalProbThreshD, simGoalProbThreshD, simGoalProbThreshD, simGoalProbThreshE, simGoalProbThreshE, simGoalProbThreshE, simGoalProbThreshE, simGoalProbThreshE, simGoalProbThreshE, simGoalProbThreshE, simGoalProbThreshE };
// Array of 16 pointers to cumulative probability threshold arrays for secondary goal increment.
char * simExtraGoalProbByTacticPtrs[16] = { simExtraGoalProbThreshA, simExtraGoalProbThreshA, simExtraGoalProbThreshB, simExtraGoalProbThreshB, simExtraGoalProbThreshC, simExtraGoalProbThreshC, simExtraGoalProbThreshC, simExtraGoalProbThreshD, simExtraGoalProbThreshD, simExtraGoalProbThreshD, simExtraGoalProbThreshE, simExtraGoalProbThreshE, simExtraGoalProbThreshE, simExtraGoalProbThreshE, simExtraGoalProbThreshE, simExtraGoalProbThreshE };
// Cumulative probability thresholds for goal scoring, referenced by tactic indices 0-1.
uint8_t simGoalProbThreshA[5] = { 118, 100, 30, 7, 1 };
// Cumulative probability thresholds for extra goal scoring, tactic indices 0-1.
uint8_t simExtraGoalProbThreshA[3] = { 160, 64, 32 };
// Cumulative probability thresholds for goal scoring, tactic indices 2-3.
uint8_t simGoalProbThreshB[5] = { 118, 100, 30, 7, 1 };
// Cumulative probability thresholds for extra goal scoring, tactic indices 2-3.
uint8_t simExtraGoalProbThreshB[3] = { 160, 96, 0 };
// Cumulative probability thresholds for goal scoring, tactic indices 4-6.
uint8_t simGoalProbThreshC[5] = { 120, 101, 31, 4, 0 };
// Cumulative probability thresholds for extra goals, tactic indices 4-6. All zero
uint8_t simExtraGoalProbThreshC[3] = { 0 };
// Cumulative probability thresholds for goal scoring, tactic indices 7-9.
uint8_t simGoalProbThreshD[5] = { 137, 109, 10, 0, 0 };
// Cumulative probability thresholds for extra goals, tactic indices 7-9. All zero.
uint8_t simExtraGoalProbThreshD[3] = { 0 };
// Cumulative probability thresholds for goal scoring, tactic indices 10-17.
uint8_t simGoalProbThreshE[5] = { 156, 100, 0, 0, 0 };
// Cumulative probability thresholds for extra goals, tactic indices 10-15. All zero.
uint8_t simExtraGoalProbThreshE[3] = { 0 };
// Lookup table indexed by team view-index difference for second scoring phase of match simulation.
uint8_t simGoalsByIndexDiffTable[128] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 1, 1, 2, 2, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3, 2, 2, 2, 3, 2, 2, 3, 3, 2, 2, 3, 3, 2, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3 };
// Cumulative probability thresholds for extra goals in the second scoring phase.
uint8_t simExtraGoalThresholdsA[3] = { 192, 48, 16 };
uint8_t simExtraGoalThresholdsB[3] = { 192, 64, 0 };
// Table of packed nibble pairs for randomly selecting two position indices for goal assignment.
uint8_t simGoalScorerPairTable[64] = { 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x54, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x43, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x42, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x41, 0x41, 0x41, 0x41, 0x31, 0x31, 0x31, 0x31, 0x21, 0x21, 0x30, 0x30, 0x20, 0x10, 0x65, 0x65, 0x65, 0x65, 0x76, 0x76, 0x76, 0x87, 0x87, 0x98, 0xA9, 0xBA };
uint8_t * goalScorerDistributionByBallOutTactic[18] = { goalScorerDist442, goalScorerDist541, goalScorerDist451, goalScorerDist532, goalScorerDist352, goalScorerDist433, goalScorerDist424, goalScorerDist343, goalScorerDistSweep, goalScorerDist523, goalScorerDistAttack, goalScorerDistDefend, goalScorerDist442, goalScorerDist442, goalScorerDist442, goalScorerDist442, goalScorerDist442, goalScorerDist442 };
// Goal scorer probability distribution for 4-4-2 tactic.
uint8_t goalScorerDist442[12] = { 45, 40, 8, 15, 5, 8, 2, 1, 1, 2, 124, 4 };
// Goal scorer probability distribution for 5-4-1 tactic.
uint8_t goalScorerDist541[12] = { 54, 12, 30, 12, 12, 2, 1, 1, 1, 2, 124, 4 };
// Goal scorer probability distribution for 4-5-1 tactic.
uint8_t goalScorerDist451[12] = { 54, 10, 22, 22, 10, 3, 2, 1, 1, 2, 124, 4 };
// Goal scorer probability distribution for 5-3-2 tactic.
uint8_t goalScorerDist532[12] = { 45, 40, 9, 17, 9, 1, 2, 2, 1, 1, 124, 4 };
// Goal scorer probability distribution for 3-5-2 tactic.
uint8_t goalScorerDist352[12] = { 47, 42, 7, 15, 3, 3, 7, 1, 1, 1, 124, 4 };
// Goal scorer probability distribution for 4-3-3 tactic.
uint8_t goalScorerDist433[12] = { 45, 29, 29, 5, 8, 5, 2, 1, 1, 2, 124, 4 };
// Goal scorer probability distribution for 4-2-4 tactic.
uint8_t goalScorerDist424[12] = { 11, 50, 41, 11, 5, 5, 1, 1, 1, 1, 124, 4 };
// Goal scorer probability distribution for 3-4-3 tactic.
uint8_t goalScorerDist343[12] = { 44, 28, 28, 6, 10, 2, 6, 1, 1, 1, 124, 4 };
// Goal scorer probability distribution for sweep tactic.
uint8_t goalScorerDistSweep[12] = { 45, 40, 8, 15, 5, 8, 2, 1, 1, 2, 124, 4 };
// Goal scorer probability distribution for 5-2-3 tactic.
uint8_t goalScorerDist523[12] = { 20, 50, 20, 15, 15, 2, 1, 1, 1, 2, 124, 4 };
// Goal scorer probability distribution for attack tactic.
uint8_t goalScorerDistAttack[12] = { 8, 42, 37, 22, 8, 5, 2, 1, 1, 1, 124, 4 };
// Goal scorer probability distribution for defend tactic.
uint8_t goalScorerDistDefend[12] = { 60, 45, 8, 8, 1, 1, 1, 1, 1, 1, 124, 4 };
// Pointer to the currently active goal scorer distribution table
uint8_t * currentGoalScorerDistPtr = 0;
uint8_t playerStatusBucketThresholds[8] = { 0x20, 0x8, 0x6, 0x5, 0x4, 0x8, 0x1, 0x0 };
uint8_t availablePickCountByGoalsInTable[48] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 2, 2, 0, 0, 0, 1, 1, 1, 2, 2, 0, 0, 1, 1, 2, 2, 3, 3, 0, 1, 1, 2, 2, 3, 3, 4 };
uint8_t preferredTacticsSlotsByRole[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 4, 5, 6, 1, 1, 2, 2, 3, 4, 5, 6, 1, 1, 2, 2, 3, 4, 5, 6, 4, 5, 5, 6, 6, 7, 7, 8, 4, 5, 5, 6, 6, 7, 7, 8, 4, 5, 5, 6, 6, 7, 7, 8, 7, 8, 8, 9, 9, 10, 10, 10 };
uint8_t candidatePlayersByGoalsInTable[160] = { 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xB, 0xC, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xB, 0xC, 0xD, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC, 0xB, 0xD, 0x0, 0x0, 0x0, 0x0, 0x0, 0xD, 0xC, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0xC, 0xD, 0xB, 0x0, 0x0, 0x0, 0x0, 0x0, 0xB, 0xC, 0xD, 0x0, 0x0, 0x0, 0x0, 0x0, 0xE, 0xC, 0xB, 0xD, 0x0, 0x0, 0x0, 0x0, 0xD, 0xE, 0xC, 0xB, 0x0, 0x0, 0x0, 0x0, 0xC, 0xD, 0xB, 0xE, 0x0, 0x0, 0x0, 0x0, 0xB, 0xC, 0xD, 0xE, 0x0, 0x0, 0x0, 0x0, 0xE, 0xC, 0xF, 0xB, 0xD, 0x0, 0x0, 0x0, 0xF, 0xD, 0xE, 0xC, 0xB, 0x0, 0x0, 0x0, 0xC, 0xF, 0xD, 0xB, 0xE, 0x0, 0x0, 0x0 };
void * viewResultCtx = 0;
// Set to 1 at the very beginning of EditTactics
uint16_t inEditTactics = 0;
uint16_t viewResultModeFlag = 0;
uint16_t viewResultStatColumnIndex = 0;
uint16_t viewResultTeam1GoalsIn = 0;
uint16_t viewResultTeam2GoalsIn = 0;
TeamFile * viewResultTeam1Ptr = 0;
TeamFile * viewResultTeam2Ptr = 0;
uint16_t team1ViewBaseIndex = 0;
uint16_t team2ViewBaseIndex = 0;
uint16_t team1ViewIndex = 0;
uint16_t team2ViewIndex = 0;
uint16_t viewIndexDelta = 0;
uint16_t team1ViewOffsetX = 0;
uint16_t team2ViewOffsetX = 0;
uint16_t team1ViewOffsetY = 0;
uint16_t team2ViewOffsetY = 0;
uint16_t team1SimulatedGoalsOut = 0;
uint16_t team2SimulatedGoalsOut = 0;
uint8_t team1PlayerRemapTable[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t team2PlayerRemapTable[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint32_t team1AvailableMask = 0;
uint32_t team2AvailableMask = 0;
uint16_t team1AvailableCount = 0;
uint16_t team2AvailableCount = 0;
uint8_t team1GoalCounterByPlayer[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t team2GoalCounterByPlayer[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// X view offset for the career team during match result simulation.
uint16_t careerTeamViewOffsetX = 0;
TacticsPosition * playersPositionsByTactics[18] = { &tacticsPosition442, &tacticsPosition541, &tacticsPosition451, &tacticsPosition532, &tacticsPosition352, &tacticsPosition433, &tacticsPosition424, &tacticsPosition343, &tacticsPositionSweep, &tacticsPosition523, &tacticsPositionAttack, &tacticsPositionDefend, &tacticsPositionUSERA, &tacticsPositionUSERB, &tacticsPositionUSERC, &tacticsPositionUSERD, &tacticsPositionUSERE, &tacticsPositionUSERF };
uint16_t oldPlayerSkillDivisor = 0;
// 7 X 35
uint8_t skillsPerQuadrant[245] = { 4, 4, 4, 3, 3, 4, 4, 4, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 3, 3, 2, 2, 2, 3, 2, 1, 1, 2, 3, 1, 1, 1, 2, 3, 3, 4, 4, 4, 3, 3, 4, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 2, 2, 2, 3, 3, 2, 1, 1, 2, 3, 2, 1, 1, 1, 3, 3, 4, 4, 4, 3, 3, 4, 4, 4, 3, 2, 4, 4, 4, 2, 1, 3, 4, 3, 1, 1, 2, 3, 2, 1, 1, 1, 3, 1, 1, 1, 1, 4, 1, 1, 3, 3, 1, 2, 2, 3, 3, 2, 2, 2, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 2, 2, 1, 3, 3, 2, 2, 2, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 1, 1, 2, 1, 1, 2, 3, 4, 3, 2, 3, 4, 4, 4, 3, 3, 4, 4, 4, 3, 3, 4, 4, 4, 3, 1, 2, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 2, 3, 2, 1, 2, 3, 4, 3, 2, 3, 4, 4, 4, 3, 3, 4, 4, 4, 3, 3, 4, 4, 4, 3 };
// Array of skill adjustment delta values for quadrant-based player skill processing.
int8_t skillQuadrantAdjustDeltas[37] = { 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 0, 1, 0, -1, 68, 68 };
uint8_t quadrantDistanceFactor[1226] = { 0x20, 0x18, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x18, 0x20, 0x18, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x10, 0x18, 0x20, 0x18, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0x10, 0x18, 0x20, 0x18, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x8, 0x10, 0x18, 0x20, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x0, 0x0, 0x0, 0x0, 0x0, 0x18, 0x18, 0x10, 0x8, 0x2, 0x20, 0x18, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x18, 0x18, 0x18, 0x10, 0x8, 0x18, 0x20, 0x18, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x18, 0x20, 0x18, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x18, 0x20, 0x18, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x18, 0x20, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x10, 0x10, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x20, 0x18, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x10, 0x10, 0x10, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x18, 0x20, 0x18, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x18, 0x20, 0x18, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x18, 0x20, 0x18, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x18, 0x20, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x20, 0x18, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x18, 0x20, 0x18, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x18, 0x20, 0x18, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x18, 0x20, 0x18, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x8, 0x8, 0x8, 0x8, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x18, 0x20, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x20, 0x18, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x18, 0x20, 0x18, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x18, 0x20, 0x18, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x18, 0x20, 0x18, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x10, 0x10, 0x10, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x18, 0x20, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x10, 0x10, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x20, 0x18, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x18, 0x20, 0x18, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x18, 0x20, 0x18, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x18, 0x20, 0x18, 0x8, 0x10, 0x18, 0x18, 0x18, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x18, 0x20, 0x2, 0x8, 0x10, 0x18, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x10, 0x10, 0x10, 0x8, 0x2, 0x18, 0x18, 0x10, 0x8, 0x2, 0x20, 0x18, 0x10, 0x8, 0x2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x18, 0x18, 0x18, 0x10, 0x8, 0x18, 0x20, 0x18, 0x10, 0x8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x18, 0x18, 0x18, 0x10, 0x10, 0x18, 0x20, 0x18, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x8, 0x8, 0x10, 0x10, 0x10, 0x10, 0x8, 0x10, 0x18, 0x18, 0x18, 0x8, 0x10, 0x18, 0x20, 0x18, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x1, 0x1, 0x1, 0x1, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x8, 0x8, 0x8, 0x8, 0x2, 0x8, 0x10, 0x10, 0x10, 0x2, 0x8, 0x10, 0x18, 0x18, 0x2, 0x8, 0x10, 0x18, 0x20, 0x0 };
uint32_t priceSkillPonders[35] = { 0x5020, 0x24010, 0x34000, 0x24010, 0x5020, 0x1003030, 0x1013020, 0x24010, 0x1013020, 0x1003030, 0x2002030, 0x2013010, 0x1013000, 0x2013010, 0x2002030, 0x2010130, 0x2013000, 0x3011000, 0x2013000, 0x2010130, 0x2001230, 0x3000220, 0x4100200, 0x3000220, 0x2001230, 0x3000240, 0x2210220, 0x3230312, 0x2210220, 0x3000240, 0x3000330, 0x2200221, 0x1220124, 0x2200221, 0x3000330 };
int8_t quadrantCoordinatesToBallQuadrant[240] = { 0, 0, 0, 5, 5, 10, 10, 15, 15, 20, 20, 25, 25, 30, 30, 30, 0, 0, 0, 5, 5, 10, 10, 15, 15, 20, 20, 25, 25, 30, 30, 30, 0, 0, 0, 5, 5, 10, 10, 15, 15, 20, 20, 25, 25, 30, 30, 30, 1, 1, 1, 6, 6, 11, 11, 16, 16, 21, 21, 26, 26, 31, 31, 31, 1, 1, 1, 6, 6, 11, 11, 16, 16, 21, 21, 26, 26, 31, 31, 31, 1, 1, 1, 6, 6, 11, 11, 16, 16, 21, 21, 26, 26, 31, 31, 31, 2, 2, 2, 7, 7, 12, 12, 17, 17, 22, 22, 27, 27, 32, 32, 32, 2, 2, 2, 7, 7, 12, 12, 17, 17, 22, 22, 27, 27, 32, 32, 32, 2, 2, 2, 7, 7, 12, 12, 17, 17, 22, 22, 27, 27, 32, 32, 32, 3, 3, 3, 8, 8, 13, 13, 18, 18, 23, 23, 28, 28, 33, 33, 33, 3, 3, 3, 8, 8, 13, 13, 18, 18, 23, 23, 28, 28, 33, 33, 33, 3, 3, 3, 8, 8, 13, 13, 18, 18, 23, 23, 28, 28, 33, 33, 33, 4, 4, 4, 9, 9, 14, 14, 19, 19, 24, 24, 29, 29, 34, 34, 34, 4, 4, 4, 9, 9, 14, 14, 19, 19, 24, 24, 29, 29, 34, 34, 34, 4, 4, 4, 9, 9, 14, 14, 19, 19, 24, 24, 29, 29, 34, 34, 34 };
TeamTactics teamTactics442 = { { 52, 52, 50, 0, 0, 65, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x31 }, { 0x31 }, { 0x42 }, { 0x13 }, { 0x22 } }, { { 0x22 }, { 0x32 }, { 0x42 }, { 0x14 }, { 0x14 }, { 0x24 }, { 0x34 } }, { { 0x34 }, { 0x17 }, { 0x25 }, { 0x24 }, { 0x24 }, { 0x35 }, { 0x17 } }, { { 0x27 }, { 0x26 }, { 0x27 }, { 0x36 }, { 0x19 }, { 0x29 }, { 0x28 } }, { { 0x38 }, { 0x37 }, { 0x1A }, { 0x2A }, { 0x3A }, { 0x28 }, { 0x18 } } } }, { { { { 0x50 }, { 0x50 }, { 0x70 }, { 0x70 }, { 0x90 }, { 0x41 }, { 0x61 } }, { { 0x60 }, { 0x60 }, { 0x70 }, { 0x61 }, { 0x61 }, { 0x61 }, { 0x62 } }, { { 0x62 }, { 0x42 }, { 0x52 }, { 0x62 }, { 0x63 }, { 0x73 }, { 0x73 } }, { { 0x43 }, { 0x53 }, { 0x63 }, { 0x73 }, { 0x44 }, { 0x54 }, { 0x54 } }, { { 0x54 }, { 0x64 }, { 0x57 }, { 0x57 }, { 0x57 }, { 0x57 }, { 0x57 } } } }, { { { { 0x70 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x70 }, { 0x70 }, { 0x80 } }, { { 0x81 }, { 0x81 }, { 0xA1 }, { 0x82 }, { 0x82 }, { 0x82 }, { 0x81 } }, { { 0x81 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x92 }, { 0xA2 }, { 0x44 } }, { { 0x74 }, { 0x84 }, { 0x94 }, { 0xA4 }, { 0x85 }, { 0x95 }, { 0x95 } }, { { 0x95 }, { 0xA5 }, { 0x88 }, { 0x88 }, { 0x88 }, { 0x88 }, { 0x88 } } } }, { { { { 0xA2 }, { 0xB1 }, { 0xB1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xB2 } }, { { 0xC2 }, { 0xC2 }, { 0xD3 }, { 0xB4 }, { 0xB4 }, { 0xC4 }, { 0xD4 } }, { { 0xD4 }, { 0xB5 }, { 0xC4 }, { 0xC4 }, { 0xC5 }, { 0xD7 }, { 0xB6 } }, { { 0xC7 }, { 0xC6 }, { 0xC7 }, { 0xD7 }, { 0xB7 }, { 0xB8 }, { 0xC8 } }, { { 0xC9 }, { 0xD9 }, { 0xD8 }, { 0xC8 }, { 0xBA }, { 0xCA }, { 0xDA } } } }, { { { { 0x33 }, { 0x43 }, { 0x44 }, { 0x44 }, { 0x54 }, { 0x16 }, { 0x24 } }, { { 0x25 }, { 0x34 }, { 0x44 }, { 0x18 }, { 0x16 }, { 0x17 }, { 0x27 } }, { { 0x37 }, { 0x19 }, { 0x9 }, { 0x18 }, { 0x28 }, { 0x39 }, { 0x1A } }, { { 0x3A }, { 0x1A }, { 0x2A }, { 0x2A }, { 0x1B }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3D }, { 0x3C } } } }, { { { { 0x51 }, { 0x71 }, { 0x60 }, { 0x71 }, { 0x91 }, { 0x52 }, { 0x52 } }, { { 0x71 }, { 0x92 }, { 0x92 }, { 0x43 }, { 0x53 }, { 0x73 }, { 0x93 } }, { { 0xA3 }, { 0x45 }, { 0x55 }, { 0x75 }, { 0x95 }, { 0xA5 }, { 0x47 } }, { { 0x57 }, { 0x77 }, { 0x97 }, { 0xA7 }, { 0x49 }, { 0x69 }, { 0x79 } }, { { 0x89 }, { 0xA9 }, { 0x4A }, { 0x5B }, { 0x7B }, { 0x9B }, { 0xAA } } } }, { { { { 0x54 }, { 0x64 }, { 0x73 }, { 0x84 }, { 0x94 }, { 0x54 }, { 0x64 } }, { { 0x74 }, { 0x84 }, { 0x94 }, { 0x55 }, { 0x66 }, { 0x76 }, { 0x86 } }, { { 0x95 }, { 0x58 }, { 0x68 }, { 0x77 }, { 0x88 }, { 0x98 }, { 0x4A } }, { { 0x6A }, { 0x79 }, { 0x8A }, { 0xAA }, { 0x5B }, { 0x4B }, { 0x7B } }, { { 0xAB }, { 0x9B }, { 0x8D }, { 0x7D }, { 0x7D }, { 0x7D }, { 0x6D } } } }, { { { { 0x94 }, { 0xA4 }, { 0xA4 }, { 0xA3 }, { 0xB3 }, { 0xA4 }, { 0xB4 } }, { { 0xC5 }, { 0xC4 }, { 0xD6 }, { 0xB7 }, { 0xC7 }, { 0xD7 }, { 0xD6 } }, { { 0xD8 }, { 0xB9 }, { 0xC8 }, { 0xD8 }, { 0xE9 }, { 0xD9 }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xBA }, { 0xDA }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xDB }, { 0xBC }, { 0xBD }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x24 }, { 0x44 }, { 0x54 }, { 0x65 }, { 0x85 }, { 0x27 }, { 0x47 } }, { { 0x57 }, { 0x58 }, { 0x78 }, { 0x29 }, { 0x39 }, { 0x49 }, { 0x6A } }, { { 0x7A }, { 0x3A }, { 0x4A }, { 0x4B }, { 0x5B }, { 0x6B }, { 0x3C } }, { { 0x4C }, { 0x5D }, { 0x6D }, { 0x7D }, { 0x5E }, { 0x5E }, { 0x6E } }, { { 0x7E }, { 0x7E }, { 0x5F }, { 0x6F }, { 0x6F }, { 0x6F }, { 0x7F } } } }, { { { { 0x65 }, { 0x85 }, { 0x95 }, { 0xA4 }, { 0xC4 }, { 0x78 }, { 0x98 } }, { { 0x98 }, { 0xA7 }, { 0xC7 }, { 0x7A }, { 0x8A }, { 0xAA }, { 0xB9 } }, { { 0xC9 }, { 0x8B }, { 0x9B }, { 0xAB }, { 0xAA }, { 0xBA }, { 0x7D } }, { { 0x8D }, { 0x9D }, { 0xAC }, { 0xBC }, { 0x7E }, { 0x7E }, { 0x8E } }, { { 0x9E }, { 0x9E }, { 0x7F }, { 0x8F }, { 0x8F }, { 0x8F }, { 0x9F } } } } }, { 0x0, 0xFF, 0xFF, 0x0, 0x1, 0xFF, 0xFF, 0x1, 0xFF, 0xFF }, 0x0 };
TeamTactics teamTactics541 = { { 53, 52, 49, 0, 32, 65, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x41 }, { 0x41 }, { 0x50 }, { 0x2 }, { 0x21 } }, { { 0x31 }, { 0x41 }, { 0x42 }, { 0x14 }, { 0x13 }, { 0x13 }, { 0x33 } }, { { 0x33 }, { 0x6 }, { 0x16 }, { 0x15 }, { 0x26 }, { 0x26 }, { 0x9 } }, { { 0x18 }, { 0x17 }, { 0x28 }, { 0x48 }, { 0xB }, { 0x1A }, { 0x2A } }, { { 0x3A }, { 0x4A }, { 0xC }, { 0x1B }, { 0x2B }, { 0x3B }, { 0x4B } } } }, { { { { 0x50 }, { 0x60 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x60 }, { 0x60 } }, { { 0x70 }, { 0x80 }, { 0x80 }, { 0x51 }, { 0x61 }, { 0x71 }, { 0x81 } }, { { 0x91 }, { 0x54 }, { 0x64 }, { 0x73 }, { 0x84 }, { 0x94 }, { 0x56 } }, { { 0x66 }, { 0x76 }, { 0x86 }, { 0x96 }, { 0x58 }, { 0x68 }, { 0x78 } }, { { 0x88 }, { 0x98 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A }, { 0x9A } } } }, { { { { 0x70 }, { 0x80 }, { 0x80 }, { 0x90 }, { 0xB1 }, { 0x71 }, { 0x71 } }, { { 0x81 }, { 0xA1 }, { 0xB2 }, { 0x72 }, { 0x82 }, { 0x92 }, { 0xA2 } }, { { 0xB2 }, { 0x85 }, { 0x85 }, { 0x94 }, { 0xA3 }, { 0xB3 }, { 0x85 } }, { { 0x85 }, { 0x95 }, { 0xA5 }, { 0xB5 }, { 0x87 }, { 0x97 }, { 0xA7 } }, { { 0xB7 }, { 0xC7 }, { 0x88 }, { 0x98 }, { 0xA8 }, { 0xB8 }, { 0xC8 } } } }, { { { { 0x90 }, { 0xA1 }, { 0xA1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xA1 } }, { { 0xB1 }, { 0xC1 }, { 0xE2 }, { 0xB3 }, { 0xB3 }, { 0xD3 }, { 0xD3 } }, { { 0xD4 }, { 0xC6 }, { 0xC6 }, { 0xD5 }, { 0xD6 }, { 0xE6 }, { 0xA8 } }, { { 0xC8 }, { 0xD7 }, { 0xD8 }, { 0xE9 }, { 0xAA }, { 0xBA }, { 0xCA } }, { { 0xDA }, { 0xEB }, { 0xAB }, { 0xBB }, { 0xCB }, { 0xDB }, { 0xEC } } } }, { { { { 0x13 }, { 0x23 }, { 0x33 }, { 0x43 }, { 0x43 }, { 0x15 }, { 0x24 } }, { { 0x34 }, { 0x24 }, { 0x25 }, { 0x7 }, { 0x16 }, { 0x26 }, { 0x16 } }, { { 0x37 }, { 0x9 }, { 0x9 }, { 0x9 }, { 0x19 }, { 0x29 }, { 0x1C } }, { { 0x1C }, { 0x1B }, { 0x2A }, { 0x2A }, { 0x1E }, { 0x1D }, { 0x2D } }, { { 0x3C }, { 0x3C }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3D }, { 0x4D } } } }, { { { { 0x31 }, { 0x50 }, { 0x60 }, { 0x60 }, { 0x70 }, { 0x32 }, { 0x41 } }, { { 0x61 }, { 0x71 }, { 0x71 }, { 0x32 }, { 0x42 }, { 0x52 }, { 0x62 } }, { { 0x72 }, { 0x33 }, { 0x43 }, { 0x54 }, { 0x65 }, { 0x65 }, { 0x35 } }, { { 0x45 }, { 0x55 }, { 0x65 }, { 0x65 }, { 0x27 }, { 0x37 }, { 0x47 } }, { { 0x57 }, { 0x67 }, { 0x28 }, { 0x38 }, { 0x48 }, { 0x58 }, { 0x68 } } } }, { { { { 0x52 }, { 0x51 }, { 0x71 }, { 0x91 }, { 0x92 }, { 0x43 }, { 0x53 } }, { { 0x73 }, { 0x93 }, { 0xA3 }, { 0x35 }, { 0x55 }, { 0x75 }, { 0x95 } }, { { 0xB5 }, { 0x46 }, { 0x56 }, { 0x77 }, { 0x96 }, { 0xA6 }, { 0x38 } }, { { 0x59 }, { 0x79 }, { 0x99 }, { 0xB8 }, { 0x3A }, { 0x4A }, { 0x7B } }, { { 0xAA }, { 0xBA }, { 0x3C }, { 0x5C }, { 0x7D }, { 0x9C }, { 0xBC } } } }, { { { { 0xA3 }, { 0xA3 }, { 0xB3 }, { 0xC3 }, { 0xD3 }, { 0xC5 }, { 0xC4 } }, { { 0xB4 }, { 0xC4 }, { 0xD5 }, { 0xB7 }, { 0xD6 }, { 0xC6 }, { 0xD6 } }, { { 0xE7 }, { 0xC9 }, { 0xD9 }, { 0xE9 }, { 0xE9 }, { 0xE9 }, { 0xCA } }, { { 0xCA }, { 0xDB }, { 0xDC }, { 0xDC }, { 0xBC }, { 0xBC }, { 0xCD } }, { { 0xDD }, { 0xDE }, { 0xAD }, { 0xBD }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x32 }, { 0x52 }, { 0x72 }, { 0x92 }, { 0xB2 }, { 0x45 }, { 0x65 } }, { { 0x75 }, { 0x85 }, { 0xA5 }, { 0x58 }, { 0x67 }, { 0x77 }, { 0x87 } }, { { 0x98 }, { 0x49 }, { 0x59 }, { 0x79 }, { 0x99 }, { 0xA9 }, { 0x4B } }, { { 0x6B }, { 0x7B }, { 0x8B }, { 0xAB }, { 0x5D }, { 0x5C }, { 0x6D } }, { { 0x9C }, { 0x9D }, { 0x5E }, { 0x6E }, { 0x6F }, { 0x8E }, { 0x9E } } } }, { { { { 0x45 }, { 0x65 }, { 0x75 }, { 0x85 }, { 0xA5 }, { 0x48 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0xA8 }, { 0x4A }, { 0x5A }, { 0x7A }, { 0x9A } }, { { 0xAA }, { 0x5B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x9B }, { 0x6D } }, { { 0x7D }, { 0x7D }, { 0x7D }, { 0x8D }, { 0x7E }, { 0x6E }, { 0x8E } }, { { 0x8E }, { 0x7E }, { 0x7F }, { 0x8F }, { 0x8F }, { 0x6F }, { 0x7F } } } } }, { 0x0, 0xFF, 0x2, 0x0, 0x1, 0x2, 0xFF, 0x1, 0xFF, 0xFF }, 0x1 };
TeamTactics teamTactics451 = { { 52, 53, 49, 0, 32, 66, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x31 }, { 0x31 }, { 0x42 }, { 0x13 }, { 0x22 } }, { { 0x22 }, { 0x32 }, { 0x42 }, { 0x13 }, { 0x13 }, { 0x23 }, { 0x34 } }, { { 0x34 }, { 0x17 }, { 0x25 }, { 0x24 }, { 0x24 }, { 0x35 }, { 0x17 } }, { { 0x27 }, { 0x26 }, { 0x27 }, { 0x36 }, { 0x19 }, { 0x29 }, { 0x28 } }, { { 0x38 }, { 0x37 }, { 0x1A }, { 0x2A }, { 0x3A }, { 0x28 }, { 0x28 } } } }, { { { { 0x50 }, { 0x50 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x41 }, { 0x61 } }, { { 0x60 }, { 0x60 }, { 0x70 }, { 0x61 }, { 0x61 }, { 0x61 }, { 0x62 } }, { { 0x62 }, { 0x42 }, { 0x52 }, { 0x62 }, { 0x63 }, { 0x73 }, { 0x33 } }, { { 0x43 }, { 0x53 }, { 0x74 }, { 0x84 }, { 0x44 }, { 0x54 }, { 0x54 } }, { { 0x55 }, { 0x65 }, { 0x57 }, { 0x57 }, { 0x57 }, { 0x68 }, { 0x68 } } } }, { { { { 0x70 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x90 }, { 0x70 }, { 0x80 } }, { { 0x81 }, { 0x81 }, { 0xA1 }, { 0x82 }, { 0x82 }, { 0x82 }, { 0x81 } }, { { 0x81 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x92 }, { 0xA2 }, { 0x64 } }, { { 0x74 }, { 0x84 }, { 0xA3 }, { 0xB3 }, { 0x85 }, { 0x95 }, { 0x95 } }, { { 0x94 }, { 0xA4 }, { 0x88 }, { 0x88 }, { 0x88 }, { 0x97 }, { 0x97 } } } }, { { { { 0xA2 }, { 0xB1 }, { 0xB1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xB2 } }, { { 0xC2 }, { 0xC2 }, { 0xD3 }, { 0xB4 }, { 0xB4 }, { 0xC3 }, { 0xD3 } }, { { 0xD3 }, { 0xB5 }, { 0xC4 }, { 0xC4 }, { 0xC5 }, { 0xD7 }, { 0xB6 } }, { { 0xC7 }, { 0xC6 }, { 0xC7 }, { 0xD7 }, { 0xB7 }, { 0xB8 }, { 0xC8 } }, { { 0xC9 }, { 0xD9 }, { 0xC8 }, { 0xC8 }, { 0xBA }, { 0xCA }, { 0xDA } } } }, { { { { 0x14 }, { 0x34 }, { 0x44 }, { 0x44 }, { 0x54 }, { 0x16 }, { 0x24 } }, { { 0x25 }, { 0x34 }, { 0x44 }, { 0x18 }, { 0x16 }, { 0x17 }, { 0x27 } }, { { 0x37 }, { 0x1A }, { 0x9 }, { 0x18 }, { 0x28 }, { 0x39 }, { 0xC } }, { { 0x1B }, { 0x1A }, { 0x2A }, { 0x2A }, { 0xD }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0xE }, { 0x2D }, { 0x3C }, { 0x3D }, { 0x3C } } } }, { { { { 0x51 }, { 0x71 }, { 0x60 }, { 0x71 }, { 0x91 }, { 0x52 }, { 0x52 } }, { { 0x71 }, { 0x92 }, { 0x92 }, { 0x43 }, { 0x53 }, { 0x74 }, { 0x93 } }, { { 0xA3 }, { 0x45 }, { 0x55 }, { 0x75 }, { 0x95 }, { 0xA5 }, { 0x47 } }, { { 0x57 }, { 0x77 }, { 0x97 }, { 0xA7 }, { 0x49 }, { 0x69 }, { 0x79 } }, { { 0x89 }, { 0xA9 }, { 0x5B }, { 0x5B }, { 0x7B }, { 0x9B }, { 0x9B } } } }, { { { { 0x73 }, { 0x73 }, { 0x82 }, { 0x92 }, { 0xA2 }, { 0x64 }, { 0x74 } }, { { 0x94 }, { 0xA4 }, { 0xB4 }, { 0x65 }, { 0x75 }, { 0x96 }, { 0xA6 } }, { { 0xB6 }, { 0x68 }, { 0x78 }, { 0x99 }, { 0xA9 }, { 0xB9 }, { 0x7A } }, { { 0x8A }, { 0x9A }, { 0xAA }, { 0xBA }, { 0x6B }, { 0x7B }, { 0x9B } }, { { 0xAB }, { 0xBB }, { 0x7D }, { 0x8D }, { 0x9D }, { 0x9D }, { 0xAD } } } }, { { { { 0x94 }, { 0xA4 }, { 0xA4 }, { 0xB4 }, { 0xD4 }, { 0xA4 }, { 0xB4 } }, { { 0xC5 }, { 0xC4 }, { 0xD6 }, { 0xB7 }, { 0xC7 }, { 0xD7 }, { 0xD6 } }, { { 0xD8 }, { 0xB9 }, { 0xC8 }, { 0xD8 }, { 0xE9 }, { 0xDA }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xDB }, { 0xEC }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xED }, { 0xBC }, { 0xBD }, { 0xBC }, { 0xCD }, { 0xEE } } } }, { { { { 0x42 }, { 0x52 }, { 0x62 }, { 0x73 }, { 0x73 }, { 0x34 }, { 0x44 } }, { { 0x54 }, { 0x74 }, { 0x84 }, { 0x36 }, { 0x46 }, { 0x56 }, { 0x75 } }, { { 0x85 }, { 0x39 }, { 0x49 }, { 0x59 }, { 0x78 }, { 0x88 }, { 0x3A } }, { { 0x4A }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x3B }, { 0x4B }, { 0x5B } }, { { 0x7B }, { 0x8B }, { 0x4D }, { 0x5D }, { 0x5D }, { 0x6D }, { 0x7D } } } }, { { { { 0x67 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x87 }, { 0x68 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0x88 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A } }, { { 0x9A }, { 0x6B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x8B }, { 0x6C } }, { { 0x6D }, { 0x7C }, { 0x8D }, { 0x8C }, { 0x7D }, { 0x8D }, { 0x7D } }, { { 0x6D }, { 0x7D }, { 0x7E }, { 0x7E }, { 0x7E }, { 0x7E }, { 0x7E } } } } }, { 0x0, 0x3, 0x3, 0x0, 0x1, 0xFF, 0x2, 0x1, 0x2, 0xFF }, 0x2 };
TeamTactics teamTactics532 = { { 53, 51, 50, 0, 32, 65, 0, 0, 0 }, { { { { { 0x40 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x31 }, { 0x41 } }, { { 0x41 }, { 0x51 }, { 0x51 }, { 0x32 }, { 0x32 }, { 0x32 }, { 0x42 } }, { { 0x42 }, { 0x15 }, { 0x25 }, { 0x24 }, { 0x44 }, { 0x45 }, { 0x25 } }, { { 0x35 }, { 0x35 }, { 0x26 }, { 0x36 }, { 0x27 }, { 0x36 }, { 0x36 } }, { { 0x36 }, { 0x46 }, { 0x39 }, { 0x38 }, { 0x38 }, { 0x38 }, { 0x38 } } } }, { { { { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 } }, { { 0x70 }, { 0x70 }, { 0x70 }, { 0x71 }, { 0x72 }, { 0x71 }, { 0x72 } }, { { 0x71 }, { 0x63 }, { 0x63 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x64 } }, { { 0x74 }, { 0x74 }, { 0x74 }, { 0x84 }, { 0x65 }, { 0x75 }, { 0x75 } }, { { 0x75 }, { 0x85 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 } } } }, { { { { 0x51 }, { 0x71 }, { 0x81 }, { 0x91 }, { 0xB1 }, { 0x63 }, { 0x73 } }, { { 0x83 }, { 0x92 }, { 0xA2 }, { 0x65 }, { 0x74 }, { 0x84 }, { 0xA4 } }, { { 0xB4 }, { 0x66 }, { 0x76 }, { 0x96 }, { 0xA6 }, { 0xB6 }, { 0x68 } }, { { 0x78 }, { 0x97 }, { 0xA7 }, { 0xB7 }, { 0x5A }, { 0x79 }, { 0x99 } }, { { 0xA9 }, { 0xC9 }, { 0x6B }, { 0x7B }, { 0x9B }, { 0xAB }, { 0xBB } } } }, { { { { 0x90 }, { 0x90 }, { 0x90 }, { 0x90 }, { 0xA0 }, { 0x91 }, { 0x91 } }, { { 0xA1 }, { 0xA1 }, { 0xB1 }, { 0xA2 }, { 0xA2 }, { 0xB2 }, { 0xB2 } }, { { 0xB2 }, { 0xA5 }, { 0xA4 }, { 0xC4 }, { 0xC5 }, { 0xD5 }, { 0xB6 } }, { { 0xC6 }, { 0xB5 }, { 0xB5 }, { 0xC5 }, { 0xA6 }, { 0xB6 }, { 0xB6 } }, { { 0xB6 }, { 0xC7 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB9 } } } }, { { { { 0x12 }, { 0x22 }, { 0x32 }, { 0x42 }, { 0x52 }, { 0x13 }, { 0x33 } }, { { 0x33 }, { 0x24 }, { 0x24 }, { 0x15 }, { 0x15 }, { 0x25 }, { 0x16 } }, { { 0x26 }, { 0x8 }, { 0x8 }, { 0x8 }, { 0x18 }, { 0x28 }, { 0x1A } }, { { 0x3A }, { 0x1A }, { 0x2A }, { 0x2A }, { 0x1B }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3C }, { 0x4C } } } }, { { { { 0x31 }, { 0x51 }, { 0x61 }, { 0x71 }, { 0x91 }, { 0x42 }, { 0x52 } }, { { 0x63 }, { 0x73 }, { 0x83 }, { 0x34 }, { 0x44 }, { 0x64 }, { 0x74 } }, { { 0x85 }, { 0x36 }, { 0x46 }, { 0x56 }, { 0x76 }, { 0x86 }, { 0x37 } }, { { 0x47 }, { 0x57 }, { 0x78 }, { 0x88 }, { 0x29 }, { 0x49 }, { 0x59 } }, { { 0x79 }, { 0x9A }, { 0x3B }, { 0x4B }, { 0x5B }, { 0x7B }, { 0x8B } } } }, { { { { 0x43 }, { 0x53 }, { 0x72 }, { 0x93 }, { 0xA3 }, { 0x44 }, { 0x65 } }, { { 0x74 }, { 0x85 }, { 0xA4 }, { 0x57 }, { 0x67 }, { 0x77 }, { 0x87 } }, { { 0x97 }, { 0x69 }, { 0x79 }, { 0x79 }, { 0x79 }, { 0x89 }, { 0x5B } }, { { 0x6B }, { 0x7B }, { 0x8B }, { 0x9B }, { 0x5C }, { 0x6C }, { 0x7C } }, { { 0x8C }, { 0x9C }, { 0x5D }, { 0x6D }, { 0x7D }, { 0x8D }, { 0x9D } } } }, { { { { 0x92 }, { 0xA2 }, { 0xB2 }, { 0xC2 }, { 0xD2 }, { 0xC4 }, { 0xC4 } }, { { 0xB3 }, { 0xB3 }, { 0xD3 }, { 0xC6 }, { 0xD6 }, { 0xC5 }, { 0xD5 } }, { { 0xD5 }, { 0xC8 }, { 0xD8 }, { 0xE8 }, { 0xE8 }, { 0xE8 }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xBA }, { 0xDA }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xDB }, { 0xAC }, { 0xBC }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x24 }, { 0x44 }, { 0x54 }, { 0x65 }, { 0x85 }, { 0x27 }, { 0x47 } }, { { 0x57 }, { 0x58 }, { 0x78 }, { 0x29 }, { 0x39 }, { 0x49 }, { 0x6A } }, { { 0x7A }, { 0x3A }, { 0x4A }, { 0x4B }, { 0x5B }, { 0x6B }, { 0x3C } }, { { 0x4C }, { 0x5D }, { 0x6D }, { 0x7D }, { 0x5E }, { 0x5E }, { 0x6E } }, { { 0x7E }, { 0x7E }, { 0x5F }, { 0x6F }, { 0x6F }, { 0x6F }, { 0x7F } } } }, { { { { 0x65 }, { 0x85 }, { 0x95 }, { 0xA4 }, { 0xC4 }, { 0x78 }, { 0x98 } }, { { 0x98 }, { 0xA7 }, { 0xC7 }, { 0x7A }, { 0x8A }, { 0xAA }, { 0xB9 } }, { { 0xC9 }, { 0x8B }, { 0x9B }, { 0xAB }, { 0xAA }, { 0xBA }, { 0x7D } }, { { 0x8D }, { 0x9D }, { 0xAC }, { 0xBC }, { 0x7E }, { 0x7E }, { 0x8E } }, { { 0x9E }, { 0x9E }, { 0x7F }, { 0x8F }, { 0x8F }, { 0x8F }, { 0x9F } } } } }, { 0x0, 0xFF, 0x2, 0x0, 0x1, 0x2, 0xFF, 0x1, 0x3, 0x3 }, 0x3 };
TeamTactics teamTactics352 = { { 51, 53, 50, 0, 32, 66, 0, 0, 0 }, { { { { { 0x40 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x31 }, { 0x41 } }, { { 0x41 }, { 0x51 }, { 0x51 }, { 0x32 }, { 0x32 }, { 0x32 }, { 0x42 } }, { { 0x42 }, { 0x15 }, { 0x25 }, { 0x24 }, { 0x44 }, { 0x45 }, { 0x25 } }, { { 0x35 }, { 0x35 }, { 0x26 }, { 0x36 }, { 0x27 }, { 0x36 }, { 0x36 } }, { { 0x36 }, { 0x46 }, { 0x39 }, { 0x38 }, { 0x38 }, { 0x38 }, { 0x38 } } } }, { { { { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 } }, { { 0x70 }, { 0x70 }, { 0x70 }, { 0x71 }, { 0x72 }, { 0x71 }, { 0x72 } }, { { 0x71 }, { 0x63 }, { 0x63 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x64 } }, { { 0x74 }, { 0x74 }, { 0x74 }, { 0x84 }, { 0x65 }, { 0x75 }, { 0x75 } }, { { 0x75 }, { 0x85 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 } } } }, { { { { 0x51 }, { 0x71 }, { 0x81 }, { 0x91 }, { 0xB1 }, { 0x63 }, { 0x73 } }, { { 0x83 }, { 0x92 }, { 0xA2 }, { 0x65 }, { 0x74 }, { 0x84 }, { 0xA4 } }, { { 0xB4 }, { 0x66 }, { 0x76 }, { 0x96 }, { 0xA6 }, { 0xB6 }, { 0x68 } }, { { 0x78 }, { 0x97 }, { 0xA7 }, { 0xB7 }, { 0x5A }, { 0x79 }, { 0x99 } }, { { 0xA9 }, { 0xC9 }, { 0x6B }, { 0x7B }, { 0x9B }, { 0xAB }, { 0xBB } } } }, { { { { 0x90 }, { 0x90 }, { 0x90 }, { 0x90 }, { 0xA0 }, { 0x91 }, { 0x91 } }, { { 0xA1 }, { 0xA1 }, { 0xB1 }, { 0xA2 }, { 0xA2 }, { 0xB2 }, { 0xB2 } }, { { 0xB2 }, { 0xA5 }, { 0xA4 }, { 0xC4 }, { 0xC5 }, { 0xD5 }, { 0xB6 } }, { { 0xC6 }, { 0xB5 }, { 0xB5 }, { 0xC5 }, { 0xA6 }, { 0xB6 }, { 0xB6 } }, { { 0xB6 }, { 0xC7 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB9 } } } }, { { { { 0x12 }, { 0x22 }, { 0x32 }, { 0x42 }, { 0x52 }, { 0x13 }, { 0x33 } }, { { 0x33 }, { 0x24 }, { 0x24 }, { 0x15 }, { 0x15 }, { 0x25 }, { 0x16 } }, { { 0x26 }, { 0x8 }, { 0x8 }, { 0x8 }, { 0x18 }, { 0x28 }, { 0x1A } }, { { 0x3A }, { 0x1A }, { 0x2A }, { 0x2A }, { 0x1B }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3C }, { 0x4C } } } }, { { { { 0x31 }, { 0x51 }, { 0x61 }, { 0x71 }, { 0x91 }, { 0x42 }, { 0x52 } }, { { 0x63 }, { 0x73 }, { 0x83 }, { 0x34 }, { 0x44 }, { 0x64 }, { 0x74 } }, { { 0x85 }, { 0x36 }, { 0x46 }, { 0x56 }, { 0x76 }, { 0x86 }, { 0x37 } }, { { 0x47 }, { 0x57 }, { 0x78 }, { 0x88 }, { 0x29 }, { 0x49 }, { 0x59 } }, { { 0x79 }, { 0x9A }, { 0x3B }, { 0x4B }, { 0x5B }, { 0x7B }, { 0x8B } } } }, { { { { 0x43 }, { 0x53 }, { 0x72 }, { 0x93 }, { 0xA3 }, { 0x44 }, { 0x65 } }, { { 0x74 }, { 0x85 }, { 0xA4 }, { 0x57 }, { 0x67 }, { 0x77 }, { 0x87 } }, { { 0x97 }, { 0x69 }, { 0x79 }, { 0x79 }, { 0x79 }, { 0x89 }, { 0x5B } }, { { 0x6B }, { 0x7B }, { 0x8B }, { 0x9B }, { 0x5C }, { 0x6C }, { 0x7C } }, { { 0x8C }, { 0x9C }, { 0x5D }, { 0x6D }, { 0x7D }, { 0x8D }, { 0x9D } } } }, { { { { 0x92 }, { 0xA2 }, { 0xB2 }, { 0xC2 }, { 0xD2 }, { 0xC4 }, { 0xC4 } }, { { 0xB3 }, { 0xB3 }, { 0xD3 }, { 0xC6 }, { 0xD6 }, { 0xC5 }, { 0xD5 } }, { { 0xD5 }, { 0xC8 }, { 0xD8 }, { 0xE8 }, { 0xE8 }, { 0xE8 }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xBA }, { 0xDA }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xDB }, { 0xAC }, { 0xBC }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x24 }, { 0x44 }, { 0x54 }, { 0x65 }, { 0x85 }, { 0x27 }, { 0x47 } }, { { 0x57 }, { 0x58 }, { 0x78 }, { 0x29 }, { 0x39 }, { 0x49 }, { 0x6A } }, { { 0x7A }, { 0x3A }, { 0x4A }, { 0x4B }, { 0x5B }, { 0x6B }, { 0x3C } }, { { 0x4C }, { 0x5D }, { 0x6D }, { 0x7D }, { 0x5E }, { 0x5E }, { 0x6E } }, { { 0x7E }, { 0x7E }, { 0x5F }, { 0x6F }, { 0x6F }, { 0x6F }, { 0x7F } } } }, { { { { 0x65 }, { 0x85 }, { 0x95 }, { 0xA4 }, { 0xC4 }, { 0x78 }, { 0x98 } }, { { 0x98 }, { 0xA7 }, { 0xC7 }, { 0x7A }, { 0x8A }, { 0xAA }, { 0xB9 } }, { { 0xC9 }, { 0x8B }, { 0x9B }, { 0xAB }, { 0xAA }, { 0xBA }, { 0x7D } }, { { 0x8D }, { 0x9D }, { 0xAC }, { 0xBC }, { 0x7E }, { 0x7E }, { 0x8E } }, { { 0x9E }, { 0x9E }, { 0x7F }, { 0x8F }, { 0x8F }, { 0x8F }, { 0x9F } } } } }, { 0x0, 0xFF, 0x2, 0x0, 0x1, 0x2, 0xFF, 0x1, 0x3, 0x3 }, 0x4 };
TeamTactics teamTactics433 = { { 52, 51, 51, 0, 32, 67, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x31 }, { 0x31 }, { 0x42 }, { 0x13 }, { 0x22 } }, { { 0x22 }, { 0x32 }, { 0x42 }, { 0x14 }, { 0x14 }, { 0x24 }, { 0x34 } }, { { 0x34 }, { 0x17 }, { 0x25 }, { 0x24 }, { 0x24 }, { 0x35 }, { 0x17 } }, { { 0x27 }, { 0x26 }, { 0x27 }, { 0x36 }, { 0x19 }, { 0x29 }, { 0x28 } }, { { 0x38 }, { 0x37 }, { 0x1A }, { 0x2A }, { 0x3A }, { 0x28 }, { 0x18 } } } }, { { { { 0x50 }, { 0x50 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x41 }, { 0x61 } }, { { 0x60 }, { 0x60 }, { 0x70 }, { 0x61 }, { 0x61 }, { 0x61 }, { 0x62 } }, { { 0x62 }, { 0x42 }, { 0x83 }, { 0x62 }, { 0x63 }, { 0x73 }, { 0x73 } }, { { 0x43 }, { 0x53 }, { 0x63 }, { 0x73 }, { 0x44 }, { 0x54 }, { 0x54 } }, { { 0x54 }, { 0x64 }, { 0x57 }, { 0x57 }, { 0x57 }, { 0x57 }, { 0x57 } } } }, { { { { 0x70 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x90 }, { 0x70 }, { 0x80 } }, { { 0x81 }, { 0x81 }, { 0xA1 }, { 0x82 }, { 0x82 }, { 0x82 }, { 0x81 } }, { { 0x81 }, { 0x73 }, { 0x52 }, { 0x83 }, { 0x92 }, { 0xA2 }, { 0x44 } }, { { 0x74 }, { 0x84 }, { 0x94 }, { 0xA4 }, { 0x85 }, { 0x95 }, { 0x95 } }, { { 0x95 }, { 0xA5 }, { 0x88 }, { 0x88 }, { 0x88 }, { 0x88 }, { 0x88 } } } }, { { { { 0xA2 }, { 0xB1 }, { 0xB1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xB2 } }, { { 0xC2 }, { 0xC2 }, { 0xD3 }, { 0xB4 }, { 0xB4 }, { 0xC4 }, { 0xD4 } }, { { 0xD4 }, { 0xB5 }, { 0xC4 }, { 0xC4 }, { 0xC5 }, { 0xD7 }, { 0xB6 } }, { { 0xC7 }, { 0xC6 }, { 0xC7 }, { 0xD7 }, { 0xB7 }, { 0xB8 }, { 0xC8 } }, { { 0xC9 }, { 0xD9 }, { 0xC8 }, { 0xC8 }, { 0xBA }, { 0xCA }, { 0xDA } } } }, { { { { 0x23 }, { 0x43 }, { 0x53 }, { 0x63 }, { 0x54 }, { 0x16 }, { 0x24 } }, { { 0x25 }, { 0x34 }, { 0x44 }, { 0x17 }, { 0x16 }, { 0x17 }, { 0x27 } }, { { 0x37 }, { 0x19 }, { 0x9 }, { 0x18 }, { 0x28 }, { 0x39 }, { 0x1A } }, { { 0x3A }, { 0x1A }, { 0x2A }, { 0x2A }, { 0x1B }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3D }, { 0x3C } } } }, { { { { 0x52 }, { 0x61 }, { 0x71 }, { 0x81 }, { 0x92 }, { 0x53 }, { 0x52 } }, { { 0x72 }, { 0x92 }, { 0x93 }, { 0x44 }, { 0x54 }, { 0x74 }, { 0x94 } }, { { 0xA4 }, { 0x47 }, { 0x57 }, { 0x76 }, { 0x97 }, { 0xA7 }, { 0x48 } }, { { 0x59 }, { 0x78 }, { 0x99 }, { 0xA8 }, { 0x4A }, { 0x5A }, { 0x7A } }, { { 0x9A }, { 0xAA }, { 0x5C }, { 0x6C }, { 0x7C }, { 0x8C }, { 0x9C } } } }, { { { { 0x95 }, { 0xA5 }, { 0xB5 }, { 0xC5 }, { 0xD5 }, { 0x87 }, { 0x97 } }, { { 0xA7 }, { 0xB7 }, { 0xC7 }, { 0x88 }, { 0x98 }, { 0xA8 }, { 0xB8 } }, { { 0xC8 }, { 0x9A }, { 0x3A }, { 0xAA }, { 0xBA }, { 0xBA }, { 0x2C } }, { { 0x9C }, { 0xAC }, { 0xBC }, { 0xCC }, { 0x8D }, { 0x9D }, { 0x9D } }, { { 0xAD }, { 0xBD }, { 0x8E }, { 0x8E }, { 0x8E }, { 0x9E }, { 0xAE } } } }, { { { { 0x94 }, { 0x83 }, { 0x93 }, { 0xA3 }, { 0xB3 }, { 0xA4 }, { 0xB4 } }, { { 0xC5 }, { 0xC4 }, { 0xD6 }, { 0xB7 }, { 0xC7 }, { 0xD7 }, { 0xD6 } }, { { 0xD7 }, { 0xB9 }, { 0xC8 }, { 0xD8 }, { 0xE9 }, { 0xD9 }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xBA }, { 0xDA }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xDB }, { 0xBC }, { 0xBD }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x15 }, { 0x25 }, { 0x35 }, { 0x45 }, { 0x55 }, { 0x27 }, { 0x37 } }, { { 0x47 }, { 0x57 }, { 0x67 }, { 0x28 }, { 0x38 }, { 0x48 }, { 0x58 } }, { { 0x68 }, { 0x3A }, { 0x9A }, { 0x4A }, { 0x5A }, { 0x5A }, { 0x8C } }, { { 0x3C }, { 0x4C }, { 0x5C }, { 0x6C }, { 0x3D }, { 0x4D }, { 0x5D } }, { { 0x5D }, { 0x6D }, { 0x4E }, { 0x5E }, { 0x6E }, { 0x6E }, { 0x6E } } } }, { { { { 0x57 }, { 0x67 }, { 0x77 }, { 0x87 }, { 0x97 }, { 0x58 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0x98 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A } }, { { 0x9A }, { 0x6B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x8B }, { 0x5D } }, { { 0x6D }, { 0x7D }, { 0x8D }, { 0x9D }, { 0x6E }, { 0x7E }, { 0x7E } }, { { 0x7E }, { 0x8E }, { 0x7F }, { 0x7F }, { 0x7F }, { 0x7F }, { 0x7F } } } } }, { 0x0, 0xFF, 0xFF, 0x0, 0x1, 0xFF, 0xFF, 0x1, 0xFF, 0xFF }, 0x5 };
TeamTactics teamTactics424 = { { 52, 50, 52, 0, 32, 66, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x31 }, { 0x31 }, { 0x41 }, { 0x12 }, { 0x22 } }, { { 0x22 }, { 0x32 }, { 0x42 }, { 0x13 }, { 0x13 }, { 0x23 }, { 0x34 } }, { { 0x34 }, { 0x15 }, { 0x25 }, { 0x24 }, { 0x24 }, { 0x35 }, { 0x16 } }, { { 0x26 }, { 0x26 }, { 0x27 }, { 0x36 }, { 0x18 }, { 0x28 }, { 0x28 } }, { { 0x38 }, { 0x37 }, { 0x19 }, { 0x29 }, { 0x29 }, { 0x28 }, { 0x28 } } } }, { { { { 0x50 }, { 0x50 }, { 0x60 }, { 0x70 }, { 0x70 }, { 0x41 }, { 0x61 } }, { { 0x60 }, { 0x60 }, { 0x70 }, { 0x61 }, { 0x61 }, { 0x61 }, { 0x62 } }, { { 0x62 }, { 0x42 }, { 0x52 }, { 0x62 }, { 0x63 }, { 0x73 }, { 0x33 } }, { { 0x43 }, { 0x53 }, { 0x74 }, { 0x84 }, { 0x44 }, { 0x54 }, { 0x54 } }, { { 0x55 }, { 0x65 }, { 0x57 }, { 0x57 }, { 0x57 }, { 0x68 }, { 0x68 } } } }, { { { { 0x70 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x90 }, { 0x70 }, { 0x80 } }, { { 0x80 }, { 0x81 }, { 0xA1 }, { 0x82 }, { 0x82 }, { 0x82 }, { 0x81 } }, { { 0x81 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x92 }, { 0xA2 }, { 0x64 } }, { { 0x74 }, { 0x84 }, { 0xA3 }, { 0xB3 }, { 0x85 }, { 0x95 }, { 0x95 } }, { { 0x94 }, { 0xA4 }, { 0x88 }, { 0x88 }, { 0x88 }, { 0x97 }, { 0x97 } } } }, { { { { 0xA1 }, { 0xB1 }, { 0xB1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xB2 } }, { { 0xC2 }, { 0xC2 }, { 0xD2 }, { 0xB4 }, { 0xB4 }, { 0xC3 }, { 0xD3 } }, { { 0xD3 }, { 0xB5 }, { 0xC4 }, { 0xC4 }, { 0xC5 }, { 0xD5 }, { 0xB6 } }, { { 0xC7 }, { 0xC6 }, { 0xC6 }, { 0xD6 }, { 0xB7 }, { 0xB8 }, { 0xC8 } }, { { 0xC8 }, { 0xD8 }, { 0xC8 }, { 0xC8 }, { 0xC9 }, { 0xC9 }, { 0xD9 } } } }, { { { { 0x16 }, { 0x25 }, { 0x34 }, { 0x44 }, { 0x54 }, { 0x17 }, { 0x16 } }, { { 0x26 }, { 0x35 }, { 0x45 }, { 0x1A }, { 0x19 }, { 0x18 }, { 0x29 } }, { { 0x38 }, { 0xB }, { 0xA }, { 0x1A }, { 0x2A }, { 0x3A }, { 0xC } }, { { 0x1B }, { 0x1B }, { 0x2C }, { 0x4C }, { 0xD }, { 0x1D }, { 0x2C } }, { { 0x4C }, { 0x4C }, { 0xE }, { 0x2D }, { 0x3E }, { 0x4E }, { 0x5E } } } }, { { { { 0x31 }, { 0x51 }, { 0x70 }, { 0x81 }, { 0x81 }, { 0x32 }, { 0x42 } }, { { 0x62 }, { 0x82 }, { 0x93 }, { 0x25 }, { 0x45 }, { 0x65 }, { 0x75 } }, { { 0x85 }, { 0x37 }, { 0x46 }, { 0x56 }, { 0x76 }, { 0x87 }, { 0x37 } }, { { 0x47 }, { 0x57 }, { 0x78 }, { 0x88 }, { 0x39 }, { 0x49 }, { 0x59 } }, { { 0x79 }, { 0x89 }, { 0x3B }, { 0x4B }, { 0x5B }, { 0x6B }, { 0x7C } } } }, { { { { 0x61 }, { 0x61 }, { 0x71 }, { 0x91 }, { 0xB1 }, { 0x53 }, { 0x62 } }, { { 0x82 }, { 0xA2 }, { 0xB2 }, { 0x65 }, { 0x75 }, { 0x85 }, { 0xA5 } }, { { 0xC5 }, { 0x67 }, { 0x76 }, { 0x96 }, { 0xA6 }, { 0xB7 }, { 0x68 } }, { { 0x78 }, { 0x97 }, { 0xA7 }, { 0xB7 }, { 0x69 }, { 0x79 }, { 0x99 } }, { { 0xA9 }, { 0xB9 }, { 0x7C }, { 0x8B }, { 0x9B }, { 0xAB }, { 0xBB } } } }, { { { { 0x94 }, { 0xA4 }, { 0xB4 }, { 0xC5 }, { 0xD6 }, { 0xA5 }, { 0xB5 } }, { { 0xC6 }, { 0xD6 }, { 0xD7 }, { 0xB8 }, { 0xC9 }, { 0xD8 }, { 0xD9 } }, { { 0xDA }, { 0xBA }, { 0xCA }, { 0xDA }, { 0xEA }, { 0xEB }, { 0xAC } }, { { 0xCC }, { 0xDB }, { 0xDB }, { 0xEC }, { 0xAC }, { 0xAC }, { 0xCC } }, { { 0xDD }, { 0xED }, { 0x9E }, { 0xAE }, { 0xBE }, { 0xCD }, { 0xEE } } } }, { { { { 0x44 }, { 0x54 }, { 0x74 }, { 0x94 }, { 0xA4 }, { 0x36 }, { 0x46 } }, { { 0x76 }, { 0xA6 }, { 0xB6 }, { 0x49 }, { 0x59 }, { 0x79 }, { 0x99 } }, { { 0xA9 }, { 0x4A }, { 0x6A }, { 0x7A }, { 0x8A }, { 0xAA }, { 0x4B } }, { { 0x5C }, { 0x7B }, { 0x9C }, { 0xAB }, { 0x5D }, { 0x6D }, { 0x7C } }, { { 0x8D }, { 0x9D }, { 0x4D }, { 0x5D }, { 0x7D }, { 0x9D }, { 0xAD } } } }, { { { { 0x57 }, { 0x67 }, { 0x77 }, { 0x87 }, { 0x97 }, { 0x58 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0x98 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A } }, { { 0x9A }, { 0x6B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x8B }, { 0x5D } }, { { 0x6D }, { 0x7C }, { 0x8D }, { 0x9D }, { 0x8E }, { 0x7E }, { 0x7D } }, { { 0x7E }, { 0x6E }, { 0x7F }, { 0x8F }, { 0x7F }, { 0x6F }, { 0x7F } } } } }, { 0x0, 0x3, 0x3, 0x0, 0x1, 0x2, 0x2, 0x1, 0xFF, 0xFF }, 0x6 };
TeamTactics teamTactics343 = { { 51, 52, 51, 0, 32, 65, 0, 0, 0 }, { { { { { 0x40 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x31 }, { 0x41 } }, { { 0x41 }, { 0x51 }, { 0x51 }, { 0x32 }, { 0x32 }, { 0x32 }, { 0x42 } }, { { 0x42 }, { 0x15 }, { 0x25 }, { 0x24 }, { 0x44 }, { 0x45 }, { 0x25 } }, { { 0x35 }, { 0x35 }, { 0x26 }, { 0x36 }, { 0x27 }, { 0x36 }, { 0x36 } }, { { 0x36 }, { 0x46 }, { 0x39 }, { 0x38 }, { 0x38 }, { 0x38 }, { 0x38 } } } }, { { { { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 } }, { { 0x70 }, { 0x70 }, { 0x70 }, { 0x71 }, { 0x72 }, { 0x71 }, { 0x72 } }, { { 0x71 }, { 0x63 }, { 0x63 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x64 } }, { { 0x74 }, { 0x74 }, { 0x74 }, { 0x84 }, { 0x65 }, { 0x75 }, { 0x75 } }, { { 0x75 }, { 0x85 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 } } } }, { { { { 0x51 }, { 0x61 }, { 0x71 }, { 0x81 }, { 0x91 }, { 0x52 }, { 0x62 } }, { { 0x72 }, { 0x82 }, { 0x92 }, { 0x44 }, { 0x54 }, { 0x74 }, { 0x94 } }, { { 0xA4 }, { 0x45 }, { 0x55 }, { 0x75 }, { 0x95 }, { 0xA5 }, { 0x47 } }, { { 0x57 }, { 0x77 }, { 0x97 }, { 0xA7 }, { 0x49 }, { 0x59 }, { 0x79 } }, { { 0x99 }, { 0xA9 }, { 0x7B }, { 0x7B }, { 0x7B }, { 0x7B }, { 0x7B } } } }, { { { { 0x90 }, { 0x90 }, { 0x90 }, { 0x90 }, { 0xA0 }, { 0x91 }, { 0x91 } }, { { 0xA1 }, { 0xA1 }, { 0xB1 }, { 0xA2 }, { 0xA2 }, { 0xB2 }, { 0xB2 } }, { { 0xB2 }, { 0xA5 }, { 0xA4 }, { 0xC4 }, { 0xC5 }, { 0xD5 }, { 0xB6 } }, { { 0xC6 }, { 0xB5 }, { 0xB5 }, { 0xC5 }, { 0xA6 }, { 0xB6 }, { 0xB6 } }, { { 0xB6 }, { 0xC7 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB9 } } } }, { { { { 0x12 }, { 0x22 }, { 0x32 }, { 0x42 }, { 0x52 }, { 0x13 }, { 0x33 } }, { { 0x33 }, { 0x24 }, { 0x24 }, { 0x15 }, { 0x15 }, { 0x25 }, { 0x16 } }, { { 0x26 }, { 0x8 }, { 0x8 }, { 0x8 }, { 0x18 }, { 0x28 }, { 0x1A } }, { { 0x3A }, { 0x1A }, { 0x2A }, { 0x2A }, { 0x1B }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3C }, { 0x4C } } } }, { { { { 0x53 }, { 0x63 }, { 0x73 }, { 0x83 }, { 0x93 }, { 0x64 }, { 0x74 } }, { { 0x74 }, { 0x74 }, { 0x84 }, { 0x65 }, { 0x66 }, { 0x76 }, { 0x86 } }, { { 0x85 }, { 0x47 }, { 0x57 }, { 0x77 }, { 0x97 }, { 0xA7 }, { 0x39 } }, { { 0x59 }, { 0x79 }, { 0x99 }, { 0xB9 }, { 0x4B }, { 0x5B }, { 0x7B } }, { { 0x9B }, { 0xAB }, { 0x4C }, { 0x5C }, { 0x7D }, { 0x9C }, { 0xAC } } } }, { { { { 0x84 }, { 0x94 }, { 0xA4 }, { 0x54 }, { 0x64 }, { 0x86 }, { 0x96 } }, { { 0xA6 }, { 0x56 }, { 0x66 }, { 0x88 }, { 0x99 }, { 0xA9 }, { 0x59 } }, { { 0x68 }, { 0x9A }, { 0x9A }, { 0xAA }, { 0x5A }, { 0x5A }, { 0x8C } }, { { 0x9C }, { 0xAC }, { 0x5C }, { 0x6C }, { 0x8D }, { 0x9D }, { 0x9D } }, { { 0x5D }, { 0x6D }, { 0x8E }, { 0x8E }, { 0x8E }, { 0x6E }, { 0x6E } } } }, { { { { 0x92 }, { 0xA2 }, { 0xB2 }, { 0xC2 }, { 0xD2 }, { 0xC4 }, { 0xC4 } }, { { 0xB3 }, { 0xB3 }, { 0xD3 }, { 0xC6 }, { 0xD6 }, { 0xC5 }, { 0xD5 } }, { { 0xD5 }, { 0xC8 }, { 0xD8 }, { 0xE8 }, { 0xE8 }, { 0xE8 }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xBA }, { 0xDA }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xDB }, { 0xAC }, { 0xBC }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x24 }, { 0x34 }, { 0x44 }, { 0xB4 }, { 0xC4 }, { 0x26 }, { 0x36 } }, { { 0x46 }, { 0xB6 }, { 0xC6 }, { 0x29 }, { 0x39 }, { 0x49 }, { 0xB9 } }, { { 0xC9 }, { 0x3A }, { 0x3A }, { 0x4A }, { 0xBA }, { 0xBA }, { 0x2C } }, { { 0x3C }, { 0x4C }, { 0xBC }, { 0xCC }, { 0x3D }, { 0x4D }, { 0x5D } }, { { 0xAD }, { 0xBD }, { 0x5E }, { 0x6E }, { 0x6E }, { 0x8E }, { 0x9E } } } }, { { { { 0x56 }, { 0x66 }, { 0x76 }, { 0x86 }, { 0x96 }, { 0x58 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0x98 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A } }, { { 0x9A }, { 0x6B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x8B }, { 0x5D } }, { { 0x6D }, { 0x7D }, { 0x8D }, { 0x9D }, { 0x6E }, { 0x7E }, { 0x7E } }, { { 0x7E }, { 0x8E }, { 0x7F }, { 0x7F }, { 0x7F }, { 0x7F }, { 0x7F } } } } }, { 0x0, 0xFF, 0xFF, 0x0, 0x1, 0xFF, 0xFF, 0x1, 0xFF, 0xFF }, 0x7 };
TeamTactics teamTacticsSweep = { { 83, 87, 69, 69, 80, 0, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x31 }, { 0x31 }, { 0x42 }, { 0x13 }, { 0x22 } }, { { 0x22 }, { 0x32 }, { 0x42 }, { 0x14 }, { 0x14 }, { 0x24 }, { 0x34 } }, { { 0x34 }, { 0x16 }, { 0x25 }, { 0x24 }, { 0x24 }, { 0x35 }, { 0x15 } }, { { 0x25 }, { 0x25 }, { 0x25 }, { 0x35 }, { 0x16 }, { 0x26 }, { 0x26 } }, { { 0x36 }, { 0x36 }, { 0x27 }, { 0x27 }, { 0x27 }, { 0x27 }, { 0x27 } } } }, { { { { 0x50 }, { 0x50 }, { 0x70 }, { 0x70 }, { 0x90 }, { 0x41 }, { 0x61 } }, { { 0x60 }, { 0x60 }, { 0x70 }, { 0x61 }, { 0x61 }, { 0x61 }, { 0x62 } }, { { 0x62 }, { 0x73 }, { 0x52 }, { 0x62 }, { 0x63 }, { 0x73 }, { 0x55 } }, { { 0x64 }, { 0x64 }, { 0x74 }, { 0x95 }, { 0x68 }, { 0x67 }, { 0x77 } }, { { 0x87 }, { 0x88 }, { 0x4A }, { 0x5A }, { 0x6A }, { 0x8A }, { 0xAA } } } }, { { { { 0x70 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x70 }, { 0x70 }, { 0x80 } }, { { 0x81 }, { 0x81 }, { 0xA1 }, { 0x82 }, { 0x82 }, { 0x82 }, { 0x81 } }, { { 0x81 }, { 0x42 }, { 0x83 }, { 0x83 }, { 0x92 }, { 0xA2 }, { 0x63 } }, { { 0x73 }, { 0x83 }, { 0x83 }, { 0x83 }, { 0x74 }, { 0x74 }, { 0x74 } }, { { 0x74 }, { 0x74 }, { 0x76 }, { 0x76 }, { 0x76 }, { 0x76 }, { 0x76 } } } }, { { { { 0xA2 }, { 0xB1 }, { 0xB1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xB2 } }, { { 0xC2 }, { 0xC2 }, { 0xD3 }, { 0xB4 }, { 0xB4 }, { 0xC4 }, { 0xD4 } }, { { 0xD4 }, { 0xB5 }, { 0xC4 }, { 0xC4 }, { 0xC5 }, { 0xD6 }, { 0xB5 } }, { { 0xC5 }, { 0xC5 }, { 0xC5 }, { 0xD5 }, { 0xB6 }, { 0xB6 }, { 0xC6 } }, { { 0xC6 }, { 0xD6 }, { 0xC7 }, { 0xC7 }, { 0xC7 }, { 0xC7 }, { 0xC7 } } } }, { { { { 0x33 }, { 0x43 }, { 0x44 }, { 0x44 }, { 0x54 }, { 0x16 }, { 0x24 } }, { { 0x25 }, { 0x34 }, { 0x44 }, { 0x18 }, { 0x16 }, { 0x17 }, { 0x27 } }, { { 0x37 }, { 0x19 }, { 0x9 }, { 0x18 }, { 0x28 }, { 0x39 }, { 0x19 } }, { { 0x3A }, { 0x1A }, { 0x2A }, { 0x2A }, { 0x1B }, { 0x1D }, { 0x2B } }, { { 0x3B }, { 0x3B }, { 0x1D }, { 0x3D }, { 0x3D }, { 0x3D }, { 0x3C } } } }, { { { { 0x51 }, { 0x71 }, { 0x60 }, { 0x71 }, { 0x91 }, { 0x52 }, { 0x52 } }, { { 0x71 }, { 0x92 }, { 0x92 }, { 0x43 }, { 0x53 }, { 0x73 }, { 0x93 } }, { { 0xA3 }, { 0x45 }, { 0x55 }, { 0x75 }, { 0x95 }, { 0xA5 }, { 0x47 } }, { { 0x57 }, { 0x77 }, { 0x97 }, { 0xA7 }, { 0x49 }, { 0x69 }, { 0x79 } }, { { 0x89 }, { 0xA9 }, { 0x6B }, { 0x7B }, { 0x7B }, { 0x7B }, { 0x8B } } } }, { { { { 0x54 }, { 0x64 }, { 0x73 }, { 0x84 }, { 0x94 }, { 0x54 }, { 0x64 } }, { { 0x74 }, { 0x84 }, { 0x94 }, { 0x55 }, { 0x66 }, { 0x76 }, { 0x86 } }, { { 0x95 }, { 0x58 }, { 0x68 }, { 0x77 }, { 0x88 }, { 0x98 }, { 0x49 } }, { { 0x6A }, { 0x79 }, { 0x8A }, { 0xA9 }, { 0x5B }, { 0x4B }, { 0x7B } }, { { 0xAB }, { 0x9B }, { 0x8D }, { 0x7D }, { 0x7D }, { 0x7D }, { 0x6D } } } }, { { { { 0x94 }, { 0xA4 }, { 0xA4 }, { 0xA3 }, { 0xB3 }, { 0xA4 }, { 0xB4 } }, { { 0xC5 }, { 0xC4 }, { 0xD6 }, { 0xB7 }, { 0xC7 }, { 0xD7 }, { 0xD6 } }, { { 0xD8 }, { 0xB9 }, { 0xC8 }, { 0xD8 }, { 0xE9 }, { 0xD9 }, { 0xCA } }, { { 0xCA }, { 0xDA }, { 0xBA }, { 0xD9 }, { 0xBB }, { 0xBB }, { 0xCB } }, { { 0xDD }, { 0xDB }, { 0xBC }, { 0xBD }, { 0xBD }, { 0xBD }, { 0xDD } } } }, { { { { 0x24 }, { 0x44 }, { 0x54 }, { 0x65 }, { 0xC4 }, { 0x27 }, { 0x47 } }, { { 0x57 }, { 0x58 }, { 0x78 }, { 0x29 }, { 0x39 }, { 0x49 }, { 0x6A } }, { { 0x7A }, { 0x3A }, { 0x4A }, { 0x4B }, { 0x5B }, { 0x6B }, { 0x3C } }, { { 0x4C }, { 0x5D }, { 0x6D }, { 0x7D }, { 0x5E }, { 0x5E }, { 0x6E } }, { { 0x7E }, { 0x7E }, { 0x5F }, { 0x6F }, { 0x6F }, { 0x6F }, { 0x7F } } } }, { { { { 0x65 }, { 0x85 }, { 0x95 }, { 0xA4 }, { 0x85 }, { 0x78 }, { 0x98 } }, { { 0x98 }, { 0xA7 }, { 0xC7 }, { 0x7A }, { 0x8A }, { 0xAA }, { 0xB9 } }, { { 0xC9 }, { 0x8B }, { 0x9B }, { 0xAB }, { 0xAA }, { 0xBA }, { 0x7D } }, { { 0x8D }, { 0x9D }, { 0xAC }, { 0xBC }, { 0x7E }, { 0x7E }, { 0x8E } }, { { 0x9E }, { 0x9E }, { 0x7F }, { 0x8F }, { 0x8F }, { 0x8F }, { 0x9F } } } } }, { 0x0, 0xFF, 0xFF, 0x0, 0x1, 0xFF, 0xFF, 0x1, 0xFF, 0xFF }, 0x8 };
TeamTactics teamTactics523 = { { 53, 50, 51, 0, 32, 66, 0, 0, 0 }, { { { { { 0x10 }, { 0x21 }, { 0x41 }, { 0x41 }, { 0x50 }, { 0x2 }, { 0x21 } }, { { 0x31 }, { 0x41 }, { 0x42 }, { 0x14 }, { 0x13 }, { 0x13 }, { 0x33 } }, { { 0x33 }, { 0x6 }, { 0x16 }, { 0x15 }, { 0x26 }, { 0x26 }, { 0x9 } }, { { 0x18 }, { 0x17 }, { 0x28 }, { 0x48 }, { 0xB }, { 0x1A }, { 0x2A } }, { { 0x3A }, { 0x4A }, { 0xC }, { 0x1B }, { 0x2B }, { 0x3B }, { 0x4B } } } }, { { { { 0x50 }, { 0x60 }, { 0x70 }, { 0x80 }, { 0x90 }, { 0x60 }, { 0x60 } }, { { 0x70 }, { 0x80 }, { 0x80 }, { 0x51 }, { 0x61 }, { 0x71 }, { 0x81 } }, { { 0x91 }, { 0x54 }, { 0x64 }, { 0x73 }, { 0x84 }, { 0x94 }, { 0x56 } }, { { 0x66 }, { 0x76 }, { 0x86 }, { 0x96 }, { 0x58 }, { 0x68 }, { 0x78 } }, { { 0x88 }, { 0x98 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A }, { 0x9A } } } }, { { { { 0x70 }, { 0x80 }, { 0x80 }, { 0x90 }, { 0xB1 }, { 0x71 }, { 0x71 } }, { { 0x81 }, { 0xA1 }, { 0xB2 }, { 0x72 }, { 0x82 }, { 0x92 }, { 0xA2 } }, { { 0xB2 }, { 0x85 }, { 0x85 }, { 0x94 }, { 0xA3 }, { 0xB3 }, { 0x85 } }, { { 0x85 }, { 0x95 }, { 0xA5 }, { 0xB5 }, { 0x87 }, { 0x97 }, { 0xA7 } }, { { 0xB7 }, { 0xC7 }, { 0x88 }, { 0x98 }, { 0xA8 }, { 0xB8 }, { 0xC8 } } } }, { { { { 0x90 }, { 0xA1 }, { 0xA1 }, { 0xC1 }, { 0xD0 }, { 0xA2 }, { 0xA1 } }, { { 0xB1 }, { 0xC1 }, { 0xE2 }, { 0xB3 }, { 0xB3 }, { 0xD3 }, { 0xD3 } }, { { 0xD4 }, { 0xC6 }, { 0xC6 }, { 0xD5 }, { 0xD6 }, { 0xE6 }, { 0xA8 } }, { { 0xC8 }, { 0xD7 }, { 0xD8 }, { 0xE9 }, { 0xAA }, { 0xBA }, { 0xCA } }, { { 0xDA }, { 0xEB }, { 0xAB }, { 0xBB }, { 0xCB }, { 0xDB }, { 0xEC } } } }, { { { { 0x5 }, { 0x14 }, { 0x33 }, { 0x43 }, { 0x53 }, { 0x6 }, { 0x15 } }, { { 0x35 }, { 0x35 }, { 0x45 }, { 0x9 }, { 0x18 }, { 0x28 }, { 0x38 } }, { { 0x48 }, { 0xA }, { 0xA }, { 0x2A }, { 0x3A }, { 0x4A }, { 0x2C } }, { { 0x1C }, { 0x3C }, { 0x4C }, { 0x5C }, { 0x3D }, { 0x4D }, { 0x4D } }, { { 0x5D }, { 0x5D }, { 0x3E }, { 0x4E }, { 0x4E }, { 0x6E }, { 0x5E } } } }, { { { { 0x31 }, { 0x50 }, { 0x60 }, { 0x60 }, { 0x70 }, { 0x32 }, { 0x41 } }, { { 0x61 }, { 0x71 }, { 0x71 }, { 0x32 }, { 0x42 }, { 0x52 }, { 0x62 } }, { { 0x72 }, { 0x33 }, { 0x43 }, { 0x54 }, { 0x65 }, { 0x65 }, { 0x35 } }, { { 0x45 }, { 0x55 }, { 0x65 }, { 0x65 }, { 0x27 }, { 0x37 }, { 0x47 } }, { { 0x57 }, { 0x67 }, { 0x28 }, { 0x38 }, { 0x48 }, { 0x58 }, { 0x68 } } } }, { { { { 0x52 }, { 0x62 }, { 0x81 }, { 0x91 }, { 0xA1 }, { 0x63 }, { 0x73 } }, { { 0x83 }, { 0xA3 }, { 0xB3 }, { 0x55 }, { 0x75 }, { 0x95 }, { 0xB5 } }, { { 0xC5 }, { 0x57 }, { 0x67 }, { 0x97 }, { 0xB7 }, { 0xC7 }, { 0x59 } }, { { 0x69 }, { 0x99 }, { 0xB9 }, { 0xC9 }, { 0x6B }, { 0x7B }, { 0x9B } }, { { 0xAB }, { 0xCB }, { 0x6D }, { 0x7D }, { 0x8D }, { 0x9C }, { 0xAC } } } }, { { { { 0x93 }, { 0xA3 }, { 0xB3 }, { 0xD4 }, { 0xE5 }, { 0xA5 }, { 0xB5 } }, { { 0xB5 }, { 0xD5 }, { 0xE6 }, { 0xA8 }, { 0xB8 }, { 0xC8 }, { 0xD8 } }, { { 0xE9 }, { 0xAA }, { 0xBA }, { 0xCA }, { 0xEA }, { 0xEA }, { 0x9C } }, { { 0xAC }, { 0xBC }, { 0xDC }, { 0xCC }, { 0x9D }, { 0x9D }, { 0xAD } }, { { 0xAD }, { 0xBD }, { 0x9E }, { 0x8E }, { 0xAE }, { 0xAE }, { 0xBE } } } }, { { { { 0x41 }, { 0x51 }, { 0x61 }, { 0x82 }, { 0x92 }, { 0x33 }, { 0x43 } }, { { 0x63 }, { 0x73 }, { 0x83 }, { 0x25 }, { 0x35 }, { 0x55 }, { 0x75 } }, { { 0x95 }, { 0x27 }, { 0x37 }, { 0x57 }, { 0x87 }, { 0x97 }, { 0x29 } }, { { 0x39 }, { 0x59 }, { 0x89 }, { 0x99 }, { 0x2B }, { 0x4B }, { 0x5B } }, { { 0x7B }, { 0x8B }, { 0x4C }, { 0x5C }, { 0x6D }, { 0x7D }, { 0x8D } } } }, { { { { 0x45 }, { 0x65 }, { 0x75 }, { 0x85 }, { 0xA5 }, { 0x48 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0xA8 }, { 0x4A }, { 0x5A }, { 0x7A }, { 0x9A } }, { { 0xAA }, { 0x5B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x9B }, { 0x5D } }, { { 0x6D }, { 0x7D }, { 0x8D }, { 0x9D }, { 0x6E }, { 0x6E }, { 0x7E } }, { { 0x8E }, { 0x8E }, { 0x7F }, { 0x6F }, { 0x7E }, { 0x8F }, { 0x7F } } } } }, { 0x0, 0xFF, 0x2, 0x0, 0x1, 0x2, 0x3, 0x1, 0x3, 0xFF }, 0x9 };
TeamTactics teamTacticsAttack = { { 65, 84, 84, 65, 67, 75, 0, 0, 0 }, { { { { { 0x40 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x50 }, { 0x31 }, { 0x41 } }, { { 0x41 }, { 0x51 }, { 0x51 }, { 0x32 }, { 0x32 }, { 0x32 }, { 0x42 } }, { { 0x42 }, { 0x15 }, { 0x25 }, { 0x24 }, { 0x44 }, { 0x45 }, { 0x25 } }, { { 0x35 }, { 0x35 }, { 0x26 }, { 0x36 }, { 0x27 }, { 0x36 }, { 0x36 } }, { { 0x36 }, { 0x46 }, { 0x39 }, { 0x38 }, { 0x38 }, { 0x38 }, { 0x38 } } } }, { { { { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 }, { 0x70 } }, { { 0x70 }, { 0x70 }, { 0x70 }, { 0x71 }, { 0x72 }, { 0x71 }, { 0x72 } }, { { 0x71 }, { 0x63 }, { 0x63 }, { 0x73 }, { 0x83 }, { 0x83 }, { 0x64 } }, { { 0x74 }, { 0x74 }, { 0x74 }, { 0x84 }, { 0x65 }, { 0x75 }, { 0x75 } }, { { 0x75 }, { 0x85 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x77 } } } }, { { { { 0x31 }, { 0x51 }, { 0x61 }, { 0x71 }, { 0x91 }, { 0x42 }, { 0x52 } }, { { 0x63 }, { 0x73 }, { 0x83 }, { 0x24 }, { 0x44 }, { 0x64 }, { 0x74 } }, { { 0x85 }, { 0x36 }, { 0x46 }, { 0x56 }, { 0x76 }, { 0x86 }, { 0x37 } }, { { 0x47 }, { 0x57 }, { 0x78 }, { 0x88 }, { 0x2A }, { 0x4A }, { 0x59 } }, { { 0x79 }, { 0x99 }, { 0x3C }, { 0x4C }, { 0x5B }, { 0x7B }, { 0x8B } } } }, { { { { 0x90 }, { 0x90 }, { 0x90 }, { 0x90 }, { 0xA0 }, { 0x91 }, { 0x91 } }, { { 0xA1 }, { 0xA1 }, { 0xB1 }, { 0xA2 }, { 0xA2 }, { 0xB2 }, { 0xB2 } }, { { 0xB2 }, { 0xA5 }, { 0xA4 }, { 0xC4 }, { 0xC5 }, { 0xD5 }, { 0xB6 } }, { { 0xC6 }, { 0xB5 }, { 0xB5 }, { 0xC5 }, { 0xA6 }, { 0xB6 }, { 0xB6 } }, { { 0xB6 }, { 0xC7 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB8 }, { 0xB9 } } } }, { { { { 0x4 }, { 0x14 }, { 0x24 }, { 0x44 }, { 0x54 }, { 0x7 }, { 0x17 } }, { { 0x26 }, { 0x26 }, { 0x36 }, { 0xA }, { 0x19 }, { 0x18 }, { 0x19 } }, { { 0x29 }, { 0xB }, { 0xA }, { 0x1A }, { 0x1A }, { 0x2B }, { 0x3C } }, { { 0x2C }, { 0x1C }, { 0x2C }, { 0x3C }, { 0x1D }, { 0x1D }, { 0x3D } }, { { 0x4D }, { 0x5D }, { 0x1D }, { 0x3E }, { 0x4D }, { 0x4E }, { 0x5E } } } }, { { { { 0x51 }, { 0x71 }, { 0x81 }, { 0x91 }, { 0xB1 }, { 0x63 }, { 0x73 } }, { { 0x83 }, { 0x92 }, { 0xA2 }, { 0x65 }, { 0x74 }, { 0x84 }, { 0xA4 } }, { { 0xC4 }, { 0x66 }, { 0x76 }, { 0x96 }, { 0xA6 }, { 0xB6 }, { 0x68 } }, { { 0x78 }, { 0x97 }, { 0xA7 }, { 0xB7 }, { 0x59 }, { 0x79 }, { 0x99 } }, { { 0xAA }, { 0xCA }, { 0x6B }, { 0x7B }, { 0x9C }, { 0xAC }, { 0xBC } } } }, { { { { 0x43 }, { 0x53 }, { 0x73 }, { 0x93 }, { 0xA3 }, { 0x45 }, { 0x65 } }, { { 0x75 }, { 0x85 }, { 0xA5 }, { 0x58 }, { 0x68 }, { 0x77 }, { 0x88 } }, { { 0x98 }, { 0x5A }, { 0x6A }, { 0x79 }, { 0x8A }, { 0x9A }, { 0x5B } }, { { 0x6B }, { 0x7B }, { 0x8B }, { 0x9B }, { 0x5C }, { 0x6D }, { 0x7D } }, { { 0x8D }, { 0x9C }, { 0x6D }, { 0x6D }, { 0x7E }, { 0x8D }, { 0x8D } } } }, { { { { 0x94 }, { 0xA4 }, { 0xC4 }, { 0xD4 }, { 0xE4 }, { 0xB6 }, { 0xC6 } }, { { 0xC6 }, { 0xD7 }, { 0xE7 }, { 0xC9 }, { 0xD9 }, { 0xD8 }, { 0xD9 } }, { { 0xEA }, { 0xCB }, { 0xDA }, { 0xDA }, { 0xEA }, { 0xEB }, { 0xBC } }, { { 0xCC }, { 0xDC }, { 0xCC }, { 0xBC }, { 0x9D }, { 0xAD }, { 0xBD } }, { { 0xDD }, { 0xDD }, { 0x9E }, { 0xAE }, { 0xAD }, { 0xBE }, { 0xDD } } } }, { { { { 0x26 }, { 0x45 }, { 0x55 }, { 0x66 }, { 0x86 }, { 0x28 }, { 0x48 } }, { { 0x57 }, { 0x69 }, { 0x79 }, { 0x2A }, { 0x3A }, { 0x59 }, { 0x6B } }, { { 0x7B }, { 0x3C }, { 0x4C }, { 0x5B }, { 0x5B }, { 0x6B }, { 0x4D } }, { { 0x5D }, { 0x6D }, { 0x6D }, { 0x7E }, { 0x5E }, { 0x5E }, { 0x6F } }, { { 0x7F }, { 0x7E }, { 0x5F }, { 0x6F }, { 0x6F }, { 0x6F }, { 0x7F } } } }, { { { { 0x66 }, { 0x86 }, { 0x96 }, { 0xA5 }, { 0xC6 }, { 0x79 }, { 0x89 } }, { { 0x98 }, { 0xA8 }, { 0xC8 }, { 0x7B }, { 0x8B }, { 0x9A }, { 0xBA } }, { { 0xCA }, { 0x8B }, { 0x9B }, { 0x9C }, { 0xAC }, { 0xBC }, { 0x7E } }, { { 0x8D }, { 0x8E }, { 0x9D }, { 0xAD }, { 0x7E }, { 0x7F }, { 0x8F } }, { { 0x9E }, { 0x9E }, { 0x7F }, { 0x8F }, { 0x8F }, { 0x8F }, { 0x9F } } } } }, { 0x0, 0xFF, 0x2, 0x0, 0x1, 0x2, 0xFF, 0x1, 0x3, 0x3 }, 0xA };
TeamTactics teamTacticsDefend = { { 68, 69, 70, 69, 78, 68, 0, 0, 0 }, { { { { { 0x30 }, { 0x51 }, { 0x60 }, { 0x51 }, { 0x60 }, { 0x31 }, { 0x41 } }, { { 0x41 }, { 0x41 }, { 0x51 }, { 0x32 }, { 0x42 }, { 0x42 }, { 0x42 } }, { { 0x51 }, { 0x33 }, { 0x43 }, { 0x43 }, { 0x43 }, { 0x52 }, { 0x35 } }, { { 0x45 }, { 0x45 }, { 0x45 }, { 0x45 }, { 0x35 }, { 0x35 }, { 0x35 } }, { { 0x35 }, { 0x35 }, { 0x37 }, { 0x37 }, { 0x37 }, { 0x37 }, { 0x37 } } } }, { { { { 0x60 }, { 0x70 }, { 0x70 }, { 0x60 }, { 0x70 }, { 0x50 }, { 0x60 } }, { { 0x60 }, { 0x60 }, { 0x70 }, { 0x51 }, { 0x61 }, { 0x61 }, { 0x61 } }, { { 0x70 }, { 0x52 }, { 0x62 }, { 0x62 }, { 0x62 }, { 0x72 }, { 0x54 } }, { { 0x64 }, { 0x64 }, { 0x64 }, { 0x64 }, { 0x64 }, { 0x64 }, { 0x64 } }, { { 0x64 }, { 0x64 }, { 0x66 }, { 0x66 }, { 0x66 }, { 0x66 }, { 0x66 } } } }, { { { { 0x70 }, { 0x80 }, { 0x71 }, { 0x70 }, { 0x80 }, { 0x70 }, { 0x80 } }, { { 0x80 }, { 0x80 }, { 0x90 }, { 0x70 }, { 0x81 }, { 0x81 }, { 0x81 } }, { { 0x91 }, { 0x72 }, { 0x82 }, { 0x82 }, { 0x82 }, { 0x92 }, { 0x84 } }, { { 0x84 }, { 0x84 }, { 0x84 }, { 0x94 }, { 0x84 }, { 0x84 }, { 0x84 } }, { { 0x84 }, { 0x84 }, { 0x86 }, { 0x86 }, { 0x86 }, { 0x86 }, { 0x86 } } } }, { { { { 0x80 }, { 0x91 }, { 0x80 }, { 0x91 }, { 0xB0 }, { 0x91 }, { 0xA1 } }, { { 0xA1 }, { 0xA1 }, { 0xB1 }, { 0x91 }, { 0xA2 }, { 0xA2 }, { 0xA2 } }, { { 0xB2 }, { 0x92 }, { 0xA3 }, { 0xA3 }, { 0xA3 }, { 0xB3 }, { 0xA5 } }, { { 0xA5 }, { 0xA5 }, { 0xA5 }, { 0xB5 }, { 0xB5 }, { 0xB5 }, { 0xB5 } }, { { 0xB5 }, { 0xB5 }, { 0xB7 }, { 0xB7 }, { 0xB7 }, { 0xB7 }, { 0xB7 } } } }, { { { { 0x21 }, { 0x31 }, { 0x31 }, { 0x31 }, { 0x31 }, { 0x12 }, { 0x22 } }, { { 0x22 }, { 0x22 }, { 0x32 }, { 0x13 }, { 0x23 }, { 0x23 }, { 0x23 } }, { { 0x32 }, { 0x14 }, { 0x24 }, { 0x24 }, { 0x24 }, { 0x33 }, { 0x16 } }, { { 0x26 }, { 0x26 }, { 0x26 }, { 0x26 }, { 0x17 }, { 0x17 }, { 0x17 } }, { { 0x17 }, { 0x17 }, { 0x19 }, { 0x19 }, { 0x19 }, { 0x19 }, { 0x19 } } } }, { { { { 0x51 }, { 0x60 }, { 0x61 }, { 0x61 }, { 0x61 }, { 0x41 }, { 0x51 } }, { { 0x62 }, { 0x72 }, { 0x82 }, { 0x24 }, { 0x44 }, { 0x54 }, { 0x64 } }, { { 0x74 }, { 0x25 }, { 0x45 }, { 0x55 }, { 0x65 }, { 0x65 }, { 0x37 } }, { { 0x47 }, { 0x57 }, { 0x67 }, { 0x77 }, { 0x38 }, { 0x48 }, { 0x58 } }, { { 0x69 }, { 0x79 }, { 0x4A }, { 0x4A }, { 0x5A }, { 0x6B }, { 0x7C } } } }, { { { { 0x81 }, { 0x81 }, { 0x81 }, { 0x80 }, { 0x91 }, { 0x62 }, { 0x72 } }, { { 0x82 }, { 0x91 }, { 0xA1 }, { 0x74 }, { 0x84 }, { 0x94 }, { 0xA4 } }, { { 0xC4 }, { 0x85 }, { 0x85 }, { 0x95 }, { 0xA5 }, { 0xC5 }, { 0x77 } }, { { 0x87 }, { 0x97 }, { 0xA7 }, { 0xB7 }, { 0x79 }, { 0x89 }, { 0x98 } }, { { 0xA8 }, { 0xB8 }, { 0x7C }, { 0x8B }, { 0x9A }, { 0xAA }, { 0xAA } } } }, { { { { 0xB1 }, { 0xB1 }, { 0xB1 }, { 0xB1 }, { 0xC1 }, { 0xB2 }, { 0xC2 } }, { { 0xC2 }, { 0xC2 }, { 0xD2 }, { 0xB2 }, { 0xC3 }, { 0xC3 }, { 0xC3 } }, { { 0xD3 }, { 0xB3 }, { 0xC4 }, { 0xC4 }, { 0xC4 }, { 0xD4 }, { 0xC6 } }, { { 0xC6 }, { 0xC6 }, { 0xC6 }, { 0xD6 }, { 0xD7 }, { 0xD7 }, { 0xD7 } }, { { 0xD7 }, { 0xD7 }, { 0xD9 }, { 0xD9 }, { 0xD9 }, { 0xD9 }, { 0xD9 } } } }, { { { { 0x62 }, { 0x72 }, { 0x72 }, { 0x72 }, { 0x82 }, { 0x34 }, { 0x54 } }, { { 0x74 }, { 0x94 }, { 0xB4 }, { 0x36 }, { 0x66 }, { 0x76 }, { 0x86 } }, { { 0xB6 }, { 0x48 }, { 0x58 }, { 0x78 }, { 0x98 }, { 0xA8 }, { 0x39 } }, { { 0x59 }, { 0x79 }, { 0x99 }, { 0xB9 }, { 0x1B }, { 0x4B }, { 0x7B } }, { { 0xAB }, { 0xDB }, { 0x1D }, { 0x4D }, { 0x7C }, { 0xAD }, { 0xDD } } } }, { { { { 0x67 }, { 0x77 }, { 0x77 }, { 0x77 }, { 0x87 }, { 0x58 }, { 0x68 } }, { { 0x78 }, { 0x88 }, { 0x98 }, { 0x5A }, { 0x6A }, { 0x7A }, { 0x8A } }, { { 0x9A }, { 0x6B }, { 0x6B }, { 0x7B }, { 0x8B }, { 0x8B }, { 0x5C } }, { { 0x6C }, { 0x7C }, { 0x8C }, { 0x9C }, { 0x7E }, { 0x6E }, { 0x7D } }, { { 0x8E }, { 0x7E }, { 0x7F }, { 0x6F }, { 0x7E }, { 0x8F }, { 0x7F } } } } }, { 0x0, 0x3, 0x3, 0x0, 0x1, 0x2, 0x2, 0x1, 0xFF, 0xFF }, 0xB };
TeamTactics * teamTacticsTable[19] = { &teamTactics442, &teamTactics541, &teamTactics451, &teamTactics532, &teamTactics352, &teamTactics433, &teamTactics424, &teamTactics343, &teamTacticsSweep, &teamTactics523, &teamTacticsAttack, &teamTacticsDefend, &teamTacticsUSERA, &teamTacticsUSERB, &teamTacticsUSERC, &teamTacticsUSERD, &teamTacticsUSERE, &teamTacticsUSERF, &editTacticsCurrentTactics };
// Multiply value of skill with this
uint8_t skillValuePonders[8] = { 0x0, 0x1, 0x3, 0x6, 0xA, 0xF, 0x15, 0x1C };
// Get from this table player price increment
uint8_t plPricesIncreaseTable[50] = { 0, 1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
uint32_t pad_12487C = 1191557;
void * plPositions = 0;
uint16_t totalSkillsFactorSum = 0;
uint16_t numPlayersAtQuadrant = 0;
uint8_t playerAgeToFormDivisorTable[50] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 5, 5, 6, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 8, 8, 8, 8, 8, 9, 9, 9, 10, 10, 12, 12, 12, 15, 15, 15, 15, 15, 15, 15 };
uint8_t playerFormDeltaRandomTable[144] = { 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 2, 1, 1, 1, 1, 0, 0, 0, 2, 1, 1, 1, 1, 1, 0, 0, 2, 1, 1, 1, 1, 1, 0, 0, 2, 2, 1, 1, 1, 1, 0, 0, 2, 2, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 2, 2, 2, 0, 0, 1, 1, 1, 2, 2, 2, 0, 1, 1, 1, 1, 2, 2, 2, 0, 1, 1, 1, 1, 2, 2, 2, 0, 1, 1, 1, 1, 2, 2, 3, 0, 1, 1, 1, 1, 2, 2, 3, 0, 1, 1, 1, 2, 2, 2, 3 };
uint16_t avgPlayerPriceHalfClamped = 0;
// Accumulates weekly running costs each financial deduction cycle.
uint32_t seasonRunningCostsAccum = 0x0;
// Accumulates weekly player wages each financial deduction cycle.
uint32_t seasonWagesAccum = 0x0;
// Accumulates gate receipt income from cup/league matches.
uint32_t seasonGateReceiptsAccum = 0;
// Counter incremented each time gate receipts are calculated for a match.
uint16_t seasonMatchReceiptsCount = 0x0;
// Counter incremented once per weekly financial deduction iteration.
uint16_t seasonWeeksDeducted = 0;
// Second accumulator for gate receipt income for a separate financial report line.
uint32_t seasonGateReceiptsAccum2 = 0;
// Second accumulator for weekly running costs.
uint32_t seasonRunningCostsAccum2 = 0;
uint8_t leagueMatchReceiptsMultiplierTable[12] = { 1, 144, 1, 44, 0, 200, 0, 150, 0, 125, 0, 100 };
uint8_t cupMatchReceiptsMultiplierTable[12] = { 3, 32, 2, 88, 1, 144, 1, 44, 0, 250, 0, 200 };
int16_t seasonReviewConfidenceDeltaTable[5] = { 50, 25, 0, -25, -50 };
int16_t nationalSelectorSeasonReviewReputationDeltaTable[5] = { 5, 2, 0, -2, -5 };
uint8_t pad_12654E[2] = { 0, 0 };
uint8_t displayedPlayerValueRandomDeltaTable[256] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 254, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255 };
uint16_t cachedViewResultTeam1Goals = 0xFFFF;
uint16_t cachedViewResultTeam2Goals = 0;
uint16_t cachedExtraTimeTeam1Goals = 0xFFFF;
uint16_t cachedExtraTimeTeam2Goals = 0;
uint16_t cachedPenaltyShootoutTeam1Score = 0xFFFF;
uint16_t cachedPenaltyShootoutTeam2Score = 0;
uint8_t pad_126A90[4] = { 0, 0, 0, 0 };
// Index with 1st color then if 2nd color bit is set -> conflict
//        gray white black orange red blue brown l.blue green yellow
// gray     x                           x           x     x
// white         x
// black               x                x    x            x
// orange                    x     x                             x
// red                       x     x         x
// blue     x          x                x           x
// brown               x           x         x
// l.blue   x                           x           x
// green    x          x                                  x
// yellow                    x                                   x
uint16_t conflictingBasicTeamColorsTable[10] = { 0x1A1, 0x2, 0x164, 0x218, 0x58, 0xA5, 0x54, 0xA1, 0x105, 0x208 };
// Gray white black orange red blue brown l.blue green yellow
// gray     x    x                      x           x     x
// white    x    x                                  x            x
// black               x                x    x            x
// orange                    x     x                             x
// red                       x     x         x
// blue     x          x                x    x      x
// brown               x           x    x    x
// l.blue   x    x                      x           x
// green    x          x                                  x
// yellow        x            x                                  x
uint16_t conflictingShortsTeamColorsTable[10] = { 0x1A3, 0x283, 0x164, 0x218, 0x58, 0xE5, 0x74, 0xA3, 0x105, 0x20A };
uint8_t kitsSimilarityLookupTable[46] = { 1, 5, 7, 1, 2, 0, 4, 5, 6, 4, 9, 3, 1, 9, 9, 1, 7, 7, 1, 0, 0, 4, 3, 3, 4, 6, 6, 4, 2, 6, 0, 5, 7, 6, 3, 4, 2, 7, 5, 9, 5, 8, 9, 7, 8, 255 };
uint8_t shirtType1  = 0;
uint8_t shirtType2  = 0;
// How similar are the colors of two teams
uint16_t similarityFactor = 0;
// Team1 prim. vs team2 prim.
// team1 prim. vs team2 sec.
// team1 sec. vs team2 prim.
// team1 sec. vs team2 sec.
uint8_t teamKitsSimilarity[4] = { 0, 0, 0, 0 };
uint16_t buildMatchResultStringControl = 0;
// Must be zero in order to start the game, if 1 SetupPlayers bails
uint16_t exitGameFlag = 0;
// Single color kit colors to try to resolve too similar team kits
uint8_t teamKitTieBreakColors[12] = { 0x4, 0x5, 0x1, 0x7, 0x9, 0x0, 0x3, 0x6, 0x8, 0x2, 0xFF, 0x0 };
// Average player price across all selected teams for balanced non-career gameplay.
uint16_t avgSelectedTeamsPlayerPrice = 0;
TeamFile * gameTeam1 = 0;
TeamFile * gameTeam2 = 0;
uint16_t gameRandValue = 0;
// Percent of average player prices, compared to
// average player prices of all selected teams
// formula: sel. teams app * 100 / this team app + 6
uint16_t team1AppPercent = 0;
uint16_t team2AppPercent = 0;
const char pad_128EDC[] = "cd_dZdUdPdKdFdAdcd_dZdUdPdKdFdAd";
uint16_t diyEditParamA = 0;
uint16_t diyEditParamB = 0;
uint16_t diyEditParamC = 0;
uint8_t diyTeamShuffleScratch[64] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
// Index mapping table {1,4,5,0,2,7,6,3} used to reorder 8 teams in DIY competition.
uint8_t diyShuffleOrder8Teams[8] = { 1, 4, 5, 0, 2, 7, 6, 3 };
// Index mapping table {0,3,1,2} used to reorder 4 teams in DIY competition.
uint8_t diyShuffleOrder4Teams[4] = { 0, 3, 1, 2 };
// Team index mapping for 16-team DIY league building.
int8_t diyLeagueTeamShuffleMap[16] = { 4, -1, 1, 5, 0, -1, 3, 11, 2, -1, 10, 9, 6, -1, 8, 7 };
// Lookup table of 15 entries mapping team group-assignment bitmasks to division ordering.
uint8_t diyGroupPatternLookup[76] = { 15, 0, 2, 3, 1, 23, 1, 2, 0, 3, 39, 1, 2, 0, 3, 27, 1, 2, 0, 3, 43, 1, 2, 0, 3, 51, 1, 2, 0, 3, 29, 0, 1, 2, 3, 45, 0, 1, 2, 3, 53, 3, 1, 0, 2, 57, 3, 1, 0, 2, 30, 0, 1, 2, 3, 46, 0, 1, 2, 3, 54, 0, 2, 1, 3, 58, 0, 2, 1, 3, 60, 3, 0, 1, 2, 255 };
// Index mapping table for reordering 8 teams in a 2-group DIY tournament.
uint8_t diyTournamentShuffleOrder8[8] = { 6, 1, 5, 4, 2, 3, 7, 0 };
uint16_t diyTournamentInitTable[20] = { 5, 24, 6, 4, 16, 0, 16, 8, 0, 8, 4, 0, 4, 2, 0, 2, 1, 1, 1, 1 };
uint8_t diyTeamGridRemapTemp[64] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint8_t diyTeamGridPairSwapTemp[64] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint16_t euroCupTitleHolderTeamId = 0;
uint16_t cupWinnersCupTitleHolderTeamId = 0;
uint16_t uefaCupTitleHolderTeamId = 0;
uint16_t cachedPrimaryQualifiedTeamIds[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t cachedSecondaryQualifiedTeamIds[3] = { 0, 0, 0 };
uint16_t cachedTertiaryQualifiedTeamId = 0;
uint8_t euroCupEligibleCompetitionIds[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t cupWinnersCupEligibleCompetitionIds[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t uefaCupEligibleCompetitionIds[33] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t currentCompetitionId  = 0;
uint16_t euroCupQualifiedTeamCount = 0;
uint16_t cupWinnersCupQualifiedTeamCount = 0;
uint16_t uefaCupQualifiedTeamCount = 0;
void * euroCupTeamListPtr = 0;
void * cupWinnersCupTeamListPtr = 0;
void * uefaCupTeamListPtr = 0;
uint32_t euroCupTeamListWritePtr = 0;
uint32_t cupWinnersCupTeamListWritePtr = 0;
uint32_t uefaCupTeamListWritePtr = 0;
// Buffer receiving team index words during DIY league qualification processing.
uint16_t diyQualifiedTeamIndices[16] = { 0 };
CompetitionCup * cupPickOceaniaInviteFriendly[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickOceaniaOceaniaCupFriendly[5] = { &oceaniaCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickOceaniaWorldCupFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickOceaniaWorldCupInvite[5] = { &worldCup2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickOceaniaOceaniaCupNonFinalist[5] = { 0, (CompetitionCup*)-2, &oceaniaCupCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickOceaniaOceaniaCupFinalist[5] = { &oceaniaCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickNAmericaInviteFriendly[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickNAmericaNaCupFriendly[5] = { &northAmericanCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickNAmericaWorldCupFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickNAmericaWorldCupInvite[5] = { &worldCup2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickNAmericaNaCupNonFinalist[5] = { 0, (CompetitionCup*)-2, &northAmericanCupCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickNAmericaNaCupFinalist[5] = { &northAmericanCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAsiaInviteFriendly[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAsiaAsianCupFriendly[5] = { &asianCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAsiaWorldCupFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAsiaWorldCupInvite[5] = { &worldCup2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickAsiaAsianCupNonFinalist[5] = { 0, (CompetitionCup*)-2, &asianCupCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAsiaAsianCupFinalist[5] = { &asianCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAfricaInviteFriendly[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAfricaAfricanCupFriendly[5] = { &africanNationsCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAfricaWorldCupFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAfricaWorldCupInvite[5] = { &worldCup2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickAfricaAfricanCupNonFinalist[5] = { 0, (CompetitionCup*)-2, &africanNationsCupCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickAfricaAfricanCupFinalist[5] = { &africanNationsCupCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickSAmericaInviteFriendly[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickSAmericaCopaAmericaFriendly[5] = { &copaAmericaCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickSAmericaWorldCupFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickSAmericaWorldCupInvite[5] = { &worldCup2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickSAmericaCopaAmericaNonFinalist[5] = { 0, (CompetitionCup*)-2, &copaAmericaCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickSAmericaCopaAmericaFinalist[5] = { &copaAmericaCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * ecQualifyingGroupsTable[8] = { &ecQualifyingGroup1Copy, &ecQualifyingGroup2Copy, &ecQualifyingGroup3Copy, &ecQualifyingGroup4Copy, &ecQualifyingGroup5Copy, &ecQualifyingGroup6Copy, &ecQualifyingGroup7Copy, &ecQualifyingGroup8Copy };
CompetitionCup * cupPickEuropeNoCupFriendly[5] = { 0, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickListEuropeInviteTournamentFriendly[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickLisEuropeEuroChampsFriendly[5] = { &europeanChampionships2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickListEuropeEuroChampsInviteFriendly[5] = { &europeanChampionships2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickListEuropeWorldCupFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickLisEuropeWorldCupInviteFriendly[5] = { &worldCup2Copy, (CompetitionCup*)-2, &invitationTournamentCopy, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * cupPickEuropeNoCupFriendlyAlt[5] = { 0, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * cupPickListEuropeInviteTournamentFriendlyAlt[5] = { &invitationTournamentCopy, (CompetitionCup*)-2, &friendlyCopy, (CompetitionCup*)-1, 0 };
CompetitionCup * worldCupQualifyingGroupsTable[8] = { &worldCupQualifyingGroup1Copy, &worldCupQualifyingGroup2Copy, &worldCupQualifyingGroup3Copy, &worldCupQualifyingGroup4Copy, &worldCupQualifyingGroup5Copy, &worldCupQualifyingGroup6Copy, &worldCupQualifyingGroup7Copy, &worldCupQualifyingGroup8Copy };
char * tourStringTable[6] = { aEuropeanTour, aAfricanTour, aSouthAmericanT, aNorthAmericanT, aAsianTour, aOceaniaTour };
uint16_t competitionTeamIdScratchList4[4] = { 0, 0, 0, 0 };
char * careerTeamFlagsByRegionTable[6] = { careerTeamFlagsBySeason0, careerTeamFlagsBySeason1, careerTeamFlagsBySeason1, careerTeamFlagsBySeason1, careerTeamFlagsBySeason1, careerTeamFlagsBySeason1 };
uint16_t diyFoundTeamIndex = 0;
// Boolean flag for whether the DIY competition has a group/seeded stage.
uint16_t diyCompHasGroupStage = 0;
uint16_t findTeamInDIY_SuppressSideEffectsFlag = 0;
uint16_t careerAutoAdvanceInProgress = 0;
uint16_t pl1Coach = 0;
uint16_t pl2Coach = 0;
uint16_t topTeamCoachNo = 0;
uint16_t bottomTeamCoachNo = 0;
uint16_t topTeamPlayerNo = 0;
uint16_t bottomTeamPlayerNo = 0;
uint16_t plgD0Param = 0;
uint16_t isGameFriendly = 0;
uint16_t playing2ndGame = 0;
uint16_t secondLeg = 0;
uint16_t gamePitchTypeOrSeason = 0;
uint16_t gamePitchType = 0;
uint16_t gameSeason = 0;
uint16_t gameCanceled = 0;
uint16_t pl1Tactics = 0;
uint16_t pl2Tactics = 0;
uint16_t team1Computer = 0;
uint16_t team2Computer = 0;
uint16_t gameLengthInGame = 0;
uint16_t extraTimeState = 0;
uint16_t penaltiesState = 0;
uint16_t team1GoalsFirstLeg = 0;
uint16_t team2GoalsFirstLeg = 0;
uint16_t team1PenaltyGoals = 0;
uint16_t team2PenaltyGoals = 0;
uint16_t maxSubsPerTeam = 0;
uint16_t gameMaxSubstitutes = 0;
uint16_t plgD3Param = 0;
uint16_t hilStarted = 0;
uint16_t team1NumAllowedInjuries = 0;
uint16_t team2NumAllowedInjuries = 0;
uint8_t animPatternsRandomTable[64] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 0 };
uint16_t animatedPatterns[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t patternsGoalCounter = 0;
uint16_t showFansCounter = 0;
uint16_t animPatternsIndex = 0;
uint16_t patternStatic = 0;
uint16_t otherTeamScored = 0;
uint16_t animPatternsState = 0;
uint16_t trainingGame = 0;
uint8_t teamAName[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t teamBName[17] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t * trainingPosOrderTables[8] = { trainingPosOrder0, trainingPosOrder1, trainingPosOrder2, trainingPosOrder3, trainingPosOrder4, trainingPosOrder5, trainingPosOrder6, trainingPosOrder7 };
// Training position priority order for outfield position 0, 0xFF-terminated.
uint8_t trainingPosOrder0[9] = { 0x0, 0x3, 0x6, 0x7, 0x1, 0x2, 0x4, 0x5, 0xFF };
// Training position priority order for outfield position 1, 0xFF-terminated.
uint8_t trainingPosOrder1[9] = { 0x1, 0x3, 0x4, 0x6, 0x7, 0x2, 0x5, 0x0, 0xFF };
// Training position priority order for outfield position 2, 0xFF-terminated.
uint8_t trainingPosOrder2[9] = { 0x2, 0x3, 0x5, 0x6, 0x7, 0x1, 0x4, 0x0, 0xFF };
// Training position priority order for outfield position 3, 0xFF-terminated.
uint8_t trainingPosOrder3[9] = { 0x3, 0x1, 0x2, 0x6, 0x7, 0x4, 0x5, 0x0, 0xFF };
// Training position priority order for outfield position 4, 0xFF-terminated.
uint8_t trainingPosOrder4[9] = { 0x4, 0x6, 0x7, 0x1, 0x3, 0x5, 0x2, 0x0, 0xFF };
// Training position priority order for outfield position 5, 0xFF-terminated.
uint8_t trainingPosOrder5[9] = { 0x5, 0x6, 0x7, 0x2, 0x3, 0x4, 0x1, 0x0, 0xFF };
// Training position priority order for outfield position 6, 0xFF-terminated.
uint8_t trainingPosOrder6[9] = { 0x6, 0x4, 0x5, 0x3, 0x7, 0x1, 0x2, 0x0, 0xFF };
// Training position priority order for outfield position 7, 0xFF-terminated.
uint8_t trainingPosOrder7[9] = { 0x7, 0x6, 0x4, 0x5, 0x3, 0x1, 0x2, 0x0, 0xFF };
int8_t trialPlayerPositionTable[12] = { 3, 3, 6, 6, 7, 7, 0, 1, 2, 4, 5, 0 };
// On init function
Menu_ChooseTeamsFriendly chooseTeamsFriendlyMenu = { { ChooseTeamsFriendlyInitFinish, ChooseTeamsFriendlyInitFinish, 0, 23 }, { 2, 0, 300, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 20, 35, 19, 9 }, { MENU_CMD_COLORS, { 0xA } }, MENU_CMD_END }, { { 120, 35, 19, 9 }, { MENU_CMD_COLORS, { 0xB } }, MENU_CMD_END }, { { -36, 35, 19, 9 }, { MENU_CMD_COLORS, { 0xD } }, MENU_CMD_END } }, { { { 45, 35, 0, 11 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aComputer }, MENU_CMD_END }, { { -111, 35, 0, 11 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aPlayerCoach }, MENU_CMD_END }, { { -11, 35, 0, 11 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aCoach }, MENU_CMD_END } }, { MENU_MARK_START_MENU, 0, 16 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x6 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamsFriendlyCommon2 }, MENU_CMD_END, { { 1, 21, 100, 9 }, { MENU_CMD_NAV, -1, 23, -1, 8 }, { MENU_CMD_LEFT_SKIP, 38, 2 }, MENU_CMD_END }, { { { 1, 31, 100, 9 }, { MENU_CMD_NAV, -1, 24, 7, 9 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 41, 100, 9 }, { MENU_CMD_NAV, -1, 25, 8, 10 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 51, 100, 9 }, { MENU_CMD_NAV, -1, 26, 9, 11 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 61, 100, 9 }, { MENU_CMD_NAV, -1, 27, 10, 12 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 71, 100, 9 }, { MENU_CMD_NAV, -1, 28, 11, 13 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 81, 100, 9 }, { MENU_CMD_NAV, -1, 29, 12, 14 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 91, 100, 9 }, { MENU_CMD_NAV, -1, 30, 13, 15 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 101, 100, 9 }, { MENU_CMD_NAV, -1, 31, 14, 16 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 111, 100, 9 }, { MENU_CMD_NAV, -1, 32, 15, 17 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 121, 100, 9 }, { MENU_CMD_NAV, -1, 33, 16, 18 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -125, 100, 9 }, { MENU_CMD_NAV, -1, 34, 17, 19 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -115, 100, 9 }, { MENU_CMD_NAV, -1, 35, 18, 20 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -105, 100, 9 }, { MENU_CMD_NAV, -1, 36, 19, 21 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -95, 100, 9 }, { MENU_CMD_NAV, -1, 37, 20, 22 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -85, 100, 9 }, { MENU_CMD_NAV, -1, 38, 21, 55 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END } }, { { { 102, 21, 100, 9 }, { MENU_CMD_NAV, 7, 39, -1, 24 }, MENU_CMD_END }, { { 102, 31, 100, 9 }, { MENU_CMD_NAV, 8, 40, 23, 25 }, MENU_CMD_END }, { { 102, 41, 100, 9 }, { MENU_CMD_NAV, 9, 41, 24, 26 }, MENU_CMD_END }, { { 102, 51, 100, 9 }, { MENU_CMD_NAV, 10, 42, 25, 27 }, MENU_CMD_END }, { { 102, 61, 100, 9 }, { MENU_CMD_NAV, 11, 43, 26, 28 }, MENU_CMD_END }, { { 102, 71, 100, 9 }, { MENU_CMD_NAV, 12, 44, 27, 29 }, MENU_CMD_END }, { { 102, 81, 100, 9 }, { MENU_CMD_NAV, 13, 45, 28, 30 }, MENU_CMD_END }, { { 102, 91, 100, 9 }, { MENU_CMD_NAV, 14, 46, 29, 31 }, MENU_CMD_END }, { { 102, 101, 100, 9 }, { MENU_CMD_NAV, 15, 47, 30, 32 }, MENU_CMD_END }, { { 102, 111, 100, 9 }, { MENU_CMD_NAV, 16, 48, 31, 33 }, MENU_CMD_END }, { { 102, 121, 100, 9 }, { MENU_CMD_NAV, 17, 49, 32, 34 }, MENU_CMD_END }, { { 102, -125, 100, 9 }, { MENU_CMD_NAV, 18, 50, 33, 35 }, MENU_CMD_END }, { { 102, -115, 100, 9 }, { MENU_CMD_NAV, 19, 51, 34, 36 }, MENU_CMD_END }, { { 102, -105, 100, 9 }, { MENU_CMD_NAV, 20, 52, 35, 37 }, MENU_CMD_END }, { { 102, -95, 100, 9 }, { MENU_CMD_NAV, 21, 53, 36, 38 }, MENU_CMD_END }, { { 102, -85, 100, 9 }, { MENU_CMD_NAV, 22, 54, 37, 56 }, MENU_CMD_END } }, { { -53, 21, 100, 9 }, { MENU_CMD_NAV, 23, -1, -1, 40 }, { MENU_CMD_LEFT_SKIP, 38, 2 }, MENU_CMD_END }, { { { -53, 31, 100, 9 }, { MENU_CMD_NAV, 24, -1, 39, 41 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 41, 100, 9 }, { MENU_CMD_NAV, 25, -1, 40, 42 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 51, 100, 9 }, { MENU_CMD_NAV, 26, -1, 41, 43 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 61, 100, 9 }, { MENU_CMD_NAV, 27, -1, 42, 44 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 71, 100, 9 }, { MENU_CMD_NAV, 28, -1, 43, 45 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 81, 100, 9 }, { MENU_CMD_NAV, 29, -1, 44, 46 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 91, 100, 9 }, { MENU_CMD_NAV, 30, -1, 45, 47 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 101, 100, 9 }, { MENU_CMD_NAV, 31, -1, 46, 48 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 111, 100, 9 }, { MENU_CMD_NAV, 32, -1, 47, 49 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, 121, 100, 9 }, { MENU_CMD_NAV, 33, -1, 48, 50 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, -125, 100, 9 }, { MENU_CMD_NAV, 34, -1, 49, 51 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, -115, 100, 9 }, { MENU_CMD_NAV, 35, -1, 50, 52 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, -105, 100, 9 }, { MENU_CMD_NAV, 36, -1, 51, 53 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, -95, 100, 9 }, { MENU_CMD_NAV, 37, -1, 52, 54 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END }, { { -53, -85, 100, 9 }, { MENU_CMD_NAV, 38, -1, 53, 57 }, { MENU_CMD_DOWN_SKIP, 54, 2 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 56, 22, -1 }, { { MENU_CMD_UP_SKIP, 55, 2 }, { MENU_CMD_RIGHT_SKIP, 55, 1 } }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewSelectedTe }, { MENU_CMD_ONSELECT_FIRE, ViewSelected }, MENU_CMD_END, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 55, 57, 38, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitChooseTeams2 }, MENU_CMD_END }, { -72, -71, 120, 15 }, { MENU_CMD_NAV, 56, -1, 54, -1 }, { { MENU_CMD_DOWN_SKIP, 57, 2 }, { MENU_CMD_RIGHT_SKIP, 57, 0 } }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamsPlayMatchSelected }, MENU_CMD_END, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
// Array of menu item indices (58, 57, 55, 0, -1) for the Bureaucracy menu screen.
int16_t bureaucracyMenuItems[5] = { 58, 57, 55, 0, -1 };
uint16_t chooseTeamsFriendly_leftListNumEntries = 0;
uint16_t chooseTeamsFriendly_middleListNumEntries = 0;
uint16_t chooseTeamsFriendly_rightListNumEntries = 0;
uint16_t chooseTeamsFriendly_numTeamsInLeagueList = 0;
uint16_t chooseTeamsFriendly_menuTopY = 0;
uint16_t chooseTeamsFriendly_menuBottomY = 0;
// Pointer to currently selected team
TeamFile * selectedTeamPtr = 0;
// Country number of currently selected team
uint16_t selectedTeamCountryNumber = 0;
// When loading team files, 0 means error
// when selecting teams 0 means exiting, 1 = play match
// in SelectTeamsFinalMenu: 0 = continue, !0 = abort
uint16_t chooseTeamsResult = 0;
// Write only
uint16_t changeTeams = 0;
// These vars get set to 0 when selecting teams
// from list just before the game
uint16_t viewSelectedTeams = 0;
// = 1 When exit choose teams
uint16_t abortSelectTeams = 0;
uint16_t exitSelectTeams = 0;
// On init function
Menu_ChooseTeamsFriendly2 chooseTeamsFriendlyMenu2 = { { ChooseTeamsFriendlyInit, 0, 0, 0x1E }, { 2, 0, 300, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, 0, 20, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END, { { { 20, 35, 19, 9 }, { MENU_CMD_COLORS, { 0xA } }, MENU_CMD_END }, { { 120, 35, 19, 9 }, { MENU_CMD_COLORS, { 0xB } }, MENU_CMD_END }, { { -36, 35, 19, 9 }, { MENU_CMD_COLORS, { 0xD } }, MENU_CMD_END } }, { { { 45, 35, 0, 11 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aComputer }, MENU_CMD_END }, { { -111, 35, 0, 11 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aPlayerCoach }, MENU_CMD_END }, { { -11, 35, 0, 11 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aCoach }, MENU_CMD_END } }, { MENU_MARK_START_MENU, 0, -1 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x6 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamsFriendlyCommon }, MENU_CMD_END, { { 1, 21, 100, 8 }, { MENU_CMD_NAV, -1, 30, -1, 9 }, { MENU_CMD_LEFT_SKIP, 51, 2 }, MENU_CMD_END }, { { { 1, 30, 100, 8 }, { MENU_CMD_NAV, -1, 31, 8, 10 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 39, 100, 8 }, { MENU_CMD_NAV, -1, 32, 9, 11 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 48, 100, 8 }, { MENU_CMD_NAV, -1, 33, 10, 12 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 57, 100, 8 }, { MENU_CMD_NAV, -1, 34, 11, 13 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 66, 100, 8 }, { MENU_CMD_NAV, -1, 35, 12, 14 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 75, 100, 8 }, { MENU_CMD_NAV, -1, 36, 13, 15 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 84, 100, 8 }, { MENU_CMD_NAV, -1, 37, 14, 16 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 93, 100, 8 }, { MENU_CMD_NAV, -1, 38, 15, 17 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 102, 100, 8 }, { MENU_CMD_NAV, -1, 39, 16, 18 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 111, 100, 8 }, { MENU_CMD_NAV, -1, 40, 17, 19 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, 120, 100, 8 }, { MENU_CMD_NAV, -1, 41, 18, 20 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -127, 100, 8 }, { MENU_CMD_NAV, -1, 42, 19, 21 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -118, 100, 8 }, { MENU_CMD_NAV, -1, 43, 20, 22 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -109, 100, 8 }, { MENU_CMD_NAV, -1, 44, 21, 23 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -100, 100, 8 }, { MENU_CMD_NAV, -1, 45, 22, 24 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -91, 100, 8 }, { MENU_CMD_NAV, -1, 46, 23, 25 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -82, 100, 8 }, { MENU_CMD_NAV, -1, 47, 24, 26 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -73, 100, 8 }, { MENU_CMD_NAV, -1, 48, 25, 27 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -64, 100, 8 }, { MENU_CMD_NAV, -1, 49, 26, 28 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -55, 100, 8 }, { MENU_CMD_NAV, -1, 50, 27, 29 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END }, { { 1, -46, 100, 8 }, { MENU_CMD_NAV, -1, 51, 28, 74 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END } }, { { { 102, 21, 100, 8 }, { MENU_CMD_NAV, 8, 52, -1, 31 }, MENU_CMD_END }, { { 102, 30, 100, 8 }, { MENU_CMD_NAV, 9, 53, 30, 32 }, MENU_CMD_END }, { { 102, 39, 100, 8 }, { MENU_CMD_NAV, 10, 54, 31, 33 }, MENU_CMD_END }, { { 102, 48, 100, 8 }, { MENU_CMD_NAV, 11, 55, 32, 34 }, MENU_CMD_END }, { { 102, 57, 100, 8 }, { MENU_CMD_NAV, 12, 56, 33, 35 }, MENU_CMD_END }, { { 102, 66, 100, 8 }, { MENU_CMD_NAV, 13, 57, 34, 36 }, MENU_CMD_END }, { { 102, 75, 100, 8 }, { MENU_CMD_NAV, 14, 58, 35, 37 }, MENU_CMD_END }, { { 102, 84, 100, 8 }, { MENU_CMD_NAV, 15, 59, 36, 38 }, MENU_CMD_END }, { { 102, 93, 100, 8 }, { MENU_CMD_NAV, 16, 60, 37, 39 }, MENU_CMD_END }, { { 102, 102, 100, 8 }, { MENU_CMD_NAV, 17, 61, 38, 40 }, MENU_CMD_END }, { { 102, 111, 100, 8 }, { MENU_CMD_NAV, 18, 62, 39, 41 }, MENU_CMD_END }, { { 102, 120, 100, 8 }, { MENU_CMD_NAV, 19, 63, 40, 42 }, MENU_CMD_END }, { { 102, -127, 100, 8 }, { MENU_CMD_NAV, 20, 64, 41, 43 }, MENU_CMD_END }, { { 102, -118, 100, 8 }, { MENU_CMD_NAV, 21, 65, 42, 44 }, MENU_CMD_END }, { { 102, -109, 100, 8 }, { MENU_CMD_NAV, 22, 66, 43, 45 }, MENU_CMD_END }, { { 102, -100, 100, 8 }, { MENU_CMD_NAV, 23, 67, 44, 46 }, MENU_CMD_END }, { { 102, -91, 100, 8 }, { MENU_CMD_NAV, 24, 68, 45, 47 }, MENU_CMD_END }, { { 102, -82, 100, 8 }, { MENU_CMD_NAV, 25, 69, 46, 48 }, MENU_CMD_END }, { { 102, -73, 100, 8 }, { MENU_CMD_NAV, 26, 70, 47, 49 }, MENU_CMD_END }, { { 102, -64, 100, 8 }, { MENU_CMD_NAV, 27, 71, 48, 50 }, MENU_CMD_END }, { { 102, -55, 100, 8 }, { MENU_CMD_NAV, 28, 72, 49, 51 }, MENU_CMD_END }, { { 102, -46, 100, 8 }, { MENU_CMD_NAV, 29, 73, 50, 75 }, MENU_CMD_END } }, { { -53, 21, 100, 8 }, { MENU_CMD_NAV, 30, -1, -1, 53 }, { MENU_CMD_LEFT_SKIP, 51, 2 }, MENU_CMD_END }, { { { -53, 30, 100, 8 }, { MENU_CMD_NAV, 31, -1, 52, 54 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 39, 100, 8 }, { MENU_CMD_NAV, 32, -1, 53, 55 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 48, 100, 8 }, { MENU_CMD_NAV, 33, -1, 54, 56 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 57, 100, 8 }, { MENU_CMD_NAV, 34, -1, 55, 57 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 66, 100, 8 }, { MENU_CMD_NAV, 35, -1, 56, 58 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 75, 100, 8 }, { MENU_CMD_NAV, 36, -1, 57, 59 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 84, 100, 8 }, { MENU_CMD_NAV, 37, -1, 58, 60 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 93, 100, 8 }, { MENU_CMD_NAV, 38, -1, 59, 61 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 102, 100, 8 }, { MENU_CMD_NAV, 39, -1, 60, 62 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 111, 100, 8 }, { MENU_CMD_NAV, 40, -1, 61, 63 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, 120, 100, 8 }, { MENU_CMD_NAV, 41, -1, 62, 64 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -127, 100, 8 }, { MENU_CMD_NAV, 42, -1, 63, 65 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -118, 100, 8 }, { MENU_CMD_NAV, 43, -1, 64, 66 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -109, 100, 8 }, { MENU_CMD_NAV, 44, -1, 65, 67 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -100, 100, 8 }, { MENU_CMD_NAV, 45, -1, 66, 68 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -91, 100, 8 }, { MENU_CMD_NAV, 46, -1, 67, 69 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -82, 100, 8 }, { MENU_CMD_NAV, 47, -1, 68, 70 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -73, 100, 8 }, { MENU_CMD_NAV, 48, -1, 69, 71 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -64, 100, 8 }, { MENU_CMD_NAV, 49, -1, 70, 72 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -55, 100, 8 }, { MENU_CMD_NAV, 50, -1, 71, 73 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END }, { { -53, -46, 100, 8 }, { MENU_CMD_NAV, 51, -1, 72, 76 }, { MENU_CMD_DOWN_SKIP, 73, 2 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 75, 29, -1 }, { { MENU_CMD_UP_SKIP, 74, 2 }, { MENU_CMD_RIGHT_SKIP, 74, 1 } }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, ChangeTeams }, MENU_CMD_END, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 74, 76, 51, -1 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAbort }, { MENU_CMD_ONSELECT_FIRE, AbortChooseTeamsFriendly }, MENU_CMD_END }, { -72, -71, 120, 15 }, { MENU_CMD_NAV, 75, -1, 73, -1 }, { { MENU_CMD_DOWN_SKIP, 76, 2 }, { MENU_CMD_RIGHT_SKIP, 76, 0 } }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamsFriendlyOnSelect76 }, MENU_CMD_END, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
uint32_t chooseTeamsFriendly_changeTeamsPromptDrawList[2] = { 0x4D004C, 0x4AFFFF };
// Number of teams in columns 1 when selecting teams
uint16_t viewTeamsColumn1 = 0;
uint16_t viewTeamsColumn2 = 0;
uint16_t viewTeamsColumn3 = 0;
uint16_t selTeamsUpperBound = 0;
// Y coordinate for start of teams
uint16_t viewTeamsStartY = 0;
uint16_t viewTeamsAbortY = 0;
// For every team that is copied into array below,
// its index is copied here.
uint8_t teamNumbersIndices[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t numSelectedTeamsCopy = 0;
// On init function
Menu_DesignDIYLeague designDiyLeagueMenu = { { DesignDIYLeagueInit, DesignDIYLeagueFinish, 0, 13 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDesignDiyLeagu }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, (int8_t*)0x2DEF4 }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 8 }, MENU_MARK_BYTE_COORDS, { { 31, 20, -15, 15 }, { MENU_CMD_NAV, -1, -1, -1, 9 }, { MENU_CMD_COLORS, { 0x1D } }, { MENU_CMD_TEXT_PTR, { 0x0 }, (int8_t*)0x2DEF4 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueSetName }, MENU_CMD_END }, { { { 31, 60, 120, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aNumberOfTeams }, MENU_CMD_END }, { { 31, 80, 120, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlayEachTeam }, MENU_CMD_END }, { { 31, 100, 120, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPointsForAWin }, MENU_CMD_END }, { { 31, 120, 120, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSubstitutes }, MENU_CMD_END }, { { -63, 120, 38, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFrom }, MENU_CMD_END } }, { { { 31, 40, 120, 15 }, { MENU_CMD_NAV, -1, 9, 2, 13 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyPitchTypeOrSeasonStrTable }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueChangePitchTypeOrSeason }, MENU_CMD_END }, { { -104, 40, 120, 15 }, { MENU_CMD_NAV, 8, 10, 2, 10 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyLeaguePitchTypeStrTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangePitchType }, MENU_CMD_END }, { { -104, 40, 50, 15 }, { MENU_CMD_NAV, 9, 12, 9, 13 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyLeagueMonthsStrTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangeStartMonth }, MENU_CMD_END } }, { { -53, 40, 18, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, asc_131FF2 }, MENU_CMD_END }, { { -34, 40, 50, 15 }, { MENU_CMD_NAV, 10, -1, 9, 13 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyLeagueEndingMonthStrTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangeEndMonth }, MENU_CMD_END }, { -104, 60, 120, 15 }, { MENU_CMD_NAV, -1, -1, 10, 14 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangeNumberOfTeams }, MENU_CMD_END, { -104, 80, 120, 15 }, { MENU_CMD_NAV, -1, -1, 13, 15 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangePlayEachTeam }, MENU_CMD_END, { -104, 100, 120, 15 }, { MENU_CMD_NAV, -1, -1, 14, 16 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangeNumPointsForWin }, MENU_CMD_END, { -104, 120, 40, 15 }, { MENU_CMD_NAV, -1, 17, 15, 21 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangeMinSubstitutes }, MENU_CMD_END, { -24, 120, 40, 15 }, { MENU_CMD_NAV, 16, -1, 15, 21 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChangeMaxSubstitutes }, MENU_CMD_END, { 31, -116, -15, 12 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { 31, -101, -15, 12 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 0 }, { { { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 22, 16, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aChooseTeams }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueChooseTeams }, MENU_CMD_END }, { { 121, -91, 62, 15 }, { MENU_CMD_NAV, -1, -1, 16, 22 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOk }, { MENU_CMD_ONSELECT_FIRE, DesignDIYLeagueOK }, MENU_CMD_END }, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 20, -1, 21, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag_6 }, MENU_CMD_END } }, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
uint32_t diyPitchTypeOrSeasonStrTable = 1254588;
uint32_t diyLeaguePitchTypeStrTable = 188198;
uint32_t diyLeagueMonthsStrTable = 1254590;
uint32_t diyLeagueEndingMonthStrTable = 1254592;
const char asc_131FF2[] = "-";
uint16_t diyPitchTypeOrSeason_1 = 0;
uint16_t diyLeagueStartingMonth = 0;
uint16_t diyLeagueEndingMonth = 0;
uint16_t diyLeagueLookOnly = 0;
uint16_t diyLeagueSelectTeams = 0;
// On init function
Menu_DIYLeagueTournament diyLeagueTournamentMenu = { { DIYLeagueTournamentInit, DIYLeagueTournamentOnRestore, 0, 1 }, { 0, 0, 304, 14 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, -68, -54, 12 }, { MENU_CMD_NAV, -1, 2, 41, -1 }, { MENU_CMD_RIGHT_SKIP, 1, 1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentNextMatch }, MENU_CMD_END, { 0, -68, -54, 12 }, { MENU_CMD_NAV, 1, 3, 41, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlayMatch }, MENU_CMD_END, { { 0, -68, 100, 12 }, { MENU_CMD_NAV, 2, 4, 41, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aMatch }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentMatch }, MENU_CMD_END }, { 77, -68, 80, 12 }, { MENU_CMD_NAV, 3, 5, 41, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewHighlights_0 }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentOnSelect4 }, MENU_CMD_END, { { { 101, -68, 101, 12 }, { MENU_CMD_NAV, 4, 6, 41, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aResult }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentResult }, MENU_CMD_END }, { { 0, -68, 100, 12 }, { MENU_CMD_NAV, 5, 7, 41, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewMatch }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentViewMatch }, MENU_CMD_END } }, { 61, -68, 90, 12 }, { MENU_CMD_NAV, 6, 8, 41, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewHighlights_0 }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentViewHighlights }, MENU_CMD_END, { { { 101, -68, 101, 12 }, { MENU_CMD_NAV, 7, 9, 41, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewResult }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentViewResult }, MENU_CMD_END }, { { -53, -68, 50, 12 }, { MENU_CMD_NAV, 8, 10, 41, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStats }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentStats }, MENU_CMD_END }, { { -2, -68, 50, 12 }, { MENU_CMD_NAV, 9, -1, 41, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentExit }, MENU_CMD_END } }, { { { -107, -77, 6, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { 0, -77, -127, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x4010 }, 0 }, MENU_CMD_END }, { { -83, -77, -127, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x8010 }, 0 }, MENU_CMD_END } }, { { { -127, -77, 18, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_NUMBER, { 0x4010 }, 0 }, MENU_CMD_END }, { { -101, -77, 18, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_NUMBER, { 0x8010 }, 0 }, MENU_CMD_END } }, { { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END }, { { 25, 0, 100, 8 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_BEFORE_DRAW, DIYLeagueTournament16BeforeDraw }, MENU_CMD_END } }, { { { 126, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPl }, MENU_CMD_END }, { { -105, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aW }, MENU_CMD_END }, { { -80, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aD }, MENU_CMD_END }, { { -55, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aL }, MENU_CMD_END }, { { -30, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aF }, MENU_CMD_END }, { { -5, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aA_0 }, MENU_CMD_END } }, MENU_MARK_WIDE_COORDS, { 276, 10, 24, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPts }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 6, 0, 22, 6 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 25, 0, 100, 6 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { { 126, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -105, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -80, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -55, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -30, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -5, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END } }, MENU_MARK_WIDE_COORDS, { 276, 0, 24, 6 }, { MENU_CMD_COLORS, { 0x7 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, 30, 8, 14 }, { MENU_CMD_NAV, -1, 1, -1, 41 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 183 }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentScrollUp }, MENU_CMD_END, { 0, -98, 8, 14 }, { MENU_CMD_NAV, -1, 1, 40, 1 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 184 }, { MENU_CMD_ONSELECT_FIRE, DIYLeagueTournamentScrollDown }, MENU_CMD_END, { 0, 0, 0, 0 }, { MENU_CMD_INPUT_FUNC, 0xFFFF, jmp_SetExitMenuFlag_7 }, MENU_CMD_END, MENU_MARK_END_MENU };
char * groupStringTable[8] = { aGroupA, aGroupB, aGroupC, aGroupD, aGroupE, aGroupF, aGroupG, aGroupH };
uint16_t diyLeagueTournament_viewOptionsAvailable = 0;
uint16_t diyLeagueTournament_fixtureRowHeight = 0;
uint16_t diyLeagueTournament_fixtureRowYStep = 0;
// For scrolling and display
uint16_t numDiyResults = 0;
// When scrolling results
uint16_t currentDiyLine = 0;
// DIY league fixture display mode: 0=hidden, 1=show current, -1=show results.
uint16_t diyFixtureViewMode = 0;
// When set, hides action menu entries and restricts to view-only mode.
uint16_t diyTournamentViewOnly = 0;
// Original competition type parameter saved by ShowDiyLeaguesTournamentMenu.
uint16_t diyTournamentType = 0;
// When set, overrides initial menu focus to entry 10, then self-clears.
uint16_t diyInitFocusOverride = 0;
// Flag set to 1 when all DIY matches in the current round have been played.
uint16_t diyAllMatchesPlayed = 0;
TeamFile * diyLeftTeamPtr = 0;
TeamFile * diyRightTeamPtr = 0;
uint16_t diyLeftTeamResult = 0;
uint16_t diyRightTeamResult = 0;
uint8_t pad_133328[2] = { 0, 0 };
// On init function
Menu_DesignDIYCup designDiyCupMenu = { { DesignDIYCupInit, DesignDIYCupReinit, DesignDIYCupOnDraw, 11 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDesignDiyCup }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, (int8_t*)0x2DEF4 }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 15 }, { 0, 5, 304, 15 }, { MENU_CMD_NAV, -1, -1, -1, 3 }, { MENU_CMD_COLORS, { 0x1D } }, { MENU_CMD_TEXT_PTR, { 0x0 }, (int8_t*)0x2DEF4 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect2 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 0, 25, 75, 15 }, { MENU_CMD_NAV, -1, 4, 2, 11 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPitchTypeOrSeasonStringTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect3 }, MENU_CMD_END }, { { 76, 25, 56, 15 }, { MENU_CMD_NAV, 3, 5, 2, 11 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPitchTypeStringTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect4 }, MENU_CMD_END }, { { 76, 25, 22, 15 }, { MENU_CMD_NAV, 4, 7, 4, 11 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupStartMonthStringTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect5 }, MENU_CMD_END } }, { { 99, 25, 10, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aHyphen }, MENU_CMD_END }, { { 110, 25, 22, 15 }, { MENU_CMD_NAV, 5, 9, 4, 11 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupEndMonthStringTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect7 }, MENU_CMD_END }, { { -123, 25, 70, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAwayGoals }, MENU_CMD_END }, { { -52, 25, 100, 15 }, { MENU_CMD_NAV, 7, -1, 2, 13 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupAwayGoalsStringTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect9 }, MENU_CMD_END }, { { 0, 45, 64, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aRounds }, MENU_CMD_END }, { 65, 45, 44, 15 }, { MENU_CMD_NAV, -1, 13, 5, 20 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect11 }, MENU_CMD_END, { { 113, 45, 70, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSubstitutes }, MENU_CMD_END }, { -72, 45, 40, 15 }, { MENU_CMD_NAV, 11, 15, 9, 21 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect13 }, MENU_CMD_END, { { -31, 45, 38, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFrom }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 264, 45, 40, 15 }, { MENU_CMD_NAV, 13, -1, 9, 22 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect15 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 58, 66, 80, 9 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTeams }, MENU_CMD_END }, { { -127, 66, 120, 9 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDescription }, MENU_CMD_END } }, { { { { 0, 78, 80, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 88, 78, 18, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 113, 78, 38, 9 }, { MENU_CMD_NAV, -1, 21, 11, 25 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupLegsStringTable0 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect20 }, MENU_CMD_END }, { { -104, 78, 72, 9 }, { MENU_CMD_NAV, 20, 22, 13, 26 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupExtraTimeStringTable0 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect21 }, MENU_CMD_END }, { { -31, 78, 79, 9 }, { MENU_CMD_NAV, 21, -1, 15, 27 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPenaltiesStringTable0 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect22 }, MENU_CMD_END } }, { { { 0, 88, 80, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 88, 88, 18, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 113, 88, 38, 9 }, { MENU_CMD_NAV, -1, 26, 20, 30 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupLegsStringTable1 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect20 }, MENU_CMD_END }, { { -104, 88, 72, 9 }, { MENU_CMD_NAV, 25, 27, 21, 31 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupExtraTimeStringTable1 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect21 }, MENU_CMD_END }, { { -31, 88, 79, 9 }, { MENU_CMD_NAV, 26, -1, 22, 32 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPenaltiesStringTable1 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect22 }, MENU_CMD_END } }, { { { 0, 98, 80, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 88, 98, 18, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 113, 98, 38, 9 }, { MENU_CMD_NAV, -1, 31, 25, 35 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupLegsStringTable2 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect20 }, MENU_CMD_END }, { { -104, 98, 72, 9 }, { MENU_CMD_NAV, 30, 32, 26, 36 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupExtraTimeStringTable2 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect21 }, MENU_CMD_END }, { { -31, 98, 79, 9 }, { MENU_CMD_NAV, 31, -1, 27, 37 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPenaltiesStringTable2 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect22 }, MENU_CMD_END } }, { { { 0, 108, 80, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 88, 108, 18, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 113, 108, 38, 9 }, { MENU_CMD_NAV, -1, 36, 30, 40 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupLegsStringTable3 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect20 }, MENU_CMD_END }, { { -104, 108, 72, 9 }, { MENU_CMD_NAV, 35, 37, 31, 41 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupExtraTimeStringTable3 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect21 }, MENU_CMD_END }, { { -31, 108, 79, 9 }, { MENU_CMD_NAV, 36, -1, 32, 42 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPenaltiesStringTable3 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect22 }, MENU_CMD_END } }, { { { 0, 118, 80, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 88, 118, 18, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 113, 118, 38, 9 }, { MENU_CMD_NAV, -1, 41, 35, 45 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupLegsStringTable4 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect20 }, MENU_CMD_END }, { { -104, 118, 72, 9 }, { MENU_CMD_NAV, 40, 42, 36, 46 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupExtraTimeStringTable4 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect21 }, MENU_CMD_END }, { { -31, 118, 79, 9 }, { MENU_CMD_NAV, 41, -1, 37, 47 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPenaltiesStringTable4 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect22 }, MENU_CMD_END } }, { { { 0, -128, 80, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 88, -128, 18, 9 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 113, -128, 38, 9 }, { MENU_CMD_NAV, -1, 46, 40, 49 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupLegsStringTable5 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect20 }, MENU_CMD_END }, { { -104, -128, 72, 9 }, { MENU_CMD_NAV, 45, 47, 41, 49 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupExtraTimeStringTable5 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect21 }, MENU_CMD_END }, { { -31, -128, 79, 9 }, { MENU_CMD_NAV, 46, -1, 42, 49 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyCupPenaltiesStringTable5 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect22 }, MENU_CMD_END } } }, { MENU_MARK_START_MENU, 0, 0 }, { { { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 50, 45, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aChooseTeams }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOnSelect48 }, MENU_CMD_END }, { { 121, -91, 62, 15 }, { MENU_CMD_NAV, -1, -1, 45, 50 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOk }, { MENU_CMD_ONSELECT_FIRE, DesignDIYCupOK }, MENU_CMD_END }, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 48, -1, 49, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag_4 }, MENU_CMD_END } }, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
uint16_t diyCupLegsChoice0 = 0;
uint16_t diyCupExtraTimeChoice0 = 0;
uint16_t diyCupPenaltiesChoice0 = 0;
uint16_t diyCupLegsChoice1 = 0;
uint16_t diyCupExtraTimeChoice1 = 0;
uint16_t diyCupPenaltiesChoice1 = 0;
uint16_t diyCupLegsChoice2 = 0;
uint16_t diyCupExtraTimeChoice2 = 0;
uint16_t diyCupPenaltiesChoice2 = 0;
uint16_t diyCupLegsChoice3 = 0;
uint16_t diyCupExtraTimeChoice3 = 0;
uint16_t diyCupPenaltiesChoice3 = 0;
uint16_t diyCupLegsChoice4 = 0;
uint16_t diyCupExtraTimeChoice4 = 0;
uint16_t diyCupPenaltiesChoice4 = 0;
uint16_t diyCupLegsChoice5 = 0;
uint16_t diyCupExtraTimeChoice5 = 0;
uint16_t diyCupPenaltiesChoice5 = 0;
uint32_t diyCupPitchTypeOrSeasonStringTable = 1261694;
uint32_t diyCupPitchTypeStringTable = 188198;
uint32_t diyCupStartMonthStringTable = 1261696;
uint32_t diyCupEndMonthStringTable = 1261698;
uint32_t diyCupAwayGoalsStringTable = 188238;
uint32_t diyCupLegsStringTable0 = 1259734;
uint32_t diyCupLegsStringTable1 = 1259740;
uint32_t diyCupLegsStringTable2 = 1259746;
uint32_t diyCupLegsStringTable3 = 1259752;
uint32_t diyCupLegsStringTable4 = 1259758;
uint32_t diyCupLegsStringTable5 = 1259764;
uint32_t diyCupExtraTimeStringTable0 = 1259736;
uint32_t diyCupExtraTimeStringTable1 = 1259742;
uint32_t diyCupExtraTimeStringTable2 = 1259748;
uint32_t diyCupExtraTimeStringTable3 = 1259754;
uint32_t diyCupExtraTimeStringTable4 = 1259760;
uint32_t diyCupExtraTimeStringTable5 = 1259766;
uint32_t diyCupPenaltiesStringTable0 = 1259738;
uint32_t diyCupPenaltiesStringTable1 = 1259744;
uint32_t diyCupPenaltiesStringTable2 = 1259750;
uint32_t diyCupPenaltiesStringTable3 = 1259756;
uint32_t diyCupPenaltiesStringTable4 = 1259762;
uint32_t diyCupPenaltiesStringTable5 = 1259768;
const char aHyphen[] = "-";
uint16_t diyCupPitchTypeOrSeasonSelection = 0;
uint16_t diyCupStartMonthIndex = 0;
uint16_t diyCupEndMonthIndex = 0;
uint16_t diyCupLookOnly = 0;
uint16_t diyCupSelectTeams = 0;
// On init function
Menu_DIYCup diyCupMenu = { { DIYCupInit, DIYCupFinish, 0, 0x1 }, { 0, 0, 304, 14 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, -68, -54, 12 }, { MENU_CMD_NAV, -1, 2, 17, -1 }, { MENU_CMD_RIGHT_SKIP, 1, 1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect1 }, MENU_CMD_END, { 0, -68, -54, 12 }, { MENU_CMD_NAV, 1, 3, 17, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlayMatch }, MENU_CMD_END, { { 0, -68, 100, 12 }, { MENU_CMD_NAV, 2, 4, 17, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aMatch }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect3 }, MENU_CMD_END }, { 77, -68, 80, 12 }, { MENU_CMD_NAV, 3, 5, 17, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewHighlights_0 }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect4 }, MENU_CMD_END, { { { 101, -68, 101, 12 }, { MENU_CMD_NAV, 4, 6, 17, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aResult }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect5 }, MENU_CMD_END }, { { 0, -68, 100, 12 }, { MENU_CMD_NAV, 5, 7, 17, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewMatch }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect6 }, MENU_CMD_END } }, { 61, -68, 90, 12 }, { MENU_CMD_NAV, 6, 8, 17, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewHighlights_0 }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect7 }, MENU_CMD_END, { { { 101, -68, 101, 12 }, { MENU_CMD_NAV, 7, 9, 17, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewResult }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect8 }, MENU_CMD_END }, { { -53, -68, 50, 12 }, { MENU_CMD_NAV, 8, 10, 17, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStats }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect9 }, MENU_CMD_END }, { { -2, -68, 50, 12 }, { MENU_CMD_NAV, 9, -1, 17, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect10 }, MENU_CMD_END } }, { { { -107, -76, 6, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { 0, -76, -127, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x4010 }, 0 }, MENU_CMD_END }, { { -83, -76, -127, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x8010 }, 0 }, MENU_CMD_END } }, { { { -127, -76, 18, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_NUMBER, { 0x4010 }, 0 }, MENU_CMD_END }, { { -101, -76, 18, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_NUMBER, { 0x8010 }, 0 }, MENU_CMD_END } }, { 0, 30, 8, 14 }, { MENU_CMD_NAV, -1, 1, -1, 17 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 183 }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect16 }, MENU_CMD_END, { 0, -91, 8, 14 }, { MENU_CMD_NAV, -1, 1, 16, 1 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 184 }, { MENU_CMD_ONSELECT_FIRE, DIYCupOnSelect17 }, MENU_CMD_END, { { { MENU_MARK_START_MENU, 0, 25 }, { { -104, 0, 0, 0 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -121, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -121, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -87, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -87, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -113, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -95, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -104, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0xE } }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 52 }, { { -104, 0, 0, 0 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -121, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -121, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -87, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -87, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -113, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -95, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -104, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0xE } }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 79 }, { { -104, 0, 0, 0 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -121, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -121, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -87, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -87, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -113, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -95, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -104, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0xE } }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 106 }, { { -104, 0, 0, 0 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -121, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -121, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -87, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -87, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -113, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -95, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -104, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0xE } }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 133 }, { { -104, 0, 0, 0 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -121, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -121, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -87, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -87, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -113, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -95, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -104, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0xE } }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 160 }, { { -104, 0, 0, 0 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -121, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -121, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -87, 0, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -87, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -113, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -95, 0, 0, 0 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -104, 10, 0, 0 }, { MENU_CMD_TEXT_NO_PTR, { 0xE } }, MENU_CMD_END } } }, { 0, 0, 0, 0 }, { MENU_CMD_INPUT_FUNC, 0xFFFF, jmp_SetExitMenuFlag_5 }, MENU_CMD_END, MENU_MARK_END_MENU };
uint16_t diyCupMatchListScrollIndex = 0;
uint16_t diyCupMenuArg0Copy = 0;
uint16_t diyCupMenuArg1 = 0;
uint16_t diyCupMenuArg0 = 0;
uint16_t diyCupMenuArg2 = 0;
char * diyCupMatchTeamNamePtr1 = 0;
char * diyCupMatchTeamNamePtr2 = 0;
uint16_t diyCupMatchListDrawModeFlag = 0;
void * diyCupLastMatchTeam1Ptr = 0;
void * diyCupLastMatchTeam2Ptr = 0;
uint16_t diyCupLastMatchScoreTeam1 = 0;
uint16_t diyCupLastMatchScoreTeam2 = 0;
// On init function
Menu_Options optionsMenu = { { OptionsMenuBeforeDraw, 0, 0, 0xD }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOptions }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, { { 10, 64, -116, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFriendlyDiyGam }, MENU_CMD_END }, { { -102, 64, -116, 11 }, { MENU_CMD_NAV, -1, -1, -1, 4 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &gameLengthStrTable }, { MENU_CMD_ONSELECT_FIRE, ChangeGameLength }, MENU_CMD_END }, { { 10, 76, -116, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFixPitchType }, MENU_CMD_END }, { { -102, 76, -116, 11 }, { MENU_CMD_NAV, -1, -1, 2, 6 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &pitchTypeStrTable }, { MENU_CMD_ONSELECT_FIRE, ChangePitchType }, MENU_CMD_END }, { { 10, 88, -116, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAutoReplays }, MENU_CMD_END }, { { -102, 88, -116, 11 }, { MENU_CMD_NAV, -1, -1, 4, 8 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &autoReplaysStrTable }, { MENU_CMD_ONSELECT_FIRE, ChangeAutoReplays }, MENU_CMD_END }, { { 10, 100, -116, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAllPlayerTeams }, MENU_CMD_END }, { { -102, 100, -116, 11 }, { MENU_CMD_NAV, -1, -1, 6, 10 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &allPlTeamsEqualStrTable }, { MENU_CMD_ONSELECT_FIRE, ChangeAllPlTeamsEqual }, MENU_CMD_END }, { { 10, 112, -116, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAutoSaveHighli }, MENU_CMD_END }, { { -102, 112, -116, 11 }, { MENU_CMD_NAV, -1, -1, 8, 12 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &autoSaveHlStrTable }, { MENU_CMD_ONSELECT_FIRE, ChangeAutoSaveHighlights }, MENU_CMD_END }, { { 10, 124, -116, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aMenuMusic }, MENU_CMD_END }, { { -102, 124, -116, 11 }, { MENU_CMD_NAV, -1, -1, 10, 13 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &menuMusicStrTable }, { MENU_CMD_ONSELECT_FIRE, ChangeMenuMusic }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 12, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_INPUT_FUNC, 0x30, ExitOptions }, MENU_CMD_END, { -104, -48, 0, 6 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSwosVersion152 }, MENU_CMD_END, MENU_MARK_END_MENU };
void * pitchTypeStrTable = &pitchType;
void * gameLengthStrTable = &gameLength;
void * autoReplaysStrTable = &autoReplays;
void * allPlTeamsEqualStrTable = &allPlayerTeamsEqual;
void * autoSaveHlStrTable = &autoSaveHighlights;
void * menuMusicStrTable = &menuMusic;
uint16_t showPrereleaseCounter = 0;
// On init function
Menu_DesignDiyTournament designDiyTournamentMenu = { { DesignDIYTournamentInit, DesignDIYTournamentReinit, DesignDIYTournamentOnDraw, 19 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDesignDiyTourn }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, (int8_t*)0x2DAD4 }, MENU_CMD_END, { 0, 17, 304, 15 }, { MENU_CMD_NAV, -1, -1, -1, 4 }, { MENU_CMD_COLORS, { 0x1D } }, { MENU_CMD_TEXT_PTR, { 0x0 }, (int8_t*)0x2DAD4 }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect2 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 0, 34, 76, 12 }, { MENU_CMD_NAV, -1, 4, 2, 19 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyPitchSeasonStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect3 }, MENU_CMD_END }, { { 77, 34, 56, 12 }, { MENU_CMD_NAV, 3, 5, 2, 5 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyPitchTypeStringTable }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect4 }, MENU_CMD_END }, { { 77, 34, 22, 12 }, { MENU_CMD_NAV, 4, 7, 4, 20 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStartMonthStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect5 }, MENU_CMD_END } }, { { 100, 34, 10, 12 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, asc_135D96 }, MENU_CMD_END }, { { 111, 34, 22, 12 }, { MENU_CMD_NAV, 5, 9, 4, 11 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyEndMonthStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect7 }, MENU_CMD_END }, { { -118, 34, 64, 12 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAwayGoals }, MENU_CMD_END }, { { -54, 34, 102, 12 }, { MENU_CMD_NAV, 7, -1, 2, 13 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyAwayGoalsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect9 }, MENU_CMD_END }, { { 53, 47, 70, 12 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSubstitutes }, MENU_CMD_END }, { 124, 47, 40, 12 }, { MENU_CMD_NAV, -1, 13, 7, 23 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect11 }, MENU_CMD_END, { { -91, 47, 38, 12 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFrom }, MENU_CMD_END }, { -52, 47, 40, 12 }, { MENU_CMD_NAV, 11, -1, 9, 25 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect13 }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 33 }, { { { 1, 29, 34, 9 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aTeams }, MENU_CMD_END }, { { -126, 29, 120, 9 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDescription }, MENU_CMD_END }, { { 83, 29, 50, 9 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSeeded }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 71 }, { { 0, 0, 6, 9 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 8, 10, 16, 8 }, { MENU_CMD_SPRITE_FG, 185 }, MENU_CMD_END }, { 8, 0, 16, 9 }, { MENU_CMD_NAV, -1, 20, 3, 31 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_INPUT_FUNC, 0x3C1, DesignDIYTournament_AdjustStageQualifiers }, MENU_CMD_END, { 25, 0, 78, 9 }, { MENU_CMD_NAV, 19, 21, 5, 32 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect20 }, MENU_CMD_END, { { 104, 0, 8, 9 }, { MENU_CMD_NAV, 20, 23, 11, 33 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStar }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect21 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 25, 10, 279, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 113, 0, 38, 9 }, { MENU_CMD_NAV, 21, 24, 11, 26 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage1LegsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect23 }, MENU_CMD_END }, { { -104, 0, 72, 9 }, { MENU_CMD_NAV, 23, 25, 11, 27 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage1ExtraTimeStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect24 }, MENU_CMD_END }, { { -31, 0, 79, 9 }, { MENU_CMD_NAV, 24, 26, 13, 28 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage1PenaltiesStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect25 }, MENU_CMD_END }, { { 113, 0, 84, 9 }, { MENU_CMD_NAV, 25, 27, 23, 35 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage1PtsForWinStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect26 }, MENU_CMD_END } }, { 0, 0, 0, 0 }, { MENU_CMD_NAV, 26, 28, 24, 36 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { { -58, 0, 106, 9 }, { MENU_CMD_NAV, 26, -1, 25, 37 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage1PlayCountStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect28 }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 90 }, { { 0, 0, 6, 9 }, { MENU_CMD_NUMBER, { 0x0 }, 2 }, MENU_CMD_END }, { { 8, 10, 16, 8 }, { MENU_CMD_SPRITE_FG, 185 }, MENU_CMD_END }, { 8, 0, 16, 9 }, { MENU_CMD_NAV, -1, 32, 19, 43 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_INPUT_FUNC, 0x3C1, DesignDIYTournament_AdjustStageQualifiers }, MENU_CMD_END, { 25, 0, 78, 9 }, { MENU_CMD_NAV, 31, 33, 20, 44 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect20 }, MENU_CMD_END, { { 104, 0, 8, 9 }, { MENU_CMD_NAV, 32, 35, 21, 45 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStar }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect21 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 25, 10, 279, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, &unk_4 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 113, 0, 38, 9 }, { MENU_CMD_NAV, 33, 36, 26, 38 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage2LegsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect23 }, MENU_CMD_END }, { { -104, 0, 72, 9 }, { MENU_CMD_NAV, 35, 37, 27, 39 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage2ExtraTimeStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect24 }, MENU_CMD_END }, { { -31, 0, 79, 9 }, { MENU_CMD_NAV, 36, 38, 28, 40 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage2PenaltiesStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect25 }, MENU_CMD_END }, { { 113, 0, 84, 9 }, { MENU_CMD_NAV, 37, 39, 35, 47 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage2PtsForWinStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect26 }, MENU_CMD_END } }, { 0, 0, 0, 0 }, { MENU_CMD_NAV, 38, 40, 36, 48 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { { -58, 0, 106, 9 }, { MENU_CMD_NAV, 38, -1, 37, 49 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage2PlayCountStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect28 }, MENU_CMD_END } }, { { { MENU_MARK_START_MENU, 0, 109 }, { { 0, 0, 6, 9 }, { MENU_CMD_NUMBER, { 0x0 }, 3 }, MENU_CMD_END }, { { 8, 10, 16, 8 }, { MENU_CMD_SPRITE_FG, 185 }, MENU_CMD_END }, { 8, 0, 16, 9 }, { MENU_CMD_NAV, -1, 44, 31, 55 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_INPUT_FUNC, 0x3C1, DesignDIYTournament_AdjustStageQualifiers }, MENU_CMD_END, { 25, 0, 78, 9 }, { MENU_CMD_NAV, 43, 45, 32, 56 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect20 }, MENU_CMD_END, { { 104, 0, 8, 9 }, { MENU_CMD_NAV, 44, 47, 33, 57 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStar }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect21 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 25, 10, 279, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 113, 0, 38, 9 }, { MENU_CMD_NAV, 45, 48, 38, 50 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage3LegsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect23 }, MENU_CMD_END }, { { -104, 0, 72, 9 }, { MENU_CMD_NAV, 47, 49, 39, 51 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage3ExtraTimeStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect24 }, MENU_CMD_END }, { { -31, 0, 79, 9 }, { MENU_CMD_NAV, 48, 50, 40, 52 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage3PenaltiesStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect25 }, MENU_CMD_END }, { { 113, 0, 84, 9 }, { MENU_CMD_NAV, 49, 51, 47, 59 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage3PtsForWinStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect26 }, MENU_CMD_END } }, { 0, 0, 0, 0 }, { MENU_CMD_NAV, 50, 52, 48, 60 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { { -58, 0, 106, 9 }, { MENU_CMD_NAV, 50, -1, 49, 61 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage3PlayCountStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect28 }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 128 }, { { 0, 0, 6, 9 }, { MENU_CMD_NUMBER, { 0x0 }, 4 }, MENU_CMD_END }, { { 8, 10, 16, 8 }, { MENU_CMD_SPRITE_FG, 185 }, MENU_CMD_END }, { 8, 0, 16, 9 }, { MENU_CMD_NAV, -1, 56, 43, 67 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_INPUT_FUNC, 0x3C1, DesignDIYTournament_AdjustStageQualifiers }, MENU_CMD_END, { 25, 0, 78, 9 }, { MENU_CMD_NAV, 55, 57, 44, 68 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect20 }, MENU_CMD_END, { { 104, 0, 8, 9 }, { MENU_CMD_NAV, 56, 59, 45, 69 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStar }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect21 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 25, 10, 279, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 113, 0, 38, 9 }, { MENU_CMD_NAV, 57, 60, 50, 62 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage4LegsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect23 }, MENU_CMD_END }, { { -104, 0, 72, 9 }, { MENU_CMD_NAV, 59, 61, 51, 63 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage4ExtraTimeStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect24 }, MENU_CMD_END }, { { -31, 0, 79, 9 }, { MENU_CMD_NAV, 60, 62, 52, 64 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage4PenaltiesStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect25 }, MENU_CMD_END }, { { 113, 0, 84, 9 }, { MENU_CMD_NAV, 61, 63, 59, 71 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage4PtsForWinStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect26 }, MENU_CMD_END } }, { 0, 0, 0, 0 }, { MENU_CMD_NAV, 62, 64, 60, 72 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { { -58, 0, 106, 9 }, { MENU_CMD_NAV, 62, -1, 61, 73 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage4PlayCountStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect28 }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 147 }, { { 0, 0, 6, 9 }, { MENU_CMD_NUMBER, { 0x0 }, 5 }, MENU_CMD_END }, { { 8, 10, 16, 8 }, { MENU_CMD_SPRITE_FG, 185 }, MENU_CMD_END }, { 8, 0, 16, 9 }, { MENU_CMD_NAV, -1, 68, 55, 79 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_INPUT_FUNC, 0x3C1, DesignDIYTournament_AdjustStageQualifiers }, MENU_CMD_END, { 25, 0, 78, 9 }, { MENU_CMD_NAV, 67, 69, 56, 80 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect20 }, MENU_CMD_END, { { 104, 0, 8, 9 }, { MENU_CMD_NAV, 68, 71, 57, 81 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStar }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect21 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 25, 10, 279, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 113, 0, 38, 9 }, { MENU_CMD_NAV, 69, 72, 62, 74 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage5LegsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect23 }, MENU_CMD_END }, { { -104, 0, 72, 9 }, { MENU_CMD_NAV, 71, 73, 63, 75 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage5ExtraTimeStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect24 }, MENU_CMD_END }, { { -31, 0, 79, 9 }, { MENU_CMD_NAV, 72, 74, 64, 76 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage5PenaltiesStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect25 }, MENU_CMD_END }, { { 113, 0, 84, 9 }, { MENU_CMD_NAV, 73, 75, 71, 83 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage5PtsForWinStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect26 }, MENU_CMD_END } }, { 0, 0, 0, 0 }, { MENU_CMD_NAV, 74, 76, 72, 84 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { { -58, 0, 106, 9 }, { MENU_CMD_NAV, 74, -1, 73, 85 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage5PlayCountStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect28 }, MENU_CMD_END } }, { { MENU_MARK_START_MENU, 0, 166 }, { { 0, 0, 6, 9 }, { MENU_CMD_NUMBER, { 0x0 }, 6 }, MENU_CMD_END }, { { 8, 10, 16, 8 }, { MENU_CMD_SPRITE_FG, 185 }, MENU_CMD_END }, { 8, 0, 16, 9 }, { MENU_CMD_NAV, -1, 80, 67, 90 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, { MENU_CMD_INPUT_FUNC, 0x3C1, DesignDIYTournament_AdjustStageQualifiers }, MENU_CMD_END, { 25, 0, 78, 9 }, { MENU_CMD_NAV, 79, 81, 68, 90 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect20 }, MENU_CMD_END, { { 104, 0, 8, 9 }, { MENU_CMD_NAV, 80, 83, 69, 90 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStar }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect21 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 25, 10, 279, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { 113, 0, 38, 9 }, { MENU_CMD_NAV, 81, 84, 74, 86 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage6LegsStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect23 }, MENU_CMD_END }, { { -104, 0, 72, 9 }, { MENU_CMD_NAV, 83, 85, 75, 87 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage6ExtraTimeStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect24 }, MENU_CMD_END }, { { -31, 0, 79, 9 }, { MENU_CMD_NAV, 84, 86, 76, 88 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage6PenaltiesStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect25 }, MENU_CMD_END }, { { 113, 0, 84, 9 }, { MENU_CMD_NAV, 85, 87, 83, 90 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage6PtsForWinStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect26 }, MENU_CMD_END } }, { 0, 0, 0, 0 }, { MENU_CMD_NAV, 86, 88, 84, 91 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { { -58, 0, 106, 9 }, { MENU_CMD_NAV, 86, -1, 85, 91 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &diyStage6PlayCountStrTab }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect28 }, MENU_CMD_END } } }, { MENU_MARK_START_MENU, 0, 0 }, { { { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 90, 79, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aChooseTeams }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect89 }, MENU_CMD_END }, { { 89, -71, 62, 15 }, { MENU_CMD_NAV, 89, 91, 86, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOk }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOK }, MENU_CMD_END }, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 90, -1, 87, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, DesignDIYTournamentOnSelect91 }, MENU_CMD_END } }, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
DIYStage diyTournamentStages[6] = { { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 } };
const char asc_135D96[] = "-";
const char aStar[] = "*";
const char asc_135D9A[] = "-";
// Menu string table for DIY pitch type vs season toggle.
uint32_t diyPitchSeasonStrTab = 1273106;
uint32_t diyPitchTypeStringTable = 187142;
// Menu string table for DIY tournament start month.
uint32_t diyStartMonthStrTab = 1273108;
// Menu string table for DIY tournament end month.
uint32_t diyEndMonthStrTab = 1273110;
// Menu string table for DIY away goals rule.
uint32_t diyAwayGoalsStrTab = 0x2DB1A;
// Menu string table for stage 1 legs option.
uint32_t diyStage1LegsStrTab = 1269082;
// Menu string table for stage 2 legs option.
uint32_t diyStage2LegsStrTab = 0x135D64;
// Menu string table for stage 3 legs option.
uint32_t diyStage3LegsStrTab = 0x135D6E;
// Menu string table for stage 4 legs option.
uint32_t diyStage4LegsStrTab = 0x135D78;
// Menu string table for stage 5 legs option.
uint32_t diyStage5LegsStrTab = 0x135D82;
// Menu string table for stage 6 legs option.
uint32_t diyStage6LegsStrTab = 0x135D8C;
uint32_t diyStage1ExtraTimeStrTab = 1269084;
uint32_t diyStage2ExtraTimeStrTab = 0x135D66;
uint32_t diyStage3ExtraTimeStrTab = 0x135D70;
uint32_t diyStage4ExtraTimeStrTab = 0x135D7A;
uint32_t diyStage5ExtraTimeStrTab = 0x135D84;
uint32_t diyStage6ExtraTimeStrTab = 0x135D8E;
uint32_t diyStage1PenaltiesStrTab = 1269086;
uint32_t diyStage2PenaltiesStrTab = 0x135D68;
uint32_t diyStage3PenaltiesStrTab = 0x135D72;
uint32_t diyStage4PenaltiesStrTab = 0x135D7C;
uint32_t diyStage5PenaltiesStrTab = 0x135D86;
uint32_t diyStage6PenaltiesStrTab = 0x135D90;
uint32_t diyStage1PtsForWinStrTab = 1269088;
uint32_t diyStage2PtsForWinStrTab = 0x135D6A;
uint32_t diyStage3PtsForWinStrTab = 0x135D74;
uint32_t diyStage4PtsForWinStrTab = 0x135D7E;
uint32_t diyStage5PtsForWinStrTab = 0x135D88;
uint32_t diyStage6PtsForWinStrTab = 0x135D92;
uint32_t diyStage1PlayCountStrTab = 1269090;
uint32_t diyStage2PlayCountStrTab = 0x135D6C;
uint32_t diyStage3PlayCountStrTab = 0x135D76;
uint32_t diyStage4PlayCountStrTab = 0x135D80;
uint32_t diyStage5PlayCountStrTab = 0x135D8A;
uint32_t diyStage6PlayCountStrTab = 0x135D94;
uint16_t diyTournamentUseSeasonalPitchEffective = 0;
uint16_t diyTournamentStartMonthPage = 0;
uint16_t diyTournamentEndMonthPage = 0;
uint16_t diyTournamentLookOnly = 0;
uint16_t diyTournamentSelectTeams = 0;
void * diyTournamentSelectedStagePtr = 0;
uint16_t diyTournamentSelectedStageIndex1Based = 0;
uint16_t diyTournamentPrevValueBackup = 0;
// On init function
uint32_t diyCompetitionMenu = 0;
// 0  - League
// 1  - cup
// 2  - tournament
// -1 - leave DIY menu
uint16_t diySelected = 0;
uint8_t pad_136DFA[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// On init function
Menu_FriendlyGame friendlyGameMenu = { { FriendlyMenuInit, FriendlyMenuReinit, 0, 8 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFriendly_1 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 10 }, { { 31, 70, 120, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSubstitutes }, MENU_CMD_END }, { { -63, 70, 38, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFrom }, MENU_CMD_END }, { { 31, 50, 120, 15 }, { MENU_CMD_NAV, -1, 4, -1, 5 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &pitchTypeOrSeasonTable }, { MENU_CMD_ONSELECT_FIRE, PitchTypeOrSeasonProc }, MENU_CMD_END }, { { -104, 50, 120, 15 }, { MENU_CMD_NAV, 3, -1, -1, 5 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &friendlyPitchTypeTable }, { MENU_CMD_ONSELECT_FIRE, FriendlyPitchTypeProc }, MENU_CMD_END }, { -104, 70, 40, 15 }, { MENU_CMD_NAV, -1, 6, 4, 8 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, MinSubstitutes }, MENU_CMD_END, { -24, 70, 40, 15 }, { MENU_CMD_NAV, 5, -1, 4, 8 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, MaxSubstitutes }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 0 }, { { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 9, 5, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aChooseTeams }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamsMenu }, MENU_CMD_END }, { { 121, -91, 62, 15 }, { MENU_CMD_NAV, -1, -1, 5, 9 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOk }, { MENU_CMD_ONSELECT_FIRE, FriendlyOK }, MENU_CMD_END }, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 7, -1, 8, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmpSetExitMenuFlag }, MENU_CMD_END }, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
uint32_t pitchTypeOrSeasonTable = 1274578;
uint32_t friendlyPitchTypeTable = 1274580;
uint32_t friendly_season_table = 1274582;
// Initialised to 0
// set to 1 when ok is selected in friendly game menu
uint16_t friendlyOk = 0;
// 0 = Pitch type
// 1 = season
// (in menu)
uint16_t pitchTypeOrSeason = 0;
// -1 = Random
//  0 = frozen
//  1 = muddy
//  2 = wet
//  3 = soft
//  4 = normal
//  5 = dry
//  6 = hard
uint16_t friendlyPitchType = 0;
// 0  = JAN
// 1  = FEB
// 2  = MAR
// 3  = APR
// 4  = MAY
// 5  = JUN
// 6  = JUL
// 7  = AUG
// 8  = SEP
// 9  = OCT
// 10 = NOV
// 11 = DEC
uint16_t friendlySeason = 0;
uint16_t minSubstitutes = 0;
uint16_t maxSubstitutes = 0;
// On init function
Menu_EditTeams editTeamsMenu = { { EditTeamsInit, EditTeamsFinish, 0, 0 }, MENU_MARK_BYTE_COORDS, { { 0, 0, -63, 12 }, { MENU_CMD_NAV, -1, 5, -1, 39 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectTeamName }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 274, 0, 30, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 0, -74, 55, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aCoach_3 }, MENU_CMD_END }, { { 0, -66, -114, 10 }, { MENU_CMD_NAV, -1, 20, 54, -1 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectCoachName }, MENU_CMD_END }, { MENU_MARK_START_MENU, 211, 21 }, { { 23, 0, 0, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aFirstKit }, MENU_CMD_END }, { 0, 7, 46, 33 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_COPY, editTeamsPrimaryShirts }, { MENU_CMD_NAV, 41, 13, 0, 6 }, { MENU_CMD_INPUT_FUNC, 0x3C1, EditTeamsChangeShirtsPrimary }, MENU_CMD_END, { 0, 40, 46, 19 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_COPY, editTeamsShorts }, { MENU_CMD_NAV, 43, 14, 5, 7 }, { MENU_CMD_INPUT_FUNC, 0x3C1, EditTeamsChangeShortsPrimary }, MENU_CMD_END, { 0, 59, 46, 19 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_COPY, editTeamsSocks }, { MENU_CMD_NAV, 45, 15, 6, 9 }, { MENU_CMD_INPUT_FUNC, 0x3C1, EditTeamsChangeSocksPrimary }, MENU_CMD_END, { MENU_MARK_START_MENU, 211, 101 }, { { 23, 0, 0, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSecondKit }, MENU_CMD_END }, { 0, 7, 46, 33 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_COPY, editTeamsSecondaryShirt }, { MENU_CMD_NAV, 49, 17, 7, 10 }, { MENU_CMD_INPUT_FUNC, 0x3C1, EditTeamsChangeShirtsSecondary }, MENU_CMD_END, { 0, 40, 46, 19 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_COPY, editTeamsSecondaryShorts }, { MENU_CMD_NAV, 51, 18, 9, 11 }, { MENU_CMD_INPUT_FUNC, 0x3C1, EditTeamsChangeShortsSecondary }, MENU_CMD_END, { 0, 59, 46, 19 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_COPY, editTeamsSecondarySocks }, { MENU_CMD_NAV, 53, 19, 10, 22 }, { MENU_CMD_INPUT_FUNC, 0x3C1, EditTeamsChangeSocksSecondary }, MENU_CMD_END, { MENU_MARK_START_MENU, 272, 24 }, { 0, 0, 24, 18 }, { MENU_CMD_NAV, 5, -1, 0, 13 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 199 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectPrimaryShirtType }, MENU_CMD_END, { 0, 19, 24, 18 }, { MENU_CMD_NAV, 5, -1, 12, 14 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 200 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectPrimaryShirtType }, MENU_CMD_END, { 0, 38, 24, 18 }, { MENU_CMD_NAV, 6, -1, 13, 15 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 201 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectPrimaryShirtType }, MENU_CMD_END, { 0, 57, 24, 18 }, { MENU_CMD_NAV, 7, -1, 14, 16 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 202 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectPrimaryShirtType }, MENU_CMD_END, { MENU_MARK_START_MENU, 272, 104 }, { 0, 0, 24, 18 }, { MENU_CMD_NAV, 9, -1, 15, 17 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 199 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectSecondaryShirtType }, MENU_CMD_END, { 0, 19, 24, 18 }, { MENU_CMD_NAV, 9, -1, 16, 18 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 200 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectSecondaryShirtType }, MENU_CMD_END, { 0, 38, 24, 18 }, { MENU_CMD_NAV, 10, -1, 17, 19 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 201 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectSecondaryShirtType }, MENU_CMD_END, { 0, 57, 24, 18 }, { MENU_CMD_NAV, 11, -1, 18, 21 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_SPRITE_FG, 202 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsSelectSecondaryShirtType }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 0 }, { { -92, -71, 40, 15 }, { MENU_CMD_NAV, 3, 22, 54, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aImport }, { MENU_CMD_ONSELECT_FIRE, ImportTeamsMenu }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 264, 185, 40, 15 }, { MENU_CMD_NAV, 22, -1, 19, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOk }, { MENU_CMD_ONSELECT_FIRE, EditTeamsOK }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { -42, -71, 40, 15 }, { MENU_CMD_NAV, 20, 21, 11, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aUndo }, { MENU_CMD_ONSELECT_FIRE, EditTeamsUndo }, MENU_CMD_END }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_BEFORE_DRAW, EditTeamsPlayersBeforeDraw }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 22 }, { 0, 0, 10, 8 }, { MENU_CMD_NAV, -1, 39, 0, 24 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 10, 10, 8 }, { MENU_CMD_NAV, -1, 40, 23, 25 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 20, 10, 8 }, { MENU_CMD_NAV, -1, 41, 24, 26 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 30, 10, 8 }, { MENU_CMD_NAV, -1, 42, 25, 27 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 40, 10, 8 }, { MENU_CMD_NAV, -1, 43, 26, 28 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 50, 10, 8 }, { MENU_CMD_NAV, -1, 44, 27, 29 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 60, 10, 8 }, { MENU_CMD_NAV, -1, 45, 28, 30 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 70, 10, 8 }, { MENU_CMD_NAV, -1, 46, 29, 31 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 80, 10, 8 }, { MENU_CMD_NAV, -1, 47, 30, 32 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 90, 10, 8 }, { MENU_CMD_NAV, -1, 48, 31, 33 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 100, 10, 8 }, { MENU_CMD_NAV, -1, 49, 32, 34 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 110, 10, 8 }, { MENU_CMD_NAV, -1, 50, 33, 35 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, 120, 10, 8 }, { MENU_CMD_NAV, -1, 51, 34, 36 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, -126, 10, 8 }, { MENU_CMD_NAV, -1, 52, 35, 37 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, -116, 10, 8 }, { MENU_CMD_NAV, -1, 53, 36, 38 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, { 0, -106, 10, 8 }, { MENU_CMD_NAV, -1, 54, 37, 3 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerFace }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 22 }, { { { 22, 0, -105, 8 }, { MENU_CMD_NAV, 23, 5, 0, 40 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 10, -105, 8 }, { MENU_CMD_NAV, 24, 5, 39, 41 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 20, -105, 8 }, { MENU_CMD_NAV, 25, 5, 40, 42 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 30, -105, 8 }, { MENU_CMD_NAV, 26, 5, 41, 43 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 40, -105, 8 }, { MENU_CMD_NAV, 27, 6, 42, 44 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 50, -105, 8 }, { MENU_CMD_NAV, 28, 6, 43, 45 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 60, -105, 8 }, { MENU_CMD_NAV, 29, 7, 44, 46 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 70, -105, 8 }, { MENU_CMD_NAV, 30, 7, 45, 47 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 80, -105, 8 }, { MENU_CMD_NAV, 31, 9, 46, 48 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 90, -105, 8 }, { MENU_CMD_NAV, 32, 9, 47, 49 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 100, -105, 8 }, { MENU_CMD_NAV, 33, 9, 48, 50 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 110, -105, 8 }, { MENU_CMD_NAV, 34, 9, 49, 51 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, 120, -105, 8 }, { MENU_CMD_NAV, 35, 10, 50, 52 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, -126, -105, 8 }, { MENU_CMD_NAV, 36, 10, 51, 53 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, -116, -105, 8 }, { MENU_CMD_NAV, 37, 11, 52, 54 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END }, { { 22, -106, -105, 8 }, { MENU_CMD_NAV, 38, 11, 53, 3 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, { MENU_CMD_ONSELECT_FIRE, EditTeamsChangePlayerName }, MENU_CMD_END } }, { { 11, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -92, 0, 9, 8 }, { MENU_CMD_COLORS, { 0xA } }, MENU_CMD_END }, { { -82, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { { -68, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -62, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -91, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, MENU_MARK_END_MENU };
Sprites editTeamsPrimaryShirts[2] = { SPR_BIG_SHIRT, SPR_EDIT_TEAMS_PRIMARY_SHIRT };
uint8_t editTeamsPrimaryShirtColTable[32] = { 0, 0, 0, 1, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 15 };
Sprites editTeamsShorts[2] = { SPR_BIG_SHORTS, SPR_EDIT_TEAMS_SHORTS };
uint8_t editTeamsShortsColTable[32] = { 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15 };
Sprites editTeamsSocks[2] = { SPR_BIG_SOCKS, SPR_EDIT_TEAMS_SOCKS };
uint8_t editTeamsSocksColTable[32] = { 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15 };
Sprites editTeamsSecondaryShirt[2] = { SPR_BIG_SHIRT, SPR_EDIT_TEAMS_SECONDARY_SHIRT };
uint8_t editTeamsSecondaryShirtColTable[32] = { 0, 0, 0, 1, 0, 0, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 15 };
Sprites editTeamsSecondaryShorts[2] = { SPR_BIG_SHORTS, SPR_EDIT_TEAMS_SHORTS_SECONDARY };
uint8_t editTeamsSecondaryShortsColTable[32] = { 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15 };
Sprites editTeamsSecondarySocks[2] = { SPR_BIG_SOCKS, SPR_EDIT_TEAMS_SECONDARY_SOCKS };
uint8_t editTeamsSecondarySocksColTable[32] = { 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15 };
uint8_t shirtTypesTable[64] = { 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 2, 0, 2, 0, 2, 0, 2, 0, 1, 0, 2, 0, 1, 0, 2, 0, 1, 0, 2, 0, 1, 0, 2, 0, 1, 0, 1, 0, 2, 0, 2, 0, 1, 0, 1, 0, 2, 0, 2 };
uint8_t shirtsIndexTable[16] = { 0x0, 0x16, 0x0, 0x4, 0x0, 0x14, 0x0, 0x1C, 0x0, 0x1A, 0x0, 0xE, 0x0, 0x18, 0x0, 0x1E };
TeamFile * editTeamsSelectedTeam = 0;
// If 1, dialog and everything is for saving (teams)
// 1 => save custom teams (show dialog)
// set when in edit teams ok is pressed, and
// edited and original teams differ
uint16_t saveCustomTeams = 0;
// In edit custom teams menu.
uint16_t teamIsImported = 0;
// On init function
Menu_CompetitionTopGoalScorers competitionTopGoalScorersMenu = { { CompetitionTopGoalScorersInit, 0, 0, 2 }, { 0, 0, 304, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 52, 16, -56, 13 }, { MENU_CMD_COLORS, { 0x79 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aLeadingCompeti }, MENU_CMD_END }, { 102, -71, 100, 15 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, CompetitionTopGoalScorersExit }, MENU_CMD_END, { MENU_MARK_START_MENU, 14, 32 }, { { 0, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { { 20, 0, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 0, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 0, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 10, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 2 }, MENU_CMD_END } }, { { { 20, 10, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 10, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 10, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 20, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 3 }, MENU_CMD_END } }, { { { 20, 20, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 20, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 20, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 30, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 4 }, MENU_CMD_END } }, { { { 20, 30, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 30, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 30, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 40, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 5 }, MENU_CMD_END } }, { { { 20, 40, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 40, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 40, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 50, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 6 }, MENU_CMD_END } }, { { { 20, 50, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 50, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 50, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 60, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 7 }, MENU_CMD_END } }, { { { 20, 60, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 60, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 60, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 70, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 8 }, MENU_CMD_END } }, { { { 20, 70, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 70, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 70, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 80, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 9 }, MENU_CMD_END } }, { { { 20, 80, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 80, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 80, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 90, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 10 }, MENU_CMD_END } }, { { { 20, 90, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 90, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 90, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 100, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 11 }, MENU_CMD_END } }, { { { 20, 100, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 100, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 100, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 110, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 12 }, MENU_CMD_END } }, { { { 20, 110, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 110, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 110, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 120, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 13 }, MENU_CMD_END } }, { { { 20, 120, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, 120, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, 120, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, -126, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 14 }, MENU_CMD_END } }, { { { 20, -126, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, -126, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { { -1, -126, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, -116, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 15 }, MENU_CMD_END } }, { { { 20, -116, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -101, -116, 90, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { { -1, -116, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, MENU_MARK_END_MENU };
// On init function
Menu_TopGoalScorers topGoalScorersMenu = { { TopGoalScorersInit, 0, 0, 5 }, MENU_MARK_BYTE_COORDS, { { 52, 0, -56, 13 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTopGoalScorers }, MENU_CMD_END }, { -9, 18, 12, 24 }, { MENU_CMD_MULTILINE, { 0x0 }, aLge_0 }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 262, 18, 12, 24 }, { MENU_CMD_MULTILINE, { 0x0 }, aCup1 }, MENU_CMD_END }, { { 277, 18, 12, 24 }, { MENU_CMD_MULTILINE, { 0x0 }, aCup2 }, MENU_CMD_END }, { { 292, 18, 12, 24 }, { MENU_CMD_MULTILINE, { 0x0 }, aTot_0 }, MENU_CMD_END } }, MENU_MARK_BYTE_COORDS, { 102, -71, 100, 15 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, TopGoalScorersExit }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 45 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_BEFORE_DRAW, TopGoalScorersBeforeDrawCommon }, MENU_CMD_END, { { { 0, 0, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 1 }, MENU_CMD_END }, { { 0, 9, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 2 }, MENU_CMD_END }, { { 0, 18, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 3 }, MENU_CMD_END }, { { 0, 27, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 4 }, MENU_CMD_END }, { { 0, 36, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 5 }, MENU_CMD_END }, { { 0, 45, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 6 }, MENU_CMD_END }, { { 0, 54, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 7 }, MENU_CMD_END }, { { 0, 63, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 8 }, MENU_CMD_END }, { { 0, 72, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 9 }, MENU_CMD_END }, { { 0, 81, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 10 }, MENU_CMD_END }, { { 0, 90, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 11 }, MENU_CMD_END }, { { 0, 99, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 12 }, MENU_CMD_END }, { { 0, 108, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 13 }, MENU_CMD_END }, { { 0, 117, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 14 }, MENU_CMD_END }, { { 0, 126, 8, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 15 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { { 12, 0, 96, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -117, 0, 100, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -9, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 22 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { { 262, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 33 }, MENU_CMD_END }, { { 277, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 44 }, MENU_CMD_END }, { { 292, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 77 }, MENU_CMD_END } }, MENU_MARK_END_MENU };
uint32_t diyStatsName = 0;
// Pointers to skill letter strings (even variant) per position group.
uint32_t topSkillLettersEven[7] = { 0x153FB7, 0x153FC5, 0x153FD3, 0x153FE1, 0x153FEF, 0x153FFD, 0x15400B };
// Pointers to skill letter strings (odd variant) per position group.
uint32_t topSkillLettersOdd[7] = { 0x153FBE, 0x153FCC, 0x153FDA, 0x153FE8, 0x153FF6, 0x154004, 0x154012 };
// Pointers to bit-rotation arrays (even variant) per position group.
uint32_t topSkillBitRotEven[7] = { 1281672, 1281686, 1281700, 1281714, 1281728, 1281742, 1281756 };
// Pointers to bit-rotation arrays (odd variant) per position group.
uint32_t topSkillBitRotOdd[7] = { 1281679, 1281693, 1281707, 1281721, 1281735, 1281749, 1281763 };
// Bit-rotation priority for position group 1 (even variant).
uint8_t skillBitRotEven1[7] = { 16, 24, 4, 8, 12, 20, 28 };
// Bit-rotation priority for position group 1 (odd variant).
uint8_t skillBitRotOdd1[7] = { 24, 16, 4, 8, 12, 20, 28 };
// Bit-rotation priority for position group 2 (even variant).
uint8_t skillBitRotEven2[7] = { 16, 24, 4, 8, 12, 20, 28 };
// Bit-rotation priority for position group 2 (odd variant).
uint8_t skillBitRotOdd2[7] = { 24, 16, 4, 8, 12, 20, 28 };
// Bit-rotation priority for position group 3 (even variant).
uint8_t skillBitRotEven3[7] = { 12, 16, 4, 24, 8, 20, 28 };
// Bit-rotation priority for position group 3 (odd variant).
uint8_t skillBitRotOdd3[7] = { 16, 12, 4, 24, 8, 20, 28 };
// Bit-rotation priority for position group 4 (even variant).
uint8_t skillBitRotEven4[7] = { 20, 24, 4, 16, 12, 28, 8 };
// Bit-rotation priority for position group 4 (odd variant).
uint8_t skillBitRotOdd4[7] = { 24, 20, 4, 16, 12, 28, 8 };
// Bit-rotation priority for position group 5 (even variant).
uint8_t skillBitRotEven5[7] = { 20, 24, 4, 16, 12, 28, 8 };
// Bit-rotation priority for position group 5 (odd variant).
uint8_t skillBitRotOdd5[7] = { 24, 20, 4, 16, 12, 28, 8 };
// Bit-rotation priority for position group 6 (even variant).
uint8_t skillBitRotEven6[7] = { 4, 16, 20, 12, 8, 24, 28 };
// Bit-rotation priority for position group 6 (odd variant).
uint8_t skillBitRotOdd6[7] = { 16, 4, 20, 12, 8, 24, 28 };
// Bit-rotation priority for position group 7 (even variant).
uint8_t skillBitRotEven7[7] = { 12, 28, 24, 8, 20, 4, 16 };
// Bit-rotation priority for position group 7 (odd variant).
uint8_t skillBitRotOdd7[9] = { 28, 12, 24, 8, 20, 4, 16, 67, 249 };
// Array of 8 pointers to position search order arrays by position type.
uint8_t * posSearchOrderPtrs[8] = { posSearchOrderGk, posSearchOrderRb, posSearchOrderLb, posSearchOrderDef, posSearchOrderRight, posSearchOrderLeft, posSearchOrderMid, posSearchOrderAtt };
// Position search fallback order for Gk, 0xFF-terminated.
uint8_t posSearchOrderGk[9] = { 0x0, 0x3, 0x6, 0x7, 0x1, 0x2, 0x4, 0x5, 0xFF };
// Position search fallback order for Rb, 0xFF-terminated.
uint8_t posSearchOrderRb[9] = { 0x1, 0x3, 0x2, 0x4, 0x6, 0x5, 0x7, 0x0, 0xFF };
// Position search fallback order for Lb, 0xFF-terminated.
uint8_t posSearchOrderLb[9] = { 0x2, 0x3, 0x1, 0x5, 0x6, 0x4, 0x7, 0x0, 0xFF };
// Position search fallback order for Def, 0xFF-terminated.
uint8_t posSearchOrderDef[9] = { 0x3, 0x1, 0x2, 0x6, 0x4, 0x5, 0x7, 0x0, 0xFF };
// Position search fallback order for Right, 0xFF-terminated.
uint8_t posSearchOrderRight[9] = { 0x4, 0x6, 0x5, 0x3, 0x1, 0x2, 0x7, 0x0, 0xFF };
// Position search fallback order for Left, 0xFF-terminated.
uint8_t posSearchOrderLeft[9] = { 0x5, 0x6, 0x4, 0x3, 0x2, 0x1, 0x7, 0x0, 0xFF };
// Position search fallback order for Mid, 0xFF-terminated.
uint8_t posSearchOrderMid[9] = { 0x6, 0x4, 0x5, 0x3, 0x1, 0x2, 0x7, 0x0, 0xFF };
// Position search fallback order for Att, 0xFF-terminated.
uint8_t posSearchOrderAtt[9] = { 0x7, 0x6, 0x4, 0x5, 0x3, 0x1, 0x2, 0x0, 0xFF };
// Working buffer for position-filled tracking during auto-squad selection.
uint8_t posFilledFlags[12] = { 0 };
// Array of 18 pointers to 11-byte tactic position maps.
uint8_t * tacticPosMapPtrs[18] = { tacticPosMap0, tacticPosMap1, tacticPosMap2, tacticPosMap3, tacticPosMap4, tacticPosMap5, tacticPosMap6, tacticPosMap7, tacticPosMap8, tacticPosMap9, tacticPosMap10, tacticPosMap11, tacticPosMap0, tacticPosMap0, tacticPosMap0, tacticPosMap0, tacticPosMap0, tacticPosMap0 };
// Position group mapping for tactic 0.
uint8_t tacticPosMap0[11] = { 0, 1, 3, 3, 2, 4, 6, 6, 5, 7, 7 };
// Position group mapping for tactic 1.
uint8_t tacticPosMap1[11] = { 0, 1, 3, 3, 2, 4, 3, 6, 5, 6, 7 };
// Position group mapping for tactic 2.
uint8_t tacticPosMap2[11] = { 0, 1, 3, 3, 2, 4, 6, 6, 5, 6, 7 };
// Position group mapping for tactic 3.
uint8_t tacticPosMap3[11] = { 0, 1, 3, 3, 2, 4, 3, 6, 5, 7, 7 };
// Position group mapping for tactic 4.
uint8_t tacticPosMap4[11] = { 0, 1, 3, 6, 2, 4, 6, 6, 5, 7, 7 };
// Position group mapping for tactic 5.
uint8_t tacticPosMap5[11] = { 0, 1, 3, 3, 2, 4, 6, 7, 5, 7, 7 };
// Position group mapping for tactic 6.
uint8_t tacticPosMap6[11] = { 0, 1, 3, 3, 2, 4, 6, 6, 5, 7, 7 };
// Position group mapping for tactic 7.
uint8_t tacticPosMap7[11] = { 0, 1, 3, 6, 2, 4, 6, 7, 5, 7, 7 };
// Position group mapping for tactic 8.
uint8_t tacticPosMap8[11] = { 0, 1, 3, 3, 2, 4, 6, 6, 5, 7, 7 };
// Position group mapping for tactic 9.
uint8_t tacticPosMap9[11] = { 0, 1, 3, 3, 2, 4, 3, 6, 5, 6, 7 };
// Position group mapping for tactic 10.
uint8_t tacticPosMap10[11] = { 0, 1, 3, 6, 2, 4, 6, 7, 5, 7, 7 };
// Position group mapping for tactic 11.
uint8_t tacticPosMap11[11] = { 0, 1, 3, 3, 2, 4, 6, 6, 5, 6, 7 };
// On init function
Menu_Squad squadMenu = { { SquadInit, SquadFinish, 0, 9 }, MENU_MARK_BYTE_COORDS, { 0, 0, 20, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END, { 3, 6, 16, 16 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { { 22, 0, -121, 11 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { 89, 14, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, { { { 0, -64, 55, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aCoach_4 }, MENU_CMD_END }, { { 44, -64, -114, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END } }, { -12, -71, 60, 15 }, { MENU_CMD_NAV, 8, -1, 45, 9 }, { MENU_CMD_DOWN_SKIP, 6, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTraining }, { MENU_CMD_ONSELECT_FIRE, SelectTraining }, MENU_CMD_END, { 0, 0, 0, 0 }, { MENU_CMD_NAV, -1, -1, 6, -1 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { -74, -71, 60, 15 }, { MENU_CMD_NAV, 44, 6, 45, 9 }, { MENU_CMD_LEFT_SKIP, 7, 2 }, { MENU_CMD_RIGHT_SKIP, 8, 1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aGoals }, { MENU_CMD_ONSELECT_FIRE, SelectGoals }, MENU_CMD_END, { { -74, -55, 122, 15 }, { MENU_CMD_NAV, 44, -1, 8, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag }, MENU_CMD_END }, { -43, -71, 60, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag }, MENU_CMD_END, { 0, 0, 0, 0 }, { MENU_CMD_ONSELECT_FIRE, SquadOnSelect11 }, MENU_CMD_END, { { -19, 2, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, { { { -41, 14, 60, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aGoals }, MENU_CMD_END }, { { -83, 14, 60, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aNat }, MENU_CMD_END }, { { -38, 14, 48, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aForm }, MENU_CMD_END } }, { { -84, 3, -126, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, { { { -22, 14, 25, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aCups }, MENU_CMD_END }, { { -51, 14, 20, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aLge }, MENU_CMD_END }, { { -31, 14, 20, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aCup_3 }, MENU_CMD_END } }, { -11, 14, 20, 6 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 265, 14, 20, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { 285, 14, 18, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTot }, MENU_CMD_END } }, { { 0, 172, 304, 9 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, { { 274, 183, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aOwnGoals }, MENU_CMD_END }, { { 289, 183, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 222 }, MENU_CMD_END }, { { 274, 192, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aExPlayerGoals }, MENU_CMD_END }, { { 289, 192, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 333 }, MENU_CMD_END }, MENU_MARK_START_TEMPLATE, MENU_MARK_BYTE_COORDS, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, SquadAfterDrawCommon }, { MENU_CMD_ONSELECT_FIRE, SquadCommon }, MENU_CMD_END, { { { 23, 24, -122, 8 }, { MENU_CMD_NAV, -1, 8, -1, 29 }, MENU_CMD_END }, { { 23, 33, -122, 8 }, { MENU_CMD_NAV, -1, 8, 28, 30 }, MENU_CMD_END }, { { 23, 42, -122, 8 }, { MENU_CMD_NAV, -1, 8, 29, 31 }, MENU_CMD_END }, { { 23, 51, -122, 8 }, { MENU_CMD_NAV, -1, 8, 30, 32 }, MENU_CMD_END }, { { 23, 60, -122, 8 }, { MENU_CMD_NAV, -1, 8, 31, 33 }, MENU_CMD_END }, { { 23, 69, -122, 8 }, { MENU_CMD_NAV, -1, 8, 32, 34 }, MENU_CMD_END }, { { 23, 78, -122, 8 }, { MENU_CMD_NAV, -1, 8, 33, 35 }, MENU_CMD_END }, { { 23, 87, -122, 8 }, { MENU_CMD_NAV, -1, 8, 34, 36 }, MENU_CMD_END }, { { 23, 96, -122, 8 }, { MENU_CMD_NAV, -1, 8, 35, 37 }, MENU_CMD_END }, { { 23, 105, -122, 8 }, { MENU_CMD_NAV, -1, 8, 36, 38 }, MENU_CMD_END }, { { 23, 114, -122, 8 }, { MENU_CMD_NAV, -1, 8, 37, 39 }, MENU_CMD_END }, { { 23, 125, -122, 8 }, { MENU_CMD_NAV, -1, 8, 38, 40 }, MENU_CMD_END }, { { 23, -122, -122, 8 }, { MENU_CMD_NAV, -1, 8, 39, 41 }, MENU_CMD_END }, { { 23, -113, -122, 8 }, { MENU_CMD_NAV, -1, 8, 40, 42 }, MENU_CMD_END }, { { 23, -104, -122, 8 }, { MENU_CMD_NAV, -1, 8, 41, 43 }, MENU_CMD_END }, { { 23, -95, -122, 8 }, { MENU_CMD_NAV, -1, 8, 42, 44 }, MENU_CMD_END } }, { 23, -84, -122, 8 }, { MENU_CMD_NAV, 45, 8, 43, 8 }, { MENU_CMD_UP_SKIP, 44, 2 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { 0, -84, 12, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, 44, 43, 8 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, SquadOnSelect45 }, { MENU_CMD_AFTER_DRAW, Squad45AfterDraw }, MENU_CMD_END, { 0, 0, 12, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { { 13, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 23, 0, -122, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -98, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -75, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -84, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -77, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -107, 0, 8, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -68, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, { { -26, 0, 30, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 333 }, MENU_CMD_END }, { -38, 0, 30, 8 }, { MENU_CMD_FG_FUNC, &locret_139AE2 }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { -61, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { { -47, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 22 }, MENU_CMD_END }, { { -27, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 33 }, MENU_CMD_END }, { { -7, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 44 }, MENU_CMD_END } }, MENU_MARK_WIDE_COORDS, { { { 269, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 55 }, MENU_CMD_END }, { { 289, 0, 12, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 77 }, MENU_CMD_END } }, MENU_MARK_END_MENU };
int16_t squad45MenuItemList[3] = { 23, 44, -1 };
uint16_t squadRowMode = 0;
uint16_t isSquadViewMode = 0;
uint32_t squadSelectedPlayerPtr = 0;
uint16_t squadSelectedPlayerIndex = 0;
// Number of player slots to display in squad screen.
uint16_t squadDisplayCount = 0;
TeamFile * squadTeamFilePtr = 0;
uint16_t teamSkillDiffAfterChange = 0;
uint16_t squadPrevSelectedPlayerIndex = 0;
uint16_t squadPrevSelectedBreakPos = 0;
MenuEntry * squadPrevHighlightedMenuEntryPtr = 0;
// SquadInit sets this
uint16_t isNationalSquad = 0;
// On init function
Menu_CompetitionStats competitionStatsMenu = { { 0, 0, 0, 0x1 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStatistics }, MENU_CMD_END }, { { 92, 40, 120, 15 }, { MENU_CMD_NAV, -1, -1, -1, 2 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aHighestScorerL }, { MENU_CMD_ONSELECT_FIRE, StatsHighestScorerList }, MENU_CMD_END }, { { 92, 65, 120, 15 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aCompetitionInf }, { MENU_CMD_ONSELECT_FIRE, CompetitionInfo }, MENU_CMD_END }, { { 92, 90, 120, 15 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewSquads }, { MENU_CMD_ONSELECT_FIRE, StatsViewSquads }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 3, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, StatsExit }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint16_t diyCompetitionType = 0;
uint16_t diyUnknownWord_2C = 0;
char * diyNameOfCompetitionPtr = 0;
void * diyTeamsBufferPtr = 0;
uint16_t diyNumberOfTeams = 0;
// On init function
Menu_CareerOver careerOverMenu = { { CareerOverInit, CareerOverFinish, 0, 4 }, MENU_MARK_BYTE_COORDS, { 0, 0, 90, 14 }, { MENU_CMD_COLORS, { 0x79 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { 91, 0, 122, 14 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { -42, 0, 90, 14 }, { MENU_CMD_COLORS, { 0x79 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { 82, 25, -116, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_PTR, { 0x0 }, aYourCareerIsOv }, MENU_CMD_END, { { 92, 50, 120, 15 }, { MENU_CMD_NAV, -1, -1, -1, 5 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewCompetitio }, { MENU_CMD_ONSELECT_FIRE, ViewCompetitionsMenuRetired }, MENU_CMD_END }, { { 92, 70, 120, 15 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aJobOffers }, { MENU_CMD_ONSELECT_FIRE, JobOffersMenuRetired }, MENU_CMD_END }, { { 82, 118, -116, 15 }, { MENU_CMD_NAV, -1, -1, 5, 7 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aContinueCareer }, { MENU_CMD_ONSELECT_FIRE, ContinueCareer }, MENU_CMD_END }, { { 102, -91, 100, 15 }, { MENU_CMD_NAV, -1, -1, 6, 8 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSaveCareer }, { MENU_CMD_ONSELECT_FIRE, SaveCareer }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 7, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitCareerMenu }, MENU_CMD_END }, MENU_MARK_END_MENU };
// On init function
Menu_Career careerMenu = { { CareerMenuInit, CareerMenuFinish, 0, 3 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aCareer_1 }, MENU_CMD_END }, { 92, 20, 120, 10 }, { MENU_CMD_NAV, -1, -1, -1, 4 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aLoadLiverpool }, { MENU_CMD_ONSELECT_FIRE, LoadLiverpool }, MENU_CMD_END, { { 30, 65, 60, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aName }, MENU_CMD_END }, { { 94, 65, 20, 11 }, { MENU_CMD_NAV, -1, 4, 1, 7 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, &managerSexBuffer }, { MENU_CMD_ONSELECT_FIRE, ChangeSex }, MENU_CMD_END }, { { 115, 65, 58, 11 }, { MENU_CMD_NAV, 3, 5, 1, 7 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, &managerNameBuffer }, { MENU_CMD_ONSELECT_FIRE, SetName }, MENU_CMD_END }, { { -82, 65, 82, 11 }, { MENU_CMD_NAV, 4, -1, 1, 7 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_PTR, { 0x0 }, &managerSurnameBuffer }, { MENU_CMD_ONSELECT_FIRE, SetSurname }, MENU_CMD_END }, { { 30, 85, 80, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aNationality }, MENU_CMD_END }, { 114, 85, 40, 11 }, { MENU_CMD_NAV, -1, -1, 4, 9 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_INPUT_FUNC, 0x3C1, ChangeNationality }, MENU_CMD_END, { { 30, 105, 120, 11 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aStartCareerAs }, MENU_CMD_END }, { { -102, 105, 120, 11 }, { MENU_CMD_NAV, -1, -1, 7, 10 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &offsetCoachOrPlayer }, { MENU_CMD_ONSELECT_FIRE, CoachOrPlayerCoach }, MENU_CMD_END }, { { 102, -91, 100, 15 }, { MENU_CMD_NAV, -1, -1, 9, 11 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aChooseTeam }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamAndStartCareer }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 10, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag2 }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint8_t nationalityOrdinalsArray[64] = { 0x8, 0x1F, 0x24, 0x18, 0x2E, 0x0, 0x1, 0x2, 0x26, 0x3, 0x4, 0x5, 0x7, 0x28, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0x17, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x20, 0x1E, 0x2D, 0x27, 0x21, 0x6, 0x22, 0x23, 0x38, 0x34, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4F, 0x4B, 0x4C, 0x4D, 0x50, 0x58, 0x51, 0x78, 0x76, 0x77, 0x94, 0x95, 0xFF };
uint32_t offsetCoachOrPlayer = 1461074;
uint8_t nationalityOrdinal  = 0;
uint8_t pad_13B35F  = 0;
// On init function
Menu_ViewCompetitions viewCompetitionsMenu = { { ViewCompetitionsInit, ViewCompetitionsOnReturn, 0, 1 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewCompetitio }, MENU_CMD_END }, { { 47, 30, -46, 15 }, { MENU_CMD_NAV, -1, -1, -1, 2 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, OpenDiyFromFile }, MENU_CMD_END }, { { 47, 55, -46, 15 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, OpenDiyPreset1 }, MENU_CMD_END }, { { 47, 80, -46, 15 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, OpenDiyPreset2 }, MENU_CMD_END }, { { 47, 105, -46, 15 }, { MENU_CMD_NAV, -1, -1, 3, 5 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, OpenDiyPreset3 }, MENU_CMD_END }, { { 47, -126, -46, 15 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTopGoalScorers }, { MENU_CMD_ONSELECT_FIRE, TopGoalScorersMenu }, MENU_CMD_END }, { { 47, -101, -46, 15 }, { MENU_CMD_NAV, -1, -1, 5, 7 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aManagementReco_0 }, { MENU_CMD_ONSELECT_FIRE, ManagementRecordMenu }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 6, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag_2 }, MENU_CMD_END }, MENU_MARK_END_MENU };
// On init function
Menu_Contest contestMenu = { { ContestMenuInit, ContestMenuOnReturn, 0, 7 }, MENU_MARK_BYTE_COORDS, { 0, 0, 90, 14 }, { MENU_CMD_COLORS, { 0x79 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { 91, 0, 122, 14 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { -42, 0, 90, 14 }, { MENU_CMD_COLORS, { 0x79 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSeason_1 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, -94, 100, 12 }, { MENU_CMD_NAV, -1, 7, 17, 5 }, { MENU_CMD_UP_SKIP, 4, 2 }, { MENU_CMD_COLORS, { 0x8 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTransfers }, { MENU_CMD_ONSELECT_FIRE, TransfersMenu }, MENU_CMD_END, { 0, -81, 100, 12 }, { MENU_CMD_NAV, -1, 8, 4, 6 }, { MENU_CMD_UP_SKIP, 5, 2 }, { MENU_CMD_RIGHT_SKIP, 6, 1 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aJobOffers }, { MENU_CMD_ONSELECT_FIRE, JobOffersMenu }, MENU_CMD_END, { 0, -68, 100, 12 }, { MENU_CMD_NAV, -1, 9, 5, -1 }, { MENU_CMD_RIGHT_SKIP, 6, 1 }, { MENU_CMD_UP_SKIP, 6, 2 }, { MENU_CMD_COLORS, { 0x8 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aClubBusiness }, { MENU_CMD_ONSELECT_FIRE, ClubBusinessMenu }, MENU_CMD_END, { 101, -100, 100, 18 }, { MENU_CMD_NAV, 4, 10, 17, 8 }, { MENU_CMD_UP_SKIP, 7, 3 }, { MENU_CMD_DOWN_SKIP, 7, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlayMatch }, { MENU_CMD_ONSELECT_FIRE, PlayMatchMenu }, MENU_CMD_END, { 101, -81, 100, 12 }, { MENU_CMD_NAV, 5, 11, 7, 13 }, { MENU_CMD_LEFT_SKIP, 8, 0 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSquad }, { MENU_CMD_ONSELECT_FIRE, SquadMenu }, MENU_CMD_END, { { 101, -68, 100, 12 }, { MENU_CMD_NAV, 6, 12, 8, -1 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag }, MENU_CMD_END }, { -54, -94, 100, 12 }, { MENU_CMD_NAV, 7, -1, 17, 11 }, { MENU_CMD_DOWN_SKIP, 10, 3 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aNextMatch }, { MENU_CMD_ONSELECT_FIRE, NextMatch }, MENU_CMD_END, { { -54, -81, 100, 12 }, { MENU_CMD_NAV, 8, -1, 10, 12 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewCompetitio }, { MENU_CMD_ONSELECT_FIRE, ViewCompetitionsMenu }, MENU_CMD_END }, { -54, -68, 100, 12 }, { MENU_CMD_NAV, 9, -1, 11, -1 }, { MENU_CMD_RIGHT_SKIP, 9, 3 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewWorld }, { MENU_CMD_ONSELECT_FIRE, ViewWorldMenu }, MENU_CMD_END, { 101, -68, 100, 11 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, 17, -1, 8, 14 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aNextMatch }, { MENU_CMD_ONSELECT_FIRE, NextMatch }, MENU_CMD_END, { 101, -55, 100, 11 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, 17, -1, 13, 15 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewCompetitio }, { MENU_CMD_ONSELECT_FIRE, ViewCompetitionsMenu }, MENU_CMD_END, { 101, -42, 100, 11 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, 17, -1, 14, 9 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag }, MENU_CMD_END, { 0, 16, 8, 14 }, { MENU_CMD_NAV, -1, 7, -1, 17 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 183 }, { MENU_CMD_ONSELECT_FIRE, ContestMenuScrollUp }, MENU_CMD_END, { 0, -109, 8, 14 }, { MENU_CMD_NAV, -1, 7, 16, 4 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 184 }, { MENU_CMD_ONSELECT_FIRE, ContestMenuScrollDown }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { 0, 31, 304, 116 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 113 }, MENU_MARK_START_TEMPLATE, MENU_MARK_BYTE_COORDS, { 0, 0, 0, 0 }, { MENU_CMD_BEFORE_DRAW, CareerGameListCommon }, MENU_CMD_END, { { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END }, { { 0, 0, 0, 0 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, MENU_MARK_WIDE_COORDS, { { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0xA } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { 0, 0, 62, 6 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 0, 8, 62, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 70, 0, 12, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { 84, 0, -37, 8 }, { MENU_CMD_COLORS, { 0xB } }, MENU_CMD_END }, { { 84, 0, 96, 6 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -76, 0, 12, 6 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -65, 0, 6, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -60, 0, 12, 6 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { -48, 0, 96, 6 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 84, 8, -36, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x1 } }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint16_t teamSelectionKeyCache_ListIndex = 0;
// When showing games list in career basic menu
uint16_t currentGame = 0;
uint16_t teamSelectionKeyCache_ListCount = 0;
// Saved list index for restoring contest scroll position; -1 when none.
uint16_t savedContestListIndex = 0;
// Saved game offset within a contest entry for restoring scroll position.
uint16_t savedContestGameOffset = 0;
// Pointer to the active contest entry in team selection key cache.
void * savedContestEntryPtr = 0;
// Pointer to the active round/game entry within a contest.
void * savedContestRoundPtr = 0;
// In career game list
char * careerGameTopTeamName = 0;
// In career game list
char * careerGameBottomTeamName = 0;
// In career game list, 0 = computer, -1 = player
uint16_t careerGameListTeamControl = 0;
// Y coordinate when drawing games list
uint16_t columnMarker = 0;
// Some flag
uint16_t cglmVar3 = 0;
uint16_t gameListY = 0;
uint16_t contestEntryHeight = 0;
uint8_t gameListArray[112] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
// On init function
Menu_ManagementRecord managementRecordMenu = { { ManagementRecordInit, 0, 0, 0x3 }, { 27, -25, 250, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_BEFORE_DRAW, FillManagementRecordInfo }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, 0, 8, 14 }, { MENU_CMD_NAV, -1, 3, -1, 2 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 183 }, { MENU_CMD_ONSELECT_FIRE, ManagementArrowUpSelect }, MENU_CMD_END, { 0, -70, 8, 14 }, { MENU_CMD_NAV, -1, 3, 1, 3 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 184 }, { MENU_CMD_ONSELECT_FIRE, ManagementArrowDownSelect }, MENU_CMD_END, { { 102, -46, 100, 15 }, { MENU_CMD_NAV, 2, -1, 2, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag_3 }, MENU_CMD_END }, { { { -104, 0, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, { { -104, 0, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x7 } }, MENU_CMD_END }, { { -104, 0, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x11 } }, MENU_CMD_END }, { { 0, 0, -112, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x4001 } }, MENU_CMD_END }, { { -96, 0, -112, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 6 }, { MENU_CMD_TEXT_PTR, { 0xA }, aSacked }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { -104, 0, 0, 6 }, { MENU_CMD_TEXT_PTR, { 0x7 }, aAllMatches }, MENU_CMD_END }, { { -104, 0, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 6 }, { MENU_CMD_TEXT_PTR, { 0x7 }, 0 }, MENU_CMD_END, { { { 0, 0, 304, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x1 } }, MENU_CMD_END }, { { 0, 0, 304, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x1 } }, MENU_CMD_END } }, MENU_MARK_BYTE_COORDS, { { -104, -68, 0, 6 }, { MENU_CMD_TEXT_PTR, { 0x1D }, aCareerTotal }, MENU_CMD_END }, { { -104, -58, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0xD } }, MENU_CMD_END }, { { { -104, -122, 20, 12 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { -104, -122, 20, 12 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { -104, -122, 20, 12 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { -104, -122, 20, 12 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END } }, MENU_MARK_END_MENU };
uint16_t trophySprites[10] = { 222, 223, 219, 221, 220, 215, 216, 217, 218, 216 };
// When showing management record menu
uint16_t currentSeasonNumber = 0;
// On init function
Menu_SelectTeamsForTactics selectTeamsForTacticsMenu = { { SelTeamForTacticsInit, SelTeamForTacticsInit, 0, 23 }, MENU_MARK_BYTE_COORDS, { { 77, 0, -106, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, -1 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, SelTeamForTacticsCommon }, MENU_CMD_END, { { { 1, 21, 100, 8 }, { MENU_CMD_NAV, -1, 23, -1, 2 }, { MENU_CMD_LEFT_SKIP, 44, 2 }, MENU_CMD_END }, { { 1, 30, 100, 8 }, { MENU_CMD_NAV, -1, 24, 1, 3 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 39, 100, 8 }, { MENU_CMD_NAV, -1, 25, 2, 4 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 48, 100, 8 }, { MENU_CMD_NAV, -1, 26, 3, 5 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 57, 100, 8 }, { MENU_CMD_NAV, -1, 27, 4, 6 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 66, 100, 8 }, { MENU_CMD_NAV, -1, 28, 5, 7 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 75, 100, 8 }, { MENU_CMD_NAV, -1, 29, 6, 8 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 84, 100, 8 }, { MENU_CMD_NAV, -1, 30, 7, 9 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 93, 100, 8 }, { MENU_CMD_NAV, -1, 31, 8, 10 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 102, 100, 8 }, { MENU_CMD_NAV, -1, 32, 9, 11 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 111, 100, 8 }, { MENU_CMD_NAV, -1, 33, 10, 12 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, 120, 100, 8 }, { MENU_CMD_NAV, -1, 34, 11, 13 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -127, 100, 8 }, { MENU_CMD_NAV, -1, 35, 12, 14 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -118, 100, 8 }, { MENU_CMD_NAV, -1, 36, 13, 15 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -109, 100, 8 }, { MENU_CMD_NAV, -1, 37, 14, 16 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -100, 100, 8 }, { MENU_CMD_NAV, -1, 38, 15, 17 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -91, 100, 8 }, { MENU_CMD_NAV, -1, 39, 16, 18 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -82, 100, 8 }, { MENU_CMD_NAV, -1, 40, 17, 19 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -73, 100, 8 }, { MENU_CMD_NAV, -1, 41, 18, 20 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -64, 100, 8 }, { MENU_CMD_NAV, -1, 42, 19, 21 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -55, 100, 8 }, { MENU_CMD_NAV, -1, 43, 20, 22 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END }, { { 1, -46, 100, 8 }, { MENU_CMD_NAV, -1, 44, 21, 67 }, { MENU_CMD_UP_SKIP, 22, 2 }, MENU_CMD_END } }, { { { 102, 21, 100, 8 }, { MENU_CMD_NAV, 1, 45, -1, 24 }, MENU_CMD_END }, { { 102, 30, 100, 8 }, { MENU_CMD_NAV, 2, 46, 23, 25 }, MENU_CMD_END }, { { 102, 39, 100, 8 }, { MENU_CMD_NAV, 3, 47, 24, 26 }, MENU_CMD_END }, { { 102, 48, 100, 8 }, { MENU_CMD_NAV, 4, 48, 25, 27 }, MENU_CMD_END }, { { 102, 57, 100, 8 }, { MENU_CMD_NAV, 5, 49, 26, 28 }, MENU_CMD_END }, { { 102, 66, 100, 8 }, { MENU_CMD_NAV, 6, 50, 27, 29 }, MENU_CMD_END }, { { 102, 75, 100, 8 }, { MENU_CMD_NAV, 7, 51, 28, 30 }, MENU_CMD_END }, { { 102, 84, 100, 8 }, { MENU_CMD_NAV, 8, 52, 29, 31 }, MENU_CMD_END }, { { 102, 93, 100, 8 }, { MENU_CMD_NAV, 9, 53, 30, 32 }, MENU_CMD_END }, { { 102, 102, 100, 8 }, { MENU_CMD_NAV, 10, 54, 31, 33 }, MENU_CMD_END }, { { 102, 111, 100, 8 }, { MENU_CMD_NAV, 11, 55, 32, 34 }, MENU_CMD_END }, { { 102, 120, 100, 8 }, { MENU_CMD_NAV, 12, 56, 33, 35 }, MENU_CMD_END }, { { 102, -127, 100, 8 }, { MENU_CMD_NAV, 13, 57, 34, 36 }, MENU_CMD_END }, { { 102, -118, 100, 8 }, { MENU_CMD_NAV, 14, 58, 35, 37 }, MENU_CMD_END }, { { 102, -109, 100, 8 }, { MENU_CMD_NAV, 15, 59, 36, 38 }, MENU_CMD_END }, { { 102, -100, 100, 8 }, { MENU_CMD_NAV, 16, 60, 37, 39 }, MENU_CMD_END }, { { 102, -91, 100, 8 }, { MENU_CMD_NAV, 17, 61, 38, 40 }, MENU_CMD_END }, { { 102, -82, 100, 8 }, { MENU_CMD_NAV, 18, 62, 39, 41 }, MENU_CMD_END }, { { 102, -73, 100, 8 }, { MENU_CMD_NAV, 19, 63, 40, 42 }, MENU_CMD_END }, { { 102, -64, 100, 8 }, { MENU_CMD_NAV, 20, 64, 41, 43 }, MENU_CMD_END }, { { 102, -55, 100, 8 }, { MENU_CMD_NAV, 21, 65, 42, 44 }, MENU_CMD_END }, { { 102, -46, 100, 8 }, { MENU_CMD_NAV, 22, 66, 43, 67 }, MENU_CMD_END } }, { { { -53, 21, 100, 8 }, { MENU_CMD_NAV, 23, -1, -1, 46 }, { MENU_CMD_LEFT_SKIP, 44, 2 }, MENU_CMD_END }, { { -53, 30, 100, 8 }, { MENU_CMD_NAV, 24, -1, 45, 47 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 39, 100, 8 }, { MENU_CMD_NAV, 25, -1, 46, 48 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 48, 100, 8 }, { MENU_CMD_NAV, 26, -1, 47, 49 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 57, 100, 8 }, { MENU_CMD_NAV, 27, -1, 48, 50 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 66, 100, 8 }, { MENU_CMD_NAV, 28, -1, 49, 51 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 75, 100, 8 }, { MENU_CMD_NAV, 29, -1, 50, 52 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 84, 100, 8 }, { MENU_CMD_NAV, 30, -1, 51, 53 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 93, 100, 8 }, { MENU_CMD_NAV, 31, -1, 52, 54 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 102, 100, 8 }, { MENU_CMD_NAV, 32, -1, 53, 55 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 111, 100, 8 }, { MENU_CMD_NAV, 33, -1, 54, 56 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, 120, 100, 8 }, { MENU_CMD_NAV, 34, -1, 55, 57 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -127, 100, 8 }, { MENU_CMD_NAV, 35, -1, 56, 58 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -118, 100, 8 }, { MENU_CMD_NAV, 36, -1, 57, 59 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -109, 100, 8 }, { MENU_CMD_NAV, 37, -1, 58, 60 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -100, 100, 8 }, { MENU_CMD_NAV, 38, -1, 59, 61 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -91, 100, 8 }, { MENU_CMD_NAV, 39, -1, 60, 62 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -82, 100, 8 }, { MENU_CMD_NAV, 40, -1, 61, 63 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -73, 100, 8 }, { MENU_CMD_NAV, 41, -1, 62, 64 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -64, 100, 8 }, { MENU_CMD_NAV, 42, -1, 63, 65 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -55, 100, 8 }, { MENU_CMD_NAV, 43, -1, 64, 66 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END }, { { -53, -46, 100, 8 }, { MENU_CMD_NAV, 44, -1, 65, 67 }, { MENU_CMD_DOWN_SKIP, 66, 2 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 22, 66, 44, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, SelTeamForTacticsExit }, MENU_CMD_END }, MENU_MARK_END_MENU };
// Pointer to name of menu when selecting team for
// edit tactics
uint32_t chooseTeamMenuName = 0;
// Number of team selected for edit tactics and
// competition/view teams
uint16_t teamSelected = 0;
// Number of teams in column
uint16_t selTeamsColumn1 = 0;
uint16_t selTeamsColumn2 = 0;
uint16_t selTeamsColumn3 = 0;
uint16_t numTeamsCountryBuffer = 0;
uint16_t selTeamsListTopY = 0;
uint16_t selTeamsListBottomY = 0;
uint8_t indexCountries[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Set to true when select teams menu is used for selecting
// preset competition
uint16_t choosingPreset = 0;
// On init function
Menu_SelectTeams selectTeamsMenu = { { SelectTeamsInit, SelectTeamsReinit, 0, 0x2B }, { 2, 0, 300, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_START_TEMPLATE, MENU_MARK_BYTE_COORDS, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_ONSELECT_FIRE, SelectLeaguesCommon }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 30 }, { { { 1, 0, -106, 8 }, { MENU_CMD_NAV, -1, 2, 20, 3 }, MENU_CMD_END }, { { -104, 0, -105, 8 }, { MENU_CMD_NAV, 1, -1, 20, 4 }, MENU_CMD_END }, { { 1, 9, -106, 8 }, { MENU_CMD_NAV, -1, 4, 1, 5 }, MENU_CMD_END }, { { -104, 9, -105, 8 }, { MENU_CMD_NAV, 3, -1, 2, 6 }, MENU_CMD_END }, { { 1, 18, -106, 8 }, { MENU_CMD_NAV, -1, 6, 3, 7 }, MENU_CMD_END }, { { -104, 18, -105, 8 }, { MENU_CMD_NAV, 5, -1, 4, 8 }, MENU_CMD_END }, { { 1, 27, -106, 8 }, { MENU_CMD_NAV, -1, 8, 5, 9 }, MENU_CMD_END }, { { -104, 27, -105, 8 }, { MENU_CMD_NAV, 7, -1, 6, 10 }, MENU_CMD_END }, { { 1, 36, -106, 8 }, { MENU_CMD_NAV, -1, 10, 7, 21 }, MENU_CMD_END }, { { -104, 36, -105, 8 }, { MENU_CMD_NAV, 9, -1, 8, 65 }, MENU_CMD_END } }, { MENU_MARK_START_MENU, 0, 30 }, { { { 67, 0, -86, 8 }, { MENU_CMD_NAV, -1, -1, -1, 12 }, MENU_CMD_END }, { { 67, 9, -86, 8 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, MENU_CMD_END }, { { 67, 18, -86, 8 }, { MENU_CMD_NAV, -1, -1, 12, 14 }, MENU_CMD_END }, { { 67, 27, -86, 8 }, { MENU_CMD_NAV, -1, -1, 13, 15 }, MENU_CMD_END }, { { 67, 36, -86, 8 }, { MENU_CMD_NAV, -1, -1, 14, 16 }, MENU_CMD_END }, { { 67, 45, -86, 8 }, { MENU_CMD_NAV, -1, -1, 15, 17 }, MENU_CMD_END }, { { 67, 54, -86, 8 }, { MENU_CMD_NAV, -1, -1, 16, 18 }, MENU_CMD_END }, { { 67, 63, -86, 8 }, { MENU_CMD_NAV, -1, -1, 17, 19 }, MENU_CMD_END }, { { 67, 72, -86, 8 }, { MENU_CMD_NAV, -1, -1, 18, 20 }, MENU_CMD_END }, { { 67, 81, -86, 8 }, { MENU_CMD_NAV, -1, -1, 19, 43 }, MENU_CMD_END } }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, SelectTeamsCommon }, MENU_CMD_END, { 1, 21, 100, 8 }, { MENU_CMD_NAV, -1, 43, 9, 22 }, { MENU_CMD_LEFT_SKIP, 64, 2 }, { MENU_CMD_RIGHT_SKIP, 43, 3 }, MENU_CMD_END, { 1, 30, 100, 8 }, { MENU_CMD_NAV, -1, 44, 21, 23 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 39, 100, 8 }, { MENU_CMD_NAV, -1, 45, 22, 24 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 48, 100, 8 }, { MENU_CMD_NAV, -1, 46, 23, 25 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 57, 100, 8 }, { MENU_CMD_NAV, -1, 47, 24, 26 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 66, 100, 8 }, { MENU_CMD_NAV, -1, 48, 25, 27 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 75, 100, 8 }, { MENU_CMD_NAV, -1, 49, 26, 28 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 84, 100, 8 }, { MENU_CMD_NAV, -1, 50, 27, 29 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 93, 100, 8 }, { MENU_CMD_NAV, -1, 51, 28, 30 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 102, 100, 8 }, { MENU_CMD_NAV, -1, 52, 29, 31 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 111, 100, 8 }, { MENU_CMD_NAV, -1, 53, 30, 32 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, 120, 100, 8 }, { MENU_CMD_NAV, -1, 54, 31, 33 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -127, 100, 8 }, { MENU_CMD_NAV, -1, 55, 32, 34 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -118, 100, 8 }, { MENU_CMD_NAV, -1, 56, 33, 35 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -109, 100, 8 }, { MENU_CMD_NAV, -1, 57, 34, 36 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -100, 100, 8 }, { MENU_CMD_NAV, -1, 58, 35, 37 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -91, 100, 8 }, { MENU_CMD_NAV, -1, 59, 36, 38 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -82, 100, 8 }, { MENU_CMD_NAV, -1, 60, 37, 39 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -73, 100, 8 }, { MENU_CMD_NAV, -1, 61, 38, 40 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -64, 100, 8 }, { MENU_CMD_NAV, -1, 62, 39, 41 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -55, 100, 8 }, { MENU_CMD_NAV, -1, 63, 40, 42 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { 1, -46, 100, 8 }, { MENU_CMD_NAV, -1, 64, 41, 87 }, { MENU_CMD_UP_SKIP, 42, 2 }, MENU_CMD_END, { { { 102, 21, 100, 8 }, { MENU_CMD_NAV, 21, 65, 9, 44 }, MENU_CMD_END }, { { 102, 30, 100, 8 }, { MENU_CMD_NAV, 22, 66, 43, 45 }, MENU_CMD_END }, { { 102, 39, 100, 8 }, { MENU_CMD_NAV, 23, 67, 44, 46 }, MENU_CMD_END }, { { 102, 48, 100, 8 }, { MENU_CMD_NAV, 24, 68, 45, 47 }, MENU_CMD_END }, { { 102, 57, 100, 8 }, { MENU_CMD_NAV, 25, 69, 46, 48 }, MENU_CMD_END }, { { 102, 66, 100, 8 }, { MENU_CMD_NAV, 26, 70, 47, 49 }, MENU_CMD_END }, { { 102, 75, 100, 8 }, { MENU_CMD_NAV, 27, 71, 48, 50 }, MENU_CMD_END }, { { 102, 84, 100, 8 }, { MENU_CMD_NAV, 28, 72, 49, 51 }, MENU_CMD_END }, { { 102, 93, 100, 8 }, { MENU_CMD_NAV, 29, 73, 50, 52 }, MENU_CMD_END }, { { 102, 102, 100, 8 }, { MENU_CMD_NAV, 30, 74, 51, 53 }, MENU_CMD_END }, { { 102, 111, 100, 8 }, { MENU_CMD_NAV, 31, 75, 52, 54 }, MENU_CMD_END }, { { 102, 120, 100, 8 }, { MENU_CMD_NAV, 32, 76, 53, 55 }, MENU_CMD_END }, { { 102, -127, 100, 8 }, { MENU_CMD_NAV, 33, 77, 54, 56 }, MENU_CMD_END }, { { 102, -118, 100, 8 }, { MENU_CMD_NAV, 34, 78, 55, 57 }, MENU_CMD_END }, { { 102, -109, 100, 8 }, { MENU_CMD_NAV, 35, 79, 56, 58 }, MENU_CMD_END }, { { 102, -100, 100, 8 }, { MENU_CMD_NAV, 36, 80, 57, 59 }, MENU_CMD_END }, { { 102, -91, 100, 8 }, { MENU_CMD_NAV, 37, 81, 58, 60 }, MENU_CMD_END }, { { 102, -82, 100, 8 }, { MENU_CMD_NAV, 38, 82, 59, 61 }, MENU_CMD_END }, { { 102, -73, 100, 8 }, { MENU_CMD_NAV, 39, 83, 60, 62 }, MENU_CMD_END }, { { 102, -64, 100, 8 }, { MENU_CMD_NAV, 40, 84, 61, 63 }, MENU_CMD_END }, { { 102, -55, 100, 8 }, { MENU_CMD_NAV, 41, 85, 62, 64 }, MENU_CMD_END }, { { 102, -46, 100, 8 }, { MENU_CMD_NAV, 42, 86, 63, 88 }, MENU_CMD_END } }, { -53, 21, 100, 8 }, { MENU_CMD_NAV, 43, -1, 10, 66 }, { MENU_CMD_LEFT_SKIP, 64, 2 }, { MENU_CMD_RIGHT_SKIP, 43, 3 }, MENU_CMD_END, { -53, 30, 100, 8 }, { MENU_CMD_NAV, 44, -1, 65, 67 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 39, 100, 8 }, { MENU_CMD_NAV, 45, -1, 66, 68 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 48, 100, 8 }, { MENU_CMD_NAV, 46, -1, 67, 69 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 57, 100, 8 }, { MENU_CMD_NAV, 47, -1, 68, 70 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 66, 100, 8 }, { MENU_CMD_NAV, 48, -1, 69, 71 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 75, 100, 8 }, { MENU_CMD_NAV, 49, -1, 70, 72 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 84, 100, 8 }, { MENU_CMD_NAV, 50, -1, 71, 73 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 93, 100, 8 }, { MENU_CMD_NAV, 51, -1, 72, 74 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 102, 100, 8 }, { MENU_CMD_NAV, 52, -1, 73, 75 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 111, 100, 8 }, { MENU_CMD_NAV, 53, -1, 74, 76 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, 120, 100, 8 }, { MENU_CMD_NAV, 54, -1, 75, 77 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -127, 100, 8 }, { MENU_CMD_NAV, 55, -1, 76, 78 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -118, 100, 8 }, { MENU_CMD_NAV, 56, -1, 77, 79 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -109, 100, 8 }, { MENU_CMD_NAV, 57, -1, 78, 80 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -100, 100, 8 }, { MENU_CMD_NAV, 58, -1, 79, 81 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -91, 100, 8 }, { MENU_CMD_NAV, 59, -1, 80, 82 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -82, 100, 8 }, { MENU_CMD_NAV, 60, -1, 81, 83 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -73, 100, 8 }, { MENU_CMD_NAV, 61, -1, 82, 84 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -64, 100, 8 }, { MENU_CMD_NAV, 62, -1, 83, 85 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -55, 100, 8 }, { MENU_CMD_NAV, 63, -1, 84, 86 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, { -53, -46, 100, 8 }, { MENU_CMD_NAV, 64, -1, 85, 89 }, { MENU_CMD_DOWN_SKIP, 86, 2 }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, -71, 120, 15 }, { MENU_CMD_NAV, -1, 88, 42, -1 }, { MENU_CMD_UP_SKIP, 87, 2 }, { MENU_CMD_RIGHT_SKIP, 87, 1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewSelectedTe }, { MENU_CMD_ONSELECT_FIRE, ViewSelectedTeams }, MENU_CMD_END, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 87, 89, 64, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitSelectTeams }, MENU_CMD_END }, { -72, -71, 120, 15 }, { MENU_CMD_NAV, 88, -1, 86, -1 }, { MENU_CMD_DOWN_SKIP, 89, 2 }, { MENU_CMD_RIGHT_SKIP, 89, 0 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, ChooseTeamsPlayGame }, MENU_CMD_END, { -72, -68, 120, 9 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
// Index of last selected team (or league) for game
uint16_t lastSelectedTeam = 0;
// When selecting teams from list just before the game,
// after special treatment, index is saved here
uint16_t selectedTeamIndex = 0;
// Selected league in select_teams_menu
uint16_t selectedLeagueIndex = 0;
// When selecting teams or leagues from list just before
// the game, pointer to entry's text is saved here
uint32_t selectedTeamText = 0;
void * selectedContest = 0;
// League number persisted for career/season context.
uint16_t contestLeagueNumber = 0;
uint16_t prevSelectedTeamEntry = 0;
// Game type string for header in choose teams menu
char * gameTypeStr = 0;
// Gets set by GetCountryName
char * curCountryStr = 0;
// Pointers to remaining team names set when
// getting teams from menu
uint32_t teamNames[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// When selecting country from continent in choose teams menu
uint32_t countryNames[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Number of leagues in currently selected country (0 for continents)
uint16_t numLeaguesInCountry = 0;
// Number of teams to show in a menu
uint16_t chooseTeamsNumTeams = 0;
uint16_t startingTeamIndex = 0;
// Do not show teams with ordinals less than this in choose teams menu
uint16_t teamsLowerBound = 0;
// Number of teams in columns in select teams menu
uint16_t numTeamsColumn1 = 0;
uint16_t numTeamsColumn2 = 0;
uint16_t numTeamsColumn3 = 0;
uint16_t headerYPlusHeight = 0;
uint16_t exitY = 0;
// Current depth level when selecting teams through
// continents, countries...
uint16_t teamDepthLevel = 0;
// Marks top of stack when making selection of teams
uint16_t topOfStackMark = 0;
void * countryStackPtr = &countriesStack;
uint8_t countriesStack[10] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
// Enables returning through menus when selecting teams
uint16_t selectedTeamsStack[10] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint32_t leaguesPtrTable[10] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint16_t leagueNumbersTable[10] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0 };
uint16_t isContestContinentalCup = 0;
uint16_t isCountryNumber = 0;
uint16_t countryNumber = 0;
uint16_t gotCountryName = 0;
// Questionable name
uint16_t loadTeam = 0;
// Flag, if true cups and other competitions will be shown when
// selecting teams (or contests) in SelectTeamsFinalMenu,
// otherwise only leagues
uint16_t showCupsAndOther = 0;
// Flag
// questionable name
uint16_t playSeason = 0;
// When set, selecting a contest skips team selection and returns immediately.
uint16_t chooseCompetitionOnly = 0;
// 0 = National teams
// 1 = club teams
// 2 = original custom teams
// 3 = edited custom teams
// -1 = none
// set by chooseTeamsMenu
uint16_t teamsType = 0;
// Controls appearance of clubs item while choosing teams type
// 0 = don't show it, !0 = show it
uint16_t showClubTeams = 0;
uint16_t showNationalTeams = 0;
uint16_t showOrigCustomTeams = 0;
uint16_t numberOfLeagues = 0;
uint16_t stayInSelectTeams = 0;
// If not zero, exit select teams menu
uint16_t exitFlag = 0;
uint16_t leagueNumber = 0;
char * playWhatStr = 0;
// First part of header for choose teams menu
// 0 = default ("CHOOSE TEAMS FOR")
char * chooseTeamsHeader1stPart = 0;
char * entryText2 = 0;
void * chooseTeamsFunc = 0;
uint16_t careerSquadScreenDidSelectPlayerFlag = 0;
// !0 = No teams selected
// 0  = there is at least one team selected
// in select_teams_menu when this is true, team limitation is honoured
// (num_needed_teams)
uint16_t selectTeamsNoLimit = 0;
// Number of teams needed to select, before play game
uint16_t numNeededTeams = 0;
// On init function
Menu_ChooseTeams chooseTeamsMenu = { { ChooseTeamsInit, ChooseTeamsInit, 0, 0 }, MENU_MARK_BYTE_COORDS, { { 92, 35, 120, 25 }, { MENU_CMD_NAV, -1, -1, -1, 1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aClubTeams }, { MENU_CMD_ONSELECT_FIRE, ClubTeams }, MENU_CMD_END }, { { 92, 70, 120, 25 }, { MENU_CMD_NAV, -1, -1, 0, 2 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aNationalTeams }, { MENU_CMD_ONSELECT_FIRE, NationalTeams }, MENU_CMD_END }, { { 92, 105, 120, 25 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOriginalCustom }, { MENU_CMD_ONSELECT_FIRE, OriginalCustomTeams }, MENU_CMD_END }, { { 92, -116, 120, 25 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aEditedCustomTe_0 }, { MENU_CMD_ONSELECT_FIRE, EditedCustomTeams }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 3, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitChooseTeams }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, MENU_MARK_END_MENU };
// On init function
Menu_SelectFiles selectFilesMenu = { { SelectFilesInit, SelectFilesOnReturn, 0, 0x10 }, { 2, 0, 300, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, -1 }, MENU_MARK_START_TEMPLATE, MENU_MARK_BYTE_COORDS, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x6 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, SelFilesOnSelectCommon }, { MENU_CMD_BEFORE_DRAW, SelFilesDrawItemDescription }, MENU_CMD_END, { { 0, 21, 56, 8 }, { MENU_CMD_NAV, -1, 16, -1, 2 }, MENU_CMD_END }, { 0, 30, 56, 8 }, { MENU_CMD_NAV, -1, 17, 1, 3 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 39, 56, 8 }, { MENU_CMD_NAV, -1, 18, 2, 4 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 48, 56, 8 }, { MENU_CMD_NAV, -1, 19, 3, 5 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 57, 56, 8 }, { MENU_CMD_NAV, -1, 20, 4, 6 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 66, 56, 8 }, { MENU_CMD_NAV, -1, 21, 5, 7 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 75, 56, 8 }, { MENU_CMD_NAV, -1, 22, 6, 8 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 84, 56, 8 }, { MENU_CMD_NAV, -1, 23, 7, 9 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 93, 56, 8 }, { MENU_CMD_NAV, -1, 24, 8, 10 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 102, 56, 8 }, { MENU_CMD_NAV, -1, 25, 9, 11 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 111, 56, 8 }, { MENU_CMD_NAV, -1, 26, 10, 12 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, 120, 56, 8 }, { MENU_CMD_NAV, -1, 27, 11, 13 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, -127, 56, 8 }, { MENU_CMD_NAV, -1, 28, 12, 14 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, -118, 56, 8 }, { MENU_CMD_NAV, -1, 29, 13, 15 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { 0, -109, 56, 8 }, { MENU_CMD_NAV, -1, 30, 14, 48 }, { MENU_CMD_UP_SKIP, 15, 2 }, MENU_CMD_END, { { { 104, 21, 56, 8 }, { MENU_CMD_NAV, 1, 31, -1, 17 }, MENU_CMD_END }, { { 104, 30, 56, 8 }, { MENU_CMD_NAV, 2, 32, 16, 18 }, MENU_CMD_END }, { { 104, 39, 56, 8 }, { MENU_CMD_NAV, 3, 33, 17, 19 }, MENU_CMD_END }, { { 104, 48, 56, 8 }, { MENU_CMD_NAV, 4, 34, 18, 20 }, MENU_CMD_END }, { { 104, 57, 56, 8 }, { MENU_CMD_NAV, 5, 35, 19, 21 }, MENU_CMD_END }, { { 104, 66, 56, 8 }, { MENU_CMD_NAV, 6, 36, 20, 22 }, MENU_CMD_END }, { { 104, 75, 56, 8 }, { MENU_CMD_NAV, 7, 37, 21, 23 }, MENU_CMD_END }, { { 104, 84, 56, 8 }, { MENU_CMD_NAV, 8, 38, 22, 24 }, MENU_CMD_END }, { { 104, 93, 56, 8 }, { MENU_CMD_NAV, 9, 39, 23, 25 }, MENU_CMD_END }, { { 104, 102, 56, 8 }, { MENU_CMD_NAV, 10, 40, 24, 26 }, MENU_CMD_END }, { { 104, 111, 56, 8 }, { MENU_CMD_NAV, 11, 41, 25, 27 }, MENU_CMD_END }, { { 104, 120, 56, 8 }, { MENU_CMD_NAV, 12, 42, 26, 28 }, MENU_CMD_END }, { { 104, -127, 56, 8 }, { MENU_CMD_NAV, 13, 43, 27, 29 }, MENU_CMD_END }, { { 104, -118, 56, 8 }, { MENU_CMD_NAV, 14, 44, 28, 30 }, MENU_CMD_END }, { { 104, -109, 56, 8 }, { MENU_CMD_NAV, 15, 45, 29, 48 }, MENU_CMD_END }, { { -48, 21, 56, 8 }, { MENU_CMD_NAV, 16, -1, -1, 32 }, MENU_CMD_END } }, { -48, 30, 56, 8 }, { MENU_CMD_NAV, 17, -1, 31, 33 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 39, 56, 8 }, { MENU_CMD_NAV, 18, -1, 32, 34 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 48, 56, 8 }, { MENU_CMD_NAV, 19, -1, 33, 35 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 57, 56, 8 }, { MENU_CMD_NAV, 20, -1, 34, 36 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 66, 56, 8 }, { MENU_CMD_NAV, 21, -1, 35, 37 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 75, 56, 8 }, { MENU_CMD_NAV, 22, -1, 36, 38 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 84, 56, 8 }, { MENU_CMD_NAV, 23, -1, 37, 39 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 93, 56, 8 }, { MENU_CMD_NAV, 24, -1, 38, 40 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 102, 56, 8 }, { MENU_CMD_NAV, 25, -1, 39, 41 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 111, 56, 8 }, { MENU_CMD_NAV, 26, -1, 40, 42 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, 120, 56, 8 }, { MENU_CMD_NAV, 27, -1, 41, 43 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, -127, 56, 8 }, { MENU_CMD_NAV, 28, -1, 42, 44 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, -118, 56, 8 }, { MENU_CMD_NAV, 29, -1, 43, 45 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, { -48, -109, 56, 8 }, { MENU_CMD_NAV, 30, -1, 44, 48 }, { MENU_CMD_DOWN_SKIP, 45, 2 }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, 0, 39, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END, { 111, -104, 0, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aFilename }, MENU_CMD_END, { 112, -104, 80, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, -1, 30, 49 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, SelectFilesInputSaveFilenameOnSelect }, MENU_CMD_END, { 121, -91, 62, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, 15, 45, 48, 50 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSave }, { MENU_CMD_ONSELECT_FIRE, SelectFilenameToSaveAndExit }, MENU_CMD_END, { { 121, -71, 62, 15 }, { MENU_CMD_NAV, 15, 45, 49, -1 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAbort }, { MENU_CMD_ONSELECT_FIRE, AbortSaveFile }, MENU_CMD_END }, MENU_MARK_END_MENU };
// Total number of files in game directory
uint16_t totalNumberOfFiles = 0;
// 0 = Not saving file
uint16_t savingFile = 0;
// Contains title for select files menu
uint32_t menuTitle = 0;
// Extension for select files menu
uint32_t extension = 0;
// Extension for select files menu
uint8_t foundFilesPtrTable[180] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Array of file extensions in the form of a dword
uint8_t extensionsBuffer[180] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Initial input filename to save to show in dialog
uint8_t inputSaveFilename[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Final filename to save that the user selected
uint8_t selectedFilename[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t selFilesColumn1NumItems = 0;
uint16_t selFilesColumn2NumItems = 0;
uint16_t selFilesColumn3NumItems = 0;
uint16_t numMatchedFiles = 0;
uint16_t selFilesColumnStartY = 0;
uint16_t selFilesColumnEndY = 0;
// On init function
uint32_t diskMenu = 1312736;
const char aSwosu[] = "SWOSU";
// Buffer start address used as destination when loading swos4.dku save file data.
uint16_t saveFileBuffer = 0;
// On init function
Menu_Continue continueMenu = { { ContinueInit, 0, 0, 0x1 }, { 2, 40, 300, 40 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 102, -71, 100, 15 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aContinue }, { MENU_CMD_ONSELECT_FIRE, ContinueMenuContinueSelected }, MENU_CMD_END, MENU_MARK_END_MENU };
// On init function
Menu_ContinueAbort continueAbortMenu = { { ContinueAbortInit, 0, 0, 2 }, MENU_MARK_BYTE_COORDS, { { -104, 0, 0, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { 52, 50, -56, 40 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_MULTILINE, { 0x0 }, 0 }, MENU_CMD_END, { { 102, -91, 100, 15 }, { MENU_CMD_NAV, -1, -1, -1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, ContinueSelected }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 2, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, AbortSelected }, MENU_CMD_END }, MENU_MARK_END_MENU };
// If false, don't wait for the user to press continue button in continue menu,
// exit immediately (also set text background to gray and hide the button)
uint16_t errorPromptsEnabled = 0;
// Shown when some error happens, and menu is
// shown that reports error and has continue button
char * errorText = 0;
// Continue/abort menu header
char * promptHeader = 0;
// In continue/abort prompt tells what's changing
// ("you're about to lose...")
uint32_t whatIsChanging = 0;
uint32_t continueText = 0;
uint32_t abortText = 0;
// Select default entry:
// 0 = continue default
// !0 = abort default
uint16_t contAbortDefault = 0;
// Contains result from continue/abort prompt
// 0 = continue, 1 = abort
uint16_t contAbortResult = 0;
// On init function
Menu_SWOSMainMenu swosMainMenu = { { SWOSMainMenuInit, GlobalRetn, 0, 0x6 }, { 88, -24, 128, 76 }, { MENU_CMD_SPRITE_FG, 224 }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 1 }, MENU_MARK_BYTE_COORDS, { { 0, 64, -106, 16 }, { MENU_CMD_NAV, -1, 6, -1, 2 }, { MENU_CMD_COLORS, { 0x3 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aEditTactics }, { MENU_CMD_ONSELECT_FIRE, EditTacticsMenu }, MENU_CMD_END }, { { 0, 84, -106, 16 }, { MENU_CMD_NAV, -1, 7, 1, 3 }, { MENU_CMD_COLORS, { 0x8 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aEditCustomTeam }, { MENU_CMD_ONSELECT_FIRE, EditCustomTeamMenu }, MENU_CMD_END }, { { 0, 104, -106, 16 }, { MENU_CMD_NAV, -1, 8, 2, 4 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aHighlights_0 }, { MENU_CMD_ONSELECT_FIRE, HighlightsMenu }, MENU_CMD_END }, { { 0, 124, -106, 16 }, { MENU_CMD_NAV, -1, 9, 3, 5 }, { MENU_CMD_COLORS, { 0x8 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aOptions }, { MENU_CMD_ONSELECT_FIRE, OptionsMenuSelected }, MENU_CMD_END }, { { 0, -112, -106, 16 }, { MENU_CMD_NAV, -1, 10, 4, 11 }, { MENU_CMD_COLORS, { 0x3 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aSaveDiskFiling }, { MENU_CMD_ONSELECT_FIRE, SaveDiskFilingMenu }, MENU_CMD_END }, { { -102, 64, -106, 16 }, { MENU_CMD_NAV, 1, -1, -1, 7 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aFriendly_1 }, { MENU_CMD_ONSELECT_FIRE, FriendlyMenu }, MENU_CMD_END }, { { -102, 84, -106, 16 }, { MENU_CMD_NAV, 2, -1, 6, 8 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aDiyCompetition_0 }, { MENU_CMD_ONSELECT_FIRE, DIYCompetitionMenu }, MENU_CMD_END }, { { -102, 104, -106, 16 }, { MENU_CMD_NAV, 3, -1, 7, 9 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aPresetCompetit_0 }, { MENU_CMD_ONSELECT_FIRE, PresetCompetitionMenu }, MENU_CMD_END }, { { -102, 124, -106, 16 }, { MENU_CMD_NAV, 4, -1, 8, 10 }, { MENU_CMD_COLORS, { 0x4 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aSeason_1 }, { MENU_CMD_ONSELECT_FIRE, SeasonMenu }, MENU_CMD_END }, { { -102, -112, -106, 16 }, { MENU_CMD_NAV, 5, -1, 9, 11 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x10 }, aCareer_1 }, { MENU_CMD_ONSELECT_FIRE, CareerMenu }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, { 27, -88, -6, 14 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, StartContest }, MENU_CMD_END, { { 27, -67, -6, 14 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, &saveFileTitle }, { MENU_CMD_ONSELECT_FIRE, SaveContest }, MENU_CMD_END }, { { 27, -50, -6, 14 }, { MENU_CMD_NAV, -1, -1, 12, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aLoadOldCompeti }, { MENU_CMD_ONSELECT_FIRE, LoadOldCompetitionMenu }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, MENU_MARK_END_MENU };
const char aCjcHelp[] = "CJC HELP";
uint8_t saveFileTitle[70] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Team number of team that wants to buy our player
uint16_t teamOffering = 0;
uint16_t offerPrimaryPlayerOrdinal = 0;
// Number of extra player they want to buy from us
uint16_t numExtraPlayersWanted = 0;
uint16_t offerSwapPlayerOrdinal = 0;
uint16_t offerExtraPlayerOrdinal = 0;
// How much are they offering for our player
uint16_t offerAmount = 0;
uint16_t offerNegotiationStep1Amount = 0;
uint16_t offerNegotiationStep2Amount = 0;
// Show
// 0 - foreign
// 1 - domestic
// player market
uint16_t showDomesticPlayerMarket = 0;
// Flag set to 1 when a player transfer is completed.
uint16_t transferCompleted = 0;
uint8_t * transferReplacementPriorityTable[8] = { transferReplacementPriority_role0, transferReplacementPriority_role1, transferReplacementPriority_role2, transferReplacementPriority_role3, transferReplacementPriority_role4, transferReplacementPriority_role5, transferReplacementPriority_role6, transferReplacementPriority_role7 };
uint8_t transferReplacementPriority_role0[9] = { 0x0, 0x3, 0x6, 0x7, 0x1, 0x2, 0x4, 0x5, 0xFF };
uint8_t transferReplacementPriority_role1[9] = { 0x1, 0x3, 0x6, 0x7, 0x4, 0x2, 0x5, 0x0, 0xFF };
uint8_t transferReplacementPriority_role2[9] = { 0x2, 0x3, 0x6, 0x7, 0x5, 0x1, 0x4, 0x0, 0xFF };
uint8_t transferReplacementPriority_role3[9] = { 0x3, 0x6, 0x7, 0x1, 0x2, 0x4, 0x5, 0x0, 0xFF };
uint8_t transferReplacementPriority_role4[9] = { 0x4, 0x6, 0x3, 0x7, 0x1, 0x5, 0x2, 0x0, 0xFF };
uint8_t transferReplacementPriority_role5[9] = { 0x5, 0x6, 0x3, 0x7, 0x2, 0x4, 0x1, 0x0, 0xFF };
uint8_t transferReplacementPriority_role6[9] = { 0x6, 0x3, 0x7, 0x4, 0x5, 0x1, 0x2, 0x0, 0xFF };
uint8_t transferReplacementPriority_role7[9] = { 0x7, 0x6, 0x3, 0x4, 0x5, 0x1, 0x2, 0x0, 0xFF };
uint8_t * replacementPositionSearchOrderTable[8] = { replPosSearchOrderGK, replPosSearchOrderRB, replPosSearchOrderLB, replPosSearchOrderDef, replPosSearchOrderRW, replPosSearchOrderLW, replPosSearchOrderMid, replPosSearchOrderAtt };
// Replacement position search priority for GK, 0xFF-terminated.
uint8_t replPosSearchOrderGK[9] = { 0x0, 0x3, 0x6, 0x7, 0x1, 0x2, 0x4, 0x5, 0xFF };
// Replacement position search priority for RB, 0xFF-terminated.
uint8_t replPosSearchOrderRB[9] = { 0x1, 0x3, 0x2, 0x4, 0x6, 0x5, 0x7, 0x0, 0xFF };
// Replacement position search priority for LB, 0xFF-terminated.
uint8_t replPosSearchOrderLB[9] = { 0x2, 0x3, 0x1, 0x5, 0x6, 0x4, 0x7, 0x0, 0xFF };
// Replacement position search priority for Def, 0xFF-terminated.
uint8_t replPosSearchOrderDef[9] = { 0x3, 0x1, 0x2, 0x6, 0x4, 0x5, 0x7, 0x0, 0xFF };
// Replacement position search priority for RW, 0xFF-terminated.
uint8_t replPosSearchOrderRW[9] = { 0x4, 0x6, 0x5, 0x3, 0x1, 0x2, 0x7, 0x0, 0xFF };
// Replacement position search priority for LW, 0xFF-terminated.
uint8_t replPosSearchOrderLW[9] = { 0x5, 0x6, 0x4, 0x3, 0x2, 0x1, 0x7, 0x0, 0xFF };
// Replacement position search priority for Mid, 0xFF-terminated.
uint8_t replPosSearchOrderMid[9] = { 0x6, 0x4, 0x5, 0x3, 0x1, 0x2, 0x7, 0x0, 0xFF };
// Replacement position search priority for Att, 0xFF-terminated.
uint8_t replPosSearchOrderAtt[9] = { 0x7, 0x6, 0x4, 0x5, 0x3, 0x1, 0x2, 0x0, 0xFF };
// Cumulative probability weights for trialist skill adjustment.
uint8_t trialistSkillDistribution[20] = { 0x1, 0x1, 0x2, 0x2, 0x3, 0x4, 0x5, 0x8, 0xE, 0x14, 0xE, 0x8, 0x5, 0x4, 0x3, 0x2, 0x2, 0x1, 0x1, 0x0 };
// Skill bit masks per position for trialist generation.
uint8_t trialistSkillBitMasks[32] = { 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x80, 0x80, 0x0, 0x0, 0x80, 0x80, 0x0, 0x8, 0x80, 0x0, 0x0, 0x0, 0x8, 0x80, 0x0, 0x0, 0x8, 0x80, 0x8, 0x0, 0x80, 0x0, 0x0, 0x8, 0x0, 0x8 };
// Packed skill nibble templates for trialist generation.
uint8_t trialistSkillTemplates[512] = { 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 16, 0, 0, 1, 0, 16, 0, 0, 0, 4, 0, 1, 17, 16, 1, 0, 32, 2, 0, 16, 33, 0, 0, 0, 16, 16, 1, 16, 16, 16, 2, 16, 16, 0, 1, 2, 16, 1, 0, 0, 0, 6, 1, 1, 33, 17, 2, 16, 0, 16, 1, 18, 32, 16, 0, 1, 1, 65, 0, 0, 33, 17, 3, 0, 1, 0, 0, 16, 17, 18, 0, 0, 0, 8, 1, 32, 33, 64, 1, 1, 49, 33, 2, 33, 16, 0, 1, 1, 49, 33, 2, 33, 2, 16, 2, 33, 48, 1, 1, 19, 1, 17, 0, 0, 0, 11, 1, 2, 65, 19, 1, 16, 67, 64, 1, 3, 18, 50, 2, 16, 49, 32, 1, 19, 3, 49, 2, 34, 32, 19, 1, 21, 18, 34, 0, 0, 0, 14, 1, 20, 66, 49, 0, 16, 83, 50, 1, 34, 19, 50, 3, 34, 18, 48, 1, 19, 36, 20, 3, 17, 99, 32, 1, 34, 17, 38, 0, 0, 0, 16, 1, 17, 99, 51, 2, 33, 50, 98, 3, 37, 65, 17, 1, 33, 21, 113, 3, 33, 51, 49, 4, 50, 80, 20, 1, 50, 51, 36, 0, 0, 0, 19, 2, 33, 82, 114, 3, 53, 49, 65, 2, 51, 115, 19, 1, 36, 37, 52, 2, 33, 22, 114, 6, 19, 65, 33, 2, 51, 67, 37, 0, 0, 0, 24, 3, 49, 82, 114, 3, 37, 98, 66, 2, 51, 101, 51, 3, 49, 50, 98, 2, 53, 39, 68, 4, 34, 100, 66, 2, 38, 68, 38, 0, 0, 0, 28, 2, 67, 116, 100, 4, 35, 66, 114, 2, 71, 115, 52, 4, 36, 51, 115, 2, 66, 55, 116, 7, 68, 97, 50, 4, 55, 35, 53, 0, 0, 0, 31, 5, 67, 83, 115, 2, 66, 116, 116, 5, 55, 113, 53, 4, 53, 70, 98, 3, 65, 87, 117, 7, 82, 115, 52, 2, 54, 52, 71, 0, 0, 0, 35, 5, 54, 115, 116, 4, 65, 116, 116, 3, 87, 117, 85, 4, 84, 53, 115, 4, 50, 103, 117, 7, 83, 116, 68, 5, 71, 52, 55, 0, 0, 0, 38, 5, 84, 117, 116, 5, 83, 117, 117, 4, 87, 117, 102, 5, 86, 55, 117, 4, 69, 87, 116, 7, 69, 117, 83, 5, 87, 84, 87, 0, 0, 0, 41, 6, 102, 116, 118, 5, 86, 117, 115, 5, 71, 118, 69, 5, 70, 103, 118, 6, 86, 87, 117, 7, 86, 118, 99, 5, 87, 102, 87, 0, 0, 0, 46, 6, 102, 118, 118, 6, 102, 118, 118, 6, 103, 118, 102, 6, 102, 103, 118, 6, 102, 103, 118, 7, 102, 118, 102, 6, 103, 102, 103, 0, 0, 0, 48, 7, 119, 118, 118, 7, 103, 119, 119, 7, 119, 118, 118, 7, 119, 119, 119, 7, 118, 119, 119, 7, 119, 119, 102, 6, 119, 118, 103 };
// Temporary buffer for building a trialist player surname.
char trialistNameBuffer[23] = "\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000\000";
// End-of-buffer sentinel for trialistNameBuffer
uint8_t trialistNameBufTerminator  = 0;
// On init function
Menu_Offers offersMenu = { { OffersInit, OffersInit, 0, 2 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aOffers }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, -1, 6, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag_11 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 30 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, OffersCommon }, { MENU_CMD_AFTER_DRAW, OffersAfterDrawCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 21 }, { MENU_CMD_NAV, -1, -1, -1, 3 }, MENU_CMD_END }, { { 0, 30, 304, 21 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, MENU_CMD_END }, { { 0, 60, 304, 21 }, { MENU_CMD_NAV, -1, -1, 3, 5 }, MENU_CMD_END }, { { 0, 90, 304, 21 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, MENU_CMD_END }, { { 0, 120, 304, 21 }, { MENU_CMD_NAV, -1, -1, 5, 1 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, 0, 304, 21 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END, { { { 15, 0, 289, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 15, 10, 289, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, MENU_MARK_BYTE_COORDS, { { 0, 0, 15, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, MENU_MARK_END_MENU };
// Pointer to format string for single-player offer text.
char * offerFmtSinglePlayer = 0;
// Pointer to format string for two-player offer text.
char * offerFmtTwoPlayers = 0;
// Pointer to format string for single-player exchange offer.
char * exchangeFmtSinglePlayer = 0;
// Pointer to format string for two-player exchange offer.
char * exchangeFmtTwoPlayers = 0;
// Pointer to format string for multi-line offer header line 1.
char * offerFmtLine1a = 0;
// Pointer to format string for multi-line offer player name line.
char * offerFmtLine2a = 0;
// Pointer to format string for multi-line offer header variant.
char * offerFmtLine1b = 0;
// Pointer to format string for multi-line offer two-player line.
char * offerFmtLine2b = 0;
// Pointer to format string for multi-line exchange header.
char * exchangeFmtLine1a = 0;
// Pointer to format string for multi-line exchange player line.
char * exchangeFmtLine2a = 0;
// Pointer to format string for multi-line exchange header variant.
char * exchangeFmtLine1b = 0;
// Pointer to format string for multi-line exchange two-player line.
char * exchangeFmtLine2b[9] = { 0, aAsThisPlayerIs, aAsThesePlayers, (int8_t*)((uint8_t*)&aAsThesePlayers + 0x1), aAndWeWillAccep, (int8_t*)((uint8_t*)&aAndWeWillAccep + 0x1), aThisPlayerFrom, aAndWeWillAccep_0, aThisPlayerFrom };
// On init function
Menu_PlayerTransfer playerTransferMenu = { { TransferPlayerInit, TransferPlayerInit, 0, 0xB }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aResponseToOffe }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { { 0, 32, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 42, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 89, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { 0, 156, 304, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END, { 0, 166, 304, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { { -104, 65, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END }, { { -104, 110, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END }, { { -104, -126, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END } }, { { 112, 100, 80, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, { { { 31, -71, 120, 15 }, { MENU_CMD_NAV, -1, 11, -1, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aMakeImprovedOf }, { MENU_CMD_ONSELECT_FIRE, TransferPlayerOnSelect10 }, MENU_CMD_END }, { { -104, -71, 120, 15 }, { MENU_CMD_NAV, 10, -1, -1, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, TransferPlayerOnSelect11 }, MENU_CMD_END } }, { 92, -71, 120, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aContinue }, { MENU_CMD_ONSELECT_FIRE, TransferPlayerOnSelect12 }, MENU_CMD_END, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, TransferPlayerAfterDrawCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 55, 304, 8 }, MENU_CMD_END }, { { 0, 75, 304, 8 }, MENU_CMD_END }, { { 0, 120, 304, 8 }, MENU_CMD_END }, { { 0, 140, 304, 8 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint32_t sellExchangeStrings[4] = { 1397349, 1397381, 1397417, 1397448 };
// Table of 6 pairs of string pointers for sell/exchange response messages.
char * sellExchangeResponseStrings[12] = { 0, 0, aAsThisPlayerIs, aAsThesePlayers, (int8_t*)((uint8_t*)&aAsThesePlayers + 0x1), aAndWeWillAccep, (int8_t*)((uint8_t*)&aAndWeWillAccep + 0x1), aThisPlayerFrom, aAndWeWillAccep_0, aThesePlayersFr, aButWeWouldBeHa, aFavourableOffe };
// True if team is willing to sell/exchange player
uint16_t teamWillingToSellOrExchange = 0;
// Transfer player menu result: -1=reject, 0=accept, 1=counter.
uint16_t transferPlayerMenuResult = 0;
// On init function
Menu_ThirdPartyOffer thirdPartyOfferMenu = { { ThirdPartyOfferMenuInit, ThirdPartyOfferMenuInit, 0, 13 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aThirdPartyOffe }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { { 0, 32, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 42, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { 0, 42, 304, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END, { { 0, 89, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { { -104, 65, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END }, { { -104, 110, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END }, { { -104, -126, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END } }, { { 112, 100, 80, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, { { { 102, -103, 100, 15 }, { MENU_CMD_NAV, 10, 12, -1, 11 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewSquad }, { MENU_CMD_ONSELECT_FIRE, ThirdPartyOfferViewSquad }, MENU_CMD_END }, { { 0, -87, 101, 15 }, { MENU_CMD_NAV, -1, 11, 9, 13 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAcceptOffer }, { MENU_CMD_ONSELECT_FIRE, AcceptOffer }, MENU_CMD_END } }, { 102, -87, 100, 15 }, { MENU_CMD_NAV, 10, 12, 9, 13 }, { MENU_CMD_RIGHT_SKIP, 11, 0 }, { MENU_CMD_LEFT_SKIP, 11, 0 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAskForMore }, { MENU_CMD_ONSELECT_FIRE, AskForMore }, MENU_CMD_END, { { { -53, -87, 101, 15 }, { MENU_CMD_NAV, 11, -1, 9, 13 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aRejectOffer }, { MENU_CMD_ONSELECT_FIRE, RejectOffer }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, 10, 12, 11, -1 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aConsider }, { MENU_CMD_ONSELECT_FIRE, ConsiderOffer }, MENU_CMD_END } }, { 122, -71, 60, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ThirdPartyOfferMenuExit }, MENU_CMD_END, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, ThirdPartyOfferMenuAfterDrawCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 55, 304, 8 }, MENU_CMD_END }, { { 0, 75, 304, 8 }, MENU_CMD_END }, { { 0, 120, 304, 8 }, MENU_CMD_END }, { { 0, 140, 304, 8 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, MENU_MARK_END_MENU };
// -1 = No offer
// 0 = we want to buy player
// 1 = we want to improve our offer
// 2 = we wish to further improve our offer
// 3 = we refuse to further improve our offer
// 4 = we withdraw our offer <- rest
uint16_t offerStatus = 0;
// Third-party offer menu result: 0=consider, 1=accept, 2=reject, 3=ask for more.
uint16_t thirdPartyOfferResult = 0;
// On init function
Menu_PlayerOffers playerOffersMenu = { { PlayerOffersInit, PlayerOffersInit, 0, 9 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aMakeOffer }, MENU_CMD_END }, { { 92, 20, 120, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 0, 32, 304, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aDearSirMadam }, MENU_CMD_END }, { { { 0, 42, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 89, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, MENU_MARK_BYTE_COORDS, { { { -104, 65, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END }, { { -104, 110, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END }, { { -104, -126, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, MENU_CMD_END } }, { { 0, 65, 14, 8 }, { MENU_CMD_NAV, -1, 9, -1, 9 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, { MENU_CMD_ONSELECT_FIRE, PlayerOffersOnSelect8 }, MENU_CMD_END }, { 112, 100, 80, 8 }, { MENU_CMD_NAV, 8, 10, 8, 11 }, { MENU_CMD_COLORS, { 0xB } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, { MENU_CMD_INPUT_FUNC, 0x3C1, PlayerOffersAdjustOfferAmount }, MENU_CMD_END, { { { -54, 100, 14, 8 }, { MENU_CMD_NAV, 9, -1, 8, 11 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, { MENU_CMD_ONSELECT_FIRE, PlayerOffersOnSelect10 }, MENU_CMD_END }, { { 0, -126, 14, 8 }, { MENU_CMD_NAV, -1, -1, 9, 12 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlus }, { MENU_CMD_ONSELECT_FIRE, PlayerOffersOnSelect11 }, MENU_CMD_END }, { { 102, -91, 100, 15 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aConfirmOffer }, { MENU_CMD_ONSELECT_FIRE, PlayerOffersOnSelect12 }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 12, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, PlayerOffersOnSelect13 }, MENU_CMD_END } }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, PlayerOffersAfterDrawCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 55, 304, 8 }, MENU_CMD_END }, { { 0, 75, 304, 8 }, MENU_CMD_END }, { { 0, 120, 304, 8 }, MENU_CMD_END }, { { 0, 140, 304, 8 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, MENU_MARK_END_MENU };
// On init function
Menu_ViewSquad viewSquadMenu = { { ViewSquadInit, 0, 0, 2 }, MENU_MARK_BYTE_COORDS, { { 57, 0, -66, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { 82, 16, -116, 10 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, 3, 20, 3 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ViewSquadExitContinue }, MENU_CMD_END }, { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, -1, 2, -1 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aContinue }, { MENU_CMD_ONSELECT_FIRE, ViewSquadExitContinue }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 27 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, ViewSquadAfterDrawCommon }, { MENU_CMD_ONSELECT_FIRE, ViewSquadCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 8 }, { MENU_CMD_NAV, -1, -1, -1, 5 }, MENU_CMD_END }, { { 0, 9, 304, 8 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, MENU_CMD_END }, { { 0, 18, 304, 8 }, { MENU_CMD_NAV, -1, -1, 5, 7 }, MENU_CMD_END }, { { 0, 27, 304, 8 }, { MENU_CMD_NAV, -1, -1, 6, 8 }, MENU_CMD_END }, { { 0, 36, 304, 8 }, { MENU_CMD_NAV, -1, -1, 7, 9 }, MENU_CMD_END }, { { 0, 45, 304, 8 }, { MENU_CMD_NAV, -1, -1, 8, 10 }, MENU_CMD_END }, { { 0, 54, 304, 8 }, { MENU_CMD_NAV, -1, -1, 9, 11 }, MENU_CMD_END }, { { 0, 63, 304, 8 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, MENU_CMD_END }, { { 0, 72, 304, 8 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, MENU_CMD_END }, { { 0, 81, 304, 8 }, { MENU_CMD_NAV, -1, -1, 12, 14 }, MENU_CMD_END }, { { 0, 90, 304, 8 }, { MENU_CMD_NAV, -1, -1, 13, 15 }, MENU_CMD_END }, { { 0, 101, 304, 8 }, { MENU_CMD_NAV, -1, -1, 14, 16 }, MENU_CMD_END }, { { 0, 110, 304, 8 }, { MENU_CMD_NAV, -1, -1, 15, 17 }, MENU_CMD_END }, { { 0, 119, 304, 8 }, { MENU_CMD_NAV, -1, -1, 16, 18 }, MENU_CMD_END }, { { 0, 128, 304, 8 }, { MENU_CMD_NAV, -1, -1, 17, 19 }, MENU_CMD_END }, { { 0, 137, 304, 8 }, { MENU_CMD_NAV, -1, -1, 18, 20 }, MENU_CMD_END } }, { 23, 148, 281, 8 }, { MENU_CMD_NAV, 21, -1, 19, 2 }, { MENU_CMD_LEFT_SKIP, 22, 2 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, MENU_MARK_BYTE_COORDS, { 13, -108, 10, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, 20, 19, 2 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, ViewSquadOnSelect21 }, { MENU_CMD_AFTER_DRAW, ViewSquad21AfterDraw }, MENU_CMD_END, { { 0, 0, 0, 0 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, -1, 21, -1 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, MENU_MARK_WIDE_COORDS, { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END, MENU_MARK_END_MENU };
TeamFile * squadTeamPtr = 0;
uint32_t viewSquadTitle = 0;
uint32_t viewSquadFlags = 0;
uint32_t viewSquadMaskLo = 0;
uint32_t viewSquadMaskHi = 0;
uint16_t viewSquadArg2 = 0;
uint16_t viewSquadArg3 = 0;
uint8_t pad_1448F2[2] = { 0, 0 };
uint16_t viewSquadSelectedPlayer = 0;
uint16_t viewSquadSelectedTeam = 0;
// On init function
Menu_BuyOtherPlayers buyOtherPlayersMenu = { { BuyOtherPlayersInit, BuyOtherPlayersFinish, 0, 2 }, MENU_MARK_BYTE_COORDS, { { 67, 0, -86, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { 82, 16, -116, 10 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, -1, 18, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag_10 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 27 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, BuyOtherPlayersAfterDrawCommon }, { MENU_CMD_ONSELECT_FIRE, BuyOtherPlayersCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 8 }, { MENU_CMD_NAV, -1, -1, -1, 4 }, MENU_CMD_END }, { { 0, 9, 304, 8 }, { MENU_CMD_NAV, -1, -1, 3, 5 }, MENU_CMD_END }, { { 0, 18, 304, 8 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, MENU_CMD_END }, { { 0, 27, 304, 8 }, { MENU_CMD_NAV, -1, -1, 5, 7 }, MENU_CMD_END }, { { 0, 36, 304, 8 }, { MENU_CMD_NAV, -1, -1, 6, 8 }, MENU_CMD_END }, { { 0, 45, 304, 8 }, { MENU_CMD_NAV, -1, -1, 7, 9 }, MENU_CMD_END }, { { 0, 54, 304, 8 }, { MENU_CMD_NAV, -1, -1, 8, 10 }, MENU_CMD_END }, { { 0, 63, 304, 8 }, { MENU_CMD_NAV, -1, -1, 9, 11 }, MENU_CMD_END }, { { 0, 72, 304, 8 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, MENU_CMD_END }, { { 0, 81, 304, 8 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, MENU_CMD_END }, { { 0, 90, 304, 8 }, { MENU_CMD_NAV, -1, -1, 12, 14 }, MENU_CMD_END }, { { 0, 101, 304, 8 }, { MENU_CMD_NAV, -1, -1, 13, 15 }, MENU_CMD_END }, { { 0, 110, 304, 8 }, { MENU_CMD_NAV, -1, -1, 14, 16 }, MENU_CMD_END }, { { 0, 119, 304, 8 }, { MENU_CMD_NAV, -1, -1, 15, 17 }, MENU_CMD_END }, { { 0, 128, 304, 8 }, { MENU_CMD_NAV, -1, -1, 16, 18 }, MENU_CMD_END }, { { 0, 137, 304, 8 }, { MENU_CMD_NAV, -1, -1, 17, 2 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END, MENU_MARK_END_MENU };
// Pointer to title string for buy other domestic/foreign player menu.
char * buyOtherPlayersTitlePtr = 0;
// Pointer to the offering team TeamFile data.
void * buyOtherPlayersTeamPtr = 0;
// On init function
Menu_ShowPlayerMarket showPlayerMarketMenu = { { ShowPlayerMarketInit, ShowPlayerMarket, 0, 7 }, MENU_MARK_BYTE_COORDS, { { 62, 0, -76, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { 92, 20, 120, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, { { -104, 32, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aCriteria }, MENU_CMD_END }, { { 8, 44, 59, 10 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aType }, MENU_CMD_END }, { { 68, 44, 80, 10 }, { MENU_CMD_NAV, -1, 6, -1, 7 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &positionFilterStringTable }, { MENU_CMD_ONSELECT_FIRE, PlayerMarketFilterPositionOnSelect }, MENU_CMD_END }, { { -98, 44, 59, 10 }, { MENU_CMD_COLORS, { 0x9 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSkills }, MENU_CMD_END }, { -38, 44, 80, 10 }, { MENU_CMD_NAV, 4, -1, -1, 7 }, { MENU_CMD_UP_SKIP, 6, 2 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &skillFilterStringTable }, { MENU_CMD_ONSELECT_FIRE, PlayerMarketFilterAgeGroupOnSelect }, MENU_CMD_END, { { 102, 59, 100, 10 }, { MENU_CMD_NAV, 4, 6, 4, 10 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aList }, { MENU_CMD_ONSELECT_FIRE, PlayerMarketScrollOnSelect }, MENU_CMD_END }, { { 112, -90, 80, 15 }, { MENU_CMD_NAV, -1, -1, 19, 9 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewSquad }, { MENU_CMD_ONSELECT_FIRE, PlayerMarketViewSquadOnSelect }, MENU_CMD_END }, { { 112, -71, 80, 15 }, { MENU_CMD_NAV, -1, -1, 8, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitPlayerMarketMenu }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 73 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, PlayerMarketItemBeforeDraw }, { MENU_CMD_ONSELECT_FIRE, PlayerMarketItemOnSelect }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 8 }, { MENU_CMD_NAV, -1, -1, 7, 11 }, MENU_CMD_END }, { { 0, 9, 304, 8 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, MENU_CMD_END }, { { 0, 18, 304, 8 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, MENU_CMD_END }, { { 0, 27, 304, 8 }, { MENU_CMD_NAV, -1, -1, 12, 14 }, MENU_CMD_END }, { { 0, 36, 304, 8 }, { MENU_CMD_NAV, -1, -1, 13, 15 }, MENU_CMD_END }, { { 0, 45, 304, 8 }, { MENU_CMD_NAV, -1, -1, 14, 16 }, MENU_CMD_END }, { { 0, 54, 304, 8 }, { MENU_CMD_NAV, -1, -1, 15, 17 }, MENU_CMD_END }, { { 0, 63, 304, 8 }, { MENU_CMD_NAV, -1, -1, 16, 18 }, MENU_CMD_END }, { { 0, 72, 304, 8 }, { MENU_CMD_NAV, -1, -1, 17, 19 }, MENU_CMD_END }, { { 0, 81, 304, 8 }, { MENU_CMD_NAV, -1, -1, 18, 8 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END, MENU_MARK_END_MENU };
// Menu string table for player market position filter.
uint32_t positionFilterStringTable = 1332050;
// Menu string table for player market skill rating and continent filter.
uint32_t skillFilterStringTable = 1332054;
// Table of 4 pointers to byte arrays mapping position filter to sub-position indices.
uint32_t positionGroupTable = 1330826;
// Position sub-indices for goalkeeper filter: {0, 0xFF}.
uint8_t positionGroupGoalkeeper[2] = { 0x0, 0xFF };
// Position sub-indices for defender filter: {1, 2, 3, 0xFF}.
uint8_t positionGroupDefender[4] = { 0x1, 0x2, 0x3, 0xFF };
// Position sub-indices for midfielder filter: {4, 5, 6, 0xFF}.
uint8_t positionGroupMidfielder[4] = { 0x4, 0x5, 0x6, 0xFF };
// Position sub-indices for attacker filter: {7, 0xFF}.
uint8_t positionGroupAttacker[2] = { 0x7, 0xFF };
// List of menu entry indices to redraw after updating player market filter.
int16_t filterMenuRedrawList[3] = { 4, 6, -1 };
uint16_t playerMarketFilterPosition = 0;
uint16_t playerMarketFilterRatingIndex = 0;
uint16_t playerMarketFilterAgeGroup = 0;
uint16_t playerMarketFilterCountry = 0;
uint16_t playerMarketListScrollOffset = 0;
uint16_t playerMarketVisibleItemCount = 0;
uint16_t playerMarketTotalMatchCount = 0;
uint8_t pad_145360[2] = { 0, 255 };
uint16_t playerMarketVisibleItems = 0;
uint8_t pad_145364[38] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// On init function
Menu_BuyPlayer buyPlayerMenu = { { BuyPlayerInit, BuyPlayerInit, 0, 2 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aBuyPlayer }, MENU_CMD_END }, { { 92, 32, 120, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, { { 57, 55, -66, 15 }, { MENU_CMD_NAV, -1, -1, -1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewDomesticPl }, { MENU_CMD_ONSELECT_FIRE, ViewDomesticPlayerMarket }, MENU_CMD_END }, { { 57, 80, -66, 15 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewForeignPla }, { MENU_CMD_ONSELECT_FIRE, ViewForeignPlayerMarket }, MENU_CMD_END }, { { 57, 105, -66, 15 }, { MENU_CMD_NAV, -1, -1, 3, 5 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aBuyOtherDomest }, { MENU_CMD_ONSELECT_FIRE, BuyOtherDomesticPlayer }, MENU_CMD_END }, { { 57, -126, -66, 15 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aBuyOtherForeig }, { MENU_CMD_ONSELECT_FIRE, BuyOtherForeignPlayer }, MENU_CMD_END }, { { 102, -101, 100, 15 }, { MENU_CMD_NAV, -1, -1, 5, 7 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewSquad }, { MENU_CMD_ONSELECT_FIRE, BuyPlayerViewSquad }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, -1, 6, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, BuyPlayerExit }, MENU_CMD_END }, MENU_MARK_END_MENU };
// On init function
Menu_TransferMarket transferMarketMenu = { { TransferMarketInit, TransferMarketFinish, 0, 2 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTransferMarket }, MENU_CMD_END }, { { 92, 24, 120, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END }, { { 102, 40, 100, 15 }, { MENU_CMD_NAV, -1, -1, -1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aBuyPlayer }, { MENU_CMD_ONSELECT_FIRE, BuyPlayerMenu }, MENU_CMD_END }, { { 102, 65, 100, 15 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewOffers }, { MENU_CMD_ONSELECT_FIRE, ViewOffersMenu }, MENU_CMD_END }, { { 62, 90, -76, 15 }, { MENU_CMD_NAV, -1, -1, 3, 9 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPutPlayerOnTra_0 }, { MENU_CMD_ONSELECT_FIRE, PutPlayerOnMarketMenu }, MENU_CMD_END }, { { 0, -71, 121, 15 }, { MENU_CMD_NAV, -1, 6, 13, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aGiveFreeTransf }, { MENU_CMD_ONSELECT_FIRE, GiveFreeTransfer }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, 5, 7, 13, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, jmp_SetExitMenuFlag_8 }, MENU_CMD_END }, { { -73, -71, 121, 15 }, { MENU_CMD_NAV, 6, -1, 13, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aTakeOffMarket }, { MENU_CMD_ONSELECT_FIRE, TakeOffMarketMenu }, MENU_CMD_END }, { { -104, 115, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aPlayersCurrent }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 130 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, TransferMarketAfterDrawCommon }, { MENU_CMD_ONSELECT_FIRE, TransferMarketCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 8 }, { MENU_CMD_NAV, -1, -1, 4, 10 }, MENU_CMD_END }, { { 0, 9, 304, 8 }, { MENU_CMD_NAV, -1, -1, 9, 11 }, MENU_CMD_END }, { { 0, 18, 304, 8 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, MENU_CMD_END }, { { 0, 27, 304, 8 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, MENU_CMD_END }, { { 0, 36, 304, 8 }, { MENU_CMD_NAV, -1, -1, 12, 6 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END, MENU_MARK_END_MENU };
// List of menu entry indices to redraw in the buy player screen.
int16_t buyPlayerRedrawList[3] = { 5, 7, -1 };
uint16_t playerSelected = 0;
uint16_t viewFutureTeamModeFlag = 0;
uint8_t offerLifespanTable[16] = { 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 5, 6 };
uint16_t offerPrimaryPositionMask = 0;
uint16_t offerExtraPositionMask = 0;
uint16_t offerTargetValueBase = 0;
uint16_t offerValueBaseSum = 0;
uint16_t offerSwapValueBaseSum = 0;
uint8_t offerCandidateTeamIndexBuffer[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// Random multiplier factor for swap player valuation.
uint16_t swapPlayerValueRandom = 0;
// Random multiplier factor for extra player valuation.
uint16_t extraPlayerValueRandom = 0;
uint16_t careerAddIntlPlayerResult = 0;
void * careerAddIntlPlayerSelectedSrcPlayerPtr = 0;
char * careerAddIntlPlayerSelectedSrcPlayerNamePtr = 0;
uint8_t careerDefaultInternationalSquadSlotsTable[12] = { 1, 2, 5, 6, 3, 9, 4, 7, 11, 10, 8, 0 };
// On init function
Menu_SelectNationalTeam selectNationalTeamMenu = { { SelectNationalTeamInit, SelectNationalTeamFinish, 0, 4 }, { 57, -10, 190, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x10 } }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 32, 11, -16, 10 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { { -104, 16, 0, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aToReplace }, MENU_CMD_END }, { { { 0, -71, 121, 15 }, { MENU_CMD_NAV, -1, 4, 24, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAddPlayer }, { MENU_CMD_ONSELECT_FIRE, NationalTeamAddPlayer }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, 3, 5, 24, 5 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, SelectNationalTeamExit }, MENU_CMD_END } }, { 122, -71, 60, 15 }, { MENU_CMD_NAV, 4, 6, 4, -1 }, { MENU_CMD_RIGHT_SKIP, 5, 0 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAbort }, { MENU_CMD_ONSELECT_FIRE, SelectNationalTeamAbort }, MENU_CMD_END, { { -73, -71, 121, 15 }, { MENU_CMD_NAV, 5, -1, 24, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aRemovePlayers }, { MENU_CMD_ONSELECT_FIRE, NationalTeamRemovePlayers }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 27 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, SelectNationalTeamAfterDrawCommon }, { MENU_CMD_ONSELECT_FIRE, SelectNationalTeamCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { 0, -24, 1, 8 }, MENU_CMD_END }, { { { 0, 0, 304, 8 }, { MENU_CMD_NAV, -1, -1, -1, 9 }, MENU_CMD_END }, { { 0, 9, 304, 8 }, { MENU_CMD_NAV, -1, -1, 8, 10 }, MENU_CMD_END }, { { 0, 18, 304, 8 }, { MENU_CMD_NAV, -1, -1, 9, 11 }, MENU_CMD_END }, { { 0, 27, 304, 8 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, MENU_CMD_END }, { { 0, 36, 304, 8 }, { MENU_CMD_NAV, -1, -1, 11, 13 }, MENU_CMD_END }, { { 0, 45, 304, 8 }, { MENU_CMD_NAV, -1, -1, 12, 14 }, MENU_CMD_END }, { { 0, 54, 304, 8 }, { MENU_CMD_NAV, -1, -1, 13, 15 }, MENU_CMD_END }, { { 0, 63, 304, 8 }, { MENU_CMD_NAV, -1, -1, 14, 16 }, MENU_CMD_END }, { { 0, 72, 304, 8 }, { MENU_CMD_NAV, -1, -1, 15, 17 }, MENU_CMD_END }, { { 0, 81, 304, 8 }, { MENU_CMD_NAV, -1, -1, 16, 18 }, MENU_CMD_END }, { { 0, 90, 304, 8 }, { MENU_CMD_NAV, -1, -1, 17, 19 }, MENU_CMD_END }, { { 0, 101, 304, 8 }, { MENU_CMD_NAV, -1, -1, 18, 20 }, MENU_CMD_END }, { { 0, 110, 304, 8 }, { MENU_CMD_NAV, -1, -1, 19, 21 }, MENU_CMD_END }, { { 0, 119, 304, 8 }, { MENU_CMD_NAV, -1, -1, 20, 22 }, MENU_CMD_END }, { { 0, 128, 304, 8 }, { MENU_CMD_NAV, -1, -1, 21, 23 }, MENU_CMD_END }, { { 0, 137, 304, 8 }, { MENU_CMD_NAV, -1, -1, 22, 24 }, MENU_CMD_END } }, { 23, 148, 281, 8 }, { MENU_CMD_NAV, 25, -1, 23, 4 }, { MENU_CMD_LEFT_SKIP, 26, 2 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, MENU_MARK_BYTE_COORDS, { 13, -108, 10, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, 24, 23, 4 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, SelectNationalTeamOnSelect25 }, { MENU_CMD_AFTER_DRAW, SelectNationalTeam25AfterDraw }, MENU_CMD_END, { { 0, 0, 0, 0 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, -1, 25, -1 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, MENU_MARK_WIDE_COORDS, { { 0, 0, 304, 8 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { 2, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 13, 0, 10, 8 }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END }, { { 24, 0, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -47, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -45, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -21, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { { -24, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 181 }, MENU_CMD_END }, { { -17, 0, 7, 7 }, { MENU_CMD_SPRITE_FG, 182 }, MENU_CMD_END }, { { -45, 0, 9, 8 }, { MENU_CMD_SPRITE_FG, 189 }, MENU_CMD_END } }, { { -13, 0, 30, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 272, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint32_t careerIntlPlayersRemoveMask = 0;
uint32_t careerIntlPlayersWrongTypeMask = 0;
uint32_t careerIntlPlayersSelectableMask = 0;
uint16_t selectNationalTeamMenuResult = 0;
uint16_t careerNationalTeamHasPendingAddPlayer = 0;
uint8_t careerIntlPlayerSelectedPlayerDataCopy[26] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t careerIntlPlayerSelectedTeamName[18] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint16_t careerAddIntlPlayerSelectedTeamNumber = 0;
uint16_t careerAddIntlPlayerSelectedPlayerOrdinal = 0;
// On init function
Menu_NationalTeamAddPlayer nationalTeamAddPlayerMenu = { { NationalTeamAddPlayerInit, 0, 0, 1 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAddPlayer }, MENU_CMD_END }, { { 57, 70, -66, 15 }, { MENU_CMD_NAV, -1, -1, -1, 2 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAddInternation }, { MENU_CMD_ONSELECT_FIRE, NationalTeamAddPlayerHomeOnSelect }, MENU_CMD_END }, { { 57, 95, -66, 15 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAddInternation_0 }, { MENU_CMD_ONSELECT_FIRE, NationalTeamAddPlayerAbroadOnSelect }, MENU_CMD_END }, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, -1, 2, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, NationalTeamAddPlayerExit }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint16_t careerNationalTeamAddPlayerType = 0;
// On init function
Menu_PlayMatch playMatchMenu = { { PlayMatchMenuInit, PlayMatchMenuReinit, 0, 9 }, { MENU_MARK_START_MENU, 0, -20 }, MENU_MARK_BYTE_COORDS, { 3, 6, 16, 16 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { { 82, 0, -116, 12 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { -104, 14, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, { { { 0, -44, 55, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aCoach_4 }, MENU_CMD_END }, { { 44, -44, -114, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END } }, { { 0, -99, 105, 10 }, { MENU_CMD_NAV, -1, 8, 29, 6 }, { MENU_CMD_COLORS, { 0x8 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aUseMatchTeam }, { MENU_CMD_ONSELECT_FIRE, UseMatchTeamSelect }, MENU_CMD_END }, { 0, -73, 42, 18 }, { MENU_CMD_NAV, -1, 50, 5, 9 }, { MENU_CMD_UP_SKIP, 6, 2 }, { MENU_CMD_RIGHT_SKIP, 9, 3 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_MULTILINE, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, TogglePlayerCoach }, MENU_CMD_END, { { -84, -34, 62, 15 }, { MENU_CMD_NAV, 8, 10, 54, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewOppo }, { MENU_CMD_ONSELECT_FIRE, ViewOpponentsSelect }, MENU_CMD_END }, { 113, -34, 52, 15 }, { MENU_CMD_NAV, 9, 7, 6, -1 }, { MENU_CMD_RIGHT_SKIP, 9, 0 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitPlayMatch }, MENU_CMD_END, { 0, -38, 106, 23 }, { MENU_CMD_NAV, -1, 8, 6, -1 }, { MENU_CMD_UP_SKIP, 9, 2 }, { MENU_CMD_RIGHT_SKIP, 9, 1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, PlayMatchSelected }, MENU_CMD_END, { { -21, -34, 68, 15 }, { MENU_CMD_NAV, 7, -1, 55, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aEditTactics }, { MENU_CMD_ONSELECT_FIRE, EditTacticsInPlayMatchMenu }, MENU_CMD_END }, { 0, 0, 0, 0 }, { MENU_CMD_ONSELECT_FIRE, ReturnFromViewOpponent }, MENU_CMD_END, { { 0, -84, -84, 9 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, DrawPlayerEntries }, { MENU_CMD_ONSELECT_FIRE, OnSwapPlayer }, MENU_CMD_END, { { { 23, 24, 82, 8 }, { MENU_CMD_NAV, -1, 38, -1, 14 }, MENU_CMD_END }, { { 23, 33, 82, 8 }, { MENU_CMD_NAV, -1, 38, 13, 15 }, MENU_CMD_END }, { { 23, 42, 82, 8 }, { MENU_CMD_NAV, -1, 38, 14, 16 }, MENU_CMD_END }, { { 23, 51, 82, 8 }, { MENU_CMD_NAV, -1, 38, 15, 17 }, MENU_CMD_END }, { { 23, 60, 82, 8 }, { MENU_CMD_NAV, -1, 38, 16, 18 }, MENU_CMD_END }, { { 23, 69, 82, 8 }, { MENU_CMD_NAV, -1, 38, 17, 19 }, MENU_CMD_END }, { { 23, 78, 82, 8 }, { MENU_CMD_NAV, -1, 38, 18, 20 }, MENU_CMD_END }, { { 23, 87, 82, 8 }, { MENU_CMD_NAV, -1, 38, 19, 21 }, MENU_CMD_END }, { { 23, 96, 82, 8 }, { MENU_CMD_NAV, -1, 38, 20, 22 }, MENU_CMD_END }, { { 23, 105, 82, 8 }, { MENU_CMD_NAV, -1, 38, 21, 23 }, MENU_CMD_END }, { { 23, 114, 82, 8 }, { MENU_CMD_NAV, -1, 38, 22, 24 }, MENU_CMD_END } }, { 23, 125, 82, 8 }, { MENU_CMD_NAV, -1, 38, 23, 25 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END, { 23, -122, 82, 8 }, { MENU_CMD_NAV, -1, 38, 24, 26 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END, { 23, -113, 82, 8 }, { MENU_CMD_NAV, -1, 38, 25, 27 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END, { 23, -104, 82, 8 }, { MENU_CMD_NAV, -1, 38, 26, 28 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END, { 23, -95, 82, 8 }, { MENU_CMD_NAV, -1, 41, 27, 29 }, { MENU_CMD_UP_SKIP, 29, 2 }, MENU_CMD_END, { 23, -84, 82, 8 }, { MENU_CMD_NAV, 30, 44, 28, 5 }, { MENU_CMD_UP_SKIP, 29, 2 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { 0, -84, 12, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, -1, 29, 28, 5 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, PlayMatchOnSelect30 }, { MENU_CMD_AFTER_DRAW, PlayMatch30AfterDraw }, MENU_CMD_END, { 0, 0, 12, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { { 13, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 23, 0, 82, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 106, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -127, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { -117, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { 0, 0, 12, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { MENU_MARK_START_MENU, 172, 131 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_ONSELECT_FIRE, PlayMatchChangeTactics }, MENU_CMD_END, { 0, 0, 43, 9 }, { MENU_CMD_NAV, 27, 39, -1, 41 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a442 }, MENU_CMD_END, { 44, 0, 43, 9 }, { MENU_CMD_NAV, 38, 40, -1, 42 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a541 }, MENU_CMD_END, { 88, 0, 43, 9 }, { MENU_CMD_NAV, 39, -1, -1, 43 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a451 }, MENU_CMD_END, { 0, 10, 43, 9 }, { MENU_CMD_NAV, 27, 42, 38, 44 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a532 }, MENU_CMD_END, { 44, 10, 43, 9 }, { MENU_CMD_NAV, 41, 43, 39, 45 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a352 }, MENU_CMD_END, { 88, 10, 43, 9 }, { MENU_CMD_NAV, 42, -1, 40, 46 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a433 }, MENU_CMD_END, { 0, 20, 43, 9 }, { MENU_CMD_NAV, 28, 45, 41, 47 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a424 }, MENU_CMD_END, { 44, 20, 43, 9 }, { MENU_CMD_NAV, 44, 46, 42, 48 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a343 }, MENU_CMD_END, { 88, 20, 43, 9 }, { MENU_CMD_NAV, 45, -1, 43, 49 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSweep }, MENU_CMD_END, { 0, 30, 43, 9 }, { MENU_CMD_NAV, 29, 48, 44, 50 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a523 }, MENU_CMD_END, { 44, 30, 43, 9 }, { MENU_CMD_NAV, 47, 49, 45, 50 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAttack }, MENU_CMD_END, { 88, 30, 43, 9 }, { MENU_CMD_NAV, 48, -1, 46, 51 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDefend }, MENU_CMD_END, { 0, 40, 65, 9 }, { MENU_CMD_NAV, 6, 51, 47, 52 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERA }, MENU_CMD_END, { 66, 40, 65, 9 }, { MENU_CMD_NAV, 50, -1, 49, 53 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERB }, MENU_CMD_END, { 0, 50, 65, 9 }, { MENU_CMD_NAV, 6, 53, 50, 54 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERC }, MENU_CMD_END, { 66, 50, 65, 9 }, { MENU_CMD_NAV, 52, -1, 51, 55 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERD }, MENU_CMD_END, { 0, 60, 65, 9 }, { MENU_CMD_NAV, 6, 55, 52, 7 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERE }, MENU_CMD_END, { 66, 60, 65, 9 }, { MENU_CMD_NAV, 54, -1, 53, 10 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERF }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 172, 4 }, { { 0, 0, -124, 125 }, { MENU_CMD_SPRITE_FG, 225 }, MENU_CMD_END }, { { { 66, 12, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END }, { { 3, 25, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 63, 35, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { 69, 35, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -127, 25, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { 3, 55, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 63, 65, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { 69, 65, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { -127, 55, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { 63, 85, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { 69, 85, 0, 6 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, MENU_MARK_END_MENU };
uint16_t sidePitchPositionsDefault[33] = { 0x42, 0x6, 0x0, 0x3, 0x23, 0x8000, 0x3F, 0x19, 0x4000, 0x45, 0x19, 0x8000, 0x81, 0x23, 0x4000, 0x3, 0x4B, 0x8000, 0x42, 0x37, 0x0, 0x42, 0x41, 0x0, 0x81, 0x4B, 0x4000, 0x3F, 0x64, 0x4000, 0x45, 0x64, 0x8000 };
uint16_t sidePitchPositions_5_4_1[33] = { 0x42, 0x6, 0x0, 0x3, 0x28, 0x8000, 0x42, 0x14, 0x0, 0x45, 0x1E, 0x8000, 0x81, 0x28, 0x4000, 0x3F, 0x41, 0x4000, 0x3F, 0x1E, 0x4000, 0x42, 0x37, 0x0, 0x45, 0x41, 0x8000, 0x42, 0x4B, 0x0, 0x42, 0x64, 0x0 };
uint16_t sidePitchPositions_4_5_1[33] = { 0x42, 0x6, 0x0, 0x3, 0x23, 0x8000, 0x3F, 0x19, 0x4000, 0x45, 0x19, 0x8000, 0x81, 0x23, 0x4000, 0x3, 0x4B, 0x8000, 0x42, 0x37, 0x0, 0x45, 0x41, 0x8000, 0x81, 0x4B, 0x4000, 0x3F, 0x41, 0x4000, 0x42, 0x64, 0x0 };
uint16_t sidePitchPositions_5_3_2[33] = { 0x42, 0x6, 0x0, 0x3, 0x28, 0x8000, 0x42, 0x14, 0x0, 0x45, 0x1E, 0x8000, 0x81, 0x28, 0x4000, 0x3, 0x3C, 0x8000, 0x3F, 0x1E, 0x4000, 0x42, 0x46, 0x0, 0x81, 0x3C, 0x4000, 0x3F, 0x64, 0x4000, 0x45, 0x64, 0x8000 };
uint16_t sidePitchPositions_3_5_2[33] = { 0x42, 0x6, 0x0, 0x3F, 0x23, 0x4000, 0x42, 0x19, 0x0, 0x45, 0x37, 0x8000, 0x45, 0x23, 0x8000, 0x3, 0x41, 0x8000, 0x3F, 0x37, 0x4000, 0x42, 0x4B, 0x0, 0x81, 0x41, 0x4000, 0x3F, 0x64, 0x4000, 0x45, 0x64, 0x8000 };
uint16_t sidePitchPositions_4_3_3[33] = { 0x42, 0x6, 0x0, 0x3, 0x23, 0x8000, 0x3F, 0x19, 0x4000, 0x45, 0x19, 0x8000, 0x81, 0x23, 0x4000, 0x3, 0x46, 0x8000, 0x42, 0x3C, 0x0, 0x45, 0x5F, 0x8000, 0x81, 0x46, 0x4000, 0x3F, 0x5F, 0x4000, 0x42, 0x69, 0x0 };
uint16_t sidePitchPositions_4_2_4[33] = { 0x42, 0x6, 0x0, 0x3, 0x23, 0x8000, 0x3F, 0x19, 0x4000, 0x45, 0x19, 0x8000, 0x81, 0x23, 0x4000, 0x3, 0x5A, 0x8000, 0x3F, 0x3C, 0x4000, 0x45, 0x3C, 0x8000, 0x81, 0x5A, 0x4000, 0x42, 0x64, 0x0, 0x42, 0x6E, 0x0 };
uint16_t sidePitchPositions_3_4_3[33] = { 0x42, 0x6, 0x0, 0x3F, 0x23, 0x4000, 0x42, 0x19, 0x0, 0x42, 0x37, 0x0, 0x45, 0x23, 0x8000, 0x3, 0x4B, 0x8000, 0x42, 0x41, 0x0, 0x45, 0x5F, 0x8000, 0x81, 0x4B, 0x4000, 0x3F, 0x5F, 0x4000, 0x42, 0x69, 0x0 };
uint16_t sidePitchPositionsSweep[33] = { 0x42, 0x6, 0x0, 0x3, 0x28, 0x8000, 0x42, 0x14, 0x0, 0x42, 0x1E, 0x0, 0x81, 0x28, 0x4000, 0x3, 0x4B, 0x8000, 0x42, 0x37, 0x0, 0x42, 0x41, 0x0, 0x81, 0x4B, 0x4000, 0x3F, 0x64, 0x4000, 0x45, 0x64, 0x8000 };
uint16_t sidePitchPositions_5_2_3[33] = { 0x42, 0x6, 0x0, 0x3, 0x28, 0x8000, 0x42, 0x14, 0x0, 0x45, 0x1E, 0x8000, 0x81, 0x28, 0x4000, 0x3, 0x5F, 0x8000, 0x3F, 0x1E, 0x4000, 0x45, 0x3C, 0x8000, 0x81, 0x5F, 0x4000, 0x3F, 0x3C, 0x4000, 0x42, 0x69, 0x0 };
uint16_t sidePitchPositionsAttack[33] = { 0x42, 0x6, 0x0, 0x3F, 0x23, 0x4000, 0x42, 0x19, 0x0, 0x3F, 0x3C, 0x4000, 0x45, 0x23, 0x8000, 0x3, 0x64, 0x8000, 0x45, 0x3C, 0x8000, 0x42, 0x5A, 0x0, 0x81, 0x64, 0x4000, 0x3F, 0x6E, 0x4000, 0x45, 0x6E, 0x8000 };
uint16_t sidePitchPositionsDefend[33] = { 0x42, 0x6, 0x0, 0x3F, 0x1E, 0x4000, 0x3F, 0x14, 0x4000, 0x45, 0x14, 0x8000, 0x45, 0x1E, 0x8000, 0x3, 0x28, 0x8000, 0x3F, 0x3C, 0x4000, 0x45, 0x3C, 0x8000, 0x81, 0x28, 0x4000, 0x42, 0x46, 0x0, 0x42, 0x64, 0x0 };
// This table contains player surname positions and string flags for side pitch in play menu,
// it's indexed by the tactics; format is, for each player (11 total):
// word - x coordinate - 180
// word - y coordinate - 9
// word - string flags (normally left, right or center alignment)
uint32_t sidePitchSurnamePositionsTable = 1341972;
// List of menu entry indices to redraw after rotating players in play match menu.
int16_t playMatchRedrawList[3] = { 12, 29, -1 };
uint16_t togglePlayerCoachRedrawItemList[4] = { 0x9, 0x1, 0x6, 0xFFFF };
// True if the first player is choosing the team
uint16_t isFirstPlayerChoosingTeam = 0;
// Index of player that's being swapped in play match menu (-1 if none),
// kept up to date no matter which player is currently viewing the menu
uint16_t * currentSelectedPlayerIndexPtr = 0;
// = 1 If we're looking in a pill... err, CPU team in play match menu
// (both are CPU, no humans in this game)
uint16_t showingCpuTeams = 0;
// If true, player can edit the team
// if false, game is simulated ("play match" button turns to "view result")
uint16_t squadChangesAllowed = 0;
// In play match menu
TeamFile * playMatchTeam1Ptr = 0;
// In play match menu
TeamFile * playMatchTeam2Ptr = 0;
// Might be max number of substitutes?
uint16_t maxSubstitutesEntries = 0;
// Total number of players per team in play match menu
uint16_t pmMenuNumPlayers = 0;
uint16_t numPlayersToShowInMenu = 0;
uint16_t viewingOpponentTeam = 0;
uint16_t is_A_team = 0;
uint16_t selectedPlayerPosition = 0;
uint16_t selectedPlayerTacticsPosition = 0;
// Pointer to menu entry of a player we selected in play match menu (to start moving him)
MenuEntry * pmSelectedPlayerEntry = 0;
// Bit 0 clear = clear joy1 flag
// Bit 1 clear = clear joy2 flag
// = 3 (11b)
uint16_t playMatchControlFlags = 0;
// Number of player who pressed play match (1 or 2)
// needed to determine who controls which team
uint16_t playerNumThatStarted = 0;
// This controls which players in the team will be disallowed to play the match
// according to the previous cards
// -1 = previous game cards
//  1 = red card only
//  0 = both
// sent as a D2 parameter to ShowPlayMatchMenu
uint16_t playMatchExcludeFlags = 0;
uint16_t playMatchButtonVisibilityState[2] = { 0 };
// True if the career team is controlled by the CPU, i.e. the player is coach only
// (set when view result was pressed)
uint16_t careerTeamCoachOnly = 0;
uint16_t careerJobOfferMode = 0;
uint16_t nat_teams_rand_limit1 = 41;
uint16_t numNationalTeams = 63;
uint16_t natTeamsRandLimit2 = 0x8E;
const char nationalTeams[] = "P";
// On init function
Menu_JobOffers jobOffersMenu = { { JobOffersInit, JobOffersFinish, 0, 0xC }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aJobOffers }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 22 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, JobOffersCommon }, { MENU_CMD_AFTER_DRAW, JobOffersAfterDrawCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 12 }, { MENU_CMD_NAV, -1, -1, -1, 2 }, MENU_CMD_END }, { { 0, 15, 304, 12 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, MENU_CMD_END }, { { 0, 30, 304, 12 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, MENU_CMD_END }, { { 0, 45, 304, 12 }, { MENU_CMD_NAV, -1, -1, 3, 5 }, MENU_CMD_END }, { { 0, 60, 304, 12 }, { MENU_CMD_NAV, -1, -1, 4, 7 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, MENU_MARK_BYTE_COORDS, { { -104, 94, 0, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aJobOffersBeing }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 109 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, JobOffers_DrawOldOfferLine }, { MENU_CMD_ONSELECT_FIRE, OldJobOffersCommon }, MENU_CMD_END, MENU_MARK_WIDE_COORDS, { { { 0, 0, 304, 12 }, { MENU_CMD_NAV, -1, -1, 5, 8 }, MENU_CMD_END }, { { 0, 15, 304, 12 }, { MENU_CMD_NAV, -1, -1, 7, 9 }, MENU_CMD_END }, { { 0, 30, 304, 12 }, { MENU_CMD_NAV, -1, -1, 8, 10 }, MENU_CMD_END }, { { 0, 45, 304, 12 }, { MENU_CMD_NAV, -1, -1, 9, 11 }, MENU_CMD_END }, { { 0, 60, 304, 12 }, { MENU_CMD_NAV, -1, -1, 10, 12 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, MENU_MARK_BYTE_COORDS, { { 122, -71, 60, 15 }, { MENU_CMD_NAV, -1, -1, 11, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, JobOffersExit }, MENU_CMD_END }, { { 0, 0, 15, 12 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 15, 0, 289, 12 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { { 0, 0, 15, 12 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { 15, 0, 289, 12 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint8_t pad_14A1D4[2] = { 0, 0 };
uint16_t selectedOldJobOfferOrdinal = 0;
// On init function
Menu_GotJobOffer gotJobOfferMenu = { { GotJobOfferInit, GotJobOfferFinish, 0, 0xA }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aJobOffer }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { { 0, 42, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 57, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 67, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 82, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 92, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 102, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 117, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, MENU_MARK_BYTE_COORDS, { { 0, -71, 57, 15 }, { MENU_CMD_NAV, -1, 9, -1, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aReject }, { MENU_CMD_ONSELECT_FIRE, RejectJobOffer }, MENU_CMD_END }, { { 58, -71, 64, 15 }, { MENU_CMD_NAV, 8, 10, -1, -1 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewLeague }, { MENU_CMD_ONSELECT_FIRE, ViewFutureTeamLeague }, MENU_CMD_END }, { { 123, -71, 58, 15 }, { MENU_CMD_NAV, 9, 11, -1, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aConsider }, { MENU_CMD_ONSELECT_FIRE, ConsiderJobOffer }, MENU_CMD_END }, { { 123, -71, 58, 15 }, { MENU_CMD_NAV, 10, 12, -1, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag_14 }, MENU_CMD_END }, { { -74, -71, 64, 15 }, { MENU_CMD_NAV, 11, 13, -1, -1 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewTeam }, { MENU_CMD_ONSELECT_FIRE, ViewFutureTeam }, MENU_CMD_END }, { { -9, -71, 57, 15 }, { MENU_CMD_NAV, 12, -1, -1, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAccept }, { MENU_CMD_ONSELECT_FIRE, AcceptJobOffer }, MENU_CMD_END }, MENU_MARK_END_MENU };
// Flag indicating job offers opened from retired/sacked path.
uint16_t jobOffersFromRetired = 0;
// Ordinal of job that is selected in job offers menu
uint16_t jobOfferOrdinal = 0;
uint16_t oldJobOfferOrdinal = 0;
uint16_t teamNoOfferingJob = 0;
void * teamOfferingJobPtr = 0;
// Funds for improving the team
// -1 = international offer
uint32_t jobOfferFunds = 0;
// Index of current message from club managers
// 0 - no messages (1-based)
uint16_t currentMessage = 0;
// (?) Points to player name when getting memos
// from club presidents
char * plNameForMessage = 0;
// On init function
Menu_ChairmanMemos chairmanMemosMenu = { { ChairmanMemosInit, ChairmanMemosOnReturn, 0, 6 }, MENU_MARK_BYTE_COORDS, { { 52, 0, -56, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aMemoFromTheClu }, MENU_CMD_END }, MENU_MARK_WIDE_COORDS, { { { 0, 40, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 60, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END }, { { 0, 70, 304, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x8000 } }, MENU_CMD_END } }, { 0, 100, 304, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aBestRegards }, MENU_CMD_END, { 0, 115, 304, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, aYourChairman }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 102, -71, 100, 15 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aContinue }, { MENU_CMD_ONSELECT_FIRE, ChairmanMemosContinue }, MENU_CMD_END, MENU_MARK_END_MENU };
uint32_t clubMessagesTable = 1394894;
// On init function
Menu_ClubBusiness clubBusinessMenu = { { ClubBusinessInit, 0, 0, 1 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aBankStatement }, MENU_CMD_END }, { 102, -71, 100, 15 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aContinue }, { MENU_CMD_ONSELECT_FIRE, j_SetExitMenuFlag13 }, MENU_CMD_END, { MENU_MARK_START_MENU, 0, 42 }, MENU_MARK_WIDE_COORDS, { 0, -5, 229, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aOldBalance }, MENU_CMD_END, MENU_MARK_BYTE_COORDS, { 0, 20, -27, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aCompetitionBon }, MENU_CMD_END, { { 0, 15, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aGateReceipts }, MENU_CMD_END }, { { 0, 30, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aGeneralRunning }, MENU_CMD_END }, { 0, 45, -27, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aAdditionalInve_0 }, MENU_CMD_END, { { 0, 45, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aPlayerSales }, MENU_CMD_END }, { { 0, 60, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aPlayerPurchase }, MENU_CMD_END }, { { 0, 75, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aPlayerWagesBil }, MENU_CMD_END }, { { 0, 95, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aTotalProfit }, MENU_CMD_END }, { { 0, 115, -27, 8 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, aNewBalance }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 42 }, MENU_MARK_WIDE_COORDS, { { 229, -5, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, MENU_MARK_BYTE_COORDS, { -27, 20, 75, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END, { { -27, 15, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -27, 30, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { -27, 45, 75, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END, { { -27, 45, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -27, 60, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -27, 75, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { { -27, 95, 75, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END }, { -22, 114, 70, 10 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_TEXT_NO_PTR, { 0x4000 } }, MENU_CMD_END, MENU_MARK_END_MENU };
uint16_t ballXQuadrantCoordinates[5] = { 12, 38, 64, 90, 116 };
uint16_t ballYQuadrantCoordinates[7] = { 12, 40, 69, 97, 126, 154, 181 };
// These two tables are used for converting player locations
// from tactics to x and y coordinates in pitch sprite (226)
// during edit tactics menu
uint16_t xQuadrantToCoordinates[15] = { 3, 12, 21, 29, 38, 47, 55, 64, 73, 81, 90, 99, 107, 116, 125 };
uint16_t yQuadrantToCoordinates[16] = { 5, 14, 24, 36, 50, 64, 79, 93, 107, 121, 136, 150, 164, 176, 186, 195 };
// Used when drawing player direction arrows in edit tactics menu, when fire is being held
// byte 2n is x, byte 2n+1 is y offset
uint8_t arrowSpritesOffsets[16] = { 0x0, 0xF2, 0x6, 0xFA, 0x6, 0x0, 0x4, 0x4, 0x0, 0x6, 0xFC, 0x4, 0xFA, 0x0, 0xFA, 0xFA };
uint16_t littlePlayersConvertTable[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 65535, 65535, 12, 13, 65535, 65535 };
const char editTacticsPlayerPositions[] = "\377\377";
// Stores currentGameTick for elapsed time calculation in EditTacticsStatus.
uint16_t editTacticsLastTick = 0;
// In edit tactics menu
uint16_t ballRow = 0;
// In edit tactics menu
uint16_t ballColumn = 0;
// During edit tactics menu
uint16_t editTacticsBallLocation = 0;
// Pointer to team passed to ShowStandardChooseTacticsMenu (in-game)
TeamFile * chooseTacticsTeamPtr = 0;
// Edit tactics working tactics buffer
void * editTacticsPlayerNumbers = 0;
// In edit tactics menu, zero if cursor is on ball
uint16_t markedPlayerNumber = 0;
// When setting tactics (moving players or ball)
// 3 = drawing player directions, fire is held
// 4 = saved
// 5 = ?
// 6 = ?
uint16_t editTacticsPitchStatus = 0;
// Gets set in choose tactics menu.
// -1 = tactics aborted
//  0 = default tactics
//  1 = 5-4-1
//  2 = 4-5-1
//  3 = 5-3-2
//  4 = 3-5-2
//  5 = 4-3-3
//  6 = 4-2-4
//  7 = 3-4-3
//  8 = SWEEP
//  9 = 5-2-3
// 10 = ATTACK
// 11 = DEFEND
// 12 = user A
// 13 = user B
// ...
// 17 = user F
uint16_t chosenTactics = 0;
uint16_t editTacticsInputRepeatCounter = 0;
uint16_t editTacticsPlayerX = 0;
uint16_t editTacticsBallRow = 0;
uint16_t editTacticsBallColumn = 0;
// Previous ball location in edit tactics menu
uint16_t editTacticsLastBallLocation = 0;
uint16_t editTacticsDisableLittlePlayersAndBallDraw = 0;
// Controls entry flip on/off in edit tactics menu
uint16_t flipOnOff = 0;
// Controls save/abort prompt for edit tactics menu
uint16_t tacticsChangedFlag = 0;
// Flag set to 1 when edit tactics pitch transition is active.
uint16_t editTacticsTransitionActive = 0;
// Here are copied country numbers of selected teams
// in edit tactics menu
uint8_t editTacticsCountryBuffer[128] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// On init function
Menu_ChooseTactics chooseTacticsMenu = { { ChooseTacticsInit, 0, 0, 1 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aEditTactics }, MENU_CMD_END }, { { 82, 40, -116, 15 }, { MENU_CMD_NAV, -1, -1, -1, 2 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, User_A_Tactics }, MENU_CMD_END }, { { 82, 60, -116, 15 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, User_B_Tactics }, MENU_CMD_END }, { { 82, 80, -116, 15 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, User_C_Tactics }, MENU_CMD_END }, { { 82, 100, -116, 15 }, { MENU_CMD_NAV, -1, -1, 3, 5 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, User_D_Tactics }, MENU_CMD_END }, { { 82, 120, -116, 15 }, { MENU_CMD_NAV, -1, -1, 4, 6 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, User_E_Tactics }, MENU_CMD_END }, { { 82, -116, -116, 15 }, { MENU_CMD_NAV, -1, -1, 5, 7 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, { MENU_CMD_ONSELECT_FIRE, User_F_Tactics }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 6, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitChooseTacticsMenu }, MENU_CMD_END }, MENU_MARK_END_MENU };
// On init function
Menu_EditTactics editTacticsMenu = { { EditTacticsInit, EditTacticsOnRestore, 0, 8 }, MENU_MARK_BYTE_COORDS, { -121, 0, 13, 16 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { -102, 0, -106, 12 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_NO_PTR, { 0x0 } }, MENU_CMD_END, { 0, 0, 0, 0 }, { MENU_CMD_INPUT_FUNC, 0xFFFF, EditTacicsMovePlayersOrBall }, { MENU_CMD_AFTER_DRAW, EditTactics2AfterDraw }, MENU_CMD_END, { 0, 0, 0, 0 }, { MENU_CMD_INPUT_FUNC, 0xFFFF, CopyTactics }, { MENU_CMD_AFTER_DRAW, EditTactics2AfterDraw }, MENU_CMD_END, { { { -125, -75, 57, 9 }, { MENU_CMD_NAV, 2, 5, 27, 7 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aCopy }, { MENU_CMD_ONSELECT_FIRE, SelectCopyTactics }, MENU_CMD_END }, { { -67, -75, 57, 9 }, { MENU_CMD_NAV, 4, 6, 27, 8 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aUndo }, { MENU_CMD_ONSELECT_FIRE, UndoTactics }, MENU_CMD_END } }, { -9, -75, 57, 9 }, { MENU_CMD_NAV, 5, -1, 27, 9 }, { MENU_CMD_COLORS, { 0xD } }, { MENU_CMD_STRING_TABLE, { 0x0 }, &flipStrTable }, { MENU_CMD_ONSELECT_FIRE, FlipOnOff }, MENU_CMD_END, { { { -125, -65, 57, 9 }, { MENU_CMD_NAV, 2, 8, 4, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aImport }, { MENU_CMD_ONSELECT_FIRE, ImportTactics }, MENU_CMD_END }, { { -67, -65, 57, 9 }, { MENU_CMD_NAV, 7, 9, 5, -1 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSaveExit }, { MENU_CMD_ONSELECT_FIRE, SaveAndExitEditTactics }, MENU_CMD_END }, { { -9, -65, 57, 9 }, { MENU_CMD_NAV, 8, -1, 6, -1 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAbort }, { MENU_CMD_ONSELECT_FIRE, AbortEditTactics }, MENU_CMD_END } }, { MENU_MARK_START_MENU, 131, 18 }, { { 0, -108, -83, 9 }, { MENU_CMD_COLORS, { 0x0 } }, MENU_CMD_END }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, EditTacticsAfterDrawPlayerNames }, { MENU_CMD_ONSELECT_FIRE, EditTacticsPlayerNamesCommon }, MENU_CMD_END, { { { 23, 0, 82, 8 }, { MENU_CMD_NAV, 2, -1, -1, 12 }, MENU_CMD_END }, { { 23, 9, 82, 8 }, { MENU_CMD_NAV, 29, -1, 11, 13 }, MENU_CMD_END }, { { 23, 18, 82, 8 }, { MENU_CMD_NAV, 30, -1, 12, 14 }, MENU_CMD_END }, { { 23, 27, 82, 8 }, { MENU_CMD_NAV, 31, -1, 13, 15 }, MENU_CMD_END }, { { 23, 36, 82, 8 }, { MENU_CMD_NAV, 32, -1, 14, 16 }, MENU_CMD_END }, { { 23, 45, 82, 8 }, { MENU_CMD_NAV, 33, -1, 15, 17 }, MENU_CMD_END }, { { 23, 54, 82, 8 }, { MENU_CMD_NAV, 34, -1, 16, 18 }, MENU_CMD_END }, { { 23, 63, 82, 8 }, { MENU_CMD_NAV, 35, -1, 17, 19 }, MENU_CMD_END }, { { 23, 72, 82, 8 }, { MENU_CMD_NAV, 36, -1, 18, 20 }, MENU_CMD_END }, { { 23, 81, 82, 8 }, { MENU_CMD_NAV, 37, -1, 19, 21 }, MENU_CMD_END }, { { 23, 90, 82, 8 }, { MENU_CMD_NAV, 38, -1, 20, 22 }, MENU_CMD_END }, { { 23, 101, 82, 8 }, { MENU_CMD_NAV, 2, -1, 21, 23 }, MENU_CMD_END }, { { 23, 110, 82, 8 }, { MENU_CMD_NAV, 2, -1, 22, 24 }, MENU_CMD_END }, { { 23, 119, 82, 8 }, { MENU_CMD_NAV, 2, -1, 23, 25 }, MENU_CMD_END }, { { 23, -128, 82, 8 }, { MENU_CMD_NAV, 2, -1, 24, 26 }, MENU_CMD_END } }, { 23, -119, 82, 8 }, { MENU_CMD_NAV, 2, -1, 25, 27 }, { MENU_CMD_UP_SKIP, 27, 2 }, MENU_CMD_END, { 23, -108, 82, 8 }, { MENU_CMD_NAV, 28, -1, 26, 5 }, { MENU_CMD_INVISIBLE }, MENU_CMD_END, { 0, -108, 12, 8 }, { MENU_CMD_INVISIBLE }, { MENU_CMD_NAV, 2, 27, 38, 4 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_ONSELECT_FIRE, EditTacticsOnSelect28 }, { MENU_CMD_AFTER_DRAW, EditTactics28AfterDraw }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0x0 } }, { MENU_CMD_AFTER_DRAW, EditTacticsAfterDrawPlayerFace }, { MENU_CMD_ONSELECT_FIRE, EditTacticsCommon }, MENU_CMD_END, { { { 0, 9, 12, 8 }, { MENU_CMD_NAV, 2, 12, -1, 30 }, MENU_CMD_END }, { { 0, 18, 12, 8 }, { MENU_CMD_NAV, 2, 13, 29, 31 }, MENU_CMD_END }, { { 0, 27, 12, 8 }, { MENU_CMD_NAV, 2, 14, 30, 32 }, MENU_CMD_END }, { { 0, 36, 12, 8 }, { MENU_CMD_NAV, 2, 15, 31, 33 }, MENU_CMD_END }, { { 0, 45, 12, 8 }, { MENU_CMD_NAV, 2, 16, 32, 34 }, MENU_CMD_END }, { { 0, 54, 12, 8 }, { MENU_CMD_NAV, 2, 17, 33, 35 }, MENU_CMD_END }, { { 0, 63, 12, 8 }, { MENU_CMD_NAV, 2, 18, 34, 36 }, MENU_CMD_END }, { { 0, 72, 12, 8 }, { MENU_CMD_NAV, 2, 19, 35, 37 }, MENU_CMD_END }, { { 0, 81, 12, 8 }, { MENU_CMD_NAV, 2, 20, 36, 38 }, MENU_CMD_END }, { { 0, 90, 12, 8 }, { MENU_CMD_NAV, 2, 21, 37, 28 }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 0 }, { MENU_MARK_START_MENU, 131, 0 }, { 0, 0, 12, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_SPRITE_FG, 0 }, MENU_CMD_END, { { 13, 0, 10, 8 }, { MENU_CMD_NUMBER, { 0x0 }, 0 }, MENU_CMD_END }, { { 23, 0, 82, 8 }, { MENU_CMD_COLORS, { 0xA } }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { 106, 0, 14, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, 0 }, MENU_CMD_END }, { { -127, 0, 0, 8 }, { MENU_CMD_TEXT_NO_PTR, { 0xF } }, MENU_CMD_END }, { { -117, 0, 32, 8 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, MENU_MARK_END_MENU };
uint32_t flipStrTable = 1356978;
// List of menu entry indices to redraw after rotating players in edit tactics.
int16_t editTacticsRotateRedrawList[3] = { 10, 27, -1 };
uint16_t editTacticsFlipPairColorTable[5] = { 14, 10, 12, 6, 11 };
uint16_t editTacticsNumPlayers = 0;
uint16_t editTacticsSelectedPlayerNameIndex = 0;
uint16_t editTacticsSelectedPlayerSlotIndex = 0;
MenuEntry * editTacticsSelectedPlayerMenuEntryPtr = 0;
uint16_t editTacticsSelectedPairSlotIndex = 0;
// From edit tactics menu
MenuEntry * editTacticsSelectedPairMenuEntryPtr = 0;
// In edit tactics menu
uint16_t playerAreas[35] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34 };
uint16_t tacticCursorFrames[4] = { 149, 150, 151, 150 };
uint16_t editTacticsNearestSelectPitchWidth = 0;
uint8_t editTacticsDirectionDeltaTable[16] = { 0x0, 0xFF, 0x1, 0xFF, 0x1, 0x0, 0x1, 0x1, 0x0, 0x1, 0xFF, 0x1, 0xFF, 0x0, 0xFF, 0xFF };
// On init function
Menu_ImportTactics importTacticsMenu = { { ImportTacticsInit, 0, 0, 2 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aImportTactics }, MENU_CMD_END }, { MENU_MARK_START_MENU, 85, 60 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_ONSELECT_FIRE, ImportTacticsSelectTactics }, MENU_CMD_END, { { { 0, 0, 43, 9 }, { MENU_CMD_NAV, -1, 2, -1, 4 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a442 }, MENU_CMD_END }, { { 45, 0, 43, 9 }, { MENU_CMD_NAV, 1, 3, -1, 5 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a541 }, MENU_CMD_END }, { { 90, 0, 43, 9 }, { MENU_CMD_NAV, 2, -1, -1, 6 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a451 }, MENU_CMD_END }, { { 0, 11, 43, 9 }, { MENU_CMD_NAV, -1, 5, 1, 7 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a532 }, MENU_CMD_END }, { { 45, 11, 43, 9 }, { MENU_CMD_NAV, 4, 6, 2, 8 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a352 }, MENU_CMD_END }, { { 90, 11, 43, 9 }, { MENU_CMD_NAV, 5, -1, 3, 9 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a433 }, MENU_CMD_END }, { { 0, 22, 43, 9 }, { MENU_CMD_NAV, -1, 8, 4, 10 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a424 }, MENU_CMD_END }, { { 45, 22, 43, 9 }, { MENU_CMD_NAV, 7, 9, 5, 11 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a343 }, MENU_CMD_END }, { { 90, 22, 43, 9 }, { MENU_CMD_NAV, 8, -1, 6, 12 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSweep }, MENU_CMD_END }, { { 0, 33, 43, 9 }, { MENU_CMD_NAV, -1, 11, 7, 13 }, { MENU_CMD_TEXT_PTR, { 0x0 }, a523 }, MENU_CMD_END }, { { 45, 33, 43, 9 }, { MENU_CMD_NAV, 10, 12, 8, 13 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aAttack }, MENU_CMD_END }, { { 90, 33, 43, 9 }, { MENU_CMD_NAV, 11, -1, 9, 14 }, { MENU_CMD_TEXT_PTR, { 0x0 }, aDefend }, MENU_CMD_END }, { { 0, 44, 65, 9 }, { MENU_CMD_NAV, -1, 14, 10, 15 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERA }, MENU_CMD_END }, { { 67, 44, 66, 9 }, { MENU_CMD_NAV, 13, -1, 12, 16 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERB }, MENU_CMD_END }, { { 0, 55, 65, 9 }, { MENU_CMD_NAV, -1, 16, 13, 17 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERC }, MENU_CMD_END }, { { 67, 55, 66, 9 }, { MENU_CMD_NAV, 15, -1, 14, 18 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERD }, MENU_CMD_END }, { { 0, 66, 65, 9 }, { MENU_CMD_NAV, -1, 18, 15, 19 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERE }, MENU_CMD_END }, { { 67, 66, 66, 9 }, { MENU_CMD_NAV, 17, -1, 16, 19 }, { MENU_CMD_TEXT_PTR, { 0x0 }, &teamTacticsUSERF }, MENU_CMD_END } }, MENU_MARK_INIT_ENTRY, { { 0, 78, -124, 9 }, { MENU_CMD_NAV, -1, -1, 17, 20 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aLoad }, { MENU_CMD_ONSELECT_FIRE, LoadTactics }, MENU_CMD_END }, { MENU_MARK_START_MENU, 0, 0 }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 19, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitImportTactics }, MENU_CMD_END }, MENU_MARK_END_MENU };
// In import tactics menu, number of selected tactic
// 1000 = imported tactic, rest is in enumeration
// -1 = import aborted
uint16_t importMenuSelectedTactics = 0;
uint16_t tacticsPositionDefensiveness[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// On init function
Menu_Stadium stadiumMenu = { { ShowStadiumInit, 0, 0, 0x3B }, { MENU_MARK_START_MENU, 0, -15 }, MENU_MARK_BYTE_COORDS, { { { -104, 0, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END }, { { -104, 12, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x10 }, 0 }, MENU_CMD_END } }, { 0, 28, -119, 12 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_NO_PTR, { 0x4010 } }, MENU_CMD_END, { { -114, 28, 20, 12 }, { MENU_CMD_TEXT_PTR, { 0x10 }, aV }, MENU_CMD_END }, { -89, 28, -119, 12 }, { MENU_CMD_COLORS, { 0x5 } }, { MENU_CMD_TEXT_NO_PTR, { 0x8010 } }, MENU_CMD_END, { MENU_MARK_START_MENU, -1, 35 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_BEFORE_DRAW, StadiumBeforeDrawLeftTeam }, MENU_CMD_END, { -114, 0, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 13, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 26, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 39, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 52, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 65, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 78, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 91, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 104, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, 117, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -114, -126, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 30 }, { { { -124, 0, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 13, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 26, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 39, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 52, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 65, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 78, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 91, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 104, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, 117, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, -126, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4000 }, 0 }, MENU_CMD_END }, { { -124, -111, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4001 }, 0 }, MENU_CMD_END }, { { -124, -102, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4001 }, 0 }, MENU_CMD_END }, { { -124, -93, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4001 }, 0 }, MENU_CMD_END }, { { -124, -84, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4001 }, 0 }, MENU_CMD_END }, { { -124, -75, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x4001 }, 0 }, MENU_CMD_END } }, { MENU_MARK_START_MENU, 0, 35 }, MENU_MARK_START_TEMPLATE, { 0, 0, 0, 0 }, { MENU_CMD_BEFORE_DRAW, StadiumBeforeDrawRightTeam }, MENU_CMD_END, { -94, 0, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 13, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 26, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 39, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 52, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 65, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 78, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 91, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 104, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, 117, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, { -94, -126, 0, 0 }, { MENU_CMD_SPRITE_COPY, &stadiumMenuLittlePlayer }, MENU_CMD_END, MENU_MARK_INIT_ENTRY, { MENU_MARK_START_MENU, 0, 30 }, { { { -84, 0, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 13, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 26, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 39, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 52, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 65, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 78, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 91, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 104, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, 117, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, -126, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8000 }, 0 }, MENU_CMD_END }, { { -84, -111, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8001 }, 0 }, MENU_CMD_END }, { { -84, -102, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8001 }, 0 }, MENU_CMD_END }, { { -84, -93, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8001 }, 0 }, MENU_CMD_END }, { { -84, -84, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8001 }, 0 }, MENU_CMD_END }, { { -84, -75, 0, 10 }, { MENU_CMD_TEXT_PTR, { 0x8001 }, 0 }, MENU_CMD_END } }, { { 0, 0, 0, 0 }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint16_t stadiumMenuLittlePlayer = 0;
uint16_t littlePlayerSpriteGeneric = 214;
// For sprites above
uint8_t littlePlayersColorTable[32] = { 0, 0, 0, 1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 14, 0, 15 };
// Table for converting indices of those little pictures of
// players into sprites
Sprites littlePlayersSpriteTable[4] = { SPR_LITTLE_PLAYER_VERT_STRIPES, SPR_LITTLE_PLAYER_NO_STRIPES, SPR_LITTLE_PLAYER_VERT_STRIPES, SPR_LITTLE_PLAYER_HOR_STRIPES };
// On init function
Menu_Highlights highlightsMenu = { { HighlightsMenuInit, HighlightsMenuOnReturn, 0, 1 }, MENU_MARK_BYTE_COORDS, { { 92, 0, 120, 15 }, { MENU_CMD_COLORS, { 0x17 } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aHighlights }, MENU_CMD_END }, { { 82, 60, -116, 15 }, { MENU_CMD_NAV, -1, -1, -1, 2 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aViewHighlights }, { MENU_CMD_ONSELECT_FIRE, JmpShowHighlights }, MENU_CMD_END }, { { 82, 90, -116, 15 }, { MENU_CMD_NAV, -1, -1, 1, 3 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aLoadHighlights }, { MENU_CMD_ONSELECT_FIRE, LoadHighlightsMenu }, MENU_CMD_END }, { { 82, 120, -116, 15 }, { MENU_CMD_NAV, -1, -1, 2, 4 }, { MENU_CMD_COLORS, { 0xE } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aSaveHighlights }, { MENU_CMD_ONSELECT_FIRE, SaveHighlightsMenu }, MENU_CMD_END }, { { 102, -71, 100, 15 }, { MENU_CMD_NAV, -1, -1, 3, -1 }, { MENU_CMD_COLORS, { 0xC } }, { MENU_CMD_TEXT_PTR, { 0x0 }, aExit }, { MENU_CMD_ONSELECT_FIRE, ExitHighlights }, MENU_CMD_END }, MENU_MARK_END_MENU };
uint16_t teamsCountryNumbers[256] = { 0, 16, 26, 44, 60, 72, 86, 102, 114, 207, 207, 221, 233, 245, 287, 333, 358, 379, 392, 407, 424, 475, 485, 497, 513, 528, 564, 580, 601, 628, 654, 676, 699, 711, 751, 771, 819, 838, 854, 878, 896, 918, 928, 944, 984, 1035, 1049, 1073, 1085, 1101, 1118, 1132, 1178, 1178, 1178, 1178, 1206, 1206, 1207, 1207, 1208, 1248, 1248, 1278, 1278, 1290, 1306, 1316, 1328, 1388, 1404, 1405, 1431, 1479, 1497, 1521, 1527, 1545, 1567, 1579, 1587, 1636, 1670, 1680, 1695, 1726, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730, 1730 };
const char aAlbania[18] = "\000ALBANIA\000ALBANIAN";
const char aAustria[18] = "\000AUSTRIA\000AUSTRIAN";
const char aBelgium[17] = "\000BELGIUM\000BELGIAN";
const char aBulgaria[20] = "\000BULGARIA\000BULGARIAN";
const char aCroatia[18] = "\000CROATIA\000CROATIAN";
const char aCyprus[16] = "\000CYPRUS\000CYPRIOT";
const char aCzechRepublic[22] = "\000CZECH REPUBLIC\000CZECH";
const char aDenmark[16] = "\000DENMARK\000DANISH";
const char aEngland[17] = "\000ENGLAND\000ENGLISH";
const char aEngland_0[17] = "\000ENGLAND\000ENGLISH";
const char aEstonia[18] = "\000ESTONIA\000ESTONIAN";
const char aFaroeIslands[27] = "\000FAROE ISLANDS\000FAROE ISLES";
const char aFinland[17] = "\000FINLAND\000FINNISH";
const char aFrance[15] = "\000FRANCE\000FRENCH";
const char aGermany[16] = "\000GERMANY\000GERMAN";
const char aGreece[14] = "\000GREECE\000GREEK";
const char aHungary[19] = "\000HUNGARY\000HUNGARIAN";
const char aIceland[19] = "\000ICELAND\000ICELANDIC";
const char aRepublicIreland[24] = "\000REPUBLIC IRELAND\000IRISH";
const char aIsrael[16] = "\000ISRAEL\000ISRAELI";
const char aItaly[15] = "\000ITALY\000ITALIAN";
const char aLatvia[16] = "\000LATVIA\000LATVIAN";
const char aLithuania[22] = "\000LITHUANIA\000LITHUANIAN";
const char aLuxembourg[23] = "\000LUXEMBOURG\000LUXEMBOURG";
const char aMalta[15] = "\000MALTA\000MALTESE";
const char aHolland[15] = "\000HOLLAND\000DUTCH";
const char aNorthernIreland[33] = "\000NORTHERN IRELAND\000NORTHERN IRISH";
const char aNorway[18] = "\000NORWAY\000NORWEGIAN";
const char aPoland[15] = "\000POLAND\000POLISH";
const char aPortugal[20] = "\000PORTUGAL\000PORTUGESE";
const char aRomania[18] = "\000ROMANIA\000ROMANIAN";
const char aRussia[16] = "\000RUSSIA\000RUSSIAN";
const char aSanMarino[23] = "\000SAN MARINO\000SAN MARINO";
const char aScotland[19] = "\000SCOTLAND\000SCOTTISH";
const char aSlovenia[20] = "\000SLOVENIA\000SLOVENIAN";
const char aSpain[15] = "\000SPAIN\000SPANISH";
const char aSweden[16] = "\000SWEDEN\000SWEDISH";
const char aSwitzerland[19] = "\000SWITZERLAND\000SWISS";
const char aTurkey[16] = "\000TURKEY\000TURKISH";
const char aUkraine[19] = "\000UKRAINE\000UKRAINIAN";
const char aWales[13] = "\000WALES\000WELSH";
const char aYugoslavia[24] = "\000YUGOSLAVIA\000YUGOSLAVIAN";
const char aBelarus[21] = "\000BELARUS\000BELARUSSIAN";
const char aSlovakia[20] = "\000SLOVAKIA\000SLOVAKIAN";
const char aAlgeria[18] = "\005ALGERIA\000ALGERIAN";
const char aSouthAfrica[28] = "\005SOUTH AFRICA\000SOUTH AFRICAN";
const char aGhana[13] = "\005GHANA\000GHANA";
const char aArgentina[23] = "\002ARGENTINA\000ARGENTINIAN";
const char aBolivia[18] = "\002BOLIVIA\000BOLIVIAN";
const char aBrazil[18] = "\002BRAZIL\000BRAZILIAN";
const char aChile[15] = "\002CHILE\000CHILEAN";
const char aColombia[20] = "\002COLOMBIA\000COLOMBIAN";
const char aEcuador[17] = "\002ECUADOR\000ECUADOR";
const char aParaguay[21] = "\002PARAGUAY\000PARAGUAYAN";
const char aPeru[15] = "\002PERU\000PERUVIAN";
const char aSurinam[17] = "\002SURINAM\000SURINAM";
const char aUruguay[19] = "\002URUGUAY\000URUGUAYAN";
const char aVenezuela[22] = "\002VENEZUELA\000VENEZUELAN";
const char aElSalvadore[25] = "\001EL SALVADOR\000EL SALVADOR";
const char aMexico[16] = "\001MEXICO\000MEXICAN";
const char aUSA[17] = "\001U.S.A.\000AMERICAN";
const char aJapan[16] = "\003JAPAN\000JAPANESE";
const char aTaiwan[18] = "\003TAIWAN\000TAIWANESE";
const char aIndia[14] = "\003INDIA\000INDIAN";
const char aAustralia[22] = "\004AUSTRALIA\000AUSTRALIAN";
const char aNewZealand[25] = "\004NEW ZEALAND\000NEW ZEALAND";
const char aCustom[10] = "\000CUSTOM\000-";
const char aEurope[17] = "\000EUROPE\000EUROPEAN";
const char aAfrica[16] = "\005AFRICA\000AFRICAN";
const char aSouthAmerica[30] = "\002SOUTH AMERICA\000SOUTH AMERICAN";
const char aNorthAmerica[30] = "\001NORTH AMERICA\000NORTH AMERICAN";
const char aAsia[12] = "\003ASIA\000ASIAN";
const char aOceania[18] = "\004OCEANIA\000OCEANIAN";
const char aEditedCustoms[18] = "\000EDITED CUSTOMS\000-";
const char aWorld_1[] = "\377WORLD";
const char * countriesTable[262] = { aAlbania, aAustria, aBelgium, aBulgaria, aCroatia, aCyprus, aCzechRepublic, aDenmark, aEngland, aEngland_0, aEstonia, aFaroeIslands, aFinland, aFrance, aGermany, aGreece, aHungary, aIceland, aRepublicIreland, aIsrael, aItaly, aLatvia, aLithuania, aLuxembourg, aMalta, aHolland, aNorthernIreland, aNorway, aPoland, aPortugal, aRomania, aRussia, aSanMarino, aScotland, aSlovenia, aSpain, aSweden, aSwitzerland, aTurkey, aUkraine, aWales, aYugoslavia, aAlgeria, aArgentina, aAustralia, aBolivia, aBrazil, 0, aChile, aColombia, aEcuador, aElSalvadore, 0, 0, 0, aJapan, 0, 0, 0, 0, aMexico, 0, aNewZealand, 0, aParaguay, aPeru, aSurinam, aTaiwan, 0, aSouthAfrica, 0, aUruguay, aCustom, aUSA, 0, aIndia, aBelarus, aVenezuela, aSlovakia, aGhana, aEurope, aAfrica, aSouthAmerica, aNorthAmerica, aAsia, aOceania, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, aEditedCustoms, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, aWorldCupQualification, aEuropeanChampionship, aWorld_1, 0, aEuropean_0, aNorthAmerican_0, aSouthAmerican_0, aAsian_0, aOceanian_0, aAfrican_0 };
const char aEuropean_0[] = "EUROPEAN";
const char aNorthAmerican_0[] = "NORTH AMERICAN";
const char aSouthAmerican_0[] = "SOUTH AMERICAN";
const char aAsian_0[] = "ASIAN";
const char aOceanian_0[] = "OCEANIAN";
const char aAfrican_0[] = "AFRICAN";
uint8_t shortCountryNames[466] = { 0x41, 0x4C, 0x42, 0x41, 0x55, 0x54, 0x42, 0x45, 0x4C, 0x42, 0x55, 0x4C, 0x43, 0x52, 0x4F, 0x43, 0x59, 0x50, 0x54, 0x43, 0x48, 0x44, 0x45, 0x4E, 0x45, 0x4E, 0x47, 0x45, 0x53, 0x54, 0x46, 0x41, 0x52, 0x46, 0x49, 0x4E, 0x46, 0x52, 0x41, 0x47, 0x45, 0x52, 0x47, 0x52, 0x45, 0x48, 0x55, 0x4E, 0x49, 0x53, 0x4C, 0x49, 0x53, 0x52, 0x49, 0x54, 0x41, 0x4C, 0x41, 0x54, 0x4C, 0x49, 0x54, 0x4C, 0x55, 0x58, 0x4D, 0x4C, 0x54, 0x48, 0x4F, 0x4C, 0x4E, 0x49, 0x52, 0x4E, 0x4F, 0x52, 0x50, 0x4F, 0x4C, 0x50, 0x4F, 0x52, 0x52, 0x4F, 0x4D, 0x52, 0x55, 0x53, 0x53, 0x4D, 0x52, 0x53, 0x43, 0x4F, 0x53, 0x4C, 0x4F, 0x53, 0x57, 0x45, 0x54, 0x55, 0x52, 0x55, 0x4B, 0x52, 0x57, 0x41, 0x4C, 0x59, 0x55, 0x47, 0x42, 0x4C, 0x53, 0x53, 0x56, 0x4B, 0x45, 0x53, 0x50, 0x41, 0x52, 0x4D, 0x42, 0x4F, 0x53, 0x41, 0x5A, 0x42, 0x47, 0x45, 0x4F, 0x53, 0x55, 0x49, 0x49, 0x52, 0x4C, 0x4D, 0x41, 0x43, 0x54, 0x52, 0x4B, 0x4C, 0x49, 0x45, 0x4D, 0x4F, 0x4C, 0x43, 0x52, 0x43, 0x53, 0x41, 0x4C, 0x47, 0x55, 0x41, 0x48, 0x4F, 0x4E, 0x42, 0x48, 0x4D, 0x4D, 0x45, 0x58, 0x50, 0x41, 0x4E, 0x55, 0x53, 0x41, 0x42, 0x41, 0x48, 0x4E, 0x49, 0x43, 0x42, 0x45, 0x52, 0x4A, 0x41, 0x4D, 0x54, 0x52, 0x49, 0x43, 0x41, 0x4E, 0x42, 0x41, 0x52, 0x45, 0x4C, 0x53, 0x53, 0x56, 0x43, 0x41, 0x52, 0x47, 0x42, 0x4F, 0x4C, 0x42, 0x52, 0x41, 0x43, 0x48, 0x4C, 0x43, 0x4F, 0x4C, 0x45, 0x43, 0x55, 0x50, 0x41, 0x52, 0x53, 0x55, 0x52, 0x55, 0x52, 0x55, 0x56, 0x4E, 0x5A, 0x47, 0x55, 0x59, 0x50, 0x45, 0x52, 0x41, 0x4C, 0x47, 0x53, 0x41, 0x46, 0x42, 0x4F, 0x54, 0x42, 0x46, 0x53, 0x42, 0x55, 0x52, 0x4C, 0x45, 0x53, 0x5A, 0x41, 0x49, 0x5A, 0x41, 0x4D, 0x47, 0x48, 0x41, 0x53, 0x45, 0x4E, 0x43, 0x49, 0x56, 0x54, 0x55, 0x4E, 0x4D, 0x4C, 0x49, 0x4D, 0x44, 0x47, 0x43, 0x4D, 0x52, 0x43, 0x48, 0x44, 0x55, 0x47, 0x41, 0x4C, 0x49, 0x42, 0x4D, 0x4F, 0x5A, 0x4B, 0x45, 0x4E, 0x53, 0x55, 0x44, 0x53, 0x57, 0x41, 0x41, 0x4E, 0x47, 0x54, 0x4F, 0x47, 0x5A, 0x49, 0x4D, 0x45, 0x47, 0x59, 0x54, 0x41, 0x4E, 0x4E, 0x49, 0x47, 0x45, 0x54, 0x48, 0x47, 0x41, 0x42, 0x53, 0x49, 0x45, 0x42, 0x45, 0x4E, 0x43, 0x4F, 0x4E, 0x47, 0x55, 0x49, 0x53, 0x52, 0x4C, 0x4D, 0x41, 0x52, 0x47, 0x41, 0x4D, 0x4D, 0x4C, 0x57, 0x4A, 0x41, 0x50, 0x54, 0x41, 0x49, 0x49, 0x4E, 0x44, 0x42, 0x41, 0x4E, 0x42, 0x52, 0x55, 0x49, 0x52, 0x41, 0x4A, 0x4F, 0x52, 0x53, 0x52, 0x49, 0x53, 0x59, 0x52, 0x4B, 0x4F, 0x52, 0x49, 0x52, 0x4E, 0x56, 0x49, 0x45, 0x4D, 0x4C, 0x59, 0x53, 0x41, 0x55, 0x59, 0x45, 0x4D, 0x4B, 0x55, 0x57, 0x4C, 0x41, 0x4F, 0x4E, 0x4B, 0x52, 0x4F, 0x4D, 0x41, 0x50, 0x41, 0x4B, 0x50, 0x48, 0x49, 0x43, 0x48, 0x49, 0x53, 0x47, 0x50, 0x4D, 0x41, 0x55, 0x4D, 0x59, 0x41, 0x50, 0x41, 0x50, 0x54, 0x41, 0x44, 0x55, 0x5A, 0x42, 0x51, 0x41, 0x54, 0x55, 0x41, 0x45, 0x41, 0x55, 0x53, 0x4E, 0x5A, 0x4C, 0x46, 0x49, 0x4A, 0x53, 0x4F, 0x4C, 0x43, 0x55, 0x53, 0x0, 0x33, 0x44, 0x50, 0x76, 0x94, 0x99 };
const char aPremierLeague[] = "PREMIER LEAGUE";
const char aPremier[] = "PREMIER";
const char aDivisionOne[] = "DIVISION ONE";
const char aDivisionTwo[] = "DIVISION TWO";
const char aDivisionThree[] = "DIVISION THREE";
const char aCup_4[] = "CUP";
const char aCup_5[] = "CUP";
const char aLeagueCup[] = "LEAGUE CUP";
const char aLeagueCup_0[] = "LEAGUE CUP";
const char aDiv1Playoffs[] = "DIV 1 PLAYOFFS";
const char aDiv2Playoffs[] = "DIV 2 PLAYOFFS";
const char aDiv3Playoffs[] = "DIV 3 PLAYOFFS";
const char aCup_6[] = "CUP";
const char aCup_7[] = "CUP";
const char aLeagueCup_1[] = "LEAGUE CUP";
const char aLeagueCup_2[] = "LEAGUE CUP";
const char aSerieA[] = "SERIE A";
const char aSerieB[] = "SERIE B";
const char aCoppaItalia[] = "COPPA ITALIA";
const char aCoppa[] = "COPPA";
const char aPremiereDivisi[] = "PREMIERE DIVISION";
const char aPremiere[] = "PREMIERE";
const char aDeuxiemeDivisi[] = "DEUXIEME DIVISION";
const char aDeuxieme[] = "DEUXIEME";
const char aCoupeDeFrance[] = "COUPE DE FRANCE";
const char aCoupe[] = "COUPE";
const char a1Liga[] = "1. LIGA";
const char a2Liga[] = "2. LIGA";
const char aDFBPokal[] = "D.F.B. POKAL";
const char aPokal[] = "POKAL";
const char aPrimeraDivisio[] = "PRIMERA DIVISION";
const char aPrimera[] = "PRIMERA";
const char aSegundaDivisio[] = "SEGUNDA DIVISION";
const char aSegunda[] = "SEGUNDA";
const char aCopa[] = "COPA";
const char aCopa_0[] = "COPA";
const char aJLeague[] = "J. LEAGUE";
const char aJLeague_0[] = "J. LEAGUE";
const char aLeague_2[] = "LEAGUE";
const char aLeague_3[] = "LEAGUE";
const char aCup_8[] = "CUP";
const char aCup_9[] = "CUP";
const char aEmperorSCup[] = "EMPEROR'S CUP";
const char aEmpCup[] = "EMP. CUP";
const char aNorthernRegion[] = "NORTHERN REGION";
const char aNorthern[] = "NORTHERN";
const char aCentralRegion[] = "CENTRAL REGION";
const char aCentral[] = "CENTRAL";
const char aSouthernRegion[] = "SOUTHERN REGION";
const char aSouthern[] = "SOUTHERN";
const char a1stDivision[] = "1ST DIVISION";
const char aSouthDivision[] = "SOUTH DIVISION";
const char aSouthDivision_0[] = "SOUTH DIVISION";
const char aNswDivision[] = "NSW DIVISION";
const char aNsw[] = "NSW";
const char aQueenslandDivi[] = "QUEENSLAND DIVISION";
const char aQueensland[] = "QUEENSLAND";
Competition * nationalTeamCompetitionsAndQualifications[39] = { &worldCup, &europeanChampionships, &copaAmerica, &northAmericanCup, &northAmericanCupCopy, &africanNationsCup, &africanNationsCupCopy, &asianCup, &asianCupCopy, &oceaniaCup, &oceaniaCupCopy, &friendlyCopy, &invitationTournamentCopy, &tourCopy, &copaAmericaCopy, &europeanChampionships2Copy, &ecQualifyingGroup1Copy, &ecQualifyingGroup2Copy, &ecQualifyingGroup3Copy, &ecQualifyingGroup4Copy, &ecQualifyingGroup5Copy, &ecQualifyingGroup6Copy, &ecQualifyingGroup7Copy, &ecQualifyingGroup8Copy, &worldCup2Copy, &worldCupQualifyingGroup1Copy, &worldCupQualifyingGroup2Copy, &worldCupQualifyingGroup3Copy, &worldCupQualifyingGroup4Copy, &worldCupQualifyingGroup5Copy, &worldCupQualifyingGroup6Copy, &worldCupQualifyingGroup7Copy, &worldCupQualifyingGroup8Copy, &northAmericaWorldCupQualificationCopy, &southAmericaWorldCupQualificationCopy, &africaWorldCupQualificationCopy, &asiaWorldCupQualificationCopy, &oceaniaWorldCupQualificationCopy, (Competition*)-1 };
CompetitionCup * continentalCups[7] = { &europeanChampionships, &copaAmerica, &northAmericanCup, &africanNationsCup, &asianCup, &oceaniaCup, (CompetitionCup*)-1 };
CompetitionCup * europeanCupsandNationalTeamCompetitionsAndQualifications[46] = { &worldCup, &europeanChampionships, &copaAmerica, &euroCup, &euroCupCopy, &cupWinnersCup, &cupWinnersCupCopy, &uefaCup, &uefaCupCopy, &copaAmericaCopy, &africanNationsCup, &africanNationsCupCopy, &northAmericanCup, &northAmericanCupCopy, &asianCup, &asianCupCopy, &oceaniaCup, &oceaniaCupCopy, &europeanChampionships2Copy, &ecQualifyingGroup1Copy, &ecQualifyingGroup2Copy, &ecQualifyingGroup3Copy, &ecQualifyingGroup4Copy, &ecQualifyingGroup5Copy, &ecQualifyingGroup6Copy, &ecQualifyingGroup7Copy, &ecQualifyingGroup8Copy, &worldCup2Copy, &worldCupQualifyingGroup1Copy, &worldCupQualifyingGroup2Copy, &worldCupQualifyingGroup3Copy, &worldCupQualifyingGroup4Copy, &worldCupQualifyingGroup5Copy, &worldCupQualifyingGroup6Copy, &worldCupQualifyingGroup7Copy, &worldCupQualifyingGroup8Copy, &northAmericaWorldCupQualificationCopy, &southAmericaWorldCupQualificationCopy, &africaWorldCupQualificationCopy, &asiaWorldCupQualificationCopy, &oceaniaWorldCupQualificationCopy, &invitationTournamentCopy, &tourCopy, &friendly, &friendlyCopy, (CompetitionCup*)-1 };
CompetitionCup * nationalTeamCompetitionsAndQualifications1[39] = { &worldCup, &worldCup2Copy, &europeanChampionships, &europeanChampionships2Copy, &copaAmerica, &copaAmericaCopy, &africanNationsCup, &africanNationsCupCopy, &northAmericanCup, &northAmericanCupCopy, &asianCup, &asianCupCopy, &oceaniaCup, &oceaniaCupCopy, &friendlyCopy, &ecQualifyingGroup1Copy, &ecQualifyingGroup2Copy, &ecQualifyingGroup3Copy, &ecQualifyingGroup4Copy, &ecQualifyingGroup5Copy, &ecQualifyingGroup6Copy, &ecQualifyingGroup7Copy, &ecQualifyingGroup8Copy, &worldCupQualifyingGroup1Copy, &worldCupQualifyingGroup2Copy, &worldCupQualifyingGroup3Copy, &worldCupQualifyingGroup4Copy, &worldCupQualifyingGroup5Copy, &worldCupQualifyingGroup6Copy, &worldCupQualifyingGroup7Copy, &worldCupQualifyingGroup8Copy, &northAmericaWorldCupQualificationCopy, &southAmericaWorldCupQualificationCopy, &africaWorldCupQualificationCopy, &asiaWorldCupQualificationCopy, &oceaniaWorldCupQualificationCopy, &invitationTournamentCopy, &tourCopy, (CompetitionCup*)-1 };
CompetitionCareer careerContests[34] = { { &euroCup, &euroCupCopy, 0x4E }, { &cupWinnersCup, &cupWinnersCupCopy, 0x5C }, { &uefaCup, &uefaCupCopy, 0x5C }, { &invitationTournament, &invitationTournamentCopy, 0x24 }, { &tour, &tourCopy, 0x24 }, { &friendly, &friendlyCopy, 0x28 }, { &europeanChampionships2, &europeanChampionships2Copy, 0x4E }, { &ecQualifyingGroup1, &ecQualifyingGroup1Copy, 0x28 }, { &ecQualifyingGroup2, &ecQualifyingGroup2Copy, 0x28 }, { &ecQualifyingGroup3, &ecQualifyingGroup3Copy, 0x28 }, { &ecQualifyingGroup4, &ecQualifyingGroup4Copy, 0x28 }, { &ecQualifyingGroup5, &ecQualifyingGroup5Copy, 0x28 }, { &ecQualifyingGroup6, &ecQualifyingGroup6Copy, 0x28 }, { &ecQualifyingGroup7, &ecQualifyingGroup7Copy, 0x28 }, { &ecQualifyingGroup8, &ecQualifyingGroup8Copy, 0x24 }, { &copaAmerica, &copaAmericaCopy, 0x46 }, { &africanNationsCup, &africanNationsCupCopy, 0x30 }, { &northAmericanCup, &northAmericanCupCopy, 0x2E }, { &asianCup, &asianCupCopy, 0x30 }, { &oceaniaCup, &oceaniaCupCopy, 0x1C }, { &worldCup2, &worldCup2Copy, 0x70 }, { &worldCupQualifyingGroup1, &worldCupQualifyingGroup1Copy, 0x28 }, { &worldCupQualifyingGroup2, &worldCupQualifyingGroup2Copy, 0x28 }, { &worldCupQualifyingGroup3, &worldCupQualifyingGroup3Copy, 0x28 }, { &worldCupQualifyingGroup4, &worldCupQualifyingGroup4Copy, 0x28 }, { &worldCupQualifyingGroup5, &worldCupQualifyingGroup5Copy, 0x28 }, { &worldCupQualifyingGroup6, &worldCupQualifyingGroup6Copy, 0x28 }, { &worldCupQualifyingGroup7, &worldCupQualifyingGroup7Copy, 0x28 }, { &worldCupQualifyingGroup8, &worldCupQualifyingGroup8Copy, 0x28 }, { &northAmericaWorldCupQualification, &northAmericaWorldCupQualificationCopy, 0x48 }, { &southAmericaWorldCupQualification, &southAmericaWorldCupQualificationCopy, 0x40 }, { &africaWorldCupQualification, &africaWorldCupQualificationCopy, 0x70 }, { &asiaWorldCupQualification, &asiaWorldCupQualificationCopy, 0x6C }, { &oceaniaWorldCupQualification, &oceaniaWorldCupQualificationCopy, 0x24 } };
const char aDataEurocupTmd[] = "data/eurocup.tmd";
const char aDataEurocwcTmd[] = "data/eurocwc.tmd";
const char aDataUefacupTmd[] = "data/uefacup.tmd";
CompetitionCup2_4_2_32 euroCup = { { { { 0, 2, -1, 64, 32, 33, 0, 39, 1 }, 1, 1, 2, 3, 53, 4, { { 16, 4, 4 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 0, 0 }, { 0, 0, 0 } }, 0 }, { 0, -108, -108, 20 } }, { aEuropeanChampi_1, aEuropeanCup }, { 13, 1, 25, 0, 37, 5, 33, 33, 35, 6, 30, 18, 14, 4, 28, 23, 1, 5, 38, 9, 20, 22, 8, 20, 36, 8, 27, 11, 20, 0, 29, 12 } };
CompetitionCup_6_2_64 cupWinnersCup = { { { 1, 1, -1, 64, 32, 15, 0, 21, 1 }, 0, 32, 1, 53, 1 }, { -108, -108, -108, -108, 20, 0 }, { aEuropeanCupWin, aEuroCwCup }, { 15, 0, 78, 2, 7, 2, 34, 11, 35, 8, 5, 0, 29, 2, 40, 16, 17, 8, 36, 0, 2, 2, 27, 1, 19, 15, 38, 10, 11, 4, 25, 21, 30, 8, 20, 18, 14, 22, 41, 7, 31, 10, 4, 11, 12, 8, 8, 18, 3, 6, 16, 8, 37, 12, 39, 10, 1, 7, 6, 10, 21, 6, 13, 30 } };
CompetitionCup_6_2_64 uefaCup = { { { 2, 1, -1, 64, 32, 15, 0, 21, 1 }, 0, 32, 1, 53, 1 }, { -108, -108, -108, -108, 20, 0 }, { aEufaCup, aEufaCup_0 }, { 31, 19, 29, 3, 28, 7, 38, 5, 6, 8, 35, 44, 29, 24, 2, 0, 14, 23, 20, 40, 36, 7, 37, 10, 35, 19, 25, 10, 2, 4, 30, 10, 20, 21, 1, 2, 33, 0, 7, 3, 16, 5, 8, 22, 14, 30, 38, 21, 20, 23, 35, 42, 14, 17, 31, 16, 13, 22, 29, 20, 13, 23, 14, 25 } };
CompetitionCup2_6_2_64 worldCup2 = { { { { 3, 2, -1, -120, -112, 35, 0, 41, 0 }, 1, 0, 1, 3, 53, 6, { { 32, 8, 4 }, { 16, 0, 16 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, -1, 2 }, { 2, 0, 2 } }, 1 }, { 0, 20, 20, 20, 20, 20 } }, { aWorldCup, aWorldCup_0 }, { 0 } };
CompetitionCup2_6_2_48 worldCup = { { { { 4, 2, -1, -120, -112, 35, 0, 41, 1 }, 0, 0, 1, 3, 53, 6, { { 24, 6, 4 }, { 16, 0, 16 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, -1, 2 }, { 2, 0, 2 } }, 1 }, { 0, 20, 20, 20, 20, 20 } }, { aWorldCup, aWorldCup_0 }, { 80, 36, 82, 4, 83, 13, 80, 44, 82, 2, 80, 37, 81, 6, 80, 43, 80, 17, 82, 1, 80, 42, 84, 24, 82, 0, 80, 18, 81, 22, 80, 6, 80, 23, 80, 35, 80, 32, 83, 8, 80, 5, 81, 19, 80, 19, 84, 22 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup1 = { { { 5, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_2, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup2 = { { { 6, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_3, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup3 = { { { 7, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_4, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup4 = { { { 8, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_5, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup5 = { { { 9, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_6, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup6 = { { { 10, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_7, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup7 = { { { 11, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_8, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 worldCupQualifyingGroup8 = { { { 12, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aWorldCupQualif_9, aWCQualifier_0 }, { 0 } };
CompetitionCup2_6_2_24 northAmericaWorldCupQualification = { { { { 13, 2, 83, 72, 16, 35, 0, 41, 0 }, 1, 0, 2, 3, 53, 2, { { 12, 0, 12 }, { 6, 1, 6 }, { 3, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { -108, 20, 20, 20, 20, 20 } }, { aWorldCupQualif_1, aWCQualifier_0 }, { 0 } };
CompetitionCup2_6_2_16 southAmericaWorldCupQualification = { { { { 14, 2, 82, 72, 16, 35, 0, 41, 0 }, 1, 0, 2, 3, 53, 1, { { 8, 1, 8 }, { 4, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { 20, 20, 20, 20, 20, 20 } }, { aWorldCupQualif_1, aWCQualifier_0 }, { 0 } };
CompetitionCup2_6_2_64 africaWorldCupQualification = { { { { 15, 2, 81, 72, 16, 35, 0, 41, 0 }, 1, 0, 2, 3, 53, 3, { { 32, 0, 32 }, { 16, 0, 16 }, { 8, 1, 8 }, { 5, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { -108, -108, 20, 20, 20, 20 } }, { aWorldCupQualif_1, aWCQualifier_0 }, { 0 } };
CompetitionCup2_6_2_60 asiaWorldCupQualification = { { { { 16, 2, 84, 72, 16, 35, 0, 41, 0 }, 1, 0, 2, 3, 53, 3, { { 24, 0, 24 }, { 12, 0, 12 }, { 6, 1, 6 }, { 2, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { -108, -108, 20, 20, 20, 20 } }, { aWorldCupQualif_1, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_8 oceaniaWorldCupQualification = { { { 17, 0, 85, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 4 }, { 1, 0, 0, 0, 0, 0 }, { aWorldCupQualif_1, aWCQualifier_0 }, { 0 } };
CompetitionCup_6_2_8 invitationTournament = { { { 18, 0, -1, -104, -104, 15, 0, 21, 0 }, 1, 1, 3, 53, 4 }, { 0 }, { aInvitationTour, aInvTournament }, { 0 } };
CompetitionCup_6_2_8 tour = { { { 19, 0, -1, -104, -104, 15, 0, 21, 0 }, 1, -1, 3, 53, 4 }, { 0 }, { 0, aTour }, { 0 } };
CompetitionCup_6_2_12 friendly = { { { 20, 0, -1, 56, 0, 15, 0, 21, 0 }, 1, -1, 3, 53, 6 }, { 0 }, { aFriendly, aFriendly_0 }, { 0 } };
CompetitionCup2_4_2_32 europeanChampionships2 = { { { { 21, 2, 80, -120, -120, 33, 0, 39, 0 }, 1, 0, 1, 3, 53, 4, { { 16, 4, 4 }, { 8, 0, 0 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { 0, 20, 20, 20 } }, { aEuropeanChampi_0, aECFinals }, { 0 } };
CompetitionCup2_4_2_32 europeanChampionships = { { { { 22, 2, 80, -120, -120, 33, 0, 39, 1 }, 1, 0, 1, 3, 53, 4, { { 16, 4, 4 }, { 8, 0, 0 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { 0, 20, 20, 20 } }, { aEuropeanChampi_0, aECFinals }, { 80, 11, 80, 44, 80, 19, 80, 39, 80, 42, 80, 6, 80, 36, 80, 15, 80, 17, 80, 9, 80, 23, 80, 37, 80, 10, 80, 34, 80, 45, 80, 7 } };
CompetitionCup_6_2_12 ecQualifyingGroup1 = { { { 23, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 ecQualifyingGroup2 = { { { 24, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr_0, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 ecQualifyingGroup3 = { { { 25, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr_1, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 ecQualifyingGroup4 = { { { 26, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr_2, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 ecQualifyingGroup5 = { { { 27, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr_3, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 ecQualifyingGroup6 = { { { 28, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr_4, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_12 ecQualifyingGroup7 = { { { 29, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 6 }, { 2, 0, 0, 0, 0, 0 }, { aECQualifyingGr_5, aECQualifier_0 }, { 0 } };
CompetitionCup_6_2_8 ecQualifyingGroup8 = { { { 30, 0, 80, 72, 16, 15, 0, 21, 0 }, 1, 2, 3, 53, 4 }, { 1, 0, 0, 0, 0, 0 }, { aECQualifyingGr_6, aECQualifier_0 }, { 0 } };
CompetitionCup2_4_2_24 copaAmerica = { { { { 31, 2, 82, -120, -112, 33, 0, 39, 0 }, 1, 0, 1, 3, 53, 4, { { 12, 3, 4 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { 0, 4, 4, 4 } }, { aCopaAmerica, aCopaAmerica_0 }, { 83, 8, 83, 13, 82, 8, 82, 9, 82, 0, 82, 1, 82, 2, 82, 3, 82, 4, 82, 5, 82, 6, 82, 7 } };
CompetitionCup2_6_2 africanNationsCup = { { { 32, 2, 81, -120, -112, 35, 0, 0, 0 }, 1, 0, 1, 3, 53, 5, { { 32, 8, 4 }, { 16, 0, 16 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 1, 1 } }, 1 }, { 0, 20, 20, 20, 20, 0 }, { aAfricanNations, aAfricanCup } };
CompetitionCup2_4_2 northAmericanCup = { { { { 33, 2, 83, -120, -112, 33, 0, 0, 0 }, 1, 0, 1, 3, 53, 4, { { 12, 3, 4 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 1, 1 }, { 1, 1, 1 } }, 1 }, { 0, 20, 20, 20 } }, { aNorthAmericanC, aNAmericanCup } };
CompetitionCup2_6_2 asianCup = { { { 34, 2, 84, -120, -112, 35, 0, 0, 0 }, 1, 0, 1, 3, 53, 5, { { 30, 5, 6 }, { 16, 0, 16 }, { 8, 0, 8 }, { 4, 0, 4 }, { 2, 0, 2 }, { 1, 1, 1 } }, 1 }, { 0, 20, 20, 20, 20, 0 }, { aAsianCup, aAsianCup_0 } };
CompetitionCup_6_2 oceaniaCup = { { { 35, 0, 85, -120, -112, 15, 0, 0, 0 }, 1, 1, 3, 53, 4 }, { 0 }, { aOceaniaCup, aOceaniaCup_0 } };
CompetitionLeague_3_6 customsLeague = { { { 36, 0, 72, 64, 32, 27, 0, 0, 0 }, 3, 2, 3, 53 }, { { 20, 0, 0, 0, 0, 0 }, { 22, 0, 0, 0, 0, 0 }, { 22, 0, 0, 0, 0, 0 } }, 0, { aDivision1, aDivision1, aDivision2, aDivision2, aDivision3, aDivision3 } };
CompetitionLeague_1 albanianLeague = { { { 37, 0, 0, 64, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 austrianLeague = { { { 38, 0, 1, 56, 40, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 belarussiaLleague = { { { 39, 0, 76, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 69 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 belgianLeague = { { { 40, 0, 2, 56, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 bulgarianLeague = { { { 41, 0, 3, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 croatianLeague = { { { 42, 0, 4, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 cypriotLeague = { { { 43, 0, 5, 64, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 14, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 czechLeague = { { { 44, 0, 6, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 danishLeague = { { { 45, 0, 7, 56, 40, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_4_8_2_24 englishLeagues = { { { 46, 0, 8, 56, 32, 33, 0, 0, 0 }, 4, 2, 3, 51 }, { { 20, 0, 0, 3, 0, 0 }, { 24, 2, 4, 4, 0, 46 }, { 24, 3, 4, 4, 0, 120 }, { 24, 3, 4, 0, 0, -62 } }, 0, { aPremierLeague, aPremier, aDivisionOne, aDivisionOne, aDivisionTwo, aDivisionTwo, aDivisionThree, aDivisionThree }, { &div1Playoffs, &englishLeagues1 }, { 0, 0, 0, 3, 0, 1, 0, 2, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
Leagues_4_2_24 englishLeagues1 = { { &englishLeagues, { 0, 0, 0, 1, 0, 0, 0, 0 }, &englishLeagues, { 0, 0, 0, 1, 0, 0, 0, 3 }, &englishLeagues, { 0, 0, 0, 1, 0, 0, 0, 1 }, &englishLeagues, { 0, 0, 0, 1, 0, 0, 0, 2 } }, &div2Playoffs, &englishLeagues2, { 0, 4, 0, 7, 0, 5, 0, 6, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
Leagues_4_2_24 englishLeagues2 = { { &englishLeagues, { 0, 0, 0, 2, 0, 0, 0, 0 }, &englishLeagues, { 0, 0, 0, 2, 0, 0, 0, 3 }, &englishLeagues, { 0, 0, 0, 2, 0, 0, 0, 1 }, &englishLeagues, { 0, 0, 0, 2, 0, 0, 0, 2 } }, &div3Playoffs, &englishLeagues3, { 0, 8, 0, 11, 0, 9, 0, 10, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
Leagues_4 englishLeagues3 = { &englishLeagues, { 0, 0, 0, 3, 0, 0, 0, 0 }, &englishLeagues, { 0, 0, 0, 3, 0, 0, 0, 3 }, &englishLeagues, { 0, 0, 0, 3, 0, 0, 0, 1 }, &englishLeagues, { 0, 0, 0, 3, 0, 0, 0, 2 } };
Playoffs_8 div1Playoffs = { { 47, 1, 8, -128, -124, 11, 0, 17, 1, 0, 4, 1, 51, 1, -108, 20 }, { aDiv1Playoffs, aPlayoffs }, { 0 } };
Playoffs_8 div2Playoffs = { { 48, 1, 8, -128, -124, 11, 0, 17, 1, 0, 4, 1, 51, 1, -108, 20 }, { aDiv2Playoffs, aPlayoffs }, { 0 } };
Playoffs_8 div3Playoffs = { { 49, 1, 8, -128, -124, 11, 0, 17, 1, 0, 4, 1, 51, 1, -108, 20 }, { aDiv3Playoffs, aPlayoffs }, { 0 } };
CompetitionLeague_1 estonianLeague = { { { 50, 0, 10, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 faroeIslesLeague = { { { 51, 0, 11, 24, 64, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 finnishLeague = { { { 52, 0, 12, 24, 72, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2_4 frenchLeague = { { { 53, 0, 13, 56, 40, 21, 0, 0, 0 }, 2, 2, 3, 53 }, { { 20, 0, 0, 3, 0, 0 }, { 22, 3, 0, 0, 0, 0 } }, 0, { aPremiereDivisi, aPremiere, aDeuxiemeDivisi, aDeuxieme } };
CompetitionLeague_2_4 germanLeague = { { { 54, 0, 14, 56, 40, 21, 0, 0, 0 }, 2, 2, 3, 53 }, { { 18, 0, 0, 3, 0, 0 }, { 18, 3, 0, 0, 0, 0 } }, 0, { a1Liga, a1Liga, a2Liga, a2Liga } };
CompetitionLeague_1 greekLeague = { { { 55, 0, 15, 64, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2_2_24 dutchLeague = { { { 56, 0, 25, 56, 32, 0, 0, 0, 0 }, 2, 2, 3, 53 }, { { 18, 0, 0, 1, 2, 8 }, { 18, 1, 2, 0, 0, 2 } }, 0, { &dutchPlayoffs, &dutchLeagues1 }, { 0, 0, 0, 3, 0, 1, 0, 2, 0, -1, 0, -1, 0, -1, 0, -1, 1, 0, 1, 0, 1, 0, 1, 0 } };
Leagues_4 dutchLeagues1 = { &dutchLeague, { 0 }, &dutchLeague, { 0, 0, 0, 1, 0, 0, 0, 1 }, &dutchLeague, { 0, 0, 0, 0, 0, 0, 0, 1 }, &dutchLeague, { 0, 0, 0, 1, 0, 0, 0, 0 } };
Playoffs_8 dutchPlayoffs = { { 57, 1, 25, -128, -128, 11, 0, 17, 1, 1, 4, 1, 53, 1, -108, -108 }, { aPlayoffs, aPlayoffs }, { 0 } };
CompetitionLeague_1 hungarianLeague = { { { 58, 0, 16, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 icelandicLeague = { { { 59, 0, 17, 32, 64, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 israeliLeague = { { { 60, 0, 19, 64, 32, 0, 0, 0, 0 }, 1, 3, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2_4 italianLeague = { { { 61, 0, 20, 64, 32, 21, 0, 0, 0 }, 2, 2, 3, 53 }, { { 18, 0, 0, 4, 0, 0 }, { 20, 4, 0, 0, 0, 0 } }, 0, { aSerieA, aSerieA, aSerieB, aSerieB } };
CompetitionLeague_1 latvianLeague = { { { 62, 0, 21, 32, 64, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 lithuanianLeague = { { { 63, 0, 22, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 luxembourgLeague = { { { 64, 0, 23, 56, 40, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 malteseLeague = { { { 65, 0, 24, 64, 24, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 northernIrishLeague = { { { 66, 0, 26, 64, 24, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 norwegianLeague = { { { 67, 0, 27, 24, 72, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 14, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 polishLeague = { { { 68, 0, 28, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 portugeseLeague = { { { 69, 0, 29, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 irishLeague = { { { 70, 0, 18, 56, 24, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 romanianLeague = { { { 71, 0, 30, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 russianLeague = { { { 72, 0, 31, 16, 80, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 sanMarinoLeague = { { { 73, 0, 32, 72, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_4_2_8 scottishLeague = { { { 74, 0, 33, 56, 32, 0, 0, 0, 0 }, 4, 4, 3, 51 }, { { 10, 0, 0, 1, 1, 20 }, { 10, 1, 1, 2, 0, 14 }, { 10, 2, 0, 2, 0, 0 }, { 10, 2, 0, 0, 0, 0 } }, 0, { &scottishPlayoffs, &scottishLeague1 }, { 0, 0, 0, 1, 0, -1, 1, 0 } };
Leagues_2 scottishLeague1 = { &scottishLeague, { 0 }, &scottishLeague, { 0, 0, 0, 1, 0, 0, 0, 0 } };
Playoffs_4 scottishPlayoffs = { { 75, 1, 33, -128, -128, 11, 0, 17, 1, 0, 2, 1, 51, 1, 20, 0 }, { aPlayoffs, aPlayoffs }, { 0 } };
CompetitionLeague_1 slovakianLeague = { { { 76, 0, 78, 56, 40, 0, 0, 0, 0 }, 1, 2, 2, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 slovenianLeague = { { { 77, 0, 34, 56, 40, 0, 0, 0, 0 }, 1, 2, 2, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2_4_2_24 spanishLeague = { { { 78, 0, 35, 64, 40, 21, 0, 0, 0 }, 2, 2, 3, 53 }, { { 22, 0, 0, 2, 2, 24 }, { 20, 2, 2, 0, 0, 18 } }, 0, { aPrimeraDivisio, aPrimera, aSegundaDivisio, aSegunda }, { &spanishPlayoffs, &spanishLeague1 }, { 0, 0, 0, 3, 0, 1, 0, 2, 0, -1, 0, -1, 0, -1, 0, -1, 1, 0, 1, 0, 1, 0, 1, 0 } };
Leagues_4 spanishLeague1 = { &spanishLeague, { 0 }, &spanishLeague, { 0, 0, 0, 1, 0, 0, 0, 1 }, &spanishLeague, { 0, 0, 0, 0, 0, 0, 0, 1 }, &spanishLeague, { 0, 0, 0, 1, 0, 0, 0, 0 } };
Playoffs_8 spanishPlayoffs = { { 79, 1, 35, -120, -120, 11, 0, 17, 1, 1, 4, 1, 53, 1, -108, -108 }, { aPlayoffs, aPlayoffs }, { 0 } };
CompetitionLeague_1 swedishLeague = { { { 80, 0, 36, 24, 72, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 14, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 swissLeague = { { { 81, 0, 37, 48, 40, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 turkishLeague = { { { 82, 0, 38, 56, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 ukrainianLeague = { { { 83, 0, 39, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 18, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 welshLeague = { { { 84, 0, 40, 56, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 20, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 yugoslavianLeague = { { { 85, 0, 41, 64, 40, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 algerianLeague = { { { 86, 0, 42, 64, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2 argentinianLeague = { { { 87, 0, 43, 64, 32, 0, 0, 0, 0 }, 2, 2, 3, 53 }, { { 20, 0, 0, 2, 0, 0 }, { 20, 2, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_4_8 australianLeague = { { { 88, 0, 44, 16, 80, 33, 0, 0, 0 }, 4, 2, 3, 53 }, { { 12, 0, 0, 0, 0, 0 }, { 12, 0, 0, 0, 0, 0 }, { 14, 0, 0, 0, 0, 0 }, { 12, 0, 0, 0, 0, 0 } }, 0, { a1stDivision, a1stDivision, aSouthDivision, aSouthDivision_0, aNswDivision, aNsw, aQueenslandDivi, aQueensland } };
CompetitionLeague_1 bolivianLeague = { { { 89, 0, 45, 32, 88, 0, 0, 0, 0 }, 1, 2, 2, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 brasilianLeague = { { { 90, 0, 46, 0, 40, 0, 0, 0, 0 }, 1, 2, 2, 53 }, { { 24, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 chileanLeague = { { { 91, 0, 48, 24, 88, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 colombianLeague = { { { 92, 0, 49, 24, 88, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 ecuadorLeague = { { { 93, 0, 50, 24, 88, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_4 elSalvadorLeague = { { { 94, 0, 51, 56, 32, 0, 0, 0, 0 }, 4, 2, 3, 53 }, { { 10, 0, 0, 1, 0, 0 }, { 12, 1, 0, 1, 0, 0 }, { 12, 1, 0, 1, 0, 0 }, { 12, 1, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 indianLeague = { { { 95, 0, 75, 0, 24, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 6, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2_4 japaneseLeague = { { { 96, 0, 55, 16, 80, 21, 0, 0, 0 }, 2, 2, 3, 53 }, { { 14, 0, 0, 0, 0, 0 }, { 14, 0, 0, 0, 0, 0 } }, 0, { aJLeague, aJLeague_0, aLeague_2, aLeague_3 } };
CompetitionLeague_2 mexicanLeague = { { { 97, 0, 60, 56, 32, 0, 0, 0, 0 }, 2, 2, 3, 53 }, { { 20, 0, 0, 2, 0, 0 }, { 20, 2, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_3_6 newZealandLeague = { { { 98, 0, 62, 16, 72, 27, 0, 0, 0 }, 3, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 }, { 10, 0, 0, 0, 0, 0 }, { 10, 0, 0, 0, 0, 0 } }, 0, { aNorthernRegion, aNorthern, aCentralRegion, aCentral, aSouthernRegion, aSouthern } };
CompetitionLeague_1 paraguayanLeague = { { { 99, 0, 64, 64, 32, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 peruvianLeague = { { { 100, 0, 65, 24, 88, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 southAfricanLeague = { { { 101, 0, 69, 0, 80, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 16, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 surinamLeague = { { { 102, 0, 66, 24, 72, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 taiwaneseLeague = { { { 103, 0, 67, 64, 32, 0, 0, 0, 0 }, 1, 4, 3, 53 }, { { 12, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_2_2_8 uruguayanLeague = { { { 104, 0, 71, 24, 88, 0, 0, 0, 0 }, 2, 2, 3, 53 }, { { 12, 0, 0, 1, 1, 8 }, { 14, 1, 1, 0, 0, 2 } }, 0, { &uruguayanPlayoffs, &uruguayanLeague1 }, { 0, 0, 0, 1, 0, -1, 1, 0 } };
Leagues_2 uruguayanLeague1 = { &uruguayanLeague, { 0 }, &uruguayanLeague, { 0, 0, 0, 1, 0, 0, 0, 0 } };
Playoffs_4 uruguayanPlayoffs = { { 105, 1, 71, 88, 88, 11, 0, 17, 1, 0, 2, 1, 53, 1, -108, 0 }, { aPlayoffs, aPlayoffs }, { 0 } };
CompetitionLeague_1 americanLeague = { { { 106, 0, 73, 24, 72, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 10, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 venezuelanLeague = { { { 107, 0, 77, 24, 88, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 22, 0, 0, 0, 0, 0 } }, 0 };
CompetitionLeague_1 ghanaLeague = { { { 108, 0, 79, 56, 40, 0, 0, 0, 0 }, 1, 2, 3, 53 }, { { 8, 0, 0, 0, 0, 0 } }, 0 };
CompetitionCup_4 albanianCup = { { { 109, 1, 0, 88, 32, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { 84, 84, -108, 20 } };
CompetitionCup_4 austrianCup = { { { 110, 1, 1, -128, -120, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_4 belarusianCup = { { { 111, 1, 76, 72, 40, 0, 0, 0, 0 }, 0, 16, 0, 53, 1 }, { 84, 84, 84, 20 } };
CompetitionCup_4 belgianCup = { { { 112, 1, 2, 80, 32, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { 84, 84, -108, 20 } };
CompetitionCup_4 bulgarianCup = { { { 113, 1, 3, 80, 32, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { -108, -108, -108, 20 } };
CompetitionCup_4 croatianCup = { { { 114, 1, 4, 80, 40, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { -108, -108, -108, -108 } };
CompetitionCup_4 cypriotCup = { { { 115, 1, 5, 104, -128, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { -108, -108, 20, 0 } };
CompetitionCup_4 czechCup = { { { 116, 1, 6, 72, 40, 0, 0, 0, 0 }, 0, 16, 0, 53, 1 }, { 84, 84, 84, 20 } };
CompetitionCup_4 danishCup = { { { 117, 1, 7, 112, -120, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { 84, -108, 20, 0 } };
CompetitionCup_6_2 englishCup = { { { 118, 1, 8, 96, -128, 15, 0, 0, 0 }, 0, 64, 0, 51, 3 }, { 104, 104, 104, 104, 40, 40 }, { aCup_4, aCup_5 } };
CompetitionCup_6_2 englishLeagueCup = { { { 119, 1, 8, 64, 16, 15, 0, 0, 0 }, 0, 64, 2, 51, 2 }, { -108, 104, 104, 104, -108, 40 }, { aLeagueCup, aLeagueCup_0 } };
CompetitionCup_6_2 englishCup_1 = { { { 120, 1, 8, 96, -128, 15, 0, 0, 0 }, 0, 32, 0, 51, 4 }, { 104, 104, 104, 40, 40, 0 }, { aCup_4, aCup_5 } };
CompetitionCup_6_2 englishLeagueCup_1 = { { { 121, 1, 8, 64, 16, 15, 0, 0, 0 }, 0, 32, 2, 51, 3 }, { 104, 104, 104, -108, 40, 0 }, { aLeagueCup, aLeagueCup_0 } };
CompetitionCup_4 estonianCup = { { { 122, 1, 10, -128, -120, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { 84, -108, 20, 0 } };
CompetitionCup_4 faroeIslesCup = { { { 123, 1, 11, 56, 64, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { 84, -108, 20, 0 } };
CompetitionCup_4 finnishCup = { { { 124, 1, 12, 32, 40, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_6_2 frenchCup = { { { 125, 1, 13, 104, -120, 15, 0, 0, 0 }, 0, 32, 0, 53, 1 }, { 84, 84, 84, 84, 20, 0 }, { aCoupeDeFrance, aCoupe } };
CompetitionCup_6_2 germanCup = { { { 126, 1, 14, 64, 40, 15, 0, 0, 0 }, 0, 32, 0, 53, 3 }, { 84, 84, 84, 84, 20, 0 }, { aDFBPokal, aPokal } };
CompetitionCup_4 greekCup = { { { 127, 1, 15, 0, 32, 0, 0, 0, 0 }, 0, 16, 1, 53, 2 }, { -108, -108, -108, 20 } };
CompetitionCup_4 hungarianCup = { { { -128, 1, 16, 104, 40, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { -108, -108, -108, -108 } };
CompetitionCup_4 icelandicCup = { { { -127, 1, 17, 56, 64, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_4 irishCup = { { { -126, 1, 18, 112, -128, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 104, 104, 40, 0 } };
CompetitionCup_4 israeliCup = { { { -125, 1, 19, 120, -128, 0, 0, 0, 0 }, 0, 16, 0, 53, 1 }, { 84, 84, 84, 20 } };
CompetitionCup_6_2 italianCup = { { { -124, 1, 20, 56, 32, 15, 0, 0, 0 }, 0, 32, 1, 53, 2 }, { -108, -108, -108, -108, 20, 0 }, { aCoppaItalia, aCoppa } };
CompetitionCup_4 latvianCup = { { { -123, 1, 21, 56, 64, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { -108, -108, 20, 0 } };
CompetitionCup_4 lithuanianCup = { { { -122, 1, 22, -128, -120, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { -108, -108, 20, 0 } };
CompetitionCup_4 luxembourgCup = { { { -121, 1, 23, 120, -120, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_4 malteseCup = { { { -120, 1, 24, -128, -120, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_6 dutchCup = { { { -119, 1, 25, 88, 32, 0, 0, 0, 0 }, 0, 32, 0, 53, 3 }, { 84, 84, 84, 84, 20, 0 } };
CompetitionCup_4 northernIrishCup = { { { -118, 1, 26, 104, -128, 0, 0, 0, 0 }, 0, 16, 0, 53, 6 }, { 104, 104, 104, 40 } };
CompetitionCup_4 norwegianCup = { { { -117, 1, 27, 64, 80, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_4 polishCup = { { { -116, 1, 28, 80, 40, 0, 0, 0, 0 }, 0, 16, 1, 53, 5 }, { 84, -108, -108, 20 } };
CompetitionCup_4 portugeseCup = { { { -115, 1, 29, 96, -120, 0, 0, 0, 0 }, 0, 16, 0, 53, 6 }, { 84, 84, 84, 20 } };
CompetitionCup_4 romanianCup = { { { -114, 1, 30, 112, -120, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { 84, -108, -108, 20 } };
CompetitionCup_4 russianCup = { { { -113, 1, 31, 16, 40, 0, 0, 0, 0 }, 0, 16, 0, 53, 3 }, { 84, 84, 84, 20 } };
CompetitionCup_4 sanMarinoCup = { { { -112, 1, 32, 120, -128, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_6_2 scottishCup = { { { -111, 1, 33, 96, -128, 15, 0, 0, 0 }, 0, 32, 0, 51, 3 }, { 104, 104, 104, 104, 40, 0 }, { aCup_6, aCup_7 } };
CompetitionCup_6_2 scottishLeagueCup = { { { -110, 1, 33, 56, 72, 15, 0, 0, 0 }, 0, 32, 0, 51, 2 }, { 104, 104, 104, 40, 40, 0 }, { aLeagueCup_1, aLeagueCup_2 } };
CompetitionCup_4 slovakianCup = { { { -109, 1, 78, -128, -120, 0, 0, 0, 0 }, 0, 8, 1, 53, 1 }, { 84, -108, 20, 0 } };
CompetitionCup_4 slovenianCup = { { { -108, 1, 34, 120, -120, 0, 0, 0, 0 }, 0, 16, 0, 53, 2 }, { 84, 84, 84, 20 } };
CompetitionCup_6_2 spanishCup = { { { -107, 1, 35, 88, 40, 15, 0, 0, 0 }, 0, 32, 1, 53, 5 }, { -108, -108, -108, -108, 20, 0 }, { aCopa, aCopa_0 } };
CompetitionCup_4 swedishCup = { { { -106, 1, 36, 32, 40, 0, 0, 0, 0 }, 0, 16, 0, 53, 5 }, { 84, 84, 84, 20 } };
CompetitionCup_4 swissCup = { { { -105, 1, 37, 120, -120, 0, 0, 0, 0 }, 0, 8, 0, 53, 1 }, { 84, 84, 20, 0 } };
CompetitionCup_4 turkishCup = { { { -104, 1, 38, 88, 24, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { 84, 84, -108, -108 } };
CompetitionCup_4 ukrainianCup = { { { -103, 1, 39, 120, -120, 0, 0, 0, 0 }, 0, 16, 1, 53, 1 }, { -108, -108, -108, 20 } };
CompetitionCup_4 welshCup = { { { -102, 1, 40, 88, 32, 0, 0, 0, 0 }, 0, 16, 1, 53, 4 }, { 104, 104, -108, 40 } };
CompetitionCup_4 yugoslavianCup = { { { -101, 1, 41, 80, 32, 0, 0, 0, 0 }, 0, 8, 1, 53, 2 }, { -108, -108, -108, 0 } };
CompetitionCup_4 algerianCup = { { { -100, 1, 42, 96, -128, 0, 0, 0, 0 }, 0, 16, 1, 53, 2 }, { 84, 84, -108, 20 } };
CompetitionCup_6 australianCup = { { { -99, 1, 44, 40, 80, 0, 0, 0, 0 }, 0, 32, 1, 53, 2 }, { 84, 84, 84, 84, 20, 0 } };
CompetitionCup_4_2 japaneseCup = { { { -98, 1, 55, 48, 56, 13, 0, 0, 0 }, 0, 8, 1, 53, 2 }, { 84, 84, 20, 0 }, { aCup_8, aCup_9 } };
CompetitionCup_4_2 japaneseEmperorsCup = { { { -97, 1, 55, 88, 0, 13, 0, 0, 0 }, 0, 16, 1, 53, 2 }, { 84, 84, 84, 20 }, { aEmperorSCup, aEmpCup } };
CompetitionCup_4 southAfricanCup = { { { -96, 1, 69, 56, 80, 0, 0, 0, 0 }, 0, 16, 1, 53, 2 }, { 84, 84, 84, 20 } };
CompetitionCup_4 taiwaneseCup = { { { -95, 1, 67, 96, 120, 0, 0, 0, 0 }, 0, 8, 1, 53, 2 }, { 84, 84, 20, 0 } };
// Season-cycle-indexed word flags for national competition scheduling.
int16_t seasonCycleNationalFlagsA[5] = { -1, -1, -1, -1, -1 };
// Season-cycle-indexed word flags for alternate national competition scheduling.
uint16_t seasonCycleNationalFlagsB[5] = { 0x5005, 0x5025, 0x5022, 0x5011, 0x500B };
// Per-season team availability flags for region 0.
uint8_t careerTeamFlagsBySeason0[20] = { 64, 128, 1, 2, 64, 128, 1, 2, 64, 128, 1, 2, 64, 128, 1, 2, 64, 128, 1, 2 };
// Per-season team availability flags for regions 1-5.
uint8_t careerTeamFlagsBySeason1[20] = { 66, 128, 2, 0, 66, 128, 2, 0, 66, 128, 2, 0, 66, 128, 2, 0, 66, 128, 2, 0 };
// Bitmask for national team selector eligibility by season.
uint32_t nationalSelectorSeasonMaskA = 0x2AAAA;
// Bitmask for national team selector eligibility by season (alternate).
uint32_t nationalSelectorSeasonMaskB = 0x2EEEE;
Competition * competitionsTable[256] = { albaniaTable, austriaTable, belgiumTable, bulgariaTable, croatiaTable, cyprusTable, czechRepublicTable, denmarkTable, englandTable, 0, estoniaTable, faroeIslandsTable, finlandTable, franceTable, germanyTable, greeceTable, hungaryTable, icelandTable, republicIrelandTable, israelTable, italyTable, latviaTable, lithuaniaTable, luxembourgTable, maltaTable, hollandTable, northernIrelandTable, norwayTable, polandTable, portugalTable, romaniaTable, russiaTable, sanMarinoTable, scotlandTable, sloveniaTable, spainTable, swedenTable, switzerlandTable, turkeyTable, ukraineTable, walesTable, yugoslaviaTable, algeriaTable, argentinaTable, australiaTable, boliviaTable, brasilTable, 0, chileTable, colombiaTable, ecuadorTable, elSalvadorTable, 0, 0, 0, japanTable, 0, 0, 0, 0, mexicoTable, 0, newZealandTable, 0, paraguayTable, peruTable, surinamTable, taiwanTable, 0, southAfricaTable, 0, uruguayTable, &customsTable, usaTable, 0, indiaTable, belarusTable, venezuelaTable, slovakiaTable, ghanaTable, &europeTable, &africaTable, &southAmericaTable, &northAmericaTable, &asiaTable, &oceaniaTable, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &customsTable, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, &worldCupQualifyingGroups, &ecQualifyingGroups, &worldTable, 0 };
QualifyingGroup_9_2 worldCupQualifyingGroups = { { &worldCupQualifyingGroup1, &worldCupQualifyingGroup2, &worldCupQualifyingGroup3, &worldCupQualifyingGroup4, &worldCupQualifyingGroup5, &worldCupQualifyingGroup6, &worldCupQualifyingGroup7, &worldCupQualifyingGroup8, (CompetitionCup*)-1 }, { '\xFF', CN_ALBANIA } };
QualifyingGroup_9_2 ecQualifyingGroups = { { &ecQualifyingGroup1, &ecQualifyingGroup2, &ecQualifyingGroup3, &ecQualifyingGroup4, &ecQualifyingGroup5, &ecQualifyingGroup6, &ecQualifyingGroup7, &ecQualifyingGroup8, (CompetitionCup*)-1 }, { '\xFF', CN_ALBANIA } };
QualifyingGroup_3 customsTable = { { &customsLeague, (CompetitionCup*)-2, (CompetitionCup*)-1 } };
QualifyingGroup_2_8 worldTable = { { &worldCup, (CompetitionCup*)-1 }, { CN_EUROPE, CN_NORTH_AMERICA, CN_SOUTH_AMERICA, CN_AFRICA, CN_ASIA, CN_OCEANIA, '\xFF', CN_ALBANIA } };
QualifyingGroup_6_44 europeTable = { { &unk_FC, &europeanChampionships, &euroCup, &cupWinnersCup, &uefaCup, (CompetitionCup*)-1 }, { CN_ALBANIA, CN_AUSTRIA, CN_BELARUS, CN_BELGIUM, CN_BULGARIA, CN_CROATIA, CN_CYPRUS, CN_CZECH_REPUBLIC, CN_DENMARK, CN_ENGLAND, CN_ESTONIA, CN_FAROE_ISLANDS, CN_FINLAND, CN_FRANCE, CN_GERMANY, CN_GREECE, CN_HOLLAND, CN_HUNGARY, CN_ICELAND, CN_ISRAEL, CN_ITALY, CN_LATVIA, CN_LITHUANIA, CN_LUXEMBOURG, CN_MALTA, CN_NORTHERN_IRELAND, CN_NORWAY, CN_POLAND, CN_PORTUGAL, CN_REPUBLIC_IRELAND, CN_ROMANIA, CN_RUSSIA, CN_SAN_MARINO, CN_SCOTLAND, CN_SLOVAKIA, CN_SLOVENIA, CN_SPAIN, CN_SWEDEN, CN_SWITZERLAND, CN_TURKEY, CN_UKRAINE, CN_WALES, CN_YUGOSLAVIA, '\xFF' } };
QualifyingGroup_3_4 africaTable = { { &africaWorldCupQualification, &africanNationsCup, (CompetitionCup*)-1 }, { CN_ALGERIA, CN_GHANA, CN_SOUTH_AFRICA, '\xFF' } };
QualifyingGroup_3_12 southAmericaTable = { { &southAmericaWorldCupQualification, &copaAmerica, (CompetitionCup*)-1 }, { CN_ARGENTINA, CN_BOLIVIA, CN_BRAZIL, CN_CHILE, CN_COLOMBIA, CN_ECUADOR, CN_PARAGUAY, CN_PERU, CN_SURINAM, CN_URUGUAY, CN_VENEZUELA, '\xFF' } };
QualifyingGroup_3_4 northAmericaTable = { { &northAmericaWorldCupQualification, &northAmericanCup, (CompetitionCup*)-1 }, { CN_EL_SALVADOR, CN_MEXICO, CN_USA, '\xFF' } };
QualifyingGroup_3_4 asiaTable = { { &asiaWorldCupQualification, &asianCup, (CompetitionCup*)-1 }, { CN_INDIA, CN_JAPAN, CN_TAIWAN, '\xFF' } };
QualifyingGroup_3_4 oceaniaTable = { { &oceaniaWorldCupQualification, &oceaniaCup, (CompetitionCup*)-1 }, { CN_AUSTRALIA, CN_NEW_ZEALAND, '\xFF', CN_ALBANIA } };
Competition * albaniaTable[4] = { &albanianLeague, (Competition*)-2, &albanianCup, (Competition*)-1 };
Competition * austriaTable[4] = { &austrianLeague, (Competition*)-2, &austrianCup, (Competition*)-1 };
Competition * belgiumTable[4] = { &belgianLeague, (Competition*)-2, &belgianCup, (Competition*)-1 };
Competition * belarusTable[4] = { &belarussiaLleague, (Competition*)-2, &belarusianCup, (Competition*)-1 };
Competition * bulgariaTable[4] = { &bulgarianLeague, (Competition*)-2, &bulgarianCup, (Competition*)-1 };
Competition * croatiaTable[4] = { &croatianLeague, (Competition*)-2, &croatianCup, (Competition*)-1 };
Competition * cyprusTable[4] = { &cypriotLeague, (Competition*)-2, &cypriotCup, (Competition*)-1 };
Competition * czechRepublicTable[4] = { &czechLeague, (Competition*)-2, &czechCup, (Competition*)-1 };
Competition * denmarkTable[4] = { &danishLeague, (Competition*)-2, &danishCup, (Competition*)-1 };
Competition * englandTable[5] = { &englishLeagues, (Competition*)-2, &englishCup, &englishLeagueCup, (Competition*)-1 };
Competition * estoniaTable[4] = { &estonianLeague, (Competition*)-2, &estonianCup, (Competition*)-1 };
Competition * faroeIslandsTable[4] = { &faroeIslesLeague, (Competition*)-2, &faroeIslesCup, (Competition*)-1 };
Competition * finlandTable[4] = { &finnishLeague, (Competition*)-2, &finnishCup, (Competition*)-1 };
Competition * franceTable[4] = { &frenchLeague, (Competition*)-2, &frenchCup, (Competition*)-1 };
Competition * germanyTable[4] = { &germanLeague, (Competition*)-2, &germanCup, (Competition*)-1 };
Competition * greeceTable[4] = { &greekLeague, (Competition*)-2, &greekCup, (Competition*)-1 };
Competition * hungaryTable[4] = { &hungarianLeague, (Competition*)-2, &hungarianCup, (Competition*)-1 };
Competition * icelandTable[4] = { &icelandicLeague, (Competition*)-2, &icelandicCup, (Competition*)-1 };
Competition * republicIrelandTable[4] = { &irishLeague, (Competition*)-2, &irishCup, (Competition*)-1 };
Competition * israelTable[4] = { &israeliLeague, (Competition*)-2, &israeliCup, (Competition*)-1 };
Competition * italyTable[4] = { &italianLeague, (Competition*)-2, &italianCup, (Competition*)-1 };
Competition * latviaTable[4] = { &latvianLeague, (Competition*)-2, &latvianCup, (Competition*)-1 };
Competition * lithuaniaTable[4] = { &lithuanianLeague, (Competition*)-2, &lithuanianCup, (Competition*)-1 };
Competition * luxembourgTable[4] = { &luxembourgLeague, (Competition*)-2, &luxembourgCup, (Competition*)-1 };
Competition * maltaTable[4] = { &malteseLeague, (Competition*)-2, &malteseCup, (Competition*)-1 };
Competition * hollandTable[4] = { &dutchLeague, (Competition*)-2, &dutchCup, (Competition*)-1 };
Competition * northernIrelandTable[4] = { &northernIrishLeague, (Competition*)-2, &northernIrishCup, (Competition*)-1 };
Competition * norwayTable[4] = { &norwegianLeague, (Competition*)-2, &norwegianCup, (Competition*)-1 };
Competition * polandTable[4] = { &polishLeague, (Competition*)-2, &polishCup, (Competition*)-1 };
Competition * portugalTable[4] = { &portugeseLeague, (Competition*)-2, &portugeseCup, (Competition*)-1 };
Competition * romaniaTable[4] = { &romanianLeague, (Competition*)-2, &romanianCup, (Competition*)-1 };
Competition * russiaTable[4] = { &russianLeague, (Competition*)-2, &russianCup, (Competition*)-1 };
Competition * sanMarinoTable[4] = { &sanMarinoLeague, (Competition*)-2, &sanMarinoCup, (Competition*)-1 };
Competition * scotlandTable[5] = { &scottishLeague, (Competition*)-2, &scottishCup, &scottishLeagueCup, (Competition*)-1 };
Competition * slovakiaTable[4] = { &slovakianLeague, (Competition*)-2, &slovakianCup, (Competition*)-1 };
Competition * sloveniaTable[4] = { &slovenianLeague, (Competition*)-2, &slovenianCup, (Competition*)-1 };
Competition * spainTable[4] = { &spanishLeague, (Competition*)-2, &spanishCup, (Competition*)-1 };
Competition * swedenTable[4] = { &swedishLeague, (Competition*)-2, &swedishCup, (Competition*)-1 };
Competition * switzerlandTable[4] = { &swissLeague, (Competition*)-2, &swissCup, (Competition*)-1 };
Competition * turkeyTable[4] = { &turkishLeague, (Competition*)-2, &turkishCup, (Competition*)-1 };
Competition * ukraineTable[4] = { &ukrainianLeague, (Competition*)-2, &ukrainianCup, (Competition*)-1 };
Competition * walesTable[4] = { &welshLeague, (Competition*)-2, &welshCup, (Competition*)-1 };
Competition * yugoslaviaTable[4] = { &yugoslavianLeague, (Competition*)-2, &yugoslavianCup, (Competition*)-1 };
Competition * algeriaTable[4] = { &algerianLeague, (Competition*)-2, &algerianCup, (Competition*)-1 };
Competition * argentinaTable[3] = { &argentinianLeague, (Competition*)-2, (Competition*)-1 };
Competition * australiaTable[4] = { &australianLeague, (Competition*)-2, &australianCup, (Competition*)-1 };
Competition * boliviaTable[3] = { &bolivianLeague, (Competition*)-2, (Competition*)-1 };
Competition * brasilTable[3] = { &brasilianLeague, (Competition*)-2, (Competition*)-1 };
Competition * chileTable[3] = { &chileanLeague, (Competition*)-2, (Competition*)-1 };
Competition * colombiaTable[3] = { &colombianLeague, (Competition*)-2, (Competition*)-1 };
Competition * ecuadorTable[3] = { &ecuadorLeague, (Competition*)-2, (Competition*)-1 };
Competition * elSalvadorTable[3] = { &elSalvadorLeague, (Competition*)-2, (Competition*)-1 };
Competition * indiaTable[3] = { &indianLeague, (Competition*)-2, (Competition*)-1 };
Competition * japanTable[5] = { &japaneseLeague, (Competition*)-2, &japaneseCup, &japaneseEmperorsCup, (Competition*)-1 };
Competition * mexicoTable[3] = { &mexicanLeague, (Competition*)-2, (Competition*)-1 };
Competition * newZealandTable[3] = { &newZealandLeague, (Competition*)-2, (Competition*)-1 };
Competition * paraguayTable[3] = { &paraguayanLeague, (Competition*)-2, (Competition*)-1 };
Competition * peruTable[3] = { &peruvianLeague, (Competition*)-2, (Competition*)-1 };
Competition * southAfricaTable[4] = { &southAfricanLeague, (Competition*)-2, &southAfricanCup, (Competition*)-1 };
Competition * surinamTable[3] = { &surinamLeague, (Competition*)-2, (Competition*)-1 };
Competition * taiwanTable[4] = { &taiwaneseLeague, (Competition*)-2, &taiwaneseCup, (Competition*)-1 };
Competition * uruguayTable[3] = { &uruguayanLeague, (Competition*)-2, (Competition*)-1 };
Competition * usaTable[3] = { &americanLeague, (Competition*)-2, (Competition*)-1 };
Competition * venezuelaTable[3] = { &venezuelanLeague, (Competition*)-2, (Competition*)-1 };
Competition * ghanaTable[3] = { &ghanaLeague, (Competition*)-2, (Competition*)-1 };
CountryNumbers allCountriesList[66] = { CN_BRAZIL, CN_ALBANIA, CN_AUSTRIA, CN_BELGIUM, CN_BELARUS, CN_BULGARIA, CN_CROATIA, CN_CYPRUS, CN_CZECH_REPUBLIC, CN_DENMARK, CN_ENGLAND, CN_ESTONIA, CN_FAROE_ISLANDS, CN_FINLAND, CN_FRANCE, CN_GERMANY, CN_GREECE, CN_HUNGARY, CN_ICELAND, CN_REPUBLIC_IRELAND, CN_ISRAEL, CN_ITALY, CN_LATVIA, CN_LITHUANIA, CN_LUXEMBOURG, CN_MALTA, CN_HOLLAND, CN_NORTHERN_IRELAND, CN_NORWAY, CN_POLAND, CN_PORTUGAL, CN_ROMANIA, CN_RUSSIA, CN_SAN_MARINO, CN_SCOTLAND, CN_SLOVAKIA, CN_SLOVENIA, CN_SPAIN, CN_SWEDEN, CN_SWITZERLAND, CN_TURKEY, CN_UKRAINE, CN_WALES, CN_YUGOSLAVIA, CN_ALGERIA, CN_SOUTH_AFRICA, CN_GHANA, CN_ARGENTINA, CN_BOLIVIA, CN_BRAZIL, CN_CHILE, CN_COLOMBIA, CN_ECUADOR, CN_PARAGUAY, CN_PERU, CN_SURINAM, CN_URUGUAY, CN_VENEZUELA, CN_EL_SALVADOR, CN_MEXICO, CN_USA, CN_JAPAN, CN_TAIWAN, CN_INDIA, CN_AUSTRALIA, CN_NEW_ZEALAND };
uint8_t careerCompetitionIdRemapTable[66] = { 0, 1, 76, 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 78, 34, 35, 36, 37, 38, 39, 40, 41, 42, 79, 69, 43, 45, 46, 48, 49, 50, 64, 65, 66, 71, 77, 51, 60, 73, 75, 55, 67, 44, 62, 255 };
uint32_t euroCupQualGroupSeedLists_4_6_11 = 1380960;
uint8_t euroCupQualSeedList4[4] = { 14, 20, 35, 8 };
uint8_t euroCupQualSeedList6[6] = { 2, 13, 29, 30, 31, 41 };
uint8_t euroCupQualSeedList11[11] = { 1, 3, 6, 7, 15, 25, 28, 33, 36, 37, 38 };
uint8_t euroCupQualSeedList22[23] = { 16, 12, 0, 17, 5, 27, 26, 24, 18, 23, 4, 10, 11, 19, 21, 22, 32, 34, 39, 40, 76, 78, 0 };
uint32_t euroCupQualGroupSeedListsReduced_4_6_11 = 1381040;
// Euro cup qualifying seed list for pot of 4 teams.
uint8_t euroCupQualSeedListReduced4[4] = { 14, 20, 35, 8 };
// Euro cup qualifying seed list for pot of 6 teams.
uint8_t euroCupQualSeedListReduced6[6] = { 2, 13, 29, 30, 31, 41 };
// Euro cup qualifying seed list for pot of 11 teams.
uint8_t euroCupQualSeedListReduced11[11] = { 1, 3, 6, 7, 15, 25, 28, 33, 36, 37, 38 };
// Euro cup qualifying seed list for pot of 22 teams.
uint8_t euroCupQualSeedListReduced22[23] = { 16, 12, 0, 17, 5, 27, 26, 24, 18, 23, 4, 10, 11, 19, 21, 22, 32, 34, 39, 40, 76, 78, 0 };
uint32_t euroCupQualGroupSeedBuckets_15_18_22 = 1381120;
// Expanded seed bucket for euro cup qualifying draw.
uint8_t euroCupQualSeedBucket15[15] = { 14, 14, 14, 14, 20, 20, 20, 20, 35, 35, 35, 35, 8, 8, 8 };
// Expanded seed bucket for euro cup qualifying draw.
uint8_t euroCupQualSeedBucket18[18] = { 2, 2, 2, 13, 13, 13, 29, 29, 29, 30, 30, 30, 31, 31, 31, 41, 41, 41 };
// Expanded seed bucket for euro cup qualifying draw.
uint8_t euroCupQualSeedBucket22[22] = { 1, 1, 3, 3, 6, 6, 7, 7, 15, 15, 25, 25, 28, 28, 33, 33, 36, 36, 37, 37, 38, 38 };
// Full seed bucket for euro cup qualifying draw.
uint8_t euroCupQualSeedBucket22Full[23] = { 16, 12, 0, 17, 5, 27, 26, 24, 18, 23, 4, 10, 11, 19, 21, 22, 32, 34, 39, 40, 76, 78, 255 };
uint8_t teamIdSelectionProcessedFlags[64] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
uint8_t careerRegionPickWeightsTable[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4 };
uint8_t careerRegionPickWeightsTable2[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4 };
const char aDataTeamNnn[] = "data/team.nnn";
const char aCustomsEdt[] = "CUSTOMS.EDT";
uint16_t skipLeagueNumbers = 0;
const char aLoadLiverpool[] = "LOAD LIVERPOOL";
const char aError[] = "ERROR";
uint8_t * positionsTable[18] = { positionsDefault, positions541, positions451, positions532, positions352, positions433, positions424, positions343, positionsSweep, positions523, positionsAttack, positionsDefend, positionsDefault, positionsDefault, positionsDefault, positionsDefault, positionsDefault, positionsDefault };
uint8_t positionsDefault[11] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB };
uint8_t positions541[11] = { 0x1, 0x2, 0x3, 0x4, 0x7, 0x5, 0x6, 0x8, 0xA, 0x9, 0xB };
uint8_t positions451[11] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0xA, 0x9, 0xB };
uint8_t positions532[11] = { 0x1, 0x2, 0x3, 0x4, 0x7, 0x5, 0x6, 0x8, 0x9, 0xA, 0xB };
uint8_t positions352[11] = { 0x1, 0x2, 0x3, 0x5, 0x6, 0x4, 0x7, 0x8, 0x9, 0xA, 0xB };
uint8_t positions433[11] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x9, 0x8, 0xA, 0xB };
uint8_t positions424[11] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x7, 0x8, 0x6, 0xA, 0xB, 0x9 };
uint8_t positions343[11] = { 0x1, 0x2, 0x3, 0x5, 0x6, 0x4, 0x7, 0x9, 0x8, 0xA, 0xB };
uint8_t positionsSweep[11] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB };
uint8_t positions523[11] = { 0x1, 0x2, 0x3, 0x4, 0x7, 0x5, 0x8, 0xA, 0x6, 0xB, 0x9 };
uint8_t positionsAttack[11] = { 0x1, 0x2, 0x3, 0x5, 0x4, 0x7, 0x6, 0x8, 0xA, 0xB, 0x9 };
uint8_t positionsDefend[11] = { 0x1, 0x6, 0x2, 0x3, 0x4, 0x5, 0x9, 0x7, 0x8, 0xA, 0xB };
const char * divisionStringTable[4] = { aPremierDivisio, aDivision1_0, aDivision2_0, aDivision3_0 };
const char * divStringTable[4] = { aPremDiv, aDiv1, aDiv2, aDiv3 };
const char * monthStringTable[12] = { aJan, aFeb, aMar, aApr, aMay, aJun, aJul, aAug, aSep, aOct, aNov, aDec };
const char * cupRoundStringTable[12] = { aFirstRound, aSecondRound, aThirdRound, aFourthRound, aFifthRound, aSixthRound, aQuarterFinal, aSemiFinal, aFinal_2, aFinalGroup, aThirdPlacePlay, aFinalGroups };
const char * roundStringTable[12] = { aRound1, aRound2, aRound3, aRound4, aRound5, aRound6, aQFinal, aSFinal, aFinal_3, aFinalGroup_0, a3rdPlayOff, aFinalGroups_0 };
const char * rndStringTable[15] = { aRnd1, aRnd2, aRnd3, aRnd4, aRnd5, aRnd6, aQF, aSF, aFinal, aFinal_0, a3rd, aFinal_1, aReplay, a2ndReplay, a3rdReplay };
const char * replayStringTable[3] = { aReplays, a2ndReplays, a3rdReplays };
const char * playerPositionsStringTable[20] = { aG, aRb, aLb, aD_0, aRw, aLw, aM, aA_1, aEur, aNam, aSam, aAsi, aOce, aAfr, aEuro, aNam_0, aSam_0, aAsi_0, aOce_0, aAfr_0 };
const char * tacticsStringTable[18] = { a442, a541, a451, a532, a352, a433, a424, a343, aSweep, a523, aAttack, aDefend, aUSER_A, aUSER_B, aUSER_C, aUSER_D, aUSER_E, aUSER_F };
int8_t fixtureSchedule2Teams[2] = { 0, 1 };
int8_t fixtureSchedule3Teams[6] = { 0, 1, 2, 0, 1, 2 };
int8_t fixtureSchedule4Teams[12] = { 0, 1, 2, 3, 0, 2, 1, 3, 3, 0, 1, 2 };
int8_t fixtureSchedule5Teams[20] = { 0, 1, 2, 3, 4, 0, 1, 2, 3, 4, 0, 2, 1, 3, 4, 1, 3, 0, 2, 4 };
int8_t fixtureSchedule6Teams[30] = { 0, 1, 2, 3, 4, 5, 0, 2, 1, 4, 3, 5, 3, 0, 5, 1, 2, 4, 4, 0, 1, 3, 5, 2, 0, 5, 1, 2, 3, 4 };
int8_t fixtureSchedule7Teams[42] = { 0, 1, 2, 3, 4, 5, 6, 0, 1, 2, 3, 4, 5, 6, 0, 2, 1, 3, 4, 6, 5, 0, 1, 4, 2, 5, 3, 6, 0, 3, 5, 1, 2, 4, 6, 1, 4, 0, 6, 2, 3, 5 };
int8_t fixtureSchedule8Teams[56] = { 0, 1, 2, 3, 4, 5, 6, 7, 0, 2, 1, 3, 4, 6, 5, 7, 3, 0, 1, 2, 7, 4, 5, 6, 0, 4, 1, 5, 2, 6, 3, 7, 5, 0, 4, 1, 7, 2, 6, 3, 6, 0, 7, 1, 2, 4, 3, 5, 0, 7, 1, 6, 2, 5, 3, 4 };
int8_t fixtureSchedule9Teams[72] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 1, 2, 3, 4, 5, 6, 7, 8, 0, 2, 1, 3, 4, 6, 5, 7, 8, 1, 3, 0, 2, 4, 5, 8, 6, 0, 7, 0, 1, 4, 2, 5, 3, 6, 7, 1, 8, 2, 3, 5, 4, 7, 6, 8, 0, 4, 1, 5, 2, 6, 7, 3, 8, 3, 0, 5, 6, 1, 2, 7, 4, 8 };
int8_t fixtureSchedule10Teams[90] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 2, 1, 3, 4, 6, 5, 8, 7, 9, 3, 0, 1, 2, 7, 4, 9, 5, 6, 8, 0, 4, 5, 1, 2, 6, 3, 9, 8, 7, 5, 0, 1, 4, 2, 7, 3, 8, 9, 6, 6, 0, 7, 1, 8, 2, 3, 5, 4, 9, 0, 7, 1, 8, 9, 2, 4, 3, 5, 6, 8, 0, 9, 1, 2, 4, 6, 3, 7, 5, 0, 9, 1, 6, 2, 5, 3, 7, 4, 8 };
int8_t fixtureSchedule11Teams[110] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 0, 1, 4, 2, 5, 3, 6, 7, 9, 8, 0, 10, 1, 2, 4, 3, 5, 6, 8, 7, 10, 9, 1, 0, 3, 6, 2, 4, 7, 5, 8, 9, 2, 10, 2, 0, 4, 1, 5, 3, 7, 6, 9, 8, 1, 10, 3, 5, 0, 4, 8, 6, 10, 7, 0, 9, 3, 1, 6, 2, 7, 4, 9, 5, 10, 8, 2, 0, 6, 7, 1, 3, 8, 10, 4, 5, 9 };
int8_t fixtureSchedule12Teams[132] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 9, 10, 0, 4, 1, 5, 2, 8, 3, 9, 6, 10, 7, 11, 5, 0, 4, 1, 2, 9, 3, 8, 11, 6, 10, 7, 6, 0, 7, 1, 10, 2, 11, 3, 8, 4, 9, 5, 0, 7, 1, 6, 2, 11, 3, 10, 4, 9, 5, 8, 8, 0, 9, 1, 6, 2, 7, 3, 10, 4, 11, 5, 0, 9, 1, 8, 2, 7, 3, 6, 4, 11, 5, 10, 10, 0, 11, 1, 2, 4, 3, 5, 6, 8, 7, 9, 0, 11, 1, 10, 5, 2, 4, 3, 9, 6, 8, 7 };
int8_t fixtureSchedule13Teams[156] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 1, 3, 0, 2, 4, 5, 8, 6, 9, 7, 10, 11, 0, 12, 2, 1, 4, 3, 5, 6, 8, 7, 9, 10, 12, 11, 1, 0, 4, 2, 5, 3, 6, 7, 11, 8, 12, 9, 0, 10, 0, 1, 5, 2, 6, 3, 7, 4, 8, 9, 12, 10, 1, 11, 2, 8, 3, 4, 7, 5, 9, 6, 10, 11, 3, 12, 3, 0, 5, 1, 6, 2, 7, 4, 9, 8, 11, 10, 2, 12, 4, 0, 6, 7, 1, 5, 10, 8, 0, 9, 1, 11, 4, 12, 5, 2, 8, 3, 9, 6, 11, 7, 12, 10, 3, 0, 7, 1, 8, 9, 2, 4, 10, 5, 11, 6, 12 };
int8_t fixtureSchedule14Teams[182] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 12, 11, 13, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 13, 9, 10, 12, 0, 4, 1, 5, 2, 6, 3, 7, 12, 8, 9, 11, 13, 10, 5, 0, 4, 1, 7, 2, 6, 3, 8, 13, 9, 10, 11, 12, 6, 0, 1, 8, 2, 9, 3, 10, 4, 11, 12, 5, 7, 13, 0, 7, 9, 1, 2, 8, 3, 11, 10, 4, 13, 5, 6, 12, 8, 0, 1, 6, 10, 2, 3, 9, 13, 4, 5, 11, 7, 12, 0, 9, 7, 1, 11, 2, 8, 3, 12, 4, 5, 10, 6, 13, 10, 0, 12, 1, 2, 4, 13, 3, 5, 8, 9, 6, 11, 7, 0, 11, 1, 13, 2, 5, 3, 12, 4, 8, 6, 10, 7, 9, 12, 0, 10, 1, 13, 2, 4, 3, 9, 5, 11, 6, 8, 7, 0, 13, 1, 11, 2, 12, 3, 5, 4, 9, 6, 8, 7, 10 };
int8_t fixtureSchedule15Teams[210] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 0, 1, 4, 2, 5, 3, 6, 7, 9, 11, 8, 10, 12, 13, 1, 14, 1, 0, 3, 2, 4, 5, 8, 6, 9, 7, 10, 11, 13, 12, 0, 14, 2, 3, 5, 4, 7, 6, 8, 9, 12, 10, 13, 11, 14, 0, 4, 1, 5, 2, 6, 3, 7, 8, 12, 9, 13, 10, 14, 11, 0, 6, 1, 7, 2, 8, 3, 4, 9, 5, 10, 1, 11, 12, 1, 13, 2, 14, 3, 0, 5, 4, 8, 6, 10, 7, 11, 9, 14, 12, 2, 13, 3, 0, 6, 10, 4, 5, 9, 7, 12, 8, 13, 2, 11, 14, 4, 0, 7, 1, 8, 3, 9, 5, 11, 6, 12, 10, 0, 13, 4, 14, 5, 1, 7, 2, 8, 3, 10, 11, 6, 9, 0, 12, 3, 13, 5, 14, 6, 9, 1, 2, 10, 4, 11, 7, 13, 8, 14, 12, 4, 8, 0, 10, 1, 2, 9, 3, 11, 5, 12, 6, 13, 7, 14 };
int8_t fixtureSchedule16Teams[240] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 9, 10, 15, 12, 13, 14, 0, 4, 1, 5, 2, 6, 3, 7, 8, 12, 9, 13, 10, 14, 11, 15, 5, 0, 4, 1, 7, 2, 6, 3, 13, 8, 12, 9, 15, 10, 14, 11, 6, 0, 7, 1, 2, 4, 3, 5, 14, 8, 15, 9, 10, 12, 11, 13, 0, 7, 1, 6, 2, 5, 3, 4, 8, 15, 9, 14, 10, 13, 11, 12, 0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 14, 7, 15, 9, 0, 8, 1, 11, 2, 10, 3, 13, 4, 12, 5, 15, 6, 14, 7, 0, 10, 1, 11, 2, 8, 3, 9, 4, 14, 5, 15, 6, 12, 7, 13, 11, 0, 10, 1, 9, 2, 8, 3, 15, 4, 14, 5, 13, 6, 12, 7, 12, 0, 13, 1, 14, 2, 15, 3, 4, 8, 5, 9, 6, 10, 7, 11, 0, 13, 1, 12, 2, 15, 3, 14, 4, 9, 5, 8, 6, 11, 7, 10, 14, 0, 15, 1, 12, 2, 13, 3, 10, 4, 11, 5, 8, 6, 9, 7, 0, 15, 1, 14, 2, 13, 3, 12, 4, 11, 5, 10, 6, 9, 7, 8 };
int8_t fixtureSchedule17Teams[272] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 1, 3, 0, 2, 4, 5, 8, 6, 9, 7, 10, 11, 13, 15, 12, 14, 16, 0, 4, 1, 5, 2, 6, 3, 7, 8, 11, 9, 12, 10, 13, 14, 0, 15, 0, 16, 2, 4, 1, 3, 5, 6, 8, 7, 9, 10, 12, 11, 14, 13, 16, 15, 1, 2, 5, 6, 3, 4, 7, 12, 8, 9, 13, 10, 14, 11, 15, 16, 3, 0, 5, 1, 6, 7, 2, 8, 4, 14, 9, 10, 15, 11, 16, 12, 0, 13, 0, 1, 7, 2, 8, 3, 9, 4, 10, 5, 11, 6, 12, 13, 1, 14, 1, 15, 2, 16, 4, 8, 3, 5, 9, 6, 10, 7, 11, 12, 16, 13, 2, 14, 2, 15, 3, 0, 6, 9, 4, 5, 10, 7, 12, 8, 13, 11, 0, 3, 14, 4, 15, 16, 5, 1, 8, 6, 11, 7, 13, 9, 15, 10, 16, 12, 1, 14, 4, 0, 7, 2, 9, 3, 10, 5, 12, 13, 6, 8, 14, 11, 1, 15, 5, 16, 6, 0, 8, 2, 10, 3, 11, 4, 12, 7, 14, 9, 16, 13, 3, 15, 6, 0, 9, 1, 10, 2, 11, 4, 13, 5, 14, 7, 15, 8, 16, 12, 2, 10, 0, 1, 9, 12, 3, 11, 4, 5, 13, 6, 14, 16, 7, 8, 15 };
int8_t fixtureSchedule18Teams[306] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 16, 15, 17, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 9, 10, 15, 12, 17, 13, 14, 16, 0, 4, 1, 5, 2, 6, 3, 7, 8, 12, 13, 9, 10, 14, 11, 17, 16, 15, 5, 0, 4, 1, 7, 2, 6, 3, 13, 8, 9, 12, 10, 15, 11, 16, 17, 14, 6, 0, 7, 1, 2, 4, 3, 5, 14, 8, 15, 9, 16, 10, 11, 13, 12, 17, 0, 7, 1, 6, 2, 5, 3, 4, 8, 15, 9, 16, 17, 10, 12, 11, 13, 14, 0, 8, 1, 9, 10, 2, 3, 11, 4, 12, 5, 14, 6, 16, 7, 17, 15, 13, 9, 0, 8, 1, 2, 11, 10, 3, 4, 13, 5, 15, 17, 6, 14, 7, 16, 12, 0, 10, 11, 1, 2, 8, 12, 3, 14, 4, 13, 5, 6, 15, 7, 16, 17, 9, 11, 0, 1, 10, 9, 2, 3, 13, 15, 4, 16, 5, 6, 14, 7, 12, 8, 17, 12, 0, 13, 1, 14, 2, 3, 8, 4, 16, 5, 17, 6, 9, 10, 7, 15, 11, 0, 13, 1, 12, 2, 15, 14, 3, 17, 4, 5, 9, 10, 6, 7, 11, 16, 8, 0, 14, 15, 1, 16, 2, 17, 3, 4, 8, 11, 5, 12, 6, 9, 7, 13, 10, 15, 0, 1, 14, 2, 17, 3, 16, 4, 9, 8, 5, 6, 11, 7, 13, 10, 12, 16, 0, 17, 1, 12, 2, 3, 15, 11, 4, 5, 10, 13, 6, 8, 7, 9, 14, 0, 17, 1, 16, 2, 13, 9, 3, 4, 10, 5, 12, 6, 8, 7, 15, 14, 11 };
int8_t fixtureSchedule19Teams[342] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 18, 17, 0, 1, 4, 2, 5, 3, 6, 7, 9, 11, 8, 10, 12, 13, 16, 14, 17, 15, 18, 0, 3, 5, 1, 2, 4, 6, 8, 7, 10, 9, 12, 11, 13, 14, 16, 15, 17, 18, 1, 4, 0, 6, 2, 3, 5, 7, 11, 8, 12, 9, 13, 10, 14, 15, 0, 16, 0, 17, 1, 18, 2, 3, 7, 4, 8, 5, 9, 6, 10, 11, 14, 12, 15, 13, 17, 16, 1, 18, 3, 2, 7, 4, 9, 8, 5, 6, 11, 10, 13, 12, 16, 14, 18, 1, 15, 17, 2, 0, 5, 3, 8, 7, 4, 9, 6, 10, 15, 11, 16, 12, 17, 13, 18, 14, 0, 1, 6, 2, 8, 3, 9, 4, 10, 5, 11, 7, 12, 0, 13, 14, 1, 15, 2, 16, 2, 17, 3, 18, 4, 5, 10, 6, 12, 13, 7, 8, 14, 9, 15, 11, 17, 16, 3, 18, 5, 0, 6, 1, 7, 4, 11, 8, 13, 9, 14, 10, 16, 12, 18, 15, 3, 17, 4, 0, 7, 1, 8, 2, 9, 5, 12, 6, 13, 10, 17, 11, 15, 14, 2, 16, 4, 18, 6, 8, 0, 1, 9, 3, 10, 13, 5, 7, 14, 11, 18, 12, 0, 15, 4, 16, 5, 17, 5, 10, 1, 2, 11, 3, 12, 6, 14, 7, 15, 8, 16, 9, 17, 13, 1, 18, 7, 0, 9, 2, 10, 3, 11, 4, 12, 15, 6, 17, 8, 13, 2, 14, 3, 16, 6, 18, 8, 0, 10, 1, 11, 4, 13, 5, 14, 7, 16, 9, 18, 12, 1, 15, 5, 17, 6, 11, 0, 2, 12, 3, 13, 14, 4, 7, 17, 8, 15, 9, 16, 10, 18 };
int8_t fixtureSchedule20Teams[380] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 18, 17, 19, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 9, 10, 15, 12, 13, 14, 19, 16, 17, 18, 0, 4, 1, 5, 2, 6, 3, 7, 8, 12, 9, 13, 10, 16, 11, 17, 14, 18, 15, 19, 5, 0, 4, 1, 7, 2, 6, 3, 13, 8, 12, 9, 10, 17, 11, 16, 19, 14, 18, 15, 6, 0, 7, 1, 2, 4, 3, 5, 14, 8, 15, 9, 18, 10, 19, 11, 16, 12, 17, 13, 0, 7, 1, 6, 2, 5, 3, 4, 8, 15, 9, 14, 10, 19, 11, 18, 12, 17, 13, 16, 0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 13, 6, 18, 7, 19, 14, 16, 15, 17, 9, 0, 8, 1, 11, 2, 10, 3, 4, 13, 5, 12, 19, 6, 18, 7, 17, 14, 16, 15, 0, 10, 1, 11, 2, 8, 3, 9, 14, 4, 15, 5, 6, 16, 7, 17, 12, 18, 13, 19, 11, 0, 10, 1, 9, 2, 8, 3, 4, 15, 5, 14, 17, 6, 16, 7, 19, 12, 18, 13, 12, 0, 13, 1, 14, 2, 15, 3, 16, 4, 17, 5, 6, 10, 7, 11, 18, 8, 19, 9, 0, 13, 1, 12, 2, 15, 3, 14, 4, 17, 5, 16, 6, 11, 7, 10, 8, 19, 9, 18, 14, 0, 15, 1, 16, 2, 17, 3, 18, 4, 19, 5, 6, 8, 7, 9, 10, 12, 11, 13, 0, 15, 1, 14, 2, 17, 3, 16, 4, 19, 5, 18, 9, 6, 8, 7, 13, 10, 12, 11, 16, 0, 17, 1, 18, 2, 19, 3, 4, 8, 5, 9, 12, 6, 13, 7, 10, 14, 11, 15, 0, 17, 1, 16, 2, 19, 3, 18, 9, 4, 8, 5, 6, 13, 7, 12, 15, 10, 14, 11, 18, 0, 19, 1, 12, 2, 13, 3, 10, 4, 11, 5, 14, 6, 15, 7, 16, 8, 17, 9, 0, 19, 1, 18, 2, 13, 3, 12, 4, 11, 5, 10, 6, 15, 7, 14, 8, 17, 9, 16 };
int8_t fixtureSchedule21Teams[420] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 18, 17, 19, 20, 1, 3, 0, 2, 4, 5, 8, 6, 9, 7, 10, 11, 13, 15, 12, 14, 16, 17, 20, 18, 0, 19, 0, 1, 4, 2, 5, 3, 6, 7, 9, 8, 11, 10, 12, 13, 16, 14, 17, 15, 18, 19, 1, 20, 2, 3, 5, 4, 7, 6, 8, 9, 12, 10, 13, 11, 14, 15, 17, 16, 19, 18, 20, 0, 4, 1, 5, 2, 6, 7, 3, 12, 8, 9, 13, 10, 14, 11, 15, 16, 20, 17, 0, 18, 1, 19, 2, 8, 3, 4, 9, 5, 10, 6, 11, 12, 7, 13, 17, 14, 18, 15, 19, 0, 16, 20, 3, 1, 6, 2, 7, 4, 8, 5, 9, 10, 15, 11, 16, 12, 17, 13, 18, 14, 19, 20, 4, 0, 5, 7, 1, 8, 2, 3, 9, 6, 10, 17, 11, 16, 12, 19, 13, 14, 20, 15, 0, 18, 2, 1, 8, 3, 10, 4, 11, 5, 12, 6, 13, 7, 14, 9, 15, 16, 1, 17, 1, 18, 3, 19, 3, 20, 5, 0, 6, 2, 9, 10, 4, 11, 7, 8, 13, 12, 18, 14, 0, 15, 20, 16, 2, 17, 2, 19, 4, 5, 11, 6, 12, 13, 7, 8, 14, 9, 16, 10, 17, 1, 15, 18, 4, 19, 5, 20, 6, 0, 7, 3, 11, 8, 15, 9, 14, 10, 16, 12, 19, 13, 20, 17, 3, 18, 5, 0, 8, 1, 9, 2, 10, 4, 12, 6, 14, 7, 15, 11, 18, 13, 0, 16, 3, 4, 17, 19, 6, 20, 7, 1, 10, 2, 11, 5, 13, 8, 16, 9, 17, 12, 20, 14, 1, 15, 2, 18, 6, 7, 19, 0, 9, 3, 12, 4, 13, 5, 14, 17, 8, 10, 18, 11, 19, 15, 3, 16, 4, 20, 8, 0, 10, 11, 1, 2, 12, 5, 15, 6, 16, 7, 17, 9, 18, 13, 1, 14, 2, 19, 8, 20, 9, 11, 0, 3, 13, 4, 14, 16, 5, 6, 15, 7, 18, 10, 19, 12, 0, 17, 5, 20, 10, 1, 12, 2, 13, 3, 14, 15, 4, 6, 17, 7, 16, 8, 18, 9, 19, 11, 20 };
int8_t fixtureSchedule22Teams[462] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 18, 17, 20, 19, 21, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 9, 10, 15, 12, 13, 14, 19, 16, 21, 17, 18, 20, 0, 4, 1, 5, 2, 6, 3, 7, 8, 12, 9, 13, 10, 14, 11, 15, 20, 16, 17, 19, 21, 18, 5, 0, 4, 1, 7, 2, 6, 3, 13, 8, 12, 9, 15, 10, 14, 11, 16, 21, 17, 18, 19, 20, 6, 0, 7, 1, 2, 4, 3, 5, 14, 8, 9, 16, 10, 17, 11, 18, 12, 19, 20, 13, 15, 21, 0, 7, 1, 6, 2, 5, 3, 4, 8, 15, 17, 9, 10, 16, 11, 19, 18, 12, 21, 13, 14, 20, 0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 5, 16, 6, 17, 7, 18, 13, 19, 21, 14, 15, 20, 9, 0, 8, 1, 11, 2, 10, 3, 4, 13, 5, 17, 16, 6, 20, 7, 12, 21, 18, 14, 19, 15, 0, 10, 1, 11, 2, 8, 3, 9, 14, 4, 18, 5, 6, 19, 7, 21, 20, 12, 13, 16, 15, 17, 11, 0, 10, 1, 9, 2, 8, 3, 4, 15, 5, 20, 21, 6, 16, 7, 17, 12, 13, 18, 19, 14, 12, 0, 1, 13, 14, 2, 15, 3, 4, 8, 19, 5, 6, 18, 7, 17, 20, 9, 21, 10, 16, 11, 0, 13, 12, 1, 2, 15, 3, 14, 9, 4, 5, 21, 6, 20, 7, 19, 8, 16, 18, 10, 17, 11, 14, 0, 15, 1, 16, 2, 17, 3, 18, 4, 5, 8, 6, 12, 13, 7, 19, 9, 10, 20, 11, 21, 0, 15, 1, 14, 2, 17, 3, 16, 4, 19, 10, 5, 13, 6, 7, 12, 8, 18, 21, 9, 20, 11, 16, 0, 17, 1, 12, 2, 3, 13, 20, 4, 9, 5, 11, 6, 14, 7, 21, 8, 19, 10, 15, 18, 0, 17, 1, 16, 2, 13, 19, 3, 4, 21, 5, 11, 6, 14, 7, 15, 8, 20, 18, 9, 10, 12, 18, 0, 1, 19, 20, 2, 21, 3, 4, 10, 12, 5, 6, 8, 9, 7, 11, 13, 14, 17, 15, 16, 0, 19, 18, 1, 2, 21, 3, 20, 11, 4, 13, 5, 15, 6, 7, 10, 17, 8, 9, 14, 16, 12, 20, 0, 21, 1, 2, 18, 12, 3, 16, 4, 5, 14, 10, 6, 7, 11, 8, 19, 9, 15, 13, 17, 0, 21, 1, 20, 19, 2, 3, 18, 17, 4, 5, 15, 6, 9, 8, 7, 10, 13, 11, 12, 14, 16 };
int8_t fixtureSchedule23Teams[506] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 18, 17, 19, 20, 22, 21, 0, 1, 4, 2, 5, 3, 6, 7, 9, 11, 8, 10, 12, 13, 16, 14, 17, 15, 18, 19, 21, 20, 0, 22, 1, 2, 4, 3, 5, 6, 8, 7, 10, 9, 12, 11, 13, 14, 16, 15, 17, 18, 20, 19, 22, 21, 1, 0, 3, 6, 2, 4, 7, 5, 8, 9, 13, 10, 14, 11, 15, 12, 16, 17, 20, 18, 21, 19, 0, 22, 2, 1, 5, 3, 7, 8, 4, 6, 9, 10, 13, 14, 11, 12, 15, 16, 19, 17, 21, 18, 22, 20, 1, 0, 4, 2, 7, 8, 3, 5, 9, 6, 10, 16, 11, 12, 17, 13, 18, 14, 19, 15, 20, 21, 2, 22, 3, 0, 5, 1, 6, 4, 9, 7, 11, 8, 12, 10, 15, 13, 17, 18, 14, 16, 20, 19, 1, 21, 3, 22, 4, 0, 6, 2, 8, 5, 10, 7, 12, 9, 14, 11, 17, 13, 19, 15, 21, 16, 22, 18, 0, 20, 2, 1, 7, 3, 9, 4, 10, 5, 11, 6, 12, 8, 13, 14, 20, 15, 19, 21, 16, 17, 22, 18, 1, 7, 0, 2, 9, 3, 10, 4, 11, 12, 5, 6, 13, 8, 14, 22, 15, 16, 0, 17, 0, 2, 18, 19, 2, 20, 3, 21, 4, 1, 8, 5, 13, 11, 6, 7, 14, 9, 15, 10, 16, 12, 18, 17, 1, 19, 3, 20, 4, 21, 5, 22, 5, 14, 6, 13, 7, 15, 8, 9, 16, 10, 17, 11, 18, 12, 19, 20, 5, 6, 21, 22, 6, 0, 8, 1, 9, 2, 10, 3, 11, 4, 12, 7, 15, 13, 20, 14, 21, 16, 1, 17, 2, 18, 3, 19, 4, 22, 7, 0, 9, 8, 16, 10, 18, 11, 19, 12, 20, 13, 21, 14, 22, 15, 0, 3, 17, 1, 10, 2, 11, 4, 13, 5, 14, 6, 15, 7, 16, 8, 17, 9, 18, 21, 12, 19, 5, 20, 6, 22, 8, 0, 10, 11, 1, 2, 12, 3, 13, 4, 14, 17, 7, 9, 19, 15, 1, 16, 2, 18, 4, 20, 7, 21, 7, 9, 22, 0, 11, 3, 12, 5, 15, 6, 16, 8, 18, 10, 19, 13, 22, 14, 0, 17, 4, 20, 8, 21, 8, 1, 12, 2, 13, 3, 14, 5, 16, 6, 17, 9, 20, 10, 21, 11, 22, 15, 2, 18, 5, 19, 6, 12, 0, 1, 13, 15, 3, 4, 16, 7, 18, 17, 9, 10, 20, 11, 21, 14, 1, 19, 7, 22, 10, 0, 13, 2, 14, 16, 3, 4, 15, 5, 17, 18, 6, 8, 19, 9, 21, 11, 20, 12, 22 };
int8_t fixtureSchedule24Teams[552] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 0, 2, 1, 3, 4, 6, 5, 7, 8, 10, 9, 11, 12, 14, 13, 15, 16, 18, 17, 19, 20, 22, 21, 23, 3, 0, 1, 2, 7, 4, 5, 6, 11, 8, 9, 10, 15, 12, 13, 14, 19, 16, 17, 18, 23, 20, 21, 22, 0, 4, 1, 5, 2, 6, 3, 7, 8, 12, 9, 13, 10, 14, 11, 15, 16, 20, 17, 21, 18, 22, 19, 23, 5, 0, 4, 1, 7, 2, 6, 3, 13, 8, 12, 9, 15, 10, 14, 11, 21, 16, 20, 17, 23, 18, 22, 19, 6, 0, 7, 1, 2, 4, 3, 5, 14, 8, 15, 9, 10, 12, 11, 13, 22, 16, 23, 17, 18, 20, 19, 21, 0, 7, 1, 6, 2, 5, 3, 4, 8, 15, 9, 14, 10, 13, 11, 12, 16, 23, 17, 22, 18, 21, 19, 20, 0, 8, 1, 9, 2, 10, 3, 11, 4, 16, 5, 17, 6, 18, 7, 19, 12, 20, 13, 21, 14, 22, 15, 23, 9, 0, 8, 1, 11, 2, 10, 3, 4, 17, 5, 16, 6, 19, 7, 18, 21, 12, 20, 13, 23, 14, 22, 15, 0, 10, 1, 11, 2, 8, 3, 9, 18, 4, 19, 5, 16, 6, 17, 7, 12, 22, 13, 23, 14, 20, 15, 21, 11, 0, 10, 1, 9, 2, 8, 3, 4, 19, 5, 18, 6, 17, 7, 16, 23, 12, 22, 13, 21, 14, 20, 15, 12, 0, 13, 1, 14, 2, 15, 3, 20, 4, 21, 5, 22, 6, 23, 7, 16, 8, 17, 9, 18, 10, 19, 11, 0, 13, 1, 12, 2, 15, 3, 14, 4, 21, 5, 20, 6, 23, 7, 22, 8, 17, 9, 16, 10, 19, 11, 18, 14, 0, 15, 1, 12, 2, 13, 3, 22, 4, 23, 5, 20, 6, 21, 7, 18, 8, 19, 9, 16, 10, 17, 11, 0, 15, 1, 14, 2, 13, 3, 12, 4, 23, 5, 22, 6, 21, 7, 20, 8, 19, 9, 18, 10, 17, 11, 16, 16, 0, 17, 1, 18, 2, 19, 3, 12, 4, 13, 5, 14, 6, 15, 7, 20, 8, 21, 9, 22, 10, 23, 11, 0, 17, 1, 16, 2, 19, 3, 18, 4, 13, 5, 12, 6, 15, 7, 14, 8, 21, 9, 20, 10, 23, 11, 22, 18, 0, 19, 1, 16, 2, 17, 3, 14, 4, 15, 5, 12, 6, 13, 7, 22, 8, 23, 9, 20, 10, 21, 11, 0, 19, 1, 18, 2, 17, 3, 16, 4, 15, 5, 14, 6, 13, 7, 12, 8, 23, 9, 22, 10, 21, 11, 20, 20, 0, 21, 1, 22, 2, 23, 3, 4, 8, 5, 9, 6, 10, 7, 11, 12, 16, 13, 17, 14, 18, 15, 19, 0, 21, 1, 20, 2, 23, 3, 22, 9, 4, 8, 5, 11, 6, 10, 7, 17, 12, 16, 13, 19, 14, 18, 15, 22, 0, 23, 1, 20, 2, 21, 3, 4, 10, 5, 11, 6, 8, 7, 9, 12, 18, 13, 19, 14, 16, 15, 17, 0, 23, 1, 22, 2, 21, 3, 20, 11, 4, 10, 5, 9, 6, 8, 7, 19, 12, 18, 13, 17, 14, 16, 15 };
// Pointer table to the 23 round-robin fixture schedules (2-24 teams).
int8_t * fixtureSchedulePtrTable[23] = { fixtureSchedule2Teams, fixtureSchedule3Teams, fixtureSchedule4Teams, fixtureSchedule5Teams, fixtureSchedule6Teams, fixtureSchedule7Teams, fixtureSchedule8Teams, fixtureSchedule9Teams, fixtureSchedule10Teams, fixtureSchedule11Teams, fixtureSchedule12Teams, fixtureSchedule13Teams, fixtureSchedule14Teams, fixtureSchedule15Teams, fixtureSchedule16Teams, fixtureSchedule17Teams, fixtureSchedule18Teams, fixtureSchedule19Teams, fixtureSchedule20Teams, fixtureSchedule21Teams, fixtureSchedule22Teams, fixtureSchedule23Teams, fixtureSchedule24Teams };
// European Championship group-stage fixture schedule and lookup data.
int8_t euroChampFixtureData[28] = { 1, 0, 3, 2, 2, 1, 0, 3, 1, 3, 0, 2, 5, 10, 15, 20, 25, 30, 34, 38, 43, 48, 53, 58, 62, 66, 71, 76 };
uint16_t avgTeamValueBases[92] = { 0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200, 225, 250, 275, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000, 1100, 1200, 1300, 1400, 1500, 1600, 1700, 1800, 1900, 2000, 2250, 2500, 2750, 3000, 3500, 4000, 4500, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000 };
int8_t avgTeamValues[131] = { 5, 5, 6, 8, 10, 13, 15, 17, 20, 21, 23, 25, 26, 28, 30, 32, 34, 35, 37, 38, 39, 40, 41, 42, 43, 44, 45, 47, 48, 49, 51, 53, 54, 56, 57, 58, 59, 61, 62, 63, 65, 66, 67, 68, 69, 70, 71, 73, 76, 76, 0, 0, 0, 0, 0, 0, 1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 15, 16, 17, 17, 18, 18, 19, 20, 21, 22, 23, 24, 25, 25, 26, 27, 27, 28, 29, 30, 31, 31, 32, 33, 34, 34, 35, 36, 37, 38, 38, 39, 39, 40, 41, 42, 43, 44, 45, 46, 47, 47, 48, 48, 49, 49, 49, 49, 49 };
// Lookup table mapping filter index to minimum player rating for transfer market.
int8_t playerRatingFilterThresholds[17] = { 1, 4, 6, 8, 11, 14, 16, 19, 24, 28, 31, 35, 38, 41, 46, 48, 0 };
uint32_t teamFilenamesTable = 1055320;
// Precalculated table for quicker calculating
// player offsets in in-game team structure (index * 61)
uint16_t ingameTeamPlayerOffsets[16] = { 0, 61, 122, 183, 244, 305, 366, 427, 488, 549, 610, 671, 732, 793, 854, 915 };
// This color table is used for shining selected menu entry frame
uint16_t kColorTableShine[8] = { 2, 2, 1, 1, 7, 7, 1, 1 };
uint16_t menuPalette[16] = { 0x1, 0xAAB, 0xFFF, 0x102, 0x621, 0xA40, 0xF71, 0x667, 0x204, 0x445, 0xF00, 0xF, 0x702, 0x88F, 0x380, 0xFF0 };
const char aResigned[] = "- RESIGNED -";
const char aRetired[] = "- RETIRED -";
const char aNational[] = "NATIONAL";
const char aA[] = "(%a)";
const char a12Season[] = "%1/%2 SEASON";
const char a102Season[] = "%1/0%2 SEASON";
const char aManagementReco[] = "MANAGEMENT RECORD OF %a %b";
const char aQualified[] = "(QUALIFIED)";
const char aNotQualified[] = "(NOT QUALIFIED)";
const char aPromoted[] = "(PROMOTED)";
const char aRelegated[] = "(RELEGATED)";
const char aWinners[] = "WINNERS";
const char aRunnerUp[] = "RUNNER-UP";
const char aPosition0[] = "POSITION: %0";
const char aFinalist[] = "FINALIST";
const char aThirdPlace[] = "THIRD PLACE";
const char aFourthPlace[] = "FOURTH PLACE";
const char aReachedSemiFin[] = "REACHED SEMI-FINAL";
const char aReachedQuarter[] = "REACHED QUARTER-FINAL";
const char aKnockedOutInRo[] = "KNOCKED OUT IN ROUND %0";
const char aStillInCompeti[] = "STILL IN COMPETITION";
const char aSacked[] = "- SACKED -";
const char aSeasonSTopScor[] = "SEASON'S TOP SCORER";
const char aSeasonSTopScor_0[] = "SEASON'S TOP SCORERS";
const char aA0[] = "%a  %0";
const char aCareerTotal[] = "CAREER TOTAL";
const char aAllMatches[] = "ALL MATCHES";
const char aPl0W1D2L3F4A5[] = "PL %0    W %1    D %2    L %3    F %4    A %5";
const char aWon0Drawn1Lost[] = "WON %0  DRAWN %1  LOST %2";
const char aDash[] = "-";
const char aSeveral[] = "SEVERAL";
const char aWinnerQualifie[] = "WINNER QUALIFIES";
const char aTop0Qualify[] = "TOP %0 QUALIFY";
const char aCoachMatch[] = "COACH MATCH";
const char aPlayCoachMatch[] = "PLAY/COACH MATCH";
const char aItIsWithGreatR[] = "IT IS WITH GREAT REGRET THAT WE HAVE DECIDED NOT TO";
const char aRenewYourContr[] = "RENEW YOUR CONTRACT FOR NEXT SEASON - GOOD LUCK";
const char aAndWeLookForwa[] = "AND WE LOOK FORWARD TO SEEING YOU SOON";
const char aMemoFromThePre[] = "MEMO FROM THE PRESIDENT";
const char aThePresident[] = "THE PRESIDENT";
const char aWellDoneAYouDi[] = "WELL DONE %a, YOU DID AN EXCELLENT JOB";
const char aThisSeasonAndW[] = "THIS SEASON AND WE ALL APPRECIATE IT";
const char aAGoodSeasonAWe[] = "A GOOD SEASON %a, WE ARE ALL VERY";
const char aPleasedWithYou[] = "PLEASED WITH YOU, KEEP UP THE GOOD WORK";
const char aAnUpAndDownSea[] = "AN UP AND DOWN SEASON %a, WE ALL HOPE YOU";
const char aCanImproveOnTh[] = "CAN IMPROVE ON THIS IN THE NEAR FUTURE";
const char aNotAVeryGoodSe[] = "NOT A VERY GOOD SEASON %a, WE HOPE YOU CAN";
const char aImproveOnOurPe[] = "IMPROVE ON OUR PERFORMANCE NEXT SEASON";
const char aAVeryDisappoin[] = "A VERY DISAPPOINTING SEASON %a, WE DEMAND";
const char aMuchBetterFrom[] = "MUCH BETTER FROM YOU NEXT SEASON";
const char aThanksForAllYo[] = "THANKS FOR ALL YOUR HELP %a, WE ALL WISH";
const char aYouWellInYourN[] = "YOU WELL IN YOUR NEW JOB";
const char aWelcomeAWeLook[] = "WELCOME %a, WE LOOK FORWARD TO MUCH";
const char aSuccessFromOur[] = "SUCCESS FROM OUR NEW PARTNERSHIP";
const char aWelcomeAWeHope[] = "WELCOME %a, WE HOPE YOU ENJOY YOUR LAST";
const char aSeasonInManage[] = "SEASON IN MANAGEMENT HERE BEFORE YOUR RETIREMENT";
const char aJustANoteToWis[] = "JUST A NOTE TO WISH YOU EVERY SUCCESS IN THE";
const char aNewSeason[] = "NEW SEASON";
const char aWeAllHopeYouEn[] = "WE ALL HOPE YOU ENJOY YOUR LAST SEASON IN MANAGEMENT";
const char aBeforeHandingT[] = "BEFORE HANDING THE REINS OVER TO A YOUNGER MAN";
const char aWeAllWishYouTh[] = "WE ALL WISH YOU THE VERY BEST AT THE END OF YOUR";
const char aDistinguishedC[] = "DISTINGUISHED CAREER - ENJOY YOUR RETIREMENT";
const char aViewOtherTeam[] = "VIEW OTHER TEAM";
const char aTheMembersOfTh[] = "THE MEMBERS OF THE FOOTBALLING COMMITEE";
const char aOfAWouldLikeTo[] = "OF %a WOULD LIKE TO OFFER YOU THE JOB";
const char aAsCoachOfTheNa[] = "AS COACH OF THE NATIONAL TEAM";
const char aWeCanPromiseYo[] = "WE CAN PROMISE YOU AN EXCELLENT SALARY AND";
const char aAnAnnuallyRevi[] = "AN ANNUALLY REVIEWABLE CONTRACT";
const char aWeLookForwardT[] = "WE LOOK FORWARD TO HEARING FROM YOU";
const char aTheMembersOfTh_0[] = "THE MEMBERS OF THE FOOTBALLING COMMITEE";
const char aOfAAreDelighte[] = "OF %a ARE DELIGHTED THAT YOU HAVE";
const char aAcceptedThePos[] = "ACCEPTED THE POSITION AS COACH OF THE NATIONAL TEAM";
const char aFromTheStartOf[] = "FROM THE START OF NEXT SEASON";
uint8_t aWeLookForwardT_0[36] = { 0x0, 0x57, 0x45, 0x20, 0x4C, 0x4F, 0x4F, 0x4B, 0x20, 0x46, 0x4F, 0x52, 0x57, 0x41, 0x52, 0x44, 0x20, 0x54, 0x4F, 0x20, 0x53, 0x45, 0x45, 0x49, 0x4E, 0x47, 0x20, 0x59, 0x4F, 0x55, 0x20, 0x53, 0x4F, 0x4F, 0x4E, 0x0 };
const char aOther[] = "OTHER";
const char aInternationalJ[] = "INTERNATIONAL JOB OFFER";
const char aInternationalJ_0[] = "INTERNATIONAL JOB OFFER FROM %a";
const char aFr[] = "FR";
const char aWc[] = "WC";
const char aWcq[] = "WCQ";
const char aEc[] = "EC";
const char aEcq[] = "ECQ";
const char aNac[] = "NAC";
const char aCa[] = "CA";
const char aAnc[] = "ANC";
const char aAc[] = "AC";
const char aOc[] = "OC";
const char aTnm[] = "TNM";
const char aTr[] = "TR";
const char aClubs[] = "CLUBS";
const char aAddInternation[] = "ADD INTERNATIONAL PLAYER (HOME)";
const char aAddInternation_0[] = "ADD INTERNATIONAL PLAYER (ABROAD)";
const char aAddPlayer[] = "ADD PLAYER";
const char aRemovePlayer[] = "REMOVE PLAYER";
const char aRemovePlayers[] = "REMOVE PLAYERS";
const char aToReplace[] = "TO REPLACE";
const char aSelect1MoreInt[] = "SELECT 1 MORE INTERNATIONAL SQUAD PLAYER";
const char aSelect0MoreInt[] = "SELECT %0 MORE INTERNATIONAL SQUAD PLAYERS";
const char aASquad[] = "%a SQUAD";
const char aChangeSquad[] = "CHANGE SQUAD";
const char aSelectSquad[] = "SELECT SQUAD";
const char aSquadSelected[] = "SQUAD SELECTED";
const char aCannotPlayOldV[] = "CANNOT PLAY OLD VERSION OF HIGHLIGHTS FILE";
const char aTraining[] = "TRAINING";
const char aRes[] = "RES";
const char aTrial[] = "TRIAL";
const char aViewATeam[] = "VIEW A TEAM";
const char aViewBTeam[] = "VIEW B TEAM";
const char aUseMatchTeam[] = "USE MATCH TEAM";
const char aPleaseNoteATha[] = "PLEASE NOTE %a THAT THE TRIAL PLAYER";
const char aBHasLeftTheClu[] = "%b HAS LEFT THE CLUB";
const char aPleaseNoteATha_0[] = "PLEASE NOTE %a THAT THE RESERVE PLAYER";
const char aBHasLeftTheClu_0[] = "%b HAS LEFT THE CLUB";
const char aPleaseNoteATha_1[] = "PLEASE NOTE %a THAT %b";
const char aHasJoinedTheCl[] = "HAS JOINED THE CLUB ON TRIAL";
const char aTspvhcfstpvhcf[] = "TSPVHCFSTPVHCFTSPVHCFSTPVHCFTHPSVCFHTPSVCFCSPTHFVSCPTHFVCSPTHFVSCPTHFVPTCHVSFTPCHVSFHFSVCPTFHSVCPTEUROPEAN CHAMPIONSHIP QUALIFIERS";
const char aECQualifier[] = "E.C. QUALIFIER";
const char aWorldCupQualif[] = "WORLD CUP QUALIFIERS (EUROPE)";
const char aWCQualifier[] = "W.C. QUALIFIER";
const char aEuropeanTour[] = "EUROPEAN TOUR";
const char aAfricanTour[] = "AFRICAN TOUR";
const char aSouthAmericanT[] = "SOUTH AMERICAN TOUR";
const char aNorthAmericanT[] = "NORTH AMERICAN TOUR";
const char aAsianTour[] = "ASIAN TOUR";
const char aOceaniaTour[] = "OCEANIA TOUR";
const char aTour[] = "TOUR";
const char aInvitationTour[] = "INVITATION TOURNAMENT";
const char aInvTournament[] = "INV TOURNAMENT";
const char aFriendly[] = "FRIENDLY";
const char aFriendly_0[] = "FRIENDLY";
const char aFriendlies[] = "FRIENDLIES";
const char aWorldCupQualification[] = "\377WORLD CUP QUALIFICATION";
const char aWorld[] = "WORLD";
const char aEuropeanChampionship[] = "\377EUROPEAN CHAMPIONSHIP";
const char aWorld_0[] = "WORLD";
const char aEuropeanChampi_0[] = "EUROPEAN CHAMPIONSHIPS";
const char aECQualifyingGr[] = "E.C. QUALIFYING GROUP 1";
const char aECQualifyingGr_0[] = "E.C. QUALIFYING GROUP 2";
const char aECQualifyingGr_1[] = "E.C. QUALIFYING GROUP 3";
const char aECQualifyingGr_2[] = "E.C. QUALIFYING GROUP 4";
const char aECQualifyingGr_3[] = "E.C. QUALIFYING GROUP 5";
const char aECQualifyingGr_4[] = "E.C. QUALIFYING GROUP 6";
const char aECQualifyingGr_5[] = "E.C. QUALIFYING GROUP 7";
const char aECQualifyingGr_6[] = "E.C. QUALIFYING GROUP 8";
const char aECFinals[] = "E.C. FINALS";
const char aECQualifier_0[] = "E.C. QUALIFIER";
const char aCopaAmerica[] = "COPA AMERICA";
const char aCopaAmerica_0[] = "COPA AMERICA";
const char aAfricanNations[] = "AFRICAN NATIONS CUP";
const char aAfricanCup[] = "AFRICAN CUP";
const char aNorthAmericanC[] = "NORTH AMERICAN CUP";
const char aNAmericanCup[] = "N AMERICAN CUP";
const char aAsianCup[] = "ASIAN CUP";
const char aAsianCup_0[] = "ASIAN CUP";
const char aOceaniaCup[] = "OCEANIA CUP";
const char aOceaniaCup_0[] = "OCEANIA CUP";
const char aWorldCup[] = "WORLD CUP";
const char aWorldCupQualif_1[] = "WORLD CUP QUALIFICATION";
const char aWorldCupQualif_2[] = "WORLD CUP QUALIFYING GROUP 1";
const char aWorldCupQualif_3[] = "WORLD CUP QUALIFYING GROUP 2";
const char aWorldCupQualif_4[] = "WORLD CUP QUALIFYING GROUP 3";
const char aWorldCupQualif_5[] = "WORLD CUP QUALIFYING GROUP 4";
const char aWorldCupQualif_6[] = "WORLD CUP QUALIFYING GROUP 5";
const char aWorldCupQualif_7[] = "WORLD CUP QUALIFYING GROUP 6";
const char aWorldCupQualif_8[] = "WORLD CUP QUALIFYING GROUP 7";
const char aWorldCupQualif_9[] = "WORLD CUP QUALIFYING GROUP 8";
const char aWorldCup_0[] = "WORLD CUP";
const char aWCQualifier_0[] = "W.C. QUALIFIER";
const char aFinalGroups[] = "FINAL GROUPS";
const char aFinalGroups_0[] = "FINAL GROUPS";
const char aPlayer[] = "PLAYER";
const char aPlayerCoach[] = "PLAYER-COACH";
const char aCoach[] = "COACH";
const char aCoach_0[] = "COACH";
const char aPlayerCoach_0[] = "PLAYER-COACH";
const char aStartCareerAs[] = "START CAREER AS";
const char aPlayer_0[] = "PLAYER:";
const char aCoach_1[8] = "\001COACH:";
const char aPlayer_1[8] = "\002PLAYER";
const char aCoach_2[] = "-COACH:";
const char aViewResult[] = "VIEW RESULT";
const char aMatch[] = "- MATCH -";
const char aResult[] = "- RESULT -";
const char aDivision1[] = "DIVISION 1";
const char aDivision2[] = "DIVISION 2";
const char aDivision3[] = "DIVISION 3";
const char aFileSavedByDif[] = "FILE SAVED BY DIFFERENT S.W.O.S. VERSION";
const char aFileSavedOnDif[] = "FILE SAVED ON DIFFERENT AMIGA MEMORY TYPE";
const char aAllPlayerTeams[] = "ALL PLAYER TEAMS EQUAL";
const char aFriendlyDiyGam[] = "FRIENDLY/DIY GAME LENGTH";
const char aFollowingAVote[] = "FOLLOWING A VOTE OF CONFIDENCE, YOU HAVE NO MORE THAN";
const char a3MatchesToTurn[] = "3 MATCHES TO TURN THIS CLUB AROUND OR YOU WILL BE SACKED";
const char aFollowingACris[] = "FOLLOWING A CRISIS BOARD MEETING, WE MUST INSIST YOU";
const char aClearTheOverdr[] = "CLEAR THE OVERDRAFT IMMEDIATELY OR YOU'RE SACKED";
const char aContinueCareer[] = "CONTINUE CAREER";
const char aWelcomeToOurCl[] = "WELCOME TO OUR CLUB, WE LOOK FORWARD TO";
const char aMuchSuccessFro[] = "MUCH SUCCESS FROM OUR NEW PARTNERSHIP";
const char aYourCareerIsOv[] = "YOUR CAREER IS OVER";
uint8_t aInsertGameSave[31] = { 0x1, 0x49, 0x4E, 0x53, 0x45, 0x52, 0x54, 0x20, 0x47, 0x41, 0x4D, 0x45, 0x20, 0x53, 0x41, 0x56, 0x45, 0x20, 0x44, 0x49, 0x53, 0x4B, 0x20, 0x49, 0x4E, 0x20, 0x44, 0x46, 0x30, 0x3A, 0x0 };
const char aHighlights[] = "HIGHLIGHTS";
const char aLoadHighlights[] = "LOAD HIGHLIGHTS";
const char aSaveHighlights[] = "SAVE HIGHLIGHTS";
const char aViewHighlights[] = "VIEW HIGHLIGHTS";
const char aNotAHighlights[] = "NOT A HIGHLIGHTS FILE";
const char aHigh[] = "HIGH";
const char aFormation[] = "FORMATION";
const char aNotACompetitio[] = "NOT A COMPETITION FILE";
const char aCompetitionFil[] = "COMPETITION FILE EXPECTS AGA AMIGA";
const char aCompetitionFil_0[] = "COMPETITION FILE EXPECTS NON-AGA AMIGA";
const char aTeamsPromoted0[] = "TEAMS PROMOTED  %0";
const char aTeamsPromoted0_0[] = "TEAMS PROMOTED  %0   TEAMS IN PLAYOFFS  %1";
const char aTeamsRelegated[] = "TEAMS RELEGATED  %0";
const char aTeamsRelegated_0[] = "TEAMS RELEGATED  %0   TEAMS IN PLAYOFFS  %1";
const char aReject[] = "REJECT";
const char aRetire[] = "RETIRE";
const char aSaveCareer[] = "SAVE CAREER";
const char aRnd1[] = "RND 1";
const char aRnd2[] = "RND 2";
const char aRnd3[] = "RND 3";
const char aRnd4[] = "RND 4";
const char aRnd5[] = "RND 5";
const char aRnd6[] = "RND 6";
const char aQF[] = "Q/F";
const char aSF[] = "S/F";
const char aFinal[] = "FINAL";
const char aFinal_0[] = "FINAL";
const char a3rd[] = "3RD";
const char aFinal_1[] = "FINAL";
const char aYourChairman[] = "YOUR CHAIRMAN";
const char a2Gk[] = "2 + GK";
const char a3Gk[] = "3 + GK";
const char a4Gk[] = "4 + GK";
const char aLoan[] = "LOAN";
const char aContinueA[] = "CONTINUE %a";
const char aReplayA[] = "REPLAY %a";
const char aSaveA[] = "SAVE %a";
const char a01Season[] = "%0/%1 SEASON";
const char a001Season[] = "%0/0%1 SEASON";
const char a0EndSeason[] = "%0 END SEASON";
const char aViewOppo[] = "VIEW OPPO";
const char aViewCompetitio[] = "VIEW COMPETITIONS";
const char aPound[2] = "\234";
uint8_t nullString_0  = 0;
const char a1k[5] = "\234%1K";
const char a0m[5] = "\234%0M";
const char a01m[8] = "\234%0.%1M";
const char aSorryAButTheCl[] = "SORRY %a BUT THE CLUB IS UNWILLING TO MAKE";
const char aAnyFurtherPlay[] = "ANY FURTHER PLAYER PURCHASES THIS SEASON";
const char aPleaseNoteATha_2[] = "PLEASE NOTE %a THAT WE WILL NOT PERMIT";
const char aAnyFurtherPlay_0[] = "ANY FURTHER PLAYER SALES THIS SEASON";
const char aPleaseTakeNote[] = "PLEASE TAKE NOTE OF OUR CURRENT BANK BALANCE AND";
const char aEnsureThatWeCl[] = "ENSURE THAT WE CLEAR OUR OVERDRAFT AS SOON AS POSSIBLE";
const char aJustAReminderT[] = "JUST A REMINDER TO DEAL WITH THE OVERDRAFT SITUATION";
const char aOrWeWillHaveTo[] = "OR WE WILL HAVE TO RECONSIDER YOUR POSITION AS MANAGER";
const char aItIsWithGreatR_0[] = "IT IS WITH GREAT REGRET THAT THE BOARD AND I HAVE";
const char aDecidedToRelie[] = "DECIDED TO RELIEVE YOU OF YOUR DUTIES - YOU'RE SACKED";
const char aPleaseTakeNote_0[] = "PLEASE TAKE NOTE OF OUR CURRENT LEAGUE POSITION AND";
const char aEnsureThatItIs[] = "ENSURE THAT IT IS IMPROVED UPON AS SOON AS POSSIBLE";
const char aRememberUnless[] = "REMEMBER, UNLESS OUR LEAGUE PLACING SOON IMPROVES";
const char aWeWillHaveToRe[] = "WE WILL HAVE TO RECONSIDER YOUR POSITION AS MANAGER";
const char aItIsWithGreatR_1[] = "IT IS WITH GREAT REGRET THAT THE BOARD AND I HAVE";
const char aDecidedToRelie_0[] = "DECIDED TO RELIEVE YOU OF YOUR DUTIES - YOU'RE SACKED";
const char aJustANoteToWis_0[] = "JUST A NOTE TO WISH YOU EVERY SUCCESS IN THE";
const char aNewSeason_0[] = "NEW SEASON";
const char aWeAllHopeYouEn_0[] = "WE ALL HOPE YOU ENJOY YOUR LAST SEASON IN MANAGEMENT";
const char aBeforeHandingT_0[] = "BEFORE HANDING THE REINS OVER TO A YOUNGER MAN";
const char aWelcomeToOurCl_0[] = "WELCOME TO OUR CLUB, WE HOPE YOU ENJOY YOUR LAST";
const char aSeasonInManage_0[] = "SEASON IN MANAGEMENT HERE BEFORE YOUR RETIREMENT";
const char aWeAllWishYouTh_0[] = "WE ALL WISH YOU THE VERY BEST AT THE END OF YOUR";
const char aDistinguishedC_0[] = "DISTINGUISHED CAREER - ENJOY YOUR RETIREMENT";
const char aMATCHSTATS[] = "M A T C H   S T A T S";
const char aPossession[] = "POSSESSION";
const char aGoalAttempts[] = "GOAL ATTEMPTS";
const char aOnTarget[] = "ON TARGET";
const char aCornersWon[] = "CORNERS WON";
const char aFoulsConceded[] = "FOULS CONCEDED";
const char aBookings[] = "BOOKINGS";
const char aSendingsOff[] = "SENDINGS OFF";
const char a442[] = "4-4-2";
const char a541[] = "5-4-1";
const char a451[] = "4-5-1";
const char a532[] = "5-3-2";
const char a352[] = "3-5-2";
const char a433[] = "4-3-3";
const char a424[] = "4-2-4";
const char a343[] = "3-4-3";
const char aSweep[] = "SWEEP";
const char a523[] = "5-2-3";
const char aAttack[] = "ATTACK";
const char aDefend[] = "DEFEND";
const char aUSER_A[] = "USER A";
const char aUSER_B[] = "USER B";
const char aUSER_C[] = "USER C";
const char aUSER_D[] = "USER D";
const char aUSER_E[] = "USER E";
const char aUSER_F[] = "USER F";
const char aLparen[] = "(";
const char aRparen[] = ")";
const char aAOfferForB[] = "%a OFFER FOR %b";
const char aAOfferForBAndC[] = "%a OFFER FOR %b AND %c";
const char aAExchangeOffer[] = "%a EXCHANGE OFFER FOR %b";
const char aAExchangeOffer_0[] = "%a EXCHANGE OFFER FOR %b AND %c";
const char aAOfferFor[] = "%a OFFER FOR";
const char aB[] = "%b";
const char aAOfferFor_0[] = "%a OFFER FOR";
const char aBAndC[] = "%b AND %c";
const char aAExchangeOffer_1[] = "%a EXCHANGE OFFER FOR";
const char aB_0[] = "%b";
const char aAExchangeOffer_2[] = "%a EXCHANGE OFFER FOR";
const char aBAndC_0[] = "%b AND %c";
const char aAImprovedOffer[] = "%a IMPROVED OFFER FOR %b";
const char aAImprovedOffer_0[] = "%a IMPROVED OFFER FOR %b AND %c";
const char aAImprovedExcha[] = "%a IMPROVED EXCHANGE OFFER FOR %b";
const char aAImprovedExcha_0[] = "%a IMPROVED EXCHANGE OFFER FOR %b AND %c";
const char aAImprovedOffer_1[] = "%a IMPROVED OFFER FOR";
const char aB_1[] = "%b";
const char aAImprovedOffer_2[] = "%a IMPROVED OFFER FOR";
const char aBAndC_1[] = "%b AND %c";
const char aAImprovedExcha_1[] = "%a IMPROVED EXCHANGE OFFER FOR";
const char aB_2[] = "%b";
const char aAImprovedExcha_2[] = "%a IMPROVED EXCHANGE OFFER FOR";
const char aBAndC_2[] = "%b AND %c";
const char aAFurtherImprov[] = "%a FURTHER IMPROVED OFFER FOR %b";
const char aAFurtherImprov_0[] = "%a FURTHER IMPROVED OFFER FOR %b AND %c";
const char aAFurtherImprov_1[] = "%a FURTHER IMPROVED EXCHANGE OFFER FOR %b";
const char aAFurtherImprov_2[] = "%a FURTHER IMPROVED EXCHANGE OFFER FOR %b AND %c";
const char aAFurtherImprov_3[] = "%a FURTHER IMPROVED OFFER FOR";
const char aB_3[] = "%b";
const char aAFurtherImprov_4[] = "%a FURTHER IMPROVED OFFER FOR";
const char aBAndC_3[] = "%b AND %c";
const char aAFurtherImprov_5[] = "%a FURTHER IMPROVED EXCHANGE";
const char aOfferForB[] = "OFFER FOR %b";
const char aAFurtherImprov_6[] = "%a FURTHER IMPROVED OFFER FOR";
const char aBAndC_4[] = "%b AND %c";
const char aJobOfferFromA[] = "JOB OFFER FROM %a";
const char aJobOfferFromAW[] = "JOB OFFER FROM %a WITHDRAWN";
const char aDearSirMadam[] = "DEAR SIR/MADAM";
const char aDearAB[] = "DEAR %a %b";
const char aWeHereAtAWishT[] = "WE HERE AT %a WISH TO BUY";
const char aWeHereAtAWishT_0[] = "WE HERE AT %a WISH TO IMPROVE";
const char aOurOfferToBuy[] = "OUR OFFER TO BUY";
const char aWeHereAtAWishT_1[] = "WE HERE AT %a WISH TO FURTHER";
const char aImproveOurOffe[] = "IMPROVE OUR OFFER TO BUY";
const char aFromAInExchang[] = "FROM %a IN EXCHANGE FOR";
const char aWeHereAtAWithd[] = "WE HERE AT %a WITHDRAW OUR";
const char aOfferOn[] = "OFFER ON";
const char aWeHereAtARefus[] = "WE HERE AT %a REFUSE TO FURTHER";
const char aImproveOnOurOf[] = "IMPROVE ON OUR OFFER TO BUY";
const char aWeHereAtAAreHa[] = "WE HERE AT %a ARE HAPPY TO SELL";
const char aWeHereAtAAreHa_0[] = "WE HERE AT %a ARE HAPPY TO EXCHANGE";
const char aSorryAAreUnwil[] = "SORRY %a ARE UNWILLING TO SELL";
const char aSorryAAreUnwil_0[] = "SORRY %a ARE UNWILLING TO EXCHANGE";
const char aInADealWithAFo[] = "IN A DEAL WITH %a FOR";
const char aAsThisPlayerIs[] = "AS THIS PLAYER IS NOT FOR SALE";
uint8_t aAsThesePlayers[35] = { 0x0, 0x41, 0x53, 0x20, 0x54, 0x48, 0x45, 0x53, 0x45, 0x20, 0x50, 0x4C, 0x41, 0x59, 0x45, 0x52, 0x53, 0x20, 0x41, 0x52, 0x45, 0x20, 0x4E, 0x4F, 0x54, 0x20, 0x46, 0x4F, 0x52, 0x20, 0x53, 0x41, 0x4C, 0x45, 0x0 };
uint8_t aAndWeWillAccep[38] = { 0x0, 0x41, 0x4E, 0x44, 0x20, 0x57, 0x45, 0x20, 0x57, 0x49, 0x4C, 0x4C, 0x20, 0x41, 0x43, 0x43, 0x45, 0x50, 0x54, 0x20, 0x4E, 0x4F, 0x20, 0x4D, 0x4F, 0x52, 0x45, 0x20, 0x4F, 0x46, 0x46, 0x45, 0x52, 0x53, 0x20, 0x4F, 0x4E, 0x0 };
const char aThisPlayerFrom[] = "THIS PLAYER FROM YOUR CLUB";
const char aAndWeWillAccep_0[] = "AND WE WILL ACCEPT NO MORE OFFERS ON";
const char aThesePlayersFr[] = "THESE PLAYERS FROM YOUR CLUB";
const char aButWeWouldBeHa[] = "BUT WE WOULD BE HAPPY TO LOOK AT A MORE";
const char aFavourableOffe[] = "FAVOURABLE OFFER";
const char aUnlessTheOffer[] = "UNLESS THE OFFER IS RAISED BY %a";
uint8_t aWeHereAtAWould[43] = { 0x0, 0x57, 0x45, 0x20, 0x48, 0x45, 0x52, 0x45, 0x20, 0x41, 0x54, 0x20, 0x25, 0x61, 0x20, 0x57, 0x4F, 0x55, 0x4C, 0x44, 0x20, 0x4C, 0x49, 0x4B, 0x45, 0x20, 0x54, 0x4F, 0x20, 0x4F, 0x46, 0x46, 0x45, 0x52, 0x20, 0x59, 0x4F, 0x55, 0x20, 0x54, 0x48, 0x45, 0x0 };
const char aCoachingJobAtO[] = "COACHING JOB AT OUR CLUB FOR NEXT SEASON";
const char aWeCanOfferYouA[] = "WE CAN OFFER YOU A VERY COMPETITIVE SALARY AND";
const char aWeHopeToBeAble[] = "WE HOPE TO BE ABLE TO MAKE FUNDS AVAILABLE";
const char aInTheRegionOfA[] = "IN THE REGION OF %a FOR IMPROVING THE TEAM";
const char aWeLookForwardT_1[] = "WE LOOK FORWARD TO HEARING FROM YOU";
const char aWeHereAtAAreDe[] = "WE HERE AT %a ARE DELIGHTED THAT YOU";
const char aHaveAcceptedTh[] = "HAVE ACCEPTED THE POSITION OF COACH AT OUR CLUB";
const char aFromTheStartOf_0[] = "FROM THE START OF NEXT SEASON";
const char aWeHopeToBeAble_0[] = "WE HOPE TO BE ABLE TO MAKE FUNDS AVAILABLE";
const char aInTheRegionOfA_0[] = "IN THE REGION OF %a FOR IMPROVING THE TEAM";
const char aMemoFromTheClu[] = "MEMO FROM THE CLUB CHAIRMAN";
const char aDearAB_0[] = "DEAR %a %b";
const char aBestRegards[] = "BEST REGARDS";
const char aComeOnAWeCanno[] = "COME ON %a WE CANNOT KEEP TOO LARGE A SQUAD";
const char aOrTheWageBillW[] = "OR THE WAGE BILL WILL GO THROUGH THE ROOF";
const char aSorryAButTheDi[] = "SORRY %a BUT THE DIRECTORS AND I HAVE NO";
const char aMoreTimeToNego[] = "MORE TIME TO NEGOTIATE BEFORE OUR NEXT GAME";
const char aWellDoneAYouDi_0[] = "WELL DONE %a, YOU DID AN EXCELLENT JOB";
const char aThisSeasonAndW_0[] = "THIS SEASON AND WE ALL APPRECIATE IT";
const char aAGoodSeasonAWe_0[] = "A GOOD SEASON %a, WE ARE ALL VERY";
const char aPleasedWithYou_0[] = "PLEASED WITH YOU, KEEP UP THE GOOD WORK";
const char aAnUpAndDownSea_0[] = "AN UP AND DOWN SEASON %a, WE ALL HOPE YOU";
const char aCanImproveOnTh_0[] = "CAN IMPROVE ON THIS IN THE NEAR FUTURE";
const char aNotAVeryGoodSe_0[] = "NOT A VERY GOOD SEASON %a, WE HOPE YOU CAN";
const char aImproveTheTeam[] = "IMPROVE THE TEAM'S PERFORMANCE NEXT SEASON";
const char aAVeryDisappoin_0[] = "A VERY DISAPPOINTING SEASON %a, THE CLUB";
const char aDemandsMuchBet[] = "DEMANDS MUCH BETTER FROM YOU NEXT SEASON";
const char aThanksForAllYo_0[] = "THANKS FOR ALL YOUR HELP %a, WE ALL WISH";
const char aYouWellInYourN_0[] = "YOU WELL IN YOUR NEW JOB";
const char aBankStatement[] = "BANK STATEMENT";
const char aOldBalance[] = "OLD BALANCE:";
const char aNewBalance[] = "NEW BALANCE:";
const char aBalanceAtStart[] = "BALANCE AT START OF SEASON:";
const char aBalanceAtEndOf[] = "BALANCE AT END OF LAST SEASON:";
const char aTotalProfit[] = "TOTAL PROFIT:";
const char aTotalLoss[] = "TOTAL LOSS:";
const char aPlayerSales[] = "PLAYER SALES:";
const char aPlayerPurchase[] = "PLAYER PURCHASES:";
const char aGateReceipts[] = "GATE RECEIPTS:";
const char aGeneralRunning[] = "GENERAL RUNNING COSTS:";
const char aAdditionalInve[] = "ADDITIONAL INVESTMENT FROM THE NEW CHAIRMAN:";
const char aAdditionalInve_0[] = "ADDITIONAL INVESTMENT FROM THE CHAIRMAN:";
const char aCompetitionBon[] = "COMPETITION BONUSES + TV RIGHTS:";
const char aSponsorshipFor[] = "SPONSORSHIP FOR THE CLUB FOR THIS";
const char aSeasonFromSens[] = "SEASON FROM SENSISOFT PLC:";
const char aPlayerWagesBil[] = "PLAYER WAGES BILL:";
uint8_t aInsertBlankDis[27] = { 0x1, 0x49, 0x4E, 0x53, 0x45, 0x52, 0x54, 0x20, 0x42, 0x4C, 0x41, 0x4E, 0x4B, 0x20, 0x44, 0x49, 0x53, 0x4B, 0x20, 0x49, 0x4E, 0x20, 0x44, 0x46, 0x30, 0x3A, 0x0 };
uint8_t aInsertSwosDisk[33] = { 0x1, 0x49, 0x4E, 0x53, 0x45, 0x52, 0x54, 0x20, 0x53, 0x57, 0x4F, 0x53, 0x20, 0x44, 0x49, 0x53, 0x4B, 0x20, 0x31, 0x20, 0x49, 0x4E, 0x20, 0x41, 0x4E, 0x59, 0x20, 0x44, 0x52, 0x49, 0x56, 0x45, 0x0 };
uint8_t aInsertSwosDisk_0[33] = { 0x1, 0x49, 0x4E, 0x53, 0x45, 0x52, 0x54, 0x20, 0x53, 0x57, 0x4F, 0x53, 0x20, 0x44, 0x49, 0x53, 0x4B, 0x20, 0x32, 0x20, 0x49, 0x4E, 0x20, 0x41, 0x4E, 0x59, 0x20, 0x44, 0x52, 0x49, 0x56, 0x45, 0x0 };
uint8_t aCustomTeamsChanged[32] = { 0x1, 0x43, 0x55, 0x53, 0x54, 0x4F, 0x4D, 0x20, 0x54, 0x45, 0x41, 0x4D, 0x53, 0x20, 0x48, 0x41, 0x56, 0x45, 0x20, 0x42, 0x45, 0x45, 0x4E, 0x20, 0x43, 0x48, 0x41, 0x4E, 0x47, 0x45, 0x44, 0x0 };
uint8_t aTacticsHaveBeenChanged[27] = { 0x1, 0x54, 0x41, 0x43, 0x54, 0x49, 0x43, 0x53, 0x20, 0x48, 0x41, 0x56, 0x45, 0x20, 0x42, 0x45, 0x45, 0x4E, 0x20, 0x43, 0x48, 0x41, 0x4E, 0x47, 0x45, 0x44, 0x0 };
uint8_t aEditedTacticsWillBeLost[29] = { 0x1, 0x45, 0x44, 0x49, 0x54, 0x45, 0x44, 0x20, 0x54, 0x41, 0x43, 0x54, 0x49, 0x43, 0x53, 0x20, 0x57, 0x49, 0x4C, 0x4C, 0x20, 0x42, 0x45, 0x20, 0x4C, 0x4F, 0x53, 0x54, 0x0 };
uint8_t aDiyCompetitionPrompt[35] = { 0x2, 0x20, 0x20, 0x59, 0x4F, 0x55, 0x20, 0x41, 0x52, 0x45, 0x20, 0x41, 0x42, 0x4F, 0x55, 0x54, 0x20, 0x54, 0x4F, 0x20, 0x4C, 0x4F, 0x53, 0x45, 0x20, 0x43, 0x55, 0x52, 0x52, 0x45, 0x4E, 0x54, 0x20, 0x20, 0x0 };
const char aDiyCompetition[] = "         DIY COMPETITION         ";
uint8_t aPresetCompetitionPrompt[35] = { 0x2, 0x20, 0x20, 0x59, 0x4F, 0x55, 0x20, 0x41, 0x52, 0x45, 0x20, 0x41, 0x42, 0x4F, 0x55, 0x54, 0x20, 0x54, 0x4F, 0x20, 0x4C, 0x4F, 0x53, 0x45, 0x20, 0x43, 0x55, 0x52, 0x52, 0x45, 0x4E, 0x54, 0x20, 0x20, 0x0 };
const char aPresetCompetit[] = "       PRESET COMPETITION        ";
uint8_t aSeasonPrompt[35] = { 0x2, 0x20, 0x20, 0x59, 0x4F, 0x55, 0x20, 0x41, 0x52, 0x45, 0x20, 0x41, 0x42, 0x4F, 0x55, 0x54, 0x20, 0x54, 0x4F, 0x20, 0x4C, 0x4F, 0x53, 0x45, 0x20, 0x43, 0x55, 0x52, 0x52, 0x45, 0x4E, 0x54, 0x20, 0x20, 0x0 };
const char aSeason[] = "             SEASON              ";
uint8_t aCareerPrompt[35] = { 0x2, 0x20, 0x20, 0x59, 0x4F, 0x55, 0x20, 0x41, 0x52, 0x45, 0x20, 0x41, 0x42, 0x4F, 0x55, 0x54, 0x20, 0x54, 0x4F, 0x20, 0x4C, 0x4F, 0x53, 0x45, 0x20, 0x43, 0x55, 0x52, 0x52, 0x45, 0x4E, 0x54, 0x20, 0x20, 0x0 };
const char aCareer[] = "             CAREER              ";
const char aDiy[] = "DIY";
const char aPreset[] = "PRESET";
const char aSeason_0[] = "SEASON";
const char aCareer_0[] = "CAREER";
const char aTact[] = "TACT";
const char aName[] = "NAME";
const char aMr[] = "MR";
const char aMs[] = "MS";
const char aOr[] = "OR ";
const char aPlayEachTeamX1[] = "PLAY EACH TEAM X 1";
const char aPlayEachTeamX2[] = "PLAY EACH TEAM X 2";
const char aPlayEachTeamX3[] = "PLAY EACH TEAM X 3";
const char aPlayEachTeamX4[] = "PLAY EACH TEAM X 4";
const char aKnockout[] = "KNOCKOUT";
const char a1GroupOf1[] = "1 GROUP OF %1";
const char a0GroupsOf1[] = "%0 GROUPS OF %1";
const char aWinnersOfEachG[] = "(WINNERS OF EACH GROUP QUALIFY)";
const char aWinnersOfEachG_0[] = "(WINNERS OF EACH GROUP AND BEST RUNNER-UP QUALIFIES)";
const char aWinnersOfEachG_1[] = "(WINNERS OF EACH GROUP AND BEST %1 RUNNERS-UP QUALIFY)";
const char aTop0InEachGrou[] = "(TOP %0 IN EACH GROUP QUALIFY)";
const char aTop0InEachGrou_0[] = "(TOP %0 IN EACH GROUP AND BEST RUNNER-UP QUALIFY)";
const char aTop0InEachGrou_1[] = "(TOP %0 IN EACH GROUP AND BEST %1 RUNNERS-UP QUALIFY)";
const char aMatchWinnersQu[] = "(MATCH WINNERS QUALIFY)";
const char aMatchWinnersOn[] = "(MATCH WINNERS ON AGGREGATE QUALIFY)";
const char aTop0InGroupQua[] = "(TOP %0 IN GROUP QUALIFY)";
const char aMatchWinnerWin[] = "(MATCH WINNER WINS TOURNAMENT)";
const char aMatchWinnerOnA[] = "(MATCH WINNER ON AGGREGATE WINS TOURNAMENT)";
const char aGroupWinnerWin[] = "(GROUP WINNER WINS TOURNAMENT)";
const char aClubTeams[] = "CLUB TEAMS";
const char aNationalTeams[] = "NATIONAL TEAMS";
const char aOriginalCustom[] = "ORIGINAL CUSTOM TEAMS";
const char aEditedCustomTe_0[] = "EDITED CUSTOM TEAMS";
const char aSeeded[] = "SEEDED";
const char aPlayTournament[] = "PLAY TOURNAMENT";
const char aPlayCup[] = "PLAY CUP";
const char aPlayLeague[] = "PLAY LEAGUE";
const char aPlaySeason[] = "PLAY SEASON";
const char aPlayFriendly[] = "PLAY FRIENDLY";
const char aViewSelectedTe[] = "VIEW SELECTED TEAMS";
const char aPl[] = "PL";
const char aW[] = "W";
const char aD[] = "D";
const char aL[] = "L";
const char aF[] = "F";
const char aA_0[] = "A";
const char aPts[] = "PTS";
const char aNextRoundDraw[] = "NEXT ROUND DRAW";
const char aNextRound[] = "NEXT ROUND";
const char aPlayReplays[] = "PLAY REPLAYS";
const char a2ndLegRound[] = "2ND LEG ROUND";
const char aDraw[] = "DRAW";
const char aReplay[] = "REPLAY";
const char aReplays[] = "REPLAYS";
const char a2ndReplay[] = "2ND REPLAY";
const char a3rdReplay[] = "3RD REPLAY";
const char a2ndReplays[] = "2ND REPLAYS";
const char a3rdReplays[] = "3RD REPLAYS";
const char aComputer[] = "COMPUTER";
const char aSelect0Teams[] = "SELECT %0 TEAMS";
const char aSelect0MoreTea[] = "SELECT %0 MORE TEAMS";
const char aSelect1MoreTea[] = "SELECT 1 MORE TEAM";
const char aSelect0LessTea[] = "SELECT %0 LESS TEAMS";
const char aSelect1LessTea[] = "SELECT 1 LESS TEAM";
const char aNat[] = "NAT";
const char aNationality[] = "NATIONALITY";
const char aChooseCompetit[] = "CHOOSE COMPETITION";
const char aChoosePresetCo[] = "CHOOSE PRESET COMPETITION";
const char aChooseSeason[] = "CHOOSE SEASON";
const char aSelectTeamToEd[] = "SELECT TEAM TO EDIT";
const char aChooseTeamsFor[] = "CHOOSE TEAMS FOR ";
const char aChangeTeamsFor[] = "CHANGE TEAMS FOR ";
const char aAllSelectedTea[] = "ALL SELECTED TEAMS FOR ";
const char aTransferMarket[] = "TRANSFER MARKET";
const char aBuyPlayer[] = "BUY PLAYER";
const char aBuyOtherDomest[] = "BUY OTHER DOMESTIC PLAYER";
const char aBuyOtherForeig[] = "BUY OTHER FOREIGN PLAYER";
const char aSelectTeamToMa[] = "SELECT TEAM TO MANAGE";
const char aSelectTeamToIm[] = "SELECT TEAM TO IMPORT ";
const char aSelectSquadToV[] = "SELECT SQUAD TO VIEW";
const char aFriendly_1[] = "FRIENDLY";
const char aMakeNewCompeti[] = "MAKE NEW COMPETITION";
const char aMakeNewDiyTour[] = "MAKE NEW DIY TOURNAMENT";
const char aMakeNewDiyLeag[] = "MAKE NEW DIY LEAGUE";
const char aMakeNewDiyCup[] = "MAKE NEW DIY CUP";
const char aContinue[] = "CONTINUE";
const char aOn[] = "ON";
const char aOff[] = "OFF";
const char aOk[] = "OK";
const char aCopy[] = "COPY";
const char aUndo[] = "UNDO";
const char aExit[] = "EXIT";
const char aCancel[] = "CANCEL";
const char aImport[] = "IMPORT";
const char aFlipOn[] = "FLIP ON";
const char aFlipOff[] = "FLIP OFF";
const char aDiyCompetition_0[] = "DIY COMPETITION";
const char aSelectDiyCompe[] = "SELECT DIY COMPETITION TYPE";
const char aDiyLeague[] = "DIY LEAGUE";
const char aDiyCup[] = "DIY CUP";
const char aDiyTournament[] = "DIY TOURNAMENT";
const char aDesignDiyLeagu[] = "DESIGN DIY LEAGUE";
const char aDesignDiyCup[] = "DESIGN DIY CUP";
const char aDesignDiyTourn[] = "DESIGN DIY TOURNAMENT";
const char aAbort[] = "ABORT";
const char aWinners_0[] = "WINNERS";
const char aV[] = "V";
const char aPlus[] = "+";
const char aMinus[] = "-";
const char aClubBusiness[] = "CLUB BUSINESS";
const char aNewJob[] = "NEW JOB";
const char aNoJobOffers[] = "NO JOB OFFERS";
const char aJobOffers[] = "JOB OFFERS";
const char aJobOffersBeing[] = "JOB OFFERS BEING CONSIDERED";
const char aFinishSeason[] = "FINISH SEASON";
const char aPlayMatch[] = "PLAY MATCH";
const char aNextMatch[] = "NEXT MATCH";
const char aSquad[] = "SQUAD";
const char aSquads[] = "SQUADS";
const char aTactics[] = "TACTICS";
const char aEditTactics[] = "EDIT TACTICS";
const char aEditTacticsSel[] = "EDIT TACTICS - SELECT TEAM";
const char aBallInPlay[] = "BALL IN PLAY";
const char aBallOutOfPlay[] = "BALL OUT OF PLAY";
const char aImportTactics[] = "IMPORT TACTICS";
const char aLoadEditedTact[] = "LOAD EDITED TACTICS";
const char aSaveEditedTact[] = "SAVE EDITED TACTICS";
const char aTransfers[] = "TRANSFERS";
const char aViewWorld[] = "VIEW WORLD";
const char aTeams[] = "TEAMS";
const char aDescription[] = "DESCRIPTION";
const char aNumberOfTeams[] = "NUMBER OF TEAMS";
const char aPlayEachTeam[] = "PLAY EACH TEAM";
const char aPointsForAWin[] = "POINTS FOR A WIN";
const char a2PtsForAWin[] = "2 PTS FOR A WIN";
const char a3PtsForAWin[] = "3 PTS FOR A WIN";
const char aX0[] = "X %0";
const char aSubstitutes[] = "SUBSTITUTES";
const char aFrom[] = "FROM";
const char a1stLeg[] = "1ST LEG";
const char a2ndLeg[] = "2ND LEG";
const char aLeg1[] = "LEG 1";
const char aLeg2[] = "LEG 2";
const char a1Leg[] = "1 LEG";
const char a2Legs[] = "2 LEGS";
const char aNoExtraTime[] = "NO EXTRA TIME";
const char aExtraTime[] = "EXTRA TIME";
const char aETIfReplay[] = "E.T. IF REPLAY";
const char aNoPenalties[] = "NO PENALTIES";
const char aPenalties[] = "PENALTIES";
const char aPensIfReplay[] = "PENS IF REPLAY";
const char aAfter90Mins[] = "AFTER 90 MINS";
const char aAfterExtraTime[] = "AFTER EXTRA TIME";
const char aPitchType[] = "PITCH TYPE";
const char aRandom[] = "RANDOM";
const char aFrozen[] = "FROZEN";
const char aMuddy[] = "MUDDY";
const char aWet[] = "WET";
const char aSoft[] = "SOFT";
const char aNormal[] = "NORMAL";
const char aDry[] = "DRY";
const char aHard[] = "HARD";
const char aAwayGoals[] = "AWAY GOALS";
const char aTournament[] = "TOURNAMENT";
const char aLeague[] = "LEAGUE";
const char aCup[] = "CUP";
const char aLeague_0[] = "LEAGUE";
const char aCup_0[] = "CUP";
const char aCup_1[] = "CUP";
const char aCup_2[] = "CUP";
const char aLeague_1[] = "LEAGUE";
const char aPlayoffs[] = "PLAYOFFS";
const char aPremierDivisio[] = "PREMIER DIVISION";
const char aDivision1_0[] = "DIVISION 1";
const char aDivision2_0[] = "DIVISION 2";
const char aDivision3_0[] = "DIVISION 3";
const char aPremDiv[] = "PREM DIV";
const char aDiv1[] = "DIV 1";
const char aDiv2[] = "DIV 2";
const char aDiv3[] = "DIV 3";
const char aChooseTeam[] = "CHOOSE TEAM";
const char aChooseTeams[] = "CHOOSE TEAMS";
const char aChangeTeams[] = "CHANGE TEAMS";
const char aRounds[] = "ROUNDS";
const char aGroupA[] = "GROUP A";
const char aGroupB[] = "GROUP B";
const char aGroupC[] = "GROUP C";
const char aGroupD[] = "GROUP D";
const char aGroupE[] = "GROUP E";
const char aGroupF[] = "GROUP F";
const char aGroupG[] = "GROUP G";
const char aGroupH[] = "GROUP H";
const char aAttack_0[] = "ATTACK";
const char aDefend_0[] = "DEFEND";
const char aG[] = "G";
const char aRb[] = "RB";
const char aLb[] = "LB";
const char aD_0[] = "D";
const char aRw[] = "RW";
const char aLw[] = "LW";
const char aM[] = "M";
const char aA_1[] = "A";
const char aGoalkeeper[] = "GOALKEEPER";
const char aDefender[] = "DEFENDER";
const char aMidfielder[] = "MIDFIELDER";
const char aAttacker[] = "ATTACKER";
const char aFirstKit[] = "FIRST KIT";
const char aSecondKit[] = "SECOND KIT";
const char aCareer_1[] = "CAREER";
const char aCoach_3[] = "COACH";
const char aCoach_4[] = "COACH:";
const char aViewMatch[] = "VIEW MATCH";
const char aViewHighlights_0[] = "VIEW HIGHLIGHTS";
const char aManageMatch[] = "MANAGE MATCH";
const char aStats[] = "STATS";
const char aLeadingCompeti[] = "LEADING COMPETITION GOAL SCORERS";
const char aTopGoalScorers[] = "TOP GOAL SCORERS";
const char aStatistics[] = "STATISTICS";
const char aHighestScorerL[] = "HIGHEST SCORER LIST";
const char aCompetitionInf[] = "COMPETITION INFO";
const char aViewSquads[] = "VIEW SQUADS";
const char aViewSquad[] = "VIEW SQUAD";
const char aManagementReco_0[] = "MANAGEMENT RECORD";
const char aSeason_1[] = "SEASON";
const char aSeasonal[] = "SEASONAL";
const char aEditCustomTeam[] = "EDIT CUSTOM TEAMS";
const char aPresetCompetit_0[] = "PRESET COMPETITION";
const char aOptions[] = "OPTIONS";
const char aHighlights_0[] = "HIGHLIGHTS";
const char aBank[] = "BANK";
const char aH[] = "(H)";
const char aA_2[] = "(A)";
const char aFirstRound[] = "FIRST ROUND";
const char aSecondRound[] = "SECOND ROUND";
const char aThirdRound[] = "THIRD ROUND";
const char aFourthRound[] = "FOURTH ROUND";
const char aFifthRound[] = "FIFTH ROUND";
const char aSixthRound[] = "SIXTH ROUND";
const char aQuarterFinal[] = "QUARTER-FINAL";
const char aSemiFinal[] = "SEMI-FINAL";
const char aFinal_2[] = "FINAL";
const char aFinalGroup[] = "FINAL GROUP";
const char aThirdPlacePlay[] = "THIRD PLACE PLAY-OFF";
const char aRound1[] = "ROUND 1";
const char aRound2[] = "ROUND 2";
const char aRound3[] = "ROUND 3";
const char aRound4[] = "ROUND 4";
const char aRound5[] = "ROUND 5";
const char aRound6[] = "ROUND 6";
const char aQFinal[] = "Q-FINAL";
const char aSFinal[] = "S-FINAL";
const char aFinal_3[] = "FINAL";
const char aFinalGroup_0[] = "FINAL GROUP";
const char a3rdPlayOff[] = "3RD PLAY-OFF";
const char aFinal_4[] = "FINAL";
const char aEnglish[] = "ENGLISH";
const char aGerman[] = "GERMAN";
const char aFrench[] = "FRENCH";
const char aItalian[] = "ITALIAN";
const char aSpanish[] = "SPANISH";
const char a3Mins[] = "3 MINS";
const char a5Mins[] = "5 MINS";
const char a7Mins[] = "7 MINS";
const char a10Mins[] = "10 MINS";
const char aGameLength[] = "GAME LENGTH";
const char aFixPitchType[] = "FIX PITCH TYPE";
const char aAutoReplays[] = "AUTO REPLAYS";
const char aAutoSaveHighli[] = "AUTO SAVE HIGHLIGHTS";
const char aMenuMusic[] = "MENU MUSIC";
const char aLanguage[] = "LANGUAGE";
const char aPlay[] = "PLAY";
const char aGoals[] = "GOALS";
const char aForm[] = "FORM";
const char aLge[] = "LGE";
const char aCups[] = "CUPS";
const char aCup_3[] = "CUP";
const char aInt[] = "INT";
const char aTot[] = "TOT";
const char aOwnGoals[] = "OWN GOALS";
const char aExPlayerGoals[] = "EX. PLAYER GOALS";
const char aJan[] = "JAN";
const char aFeb[] = "FEB";
const char aMar[] = "MAR";
const char aApr[] = "APR";
const char aMay[] = "MAY";
const char aJun[] = "JUN";
const char aJul[] = "JUL";
const char aAug[] = "AUG";
const char aSep[] = "SEP";
const char aOct[] = "OCT";
const char aNov[] = "NOV";
const char aDec[] = "DEC";
const char aLoadOldCompeti[] = "LOAD OLD COMPETITION";
const char aLoad[] = "LOAD";
const char aSave[] = "SAVE";
const char aSaveExit[] = "SAVE/EXIT";
const char aFilename[] = "FILENAME:";
const char aDiskError[] = "DISK ERROR";
const char aDiskWriteProte[] = "DISK WRITE PROTECTED";
const char aNoDiskInDrive[] = "NO DISK IN DRIVE";
const char aFileNotFound[] = "FILE NOT FOUND";
const char aDiskFull[] = "DISK FULL";
const char aCannotFormatGa[] = "CANNOT FORMAT GAME DISK";
const char aNotATacticsFil[] = "NOT A TACTICS FILE";
const char aEditedCustomTe[] = "EDITED CUSTOM TEAMS FILE NOT FOUND";
const char aCanOnlySaveMax[] = "CAN ONLY SAVE MAXIMUM 45 FILES ON DISK";
const char aSaveDiskFiling[] = "SAVE DISK FILING";
const char aFormatSaveDisk[] = "FORMAT SAVE DISK";
const char aDeleteFile[] = "DELETE FILE";
const char aAny[] = "ANY";
const char aPassing[] = "PASSING";
const char aShooting[] = "SHOOTING";
const char aHeading[] = "HEADING";
const char aTackling[] = "TACKLING";
const char aBallControl[] = "BALL CONTROL";
const char aSpeed[] = "SPEED";
const char aFinishing[] = "FINISHING";
const char aFitness[] = "FITNESS";
const char aCriteria[] = "CRITERIA";
const char aPlayersOnDomes[] = "PLAYERS ON DOMESTIC MARKET";
const char aPlayersOnForei[] = "PLAYERS ON FOREIGN MARKET";
const char aType[] = "TYPE";
const char aApproxValue[] = "APPROX VALUE";
const char aSkills[] = "SKILLS";
const char aList[] = "LIST";
const char aMore[] = "MORE";
const char aSelectPlayerTo[] = "SELECT PLAYER TO MAKE OFFER ON";
const char aSelectPlayerTo_0[] = "SELECT PLAYER TO EXCHANGE";
const char aPutPlayerOnTra[] = "PUT PLAYER ON TRANSFER MARKET";
const char aViewDomesticPl[] = "VIEW DOMESTIC PLAYER MARKET";
const char aViewForeignPla[] = "VIEW FOREIGN PLAYER MARKET";
const char aOffers[] = "OFFERS";
const char aDiscardOffer[] = "DISCARD OFFER";
const char aMakeOffer[] = "MAKE OFFER";
const char aGiveFreeTransf[] = "GIVE FREE TRANSFER";
const char aTakeOffMarket[] = "TAKE OFF MARKET";
const char aPlayersCurrent[] = "PLAYERS CURRENTLY ON TRANSFER MARKET";
const char aPutPlayerOnTra_0[] = "PUT PLAYER ON TRANSFER MARKET";
const char aViewOffers[] = "VIEW OFFERS";
const char aNoOffers[] = "NO OFFERS";
const char aConfirmOffer[] = "CONFIRM OFFER";
const char aThirdPartyOffe[] = "THIRD PARTY OFFER";
const char aAcceptOffer[] = "ACCEPT OFFER";
const char aRejectOffer[] = "REJECT OFFER";
const char aAskForMore[] = "ASK FOR MORE";
const char aResponseToOffe[] = "RESPONSE TO OFFER";
const char aMakeImprovedOf[] = "MAKE IMPROVED OFFER";
const char aJobOffer[] = "JOB OFFER";
const char aAccept[] = "ACCEPT";
const char aConsider[] = "CONSIDER";
const char aViewTeam[] = "VIEW TEAM";
const char aViewLeague[] = "VIEW LEAGUE";
const char a25k[] = "25K";
const char a50k[] = "50K";
const char a75k[] = "75K";
const char a100k[] = "100K";
const char a150k[] = "150K";
const char a200k[] = "200K";
const char a300k[] = "300K";
const char a500k[] = "500K";
const char a750k[] = "750K";
const char a1m[] = "1M";
const char a15m[] = "1.5M";
const char a2m[] = "2M";
const char a3m[] = "3M";
const char a5m[] = "5M";
const char a10m[] = "10M";
const char a15m_0[] = "15M";
const char aEuropean[] = "EUROPEAN";
const char aNorthAmerican[] = "NORTH AMERICAN";
const char aSouthAmerican[] = "SOUTH AMERICAN";
const char aAsian[] = "ASIAN";
const char aOceanian[] = "OCEANIAN";
const char aAfrican[] = "AFRICAN";
const char aEur[] = "EUR";
const char aNam[] = "NAM";
const char aSam[] = "SAM";
const char aAsi[] = "ASI";
const char aOce[] = "OCE";
const char aAfr[] = "AFR";
const char aEuro[9] = "\004E\000U\000R\000O";
const char aNam_0[9] = "\004N\000A\000M\000 ";
const char aSam_0[9] = "\004S\000A\000M\000 ";
const char aAsi_0[9] = "\004A\000S\000I\000 ";
const char aOce_0[9] = "\004O\000C\000E\000 ";
const char aAfr_0[9] = "\004A\000F\000R\000 ";
const char aWorldClubChamp[] = "WORLD CLUB CHAMPIONSHIP";
const char aWorldClub[] = "WORLD CLUB";
const char aEuropeanChampi_1[] = "EUROPEAN CHAMPIONS CUP";
const char aEuropeanCup[] = "EUROPEAN CUP";
const char aEufaCup[] = "EUFA CUP";
const char aEufaCup_0[] = "EUFA CUP";
const char aEuropeanCupWin[] = "EUROPEAN CUP-WINNERS CUP";
const char aEuroCwCup[] = "EURO CW CUP";
const char aSouthAmericanC[] = "SOUTH AMERICAN CUP";
const char aLge_0[9] = "\004L\000G\000E\000 ";
const char aCup_10[9] = "\004C\000U\000P\000 ";
const char aCup1[9] = "\004C\000U\000P\0001";
const char aCup2[9] = "\004C\000U\000P\0002";
const char aEuro_0[9] = "\004E\000U\000R\000O";
const char aInt_0[9] = "\004I\000N\000T\000 ";
const char aTot_0[9] = "\004T\000O\000T\000 ";
const char aReplay_0[] = "              (REPLAY)              ";
const char aReplay_1[] = "         (REPLAY)         ";
const char aAET[] = "               A.E.T.               ";
const char aAET_0[] = "          A.E.T.          ";
const char aAET90Mins23[] = "        A.E.T. 90 MINS %2-%3        ";
const char aAET90Mins23_0[] = "   A.E.T. 90 MINS %2-%3   ";
const char aAWin01OnPens[] = "        %a WIN %0-%1 ON PENS        ";
const char aAWin01OnPens_0[] = "   %a WIN %0-%1 ON PENS   ";
const char aAWin01OnPensAE[] = "    %a WIN %0-%1 ON PENS A.E.T.     ";
const char aAWin01OnPensAE_0[] = "%a WIN %0-%1 ON PENS A.E.T.";
const char aAWin01OnPensAE_1[] = "%a WIN %0-%1 ON PENS A.E.T. 90 MINS %2-%3";
const char aAWin01OnPensAE_2[] = "%a WIN %0-%1 ON PENS A.E.T.";
const char aAETReplay[] = "          A.E.T. (REPLAY)           ";
const char aAETReplay_0[] = "     A.E.T. (REPLAY)      ";
const char aAET90Mins23Rep[] = "   A.E.T. 90 MINS %2-%3 (REPLAY)    ";
const char aAET90Mins23Rep_0[] = "A.E.T. 90 MINS %2-%3 (REPLAY)";
const char aAWin01OnPensRe[] = "   %a WIN %0-%1 ON PENS (REPLAY)    ";
const char aAWin01OnPens_1[] = "   %a WIN %0-%1 ON PENS   ";
const char aAWin01OnPensAE_3[] = "%a WIN %0-%1 ON PENS A.E.T. (REPLAY)";
const char aAWin01OnPensAE_4[] = "%a WIN %0-%1 ON PENS A.E.T.";
const char aAWin01OnPensAE_5[] = "%a WIN %0-%1 ON PENS A.E.T. 90 MINS %2-%3";
const char aAWin01OnPensAE_6[] = "%a WIN %0-%1 ON PENS A.E.T.";
const char a1stLeg01[] = "      1ST LEG %0-%1       ";
const char a1stLeg01_0[] = "      1ST LEG %0-%1       ";
const char aAWin23OnAgg[] = "        %a WIN %2-%3 ON AGG.        ";
const char aAWin23OnAgg_0[] = "   %a WIN %2-%3 ON AGG.   ";
const char aAWin23OnAggAET[] = "    %a WIN %2-%3 ON AGG. A.E.T.     ";
const char aAWin23OnAggAET_0[] = "%a WIN %2-%3 ON AGG. A.E.T.";
const char a23OnAggAWinOnA[] = " %2-%3 ON AGG. %a WIN ON AWAY GOALS ";
const char aAWinOnAwayGoal[] = "   %a WIN ON AWAY GOALS   ";
const char a23OnAggAWinOnA_0[] = "%2-%3 ON AGG. %a WIN ON AWAY GOALS A.E.T.";
const char aAWinOnAwayGoal_0[] = "%a WIN ON AWAY GOALS A.E.T.";
const char a23OnAggAWin01O[] = " %2-%3 ON AGG. %a WIN %0-%1 ON PENS ";
const char aAWin01OnPens_2[] = "   %a WIN %0-%1 ON PENS   ";
const char a23OnAggAWin01O_0[] = "%2-%3 ON AGG. %a WIN %0-%1 ON PENS A.E.T.";
const char aAWin01OnPensAE_7[] = "%a WIN %0-%1 ON PENS A.E.T.";
const char a23OnAgg[] = "           %2-%3 ON AGG.            ";
const char a23OnAgg_0[] = "      %2-%3 ON AGG.       ";
// Pointer to current goal in highlight file
uint32_t * goalBasePtr = 0;
// Pointer to next goal
uint32_t * nextGoalPtr = 0;
SpriteGraphics *(*spriteGraphicsPtr)[] = 0;
// If this is zero player skin/color will not be individualized, instead they will all
// be using the skin/color that's most frequent in the team
// (always 1)
uint16_t useIndividualPlayerSkinColor = 0;
uint32_t loaderBankBitmap;
// Loader-provided startup parameter stored from d5 at boot.
uint32_t loaderParam;
uint32_t loaderMemTop;
uint8_t surnameBuf[24];
uint16_t menuCursorFrame;
// If 0, then no joy2 check
// 1 - if no computer player (2 player game)
// InitMainMenuStuff sets it to -1
uint16_t twoPlayers;
// !0 - Clear all control flags, 0 - don't
// used when setting up teams, for blocking other player's controls
uint16_t player1ClearFlag;
// If it is non zero, joy2 is cleared and not checked
uint16_t player2ClearFlag;
uint16_t deadVar01;
uint16_t deadVar02;
// Boolean flag set during Career_AutoAdvanceInternationalCompetitionFixtures.
uint16_t internationalAutoAdvanceFlag;
// Boolean flag set during Career_AdvanceToNextSeason_UpdateCompetitions.
uint16_t seasonUpdateInProgress;
uint16_t writeOnlyVar01;
// Team number to highlight in league table view; 0xFFFF when none.
uint16_t highlightedLeagueTeamId;
// ?
// In edit tactics: skill of the player that gets
// replaced
uint16_t oldPlayerSkill;
// ?
// In edit tactics: skill of the player that
// gets new position
uint16_t newPlayerSkill;
uint16_t team1SelectedPlayerIndex;
uint16_t team2SelectedPlayerIndex;
uint16_t careerFileBuffer;
uint8_t tmdFileBuffer[54720];
uint16_t currentSeasonShowing;
uint16_t stayingInOldClub;
uint16_t overdraftStreak;
uint16_t overdraftWarningState;
uint16_t performanceWarningState;
uint16_t overdraftWarningCooldown;
uint16_t performanceWarningCooldown;
uint16_t youreSacked;
// 0  = Active
// !0 = retired
// (career)
uint16_t retired;
// Set to 1 after DIY_UpdateCompetitionProgressOrAdvanceSlot.
uint16_t competitionSlotUpdatedFlag;
uint16_t careerTeamLostMatch;
// If not zero, you're in overdraft
uint16_t clubBusinessActive;
uint32_t newBalance;
uint32_t old_balance;
uint32_t playerPurchases;
uint32_t playerSales;
uint32_t generalRunningCosts;
uint32_t playerWagesBill;
uint32_t gateReceipts;
uint32_t startingBalance;
uint32_t startingBalanceCopy;
uint32_t competitionBonuses;
uint32_t sensisoftPlcSponsorship;
uint16_t financeTotalsNeedResetFlag;
uint32_t weeklyRunningCosts;
uint32_t weeklyPlayerWages;
uint32_t totalTeamValue;
uint8_t weeklyWageByPlayerIndex[128];
// Per-player form recovery table indexed by player ordinal.
uint8_t playerFormModifiers[32];
uint16_t sensisoftPlcSponsorshipFactor;
// Additional investments from the new chairman.
// 0  - no
// !0 - yes
uint16_t additionalInvestments;
uint16_t teamValueDivisor;
uint16_t expectedLeagueRankIndex;
uint16_t boardConfidenceHistory0;
uint16_t boardConfidenceHistory1;
uint16_t boardConfidenceHistory2;
uint16_t boardConfidenceHistory3;
uint16_t boardConfidenceScore;
// Initialized to 0xFFFF in InitCareer; between boardConfidenceScore and playWinCupAnimation.
uint16_t previousBoardConfidence;
uint16_t playWinCupAnimation;
uint16_t minorTrophyBonusActive;
uint16_t leagueTitleBonusActive;
uint16_t majorTrophyBonusActive;
uint16_t cupBonus1Active;
uint16_t cupBonus2Active;
uint16_t wonWorldCup;
uint16_t wonContinentalCup;
uint16_t wonInvitationTournament;
uint16_t qualifyingStage1PendingFlag0;
uint16_t qualifyingStage1PendingFlag1;
uint16_t qualifyingStage2PendingFlag0;
uint16_t qualifyingStage2PendingFlag1;
uint16_t isCareer;
uint16_t careerMatchSimulatedFlag;
// As a team manager
uint16_t gamesPlayed;
// As a team manager
uint16_t numWins;
// As a team manager
uint16_t numDrawn;
// As a team manager
uint16_t numLost;
// As a team manager
uint16_t goalsScored;
// As a team manager
uint16_t goalsTaken;
uint16_t boardConfidenceMod0;
uint16_t boardConfidenceMod1;
uint16_t boardConfidenceMod2;
uint16_t boardConfidenceMod3;
uint16_t boardConfidenceValue0;
uint16_t boardConfidenceValue1;
uint16_t boardConfidenceMod4;
uint16_t boardConfidenceMod5;
uint16_t boardConfidenceMod6;
uint16_t boardConfidenceMod7;
uint16_t boardConfidenceMod8;
uint16_t boardConfidenceMod9;
// Set to 1 in BeginContractNegotiationSequence.
uint16_t contractNegotiationActive;
uint16_t wageScalingDivisor;
// -1 = Nothing accepted yet
uint16_t teamNoOfferAccepted;
uint32_t teamFundsAccepted;
// 0  - Club selector
// !0 - national selector
uint16_t isNationalSelector;
// It seems that bit 1 must be set when
// choosing teams for continent competitions
// bit 0 must be clear for european championship
// bit 6 must be set for world cup qualifications
// bit 7 also (a guess)
uint8_t someTeamFlags;
uint16_t lastNationalityCall;
// Nationality code for the selected national team.
uint8_t nationalTeamNationality;
// Team file code for the selected national team.
uint8_t nationalTeamFileId;
// Set to 1 when selTeamNumber equals lastNationalityCall during season init.
uint16_t sameNationalCallFlag;
// Computed reputation when the manager is sacked as national selector.
uint16_t sackedReputationScore;
uint16_t nationalSelectorReputationPoints;
uint8_t nationalTeamFileCode;
// >4 - Very dissapointing season
//  3 - not a very good season
//  2 - up and down season
//  1 - good season
//  0 - excellent season
uint16_t seasonReview;
uint32_t careerCupPickList;
// World Cup host/defending champion team number.
uint16_t worldCupHostTeam;
// Second World Cup seeded/qualifying team number.
uint16_t worldCupQualifyingTeam;
// European Championship qualifying team number.
uint16_t euroChampionshipQualTeam;
// Selected team number in career
uint16_t selTeamNumber;
// Controls wheter player starts career as a coach
// or a player-coach (0 = coach, 1 = player-coach,
// or otherwise ;-))
uint16_t coachOrPlayer;
uint16_t careerTeamLeague;
uint16_t currentDivisionIndex;
// Starting round number for the league.
uint16_t leagueFirstRoundNumber;
uint16_t playPromotedAnimation;
uint16_t playRelegatedAnimation;
// Controls wheter it is mr or ms in the career menu
// 0 = mr
// 1 = ms
uint16_t mrOrMs;
uint32_t managerSexBuffer;
uint8_t managerNameBuffer[9];
uint8_t managerSurnameBuffer[13];
// Player nationality when starting career
uint8_t plNationality;
uint8_t pad_164B7B;
uint16_t winCupBonusCount;
uint16_t minorTrophyBonusCount;
uint16_t majorTrophyBonusCount;
uint16_t careerReputationPoints;
uint16_t removedOfferPlayersFromSelectedTeamCount;
uint16_t removedOfferPlayersFromOtherTeamsCount;
// Counter incremented each career week; decremented to trigger home market player removal.
uint16_t homeMarketUpdateBacklog;
// Counter incremented each career week; decremented to trigger foreign market player removal.
uint16_t foreignMarketUpdateBacklog;
uint16_t offerExpiryIterationsRemaining;
uint16_t numForeignMarketPlayers;
uint16_t numHomeMarketPlayers;
// For players transfer
uint16_t numOffers;
uint8_t foreignMarketPlayers[60];
// Format of each element:
// word - team number
// byte - player ordinal
// byte - padding
uint8_t homeMarketPlayers[100];
uint8_t transferOfferTable[70];
// Incremented once per season; used to scale foreign player transfer pool size.
uint16_t careerSeasonsCompleted;
uint16_t numForeignMarketPlayers2;
// Count of foreign market players added but not yet applied this season.
uint16_t pendingForeignPlayerCount;
// Per-season foreign transfer pool quota.
uint16_t seasonTransferQuota;
// Maximum transfer pool additions allowed this season.
uint16_t transferPoolSlotLimit;
// Maximum offer/swap operations allowed this season.
uint16_t offerSwapSlotLimit;
// Count of transfer pool slots consumed this season.
uint16_t transferPoolSlotsUsed;
// Count of offer/swap slots consumed this season.
uint16_t offerSwapSlotsUsed;
uint16_t numNewJobOffers;
JobOffer newJobOffers[5];
uint16_t numJobOffers;
JobOffer jobOffers[5];
// 0 - No more time to negotiate before playing game
uint16_t timeToNegotiate;
uint16_t numPlayersOnTransferMarket;
// Contents are bit numbers
uint8_t playersOnTransferMarket[10];
uint16_t lastOfferPrimaryPlayerOrdinal;
uint16_t lastOfferExtraPlayersWanted;
uint16_t lastOfferSwapPlayerOrdinal;
uint16_t lastOfferExtraPlayerOrdinal;
uint16_t offerNegotiationAttemptCount;
// Random value (0-15) for transfer market initialization.
uint16_t transferMarketRandOffset0;
// Random value (0-15) for transfer market initialization.
uint16_t transferMarketRandOffset1;
// Random value (0-15) for transfer market initialization.
uint16_t transferMarketRandOffset2;
// Cleared to 0 in Career_InitTransferMarketState.
uint16_t transferMarketPhase;
uint8_t careerUnavailablePlayerList[16];
uint8_t careerUnavailablePlayerLookupTable;
uint8_t careerUnavailablePlayerNames;
uint8_t currentMatchPlayers[32];
TeamFileEx careerTeam;
// Max 16
uint16_t careerNumPlayers;
uint16_t selTeamSelectedPlayerPosition;
// Accumulates player performance stat bytes from removed players.
uint16_t removedPlayerStatAccum;
uint8_t seasonInformationsArray[2120];
uint8_t lastFinancialWeekIndex;
uint8_t pad_165CE1;
uint8_t diyLeagueSeasonStateTable[2000];
TeamFileEx currentTeam;
// Translate player index in play match menu to player index in the team file
// corresponds to playerNumbers in Team (file)
uint8_t playerPositions[32];
// In play match menu selected teams
uint16_t numPlayers;
// Gets compared with team country numbers
uint16_t currentTeamNumber;
uint16_t currentTeamSelectedPlayerPosition;
// Saved selTeamSelectedPlayerPosition during training match save/restore.
uint16_t trainingMatchSavedPlayerPos;
uint8_t trainingMatchSavedPlayers[32];
// Saved player shirt number bytes for training match state.
uint8_t trainingMatchSavedShirtNums[32];
// Saved TEAMFILE_TACTICS byte for training match state. Accessed with move.b.
uint8_t trainingMatchSavedTactics;
uint8_t pad_166A27;
// Saved selTeamSelectedPlayerPosition for last match state.
uint16_t lastMatchSavedPlayerPos;
// Saved coachOrPlayer mode for last match state.
uint16_t lastMatchSavedCoachOrPlayer;
// Maybe
uint8_t lastMatchPlayers[32];
// Saved player shirt number bytes for last match state.
uint8_t lastMatchSavedShirtNums[32];
uint8_t currentTactics;
// Saved TEAMFILE_TEAMCONTROLS byte for last match state.
uint8_t lastMatchSavedTeamControls;
uint8_t careerLastMatchIndexByCompetitionSlot[162];
// 0  - No
// !0 - yes
uint16_t seasonFinished;
// 0  = Still playing
// !0 = season finished
uint16_t careerFinished;
CompetitionCup * currentCompetitionPtr;
CompetitionCup * secondaryCompetitionPtr;
CompetitionCup * tertiaryCompetitionPtr;
CompetitionCup * quaternaryCompetitionPtr;
// Pointer to the 5th competition slot (DIY). Cleared on season init.
void * diyCompetitionPtr;
// Euro cup slot index: 0=major trophy, 1=cup bonus 1, 2=cup bonus 2.
uint16_t euroCupSlotIndex;
// Pointer to DIY competition setup table.
void * diyCompetitionTablePtr;
// Number of squads selected when playing season
uint16_t seasonNumberOfSquads;
// Array of team numbers of squads in the current season.
uint16_t seasonSquadTeamNumbers[24];
uint8_t careerCompetitionSlotPtrTable[20];
uint32_t competitionContext;
// String buffer holding the secondary competition name.
int8_t secondaryCompetitionName[36];
// String offset for secondary competition name in season info.
uint32_t secondaryCompStringOffset;
uint8_t minorTrophyBonusValue;
// Team number of secondary competition winner for bonus check.
uint16_t secondaryCompWinnerTeam;
// Competition slot state A for secondary competition.
uint16_t secondaryCompSlotStateA;
// Competition slot state B for secondary competition.
uint16_t secondaryCompSlotStateB;
// Competition slot state C for secondary competition.
uint16_t secondaryCompSlotStateC;
// Flag for secondary competition completion.
uint16_t secondaryCompFinished;
uint32_t tertiaryCompetitionContext;
// String buffer holding the tertiary competition name.
int8_t tertiaryCompetitionName[36];
// String offset for tertiary competition name in season info.
uint32_t tertiaryCompStringOffset;
uint8_t leagueTitleBonusValue;
// Team number of tertiary competition winner for bonus check.
uint16_t tertiaryCompWinnerTeam;
// Competition slot state A for tertiary competition.
uint16_t tertiaryCompSlotStateA;
// Competition slot state B for tertiary competition.
uint16_t tertiaryCompSlotStateB;
// Competition slot state C for tertiary competition.
uint16_t tertiaryCompSlotStateC;
// Flag for tertiary competition completion.
uint16_t tertiaryCompFinished;
// Base of the 5th competition slot (DIY) context buffer.
uint8_t diyCompetitionContext[62];
// Competition slot state A for DIY competition.
uint16_t diyCompSlotStateA;
// Competition slot state B for DIY competition.
uint16_t diyCompSlotStateB;
// Competition slot state C for DIY competition.
uint16_t diyCompSlotStateC;
uint32_t euroCupsCompetitionContext;
// String buffer holding the quaternary competition name.
uint8_t quaternaryCompetitionName[36];
// String offset for quaternary competition name in season info.
uint32_t quaternaryCompStringOffset;
uint8_t majorTrophyOrCupBonusValue;
// Team number of quaternary competition winner for bonus check.
uint16_t quaternaryCompWinnerTeam;
// Competition slot state A for quaternary competition.
uint16_t quaternaryCompSlotStateA;
// Competition slot state B for quaternary competition.
uint16_t quaternaryCompSlotStateB;
// Competition slot state C for quaternary competition.
uint16_t quaternaryCompSlotStateC;
uint8_t teamBudgetRankTable;
CompetitionCup2_4_2_32 euroCupCopy;
CompetitionCup_6_2_64 cupWinnersCupCopy;
CompetitionCup_6_2_64 uefaCupCopy;
CompetitionCup_6_2_8 invitationTournamentCopy;
CompetitionCup_6_2_8 tourCopy;
CompetitionCup_6_2_12 friendlyCopy;
CompetitionCup2_4_2_32 europeanChampionships2Copy;
CompetitionCup_6_2_12 ecQualifyingGroup1Copy;
CompetitionCup_6_2_12 ecQualifyingGroup2Copy;
CompetitionCup_6_2_12 ecQualifyingGroup3Copy;
CompetitionCup_6_2_12 ecQualifyingGroup4Copy;
CompetitionCup_6_2_12 ecQualifyingGroup5Copy;
CompetitionCup_6_2_12 ecQualifyingGroup6Copy;
CompetitionCup_6_2_12 ecQualifyingGroup7Copy;
CompetitionCup_6_2_8 ecQualifyingGroup8Copy;
CompetitionCup2_4_2_24 copaAmericaCopy;
CompetitionCup2_6_2 africanNationsCupCopy;
CompetitionCup2_4_2 northAmericanCupCopy;
CompetitionCup2_6_2 asianCupCopy;
CompetitionCup_6_2 oceaniaCupCopy;
CompetitionCup2_6_2_64 worldCup2Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup1Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup2Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup3Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup4Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup5Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup6Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup7Copy;
CompetitionCup_6_2_12 worldCupQualifyingGroup8Copy;
CompetitionCup2_6_2_24 northAmericaWorldCupQualificationCopy;
CompetitionCup2_6_2_16 southAmericaWorldCupQualificationCopy;
CompetitionCup2_6_2_64 africaWorldCupQualificationCopy;
CompetitionCup2_6_2_60 asiaWorldCupQualificationCopy;
CompetitionCup_6_2_8 oceaniaWorldCupQualificationCopy;
uint16_t teamSelectionKeyCacheIndex;
uint16_t teamSelectionKeyCacheOffset;
uint16_t teamSelectionKeyCacheCount;
uint16_t careerSlotProcessingInProgress;
uint8_t teamSelectionKeyCache;
uint8_t careerJobOfferPhaseBias;
MarketPlayer careerForeignMarketPlayers[352];
uint16_t teamSelectionKeyCacheEnd;
int8_t competitionFileBuffer[2];
// 1 = Over
// Used when setting "replay..." or "continue..." in main menu
uint16_t competitionOver;
uint8_t diyPresetNameOfCompetition[36];
// String offset for primary competition name in season info.
uint32_t primaryCompStringOffset;
uint8_t majorTrophyBonusValue;
uint16_t numDiyTeams;
// Team number of primary competition winner.
uint16_t primaryCompWinnerTeam;
// Parameter for SelectAndShowSquadToView for the primary competition.
uint16_t primaryCompSquadViewParam;
// Competition slot state A for primary competition.
uint16_t primaryCompSlotStateA;
// Competition slot state B for primary competition.
uint16_t primaryCompSlotStateB;
// Competition slot state C for primary competition.
uint16_t primaryCompSlotStateC;
uint16_t diyTeamMinDivisionIndex;
uint16_t diyTeamMaxDivisionOffset;
// Number of promotion slots in the league.
uint16_t leaguePromotionCount;
// Number of relegation slots in the league.
uint16_t leagueRelegationCount;
// Flag enabling league performance/overdraft warnings.
uint16_t leagueWarningsEnabled;
// Array of team IDs for competition type 2 (cup format).
uint8_t diyTeamIdListType2[148];
// Array of team IDs for competition type 0 (league format).
uint8_t diyTeamIdListType0[288];
// Array of team IDs for competition type 1.
uint8_t diyTeamIdListType1[2310];
uint8_t viewRandomPhase;
// Season number in career file
uint8_t seasonPlaying;
// ShowFriendlyMenu sets it to 1
uint16_t inFriendlyMenu;
// 1 If team is national team (team number
// between 80 and 85) in edit tactics
uint16_t isNationalTeam;
// This var controls continue/abort prompt
// and many other things
// 0 = playing nothing
// 1 = DIY competition
// 2 = preset competition
// 3 = season
// 4 = career
// other values = career
GameTypes gameType;
// Maybe, sets it to 0 at start; write-only
uint16_t contestStarted;
uint16_t careerLoadedFlag;
TeamTactics teamTacticsUSERA;
TeamTactics teamTacticsUSERB;
TeamTactics teamTacticsUSERC;
TeamTactics teamTacticsUSERD;
TeamTactics teamTacticsUSERE;
TeamTactics teamTacticsUSERF;
// 0 = 3 Min, 1 = 5 min, 2 = 7 min, 3 = 10 min
int16_t gameLength;
int16_t autoReplays;
// 0 = No music
int16_t menuMusic;
int16_t autoSaveHighlights;
int16_t allPlayerTeamsEqual;
// -2 = Seasonal
// -1 = random
// 0  = frozen
// 1  = muddy
// 2  = wet
// 3  = soft
// 4  = normal
// 5  = dry
// 6  = hard
int16_t pitchType;
// In Rand
uint8_t seed2;
uint8_t randXorIndex2;
// In Rand
uint8_t randXorKey2;
// Write only
uint8_t newRandomSeedCopy;
// CurrentTick gets copied here from time to time
uint16_t randomSeed;
// Save file version marker. Set to 0x1200 on save.
uint16_t saveFileVersion;
// First 4 bytes of save file magic identifier.
uint32_t saveFileMagic1;
// Second 4 bytes of save file magic identifier.
uint32_t saveFileMagic2;
// Third 4 bytes of save file magic identifier.
uint32_t saveFileMagic3;
// Amiga type marker set to j_start entry point on save.
void * saveFileAmigaType;
uint16_t numSelectedTeams;
// Points to selected teams buffer (filled by GoGetTeamsForPlay)
TeamFile * selTeamsPtr;
// Flag: 1=computer-controlled team.
uint8_t selTeamIsComputerFlag;
// First byte of team name in selected team buffer.
uint8_t selTeamNameBase;
// Field at offset 0x19 in selected team entry, saved/restored during import.
uint8_t selTeamImportField;
// Socks primary color byte in selected team entry.
uint8_t selTeamSocksColor;
// Player index/order array in selected team entry.
uint8_t selTeamPlayerIndices[1308];
uint8_t editTeamsBuffer[43778];
uint8_t editTeamsSaveVarsArea[21002];
uint16_t saveGameLength;
uint32_t irqCookieObfuscated;
// End marker of chip RAM bitmap area used as loop boundary.
uint8_t chipRamBitmapEnd;
