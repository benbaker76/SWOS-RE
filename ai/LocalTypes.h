#pragma once

#define __usercall

typedef unsigned char   undefined;
typedef void            unknown;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
#define unkbyte9   unsigned long long
#define unkbyte10   unsigned long long
#define unkbyte11   unsigned long long
#define unkbyte12   unsigned long long
#define unkbyte13   unsigned long long
#define unkbyte14   unsigned long long
#define unkbyte15   unsigned long long
#define unkbyte16   unsigned long long

#define unkuint9   unsigned long long
#define unkuint10   unsigned long long
#define unkuint11   unsigned long long
#define unkuint12   unsigned long long
#define unkuint13   unsigned long long
#define unkuint14   unsigned long long
#define unkuint15   unsigned long long
#define unkuint16   unsigned long long

#define unkint9   long long
#define unkint10   long long
#define unkint11   long long
#define unkint12   long long
#define unkint13   long long
#define unkint14   long long
#define unkint15   long long
#define unkint16   long long

#define unkfloat1   float
#define unkfloat2   float
#define unkfloat3   float
#define unkfloat5   double
#define unkfloat6   double
#define unkfloat7   double
#define unkfloat9   long double
#define unkfloat11   long double
#define unkfloat12   long double
#define unkfloat13   long double
#define unkfloat14   long double
#define unkfloat15   long double
#define unkfloat16   long double

#define BADSPACEBASE   void
//#define code   void

typedef enum TacklingState {
    TS_STARTED_TACKLING=0,
    TS_TACKLING_THE_BALL=1,
    TS_GOOD_TACKLE=2
} TacklingState;

typedef enum ShirtTypes {
    SHIRT_ORDINARY=0,
    SHIRT_COLORED_SLEEVES=1,
    SHIRT_VERTICAL_STRIPES=2,
    SHIRT_HORIZONTAL_STRIPES=3
} ShirtTypes;

typedef struct CharTable CharTable, *PCharTable;

struct CharTable {
    word unk1;
    word charHeight;
    dword unk2;
    word charSpacing;
    word spaceWidth;
    word spriteIndexOffset;
    byte conversionTable[224];
};

typedef union FixedPoint_ FixedPoint_, *PFixedPoint_;

typedef struct FPParts FPParts, *PFPParts;

struct FPParts {
    word i;
    word frac;
};

union FixedPoint_ {
    dword raw;
    struct FPParts s;
};

typedef struct JobOffer JobOffer, *PJobOffer;

struct JobOffer {
    word teamNo;
    byte teamName[18];
    dword amountOffered;
    word unkn;
};

typedef struct MenuEntry MenuEntry, *PMenuEntry;

typedef union entryType1Union entryType1Union, *PentryType1Union;

typedef union entryType2Union entryType2Union, *PentryType2Union;

union entryType1Union {
    dword func1;
    word backAndFrameColor;
    word sprite1;
};

union entryType2Union {
    dword func2;
    dword string;
    word sprite2;
    dword stringTable;
    dword multiLineText;
    word number;
    dword spriteCopy;
};

struct MenuEntry {
    word alreadyDrawn;
    word ordinal;
    word isInvisible;
    word isDisabled;
    byte leftEntry;
    byte rightEntry;
    byte upEntry;
    byte downEntry;
    byte directionLeft;
    byte directionRight;
    byte directionUp;
    byte directionDown;
    byte skipLeftEntry;
    byte skipRightEntry;
    byte skipUpEntry;
    byte skipDownEntry;
    word x;
    word y;
    word dwWidth;
    word dwHeight;
    word background;
    union entryType1Union bg;
    word content;
    word stringFlags;
    union entryType2Union fg;
    undefined field25_0x2a;
    undefined field26_0x2b;
    undefined field27_0x2c;
    undefined field28_0x2d;
    word controlMask;
    undefined field30_0x30;
    undefined field31_0x31;
    undefined field32_0x32;
    undefined field33_0x33;
    undefined field34_0x34;
    undefined field35_0x35;
    undefined field36_0x36;
    undefined field37_0x37;
};

