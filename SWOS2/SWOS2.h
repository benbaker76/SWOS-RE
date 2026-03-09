#define FRONTBUFFER_SIZE_TOTAL_BYTES 0xbbb0
#define DMACON_BLT_OFF 0x400
#define DMACONR_BLTBUSY_BIT 0x6
#define COPPERLIST_SIZE_BYTES_MINUS_ONE 0x13f
#define PITCH_DEST_MOD_ALIGNED 0x86
#define PITCH_DEST_MOD_UNALIGNED 0x84
#define ROW_STRIDE_BYTES 0xb0
#define NUM_PLANES_MINUS1 0x3
#define PLANE_STRIDE 0x2c
#define SCREEN_HEIGHT 0x110
#define _INTENA 0x9a
#define _INTREQ 0x9c
#define _DMACON 0x96
#define BLTAFWM 0x44
#define BLTALWM 0x46
#define BLTCON1 0x42
#define BLTCON0_USEA_USED_LF_F0 0x9f0
#define BLTCON0 0x40
#define BLTAPT 0x50
#define BLTDPT 0x54
#define BLTAMOD 0x64
#define BLTDMOD 0x66
#define BLTSIZE 0x58
#define PITCHFILE_MAX_SIZE 0xb220
#define SCROLL_RIGHT_EDGE_X 0x14f
#define TILE_SHIFT_X 0x4
#define PITCH_PTR_ROW_BYTES 0xa8
#define BLTDMOD_PLANE_STEP 0x2a
#define TILE_MASK 0xf
#define TILE_HEIGHT 0x10
#define NUM_PLANES_SHIFT_PLUS1 0x3
#define BLTSIZE_TILE_COL 0x1001
#define PLANE_STRIDE_TIMES2 0x58
#define NUM_PLANES 0x4
#define SRC_SCANLINE_BYTES 0x8
#define TILE_SIZE 0x80
#define FRONTBUFFER_SIZE_VISIBLE_BYTES 0xbb00
#define PLANE_STRIDE_DIV2 0x16
#define FB_COPY_WORDS_MINUS1 0x5dd7
#define IMAGE_ROW_STRIDE_BYTES 0xa0
#define BITPLANE_ROW_BYTES 0x28
#define NUM_PLANES_MINUS2 0x2
#define BLTCON0_USEA_LF_FC 0x8fc
#define BLTCON0_USED_LF_00 0x100
#define BLTCON0_USEA_USED_LF_FC 0x9fc
#define BLTCON0_USED_LF_FF 0x1ff
#define BLTBDAT 0x72
#define FB_BLT_MOD_AFTER_1_WORD 0xae
#define BLTCON0_USEA_USEB_USED_LF_FC 0xdfc
#define BLTBPT 0x4c
#define BLTBMOD 0x62
#define BLTSIZE_OVERLAY_PANEL 0x1116
#define BLTCON0_USED_LF_F0 0x1f0
#define BLTADAT 0x74
#define TILE_STRIDE 0xe
#define BLTCON0_BASE_LINKED 0xfca
#define BLTCON0_BASE_SINGLE 0x7ca
#define NUM_PLANES_SHIFT 0x2
#define BLTCPT 0x48
#define BLTCMOD 0x60
#define SCREEN_WIDTH 0x150
#define ASSET_OP_INIT_CONTEXT 0x0
#define ASSET_OP_INIT_SOURCE0 0x2
#define FPS_50HZ 0x31
#define ASSET_OP_LOAD_FILE 0x4
#define ASSET_OP_5_THEN_MAYBE_6 0xc
#define ASSET_OP_RESOLVE_ASSET_LIST 0x8
#define ASSET_OP_SELECT_AND_OPEN 0xe
#define ST_PENALTY 0xe
#define AUD0VOL 0xa8
#define AUD1VOL 0xb8
#define AUD2VOL 0xc8
#define AUD3VOL 0xd8
#define PL_NORMAL 0x0
#define ST_GAME_IN_PROGRESS 0x64
#define ST_CORNER_LEFT 0x4
#define ST_CORNER_RIGHT 0x5
#define ST_THROW_IN_FORWARD_RIGHT 0xf
#define ST_THROW_IN_BACK_LEFT 0x14
#define ST_STARTING_GAME 0x15
#define ST_GAME_ENDED 0x1e
#define ST_CAMERA_GOING_TO_SHOWERS 0x16
#define ST_FIRST_HALF_ENDED 0x1d
#define ST_GOING_TO_HALFTIME 0x17
#define ST_PLAYERS_GOING_TO_SHOWER 0x18
#define ST_RESULT_AFTER_THE_GAME 0x1a
#define SPR_BALL_SHADOW 0x42d
#define ST_KEEPER_HOLDS_BALL 0x3
#define ST_GOAL_OUT_LEFT 0x1
#define ST_GOAL_OUT_RIGHT 0x2
#define REF_INCOMING 0x1
#define REF_LEAVING 0x5
#define REF_ABOUT_TO_GIVE_CARD 0x3
#define REF_WAITING_PLAYER 0x2
#define REF_BOOKING 0x4
#define CARD_RED 0x2
#define CARD_SECOND_YELLOW 0x3
#define SPR_ADVERT_1_PART_1 0x71
#define SPR_ADVERT_3_PART_1 0x81
#define SPR_ADVERT_2_PART_1 0x79
#define SPR_CORNER_FLAG_FRAME_0 0x42e
#define BIG_S_FRAME_00 0x467
#define SPR_TEAM1_PLAYER_NAMES_START 0x8d
#define SPR_BIG_DASH 0xc3
#define SPR_BIG_0 0xad
#define SPR_RESULT_BIG_0 0xb7
#define SPR_TEAM1_NAME 0xc1
#define SPR_TEAM2_NAME 0xc2
#define PL_BOOKED 0xc
#define CARD_YELLOW 0x1
#define SPR_CORNER_FLAG_FRAME_3 0x431
#define SPR_YELLOW_CARD 0x49a
#define SPR_RED_CARD 0x499
#define SPR_TEAM2_PLAYER_NAMES_START 0x9d
#define SPR_8_MINS 0xd6
#define SPR_INVITATION_TOURNAMENT 0xd8
#define SPR_LITTLE_PLAYER_GENERIC 0xd6
#define SPR_PREMIERE_DIVISION_WINNER 0xd7
#define SPR_CUP_WINNER 0xd9
#define ST_RESULT_ON_HALFTIME 0x19
#define SPR_SMALL_ZERO 0x8
#define SPR_SCROLL_ARROW_UP 0xb7
#define SPR_REPLAY_FRAME_00 0x447
#define GT_OWN_GOAL 0x2
#define GT_PENALTY 0x1
#define PL_THROW_IN 0x5
#define POS_DEFENDER 0x3
#define POS_RIGHT_BACK 0x1
#define POS_LEFT_BACK 0x2
#define POS_MIDFIELDER 0x6
#define POS_RIGHT_WING 0x4
#define POS_LEFT_WING 0x5
#define SPR_SELECT_SUBSTITUTE_ARROW 0x492
#define SPR_SUBSTITUTES 0x496
#define SPR_RED_CROSS_INJURY 0x498
#define SPR_RED_CARD_SMALL 0x8b
#define SPR_YELLOW_CARD_SMALL 0x8c
#define SPR_FORMATION 0x497
#define SPR_SQUARE_GRID 0x445
#define TS_GOOD_TACKLE 0x2
#define SPRITE_MAX_Y_DRAW 0x101
#define PLANE_STRIDE_MINUS2 0x2a
#define SPRITE_BLTSIZE_W1 0xf01
#define PLANE_STRIDE_MINUS4 0x28
#define SPRITE_BLTSIZE_W2 0xf02
#define PL_TACKLED 0x3
#define ST_PLAYERS_TO_INITIAL_POSITIONS 0x0
#define PL_TACKLING 0x1
#define PL_JUMP_HEADING 0x9
#define PL_STATIC_HEADING 0x8
#define PL_ROLLING_INJURED 0xd
#define ST_PENALTIES 0x1f
#define ST_WAITING_ON_PLAYER 0x66
#define ST_STOPPED 0x65
#define ST_FIRST_EXTRA_STARTING 0x1b
#define ST_FIRST_EXTRA_ENDED 0x1c
#define ST_FOUL 0xd
#define ST_FREE_KICK_LEFT1 0x6
#define ST_FREE_KICK_RIGHT3 0xc
#define PL_GOALIE_CATCHING_BALL 0x4
#define PL_GOALIE_DIVING_LOW 0x7
#define PL_GOALIE_DIVING_HIGH 0x6
#define ST_FREE_KICK_LEFT2 0x7
#define ST_FREE_KICK_LEFT3 0x8
#define ST_FREE_KICK_CENTER 0x9
#define ST_FREE_KICK_RIGHT1 0xa
#define ST_FREE_KICK_RIGHT2 0xb
#define PL_HAPPY 0xf
#define PL_SAD 0xe
#define ST_THROW_IN_CENTER_RIGHT 0x10
#define ST_THROW_IN_BACK_RIGHT 0x11
#define ST_THROW_IN_FORWARD_LEFT 0x12
#define ST_THROW_IN_CENTER_LEFT 0x13
#define PL_DOWN 0xa
#define PL_GOALIE_CLAIMED 0xb
#define SPR_GOALIE1_CAUGHT_BALL_RIGHT 0x35e
#define SPR_GOALIE1_CAUGHT_BALL_LEFT 0x360
#define SPR_GOALIE2_CAUGHT_BALL_RIGHT 0x3e0
#define SPR_GOALIE2_CAUGHT_BALL_LEFT 0x3e2
#define ENTRY_STRING 0x2
#define ENTRY_FUNC1 0x1
#define ENTRY_FRAME_AND_BACK_COLOR 0x2
#define ENTRY_SPRITE1 0x3
#define ENTRY_FUNC2 0x1
#define ENTRY_STRING_TABLE 0x4
#define ENTRY_MULTI_LINE_TEXT 0x5
#define ENTRY_SPRITE2 0x3
#define ENTRY_NUMBER 0x6
#define ENTRY_SPRITE_COPY 0x7
#define NO_BACKGROUND 0x0
#define NO_FOREGROUND 0x0
#define GAME_TYPE_NO_GAME 0x0
#define CN_ENGLAND 0x8
#define YELLOW_GREEN_BLACK_15 0xf
#define STR_FLAGS_MASK 0xf0
#define STR_COLOR_MASK 0xf
#define TEAM_COMPUTER 0x1
#define WE_DIDNT_RENEW_YOUR_CONTRACT 0x26
#define YOURE_SACKED_2 0xc
#define THREE_MORE_MATCHES_TO_IMPROVE_TEAM 0xb
#define IMPROVE_LEAGUE_POSITION 0x9
#define IMPROVE_LEAGUE_POSITION_SOON 0xa
#define YOURE_SACKED 0x8
#define CLEAR_OVERDRAFT_IMMEDIEATELY 0x7
#define BANK_BALANCE_OVERDRAFT 0x5
#define OVERDRAFT_LAST_WARNING 0x6
#define GAME_TYPE_CAREER 0x4
#define CN_EUROPE 0x50
#define CN_OCEANIA 0x55
#define TEAM_PLAYER_COACH 0x2
#define SHIRT_ORDINARY 0x0
#define SHIRT_COLORED_SLEEVES 0x1
#define SHIRT_VERTICAL_STRIPES 0x2
#define SHIRT_HORIZONTAL_STRIPES 0x3
#define GAME_TYPE_DIY_COMPETITION 0x1
#define GAME_TYPE_PRESET_COMPETITION 0x2
#define GAME_TYPE_SEASON 0x3
#define TEAM_COACH 0x3
#define DIY_CUP 0x1
#define DIY_TOURNAMENT 0x2
#define DIY_LEAGUE 0x0
#define EXCELLENT_JOB_THIS_SEASON 0x1b
#define GOOD_SEASON 0x1c
#define UP_AND_DOWN_SEASON2 0x1d
#define NOT_A_VERY_GOOD_SEASON2 0x1e
#define VERY_DISSAPOINTING_SEASON 0x1f
#define THANKS_FOR_ALL_YOUR_HELP 0x20
#define THANKS_FOR_ALL_HELP 0x12
#define WELCOME_WE_LOOK_FORWARD 0x21
#define WELCOME_TO_OUR_CLUB 0x13
#define WELCOME_ENJOY_YOUR_LAST_SEASON 0x22
#define LAST_SEASON_BEFORE_RETIREMENT 0x14
#define WISH_YOU_SUCESS 0x23
#define WISH_YOU_EVERY_SUCCESS 0x15
#define ENJOY_LAST_SEASON_BEFORE 0x24
#define ENJOY_LAST_SEASON 0x16
#define WISH_YOU_BEST_AT_THE_END 0x25
#define ENJOY_YOUR_RETIREMENT 0x17
#define PLAYER_JOINED_CLUB_ON_TRIAL 0x1a
#define TRIAL_PLAYER_LEFT_CLUB 0x18
#define RESERVE_PLAYER_LEFT_CLUB 0x19
#define RED_10 0xa
#define PINK_TO_BROWN_9 0x9
#define TEAM_NOT_SELECTED 0x0
#define BLUE_TO_PURPLE_11 0xb
#define BRIGHT_BLUE_TO_BLUE_13 0xd
#define COLOR_PINK_GRAYISH 0x9
#define COLOR_PURPLISH 0xb
#define COLOR_LIGHT_BLUE 0xd
#define COLOR_RED 0xa
#define PINK_TO_BROWN_0 0x0
#define COLOR_ORANGE 0x6
#define PINK_TO_BROWN_7 0x7
#define ORANGE_TO_BROWN_12 0xc
#define SEASON_SEP 0x8
#define SPR_PL_FACE_WHITE_GUY 0xba
#define YELLOW_GREEN_BLACK_14 0xe
#define SPR_NOT_CHECK_BIG 0xcf
#define SPR_CHECK_BIG 0xce
#define NO_MORE_TIME_TO_NEGOTIATE 0x3
#define ORANGE_TO_BROWN_4 0x4
#define BLUE_TO_BLACK_8 0x8
#define EDITED_CUSTOM_TEAMS 0x3
#define ORIGINAL_CUSTOM_TEAMS 0x2
#define CN_AFRICA 0x51
#define CN_SOUTH_AMERICA 0x52
#define CN_NORTH_AMERICA 0x53
#define CN_ASIA 0x54
#define CLUB_TEAMS 0x1
#define ASSET_OP_OPEN_ANY_SOURCE 0x10
#define ASSET_OP_DO_CRITICAL 0xa
#define ASSET_OP_INIT_SOURCE2 0x6
#define CLUB_UNWILLING_TO_PURCHASE_PLAYERS 0x1
#define PINK_TO_BROWN_1 0x1
#define ORANGE_TO_BROWN_5 0x5
#define ORANGE_TO_BROWN_6 0x6
#define SPR_NOT_CHECK_SMALL 0xd1
#define SPR_CHECK_SMALL 0xd0
#define TACTIC_USER_A 0xc
#define TACTIC_USER_B 0xd
#define TACTIC_USER_C 0xe
#define TACTIC_USER_D 0xf
#define TACTIC_USER_E 0x10
#define TACTIC_USER_F 0x11
#define TACTIC_IMPORTED 0x3e8
#define SPR_TACTICS_PITCH 0xe2
#define SPR_EDIT_TACTICS_SMALL_PL_WHITE_GUY 0x7c
#define SPR_NOT_PLAYING_WHOLE_SEASON 0xa1
#define SPR_LITTLE_PLAYER_GOALIE 0xd5
#define DMACON_BLT_ON -0x7c00
#define BLT_FWM_ALL -0x1
#define WORD_ALIGN_EVEN_MASK 0xfffe
#define BLT_BLITQ_END -0x1
#define RANDOM -0x1
#define SEASONAL -0x2

typedef unsigned char   undefined;

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
#define code   void

typedef union PositionPacked PositionPacked, *PPositionPacked;

typedef struct PositionPacked_ PositionPacked_, *PPositionPacked_;

struct PositionPacked_ {
    byte x;
};

union PositionPacked {
    byte raw;
    struct PositionPacked_ field1;
};

typedef struct MenuEntry_Byte_TextNoPtrOnly MenuEntry_Byte_TextNoPtrOnly, *PMenuEntry_Byte_TextNoPtrOnly;

typedef struct MenuCoords8 MenuCoords8, *PMenuCoords8;

typedef struct MenuCmd_TextNoPtr MenuCmd_TextNoPtr, *PMenuCmd_TextNoPtr;

typedef struct MenuStringFlags MenuStringFlags, *PMenuStringFlags;

struct MenuStringFlags {
    byte fontNibble;
    byte reserved_hi;
};

struct MenuCmd_TextNoPtr {
    word type;
    struct MenuStringFlags strFlags;
};

struct MenuCoords8 {
    byte x;
    byte y;
    byte w;
    byte h;
};

struct MenuEntry_Byte_TextNoPtrOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_TextNoPtr text;
    word end;
};

typedef enum ShirtTypes {
    SHIRT_ORDINARY=0,
    SHIRT_COLORED_SLEEVES=1,
    SHIRT_VERTICAL_STRIPES=2,
    SHIRT_HORIZONTAL_STRIPES=3
} ShirtTypes;

typedef struct CompetitionLeague_2_4 CompetitionLeague_2_4, *PCompetitionLeague_2_4;

typedef struct CompetitionLeague CompetitionLeague, *PCompetitionLeague;

typedef struct Division Division, *PDivision;

typedef struct Competition Competition, *PCompetition;

struct Competition {
    byte compNumber;
    byte type;
    byte teamNumber;
    byte beginMonth;
    byte endMonth;
    byte unk1;
    byte unk2;
    byte unk3;
    byte unk4;
};

struct CompetitionLeague {
    struct Competition comp;
    byte divisionsCount;
    byte rounds;
    byte pointsForWin;
    byte subsReserves;
};

struct Division {
    byte teams;
    byte promoted;
    byte promotedPo;
    byte relegated;
    byte relegatedPo;
    byte unk1;
};

struct CompetitionLeague_2_4 {
    struct CompetitionLeague comp;
    struct Division divisions[2];
    byte unk1;
    char *text[4];
};

typedef struct CompetitionCup2_6_2_48 CompetitionCup2_6_2_48, *PCompetitionCup2_6_2_48;

typedef struct CompetitionCup2_6 CompetitionCup2_6, *PCompetitionCup2_6;

typedef struct CompetitionCup2 CompetitionCup2, *PCompetitionCup2;

typedef struct Round Round, *PRound;

struct Round {
    byte teamCount;
    byte groupCount;
    byte teamGroupCount;
};

struct CompetitionCup2 {
    struct Competition comp;
    byte unk1;
    byte unk2;
    byte unk3;
    byte awayGoalsMode;
    byte subsReserves;
    byte firstRoundNo;
    struct Round rounds[6];
    byte unk4;
};

struct CompetitionCup2_6 {
    struct CompetitionCup2 compCup;
    byte roundSettings[6];
};

struct CompetitionCup2_6_2_48 {
    struct CompetitionCup2_6 compCup;
    char *text[2];
    byte unk1[48];
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

typedef struct QualifyingGroup_2_8 QualifyingGroup_2_8, *PQualifyingGroup_2_8;

typedef struct CompetitionCup CompetitionCup, *PCompetitionCup;

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

struct QualifyingGroup_2_8 {
    struct CompetitionCup *compCup[2];
    enum CountryNumbers countries[8];
};

struct CompetitionCup {
    struct Competition comp;
    byte unk1;
    byte teams;
    byte awayGoalsMode;
    byte subsReserves;
    byte firstRoundNo;
};

typedef struct MenuEntry_Wide_TextPtrOnly MenuEntry_Wide_TextPtrOnly, *PMenuEntry_Wide_TextPtrOnly;

typedef struct MenuCoords16 MenuCoords16, *PMenuCoords16;

typedef struct MenuCmd_TextPtr MenuCmd_TextPtr, *PMenuCmd_TextPtr;

struct MenuCmd_TextPtr {
    word type;
    struct MenuStringFlags strFlags;
    char *textPtr;
};

struct MenuCoords16 {
    word x;
    word y;
    word w;
    word h;
};

struct MenuEntry_Wide_TextPtrOnly {
    struct MenuCoords16 rc;
    struct MenuCmd_TextPtr text;
    word end;
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
    void *onSelect;
    word controlMask;
    void *beforeDraw;
    void *afterDraw;
};

typedef struct MenuEntry_Byte_Colors_Number MenuEntry_Byte_Colors_Number, *PMenuEntry_Byte_Colors_Number;

typedef struct MenuCmd_Colors MenuCmd_Colors, *PMenuCmd_Colors;

typedef struct MenuCmd_Number MenuCmd_Number, *PMenuCmd_Number;

typedef struct MenuColorFlags MenuColorFlags, *PMenuColorFlags;

struct MenuColorFlags {
    byte reserved;
    byte entryScheme;
};

struct MenuCmd_Colors {
    word type;
    struct MenuColorFlags flags;
};

struct MenuCmd_Number {
    word type;
    struct MenuStringFlags strFlags;
    word value;
};

struct MenuEntry_Byte_Colors_Number {
    struct MenuCoords8 rc;
    struct MenuCmd_Colors colors;
    struct MenuCmd_Number number;
    word end;
};

typedef struct Menu_ManagementRecord Menu_ManagementRecord, *PMenu_ManagementRecord;

typedef struct MenuHeader MenuHeader, *PMenuHeader;

typedef struct MenuCmd_BeforeDraw MenuCmd_BeforeDraw, *PMenuCmd_BeforeDraw;

typedef struct MenuCmd_Nav MenuCmd_Nav, *PMenuCmd_Nav;

typedef struct MenuCmd_SpriteFg MenuCmd_SpriteFg, *PMenuCmd_SpriteFg;

typedef struct MenuCmd_OnSelect MenuCmd_OnSelect, *PMenuCmd_OnSelect;

typedef struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect, *PMenuEntry_Byte_Nav_Colors_TextPtr_OnSelect;

typedef struct MenuEntry_Byte_TextPtrOnly MenuEntry_Byte_TextPtrOnly, *PMenuEntry_Byte_TextPtrOnly;

typedef struct MenuEntry_Wide_TextNoPtrOnly MenuEntry_Wide_TextNoPtrOnly, *PMenuEntry_Wide_TextNoPtrOnly;

typedef struct MenuEntry_Byte_SpriteFgOnly MenuEntry_Byte_SpriteFgOnly, *PMenuEntry_Byte_SpriteFgOnly;

struct MenuCmd_OnSelect {
    word type;
    void *funcPtr;
};

struct MenuCmd_Nav {
    word type;
    byte left;
    byte right;
    byte up;
    byte down;
};

struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect {
    struct MenuCoords8 rc;
    struct MenuCmd_Nav nav;
    struct MenuCmd_Colors colors;
    struct MenuCmd_TextPtr text;
    struct MenuCmd_OnSelect onSelect;
    word end;
};

struct MenuEntry_Wide_TextNoPtrOnly {
    struct MenuCoords16 rc;
    struct MenuCmd_TextNoPtr text;
    word end;
};

struct MenuCmd_BeforeDraw {
    word type;
    void *funcPtr;
};

struct MenuCmd_SpriteFg {
    word type;
    word spriteId;
};

struct MenuHeader {
    void *onInitPtr;
    void *onReturnPtr;
    void *onDrawPtr;
    dword defaultEntry;
};

struct MenuEntry_Byte_TextPtrOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_TextPtr text;
    word end;
};

struct MenuEntry_Byte_SpriteFgOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_SpriteFg sprite;
    word end;
};

struct Menu_ManagementRecord {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_coords;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    struct MenuCmd_BeforeDraw entry0_beforeDraw;
    word entry0_end;
    word markByteCoords;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Nav entry1_nav;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_SpriteFg entry1_sprite;
    struct MenuCmd_OnSelect entry1_onSelect;
    word entry1_end;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Nav entry2_nav;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_SpriteFg entry2_sprite;
    struct MenuCmd_OnSelect entry2_onSelect;
    word entry2_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_TextNoPtrOnly entries4_8[5];
    word markWideCoords;
    struct MenuCoords16 entry9_rc;
    struct MenuCmd_TextPtr entry9_text;
    word entry9_end;
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entry10;
    struct MenuEntry_Byte_TextNoPtrOnly entry11;
    word markWideCoords2;
    struct MenuCoords16 entry12_rc;
    struct MenuCmd_TextPtr entry12_text;
    word entry12_end;
    struct MenuEntry_Wide_TextNoPtrOnly entries13_14[2];
    word markByteCoords3;
    struct MenuEntry_Byte_TextPtrOnly entry15;
    struct MenuEntry_Byte_TextNoPtrOnly entry16;
    struct MenuEntry_Byte_SpriteFgOnly entries17_20[4];
    word markEndMenu;
};

typedef struct MenuEntry_Wide_NumberOnly MenuEntry_Wide_NumberOnly, *PMenuEntry_Wide_NumberOnly;

struct MenuEntry_Wide_NumberOnly {
    struct MenuCoords16 rc;
    struct MenuCmd_Number number;
    word end;
};

typedef struct TeamTactics TeamTactics, *PTeamTactics;

typedef struct PlayerPositions PlayerPositions, *PPlayerPositions;

struct PlayerPositions {
    union PositionPacked positions[5][7];
};

struct TeamTactics {
    byte name[9];
    struct PlayerPositions positions[10];
    byte unkTable[10];
    byte ballOutOfPlayTactics;
};

typedef struct MenuEntry_Byte_Invisible_Colors_TextPtr MenuEntry_Byte_Invisible_Colors_TextPtr, *PMenuEntry_Byte_Invisible_Colors_TextPtr;

typedef struct MenuCmd_Invisible MenuCmd_Invisible, *PMenuCmd_Invisible;

struct MenuCmd_Invisible {
    word type;
};

struct MenuEntry_Byte_Invisible_Colors_TextPtr {
    struct MenuCoords8 rc;
    struct MenuCmd_Invisible invisible;
    struct MenuCmd_Colors colors;
    struct MenuCmd_TextPtr text;
    word end;
};

typedef struct CompetitionCup_10 CompetitionCup_10, *PCompetitionCup_10;

struct CompetitionCup_10 {
    struct CompetitionCup comp;
    byte rounds[10];
};

typedef struct Menu_ChairmanMemos Menu_ChairmanMemos, *PMenu_ChairmanMemos;

typedef struct MenuEntry_Byte_Colors_TextPtr MenuEntry_Byte_Colors_TextPtr, *PMenuEntry_Byte_Colors_TextPtr;

struct MenuEntry_Byte_Colors_TextPtr {
    struct MenuCoords8 rc;
    struct MenuCmd_Colors colors;
    struct MenuCmd_TextPtr text;
    word end;
};

struct Menu_ChairmanMemos {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords;
    struct MenuEntry_Wide_TextNoPtrOnly entries1_3[3];
    struct MenuCoords16 entry4_rc;
    struct MenuCmd_TextPtr entry4_text;
    word entry4_end;
    struct MenuCoords16 entry5_rc;
    struct MenuCmd_TextPtr entry5_text;
    word entry5_end;
    word markByteCoords2;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Invisible entry6_invisible;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_TextPtr entry6_text;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    word markEndMenu;
};

typedef struct Menu_Career Menu_Career, *PMenu_Career;

typedef struct MenuCmd_InputFunc MenuCmd_InputFunc, *PMenuCmd_InputFunc;

typedef struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect MenuEntry_Byte_Nav_Colors_StringTable_OnSelect, *PMenuEntry_Byte_Nav_Colors_StringTable_OnSelect;

typedef struct MenuCmd_StringTable MenuCmd_StringTable, *PMenuCmd_StringTable;

struct MenuCmd_InputFunc {
    word type;
    word ctrlMask;
    void *funcPtr;
};

struct MenuCmd_StringTable {
    word type;
    struct MenuStringFlags strFlags;
    void *tablePtr;
};

struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect {
    struct MenuCoords8 rc;
    struct MenuCmd_Nav nav;
    struct MenuCmd_Colors colors;
    struct MenuCmd_StringTable strTab;
    struct MenuCmd_OnSelect onSelect;
    word end;
};

struct Menu_Career {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Nav entry1_nav;
    struct MenuCmd_Invisible entry1_invisible;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    struct MenuCmd_OnSelect entry1_onSelect;
    word entry1_end;
    struct MenuEntry_Byte_Colors_TextPtr entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Colors_TextPtr entry6;
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_Colors entry7_colors;
    struct MenuCmd_TextNoPtr entry7_text;
    struct MenuCmd_InputFunc entry7_input;
    word entry7_end;
    struct MenuEntry_Byte_Colors_TextPtr entry8;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry9;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry10;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry11;
    word markEndMenu;
};

typedef enum MenuCommand {
    MENU_CMD_END=0,
    MENU_CMD_INVISIBLE=1,
    MENU_CMD_NAV=2,
    MENU_CMD_BG_FUNC=3,
    MENU_CMD_COLORS=4,
    MENU_CMD_BG_SPRITE=5,
    MENU_CMD_FG_FUNC=7,
    MENU_CMD_TEXT_PTR=8,
    MENU_CMD_SPRITE_FG=9,
    MENU_CMD_STRING_TABLE=10,
    MENU_CMD_MULTILINE=11,
    MENU_CMD_NUMBER=12,
    MENU_CMD_ONSELECT_FIRE=13,
    MENU_CMD_INPUT_FUNC=14,
    MENU_CMD_BEFORE_DRAW=15,
    MENU_CMD_AFTER_DRAW=16,
    MENU_CMD_UP_SKIP=17,
    MENU_CMD_DOWN_SKIP=18,
    MENU_CMD_LEFT_SKIP=19,
    MENU_CMD_RIGHT_SKIP=20,
    MENU_CMD_SPRITE_COPY=21,
    MENU_CMD_TEXT_NO_PTR=22
} MenuCommand;

typedef struct CompetitionLeague_3_6 CompetitionLeague_3_6, *PCompetitionLeague_3_6;

struct CompetitionLeague_3_6 {
    struct CompetitionLeague comp;
    struct Division divisions[3];
    byte unk1;
    char *text[6];
};

typedef struct MenuEntry_Wide_MultilineText MenuEntry_Wide_MultilineText, *PMenuEntry_Wide_MultilineText;

struct MenuEntry_Wide_MultilineText {
    struct MenuCoords16 rc;
    struct MenuCmd_TextPtr text;
    word end;
};

typedef struct Menu_DesignDIYCup_OptionRow Menu_DesignDIYCup_OptionRow, *PMenu_DesignDIYCup_OptionRow;

struct Menu_DesignDIYCup_OptionRow {
    struct MenuEntry_Byte_Colors_TextPtr descText;
    struct MenuEntry_Byte_Colors_Number descNum;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect legs;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect extraTime;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect penalties;
};

typedef struct CompetitionLeague_2_2_24 CompetitionLeague_2_2_24, *PCompetitionLeague_2_2_24;

struct CompetitionLeague_2_2_24 {
    struct CompetitionLeague comp;
    struct Division divisions[2];
    byte unk1;
    char *text[2];
    byte unk2[24];
};

typedef struct Menu_EditTactics Menu_EditTactics, *PMenu_EditTactics;

typedef struct MenuCmd_AfterDraw MenuCmd_AfterDraw, *PMenuCmd_AfterDraw;

typedef struct MenuMark_StartMenu MenuMark_StartMenu, *PMenuMark_StartMenu;

typedef struct MenuEntry_Byte_ColorsOnly MenuEntry_Byte_ColorsOnly, *PMenuEntry_Byte_ColorsOnly;

typedef struct MenuEntry_Byte_NavOnly MenuEntry_Byte_NavOnly, *PMenuEntry_Byte_NavOnly;

typedef struct MenuCmd_Skip2 MenuCmd_Skip2, *PMenuCmd_Skip2;

typedef struct MenuEntry_Byte_NumberOnly MenuEntry_Byte_NumberOnly, *PMenuEntry_Byte_NumberOnly;

struct MenuCmd_Skip2 {
    word type;
    byte arg0;
    byte arg1;
};

struct MenuMark_StartMenu {
    word mark;
    word menuX;
    word menuY;
};

struct MenuEntry_Byte_NavOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_Nav nav;
    word end;
};

struct MenuEntry_Byte_NumberOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_Number number;
    word end;
};

struct MenuEntry_Byte_ColorsOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_Colors colors;
    word end;
};

struct MenuCmd_AfterDraw {
    word type;
    void *funcPtr;
};

struct Menu_EditTactics {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuCoords8 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_SpriteFg entry0_sprite;
    word entry0_end;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextNoPtr entry1_text;
    word entry1_end;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_InputFunc entry2_inputFunc;
    struct MenuCmd_AfterDraw entry2_afterDraw;
    word entry2_end;
    struct MenuCoords8 entry3_rc;
    struct MenuCmd_InputFunc entry3_inputFunc;
    struct MenuCmd_AfterDraw entry3_afterDraw;
    word entry3_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries4_5[2];
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_StringTable entry6_strTab;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries7_9[3];
    struct MenuMark_StartMenu menu1Start;
    struct MenuEntry_Byte_ColorsOnly entry10;
    word template11_markStart;
    struct MenuCoords8 template11_rc;
    struct MenuCmd_Colors template11_colors;
    struct MenuCmd_AfterDraw template11_afterDraw;
    struct MenuCmd_OnSelect template11_onSelect;
    word template11_end;
    struct MenuEntry_Byte_NavOnly entries11_25[15];
    struct MenuCoords8 entry26_rc;
    struct MenuCmd_Nav entry26_nav;
    struct MenuCmd_Skip2 entry26_upSkip;
    word entry26_end;
    struct MenuCoords8 entry27_rc;
    struct MenuCmd_Nav entry27_nav;
    struct MenuCmd_Invisible entry27_invisible;
    word entry27_end;
    struct MenuCoords8 entry28_rc;
    struct MenuCmd_Invisible entry28_invisible;
    struct MenuCmd_Nav entry28_nav;
    struct MenuCmd_Colors entry28_colors;
    struct MenuCmd_OnSelect entry28_onSelect;
    struct MenuCmd_AfterDraw entry28_afterDraw;
    word entry28_end;
    word markInitEntry;
    word template29_markStart;
    struct MenuCoords8 template29_rc;
    struct MenuCmd_Colors template29_colors;
    struct MenuCmd_AfterDraw template29_afterDraw;
    struct MenuCmd_OnSelect template29_onSelect;
    word template29_end;
    struct MenuEntry_Byte_NavOnly entries29_38[10];
    word markInitEntry2;
    struct MenuMark_StartMenu menu1Start2;
    struct MenuMark_StartMenu menu1Start3;
    struct MenuCoords8 entry39_rc;
    struct MenuCmd_Colors entry39_colors;
    struct MenuCmd_SpriteFg entry39_sprite;
    word entry39_end;
    struct MenuEntry_Byte_NumberOnly entry40;
    struct MenuEntry_Byte_Colors_TextPtr entry41;
    struct MenuEntry_Byte_TextPtrOnly entry42;
    struct MenuEntry_Byte_TextNoPtrOnly entry43;
    struct MenuEntry_Byte_TextPtrOnly entry44;
    struct MenuMark_StartMenu menu1Start4;
    word markEndMenu;
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
    byte goalStats[4];
    byte someFlag;
};