typedef enum Sprites {
    SPR_SMALL_ZERO=8,
    SPR_ADVERT_1_PART_1=113,
    SPR_ADVERT_1_PART_2=114,
    SPR_ADVERT_1_PART_3=115,
    SPR_ADVERT_1_PART_4=116,
    SPR_ADVERT_1_PART_5=117,
    SPR_ADVERT_1_PART_6=118,
    SPR_ADVERT_1_PART_7=119,
    SPR_ADVERT_1_PART_8=120,
    SPR_ADVERT_2_PART_1=121,
    SPR_ADVERT_2_PART_2=122,
    SPR_ADVERT_2_PART_3=123,
    SPR_ADVERT_2_PART_4=124,
    SPR_EDIT_TACTICS_SMALL_PL_WHITE_GUY=124,
    SPR_ADVERT_2_PART_5=125,
    SPR_EDIT_TACTICS_SMALL_PL_RED_GUY=125,
    SPR_ADVERT_2_PART_6=126,
    SPR_EDIT_TACTICS_SMALL_PL_BLACK_GUY=126,
    SPR_ADVERT_2_PART_7=127,
    SPR_ADVERT_2_PART_8=128,
    SPR_ADVERT_3_PART_1=129,
    SPR_ADVERT_3_PART_2=130,
    SPR_ADVERT_3_PART_3=131,
    SPR_ADVERT_3_PART_4=132,
    SPR_ADVERT_3_PART_5=133,
    SPR_ADVERT_3_PART_6=134,
    SPR_ADVERT_3_PART_7=135,
    SPR_ADVERT_3_PART_8=136,
    SPR_RED_CARD_SMALL=139,
    SPR_YELLOW_CARD_SMALL=140,
    SPR_TEAM1_PLAYER_NAMES_START=141,
    SPR_TACTICS_CURSOR_0=149,
    SPR_TACTICS_CURSOR_1=150,
    SPR_TACTICS_CURSOR_2=151,
    SPR_NOT_PLAYING_1_GAME=156,
    SPR_NOT_PLAYING_2_GAMES=157,
    SPR_TEAM2_PLAYER_NAMES_START=157,
    SPR_NOT_PLAYING_3_GAMES=158,
    SPR_NOT_PLAYING_4_GAMES=159,
    SPR_NOT_PLAYING_UNKNOWN=160,
    SPR_NOT_PLAYING_WHOLE_SEASON=161,
    SPR_SMALL_1=162,
    SPR_SMALL_2=163,
    SPR_SMALL_3=164,
    SPR_SMALL_4=165,
    SPR_SMALL_5=166,
    SPR_SMALL_6=167,
    SPR_SMALL_7=168,
    SPR_SMALL_8=169,
    SPR_SMALL_9=170,
    SPR_SMALL_10=171,
    SPR_SMALL_11=172,
    SPR_BIG_0=173,
    SPR_BIG_1=174,
    SPR_BIG_2=175,
    SPR_BIG_3=176,
    SPR_BIG_4=177,
    SPR_BIG_5=178,
    SPR_BIG_6=179,
    SPR_BIG_7=180,
    SPR_BIG_8=181,
    SPR_EMPTY_01=181,
    SPR_BIG_9=182,
    SPR_EMPTY_02=182,
    SPR_RESULT_BIG_0=183,
    SPR_SCROLL_ARROW_UP=183,
    SPR_RESULT_BIG_1=184,
    SPR_SCROLL_ARROW_DOWN=184,
    SPR_RESULT_BIG_2=185,
    SPR_PL_FACE_WHITE_GUY=186,
    SPR_RESULT_BIG_3=186,
    SPR_PL_FACE_RED_GUY=187,
    SPR_RESULT_BIG_4=187,
    SPR_PL_FACE_BLACK_GUY=188,
    SPR_RESULT_BIG_5=188,
    SPR_EMPTY_03=189,
    SPR_RESULT_BIG_6=189,
    SPR_BIG_SHIRT=190,
    SPR_RESULT_BIG_7=190,
    SPR_BIG_SHORTS=191,
    SPR_RESULT_BIG_8=191,
    SPR_BIG_SOCKS=192,
    SPR_RESULT_BIG_9=192,
    SPR_EDIT_TEAMS_PRIMARY_SHIRT=193,
    SPR_TEAM1_NAME=193,
    SPR_EDIT_TEAMS_SHORTS=194,
    SPR_TEAM2_NAME=194,
    SPR_BIG_DASH=195,
    SPR_EDIT_TEAMS_SOCKS=195,
    SPR_EDIT_TEAMS_SECONDARY_SHIRT=196,
    SPR_EDIT_TEAMS_SHORTS_SECONDARY=197,
    SPR_EDIT_TEAMS_SECONDARY_SOCKS=198,
    SPR_PLAIN_SHIRT=199,
    SPR_COLORED_SLEEVES_SHIRT=200,
    SPR_VERTICAL_STRIPES_SHIRT=201,
    SPR_HORIZONTAL_STRIPES_SHIRT=202,
    SPR_CHECK_BIG=206,
    SPR_NOT_CHECK_BIG=207,
    SPR_CHECK_SMALL=208,
    SPR_NOT_CHECK_SMALL=209,
    SPR_LITTLE_PLAYER_VERT_STRIPES=210,
    SPR_LITTLE_PLAYER_NO_STRIPES=211,
    SPR_LITTLE_PLAYER_HOR_STRIPES=212,
    SPR_LITTLE_PLAYER_GOALIE=213,
    SPR_8_MINS=214,
    SPR_LITTLE_PLAYER_GENERIC=214,
    SPR_88_MINS=215,
    SPR_PREMIERE_DIVISION_WINNER=215,
    SPR_118_MINS=216,
    SPR_INVITATION_TOURNAMENT=216,
    SPR_CUP_WINNER=217,
    SPR_TIME_BIG_0=217,
    SPR_TIME_BIG_1=218,
    SPR_UNKNOWN_TROPHY=218,
    SPR_EUROPEAN_CHAMPIONS_CUP=219,
    SPR_TIME_BIG_2=219,
    SPR_CUP_WINNERS_CUP=220,
    SPR_TIME_BIG_3=220,
    SPR_TIME_BIG_4=221,
    SPR_UEFA_CUP=221,
    SPR_TIME_BIG_5=222,
    SPR_WORLD_CUP=222,
    SPR_EUROPEAN_CHAMPIONSHIP=223,
    SPR_TIME_BIG_6=223,
    SPR_TIME_BIG_7=224,
    SPR_PITCH_IN_PLAY_MATCH_MENU=225,
    SPR_TIME_BIG_8=225,
    SPR_TACTICS_PITCH=226,
    SPR_TIME_BIG_9=226,
    SPR_SQUARE_GRID_FOR_RESULT=252,
    SPR_INJURED_PLAYER1_TOP_RIGHT_FRAME_0=411,
    SPR_INJURED_PLAYER1_TOP_RIGHT_FRAME_1=412,
    SPR_INJURED_PLAYER1_TOP_LEFT_FRAME_0=413,
    SPR_INJURED_PLAYER1_TOP_LEFT_FRAME_1=414,
    SPR_INJURED_PLAYER2_TOP_RIGHT_FRAME_0=714,
    SPR_INJURED_PLAYER2_TOP_RIGHT_FRAME_1=715,
    SPR_INJURED_PLAYER2_TOP_LEFT_FRAME_0=716,
    SPR_INJURED_PLAYER2_TOP_LEFT_FRAME_1=717,
    SPR_GOALIE1_CAUGHT_BALL_RIGHT=862,
    SPR_GOALIE1_CAUGHT_BALL_LEFT=864,
    SPR_GOALIE2_CAUGHT_BALL_RIGHT=992,
    SPR_GOALIE2_CAUGHT_BALL_LEFT=994,
    SPR_BALL_SHADOW=1069,
    SPR_CORNER_FLAG_FRAME_0=1070,
    SPR_CORNER_FLAG_FRAME_1=1071,
    SPR_CORNER_FLAG_FRAME_2=1072,
    SPR_CORNER_FLAG_FRAME_3=1073,
    SPR_PLAYER_MARK=1090,
    SPR_SQUARE_GRID=1093,
    SPR_REPLAY_FRAME_00=1095,
    SPR_REPLAY_FRAME_01=1096,
    SPR_REPLAY_FRAME_02=1097,
    SPR_REPLAY_FRAME_03=1098,
    SPR_REPLAY_FRAME_04=1099,
    SPR_REPLAY_FRAME_05=1100,
    SPR_REPLAY_FRAME_06=1101,
    SPR_REPLAY_FRAME_07=1102,
    SPR_REPLAY_FRAME_08=1103,
    SPR_REPLAY_FRAME_09=1104,
    SPR_REPLAY_FRAME_10=1105,
    SPR_REPLAY_FRAME_11=1106,
    SPR_REPLAY_FRAME_12=1107,
    SPR_REPLAY_FRAME_13=1108,
    SPR_REPLAY_FRAME_14=1109,
    SPR_REPLAY_FRAME_15=1110,
    SPR_REPLAY_FRAME_16=1111,
    SPR_REPLAY_FRAME_17=1112,
    SPR_REPLAY_FRAME_18=1113,
    SPR_REPLAY_FRAME_19=1114,
    SPR_REPLAY_FRAME_20=1115,
    SPR_REPLAY_FRAME_21=1116,
    SPR_REPLAY_FRAME_22=1117,
    SPR_REPLAY_FRAME_23=1118,
    SPR_REPLAY_FRAME_24=1119,
    SPR_REPLAY_FRAME_25=1120,
    SPR_REPLAY_FRAME_26=1121,
    SPR_REPLAY_FRAME_27=1122,
    SPR_REPLAY_FRAME_28=1123,
    SPR_REPLAY_FRAME_29=1124,
    SPR_REPLAY_FRAME_30=1125,
    SPR_REPLAY_FRAME_31=1126,
    BIG_S_FRAME_00=1127,
    SPR_SELECT_SUBSTITUTE_ARROW=1170,
    SPR_SUBSTITUTES=1174,
    SPR_FORMATION=1175,
    SPR_RED_CROSS_INJURY=1176,
    SPR_RED_CARD=1177,
    SPR_YELLOW_CARD=1178,
    SPR_WHITE_GUY_FACE=1179,
    SPR_RED_GUY_FACE=1180,
    SPR_BLACK_GUY_FACE=1181,
    SPR_UPPER_GOAL_TOP=1205,
    SPR_LOWER_GOAL_BOTTOM=1206,
    BIG_S_FRAME_01=1242,
    BIG_S_FRAME_02=1243,
    BIG_S_FRAME_03=1244,
    BIG_S_FRAME_04=1245,
    BIG_S_FRAME_05=1246,
    BIG_S_FRAME_06=1247,
    BIG_S_FRAME_07=1248,
    BIG_S_FRAME_08=1249,
    BIG_S_FRAME_09=1250,
    BIG_S_FRAME_10=1251,
    BIG_S_FRAME_11=1252,
    BIG_S_FRAME_12=1253,
    BIG_S_FRAME_13=1254,
    BIG_S_FRAME_14=1255,
    BIG_S_FRAME_15=1256,
    BIG_S_FRAME_16=1257,
    BIG_S_FRAME_17=1258,
    BIG_S_FRAME_18=1259,
    BIG_S_FRAME_19=1260,
    BIG_S_FRAME_20=1261,
    BIG_S_FRAME_21=1262,
    BIG_S_FRAME_22=1263,
    BIG_S_FRAME_23=1264,
    BIG_S_FRAME_24=1265,
    BIG_S_FRAME_25=1266,
    BIG_S_FRAME_26=1267,
    BIG_S_FRAME_27=1268,
    BIG_S_FRAME_28=1269,
    BIG_S_FRAME_29=1270,
    BIG_S_FRAME_30=1271,
    BIG_S_FRAME_31=1272,
    SPR_COACH1_SITTING_1=1296,
    SPR_COACH1_SITTING_2=1297,
    SPR_COACH1_SITTING_3=1298,
    SPR_COACH1_STANDING_1=1299,
    SPR_COACH1_STANDING_2=1300,
    SPR_COACH1_STANDING_3=1301,
    SPR_COACH2_SITTING_1=1303,
    SPR_COACH2_SITTING_2=1304,
    SPR_COACH2_SITTING_3=1305,
    SPR_COACH2_STANDING_1=1306,
    SPR_COACH2_STANDING_2=1307,
    SPR_COACH2_STANDING_3=1308,
    SPR_BENCH_SITTING_GOALIE_WHITE=1310,
    SPR_BENCH_SITTING_GOALIE_GINGER=1311,
    SPR_BENCH_SITTING_GOALIE_BLACK=1312,
    SPR_BENCH_PLAYER_SITTING_WHITE=1313,
    SPR_BENCH_PLAYER_SITTING_GINGER=1314,
    SPR_BENCH_PLAYER_SITTING_BLACK=1315,
    SPR_BENCH_STANDING_GOALIE_WHITE=1316,
    SPR_BENCH_STANDING_GOALIE_GINGER=1317,
    SPR_BENCH_STANDING_GOALIE_BLACK=1318,
    SPR_BENCH_STANDING_PLAYER_WHITE=1319,
    SPR_BENCH_STANDING_PLAYER_GINGER=1320,
    SPR_BENCH_STANDING_PLAYER_BLACK=1321,
    SPR_RESERVE_PLAYERS_SITTING1=1322
} Sprites;

typedef struct TeamTactics TeamTactics, *PTeamTactics;

struct TeamTactics {
    byte tacticsName[9];
    byte playerPos[10][35];
    byte someTable[10];
    byte ballOutOfPlayTactics;
};

typedef struct Position Position, *PPosition;

struct Position {
    word x;
    word y;
};

typedef struct PlayerInfoHeader PlayerInfoHeader, *PPlayerInfoHeader;

struct PlayerInfoHeader {
    byte header[42];
    byte substituted;
    byte playerIndex;
    byte goalsScored;
    byte shirtNumber;
    byte position;
    byte face;
    byte isInjured;
    byte field_31;
    byte fasterTackle;
    byte previousCards;
    byte cards;
    byte disallowSubs;
    byte shortName[15];
    byte passing;
    byte shooting;
    byte heading;
    byte tackling;
    byte ballControl;
    byte speed;
    byte finishing;
    byte goalieSkill;
    byte injuriesBitfield;
    byte halfPlayed;
    byte face2;
    byte fullName[23];
};

typedef struct PlayerFile PlayerFile, *PPlayerFile;

struct PlayerFile {
    byte nationality;
    byte field_1;
    byte shirtNumber;
    byte playerName[22];
    byte field_19;
    byte positionAndFace;
    byte cardsInjuries;
    byte passing;
    byte shootingHeading;
    byte tacklingBallControl;
    byte speedFinishing;
    byte price;
    byte field_21;
    byte field_22;
    byte field_23;
    byte field_24;
    byte someFlag;
};