typedef struct CompetitionCup2_6_2_24 CompetitionCup2_6_2_24, *PCompetitionCup2_6_2_24;

struct CompetitionCup2_6_2_24 {
    struct CompetitionCup2_6 compCup;
    char *text[2];
    byte unk1[24];
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

typedef struct TeamFileEx TeamFileEx, *PTeamFileEx;

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

struct TeamFileEx {
    struct TeamFile team;
    struct PlayerFile players[16];
};

typedef struct Menu_ViewCompetitions Menu_ViewCompetitions, *PMenu_ViewCompetitions;

struct Menu_ViewCompetitions {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    word markEndMenu;
};

typedef struct TeamGame TeamGame, *PTeamGame;

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
    struct PlayerInfo players[16];
};

typedef struct Menu_SelectNationalTeam Menu_SelectNationalTeam, *PMenu_SelectNationalTeam;

typedef struct MenuEntry_Wide_CoordsOnly MenuEntry_Wide_CoordsOnly, *PMenuEntry_Wide_CoordsOnly;

typedef struct MenuEntry_Wide_NavOnly MenuEntry_Wide_NavOnly, *PMenuEntry_Wide_NavOnly;

typedef struct MenuEntry_Byte_Invisible_NavOnly MenuEntry_Byte_Invisible_NavOnly, *PMenuEntry_Byte_Invisible_NavOnly;

typedef struct MenuEntry_Wide_ColorsOnly MenuEntry_Wide_ColorsOnly, *PMenuEntry_Wide_ColorsOnly;

struct MenuEntry_Wide_ColorsOnly {
    struct MenuCoords16 rc;
    struct MenuCmd_Colors colors;
    word end;
};

struct MenuEntry_Byte_Invisible_NavOnly {
    struct MenuCoords8 rc;
    struct MenuCmd_Invisible invisible;
    struct MenuCmd_Nav nav;
    word end;
};

struct MenuEntry_Wide_CoordsOnly {
    struct MenuCoords16 rc;
    word end;
};

struct MenuEntry_Wide_NavOnly {
    struct MenuCoords16 rc;
    struct MenuCmd_Nav nav;
    word end;
};