typedef struct SpriteGraphics SpriteGraphics, *PSpriteGraphics;

struct SpriteGraphics {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    byte unknown[6];
    word pixWidth;
    word nlines;
    word wquads;
    word centerX;
    word centerY;
    byte unkFlags;
    byte nlinesDiv4;
    word ordinal;
};

typedef enum ClubMessages {
    CLUB_UNWILLING_TO_PURCHASE_PLAYERS=1,
    TOO_LARGE_SQUAD=2,
    NO_MORE_TIME_TO_NEGOTIATE=3,
    NO_MORE_PLAYER_SALES=4,
    BANK_BALANCE_OVERDRAFT=5,
    OVERDRAFT_LAST_WARNING=6,
    CLEAR_OVERDRAFT_IMMEDIEATELY=7,
    YOURE_SACKED=8,
    IMPROVE_LEAGUE_POSITION=9,
    IMPROVE_LEAGUE_POSITION_SOON=10,
    THREE_MORE_MATCHES_TO_IMPROVE_TEAM=11,
    YOURE_SACKED_2=12,
    WELL_DONE_EXCELLENT_JOB=13,
    GOOD_SEASON_ALL_PLEASED=14,
    UP_AND_DOWN_SEASON=15,
    NOT_A_VERY_GOOD_SEASON=16,
    DISAPPOINTING_SEASON=17,
    THANKS_FOR_ALL_HELP=18,
    WELCOME_TO_OUR_CLUB=19,
    LAST_SEASON_BEFORE_RETIREMENT=20,
    WISH_YOU_EVERY_SUCCESS=21,
    ENJOY_LAST_SEASON=22,
    ENJOY_YOUR_RETIREMENT=23,
    TRIAL_PLAYER_LEFT_CLUB=24,
    RESERVE_PLAYER_LEFT_CLUB=25,
    PLAYER_JOINED_CLUB_ON_TRIAL=26,
    EXCELLENT_JOB_THIS_SEASON=27,
    GOOD_SEASON=28,
    UP_AND_DOWN_SEASON2=29,
    NOT_A_VERY_GOOD_SEASON2=30,
    VERY_DISSAPOINTING_SEASON=31,
    THANKS_FOR_ALL_YOUR_HELP=32,
    WELCOME_WE_LOOK_FORWARD=33,
    WELCOME_ENJOY_YOUR_LAST_SEASON=34,
    WISH_YOU_SUCESS=35,
    ENJOY_LAST_SEASON_BEFORE=36,
    WISH_YOU_BEST_AT_THE_END=37,
    WE_DIDNT_RENEW_YOUR_CONTRACT=38
} ClubMessages;

typedef struct TeamGame TeamGame, *PTeamGame;

struct TeamGame {
    word prShirtType;
    word prShirtCol;
    word prStripesCol;
    word prShortsCol;
    word prSocksCol;
    word secShirtType;
    word secShirtCol;
    word secStripesCol;
    word secShortsCol;
    word secSocksCol;
    word markedPlayer;
    byte teamName[17];
    byte unk1;
    byte numOwnGoals;
    byte unk3;
};

typedef struct GoalInfo GoalInfo, *PGoalInfo;

struct GoalInfo {
    word goalType;
    dword time;
};

typedef enum MenuEntryColors {
    PINK_TO_BROWN_0=0,
    PINK_TO_BROWN_1=1,
    PINK_TO_BROWN_2=2,
    BLUE_TO_BLACK_3=3,
    ORANGE_TO_BROWN_4=4,
    ORANGE_TO_BROWN_5=5,
    ORANGE_TO_BROWN_6=6,
    PINK_TO_BROWN_7=7,
    BLUE_TO_BLACK_8=8,
    PINK_TO_BROWN_9=9,
    RED_10=10,
    BLUE_TO_PURPLE_11=11,
    ORANGE_TO_BROWN_12=12,
    BRIGHT_BLUE_TO_BLUE_13=13,
    YELLOW_GREEN_BLACK_14=14,
    YELLOW_GREEN_BLACK_15=15
} MenuEntryColors;

typedef struct TeamGeneralInfo TeamGeneralInfo, *PTeamGeneralInfo;

typedef struct TeamStatisticsData TeamStatisticsData, *PTeamStatisticsData;

typedef struct Sprite Sprite, *PSprite;

typedef struct GoalieSkill GoalieSkill, *PGoalieSkill;

typedef struct AnimTable AnimTable, *PAnimTable;

struct AnimTable {
    word frameDelay;
    short *animFrames[32];
};

struct Sprite {
    word teamNumber;
    word playerOrdinal;
    word frameOffset;
    struct AnimTable *animationTable;
    word startingDirection;
    byte playerState;
    byte playerDownTimer;
    word field_E;
    word field_10;
    short *frameIndicesTable;
    word frameIndex;
    word frameDelay;
    word cycleFramesTimer;
    word frameSwitchCounter;
    union FixedPoint_ x;
    union FixedPoint_ y;
    union FixedPoint_ z;
    word direction;
    word speed;
    union FixedPoint_ deltaX;
    union FixedPoint_ deltaY;
    union FixedPoint_ deltaZ;
    word destX;
    word destY;
    byte field_3E[6];
    word visible;
    word imageIndex;
    word saveSprite;
    dword ballDistance;
    word field_4E;
    word field_50;
    word fullDirection;
    word onScreen;
    word field_56;
    word field_58;
    word field_5A;
    word playerDirection;
    word isMoving;
    word tackleState;
    word heading;
    word destReachedState;
    word cards;
    word injuryLevel;
    word tacklingTimer;
    word sentAway;
};