struct Menu_SelectNationalTeam {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    word markByteCoords;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextNoPtr entry1_text;
    word entry1_end;
    struct MenuEntry_Byte_TextPtrOnly entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries3_4[2];
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_Nav entry5_nav;
    struct MenuCmd_Skip2 entry5_rightSkip;
    struct MenuCmd_Colors entry5_colors;
    struct MenuCmd_TextPtr entry5_text;
    struct MenuCmd_OnSelect entry5_onSelect;
    word entry5_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuMark_StartMenu menu1Start;
    word template7_markStart;
    struct MenuCoords8 template7_rc;
    struct MenuCmd_Colors template7_colors;
    struct MenuCmd_AfterDraw template7_afterDraw;
    struct MenuCmd_OnSelect template7_onSelect;
    word template7_end;
    word markWideCoords;
    struct MenuEntry_Wide_CoordsOnly entry7;
    struct MenuEntry_Wide_NavOnly entries8_23[16];
    struct MenuCoords16 entry24_rc;
    struct MenuCmd_Nav entry24_nav;
    struct MenuCmd_Skip2 entry24_leftSkip;
    struct MenuCmd_Invisible entry24_invisible;
    word entry24_end;
    word markInitEntry;
    word markByteCoords2;
    struct MenuCoords8 entry25_rc;
    struct MenuCmd_Invisible entry25_invisible;
    struct MenuCmd_Nav entry25_nav;
    struct MenuCmd_Colors entry25_colors;
    struct MenuCmd_OnSelect entry25_onSelect;
    struct MenuCmd_AfterDraw entry25_afterDraw;
    word entry25_end;
    struct MenuEntry_Byte_Invisible_NavOnly entry26;
    struct MenuMark_StartMenu menu1Start2;
    word markWideCoords2;
    struct MenuEntry_Wide_ColorsOnly entry27;
    word markByteCoords3;
    struct MenuEntry_Byte_NumberOnly entry28;
    struct MenuEntry_Byte_SpriteFgOnly entry29;
    struct MenuEntry_Byte_TextPtrOnly entry30;
    struct MenuEntry_Byte_TextNoPtrOnly entry31;
    struct MenuEntry_Byte_TextPtrOnly entry32;
    struct MenuEntry_Byte_TextNoPtrOnly entry33;
    struct MenuEntry_Byte_SpriteFgOnly entries34_36[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry37;
    word markWideCoords3;
    struct MenuEntry_Wide_TextPtrOnly entry38;
    word markEndMenu;
};

typedef struct Menu_SelectTeamsForTactics Menu_SelectTeamsForTactics, *PMenu_SelectTeamsForTactics;

typedef struct MenuEntry_Byte_Nav_Skip MenuEntry_Byte_Nav_Skip, *PMenuEntry_Byte_Nav_Skip;

struct MenuEntry_Byte_Nav_Skip {
    struct MenuCoords8 rc;
    struct MenuCmd_Nav nav;
    struct MenuCmd_Skip2 skip;
    word end;
};

struct Menu_SelectTeamsForTactics {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_TextPtr template1_text;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    struct MenuEntry_Byte_Nav_Skip entries1_22[22];
    struct MenuEntry_Byte_NavOnly entries23_44[22];
    struct MenuEntry_Byte_Nav_Skip entries45_66[22];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry67;
    word markEndMenu;
};

typedef struct GoalInfo GoalInfo, *PGoalInfo;

struct GoalInfo {
    word goalType;
    dword time;
};

typedef struct MenuEntry_Byte_Nav_TextPtr MenuEntry_Byte_Nav_TextPtr, *PMenuEntry_Byte_Nav_TextPtr;

struct MenuEntry_Byte_Nav_TextPtr {
    struct MenuCoords8 rc;
    struct MenuCmd_Nav nav;
    struct MenuCmd_TextPtr text;
    word end;
};

typedef enum Sfx {
    SFX_BACKGROUND_CROWD=0,
    SFX_BOUNCE=1,
    SFX_HOME_GOAL=2,
    SFX_KICK=3,
    SFX_WHISTLE=4,
    SFX_MISS_GOAL=5,
    SFX_ENDGAME_WHISTLE=6,
    SFX_FOUL_WHISTLE=7,
    SFX_CHANT_41=8,
    SFX_CHANT_101=9,
    SFX_CHANT_81=10
} Sfx;

typedef struct MenuEntry_Byte_CoordsOnly MenuEntry_Byte_CoordsOnly, *PMenuEntry_Byte_CoordsOnly;

struct MenuEntry_Byte_CoordsOnly {
    struct MenuCoords8 rc;
    word end;
};

typedef enum DisplayGeometry {
    WORD_ALIGN_MASK=15,
    SPRITE_MAX_Y_DRAW=257,
    SCREEN_HEIGHT=272,
    SCROLL_RIGHT_EDGE_X=335,
    SCREEN_WIDTH=336
} DisplayGeometry;

typedef struct CompetitionCup2_6_2_16 CompetitionCup2_6_2_16, *PCompetitionCup2_6_2_16;

struct CompetitionCup2_6_2_16 {
    struct CompetitionCup2_6 compCup;
    char *text[2];
    byte unk1[16];
};

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

typedef struct CompetitionLeague_2_2_8 CompetitionLeague_2_2_8, *PCompetitionLeague_2_2_8;

struct CompetitionLeague_2_2_8 {
    struct CompetitionLeague comp;
    struct Division divisions[2];
    byte unk1;
    char *unk2[2];
    byte unk3[8];
};

typedef struct QualifyingGroup_3 QualifyingGroup_3, *PQualifyingGroup_3;

struct QualifyingGroup_3 {
    struct CompetitionCup *compCup[3];
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

typedef enum BitplaneLayout {
    NUM_PLANES_MINUS2=2,
    NUM_PLANES_MINUS1=3,
    NUM_PLANES=4,
    SRC_SCANLINE_BYTES=8,
    PLANE_STRIDE_DIV2=22,
    PLANE_STRIDE_MINUS4=40,
    PLANE_STRIDE_MINUS2=42,
    PLANE_STRIDE=44,
    ROW_STRIDE_BYTES=176
} BitplaneLayout;

typedef struct CompetitionCup_4 CompetitionCup_4, *PCompetitionCup_4;

struct CompetitionCup_4 {
    struct CompetitionCup comp;
    byte rounds[4];
};

typedef struct Menu_BuyPlayer Menu_BuyPlayer, *PMenu_BuyPlayer;

struct Menu_BuyPlayer {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_TextNoPtrOnly entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    word markEndMenu;
};

typedef struct Playoffs_8 Playoffs_8, *PPlayoffs_8;

struct Playoffs_8 {
    byte unk1[16];
    char *text[2];
    byte unk2[8];
};

typedef struct CompetitionCup_6 CompetitionCup_6, *PCompetitionCup_6;

struct CompetitionCup_6 {
    struct CompetitionCup comp;
    byte rounds[6];
};

typedef struct Menu_DesignDiyTournament Menu_DesignDiyTournament, *PMenu_DesignDiyTournament;

typedef struct Menu_DesignDiyTournament_StageBlockA Menu_DesignDiyTournament_StageBlockA, *PMenu_DesignDiyTournament_StageBlockA;

typedef struct Menu_DesignDiyTournament_StageBlockB Menu_DesignDiyTournament_StageBlockB, *PMenu_DesignDiyTournament_StageBlockB;

struct Menu_DesignDiyTournament_StageBlockA {
    struct MenuMark_StartMenu startMenu;
    struct MenuEntry_Byte_NumberOnly stageNum;
    struct MenuEntry_Byte_SpriteFgOnly icon;
    struct MenuCoords8 qualifiers_rc;
    struct MenuCmd_Nav qualifiers_nav;
    struct MenuCmd_Colors qualifiers_colors;
    struct MenuCmd_Number qualifiers_number;
    struct MenuCmd_InputFunc qualifiers_input;
    word qualifiers_end;
    struct MenuCoords8 fromValue_rc;
    struct MenuCmd_Nav fromValue_nav;
    struct MenuCmd_Colors fromValue_colors;
    struct MenuCmd_TextNoPtr fromValue_text;
    struct MenuCmd_OnSelect fromValue_onSelect;
    word fromValue_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect star;
    word markWideCoords;
    struct MenuCoords16 statusLine_rc;
    struct MenuCmd_Colors statusLine_colors;
    struct MenuCmd_TextNoPtr statusLine_text;
    word statusLine_end;
    word markByteCoords;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect opts[4];
    struct MenuCoords8 spacer_rc;
    struct MenuCmd_Nav spacer_nav;
    struct MenuCmd_Invisible spacer_invisible;
    word spacer_end;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect optLast;
};

struct Menu_DesignDiyTournament_StageBlockB {
    struct MenuMark_StartMenu startMenu;
    struct MenuEntry_Byte_NumberOnly stageNum;
    struct MenuEntry_Byte_SpriteFgOnly icon;
    struct MenuCoords8 qualifiers_rc;
    struct MenuCmd_Nav qualifiers_nav;
    struct MenuCmd_Colors qualifiers_colors;
    struct MenuCmd_Number qualifiers_number;
    struct MenuCmd_InputFunc qualifiers_input;
    word qualifiers_end;
    struct MenuCoords8 fromValue_rc;
    struct MenuCmd_Nav fromValue_nav;
    struct MenuCmd_Colors fromValue_colors;
    struct MenuCmd_TextNoPtr fromValue_text;
    struct MenuCmd_OnSelect fromValue_onSelect;
    word fromValue_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect star;
    word markWideCoords;
    struct MenuCoords16 statusLine_rc;
    struct MenuCmd_Colors statusLine_colors;
    struct MenuCmd_TextPtr statusLine_text;
    word statusLine_end;
    word markByteCoords;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect opts[4];
    struct MenuCoords8 spacer_rc;
    struct MenuCmd_Nav spacer_nav;
    struct MenuCmd_Invisible spacer_invisible;
    word spacer_end;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect optLast;
};

struct Menu_DesignDiyTournament {
    struct MenuHeader hdr;
    word markByteCoords0;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords0;
    struct MenuCoords16 entry1_rc;
    struct MenuCmd_Invisible entry1_invisible;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    word entry1_end;
    struct MenuCoords16 entry2_rc;
    struct MenuCmd_Nav entry2_nav;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextPtr entry2_text;
    struct MenuCmd_OnSelect entry2_onSelect;
    word entry2_end;
    word markByteCoords1;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entries3_5[3];
    struct MenuEntry_Byte_Colors_TextPtr entry6;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry7;
    struct MenuEntry_Byte_Colors_TextPtr entry8;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry9;
    struct MenuEntry_Byte_Colors_TextPtr entry10;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_Nav entry11_nav;
    struct MenuCmd_Colors entry11_colors;
    struct MenuCmd_TextNoPtr entry11_text;
    struct MenuCmd_OnSelect entry11_onSelect;
    word entry11_end;
    struct MenuEntry_Byte_Colors_TextPtr entry12;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Nav entry13_nav;
    struct MenuCmd_Colors entry13_colors;
    struct MenuCmd_TextNoPtr entry13_text;
    struct MenuCmd_OnSelect entry13_onSelect;
    word entry13_end;
    struct MenuMark_StartMenu startMenuHeaders;
    struct MenuEntry_Byte_TextPtrOnly entries14_16[3];
    struct Menu_DesignDiyTournament_StageBlockA stage1;
    struct Menu_DesignDiyTournament_StageBlockB stage2;
    struct Menu_DesignDiyTournament_StageBlockA stages3_6[4];
    struct MenuMark_StartMenu startMenuFooter;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries89_91[3];
    struct MenuCoords8 entry92_rc;
    struct MenuCmd_Colors entry92_colors;
    struct MenuCmd_TextNoPtr entry92_text;
    word entry92_end;
    word markEndMenu;
};

typedef struct Menu_PlayerOffers Menu_PlayerOffers, *PMenu_PlayerOffers;

struct Menu_PlayerOffers {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_TextNoPtrOnly entry1;
    word markWideCoords;
    struct MenuEntry_Wide_TextPtrOnly entry2;
    struct MenuEntry_Wide_TextNoPtrOnly entries3_4[2];
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entries5_7[3];
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry8;
    struct MenuCoords8 entry9_rc;
    struct MenuCmd_Nav entry9_nav;
    struct MenuCmd_Colors entry9_colors;
    struct MenuCmd_TextNoPtr entry9_text;
    struct MenuCmd_InputFunc entry9_inputFunc;
    word entry9_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries10_13[4];
    word template14_markStart;
    struct MenuCoords8 template14_rc;
    struct MenuCmd_Colors template14_colors;
    struct MenuCmd_AfterDraw template14_afterDraw;
    word template14_end;
    word markWideCoords2;
    struct MenuEntry_Wide_CoordsOnly entries14_17[4];
    word markInitEntry;
    struct MenuEntry_Wide_ColorsOnly entry18;
    word markByteCoords3;
    struct MenuEntry_Byte_NumberOnly entry19;
    struct MenuEntry_Byte_SpriteFgOnly entry20;
    struct MenuEntry_Byte_TextPtrOnly entry21;
    struct MenuEntry_Byte_TextNoPtrOnly entry22;
    struct MenuEntry_Byte_TextPtrOnly entry23;
    struct MenuEntry_Byte_TextNoPtrOnly entry24;
    struct MenuEntry_Byte_SpriteFgOnly entries25_27[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry28;
    word markWideCoords3;
    struct MenuEntry_Wide_TextPtrOnly entry29;
    word markEndMenu;
};

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

typedef struct Menu_ImportTactics Menu_ImportTactics, *PMenu_ImportTactics;

struct Menu_ImportTactics {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    struct MenuEntry_Byte_Nav_TextPtr entries1_18[18];
    word markInitEntry;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry19;
    struct MenuMark_StartMenu menu2Start;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry20;
    word markEndMenu;
};

typedef struct Menu_TransferMarket Menu_TransferMarket, *PMenu_TransferMarket;

struct Menu_TransferMarket {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_TextNoPtrOnly entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    struct MenuEntry_Byte_TextPtrOnly entry8;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_BeforeDraw template1_afterDraw;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    word markWideCoords;
    struct MenuEntry_Wide_NavOnly entries9_13[5];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords16 entry14_rc;
    struct MenuCmd_Colors entry14_colors;
    word entry14_end;
    word markByteCoords2;
    struct MenuEntry_Byte_NumberOnly entry15;
    struct MenuEntry_Byte_SpriteFgOnly entry16;
    struct MenuEntry_Byte_TextPtrOnly entry17;
    struct MenuEntry_Byte_TextNoPtrOnly entry18;
    struct MenuEntry_Byte_TextPtrOnly entry19;
    struct MenuEntry_Byte_TextNoPtrOnly entry20;
    struct MenuEntry_Byte_SpriteFgOnly entries21_23[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry24;
    word markWideCoords2;
    struct MenuCoords16 entry25_rc;
    struct MenuCmd_TextPtr entry25_text;
    word entry25_end;
    word markEndMenu;
};

typedef struct Menu_CompetitionTopGoalScorers Menu_CompetitionTopGoalScorers, *PMenu_CompetitionTopGoalScorers;

struct Menu_CompetitionTopGoalScorers {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextPtr entry0_text;
    word entry0_end;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry1;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextPtr entry2_text;
    struct MenuCmd_OnSelect entry2_onSelect;
    word entry2_end;
    struct MenuMark_StartMenu menu1Start;
    struct MenuEntry_Byte_NumberOnly entry3;
    struct MenuEntry_Byte_TextNoPtrOnly entries4_5[2];
    struct MenuEntry_Byte_NumberOnly entries6_7[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries8_9[2];
    struct MenuEntry_Byte_NumberOnly entries10_11[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries12_13[2];
    struct MenuEntry_Byte_NumberOnly entries14_15[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries16_17[2];
    struct MenuEntry_Byte_NumberOnly entries18_19[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries20_21[2];
    struct MenuEntry_Byte_NumberOnly entries22_23[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries24_25[2];
    struct MenuEntry_Byte_NumberOnly entries26_27[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries28_29[2];
    struct MenuEntry_Byte_NumberOnly entries30_31[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries32_33[2];
    struct MenuEntry_Byte_NumberOnly entries34_35[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries36_37[2];
    struct MenuEntry_Byte_NumberOnly entries38_39[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries40_41[2];
    struct MenuEntry_Byte_NumberOnly entries42_43[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries44_45[2];
    struct MenuEntry_Byte_NumberOnly entries46_47[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries48_49[2];
    struct MenuEntry_Byte_NumberOnly entries50_51[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries52_53[2];
    struct MenuEntry_Byte_NumberOnly entries54_55[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries56_57[2];
    struct MenuEntry_Byte_NumberOnly entries58_59[2];
    struct MenuEntry_Byte_TextNoPtrOnly entries60_61[2];
    struct MenuEntry_Byte_NumberOnly entry62;
    word markEndMenu;
};

typedef enum Fps {
    FPS_50HZ=49
} Fps;

typedef enum MenuCtrlMask {
    MENU_CTRL_FIRE=1,
    MENU_CTRL_LEFT_2=2,
    MENU_CTRL_RIGHT_2=4,
    MENU_CTRL_UP_2=8,
    MENU_CTRL_DOWN_2=16,
    MENU_CTRL_SHORT_FIRE=32,
    MENU_CTRL_LEFT=64,
    MENU_CTRL_RIGHT=128,
    MENU_CTRL_UP=256,
    MENU_CTRL_DOWN=512,
    MENU_CTRL_HI_MASK=64512
} MenuCtrlMask;

typedef enum RefereeState {
    REF_OFF_SCREEN=0,
    REF_INCOMING=1,
    REF_WAITING_PLAYER=2,
    REF_ABOUT_TO_GIVE_CARD=3,
    REF_BOOKING=4,
    REF_LEAVING=5
} RefereeState;

typedef struct QualifyingGroup_3_4 QualifyingGroup_3_4, *PQualifyingGroup_3_4;

struct QualifyingGroup_3_4 {
    struct CompetitionCup *compCup[3];
    enum CountryNumbers countries[4];
};

typedef struct DIY_Competition DIY_Competition, *PDIY_Competition;

struct DIY_Competition {
    word competitionType;
    byte field_2[48];
    word numTeams;
    word pitchTypeOrSeason;
    word pitchType;
    byte startMonth;
    byte endMonth;
    byte field_3A[36];
    word playEachTeam;
};

typedef struct CompetitionCup2_4 CompetitionCup2_4, *PCompetitionCup2_4;

struct CompetitionCup2_4 {
    struct CompetitionCup2 compCup;
    byte roundSettings[4];
};

typedef struct Menu Menu, *PMenu;

struct Menu {
    void *onInit;
    void *afterDraw;
    void *onDraw;
    struct MenuEntry *selectedEntry;
    word numEntries;
    struct MenuEntry *endOfMenuPtr;
};

typedef struct Menu_ThirdPartyOffer Menu_ThirdPartyOffer, *PMenu_ThirdPartyOffer;

struct Menu_ThirdPartyOffer {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords;
    struct MenuEntry_Wide_TextNoPtrOnly entries1_2[2];
    struct MenuCoords16 entry3_rc;
    struct MenuCmd_Invisible entry3_invisible;
    struct MenuCmd_TextNoPtr entry3_text;
    word entry3_end;
    struct MenuEntry_Wide_TextNoPtrOnly entry4;
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entries5_7[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry8;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries9_10[2];
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_Nav entry11_nav;
    struct MenuCmd_Skip2 entry11_rightSkip;
    struct MenuCmd_Skip2 entry11_leftSkip;
    struct MenuCmd_Colors entry11_colors;
    struct MenuCmd_TextPtr entry11_text;
    struct MenuCmd_OnSelect entry11_onSelect;
    word entry11_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries12_13[2];
    struct MenuCoords8 entry14_rc;
    struct MenuCmd_Invisible entry14_invisible;
    struct MenuCmd_Colors entry14_colors;
    struct MenuCmd_TextPtr entry14_text;
    struct MenuCmd_OnSelect entry14_onSelect;
    word entry14_end;
    word template15_markStart;
    struct MenuCoords8 template15_rc;
    struct MenuCmd_Colors template15_colors;
    struct MenuCmd_AfterDraw template15_afterDraw;
    word template15_end;
    word markWideCoords2;
    struct MenuEntry_Wide_CoordsOnly entries15_18[4];
    word markInitEntry;
    struct MenuEntry_Wide_ColorsOnly entry19;
    word markByteCoords3;
    struct MenuEntry_Byte_NumberOnly entry20;
    struct MenuEntry_Byte_SpriteFgOnly entry21;
    struct MenuEntry_Byte_TextPtrOnly entry22;
    struct MenuEntry_Byte_TextNoPtrOnly entry23;
    struct MenuEntry_Byte_TextPtrOnly entry24;
    struct MenuEntry_Byte_TextNoPtrOnly entry25;
    struct MenuEntry_Byte_SpriteFgOnly entries26_28[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry29;
    word markWideCoords3;
    struct MenuEntry_Wide_TextPtrOnly entry30;
    word markEndMenu;
};

typedef struct DIYStage DIYStage, *PDIYStage;

struct DIYStage {
    word legs;
    word extraTime;
    word penalties;
    word playCount;
    word ptsForWin;
};

typedef struct AudioState AudioState, *PAudioState;

struct AudioState {
    uchar *songPtr;
    uchar *bankSectionPtrs[7];
    word masterVolume;
    word modeFlags;
    byte irqSubtick;
    byte toggleFlag;
    byte primaryChanEnable;
    byte secondaryChanEnable;
    byte channelVolume[4];
    byte channelChangeFlags;
    byte currentChannelIdx;
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

typedef enum TacticsSlotIndex {
    TSI_GOALKEEPER=0,
    TSI_1=1,
    TSI_2=2,
    TSI_3=3,
    TSI_4=4,
    TSI_5=5,
    TSI_6=6,
    TSI_7=7,
    TSI_8=8,
    TSI_9=9,
    TSI_10=10
} TacticsSlotIndex;

typedef struct QualifyingGroup_6_44 QualifyingGroup_6_44, *PQualifyingGroup_6_44;

struct QualifyingGroup_6_44 {
    struct CompetitionCup *compCup[6];
    enum CountryNumbers countries[44];
};

typedef struct CompetitionCareer CompetitionCareer, *PCompetitionCareer;

struct CompetitionCareer {
    struct CompetitionCup *competition;
    struct CompetitionCup *competitionCopy;
    word length;
};

typedef struct Menu_SelectTeams Menu_SelectTeams, *PMenu_SelectTeams;

struct Menu_SelectTeams {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    word template1_markStart;
    word template1_coordsMark;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_TextPtr template1_text;
    struct MenuCmd_Invisible template1_invisible;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    struct MenuMark_StartMenu menu1Start;
    struct MenuEntry_Byte_NavOnly entries1_10[10];
    struct MenuMark_StartMenu menu1Start2;
    struct MenuEntry_Byte_NavOnly entries11_20[10];
    word template21_markStart;
    struct MenuCoords8 template21_rc;
    struct MenuCmd_Colors template21_colors;
    struct MenuCmd_TextPtr template21_text;
    struct MenuCmd_OnSelect template21_onSelect;
    word template21_end;
    struct MenuCoords8 entry21_rc;
    struct MenuCmd_Nav entry21_nav;
    struct MenuCmd_Skip2 entry21_leftSkip;
    struct MenuCmd_Skip2 entry21_rightSkip;
    word entry21_end;
    struct MenuCoords8 entry22_rc;
    struct MenuCmd_Nav entry22_nav;
    struct MenuCmd_Skip2 entry22_upSkip;
    word entry22_end;
    struct MenuCoords8 entry23_rc;
    struct MenuCmd_Nav entry23_nav;
    struct MenuCmd_Skip2 entry23_upSkip;
    word entry23_end;
    struct MenuCoords8 entry24_rc;
    struct MenuCmd_Nav entry24_nav;
    struct MenuCmd_Skip2 entry24_upSkip;
    word entry24_end;
    struct MenuCoords8 entry25_rc;
    struct MenuCmd_Nav entry25_nav;
    struct MenuCmd_Skip2 entry25_upSkip;
    word entry25_end;
    struct MenuCoords8 entry26_rc;
    struct MenuCmd_Nav entry26_nav;
    struct MenuCmd_Skip2 entry26_upSkip;
    word entry26_end;
    struct MenuCoords8 entry27_rc;
    struct MenuCmd_Nav entry27_nav;
    struct MenuCmd_Skip2 entry27_upSkip;
    word entry27_end;
    struct MenuCoords8 entry28_rc;
    struct MenuCmd_Nav entry28_nav;
    struct MenuCmd_Skip2 entry28_upSkip;
    word entry28_end;
    struct MenuCoords8 entry29_rc;
    struct MenuCmd_Nav entry29_nav;
    struct MenuCmd_Skip2 entry29_upSkip;
    word entry29_end;
    struct MenuCoords8 entry30_rc;
    struct MenuCmd_Nav entry30_nav;
    struct MenuCmd_Skip2 entry30_upSkip;
    word entry30_end;
    struct MenuCoords8 entry31_rc;
    struct MenuCmd_Nav entry31_nav;
    struct MenuCmd_Skip2 entry31_upSkip;
    word entry31_end;
    struct MenuCoords8 entry32_rc;
    struct MenuCmd_Nav entry32_nav;
    struct MenuCmd_Skip2 entry32_upSkip;
    word entry32_end;
    struct MenuCoords8 entry33_rc;
    struct MenuCmd_Nav entry33_nav;
    struct MenuCmd_Skip2 entry33_upSkip;
    word entry33_end;
    struct MenuCoords8 entry34_rc;
    struct MenuCmd_Nav entry34_nav;
    struct MenuCmd_Skip2 entry34_upSkip;
    word entry34_end;
    struct MenuCoords8 entry35_rc;
    struct MenuCmd_Nav entry35_nav;
    struct MenuCmd_Skip2 entry35_upSkip;
    word entry35_end;
    struct MenuCoords8 entry36_rc;
    struct MenuCmd_Nav entry36_nav;
    struct MenuCmd_Skip2 entry36_upSkip;
    word entry36_end;
    struct MenuCoords8 entry37_rc;
    struct MenuCmd_Nav entry37_nav;
    struct MenuCmd_Skip2 entry37_upSkip;
    word entry37_end;
    struct MenuCoords8 entry38_rc;
    struct MenuCmd_Nav entry38_nav;
    struct MenuCmd_Skip2 entry38_upSkip;
    word entry38_end;
    struct MenuCoords8 entry39_rc;
    struct MenuCmd_Nav entry39_nav;
    struct MenuCmd_Skip2 entry39_upSkip;
    word entry39_end;
    struct MenuCoords8 entry40_rc;
    struct MenuCmd_Nav entry40_nav;
    struct MenuCmd_Skip2 entry40_upSkip;
    word entry40_end;
    struct MenuCoords8 entry41_rc;
    struct MenuCmd_Nav entry41_nav;
    struct MenuCmd_Skip2 entry41_upSkip;
    word entry41_end;
    struct MenuCoords8 entry42_rc;
    struct MenuCmd_Nav entry42_nav;
    struct MenuCmd_Skip2 entry42_upSkip;
    word entry42_end;
    struct MenuEntry_Byte_NavOnly entries43_64[22];
    struct MenuCoords8 entry65_rc;
    struct MenuCmd_Nav entry65_nav;
    struct MenuCmd_Skip2 entry65_leftSkip;
    struct MenuCmd_Skip2 entry65_rightSkip;
    word entry65_end;
    struct MenuCoords8 entry66_rc;
    struct MenuCmd_Nav entry66_nav;
    struct MenuCmd_Skip2 entry66_downSkip;
    word entry66_end;
    struct MenuCoords8 entry67_rc;
    struct MenuCmd_Nav entry67_nav;
    struct MenuCmd_Skip2 entry67_downSkip;
    word entry67_end;
    struct MenuCoords8 entry68_rc;
    struct MenuCmd_Nav entry68_nav;
    struct MenuCmd_Skip2 entry68_downSkip;
    word entry68_end;
    struct MenuCoords8 entry69_rc;
    struct MenuCmd_Nav entry69_nav;
    struct MenuCmd_Skip2 entry69_downSkip;
    word entry69_end;
    struct MenuCoords8 entry70_rc;
    struct MenuCmd_Nav entry70_nav;
    struct MenuCmd_Skip2 entry70_downSkip;
    word entry70_end;
    struct MenuCoords8 entry71_rc;
    struct MenuCmd_Nav entry71_nav;
    struct MenuCmd_Skip2 entry71_downSkip;
    word entry71_end;
    struct MenuCoords8 entry72_rc;
    struct MenuCmd_Nav entry72_nav;
    struct MenuCmd_Skip2 entry72_downSkip;
    word entry72_end;
    struct MenuCoords8 entry73_rc;
    struct MenuCmd_Nav entry73_nav;
    struct MenuCmd_Skip2 entry73_downSkip;
    word entry73_end;
    struct MenuCoords8 entry74_rc;
    struct MenuCmd_Nav entry74_nav;
    struct MenuCmd_Skip2 entry74_downSkip;
    word entry74_end;
    struct MenuCoords8 entry75_rc;
    struct MenuCmd_Nav entry75_nav;
    struct MenuCmd_Skip2 entry75_downSkip;
    word entry75_end;
    struct MenuCoords8 entry76_rc;
    struct MenuCmd_Nav entry76_nav;
    struct MenuCmd_Skip2 entry76_downSkip;
    word entry76_end;
    struct MenuCoords8 entry77_rc;
    struct MenuCmd_Nav entry77_nav;
    struct MenuCmd_Skip2 entry77_downSkip;
    word entry77_end;
    struct MenuCoords8 entry78_rc;
    struct MenuCmd_Nav entry78_nav;
    struct MenuCmd_Skip2 entry78_downSkip;
    word entry78_end;
    struct MenuCoords8 entry79_rc;
    struct MenuCmd_Nav entry79_nav;
    struct MenuCmd_Skip2 entry79_downSkip;
    word entry79_end;
    struct MenuCoords8 entry80_rc;
    struct MenuCmd_Nav entry80_nav;
    struct MenuCmd_Skip2 entry80_downSkip;
    word entry80_end;
    struct MenuCoords8 entry81_rc;
    struct MenuCmd_Nav entry81_nav;
    struct MenuCmd_Skip2 entry81_downSkip;
    word entry81_end;
    struct MenuCoords8 entry82_rc;
    struct MenuCmd_Nav entry82_nav;
    struct MenuCmd_Skip2 entry82_downSkip;
    word entry82_end;
    struct MenuCoords8 entry83_rc;
    struct MenuCmd_Nav entry83_nav;
    struct MenuCmd_Skip2 entry83_downSkip;
    word entry83_end;
    struct MenuCoords8 entry84_rc;
    struct MenuCmd_Nav entry84_nav;
    struct MenuCmd_Skip2 entry84_downSkip;
    word entry84_end;
    struct MenuCoords8 entry85_rc;
    struct MenuCmd_Nav entry85_nav;
    struct MenuCmd_Skip2 entry85_downSkip;
    word entry85_end;
    struct MenuCoords8 entry86_rc;
    struct MenuCmd_Nav entry86_nav;
    struct MenuCmd_Skip2 entry86_downSkip;
    word entry86_end;
    word markInitEntry;
    struct MenuMark_StartMenu menu1Start3;
    struct MenuCoords8 entry87_rc;
    struct MenuCmd_Nav entry87_nav;
    struct MenuCmd_Skip2 entry87_upSkip;
    struct MenuCmd_Skip2 entry87_rightSkip;
    struct MenuCmd_Colors entry87_colors;
    struct MenuCmd_TextPtr entry87_text;
    struct MenuCmd_OnSelect entry87_onSelect;
    word entry87_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry88;
    struct MenuCoords8 entry89_rc;
    struct MenuCmd_Nav entry89_nav;
    struct MenuCmd_Skip2 entry89_downSkip;
    struct MenuCmd_Skip2 entry89_rightSkip;
    struct MenuCmd_Colors entry89_colors;
    struct MenuCmd_TextNoPtr entry89_text;
    struct MenuCmd_OnSelect entry89_onSelect;
    word entry89_end;
    struct MenuCoords8 entry90_rc;
    struct MenuCmd_Colors entry90_colors;
    struct MenuCmd_TextNoPtr entry90_text;
    word entry90_end;
    word markEndMenu;
};

typedef struct CompetitionCup2_4_2 CompetitionCup2_4_2, *PCompetitionCup2_4_2;

struct CompetitionCup2_4_2 {
    struct CompetitionCup2_4 compCup;
    char *text[2];
};

typedef struct MenuEntry_Byte_Nav MenuEntry_Byte_Nav, *PMenuEntry_Byte_Nav;

struct MenuEntry_Byte_Nav {
    struct MenuCoords8 rc;
    struct MenuCmd_Nav nav;
    word end;
};

typedef struct Position Position, *PPosition;

struct Position {
    word x;
    word y;
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

typedef struct Menu_Stadium Menu_Stadium, *PMenu_Stadium;

typedef struct MenuCmd_SpriteCopy MenuCmd_SpriteCopy, *PMenuCmd_SpriteCopy;

struct MenuCmd_SpriteCopy {
    word type;
    void *sprPtr;
};

struct Menu_Stadium {
    struct MenuHeader hdr;
    struct MenuMark_StartMenu menu1Start;
    word markByteCoords;
    struct MenuEntry_Byte_TextPtrOnly entries0_1[2];
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextNoPtr entry2_text;
    word entry2_end;
    struct MenuEntry_Byte_TextPtrOnly entry3;
    struct MenuCoords8 entry4_rc;
    struct MenuCmd_Colors entry4_colors;
    struct MenuCmd_TextNoPtr entry4_text;
    word entry4_end;
    struct MenuMark_StartMenu menu1Start2;
    word template5_markStart;
    struct MenuCoords8 template5_rc;
    struct MenuCmd_BeforeDraw template5_beforeDraw;
    word template5_end;
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_SpriteCopy entry5_spriteCopy;
    word entry5_end;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_SpriteCopy entry6_spriteCopy;
    word entry6_end;
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_SpriteCopy entry7_spriteCopy;
    word entry7_end;
    struct MenuCoords8 entry8_rc;
    struct MenuCmd_SpriteCopy entry8_spriteCopy;
    word entry8_end;
    struct MenuCoords8 entry9_rc;
    struct MenuCmd_SpriteCopy entry9_spriteCopy;
    word entry9_end;
    struct MenuCoords8 entry10_rc;
    struct MenuCmd_SpriteCopy entry10_spriteCopy;
    word entry10_end;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_SpriteCopy entry11_spriteCopy;
    word entry11_end;
    struct MenuCoords8 entry12_rc;
    struct MenuCmd_SpriteCopy entry12_spriteCopy;
    word entry12_end;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_SpriteCopy entry13_spriteCopy;
    word entry13_end;
    struct MenuCoords8 entry14_rc;
    struct MenuCmd_SpriteCopy entry14_spriteCopy;
    word entry14_end;
    struct MenuCoords8 entry15_rc;
    struct MenuCmd_SpriteCopy entry15_spriteCopy;
    word entry15_end;
    word markInitEntry;
    struct MenuMark_StartMenu menu1Start3;
    struct MenuEntry_Byte_TextPtrOnly entries16_31[16];
    struct MenuMark_StartMenu menu1Start4;
    word template32_markStart;
    struct MenuCoords8 template32_rc;
    struct MenuCmd_BeforeDraw template32_beforeDraw;
    word template32_end;
    struct MenuCoords8 entry32_rc;
    struct MenuCmd_SpriteCopy entry32_spriteCopy;
    word entry32_end;
    struct MenuCoords8 entry33_rc;
    struct MenuCmd_SpriteCopy entry33_spriteCopy;
    word entry33_end;
    struct MenuCoords8 entry34_rc;
    struct MenuCmd_SpriteCopy entry34_spriteCopy;
    word entry34_end;
    struct MenuCoords8 entry35_rc;
    struct MenuCmd_SpriteCopy entry35_spriteCopy;
    word entry35_end;
    struct MenuCoords8 entry36_rc;
    struct MenuCmd_SpriteCopy entry36_spriteCopy;
    word entry36_end;
    struct MenuCoords8 entry37_rc;
    struct MenuCmd_SpriteCopy entry37_spriteCopy;
    word entry37_end;
    struct MenuCoords8 entry38_rc;
    struct MenuCmd_SpriteCopy entry38_spriteCopy;
    word entry38_end;
    struct MenuCoords8 entry39_rc;
    struct MenuCmd_SpriteCopy entry39_spriteCopy;
    word entry39_end;
    struct MenuCoords8 entry40_rc;
    struct MenuCmd_SpriteCopy entry40_spriteCopy;
    word entry40_end;
    struct MenuCoords8 entry41_rc;
    struct MenuCmd_SpriteCopy entry41_spriteCopy;
    word entry41_end;
    struct MenuCoords8 entry42_rc;
    struct MenuCmd_SpriteCopy entry42_spriteCopy;
    word entry42_end;
    word markInitEntry2;
    struct MenuMark_StartMenu menu1Start5;
    struct MenuEntry_Byte_TextPtrOnly entries43_58[16];
    struct MenuEntry_Byte_CoordsOnly entry59;
    word markEndMenu;
};

typedef struct PoolPlayer PoolPlayer, *PPoolPlayer;

struct PoolPlayer {
    word teamId;
    byte playerOrdinal;
    byte teamName[17];
    struct PlayerFile player;
};

typedef struct Menu_ViewSquad Menu_ViewSquad, *PMenu_ViewSquad;

struct Menu_ViewSquad {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Colors_TextPtr entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuCoords8 entry3_rc;
    struct MenuCmd_Nav entry3_nav;
    struct MenuCmd_Invisible entry3_invisible;
    struct MenuCmd_Colors entry3_colors;
    struct MenuCmd_TextPtr entry3_text;
    struct MenuCmd_OnSelect entry3_onSelect;
    word entry3_end;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_BeforeDraw template1_afterDraw;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    word markWideCoords;
    struct MenuEntry_Wide_NavOnly entries4_19[16];
    struct MenuCoords16 entry20_rc;
    struct MenuCmd_Nav entry20_nav;
    struct MenuCmd_Skip2 entry20_skip;
    struct MenuCmd_Invisible entry20_invisible;
    word entry20_end;
    word markInitEntry;
    word markByteCoords2;
    struct MenuCoords8 entry21_rc;
    struct MenuCmd_Invisible entry21_invisible;
    struct MenuCmd_Nav entry21_nav;
    struct MenuCmd_Colors entry21_colors;
    struct MenuCmd_OnSelect entry21_onSelect;
    struct MenuCmd_BeforeDraw entry21_afterDraw;
    word entry21_end;
    struct MenuEntry_Byte_Invisible_NavOnly entry22;
    struct MenuMark_StartMenu menu2Start;
    word markWideCoords2;
    struct MenuCoords16 entry23_rc;
    struct MenuCmd_Colors entry23_colors;
    word entry23_end;
    word markByteCoords3;
    struct MenuEntry_Byte_NumberOnly entry24;
    struct MenuEntry_Byte_SpriteFgOnly entry25;
    struct MenuEntry_Byte_TextPtrOnly entry26;
    struct MenuEntry_Byte_TextNoPtrOnly entry27;
    struct MenuEntry_Byte_TextPtrOnly entry28;
    struct MenuEntry_Byte_TextNoPtrOnly entry29;
    struct MenuEntry_Byte_SpriteFgOnly entries30_32[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry33;
    word markWideCoords3;
    struct MenuCoords16 entry34_rc;
    struct MenuCmd_TextPtr entry34_text;
    word entry34_end;
    word markEndMenu;
};

typedef enum ScrollBlit {
    TILE_SHIFT_X=4,
    DMACONR_BLTBUSY_BIT=6,
    TILE_STRIDE=14,
    TILE_MASK=15,
    TILE_HEIGHT=16,
    BLTDMOD_PLANE_STEP=42,
    TILE_SIZE=128,
    PITCH_DEST_MOD_UNALIGNED=132,
    PITCH_DEST_MOD_ALIGNED=134,
    PITCH_PTR_ROW_BYTES=168,
    DMACON_BLT_OFF=1024,
    BLTSIZE_COL_16LINES_ALLPLANES=4097,
    BLTSIZE_TILE_COL=4097,
    BLTSIZE_OVERLAY_PANEL=4374,
    DMACON_BLT_ON=33792,
    WORD_ALIGN_EVEN_MASK=65534
} ScrollBlit;

typedef struct Menu_PlayerTransfer Menu_PlayerTransfer, *PMenu_PlayerTransfer;

struct Menu_PlayerTransfer {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords;
    struct MenuEntry_Wide_TextNoPtrOnly entries1_3[3];
    struct MenuCoords16 entry4_rc;
    struct MenuCmd_Invisible entry4_invisible;
    struct MenuCmd_TextNoPtr entry4_text;
    word entry4_end;
    struct MenuCoords16 entry5_rc;
    struct MenuCmd_Invisible entry5_invisible;
    struct MenuCmd_TextNoPtr entry5_text;
    word entry5_end;
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entries6_8[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry9;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries10_11[2];
    struct MenuCoords8 entry12_rc;
    struct MenuCmd_Invisible entry12_invisible;
    struct MenuCmd_Colors entry12_colors;
    struct MenuCmd_TextPtr entry12_text;
    struct MenuCmd_OnSelect entry12_onSelect;
    word entry12_end;
    word template13_markStart;
    struct MenuCoords8 template13_rc;
    struct MenuCmd_Colors template13_colors;
    struct MenuCmd_AfterDraw template13_afterDraw;
    word template13_end;
    word markWideCoords2;
    struct MenuEntry_Wide_CoordsOnly entries13_16[4];
    word markInitEntry;
    struct MenuEntry_Wide_ColorsOnly entry17;
    word markByteCoords3;
    struct MenuEntry_Byte_NumberOnly entry18;
    struct MenuEntry_Byte_SpriteFgOnly entry19;
    struct MenuEntry_Byte_TextPtrOnly entry20;
    struct MenuEntry_Byte_TextNoPtrOnly entry21;
    struct MenuEntry_Byte_TextPtrOnly entry22;
    struct MenuEntry_Byte_TextNoPtrOnly entry23;
    struct MenuEntry_Byte_SpriteFgOnly entries24_26[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry27;
    word markWideCoords3;
    struct MenuEntry_Wide_TextPtrOnly entry28;
    word markEndMenu;
};

typedef struct CompetitionCup_6_2 CompetitionCup_6_2, *PCompetitionCup_6_2;

struct CompetitionCup_6_2 {
    struct CompetitionCup comp;
    byte rounds[6];
    char *text[2];
};

typedef struct CompetitionCup_6_2_64 CompetitionCup_6_2_64, *PCompetitionCup_6_2_64;

struct CompetitionCup_6_2_64 {
    struct CompetitionCup comp;
    byte rounds[6];
    char *text[2];
    byte unk1[64];
};

typedef struct Menu_DIYCup Menu_DIYCup, *PMenu_DIYCup;

typedef struct Menu_DIYCup_StatsBlock Menu_DIYCup_StatsBlock, *PMenu_DIYCup_StatsBlock;

struct Menu_DIYCup_StatsBlock {
    struct MenuMark_StartMenu menuStart;
    struct MenuEntry_Byte_TextPtrOnly entry0;
    struct MenuEntry_Byte_TextNoPtrOnly entries1_4[4];
    struct MenuEntry_Byte_NumberOnly entry5;
    struct MenuEntry_Byte_NumberOnly entry6;
    struct MenuEntry_Byte_TextNoPtrOnly entry7;
};

struct Menu_DIYCup {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    word markByteCoords0;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Nav entry1_nav;
    struct MenuCmd_Skip2 entry1_skip;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    struct MenuCmd_OnSelect entry1_onSelect;
    word entry1_end;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Nav entry2_nav;
    struct MenuCmd_Invisible entry2_invisible;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextPtr entry2_text;
    word entry2_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuCoords8 entry4_rc;
    struct MenuCmd_Nav entry4_nav;
    struct MenuCmd_Invisible entry4_invisible;
    struct MenuCmd_Colors entry4_colors;
    struct MenuCmd_TextPtr entry4_text;
    struct MenuCmd_OnSelect entry4_onSelect;
    word entry4_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries5_6[2];
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_Invisible entry7_invisible;
    struct MenuCmd_Colors entry7_colors;
    struct MenuCmd_TextPtr entry7_text;
    struct MenuCmd_OnSelect entry7_onSelect;
    word entry7_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries8_10[3];
    struct MenuEntry_Byte_Colors_TextPtr entries11_13[3];
    struct MenuEntry_Byte_Colors_Number entries14_15[2];
    struct MenuCoords8 entry16_rc;
    struct MenuCmd_Nav entry16_nav;
    struct MenuCmd_Colors entry16_colors;
    struct MenuCmd_SpriteFg entry16_sprite;
    struct MenuCmd_OnSelect entry16_onSelect;
    word entry16_end;
    struct MenuCoords8 entry17_rc;
    struct MenuCmd_Nav entry17_nav;
    struct MenuCmd_Colors entry17_colors;
    struct MenuCmd_SpriteFg entry17_sprite;
    struct MenuCmd_OnSelect entry17_onSelect;
    word entry17_end;
    struct Menu_DIYCup_StatsBlock blocks18_65[6];
    struct MenuCoords8 entry66_rc;
    struct MenuCmd_InputFunc entry66_input;
    word entry66_end;
    word markEndMenu;
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

typedef struct MenuEntry_Wide_SpriteCopyOnly MenuEntry_Wide_SpriteCopyOnly, *PMenuEntry_Wide_SpriteCopyOnly;

struct MenuEntry_Wide_SpriteCopyOnly {
    struct MenuCoords16 rc;
    struct MenuCmd_SpriteCopy spriteCopy;
    word end;
};

typedef struct MarketPlayer MarketPlayer, *PMarketPlayer;

struct MarketPlayer {
    word teamId;
    byte playerOrdinal;
    byte padding;
    struct PlayerFile player;
};

typedef enum SpriteBlit {
    SPRITE_BLTSIZE_W1=3841,
    SPRITE_BLTSIZE_W2=3842
} SpriteBlit;

typedef struct Menu_Options Menu_Options, *PMenu_Options;

struct Menu_Options {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuMark_StartMenu startMenu0;
    struct MenuEntry_Byte_Colors_TextPtr labelGameLength;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect gameLength;
    struct MenuEntry_Byte_Colors_TextPtr labelPitchType;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect pitchType;
    struct MenuEntry_Byte_Colors_TextPtr labelAutoReplays;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect autoReplays;
    struct MenuEntry_Byte_Colors_TextPtr labelAllEqual;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect allEqual;
    struct MenuEntry_Byte_Colors_TextPtr labelAutoSaveHl;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect autoSaveHl;
    struct MenuEntry_Byte_Colors_TextPtr labelMenuMusic;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect menuMusic;
    struct MenuMark_StartMenu startMenuExit;
    struct MenuCoords8 exit_rc;
    struct MenuCmd_Nav exit_nav;
    struct MenuCmd_Colors exit_colors;
    struct MenuCmd_TextPtr exit_text;
    struct MenuCmd_InputFunc exit_input;
    word exit_end;
    struct MenuCoords8 versionText_rc;
    struct MenuCmd_Invisible versionText_invisible;
    struct MenuCmd_TextPtr versionText_text;
    word versionText_end;
    word markEndMenu;
};

typedef struct JobOffer JobOffer, *PJobOffer;

struct JobOffer {
    word teamNo;
    byte teamName[18];
    dword amountOffered;
    word unkn;
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

typedef enum AssetSysOp {
    ASSET_OP_INIT_CONTEXT=0,
    ASSET_OP_INIT_SOURCE0=2,
    ASSET_OP_LOAD_FILE=4,
    ASSET_OP_INIT_SOURCE2=6,
    ASSET_OP_RESOLVE_ASSET_LIST=8,
    ASSET_OP_DO_CRITICAL=10,
    ASSET_OP_5_THEN_MAYBE_6=12,
    ASSET_OP_SELECT_AND_OPEN=14,
    ASSET_OP_OPEN_ANY_SOURCE=16
} AssetSysOp;

typedef enum DiyCompetitionTypes {
    DIY_LEAGUE=0,
    DIY_CUP=1,
    DIY_TOURNAMENT=2
} DiyCompetitionTypes;

typedef struct CompetitionCup2_6_2 CompetitionCup2_6_2, *PCompetitionCup2_6_2;

struct CompetitionCup2_6_2 {
    struct CompetitionCup2 compCup;
    byte roundSettings[6];
    char *text[2];
};

typedef struct CompetitionCup_6_2_8 CompetitionCup_6_2_8, *PCompetitionCup_6_2_8;

struct CompetitionCup_6_2_8 {
    struct CompetitionCup comp;
    byte rounds[6];
    char *text[2];
    byte unk1[8];
};

typedef struct CompetitionLeague_2_4_2_24 CompetitionLeague_2_4_2_24, *PCompetitionLeague_2_4_2_24;

struct CompetitionLeague_2_4_2_24 {
    struct CompetitionLeague comp;
    struct Division divisions[2];
    byte unk1;
    char *text[4];
    char *unk2[2];
    byte unk3[24];
};

typedef struct AnimTable_12 AnimTable_12, *PAnimTable_12;

struct AnimTable_12 {
    word frameDelay;
    short *animFrames[12];
};

typedef enum BitplaneLayout_Times {
    PLANE_STRIDE_TIMES2=88,
    PLANE_STRIDE_TIMES3=132,
    PLANE_STRIDE_TIMES4=176,
    PLANE_STRIDE_TIMES5=220,
    PLANE_STRIDE_TIMES6=264,
    PLANE_STRIDE_TIMES7=308
} BitplaneLayout_Times;

typedef struct CompetitionLeague_4_2_8 CompetitionLeague_4_2_8, *PCompetitionLeague_4_2_8;

struct CompetitionLeague_4_2_8 {
    struct CompetitionLeague comp;
    struct Division divisions[4];
    byte unk1;
    char *text[2];
    byte unk2[8];
};

typedef struct Menu_DesignDIYLeague Menu_DesignDIYLeague, *PMenu_DesignDIYLeague;

struct Menu_DesignDIYLeague {
    struct MenuHeader hdr;
    word markByteCoords0;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords;
    struct MenuCoords16 entry1_rc;
    struct MenuCmd_Invisible entry1_invisible;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    word entry1_end;
    struct MenuMark_StartMenu menu1Start;
    word markByteCoords1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Colors_TextPtr entries3_7[5];
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entries8_10[3];
    struct MenuEntry_Byte_Colors_TextPtr entry11;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry12;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Nav entry13_nav;
    struct MenuCmd_Colors entry13_colors;
    struct MenuCmd_Number entry13_number;
    struct MenuCmd_OnSelect entry13_onSelect;
    word entry13_end;
    struct MenuCoords8 entry14_rc;
    struct MenuCmd_Nav entry14_nav;
    struct MenuCmd_Colors entry14_colors;
    struct MenuCmd_TextNoPtr entry14_text;
    struct MenuCmd_OnSelect entry14_onSelect;
    word entry14_end;
    struct MenuCoords8 entry15_rc;
    struct MenuCmd_Nav entry15_nav;
    struct MenuCmd_Colors entry15_colors;
    struct MenuCmd_Number entry15_number;
    struct MenuCmd_OnSelect entry15_onSelect;
    word entry15_end;
    struct MenuCoords8 entry16_rc;
    struct MenuCmd_Nav entry16_nav;
    struct MenuCmd_Colors entry16_colors;
    struct MenuCmd_TextNoPtr entry16_text;
    struct MenuCmd_OnSelect entry16_onSelect;
    word entry16_end;
    struct MenuCoords8 entry17_rc;
    struct MenuCmd_Nav entry17_nav;
    struct MenuCmd_Colors entry17_colors;
    struct MenuCmd_TextNoPtr entry17_text;
    struct MenuCmd_OnSelect entry17_onSelect;
    word entry17_end;
    struct MenuCoords8 entry18_rc;
    struct MenuCmd_Invisible entry18_invisible;
    struct MenuCmd_Colors entry18_colors;
    struct MenuCmd_TextNoPtr entry18_text;
    word entry18_end;
    struct MenuCoords8 entry19_rc;
    struct MenuCmd_Invisible entry19_invisible;
    struct MenuCmd_Colors entry19_colors;
    struct MenuCmd_TextNoPtr entry19_text;
    word entry19_end;
    struct MenuMark_StartMenu menu2Start;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries20_22[3];
    struct MenuCoords8 entry23_rc;
    struct MenuCmd_Colors entry23_colors;
    struct MenuCmd_TextNoPtr entry23_text;
    word entry23_end;
    word markEndMenu;
};

typedef struct Menu_CareerOver Menu_CareerOver, *PMenu_CareerOver;

struct Menu_CareerOver {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuCoords8 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextNoPtr entry1_text;
    word entry1_end;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextNoPtr entry2_text;
    word entry2_end;
    struct MenuCoords8 entry3_rc;
    struct MenuCmd_Invisible entry3_invisible;
    struct MenuCmd_TextPtr entry3_text;
    word entry3_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry8;
    word markEndMenu;
};

typedef enum MenuFrameColor {
    MENU_FRAME_COLOR_NONE=0,
    MENU_FRAME_COLOR_GRAY=1,
    MENU_FRAME_COLOR_WHITE=2,
    MENU_FRAME_COLOR_TRUE_BLACK=3,
    MENU_FRAME_COLOR_DARK_BROWN=4,
    MENU_FRAME_COLOR_UMBER=5,
    MENU_FRAME_COLOR_ORANGE=6,
    MENU_FRAME_COLOR_DARK_GRAY=7,
    MENU_FRAME_COLOR_LIGHT_GRAY=8,
    MENU_FRAME_COLOR_VERY_DARK=9,
    MENU_FRAME_COLOR_RED=10,
    MENU_FRAME_COLOR_BLUE=11,
    MENU_FRAME_COLOR_VERY_DARK_2=12,
    MENU_FRAME_COLOR_PALE_BLUE=13,
    MENU_FRAME_COLOR_GREEN=14,
    MENU_FRAME_COLOR_YELLOW=15
} MenuFrameColor;

typedef struct AnimTable_20 AnimTable_20, *PAnimTable_20;

struct AnimTable_20 {
    word frameDelay;
    short *animFrames[20];
};

typedef struct SpriteGraphics SpriteGraphics, *PSpriteGraphics;

struct SpriteGraphics {
    void *sprData;
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

typedef struct Menu_BuyOtherPlayers Menu_BuyOtherPlayers, *PMenu_BuyOtherPlayers;

struct Menu_BuyOtherPlayers {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Colors_TextPtr entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_BeforeDraw template1_afterDraw;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    word markWideCoords;
    struct MenuEntry_Wide_NavOnly entries3_18[16];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords16 entry19_rc;
    struct MenuCmd_Colors entry19_colors;
    word entry19_end;
    word markByteCoords2;
    struct MenuEntry_Byte_NumberOnly entry20;
    struct MenuEntry_Byte_SpriteFgOnly entry21;
    struct MenuEntry_Byte_TextPtrOnly entry22;
    struct MenuEntry_Byte_TextNoPtrOnly entry23;
    struct MenuEntry_Byte_TextPtrOnly entry24;
    struct MenuEntry_Byte_TextNoPtrOnly entry25;
    struct MenuEntry_Byte_SpriteFgOnly entries26_28[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry29;
    word markWideCoords2;
    struct MenuCoords16 entry30_rc;
    struct MenuCmd_TextPtr entry30_text;
    word entry30_end;
    word markEndMenu;
};

typedef struct CompetitionCup_4_2 CompetitionCup_4_2, *PCompetitionCup_4_2;

struct CompetitionCup_4_2 {
    struct CompetitionCup comp;
    byte rounds[4];
    char *text[2];
};

typedef struct Menu_Highlights Menu_Highlights, *PMenu_Highlights;

struct Menu_Highlights {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    word markEndMenu;
};

typedef struct Menu_GotJobOffer Menu_GotJobOffer, *PMenu_GotJobOffer;

struct Menu_GotJobOffer {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords;
    struct MenuEntry_Wide_TextNoPtrOnly entries1_7[7];
    word markByteCoords2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry8;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry9;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry10;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry11;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry12;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry13;
    word markEndMenu;
};

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

typedef struct Menu_EditTeams Menu_EditTeams, *PMenu_EditTeams;

struct Menu_EditTeams {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry0;
    word markWideCoords;
    struct MenuCoords16 entry1_rc;
    struct MenuCmd_Invisible entry1_invisible;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_Number entry1_number;
    word entry1_end;
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuMark_StartMenu menu1Start;
    struct MenuEntry_Byte_TextPtrOnly entry4;
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_Colors entry5_colors;
    struct MenuCmd_SpriteCopy entry5_spriteCopy;
    struct MenuCmd_Nav entry5_nav;
    struct MenuCmd_InputFunc entry5_inputFunc;
    word entry5_end;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_SpriteCopy entry6_spriteCopy;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_InputFunc entry6_inputFunc;
    word entry6_end;
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Colors entry7_colors;
    struct MenuCmd_SpriteCopy entry7_spriteCopy;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_InputFunc entry7_inputFunc;
    word entry7_end;
    struct MenuMark_StartMenu menu1Start2;
    struct MenuEntry_Byte_TextPtrOnly entry8;
    struct MenuCoords8 entry9_rc;
    struct MenuCmd_Colors entry9_colors;
    struct MenuCmd_SpriteCopy entry9_spriteCopy;
    struct MenuCmd_Nav entry9_nav;
    struct MenuCmd_InputFunc entry9_inputFunc;
    word entry9_end;
    struct MenuCoords8 entry10_rc;
    struct MenuCmd_Colors entry10_colors;
    struct MenuCmd_SpriteCopy entry10_spriteCopy;
    struct MenuCmd_Nav entry10_nav;
    struct MenuCmd_InputFunc entry10_inputFunc;
    word entry10_end;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_Colors entry11_colors;
    struct MenuCmd_SpriteCopy entry11_spriteCopy;
    struct MenuCmd_Nav entry11_nav;
    struct MenuCmd_InputFunc entry11_inputFunc;
    word entry11_end;
    struct MenuMark_StartMenu menu1Start3;
    struct MenuCoords8 entry12_rc;
    struct MenuCmd_Nav entry12_nav;
    struct MenuCmd_Colors entry12_colors;
    struct MenuCmd_SpriteFg entry12_sprite;
    struct MenuCmd_OnSelect entry12_onSelect;
    word entry12_end;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Nav entry13_nav;
    struct MenuCmd_Colors entry13_colors;
    struct MenuCmd_SpriteFg entry13_sprite;
    struct MenuCmd_OnSelect entry13_onSelect;
    word entry13_end;
    struct MenuCoords8 entry14_rc;
    struct MenuCmd_Nav entry14_nav;
    struct MenuCmd_Colors entry14_colors;
    struct MenuCmd_SpriteFg entry14_sprite;
    struct MenuCmd_OnSelect entry14_onSelect;
    word entry14_end;
    struct MenuCoords8 entry15_rc;
    struct MenuCmd_Nav entry15_nav;
    struct MenuCmd_Colors entry15_colors;
    struct MenuCmd_SpriteFg entry15_sprite;
    struct MenuCmd_OnSelect entry15_onSelect;
    word entry15_end;
    struct MenuMark_StartMenu menu1Start4;
    struct MenuCoords8 entry16_rc;
    struct MenuCmd_Nav entry16_nav;
    struct MenuCmd_Colors entry16_colors;
    struct MenuCmd_SpriteFg entry16_sprite;
    struct MenuCmd_OnSelect entry16_onSelect;
    word entry16_end;
    struct MenuCoords8 entry17_rc;
    struct MenuCmd_Nav entry17_nav;
    struct MenuCmd_Colors entry17_colors;
    struct MenuCmd_SpriteFg entry17_sprite;
    struct MenuCmd_OnSelect entry17_onSelect;
    word entry17_end;
    struct MenuCoords8 entry18_rc;
    struct MenuCmd_Nav entry18_nav;
    struct MenuCmd_Colors entry18_colors;
    struct MenuCmd_SpriteFg entry18_sprite;
    struct MenuCmd_OnSelect entry18_onSelect;
    word entry18_end;
    struct MenuCoords8 entry19_rc;
    struct MenuCmd_Nav entry19_nav;
    struct MenuCmd_Colors entry19_colors;
    struct MenuCmd_SpriteFg entry19_sprite;
    struct MenuCmd_OnSelect entry19_onSelect;
    word entry19_end;
    struct MenuMark_StartMenu menu1Start5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry20;
    word markWideCoords2;
    struct MenuCoords16 entry21_rc;
    struct MenuCmd_Nav entry21_nav;
    struct MenuCmd_Colors entry21_colors;
    struct MenuCmd_TextPtr entry21_text;
    struct MenuCmd_OnSelect entry21_onSelect;
    word entry21_end;
    word markByteCoords3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry22;
    word template23_markStart;
    struct MenuCoords8 template23_rc;
    struct MenuCmd_BeforeDraw template23_beforeDraw;
    word template23_end;
    struct MenuMark_StartMenu menu1Start6;
    struct MenuCoords8 entry23_rc;
    struct MenuCmd_Nav entry23_nav;
    struct MenuCmd_Colors entry23_colors;
    struct MenuCmd_SpriteFg entry23_sprite;
    struct MenuCmd_OnSelect entry23_onSelect;
    word entry23_end;
    struct MenuCoords8 entry24_rc;
    struct MenuCmd_Nav entry24_nav;
    struct MenuCmd_Colors entry24_colors;
    struct MenuCmd_SpriteFg entry24_sprite;
    struct MenuCmd_OnSelect entry24_onSelect;
    word entry24_end;
    struct MenuCoords8 entry25_rc;
    struct MenuCmd_Nav entry25_nav;
    struct MenuCmd_Colors entry25_colors;
    struct MenuCmd_SpriteFg entry25_sprite;
    struct MenuCmd_OnSelect entry25_onSelect;
    word entry25_end;
    struct MenuCoords8 entry26_rc;
    struct MenuCmd_Nav entry26_nav;
    struct MenuCmd_Colors entry26_colors;
    struct MenuCmd_SpriteFg entry26_sprite;
    struct MenuCmd_OnSelect entry26_onSelect;
    word entry26_end;
    struct MenuCoords8 entry27_rc;
    struct MenuCmd_Nav entry27_nav;
    struct MenuCmd_Colors entry27_colors;
    struct MenuCmd_SpriteFg entry27_sprite;
    struct MenuCmd_OnSelect entry27_onSelect;
    word entry27_end;
    struct MenuCoords8 entry28_rc;
    struct MenuCmd_Nav entry28_nav;
    struct MenuCmd_Colors entry28_colors;
    struct MenuCmd_SpriteFg entry28_sprite;
    struct MenuCmd_OnSelect entry28_onSelect;
    word entry28_end;
    struct MenuCoords8 entry29_rc;
    struct MenuCmd_Nav entry29_nav;
    struct MenuCmd_Colors entry29_colors;
    struct MenuCmd_SpriteFg entry29_sprite;
    struct MenuCmd_OnSelect entry29_onSelect;
    word entry29_end;
    struct MenuCoords8 entry30_rc;
    struct MenuCmd_Nav entry30_nav;
    struct MenuCmd_Colors entry30_colors;
    struct MenuCmd_SpriteFg entry30_sprite;
    struct MenuCmd_OnSelect entry30_onSelect;
    word entry30_end;
    struct MenuCoords8 entry31_rc;
    struct MenuCmd_Nav entry31_nav;
    struct MenuCmd_Colors entry31_colors;
    struct MenuCmd_SpriteFg entry31_sprite;
    struct MenuCmd_OnSelect entry31_onSelect;
    word entry31_end;
    struct MenuCoords8 entry32_rc;
    struct MenuCmd_Nav entry32_nav;
    struct MenuCmd_Colors entry32_colors;
    struct MenuCmd_SpriteFg entry32_sprite;
    struct MenuCmd_OnSelect entry32_onSelect;
    word entry32_end;
    struct MenuCoords8 entry33_rc;
    struct MenuCmd_Nav entry33_nav;
    struct MenuCmd_Colors entry33_colors;
    struct MenuCmd_SpriteFg entry33_sprite;
    struct MenuCmd_OnSelect entry33_onSelect;
    word entry33_end;
    struct MenuCoords8 entry34_rc;
    struct MenuCmd_Nav entry34_nav;
    struct MenuCmd_Colors entry34_colors;
    struct MenuCmd_SpriteFg entry34_sprite;
    struct MenuCmd_OnSelect entry34_onSelect;
    word entry34_end;
    struct MenuCoords8 entry35_rc;
    struct MenuCmd_Nav entry35_nav;
    struct MenuCmd_Colors entry35_colors;
    struct MenuCmd_SpriteFg entry35_sprite;
    struct MenuCmd_OnSelect entry35_onSelect;
    word entry35_end;
    struct MenuCoords8 entry36_rc;
    struct MenuCmd_Nav entry36_nav;
    struct MenuCmd_Colors entry36_colors;
    struct MenuCmd_SpriteFg entry36_sprite;
    struct MenuCmd_OnSelect entry36_onSelect;
    word entry36_end;
    struct MenuCoords8 entry37_rc;
    struct MenuCmd_Nav entry37_nav;
    struct MenuCmd_Colors entry37_colors;
    struct MenuCmd_SpriteFg entry37_sprite;
    struct MenuCmd_OnSelect entry37_onSelect;
    word entry37_end;
    struct MenuCoords8 entry38_rc;
    struct MenuCmd_Nav entry38_nav;
    struct MenuCmd_Colors entry38_colors;
    struct MenuCmd_SpriteFg entry38_sprite;
    struct MenuCmd_OnSelect entry38_onSelect;
    word entry38_end;
    word markInitEntry;
    struct MenuMark_StartMenu menu1Start7;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries39_54[16];
    struct MenuEntry_Byte_NumberOnly entry55;
    struct MenuEntry_Byte_ColorsOnly entry56;
    struct MenuEntry_Byte_TextPtrOnly entry57;
    struct MenuEntry_Byte_SpriteFgOnly entries58_60[3];
    word markEndMenu;
};

typedef struct AudioChannel AudioChannel, *PAudioChannel;

struct AudioChannel {
    dword hwRegBase;
    dword pvSampleBase;
    dword pvPitchLfoPtr;
    dword pvVolLfoPtr;
    dword pvEnvDataPtr;
    word pvSampleSlot;
    word pvSampleOffset;
    word pvSampleLength;
    word pvPitchLfoLoop;
    dword pvPitchLfoLen;
    dword pvPitchLfoIdx;
    word pvVolLfoLoop;
    dword pvVolLfoLen;
    dword pvVolLfoIdx;
    word pvDmaBit;
    word pvVolScale;
    word pvCurVol;
    word pvBasePeriod;
    word pvCurPeriod;
    byte pvStartFlag;
    byte pvReloadFlag;
    byte pvEnvState;
    byte pvEnvDelta;
    byte pvEnvCounter;
    byte pvEnvDivisor;
    byte pvEnvTarget;
    byte pvEnvCurrent;
    byte pvPitchslideCount;
    byte _pad41;
    dword pvPitchslideRate;
    dword pvPitchslideAccum;
    dword pvVariantDesc;
    dword pvNoteScript;
    dword pvWaveData;
    byte pvStepPeriod;
    byte pvScriptTimer;
    byte pvRepeatPeriod;
    byte pvPeriodCounter;
    byte pvVariantId;
    byte pvEnabled;
    dword svSampleBase;
    dword svPitchLfoPtr;
    dword svVolLfoPtr;
    dword svEnvDataPtr;
    word svSampleSlot;
    word svSampleOffset;
    word svSampleLength;
    word svPitchLfoLoop;
    dword svPitchLfoLen;
    dword svPitchLfoIdx;
    word svVolLfoLoop;
    dword svVolLfoLen;
    dword svVolLfoIdx;
    word svDmaBit;
    word svVolScale;
    word svCurVol;
    word svBasePeriod;
    word svCurPeriod;
    byte svStartFlag;
    byte svReloadFlag;
    byte svEnvState;
    byte svEnvDelta;
    byte svEnvCounter;
    byte svEnvDivisor;
    byte svEnvTarget;
    byte svEnvCurrent;
    byte svPitchslideCount;
    byte _pad99;
    dword svPitchslideRate;
    dword svPitchslideAccum;
    dword svVariantDesc;
    dword svWaveData;
    byte svStepPeriod;
    byte svScriptTimer;
    byte svRepeatPeriod;
    byte svPeriodCounter;
    byte svVariantId;
    byte _padAF;
};

typedef enum TacklingState {
    TS_STARTED_TACKLING=0,
    TS_TACKLING_THE_BALL=1,
    TS_GOOD_TACKLE=2
} TacklingState;

typedef struct Menu_PlayMatch Menu_PlayMatch, *PMenu_PlayMatch;

struct Menu_PlayMatch {
    struct MenuHeader hdr;
    struct MenuMark_StartMenu menu1Start;
    word markByteCoords;
    struct MenuCoords8 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_SpriteFg entry0_sprite;
    word entry0_end;
    struct MenuEntry_Byte_Colors_TextPtr entry1;
    struct MenuEntry_Byte_TextNoPtrOnly entry2;
    struct MenuEntry_Byte_TextPtrOnly entries3_4[2];
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Skip2 entry6_upSkip;
    struct MenuCmd_Skip2 entry6_rightSkip;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_TextPtr entry6_multiline;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    struct MenuCoords8 entry8_rc;
    struct MenuCmd_Nav entry8_nav;
    struct MenuCmd_Skip2 entry8_rightSkip;
    struct MenuCmd_Colors entry8_colors;
    struct MenuCmd_TextPtr entry8_text;
    struct MenuCmd_OnSelect entry8_onSelect;
    word entry8_end;
    struct MenuCoords8 entry9_rc;
    struct MenuCmd_Nav entry9_nav;
    struct MenuCmd_Skip2 entry9_upSkip;
    struct MenuCmd_Skip2 entry9_rightSkip;
    struct MenuCmd_Colors entry9_colors;
    struct MenuCmd_TextPtr entry9_text;
    struct MenuCmd_OnSelect entry9_onSelect;
    word entry9_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry10;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_OnSelect entry11_onSelect;
    word entry11_end;
    struct MenuEntry_Byte_ColorsOnly entry12;
    word template13_markStart;
    struct MenuCoords8 template13_rc;
    struct MenuCmd_Colors template13_colors;
    struct MenuCmd_AfterDraw template13_afterDraw;
    struct MenuCmd_OnSelect template13_onSelect;
    word template13_end;
    struct MenuEntry_Byte_NavOnly entries13_23[11];
    struct MenuCoords8 entry24_rc;
    struct MenuCmd_Nav entry24_nav;
    struct MenuCmd_Skip2 entry24_upSkip;
    word entry24_end;
    struct MenuCoords8 entry25_rc;
    struct MenuCmd_Nav entry25_nav;
    struct MenuCmd_Skip2 entry25_upSkip;
    word entry25_end;
    struct MenuCoords8 entry26_rc;
    struct MenuCmd_Nav entry26_nav;
    struct MenuCmd_Skip2 entry26_upSkip;
    word entry26_end;
    struct MenuCoords8 entry27_rc;
    struct MenuCmd_Nav entry27_nav;
    struct MenuCmd_Skip2 entry27_upSkip;
    word entry27_end;
    struct MenuCoords8 entry28_rc;
    struct MenuCmd_Nav entry28_nav;
    struct MenuCmd_Skip2 entry28_upSkip;
    word entry28_end;
    struct MenuCoords8 entry29_rc;
    struct MenuCmd_Nav entry29_nav;
    struct MenuCmd_Skip2 entry29_upSkip;
    struct MenuCmd_Invisible entry29_invisible;
    word entry29_end;
    word markInitEntry;
    struct MenuCoords8 entry30_rc;
    struct MenuCmd_Invisible entry30_invisible;
    struct MenuCmd_Nav entry30_nav;
    struct MenuCmd_Colors entry30_colors;
    struct MenuCmd_OnSelect entry30_onSelect;
    struct MenuCmd_AfterDraw entry30_afterDraw;
    word entry30_end;
    struct MenuCoords8 entry31_rc;
    struct MenuCmd_Colors entry31_colors;
    struct MenuCmd_SpriteFg entry31_sprite;
    word entry31_end;
    struct MenuEntry_Byte_NumberOnly entry32;
    struct MenuEntry_Byte_Colors_TextPtr entry33;
    struct MenuEntry_Byte_TextPtrOnly entry34;
    struct MenuEntry_Byte_TextNoPtrOnly entry35;
    struct MenuEntry_Byte_TextPtrOnly entry36;
    struct MenuCoords8 entry37_rc;
    struct MenuCmd_Colors entry37_colors;
    struct MenuCmd_SpriteFg entry37_sprite;
    word entry37_end;
    struct MenuMark_StartMenu menu1Start2;
    word template38_markStart;
    struct MenuCoords8 template38_rc;
    struct MenuCmd_Colors template38_colors;
    struct MenuCmd_OnSelect template38_onSelect;
    word template38_end;
    struct MenuCoords8 entry38_rc;
    struct MenuCmd_Nav entry38_nav;
    struct MenuCmd_TextPtr entry38_text;
    word entry38_end;
    struct MenuCoords8 entry39_rc;
    struct MenuCmd_Nav entry39_nav;
    struct MenuCmd_TextPtr entry39_text;
    word entry39_end;
    struct MenuCoords8 entry40_rc;
    struct MenuCmd_Nav entry40_nav;
    struct MenuCmd_TextPtr entry40_text;
    word entry40_end;
    struct MenuCoords8 entry41_rc;
    struct MenuCmd_Nav entry41_nav;
    struct MenuCmd_TextPtr entry41_text;
    word entry41_end;
    struct MenuCoords8 entry42_rc;
    struct MenuCmd_Nav entry42_nav;
    struct MenuCmd_TextPtr entry42_text;
    word entry42_end;
    struct MenuCoords8 entry43_rc;
    struct MenuCmd_Nav entry43_nav;
    struct MenuCmd_TextPtr entry43_text;
    word entry43_end;
    struct MenuCoords8 entry44_rc;
    struct MenuCmd_Nav entry44_nav;
    struct MenuCmd_TextPtr entry44_text;
    word entry44_end;
    struct MenuCoords8 entry45_rc;
    struct MenuCmd_Nav entry45_nav;
    struct MenuCmd_TextPtr entry45_text;
    word entry45_end;
    struct MenuCoords8 entry46_rc;
    struct MenuCmd_Nav entry46_nav;
    struct MenuCmd_TextPtr entry46_text;
    word entry46_end;
    struct MenuCoords8 entry47_rc;
    struct MenuCmd_Nav entry47_nav;
    struct MenuCmd_TextPtr entry47_text;
    word entry47_end;
    struct MenuCoords8 entry48_rc;
    struct MenuCmd_Nav entry48_nav;
    struct MenuCmd_TextPtr entry48_text;
    word entry48_end;
    struct MenuCoords8 entry49_rc;
    struct MenuCmd_Nav entry49_nav;
    struct MenuCmd_TextPtr entry49_text;
    word entry49_end;
    struct MenuCoords8 entry50_rc;
    struct MenuCmd_Nav entry50_nav;
    struct MenuCmd_TextPtr entry50_text;
    word entry50_end;
    struct MenuCoords8 entry51_rc;
    struct MenuCmd_Nav entry51_nav;
    struct MenuCmd_TextPtr entry51_text;
    word entry51_end;
    struct MenuCoords8 entry52_rc;
    struct MenuCmd_Nav entry52_nav;
    struct MenuCmd_TextPtr entry52_text;
    word entry52_end;
    struct MenuCoords8 entry53_rc;
    struct MenuCmd_Nav entry53_nav;
    struct MenuCmd_TextPtr entry53_text;
    word entry53_end;
    struct MenuCoords8 entry54_rc;
    struct MenuCmd_Nav entry54_nav;
    struct MenuCmd_TextPtr entry54_text;
    word entry54_end;
    struct MenuCoords8 entry55_rc;
    struct MenuCmd_Nav entry55_nav;
    struct MenuCmd_TextPtr entry55_text;
    word entry55_end;
    word markInitEntry2;
    struct MenuMark_StartMenu menu1Start3;
    struct MenuEntry_Byte_SpriteFgOnly entry56;
    struct MenuEntry_Byte_TextNoPtrOnly entries57_67[11];
    word markEndMenu;
};

typedef struct CompetitionCup2_4_2_24 CompetitionCup2_4_2_24, *PCompetitionCup2_4_2_24;

struct CompetitionCup2_4_2_24 {
    struct CompetitionCup2_4 compCup;
    char *text[2];
    byte unk1[24];
};

typedef struct Menu_FriendlyGame Menu_FriendlyGame, *PMenu_FriendlyGame;

struct Menu_FriendlyGame {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuMark_StartMenu menu1Start;
    struct MenuEntry_Byte_Colors_TextPtr entry1;
    struct MenuEntry_Byte_Colors_TextPtr entry2;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry4;
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_Nav entry5_nav;
    struct MenuCmd_Colors entry5_colors;
    struct MenuCmd_TextNoPtr entry5_text;
    struct MenuCmd_OnSelect entry5_onSelect;
    word entry5_end;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_TextNoPtr entry6_text;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    struct MenuMark_StartMenu menu2Start;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry8;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry9;
    struct MenuCoords8 entry10_rc;
    struct MenuCmd_Colors entry10_colors;
    struct MenuCmd_TextNoPtr entry10_text;
    word entry10_end;
    word markEndMenu;
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

typedef struct Menu_ShowPlayerMarket Menu_ShowPlayerMarket, *PMenu_ShowPlayerMarket;

struct Menu_ShowPlayerMarket {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_TextNoPtrOnly entry1;
    struct MenuEntry_Byte_TextPtrOnly entry2;
    struct MenuEntry_Byte_Colors_TextPtr entry3;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry4;
    struct MenuEntry_Byte_Colors_TextPtr entry5;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Skip2 entry6_skip;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_StringTable entry6_strTab;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry8;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry9;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_BeforeDraw template1_afterDraw;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    word markWideCoords;
    struct MenuEntry_Wide_NavOnly entries10_19[10];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords16 entry20_rc;
    struct MenuCmd_Colors entry20_colors;
    word entry20_end;
    word markByteCoords2;
    struct MenuEntry_Byte_NumberOnly entry21;
    struct MenuEntry_Byte_SpriteFgOnly entry22;
    struct MenuEntry_Byte_TextPtrOnly entry23;
    struct MenuEntry_Byte_TextNoPtrOnly entry24;
    struct MenuEntry_Byte_TextPtrOnly entry25;
    struct MenuEntry_Byte_TextNoPtrOnly entry26;
    struct MenuEntry_Byte_SpriteFgOnly entries27_29[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry30;
    word markWideCoords2;
    struct MenuCoords16 entry31_rc;
    struct MenuCmd_TextPtr entry31_text;
    word entry31_end;
    word markEndMenu;
};

typedef struct MenuEntry_Byte_Colors_TextPtr_BeforeDraw MenuEntry_Byte_Colors_TextPtr_BeforeDraw, *PMenuEntry_Byte_Colors_TextPtr_BeforeDraw;

struct MenuEntry_Byte_Colors_TextPtr_BeforeDraw {
    struct MenuCoords8 rc;
    struct MenuCmd_Colors colors;
    struct MenuCmd_TextPtr text;
    struct MenuCmd_BeforeDraw beforeDraw;
    word end;
};

typedef struct MenuCmd_BgFunc MenuCmd_BgFunc, *PMenuCmd_BgFunc;

struct MenuCmd_BgFunc {
    word type;
    void *funcPtr;
};

typedef struct Menu_Continue Menu_Continue, *PMenu_Continue;

struct Menu_Continue {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_coords;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextPtr entry0_text;
    word entry0_end;
    word markByteCoords;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    struct MenuCmd_OnSelect entry1_onSelect;
    word entry1_end;
    word markEndMenu;
};

typedef struct Menu_TopGoalScorers Menu_TopGoalScorers, *PMenu_TopGoalScorers;

struct Menu_TopGoalScorers {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_TextPtr entry1_multilineText;
    word entry1_end;
    word markWideCoords;
    struct MenuEntry_Wide_MultilineText entries2_4[3];
    word markByteCoords2;
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_Colors entry5_colors;
    struct MenuCmd_TextPtr entry5_text;
    struct MenuCmd_OnSelect entry5_onSelect;
    word entry5_end;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_BeforeDraw template1_beforeDraw;
    word template1_end;
    struct MenuEntry_Byte_NumberOnly entries6_20[15];
    word markInitEntry;
    struct MenuEntry_Byte_TextPtrOnly entry21;
    struct MenuEntry_Byte_TextNoPtrOnly entry22;
    struct MenuEntry_Byte_NumberOnly entry23;
    word markWideCoords2;
    struct MenuEntry_Wide_NumberOnly entries24_26[3];
    word markEndMenu;
};

typedef enum Frontbuffer {
    FB_BLT_MOD_AFTER_1_WORD=174,
    FRONTBUFFER_ROW_STRIDE_BYTES=176,
    FRONTBUFFER_VISIBLE_LINES=272,
    FRONTBUFFER_TOTAL_LINES=273,
    FB_COPY_WORDS_MINUS1=24023,
    FRONTBUFFER_SIZE_VISIBLE_BYTES=47872,
    FRONTBUFFER_SIZE_TOTAL_BYTES=48048
} Frontbuffer;

typedef struct QualifyingGroup_9_2 QualifyingGroup_9_2, *PQualifyingGroup_9_2;

struct QualifyingGroup_9_2 {
    struct CompetitionCup *compCup[9];
    enum CountryNumbers countries[2];
};

typedef enum AmigaRegisters {
    _DMACON=150,
    _INTENA=154,
    _INTREQ=156,
    AUD0VOL=168,
    AUD1VOL=184,
    AUD2VOL=200,
    AUD3VOL=216
} AmigaRegisters;

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

typedef struct CompetitionLeague_4_10_24 CompetitionLeague_4_10_24, *PCompetitionLeague_4_10_24;

struct CompetitionLeague_4_10_24 {
    struct CompetitionLeague comp;
    struct Division divisions[4];
    byte unk1;
    char *text[10];
    byte unk2[24];
};

typedef struct Menu_JobOffers Menu_JobOffers, *PMenu_JobOffers;

struct Menu_JobOffers {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_OnSelect template1_onSelect;
    struct MenuCmd_BeforeDraw template1_afterDraw;
    word template1_end;
    word markWideCoords;
    struct MenuEntry_Wide_NavOnly entries1_5[5];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entry6;
    struct MenuMark_StartMenu menu3Start;
    word template2_markStart;
    struct MenuCoords8 template2_rc;
    struct MenuCmd_Colors template2_colors;
    struct MenuCmd_BeforeDraw template2_afterDraw;
    struct MenuCmd_OnSelect template2_onSelect;
    word template2_end;
    word markWideCoords2;
    struct MenuEntry_Wide_NavOnly entries7_11[5];
    word markInitEntry2;
    struct MenuMark_StartMenu menu4Start;
    word markByteCoords3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry12;
    struct MenuEntry_Byte_NumberOnly entry13;
    word markWideCoords3;
    struct MenuEntry_Wide_TextNoPtrOnly entry14;
    word markByteCoords4;
    struct MenuEntry_Byte_NumberOnly entry15;
    word markWideCoords4;
    struct MenuEntry_Wide_TextNoPtrOnly entry16;
    word markEndMenu;
};

typedef enum ImageStreamLayout {
    BITPLANE_ROW_BYTES=40,
    IMAGE_ROW_STRIDE_BYTES=160
} ImageStreamLayout;

typedef struct Menu_SelectFiles Menu_SelectFiles, *PMenu_SelectFiles;

struct Menu_SelectFiles {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextPtr entry0_text;
    word entry0_end;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    word template1_coordsMark;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_TextNoPtr template1_text;
    struct MenuCmd_OnSelect template1_onSelect;
    struct MenuCmd_BeforeDraw template1_beforeDraw;
    word template1_end;
    struct MenuEntry_Byte_NavOnly entry1;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Nav entry2_nav;
    struct MenuCmd_Skip2 entry2_upSkip;
    word entry2_end;
    struct MenuCoords8 entry3_rc;
    struct MenuCmd_Nav entry3_nav;
    struct MenuCmd_Skip2 entry3_upSkip;
    word entry3_end;
    struct MenuCoords8 entry4_rc;
    struct MenuCmd_Nav entry4_nav;
    struct MenuCmd_Skip2 entry4_upSkip;
    word entry4_end;
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_Nav entry5_nav;
    struct MenuCmd_Skip2 entry5_upSkip;
    word entry5_end;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Skip2 entry6_upSkip;
    word entry6_end;
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_Skip2 entry7_upSkip;
    word entry7_end;
    struct MenuCoords8 entry8_rc;
    struct MenuCmd_Nav entry8_nav;
    struct MenuCmd_Skip2 entry8_upSkip;
    word entry8_end;
    struct MenuCoords8 entry9_rc;
    struct MenuCmd_Nav entry9_nav;
    struct MenuCmd_Skip2 entry9_upSkip;
    word entry9_end;
    struct MenuCoords8 entry10_rc;
    struct MenuCmd_Nav entry10_nav;
    struct MenuCmd_Skip2 entry10_upSkip;
    word entry10_end;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_Nav entry11_nav;
    struct MenuCmd_Skip2 entry11_upSkip;
    word entry11_end;
    struct MenuCoords8 entry12_rc;
    struct MenuCmd_Nav entry12_nav;
    struct MenuCmd_Skip2 entry12_upSkip;
    word entry12_end;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Nav entry13_nav;
    struct MenuCmd_Skip2 entry13_upSkip;
    word entry13_end;
    struct MenuCoords8 entry14_rc;
    struct MenuCmd_Nav entry14_nav;
    struct MenuCmd_Skip2 entry14_upSkip;
    word entry14_end;
    struct MenuCoords8 entry15_rc;
    struct MenuCmd_Nav entry15_nav;
    struct MenuCmd_Skip2 entry15_upSkip;
    word entry15_end;
    struct MenuEntry_Byte_NavOnly entries16_31[16];
    struct MenuCoords8 entry32_rc;
    struct MenuCmd_Nav entry32_nav;
    struct MenuCmd_Skip2 entry32_downSkip;
    word entry32_end;
    struct MenuCoords8 entry33_rc;
    struct MenuCmd_Nav entry33_nav;
    struct MenuCmd_Skip2 entry33_downSkip;
    word entry33_end;
    struct MenuCoords8 entry34_rc;
    struct MenuCmd_Nav entry34_nav;
    struct MenuCmd_Skip2 entry34_downSkip;
    word entry34_end;
    struct MenuCoords8 entry35_rc;
    struct MenuCmd_Nav entry35_nav;
    struct MenuCmd_Skip2 entry35_downSkip;
    word entry35_end;
    struct MenuCoords8 entry36_rc;
    struct MenuCmd_Nav entry36_nav;
    struct MenuCmd_Skip2 entry36_downSkip;
    word entry36_end;
    struct MenuCoords8 entry37_rc;
    struct MenuCmd_Nav entry37_nav;
    struct MenuCmd_Skip2 entry37_downSkip;
    word entry37_end;
    struct MenuCoords8 entry38_rc;
    struct MenuCmd_Nav entry38_nav;
    struct MenuCmd_Skip2 entry38_downSkip;
    word entry38_end;
    struct MenuCoords8 entry39_rc;
    struct MenuCmd_Nav entry39_nav;
    struct MenuCmd_Skip2 entry39_downSkip;
    word entry39_end;
    struct MenuCoords8 entry40_rc;
    struct MenuCmd_Nav entry40_nav;
    struct MenuCmd_Skip2 entry40_downSkip;
    word entry40_end;
    struct MenuCoords8 entry41_rc;
    struct MenuCmd_Nav entry41_nav;
    struct MenuCmd_Skip2 entry41_downSkip;
    word entry41_end;
    struct MenuCoords8 entry42_rc;
    struct MenuCmd_Nav entry42_nav;
    struct MenuCmd_Skip2 entry42_downSkip;
    word entry42_end;
    struct MenuCoords8 entry43_rc;
    struct MenuCmd_Nav entry43_nav;
    struct MenuCmd_Skip2 entry43_downSkip;
    word entry43_end;
    struct MenuCoords8 entry44_rc;
    struct MenuCmd_Nav entry44_nav;
    struct MenuCmd_Skip2 entry44_downSkip;
    word entry44_end;
    struct MenuCoords8 entry45_rc;
    struct MenuCmd_Nav entry45_nav;
    struct MenuCmd_Skip2 entry45_downSkip;
    word entry45_end;
    word markInitEntry;
    struct MenuMark_StartMenu menu1Start2;
    struct MenuCoords8 entry46_rc;
    struct MenuCmd_Invisible entry46_invisible;
    struct MenuCmd_Colors entry46_colors;
    struct MenuCmd_TextPtr entry46_text;
    word entry46_end;
    struct MenuCoords8 entry47_rc;
    struct MenuCmd_Invisible entry47_invisible;
    struct MenuCmd_TextPtr entry47_text;
    word entry47_end;
    struct MenuCoords8 entry48_rc;
    struct MenuCmd_Invisible entry48_invisible;
    struct MenuCmd_Nav entry48_nav;
    struct MenuCmd_Colors entry48_colors;
    struct MenuCmd_TextNoPtr entry48_text;
    struct MenuCmd_OnSelect entry48_onSelect;
    word entry48_end;
    struct MenuCoords8 entry49_rc;
    struct MenuCmd_Invisible entry49_invisible;
    struct MenuCmd_Nav entry49_nav;
    struct MenuCmd_Colors entry49_colors;
    struct MenuCmd_TextPtr entry49_text;
    struct MenuCmd_OnSelect entry49_onSelect;
    word entry49_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry50;
    word markEndMenu;
};

typedef struct Menu_Squad Menu_Squad, *PMenu_Squad;

typedef struct MenuCmd_FgFunc MenuCmd_FgFunc, *PMenuCmd_FgFunc;

struct MenuCmd_FgFunc {
    word type;
    void *funcPtr;
};

struct Menu_Squad {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuCoords8 entry0_rc;
    struct MenuCmd_Invisible entry0_invisible;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_Number entry0_number;
    word entry0_end;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_SpriteFg entry1_sprite;
    word entry1_end;
    struct MenuEntry_Byte_Colors_TextPtr entry2;
    struct MenuEntry_Byte_TextNoPtrOnly entry3;
    struct MenuEntry_Byte_TextPtrOnly entries4_5[2];
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Skip2 entry6_downSkip;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_TextPtr entry6_text;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_Invisible entry7_invisible;
    word entry7_end;
    struct MenuCoords8 entry8_rc;
    struct MenuCmd_Nav entry8_nav;
    struct MenuCmd_Skip2 entry8_leftSkip;
    struct MenuCmd_Skip2 entry8_rightSkip;
    struct MenuCmd_Colors entry8_colors;
    struct MenuCmd_TextPtr entry8_text;
    struct MenuCmd_OnSelect entry8_onSelect;
    word entry8_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry9;
    struct MenuCoords8 entry10_rc;
    struct MenuCmd_Invisible entry10_invisible;
    struct MenuCmd_Colors entry10_colors;
    struct MenuCmd_TextPtr entry10_text;
    struct MenuCmd_OnSelect entry10_onSelect;
    word entry10_end;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_OnSelect entry11_onSelect;
    word entry11_end;
    struct MenuEntry_Byte_TextNoPtrOnly entry12;
    struct MenuEntry_Byte_TextPtrOnly entries13_15[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry16;
    struct MenuEntry_Byte_TextPtrOnly entries17_19[3];
    struct MenuCoords8 entry20_rc;
    struct MenuCmd_Invisible entry20_invisible;
    struct MenuCmd_TextPtr entry20_text;
    word entry20_end;
    word markWideCoords;
    struct MenuEntry_Wide_TextPtrOnly entries21_22[2];
    struct MenuEntry_Wide_ColorsOnly entry23;
    struct MenuEntry_Wide_TextPtrOnly entry24;
    struct MenuEntry_Wide_NumberOnly entry25;
    struct MenuEntry_Wide_TextPtrOnly entry26;
    struct MenuEntry_Wide_NumberOnly entry27;
    word template28_markStart;
    word template28_coordsMark;
    struct MenuCoords8 template28_rc;
    struct MenuCmd_Colors template28_colors;
    struct MenuCmd_AfterDraw template28_afterDraw;
    struct MenuCmd_OnSelect template28_onSelect;
    word template28_end;
    struct MenuEntry_Byte_NavOnly entries28_43[16];
    struct MenuCoords8 entry44_rc;
    struct MenuCmd_Nav entry44_nav;
    struct MenuCmd_Skip2 entry44_upSkip;
    struct MenuCmd_Invisible entry44_invisible;
    word entry44_end;
    word markInitEntry;
    struct MenuCoords8 entry45_rc;
    struct MenuCmd_Invisible entry45_invisible;
    struct MenuCmd_Nav entry45_nav;
    struct MenuCmd_Colors entry45_colors;
    struct MenuCmd_OnSelect entry45_onSelect;
    struct MenuCmd_AfterDraw entry45_afterDraw;
    word entry45_end;
    struct MenuCoords8 entry46_rc;
    struct MenuCmd_Colors entry46_colors;
    struct MenuCmd_SpriteFg entry46_sprite;
    word entry46_end;
    struct MenuEntry_Byte_NumberOnly entry47;
    struct MenuEntry_Byte_Colors_TextPtr entry48;
    struct MenuEntry_Byte_TextPtrOnly entry49;
    struct MenuEntry_Byte_TextNoPtrOnly entry50;
    struct MenuEntry_Byte_SpriteFgOnly entries51_53[3];
    struct MenuEntry_Byte_TextNoPtrOnly entry54;
    struct MenuEntry_Byte_NumberOnly entry55;
    struct MenuCoords8 entry56_rc;
    struct MenuCmd_FgFunc entry56_fgFunc;
    word entry56_end;
    word markWideCoords2;
    struct MenuEntry_Wide_TextPtrOnly entry57;
    word markByteCoords2;
    struct MenuEntry_Byte_TextNoPtrOnly entry58;
    struct MenuEntry_Byte_NumberOnly entries59_61[3];
    word markWideCoords3;
    struct MenuEntry_Wide_NumberOnly entries62_63[2];
    word markEndMenu;
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

typedef struct TacticsPosition TacticsPosition, *PTacticsPosition;

struct TacticsPosition {
    enum TacticsSlotIndex index[11];
};

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

typedef struct CompetitionCup_6_2_12 CompetitionCup_6_2_12, *PCompetitionCup_6_2_12;

struct CompetitionCup_6_2_12 {
    struct CompetitionCup comp;
    byte rounds[6];
    char *text[2];
    byte unk1[12];
};

typedef struct Leagues_4 Leagues_4, *PLeagues_4;

struct Leagues_4 {
    char *text1;
    byte unk1[8];
    char *text2;
    byte unk2[8];
    char *text3;
    byte unk3[8];
    char *text4;
    byte unk4[8];
};

typedef struct CompetitionCup2_4_2_32 CompetitionCup2_4_2_32, *PCompetitionCup2_4_2_32;

struct CompetitionCup2_4_2_32 {
    struct CompetitionCup2_4 compCup;
    char *text[2];
    byte unk1[32];
};

typedef enum MenuColorScheme {
    MENU_ENTRY_SCHEME_0=0,
    MENU_ENTRY_SCHEME_1=1,
    MENU_ENTRY_SCHEME_2=2,
    MENU_ENTRY_SCHEME_3=3,
    MENU_ENTRY_SCHEME_4=4,
    MENU_ENTRY_SCHEME_5=5,
    MENU_ENTRY_SCHEME_6=6,
    MENU_ENTRY_SCHEME_7=7,
    MENU_ENTRY_SCHEME_8=8,
    MENU_ENTRY_SCHEME_9=9,
    MENU_ENTRY_SCHEME_10=10,
    MENU_ENTRY_SCHEME_11=11,
    MENU_ENTRY_SCHEME_12=12,
    MENU_ENTRY_SCHEME_13=13,
    MENU_ENTRY_SCHEME_14=14,
    MENU_ENTRY_SCHEME_15=15
} MenuColorScheme;

typedef struct DIYLeague DIYLeague, *PDIYLeague;

struct DIYLeague {
    byte field_0[56];
    byte startingMonth;
    byte endingMonth;
};

typedef struct Leagues_4_2_24 Leagues_4_2_24, *PLeagues_4_2_24;

struct Leagues_4_2_24 {
    struct Leagues_4 leagues;
    struct Playoffs_8 *playoffs;
    struct Leagues_4 *leagues2;
    byte unk2[24];
};

typedef enum StringFlags {
    STR_COLOR_MASK=15,
    STR_FLAGS_MASK=240,
    STR_ALIGN_RIGHT=16384,
    STR_ALIGN_LEFT=32768
} StringFlags;

typedef enum MenuMark {
    MENU_MARK_END_ENTRY=0,
    MENU_MARK_END_MENU=64537,
    MENU_MARK_START_MENU=64538,
    MENU_MARK_START_TEMPLATE=64539,
    MENU_MARK_INIT_ENTRY=64540,
    MENU_MARK_WIDE_COORDS=65534,
    MENU_MARK_BYTE_COORDS=65535
} MenuMark;

typedef struct ScorerInfo ScorerInfo, *PScorerInfo;

struct ScorerInfo {
    word shirtNum;
    word numSpritesTaken;
    word numGoals;
    struct GoalInfo goals[10];
};

typedef struct CompetitionLeague_4_8_2_24 CompetitionLeague_4_8_2_24, *PCompetitionLeague_4_8_2_24;

struct CompetitionLeague_4_8_2_24 {
    struct CompetitionLeague comp;
    struct Division divisions[4];
    byte unk1;
    char *text[8];
    char *unk2[2];
    byte unk3[24];
};

typedef struct Menu_ClubBusiness Menu_ClubBusiness, *PMenu_ClubBusiness;

struct Menu_ClubBusiness {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    struct MenuCmd_OnSelect entry1_onSelect;
    word entry1_end;
    struct MenuMark_StartMenu menu1Start;
    word markWideCoords;
    struct MenuCoords16 entry2_rc;
    struct MenuCmd_TextPtr entry2_text;
    word entry2_end;
    word markByteCoords2;
    struct MenuCoords8 entry3_rc;
    struct MenuCmd_Invisible entry3_invisible;
    struct MenuCmd_TextPtr entry3_text;
    word entry3_end;
    struct MenuEntry_Byte_TextPtrOnly entry4;
    struct MenuEntry_Byte_TextPtrOnly entry5;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Invisible entry6_invisible;
    struct MenuCmd_TextPtr entry6_text;
    word entry6_end;
    struct MenuEntry_Byte_TextPtrOnly entry7;
    struct MenuEntry_Byte_TextPtrOnly entry8;
    struct MenuEntry_Byte_TextPtrOnly entry9;
    struct MenuEntry_Byte_TextPtrOnly entry10;
    struct MenuEntry_Byte_TextPtrOnly entry11;
    struct MenuMark_StartMenu menu2Start;
    word markWideCoords2;
    struct MenuEntry_Wide_TextNoPtrOnly entry12;
    word markByteCoords3;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Invisible entry13_invisible;
    struct MenuCmd_TextNoPtr entry13_text;
    word entry13_end;
    struct MenuEntry_Byte_TextNoPtrOnly entry14;
    struct MenuEntry_Byte_TextNoPtrOnly entry15;
    struct MenuCoords8 entry16_rc;
    struct MenuCmd_Invisible entry16_invisible;
    struct MenuCmd_TextNoPtr entry16_text;
    word entry16_end;
    struct MenuEntry_Byte_TextNoPtrOnly entry17;
    struct MenuEntry_Byte_TextNoPtrOnly entry18;
    struct MenuEntry_Byte_TextNoPtrOnly entry19;
    struct MenuEntry_Byte_TextNoPtrOnly entry20;
    struct MenuCoords8 entry21_rc;
    struct MenuCmd_Colors entry21_colors;
    struct MenuCmd_TextNoPtr entry21_text;
    word entry21_end;
    word markEndMenu;
};

typedef struct Menu_Offers Menu_Offers, *PMenu_Offers;

struct Menu_Offers {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_OnSelect template1_onSelect;
    struct MenuCmd_BeforeDraw template1_afterDraw;
    word template1_end;
    word markWideCoords;
    struct MenuEntry_Wide_NavOnly entries2_6[5];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords16 entry7_rc;
    struct MenuCmd_Colors entry7_colors;
    word entry7_end;
    struct MenuEntry_Wide_TextNoPtrOnly entries8_9[2];
    word markByteCoords2;
    struct MenuEntry_Byte_NumberOnly entry10;
    word markEndMenu;
};

typedef struct Menu_DesignDIYCup Menu_DesignDIYCup, *PMenu_DesignDIYCup;

struct Menu_DesignDIYCup {
    struct MenuHeader hdr;
    word markByteCoords0;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    word markWideCoords0;
    struct MenuCoords16 entry1_rc;
    struct MenuCmd_Invisible entry1_invisible;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    word entry1_end;
    struct MenuMark_StartMenu startMenuA;
    struct MenuCoords16 entry2_rc;
    struct MenuCmd_Nav entry2_nav;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextPtr entry2_text;
    struct MenuCmd_OnSelect entry2_onSelect;
    word entry2_end;
    word markByteCoords1;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entries3_5[3];
    struct MenuEntry_Byte_Colors_TextPtr entry6;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry7;
    struct MenuEntry_Byte_Colors_TextPtr entry8;
    struct MenuEntry_Byte_Nav_Colors_StringTable_OnSelect entry9;
    struct MenuEntry_Byte_Colors_TextPtr entry10;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_Nav entry11_nav;
    struct MenuCmd_Colors entry11_colors;
    struct MenuCmd_Number entry11_number;
    struct MenuCmd_OnSelect entry11_onSelect;
    word entry11_end;
    struct MenuEntry_Byte_Colors_TextPtr entry12;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Nav entry13_nav;
    struct MenuCmd_Colors entry13_colors;
    struct MenuCmd_TextNoPtr entry13_text;
    struct MenuCmd_OnSelect entry13_onSelect;
    word entry13_end;
    struct MenuEntry_Byte_Colors_TextPtr entry14;
    word markWideCoords1;
    struct MenuCoords16 entry15_rc;
    struct MenuCmd_Nav entry15_nav;
    struct MenuCmd_Colors entry15_colors;
    struct MenuCmd_TextNoPtr entry15_text;
    struct MenuCmd_OnSelect entry15_onSelect;
    word entry15_end;
    word markByteCoords2;
    struct MenuEntry_Byte_TextPtrOnly entries16_17[2];
    struct Menu_DesignDIYCup_OptionRow rows[6];
    struct MenuMark_StartMenu startMenuB;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries48_50[3];
    struct MenuCoords8 entry51_rc;
    struct MenuCmd_Colors entry51_colors;
    struct MenuCmd_TextNoPtr entry51_text;
    word entry51_end;
    word markEndMenu;
};

typedef struct Leagues_2 Leagues_2, *PLeagues_2;

struct Leagues_2 {
    struct CompetitionLeague *compLeague1;
    byte unk1[8];
    struct CompetitionLeague *compLeague2;
    byte unk2[8];
};

typedef struct CompetitionLeague_4_8 CompetitionLeague_4_8, *PCompetitionLeague_4_8;

struct CompetitionLeague_4_8 {
    struct CompetitionLeague comp;
    struct Division divisions[4];
    byte unk1;
    char *text[8];
};

typedef enum BlitCon {
    BLTCON0_ASH_SHIFT=12,
    BLTCON0=64,
    BLTCON1=66,
    BLTAFWM=68,
    BLTALWM=70,
    BLTCPT=72,
    BLTBPT=76,
    BLTAPT=80,
    BLTDPT=84,
    BLTSIZE=88,
    BLTCMOD=96,
    BLTBMOD=98,
    BLTAMOD=100,
    BLTDMOD=102,
    BLTCDAT=112,
    BLTBDAT=114,
    BLTADAT=116,
    BLT_LF_A=240,
    BLT_LF_A_OR_B=252,
    BLTCON0_USED=256,
    BLTCON0_USEC=512,
    BLTCON0_USEB=1024,
    BLT_BATCH_MAX=1024,
    BLTCON0_BASE_SINGLE=1994,
    BLTCON0_USEA=2048,
    BLTCON0_BASE_LINKED=4042,
    BLT_ADAT_ALL_ONE=65535,
    BLT_FWM_ALL=65535,
    BLT_LWM_ALL=65535,
    BLT_BLITQ_END=4294967295
} BlitCon;

typedef struct Menu_SWOSMainMenu Menu_SWOSMainMenu, *PMenu_SWOSMainMenu;

struct Menu_SWOSMainMenu {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_coords;
    struct MenuCmd_SpriteFg entry0_sprite;
    word entry0_end;
    struct MenuMark_StartMenu menu1Start;
    word markByteCoords1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry8;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry9;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry10;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords8 entry11_rc;
    struct MenuCmd_Nav entry11_nav;
    struct MenuCmd_Colors entry11_colors;
    struct MenuCmd_TextNoPtr entry11_text;
    struct MenuCmd_OnSelect entry11_onSelect;
    word entry11_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry12;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry13;
    struct MenuMark_StartMenu menu3Start;
    word markEndMenu;
};

typedef struct CompetitionLeague_3 CompetitionLeague_3, *PCompetitionLeague_3;

struct CompetitionLeague_3 {
    struct CompetitionLeague comp;
    struct Division divisions[3];
    byte unk1;
};

typedef struct CompetitionLeague_4 CompetitionLeague_4, *PCompetitionLeague_4;

struct CompetitionLeague_4 {
    struct CompetitionLeague comp;
    struct Division divisions[4];
    byte unk1;
};

typedef enum BitplaneLayout_BitShift {
    NUM_PLANES_SHIFT=2,
    NUM_PLANES_SHIFT_PLUS1=3
} BitplaneLayout_BitShift;

typedef struct CompetitionLeague_1 CompetitionLeague_1, *PCompetitionLeague_1;

struct CompetitionLeague_1 {
    struct CompetitionLeague comp;
    struct Division divisions[1];
    byte unk1;
};

typedef struct CompetitionLeague_2 CompetitionLeague_2, *PCompetitionLeague_2;

struct CompetitionLeague_2 {
    struct CompetitionLeague comp;
    struct Division divisions[2];
    byte unk1;
};

typedef enum CopperList {
    COPPERLIST_SIZE_BYTES_MINUS_ONE=319,
    COPPERLIST_SIZE_BYTES=320
} CopperList;

typedef struct Menu_DIYLeagueTournament Menu_DIYLeagueTournament, *PMenu_DIYLeagueTournament;

struct Menu_DIYLeagueTournament {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    word markByteCoords0;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Nav entry1_nav;
    struct MenuCmd_Skip2 entry1_skip;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_text;
    struct MenuCmd_OnSelect entry1_onSelect;
    word entry1_end;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Nav entry2_nav;
    struct MenuCmd_Invisible entry2_invisible;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextPtr entry2_text;
    word entry2_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuCoords8 entry4_rc;
    struct MenuCmd_Nav entry4_nav;
    struct MenuCmd_Invisible entry4_invisible;
    struct MenuCmd_Colors entry4_colors;
    struct MenuCmd_TextPtr entry4_text;
    struct MenuCmd_OnSelect entry4_onSelect;
    word entry4_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries5_6[2];
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_Invisible entry7_invisible;
    struct MenuCmd_Colors entry7_colors;
    struct MenuCmd_TextPtr entry7_text;
    struct MenuCmd_OnSelect entry7_onSelect;
    word entry7_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entries8_10[3];
    struct MenuEntry_Byte_Colors_TextPtr entries11_13[3];
    struct MenuEntry_Byte_Colors_Number entries14_15[2];
    struct MenuEntry_Byte_Colors_TextPtr_BeforeDraw entries16_23[8];
    struct MenuEntry_Byte_Invisible_Colors_TextPtr entries24_29[6];
    word markWideCoords0;
    struct MenuCoords16 entry30_rc;
    struct MenuCmd_Invisible entry30_invisible;
    struct MenuCmd_Colors entry30_colors;
    struct MenuCmd_TextPtr entry30_text;
    word entry30_end;
    word markByteCoords1;
    struct MenuEntry_Byte_NumberOnly entry31;
    struct MenuEntry_Byte_Colors_TextPtr entry32;
    struct MenuEntry_Byte_Colors_Number entries33_38[6];
    word markWideCoords1;
    struct MenuCoords16 entry39_rc;
    struct MenuCmd_Colors entry39_colors;
    struct MenuCmd_Number entry39_number;
    word entry39_end;
    word markByteCoords2;
    struct MenuCoords8 entry40_rc;
    struct MenuCmd_Nav entry40_nav;
    struct MenuCmd_Colors entry40_colors;
    struct MenuCmd_SpriteFg entry40_sprite;
    struct MenuCmd_OnSelect entry40_onSelect;
    word entry40_end;
    struct MenuCoords8 entry41_rc;
    struct MenuCmd_Nav entry41_nav;
    struct MenuCmd_Colors entry41_colors;
    struct MenuCmd_SpriteFg entry41_sprite;
    struct MenuCmd_OnSelect entry41_onSelect;
    word entry41_end;
    struct MenuCoords8 entry42_rc;
    struct MenuCmd_InputFunc entry42_input;
    word entry42_end;
    word markEndMenu;
};

typedef enum FileInfo {
    PITCHFILE_MAX_SIZE=45600
} FileInfo;

typedef enum BlitUse {
    BLTCON0_USED_LF_00=256,
    BLTCON0_USED_LF_F0=496,
    BLTCON0_USED_LF_FF=511,
    BLTCON0_USEA_LF_FC=2300,
    BLTCON0_USEA_USED_LF_F0=2544,
    BLTCON0_USEA_USED_LF_FC=2556,
    BLTCON0_USEA_USEB_USED_LF_FC=3580
} BlitUse;

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

typedef struct Menu_ChooseTeamsFriendly2 Menu_ChooseTeamsFriendly2, *PMenu_ChooseTeamsFriendly2;

struct Menu_ChooseTeamsFriendly2 {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    word markByteCoords;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Invisible entry1_invisible;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_Number entry1_number;
    word entry1_end;
    struct MenuEntry_Byte_ColorsOnly entries2_4[3];
    struct MenuEntry_Byte_TextPtrOnly entries5_7[3];
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_TextPtr template1_text;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    struct MenuEntry_Byte_Nav_Skip entry8;
    struct MenuEntry_Byte_Nav_Skip entries9_29[21];
    struct MenuEntry_Byte_NavOnly entries30_51[22];
    struct MenuEntry_Byte_Nav_Skip entry52;
    struct MenuEntry_Byte_Nav_Skip entries53_73[21];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords8 entry74_rc;
    struct MenuCmd_Nav entry74_nav;
    struct MenuCmd_Skip2 entry74_skip[2];
    struct MenuCmd_Colors entry74_colors;
    struct MenuCmd_TextPtr entry74_text;
    struct MenuCmd_OnSelect entry74_onSelect;
    word entry74_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry75;
    struct MenuCoords8 entry76_rc;
    struct MenuCmd_Nav entry76_nav;
    struct MenuCmd_Skip2 entry76_skip[2];
    struct MenuCmd_Colors entry76_colors;
    struct MenuCmd_TextNoPtr entry76_text;
    struct MenuCmd_OnSelect entry76_onSelect;
    word entry76_end;
    struct MenuCoords8 entry77_rc;
    struct MenuCmd_Colors entry77_colors;
    struct MenuCmd_TextNoPtr entry77_text;
    word entry77_end;
    word markEndMenu;
};

typedef struct Menu_ChooseTactics Menu_ChooseTactics, *PMenu_ChooseTactics;

struct Menu_ChooseTactics {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry5;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry6;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry7;
    word markEndMenu;
};

typedef struct AnimTable_8 AnimTable_8, *PAnimTable_8;

struct AnimTable_8 {
    word frameDelay;
    short *animFrames[8];
};

typedef struct QualifyingGroup_3_12 QualifyingGroup_3_12, *PQualifyingGroup_3_12;

struct QualifyingGroup_3_12 {
    struct CompetitionCup *compCup[3];
    enum CountryNumbers countries[12];
};

typedef struct Playoffs_4 Playoffs_4, *PPlayoffs_4;

struct Playoffs_4 {
    byte unk1[16];
    char *text[2];
    byte unk2[4];
};

typedef struct Menu_ContinueAbort Menu_ContinueAbort, *PMenu_ContinueAbort;

struct Menu_ContinueAbort {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextPtr entry1_multilineText;
    word entry1_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    word markEndMenu;
};

typedef struct CompetitionCup2_6_2_64 CompetitionCup2_6_2_64, *PCompetitionCup2_6_2_64;

struct CompetitionCup2_6_2_64 {
    struct CompetitionCup2_6 compCup;
    char *text[2];
    byte unk1[64];
};

typedef struct Menu_Contest Menu_Contest, *PMenu_Contest;

struct Menu_Contest {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuCoords8 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    struct MenuCoords8 entry1_rc;
    struct MenuCmd_Colors entry1_colors;
    struct MenuCmd_TextNoPtr entry1_text;
    word entry1_end;
    struct MenuCoords8 entry2_rc;
    struct MenuCmd_Colors entry2_colors;
    struct MenuCmd_TextNoPtr entry2_text;
    word entry2_end;
    word markWideCoords;
    struct MenuCoords16 entry3_rc;
    struct MenuCmd_Colors entry3_colors;
    struct MenuCmd_TextPtr entry3_text;
    word entry3_end;
    word markByteCoords2;
    struct MenuCoords8 entry4_rc;
    struct MenuCmd_Nav entry4_nav;
    struct MenuCmd_Skip2 entry4_upSkip;
    struct MenuCmd_Colors entry4_colors;
    struct MenuCmd_TextPtr entry4_text;
    struct MenuCmd_OnSelect entry4_onSelect;
    word entry4_end;
    struct MenuCoords8 entry5_rc;
    struct MenuCmd_Nav entry5_nav;
    struct MenuCmd_Skip2 entry5_upSkip;
    struct MenuCmd_Skip2 entry5_rightSkip;
    struct MenuCmd_Colors entry5_colors;
    struct MenuCmd_TextPtr entry5_text;
    struct MenuCmd_OnSelect entry5_onSelect;
    word entry5_end;
    struct MenuCoords8 entry6_rc;
    struct MenuCmd_Nav entry6_nav;
    struct MenuCmd_Skip2 entry6_rightSkip;
    struct MenuCmd_Skip2 entry6_upSkip;
    struct MenuCmd_Colors entry6_colors;
    struct MenuCmd_TextPtr entry6_text;
    struct MenuCmd_OnSelect entry6_onSelect;
    word entry6_end;
    struct MenuCoords8 entry7_rc;
    struct MenuCmd_Nav entry7_nav;
    struct MenuCmd_Skip2 entry7_upSkip;
    struct MenuCmd_Skip2 entry7_downSkip;
    struct MenuCmd_Colors entry7_colors;
    struct MenuCmd_TextPtr entry7_text;
    struct MenuCmd_OnSelect entry7_onSelect;
    word entry7_end;
    struct MenuCoords8 entry8_rc;
    struct MenuCmd_Nav entry8_nav;
    struct MenuCmd_Skip2 entry8_leftSkip;
    struct MenuCmd_Colors entry8_colors;
    struct MenuCmd_TextPtr entry8_text;
    struct MenuCmd_OnSelect entry8_onSelect;
    word entry8_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry9;
    struct MenuCoords8 entry10_rc;
    struct MenuCmd_Nav entry10_nav;
    struct MenuCmd_Skip2 entry10_downSkip;
    struct MenuCmd_Colors entry10_colors;
    struct MenuCmd_TextPtr entry10_text;
    struct MenuCmd_OnSelect entry10_onSelect;
    word entry10_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry11;
    struct MenuCoords8 entry12_rc;
    struct MenuCmd_Nav entry12_nav;
    struct MenuCmd_Skip2 entry12_rightSkip;
    struct MenuCmd_Colors entry12_colors;
    struct MenuCmd_TextPtr entry12_text;
    struct MenuCmd_OnSelect entry12_onSelect;
    word entry12_end;
    struct MenuCoords8 entry13_rc;
    struct MenuCmd_Invisible entry13_invisible;
    struct MenuCmd_Nav entry13_nav;
    struct MenuCmd_Colors entry13_colors;
    struct MenuCmd_TextPtr entry13_text;
    struct MenuCmd_OnSelect entry13_onSelect;
    word entry13_end;
    struct MenuCoords8 entry14_rc;
    struct MenuCmd_Invisible entry14_invisible;
    struct MenuCmd_Nav entry14_nav;
    struct MenuCmd_Colors entry14_colors;
    struct MenuCmd_TextPtr entry14_text;
    struct MenuCmd_OnSelect entry14_onSelect;
    word entry14_end;
    struct MenuCoords8 entry15_rc;
    struct MenuCmd_Invisible entry15_invisible;
    struct MenuCmd_Nav entry15_nav;
    struct MenuCmd_Colors entry15_colors;
    struct MenuCmd_TextPtr entry15_text;
    struct MenuCmd_OnSelect entry15_onSelect;
    word entry15_end;
    struct MenuCoords8 entry16_rc;
    struct MenuCmd_Nav entry16_nav;
    struct MenuCmd_Colors entry16_colors;
    struct MenuCmd_SpriteFg entry16_sprite;
    struct MenuCmd_OnSelect entry16_onSelect;
    word entry16_end;
    struct MenuCoords8 entry17_rc;
    struct MenuCmd_Nav entry17_nav;
    struct MenuCmd_Colors entry17_colors;
    struct MenuCmd_SpriteFg entry17_sprite;
    struct MenuCmd_OnSelect entry17_onSelect;
    word entry17_end;
    word markWideCoords2;
    struct MenuEntry_Wide_ColorsOnly entry18;
    struct MenuMark_StartMenu menu1Start;
    word template19_markStart;
    word template19_coordsMark;
    struct MenuCoords8 template19_rc;
    struct MenuCmd_BeforeDraw template19_beforeDraw;
    word template19_end;
    struct MenuEntry_Byte_CoordsOnly entries19_32[14];
    word markInitEntry;
    word markWideCoords3;
    struct MenuEntry_Wide_ColorsOnly entry33;
    word markByteCoords3;
    struct MenuEntry_Byte_TextPtrOnly entry34;
    struct MenuEntry_Byte_TextNoPtrOnly entry35;
    struct MenuEntry_Byte_TextPtrOnly entry36;
    struct MenuEntry_Byte_ColorsOnly entry37;
    struct MenuEntry_Byte_TextPtrOnly entry38;
    struct MenuEntry_Byte_NumberOnly entry39;
    struct MenuEntry_Byte_TextPtrOnly entry40;
    struct MenuEntry_Byte_NumberOnly entry41;
    struct MenuEntry_Byte_TextPtrOnly entry42;
    struct MenuEntry_Byte_TextNoPtrOnly entry43;
    word markEndMenu;
};

typedef enum TeamControls {
    TEAM_NOT_SELECTED=0,
    TEAM_COMPUTER=1,
    TEAM_PLAYER_COACH=2,
    TEAM_COACH=3
} TeamControls;

typedef struct Menu_ChooseTeamsFriendly Menu_ChooseTeamsFriendly, *PMenu_ChooseTeamsFriendly;

struct Menu_ChooseTeamsFriendly {
    struct MenuHeader hdr;
    struct MenuCoords16 entry0_rc;
    struct MenuCmd_Colors entry0_colors;
    struct MenuCmd_TextNoPtr entry0_text;
    word entry0_end;
    word markByteCoords;
    struct MenuEntry_Byte_ColorsOnly entries1_3[3];
    struct MenuEntry_Byte_TextPtrOnly entries4_6[3];
    struct MenuMark_StartMenu menu1Start;
    word template1_markStart;
    struct MenuCoords8 template1_rc;
    struct MenuCmd_Colors template1_colors;
    struct MenuCmd_TextPtr template1_text;
    struct MenuCmd_OnSelect template1_onSelect;
    word template1_end;
    struct MenuEntry_Byte_Nav_Skip entry7;
    struct MenuEntry_Byte_Nav_Skip entries8_22[15];
    struct MenuEntry_Byte_NavOnly entries23_38[16];
    struct MenuEntry_Byte_Nav_Skip entry39;
    struct MenuEntry_Byte_Nav_Skip entries40_54[15];
    word markInitEntry;
    struct MenuMark_StartMenu menu2Start;
    struct MenuCoords8 entry55_rc;
    struct MenuCmd_Nav entry55_nav;
    struct MenuCmd_Skip2 entry55_skip[2];
    struct MenuCmd_Colors entry55_colors;
    struct MenuCmd_TextPtr entry55_text;
    struct MenuCmd_OnSelect entry55_onSelect;
    word entry55_end;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry56;
    struct MenuCoords8 entry57_rc;
    struct MenuCmd_Nav entry57_nav;
    struct MenuCmd_Skip2 entry57_skip[2];
    struct MenuCmd_Colors entry57_colors;
    struct MenuCmd_TextNoPtr entry57_text;
    struct MenuCmd_OnSelect entry57_onSelect;
    word entry57_end;
    struct MenuCoords8 entry58_rc;
    struct MenuCmd_Colors entry58_colors;
    struct MenuCmd_TextNoPtr entry58_text;
    word entry58_end;
    word markEndMenu;
};

typedef struct Menu_ChooseTeams Menu_ChooseTeams, *PMenu_ChooseTeams;

struct Menu_ChooseTeams {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry0;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry4;
    word markWideCoords;
    struct MenuCoords16 entry5_rc;
    struct MenuCmd_Colors entry5_colors;
    struct MenuCmd_TextNoPtr entry5_text;
    word entry5_end;
    word markEndMenu;
};

typedef struct Menu_NationalTeamAddPlayer Menu_NationalTeamAddPlayer, *PMenu_NationalTeamAddPlayer;

struct Menu_NationalTeamAddPlayer {
    struct MenuHeader hdr;
    word markByteCoords;
    struct MenuEntry_Byte_Colors_TextPtr entry0;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry1;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry2;
    struct MenuEntry_Byte_Nav_Colors_TextPtr_OnSelect entry3;
    word markEndMenu;
};

typedef struct CompetitionCup2_6_2_60 CompetitionCup2_6_2_60, *PCompetitionCup2_6_2_60;

struct CompetitionCup2_6_2_60 {
    struct CompetitionCup2_6 compCup;
    char *text[2];
    byte unk1[60];
};




void __usercall j_start(void);
void __usercall start(void);
short __usercall AssetSys_Dispatch(AssetSysOp op);
short __usercall AssetSys_JumpTable(void *loaderBase,char *disk0Path,char *disk1Path,char *disk2Path,char *disk3Path);
short __usercall AssetSys_InitContext(void *loaderBase,char *disk0Path,char *disk1Path,char *disk2Path,char *disk3Path);
int __usercall AssetSys_InitSource0(char *filename);
int __usercall AssetSys_LoadFileOp(char *filename);
int __usercall AssetSys_InitSource2(char *filename);
int __usercall AssetSys_ResolveAssetList(void);
int __usercall AssetSys_DoCriticalOp(char *filename);
int __usercall AssetSys_Op5ThenMaybe6(void *source_desc);
short __usercall AssetSys_SelectAndOpen(ushort asset_index);
short __usercall AssetSys_OpenAnySource(void);
char * __usercall AssetSysPrepCopyParams(char *filename);
uint __usercall FloppyAsset_DispatchOp(uint op,uint arg1,void *pA,void *pB,void *ctx);
uint __usercall Floppy_AllocTmpEntry(void *src);
void __usercall Floppy_ClearTmpEntry(void *entry);
uint __usercall Floppy_SetTmpEntryLimit(uint value,void *entry);
uint __usercall Floppy_ReadFromTmpEntry(void *entry,void *dst,uint remaining);
void __usercall Floppy_PosToCHS(uint pos);
void __usercall Floppy_MapIndexToTmpEntryOrFail(uint index);
void __usercall Floppy_StreamInit(void *ctx,void *dst);
uint __usercall Floppy_StreamContinue(void *dst,void *ctx,uint remaining);
void __usercall Floppy_CopyBytesWithAlignment(uint count,void *src,void *dst);
uint __usercall Floppy_RefillSymbolStack(void *state);
uint __usercall Floppy_LoadByName(void *ctx,void *nameSrc,void *data,uint size);
uint __usercall Floppy_SelectId(uint id,void *ctx);
void __usercall Floppy_BitSet(uint index,void *ctx);
void __usercall Floppy_FindNextSetBitOrSame(uint start,void *ctx);
uint __usercall Floppy_CountFollowingSetBits(uint start,void *ctx);
void __usercall Floppy_BitTest(uint index,void *ctx);
void __usercall Floppy_BitClear(uint index,void *ctx);
void __usercall Floppy_FlushErrorState(void *ctx);
void __usercall Floppy_RecordCopyText(void *rec,void *text);
uint __usercall Floppy_DumpStatus(void *ctx,void *outBuf);
void __usercall Floppy_ClearCtx3500(void *ctx);
uint __usercall Floppy_SendTextRecord(void *ctx,void *text);
void __usercall Floppy_CtxAliasA0(void *ctx);
uint __usercall Floppy_FindRecordByPath(char *path,uchar mode);
void __usercall Floppy_ParseDrivePrefix(uchar mode,uchar *p);
uchar __usercall Floppy_GetNextChar(uchar *p);
uchar __usercall Floppy_ToUpperOrZero(uchar c);
uint __usercall Floppy_HashLastPathComponent(char *path);
uint __usercall Floppy_Check370Record(void *ctx);
uint __usercall Floppy_TransferNonBlockingLen1Wrapper(void);
uint __usercall Floppy_CheckErrorOr195(void);
uint __usercall Floppy_Checksum512Words(void *base);
void __usercall AssetDriveCtx_ProbeDrives(void *rec);
uint __usercall FloppyDev_TransferBlockingLen1(ushort dev,ushort off,ushort len,ushort mode,void *buf,void *ctx);
uint __usercall FloppyDev_TransferBlocking(ushort dev,ushort off,ushort len,ushort mode,void *buf,void *ctx);
uint __usercall FloppyDev_TransferNonBlockingLen1(ushort dev,ushort off,ushort len,ushort mode,void *buf,void *ctx);
uint __usercall FloppyDev_TransferNonBlocking(ushort dev,ushort off,ushort len,ushort mode,void *buf,void *ctx);
uint __usercall FloppyDev_TransferWithState(ushort dev,ushort off,ushort len,ushort mode,void *buf,void *ctx,void *state);
uint __usercall FloppyDev_TransferImpl(ushort dev,ushort off,ushort len,ushort mode,void *buf,void *ctx);
uint __usercall FloppyDev_ProbeDriveMask(void);
uint __usercall FloppyCIA_ReadLongBitstream(ushort bit);
void __usercall FloppyCIA_ReadBit(ushort bit);
uint __usercall FloppyDMA_ReadSectorsWithRetry(void);
uint __usercall FloppyDMAReadAttempt(void);
void __usercall FloppyDMA_BuildTrackBuffer(ushort startSector);
uint __usercall FloppyDMA_ScanSyncAndHeader(void);
uint __usercall FloppyDMA_HandleIrqAndTransfer(void *custom);
uint __usercall FloppyGeom_CylinderByteOffset(ushort cylIdx);
void __usercall FloppyGeom_MarkSectorDone(ushort secIdx);
void __usercall FloppyDMA_ClearTrackStatus(void *base);
uint __usercall FloppyID_DecodeHeader(void);
uint __usercall FloppyMFM_DecodeLongPair(void *p);
uint __usercall FloppyMFM_CheckHeaderSync(void);
uint __usercall FloppyMFM_PrepHeaderChecksum(void);
uint __usercall FloppyMFM_ComputeChecksum(void *p,uint bytes);
void __usercall FloppyDMA_FillGapPattern(void);
void __usercall FloppyDMA_WaitDmaDone(void);
void __usercall FloppyMFM_DecodeInterleavedTrack(void *src,void *dst);
void __usercall FloppyMFM_EncodeBuffer(void *src,void *dst,uint sizeBytes);
void __usercall FloppyMFM_WriteEncodedLong(uint value,void *buf);
void __usercall FloppyMFM_AdjustClockBit(void *p);
void __usercall FloppyMFM_EncodeLong(uint value,void *p);
void __usercall FloppyDMA_StartBlitterTransfer(void *dmaBuf,ushort byteCount);
uint __usercall FloppyDMA_WaitBlitterDone(void);
void __usercall FloppyHW_PrepareAdkcon(void);
void __usercall FloppyCIA_InitProbeBits(void);
void __usercall FloppyCIA_SelectDriveFromState(void);
void __usercall FloppyCIA_ProbeStepPulse(void);
uint __usercall FloppyStep_AdjustCalibration(uint val);
uint __usercall FloppyStep_AutoCalibrateOrTimeout(void);
void __usercall FloppyStep_DoSteps(ushort steps,char dir);
void __usercall FloppyCIA_UpdateLinesFromTable(void);
uchar __usercall FloppyCIA_BuildStepPattern(void);
void __usercall FloppyTimer_DelayTicks(ushort ticks);
void __usercall FloppyTimer_WaitIfRunning(ushort limit);
void __usercall FloppyTimer_StartCiaB(void);
void __usercall Int2KeyboardHandler(void);
void __usercall Int3TimerHandler(void);
ushort __usercall GetKey(void);
void __usercall InitDisplayAndCopper(void);
void __usercall UpdatePlanePtrsAndBlitParams(void);
void __usercall SwapBuffersAndCameraViewState(void);
void __usercall InitHardwareAtFrameStart(void);
void __usercall PanicHaltLoop(void);
void __usercall FlashColor0Delay(void);
ushort __usercall Player1StatusProc(void);
ushort __usercall Player2StatusProc(void);
void __usercall ProcessSpriteBlitQueue(void);
void __usercall LoadPitchMap(ushort mapIndex);
void __usercall FixupAndColorPitchFile(void);
void __usercall SetCameraCoordinates(short newX,short newY);
void __usercall InitCameraMoveView(void);
void __usercall MoveView(short newScreenX,short newScreenY);
void __usercall ScrollToCurrent(void);
void __usercall ScrollXUpdateColumnsAndBlit(void);
void __usercall ScrollYUpdateRowsAndBlit(void);
void __usercall ApplyFadeStep(ushort fadeLevel);
void __usercall FadeOutTick(void);
void __usercall FadeInTick(void);
void __usercall FadeIn(void);
void __usercall FadeOutToBlack(void);
void __usercall FadeOutAndIn(void);
void __usercall ProcessImageCommandStream(ushort *cmdBuffer,uchar *workBuffer);
void __usercall BlitDispatch(ushort spriteIndex,ushort xOffset,ushort yOffset,ushort width,ushort height,ushort maskSel,ushort dstX,ushort dstY,void *src,void *planesFlag);
void __usercall nullsub_2(void);
void __usercall nullsub_3(void);
void __usercall ReturnFunction(void);
void __usercall SetupInterrupts(void);
void __usercall Int3Handler(void);
void __usercall nullsub_4(void);
void __usercall Int5Handler(void);
undefined8 SetTempStackPtr(void);
void __usercall ReturnFromFunction(void);
void __usercall BlitterSpan4Planes(void);
void __usercall BlitterSpanCoreMasked(void);
void align_and_prepare_left_mask(void);
void blitter_rectrow_masked(void);
void __usercall BuildPaletteFromColors(uchar *palette);
void __usercall BlitterCopyOverlayToScreen(void);
void __usercall BlitterCopyPanelToScreen(void);
void __usercall HWSprite_LoadFromSpriteGraphics(short spriteIndex);
void __usercall BlitSpritePlanar_Word(void);
void __usercall BlitSpritePlanar_Word_StridedDest(void);
void __usercall BlitSpritePlanar_Long_StridedDest(void);
void __usercall DrawSprite_entry2(void);
void __usercall DrawSprite16Pixels(void);
short __usercall DrawSpriteCentered(short spriteIndex,short x,short y);
uchar __usercall CopySprite(ushort srcSprite,ushort xOffset,ushort yOffset,ushort dstSprite);
void __usercall DrawSpriteHotspotInCameraView(void);
void __usercall DrawSpriteInCameraView(void);
void __usercall DarkenRectangle(ushort spriteIndex,ushort x,ushort y);
void __usercall DrawSpriteClipped(Sprite *sprite,ushort x,ushort y);
void __usercall DrawQueuedSprites(void);
void __usercall RenderSpriteBandsToCopperLists(void);
void __usercall RenderSpriteBandPlanePair(void);
void __usercall BuildSpriteBandAndGeneralRenderStacks(void);
void __usercall InitDisplaySprites(void);
void __usercall SortSprites(void);
void __usercall DrawSprites(void);
char __usercall AdjustFanColor(uchar *destPattern,uchar *pitchConvTable);
char __usercall ConvertSpriteColors(ushort spriteNumber,ushort *colorConvTable);
void RectRowMaskedApplyScreenOffset(void);
void __usercall FillRectangle(void);
void __usercall WaitForVSync(void);
ushort __usercall GetTextWidth(char *text,CharTable *charsTable);
short __usercall DrawMenuText(ushort x,ushort y,ushort color,char *text,CharTable *chars);
short __usercall DrawMenuTextRightAligned(ushort x_end,ushort y,ushort color,char *text,CharTable *chars);
short __usercall DrawMenuTextCentered(ushort x_center,ushort y,ushort color,char *text,CharTable *chars);
ushort __usercall Text2Sprite(ushort xOff,ushort yOff,ushort dstSpriteIndex,char *text,CharTable *charsTable);
void __usercall BlitStringToFrontBuffer(ushort spriteIndex,ushort x,ushort y,ushort planeMask);
void __usercall BlitGlyphToSpriteBitmap(ushort glyphIndex,ushort xOff,ushort yOff,ushort planeMask,ushort dstSpriteIndex);
void __usercall AssetSys_InitDiskImageSources(void);
ushort __usercall LoadRNCToBufferNoBlit(char *filename,void *dst);
ushort __usercall LoadFile(char *filename,void *dst);
ushort __usercall PlaySong(char *filename);
ushort __usercall AssetEnsureReadyWithRetry(char *name);
ushort __usercall WriteFile(char *filename,void *src,uint size);
ushort __usercall FindFilesExtensionPresent(char *ext);
ushort __usercall Loader_ReadFileChunks(int param,void *buffer);
ushort __usercall Loader_WriteFileChunks(uint length,void *buffer);
ushort __usercall Loader_OpenFileForRead(char *path);
ushort __usercall Loader_OpenFileForWrite(char *path);
ushort __usercall Loader_CloseFile(void);
void __usercall Loader_NormalizePath(char *path);
void __usercall Loader_NormalizePath2(char *path);
char * __usercall Loader_CopyNormalizedPath(char *path);
void __usercall InstallAndRunLoaderBootstrap_Op3(void);
void __usercall InstallAndInitLoaderBootstrap(void);
void __usercall AssetSvcLoaderOp(void);
void __usercall AssetSvcLoaderOp2(void);
void __usercall AssetSvcLoaderOp3(void);
void __usercall AssetLoaderResetState(void);
void __usercall AssetLoaderInitAltPathAndBanks(void);
void __usercall AssetLoaderRegisterRegion(uint size,void *region);
ushort __usercall AssetCacheAlloc(uint size);
int __usercall AssetCacheFindByName(char *name);
short __usercall AssetCacheCopyByName(char *name,void *dst);
short __usercall AssetCacheLoadFromAssetSys(char *name);
void __usercall AssetCacheStoreFromMemory(char *name,void *src,uint size);
void __usercall RncDecompressV2(void *src,void *dst);
int __usercall RncDecompressV1(void *src,void *dst,uint expectedSize);
int __usercall RncDecodeBlock(void *src,void *dst);
int __usercall RncDecodeSymbol(void *tab);
short __usercall RncGetBits(ushort mask,uchar nbits);
void __usercall RncRefillBits(void);
uint __usercall RncReadU32(uchar **pp);
void __usercall RncBuildTable(void *outTab);
void __usercall RncDecodeV2Body(void *src,void *dst);
void __usercall nullsub_5(void);
void __usercall CrowdResetMatchState(void);
void __usercall TurnCrowdChantsOn(void);
void __usercall TurnCrowdChantsOff(void);
void __usercall PlayCrowdChants(void);
void __usercall MuteAllAudioChannelsWithDelay(void);
void __usercall AudioFadeCrowdDownThenPulseMusic(void);
void __usercall AudioMuteAllWithFrameRamp(void);
void __usercall AudioBeepAllShort(void);
void __usercall LoadSfxResources(void);
void __usercall EnsureSfxLoadedAndStart(void);
void __usercall ClearAudioActiveFlag(void);
void __usercall StopAudioAndClearFlags(void);
void __usercall InitMenuMusic(void);
void __usercall TryRestartingMusic(void);
void __usercall TryPlayMusic(void);
void __usercall StopMusic(void);
void __usercall PlayEnqueuedSamples(void);
void __usercall PlayPenaltySample(void);
void __usercall PlaySample7IfNotTraining(void);
void __usercall sub_107260(void);
void __usercall PlayGoodPassSample(void);
void __usercall PlayKickSample(void);
void __usercall GateKickSampleAndCrowd(short channel,short sfxId);
void __usercall PlayRefereeWhistleSample(void);
void __usercall PlayFoulWhistleSample(void);
void __usercall PlayEndGameWhistleSample(void);
void __usercall PlaySample1IfNotTraining(void);
void __usercall PlaySample1(void);
void __usercall PlaySample2IfNotTraining(void);
void __usercall PlaySample4IfNotTraining(void);
void __usercall PlaySample4(void);
void __usercall PlaySample3IfNotTraining(void);
void __usercall PlayMissGoalSample(void);
void __usercall PlayPenalty(void);
void __usercall PlayGameStateWhistleSample(void);
void __usercall PlayGoalReplayBottomSample(void);
void __usercall PlayGoalKickOffSample(void);
void __usercall PlayCornerKickSample(void);
void __usercall nullsub_6(void);
void __usercall HandleKickSampleAndCrowd(short mode,short sfxId);
undefined8 PlaySample(void);
void __usercall nullsub_22(void);
void __usercall Int4Handler(void);
uchar __usercall AudioIRQEntryThunk(void);
void __usercall StartMenuMusic(void *bankBase,void *songPtr);
void __usercall CrowdTickJump(uint channel,uint waveId);
void __usercall j_AudioApplyPresetToChannels(uint presetId);
void __usercall SetVolumeOrStopChants(uint channelOrAll,uint volume);
void __usercall StopAudio(void);
void __usercall InitAudioState(void *bankBase,void *songPtr);
void __usercall ClearAudioChannelStruct(AudioChannel *chan);
void __usercall StopAllAudioChannels(void);
void __usercall AudioSetChannelVolume(uint channelOrAll,uint volume);
void __usercall AudioSetMode(uint modeFlags);
void __usercall AudioApplyPresetToChannels(uint presetId);
void __usercall AudioChannelNoteOnOff(uint channel,uint noteId);
void __usercall AudioChannelQueueNextWaveIfEnabled(uint channel,uint waveId);
uchar __usercall AudioIRQUpdateChannels(void);
void __usercall AudioIRQServiceOneChannel(AudioChannel *chan);
uchar __usercall AudioIRQLoadAUDxPtrLenIfReloadNeeded(AudioChannel *chan);
void __usercall AudioIRQEnableDMAIfStartFlag(AudioChannel *chan);
void __usercall AudioDisableDMAForChannel(AudioChannel *chan);
void __usercall AudioIRQRunChannelScriptStep(AudioChannel *chan);
byte * audioirq_fetch_cmd_byte(void);
void __usercall AudioIRQScriptCmdJumpTable(AudioChannel *chan,uchar *script);
void __usercall audioirq_cmd_play_note_from_track(AudioChannel *chan,uchar *script);
void __usercall AudioIRQUpdateBeepVoiceParams(AudioChannel *chan);
void __usercall AudioIRQApplyBeepVolumeAndWriteAUDxVOL(AudioChannel *chan);
void __usercall AudioIRQBeepVolumeLfoStep(AudioChannel *chan);
void __usercall AudioIRQBeepVolumeEnvStep(AudioChannel *chan);
void __usercall AudioIRQBeepVolumeEnvStop(void);
void __usercall AudioIRQBeepVolumeEnvLoadSegment(void);
void __usercall AudioIRQInitVolumeEnvForNote(AudioChannel *chan);
void __usercall AudioIRQBeepLFOAndPitchSlide(AudioChannel *chan);
void __usercall AudioIRQNoteOnInitChannel(AudioChannel *chan,ushort amigaPeriod);
void __usercall AudioIRQSelectVariant(uint variantId,AudioChannel *chan);
uchar __usercall AudioIRQLoadAUDxPtrLenIfReloadNeeded2(AudioChannel *chan);
void __usercall AudioIRQEnableDMAIfStartFlag2(AudioChannel *chan);
void __usercall AudioIRQRunModCommandStream(AudioChannel *chan);
void __usercall switchD_00107bec::AudioIRQDispatchModCommand(AudioChannel *chan,uchar *stream);
void __usercall switchD_00107bec::caseD_4e(AudioChannel *chan,uchar *stream);
void __usercall AudioIRQServiceVolume(AudioChannel *chan);
void __usercall AudioIRQApplyVolumeAndWriteAUDxVOL(AudioChannel *chan,void *audxRegs);
void __usercall AudioIRQVolumeLfoStep(AudioChannel *chan);
void __usercall AudioIRQVolumeEnvStep(AudioChannel *chan);
void __usercall AudioIRQVolumeEnvStop(void);
void __usercall AudioIRQVolumeEnvLoadSegment(void);
void __usercall AudioIRQInitVolumeEnv(AudioChannel *chan);
void __usercall AudioIRQLFOAndPitchSlide(AudioChannel *chan);
void __usercall AudioIRQInitPitchEnv(AudioChannel *chan,ushort amigaPeriod);
void __usercall AudioIRQSelectInstrument(AudioChannel *chan,uint amigaPeriod);
short __usercall CalculateDeltaXAndY(short speed,short destX,short destY,short curX,short curY);
void __usercall MovePlayers(void);
void __usercall SetNextPlayerFrame(Sprite *player);
void __usercall MovePlayer(Sprite *player);
void __usercall SetPlayerAnimationTableAndPictureIndex(AnimTable *animTable,Sprite *player);
void __usercall SetPlayerAnimationTable(AnimTable *animTable,Sprite *player);
void __usercall SetBallPosition(short ballX,short ballY);
void __usercall MoveCamera(void);
void __usercall UpdateBall(void);
void __usercall ReverseDestXDirection(Sprite *spr,int ballX);
void __usercall ReverseDestYDirection(Sprite *spr,int ballY);
void __usercall DoGoalkeeperSprites(void);
void __usercall RemoveReferee(void);
void __usercall ActivateReferee(void);
void __usercall SetRefereeToLeavingState(void);
void __usercall InitRefereeAnimationTable(AnimTable *animTable);
void __usercall UpdateReferee(void);
void __usercall nullsub_21(void);
void __usercall nullsub_20(void);
void __usercall InjuryUpdateTickGuard(void);
void __usercall CopyAdvertisementsData(void);
void __usercall InitAdvertisements(void);
void __usercall SetAdvertisementsVisible(void);
void __usercall SetAdvertisementsInvisible(void);
void __usercall ManageAdvertisements(void);
void __usercall UpdateCornerFlagSprite(void);
void __usercall SpinBig_S_Sprite(void);
void __usercall MakeSpritesFromPlayerNames(TeamGame *leftTeam,TeamGame *rightTeam);
ushort __usercall MakePlayerNameSprite(ushort playerNumber,uchar *shortName,ushort spriteIndex,uchar *nameLenTable);
void __usercall CopyPlayerNameLengths(void);
void __usercall InitGameSaveTeams(void *leftTeamInGame,void *rightTeamInGame);
void __usercall InitGameRestoreTeams(void *leftTeamInGame,void *rightTeamInGame);
char __usercall ConvertColorsAndTextSprites(TeamGame *team1,TeamGame *team2);
void __usercall CountFaces(TeamGame *team);
void __usercall ConvertColorTableToSkinColor(ushort color,ushort *destTable);
char __usercall DetermineGoalieFaces(TeamGame *team,uchar *gkFaceToIndex,uchar *gkFaceIndices);
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
void __usercall BumpPlayerLastPlayedHalfAtHalfStart(PlayerInfoHeader *player);
void __usercall BumpPlayersLastPlayedHalfAtHalfEnd(void);
void __usercall BumpPlayerLastPlayedHalfAtHalfEnd(PlayerInfoHeader *player);
void __usercall ResetResultSprites(void);
void __usercall ShowResult(void);
void __usercall SetPitchTypeAndNumber(void);
void __usercall CopyTeamsAndHeader(void);
void __usercall SetHilFileHeader(void);
void __usercall SaveHighlightsPointers(void);
void __usercall RestoreHighlightPointers(void);
void __usercall FadeAndSaveHighlightScene(void);
void __usercall SaveHighlightScene(void);
void __usercall InitCurrentGoalHighlight(void);
void __usercall ThrowInDeadProc(void);
void __usercall SaveCoordinatesForHighlights(short spriteIndexOrMarker,ushort x,ushort y);
uchar * __usercall IncrementHilBufferPointer(uchar *cur);
void __usercall DrawReplayFrame(void);
uchar * __usercall ValidateHilPointerAdd(uchar *p);
uchar * __usercall ValidateHilPointerSub(uchar *p);
void __usercall ReplayUpdateCameraAndSwapBuffers(void);
void __usercall HandleInstantReplayStateSwitch(void);
void __usercall RestoreCameraPosition(void);
void __usercall GoalScored(short scoringTeam,Sprite *scorerSprite);
void __usercall BenchCheckControls(void);
void FUN_0010cf6e(void);
void LeaveSubsMenu(void);
void __usercall BenchMenuHandleControls(void);
void __usercall TrainingSwapBenchTeams(void);
short __usercall IsThisPlayerOkToSelect(void);
void __usercall FirePressedInSubsMenu(void);
void __usercall ShowFormationMenu(void);
void __usercall SubsBenchOff(void);
void __usercall SelectPlayerToSubstituteMenuHandler(void);
void __usercall CheckForThrowInAndGoalkeepersBall(void);
void __usercall SubstitutePlayer(void);
void __usercall CallUpdateSubstitutePlayerIndices(void);
void __usercall state3_handle_fire_press(void);
void __usercall MarkPlayersMenuHandler(void);
void __usercall HandleFormationMenuControls(void);
void __usercall UpdateSubstitutePlayerIndices(void);
void __usercall UpdatePlayerToBeSubstitutedPosition(void);
ushort __usercall IsPlayerOkToSubstitute(void);
void __usercall HandleFormationMenuMovement(void);
void __usercall FindInitialPlayerToBeSubstituted(void);
void __usercall SwapPlayerNameData(short enterIndex,short leaveIndex);
void __usercall DrawBenchAndSubsMenu(void);
void __usercall DrawOpponentsBench(void);
void __usercall DrawBenchPlayersAndCoach(TeamGame *requestingTeam,TeamGeneralInfo *team,ushort x,ushort y);
void __usercall DrawSubstitutesMenu(void);
void __usercall DrawSubstitutesMenuEntry(short y,ushort baseColor,short selectedIndex,void *charsTable,TeamGame *teamGame,ushort *playerOffsets);
void __usercall DrawFormationMenu(void);
void __usercall DrawFormationMenuEntry(uchar *charsTable,ushort y,ushort entryColor,ushort entryIndex);
void * __usercall GetBenchPlayerPointer(ushort index);
void main(void);
void __usercall ViewMatchSequence(void);
void __usercall ViewHighlights(void);
void __usercall StartMatchSequence(void *topTeam,void *bottomTeam);
void __usercall GameLoop(void);
void __usercall KeepStatisticsOnScreen(void);
void __usercall ViewHighLightsMain(void *leftTeam,void *rightTeam);
void __usercall PlayInstantReplayLoop(void);
void __usercall PlayHighlightsLoop(void);
ushort __usercall ReadTimerDelta(void);
void __usercall SaveRand2State(void);
void __usercall RestoreRand2State(void);
void __usercall Randomize2(ushort seed);
ushort __usercall GetRandomWord(void);
ushort __usercall Rand2(void);
ushort __usercall Rand(void);
void __usercall MainKeysCheck(ushort key);
void __usercall AssetPrecacheCore(void);
void __usercall AssetPrecacheOneCore(char *assetName);
void __usercall AssetPrecacheMenuPack(void);
void __usercall AssetPrecacheOneMenu(char *assetName);
void __usercall ReplayExitMenuAfterFriendly(void);
void __usercall DrawReplayOrExitMenu(void);
void __usercall DrawMenuBack150x20(ushort color,ushort x,ushort y);
void __usercall DrawReplayContinueShiningFrame(short x,short y);
void __usercall sub_10FC06(void);
void __usercall sub_10FC0E(void);
void __usercall ShowLoaderIntroSequence(void);
void __usercall LoaderIntroShowFrameFadeInOut(void);
void __usercall LoaderIntroShowFrameWithMusic(void);
void __usercall LoaderIntroWaitForFireOrTimeout(void);
void __usercall LoaderIntroLoadFrameToFrontbufferAlt(void);
void __usercall LoaderIntroLoadHeroAudioBank(void);
void __usercall LoaderIntroEnsureMenuMusicPlaying(void);
void __usercall LoaderIntroStopMusicAndResetAudio(void);
void __usercall ResetGoalAttempt(void);
void __usercall AllowStatistics(void);
void __usercall StatisticsOff(void);
void __usercall UpdateAndDrawStatistics(void);
void __usercall DrawStatistics(void);
void __usercall WriteStatsNumber(ushort number,ushort x,ushort y,ushort color);
void __usercall WriteStatsPercent(ushort number,ushort x,ushort y);
void __usercall DrawGrid(ushort x,ushort y,ushort width,ushort height);
void __usercall DoPass(Sprite *player,TeamGeneralInfo *team);
void __usercall PlayerKickingBall(Sprite *player,TeamGeneralInfo *team);
void __usercall CalculateIfPlayerWinsBall(ushort dir,Sprite *player,TeamGeneralInfo *team);
void __usercall PlayerTackledTheBallWeak(Sprite *player,TeamGeneralInfo *team);
void __usercall SetPlayerDowntimeAfterTackle(Sprite *player,TeamGeneralInfo *team);
void __usercall UpdatePlayerSpeed(Sprite *player,TeamGeneralInfo *team);
void __usercall UpdatePlayerShotChanceTable(Sprite *player,TeamGeneralInfo *team);
PlayerInfoHeader * __usercall GetPlayerPointerFromShirtNumber(Sprite *player,TeamGeneralInfo *team);
void __usercall CalculateNextBallPosition(void);
void __usercall QueueMaskedSpriteBlitClipped(void *sprite,ushort x,ushort y);
void __usercall SetPlayerWithNoBallDestination(Sprite *player,TeamGeneralInfo *team);
void __usercall PlayerTackled(Sprite *playerSprite,TeamGeneralInfo *team);
void __usercall StartPenalties(void);
void __usercall InitTeamsData(void);
void __usercall UpdateControlledPlayer(TeamGeneralInfo *team);
void __usercall UpdatePlayerBeingPassedTo(TeamGeneralInfo *team);
void __usercall UpdateGameTimersAndCameraBreakMode(TeamGeneralInfo *team);
void __usercall UpdateAndApplyTeamControls(void);
void __usercall SetJumpHeaderHitAnimTable(Sprite *player);
void __usercall PlayerHittingJumpHeader(Sprite *player,TeamGeneralInfo *team);
void __usercall DoFlyingHeader(Sprite *player,Sprite *ball);
void __usercall DoLobHeader(Sprite *player,Sprite *ball);
void __usercall SetPlayerJumpHeaderHitAnimationTable(Sprite *player);
void __usercall SetStaticHeaderDirection(Sprite *player,TeamGeneralInfo *team);
void __usercall PlayerHittingStaticHeader(Sprite *player,TeamGeneralInfo *team);
void __usercall AttemptStaticHeader(Sprite *player,ushort dir);
ushort __usercall TryBookingThePlayer(Sprite *player,TeamGeneralInfo *team);
ushort __usercall TrySendingOffThePlayer(Sprite *player,TeamGeneralInfo *team);
void __usercall SendPlayerAway(Sprite *player,TeamGeneralInfo *team);
short __usercall ShouldGoalkeeperDive(Sprite *goalie,Sprite *ball,TeamGeneralInfo *team);
ushort __usercall GetFramesNeededToCoverDistance(int movementDeltaFp16_16,ushort distance);
short __usercall UpdateBallVariables(Sprite *playerSprite,Sprite *ballSprite,TeamGeneralInfo *teamInfo);
short __usercall CalculateBallNextGroundXYPositions(Sprite *ball);
void __usercall PlayerTacklingTestFoul(Sprite *playerSprite,Sprite *ballSprite,TeamGeneralInfo *teamInfo);
void __usercall GoalkeeperCaughtTheBall(Sprite *keeper,TeamGeneralInfo *team);
void __usercall GoalkeeperDeflectedBall(Sprite *ball,TeamGeneralInfo *team);
void __usercall GoalkeeperJumping(short direction,short farJumpVariant,short dir2,Sprite *player,Sprite *ball,TeamGeneralInfo *team);
void __usercall PlayerBeginTackling(short pressedDir,Sprite *player,TeamGeneralInfo *team);
void __usercall PlayerTackledTheBallStrong(Sprite *player,TeamGeneralInfo *team);
void __usercall PlayerAttemptingJumpHeader(short direction,Sprite *player);
short * __usercall GetBallDestCoordinatesTable(void);
Sprite * __usercall GetClosestNonControlledPlayerInDirection(ushort direction,TeamGeneralInfo *team);
void __usercall UpdateControllingPlayer(Sprite *player);
void __usercall UpdateBallWithControllingGoalkeeper(Sprite *playerHoldingBall);
void __usercall UpdatePlayerWithBall(Sprite *player);
void __usercall SetThrowInPlayerDestinationCoordinates(Sprite *player);
void __usercall ApplyBallAfterTouch(TeamGeneralInfo *team);
void __usercall ResetBothTeamSpinTimers(void);
void __usercall TestFoulForPenaltyAndFreeKick(Sprite *player,TeamGeneralInfo *team);
void __usercall NextPenalty(void);
void __usercall GoalkeeperClaimedTheBall(Sprite *goalkeeper,Sprite *ball,TeamGeneralInfo *team);
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
void __usercall ResetPlayerPassingKicking(TeamGeneralInfo *team);
void __usercall StopAllPlayers(void);
void __usercall StopPlayers(TeamGeneralInfo *team);
void __usercall CheckIfBallOutOfPlay(void);
void __usercall InitPlayersBeforeEnteringPitch(void);
char __usercall UpdatePlayers(TeamGeneralInfo *teamInfo);
void __usercall AI_SetControlsDirection(TeamGeneralInfo *team);
short __usercall AI_SetDirectionTowardOpponentsGoal(TeamGeneralInfo *team);
short __usercall AI_DecideWhetherToTriggerFire(Sprite *player,TeamGeneralInfo *team,ushort dir);
TeamGeneralInfo * __usercall AI_ResumeGameDelay(TeamGeneralInfo *team);
char __usercall AI_Kick(Sprite *player,TeamGeneralInfo *team);
Sprite * __usercall FindClosestPlayerToBallFacing(ushort fullDir,TeamGeneralInfo *team);
void __usercall sub_11FBA2(void);
void __usercall nullsub_9(void);
void __usercall nullsub_10(void);
void __usercall sub_11FBF6(void);
char * __usercall PanicLookupMessagePtr(ushort code);
void __usercall ZeroOutStars(void);
void __usercall UnpackMenu(Menu *dstMenu,void *staticMenu);
void __usercall InitMenuEntry(MenuEntry *entry);
void __usercall MenuProc(void);
void __usercall UpdateBlinkingMenuText(void);
void __usercall InitMainMenuStuff(void);
void __usercall SetDefaultNameAndSurname(void);
void __usercall InitUserTactics(void);
void __usercall FrontEndPreLoopSetup(void);
void __usercall PrepareMenuForFadeIn(void);
void __usercall PrepareMenuBackground(void);
void __usercall LoadOverlayToFrontbuffer(char *path);
void __usercall FrontEndMainLoop(void);
void __usercall DoubleBufferSwapSequence(void);
void __usercall MenuCheckControls(void);
void __usercall nullsub_1(void);
void __usercall sub_120A10(void);
void __usercall DrawMenuItemOuterFrame(ushort color,ushort x,ushort y,ushort width,ushort height);
void __usercall DrawMenuItemInnerFrame(ushort color,ushort x,ushort y,ushort width,ushort height);
void __usercall sub_120B0A(void);
void __usercall DrawMenuItemBackground(ushort color,ushort x,ushort y,ushort width,ushort height);
void __usercall DrawMenuItemBackgroundMasked(void);
void __usercall BlitMaskedRectAltToFront(ushort x,ushort y,ushort w,ushort h);
uchar __usercall CopyWholeSprite(ushort srcSprite,ushort dstSprite);
void __usercall BlitterCopyPanelToScreen2(void);
void __usercall Int2Ascii(ushort value,char *out);
void __usercall SetCurrentEntry(ushort index);
MenuEntry * __usercall CalcMenuEntryAddress(ushort ordinal);
uchar __usercall GetStringLength(void);
void __usercall StringEquals(char *s1,char *s2);
char * __usercall StringCopy(char *src,char *dst);
char * __usercall StringCopyUntilChar(char *src,char *dst,uchar ch);
void __usercall PrintFormatted(char *fmt,char *out,ushort n0,ushort n1,ushort n2,ushort n3,ushort n4,ushort n5,ushort n6,char *a,char *b,char *c);
ushort __usercall InputText(ushort maxLenPlus1,MenuEntry *entry);
void __usercall InsertCharacter(char *pos,uchar ch);
void __usercall InputTextDeleteCharAtCursor(char *pos);
ushort __usercall InputTextFilterKey(void);
void __usercall menu_mark_entries_active_loop(void);
void __usercall menu_clear_entries_active_loop(void);
void __usercall DrawMenuItemsWaitForVSync(short *list);
void __usercall DrawMenuItemsFromList(short *list);
void __usercall CallDrawMultipleItemsRect(MenuEntry *entry);
void __usercall CallDrawMultipleItems(ushort count,MenuEntry *items);
void __usercall DrawMultipleItems(ushort maxItems,MenuEntry *firstEntry);
void __usercall CallDrawMenuItem(MenuEntry *item);
void __usercall DrawMenuItem(MenuEntry *item);
void __usercall DrawBackAllItems(ushort maxItems,MenuEntry *firstEntry);
void __usercall DrawMenuBackWithCheck(MenuEntry *entry);
void __usercall DrawSelectedMenuItemFrame(Menu *menu);
void __usercall DrawMenu(void);
void __usercall ShowMenu(void *packedMenu);
void __usercall RestorePreviousMenu(void *oldSelectedEntry,void *oldPackedMenu);
void __usercall SetExitMenuFlag(void);
short __usercall ActivateMenu(Menu *menu);
void __usercall DrawMenuPanelBackground(void);
short __usercall CalcTeamPriceRankPercentOffset(void *ctx,TeamFile *team);
char __usercall AssignFakeGoalsToScorers(ushort winningTeam,ushort numGoals);
Position __usercall CalcTeamViewOffset(TeamFile *teamFile);
void __usercall CalculateViewResult(void *ctx,ushort arg0,ushort team1Goals,ushort team2Goals,ushort arg3,void *p1,void *p2);
ushort __usercall ScaleViewIndexByTeamPriceRank(ushort value,TeamFile *team);
ushort FUN_00121e56(void);
void FUN_00121fce(void);
void __usercall AssignSimulatedGoalsToScorers(TeamFile *team,ushort numPlayers);
void __usercall ApplyRandomPlayerStatusAfterSim(TeamFile *team,uchar *map1,uchar *map2,uchar *counters);
void __usercall InitInGameTeams_PlayerControlled(TeamFile *team1,TeamFile *team2);
void __usercall InitInGameTeams_WithMatchParam(TeamFile *team1,TeamFile *team2);
void __usercall InitInGameTeams_WithMatchParam_Alt(TeamFile *team1,TeamFile *team2);
void __usercall BuildCareerTeamUnavailablePlayerList(void);
void __usercall CyclePlayerStatusFlagsForTeam(TeamFile *team,ushort mode);
void __usercall InitPlayerRemapTableForTeam(TeamFile *team,uchar *map);
void __usercall ClearCareerMatchPlayerStatusBucket(void);
void __usercall MaybeDecayPlayerStatusBucketForTeam(TeamFile *team);
void __usercall MaybeDecayPlayerStatusBucket(ushort flags,uchar *playerRec);
void __usercall BuildAvailablePlayersRemapAndMask(TeamFile *team,uchar *map);
ushort __usercall UpdatePlayerPositionAndReturnRole(TeamFile *team,ushort playerIndex);
ushort __usercall ComputeOldPlayerSkillForViewResult(TeamFile *team,ushort count);
ushort __usercall GetPlayerPrice(TeamFile *team,PlayerFile *player,ushort position);
ushort __usercall CountNearnessFactor(ushort curBallQuadrant,ushort dstBallQuadrant,ushort price,uchar *curQuadDistFactor,uchar *playerPositions,uchar *coordToQuad);
short __usercall GetAgeAdjustedPlayerFormFactor(void *player);
void __usercall UpdateCareerPlayersFormAfterMatch(void *team,TeamFileEx *teamRef,short p1,short p2);
ushort __usercall GetNumberOfSubstitutes(TeamFile *team,ushort numPlayers);
ushort __usercall GetNumberOfSubstitutesInSelectionList(TeamFile *team,ushort numPlayers);
void __usercall GetNumberOfAvailablePlayers(TeamFile *team,short excludeCardsFlag,ushort numPlayers);
void __usercall GetNumberOfAvailableSubstitutes(TeamFile *team,short flag);
void __usercall GetNumberOfAvailableStartingPlayers(TeamFile *team,short flag);
ushort __usercall IsPlayerInjured(PlayerFile *player,short mode);
void __usercall UpdateCareerAfterMatch(void);
void __usercall UpdateCareerFinancesAfterMatch(void *ctx,TeamFile *team);
ushort __usercall CalcLeagueMatchGateReceiptsFactor(TeamFileEx *team1,TeamFileEx *team2);
ushort __usercall CalcCupMatchGateReceiptsFactor(TeamFileEx *team1,TeamFileEx *team2);
void __usercall ClampNewBalanceAndUpdateClubStatus(void);
void __usercall ClearOverdraftStateIfRecovered(void);
void __usercall MaybeSackManagerAfterSeasonReview(void);
void __usercall UpdateCareerChairmanWarningsAfterMatch(void);
void __usercall SetOverdraftWarningCooldown(void);
void __usercall SetPerformanceWarningCooldown(void);
void __usercall ApplyWeeklyFinancialDeductions(void);
void __usercall InitializeCareerSeasonFinancials(void);
ushort __usercall ShouldApplyRandomPlayerStatusAfterSim(void);
ushort __usercall ShouldSetupPlayers(void);
void __usercall IsMajorTournamentAllowingRandomStatus(void);
void __usercall IsMajorTournamentAllowingSquadChanges(void);
ushort __usercall IsMajorInternationalTournament(void);
void __usercall IsTournamentAllowingSquadChangesIfNotCareer(void);
short __usercall GetBoardConfidenceScore(void);
ushort __usercall UpdateBoardConfidenceScore(void);
short __usercall PushBoardConfidenceHistory(void);
short __usercall CalcBoardConfidenceDeltaPercent(void);
void __usercall UpdateBoardConfidenceModifiers(void);
void __usercall UpdateCareerReputationBonuses(void);
void __usercall AddReputationFromBonusValueDiv4(void);
void __usercall AddReputationFromBonusValueDiv8(void);
void __usercall InitializeStartingBalanceForNewSeason(void);
ushort __usercall GetExpectedLeagueRankIndex(void);
void __usercall BeginContractNegotiationSequence(void);
void __usercall GetLowestAndHighestPlayerPrice(void);
char __usercall GetPlayerRandomNum(PlayerFile *playerFile);
ushort __usercall GetTeamValueBase(ushort avgPrice);
ushort __usercall IsTeamNational(void *teamGeneral);
void __usercall InitPlayerValueDisplayStruct(void *dst);
void __usercall FormatPlayerValueOrStatusText(void *src,char *dst);
ushort __usercall GetDisplayedPlayerValue(void *ptr);
ushort __usercall GetAveragePlayerPrice(void *team);
ushort __usercall GetAveragePlayerPriceInSelectedTeams(void);
void __usercall ProcessDIYLeagueMatchResultAndCareerUpdates(TeamFileEx *team1,TeamFileEx *team2);
void __usercall ProcessDIYKnockoutMatchResultAndCareerUpdates(TeamFileEx *team1,TeamFileEx *team2);
void __usercall GetCachedOrCalculateViewResult(TeamFileEx *team1,TeamFileEx *team2);
void __usercall GetCachedOrCalculateExtraTimeResult(void);
void __usercall GetCachedOrCalculatePenaltyShootoutResult(void);
void __usercall ApplyTeamTactics(void *playerInfos);
char __usercall AdjustPlayerSkills(ushort playerIndex,TeamFile *teamFile,TeamFile *oppTeamFile,TeamGame *teamGame,PlayerFile *playerFile,PlayerInfoHeader *playerInfoHeader);
short __usercall GetPlayerPricePercentageChange(short factor,TeamFile *team);
ushort __usercall ScaleSkill(ushort skill,ushort factor,void *whichSide);
void __usercall CheckIsTeamNational(void);
ushort __usercall GetTeamKitsSimilarityFactor(uchar team1ShirtType,uchar team1StripesColor,uchar team1BasicColor,uchar team1ShortsColor,uchar team2ShirtType,uchar team2StripesColor,uchar team2BasicColor,uchar team2ShortsColor);
void __usercall AreBasicColorsConflicting(uchar color1,uchar color2);
void __usercall AreShortsAndStripeColorsConflicting(uchar shortsColor,uchar stripeColor);
ushort __usercall GetNextCupRoundStringIndex(ushort cur,ushort n,ushort add);
char * __usercall GetNextCupRoundString(ushort cur,ushort n,ushort add);
ushort __usercall GetCupRoundStringIndex(ushort cur,ushort flag,ushort idx,ushort stage,ushort opt);
char * __usercall GetCupRoundString(ushort cur,ushort flag,ushort idx,ushort stage,ushort opt);
uchar * __usercall MeasureTeamKitsSimilarity(TeamFile *team1,TeamFile *team2);
char * __usercall ExtractSurname(char *name,ushort maxLenAndFlags);
void __usercall nullsub_11(void);
void __usercall Int2StrWithCommas(uint value,char *dst);
void __usercall Int2AsciiLessThan100Check(ushort v,char *dst);
void __usercall Int2AsciiSaveD0(uint v,char *dst);
void __usercall GetBankBalance(char *dst);
void __usercall Int2Pounds(uint pounds,char *dst);
void __usercall Int2PoundsSigned(int pounds,char *dst);
void __usercall WriteAccountBalance(int delta,char *dst);
void FUN_00127414(void);
ushort __usercall InitCompetitionTeamSelectionFromTableEntry(ushort idx,void *base);
ushort __usercall InitCompetitionTeamSelectionFromTableHeader(void *base);
ushort __usercall InitCompetitionTeamSelectionFromAltTableHeader(void *base);
ushort __usercall IsNationalTeamCompetitionOrQualification(void *key);
void __usercall InitCompetitionFromRecord(ushort index,void *rec);
void __usercall InitDIYCompetitionFromTableEntry(ushort idx,void *table);
void __usercall InitDIYCupFromRecord(void *cupRec);
void __usercall InitDIYLeagueFromRecord(void *leagueRec);
short __usercall CheckContinueAbortPrompt(char *header);
void __usercall InitCareerVariables(ushort gameType);
void __usercall InitTeams(void);
void __usercall TeamInit(TeamFile *team,ushort numPlayersMinus1);
char * __usercall BuildMatchResultString(ushort control,ushort leg2,ushort leg1,ushort pens,TeamFile *teamA,TeamFile *teamB,ushort flags);
void __usercall InitAndPlayGame(TeamFile *team1,TeamFile *team2);
void __usercall PlayDIYCupFixtureAndCacheResult(TeamFile *team1,TeamFile *team2);
void __usercall PlayDIYLeagueMatchAndCacheResult(TeamFile *team1,TeamFile *team2);
void __usercall SetupPlayers(TeamFile *team1,TeamFile *team2);
void __usercall ShowHighlights(void);
void __usercall ShowMatchSequence(void);
void __usercall ViewHighlightsSaveCurrentMenu(void);
void __usercall InitializeInGameTeamsAndStartGame(short randomizePitch,short minSubs,short maxSubs,short paramD3,short paramD7,TeamFile *team1,TeamFile *team2);
void __usercall UpdateCareerPlayerStatsAfterMatch(TeamGame *teamGame,TeamFile *teamFile);
void __usercall ApplyPlayerStatusAfterSim(TeamGame *teamGame,TeamFile *teamFile);
void __usercall UpdatePlayerInjuries(TeamGame *teamGame,TeamFile *teamFile);
void __usercall AccumulateMatchGoalsIntoTeamFile(TeamGame *teamGame,TeamFile *teamFile,short offset);
void __usercall InitInGameTeamStructure(TeamFile *teamFile,TeamGame *teamGame,short *avgPricePct);
void __usercall SetPlayerNameAndFace(PlayerFile *playerFile,PlayerInfoHeader *playerGame);
void __usercall InitInGamePlayer(short playerIndex,PlayerFile *playerFile,PlayerInfoHeader *playerGame);
void __usercall SetInGameTeamsPrimaryColors(TeamFile *topTeamFile,TeamFile *bottomTeamFile,uchar *similarityFactors);
void __usercall IsSingleColorKitSimilar(uchar color,TeamFile *teamFile);
void __usercall ConvertTeamKitColorsWithFixedColors(ushort bottomShirtType,uchar bottomStripesColor,uchar bottomBasicColor,uchar bottomShortsColor,TeamFile *topTeamFile);
void __usercall ResolveTeamKitColorConflict(TeamFile *topTeamFile);
void __usercall SetInGameTeamColors(ushort secondaryKitFlags,TeamFile *team1File,TeamFile *team2File);
void __usercall ConvertTeamKitColors(ushort shirtType,uchar stripesColor,uchar basicColor,uchar shortsColor,uchar socksColor,TeamGame *team);
void __usercall SetTeamSecondaryColors(ushort shirtType,uchar stripesColor,uchar shirtColor,uchar shortsColor,uchar socksColor,TeamGame *inGameTeam);
uchar __usercall ConvertTeamColor(uchar color);
void __usercall PlayFriendly(void);
void __usercall DIY_LoadCurrentCompetitionSlot(void);
void __usercall DIY_AdvanceToNextCompetitionSlot(void);
void __usercall DIY_EditCompetitionSlot(ushort a,ushort b,ushort c);
void __usercall DIY_ShuffleTeamsAndBuildCompTeamList(void *diy,void *slot,void *comp);
void __usercall DIY_BuildTeamGridAndIndexMaps(void);
void __usercall DIY_CopyTeamGridFromCompToDIY(void);
void __usercall DIY_BuildSeededBracketAndUpdateScores(void);
void __usercall DIY_BuildCompSpecificTeamShuffle(void);
void __usercall DIY_BuildCompSpecificTeamList(void *a2);
void __usercall sub_129960(void);
void __usercall DIY_AdjustWorldCupBracketScores(void *diy,void *slot,void *comp);
void __usercall DIY_SortAndShuffleTeamsByValue(void *diy,void *slot);
void __usercall DIY_ShuffleTeams(void *diy,void *slot);
void __usercall SaveDIYTournament(void);
void __usercall RestoreDIYTournament(void);
void __usercall DIY_CopyCompetitionFileBufferToDiyFileBufferCopy(void);
void __usercall DIY_CopyDiyFileBufferCopyToCompetitionFileBuffer(void);
void __usercall InitDIYTournament(void);
void __usercall DIYTournament_RecalculateMatchesPerTeam(void);
void __usercall DIY_ResetAndLoadCurrentCompetitionSlot(void);
void __usercall nullsub_12(void);
void __usercall DIY_CopyCompetitionFileBufferToCompetitionStart(void);
void __usercall DIY_CopyCompetitionStartToCompetitionFileBuffer(void);
void __usercall DIY_CopyCompetitionFileBufferToCompetitionStart_Alt(void);
void __usercall DIY_CopyCompetitionStartToCompetitionFileBuffer_Alt(void);
void __usercall InitDIYCup(void);
void __usercall DIY_InitCupBracketState(void);
void __usercall DIY_InitCupFromTeamGridAndValidateTeams(void);
void __usercall DIY_BuildTeamSelectionPointerCache(void);
void __usercall DIY_ShuffleTeamOrderList(void);
void __usercall DIY_UpdateCompetitionProgress(void);
void __usercall DIY_ReorderTeamsBySelectionFlags(void);
void __usercall DIY_CountUnselectedTeams(void);
void __usercall DIY_ReorderTeamGridByOrderList(void);
void __usercall DIY_ApplyHomeAwaySwapFlagsToTeamGridPairs(void);
void __usercall DIY_RecountMissingTeamsInTeamGrid(void);
void __usercall DIY_DecrementMissingTeamCountIfNotLoaded(ushort teamIndex);
void __usercall DIY_ShuffleTeamGridPairs(void);
void __usercall DIY_GetCurrentMatchTeamSlots(void);
ushort __usercall DIY_CompareCurrentMatchTeamCategories(void);
void __usercall DIY_PlayCupMatchAndAdvance(ushort mode);
void __usercall DIY_SyncProgressToDiyFileBufferCopy(void);
void __usercall SaveDIYLeague(void);
void __usercall RestoreDIYLeague(void);
void __usercall DIY_SaveCompetitionFileBufferToDIYCompetition(void);
void __usercall DIY_RestoreCompetitionFileBufferFromDIYCompetition(void);
void __usercall DIY_ShuffleLeagueTeamOrder(void);
void __usercall DIY_InitCompetitionDefaults(void);
void __usercall DIY_RecomputeCompetitionDerivedFields(void);
void __usercall DIY_ResetCompetitionProgressAndShuffle(void);
void FUN_0012ab5c(void);
void __usercall DIY_CacheSelectedTeamPointers(void);
void __usercall CopySelectedTeamNumbers(ushort count,void *dest);
ushort __usercall FindTeamInCache(ushort teamNumber);
void * __usercall VerifyTeamLoaded(ushort teamNumber);
void __usercall DIY_GetCurrentFixtureTeamPtrs(void);
void __usercall DIY_AdvanceLeagueProgressAfterMatch(TeamFileEx *team1,TeamFileEx *team2);
ushort __usercall DIY_GetCurrentFixtureTeamClass(void);
short __usercall DIY_PlayOrSimulateLeagueFixture(short selector);
void __usercall DIY_SyncProgressToDiyFileBufferCopy_2(void);
void __usercall DIY_SortLeagueTableByStandings(void);
void __usercall SaveSelectedTeams(void);
void __usercall RestoreSelectedTeams(void);
ushort __usercall DIY_ComputeAverageTeamStrengthTier(ushort count,void *table);
void FUN_0012b1f4(void);
void FUN_0012b20a(void);
void FUN_0012b218(void);
void __usercall DIY_CachePrimaryQualifiedTeamsGrid(void);
void __usercall DIY_CacheSecondaryQualifiedTeamsGrid(void);
void __usercall DIY_CacheTertiaryQualifiedTeamGrid(void);
void __usercall Career_DrawEuropeanCupTeamsAndCopyGrids(void);
void __usercall Career_DrawRandomTeamFromPoolAndCopyGrid(ushort team,void *dst,void *table,ushort factor);
void __usercall Career_UpdateEuropeanChampionshipCompetitions(void);
void __usercall Career_UpdateEuropeanChampionshipCompetitionSlot(void *competition,ushort count,void *out);
void __usercall DIY_BuildQualifiedTeamListFromSortedTable_EC(ushort count,void *out);
void __usercall Career_UpdateWorldCupCompetitions(void);
void __usercall Career_UpdateWorldCupCompetitionSlot(void *competition,ushort count,void *out);
void __usercall DIY_BuildQualifiedTeamListFromSortedTable_WC(ushort count,void *out);
void __usercall DIY_BuildQualifiedTeamListFromDiyFileBuffer(ushort count,void *out);
void __usercall DIY_SyncCompetitionTeamGridOrBuildBracket(void);
void __usercall Career_UpdateEuroCupCompetitionSlot(void);
void __usercall Career_CopyEuroCupTeamGridAndTitleHolder(void);
void __usercall Career_UpdateCupWinnersCupCompetitionSlot(void);
void __usercall Career_CopyCupWinnersCupTeamGridAndTitleHolder(void);
void __usercall Career_UpdateUefaCupCompetitionSlot(void);
void __usercall Career_CopyUefaCupTeamGridAndTitleHolder(void);
void __usercall Career_PrepareEuropeanCupQualificationState(void);
void __usercall Career_ProcessCompetitionForEuropeanCupQualification(void);
void __usercall Career_QualifyTeamForEuroCup_IfEligibleCompetition(void);
void __usercall Career_QualifyTeamForCupWinnersCup_IfEligibleCompetition(void);
void __usercall Career_QualifyTeamsForUefaCup_IfEligibleCompetition(void);
ushort __usercall TryConsumeCompetitionIdFromList(uchar *list);
void __usercall IsTeamInCupWinnersCupList(void);
void __usercall IsTeamInUefaCupList(void);
void __usercall Career_ClearEuropeanCupTitleHolderIfMatchTeam(ushort team);
void __usercall AppendTeamToEuroCupList(void *ptr);
void __usercall AppendTeamToCupWinnersCupList(void *ptr);
void __usercall AppendTeamToUefaCupList(void *ptr);
void __usercall Career_AdvanceToNextSeason_UpdateCompetitions(void);
void __usercall Career_ProcessCompetitionForNextSeason(uchar comp);
void __usercall nullsub_13(void);
void __usercall DIY_LoadCompetitionDivisionForGrid(void *competition,ushort arg);
void __usercall DIY_LoadCompetitionForQualifiedTeamsGrid(void *competition);
void __usercall DIY_EditCompetitionSlotForCompetition(void *competition);
void __usercall Career_ProcessSecondaryCompetitionForNextSeason(void *competition);
void __usercall Career_ProcessTertiaryCompetitionForNextSeason(void *competition);
void __usercall Career_ProcessPrimaryCompetitionForNextSeason(void *competition);
void __usercall DIY_CopyCompetitionTeamIndexTable(void *dst);
void __usercall Career_ProcessDiyLeagueQualificationEntry(ushort index,void *competition);
void __usercall DIY_ApplyPromotionRelegationWeightsToScratch(void *weights);
void __usercall Career_FillRandomTeamListExcludingSelected(ushort count,void *table,uchar *out);
void __usercall DIY_UpdatePromotionRelegationScratchCounts(void);
void __usercall DIY_LoadLeagueScratchFromTable(void);
void __usercall DIY_SaveLeagueScratchToTable(void);
void __usercall DIY_ValidateLeagueScratchBuffer(void);
void __usercall Career_SetCupPickList_Oceania(void);
void __usercall Career_SetCupPickList_NorthAmerica(void);
void __usercall Career_SetCupPickList_Asia(void);
void __usercall Career_SetCupPickList_Africa(void);
void __usercall Career_SetCupPickList_SouthAmerica(void);
void __usercall Career_SetCupPickList_Europe(ushort *teamList);
void __usercall Career_RandomizeInvitationTournamentCup(void);
void __usercall Career_SetupWorldCupQualifyingGroups(ushort *teamList);
void __usercall Career_FillWorldCupQualifyingGroupTeams(uchar regionCode,void *group,ushort *teamList);
void __usercall Career_SetCupPickList_ForSelectedRegion(void);
void __usercall Career_SetupFriendlyCupTeams(void);
void __usercall Career_SetupInvitationTournamentTeams(void);
void __usercall Career_SetupTourCupTeams(void);
ushort __usercall Career_PickRandomNationalTeamId(ushort minValue,ushort maxValue,uchar regionFilter,ushort *currentListBase,ushort countSoFar);
void __usercall DIY_SelectCompetitionSlot4FromCurrentDivision(void);
void __usercall DIY_RebuildCompetitionAndTeamSelectionCaches(void);
void __usercall Career_CopyCompetitionTeamByIndex(void *competition,ushort *outList,int *indexStream);
void __usercall TeamSelectionKeyCache_InsertSpaceSorted(uchar key,ushort insertionBytes);
void __usercall Career_SetCurrentCompetitionSlot(void *comp,ushort slot,ushort hasSelectedTeams);
void __usercall TeamSelectionKeyCache_BuildFromCompetitionBlock(void *blk);
void __usercall TeamSelectionKeyCache_AddNextRoundCupEntry(uchar *out,uchar *src,ushort idx,ushort total,ushort teamId,ushort slotLen,void *base);
void FUN_0012d170(void);
void __usercall TeamSelectionKeyCache_AddCupEntry(uchar *out,uchar *src,ushort team,ushort round,ushort total,ushort slotLen,void *base);
void __usercall DIY_UpdateCompetitionProgressOrAdvanceSlot(void *blk);
void __usercall DIY_RecordLeagueFixtureResultAndAdvanceProgress(void);
ushort __usercall DIY_GetSelectedTeamIdFromIndex(uchar *p,void *base);
uint FUN_0012d4b0(void);
void __usercall Career_UpdateStatsAfterMatch(void);
void __usercall Career_AutoAdvanceLeagueFixtures(void);
void __usercall DIY_AdvanceLeagueFixtureIndex(void);
void __usercall Career_AutoAdvanceCupMatches(void);
void __usercall DIY_AdvanceCupFixtureIndex(void);
void __usercall Career_AutoAdvanceCompetitionSlots(void);
void __usercall Career_CopyCompetitionFileBufferToOrFromActive(void);
void __usercall Career_CopyCompetitionContextToOrFromActive(void);
void __usercall Career_CopyTertiaryCompetitionContextToOrFromActive(void);
void __usercall Career_CopyEuroCupsCompetitionContextToOrFromActive(void);
void __usercall Career_LoadCompetitionSlotStateFromBuffer(void *src);
void __usercall Career_StoreCompetitionSlotStateToBuffer(void *dst);
void __usercall Career_UpdateCareerFinishedFlag(void);
void __usercall CareerPlayMatch(void);
void __usercall Career_PlayMatchMenuLoop(void);
void __usercall Career_NextMatch(void);
void __usercall Career_OpenCompetitionSlotMenuAndApplyChanges(void);
void __usercall Career_ProcessCurrentCompetitionSlotForMatch(void);
void __usercall Career_ProcessCurrentCompetitionSlotAfterMatch(void);
void * __usercall TeamSelectionKeyCache_GetListElementPtr(ushort listIndex,ushort elementIndex);
void * __usercall TeamSelectionKeyCache_GetListPtr(ushort listIndex);
void * __usercall TeamSelectionKeyCache_GetCurrentSelectedElementPtr(void);
void * __usercall TeamSelectionKeyCache_GetCurrentListPtr(void);
void __usercall Career_AdvanceToNextTeamSelectionKeyCacheEntry(void);
void __usercall Career_AutoSimulateLeagueFixturesUntilHumanTeam(void);
void __usercall Career_AutoSimulateCupMatchesUntilHumanTeam(void);
void __usercall Career_AutoSimulatePendingMatchUntilHumanTeam(void);
void __usercall Career_AutoPlayOrSimulateLeagueFixtureLoop(void);
void __usercall Career_AutoPlayCupMatchAndAdvanceLoop(void);
void __usercall Career_UpdateHybridCompetitionProgressAndMaybeAdvanceSlot(void);
void __usercall Career_InitializeSelectedTeamAndStartingBalance(void);
void __usercall InitCareer(ushort teamNo);
void __usercall InitializeNewSeason(void);
ushort __usercall Career_SelectEuroCupSlotIfTeamParticipates(void *ptr);
ushort __usercall Career_UpdateLastNationalityCall(void);
void __usercall InitNewSeason(void *src,ushort arg);
void __usercall Career_ViewOrEditCompetitionSlot(void *comp,ushort sel);
void __usercall Career_AutoAdvanceInternationalCompetitionFixtures(void *contest);
void __usercall Career_AutoAdvanceCupCompetitionFromRecord(void *contest);
void __usercall Career_AutoAdvanceLeagueCompetitionFromRecord(void *contest);
void __usercall DIY_RecomputeCompetitionDerivedProgressionTable(void);
void __usercall DIY_InitCupBracketProgressionTable(void);
void __usercall DIYTournament_BuildMatchesPerTeamProgressionTable(void);
void __usercall Career_PostMatchUpdate(void);
void __usercall Career_HandleRetirement(void);
char __usercall ContinueCareerNextSeason(void);
ushort __usercall FindTeamInDIY(ushort teamNo,DIY_Competition *comp);
ushort __usercall GetMoreExpensiveTeamsCountWrapper(ushort teamNo,DIY_Competition *comp);
ushort __usercall GetMoreExpensiveTeamsCount(ushort teamNo,DIY_Competition *comp);
void __usercall InitializeNewSeason_BuildTeamBudgetRankTable(void);
void __usercall ShowChairmanOpinionAboutTheSeason(void);
void __usercall ShowSeasonOpinion(void);
void __usercall SeasonFinished_ComputeSeasonReview(void);
void __usercall SeasonReview_AdjustWeightsForCompetition(void *comp);
void __usercall SeasonReview_ComputeCategoryForCompetition(void);
void __usercall ShowLeavingMessage(void);
void __usercall ShowGreetingMessage(void);
void __usercall ShowLastSeasonMessage(void);
void __usercall ShowWishYouSuccessMessage(void);
void __usercall ShowEnjoyLastSeasonMessage(void);
void __usercall ShowRetirementMessage(void);
void __usercall Career_AppendTeamToTmdTeamPool(void *team);
void __usercall Career_RemoveTeamFromTmdTeamPool(ushort teamNo);
ushort __usercall SearchTeamInTmdFile(ushort teamNo);
void __usercall Career_AutoAdvanceCompetitionAndPersistSlotState(void *comp);
void __usercall DrawAnimatedPatterns(void);
void __usercall SwapTwoRandomIndicesFromAnimPatternsTable(void);
void __usercall ResetAnimatedPatternsForBothTeams(void);
void __usercall ResetAnimatedPatterns(void);
void __usercall InitAnimatedPatterns(void);
void __usercall DrawPatternFromIndex(ushort patternIndex);
void __usercall TrainingMatch_SaveSelectedPlayerId(uchar value);
void __usercall TrainingMatch_RemoveSavedPlayerId(ushort value);
void __usercall TrainingMatch_SaveLastMatchState(void);
void __usercall TrainingMatch_RestoreLastMatchState(void);
void __usercall TrainingMatch_RestoreSavedTeamSelectionState(void);
void __usercall TrainingMatch_SaveTeamSelectionState(void);
short __usercall CheckIfTeamIsChanged(void);
void __usercall PlayTrainingGame(void);
void __usercall TrainingMatch_BuildCurrentTeamFromCareerTeam(void);
void __usercall TrainingMatch_ApplyUseMatchTeamAndSwapSubs(void);
void __usercall TrainingMatch_FindBestSubSwapCandidates(void);
ushort __usercall TrainingMatch_IsPlayerBetterSwapCandidate(void *cur,void *best,char bestSkill);
void __usercall TrainingMatch_AddTrialPlayersForNewSeason(void);
void __usercall TrainingMatch_TryAddTrialPlayerAtPosition(ushort position);
void __usercall AddTrialPlayer(void);
void __usercall TrainingMatch_AddTrialPlayerAtPosition(ushort position);
void __usercall Career_ApplyPostMatchPlayerStatModsIfCareerTeam(void *team,uchar *mods);
void __usercall Career_UpdateSinglePlayerPostMatchStats(void *player);
void __usercall CheckPlayersLeavingComing(void);
void __usercall PlayerJoinedClubOnTrial(char *name);
void __usercall TrialPlayerLeftClubMessage(char *name);
void __usercall ReservePlayerLeftClubMessage(char *name);
void __usercall ChooseTeamsFriendlyInitFinish(void);
void __usercall ViewSelected(void);
void __usercall ExitChooseTeams2(void);
void __usercall ChooseTeamsPlayMatchSelected(void);
void __usercall ChooseTeamsFriendlyCommon2(MenuEntry *entry);
void __usercall ChooseTeamsSetHeader(void);
void __usercall Bureaucracy(void);
void __usercall CheckNumTeamsAllowed(void);
void __usercall ChooseTeamsFriendly_UpdateMenuEntryYLayout(void);
TeamFile * __usercall AddTeamToBuffer(TeamFile *team);
void __usercall DeselectTeam(TeamFile *teamToRemove);
TeamFile * __usercall FindTeam(TeamFile *teamToFind,ushort index);
void __usercall ChooseTeamsFriendlyInit(void);
void __usercall SetTeamEntriesStringsAndColors(void);
void __usercall ChangeTeams(void);
void __usercall AbortChooseTeamsFriendly(void);
void __usercall ChooseTeamsFriendlyOnSelect76(void);
short __usercall ChooseTeamsFriendlyCommon(MenuEntry *entry);
void __usercall ChooseTeamsFriendly_DrawChangeTeamsPrompt(void);
void __usercall SetChooseChangeTeamsEntries(void);
void __usercall ViewSelTeamsSetColumns(void);
void __usercall DeselectAllTeams(void);
void __usercall ShowDesignDIYLeagueMenu(void);
void __usercall ShowLeagueInfo(void);
void __usercall ShowDiyLeaguesTournamentMenu(short arg0,short arg1,short arg2);
void __usercall DesignDIYLeagueInit(void);
void __usercall DesignDIYLeagueFinish(void);
void __usercall DesignDIYLeagueUpdatePromotionRelegationText(void);
void __usercall DIYLeagueSetVariousFields(void);
void __usercall DIYLeagueOKSelected(void);
void __usercall DesignDIYLeagueOK(void);
void __usercall DesignDIYLeagueSetName(MenuEntry *entry);
void __usercall DesignDIYLeagueChooseTeams(void);
void __usercall DIYSetMonthsOrPitchTypeEntries(void);
void __usercall DIYLeagueChangePitchTypeOrSeason(void);
void __usercall DesignDIYLeagueChangePitchType(MenuEntry *entry);
void __usercall DesignDIYLeagueChangeStartMonth(void);
void __usercall DesignDIYLeagueChangeEndMonth(MenuEntry *entry);
void __usercall DesignDIYLeagueChangeNumberOfTeams(MenuEntry *entry);
void __usercall DesignDIYLeagueChangePlayEachTeam(MenuEntry *entry);
void __usercall SetPlayEachTeamString(MenuEntry *entry);
void __usercall DesignDIYLeagueChangeNumPointsForWin(MenuEntry *entry);
void __usercall ConvertMinMaxSubstitutesNumbers(void);
void __usercall DesignDIYLeagueChangeMinSubstitutes(MenuEntry *entry);
void __usercall DesignDIYLeagueChangeMaxSubstitutes(MenuEntry *entry);
void __usercall SetNumberOfTeamsToSelect(void);
void __usercall DIYLeagueTournamentInit(void);
void __usercall DIYLeagueTournamentOnRestore(void);
void __usercall jmp_SetExitMenuFlag_7(void);
short __usercall DIYLeagueTournamentStats(void);
void __usercall DIYLeagueTournamentExit(void);
void __usercall DIYLeagueTournament_UpdateViewOptionsAvailability(void);
void __usercall DIYLeagueTournamentMatch(MenuEntry *entry);
void __usercall DIYLeagueTournamentOnSelect4(MenuEntry *entry);
void __usercall DIYLeagueTournamentResult(MenuEntry *entry);
void __usercall DIYLeagueTournamentViewMatch(MenuEntry *entry);
void __usercall DIYLeagueTournamentViewHighlights(MenuEntry *entry);
void __usercall DIYLeagueTournamentViewResult(MenuEntry *entry);
void __usercall DIYLeagueTournamentMatchCommon(ushort action);
void __usercall DIYSetTeamNamesAndResults(void);
void __usercall DIYLeagueTournamentNextMatch(void);
void __usercall DIYLeagueTournament_DrawPlayMatchAndFixtureHeader(void);
void __usercall DIYLeagueTournament_SetupCurrentFixtureTeamNames(void);
void FUN_00132e24(void);
void __usercall DIYLeagueTournament_UpdateMenuEntryVisibilityAndFocus(void);
void __usercall DIYLeagueTournament16BeforeDraw(MenuEntry *entry);
void __usercall DIYLeagueTournamentScrollUp(void);
void __usercall DIYLeagueTournamentScrollDown(void);
void __usercall nullsub_15(void);
void __usercall DIYLeagueTournament_ScrollFixtureListToCurrentFixture(void);
void __usercall DIYLeagueTournament_EnsureCurrentFixtureVisible(void);
void __usercall ShowDesignDIYCupMenu(void);
void __usercall ShowCupInfo(void);
void __usercall ShowDIYCupMenuWithParams(short a0,short a1,short a2);
void __usercall DesignDIYCupInit(void);
void __usercall DesignDIYCupReinit(void);
void __usercall DesignDIYCup_UpdateStartEndMonthIndices(void);
void __usercall DesignDIYCup_SetupTeamsSelectionUI(void);
void __usercall DesignDIYCupOK(void);
void __usercall DesignDIYCupOnSelect2(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect48(void);
void __usercall DesignDIYCup_UpdatePitchTypeOrSeasonSelectionVisibility(void);
void __usercall DesignDIYCupOnSelect3(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect4(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect5(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect7(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect9(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect11(MenuEntry *entry);
void __usercall DesignDIYCup_UpdateMinSubstitutesAndPointsStrings(void);
void __usercall DesignDIYCupOnSelect13(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect15(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect20(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect21(MenuEntry *entry);
void __usercall DesignDIYCupOnSelect22(MenuEntry *entry);
void __usercall DesignDIYCup_GetRoundIndexFromMenuEntry(MenuEntry *entry);
void __usercall DesignDIYCup_UpdateSelectTeamsPrompt(void);
void __usercall DesignDIYCupOnDraw(void);
void __usercall DIYCupInit(void);
void __usercall DIYCupFinish(void);
void __usercall jmp_SetExitMenuFlag_5(void);
void __usercall DesignDIYCup_UpdateRoundOptionsVisibility(void);
void __usercall DesignDIYCup_BuildMenuTitleString(void);
void __usercall DIYCupOnSelect10(void);
short __usercall DIYCupOnSelect9(void);
void __usercall DIYCupOnSelect16(void);
void __usercall DIYCupOnSelect17(void);
void __usercall DIYCupOnSelect1(void);
void __usercall DesignDIYCup_DrawCurrentMatchTeamEntries(void);
void __usercall DesignDIYCup_UpdateCurrentMatchTeamEntryStrings(void);
void __usercall DesignDIYCup_UpdateMatchListAndRedrawIfNeeded(void);
short __usercall DesignDIYCup_UpdateMatchListScrollAndRebuildStrings(void);
void __usercall DesignDIYCup_HideCurrentMatchTeamEntries(void);
void __usercall DesignDIYCup_BuildMatchListEntryStrings(void);
void __usercall DesignDIYCup_AppendOrTeamNameToMenuEntry(void);
void __usercall DesignDIYCup_AppendTeamNameToMenuEntry(void);
void FUN_00134c96(void);
void __usercall DesignDIYCup_UpdateMenuEntriesVisibilityAndSelection(void);
void __usercall DIYCupOnSelect3(MenuEntry *entry);
void __usercall DIYCupOnSelect4(MenuEntry *entry);
void __usercall DIYCupOnSelect5(MenuEntry *entry);
void __usercall DIYCupOnSelect6(MenuEntry *entry);
void __usercall DIYCupOnSelect7(MenuEntry *entry);
void __usercall DIYCupOnSelect8(MenuEntry *entry);
void __usercall DIYCupOnSelectCommon(void);
void __usercall DesignDIYCup_UpdateCurrentMatchResultHeaderEntries(void);
void __usercall SetDefaultOptions(void);
void __usercall SaveOptions(void);
void __usercall RestoreOptions(void);
void __usercall CycleMenuMusic(void);
void __usercall OptionsMenuBeforeDraw(void);
void __usercall ChangePitchType(void);
void __usercall ChangeGameLength(void);
void __usercall ChangeAutoReplays(void);
void __usercall ChangeAllPlTeamsEqual(void);
void __usercall ChangeAutoSaveHighlights(void);
void __usercall ChangeMenuMusic(void);
void __usercall ExitOptions(void);
void __usercall ShowDesignDIYTournamentMenu(void);
void __usercall ShowTournamentInfo(void);
void __usercall DesignDIYTournamentInit(void);
void __usercall DesignDIYTournamentReinit(void);
void __usercall DesignDIYTournament_UpdateMonthPageIndices(void);
void __usercall DesignDIYTournament_ApplyInactiveMenuColors(void);
void __usercall DesignDIYTournamentOK(void);
void __usercall DesignDIYTournamentOnSelect91(void);
void __usercall DesignDIYTournamentOnSelect2(void);
void __usercall DesignDIYTournamentOnSelect89(void);
void __usercall DesignDIYTournament_UpdatePitchTypeSeasonalUI(void);
void __usercall DesignDIYTournamentOnSelect3(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect4(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect5(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect7(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect9(MenuEntry *menu);
void __usercall DesignDIYTournament_UpdateTwoNumericFieldsText(void);
void __usercall DesignDIYTournamentOnSelect11(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect13(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect21(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect23(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect24(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect25(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect26(MenuEntry *menu);
void __usercall DesignDIYTournamentOnSelect28(MenuEntry *menu);
void * __usercall DesignDIYTournament_GetStageBlockFromMenuEntry(MenuEntry *menu);
void __usercall DesignDIYTournament_UpdateSelectTeamsPrompt(void);
void __usercall DesignDIYTournamentOnDraw(void);
void __usercall DesignDIYTournament_CacheStageSelection(MenuEntry *menu);
void __usercall DesignDIYTournament_AdjustStageQualifiers(MenuEntry *menu);
void __usercall DesignDIYTournament_RedrawStageItemsFromBlock(void *blk,short count);
void __usercall DIYTournament_RecalculateNumStages(void);
void __usercall DesignDIYTournamentOnSelect20(MenuEntry *menu);
short __usercall DIYTournament_ComputeGroupLayoutForTeams(short candidate,short current,short stage);
void __usercall DIYTournament_AdjustGroupLayoutForMaxTeams(short countA,short countB,short maxAllowed,short stage);
void __usercall SelectDiyLeagueMenu(void);
void __usercall SelectDiyCupMenu(void);
void __usercall SelectDiyTournamentMenu(void);
void __usercall SelectDiyExitMenu(void);
void __usercall Friendly(void);
void __usercall ShowFriendlyMenu(void);
void __usercall ContestInProgress(void);
void __usercall FriendlyMenuInit(void);
void __usercall FriendlyMenuReinit(void);
void __usercall DrawNumbersOfSubstitutes(void);
void __usercall DisableEntries(void);
void __usercall FriendlyOK(void);
void __usercall ChooseTeamsMenu(void);
void __usercall PitchTypeOrSeasonProc(void);
void __usercall SetFriendlyPitchOrSeason(void);
void __usercall FriendlyPitchTypeProc(MenuEntry *menu);
void __usercall MinSubstitutes(MenuEntry *menu);
void __usercall MaxSubstitutes(MenuEntry *menu);
void __usercall SetSelectTwoTeamsText(void);
void __usercall RandomlySwapTeams(void);
void __usercall EditCustomTeam(void);
void __usercall EditTeamsCallback(TeamFile *team);
void __usercall EditTeamsInit(void);
void __usercall EditTeamsFinish(void);
void __usercall ImportTeamsMenu(void);
void __usercall EditTeamsUndo(void);
void __usercall EditTeamsOK(void);
void __usercall EditTeamsChangeShirtsPrimary(void);
void __usercall EditTeamsChangeShirtsSecondary(void);
void __usercall EditTeamsChangeShortsPrimary(void);
void __usercall EditTeamsChangeShortsSecondary(void);
void __usercall EditTeamsChangeSocksPrimary(void);
void __usercall EditTeamsChangeSocksSecondary(void);
void __usercall EditTeamsSelectPrimaryShirtType(MenuEntry *menu);
void __usercall EditTeamsSelectSecondaryShirtType(MenuEntry *menu);
void __usercall EditTeamsChangePlayerName(MenuEntry *menu);
void __usercall EditTeamsSelectTeamName(MenuEntry *menu);
void __usercall EditTeamsSelectCoachName(MenuEntry *menu);
void __usercall EditTeamsChangePlayerFace(MenuEntry *menu);
void __usercall InitEditTeamsMenu(void);
void __usercall EditTeamsPlayersBeforeDraw(MenuEntry *menu);
void __usercall PrimaryKitColorConversion(void);
void __usercall SecondaryKitColorConversion(void);
void __usercall MarkFirstKitShirt(void);
void __usercall MarkSecondKitShirt(void);
PlayerFile * __usercall EditTeamsGetPlayerPointer(MenuEntry *entry);
void __usercall nullsub_16(void);
uint FUN_001382f6(void);
void __usercall TopGoalScorersMenu_0(void);
void __usercall PopulateHighestScorersTableFromSelectedTeams(void);
void __usercall InitHighestScorersTable(void);
void __usercall AddTeamScorersToHighestScorersTable(short statIndex,void *team);
uchar __usercall UpdateHighestScorersMinScoreAndCount(void);
void __usercall FindReplaceableLowestScorerSlot(void);
void __usercall SortHighestScorerTable(void);
char * __usercall GetScorerSurname(void *scorer);
void __usercall CompetitionTopGoalScorersInit(void);
void __usercall CompetitionTopGoalScorersExit(void);
void __usercall TopGoalScorersInit(void);
void __usercall TopGoalScorersBeforeDrawCommon(MenuEntry *entry);
void __usercall TopGoalScorersExit(void);
void __usercall FormTopSkillsString(char *dest,PlayerFile *player);
void SelectAndShowSquadToView(void);
void FUN_001391ac(void);
void FUN_001391c4(void);
void __usercall SquadInit(void);
void __usercall SquadFinish(void);
void __usercall SelectTraining(void);
void __usercall SelectGoals(void);
void __usercall SquadOnSelect11(void);
void __usercall j_SetExitMenuFlag(void);
void __usercall SquadOnSelect45(void);
void __usercall Squad45AfterDraw(void);
void __usercall SquadUpdateGoalsMenuText(void);
void __usercall SquadUpdateMenuState(void);
void __usercall SquadCommon(void);
void __usercall SquadSwapPlayersAtIndices(void);
short __usercall SquadAfterDrawCommon(void);
void __usercall SquadRedrawPlayerListAndCheckMark(void);
void __usercall SquadMenuSavePlayerPositions(void);
void __usercall SquadCommitPositionsAndUpdateSkill(void);
void __usercall UpdateBigCheckMark(void);
void __usercall RotatePlayersLeft(TeamFile *team,short maxSubs);
void __usercall SetSquadMenuEntryStatusSprite(short rowMode,MenuEntry *entry,PlayerFile *player);
void __usercall SetSquadMenuEntryStatusSprite_AfterSim(MenuEntry *entry,PlayerFile *player);
void __usercall SetMenuEntryPlayerFace(MenuEntry *entry,PlayerFile *player);
char * __usercall GetCompetitionAbbrevStr(void *competition);
short __usercall SetupDIYCompetitionStatsMenu(void);
void __usercall StatsHighestScorerList(short mode,char *diyName);
void __usercall CompetitionInfo(void);
void __usercall StatsViewSquads(ushort numTeams,ushort arg,TeamFile *teams);
void __usercall StatsExit(void);
short __usercall CareerOverInit(void);
short __usercall CareerOverFinish(void);
short __usercall CareerOverUpdateJobOffersEntry(void);
short __usercall ViewCompetitionsMenuRetired(void);
short __usercall JobOffersMenuRetired(void);
void __usercall ContinueCareer(void);
short __usercall SaveCareer(void);
void __usercall ExitCareerMenu(void);
short __usercall SelectTeamToManage(void);
void __usercall CareerMenuInit(void);
void __usercall CareerMenuFinish(void);
void __usercall SetNationalityField(void);
void __usercall ChangeNationality(void);
void __usercall SetPlayerCoachFieldColor(void);
void __usercall ChooseTeamAndStartCareer(void);
void __usercall LoadLiverpool(void);
void __usercall ChangeSex(void);
void __usercall CheckSex(void);
void __usercall SetName(void);
void __usercall SetSurname(void);
void __usercall CoachOrPlayerCoach(void);
void __usercall j_SetExitMenuFlag2(void);
void __usercall ViewCompetitionsInit(void);
void __usercall ViewCompetitionsOnReturn(void);
void __usercall OpenDiyFromFile(void);
void __usercall OpenDiyPreset1(void);
void __usercall OpenDiyPreset2(void);
void __usercall OpenDiyPreset3(void);
void __usercall ShowDiyCompetitionForSource(void *header);
void __usercall TopGoalScorersMenu(void);
void __usercall ManagementRecordMenu(void);
void __usercall jmp_SetExitMenuFlag_2(void);
void __usercall ContestMenuInit(void);
void __usercall ContestMenuOnReturn(void);
void __usercall PlayMatchMenu(void);
void __usercall NextMatch(void);
void __usercall ViewCompetitionsMenu(void);
ushort __usercall SquadMenu(void);
void __usercall ClubBusinessMenu(void);
void __usercall JobOffersMenu(void);
void __usercall SeasonFinished(void);
void __usercall TransfersMenu(void);
void __usercall ViewWorldMenu(void);
void __usercall jmp_SetExitMenuFlag(void);
void __usercall ContestMenuScrollUp(void);
void __usercall ScrollUpInGameList(void);
void __usercall ContestMenuScrollDown(void);
void __usercall ScrollDownInGameList(void);
void __usercall RestoreContestScrollPosition(void);
void __usercall SelectActiveContestAndRound(void);
void __usercall CheckClubBusiness(void);
void __usercall CheckJobOffers(void);
void __usercall ContestMenuOnReturn_SetButtonsAndDefaultSelection(void *a5);
void __usercall ContestSetButtons(void);
void __usercall SeasonLowerButtons(void);
void __usercall CheckTransfers(void);
void __usercall BuildGameListArrayFromTeamSelectionKeyCache(void);
void __usercall PrintNameAndSeason(void);
void __usercall ContestMenuOnReturn_NoOp(void);
void __usercall SetNationalSelectorButtons(void);
void __usercall CareerGameListCommon(MenuEntry *item);
void __usercall ManagementRecordInit(void);
void __usercall jmp_SetExitMenuFlag_3(void);
void __usercall ManagementArrowUpSelect(void);
void __usercall ManagementArrowDownSelect(void);
void __usercall FillManagementRecordInfo(void);
void __usercall RenderCompLine(char *compName,short resultCode,uchar qualFlag,SeasonInformations *si,int y);
void __usercall SetTrophySprites(SeasonInformations *si);
MenuEntry * __usercall SetTrophySprite(ushort trophyIndex,MenuEntry *slot);
SeasonInformations * __usercall GetCurrentSeasonPointer(void);
void __usercall Career_StorePromotionRelegationInSeasonInfo(void);
void __usercall Career_FillCurrentSeasonInfo(void);
short __usercall EncodeCompetitionPositionForSeasonInfo(short pos,void *compFile,void *compDef);
void * __usercall ChooseTeamForEditTactics(char *menuName,ushort *teamIds,ushort teamCount);
void __usercall SelTeamForTacticsInit(void);
void __usercall SelTeamForTacticsExit(void);
void __usercall SelTeamForTacticsCommon(MenuEntry *entry);
void __usercall SelTeamForTactics_ReflowTeamListLayout(void);
void __usercall SelectTeamsFinalMenu(ushort teamFileNumber);
char * __usercall GetCountryName(ushort countryId);
void __usercall PushContinent(ushort countryId);
ushort __usercall PopContinent(void);
void __usercall SetSelectedTeamsStackTop(void);
void __usercall PushLastSelectedTeam(void);
void __usercall GetSelectedTeamsStackTop(void);
void __usercall MarkSelectedTeamsStackLocation(void);
void __usercall IsContestContinentalCup(void);
void __usercall SetTeamsTypeForSelectedContest(void);
ushort __usercall IsClubTeamsContest(void *contest);
TeamFile * __usercall ChooseTeamsDialog(ushort showClubTeams,ushort showNationalTeams,ushort showOrigCustomTeams,char *title,void *onSelect);
TeamFile * __usercall ChooseTeamsDialogWithNationality(ushort nationality,ushort showClubTeams,ushort showNationalTeams,ushort showOrigCustomTeams,char *title,void *onSelect);
void __usercall ChooseCompetitionMenu(void);
void __usercall SelectTeamsForPresetCompetition(void);
void __usercall ChooseSeasonMenu(void);
void __usercall GoGetTeamsForPlay(ushort showClubTeams,ushort showNationalTeams,ushort showOrigCustomTeams,char *gameTypeStr,char *playWhatStr,ushort numNeededTeams);
void __usercall SelectTeamsInit(void);
void __usercall SelectTeamsReinit(void);
void __usercall SetLeagueNames(void);
void __usercall SetCountryNames(void);
void __usercall ViewSelectedTeams(void);
void __usercall ChooseTeamsPlayGame(void);
void __usercall ExitSelectTeams(void);
void __usercall SelectTeamsCommon(MenuEntry *entry);
void __usercall SelectLeaguesCommon(MenuEntry *entry);
void __usercall SetTeamsCoordinates(void);
void __usercall CheckNumberOfTeams(void);
void __usercall ChooseTeamsInit(void);
void __usercall ClubTeams(void);
void __usercall NationalTeams(void);
void __usercall OriginalCustomTeams(void);
void __usercall EditedCustomTeams(void);
void __usercall ExitChooseTeams(void);
void __usercall ShowFsErrorByCode(ushort errCode);
short __usercall SelectFileToSaveDialog(uint filterExt,char *menuTitle);
short __usercall GetFilenameAndExtension(uint preferredExt,char *menuTitle);
void __usercall SelectFilesInit(void);
void __usercall SelectFilesOnReturn(void);
void __usercall SelFilesDrawItemDescription(MenuEntry *cur);
void __usercall SelectFilenameToSaveAndExit(void);
void __usercall AbortSaveFile(void);
void __usercall SelectFilesInputSaveFilenameOnSelect(MenuEntry *entry);
void __usercall SelFilesOnSelectCommon(MenuEntry *entry);
void __usercall RepositionSelectFileEntries(void);
void __usercall CopyFilenameExtensionAndSetExitMenuFlag(char *selectedFilename);
void __usercall AddExtension(char *filename);
void __usercall DiskMenuRet(void);
void __usercall FormatSaveDiskMenu(void);
void __usercall DeleteFileMenu(void);
void __usercall ExitDisk(void);
void __usercall ShowErrorMenu(char *errorText);
short __usercall DoContinueAbortMenu(char *header,uchar *whatIsChanging,char *continueText,char *abortText,ushort defaultEntry);
void __usercall ContinueInit(void);
void __usercall ContinueMenuContinueSelected(void);
void __usercall ContinueAbortInit(void);
void __usercall ContinueSelected(void);
void __usercall AbortSelected(void);
void __usercall SWOSMainMenuInit(void);
void __usercall CommonMenuExit(void);
void __usercall FriendlyMenu(void);
void __usercall DIYCompetitionMenu(void);
void __usercall PresetCompetitionMenu(void);
void __usercall SeasonMenu(void);
void __usercall CareerMenu(void);
void __usercall StartContest(void);
void __usercall SaveContest(void);
void __usercall LoadOldCompetitionMenu(void);
void __usercall EditCustomTeamMenu(void);
void __usercall EditTacticsMenu(void);
void __usercall HighlightsMenu(void);
void __usercall OptionsMenuSelected(void);
void __usercall SaveDiskFilingMenu(void);
void __usercall Career_BuildForeignMarketPoolFromSelectedTeam(void);
short __usercall AddCareerPoolPlayer(ushort teamNumber,uchar playerOrdinal,TeamFile *teamFile);
void __usercall DIY_AdvanceFixtureIndex(ushort lo,ushort hi);
void __usercall Career_ApplyForeignMarketPlayersToSelectedTeams(void);
void __usercall Career_ApplyPendingForeignMarketPlayersToSelectedTeams(void);
void FUN_00141734(void);
void __usercall Career_PatchTeamWithForeignMarketPlayers(void *teamPtr);
void __usercall FillForeignMarketPlayersData(void);
ushort __usercall GetAvgTeamValueBaseForCurrentPlayer(void);
ushort __usercall SnapToNearestAvgTeamValueBase(ushort value);
ushort __usercall SnapUpToAvgTeamValueBase(ushort value);
void __usercall Career_InitTransferMarketState(void);
void __usercall Career_InitSeasonTransferMarketState(void);
void __usercall Career_RemovePlayerFromTeamInternal(ushort team,ushort arg1,ushort arg2);
void __usercall RemovePlayerFromTeam(void);
void __usercall Career_AcceptOffer_SellPlayer(void);
void __usercall Career_AcceptOffer_BuyPlayer(void);
void __usercall Career_TransferPlayerAndAddReplacedToMarketPool(ushort team,ushort arg);
void __usercall SetBenchPlayersNumbers(TeamFile *team);
void __usercall TrainingMatch_AdjustSelectedTeamRosterForTrialists(ushort arg0,ushort arg1,void *team);
void __usercall TrainingMatch_AddTrialPlayerToSelectedTeam(ushort slotOrRole);
void __usercall Career_RemovePlayerAndAddAsTrialist(ushort team,ushort playerIndex);
void __usercall Career_RemovePlayerFromSelectedTeamRoster(ushort index);
void __usercall SelectBenchReplacementForStartingPlayer(ushort startIndex);
void __usercall SelectReserveReplacementForBenchPlayer(ushort startIndex,ushort curIndex);
void __usercall FindReplacementPlayerByPositionOrder(ushort startIndex,ushort rangeStart,ushort rangeEnd);
void __usercall Career_GenerateTrialistForTeamPlayer(ushort playerIndex,char *srcName);
void __usercall Career_ConvertPlayerToTrialistFromName(ushort team,ushort playerIndex,char *srcName);
void __usercall Career_InitTrialistAttributes(void *player,ushort team);
char * __usercall Career_PickRandomTrialistOriginValue(uchar avoidTeamByte,ushort avoidTeamWord);
void * __usercall PickRandomTeamRecordAvoidingTeam(ushort avoidTeamWord,uchar avoidTeamByte);
short __usercall GetRemainingTransferPoolSlots(void);
short __usercall GetRemainingOfferSwapSlots(void);
void __usercall PrunePlayerOffersAgainstRosterLimits(void);
void __usercall ShowPlayerOfferMenuForPlayer(ushort teamNumber,ushort playerOrdinal);
short __usercall CheckForTransferOffers(void);
void __usercall RemoveTransferOfferAtIndex(ushort offerIndex);
void __usercall RemovePlayerFromTransferOffers(ushort teamNumber,uchar playerOrdinal);
void __usercall LoadPoolplyrDat(void);
void * __usercall FindPoolplyrDatPlayer(ushort teamId,uchar playerOrdinal);
void __usercall FillCareerTeamPlayers(void);
void __usercall UpdateHomeMarketPlayers(void);
void __usercall AddCareerTeamPlayer(void);
void __usercall AddPlayerToCareerContest(ushort teamNumber,uchar playerOrdinal);
void __usercall RemovePlayerFromCareerContest(ushort teamNumber,uchar playerOrdinal);
void __usercall IsPlayerInCareerContest(ushort teamNumber,uchar playerOrdinal);
void __usercall FillForeignMarketPlayers(void);
void __usercall UpdateForeignMarketPlayers(void);
void __usercall AddRandomForeignMarketPlayer(void);
void __usercall AddForeignMarketPlayer(ushort teamId,uchar playerOrdinal);
void __usercall RemoveForeignMarketPlayer(ushort teamId,uchar playerOrdinal);
void __usercall FindForeignMarketPlayer(ushort teamId,uchar playerOrdinal);
void __usercall FindPlayerInCareerOrForeignMarket(ushort teamId,uchar playerOrdinal);
void __usercall AddPlayerToTransferMarket(ushort playerId);
void __usercall RemovePlayerFromTransferMarket(ushort playerId);
void __usercall FindPlayerOnTransferMarket(ushort playerId);
void __usercall ShowDomesticPlayerMarket(void);
void __usercall ShowForeignPlayerMarket(void);
void __usercall OffersInit(void);
void __usercall OffersCommon(MenuEntry *entry);
void __usercall j_SetExitMenuFlag_11(void);
void __usercall OffersAfterDrawCommon(MenuEntry *entry);
void __usercall TransferPlayerInit(MenuEntry *entry);
void __usercall TransferPlayerOnSelect10(MenuEntry *entry);
void __usercall TransferPlayerOnSelect11(MenuEntry *entry);
void __usercall TransferPlayerOnSelect12(MenuEntry *entry);
void __usercall TransferPlayerAfterDrawCommon(MenuEntry *entry);
void __usercall ThirdPartyOfferMenuInit(MenuEntry *entry);
void __usercall ThirdPartyOfferViewSquad(MenuEntry *entry);
void __usercall AcceptOffer(MenuEntry *entry);
void __usercall RejectOffer(MenuEntry *entry);
void __usercall AskForMore(MenuEntry *entry);
void __usercall ConsiderOffer(MenuEntry *entry);
void __usercall ThirdPartyOfferMenuExit(MenuEntry *entry);
void __usercall ThirdPartyOfferMenuAfterDrawCommon(MenuEntry *entry);
void __usercall PlayerOffersInit(MenuEntry *entry);
void __usercall UpdatePlayerOfferMenuIndicators(void);
void __usercall PlayerOffersOnSelect8(MenuEntry *entry);
void __usercall PlayerOffersOnSelect10(MenuEntry *entry);
void __usercall PlayerOffersOnSelect11(MenuEntry *entry);
void __usercall PlayerOffersOnSelect12(MenuEntry *entry);
void __usercall PlayerOffersAdjustOfferAmount(MenuEntry *entry);
void __usercall PlayerOffersUpdateOfferAmountText(void);
void __usercall PlayerOffersOnSelect13(void);
void __usercall PlayerOffersAfterDrawCommon(MenuEntry *entry);
short __usercall ShowSquad(TeamFile *team,char *title,uint maskLo,uint maskHi,short arg2,short arg3);
short __usercall ShowSquadWithFlags(uint flags,TeamFile *team,char *title,uint maskLo,uint maskHi,short arg2,short arg3);
void __usercall ViewSquadInit(void);
void __usercall ViewSquadExitContinue(void);
short __usercall ViewSquadOnSelect21(void);
short __usercall ViewSquad21AfterDraw(void);
void __usercall ViewSquadCommon(void);
short __usercall ViewSquadAfterDrawCommon(void);
void __usercall BuyOtherPlayersInit(void);
void __usercall BuyOtherPlayersFinish(void);
void __usercall j_SetExitMenuFlag_10(void);
short __usercall BuyOtherPlayersCommon(void);
short __usercall BuyOtherPlayersAfterDrawCommon(void);
void __usercall ShowPlayerMarketInit(void);
void __usercall ShowPlayerMarket(void);
void __usercall PlayerMarketFilterPositionOnSelect(void);
void __usercall PlayerMarketFilterAgeGroupOnSelect(void);
void __usercall PlayerMarketScrollOnSelect(void);
void __usercall PlayerMarketUpdateMoreListLabel(void);
void __usercall PlayerMarketViewSquadOnSelect(void);
void __usercall ExitPlayerMarketMenu(void);
void __usercall PlayerMarketResetListState(void);
void FUN_0014506e(void);
void __usercall PlayerMarketUpdateFilterMenuEntryState(void);
void __usercall PlayerMarketItemOnSelect(void);
void __usercall PlayerMarketItemBeforeDraw(void);
void __usercall PlayerMarketBuildVisiblePlayerList(void);
short __usercall PlayerMarketPlayerMatchesFilters(void *player,short diffFilter,uchar *ratingRange,uchar *positionList,ushort bitIndex);
void __usercall BuyPlayerInit(void);
void __usercall ViewDomesticPlayerMarket(void);
void __usercall ViewForeignPlayerMarket(void);
void __usercall BuyOtherDomesticPlayer(void);
void __usercall BuyOtherForeignPlayer(void);
short __usercall BuyPlayerViewSquad(void);
void __usercall BuyPlayerExit(void);
void __usercall TransferMarketInit(void);
void __usercall TransferMarketFinish(void);
char __usercall TransferMenuSetBankState(void);
void __usercall BuyPlayerMenu(void);
void __usercall PutPlayerOnMarketMenu(void);
void __usercall ViewOffersMenu(void);
void __usercall GiveFreeTransfer(void);
void __usercall jmp_SetExitMenuFlag_8(void);
void __usercall TakeOffMarketMenu(void);
void __usercall TransferMarketCommon(void);
void __usercall CheckNumPlayersOnTransferMarket(void);
void __usercall CheckIfPlayerSelected(void);
void __usercall EnableDisableOffers(void);
void __usercall TransferMarketAfterDrawCommon(void);
void __usercall IsTeamIdForSelectedTeam(void);
void __usercall FindTeamIdInDiyTeamsList(short *teamIdPtr);
void __usercall BuildTransferPlayerMenuEntry(MenuEntry *item,void *player,ushort y,ushort idx,ushort style,char *extra);
void __usercall ProcessOfferExpiryCountdown(void);
void __usercall UpdateAndExpireTransferOffers(void);
void __usercall GenerateRandomTransferOffers(void);
void __usercall CreateRandomTransferOfferForPlayer(ushort playerIndex);
void __usercall IsTeamEligibleForOfferByRefSkill(void *team,uchar refSkill);
short __usercall PickRandomEligibleExtraPlayerOrdinal(uchar refSkill);
short __usercall PickRandomEligibleSwapPlayerOrdinalFromTeam(void *teamBlock,short excludeSlot);
void __usercall IsOfferTeamPlayerPairUnique(ushort teamId,uchar playerIdx);
short __usercall EvaluateTransferOfferNegotiation(void);
void __usercall RemoveNegotiatedOfferPlayersFromMarkets(void);
void __usercall RemoveOfferPlayerFromMarketsAndCount(ushort teamId,short playerIndex);
void __usercall nullsub_14(void);
void __usercall ApplyOfferDemandMultipliersForSwapAndExtraPlayers(void);
void * __usercall GetTeamPointer(ushort teamId);
void * __usercall GetPlayer(ushort teamNumber,ushort playerFileIndex);
void * __usercall GetPlayerAtIndex(ushort teamNumber,ushort ordinal);
ushort __usercall GetPlayerSlotIndexByPlayerNumber(ushort teamNumber,ushort playerNumber);
TeamFile * __usercall GetPlayerInfoBreakPosition(TeamFile *teamPtr,ushort requestedSlot);
ushort __usercall GetTeamLeague(ushort teamNumber);
void __usercall Career_CopyUnavailablePlayerToCareerTeamSlot(void *srcPlayer,void *dstTeam,char *srcName,ushort srcTeamNumber,ushort srcPlayerIndex,ushort dstSlotIndex);
ushort __usercall Career_ShowAddInternationalPlayerDialog(ushort homeOrAbroadFlag);
uchar __usercall AddInternationalPlayerHome(void *selectedTeam);
uchar __usercall AddInternationalPlayerAbroad(void *selectedTeam);
ushort __usercall Career_AddInternationalPlayerCommon(void *selectedTeam,char *title);
void __usercall Career_RemoveInternationalPlayersByMask(uint removeMask);
ushort __usercall GetPlayerPositionFromCurrent(ushort playerIndex);
void __usercall Career_InitInternationalSquadAndLookupTablesForNewSeason(void *teamPtr);
void __usercall careerDefaultInternationalSquadSlotsTable(void);
ushort __usercall ShowSelectRepresentationMenu(void);
void __usercall SelectNationalTeamInit(void);
void __usercall SelectNationalTeamFinish(void);
void __usercall Career_UpdateNationalTeamMenuEntries(void);
void __usercall Career_RebuildInternationalPlayerSelectionMasks(void);
void __usercall Career_UpdateRemovePlayersMenuEntry(void);
void __usercall NationalTeamAddPlayer(void);
void __usercall NationalTeamRemovePlayers(void);
void __usercall SelectNationalTeamExit(void);
void __usercall SelectNationalTeamAbort(void);
void __usercall SelectNationalTeamOnSelect25(void);
void __usercall SelectNationalTeam25AfterDraw(void);
void __usercall SelectNationalTeamCommon(void);
void __usercall SelectNationalTeamAfterDrawCommon(void);
void __usercall NationalTeamAddPlayerInit(void);
void __usercall NationalTeamAddPlayerHomeOnSelect(void);
void __usercall NationalTeamAddPlayerAbroadOnSelect(void);
void __usercall NationalTeamAddPlayerExit(void);
short __usercall GetPlayerPosition(short playerIndex,TeamFileEx *team);
short __usercall ShowPlayMatchMenu(short controlFlags,short maxSubstitutes,short excludeFlags,short isFirstPlayerChoosingTeam,short squadChangesAllowed,TeamFile *team1,TeamFile *team2);
void __usercall PlayMatchMenuInit(void);
void __usercall PlayMatchMenuReinit(void);
void __usercall SetCurrentSelectedPlayerIndexPointer(void);
void __usercall OnSwapPlayer(MenuEntry *menuEntry);
void __usercall PlayMatchMenuSwapPlayers(short selectedMenuPos,short destMenuPos);
short __usercall HandleSquadSwapSelectionToggle(short menuPos);
void __usercall PlayMatchChangeTactics(void *menuEntry);
void __usercall ExitPlayMatch(void);
void __usercall PlayMatchSelected(void);
short __usercall EditTacticsInPlayMatchMenu(void);
void __usercall ViewOpponentsSelect(void);
void __usercall ReturnFromViewOpponent(void);
void __usercall PlayMatchOnSelect30(void);
short __usercall PlayMatch30AfterDraw(void);
void __usercall UpdateTeamCheckmark(void);
void __usercall SetGameStartButtonText(void);
void __usercall ShowOrHidePlayMatchButton(void);
void __usercall SetUpTacticsButtons(void);
void __usercall SetPlayerSurnamesOnSidePitch(void);
void __usercall ShowUseMatchTeamIfTraining(void);
void __usercall SetVariableButtons(void);
void __usercall DrawPlayerEntries(MenuEntry *entry);
void __usercall RedrawPlayerNames(void);
void __usercall UpdateLittleCheckmark(void);
void __usercall SavePositionsAndUpdateLittleCheckmark(void);
void __usercall UpdateCheckMarkSprite(void);
void __usercall UseMatchTeamSelect(void);
void __usercall TogglePlayerCoach(void);
void __usercall Career_MaybeGenerateJobOffer(void);
void __usercall IsTeamCodeOkForNationalSelector(uchar code);
void __usercall IsPlayerOkForNationalSelector(void);
short __usercall NotOkForNationalSelector(void);
uchar __usercall GetNationalityAndTeamFile(ushort teamFileAndOrdinal);
short __usercall GetNationalTeamNumberFromTeamFileId(uchar teamFileId);
short __usercall GetNationalTeamNumber(uchar nationality);
void * __usercall GetNationalityRecordPtr(ushort teamFileAndOrdinal);
void __usercall Career_ContinueToNextSeasonInitTeamAndFunds(ushort teamNumber,uint baseFunds);
void __usercall JobOffers_MaybeExpireSomeNewOffers(void);
void __usercall JobOffers_FillMissingNewOfferTeamNames(void);
void __usercall JobOffers_RemoveExpiredOffers(void);
void __usercall JobOffers_ConvertNewOfferToOffer(ushort teamNumber,uint initialFunds);
void __usercall JobOffers_RemoveOffer(ushort teamNumber);
void __usercall IsOldJobOffer(ushort teamNumber);
void * __usercall GetJobOfferPtr(ushort index);
void __usercall AddJobOffer(ushort teamNumber,uint initialFunds);
void __usercall RemoveJobOffer(ushort teamNumber);
void __usercall IsNewJobOffer(ushort teamNumber);
void * __usercall GetNewJobOfferPtr(ushort index);
void __usercall JobOffersInit(void);
void __usercall JobOffersFinish(void);
void __usercall JobOffersCommon(MenuEntry *entry);
void __usercall OldJobOffersCommon(MenuEntry *entry);
void __usercall JobOffersExit(void);
void __usercall JobOffers_UpdateMenuEntryLayout(void);
void __usercall JobOffers_DrawOldOfferLine(MenuEntry *entry);
void __usercall JobOffersAfterDrawCommon(MenuEntry *entry);
void __usercall GotJobOfferInit(void);
void __usercall GotJobOfferFinish(void);
void __usercall AcceptJobOffer(void);
void __usercall j_SetExitMenuFlag_14(void);
void __usercall RejectJobOffer(void);
void __usercall ViewFutureTeam(void);
void __usercall ViewFutureTeamLeague(void);
void __usercall ConsiderJobOffer(void);
void __usercall ShowChairmanMessage(void);
void __usercall ChairmanMemosInit(void);
void __usercall ChairmanMemosOnReturn(void);
void __usercall ChairmanMemosContinue(void);
void __usercall ShowClubBussinesMenu(void);
void __usercall ClubBusinessInit(void);
void __usercall j_SetExitMenuFlag13(void);
uint __usercall CalculateStartingBalance(ushort teamNumber);
void __usercall Career_InitializeNewSeasonFinances(void);
void __usercall Career_CommitNewBalanceAndResetFinanceTotals(void);
void __usercall Career_UpdatePlayerWeeklyWageCache(ushort playerIndex);
void __usercall Career_RemovePlayerWeeklyWageAndRecalcWeeklyWages(ushort playerIndex);
void FUN_0014b3ae(void);
uint __usercall CalcGateReceiptsBaseFromTeamValue(void);
void __usercall EditTactics(void);
void __usercall ShowStandardChooseTacticsMenu(void *selectedTeam);
void __usercall ChooseTacticsInit(void);
void __usercall User_A_Tactics(void);
void __usercall User_B_Tactics(void);
void __usercall User_C_Tactics(void);
void __usercall User_D_Tactics(void);
void __usercall User_E_Tactics(void);
void __usercall User_F_Tactics(void);
void __usercall ExitChooseTacticsMenu(void);
void __usercall EditTacticsInit(void);
void __usercall EditTacticsOnRestore(void);
void __usercall EditTacticsCommon(MenuEntry *cur);
short __usercall EditTactics_FindFreePairId(void);
void __usercall EditTactics_ClearPairId(short value);
void __usercall EditTacticsPlayerNamesCommon(MenuEntry *cur);
void __usercall EditTactics_SwapPlayersInSlots(short i1,short i2,short i3,short i4);
void __usercall SelectCopyTactics(void);
void __usercall UndoTactics(void);
void __usercall AbortEditTactics(void);
void __usercall SaveAndExitEditTactics(void);
void __usercall ImportTactics(void);
void __usercall FlipOnOff(void);
void __usercall EnableOrDisablePlayerFacesItems(void);
void __usercall CopyCurrentTacticName(void);
void __usercall EditTacicsMovePlayersOrBall(void);
void __usercall CopyTactics(void);
void __usercall EditTactics2AfterDraw(void);
void __usercall EditTacticsOnSelect28(void);
void __usercall EditTacticsAfterDrawPlayerFace(MenuEntry *cur);
void __usercall EditTactics28AfterDraw(void);
void __usercall EditTactics_UpdateExtraPlayerMenuVisibility(void);
short __usercall EditTacticsAfterDrawPlayerNames(MenuEntry *cur);
void __usercall EditTactics_ApplyPlayerRowHighlighting(short playerOrdinal,MenuEntry *cur);
void __usercall DrawPlayerNamesAndFaces(void);
void __usercall EditTacticsMenuSavePlayerPositions(void);
void __usercall EditTactics_CommitPlayerPositionsAndRecalcSkill(void);
void __usercall SetBigCheckSprite(void);
void __usercall EditTacticsStatus(short status);
void __usercall InitLittlePlayerSprites(void);
uchar __usercall ConvertPlayerDressColor(uchar color);
ushort __usercall EditTactics_HandlePitchInput(ushort col,ushort row);
void __usercall EditTacticsReadControls(void);
void __usercall EditTactics_TryMoveQuadrantCursor(short row,short col);
void __usercall DrawEditTacticsPitchAndPlayers(void);
void __usercall DrawLittlePlayersAndBall(void);
void __usercall SortEditTacticsDrawOrderByY(void);
void __usercall GetEditTacticsItemXYPosition(short idx);
void __usercall DrawEditTacticsHighlightedPlayerRoute(void);
void __usercall SortPlayerAreasByY(void);
void __usercall DrawPlayerDirections(void);
void __usercall EditTacticsDrawCursor(void);
void __usercall GetPlayerXYPositionFromQuadrant(short player,short ballLoc);
void __usercall GetPlayerQuadrant(short player,short ballLoc);
void __usercall SetPlayerQuadrant(short player,short xQuad,short yQuad,short ballLoc);
void __usercall GetBallXYPositionFromQuadrant(short row,short col);
void __usercall GetBallQuadrant(short ballLoc);
void __usercall EditTactics_GetDirectionDelta(void);
void __usercall CopyCurrentTactics(void);
void __usercall ApplyCurrentEditedTactics(void);
void __usercall EditTactics_CommitDraggedPlayerPosition(void);
void __usercall SaveCurrentTactics(void);
void __usercall RestoreTactics(void);
void __usercall ImportTacticsInit(void);
void __usercall ImportTacticsSelectTactics(MenuEntry *cur);
void __usercall ExitImportTactics(void);
void __usercall LoadTactics(void);
void __usercall EditTactics_FlipMaybe_MirrorBallArea(ushort ballLocation);
void __usercall EditTactics_FlipMaybe_MirrorPlayersInArea(ushort index);
void __usercall EditTactics_SetAllPlayersQuadrantForBallLoc(ushort ballLocation,ushort areaIndex);
void __usercall MarkSelectedTeamsTacticsChanged(void);
void __usercall InitializeTacticsPositions(void);
void __usercall ShowStadiumInit(void);
void __usercall StadiumBeforeDrawLeftTeam(MenuEntry *current);
void __usercall StadiumBeforeDrawRightTeam(MenuEntry *current);
void __usercall StadiumPlayerSpritesBeforeDraw(TeamGame *team,ushort playerIndex);
void __usercall FillSkinColorConversionTable(ushort skinColor,ushort *convertTable);
void __usercall HighlightsMenuInit(void);
void __usercall HighlightsMenuOnReturn(void);
void __usercall HighlightsMenuCommon(void);
void __usercall JmpShowHighlights(void);
void __usercall LoadHighlightsMenu(void);
void __usercall SaveHighlightsMenu(void);
void __usercall ExitHighlights(void);
void __usercall SetTeamGlobalNumbers(ushort numTeams,void *firstTeam);
void __usercall Career_SortTeamFilePtrsByAvgPlayerPrice(void);
void __usercall LoadSomeEuroCup(void *whichCup);
void __usercall AppendTeamsToSelectionFromTmdOrTeamFile(ushort *out,ushort *teamIds,ushort count);
void FUN_0015158e(void);
void FUN_00151628(void);
void __usercall Career_TryAddRandomTeamByRegionToLists(ushort *listOut,void *selTeamsOut,ushort remaining,ushort filter);
uint __usercall Career_IsTeamIdNotInListOrReturnSentinel(ushort teamId,void *endPtr);
void FUN_001517c2(void);
uint __usercall Career_IsTeamIdNotInListOrReturnSentinel2(ushort teamId,void *endPtr);
void __usercall ShowInsertDisk2Dialog(void);
ushort __usercall Asset_PromptInsertSaveDiskDf0(char *title);
void __usercall SaveCompetitionFile(void);
void __usercall LoadCompetitionFile(void);
void __usercall LoadCareerFile(void);
void __usercall SaveCareerFile(void);
void __usercall j_LoadCareerFile(void);
void __usercall j_SaveCareerFile(void);
ushort __usercall LoadPresetFile(void);
void __usercall SavePresetCompetitionFile(char *filename);
ushort __usercall LoadDIYFile(char *filename);
ushort __usercall SaveDIYFile(char *filename);
ushort __usercall ReadTacticsFile(char *filename);
ushort __usercall WriteTacticsFile(char *filename,void *buffer);
ushort __usercall LoadHilFile(char *filename);
ushort __usercall DoSaveHighlights(char *filename);
ushort __usercall LoadTeamFile(ushort extNumber);
void __usercall SetLoadedTeamsGlobalNumbers(void);
void __usercall SetLeagueNumbers(void);
void __usercall FatalError(void);
void __usercall Career_InitCompetitionTeamSelection_Dispatch(void);
void __usercall Career_InitCompetitionTeamSelectionFromTableEntrySpec(void *spec,ushort idx);
void __usercall Career_InitCompetitionTeamSelectionFromTableHeaderSpec(void *spec);
void __usercall Career_InitCompetitionTeamSelectionFromAltTableHeaderSpec(void *spec);
void __usercall InitSkinAndDefaultPointers(void);