struct TeamGeneralInfo {
    struct TeamGeneralInfo *opponentsTeam;
    word playerNumber;
    word playerCoachNumber;
    word isPlCoach;
    struct TeamGame *inGameTeamPtr;
    struct TeamStatisticsData *teamStatsPtr;
    word teamNumber;
    struct Sprite **spritesTable;
    struct GoalieSkill *shotChanceTable;
    word tactics;
    word updatePlayerIndex;
    struct Sprite *controlledPlayer;
    struct Sprite *passToPlayerPtr;
    word playerHasBall;
    word allowedDirections;
    word currentAllowedDirection;
    word direction;
    byte quickFire;
    byte normalFire;
    byte firePressed;
    byte fireThisFrame;
    word headerOrTackle;
    word fireCounter;
    word controlledPlDirection;
    word shooting;
    byte field_3C;
    byte plVeryCloseToBall;
    byte plCloseToBall;
    byte plNotFarFromBall;
    byte ballLessEqual4;
    byte ball4To8;
    byte ball8To12;
    byte ball12To17;
    byte ballAbove17;
    byte prevPlVeryCloseToBall;
    word field_46;
    struct Sprite *lastHeadingTacklingPlayer;
    word goalkeeperSavedCommentTimer;
    word field_4E;
    word goalkeeperDivingRight;
    word goalkeeperDivingLeft;
    word ballOutOfPlayOrKeeper;
    word goaliePlayingOrOut;
    word passingBall;
    word passingToPlayer;
    word playerSwitchTimer;
    word ballInPlay;
    word ballOutOfPlay;
    word ballX;
    word ballY;
    word passKickTimer;
    struct Sprite *passingKickingPlayer;
    word unkBallTimer;
    word ballCanBeControlled;
    word ballControllingPlayerDirection;
    word field_72;
    word field_74;
    word spinTimer;
    word leftSpin;
    word rightSpin;
    word longPass;
    word longSpinPass;
    word passInProgress;
    word AI_timer;
    word field_84;
    word AI_afterTouchStrength;
    word AI_ballSpinDirection;
    word wonTheBallTimer;
    word goalkeeperPlaying;
    word resetControls;
};

struct GoalieSkill {
    word field_0;
    word field_2;
    word field_4;
    word speed_unk;
    word speed_unk2;
    short index_dseg_11061B[16];
    word field_2A;
    word field_2C;
    word field_2E;
    word field_30;
    word field_32;
    word field_34;
    word field_36;
    word field_38;
    word field_3A;
};

struct TeamStatisticsData {
    word ballPossession;
    word cornersWon;
    word foulsConceded;
    word bookings;
    word sendingsOff;
    word goalAttempts;
    word onTarget;
};

typedef struct PlayerPositions PlayerPositions, *PPlayerPositions;

struct PlayerPositions {
    byte positions[35];
};

typedef struct ScorerInfo ScorerInfo, *PScorerInfo;

struct ScorerInfo {
    word shirtNum;
    word numSpritesTaken;
    word numGoals;
    struct GoalInfo goals[10];
};

typedef enum TacticsEnum {
    TACTIC_DEFAULT=0,
    TACTIC_5_4_1=1,
    TACTIC_4_5_1=2,
    TACTIC_5_3_2=3,
    TACTIC_3_5_2=4,
    TACTIC_4_3_3=5,
    TACTIC_4_2_4=6,
    TACTIC_3_4_3=7,
    TACTIC_SWEEP=8,
    TACTIC_5_2_3=9,
    TACTIC_ATTACK=10,
    TACTIC_DEFEND=11,
    TACTIC_USER_A=12,
    TACTIC_USER_B=13,
    TACTIC_USER_C=14,
    TACTIC_USER_D=15,
    TACTIC_USER_E=16,
    TACTIC_USER_F=17,
    TACTIC_IMPORTED=1000
} TacticsEnum;

typedef enum CountryNumbers {
    CN_ALBANIA=0,
    CN_AUSTRIA=1,
    CN_BELGIUM=2,
    CN_BULGARIA=3,
    CN_CROATIA=4,
    CN_CYPRUS=5,
    CN_CZECH_REPUBLIC=6,
    CN_DENMARK=7,
    CN_ENGLAND=8,
    CN_ESTONIA=10,
    CN_FAROE_ISLANDS=11,
    CN_FINLAND=12,
    CN_FRANCE=13,
    CN_GERMANY=14,
    CN_GREECE=15,
    CN_HUNGARY=16,
    CN_ICELAND=17,
    CN_REPUBLIC_IRELAND=18,
    CN_ISRAEL=19,
    CN_ITALY=20,
    CN_LATVIA=21,
    CN_LITHUANIA=22,
    CN_LUXEMBOURG=23,
    CN_MALTA=24,
    CN_HOLLAND=25,
    CN_NORTHERN_IRELAND=26,
    CN_NORWAY=27,
    CN_POLAND=28,
    CN_PORTUGAL=29,
    CN_ROMANIA=30,
    CN_RUSSIA=31,
    CN_SAN_MARINO=32,
    CN_SCOTLAND=33,
    CN_SLOVENIA=34,
    CN_SPAIN=35,
    CN_SWEDEN=36,
    CN_SWITZERLAND=37,
    CN_TURKEY=38,
    CN_UKRAINE=39,
    CN_WALES=40,
    CN_YUGOSLAVIA=41,
    CN_ALGERIA=42,
    CN_ARGENTINA=43,
    CN_AUSTRALIA=44,
    CN_BOLIVIA=45,
    CN_BRAZIL=46,
    CN_CHILE=48,
    CN_COLOMBIA=49,
    CN_ECUADOR=50,
    CN_EL_SALVADOR=51,
    CN_JAPAN=55,
    CN_MEXICO=60,
    CN_NEW_ZEALAND=62,
    CN_PARAGUAY=64,
    CN_PERU=65,
    CN_SURINAM=66,
    CN_TAIWAN=67,
    CN_SOUTH_AFRICA=69,
    CN_URUGUAY=71,
    CN_USA=73,
    CN_INDIA=75,
    CN_BELARUS=76,
    CN_VENEZUELA=77,
    CN_SLOVAKIA=78,
    CN_GHANA=79,
    CN_EUROPE=80,
    CN_AFRICA=81,
    CN_SOUTH_AMERICA=82,
    CN_NORTH_AMERICA=83,
    CN_ASIA=84,
    CN_OCEANIA=85
} CountryNumbers;

typedef enum MenuEntryType1 {
    NO_BACKGROUND=0,
    ENTRY_FUNC1=1,
    ENTRY_FRAME_AND_BACK_COLOR=2,
    ENTRY_SPRITE1=3
} MenuEntryType1;

typedef enum MenuEntryType2 {
    NO_FOREGROUND=0,
    ENTRY_FUNC2=1,
    ENTRY_STRING=2,
    ENTRY_SPRITE2=3,
    ENTRY_STRING_TABLE=4,
    ENTRY_MULTI_LINE_TEXT=5,
    ENTRY_NUMBER=6,
    ENTRY_SPRITE_COPY=7
} MenuEntryType2;

typedef enum Cards {
    CARD_YELLOW=1,
    CARD_RED=2,
    CARD_SECOND_YELLOW=3
} Cards;

typedef struct SeasonInformations SeasonInformations, *PSeasonInformations;

struct SeasonInformations {
    word clubNo;
    byte clubName[18];
    word trophyFlags;
    dword leagueStringOffset;
    dword strOffset1;
    dword strOffset2;
    dword field_22;
    word bestScorerNumGoals;
    byte bestScorerName[46];
    byte field_56;
    byte finalPosition;
    byte field_58;
    byte field_59;
    word totalGoalsScored;
    word totalGoalsTaken;
    byte totalGames;
    byte totalWins;
    byte totalDrawn;
    byte totalLost;
    byte friendlyWins;
    byte friendlyDraws;
    byte friendlyLost;
    byte tourWins;
    byte tourDraws;
    byte tourLost;
    byte tournamentStatus;
    byte managerStatus;
};

typedef enum PitchTypeEnum {
    FROZEN=0,
    MUDDY=1,
    WET=2,
    SOFT=3,
    NORMAL=4,
    DRY=5,
    HARD=6,
    SEASONAL=65534,
    RANDOM=65535
} PitchTypeEnum;

typedef enum RefereeState {
    REF_OFF_SCREEN=0,
    REF_INCOMING=1,
    REF_WAITING_PLAYER=2,
    REF_ABOUT_TO_GIVE_CARD=3,
    REF_BOOKING=4,
    REF_LEAVING=5
} RefereeState;

typedef enum PlayerStates {
    PL_NORMAL=0,
    PL_TACKLING=1,
    PL_TACKLED=3,
    PL_GOALIE_CATCHING_BALL=4,
    PL_THROW_IN=5,
    PL_GOALIE_DIVING_HIGH=6,
    PL_GOALIE_DIVING_LOW=7,
    PL_STATIC_HEADING=8,
    PL_JUMP_HEADING=9,
    PL_DOWN=10,
    PL_GOALIE_CLAIMED=11,
    PL_BOOKED=12,
    PL_ROLLING_INJURED=13,
    PL_SAD=14,
    PL_HAPPY=15
} PlayerStates;

typedef struct DIY_Competition DIY_Competition, *PDIY_Competition;

struct DIY_Competition {
    word competitionType;
    byte field_2[48];
    word numTeams;
    word pitchTypeOrSeason;
    word pitchType;
    byte startMonth;
    byte endMonth;
    byte field_39[36];
    word playEachTeam;
};

typedef struct Menu Menu, *PMenu;

struct Menu {
    undefined field0_0x0;
    undefined field1_0x1;
    undefined field2_0x2;
    undefined field3_0x3;
    undefined field4_0x4;
    undefined field5_0x5;
    undefined field6_0x6;
    undefined field7_0x7;
    undefined field8_0x8;
    undefined field9_0x9;
    undefined field10_0xa;
    undefined field11_0xb;
    struct MenuEntry *selectedEntry;
    word numEntries;
    struct MenuEntry *menuEndPtr;
};

typedef struct PlayerInfo PlayerInfo, *PPlayerInfo;

struct PlayerInfo {
    byte skip;
    byte playerIndex;
    byte goalsScored;
    byte shirtNumber;
    byte position;
    byte face;
    byte isInjured;
    byte field_7;
    byte field_8;
    byte previousCards;
    byte numYellowCards;
    byte field_B;
    byte shortName[15];
    byte passing;
    byte shooting;
    byte heading;
    byte tackling;
    byte ballControl;
    byte speed;
    byte finishing;
    byte goalieSkill;
    byte injuriesBitfield;
    byte halfPlayed;
    byte face2;
    byte fullName[23];
};

typedef enum GoalTypes {
    GT_REGULAR=0,
    GT_PENALTY=1,
    GT_OWN_GOAL=2
} GoalTypes;

typedef enum GameTypes {
    GAME_TYPE_NO_GAME=0,
    GAME_TYPE_DIY_COMPETITION=1,
    GAME_TYPE_PRESET_COMPETITION=2,
    GAME_TYPE_SEASON=3,
    GAME_TYPE_CAREER=4
} GameTypes;

typedef struct DIYLeague DIYLeague, *PDIYLeague;

struct DIYLeague {
    byte field_0[56];
    byte startingMonth;
    byte endingMonth;
};

typedef enum StringFlags {
    STR_COLOR_MASK=15,
    STR_FLAGS_MASK=240,
    STR_ALIGN_RIGHT=16384,
    STR_ALIGN_LEFT=32768
} StringFlags;

typedef struct PoolPlayer PoolPlayer, *PPoolPlayer;

struct PoolPlayer {
    word teamId;
    byte playerOrdinal;
    byte teamName[17];
    struct PlayerFile player;
};

typedef enum Seasons {
    SEASON_JAN=0,
    SEASON_FEB=1,
    SEASON_MAR=2,
    SEASON_APR=3,
    SEASON_MAY=4,
    SEASON_JUN=5,
    SEASON_JUL=6,
    SEASON_AUG=7,
    SEASON_SEP=8,
    SEASON_OCT=9,
    SEASON_NOV=10,
    SEASON_DEC=11
} Seasons;

typedef struct MarketPlayer MarketPlayer, *PMarketPlayer;

struct MarketPlayer {
    word teamId;
    byte playerOrdinal;
    byte padding;
    struct PlayerFile player;
};

typedef enum Positions {
    POS_GOALKEEPER=0,
    POS_RIGHT_BACK=1,
    POS_LEFT_BACK=2,
    POS_DEFENDER=3,
    POS_RIGHT_WING=4,
    POS_LEFT_WING=5,
    POS_MIDFIELDER=6,
    POS_ATTACKER=7
} Positions;

typedef enum DiyCompetitionTypes {
    DIY_LEAGUE=0,
    DIY_CUP=1,
    DIY_TOURNAMENT=2
} DiyCompetitionTypes;

typedef enum TeamTypes {
    NATIONAL_TEAMS=0,
    CLUB_TEAMS=1,
    ORIGINAL_CUSTOM_TEAMS=2,
    EDITED_CUSTOM_TEAMS=3,
    NONE=4294967295
} TeamTypes;

typedef enum MenuBackgroundColors {
    COLOR_ORANGE=6,
    COLOR_DARK_BLUE=8,
    COLOR_PINK_GRAYISH=9,
    COLOR_RED=10,
    COLOR_PURPLISH=11,
    COLOR_LIGHT_BLUE=13,
    COLOR_GREEN=14,
    COLOR_YELLOW=15
} MenuBackgroundColors;

typedef struct TeamFile TeamFile, *PTeamFile;

struct TeamFile {
    byte countryNumber;
    byte teamOrdinal;
    word globalTeamNumber;
    byte teamControls;
    byte teamName[17];
    byte writesZeroHere;
    byte andWith0xFE;
    byte tactics;
    byte league;
    byte prShirtType;
    byte prStripesColor;
    byte prBasicColor;
    byte prShortsColor;
    byte prSocksColor;
    byte secShirtTpe;
    byte secStripesColor;
    byte secBasicColor;
    byte secShortsColor;
    byte secSocksColor;
    byte coachName[23];
    byte someFlag;
    byte playerNumbers[16];
    struct PlayerFile players[16];
};

typedef enum TeamControls {
    TEAM_NOT_SELECTED=0,
    TEAM_COMPUTER=1,
    TEAM_PLAYER_COACH=2,
    TEAM_COACH=3
} TeamControls;

typedef enum GameState {
    ST_PLAYERS_TO_INITIAL_POSITIONS=0,
    ST_GOAL_OUT_LEFT=1,
    ST_GOAL_OUT_RIGHT=2,
    ST_KEEPER_HOLDS_BALL=3,
    ST_CORNER_LEFT=4,
    ST_CORNER_RIGHT=5,
    ST_FREE_KICK_LEFT1=6,
    ST_FREE_KICK_LEFT2=7,
    ST_FREE_KICK_LEFT3=8,
    ST_FREE_KICK_CENTER=9,
    ST_FREE_KICK_RIGHT1=10,
    ST_FREE_KICK_RIGHT2=11,
    ST_FREE_KICK_RIGHT3=12,
    ST_FOUL=13,
    ST_PENALTY=14,
    ST_THROW_IN_FORWARD_RIGHT=15,
    ST_THROW_IN_CENTER_RIGHT=16,
    ST_THROW_IN_BACK_RIGHT=17,
    ST_THROW_IN_FORWARD_LEFT=18,
    ST_THROW_IN_CENTER_LEFT=19,
    ST_THROW_IN_BACK_LEFT=20,
    ST_STARTING_GAME=21,
    ST_CAMERA_GOING_TO_SHOWERS=22,
    ST_GOING_TO_HALFTIME=23,
    ST_PLAYERS_GOING_TO_SHOWER=24,
    ST_RESULT_ON_HALFTIME=25,
    ST_RESULT_AFTER_THE_GAME=26,
    ST_FIRST_EXTRA_STARTING=27,
    ST_FIRST_EXTRA_ENDED=28,
    ST_FIRST_HALF_ENDED=29,
    ST_GAME_ENDED=30,
    ST_PENALTIES=31,
    ST_GAME_IN_PROGRESS=100,
    ST_STOPPED=101,
    ST_WAITING_ON_PLAYER=102
} GameState;
