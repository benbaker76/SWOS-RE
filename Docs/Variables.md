|Address|Name|Type|Size (Bytes)|Description|
|---:|---|---|---:|---|
|0x00000000|NULL|uint32_t|4||
|0x00000014|DIVIDE_BY_ZERO|uint32_t|4||
|0x00000064|LEVEL_1_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x00000068|LEVEL_2_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x0000006C|LEVEL_3_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x00000070|LEVEL_4_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x00000074|LEVEL_5_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x00000078|LEVEL_6_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x0000007C|LEVEL_7_INTERRUPT_AUTOVECTOR|uint32_t|4||
|0x00000400|pitchDatBuffer|uint8_t[9240]|9240|This represents virtual pitch - array of pointers to<br>16 x 16 patterns, whole pitch is 44 x 57 patterns,<br>and the scrollable part is 42 x 53|
|0x00002818|currentMenu|Menu|22||
|0x0000282E|menuEntries|MenuEntry[100]|5600||
|0x0000417C|diyLeagueScratchBuffer|uint8_t[2000]|2000||
|0x0000494C|primaryQualifiedTeamGrids|TeamFile[10]|6840|Buffer caching team grid data for up to 10 primary Euro Cup qualified teams; each record is 684 bytes|
|0x0000695C|tertiaryQualifiedTeamGrid|TeamFile|684|Buffer caching team grid data for 1 tertiary (UEFA Cup) qualified team.|
|0x00006C08|euroCupTitleHolderGrid|TeamFile|684|Cached team grid for the Euro Cup title holder, populated during career European cup draws.|
|0x00006EB4|cupWinnersCupTitleHolderGrid|TeamFile|684|Cached team grid for the Cup Winners Cup title holder.|
|0x00007160|uefaCupTitleHolderGrid|TeamFile|684|Cached team grid for the UEFA Cup title holder.|
|0x0000B620|competitionFilename|uint8_t[14]|14||
|0x0000B62E|hilFilename|uint8_t[14]|14||
|0x0000B63C|importTacticsFilename|uint8_t[14]|14||
|0x0000B64A|playerPositionsArray|uint8_t[32]|32||
|0x0000B66A|oldPlayerPositionsArray|uint8_t[32]|32||
|0x0000B68A|teamFileDataSize|uint32_t|4|Total byte size of loaded team file data, computed as teamCount * 684 + 2.|
|0x0000B68E|teamFilenameBuffer|uint8_t[50]|50||
|0x0000B6C0|teamFileTeamCount|uint16_t|2|Number of teams in the currently loaded team file.|
|0x0000B6C2|lastLoadedExtNumber|uint8_t|1||
|0x0000B6C4|topTeamSaved|TeamGame|1018||
|0x0000BABE|bottomTeamSaved|TeamGame|1018||
|0x0000BEB8|topTeamInGame|TeamGame|1018||
|0x0000C2B2|bottomTeamInGame|TeamGame|1018||
|0x0000C6AC|magicValue|uint32_t|4||
|0x0000CC8C|gameName|uint8_t[100]|100||
|0x0000CCF0|gameRound|uint8_t|1||
|0x0000CD54|tacticsPosition442|TacticsPosition|11||
|0x0000CD5F|tacticsPosition541|TacticsPosition|11||
|0x0000CD6A|tacticsPosition451|TacticsPosition|11||
|0x0000CD75|tacticsPosition532|TacticsPosition|11||
|0x0000CD80|tacticsPosition352|TacticsPosition|11||
|0x0000CD8B|tacticsPosition433|TacticsPosition|11||
|0x0000CD96|tacticsPosition424|TacticsPosition|11||
|0x0000CDA1|tacticsPosition343|TacticsPosition|11||
|0x0000CDAC|tacticsPositionSweep|TacticsPosition|11||
|0x0000CDB7|tacticsPosition523|TacticsPosition|11||
|0x0000CDC2|tacticsPositionAttack|TacticsPosition|11||
|0x0000CDCD|tacticsPositionDefend|TacticsPosition|11||
|0x0000CDD8|tacticsPositionUSERA|TacticsPosition|11||
|0x0000CDE3|tacticsPositionUSERB|TacticsPosition|11||
|0x0000CDEE|tacticsPositionUSERC|TacticsPosition|11||
|0x0000CDF9|tacticsPositionUSERD|TacticsPosition|11||
|0x0000CE04|tacticsPositionUSERE|TacticsPosition|11||
|0x0000CE0F|tacticsPositionUSERF|TacticsPosition|11||
|0x0000CE1A|teamsTable|uint8_t[100]|100||
|0x0000CE7E|teamsIndex|uint8_t[100]|100||
|0x0000CEE2|teamsPtrTable|uint8_t[400]|400||
|0x0000D072|editTacticsCurrentTactics|TeamTactics|370||
|0x0000D1E4|savedCurrentTactics|TeamTactics|370||
|0x0000D356|teamPointers|uint8_t[256]|256||
|0x0000D456|dwArrayCountries|uint8_t[256]|256||
|0x0000D556|teamSortBuffer|uint8_t[256]|256|Temporary buffer used in Career_SortTeamFilePtrsByAvgPlayerPrice for sorting team records.|
|0x0000D656|panicReasonCode|uint16_t|2||
|0x0000D658|errorMessagePtr|int8_t*|4||
|0x0000D666|panicRegDumpBlock|uint32_t|4||
|0x0000D6A6|diskImageContext|uint8_t|1|Asset system disk image context structure passed to AssetSys_Dispatch with ASSET_OP_INIT_CONTEXT.|
|0x0000DD6E|goalBase|uint8_t[19000]|19000||
|0x000127A6|nextGoal|uint16_t|2||
|0x000127A8|frontbufferBase|uint8_t[48048]|48048||
|0x0001E35A|frontbufferBaseAlt|uint8_t[48048]|48048||
|0x00029F0C|bitPlane0Base|uint32_t[225]|900||
|0x0002A290|bitPlane1Base|uint32_t[225]|900||
|0x0002A614|bitPlane2Base|uint32_t[225]|900||
|0x0002A998|bitPlane3Base|uint32_t[225]|900||
|0x0002AD1C|bitPlane0BaseAlt|uint32_t[225]|900||
|0x0002B0A0|bitPlane1BaseAlt|uint32_t[225]|900||
|0x0002B424|bitPlane2BaseAlt|uint32_t[225]|900||
|0x0002B7A8|bitPlane3BaseAlt|uint32_t[225]|900||
|0x0002BB2C|bitPlane0BasePtr|uint32_t*|4||
|0x0002BB30|bitPlane1BasePtr|uint32_t*|4||
|0x0002BB34|bitPlane2BasePtr|uint32_t*|4||
|0x0002BB38|bitPlane3BasePtr|uint32_t*|4||
|0x0002BB3C|copperListBuffer|uint8_t[320]|320||
|0x0002BC7C|copperZeroLong|uint32_t|4||
|0x0002BC82|bootTemp0|uint16_t|2||
|0x0002BC84|bootTemp1|uint16_t|2||
|0x0002BC86|bootTemp2|uint16_t|2||
|0x0002BC88|bootTemp3|uint16_t|2||
|0x0002BC8A|bootTemp4|uint16_t|2||
|0x0002BC8C|bootTemp5|uint16_t|2||
|0x0002BC8E|bootTemp6|uint16_t|2||
|0x0002BC90|frontbufferBasePtr|uint8_t*|4||
|0x0002BC94|frontbufferBaseAltPtr|uint8_t*|4||
|0x0002BC98|plOrdinalsTable|uint8_t[32]|32||
|0x0002BCB8|plNamesLengthTable|uint8_t[32]|32||
|0x0002BCD8|plNamesLengthTableCopy|uint8_t[32]|32||
|0x0002BCF8|renderStackPtr|uint8_t*|4|Current position pointer into the sprite render stack; elements are popped during DrawQueuedSprites.|
|0x0002BCFC|renderStackBase|uint8_t[840]|840||
|0x0002C044|plane01RenderStackPtr|uint8_t*|4|Current position pointer into the bitplane 0/1 sprite band render stack.|
|0x0002C048|plane01RenderStackBase|uint8_t[360]|360||
|0x0002C1B0|plane23RenderStackPtr|uint8_t*|4||
|0x0002C1B4|plane23RenderStackBase|uint8_t[360]|360||
|0x0002C31C|kSpriteBlitQueueSentinel_A|uint16_t|2||
|0x0002CED4|kSpriteBlitQueueSentinel_B|uint16_t|2||
|0x0002DA8C|spriteBlitQueue|uint32_t|4||
|0x0002DA92|ballSpeed|uint16_t|2||
|0x0002DA94|ballSpeedAfterSave|uint16_t|2|Stores ball sprite speed after goalkeeper jump/save processing.|
|0x0002DA96|gateReceiptsFactor|uint16_t|2|Computed gate receipts factor derived from signed multiply/divide of average player price.|
|0x0002DA98|foreignMarketRandomPickRetries|uint16_t|2||
|0x0002DA9A|homeMarketRandomPickRetries|uint16_t|2||
|0x0002DA9C|offerSearchRetryCount|uint16_t|2|Counter incremented during transfer offer candidate team search iterations.|
|0x0002DA9E|goalkeeperDiveAttemptCount|uint16_t|2|Counter incremented each time goalkeeper dive evaluation proceeds past initial distance checks.|
|0x0002DAB0|nearestTeammatePtr|uint8_t*|4|Pointer to nearest teammate sprite found during foul/card processing distance loop.|
|0x0002DAD0|diyFileBufferCopy|DIY_Competition|96||
|0x0002DB6A|diyTournamentTeamIds|uint16_t[451]|902|Array of 16-bit team IDs for DIY tournament competitions.|
|0x0002DEF0|diyCompetitionStart|DIY_Competition|96||
|0x0002DF50|diyMinSubstitutes|uint16_t|2||
|0x0002DF52|diyPointsForAWin|uint16_t|2||
|0x0002DF54|diyLeagueMinSubstitutes|uint16_t|2||
|0x0002DF56|diyLeagueMaxSubstitutes|uint16_t|2||
|0x0002DF58|diyHasGroups|uint16_t|2|Flag indicating DIY league has groups/divisions.|
|0x0002DF5E|diyTeamEntryOffsetsByIndex|uint16_t|2||
|0x0002DF7A|diyCupRoundResults|uint8_t[100]|100|Array of cup bracket match result bytes indexed by current round.\|
|0x0002DFDE|diyTeamShuffleIndices|uint16_t|2||
|0x0002E01E|diyLeagueTeamIds|uint8_t[28]|28|Array of 16-bit team IDs for DIY league competitions (type 0).|
|0x0002E03A|diyCompetitionFormat|uint16_t|2|Competition format field; value 1 triggers league-round progression.|
|0x0002E03C|diyRoundFormat|uint16_t|2|Competition round format; when equal to 2, bypasses team grid reordering.|
|0x0002E0AE|diyMatchesPlayedCount|uint16_t|2|Counter of matches played in the current DIY competition.|
|0x0002E0B0|diyLeagueCurrentSlot|uint16_t|2|Current career slot index for league processing.|
|0x0002E0B2|diyLeagueMatchProgress|uint16_t|2|Current match progress count compared against a 75% threshold.|
|0x0002E0B4|diyLeagueTotalMatches|uint16_t|2|Total match count for DIY league; multiplied by 3/4 to compute the threshold for enabling view options.|
|0x0002E13E|diyCupTeamIds|uint8_t[128]|128|Array of 16-bit team IDs for DIY cup competitions (type 1).|
|0x0002E1BE|diyTeamGridPairings|uint8_t[64]|64|Array of byte-sized team grid indices shuffled randomly for match pairings.|
|0x0002E1FE|diyTeamShuffleOrder|uint8_t[698]|698|Array of sequential byte indices initialized 0..N-1 and shuffled for randomized team ordering.|
|0x0002E4B8|audioInstrumentBank|uint8_t[364]|364|Buffer for audio instrument bank data loaded from sound/hero.ins via RNC decompression.|
|0x0002E624|imageCmdWorkBuf|uint8_t[65500]|65500||
|0x0003E600|menuInsBank|uint32_t|4||
|0x00049132|menuSongData|uint8_t|1||
|0x000496F2|tempTeamBuffer|TeamFile|684|Temporary 684-byte team data buffer used in career mode to save/restore careerTeam.|
|0x0004999E|numberOfFiles|uint16_t|2||
|0x000499A2|foundFilenamesBuffer|uint8_t[1918]|1918||
|0x0004A120|teamFileBuffer|uint8_t[64014]|64014||
|0x00067628|poolPlayerStrideRef|uint8_t|1|BSS address reference used for address arithmetic to compute the 58-byte record stride for poolplyr.dat entries.|
|0x00067640|imageStreamCursor|uint32_t|4||
|0x00067644|menuImageStreamBaseEnd|uint32_t|4||
|0x00067648|imageStreamBytesLeft|uint32_t|4||
|0x0006764C|replayState|uint16_t|2|State of in-game replay on 'R'.<br>0 = not replaying<br>1 = init - fading in<br>2 = replaying now at normal speed<br>3 = slow motion playback|
|0x0006764E|userRequestedReplay|uint16_t|2|Boolean, 1 if replay initiated by user, 0 if automatic replay<br>(when auto replays set to on); sticky|
|0x00067650|throwInDeadVar|uint16_t|2||
|0x00067652|currentGoalPtr|uint32_t*|4|Points to current goal in *.hil file that<br>is being shown in highlights|
|0x00067656|currentHilPtr|uint32_t*|4||
|0x0006765A|savedCameraX|uint16_t|2||
|0x0006765C|savedCameraY|uint16_t|2||
|0x0006765E|teamsLoaded|uint16_t|2|0  = No<br>!0 = yes|
|0x00067660|poolplyrLoaded|uint16_t|2|0  = No<br>!0 = yes|
|0x00067662|poolplyrDatBuffer|uint8_t[52200]|52200||
|0x00075D30|memBoundaryMarker|uint32_t|4|BSS end-marker whose address is compared against 0x100000 to verify the program fits within 1 MB.|
|0x00078DAE|sfxInsBank2|uint8_t|1||
|0x00080000|assetLoaderBank0Base|uint8_t|1||
|0x0008CA5A|sfxSongData|uint8_t|1||
|0x0008DB14|frontbufferMaskBuffer|uint8_t[48048]|48048||
|0x000996C8|highestScorersTable|uint8_t|1||
|0x000996E6|scorerTableMeta|uint8_t|1|Metadata byte at offset 0x1E within highestScorersTable, loaded during top goal scorers display.|
|0x00099724|inMenuKeyboardBuffer|uint8_t[100]|100||
|0x00099788|menuDataOffset|uint32_t|4|Stores the end-of-menu-entries offset relative to g_currentMenu after building DIY menu entry strings.|
|0x0009978C|menuFreeSpace|uint32_t|4|Stores remaining free bytes between the current menu string write position and the scratch buffer limit.|
|0x00099790|templateMenuEntry|MenuEntry|56||
|0x000997C8|exitMenu|uint16_t|2||
|0x000997CA|spriteGraphics|uint8_t[4880]|4880||
|0x0009AADA|numSpritesToRender|uint16_t|2|Number of sprites in spritesPtrArray|
|0x0009AADC|sortedSprites|Sprite*[78]|312||
|0x0009AC14|fundsBuffer|uint8_t[100]|100|ASCII string of initial funds from team offering job|
|0x0009AC78|resultString|uint8_t[70]|70||
|0x0009ACBE|hilFileBuffer|uint8_t[2044]|2044|2 Dword as a signature (08 00 00 00 5A F4 02 00), then 2 teams (general)|
|0x0009B4BA|hilGameName|uint8_t[100]|100||
|0x0009B51E|hilGameRound|uint8_t[100]|100||
|0x0009B582|hilNumGoals|uint16_t|2|0 = No hil file loaded; disable view and save highlights<br>>0 = hil file loaded, all entries enabled|
|0x0009B584|hilTeam1Goals|uint16_t|2||
|0x0009B586|hilTeam2Goals|uint16_t|2||
|0x0009B588|hilPitchNumber|uint16_t|2||
|0x0009B58A|hilMaxSubstitutes|uint16_t|2||
|0x0009B58C|hilStartOfGoalsBuffer|uint8_t[19000]|19000||
|0x0009FFC4|inGameHilBuffer|uint8_t[171000]|171000|Hils are stored here during the game|
|0x000CF13E|assetLoaderMainRegion|uint8_t[195000]|195000||
|0x00100006|aSensibleWorldO|uint8_t[25]|25||
|0x0010001F|aCopyrightC1994|uint8_t[54]|54||
|0x00100055|aCopyrightC1994_0|uint8_t[50]|50||
|0x00100087|aSwosVersion152|uint8_t[17]|17||
|0x00100098|a0611961355Asm6|uint8_t[32]|32||
|0x001000B8|aCj0611143807|uint8_t[12]|12||
|0x00100268|kDriveListPtrs|int8_t*[4]|16||
|0x00100278|aDf0|uint8_t[5]|5||
|0x0010027D|aDf1|uint8_t[5]|5||
|0x00100282|aDf2|uint8_t[5]|5||
|0x00100287|aDf3|uint8_t[5]|5||
|0x001003CC|assetResolveDummyWord|uint16_t|2||
|0x00100408|assetCriticalDummyWord|uint16_t|2||
|0x00100524|assetSavedSourceSlot|uint16_t|2||
|0x00100526|assetSavedIndex|uint16_t|2||
|0x0010055C|assetSelect|uint16_t|2||
|0x0010055E|assetBasePtr|uint8_t*|4||
|0x00100562|assetAltBasePtr|uint8_t*|4||
|0x00100566|assetSourceVec|uint8_t[16]|16||
|0x00100576|assetSource0|uint32_t|4||
|0x0010057A|assetSource1|uint32_t|4||
|0x0010057E|assetSource2|uint32_t|4||
|0x00100582|assetSource3|uint32_t|4||
|0x00100586|assetCurrentSourceSlot|uint16_t|2||
|0x00100588|assetCurrentIndex|uint16_t|2||
|0x0010058A|assetIndexStartBytes|uint16_t|2||
|0x0010058C|assetParamBlock|uint16_t|2||
|0x0010058E|assetFilename|int8_t[50]|50||
|0x00100E04|floppyTmpBuf0|uint8_t[10]|10||
|0x00100E0E|floppyTmpBuf1|uint8_t[26]|26||
|0x00100E28|floppyIoStatusWord|uint16_t|2||
|0x00100E2A|floppyIoErrorWord|uint16_t|2||
|0x00100E2C|floppyIoCylinder|uint16_t|2||
|0x00100E2E|floppyIoSector|uint16_t|2||
|0x00100E30|floppyIoMode|uint16_t|2||
|0x00100E32|floppyCurrentDrive|uint16_t|2||
|0x00100E34|floppyDriveFlags|uint8_t[32]|32||
|0x001016AA|floppyStepPositions|uint64_t|8|Floppy drive head-position calibration table, one word per drive (up to 4).|
|0x001016B2|gamePalette|uint16_t[16]|32||
|0x001016D2|kTitleLogoColors|uint8_t[48]|48||
|0x00101702|kTitleScreenColors|uint8_t[48]|48||
|0x00101732|kTitleTextColors|uint8_t[48]|48||
|0x00101762|blackPalette|uint8_t[32]|32||
|0x00101782|titleLogoPalette|uint8_t[32]|32||
|0x001017A2|titleScreenPalette|uint8_t[32]|32||
|0x001017C2|titleTextPalette|uint8_t[32]|32||
|0x001017E2|panicPalette|uint8_t[32]|32||
|0x00101802|fadeStep|uint16_t|2||
|0x00101804|aSoundMenuSng|uint8_t[15]|15||
|0x00101813|aSoundMenuIns|uint8_t[15]|15||
|0x00101822|aSoundHeroSng|uint8_t[15]|15||
|0x00101831|aSoundHeroIns|uint8_t[15]|15||
|0x00101840|aSoundSfxSng|uint8_t[14]|14||
|0x0010184E|aSoundSfxIn1|uint8_t[14]|14||
|0x0010185C|aSoundSfxIn2|uint8_t[14]|14||
|0x0010186A|aGrafsSoccerSRa|uint8_t[19]|19||
|0x0010187D|aDataPoolplyrDa|uint8_t[18]|18||
|0x0010188F|aGrafsLoader00R|uint8_t[19]|19||
|0x001018A2|aGrafsLoader01R|uint8_t[19]|19||
|0x001018B5|aGrafsLoader1Ra|uint8_t[18]|18||
|0x001018C7|aGrafsLoader2Ra|uint8_t[18]|18||
|0x001018D9|aGrafsLoader3Ra|uint8_t[18]|18||
|0x001018EB|aGrafsLoader4Ra|uint8_t[18]|18||
|0x001018FD|aGrafsLoader5Ra|uint8_t[18]|18||
|0x0010190F|aGrafsLoader6Ra|uint8_t[18]|18||
|0x00101921|aGrafsLoader7Ra|uint8_t[18]|18||
|0x00101933|aGrafsLoader8aR|uint8_t[19]|19||
|0x00101946|aGrafsLoader8bR|uint8_t[19]|19||
|0x00101959|aGrafsLoader9Ra|uint8_t[18]|18||
|0x0010196B|aGrafsLoader10R|uint8_t[19]|19||
|0x0010197E|aGrafsMenubgRaw|uint8_t[17]|17||
|0x0010198F|aGrafsMenubg2Ra|uint8_t[18]|18||
|0x001019A1|aGrafsMenusRaw|uint8_t[16]|16||
|0x001019B1|aGrafsMenus2Raw|uint8_t[17]|17||
|0x001019C2|aGrafsCharsetRa|uint8_t[18]|18||
|0x001019D4|aGrafsSwcpich1M|uint8_t[19]|19||
|0x001019E7|aGrafsSwcpich2M|uint8_t[19]|19||
|0x001019FA|aGrafsSwcpich3M|uint8_t[19]|19||
|0x00101A0D|aGrafsSwcpich4M|uint8_t[19]|19||
|0x00101A20|aGrafsSwcpich5M|uint8_t[19]|19||
|0x00101A33|aGrafsSwcpich6M|uint8_t[19]|19||
|0x00101A46|aGrafsCjcbitsRa|uint8_t[18]|18||
|0x00101A58|aGrafsCjcteam1R|uint8_t[19]|19||
|0x00101A6B|aGrafsCjcteam2R|uint8_t[19]|19||
|0x00101A7E|aGrafsCjcteam3R|uint8_t[19]|19||
|0x00101A91|aGrafsCjcteamgR|uint8_t[19]|19||
|0x00101AA4|aGrafsCjcgrafsR|uint8_t[19]|19||
|0x00101AB7|aGrafsCjcbenchR|uint8_t[19]|19||
|0x00101ACA|aGrafsWinscrnRa|uint8_t[18]|18||
|0x00101ADC|aGrafsTacticsRa|uint8_t[18]|18||
|0x00101AEE|aGrafsDisk22Raw|uint8_t[17]|17||
|0x00101AFF|aGrafsOlddisk1R|uint8_t[19]|19||
|0x00101B12|aGrafsSocpicRaw|uint8_t[18]|18||
|0x00101B24|team1Filename|uint32_t|4||
|0x00101B28|team2Filename|uint32_t|4||
|0x00101BBA|keyDelay|uint16_t|2||
|0x00101BBC|keyCount|uint16_t|2|Number of keys in the buffer|
|0x00101BBE|keyBuffer|uint8_t[12]|12||
|0x00101BCA|writeOnly01|uint16_t|2||
|0x00101BCC|lastVBlankServiceTick|uint16_t|2||
|0x00101CCA|blank_bytes|uint8_t|1||
|0x00101D2A|keycodeLut|uint8_t[128]|128||
|0x0010208C|copperListTemplate|uint16_t[160]|320||
|0x001024F2|panicFormatStr|int8_t[3]|3||
|0x001024F5|panicOutBuf|int8_t[96]|96||
|0x00102555|pad_102555|uint8_t[9]|9||
|0x00102B12|pitchFansConvertTable|int16_t[16]|32||
|0x00103284|blitWordCount|uint16_t|2||
|0x00103286|maskBlitDestPtr|uint32_t*|4||
|0x0010328A|maskBlitPendingBytesA|uint16_t|2||
|0x0010328C|maskBlitSecondStreamPtr|uint32_t*|4||
|0x00103290|maskBlitPendingBytesB|uint16_t|2||
|0x00103354|fadeShiftMaskTable|int8_t[20]|20||
|0x00103970|currentSpriteIndex|uint16_t|2||
|0x00103992|syncWaitFlag|uint16_t|2|Synchronization flag in dead code; initialized to 1, spin loop tests it waiting for 0.|
|0x00103994|syncReadyFlag|uint16_t|2|Synchronization signal in dead code; set to 1 to indicate readiness.|
|0x001039B6|int5SerialBusBufferFull|uint16_t|2||
|0x00103A38|oldStackPtr|uint32_t*|4||
|0x00103A3C|tmpStackPtr|uint32_t*|4||
|0x00103A40|isrTrampolineGuard|uint8_t[402]|402||
|0x00103C36|leftMaskTable|uint8_t[30]|30||
|0x00103CE8|partialSpanMaskTable|uint16_t[16]|32||
|0x00103D08|tailMaskTable|uint16_t[16]|32||
|0x00103E98|firstWordMaskTable|uint8_t[32]|32||
|0x00103EB8|lastWordMaskTable|uint8_t[32]|32||
|0x00103F96|overlayActiveFlag|uint16_t|2||
|0x00104F0E|plane01BandTopY|uint16_t|2||
|0x00104F10|plane23BandTopY|uint16_t|2||
|0x00104F12|pad_104F12|uint16_t|2||
|0x00104F14|occlMinYBuckets|uint8_t[10]|10||
|0x00104F1E|occlMinYBucketsActive|uint8_t[52]|52||
|0x00104F52|pad_104F52|uint16_t|2||
|0x0010560E|bltconShiftBase|uint16_t|2||
|0x00105610|textBlitPlaneMask|uint16_t|2||
|0x00105612|textBlitHeightLines|uint16_t|2||
|0x00105614|blitSrcA_MaskPtr|uint32_t*|4||
|0x00105618|blitSrcB_GlyphPtr|uint32_t*|4||
|0x00105826|bltconShiftBase_glyph|uint16_t|2||
|0x00105828|glyphBlitPlaneMask|uint16_t|2||
|0x0010582A|glyphHeightLinesCache|uint16_t|2||
|0x0010582C|blitSrcA_MaskPtr_glyph|uint32_t|4||
|0x00105830|blitSrcB_GlyphPtr_glyph|uint32_t|4||
|0x00105834|dstRowBytesPerPlane|uint16_t|2||
|0x00105836|dstRowAdvanceBytes|uint8_t[56]|56||
|0x0010586E|aSwos4Dk1|uint8_t[10]|10||
|0x00105878|aSwos4Dk2|uint8_t[10]|10||
|0x00105882|aSwos4Dku|uint8_t[10]|10||
|0x0010588C|aGrafsDisk2Raw|uint8_t[16]|16||
|0x0010589C|assetLoaderCacheFlag|uint32_t|4||
|0x001058A0|assetLoaderWorkPtr|uint32_t*|4||
|0x001058A4|assetLoaderAltPathReady|uint16_t|2||
|0x00105E08|LoaderBootstrapBlobPI|uint8_t[2226]|2226||
|0x00106CEE|crowdEventFlags|uint16_t|2||
|0x00106CF0|sfxQueueCount|uint16_t|2||
|0x00106CF2|sfxQueueWriteIdx|uint16_t|2||
|0x00106CF4|endOfHalfWriteOnly|uint16_t|2||
|0x00106CF6|goalCounter|uint16_t|2|Gets set to some value after goal is scored, and counts down to zero<br>probably something with patterns, or samples|
|0x00106CF8|pendingSampleId3_4|uint16_t|2||
|0x00106CFA|crowdChantsOn|int16_t|2||
|0x00106CFC|cameraMoveToShowerLatch|uint16_t|2||
|0x00106CFE|pad_106CFE|uint16_t|2||
|0x00106D00|lastKickSampleTick|uint16_t|2||
|0x00106D02|audioDbgFlagA|uint8_t|1||
|0x00106D03|pad_106D03|uint8_t|1||
|0x00106D04|audioActive|uint16_t|2||
|0x00106D06|audioBankLoaded|uint16_t|2||
|0x00106D08|pad_106D08|uint16_t|2||
|0x00106EA6|crowdSamples|uint64_t|8||
|0x00106EAE|currentCrowdSample|uint16_t|2||
|0x00106EB0|fadeInChantTimer|uint16_t|2||
|0x00106EB2|nextChantTimer|uint16_t|2||
|0x00106EB4|fadeOutChantTimer|uint16_t|2||
|0x00106EB6|crowdChantVolume|uint16_t|2||
|0x00107468|aCodedByAndiSmi|uint8_t[56]|56||
|0x00107EC0|kAmigaNotePeriodTable|uint8_t[72]|72||
|0x00107F08|audioChannel0|uint8_t[176]|176||
|0x00107FB8|audioChannel1|uint8_t[176]|176||
|0x00108068|audioChannel2|uint8_t[176]|176||
|0x00108118|audioChannel3|uint8_t[176]|176||
|0x001081C8|audioState|uint8_t[12]|12||
|0x001081D4|audioPresetChannelCmdTable|uint8_t[22]|22||
|0x001081EA|audioCounter|uint8_t|1||
|0x001081EB|audioFlags|uint8_t[11]|11||
|0x001082A8|kSineCosineTable|int16_t[256]|512||
|0x001084AA|kAngleCoeficients|int16_t[1024]|2048||
|0x00108CAA|pad_108CAA|uint16_t|2||
|0x00108F8C|maxCameraMovement|uint32_t|4||
|0x0010933C|nextCameraDirections|int32_t[16]|64|Given direction 0..7 this table decides signs for x/y camera movement<br>(elements are actually pairs)<br>it's used when camera is sliding slowly, with no control|
|0x0010937C|cameraXVelocity|uint16_t|2|-40..40<br>Gets added to camera coordinates each frame|
|0x0010937E|cameraYVelocity|uint16_t|2|-40..40|
|0x0010A1A0|advertIndex|uint16_t|2|Determines which advertisement is shown during the game, -1 = none|
|0x0010A1A2|advertSlideTimer|uint16_t|2||
|0x0010A1A4|currentAnimatedAdLine|uint16_t|2|What line are we drawing of an animated pattern|
|0x0010A1A6|advert1Pointers|uint8_t[32]|32||
|0x0010A1C6|advert2Pointers|uint8_t[32]|32||
|0x0010A1E6|advert3Pointers|uint8_t[32]|32||
|0x0010A206|blockAdvertisements|uint16_t|2|Don't animate advertisements if this is true|
|0x0010A26A|cornerFlagPictureIndices|uint8_t[32]|32||
|0x0010A318|spinBigS|int16_t|2||
|0x0010A31A|bigSIndex|uint16_t|2|Index of that annoying big S that keeps spining<br>in the upper right corner during the game|
|0x0010A3B8|numberBuffer|int8_t[16]|16||
|0x0010A3F0|normalPalette|uint16_t[3]|6||
|0x0010A3F6|dryPalette|uint16_t[3]|6||
|0x0010A3FC|wetPalette|uint16_t[3]|6||
|0x0010A402|softPalette|uint16_t[3]|6||
|0x0010A408|hardPalette|uint16_t[3]|6||
|0x0010A40E|frozenPalette|uint16_t[3]|6||
|0x0010A414|muddyPalette|uint16_t[3]|6||
|0x0010A41A|pitchPalettePtrs|uint16_t*[7]|28||
|0x0010A436|pitchTypeSeasonalProbabilities|uint8_t[84]|84||
|0x0010A48A|pitchTypeProbabilities|uint8_t[8]|8||
|0x0010AD04|facesFrequency|uint32_t|4|Number of occurences of each face type in a team|
|0x0010AD08|team1PlayersColorTable|uint8_t[32]|32||
|0x0010AD28|team2PlayersColorTable|uint8_t[32]|32||
|0x0010AD48|colorTableReserves|uint8_t[64]|64|Color table for reserve players, sitting and standing|
|0x0010AD88|bigNumbersColorConversionTable|int16_t[87]|174|Table for spr 309, 287-296, 297-306 (big numbers for result)|
|0x0010AE36|skinAndHairColorConversionTable|int16_t*[3]|12||
|0x0010AE42|team1GoalieFaceToPosition|uint8_t[3]|3|Values are 0 or 1 (0 primary, 1 reserve goalkeeper)|
|0x0010AE45|team2GoalieFaceToPosition|uint8_t[3]|3||
|0x0010AE48|team1GoalieFaces|uint8_t|1||
|0x0010AE49|team2GoalieFaces|uint8_t|1||
|0x0010AE4A|team2GoalieSkinType|uint8_t|1|Skin/face type index for team 2 main goalkeeper, used for sprite skin color conversion.|
|0x0010AE4B|team2ReserveGoalieSkinType|uint8_t|1|Skin/face type index for team 2 reserve goalkeeper. Negative means no reserve keeper.|
|0x0010B006|yellowCardTable|int8_t[30]|30||
|0x0010B024|redCardTable|int8_t[30]|30||
|0x0010B042|secondYellowTable|int8_t[46]|46||
|0x0010B336|nobodysBallTimer|uint16_t|2||
|0x0010B338|nobodysBallLastFrame|uint16_t|2||
|0x0010B33A|currentScorer|Sprite*|4||
|0x0010B33E|lastTeamScored|TeamGeneralInfo*|4||
|0x0010B342|lastPlayerBeforeGoalkeeper|Sprite*|4||
|0x0010B81A|copyTimeSprite|uint16_t|2|1 Only right before the game starts<br>if true, in UpdateTime fill time placeholder sprite<br>after that, set this to zero|
|0x0010B81C|secondsSwitchAccumulator|uint16_t|2|Time left until game time will be increased<br>(when timeDelta elapses, game seconds increase)|
|0x0010B81E|gameSeconds|uint16_t|2|Number of seconds elapsed since last minute change<br>scaled as needed, so seconds in a 3 min. game go faster than in a 10 min. game<br>-1 is special value when there is an overflow and we're switching to the next minute<br>this allows prolonging last minute of the game|
|0x0010B820|gameTime|uint8_t[4]|4|In BCD format:<br>+0 = not used<br>+1 = first digit<br>+2 = second digit<br>+3 = third digit (single minutes)<br>for example 118 would be 0x08010100<br>(in memory 0x00010108)|
|0x0010B824|timeDelta|uint16_t|2|Depends on game length selected (3, 5, 7, 10 mins.)|
|0x0010B826|gameLenSecondsTable|int16_t[4]|8||
|0x0010B82E|endGameCounter|uint16_t|2|When the game is about to end, this is set to 55 (frames)<br>it counts down then, and when reaches -1, game ends<br>(game, or half, extra time... etc.)|
|0x0010C026|numScenesInHilFile|uint16_t|2||
|0x0010C028|hilSceneNumber|uint16_t|2|Scene ordinal number in hil file<br>init to -1|
|0x0010C02A|goIntoHighlightsLoop|uint16_t|2|Set if we have some highlights to play|
|0x0010C02C|savedCurrentHilPtr|uint32_t*|4||
|0x0010C030|savedCurrentGoalPtr|uint32_t*|4||
|0x0010C034|savedGoalBasePtr|uint32_t*|4||
|0x0010C038|savedNextGoalPtr|uint32_t*|4||
|0x0010C0DC|pitchNumberProbabilities|uint8_t[16]|16|Probabilities:<br>pitch 1 - 31,25%<br>pitch 2 - 31,25%<br>pitch 3 - 12,5%<br>pitch 4 - 12,5%<br>pitch 5 - 12,5%|
|0x0010C1D2|kHilFileSig|uint32_t|4|Every *.hil file starts with this dword|
|0x0010CA28|aAsc_0|uint8_t[6]|6||
|0x0010CA2E|aAsc_1|uint8_t[6]|6||
|0x0010CA34|aPen|uint8_t[10]|10||
|0x0010CA3E|aPen_0|uint8_t[12]|12||
|0x0010CA4A|aOg|uint8_t[10]|10||
|0x0010CA54|aAsc_2|uint8_t[6]|6||
|0x0010CA5A|alreadyScoredTable|int8_t*[3]|12||
|0x0010CA66|firstGoalScoredTable|int8_t*[3]|12||
|0x0010E466|playerNumberString|uint32_t|4|When drawing player list in substitutes menu during the game<br>this align saves the day so we can add three digit number support ;)|
|0x0010E46A|playerFacesTable|uint8_t[6]|6|When drawing substitutes menu during the game|
|0x0010E470|benchColors|uint8_t[18]|18|Init when drawing subs menus|
|0x0010E482|subsMenuBackgroundColor|uint16_t|2|Used as a background color for substitute menu entries, and also<br>as a frame color for tactics icon sprite in formation menu|
|0x0010E484|subsMenuHighlightColor|uint16_t|2|Highlight color for entries in substitutes menu,<br>also border color for tactics icon sprite in formation menu|
|0x0010E486|subsMenuEntryFrameColor|uint16_t|2|Entry frame color of formation/substitutes title menu entry during the game|
|0x0010E488|ourCoachFrames|uint8_t[32]|32||
|0x0010E4A8|opponentCoachFrames|uint8_t[32]|32||
|0x0010E512|pad_10E512|uint16_t|2||
|0x0010E514|kGoalkeeperBurstSpeed|uint32_t|4||
|0x0010E518|kGoalkeeperCatchSpeed|uint16_t|2|=3.0|
|0x0010E51A|kGoalkeeperMoveToBallSpeed|uint16_t|2|=4.0, Speed when moving to the predicted place where ball hits the ground|
|0x0010E51C|kGoalkeeperFarJumpSpeed|uint16_t|2||
|0x0010E51E|kGoalkeeperFarJumpSlowerSpeed|uint16_t|2|=5.0|
|0x0010E520|kGoalkeeperStrongDeflectBallSpeed|uint16_t|2||
|0x0010E522|kGoalkeeperMediumDeflectBallSpeed|uint16_t|2||
|0x0010E524|kGoalkeeperWeakDeflectBallSpeed|uint16_t|2||
|0x0010E526|kGoalkeeperDeflectDeltaZ|uint32_t|4||
|0x0010E52A|goalkeeperDeflectDeltaZ|uint32_t|4|Fixed-point delta Z value applied to ball when goalkeeper deflects it.|
|0x0010E52E|goalkeeperDeflectBallSpeeds|uint64_t|8|Table of ball speed values for goalkeeper deflections; values: 512, 128, -128, -640.|
|0x0010E536|kGoalKeeperRecoveryStepBase|uint16_t|2||
|0x0010E538|kGoalKeeperRecoveryStepAlt|uint16_t|2|Speed delta when goalie caught the ball on the ground|
|0x0010E53A|kGoalKeeperRecoveryStepFar|uint16_t|2|Goalkeeper speed delta while diving for the ball|
|0x0010E53C|pad_10E53C|uint16_t|2||
|0x0010E53E|kShotAtGoalMinumumSpeed|uint16_t|2||
|0x0010E540|kGoalkeeperDiveDeltas|uint8_t[32]|32|Fixed point values:<br>2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6|
|0x0010E560|pad_10E560|uint16_t|2||
|0x0010E562|kKeeperEaseBallTable|uint8_t[16]|16||
|0x0010E572|kKeeperPenaltySaveDistanceFar|uint16_t|2|25% Chance for great goalkeeper performance|
|0x0010E574|kKeeperPenaltySaveDistanceNear|uint8_t[34]|34||
|0x0010E596|kSubstitutedPlayerSpeed|uint16_t|2|=6.0|
|0x0010E598|pad_10E598|uint16_t|2||
|0x0010E59A|kGoalkeeperSpeedWhenGameStopped|uint16_t|2|=4.0|
|0x0010E59C|pad_10E59C|uint16_t|2||
|0x0010E59E|kBallGroundConstant|uint16_t|2|Applied when some player is controlling the ball|
|0x0010E5A0|kBallAirConstant|uint16_t|2|Applied when ball z > 0|
|0x0010E5A2|kPlayerGroundConstant|uint16_t|2|Subtract from players speed when he's on the ground<br>and also when tackling|
|0x0010E5A4|kPlayerAirConstant|uint16_t|2|Speed decrement while player is heading|
|0x0010E5A6|kBallJumpHeaderDeltaZ|uint32_t|4|=0.625, Set player z to this when flying/lob header hits the ball|
|0x0010E5AA|ballSpeedBounceFactor|uint16_t|2|Multiply ball speed with this when it bounces|
|0x0010E5AC|ballBounceFactor|uint16_t|2|Multiply ball delta z with this when bouncing|
|0x0010E5AE|pitchBallSpeedFactor|uint16_t|2|Applied only when no player is controlling the ball|
|0x0010E5B0|kBallSpeedBounceFactorTable|uint8_t[14]|14||
|0x0010E5BE|kBallBounceFactorTable|uint8_t[14]|14||
|0x0010E5CC|kPitchBallSpeedInfluence|int16_t[7]|14|This gets subtracted from the ball speed|
|0x0010E5DA|kGravityConstant|uint32_t|4|= 0.0502166748046875 (~0.05)<br>Subtract from ball delta z|
|0x0010E5DE|pad_10E5DE|uint8_t[88]|88||
|0x0010E636|kGoalkeeperGameSpeed|uint16_t|2|=4.0|
|0x0010E638|kPlayerTacklingSpeed|uint16_t|2|=7.0, Set player speed to this when they go in tackling state|
|0x0010E63A|kJumpHeaderSpeed|uint8_t[24]|24|=8.0, Player speed when he's jumping in attempt to head the ball (flying/lob headers not static)|
|0x0010E652|kBallKickingDeltaZ|uint32_t|4|=1.25, Height delta of kicked ball|
|0x0010E656|kBallKickingSpeed|uint16_t|2|=8.625, Ball speed when kicked|
|0x0010E658|kHighKickDeltaZ|uint32_t|4|=2.0, Controls ball height increment per frame during high kicks|
|0x0010E65C|kHighKickBallSpeed|uint16_t|2|=10.5|
|0x0010E65E|kNormalKickDeltaZ|uint32_t|4|=1.375|
|0x0010E662|kNormalKickBallSpeed|uint16_t|2|=10.0|
|0x0010E664|kSpinMultiplierFactor|uint8_t[20]|20|Inverse proportional to time elapsed since pass/kick|
|0x0010E678|kKickSpinFactor|int8_t[64]|64|Apply curved trajectory to kick (ball spin)<br>elements of array are delta x and delta y values for corresponding<br>direction and left/right spin<br>formula: direction * 4 + 2 * right spin = index of delta x, delta y is next<br>(right spin = 1 or 0)<br>Format is the same as table below.|
|0x0010E6B8|kPassingSpinFactor|int16_t[32]|64|Applying curved trajectory to the ball during passes<br>holds delta x and y values, and it's indexed in following way:<br>0 - left spin X  \<br>1 - left spin Y   \|<br>2 - right spin X  +-> ball direction 0<br>3 - right spin Y /<br>4 - left spin X  \<br>5 - left spin Y   \|<br>6 - right spin X  +-> ball direction 1<br>7 - right spin Y /|
|0x0010E6F8|kRefereeSpeed|uint32_t|4||
|0x0010E6FC|kInjuryForeverSpeed|uint16_t|2||
|0x0010F054|normalReplayRunning|uint16_t|2|0  = Instant replay is running (show big spinning "R")<br>!0 = standard replay running (don't show big "R")|
|0x0010F056|instantReplayFlag|uint16_t|2|Set when 'R' is pressed|
|0x0010F058|saveHighlightScene|uint16_t|2|In game (after goal, when space is pressed etc.)|
|0x0010F05A|fadeAndSaveHighlightScene|uint16_t|2|Space has been pressed - fade and save replay|
|0x0010F05C|spaceReplayTimer|uint16_t|2|This is timer; while it is ticking, saving of highlights is disallowed|
|0x0010F05E|subsWriteOnly|uint16_t|2||
|0x0010F060|playGame|uint16_t|2||
|0x0010F062|playHighlightFlag|uint16_t|2|0  = Dont play highlight<br>!0 = play it<br>used as exit flag from viewing hl|
|0x0010F064|subsTeamsSwapped|uint16_t|2||
|0x0010F066|subsTrainingTopTeam|uint16_t|2|Managing top training team if true, and the arrow is in the top<br>part of the bench in a training game|
|0x0010F068|drawTrainingTopHalfOfTheBench|uint16_t|2|Only for training bench; are we currently drawing top half of it?|
|0x0010F06A|initialSubsState|uint16_t|2||
|0x0010F06C|inSubstitutesMenu|uint16_t|2|Values 30 or 0<br>if true, p key is not effecting pause state|
|0x0010F06E|cameraLeavingSubsTimer|uint16_t|2|Init to 55. Minimal time that must elapse between camera departure<br>and game resumption.|
|0x0010F070|benchOff|uint16_t|2|Set very briefly when camera goes away from the bench, but effectively never used|
|0x0010F072|leavingSubsMenu|uint16_t|2|This variable is only valid when the camera starts moving away from the bench<br>(when g_inSubstitutesMenu is false)<br>it's shortly set to 1 when the camera is leaving substitutes menu|
|0x0010F074|waitForPlayerToGoInTimer|uint16_t|2|After a player has been substituted, new player comes in from the left side;<br>this starts counting from 100, and when it reaches zero, the camera returns<br>from subs menu to where it originally was on the pitch|
|0x0010F076|goToSubsTimer|uint16_t|2|Init to 15, small delay before entering bench state<br>without it, it could be too difficult to hit side 3 times (it might go back from the bench immediately)|
|0x0010F078|bench1Called|uint16_t|2|Set to true when bench key is detected<br>it is set only shortly through out the frame and then reset|
|0x0010F07A|bench2Called|uint16_t|2||
|0x0010F07C|benchXLimit|uint16_t|2|Bench roof right vertical line x coordinate (where player sprites start)<br>when camera x is at this number + 8 (=35) or greater, bench is completely out of site<br>this - 12 (=15) is subs arrow x coordinate<br>(the value is 27)|
|0x0010F07E|benchY|uint16_t|2||
|0x0010F080|opponentBenchY|uint16_t|2||
|0x0010F082|subsMenuX|uint16_t|2|X coordinate of substitutes menu during the game (= 100)<br>actually it's coordinate for the shadow, real menu starts 2 pixels left (98)|
|0x0010F084|formationMenuX|uint16_t|2|X coordinate of formation menu during the game|
|0x0010F086|plLeavingX|uint16_t|2||
|0x0010F088|plComingYTmp|uint16_t|2||
|0x0010F08A|plComingX|uint16_t|2||
|0x0010F08C|plComingY|uint16_t|2||
|0x0010F08E|plSubstitutedX|uint16_t|2||
|0x0010F090|plSubstitutedY|uint16_t|2||
|0x0010F092|benchWriteOnly02|uint16_t|2||
|0x0010F094|benchWriteOnly01|uint16_t|2||
|0x0010F096|substituteInProgress|uint16_t|2|-1 = Old player exited the field, new about to go in<br> 0 = no substitute in progress<br> 1 = waiting for player to come to bench<br> 2 = set for only one frame before the new player comes in|
|0x0010F098|substitutedPlSprite|Sprite*|4||
|0x0010F09C|teamThatSubstitutes|uint32_t|4||
|0x0010F0A0|benchPlayerIndex|uint16_t|2|In subs menu, 0 = coach, 1 = first reserve, ... 5 = last reserve|
|0x0010F0A2|subsState|uint16_t|2|0 = Not in any substitutes submenu<br>1 = about to substitute bench player<br>2 = in formations menu<br>3 = seems unused (never assigned) (draw subs menu without the header)<br>4 = listing players, above is formations entry<br>-1 = undefined (when drawing opponent's bench)|
|0x0010F0A4|selectedFormationEntry|uint16_t|2||
|0x0010F0A6|plToBeSubstitutedOrd|uint16_t|2|When in subs menu fire is pressed, and bench player is standing, waiting<br>for some player from team to be selected<br>zero based, -1 if coach is standing|
|0x0010F0A8|plToBeSubstitutedPos|uint16_t|2|Position of player that's about to be substituted in subs menu (not substituted yet, fire must be pressed)<br>1..11 - it comes from positions for tactics|
|0x0010F0AA|plToEnterGameIndex|uint16_t|2|Index of player that is standing and about to come into the game in subs menu<br>(but fire still needs to be pressed) (sticky var)<br>= benchPlayerIndex + 10 when about to enter (11..16)|
|0x0010F0AC|benchTeam|uint32_t|4|Points to team that requested bench (TeamGeneralInfo)|
|0x0010F0B0|benchTeamGame|uint32_t|4|Points to team that requested bench (in-game structure)|
|0x0010F0B4|deadBenchVar|uint16_t|2||
|0x0010F0B6|pl1BenchTimeoutCounter|uint16_t|2|Number of ticks to wait for next tap to happen and be counted toward bench call|
|0x0010F0B8|pl2BenchTimeoutCounter|uint16_t|2||
|0x0010F0BA|subsPrevPl1Direction|uint16_t|2||
|0x0010F0BC|subsPrevPl2Direction|uint16_t|2||
|0x0010F0BE|subsPl1TapCount|uint16_t|2||
|0x0010F0C0|subsPl2TapCount|uint16_t|2||
|0x0010F0C2|pl1BenchBlockWhileHoldingDirection|uint16_t|2|A direction is currently pressed, don't update timers or anything|
|0x0010F0C4|pl2BenchBlockWhileHoldingDirection|uint16_t|2||
|0x0010F0C6|subsBlockDirections|uint16_t|2|True if any direction is held while in subs menu|
|0x0010F0C8|subsBlockFire|uint16_t|2|True if player is holding fire while in subs menu<br>set to true when switching menus to prevent unwanted rapid selections|
|0x0010F0CA|subsPrevDirection|uint16_t|2|Logs controls movement (no fire) during subs menu<br>format: 0 - up, 1 - up right, ...|
|0x0010F0CC|subsMovementDelayTimer|uint16_t|2||
|0x0010F0CE|subsDirection|uint16_t|2|0 - Up<br> 1 - up right<br> 2 - right<br> 3 - down right<br> 4 - down<br> 5 - down left<br> 6 - left<br> 7 - up left<br>-1 - nothing<br><br>Matches player directions.|
|0x0010F0D0|subsFire|uint8_t|1||
|0x0010F0D1|pad_10F0D1|uint8_t|1||
|0x0010F0D2|subsFireTimer|uint16_t|2|Times how long fire is being pressed while in subs menu|
|0x0010F0D4|selectedPlayerInSubs|uint16_t|2|Selected player in substitutes menu, fill his menu entry with marked color|
|0x0010F0D6|pl1WasLeft|uint8_t|1||
|0x0010F0D7|pl1WasRight|uint8_t|1||
|0x0010F0D8|pl1WasUp|uint8_t|1||
|0x0010F0D9|pl1WasDown|uint8_t|1||
|0x0010F0DA|pl1LastFired|uint8_t|1||
|0x0010F0DB|pl1Left|uint8_t|1||
|0x0010F0DC|pl1Right|uint8_t|1||
|0x0010F0DD|pl1Up|uint8_t|1||
|0x0010F0DE|pl1Down|uint8_t|1||
|0x0010F0DF|pl1Fire|uint8_t|1||
|0x0010F0E0|pl1UpRight|uint8_t|1||
|0x0010F0E1|pl1UpLeft|uint8_t|1||
|0x0010F0E2|pl1DownRight|uint8_t|1||
|0x0010F0E3|pl1DownLeft|uint8_t|1||
|0x0010F0E4|pl1LeftPress|uint8_t|1||
|0x0010F0E5|pl1RightPress|uint8_t|1||
|0x0010F0E6|pl1UpPress|uint8_t|1||
|0x0010F0E7|pl1DownPress|uint8_t|1||
|0x0010F0E8|pl1ShortFire|uint8_t|1||
|0x0010F0E9|pad_10F0E9|uint8_t|1||
|0x0010F0EA|pl1FireCounter|uint16_t|2||
|0x0010F0EC|pl1Direction|uint16_t|2||
|0x0010F0EE|pl2WasLeft|uint8_t|1||
|0x0010F0EF|pl2WasRight|uint8_t|1||
|0x0010F0F0|pl2WasUp|uint8_t|1||
|0x0010F0F1|pl2WasDown|uint8_t|1||
|0x0010F0F2|pl2LastFired|uint8_t|1||
|0x0010F0F3|pl2Left|uint8_t|1||
|0x0010F0F4|pl2Right|uint8_t|1||
|0x0010F0F5|pl2Up|uint8_t|1||
|0x0010F0F6|pl2Down|uint8_t|1||
|0x0010F0F7|pl2Fire|uint8_t|1||
|0x0010F0F8|pl2UpRight|uint8_t|1||
|0x0010F0F9|pl2UpLeft|uint8_t|1||
|0x0010F0FA|pl2DownRight|uint8_t|1||
|0x0010F0FB|pl2DownLeft|uint8_t|1||
|0x0010F0FC|pl2LeftPress|uint8_t|1||
|0x0010F0FD|pl2RightPress|uint8_t|1||
|0x0010F0FE|pl2UpPress|uint8_t|1||
|0x0010F0FF|pl2DownPress|uint8_t|1||
|0x0010F100|pl2ShortFire|uint8_t|1||
|0x0010F101|pad_10F101|uint8_t|1||
|0x0010F102|pl2FireCounter|uint16_t|2||
|0x0010F104|pl2Direction|uint16_t|2||
|0x0010F106|frameCount|uint16_t|2||
|0x0010F108|lastGameTick|uint16_t|2||
|0x0010F10A|currentGameTick|uint16_t|2||
|0x0010F10C|currentTick|int16_t|2||
|0x0010F10E|lastFrameTicks|uint16_t|2||
|0x0010F110|pad_10F110|uint8_t|1||
|0x0010F111|keyIn|uint8_t|1||
|0x0010F112|currentKey|uint16_t|2||
|0x0010F114|waitingInterrupt|int16_t|2||
|0x0010F116|didSwapThisFrame|uint16_t|2||
|0x0010F118|cameraXMod320|uint16_t|2||
|0x0010F11A|cameraYMod320|uint16_t|2||
|0x0010F11C|oldCameraX|uint16_t|2|Coordinates from previous frame, and also location of<br>virtual screen right before rendering begins|
|0x0010F11E|oldCameraY|uint16_t|2||
|0x0010F120|cameraX|FixedPoint_|4|0..352, Coordinate of the left corner of the screen|
|0x0010F124|cameraY|FixedPoint_|4|16..680, Coordinate of the top corner of the screen|
|0x0010F128|dstXByteOffsetSaved0|uint16_t|2||
|0x0010F12A|dstYStartLinesSaved0|uint16_t|2||
|0x0010F12C|oldCameraXSaved0|uint16_t|2||
|0x0010F12E|oldCameraYSaved0|uint16_t|2||
|0x0010F130|cameraXSaved0|uint16_t|2||
|0x0010F132|cameraYSaved0|uint16_t|2||
|0x0010F134|dstXByteOffsetSaved1|uint16_t|2||
|0x0010F136|dstYStartLinesSaved1|uint16_t|2||
|0x0010F138|oldCameraXSaved1|uint16_t|2||
|0x0010F13A|oldCameraYSaved1|uint16_t|2||
|0x0010F13C|cameraXSaved1|uint16_t|2||
|0x0010F13E|cameraYSaved1|uint16_t|2||
|0x0010F140|cameraCoordinatesValid|uint16_t|2||
|0x0010F142|fansSidesSwapped|uint16_t|2||
|0x0010F144|hideBall|uint16_t|2|0  = Show<br>!0 = hide<br>always zero during the game except when throw-in|
|0x0010F146|paused|uint16_t|2|Is game paused (boolean)?|
|0x0010F148|overlayFlagBackup|uint16_t|2||
|0x0010F14A|forceLeftTeam|uint16_t|2||
|0x0010F14C|pad_10F14C|uint16_t|2||
|0x0010F14E|currentPlayerIndicatorPosition|uint16_t|2||
|0x0010F150|hilLeftTeamGoals|uint16_t|2||
|0x0010F152|hilRightTeamGoals|uint16_t|2||
|0x0010F154|winningTeamPtr|TeamGame*|4||
|0x0010F158|statsTeam1GoalsCopy2|uint16_t|2||
|0x0010F15A|statsTeam2GoalsCopy2|uint16_t|2||
|0x0010F15C|savedTeam1Goals|uint16_t|2||
|0x0010F15E|savedTeam2Goals|uint16_t|2||
|0x0010F160|statsTeam1GoalsCopy|uint16_t|2||
|0x0010F162|statsTeam2GoalsCopy|uint16_t|2||
|0x0010F164|statsTeam1Goals|uint16_t|2||
|0x0010F166|statsTeam2Goals|uint16_t|2||
|0x0010F168|team1TotalGoals|uint16_t|2||
|0x0010F16A|team2TotalGoals|uint16_t|2||
|0x0010F16C|team1GoalsDigit2|uint16_t|2||
|0x0010F16E|team2GoalsDigit2|uint16_t|2||
|0x0010F170|team1GoalsDigit1|uint16_t|2||
|0x0010F172|team2GoalsDigit1|uint16_t|2||
|0x0010F174|team1NameLength|uint16_t|2||
|0x0010F176|team2NameLength|uint16_t|2||
|0x0010F178|topTeamPtr|TeamGame*|4||
|0x0010F17C|bottomTeamPtr|TeamGame*|4||
|0x0010F180|team1NumSubs|uint16_t|2||
|0x0010F182|team2NumSubs|uint16_t|2||
|0x0010F184|team1GoalkeeperReplaced|uint16_t|2||
|0x0010F186|team2GoalkeeperReplaced|uint16_t|2||
|0x0010F188|team1MostFrequentFace|uint16_t|2||
|0x0010F18A|team2MostFrequentFace|uint16_t|2||
|0x0010F18C|pitchNumberAndType|uint16_t|2||
|0x0010F18E|swcPitchMapFiles|int8_t*[6]|24||
|0x0010F1A6|resultTimer|uint16_t|2||
|0x0010F1A8|timeVar|uint16_t|2||
|0x0010F1AA|fadeState|uint16_t|2||
|0x0010F1AC|fadeCommand|uint16_t|2||
|0x0010F1AE|fadeInitFlag|uint16_t|2||
|0x0010F1B0|paletteIndex|uint16_t|2||
|0x0010F1B2|paletteTable|uint8_t*[7]|28||
|0x0010F1CE|pad_10F1CE|uint16_t|2||
|0x0010F1D0|cameraSnapToPlayerCount|uint16_t|2||
|0x0010F1D2|turnDirCopiedFromCameraCount|uint16_t|2||
|0x0010F1D4|deadCameraBreakVar04|uint16_t|2||
|0x0010F1D6|deadThrowInDirectionVar|uint16_t|2||
|0x0010F1D8|pad_10F1D8|uint16_t|2||
|0x0010F1DA|initialKickWriteOnlyTicks|uint16_t|2||
|0x0010F1DC|disallowedTurnFlagsCounter|uint16_t|2||
|0x0010F1DE|pad_10F1DE|uint8_t[6]|6||
|0x0010F1E4|writeOnlyVar04|uint16_t|2||
|0x0010F1E6|pad_10F1E6|uint16_t|2||
|0x0010F1E8|deadCameraBreakVar01|uint16_t|2||
|0x0010F1EA|deadCameraBreakVar02|uint16_t|2||
|0x0010F1EC|deadCameraBreakVar03|uint16_t|2||
|0x0010F1EE|pad_10F1EE|uint16_t|2||
|0x0010F1F0|AI_maxStoppageTime|uint16_t|2||
|0x0010F1F2|pad_10F1F2|uint16_t|2||
|0x0010F1F4|goalkeeperSkipFlag|uint16_t|2|When non-zero, goalkeeper processing is bypassed in goalkeeper control code.|
|0x0010F1F6|lastCameraDirection|uint16_t|2||
|0x0010F1F8|lastPlayerTurnFlags|uint16_t|2||
|0x0010F2E6|savedRandStatePtr|uint8_t*|4||
|0x0010F2EA|savedRandState|uint8_t[15]|15|Buffer for saving random number generator state; pointed to by savedRandStatePtr.|
|0x0010F2F9|kRandomTable|int8_t[257]|257||
|0x0010F43E|seed|uint8_t|1||
|0x0010F43F|randXorIndex|uint8_t|1||
|0x0010F440|randXorKey|uint8_t|1||
|0x0010F441|pad_10F441|uint8_t|1||
|0x0010F828|corePrecacheTable|uint32_t|4||
|0x0010F872|menuPrecacheTable|int8_t*[23]|92||
|0x0010F8CE|aDataTeam008|uint8_t[14]|14||
|0x0010FBC2|replayContTbl|uint8_t[32]|32||
|0x0010FBE2|pad_10FBE2|uint8_t[34]|34||
|0x0010FC04|replaySelected|uint16_t|2||
|0x0010FC14|loaderModeFlag|uint16_t|2||
|0x0010FF74|scorer_padding|uint8_t[194]|194||
|0x00110036|team1ScorerSpritesWidths|uint8_t[16]|16||
|0x00110046|team2ScorerSpritesWidths|uint8_t[16]|16||
|0x00110056|showingUserStats|uint16_t|2|Are statistics on screen? (boolean)<br>because user called it<br>loops until it becomes zero|
|0x00110058|showStats|uint16_t|2|On screen, an order, it gets reset at first chance|
|0x0011005A|statsTimer|uint16_t|2|Positive: stats shown<br>zero or negative: stats hidden|
|0x0011005C|isGoalAttempt|uint16_t|2|1 If this strike was goal attempt, regardless<br>of wheter it was on target; shortly set|
|0x0011066A|statsNumber|int8_t[6]|6|For converting numbers in statistics|
|0x00110670|kBallSpeedPassingIncrease|int16_t[8]|16|Player's passing skill is index in this table, result is ball speed increase after the pass|
|0x00110680|kPassingSpeedCloserThan2500|int16_t|2|=6.0, If distance from the ball to player getting passed to is less than 2500, use this speed for player passing the ball|
|0x00110682|kPassingSpeed_2500_10000|int16_t|2|=6.5|
|0x00110684|kPassingSpeed_10000_22500|int16_t|2|=7.0|
|0x00110686|kPassingSpeed_22500_40000|int16_t|2|=7.33~|
|0x00110688|kPassingSpeed_40000_62500|int16_t|2|=7.66~|
|0x0011068A|kPassingSpeed_62500_90000|int16_t|2|=8.0|
|0x0011068C|kPassingSpeed_90000_122500|int16_t|2|=8.33~|
|0x0011068E|kPassingSpeedFurtherThan122500|int16_t|2|=8.66~|
|0x00110690|kFreePassReleasingBallSpeed|int16_t|2|=7.0, This will be the speed of the player that just did free pass|
|0x00110692|kPlayerSpeedsGameInProgress|int16_t[8]|16|Indexed by player speed (0..7) from file structure|
|0x001106A2|kPlayerSpeedsGameStopped|int16_t[8]|16||
|0x001106B2|kPlayerTacklingDownTime|int16_t[8]|16||
|0x001106C2|kComputerTacklingDownTime|int16_t[8]|16||
|0x001106D2|plAvgTacklingBallControlDiffChance|int8_t[8]|8||
|0x001106DA|kBallSpeedDeltaWhenControlled|int16_t[8]|16||
|0x001106EA|ballControlTurnThresholds|int16_t[8]|16|Table indexed by ball control skill (0-7); thresholds for losing ball on direction change.|
|0x001106FA|kAIFailedPassChance|int16_t[8]|16|Indexed by player's passing, lower is better<br>compared to random timer value 0..15, if greater or equal, the pass is botched|
|0x0011070A|goalScoredChances|int8_t[16]|16|Indexed by (player finishing - goalkeeper skill) + 7|
|0x0011071A|kGoalkeeperNearJumpSpeed|int16_t|2||
|0x0011071C|kKeeperSaveDistance|int16_t|2|If ball distance by y <= this, at least try saving|
|0x0011071E|kBallSpeedKicking|int16_t[8]|16||
|0x0011072E|kBallSpeedFinishing|int16_t[8]|16|Ball speed offsets|
|0x0011073E|kPlayerHeaderSpeedIncrease|int16_t[8]|16|Indexed by player's heading skill, add to his speed|
|0x00110BFE|pad_110BFE|uint8_t[6]|6||
|0x00110E78|kInjuriesSpeedHandicap|uint8_t[16]|16||
|0x00110EB4|kGoalieSkillTables|GoalieSkill*[8]|32||
|0x00110ED4|penaltyGoalieSkillTable|GoalieSkill|60|GoalieSkill struct loaded during penalty/shootout; all 16 index fields set to max making keeper hardest to beat.|
|0x00110F10|teamPlOfs24Table|GoalieSkill|60||
|0x00110F68|ballNextX|uint16_t|2||
|0x00110F6A|ballNextY|uint16_t|2||
|0x00110F6C|pad_110F6C|uint32_t|4||
|0x001111F6|spriteClippedY|uint16_t|2||
|0x001111F8|ballQuadrantIndex|uint16_t|2|For tactics, 0..34|
|0x001111FA|ballXQuadrantDead|uint16_t|2||
|0x001111FC|ballYQuadrantDead|uint16_t|2||
|0x001111FE|playerXQuadrantOffset|uint16_t|2|Offset inside quadrant, relative to quadrant center|
|0x00111200|playerYQuadrantOffset|uint16_t|2||
|0x00111202|pad_111202|uint16_t|2||
|0x00111204|ballXQuadrantLimits|uint8_t[10]|10||
|0x0011120E|ballYQuadrantLimits|uint8_t[12]|12||
|0x0011121A|playerXQuadrantsCoordinates|uint8_t[30]|30||
|0x00111238|playerYQuadrantCoordinates|uint8_t[32]|32||
|0x001114CE|kInjuryLevels|int8_t[7]|7||
|0x001114D5|kInjuryLevelAlreadyInjured|int8_t[7]|7||
|0x001114DC|kInjuryRecoveryTime|int16_t[8]|16||
|0x001114EC|kTackleInjuryProbability|int8_t[4]|4|Probabilities that tackle will be injury<br>indexed by game length<br>if game is longer, players get injured more rarely<br>(injury probability is decreased)|
|0x001114F0|kTackleInjuryProbabilityAlreadyInjured|int8_t[4]|4|Injury probabilties for already injured player<br>indexed by game length|
|0x001114F4|team1StatsData|TeamStatisticsData|14||
|0x00111502|team2StatsData|TeamStatisticsData|14||
|0x00111510|topTeamData|TeamGeneralInfo|144|Or upper team data... during the game|
|0x001115A0|bottomTeamData|TeamGeneralInfo|144||
|0x00111630|playerHadBall|int16_t|2|Something like ball take over (set when players are close, when<br>foul, penalty, good tackle...)<br>also set when player start heading the ball|
|0x00111632|lastKeeperPlayed|Sprite*|4|But it's set only when keeper caught slow ball,<br>on fast balls remains zero|
|0x00111636|lastTeamPlayed|TeamGeneralInfo*|4|Points to last team that touched the ball (general)|
|0x0011163A|lastPlayerPlayed|Sprite*|4|Points to player that last touched the ball (sprite)|
|0x0011163E|penalty|uint16_t|2|Set to true when player shoots the ball from the white spot<br>remains true until someone touches the ball, or it settles for<br>goal out; this is only for penalties during the first 90 minutes, not<br>for shootout|
|0x00111640|goalScored|uint16_t|2|Set when goal is scored, reset when camera moves to the center|
|0x00111642|runSlower|uint16_t|2|Players run slower when goal is scored<br>(62.5% of capacity, that is)|
|0x00111644|lastPlayerScored|Sprite*|4|Pointer to in-game sprite of a player that last scored (sticky)|
|0x00111648|lastTeamScoredNumber|uint16_t|2|0, 1 Or 2|
|0x0011164A|goalCameraMode|uint16_t|2|Set when goal is scored, reset when camera is moved to the center|
|0x0011164C|teamNumThatScored|uint16_t|2|Number of team that scored (1 or 2) (sticky)|
|0x0011164E|teamScoredDataPtr|TeamGeneralInfo*|4||
|0x00111652|teamScoredGamePtr|TeamGame*|4|Pointer to team that last scored<br>not initialized at the beginning, check num. goals<br>not influenced by side swapping|
|0x00111656|goalOut|uint16_t|2|Ball is in goal out; stays 1 until goalkeeper brings ball<br>back into play|
|0x00111658|gameNotInProgressCounterWriteOnly|uint16_t|2||
|0x0011165A|fireBlocked|uint16_t|2|Block fire when exiting dialogs, highlights etc. so it doesn't transfer<br>into an accidental kick|
|0x0011165C|lastTeamPlayedBeforeBreak|TeamGeneralInfo*|4|Pointer to team data structure that last had the ball<br>in possesion after the break; points to upper or lower<br>team, same team has different pointer in first and second<br>half; can be null if the game is not started yet|
|0x00111660|stoppageTimerTotal|uint16_t|2|Measures total time when game is stopped (in ticks)<br>reset when the ball comes into play|
|0x00111662|stoppageTimerActive|uint16_t|2|Counting time when game is stopped, but only when a player is able to do something<br>it's reset when the ball comes into play<br>(for example, some player kicks the ball out of play, upper timer starts<br>counting immediately, while this one starts only when another player<br>comes to the line, and is ready to do throw in)|
|0x00111664|gameStatePl|uint16_t|2|Similar to gameState<br>100 game in progress<br>101 when game not running (starting, half-time, keeper holding the ball, etc.)<br>102 when waiting on player to continue the game (take penalty, free kick, trow-in, etc.)<br>in other situations, copy of gameState|
|0x00111666|gameState|uint16_t|2|0   - Players going to their starting positions<br>   1   - left gol out (to team that's got the ball)<br>   2   - right goal out<br>   3   - keeper is holding the ball<br>   4   - left corner<br>   5   - right corner<br> 6..12 - free kicks (areas from left to right)<br>  13   - foul<br>  14   - penalty<br>15..20 - throw in (at various positions)<br>  21   - game is starting<br>  22   - camera going from center to shower on halftime<br>  23   - players going to shower for halftime<br>  24   - players going to shower<br>  25   - showing result on halftime<br>  26   - showing result after the game<br>  27   - game ended, first extra time about to begin<br>  28   - second extra time ended<br>  29   - first half ended<br>  30   - game has ended<br>  31   - penalties shootout<br> 100   - game in progress|
|0x00111668|breakCameraMode|uint16_t|2|Something 0..8<br>-1 when game just starting, at halftime, game over<br>0 when the game is stopped but the ball is still moving<br>1 when the game is stopped and the ball is standing still<br>2 when waiting on players to go to their positions<br>3 on initial kick-off/goal (also when moving to it)<br>  also seen shortly on other breaks<br>4 when goalkeeper's ball<br>5 seen for a moment during kick-off<br>7 show up only for a short time, maybe when a player is coming<br>8 when player can change camera direction with controls<br>(throw-in, for example)<br>while the game is running unpaused simply keeps last the value|
|0x0011166A|stoppageEventTimer|uint16_t|2|When in game, when it counts to zero after the break, ball is set where it should be<br>times interval to keep score and stats on screen after the game and on half time<br>also times various inter-states, such as when player go to shower, and when they return to pitch<br>110 until start of first extra time<br>possibly number of ticks until next "scene" (or camera mode transition)|
|0x0011166C|foulXCoordinate|uint16_t|2|Coordinates where the ball was when the foul has<br>happened - where the referee must run to<br>might also be ball coordinates when the game is interrupted<br>(definitely used for throw-in)|
|0x0011166E|foulYCoordinate|uint16_t|2||
|0x00111670|cameraDirection|uint16_t|2|Shows direction in which camera should travel after the ball is out of play<br>-1 when not playing (at the start before pressing fire, half-time, after game ends...)|
|0x00111672|playerTurnFlags|uint8_t|1|Bit set represents allowed directions when the player puts<br>the ball back into play (throw in, penalty..) - bits 0..7|
|0x00111673|pad_111673|uint8_t|1||
|0x00111674|inGameCounter|uint16_t|2|Counts when the ball is in play<br>halted when the game is stopped<br>resets when player resumes control|
|0x00111676|breakState|uint16_t|2|Gets set after the break, when player is about to put ball<br>back in play - then it's a copy of gameState; 0 when not playing,<br>and after the goal; keeps last value right until player regains control|
|0x00111678|substitutedPlDestX|uint16_t|2||
|0x0011167A|substitutedPlDestY|uint16_t|2||
|0x0011167C|substitutedPlX|uint16_t|2||
|0x0011167E|substitutedPlY|uint16_t|2||
|0x00111680|throwInPassOrKick|uint16_t|2|1 (Or non-zero) = pass, 0 = kick|
|0x00111682|halfNumber|uint16_t|2|Normal or extra time half number (1 or 2)|
|0x00111684|teamStarting|uint16_t|2|Number of team that starts the game or half<br>gets random value 1 or 2; on halftime inverted (1 = 2, 2 = 1)<br>gets new random value before start of first extra time|
|0x00111686|teamPlayingUp|uint16_t|2|1 Or 2|
|0x00111688|playingPenalties|uint16_t|2|After the game, boolean|
|0x0011168A|dontShowScorers|uint16_t|2|If true, do not show list of scorers along with result<br>needed because we don't care about it when (if) penalties start<br>set to true, by of course StartPenalties|
|0x0011168C|team1PenaltyAttempts|uint16_t|2|Current number of penalty attempts team has made (after the game<br>ended up tied); this number comprises current attempt too|
|0x0011168E|team2PenaltyAttempts|uint16_t|2||
|0x00111690|penaltiesTimer|uint16_t|2|When penalty is shot, counts down and when reaches<br>zero, next penalty is to be taken<br>(only on penalties after game!)|
|0x00111692|team1PenaltyShooterIndex|uint16_t|2||
|0x00111694|team2PenaltyShooterIndex|uint16_t|2||
|0x00111696|penaltyShooterSprite|Sprite*|4|Pointer to player that is about to do penalty<br>changed when penaltiesTimer expires<br>NULL before penalties time|
|0x0011169A|kBallFriction|int16_t[64]|128|Used when doing long passes|
|0x0011171A|kDefaultDestinations|int16_t[16]|32|Values that are used as x/y destination depending on direction player is moving<br>they're also used for the ball while the game is running|
|0x0011173A|kLeftThrowInBallDestDelta|int16_t[16]|32||
|0x0011175A|kRightThrowInBallDestDelta|int16_t[16]|32||
|0x0011177A|kPenaltyBallDestDelta|int16_t[16]|32||
|0x0011179A|kUpperLeftCornerBallDestDelta|int16_t[16]|32||
|0x001117BA|kUpperRightCornerBallDestDelta|int16_t[16]|32||
|0x001117DA|kLowerLeftCornerBallDestDelta|int16_t[16]|32||
|0x001117FA|kLowerRightCornerBallDestDelta|int16_t[16]|32||
|0x0011181A|goalkeeperDiveBallHeights|uint8_t[56]|56|Lookup table of ball Z values indexed by goalkeeper animation frame offset during dive animations.|
|0x00111852|kGoalKeeperClaimingBallHeight|uint8_t[14]|14||
|0x00111860|refState|uint16_t|2|0 = Dont draw referee<br>1 = referee incoming<br>2 = waiting player<br>3 = very short, when red card<br>4 = booking player and showing card<br>5 = leaving|
|0x00111862|injuriesForever|uint8_t[14]|14|Dead variable; if true, player never gets out of injured state<br>probably something for testing|
|0x00111870|cardsDisallowed|uint16_t|2|If true don't book players|
|0x00111872|whichCard|uint16_t|2|Card handing out in progress:<br>0 = nothing<br>1 = yellow<br>2 = red<br>3 = second yellow, red<br>Can be interpreted as bit field, bit 0 = yellow card, bit 1 = red card|
|0x00111874|bookedPlayer|Sprite*|4|Pointer to a player that's beeing booked|
|0x00111878|lastTeamBooked|TeamGeneralInfo*|4|Points to a team whose player last made bookable offence|
|0x0011187C|refTimer|uint16_t|2|Starts counting from zero when bookable offence is made,<br>and goes upwards to 232|
|0x0011187E|playerCardChance|uint16_t|2|CurrentGameTick bits 1-4 need to be greater than this in order<br>for the referee to give out a card when there's a foul;<br>gotten from the tables below|
|0x00111880|playerCardChances3min|uint8_t[32]|32||
|0x001118A0|playerCardChances5min|uint8_t[32]|32||
|0x001118C0|playerCardChances7min|uint8_t[32]|32||
|0x001118E0|playerCardChances10min|uint8_t[32]|32||
|0x00111900|playerCardChancesPerGameLength|uint32_t|4||
|0x00112504|ballOutOfGameTimer|uint16_t|2|I think this is timer for camera when the ball goes out of play|
|0x00112506|stoppageAuxFlag|uint16_t|2||
|0x00112850|kHeaderLowJumpHeight|uint32_t|4|=2.0, For flying headers|
|0x00112854|kHeaderHighJumpHeight|uint32_t|4|=4.25, For lob headers|
|0x0011297C|kStaticHeaderBaseBallSpeed|uint16_t|2||
|0x001129C6|kStaticHeaderPlayerSpeed|uint16_t|2|=1.0|
|0x001129C8|ballDefensiveX|uint16_t|2|Only updates inside penalty areas|
|0x001129CA|ballDefensiveY|uint16_t|2||
|0x001129CC|ballDefensiveZ|uint16_t|2||
|0x001129CE|ballNotHighX|uint16_t|2||
|0x001129D0|ballNotHighY|uint16_t|2||
|0x001129D2|ballNotHighZ|uint16_t|2|Ball z for the goalkeeper|
|0x001129D4|strikeDestX|uint16_t|2|If strike is crossing pitch line by y|
|0x001129D6|strikeDestY|uint16_t|2||
|0x001129D8|strikeDestZ|uint16_t|2||
|0x001129DA|ballNextGroundX|uint16_t|2||
|0x001129DC|ballNextYGroundY|uint16_t|2||
|0x001129DE|ballNextZDeadVar|uint16_t|2|Not much sense anyway, since z goes to zero (or close) during the calculations|
|0x001129E0|cardAnimStatesNoFlag|uint8_t[5]|5|Red card tables|
|0x001129E5|cardAnimStatesWithFlag|uint8_t[5]|5||
|0x00113864|kBallPlOffsets|int16_t[16]|32|Player direction is index<br>even indices are for x, and odd for y coordinate<br>these values are added to x and y coordinate of player<br>to form ball coordinates when player has the ball<br>indexed with direction of player|
|0x00113912|kPlayerWithBallOffsets|int16_t[16]|32||
|0x00114BC8|playRefereeWhistle|uint16_t|2||
|0x00114CA4|kTeamsStartingCoordinates|Position[22]|88||
|0x00114CFC|kGoalieSkill7Table|GoalieSkill|60||
|0x00114D38|kGoalieSkill6Table|GoalieSkill|60||
|0x00114D74|kGoalieSkill5Table|GoalieSkill|60||
|0x00114DB0|kGoalieSkill4Table|GoalieSkill|60||
|0x00114DEC|kGoalieSkill3Table|GoalieSkill|60||
|0x00114E28|kGoalieSkill2Table|GoalieSkill|60||
|0x00114E64|kGoalieSkill1Table|GoalieSkill|60||
|0x00114EA0|kGoalieSkill0Table|GoalieSkill|60||
|0x00114EDC|ballInUpperPenaltyArea|uint16_t|2||
|0x00114EDE|ballInLowerPenaltyArea|uint16_t|2||
|0x00114EE0|ballInGoalkeeperArea|uint16_t|2||
|0x0011756A|prevLastPlayer|uint32_t|4||
|0x0011756E|prevLastTeamPlayed|uint32_t|4||
|0x00117572|freeKickFactorsX|uint8_t[14]|14||
|0x00117580|freeKickDestX|uint16_t|2||
|0x00117582|deadVarAlways0|uint16_t|2||
|0x00117584|playerKickerPtr|TeamGeneralInfo*|4||
|0x00118266|aiTurnDirection|uint16_t|2||
|0x00118268|aiResumePlayTimer|uint16_t|2|When AI puts the ball back into play this counts down from 15 to 0|
|0x0011826A|aiRand|uint16_t|2|Random number generated each time DoAI is called; 0..255|
|0x0011826C|pad_11826C|uint16_t|2||
|0x0011826E|aiRandomRotateTable|int16_t[2]|4||
|0x00118272|aiLeftSpinTable|int16_t[3]|6||
|0x00118278|aiRotateRightTable|int16_t[3]|6||
|0x0011827E|aiLongKickTable|int16_t[3]|6||
|0x00118284|aiCounter|int16_t|2|Zero during the game<br>positive, counts down to zero<br>while non-zero, AI is allowed to modify direction (for ball spin?)|
|0x00118286|aiAttackHalf|int16_t|2|Which half does the AI attack? 1 or 2<br>set when AI decides to trigger fire|
|0x00118288|aiCounterWriteOnly|int16_t|2||
|0x0011828A|aiThrowInDirections|int8_t[6]|6|Angle range 0..255, indexed by game state enum, values for throw-in|
|0x00118374|introMenuImageScript|uint16_t[343]|686||
|0x00118622|menuColorAndTextScript|uint16_t[5166]|10332||
|0x0011AE7E|menuBGImageCmdStream|uint16_t[406]|812||
|0x0011B1AA|jumpHeaderTeam1UpFrames|int16_t[12]|24||
|0x0011B1C2|jumpHeaderHitTeam1DownFrames|int16_t[12]|24||
|0x0011B1DA|jumpHeaderHitTeam1RightFrames|int16_t[12]|24||
|0x0011B1F2|jumpHeaderHitTeam1LeftFrames|int16_t[12]|24||
|0x0011B20A|jumpHeaderHitTeam1UpRightFrames|int16_t[12]|24||
|0x0011B222|jumpHeaderHitTeam1UpLeftFrames|int16_t[12]|24||
|0x0011B23A|jumpHeaderHitTeam1DownRightFrames|int16_t[12]|24||
|0x0011B252|jumpHeaderHitTeam1DownLeftFrames|int16_t[12]|24||
|0x0011B26A|jumpHeaderHitTeam2UpFrames|int16_t[12]|24||
|0x0011B282|jumpHeaderHitTeam2DownFrames|int16_t[12]|24||
|0x0011B29A|jumpHeaderHitTeam2RightFrames|int16_t[12]|24||
|0x0011B2B2|jumpHeaderHitTeam2LeftFrames|int16_t[12]|24||
|0x0011B2CA|jumpHeaderHitTeam2UpRightFrames|int16_t[12]|24||
|0x0011B2E2|jumpHeaderHitTeam2UpLeftFrames|int16_t[12]|24||
|0x0011B2FA|jumpHeaderHitTeam2DownRightFrames|int16_t[12]|24||
|0x0011B312|jumpHeaderHitTeam2DownLeftFrames|int16_t[12]|24||
|0x0011B32A|jumpHeaderAttemptTeam1UpFrames|int16_t[8]|16||
|0x0011B33A|jumpHeaderAttemptTeam1DownFrames|int16_t[8]|16||
|0x0011B34A|jumpHeaderAttemptTeam1RightFrames|int16_t[8]|16||
|0x0011B35A|jumpHeaderAttemptTeam1LeftFrames|int16_t[8]|16||
|0x0011B36A|jumpHeaderAttemptTeam1UpRightFrames|int16_t[8]|16||
|0x0011B37A|jumpHeaderAttemptTeam1UpLeftFrames|int16_t[8]|16||
|0x0011B38A|jumpHeaderAttemptTeam1DownRightFrames|int16_t[8]|16||
|0x0011B39A|jumpHeaderAttemptTeam1DownLeftFrames|int16_t[8]|16||
|0x0011B3AA|jumpHeaderAttemptTeam2UpFrames|int16_t[8]|16||
|0x0011B3BA|jumpHeaderAttemptTeam2DownFrames|int16_t[8]|16||
|0x0011B3CA|jumpHeaderAttemptTeam2RightFrames|int16_t[8]|16||
|0x0011B3DA|jumpHeaderAttemptTeam2LeftFrames|int16_t[8]|16||
|0x0011B3EA|jumpHeaderAttemptTeam2UpRightFrames|int16_t[8]|16||
|0x0011B3FA|jumpHeaderAttemptTeam2UpLeftFrames|int16_t[8]|16||
|0x0011B40A|jumpHeaderAttemptTeam2DownRightFrames|int16_t[8]|16||
|0x0011B41A|jumpHeaderAttemptTeam2DownLeftFrames|int16_t[8]|16||
|0x0011B42A|team1LosingReactionFrames|int16_t[6]|12||
|0x0011B436|team2LosingReactionFrames|int16_t[6]|12||
|0x0011B442|team1WinningReactionFrames|int16_t[5]|10||
|0x0011B44C|team2WinningReactionFrames|int16_t[5]|10||
|0x0011B456|team1PlGettingYellowCardFrames|int16_t[6]|12||
|0x0011B462|team2PlGettingYellowCardFrames|int16_t[6]|12||
|0x0011B46E|team1PlayerGettingRedCardFrames|int16_t[8]|16||
|0x0011B47E|team2PlayerGettingRedCardFrames|int16_t[8]|16||
|0x0011B48E|team1PlGetting2ndYellowCardFrames|int16_t[10]|20||
|0x0011B4A2|team2PlGetting2ndYellowCardFrames|int16_t[10]|20||
|0x0011B4B6|playerRunningUpTeam1|int16_t[5]|10||
|0x0011B4C0|playerRunningDownTeam1|int16_t[5]|10||
|0x0011B4CA|playerRunningRightTeam1|int16_t[5]|10||
|0x0011B4D4|playerRunningLeftTeam1|int16_t[5]|10||
|0x0011B4DE|playerRunningUpRightTeam1|int16_t[5]|10||
|0x0011B4E8|playerRunningUpLeftTeam1|int16_t[5]|10||
|0x0011B4F2|playerRunningDownRightTeam1|int16_t[5]|10||
|0x0011B4FC|playerRunningDownLeftTeam1|int16_t[5]|10||
|0x0011B506|team1PlayerStandingFacingUpFrames|int16_t[2]|4||
|0x0011B50A|team1PlayerStandingFacingBottomFrames|int16_t[2]|4||
|0x0011B50E|team1PlayerStandingFacingRightFrames|int16_t[2]|4||
|0x0011B512|team1PlayerStandingFacingLeftFrames|int16_t[2]|4||
|0x0011B516|team1PlayerStandingFacingUpRightFrames|int16_t[2]|4||
|0x0011B51A|team1PlayerStandingFacingTopLeftFrames|int16_t[2]|4||
|0x0011B51E|team1PlayerStandingFacingBottomRightFrames|int16_t[2]|4||
|0x0011B522|team1PlayerStandingFacingBottomLeftFrames|int16_t[2]|4||
|0x0011B526|team1TacklingUpFrames|int16_t[2]|4||
|0x0011B52A|team1TacklingDownFrames|int16_t[2]|4||
|0x0011B52E|team1TacklingRightFrames|int16_t[2]|4||
|0x0011B532|team1TacklingLeftFrames|int16_t[2]|4||
|0x0011B536|team1TacklingUpRightFrames|int16_t[2]|4||
|0x0011B53A|team1TacklingUpLeftFrames|int16_t[2]|4||
|0x0011B53E|team1TacklingDownRightFrames|int16_t[2]|4||
|0x0011B542|team1TacklingDownLeftFrames|int16_t[2]|4||
|0x0011B546|team1TackledUpFrames|int16_t[2]|4||
|0x0011B54A|team1TackledDownFrames|int16_t[2]|4||
|0x0011B54E|team1TackledRightFrames|int16_t[2]|4||
|0x0011B552|team1TackledLeftFrames|int16_t[2]|4||
|0x0011B556|team1TackledUpRightFrames|int16_t[2]|4||
|0x0011B55A|team1TackledUpLeftFrames|int16_t[2]|4||
|0x0011B55E|team1TackledDownRightFrames|int16_t[2]|4||
|0x0011B562|team1TackledDownLeftFrames|int16_t[2]|4||
|0x0011B566|staticHeaderAttemptTeam1UpFrames|int16_t[9]|18||
|0x0011B578|staticHeaderAttemptTeam1DownFrames|int16_t[9]|18||
|0x0011B58A|staticHeaderAttemptTeam1RightFrames|int16_t[9]|18||
|0x0011B59C|staticHeaderAttemptTeam1LeftFrames|int16_t[9]|18||
|0x0011B5AE|staticHeaderAttemptTeam1UpRightFrames|int16_t[9]|18||
|0x0011B5C0|staticHeaderAttemptTeam1UpLeftFrames|int16_t[9]|18||
|0x0011B5D2|staticHeaderAttemptTeam1DownRightFrames|int16_t[9]|18||
|0x0011B5E4|staticHeaderAttemptTeam1DownLeftFrames|int16_t[9]|18||
|0x0011B5F6|staticHeaderAttemptTeam2UpFrames|int16_t[9]|18||
|0x0011B608|staticHeaderAttemptTeam2DownFrames|int16_t[9]|18||
|0x0011B61A|staticHeaderAttemptTeam2RightFrames|int16_t[9]|18||
|0x0011B62C|staticHeaderAttemptTeam2LeftFrames|int16_t[9]|18||
|0x0011B63E|staticHeaderAttemptTeam2UpRightFrames|int16_t[9]|18||
|0x0011B650|staticHeaderAttemptTeam2UpLeftFrames|int16_t[9]|18||
|0x0011B662|staticHeaderAttemptTeam2DownRightFrames|int16_t[9]|18||
|0x0011B674|staticHeaderAttemptTeam2DownLeftFrames|int16_t[9]|18||
|0x0011B686|staticHeaderAimHitTeam1UpFrames|int16_t[9]|18||
|0x0011B698|staticHeaderAimHitTeam1DownFrames|int16_t[9]|18||
|0x0011B6AA|staticHeaderAimHitTeam1RightFrames|int16_t[9]|18||
|0x0011B6BC|staticHeaderAimHitTeam1LeftFrames|int16_t[9]|18||
|0x0011B6CE|staticHeaderAimHitTeam1UpRightFrames|int16_t[9]|18||
|0x0011B6E0|staticHeaderAimHitTeam1UpLeftFrames|int16_t[9]|18||
|0x0011B6F2|staticHeaderAimHitTeam1DownRightFrames|int16_t[9]|18||
|0x0011B704|staticHeaderAimHitTeam1DownLeftFrames|int16_t[9]|18||
|0x0011B716|staticHeaderAimHitTeam2UpFrames|int16_t[9]|18||
|0x0011B728|staticHeaderAimHitTeam2DownFrames|int16_t[9]|18||
|0x0011B73A|staticHeaderAimHitTeam2RightFrames|int16_t[9]|18||
|0x0011B74C|staticHeaderAimHitTeam2LeftFrames|int16_t[9]|18||
|0x0011B75E|staticHeaderAimHitTeam2UpRightFrames|int16_t[9]|18||
|0x0011B770|staticHeaderAimHitTeam2UpLeftFrames|int16_t[9]|18||
|0x0011B782|staticHeaderAimHitTeam2DownRightFrames|int16_t[9]|18||
|0x0011B794|staticHeaderAimHitTeam2DownLeftFrames|int16_t[9]|18||
|0x0011B7A6|aboutToThrowInTeam1UpFrames|int16_t[7]|14||
|0x0011B7B4|aboutToThrowInTeam1DownFrames|int16_t[7]|14||
|0x0011B7C2|aboutToThrowInTeam1RightFrames|int16_t[7]|14||
|0x0011B7D0|aboutToThrowInTeam1LeftFrames|int16_t[7]|14||
|0x0011B7DE|aboutToThrowInTeam1UpRightFrames|int16_t[7]|14||
|0x0011B7EC|aboutToThrowInTeam1UpLeftFrames|int16_t[7]|14||
|0x0011B7FA|aboutToThrowInTeam1DownRightFrames|int16_t[7]|14||
|0x0011B808|aboutToThrowInTeam1DownLeftFrames|int16_t[7]|14||
|0x0011B816|throwInPassTeam1UpFrames|int16_t[4]|8||
|0x0011B81E|throwInPassTeam1DownFrames|int16_t[4]|8||
|0x0011B826|throwInPassTeam1RightFrames|int16_t[4]|8||
|0x0011B82E|throwInPassTeam1LeftFrames|int16_t[4]|8||
|0x0011B836|throwInPassTeam1UpRightFrames|int16_t[4]|8||
|0x0011B83E|throwInPassTeam1UpLeftFrames|int16_t[4]|8||
|0x0011B846|throwInPassTeam1DownRightFrames|int16_t[4]|8||
|0x0011B84E|throwInPassTeam1DownLeftFrames|int16_t[4]|8||
|0x0011B856|throwInKickTeam1UpFrames|int16_t[6]|12||
|0x0011B862|throwInKickTeam1DownFrames|int16_t[6]|12||
|0x0011B86E|throwInKickTeam1RightFrames|int16_t[6]|12||
|0x0011B87A|throwInKickTeam1LeftFrames|int16_t[6]|12||
|0x0011B886|throwInKickTeam1UpRightFrames|int16_t[6]|12||
|0x0011B892|throwInKickTeam1UpLeftFrames|int16_t[6]|12||
|0x0011B89E|throwInKickTeam1DownRightFrames|int16_t[6]|12||
|0x0011B8AA|throwInKickTeam1DownLeftFrames|int16_t[6]|12||
|0x0011B8B6|team1InjuredPlayerTopRightTable|int16_t[5]|10||
|0x0011B8C0|team1InjuredPlayerTopLeftTable|int16_t[5]|10||
|0x0011B8CA|playerRunningUpTeam2|int16_t[5]|10||
|0x0011B8D4|playerRunningDownTeam2|int16_t[5]|10||
|0x0011B8DE|playerRunningRightTeam2|int16_t[5]|10||
|0x0011B8E8|playerRunningLeftTeam2|int16_t[5]|10||
|0x0011B8F2|playerRunningUpRightTeam2|int16_t[5]|10||
|0x0011B8FC|playerRunningUpLeftTeam2|int16_t[5]|10||
|0x0011B906|playerRunningDownRightTeam2|int16_t[5]|10||
|0x0011B910|playerRunningDownLeftTeam2|int16_t[5]|10||
|0x0011B91A|team2PlayerStandingFacingUpFrames|int16_t[2]|4||
|0x0011B91E|team2PlayerStandingFacingDownFrames|int16_t[2]|4||
|0x0011B922|team2PlayerStandingFacingRightFrames|int16_t[2]|4||
|0x0011B926|team2PlayerStandingFacingLeftFrames|int16_t[2]|4||
|0x0011B92A|team2PlayerStandingFacingUpRightFrames|int16_t[2]|4||
|0x0011B92E|team2PlayerStandingFacingUpLeftFrames|int16_t[2]|4||
|0x0011B932|team2PlayerStandingFacingDownRightFrames|int16_t[2]|4||
|0x0011B936|team2PlayerStandingFacingDownLeftFrames|int16_t[2]|4||
|0x0011B93A|team2TacklingUpFrames|int16_t[2]|4||
|0x0011B93E|team2TacklingDownFrames|int16_t[2]|4||
|0x0011B942|team2TacklingRightFrames|int16_t[2]|4||
|0x0011B946|team2TacklingLeftFrames|int16_t[2]|4||
|0x0011B94A|team2TacklingUpRightFrames|int16_t[2]|4||
|0x0011B94E|team2TacklingUpLeftFrames|int16_t[2]|4||
|0x0011B952|team2TacklingDownRightFrames|int16_t[2]|4||
|0x0011B956|team2TacklingDownLeftFrames|int16_t[2]|4||
|0x0011B95A|team2TackledUpFrames|int16_t[2]|4||
|0x0011B95E|team2TackledDownFrames|int16_t[2]|4||
|0x0011B962|team2TackledRightFrames|int16_t[2]|4||
|0x0011B966|team2TackledLeftFrames|int16_t[2]|4||
|0x0011B96A|team2TackledUpRightFrames|int16_t[2]|4||
|0x0011B96E|team2TackledUpLeftFrames|int16_t[2]|4||
|0x0011B972|team2TackledDownRightFrames|int16_t[2]|4||
|0x0011B976|team2TackledDownLeftFrames|int16_t[26]|52|Also contains 8 embedded team1 standing-recovery sequences after first -999|
|0x0011B9AA|aboutToThrowInTeam2UpFrames|int16_t[7]|14||
|0x0011B9B8|aboutToThrowInTeam2DownFrames|int16_t[7]|14||
|0x0011B9C6|aboutToThrowInTeam2RightFrames|int16_t[7]|14||
|0x0011B9D4|aboutToThrowInTeam2LeftFrames|int16_t[7]|14||
|0x0011B9E2|aboutToThrowInTeam2UpRightFrames|int16_t[7]|14||
|0x0011B9F0|aboutToThrowInTeam2UpLeftFrames|int16_t[7]|14||
|0x0011B9FE|aboutToThrowInTeam2DownRightFrames|int16_t[7]|14||
|0x0011BA0C|aboutToThrowInTeam2DownLeftFrames|int16_t[7]|14||
|0x0011BA1A|throwInPassTeam2UpFrames|int16_t[4]|8||
|0x0011BA22|throwInPassTeam2DownFrames|int16_t[4]|8||
|0x0011BA2A|throwInPassTeam2RightFrames|int16_t[4]|8||
|0x0011BA32|throwInPassTeam2LeftFrames|int16_t[4]|8||
|0x0011BA3A|throwInPassTeam2UpRightFrames|int16_t[4]|8||
|0x0011BA42|throwInPassTeam2UpLeftFrames|int16_t[4]|8||
|0x0011BA4A|throwInPassTeam2DownRightFrames|int16_t[4]|8||
|0x0011BA52|throwInPassTeam2DownLeftFrames|int16_t[4]|8||
|0x0011BA5A|throwInKickTeam2UpFrames|int16_t[6]|12||
|0x0011BA66|throwInKickTeam2DownFrames|int16_t[6]|12||
|0x0011BA72|throwInKickTeam2RightFrames|int16_t[6]|12||
|0x0011BA7E|throwInKickTeam2LeftFrames|int16_t[6]|12||
|0x0011BA8A|throwInKickTeam2UpRightFrames|int16_t[6]|12||
|0x0011BA96|throwInKickTeam2UpLeftFrames|int16_t[6]|12||
|0x0011BAA2|throwInKickTeam2DownRightFrames|int16_t[6]|12||
|0x0011BAAE|throwInKickTeam2DownLeftFrames|int16_t[6]|12||
|0x0011BABA|team2InjuredPlayerTopRightTable|int16_t[5]|10||
|0x0011BAC4|team2InjuredPlayerTopLeftTable|int16_t[5]|10||
|0x0011BACE|goalkeeperRunningUpTeam1|int16_t[5]|10||
|0x0011BAD8|goalkeeperRunningDownTeam1|int16_t[5]|10||
|0x0011BAE2|goalkeeperRunningRightTeam1|int16_t[5]|10||
|0x0011BAEC|goalkeeperRunningLeftTeam1|int16_t[5]|10||
|0x0011BAF6|goalkeeperRunningUpRightTeam1|int16_t[5]|10||
|0x0011BB00|goalkeeperRunningUpLeftTeam1|int16_t[5]|10||
|0x0011BB0A|goalkeeperRunningDownRightTeam1|int16_t[5]|10||
|0x0011BB14|goalkeeperRunningDownLeftTeam1|int16_t[5]|10||
|0x0011BB1E|goalie1StandingFacingUpFrames|int16_t[2]|4||
|0x0011BB22|goalie1StandingFacingDownFrames|int16_t[2]|4||
|0x0011BB26|goalie1StandingFacingRightFrames|int16_t[2]|4||
|0x0011BB2A|goalie1StandingFacingLeftFrames|int16_t[2]|4||
|0x0011BB2E|goalie1StandingFacingUpRightFrames|int16_t[2]|4||
|0x0011BB32|goalie1StandingFacingUpLeftFrames|int16_t[2]|4||
|0x0011BB36|goalie1StandingFacingDownRightFrames|int16_t[2]|4||
|0x0011BB3A|goalie1StandingFacingDownLeftFrames|int16_t[2]|4||
|0x0011BB3E|goalie1CatchBallFacingUpFrames|int16_t[10]|20||
|0x0011BB52|goalie1CatchBallFacingDownFrames|int16_t[10]|20||
|0x0011BB66|goalie1GoalKickRightFrames|int16_t[13]|26||
|0x0011BB80|goalie1GoalKickLeftFrames|int16_t[13]|26||
|0x0011BB9A|goalie1HighDiveHoldRightFrames|int16_t[13]|26||
|0x0011BBB4|goalie1HighDiveHoldLeftFrames|int16_t[13]|26||
|0x0011BBCE|goalie1LowDiveRightFaceUpFrames|int16_t[13]|26||
|0x0011BBE8|goalie1LowDiveLeftFaceUpFrames|int16_t[13]|26||
|0x0011BC02|goalie1LowDiveRightFaceDownFrames|int16_t[13]|26||
|0x0011BC1C|goalie1LowDiveLeftFaceDownFrames|int16_t[13]|26||
|0x0011BC36|goalie1HighDiveReachRightFaceUpFrames|int16_t[13]|26||
|0x0011BC50|goalie1HighDiveReachLeftFaceUpFrames|int16_t[13]|26||
|0x0011BC6A|goalie1HighDiveReachRightFaceDownFrames|int16_t[13]|26||
|0x0011BC84|goalie1HighDiveReachLeftFaceDownFrames|int16_t[13]|26||
|0x0011BC9E|goalie1DiveLandFacingUpFrames|int16_t[6]|12||
|0x0011BCAA|goalie1DiveLandFacingDownFrames|int16_t[6]|12||
|0x0011BCB6|goalie1DeflectBallFacingUpFrames|int16_t[6]|12||
|0x0011BCC2|goalie1DeflectBallFacingDownFrames|int16_t[6]|12||
|0x0011BCCE|goalkeeperRunningUpTeam2|int16_t[5]|10||
|0x0011BCD8|goalkeeperRunningDownTeam2|int16_t[5]|10||
|0x0011BCE2|goalkeeperRunningRightTeam2|int16_t[5]|10||
|0x0011BCEC|goalkeeperRunningLeftTeam2|int16_t[5]|10||
|0x0011BCF6|goalkeeperRunningUpRightTeam2|int16_t[5]|10||
|0x0011BD00|goalkeeperRunningUpLeftTeam2|int16_t[5]|10||
|0x0011BD0A|goalkeeperRunningDownRightTeam2|int16_t[5]|10||
|0x0011BD14|goalkeeperRunningDownLeftTeam2|int16_t[5]|10||
|0x0011BD1E|goalie2StandingFacingUpFrames|int16_t[2]|4||
|0x0011BD22|goalie2StandingFacingDownFrames|int16_t[2]|4||
|0x0011BD26|goalie2StandingFacingRightFrames|int16_t[2]|4||
|0x0011BD2A|goalie2StandingFacingLeftFrames|int16_t[2]|4||
|0x0011BD2E|goalie2StandingFacingUpRightFrames|int16_t[2]|4||
|0x0011BD32|goalie2StandingFacingUpLeftFrames|int16_t[2]|4||
|0x0011BD36|goalie2StandingFacingDownRightFrames|int16_t[2]|4||
|0x0011BD3A|goalie2StandingFacingDownLeftFrames|int16_t[2]|4||
|0x0011BD3E|goalie2CatchBallFacingUpFrames|int16_t[10]|20||
|0x0011BD52|goalie2CatchBallFacingDownFrames|int16_t[10]|20||
|0x0011BD66|goalie2GoalKickRightFrames|int16_t[13]|26||
|0x0011BD80|goalie2GoalKickLeftFrames|int16_t[13]|26||
|0x0011BD9A|goalie2HighDiveHoldRightFrames|int16_t[13]|26||
|0x0011BDB4|goalie2HighDiveHoldLeftFrames|int16_t[13]|26||
|0x0011BDCE|goalie2LowDiveRightFaceUpFrames|int16_t[13]|26||
|0x0011BDE8|goalie2LowDiveLeftFaceUpFrames|int16_t[13]|26||
|0x0011BE02|goalie2LowDiveRightFaceDownFrames|int16_t[13]|26||
|0x0011BE1C|goalie2LowDiveLeftFaceDownFrames|int16_t[13]|26||
|0x0011BE36|goalie2HighDiveReachRightFaceUpFrames|int16_t[13]|26||
|0x0011BE50|goalie2HighDiveReachLeftFaceUpFrames|int16_t[13]|26||
|0x0011BE6A|goalie2HighDiveReachRightFaceDownFrames|int16_t[13]|26||
|0x0011BE84|goalie2HighDiveReachLeftFaceDownFrames|int16_t[13]|26||
|0x0011BE9E|goalie2DiveLandFacingUpFrames|int16_t[6]|12||
|0x0011BEAA|goalie2DiveLandFacingDownFrames|int16_t[6]|12||
|0x0011BEB6|goalie2DeflectBallFacingUpFrames|int16_t[6]|12||
|0x0011BEC2|goalie2DeflectBallFacingDownFrames|int16_t[6]|12||
|0x0011BECE|refComingUpFrames|int16_t[5]|10||
|0x0011BED8|refComingDownFrames|int16_t[5]|10||
|0x0011BEE2|refStandingFacingUpFrames|int16_t[2]|4||
|0x0011BEE6|refStandingFacingDownFrames|int16_t[2]|4||
|0x0011BEEA|refStandingFacingSideFrames|int16_t[2]|4||
|0x0011BEEE|refYellowCardFrames|int16_t[25]|50||
|0x0011BF20|refRedCardFrames|int16_t[25]|50||
|0x0011BF52|refSecondYellowFrames|int16_t[29]|58||
|0x0011BF8C|staticHeaderAttemptAnimTable|AnimTable|130||
|0x0011C00E|staticHeaderAimAnimTable|AnimTable|130||
|0x0011C090|staticHeaderHitAnimTable|AnimTable|130||
|0x0011C112|jumpHeaderAttemptAnimTable|AnimTable|130||
|0x0011C194|jumpHeaderHitAnimTable|AnimTable|130|Player hitting flying or lob headers (on ball contact)|
|0x0011C216|playerRunningAnimTable|AnimTable|130||
|0x0011C298|playerNormalStandingAnimTable|AnimTable|130||
|0x0011C31A|plTacklingAnimTable|AnimTable|130||
|0x0011C39C|plTacklingAnimTable_2|AnimTable_20|82||
|0x0011C3EE|playerTackledAnimTable|AnimTable_20|82||
|0x0011C440|goalieCatchingBallAnimTable|AnimTable|130||
|0x0011C4C2|aboutToThrowInAnimTable|AnimTable|130||
|0x0011C544|throwInPassAnimTable|AnimTable|130||
|0x0011C5C6|throwInKickAnimTable|AnimTable|130||
|0x0011C648|goalieGoalKickAnimTable|AnimTable|130||
|0x0011C6CA|leftGoalieJumpingHighAnimTable|AnimTable|130||
|0x0011C74C|goalieDiveHighHoldAnimTable|AnimTable|130||
|0x0011C7CE|rightGoalieJumpingHighAnimTable|AnimTable|130||
|0x0011C850|leftGoalieJumpingLowAnimTable|AnimTable|130||
|0x0011C8D2|rightGoalieJumpingLowAnimTable|AnimTable|130||
|0x0011C954|goalieDiveLandAnimTable|AnimTable|130||
|0x0011C9D6|goalieDeflectBallAnimTable|AnimTable|130||
|0x0011CA58|plGettingYellowCardAnimTable|AnimTable|130||
|0x0011CADA|plGettingRedCardAnimTable|AnimTable|130||
|0x0011CB5C|plGetting2ndYellowCardAnimTable|AnimTable|130||
|0x0011CBDE|plInjuredAnimTable|AnimTable|130||
|0x0011CC60|playerLosingReactionAnimTable|AnimTable|130||
|0x0011CCE2|playerWinningReactionAnimTable|AnimTable|130||
|0x0011CD64|refComingAnimTable|AnimTable_8|34||
|0x0011CD86|refWaitingAnimTable|AnimTable_12|50||
|0x0011CDB8|refYellowCardAnimTable|AnimTable_8|34||
|0x0011CDDA|refRedCardAnimTable|AnimTable_8|34||
|0x0011CDFC|refSecondYellowAnimTable|AnimTable_8|34||
|0x0011CE1E|smallCharsTable|CharTable|238||
|0x0011CF0C|bigCharsTable|CharTable|238||
|0x0011CFFA|ballMovingFrameIndices|int16_t[5]|10||
|0x0011D004|ballStaticFrameIndices|int16_t[3]|6||
|0x0011D00A|pad_11D00A|uint8_t[48]|48||
|0x0011D03A|big_S_Sprite|Sprite|110||
|0x0011D0A8|cornerFlagSprite|Sprite|110||
|0x0011D116|advertInGameSprites|Sprite[8]|880||
|0x0011D486|refereeSprite|Sprite|110||
|0x0011D4F4|currentTimeSprite|Sprite|110||
|0x0011D562|resultOnHalftimeSprite|Sprite|110||
|0x0011D5D0|resultAfterTheGameSprite|Sprite|110||
|0x0011D63E|gridUpperRowLeftSprite|Sprite|110||
|0x0011D6AC|gridUpperRowRightSprite|Sprite|110||
|0x0011D71A|gridMiddleRowLeftSprite|Sprite|110||
|0x0011D788|gridMiddleRowRightSprite|Sprite|110||
|0x0011D7F6|gridBottomRowLeftSprite|Sprite|110||
|0x0011D864|gridBottomRowRightSprite|Sprite|110||
|0x0011D8D2|team1NameSprite|Sprite|110||
|0x0011D940|team2NameSprite|Sprite|110||
|0x0011D9AE|team1GoalsDigit2Sprite|Sprite|110||
|0x0011DA1C|team1GoalsDigit1Sprite|Sprite|110||
|0x0011DA8A|team2GoalsDigit2Sprite|Sprite|110||
|0x0011DAF8|team2GoalsDigit1Sprite|Sprite|110||
|0x0011DB66|team1TotalGoalsDigit2Sprite|Sprite|110||
|0x0011DBD4|team1TotalGoalsDigit1Sprite|Sprite|110||
|0x0011DC42|team2TotalGoalsDigit2Sprite|Sprite|110||
|0x0011DCB0|team2TotalGoalsDigit1Sprite|Sprite|110||
|0x0011DD1E|dashSprite|Sprite|110||
|0x0011DD8C|team1Scorer1Sprite|Sprite|110||
|0x0011DDFA|team1Scorer2Sprite|Sprite|110||
|0x0011DE68|team1Scorer3Sprite|Sprite|110||
|0x0011DED6|team1Scorer4Sprite|Sprite|110||
|0x0011DF44|team1Scorer5Sprite|Sprite|110||
|0x0011DFB2|team1Scorer6Sprite|Sprite|110||
|0x0011E020|team1Scorer7Sprite|Sprite|110||
|0x0011E08E|team1Scorer8Sprite|Sprite|110||
|0x0011E0FC|team2Scorer1Sprite|Sprite|110||
|0x0011E16A|team2Scorer2Sprite|Sprite|110||
|0x0011E1D8|team2Scorer3Sprite|Sprite|110||
|0x0011E246|team2Scorer4Sprite|Sprite|110||
|0x0011E2B4|team2Scorer5Sprite|Sprite|110||
|0x0011E322|team2Scorer6Sprite|Sprite|110||
|0x0011E390|team2Scorer7Sprite|Sprite|110||
|0x0011E3FE|team2Scorer8Sprite|Sprite|110||
|0x0011E46C|goal1TopSprite|Sprite|110||
|0x0011E4DA|goal2BottomSprite|Sprite|110||
|0x0011E548|ballSprite|Sprite|110||
|0x0011E5B6|ballShadowSprite|Sprite|110||
|0x0011E624|playerMarkSprite|Sprite|110||
|0x0011E692|currentPlayerNameSprite|Sprite|110||
|0x0011E700|team1CurPlayerNumSprite|Sprite|110||
|0x0011E76E|team2CurPlayerNumSprite|Sprite|110||
|0x0011E7DC|bookedPlayerCardOrNumberSprite|Sprite|110||
|0x0011E84A|goalie1Sprite|Sprite|110||
|0x0011E8B8|team1Player2Sprite|Sprite|110||
|0x0011E926|team1Player3Sprite|Sprite|110||
|0x0011E994|team1Player4Sprite|Sprite|110||
|0x0011EA02|team1Player5Sprite|Sprite|110||
|0x0011EA70|team1Player6Sprite|Sprite|110||
|0x0011EADE|team1Player7Sprite|Sprite|110||
|0x0011EB4C|team1Player8Sprite|Sprite|110||
|0x0011EBBA|team1Player9Sprite|Sprite|110||
|0x0011EC28|team1Player10Sprite|Sprite|110||
|0x0011EC96|team1Player11Sprite|Sprite|110||
|0x0011ED04|goalie2Sprite|Sprite|110||
|0x0011ED72|team2Player2Sprite|Sprite|110||
|0x0011EDE0|team2Player3Sprite|Sprite|110||
|0x0011EE4E|team2Player4Sprite|Sprite|110||
|0x0011EEBC|team2Player5Sprite|Sprite|110||
|0x0011EF2A|team2Player6Sprite|Sprite|110||
|0x0011EF98|team2Player7Sprite|Sprite|110||
|0x0011F006|team2Player8Sprite|Sprite|110||
|0x0011F074|team2Player9Sprite|Sprite|110||
|0x0011F0E2|team2Player10Sprite|Sprite|110||
|0x0011F150|team2Player11Sprite|Sprite|110||
|0x0011F1BE|bottomCornerLeftPositions|Position[11]|44||
|0x0011F1EA|topCornerLeftPositions|Position[11]|44||
|0x0011F216|bottomCornerRightPositions|Position[11]|44||
|0x0011F242|topCornerRightPositions|Position[11]|44||
|0x0011F26E|bottomGoalOutLeftPositions|Position[11]|44||
|0x0011F29A|topGoalOutLeftPositions|Position[11]|44||
|0x0011F2C6|bottomGoalOutRightPositions|Position[11]|44||
|0x0011F2F2|topGoalOutRightPositions|Position[11]|44||
|0x0011F31E|bottomKeeperHoldsBallPositions|Position[11]|44||
|0x0011F34A|topKeeperHoldsBallPositions|Position[11]|44||
|0x0011F376|bottomStartingPositions|Position[11]|44||
|0x0011F3A2|topStartingPositions|Position[11]|44||
|0x0011F3CE|topFreeKickCenterPositions|Position[11]|44||
|0x0011F3FA|bottomFreeKickCenterPositions|Position[11]|44||
|0x0011F426|topFreeKickRight3Positions|Position[11]|44||
|0x0011F452|bottomFreeKickRight3Positions|Position[11]|44||
|0x0011F47E|topFreeKickLeft1Positions|Position[11]|44||
|0x0011F4AA|bottomFreeKickLeft1Positions|Position[11]|44||
|0x0011F4D6|topFreeKickRight2Positions|Position[11]|44||
|0x0011F502|bottomFreeKickRight2Positions|Position[11]|44||
|0x0011F52E|topFreeKickLeft2Positions|Position[11]|44||
|0x0011F55A|bottomFreeKickLeft2Positions|Position[11]|44||
|0x0011F586|topFreeKickRight1Positions|Position[11]|44||
|0x0011F5B2|bottomFreeKickRight1Positions|Position[11]|44||
|0x0011F5DE|topFreeKickLeft3Positions|Position[11]|44||
|0x0011F60A|bottomFreeKickLeft3Positions|Position[11]|44||
|0x0011F636|bottomPenaltyPositions|Position[11]|44||
|0x0011F662|topPenaltyPositions|Position[11]|44||
|0x0011F68E|bottomThrowInForwardRightPositions|Position[11]|44||
|0x0011F6BA|bottomThrowInCenterRightPositions|Position[11]|44||
|0x0011F6E6|bottomThrowInBackRightPositions|Position[11]|44||
|0x0011F712|bottomThrowInForwardLeftPositions|Position[11]|44||
|0x0011F73E|bottomThrowInCenterLeftPositions|Position[12]|48||
|0x0011F76E|bottomThrowInBackLeftPositions|Position[11]|44||
|0x0011F79A|bottomStartingGamePositions|Position[11]|44||
|0x0011F7C6|topStartingGamePositions|Position[11]|44||
|0x0011F7F2|bottomLeavingPitchPositions|Position[11]|44||
|0x0011F81E|topLeavingPitchPositions|Position[11]|44||
|0x0011F84A|bottomFirstExtraStartingPositions|Position[11]|44||
|0x0011F876|topFirstExtraStartingPositions|Position[11]|44||
|0x0011F8A2|bottomPenaltiesPositions|Position[11]|44||
|0x0011F8CE|topPenaltiesPositions|Position[11]|44||
|0x0011F8FA|bottomBallOutOfPlayPositions|Position*[32]|128|Indexed by gameState, states < 32<br>each pointer points to table of 22 elements, x & y position,<br>player ordinal * 2 is index|
|0x0011F97A|topBallOutOfPlayPositions|Position*[32]|128|Indexed by game state|
|0x0011F9FA|team1SpritesTable|Sprite*[11]|44||
|0x0011FA26|team2SpritesTable|Sprite*[11]|44||
|0x0011FA52|allSpritesArray|Sprite*[79]|316||
|0x0011FB8E|debug_mode|uint16_t|2||
|0x0011FB90|useAltBaseFlag|uint16_t|2||
|0x0011FB92|usePlaneOffsetFlag|uint8_t[16]|16||
|0x0011FBB4|fireCounter|uint16_t|2|For any player input|
|0x0011FBB6|menuControlsDirection2|uint16_t|2|These are perhaps the same flags as menuControlsDirection,<br>but there is no blocking on key repeats|
|0x0011FBB8|menuControlsDirection|uint16_t|2|0 - Up<br> 1 - up right<br> 2 - right<br> 3 - down right<br> 4 - down<br> 5 - down left<br> 6 - left<br> 7 - up left<br>-1 - nothing|
|0x0011FBBA|lastControls|uint16_t|2|CheckControls local controls in previous cycle|
|0x0011FBBC|controlsHeldTimer|uint16_t|2|CheckControls local<br>times how long controls are held|
|0x0011FBBE|fire|uint16_t|2|-1 - Pressed<br> 0 - not pressed<br>these are combined input variables for the menus|
|0x0011FBC0|shortFire|uint16_t|2||
|0x0011FBC2|longFireTime|uint16_t|2||
|0x0011FBC4|longFireFlag|uint16_t|2||
|0x0011FBC6|up|uint8_t|1||
|0x0011FBC7|down|uint8_t|1||
|0x0011FBC8|left|uint8_t|1||
|0x0011FBC9|right|uint8_t|1||
|0x0011FBCA|fireResetFlag|uint16_t|2||
|0x0011FBCC|currentMenuPtr|Menu*|4|Current menu, in packed form|
|0x0011FBD0|menuStatus|uint16_t|2|0 = Entering menu<br>1 = exiting|
|0x0011FBD2|menuFade|uint16_t|2|Fade screen?<br>0 - no, 1 - yes (does it only<br>once, when first showing the menu)|
|0x0011FBD4|controlMask|uint16_t|2|Set by MenuProc:<br>bit  9  8  7  6  5  4  3  2  1  0<br>     \|  \|  \|  \|  \|  \|  \|  \|  \|  +-- fire<br>     \|  \|  \|  \|  \|  \|  \|  \|  +----- left<br>     \|  \|  \|  \|  \|  \|  \|  +-------- right<br>     \|  \|  \|  \|  \|  \|  +----------- up<br>     \|  \|  \|  \|  \|  +-------------- down<br>     \|  \|  \|  \|  +----------------- short fire<br>     \|  \|  \|  +-------------------- up left<br>     \|  \|  +----------------------- down right<br>     \|  +-------------------------- up right<br>     +----------------------------- down left<br>It's been AND-ed by entries control mask.|
|0x0011FBD6|menuTextBlinkCounter|uint16_t|2|When text is blinking (not frame)|
|0x0011FBD8|deadInputTextVar|uint16_t|2||
|0x0011FBDA|deadVar03|uint16_t|2||
|0x0011FBDC|charTables|uint32_t|4||
|0x0011FBE4|numbersBuffer|uint64_t|8||
|0x0011FBEC|shirtColorTable|uint8_t[10]|10||
|0x0011FC26|hexLongStringBuffer|uint8_t[10]|10|Buffer for converting a 32-bit value to an 8-digit hex ASCII string with null terminator.|
|0x0011FC60|hexWordStringBuffer|uint8_t[6]|6|Buffer for converting a 16-bit panic code to a 4-digit hex ASCII string.|
|0x001200B8|menuTypesJumpTable|uint8_t*[23]|92||
|0x00120364|nextEntryDirectionOffsets|uint64_t|8||
|0x0012048C|defaultNamesTable|int8_t*[6]|24||
|0x001204A4|defaultSurnamesTable|int8_t*[6]|24||
|0x001204BC|aChris|uint8_t[6]|6||
|0x001204C2|aChapman|uint64_t|8||
|0x001204CA|aJon|uint32_t|4||
|0x001204CE|aHare|uint8_t[5]|5||
|0x001204D3|aGraeme|uint8_t[7]|7||
|0x001204DA|aBoxall|uint8_t[7]|7||
|0x001204E1|aMark|uint8_t[5]|5||
|0x001204E6|aDearsley|uint8_t[9]|9||
|0x001204EF|aDavid|uint8_t[6]|6||
|0x001204F5|aWilkin|uint8_t[7]|7||
|0x001204FC|aDavid_0|uint8_t[6]|6||
|0x00120502|aNottingham|uint8_t[12]|12||
|0x00120A06|allowShorterMenuItemsWithFrames|uint32_t|4|If this is true then menu items on the right side of the screen (x >= 160) will have outer<br>frames even if their height is a bit shorter (>6 px), otherwise all items must have height<br>at least 9 pixels in order to have their frame drawn<br>it's used to give tactics entries a frame in play match menu (it gets set to 1 in<br>PlayMatchMenuInit() and reset in ExitPlayMatch())|
|0x00120A0A|pl1SkipFireCounter|uint16_t|2|Never written (the only write depends on top variable being true)|
|0x00120A0C|pl2SkipFireCounter|uint16_t|2|Never written|
|0x00120A98|outerFrameColorsTable|uint8_t[32]|32||
|0x00120F4C|inputAllowedControlKeys|uint8_t[12]|12|Enter, left shift, right shift, escape,<br>backspace, 'special'(?), space, '-', '/', '.', terminator|
|0x00120F66|allowExtraCharsFlag|uint16_t|2|If true, allows '.' when typing in... at least in theory|
|0x00120F68|pad_120F68|uint16_t|2||
|0x0012154A|aSwosDate0|uint8_t[14]|14||
|0x00121558|pad_121558|uint8_t[20]|20||
|0x00121648|forceDrawTransparentMenuItems|uint16_t|2|If this is true menu entries with background color 0 (transparent) will be<br>rendered with background color 15 (yellow)<br>it never seems to be set anywhere, it's most likely debug-only variable|
|0x0012166C|menuX|uint16_t|2||
|0x0012166E|menuY|uint16_t|2||
|0x00121670|kTeamColorsTable|uint8_t[20]|20||
|0x001217D8|kAbortLossScorerWeightTable|int8_t[12]|12||
|0x001218AE|kUserTeamOffsetBiasLUT|uint64_t|8||
|0x001218B6|kMenuIrqCookieFailTrap|uint8_t[56]|56||
|0x001218EE|kTeamViewOffsetBaseLUT|uint8_t[256]|256||
|0x00121D20|simGoalsByStrengthDiffTable|uint8_t[128]|128|Lookup table indexed by team strength difference, with 4 random outcomes per level, for simulated goal count.|
|0x00121DA0|simHighGoalFallbackValues|uint8_t[6]|6|Fallback high goal count values used when the strength difference table returns the sentinel.|
|0x00121DA6|simGoalProbByTacticPtrs|uint8_t*[18]|72|Array of 18 pointers to cumulative probability threshold arrays, indexed by tactic for simulated goals.|
|0x00121DEE|simExtraGoalProbByTacticPtrs|uint8_t*[16]|64|Array of 16 pointers to cumulative probability threshold arrays for secondary goal increment.|
|0x00121E2E|simGoalProbThreshA|uint8_t[5]|5|Cumulative probability thresholds for goal scoring, referenced by tactic indices 0-1.|
|0x00121E33|simExtraGoalProbThreshA|uint8_t[3]|3|Cumulative probability thresholds for extra goal scoring, tactic indices 0-1.|
|0x00121E36|simGoalProbThreshB|uint8_t[5]|5|Cumulative probability thresholds for goal scoring, tactic indices 2-3.|
|0x00121E3B|simExtraGoalProbThreshB|uint8_t[3]|3|Cumulative probability thresholds for extra goal scoring, tactic indices 2-3.|
|0x00121E3E|simGoalProbThreshC|uint8_t[5]|5|Cumulative probability thresholds for goal scoring, tactic indices 4-6.|
|0x00121E43|simExtraGoalProbThreshC|uint8_t[3]|3|Cumulative probability thresholds for extra goals, tactic indices 4-6. All zero|
|0x00121E46|simGoalProbThreshD|uint8_t[5]|5|Cumulative probability thresholds for goal scoring, tactic indices 7-9.|
|0x00121E4B|simExtraGoalProbThreshD|uint8_t[3]|3|Cumulative probability thresholds for extra goals, tactic indices 7-9. All zero.|
|0x00121E4E|simGoalProbThreshE|uint8_t[5]|5|Cumulative probability thresholds for goal scoring, tactic indices 10-17.|
|0x00121E53|simExtraGoalProbThreshE|uint8_t[3]|3|Cumulative probability thresholds for extra goals, tactic indices 10-15. All zero.|
|0x00121F48|simGoalsByIndexDiffTable|uint8_t[128]|128|Lookup table indexed by team view-index difference for second scoring phase of match simulation.|
|0x00121FC8|simExtraGoalThresholdsA|uint8_t[3]|3|Cumulative probability thresholds for extra goals in the second scoring phase.|
|0x00121FCB|simExtraGoalThresholdsB|uint8_t[3]|3||
|0x00121FF8|simGoalScorerPairTable|uint8_t[64]|64|Table of packed nibble pairs for randomly selecting two position indices for goal assignment.|
|0x0012215E|goalScorerDistributionByBallOutTactic|uint8_t*[18]|72||
|0x001221A6|goalScorerDist442|uint8_t[12]|12|Goal scorer probability distribution for 4-4-2 tactic.|
|0x001221B2|goalScorerDist541|uint8_t[12]|12|Goal scorer probability distribution for 5-4-1 tactic.|
|0x001221BE|goalScorerDist451|uint8_t[12]|12|Goal scorer probability distribution for 4-5-1 tactic.|
|0x001221CA|goalScorerDist532|uint8_t[12]|12|Goal scorer probability distribution for 5-3-2 tactic.|
|0x001221D6|goalScorerDist352|uint8_t[12]|12|Goal scorer probability distribution for 3-5-2 tactic.|
|0x001221E2|goalScorerDist433|uint8_t[12]|12|Goal scorer probability distribution for 4-3-3 tactic.|
|0x001221EE|goalScorerDist424|uint8_t[12]|12|Goal scorer probability distribution for 4-2-4 tactic.|
|0x001221FA|goalScorerDist343|uint8_t[12]|12|Goal scorer probability distribution for 3-4-3 tactic.|
|0x00122206|goalScorerDistSweep|uint8_t[12]|12|Goal scorer probability distribution for sweep tactic.|
|0x00122212|goalScorerDist523|uint8_t[12]|12|Goal scorer probability distribution for 5-2-3 tactic.|
|0x0012221E|goalScorerDistAttack|uint8_t[12]|12|Goal scorer probability distribution for attack tactic.|
|0x0012222A|goalScorerDistDefend|uint8_t[12]|12|Goal scorer probability distribution for defend tactic.|
|0x00122236|currentGoalScorerDistPtr|uint8_t*|4|Pointer to the currently active goal scorer distribution table|
|0x00122740|playerStatusBucketThresholds|uint64_t|8||
|0x001229B2|availablePickCountByGoalsInTable|uint8_t[48]|48||
|0x001229E2|preferredTacticsSlotsByRole|uint8_t[64]|64||
|0x00122A22|candidatePlayersByGoalsInTable|uint8_t[160]|160||
|0x00122AC2|viewResultCtx|uint32_t|4||
|0x00122AC6|inEditTactics|uint16_t|2|Set to 1 at the very beginning of EditTactics|
|0x00122AC8|viewResultModeFlag|uint16_t|2||
|0x00122ACA|viewResultStatColumnIndex|uint16_t|2||
|0x00122ACC|viewResultTeam1GoalsIn|uint16_t|2||
|0x00122ACE|viewResultTeam2GoalsIn|uint16_t|2||
|0x00122AD0|viewResultTeam1Ptr|TeamFile*|4||
|0x00122AD4|viewResultTeam2Ptr|TeamFile*|4||
|0x00122AD8|team1ViewBaseIndex|uint16_t|2||
|0x00122ADA|team2ViewBaseIndex|uint16_t|2||
|0x00122ADC|team1ViewIndex|uint16_t|2||
|0x00122ADE|team2ViewIndex|uint16_t|2||
|0x00122AE0|viewIndexDelta|uint16_t|2||
|0x00122AE2|team1ViewOffsetX|uint16_t|2||
|0x00122AE4|team2ViewOffsetX|uint16_t|2||
|0x00122AE6|team1ViewOffsetY|uint16_t|2||
|0x00122AE8|team2ViewOffsetY|uint16_t|2||
|0x00122AEA|team1SimulatedGoalsOut|uint16_t|2||
|0x00122AEC|team2SimulatedGoalsOut|uint16_t|2||
|0x00122AEE|team1PlayerRemapTable|uint8_t[32]|32||
|0x00122B0E|team2PlayerRemapTable|uint8_t[32]|32||
|0x00122B2E|team1AvailableMask|uint32_t|4||
|0x00122B32|team2AvailableMask|uint32_t|4||
|0x00122B36|team1AvailableCount|uint16_t|2||
|0x00122B38|team2AvailableCount|uint16_t|2||
|0x00122B3A|team1GoalCounterByPlayer|uint8_t[32]|32||
|0x00122B5A|team2GoalCounterByPlayer|uint8_t[64]|64||
|0x00122B9A|careerTeamViewOffsetX|uint16_t|2|X view offset for the career team during match result simulation.|
|0x00122B9C|playersPositionsByTactics|TacticsPosition*[18]|72||
|0x00122D8C|oldPlayerSkillDivisor|uint16_t|2||
|0x00122D8E|skillsPerQuadrant|uint8_t[245]|245|7 X 35|
|0x00122E85|skillQuadrantAdjustDeltas|int8_t[37]|37|Array of skill adjustment delta values for quadrant-based player skill processing.|
|0x00122EAA|quadrantDistanceFactor|uint8_t[1226]|1226||
|0x00123374|priceSkillPonders|uint8_t[140]|140||
|0x00123400|quadrantCoordinatesToBallQuadrant|int8_t[240]|240||
|0x001234F0|teamTactics442|TeamTactics|370||
|0x00123662|teamTactics541|TeamTactics|370||
|0x001237D4|teamTactics451|TeamTactics|370||
|0x00123946|teamTactics532|TeamTactics|370||
|0x00123AB8|teamTactics352|TeamTactics|370||
|0x00123C2A|teamTactics433|TeamTactics|370||
|0x00123D9C|teamTactics424|TeamTactics|370||
|0x00123F0E|teamTactics343|TeamTactics|370||
|0x00124080|teamTacticsSweep|TeamTactics|370||
|0x001241F2|teamTactics523|TeamTactics|370||
|0x00124364|teamTacticsAttack|TeamTactics|370||
|0x001244D6|teamTacticsDefend|TeamTactics|370||
|0x00124648|teamTacticsTable|TeamTactics*[19]|76||
|0x00124842|skillValuePonders|uint64_t|8|Multiply value of skill with this|
|0x0012484A|plPricesIncreaseTable|uint8_t[50]|50|Get from this table player price increment|
|0x0012487C|pad_12487C|uint32_t|4||
|0x00124880|plPositions|uint32_t|4||
|0x00124884|totalSkillsFactorSum|uint16_t|2||
|0x00124886|numPlayersAtQuadrant|uint16_t|2||
|0x001248E2|playerAgeToFormDivisorTable|uint8_t[50]|50||
|0x00124B3A|playerFormDeltaRandomTable|uint8_t[144]|144||
|0x00124BCA|avgPlayerPriceHalfClamped|uint16_t|2||
|0x00124BCC|seasonRunningCostsAccum|uint32_t|4|Accumulates weekly running costs each financial deduction cycle.|
|0x00124BD0|seasonWagesAccum|uint32_t|4|Accumulates weekly player wages each financial deduction cycle.|
|0x00124BD4|seasonGateReceiptsAccum|uint32_t|4|Accumulates gate receipt income from cup/league matches.|
|0x00124BD8|seasonMatchReceiptsCount|uint16_t|2|Counter incremented each time gate receipts are calculated for a match.|
|0x00124BDA|seasonWeeksDeducted|uint16_t|2|Counter incremented once per weekly financial deduction iteration.|
|0x00124BDC|seasonGateReceiptsAccum2|uint32_t|4|Second accumulator for gate receipt income for a separate financial report line.|
|0x00124BE0|seasonRunningCostsAccum2|uint32_t|4|Second accumulator for weekly running costs.|
|0x0012541A|leagueMatchReceiptsMultiplierTable|uint8_t[12]|12||
|0x00125426|cupMatchReceiptsMultiplierTable|uint8_t[12]|12||
|0x00125C76|seasonReviewConfidenceDeltaTable|int16_t[5]|10||
|0x001261B2|nationalSelectorSeasonReviewReputationDeltaTable|int16_t[5]|10||
|0x0012654E|pad_12654E|uint16_t|2||
|0x001265EE|displayedPlayerValueRandomDeltaTable|uint8_t[256]|256||
|0x00126A84|cachedViewResultTeam1Goals|uint16_t|2||
|0x00126A86|cachedViewResultTeam2Goals|uint16_t|2||
|0x00126A88|cachedExtraTimeTeam1Goals|uint16_t|2||
|0x00126A8A|cachedExtraTimeTeam2Goals|uint16_t|2||
|0x00126A8C|cachedPenaltyShootoutTeam1Score|uint16_t|2||
|0x00126A8E|cachedPenaltyShootoutTeam2Score|uint16_t|2||
|0x00126A90|pad_126A90|uint32_t|4||
|0x001270A8|conflictingBasicTeamColorsTable|uint16_t[10]|20|Index with 1st color then if 2nd color bit is set -> conflict<br><br>       gray white black orange red blue brown l.blue green yellow<br>gray     x                           x           x     x<br>white         x<br>black               x                x    x            x<br>orange                    x     x                             x<br>red                       x     x         x<br>blue     x          x                x           x<br>brown               x           x         x<br>l.blue   x                           x           x<br>green    x          x                                  x<br>yellow                    x                                   x|
|0x001270BC|conflictingShortsTeamColorsTable|uint16_t[10]|20|Gray white black orange red blue brown l.blue green yellow<br>gray     x    x                      x           x     x<br>white    x    x                                  x            x<br>black               x                x    x            x<br>orange                    x     x                             x<br>red                       x     x         x<br>blue     x          x                x    x      x<br>brown               x           x    x    x<br>l.blue   x    x                      x           x<br>green    x          x                                  x<br>yellow        x            x                                  x|
|0x001270D0|kitsSimilarityLookupTable|uint8_t[46]|46||
|0x001270FE|shirtType1|uint8_t|1||
|0x001270FF|shirtType2|uint8_t|1||
|0x00127100|similarityFactor|uint16_t|2|How similar are the colors of two teams|
|0x00127272|teamKitsSimilarity|uint32_t|4|Team1 prim. vs team2 prim.<br>team1 prim. vs team2 sec.<br>team1 sec. vs team2 prim.<br>team1 sec. vs team2 sec.|
|0x00127D3E|buildMatchResultStringControl|uint16_t|2||
|0x0012847C|exitGameFlag|uint16_t|2|Must be zero in order to start the game, if 1 SetupPlayers bails|
|0x00128EC0|teamKitTieBreakColors|uint8_t[12]|12|Single color kit colors to try to resolve too similar team kits|
|0x00128ECC|avgSelectedTeamsPlayerPrice|uint16_t|2|Average player price across all selected teams for balanced non-career gameplay.|
|0x00128ECE|gameTeam1|TeamFile*|4||
|0x00128ED2|gameTeam2|TeamFile*|4||
|0x00128ED6|gameRandValue|uint16_t|2||
|0x00128ED8|team1AppPercent|uint16_t|2|Percent of average player prices, compared to<br>average player prices of all selected teams<br>formula: sel. teams app * 100 / this team app + 6|
|0x00128EDA|team2AppPercent|uint16_t|2||
|0x00128EDC|pad_128EDC|uint8_t[34]|34||
|0x00129364|diyEditParamA|uint16_t|2||
|0x00129366|diyEditParamB|uint16_t|2||
|0x00129368|diyEditParamC|uint16_t|2||
|0x00129476|diyTeamShuffleScratch|uint8_t[64]|64||
|0x001297F4|diyShuffleOrder8Teams|uint8_t[8]|8|Index mapping table {1,4,5,0,2,7,6,3} used to reorder 8 teams in DIY competition.|
|0x001297FC|diyShuffleOrder4Teams|uint8_t[4]|4|Index mapping table {0,3,1,2} used to reorder 4 teams in DIY competition.|
|0x001298FC|diyLeagueTeamShuffleMap|int8_t[16]|16|Team index mapping for 16-team DIY league building.|
|0x0012990C|diyGroupPatternLookup|uint8_t[76]|76|Lookup table of 15 entries mapping team group-assignment bitmasks to division ordering.|
|0x00129958|diyTournamentShuffleOrder8|uint8_t[8]|8|Index mapping table for reordering 8 teams in a 2-group DIY tournament.|
|0x00129C42|diyTournamentInitTable|uint16_t[20]|40||
|0x0012A3D6|diyTeamGridRemapTemp|uint8_t[64]|64||
|0x0012A466|diyTeamGridPairSwapTemp|uint8_t[64]|64||
|0x0012B142|euroCupTitleHolderTeamId|uint16_t|2||
|0x0012B144|cupWinnersCupTitleHolderTeamId|uint16_t|2||
|0x0012B146|uefaCupTitleHolderTeamId|uint16_t|2||
|0x0012B148|cachedPrimaryQualifiedTeamIds|uint8_t[18]|18||
|0x0012B15A|cachedSecondaryQualifiedTeamIds|uint8_t[6]|6||
|0x0012B160|cachedTertiaryQualifiedTeamId|uint16_t|2||
|0x0012B162|euroCupEligibleCompetitionIds|uint8_t[17]|17||
|0x0012B173|cupWinnersCupEligibleCompetitionIds|uint8_t[33]|33||
|0x0012B194|uefaCupEligibleCompetitionIds|uint8_t[33]|33||
|0x0012B1B5|currentCompetitionId|uint8_t|1||
|0x0012B1B6|euroCupQualifiedTeamCount|uint16_t|2||
|0x0012B1B8|cupWinnersCupQualifiedTeamCount|uint16_t|2||
|0x0012B1BA|uefaCupQualifiedTeamCount|uint16_t|2||
|0x0012B1BC|euroCupTeamListPtr|uint32_t|4||
|0x0012B1C0|cupWinnersCupTeamListPtr|uint32_t|4||
|0x0012B1C4|uefaCupTeamListPtr|uint32_t|4||
|0x0012B1C8|euroCupTeamListWritePtr|uint32_t|4||
|0x0012B1CC|cupWinnersCupTeamListWritePtr|uint32_t|4||
|0x0012B1D0|uefaCupTeamListWritePtr|uint32_t|4||
|0x0012B1D4|diyQualifiedTeamIndices|uint16_t[16]|32|Buffer receiving team index words during DIY league qualification processing.|
|0x0012C1F4|cupPickOceaniaInviteFriendly|CompetitionCup*[5]|20||
|0x0012C208|cupPickOceaniaOceaniaCupFriendly|CompetitionCup*[5]|20||
|0x0012C21C|cupPickOceaniaWorldCupFriendly|CompetitionCup*[5]|20||
|0x0012C230|cupPickOceaniaWorldCupInvite|CompetitionCup*[5]|20||
|0x0012C244|cupPickOceaniaOceaniaCupNonFinalist|CompetitionCup*[5]|20||
|0x0012C258|cupPickOceaniaOceaniaCupFinalist|CompetitionCup*[5]|20||
|0x0012C302|cupPickNAmericaInviteFriendly|CompetitionCup*[5]|20||
|0x0012C316|cupPickNAmericaNaCupFriendly|CompetitionCup*[5]|20||
|0x0012C32A|cupPickNAmericaWorldCupFriendly|CompetitionCup*[5]|20||
|0x0012C33E|cupPickNAmericaWorldCupInvite|CompetitionCup*[5]|20||
|0x0012C352|cupPickNAmericaNaCupNonFinalist|CompetitionCup*[5]|20||
|0x0012C366|cupPickNAmericaNaCupFinalist|CompetitionCup*[5]|20||
|0x0012C410|cupPickAsiaInviteFriendly|CompetitionCup*[5]|20||
|0x0012C424|cupPickAsiaAsianCupFriendly|CompetitionCup*[5]|20||
|0x0012C438|cupPickAsiaWorldCupFriendly|CompetitionCup*[5]|20||
|0x0012C44C|cupPickAsiaWorldCupInvite|CompetitionCup*[5]|20||
|0x0012C460|cupPickAsiaAsianCupNonFinalist|CompetitionCup*[5]|20||
|0x0012C474|cupPickAsiaAsianCupFinalist|CompetitionCup*[5]|20||
|0x0012C51E|cupPickAfricaInviteFriendly|CompetitionCup*[5]|20||
|0x0012C532|cupPickAfricaAfricanCupFriendly|CompetitionCup*[5]|20||
|0x0012C546|cupPickAfricaWorldCupFriendly|CompetitionCup*[5]|20||
|0x0012C55A|cupPickAfricaWorldCupInvite|CompetitionCup*[5]|20||
|0x0012C56E|cupPickAfricaAfricanCupNonFinalist|CompetitionCup*[5]|20||
|0x0012C582|cupPickAfricaAfricanCupFinalist|CompetitionCup*[5]|20||
|0x0012C62C|cupPickSAmericaInviteFriendly|CompetitionCup*[5]|20||
|0x0012C640|cupPickSAmericaCopaAmericaFriendly|CompetitionCup*[5]|20||
|0x0012C654|cupPickSAmericaWorldCupFriendly|CompetitionCup*[5]|20||
|0x0012C668|cupPickSAmericaWorldCupInvite|CompetitionCup*[5]|20||
|0x0012C67C|cupPickSAmericaCopaAmericaNonFinalist|CompetitionCup*[5]|20||
|0x0012C690|cupPickSAmericaCopaAmericaFinalist|CompetitionCup*[5]|20||
|0x0012C802|ecQualifyingGroupsTable|CompetitionCup*[8]|32||
|0x0012C822|cupPickEuropeNoCupFriendly|CompetitionCup*[5]|20||
|0x0012C836|cupPickListEuropeInviteTournamentFriendly|CompetitionCup*[5]|20||
|0x0012C84A|cupPickLisEuropeEuroChampsFriendly|CompetitionCup*[5]|20||
|0x0012C85E|cupPickListEuropeEuroChampsInviteFriendly|CompetitionCup*[5]|20||
|0x0012C872|cupPickListEuropeWorldCupFriendly|CompetitionCup*[5]|20||
|0x0012C886|cupPickLisEuropeWorldCupInviteFriendly|CompetitionCup*[5]|20||
|0x0012C89A|cupPickEuropeNoCupFriendlyAlt|CompetitionCup*[5]|20||
|0x0012C8AE|cupPickListEuropeInviteTournamentFriendlyAlt|CompetitionCup*[5]|20||
|0x0012CAF0|worldCupQualifyingGroupsTable|CompetitionCup*[8]|32||
|0x0012CC98|tourStringTable|int8_t*[6]|24||
|0x0012CE70|competitionTeamIdScratchList4|uint64_t|8||
|0x0012E896|careerTeamFlagsByRegionTable|uint8_t*[6]|24||
|0x0012F0EA|diyFoundTeamIndex|uint16_t|2||
|0x0012F0EC|diyCompHasGroupStage|uint16_t|2|Boolean flag for whether the DIY competition has a group/seeded stage.|
|0x0012F0EE|findTeamInDIY_SuppressSideEffectsFlag|uint16_t|2||
|0x0012F6E0|careerAutoAdvanceInProgress|uint16_t|2||
|0x0012F6E2|pl1Coach|uint16_t|2||
|0x0012F6E4|pl2Coach|uint16_t|2||
|0x0012F6E6|topTeamCoachNo|uint16_t|2||
|0x0012F6E8|bottomTeamCoachNo|uint16_t|2||
|0x0012F6EA|topTeamPlayerNo|uint16_t|2||
|0x0012F6EC|bottomTeamPlayerNo|uint16_t|2||
|0x0012F6EE|plgD0Param|uint16_t|2||
|0x0012F6F0|isGameFriendly|uint16_t|2||
|0x0012F6F2|playing2ndGame|uint16_t|2||
|0x0012F6F4|secondLeg|uint16_t|2||
|0x0012F6F6|gamePitchTypeOrSeason|uint16_t|2||
|0x0012F6F8|gamePitchType|uint16_t|2||
|0x0012F6FA|gameSeason|uint16_t|2||
|0x0012F6FC|gameCanceled|uint16_t|2||
|0x0012F6FE|pl1Tactics|uint16_t|2||
|0x0012F700|pl2Tactics|uint16_t|2||
|0x0012F702|team1Computer|uint16_t|2||
|0x0012F704|team2Computer|uint16_t|2||
|0x0012F706|gameLengthInGame|uint16_t|2||
|0x0012F708|extraTimeState|uint16_t|2||
|0x0012F70A|penaltiesState|uint16_t|2||
|0x0012F70C|team1GoalsFirstLeg|uint16_t|2||
|0x0012F70E|team2GoalsFirstLeg|uint16_t|2||
|0x0012F710|team1PenaltyGoals|uint16_t|2||
|0x0012F712|team2PenaltyGoals|uint16_t|2||
|0x0012F714|maxSubsPerTeam|uint16_t|2||
|0x0012F716|gameMaxSubstitutes|uint16_t|2||
|0x0012F718|plgD3Param|uint16_t|2||
|0x0012F71A|hilStarted|uint16_t|2||
|0x0012F71C|team1NumAllowedInjuries|uint16_t|2||
|0x0012F71E|team2NumAllowedInjuries|uint16_t|2||
|0x0012FACE|animPatternsRandomTable|uint8_t[64]|64||
|0x0012FB0E|animatedPatterns|uint8_t[16]|16||
|0x0012FB1E|patternsGoalCounter|uint16_t|2||
|0x0012FB20|showFansCounter|uint16_t|2||
|0x0012FB22|animPatternsIndex|uint16_t|2||
|0x0012FB24|patternStatic|uint16_t|2||
|0x0012FB26|otherTeamScored|uint16_t|2||
|0x0012FB28|animPatternsState|uint16_t|2||
|0x0012FF94|trainingGame|uint16_t|2||
|0x0012FF96|teamAName|uint8_t[17]|17||
|0x0012FFA7|teamBName|uint8_t[17]|17||
|0x001301EA|trainingPosOrderTables|uint8_t*[8]|32||
|0x0013020A|trainingPosOrder0|uint8_t[9]|9|Training position priority order for outfield position 0, 0xFF-terminated.|
|0x00130213|trainingPosOrder1|uint8_t[9]|9|Training position priority order for outfield position 1, 0xFF-terminated.|
|0x0013021C|trainingPosOrder2|uint8_t[9]|9|Training position priority order for outfield position 2, 0xFF-terminated.|
|0x00130225|trainingPosOrder3|uint8_t[9]|9|Training position priority order for outfield position 3, 0xFF-terminated.|
|0x0013022E|trainingPosOrder4|uint8_t[9]|9|Training position priority order for outfield position 4, 0xFF-terminated.|
|0x00130237|trainingPosOrder5|uint8_t[9]|9|Training position priority order for outfield position 5, 0xFF-terminated.|
|0x00130240|trainingPosOrder6|uint8_t[9]|9|Training position priority order for outfield position 6, 0xFF-terminated.|
|0x00130249|trainingPosOrder7|uint8_t[9]|9|Training position priority order for outfield position 7, 0xFF-terminated.|
|0x001303DC|trialPlayerPositionTable|int8_t[12]|12||
|0x00130694|chooseTeamsFriendlyMenu|Menu_ChooseTeamsFriendly|970|On init function|
|0x00130F86|bureaucracyMenuItems|int16_t[5]|10|Array of menu item indices (58, 57, 55, 0, -1) for the Bureaucracy menu screen.|
|0x00131124|chooseTeamsFriendly_leftListNumEntries|uint16_t|2||
|0x00131126|chooseTeamsFriendly_middleListNumEntries|uint16_t|2||
|0x00131128|chooseTeamsFriendly_rightListNumEntries|uint16_t|2||
|0x0013112A|chooseTeamsFriendly_numTeamsInLeagueList|uint16_t|2||
|0x0013112C|chooseTeamsFriendly_menuTopY|uint16_t|2||
|0x0013112E|chooseTeamsFriendly_menuBottomY|uint16_t|2||
|0x00131130|selectedTeamPtr|uint32_t|4|Pointer to currently selected team|
|0x00131134|selectedTeamCountryNumber|uint16_t|2|Country number of currently selected team|
|0x00131136|chooseTeamsResult|uint16_t|2|When loading team files, 0 means error<br>when selecting teams 0 means exiting, 1 = play match<br>in SelectTeamsFinalMenu: 0 = continue, !0 = abort|
|0x00131138|changeTeams|uint16_t|2|Write only|
|0x0013113A|viewSelectedTeams|uint16_t|2|These vars get set to 0 when selecting teams<br>from list just before the game|
|0x0013113C|abortSelectTeams|uint16_t|2|= 1 When exit choose teams|
|0x0013113E|exitSelectTeams|uint16_t|2||
|0x001311BC|chooseTeamsFriendlyMenu2|Menu_ChooseTeamsFriendly2|1252|On init function|
|0x00131A4E|chooseTeamsFriendly_changeTeamsPromptDrawList|uint64_t|8||
|0x00131C1E|viewTeamsColumn1|uint16_t|2|Number of teams in columns 1 when selecting teams|
|0x00131C20|viewTeamsColumn2|uint16_t|2||
|0x00131C22|viewTeamsColumn3|uint16_t|2||
|0x00131C24|selTeamsUpperBound|uint16_t|2||
|0x00131C26|viewTeamsStartY|uint16_t|2|Y coordinate for start of teams|
|0x00131C28|viewTeamsAbortY|uint16_t|2||
|0x00131C2A|teamNumbersIndices|uint8_t[64]|64|For every team that is copied into array below,<br>its index is copied here.|
|0x00131C6A|numSelectedTeamsCopy|uint16_t|2||
|0x00131CF4|designDiyLeagueMenu|Menu_DesignDIYLeague|606|On init function|
|0x00131F52|diyPitchTypeOrSeasonStrTable|uint32_t|4||
|0x00131F60|diyLeaguePitchTypeStrTable|uint32_t|4||
|0x00131F86|diyLeagueMonthsStrTable|uint32_t|4||
|0x00131FBC|diyLeagueEndingMonthStrTable|uint32_t|4||
|0x00131FF2|asc_131FF2|uint16_t|2||
|0x001324BC|diyPitchTypeOrSeason_1|uint16_t|2||
|0x001324BE|diyLeagueStartingMonth|uint16_t|2||
|0x001324C0|diyLeagueEndingMonth|uint16_t|2||
|0x001324C2|diyLeagueLookOnly|uint16_t|2||
|0x001324C4|diyLeagueSelectTeams|uint16_t|2||
|0x001324C6|DIY_leagueTournamentMenu|Menu_DIY_LeagueTournament|984|On init function|
|0x0013323C|groupStringTable|int8_t*[8]|32||
|0x00133308|diyLeagueTournament_viewOptionsAvailable|uint16_t|2||
|0x0013330A|diyLeagueTournament_fixtureRowHeight|uint16_t|2||
|0x0013330C|diyLeagueTournament_fixtureRowYStep|uint16_t|2||
|0x0013330E|numDiyResults|uint16_t|2|For scrolling and display|
|0x00133310|currentDiyLine|uint16_t|2|When scrolling results|
|0x00133312|diyFixtureViewMode|uint16_t|2|DIY league fixture display mode: 0=hidden, 1=show current, -1=show results.|
|0x00133314|diyTournamentViewOnly|uint16_t|2|When set, hides action menu entries and restricts to view-only mode.|
|0x00133316|diyTournamentType|uint16_t|2|Original competition type parameter saved by ShowDiyLeaguesTournamentMenu.|
|0x00133318|diyInitFocusOverride|uint16_t|2|When set, overrides initial menu focus to entry 10, then self-clears.|
|0x0013331A|diyAllMatchesPlayed|uint16_t|2|Flag set to 1 when all DIY matches in the current round have been played.|
|0x0013331C|diyLeftTeamPtr|uint32_t|4||
|0x00133320|diyRightTeamPtr|uint32_t|4||
|0x00133324|diyLeftTeamResult|uint16_t|2||
|0x00133326|diyRightTeamResult|uint16_t|2||
|0x00133328|pad_133328|uint16_t|2||
|0x001333B2|designDiyCupMenu|Menu_DesignDIYCup|1316|On init function|
|0x001338D6|diyCupLegsChoice0|uint16_t|2||
|0x001338D8|diyCupExtraTimeChoice0|uint16_t|2||
|0x001338DA|diyCupPenaltiesChoice0|uint16_t|2||
|0x001338DC|diyCupLegsChoice1|uint16_t|2||
|0x001338DE|diyCupExtraTimeChoice1|uint16_t|2||
|0x001338E0|diyCupPenaltiesChoice1|uint16_t|2||
|0x001338E2|diyCupLegsChoice2|uint16_t|2||
|0x001338E4|diyCupExtraTimeChoice2|uint16_t|2||
|0x001338E6|diyCupPenaltiesChoice2|uint16_t|2||
|0x001338E8|diyCupLegsChoice3|uint16_t|2||
|0x001338EA|diyCupExtraTimeChoice3|uint16_t|2||
|0x001338EC|diyCupPenaltiesChoice3|uint16_t|2||
|0x001338EE|diyCupLegsChoice4|uint16_t|2||
|0x001338F0|diyCupExtraTimeChoice4|uint16_t|2||
|0x001338F2|diyCupPenaltiesChoice4|uint16_t|2||
|0x001338F4|diyCupLegsChoice5|uint16_t|2||
|0x001338F6|diyCupExtraTimeChoice5|uint16_t|2||
|0x001338F8|diyCupPenaltiesChoice5|uint16_t|2||
|0x001338FA|diyCupPitchTypeOrSeasonStringTable|uint32_t|4||
|0x00133908|diyCupPitchTypeStringTable|uint32_t|4||
|0x0013392E|diyCupStartMonthStringTable|uint32_t|4||
|0x00133964|diyCupEndMonthStringTable|uint32_t|4||
|0x0013399A|diyCupAwayGoalsStringTable|uint32_t|4||
|0x001339AC|diyCupLegsStringTable0|uint32_t|4||
|0x001339BE|diyCupLegsStringTable1|uint32_t|4||
|0x001339D0|diyCupLegsStringTable2|uint32_t|4||
|0x001339E2|diyCupLegsStringTable3|uint32_t|4||
|0x001339F4|diyCupLegsStringTable4|uint32_t|4||
|0x00133A06|diyCupLegsStringTable5|uint32_t|4||
|0x00133A18|diyCupExtraTimeStringTable0|uint32_t|4||
|0x00133A2A|diyCupExtraTimeStringTable1|uint32_t|4||
|0x00133A3C|diyCupExtraTimeStringTable2|uint32_t|4||
|0x00133A4E|diyCupExtraTimeStringTable3|uint32_t|4||
|0x00133A60|diyCupExtraTimeStringTable4|uint32_t|4||
|0x00133A72|diyCupExtraTimeStringTable5|uint32_t|4||
|0x00133A84|diyCupPenaltiesStringTable0|uint32_t|4||
|0x00133A96|diyCupPenaltiesStringTable1|uint32_t|4||
|0x00133AA8|diyCupPenaltiesStringTable2|uint32_t|4||
|0x00133ABA|diyCupPenaltiesStringTable3|uint32_t|4||
|0x00133ACC|diyCupPenaltiesStringTable4|uint32_t|4||
|0x00133ADE|diyCupPenaltiesStringTable5|uint32_t|4||
|0x00133AF0|aHyphen|uint16_t|2||
|0x0013407E|diyCupPitchTypeOrSeasonSelection|uint16_t|2||
|0x00134080|diyCupStartMonthIndex|uint16_t|2||
|0x00134082|diyCupEndMonthIndex|uint16_t|2||
|0x00134084|diyCupLookOnly|uint16_t|2||
|0x00134086|diyCupSelectTeams|uint16_t|2||
|0x00134088|DIY_cupMenu|Menu_DIY_cup|1058|On init function|
|0x001350AE|diyCupMatchListScrollIndex|uint16_t|2||
|0x001350B0|diyCupMenuArg0Copy|uint16_t|2||
|0x001350B2|diyCupMenuArg1|uint16_t|2||
|0x001350B4|diyCupMenuArg0|uint16_t|2||
|0x001350B6|diyCupMenuArg2|uint16_t|2||
|0x001350B8|diyCupMatchTeamNamePtr1|uint32_t|4||
|0x001350BC|diyCupMatchTeamNamePtr2|uint32_t|4||
|0x001350C0|diyCupMatchListDrawModeFlag|uint16_t|2||
|0x001350C2|diyCupLastMatchTeam1Ptr|uint32_t|4||
|0x001350C6|diyCupLastMatchTeam2Ptr|uint32_t|4||
|0x001350CA|diyCupLastMatchScoreTeam1|uint16_t|2||
|0x001350CC|diyCupLastMatchScoreTeam2|uint16_t|2||
|0x00135140|optionsMenu|Menu_Options|386|On init function|
|0x001352C2|pitchTypeStrTable|uint8_t*|4||
|0x001352EC|gameLengthStrTable|uint8_t*|4||
|0x00135302|autoReplaysStrTable|uint8_t*|4||
|0x00135310|allPlTeamsEqualStrTable|uint8_t*|4||
|0x0013531E|autoSaveHlStrTable|uint8_t*|4||
|0x0013532C|menuMusicStrTable|uint8_t*|4||
|0x001353FA|showPrereleaseCounter|uint16_t|2||
|0x0013543A|designDiyTournamentMenu|Menu_DesignDiyTournament|2336|On init function|
|0x00135D5A|diyTournamentStages|DIYStage[6]|60||
|0x00135D96|asc_135D96|uint16_t|2||
|0x00135D98|aStar|uint16_t|2||
|0x00135D9A|asc_135D9A|uint16_t|2||
|0x00135DA8|diyPitchSeasonStrTab|uint32_t|4|Menu string table for DIY pitch type vs season toggle.|
|0x00135DB6|diyPitchTypeStringTable|uint32_t|4||
|0x00135DDC|diyStartMonthStrTab|uint32_t|4|Menu string table for DIY tournament start month.|
|0x00135E12|diyEndMonthStrTab|uint32_t|4|Menu string table for DIY tournament end month.|
|0x00135E48|diyAwayGoalsStrTab|uint32_t|4|Menu string table for DIY away goals rule.|
|0x00135E5A|diyStage1LegsStrTab|uint32_t|4|Menu string table for stage 1 legs option.|
|0x00135E6C|diyStage2LegsStrTab|uint32_t|4|Menu string table for stage 2 legs option.|
|0x00135E7E|diyStage3LegsStrTab|uint32_t|4|Menu string table for stage 3 legs option.|
|0x00135E90|diyStage4LegsStrTab|uint32_t|4|Menu string table for stage 4 legs option.|
|0x00135EA2|diyStage5LegsStrTab|uint32_t|4|Menu string table for stage 5 legs option.|
|0x00135EB4|diyStage6LegsStrTab|uint32_t|4|Menu string table for stage 6 legs option.|
|0x00135EC6|diyStage1ExtraTimeStrTab|uint32_t|4||
|0x00135ED8|diyStage2ExtraTimeStrTab|uint32_t|4||
|0x00135EEA|diyStage3ExtraTimeStrTab|uint32_t|4||
|0x00135EFC|diyStage4ExtraTimeStrTab|uint32_t|4||
|0x00135F0E|diyStage5ExtraTimeStrTab|uint32_t|4||
|0x00135F20|diyStage6ExtraTimeStrTab|uint32_t|4||
|0x00135F32|diyStage1PenaltiesStrTab|uint32_t|4||
|0x00135F44|diyStage2PenaltiesStrTab|uint32_t|4||
|0x00135F56|diyStage3PenaltiesStrTab|uint32_t|4||
|0x00135F68|diyStage4PenaltiesStrTab|uint32_t|4||
|0x00135F7A|diyStage5PenaltiesStrTab|uint32_t|4||
|0x00135F8C|diyStage6PenaltiesStrTab|uint32_t|4||
|0x00135F9E|diyStage1PtsForWinStrTab|uint32_t|4||
|0x00135FAC|diyStage2PtsForWinStrTab|uint32_t|4||
|0x00135FBA|diyStage3PtsForWinStrTab|uint32_t|4||
|0x00135FC8|diyStage4PtsForWinStrTab|uint32_t|4||
|0x00135FD6|diyStage5PtsForWinStrTab|uint32_t|4||
|0x00135FE4|diyStage6PtsForWinStrTab|uint32_t|4||
|0x00135FF2|diyStage1PlayCountStrTab|uint32_t|4||
|0x00136008|diyStage2PlayCountStrTab|uint32_t|4||
|0x0013601E|diyStage3PlayCountStrTab|uint32_t|4||
|0x00136034|diyStage4PlayCountStrTab|uint32_t|4||
|0x0013604A|diyStage5PlayCountStrTab|uint32_t|4||
|0x00136060|diyStage6PlayCountStrTab|uint32_t|4||
|0x00136D12|diyTournamentUseSeasonalPitchEffective|uint16_t|2||
|0x00136D14|diyTournamentStartMonthPage|uint16_t|2||
|0x00136D16|diyTournamentEndMonthPage|uint16_t|2||
|0x00136D18|diyTournamentLookOnly|uint16_t|2||
|0x00136D1A|diyTournamentSelectTeams|uint16_t|2||
|0x00136D1C|diyTournamentSelectedStagePtr|uint32_t|4||
|0x00136D20|diyTournamentSelectedStageIndex1Based|uint16_t|2||
|0x00136D22|diyTournamentPrevValueBackup|uint16_t|2||
|0x00136D24|diyCompetitionMenu|uint32_t|4|On init function|
|0x00136DF8|diySelected|uint16_t|2|0  - League<br>1  - cup<br>2  - tournament<br>-1 - leave DIY menu|
|0x00136DFA|pad_136DFA|uint8_t[70]|70||
|0x00136EC8|friendlyGameMenu|Menu_FriendlyGame|302|On init function|
|0x00136FF6|pitchTypeOrSeasonTable|uint32_t|4||
|0x00137004|friendlyPitchTypeTable|uint32_t|4||
|0x0013702A|friendly_season_table|uint32_t|4||
|0x001372D0|friendlyOk|uint16_t|2|Initialised to 0<br>set to 1 when ok is selected in friendly game menu|
|0x001372D2|pitchTypeOrSeason|uint16_t|2|0 = Pitch type<br>1 = season<br>(in menu)|
|0x001372D4|friendlyPitchType|uint16_t|2|-1 = Random<br> 0 = frozen<br> 1 = muddy<br> 2 = wet<br> 3 = soft<br> 4 = normal<br> 5 = dry<br> 6 = hard|
|0x001372D6|friendlySeason|uint16_t|2|0  = JAN<br>1  = FEB<br>2  = MAR<br>3  = APR<br>4  = MAY<br>5  = JUN<br>6  = JUL<br>7  = AUG<br>8  = SEP<br>9  = OCT<br>10 = NOV<br>11 = DEC|
|0x001372D8|minSubstitutes|uint16_t|2||
|0x001372DA|maxSubstitutes|uint16_t|2||
|0x001373A8|editTeamsMenu|Menu_EditTeams|1654|On init function|
|0x00137A1E|editTeamsPrimaryShirts|Sprites[2]|4||
|0x00137A22|editTeamsPrimaryShirtColTable|uint8_t[32]|32||
|0x00137A42|editTeamsShorts|Sprites[2]|4||
|0x00137A46|editTeamsShortsColTable|uint8_t[32]|32||
|0x00137A66|editTeamsSocks|Sprites[2]|4||
|0x00137A6A|editTeamsSocksColTable|uint8_t[32]|32||
|0x00137A8A|editTeamsSecondaryShirt|Sprites[2]|4||
|0x00137A8E|editTeamsSecondaryShirtColTable|uint8_t[32]|32||
|0x00137AAE|editTeamsSecondaryShorts|Sprites[2]|4||
|0x00137AB2|editTeamsSecondaryShortsColTable|uint8_t[32]|32||
|0x00137AD2|editTeamsSecondarySocks|Sprites[2]|4||
|0x00137AD6|editTeamsSecondarySocksColTable|uint8_t[32]|32||
|0x00137AF6|shirtTypesTable|uint8_t[64]|64||
|0x00137B36|shirtsIndexTable|uint8_t[16]|16||
|0x001382EE|editTeamsSelectedTeam|uint32_t|4||
|0x001382F2|saveCustomTeams|uint16_t|2|If 1, dialog and everything is for saving (teams)<br>1 => save custom teams (show dialog)<br>set when in edit teams ok is pressed, and<br>edited and original teams differ|
|0x001382F4|teamIsImported|uint16_t|2|In edit custom teams menu.|
|0x001385D8|competitionTopGoalScorersMenu|Menu_CompetitionTopGoalScorers|750|On init function|
|0x0013899E|topGoalScorersMenu|Menu_TopGoalScorers|422|On init function|
|0x00138D58|diyStatsName|uint32_t|4||
|0x00138E18|topSkillLettersEven|uint8_t[28]|28|Pointers to skill letter strings (even variant) per position group.|
|0x00138E34|topSkillLettersOdd|uint8_t[28]|28|Pointers to skill letter strings (odd variant) per position group.|
|0x00138E50|topSkillBitRotEven|uint8_t[28]|28|Pointers to bit-rotation arrays (even variant) per position group.|
|0x00138E6C|topSkillBitRotOdd|uint8_t[28]|28|Pointers to bit-rotation arrays (odd variant) per position group.|
|0x00138E88|skillBitRotEven1|uint8_t[7]|7|Bit-rotation priority for position group 1 (even variant).|
|0x00138E8F|skillBitRotOdd1|uint8_t[7]|7|Bit-rotation priority for position group 1 (odd variant).|
|0x00138E96|skillBitRotEven2|uint8_t[7]|7|Bit-rotation priority for position group 2 (even variant).|
|0x00138E9D|skillBitRotOdd2|uint8_t[7]|7|Bit-rotation priority for position group 2 (odd variant).|
|0x00138EA4|skillBitRotEven3|uint8_t[7]|7|Bit-rotation priority for position group 3 (even variant).|
|0x00138EAB|skillBitRotOdd3|uint8_t[7]|7|Bit-rotation priority for position group 3 (odd variant).|
|0x00138EB2|skillBitRotEven4|uint8_t[7]|7|Bit-rotation priority for position group 4 (even variant).|
|0x00138EB9|skillBitRotOdd4|uint8_t[7]|7|Bit-rotation priority for position group 4 (odd variant).|
|0x00138EC0|skillBitRotEven5|uint8_t[7]|7|Bit-rotation priority for position group 5 (even variant).|
|0x00138EC7|skillBitRotOdd5|uint8_t[7]|7|Bit-rotation priority for position group 5 (odd variant).|
|0x00138ECE|skillBitRotEven6|uint8_t[7]|7|Bit-rotation priority for position group 6 (even variant).|
|0x00138ED5|skillBitRotOdd6|uint8_t[7]|7|Bit-rotation priority for position group 6 (odd variant).|
|0x00138EDC|skillBitRotEven7|uint8_t[7]|7|Bit-rotation priority for position group 7 (even variant).|
|0x00138EE3|skillBitRotOdd7|uint8_t[9]|9|Bit-rotation priority for position group 7 (odd variant).|
|0x0013904C|posSearchOrderPtrs|uint8_t*[8]|32|Array of 8 pointers to position search order arrays by position type.|
|0x0013906C|posSearchOrderGk|uint8_t[9]|9|Position search fallback order for Gk, 0xFF-terminated.|
|0x00139075|posSearchOrderRb|uint8_t[9]|9|Position search fallback order for Rb, 0xFF-terminated.|
|0x0013907E|posSearchOrderLb|uint8_t[9]|9|Position search fallback order for Lb, 0xFF-terminated.|
|0x00139087|posSearchOrderDef|uint8_t[9]|9|Position search fallback order for Def, 0xFF-terminated.|
|0x00139090|posSearchOrderRight|uint8_t[9]|9|Position search fallback order for Right, 0xFF-terminated.|
|0x00139099|posSearchOrderLeft|uint8_t[9]|9|Position search fallback order for Left, 0xFF-terminated.|
|0x001390A2|posSearchOrderMid|uint8_t[9]|9|Position search fallback order for Mid, 0xFF-terminated.|
|0x001390AB|posSearchOrderAtt|uint8_t[9]|9|Position search fallback order for Att, 0xFF-terminated.|
|0x001390B4|posFilledFlags|uint8_t[12]|12|Working buffer for position-filled tracking during auto-squad selection.|
|0x001390C0|tacticPosMapPtrs|uint8_t*[18]|72|Array of 18 pointers to 11-byte tactic position maps.|
|0x00139108|tacticPosMap0|uint8_t[11]|11|Position group mapping for tactic 0.|
|0x00139113|tacticPosMap1|uint8_t[11]|11|Position group mapping for tactic 1.|
|0x0013911E|tacticPosMap2|uint8_t[11]|11|Position group mapping for tactic 2.|
|0x00139129|tacticPosMap3|uint8_t[11]|11|Position group mapping for tactic 3.|
|0x00139134|tacticPosMap4|uint8_t[11]|11|Position group mapping for tactic 4.|
|0x0013913F|tacticPosMap5|uint8_t[11]|11|Position group mapping for tactic 5.|
|0x0013914A|tacticPosMap6|uint8_t[11]|11|Position group mapping for tactic 6.|
|0x00139155|tacticPosMap7|uint8_t[11]|11|Position group mapping for tactic 7.|
|0x00139160|tacticPosMap8|uint8_t[11]|11|Position group mapping for tactic 8.|
|0x0013916B|tacticPosMap9|uint8_t[11]|11|Position group mapping for tactic 9.|
|0x00139176|tacticPosMap10|uint8_t[11]|11|Position group mapping for tactic 10.|
|0x00139181|tacticPosMap11|uint8_t[11]|11|Position group mapping for tactic 11.|
|0x00139224|squadMenu|Menu_Squad|1004|On init function|
|0x00139A3C|squad45MenuItemList|int16_t[3]|6||
|0x0013A6DE|squadRowMode|uint16_t|2||
|0x0013A6E0|isSquadViewMode|uint16_t|2||
|0x0013A6E2|squadSelectedPlayerPtr|uint32_t|4||
|0x0013A6E6|squadSelectedPlayerIndex|uint16_t|2||
|0x0013A6E8|squadDisplayCount|uint16_t|2|Number of player slots to display in squad screen.|
|0x0013A6EA|squadTeamFilePtr|uint32_t|4||
|0x0013A6EE|teamSkillDiffAfterChange|uint16_t|2||
|0x0013A6F0|squadPrevSelectedPlayerIndex|uint16_t|2||
|0x0013A6F2|squadPrevSelectedBreakPos|uint16_t|2||
|0x0013A6F4|squadPrevHighlightedMenuEntryPtr|uint32_t|4||
|0x0013A6F8|isNationalSquad|uint16_t|2|SquadInit sets this|
|0x0013AA8C|competitionStatsMenu|uint32_t|4|On init function|
|0x0013AB76|diyCompetitionType|uint16_t|2||
|0x0013AB78|diyUnknownWord_2C|uint16_t|2||
|0x0013AB7A|diyNameOfCompetitionPtr|uint32_t|4||
|0x0013AB7E|diyTeamsBufferPtr|uint32_t|4||
|0x0013AB82|diyNumberOfTeams|uint16_t|2||
|0x0013AB84|careerOverMenu|Menu_CareerOver|228|On init function|
|0x0013B00C|careerMenu|Menu_Career|332|On init function|
|0x0013B158|nationalityOrdinalsArray|uint8_t[64]|64||
|0x0013B198|offsetCoachOrPlayer|uint32_t|4||
|0x0013B35E|nationalityOrdinal|uint8_t|1||
|0x0013B35F|pad_13B35F|uint8_t|1||
|0x0013B360|viewCompetitionsMenu|Menu_ViewCompetitions|248|On init function|
|0x0013B698|contestMenu|Menu_Contest|812|On init function|
|0x0013CAA0|teamSelectionKeyCache_ListIndex|uint16_t|2||
|0x0013CAA2|currentGame|uint16_t|2|When showing games list in career basic menu|
|0x0013CAA4|teamSelectionKeyCache_ListCount|uint16_t|2||
|0x0013CAA6|savedContestListIndex|uint16_t|2|Saved list index for restoring contest scroll position; -1 when none.|
|0x0013CAA8|savedContestGameOffset|uint16_t|2|Saved game offset within a contest entry for restoring scroll position.|
|0x0013CAAA|savedContestEntryPtr|uint8_t*|4|Pointer to the active contest entry in team selection key cache.|
|0x0013CAAE|savedContestRoundPtr|uint8_t*|4|Pointer to the active round/game entry within a contest.|
|0x0013CAB2|careerGameTopTeamName|uint32_t|4|In career game list|
|0x0013CAB6|careerGameBottomTeamName|uint32_t|4|In career game list|
|0x0013CABA|cglm_team_control|uint16_t|2|In career game list, 0 = computer, -1 = player|
|0x0013CABC|columnMarker|uint16_t|2|Y coordinate when drawing games list|
|0x0013CABE|cglmVar3|uint16_t|2|Some flag|
|0x0013CAC0|gameListY|uint16_t|2||
|0x0013CAC2|contestEntryHeight|uint16_t|2||
|0x0013CAC4|gameListArray|uint8_t[112]|112||
|0x0013CB34|managementRecordMenu|Menu_ManagementRecord|336|On init function|
|0x0013D2FC|trophySprites|uint8_t[20]|20||
|0x0013D310|currentSeasonNumber|uint16_t|2|When showing management record menu|
|0x0013D85A|selectTeamsForTacticsMenu|Menu_SelectTeamsForTactics|1076|On init function|
|0x0013DEC8|chooseTeamMenuName|uint32_t|4|Pointer to name of menu when selecting team for<br>edit tactics|
|0x0013DECC|teamSelected|uint16_t|2|Number of team selected for edit tactics and<br>competition/view teams|
|0x0013DECE|selTeamsColumn1|uint16_t|2|Number of teams in column|
|0x0013DED0|selTeamsColumn2|uint16_t|2||
|0x0013DED2|selTeamsColumn3|uint16_t|2||
|0x0013DED4|numTeamsCountryBuffer|uint16_t|2||
|0x0013DED6|selTeamsListTopY|uint16_t|2||
|0x0013DED8|selTeamsListBottomY|uint16_t|2||
|0x0013DEDA|indexCountries|uint8_t[64]|64||
|0x0013EAC6|choosingPreset|uint16_t|2|Set to true when select teams menu is used for selecting<br>preset competition|
|0x0013EBA2|selectTeamsMenu|Menu_SelectTeams|1444|On init function|
|0x0013F780|lastSelectedTeam|uint16_t|2|Index of last selected team (or league) for game|
|0x0013F782|selectedTeamIndex|uint16_t|2|When selecting teams from list just before the game,<br>after special treatment, index is saved here|
|0x0013F784|selectedLeagueIndex|uint16_t|2|Selected league in select_teams_menu|
|0x0013F786|selectedTeamText|uint32_t|4|When selecting teams or leagues from list just before<br>the game, pointer to entry's text is saved here|
|0x0013F78A|selectedContest|uint32_t|4||
|0x0013F78E|contestLeagueNumber|uint16_t|2|League number persisted for career/season context.|
|0x0013F790|prevSelectedTeamEntry|uint16_t|2||
|0x0013F792|gameTypeStr|uint32_t|4|Game type string for header in choose teams menu|
|0x0013F796|curCountryStr|uint32_t|4|Gets set by GetCountryName|
|0x0013F79A|teamNames|uint8_t[40]|40|Pointers to remaining team names set when<br>getting teams from menu|
|0x0013F7C2|countryNames|uint8_t[256]|256|When selecting country from continent in choose teams menu|
|0x0013F8C2|numLeaguesInCountry|uint16_t|2|Number of leagues in currently selected country (0 for continents)|
|0x0013F8C4|chooseTeamsNumTeams|uint16_t|2|Number of teams to show in a menu|
|0x0013F8C6|startingTeamIndex|uint16_t|2||
|0x0013F8C8|teamsLowerBound|uint16_t|2|Do not show teams with ordinals less than this in choose teams menu|
|0x0013F8CA|numTeamsColumn1|uint16_t|2|Number of teams in columns in select teams menu|
|0x0013F8CC|numTeamsColumn2|uint16_t|2||
|0x0013F8CE|numTeamsColumn3|uint16_t|2||
|0x0013F8D0|headerYPlusHeight|uint16_t|2||
|0x0013F8D2|exitY|uint16_t|2||
|0x0013F8D4|teamDepthLevel|uint16_t|2|Current depth level when selecting teams through<br>continents, countries...|
|0x0013F8D6|topOfStackMark|uint16_t|2|Marks top of stack when making selection of teams|
|0x0013F8D8|countryStackPtr|uint32_t|4||
|0x0013F8DC|countriesStack|uint8_t[10]|10||
|0x0013F8E6|selectedTeamsStack|uint8_t[20]|20|Enables returning through menus when selecting teams|
|0x0013F8FA|leaguesPtrTable|uint8_t[40]|40||
|0x0013F922|leagueNumbersTable|uint8_t[20]|20||
|0x0013F936|isContestContinentalCup|uint16_t|2||
|0x0013F938|isCountryNumber|uint16_t|2||
|0x0013F93A|countryNumber|uint16_t|2||
|0x0013F93C|gotCountryName|uint16_t|2||
|0x0013F93E|loadTeam|uint16_t|2|Questionable name|
|0x0013F940|showCupsAndOther|uint16_t|2|Flag, if true cups and other competitions will be shown when<br>selecting teams (or contests) in SelectTeamsFinalMenu,<br>otherwise only leagues|
|0x0013F942|playSeason|uint16_t|2|Flag<br>questionable name|
|0x0013F944|chooseCompetitionOnly|uint16_t|2|When set, selecting a contest skips team selection and returns immediately.|
|0x0013F946|teamsType|uint16_t|2|0 = National teams<br>1 = club teams<br>2 = original custom teams<br>3 = edited custom teams<br>-1 = none<br>set by chooseTeamsMenu|
|0x0013F948|showClubTeams|uint16_t|2|Controls appearance of clubs item while choosing teams type<br>0 = don't show it, !0 = show it|
|0x0013F94A|showNationalTeams|uint16_t|2||
|0x0013F94C|showOrigCustomTeams|uint16_t|2||
|0x0013F94E|numberOfLeagues|uint16_t|2||
|0x0013F950|stayInSelectTeams|uint16_t|2||
|0x0013F952|exitFlag|uint16_t|2|If not zero, exit select teams menu|
|0x0013F954|leagueNumber|uint16_t|2||
|0x0013F956|playWhatStr|uint32_t|4||
|0x0013F95A|chooseTeamsHeader1stPart|uint32_t|4|First part of header for choose teams menu<br>0 = default ("CHOOSE TEAMS FOR")|
|0x0013F95E|entryText2|uint32_t|4||
|0x0013F962|chooseTeamsFunc|uint32_t|4||
|0x0013F966|careerSquadScreenDidSelectPlayerFlag|uint16_t|2||
|0x0013F968|selectTeamsNoLimit|uint16_t|2|!0 = No teams selected<br>0  = there is at least one team selected<br>in select_teams_menu when this is true, team limitation is honoured<br>(num_needed_teams)|
|0x0013F96A|numNeededTeams|uint16_t|2|Number of teams needed to select, before play game|
|0x0013F96C|chooseTeamsMenu|Menu_ChooseTeams|190|On init function|
|0x0013FE28|selectFilesMenu|Menu_SelectFiles|862|On init function|
|0x001405C6|totalNumberOfFiles|uint16_t|2|Total number of files in game directory|
|0x001405C8|savingFile|uint16_t|2|0 = Not saving file|
|0x001405CA|menuTitle|uint32_t|4|Contains title for select files menu|
|0x001405CE|extension|uint32_t|4|Extension for select files menu|
|0x001405D2|foundFilesPtrTable|uint8_t[180]|180|Extension for select files menu|
|0x00140686|extensionsBuffer|uint8_t[180]|180|Array of file extensions in the form of a dword|
|0x0014073A|inputSaveFilename|uint8_t[13]|13|Initial input filename to save to show in dialog|
|0x00140747|selectedFilename|uint8_t[13]|13|Final filename to save that the user selected|
|0x00140754|selFilesColumn1NumItems|uint16_t|2||
|0x00140756|selFilesColumn2NumItems|uint16_t|2||
|0x00140758|selFilesColumn3NumItems|uint16_t|2||
|0x0014075A|numMatchedFiles|uint16_t|2||
|0x0014075C|selFilesColumnStartY|uint16_t|2||
|0x0014075E|selFilesColumnEndY|uint16_t|2||
|0x00140760|diskMenu|uint32_t|4|On init function|
|0x0014086C|aSwosu|uint8_t[6]|6||
|0x00140872|saveFileBuffer|uint16_t|2|Buffer start address used as destination when loading swos4.dku save file data.|
|0x00140918|continueMenu|Menu_Continue|66|On init function|
|0x00140994|continueAbortMenu|Menu_ContinueAbort|116|On init function|
|0x00140ACA|errorPromptsEnabled|uint16_t|2|If false, don't wait for the user to press continue button in continue menu,<br>exit immediately (also set text background to gray and hide the button)|
|0x00140ACC|errorText|uint32_t|4|Shown when some error happens, and menu is<br>shown that reports error and has continue button|
|0x00140AD0|promptHeader|uint32_t|4|Continue/abort menu header|
|0x00140AD4|whatIsChanging|uint32_t|4|In continue/abort prompt tells what's changing<br>("you're about to lose...")|
|0x00140AD8|continueText|uint32_t|4||
|0x00140ADC|abortText|uint32_t|4||
|0x00140AE0|contAbortDefault|uint16_t|2|Select default entry:<br>0 = continue default<br>!0 = abort default|
|0x00140AE2|contAbortResult|uint16_t|2|Contains result from continue/abort prompt<br>0 = continue, 1 = abort|
|0x00140AE4|SWOS_MainMenu|Menu_SWOS_Main|438|On init function|
|0x00140C9A|aCjcHelp|uint8_t[10]|10||
|0x001414EC|saveFileTitle|uint8_t[70]|70||
|0x00141532|teamOffering|uint16_t|2|Team number of team that wants to buy our player|
|0x00141534|offerPrimaryPlayerOrdinal|uint16_t|2||
|0x00141536|numExtraPlayersWanted|uint16_t|2|Number of extra player they want to buy from us|
|0x00141538|offerSwapPlayerOrdinal|uint16_t|2||
|0x0014153A|offerExtraPlayerOrdinal|uint16_t|2||
|0x0014153C|offerAmount|uint16_t|2|How much are they offering for our player|
|0x0014153E|offerNegotiationStep1Amount|uint16_t|2||
|0x00141540|offerNegotiationStep2Amount|uint16_t|2||
|0x00141542|showDomesticPlayerMarket|uint16_t|2|Show<br>0 - foreign<br>1 - domestic<br>player market|
|0x00141544|transferCompleted|uint16_t|2|Flag set to 1 when a player transfer is completed.|
|0x00141CB0|transferReplacementPriorityTable|uint8_t*[8]|32||
|0x00141CD0|transferReplacementPriority_role0|uint8_t[9]|9||
|0x00141CD9|transferReplacementPriority_role1|uint8_t[9]|9||
|0x00141CE2|transferReplacementPriority_role2|uint8_t[9]|9||
|0x00141CEB|transferReplacementPriority_role3|uint8_t[9]|9||
|0x00141CF4|transferReplacementPriority_role4|uint8_t[9]|9||
|0x00141CFD|transferReplacementPriority_role5|uint8_t[9]|9||
|0x00141D06|transferReplacementPriority_role6|uint8_t[9]|9||
|0x00141D0F|transferReplacementPriority_role7|uint8_t[9]|9||
|0x0014221C|replacementPositionSearchOrderTable|uint8_t*[8]|32||
|0x0014223C|replPosSearchOrderGK|uint8_t[9]|9|Replacement position search priority for GK, 0xFF-terminated.|
|0x00142245|replPosSearchOrderRB|uint8_t[9]|9|Replacement position search priority for RB, 0xFF-terminated.|
|0x0014224E|replPosSearchOrderLB|uint8_t[9]|9|Replacement position search priority for LB, 0xFF-terminated.|
|0x00142257|replPosSearchOrderDef|uint8_t[9]|9|Replacement position search priority for Def, 0xFF-terminated.|
|0x00142260|replPosSearchOrderRW|uint8_t[9]|9|Replacement position search priority for RW, 0xFF-terminated.|
|0x00142269|replPosSearchOrderLW|uint8_t[9]|9|Replacement position search priority for LW, 0xFF-terminated.|
|0x00142272|replPosSearchOrderMid|uint8_t[9]|9|Replacement position search priority for Mid, 0xFF-terminated.|
|0x0014227B|replPosSearchOrderAtt|uint8_t[9]|9|Replacement position search priority for Att, 0xFF-terminated.|
|0x00142526|trialistSkillDistribution|uint8_t[20]|20|Cumulative probability weights for trialist skill adjustment.|
|0x0014253A|trialistSkillBitMasks|uint8_t[32]|32|Skill bit masks per position for trialist generation.|
|0x0014255A|trialistSkillTemplates|uint8_t[512]|512|Packed skill nibble templates for trialist generation.|
|0x00142850|trialistNameBuffer|int8_t[23]|23|Temporary buffer for building a trialist player surname.|
|0x00142867|trialistNameBufTerminator|uint8_t|1|End-of-buffer sentinel for trialistNameBuffer|
|0x00142EE0|offersMenu|Menu_Offers|244|On init function|
|0x0014350A|offerFmtSinglePlayer|int8_t*|4|Pointer to format string for single-player offer text.|
|0x0014350E|offerFmtTwoPlayers|int8_t*|4|Pointer to format string for two-player offer text.|
|0x00143512|exchangeFmtSinglePlayer|int8_t*|4|Pointer to format string for single-player exchange offer.|
|0x00143516|exchangeFmtTwoPlayers|int8_t*|4|Pointer to format string for two-player exchange offer.|
|0x0014351A|offerFmtLine1a|int8_t*|4|Pointer to format string for multi-line offer header line 1.|
|0x0014351E|offerFmtLine2a|int8_t*|4|Pointer to format string for multi-line offer player name line.|
|0x00143522|offerFmtLine1b|int8_t*|4|Pointer to format string for multi-line offer header variant.|
|0x00143526|offerFmtLine2b|int8_t*|4|Pointer to format string for multi-line offer two-player line.|
|0x0014352A|exchangeFmtLine1a|int8_t*|4|Pointer to format string for multi-line exchange header.|
|0x0014352E|exchangeFmtLine2a|int8_t*|4|Pointer to format string for multi-line exchange player line.|
|0x00143532|exchangeFmtLine1b|int8_t*|4|Pointer to format string for multi-line exchange header variant.|
|0x00143536|exchangeFmtLine2b|int8_t*[9]|36|Pointer to format string for multi-line exchange two-player line.|
|0x0014355A|playerTransferMenu|Menu_PlayerTransfer|462|On init function|
|0x00143728|sellExchangeStrings|uint8_t[16]|16||
|0x00143738|sellExchangeResponseStrings|int8_t*[12]|48|Table of 6 pairs of string pointers for sell/exchange response messages.|
|0x0014398E|teamWillingToSellOrExchange|uint16_t|2|True if team is willing to sell/exchange player|
|0x00143990|transferPlayerMenuResult|uint16_t|2|Transfer player menu result: -1=reject, 0=accept, 1=counter.|
|0x00143992|thirdPartyOfferMenu|Menu_ThirdPartyOffer|544|On init function|
|0x00143E46|offerStatus|uint16_t|2|-1 = No offer<br>0 = we want to buy player<br>1 = we want to improve our offer<br>2 = we wish to further improve our offer<br>3 = we refuse to further improve our offer<br>4 = we withdraw our offer <- rest|
|0x00143E48|thirdPartyOfferResult|uint16_t|2|Third-party offer menu result: 0=consider, 1=accept, 2=reject, 3=ask for more.|
|0x00143E4A|playerOffersMenu|Menu_PlayerOffers|526|On init function|
|0x001444E2|viewSquadMenu|Menu_ViewSquad|630|On init function|
|0x001448DA|squadTeamPtr|uint32_t|4||
|0x001448DE|viewSquadTitle|uint32_t|4||
|0x001448E2|viewSquadFlags|uint32_t|4||
|0x001448E6|viewSquadMaskLo|uint32_t|4||
|0x001448EA|viewSquadMaskHi|uint32_t|4||
|0x001448EE|viewSquadArg2|uint16_t|2||
|0x001448F0|viewSquadArg3|uint16_t|2||
|0x001448F2|pad_1448F2|uint16_t|2||
|0x001448F4|viewSquadSelectedPlayer|uint16_t|2||
|0x001448F6|viewSquadSelectedTeam|uint16_t|2||
|0x001448F8|buyOtherPlayersMenu|Menu_BuyOtherPlayers|528|On init function|
|0x00144BBA|buyOtherPlayersTitlePtr|int8_t*|4|Pointer to title string for buy other domestic/foreign player menu.|
|0x00144BBE|buyOtherPlayersTeamPtr|uint8_t*|4|Pointer to the offering team TeamFile data.|
|0x00144BC2|showPlayerMarketMenu|Menu_ShowPlayerMarket|598|On init function|
|0x00144E18|positionFilterStringTable|uint32_t|4|Menu string table for player market position filter.|
|0x00144E32|skillFilterStringTable|uint32_t|4|Menu string table for player market skill rating and continent filter.|
|0x00144E7A|positionGroupTable|uint32_t|4|Table of 4 pointers to byte arrays mapping position filter to sub-position indices.|
|0x00144E8A|positionGroupGoalkeeper|uint8_t[2]|2|Position sub-indices for goalkeeper filter: {0, 0xFF}.|
|0x00144E8C|positionGroupDefender|uint8_t[4]|4|Position sub-indices for defender filter: {1, 2, 3, 0xFF}.|
|0x00144E90|positionGroupMidfielder|uint8_t[4]|4|Position sub-indices for midfielder filter: {4, 5, 6, 0xFF}.|
|0x00144E94|positionGroupAttacker|uint8_t[2]|2|Position sub-indices for attacker filter: {7, 0xFF}.|
|0x0014507E|filterMenuRedrawList|int16_t[3]|6|List of menu entry indices to redraw after updating player market filter.|
|0x00145352|playerMarketFilterPosition|uint16_t|2||
|0x00145354|playerMarketFilterRatingIndex|uint16_t|2||
|0x00145356|playerMarketFilterAgeGroup|uint16_t|2||
|0x00145358|playerMarketFilterCountry|uint16_t|2||
|0x0014535A|playerMarketListScrollOffset|uint16_t|2||
|0x0014535C|playerMarketVisibleItemCount|uint16_t|2||
|0x0014535E|playerMarketTotalMatchCount|uint16_t|2||
|0x00145360|pad_145360|uint16_t|2||
|0x00145362|playerMarketVisibleItems|uint16_t|2||
|0x00145364|pad_145364|uint8_t[38]|38||
|0x0014538A|buyPlayerMenu|Menu_BuyPlayer|228|On init function|
|0x0014558A|transferMarketMenu|Menu_TransferMarket|508|On init function|
|0x001459A0|buyPlayerRedrawList|int16_t[3]|6|List of menu entry indices to redraw in the buy player screen.|
|0x00145AA0|playerSelected|uint16_t|2||
|0x00145D1A|viewFutureTeamModeFlag|uint16_t|2||
|0x00146180|offerLifespanTable|uint8_t[16]|16||
|0x001462CC|offerPrimaryPositionMask|uint16_t|2||
|0x001462CE|offerExtraPositionMask|uint16_t|2||
|0x001462D0|offerTargetValueBase|uint16_t|2||
|0x001462D2|offerValueBaseSum|uint16_t|2||
|0x001462D4|offerSwapValueBaseSum|uint16_t|2||
|0x001462D6|offerCandidateTeamIndexBuffer|uint8_t[100]|100||
|0x00146742|swapPlayerValueRandom|uint16_t|2|Random multiplier factor for swap player valuation.|
|0x00146744|extraPlayerValueRandom|uint16_t|2|Random multiplier factor for extra player valuation.|
|0x00146B8E|careerAddIntlPlayerResult|uint16_t|2||
|0x00146B90|careerAddIntlPlayerSelectedSrcPlayerPtr|uint32_t|4||
|0x00146B94|careerAddIntlPlayerSelectedSrcPlayerNamePtr|uint32_t|4||
|0x00146CB6|selectNationalTeamMenu|Menu_SelectNationalTeam|712|On init function|
|0x001473B2|careerIntlPlayersRemoveMask|uint32_t|4||
|0x001473B6|careerIntlPlayersWrongTypeMask|uint32_t|4||
|0x001473BA|careerIntlPlayersSelectableMask|uint32_t|4||
|0x001473BE|selectNationalTeamMenuResult|uint16_t|2||
|0x001473C0|careerNationalTeamHasPendingAddPlayer|uint16_t|2||
|0x001473C2|careerIntlPlayerSelectedPlayerDataCopy|uint8_t[26]|26||
|0x001473E8|careerIntlPlayerSelectedTeamName|uint8_t[18]|18||
|0x001473FA|careerAddIntlPlayerSelectedTeamNumber|uint16_t|2||
|0x001473FC|careerAddIntlPlayerSelectedPlayerOrdinal|uint16_t|2||
|0x001473FE|nationalTeamAddPlayerMenu|Menu_NationalTeamAddPlayer|128|On init function|
|0x001474A8|careerNationalTeamAddPlayerType|uint16_t|2||
|0x00147558|playMatchMenu|Menu_PlayMatch|1212|On init function|
|0x00147A14|sidePitchPositionsDefault|uint8_t[66]|66||
|0x00147A56|sidePitchPositions_5_4_1|uint8_t[66]|66||
|0x00147A98|sidePitchPositions_4_5_1|uint8_t[66]|66||
|0x00147ADA|sidePitchPositions_5_3_2|uint8_t[66]|66||
|0x00147B1C|sidePitchPositions_3_5_2|uint8_t[66]|66||
|0x00147B5E|sidePitchPositions_4_3_3|uint8_t[66]|66||
|0x00147BA0|sidePitchPositions_4_2_4|uint8_t[66]|66||
|0x00147BE2|sidePitchPositions_3_4_3|uint8_t[66]|66||
|0x00147C24|sidePitchPositionsSweep|uint8_t[66]|66||
|0x00147C66|sidePitchPositions_5_2_3|uint8_t[66]|66||
|0x00147CA8|sidePitchPositionsAttack|uint8_t[66]|66||
|0x00147CEA|sidePitchPositionsDefend|uint8_t[66]|66||
|0x00147D2C|sidePitchSurnamePositionsTable|uint32_t|4|This table contains player surname positions and string flags for side pitch in play menu,<br>it's indexed by the tactics; format is, for each player (11 total):<br>word - x coordinate - 180<br>word - y coordinate - 9<br>word - string flags (normally left, right or center alignment)|
|0x001483E2|playMatchRedrawList|int16_t[3]|6|List of menu entry indices to redraw after rotating players in play match menu.|
|0x001491F2|togglePlayerCoachRedrawItemList|uint64_t|8||
|0x001491FA|isFirstPlayerChoosingTeam|uint16_t|2|True if the first player is choosing the team|
|0x001491FC|currentSelectedPlayerIndexPtr|uint32_t|4|Index of player that's being swapped in play match menu (-1 if none),<br>kept up to date no matter which player is currently viewing the menu|
|0x00149200|showingCpuTeams|uint16_t|2|= 1 If we're looking in a pill... err, CPU team in play match menu<br>(both are CPU, no humans in this game)|
|0x00149202|squadChangesAllowed|uint16_t|2|If true, player can edit the team<br>if false, game is simulated ("play match" button turns to "view result")|
|0x00149204|playMatchTeam1Ptr|TeamFile*|4|In play match menu|
|0x00149208|playMatchTeam2Ptr|TeamFile*|4|In play match menu|
|0x0014920C|maxSubstitutesEntries|uint16_t|2|Might be max number of substitutes?|
|0x0014920E|pmMenuNumPlayers|uint16_t|2|Total number of players per team in play match menu|
|0x00149210|numPlayersToShowInMenu|uint16_t|2||
|0x00149212|viewingOpponentTeam|uint16_t|2||
|0x00149214|is_A_team|uint16_t|2||
|0x00149216|selectedPlayerPosition|uint16_t|2||
|0x00149218|selectedPlayerTacticsPosition|uint16_t|2||
|0x0014921A|pmSelectedPlayerEntry|uint32_t|4|Pointer to menu entry of a player we selected in play match menu (to start moving him)|
|0x0014921E|playMatchControlFlags|uint16_t|2|Bit 0 clear = clear joy1 flag<br>Bit 1 clear = clear joy2 flag<br>= 3 (11b)|
|0x00149220|playerNumThatStarted|uint16_t|2|Number of player who pressed play match (1 or 2)<br>needed to determine who controls which team|
|0x00149222|playMatchExcludeFlags|uint16_t|2|This controls which players in the team will be disallowed to play the match<br>according to the previous cards<br>-1 = previous game cards<br> 1 = red card only<br> 0 = both<br>sent as a D2 parameter to ShowPlayMatchMenu|
|0x00149224|playMatchButtonVisibilityState|uint32_t|4||
|0x00149228|careerTeamCoachOnly|uint16_t|2|True if the career team is controlled by the CPU, i.e. the player is coach only<br>(set when view result was pressed)|
|0x001496F4|careerJobOfferMode|uint16_t|2||
|0x00149786|nat_teams_rand_limit1|uint16_t|2||
|0x00149788|numNationalTeams|uint16_t|2||
|0x0014978A|natTeamsRandLimit2|uint16_t|2||
|0x0014978C|nationalTeams|uint8_t[852]|852||
|0x00149D3E|jobOffersMenu|Menu_JobOffers|384|On init function|
|0x0014A1D4|pad_14A1D4|uint16_t|2||
|0x0014A1D6|selectedOldJobOfferOrdinal|uint16_t|2||
|0x0014A1D8|gotJobOfferMenu|Menu_GotJobOffer|320|On init function|
|0x0014A89A|jobOffersFromRetired|uint16_t|2|Flag indicating job offers opened from retired/sacked path.|
|0x0014A89C|jobOfferOrdinal|uint16_t|2|Ordinal of job that is selected in job offers menu|
|0x0014A89E|oldJobOfferOrdinal|uint16_t|2||
|0x0014A8A0|teamNoOfferingJob|uint16_t|2||
|0x0014A8A2|teamOfferingJobPtr|uint32_t|4||
|0x0014A8A6|jobOfferFunds|uint32_t|4|Funds for improving the team<br>-1 = international offer|
|0x0014A8B6|currentMessage|uint16_t|2|Index of current message from club managers<br>0 - no messages (1-based)|
|0x0014A8B8|plNameForMessage|uint32_t|4|(?) Points to player name when getting memos<br>from club presidents|
|0x0014A8BC|chairmanMemosMenu|Menu_ChairmanMemos|146|On init function|
|0x0014A94E|clubMessagesTable|uint32_t|4||
|0x0014AB5A|clubBusinessMenu|Menu_ClubBusiness|342|On init function|
|0x0014B3F2|ballXQuadrantCoordinates|uint8_t[10]|10||
|0x0014B3FC|ballYQuadrantCoordinates|uint8_t[14]|14||
|0x0014B40A|xQuadrantToCoordinates|uint8_t[30]|30|These two tables are used for converting player locations<br>from tactics to x and y coordinates in pitch sprite (226)<br>during edit tactics menu|
|0x0014B428|yQuadrantToCoordinates|uint8_t[32]|32||
|0x0014B448|arrowSpritesOffsets|uint8_t[16]|16|Used when drawing player direction arrows in edit tactics menu, when fire is being held<br>byte 2n is x, byte 2n+1 is y offset|
|0x0014B458|littlePlayersConvertTable|uint8_t[32]|32||
|0x0014B478|editTacticsPlayerPositions|uint8_t[24]|24||
|0x0014B490|editTacticsLastTick|uint16_t|2|Stores currentGameTick for elapsed time calculation in EditTacticsStatus.|
|0x0014B492|ballRow|uint16_t|2|In edit tactics menu|
|0x0014B494|ballColumn|uint16_t|2|In edit tactics menu|
|0x0014B496|editTacticsBallLocation|uint16_t|2|During edit tactics menu|
|0x0014B498|chooseTacticsTeamPtr|TeamFile*|4|Pointer to team passed to ShowStandardChooseTacticsMenu (in-game)|
|0x0014B49C|editTacticsPlayerNumbers|uint32_t|4|Edit tactics working tactics buffer|
|0x0014B4A0|markedPlayerNumber|uint16_t|2|In edit tactics menu, zero if cursor is on ball|
|0x0014B4A2|editTacticsPitchStatus|uint16_t|2|When setting tactics (moving players or ball)<br>3 = drawing player directions, fire is held<br>4 = saved<br>5 = ?<br>6 = ?|
|0x0014B4A4|chosenTactics|uint16_t|2|Gets set in choose tactics menu.<br>-1 = tactics aborted<br> 0 = default tactics<br> 1 = 5-4-1<br> 2 = 4-5-1<br> 3 = 5-3-2<br> 4 = 3-5-2<br> 5 = 4-3-3<br> 6 = 4-2-4<br> 7 = 3-4-3<br> 8 = SWEEP<br> 9 = 5-2-3<br>10 = ATTACK<br>11 = DEFEND<br>12 = user A<br>13 = user B<br>...<br>17 = user F|
|0x0014B4A6|editTacticsInputRepeatCounter|uint16_t|2||
|0x0014B4A8|editTacticsPlayerX|uint16_t|2||
|0x0014B4AA|editTacticsBallRow|uint16_t|2||
|0x0014B4AC|editTacticsBallColumn|uint16_t|2||
|0x0014B4AE|editTacticsLastBallLocation|uint16_t|2|Previous ball location in edit tactics menu|
|0x0014B4B0|editTacticsDisableLittlePlayersAndBallDraw|uint16_t|2||
|0x0014B4B2|flipOnOff|uint16_t|2|Controls entry flip on/off in edit tactics menu|
|0x0014B4B4|tacticsChangedFlag|uint16_t|2|Controls save/abort prompt for edit tactics menu|
|0x0014B4B6|editTacticsTransitionActive|uint16_t|2|Flag set to 1 when edit tactics pitch transition is active.|
|0x0014B56E|editTacticsCountryBuffer|uint8_t[128]|128|Here are copied country numbers of selected teams<br>in edit tactics menu|
|0x0014B622|chooseTacticsMenu|Menu_ChooseTactics|248|On init function|
|0x0014B7CC|editTacticsMenu|Menu_EditTactics|796|On init function|
|0x0014BAE8|flipStrTable|uint32_t|4||
|0x0014C0E8|editTacticsRotateRedrawList|int16_t[3]|6|List of menu entry indices to redraw after rotating players in edit tactics.|
|0x0014C602|editTacticsFlipPairColorTable|uint8_t[10]|10||
|0x0014C60C|editTacticsNumPlayers|uint16_t|2||
|0x0014C60E|editTacticsSelectedPlayerNameIndex|uint16_t|2||
|0x0014C610|editTacticsSelectedPlayerSlotIndex|uint16_t|2||
|0x0014C612|editTacticsSelectedPlayerMenuEntryPtr|uint32_t|4||
|0x0014C616|editTacticsSelectedPairSlotIndex|uint16_t|2||
|0x0014C618|editTacticsSelectedPairMenuEntryPtr|uint32_t|4|From edit tactics menu|
|0x0014CEDA|playerAreas|uint8_t[70]|70|In edit tactics menu|
|0x0014CFF2|tacticCursorFrames|uint64_t|8||
|0x0014D21C|editTacticsNearestSelectPitchWidth|uint16_t|2||
|0x0014D244|editTacticsDirectionDeltaTable|uint8_t[16]|16||
|0x0014D320|importTacticsMenu|Menu_ImportTactics|490|On init function|
|0x0014D5BC|importMenuSelectedTactics|uint16_t|2|In import tactics menu, number of selected tactic<br>1000 = imported tactic, rest is in enumeration<br>-1 = import aborted|
|0x0014D7A2|tacticsPositionDefensiveness|uint8_t[22]|22||
|0x0014D7B8|stadiumMenu|Menu_Stadium|870|On init function|
|0x0014DB1E|stadiumMenuLittlePlayer|uint16_t|2||
|0x0014DB20|littlePlayerSpriteGeneric|uint16_t|2||
|0x0014DB22|littlePlayersColorTable|uint8_t[32]|32|For sprites above|
|0x0014DB42|littlePlayersSpriteTable|Sprites[4]|8|Table for converting indices of those little pictures of<br>players into sprites|
|0x0014DD76|highlightsMenu|Menu_Highlights|158|On init function|
|0x0014DFCA|teamsCountryNumbers|uint8_t[512]|512||
|0x0014E1CA|aAlbania|int8_t[18]|18||
|0x0014E1DC|aAustria|int8_t[18]|18||
|0x0014E1EE|aBelgium|int8_t[17]|17||
|0x0014E1FF|aBulgaria|int8_t[20]|20||
|0x0014E213|aCroatia|int8_t[18]|18||
|0x0014E225|aCyprus|int8_t[16]|16||
|0x0014E235|aCzechRepublic|int8_t[22]|22||
|0x0014E24B|aDenmark|int8_t[16]|16||
|0x0014E25B|aEngland|int8_t[17]|17||
|0x0014E26C|aEngland_0|int8_t[17]|17||
|0x0014E27D|aEstonia|int8_t[18]|18||
|0x0014E28F|aFaroeIslands|int8_t[27]|27||
|0x0014E2AA|aFinland|int8_t[17]|17||
|0x0014E2BB|aFrance|int8_t[15]|15||
|0x0014E2CA|aGermany|int8_t[16]|16||
|0x0014E2DA|aGreece|int8_t[14]|14||
|0x0014E2E8|aHungary|int8_t[19]|19||
|0x0014E2FB|aIceland|int8_t[19]|19||
|0x0014E30E|aRepublicIreland|int8_t[24]|24||
|0x0014E326|aIsrael|int8_t[16]|16||
|0x0014E336|aItaly|int8_t[15]|15||
|0x0014E345|aLatvia|int8_t[16]|16||
|0x0014E355|aLithuania|int8_t[22]|22||
|0x0014E36B|aLuxembourg|int8_t[23]|23||
|0x0014E382|aMalta|int8_t[15]|15||
|0x0014E391|aHolland|int8_t[15]|15||
|0x0014E3A0|aNorthernIreland|int8_t[33]|33||
|0x0014E3C1|aNorway|int8_t[18]|18||
|0x0014E3D3|aPoland|int8_t[15]|15||
|0x0014E3E2|aPortugal|int8_t[20]|20||
|0x0014E3F6|aRomania|int8_t[18]|18||
|0x0014E408|aRussia|int8_t[16]|16||
|0x0014E418|aSanMarino|int8_t[23]|23||
|0x0014E42F|aScotland|int8_t[19]|19||
|0x0014E442|aSlovenia|int8_t[20]|20||
|0x0014E456|aSpain|int8_t[15]|15||
|0x0014E465|aSweden|int8_t[16]|16||
|0x0014E475|aSwitzerland|int8_t[19]|19||
|0x0014E488|aTurkey|int8_t[16]|16||
|0x0014E498|aUkraine|int8_t[19]|19||
|0x0014E4AB|aWales|int8_t[13]|13||
|0x0014E4B8|aYugoslavia|int8_t[24]|24||
|0x0014E4D0|aBelarus|int8_t[21]|21||
|0x0014E4E5|aSlovakia|int8_t[20]|20||
|0x0014E4F9|aAlgeria|int8_t[18]|18||
|0x0014E50B|aSouthAfrica|int8_t[28]|28||
|0x0014E527|aGhana|int8_t[13]|13||
|0x0014E534|aArgentina|int8_t[23]|23||
|0x0014E54B|aBolivia|int8_t[18]|18||
|0x0014E55D|aBrazil|int8_t[18]|18||
|0x0014E56F|aChile|int8_t[15]|15||
|0x0014E57E|aColombia|int8_t[20]|20||
|0x0014E592|aEcuador|int8_t[17]|17||
|0x0014E5A3|aParaguay|int8_t[21]|21||
|0x0014E5B8|aPeru|int8_t[15]|15||
|0x0014E5C7|aSurinam|int8_t[17]|17||
|0x0014E5D8|aUruguay|int8_t[19]|19||
|0x0014E5EB|aVenezuela|int8_t[22]|22||
|0x0014E601|aElSalvadore|int8_t[25]|25||
|0x0014E61A|aMexico|int8_t[16]|16||
|0x0014E62A|aUSA|int8_t[17]|17||
|0x0014E63B|aJapan|int8_t[16]|16||
|0x0014E64B|aTaiwan|int8_t[18]|18||
|0x0014E65D|aIndia|int8_t[14]|14||
|0x0014E66B|aAustralia|int8_t[22]|22||
|0x0014E681|aNewZealand|int8_t[25]|25||
|0x0014E69A|aCustom|int8_t[10]|10||
|0x0014E6A4|aEurope|int8_t[17]|17||
|0x0014E6B5|aAfrica|int8_t[16]|16||
|0x0014E6C5|aSouthAmerica|int8_t[30]|30||
|0x0014E6E3|aNorthAmerica|int8_t[30]|30||
|0x0014E701|aAsia|int8_t[12]|12||
|0x0014E70D|aOceania|int8_t[18]|18||
|0x0014E71F|aEditedCustoms|int8_t[18]|18||
|0x0014E731|aWorld_1|int8_t[13]|13||
|0x0014E73E|countriesTable|int8_t*[262]|1048||
|0x0014EB56|aEuropean_0|uint8_t[9]|9||
|0x0014EB5F|aNorthAmerican_0|uint8_t[15]|15||
|0x0014EB6E|aSouthAmerican_0|uint8_t[15]|15||
|0x0014EB7D|aAsian_0|uint8_t[6]|6||
|0x0014EB83|aOceanian_0|uint8_t[9]|9||
|0x0014EB8C|aAfrican_0|uint64_t|8||
|0x0014EB94|shortCountryNames|uint8_t[466]|466||
|0x0014ED66|aPremierLeague|uint8_t[15]|15||
|0x0014ED75|aPremier|uint64_t|8||
|0x0014ED7D|aDivisionOne|uint8_t[13]|13||
|0x0014ED8A|aDivisionTwo|uint8_t[13]|13||
|0x0014ED97|aDivisionThree|uint8_t[15]|15||
|0x0014EDA6|aCup_4|uint32_t|4||
|0x0014EDAA|aCup_5|uint32_t|4||
|0x0014EDAE|aLeagueCup|uint8_t[11]|11||
|0x0014EDB9|aLeagueCup_0|uint8_t[11]|11||
|0x0014EDC4|aDiv1Playoffs|uint8_t[15]|15||
|0x0014EDD3|aDiv2Playoffs|uint8_t[15]|15||
|0x0014EDE2|aDiv3Playoffs|uint8_t[15]|15||
|0x0014EDF1|aCup_6|uint32_t|4||
|0x0014EDF5|aCup_7|uint32_t|4||
|0x0014EDF9|aLeagueCup_1|uint8_t[11]|11||
|0x0014EE04|aLeagueCup_2|uint8_t[11]|11||
|0x0014EE0F|aSerieA|uint64_t|8||
|0x0014EE17|aSerieB|uint64_t|8||
|0x0014EE1F|aCoppaItalia|uint8_t[13]|13||
|0x0014EE2C|aCoppa|uint8_t[6]|6||
|0x0014EE32|aPremiereDivisi|uint8_t[18]|18||
|0x0014EE44|aPremiere|uint8_t[9]|9||
|0x0014EE4D|aDeuxiemeDivisi|uint8_t[18]|18||
|0x0014EE5F|aDeuxieme|uint8_t[9]|9||
|0x0014EE68|aCoupeDeFrance|uint8_t[16]|16||
|0x0014EE78|aCoupe|uint8_t[6]|6||
|0x0014EE7E|a1Liga|uint64_t|8||
|0x0014EE86|a2Liga|uint64_t|8||
|0x0014EE8E|aDFBPokal|uint8_t[13]|13||
|0x0014EE9B|aPokal|uint8_t[6]|6||
|0x0014EEA1|aPrimeraDivisio|uint8_t[17]|17||
|0x0014EEB2|aPrimera|uint64_t|8||
|0x0014EEBA|aSegundaDivisio|uint8_t[17]|17||
|0x0014EECB|aSegunda|uint64_t|8||
|0x0014EED3|aCopa|uint8_t[5]|5||
|0x0014EED8|aCopa_0|uint8_t[5]|5||
|0x0014EEDD|aJLeague|uint8_t[10]|10||
|0x0014EEE7|aJLeague_0|uint8_t[10]|10||
|0x0014EEF1|aLeague_2|uint8_t[7]|7||
|0x0014EEF8|aLeague_3|uint8_t[7]|7||
|0x0014EEFF|aCup_8|uint32_t|4||
|0x0014EF03|aCup_9|uint32_t|4||
|0x0014EF07|aEmperorSCup|uint8_t[14]|14||
|0x0014EF15|aEmpCup|uint8_t[9]|9||
|0x0014EF1E|aNorthernRegion|uint8_t[16]|16||
|0x0014EF2E|aNorthern|uint8_t[9]|9||
|0x0014EF37|aCentralRegion|uint8_t[15]|15||
|0x0014EF46|aCentral|uint64_t|8||
|0x0014EF4E|aSouthernRegion|uint8_t[16]|16||
|0x0014EF5E|aSouthern|uint8_t[9]|9||
|0x0014EF67|a1stDivision|uint8_t[13]|13||
|0x0014EF74|aSouthDivision|uint8_t[15]|15||
|0x0014EF83|aSouthDivision_0|uint8_t[15]|15||
|0x0014EF92|aNswDivision|uint8_t[13]|13||
|0x0014EF9F|aNsw|uint32_t|4||
|0x0014EFA3|aQueenslandDivi|uint8_t[20]|20||
|0x0014EFB7|aQueensland|uint8_t[11]|11||
|0x0014EFC2|nationalTeamCompetitionsAndQualifications|Competition*[39]|156||
|0x0014F05E|continentalCups|CompetitionCup*[7]|28||
|0x0014F07A|europeanCupsandNationalTeamCompetitionsAndQualifications|CompetitionCup*[46]|184||
|0x0014F132|nationalTeamCompetitionsAndQualifications1|CompetitionCup*[39]|156||
|0x0014F1CE|careerContests|CompetitionCareer[34]|340||
|0x0014F326|aDataEurocupTmd|uint8_t[17]|17||
|0x0014F337|aDataEurocwcTmd|uint8_t[17]|17||
|0x0014F348|aDataUefacupTmd|uint8_t[18]|18||
|0x0014F35A|euroCup|CompetitionCup2_4_2_32|78||
|0x0014F3A8|cupWinnersCup|CompetitionCup_6_2_64|92||
|0x0014F404|uefaCup|CompetitionCup_6_2_64|92||
|0x0014F460|worldCup2|CompetitionCup2_6_2_64|112||
|0x0014F4D0|worldCup|CompetitionCup2_6_2_48|96||
|0x0014F530|worldCupQualifyingGroup1|CompetitionCup_6_2_12|40||
|0x0014F558|worldCupQualifyingGroup2|CompetitionCup_6_2_12|40||
|0x0014F580|worldCupQualifyingGroup3|CompetitionCup_6_2_12|40||
|0x0014F5A8|worldCupQualifyingGroup4|CompetitionCup_6_2_12|40||
|0x0014F5D0|worldCupQualifyingGroup5|CompetitionCup_6_2_12|40||
|0x0014F5F8|worldCupQualifyingGroup6|CompetitionCup_6_2_12|40||
|0x0014F620|worldCupQualifyingGroup7|CompetitionCup_6_2_12|40||
|0x0014F648|worldCupQualifyingGroup8|CompetitionCup_6_2_12|40||
|0x0014F670|northAmericaWorldCupQualification|CompetitionCup2_6_2_24|72||
|0x0014F6B8|southAmericaWorldCupQualification|CompetitionCup2_6_2_16|64||
|0x0014F6F8|africaWorldCupQualification|CompetitionCup2_6_2_64|112||
|0x0014F768|asiaWorldCupQualification|CompetitionCup2_6_2_60|108||
|0x0014F7D4|oceaniaWorldCupQualification|CompetitionCup_6_2_8|36||
|0x0014F7F8|invitationTournament|CompetitionCup_6_2_8|36||
|0x0014F81C|tour|CompetitionCup_6_2_8|36||
|0x0014F840|friendly|CompetitionCup_6_2_12|40||
|0x0014F868|europeanChampionships2|CompetitionCup2_4_2_32|78||
|0x0014F8B6|europeanChampionships|CompetitionCup2_4_2_32|78||
|0x0014F904|ecQualifyingGroup1|CompetitionCup_6_2_12|40||
|0x0014F92C|ecQualifyingGroup2|CompetitionCup_6_2_12|40||
|0x0014F954|ecQualifyingGroup3|CompetitionCup_6_2_12|40||
|0x0014F97C|ecQualifyingGroup4|CompetitionCup_6_2_12|40||
|0x0014F9A4|ecQualifyingGroup5|CompetitionCup_6_2_12|40||
|0x0014F9CC|ecQualifyingGroup6|CompetitionCup_6_2_12|40||
|0x0014F9F4|ecQualifyingGroup7|CompetitionCup_6_2_12|40||
|0x0014FA1C|ecQualifyingGroup8|CompetitionCup_6_2_8|36||
|0x0014FA40|copaAmerica|CompetitionCup2_4_2_24|70||
|0x0014FA86|africanNationsCup|CompetitionCup2_6_2|48||
|0x0014FAB6|northAmericanCup|CompetitionCup2_4_2|46||
|0x0014FAE4|asianCup|CompetitionCup2_6_2|48||
|0x0014FB14|oceaniaCup|CompetitionCup_6_2|28||
|0x0014FB30|customsLeague|CompetitionLeague_3_6|56||
|0x0014FB68|albanianLeague|CompetitionLeague_1|20||
|0x0014FB7C|austrianLeague|CompetitionLeague_1|20||
|0x0014FB90|belarussiaLleague|CompetitionLeague_1|20||
|0x0014FBA4|belgianLeague|CompetitionLeague_1|20||
|0x0014FBB8|bulgarianLeague|CompetitionLeague_1|20||
|0x0014FBCC|croatianLeague|CompetitionLeague_1|20||
|0x0014FBE0|cypriotLeague|CompetitionLeague_1|20||
|0x0014FBF4|czechLeague|CompetitionLeague_1|20||
|0x0014FC08|danishLeague|CompetitionLeague_1|20||
|0x0014FC1C|englishLeagues|CompetitionLeague_4_8_2_24|102||
|0x0014FC82|englishLeagues1|Leagues_4_2_24|80||
|0x0014FCD2|englishLeagues2|Leagues_4_2_24|80||
|0x0014FD22|englishLeagues3|Leagues_4|48||
|0x0014FD52|div1Playoffs|Playoffs_8|32||
|0x0014FD72|div2Playoffs|Playoffs_8|32||
|0x0014FD92|div3Playoffs|Playoffs_8|32||
|0x0014FDB2|estonianLeague|CompetitionLeague_1|20||
|0x0014FDC6|faroeIslesLeague|CompetitionLeague_1|20||
|0x0014FDDA|finnishLeague|CompetitionLeague_1|20||
|0x0014FDEE|frenchLeague|CompetitionLeague_2_4|42||
|0x0014FE18|germanLeague|CompetitionLeague_2_4|42||
|0x0014FE42|greekLeague|CompetitionLeague_1|20||
|0x0014FE56|dutchLeague|CompetitionLeague_2_2_24|58||
|0x0014FE90|dutchLeagues1|Leagues_4|48||
|0x0014FEC0|dutchPlayoffs|Playoffs_8|32||
|0x0014FEE0|hungarianLeague|CompetitionLeague_1|20||
|0x0014FEF4|icelandicLeague|CompetitionLeague_1|20||
|0x0014FF08|israeliLeague|CompetitionLeague_1|20||
|0x0014FF1C|italianLeague|CompetitionLeague_2_4|42||
|0x0014FF46|latvianLeague|CompetitionLeague_1|20||
|0x0014FF5A|lithuanianLeague|CompetitionLeague_1|20||
|0x0014FF6E|luxembourgLeague|CompetitionLeague_1|20||
|0x0014FF82|malteseLeague|CompetitionLeague_1|20||
|0x0014FF96|northernIrishLeague|CompetitionLeague_1|20||
|0x0014FFAA|norwegianLeague|CompetitionLeague_1|20||
|0x0014FFBE|polishLeague|CompetitionLeague_1|20||
|0x0014FFD2|portugeseLeague|CompetitionLeague_1|20||
|0x0014FFE6|irishLeague|CompetitionLeague_1|20||
|0x0014FFFA|romanianLeague|CompetitionLeague_1|20||
|0x0015000E|russianLeague|CompetitionLeague_1|20||
|0x00150022|sanMarinoLeague|CompetitionLeague_1|20||
|0x00150036|scottishLeague|CompetitionLeague_4_2_8|54||
|0x0015006C|scottishLeague1|Leagues_2|24||
|0x00150084|scottishPlayoffs|Playoffs_4|28||
|0x001500A0|slovakianLeague|CompetitionLeague_1|20||
|0x001500B4|slovenianLeague|CompetitionLeague_1|20||
|0x001500C8|spanishLeague|CompetitionLeague_2_4_2_24|74||
|0x00150112|spanishLeague1|Leagues_4|48||
|0x00150142|spanishPlayoffs|Playoffs_8|32||
|0x00150162|swedishLeague|CompetitionLeague_1|20||
|0x00150176|swissLeague|CompetitionLeague_1|20||
|0x0015018A|turkishLeague|CompetitionLeague_1|20||
|0x0015019E|ukrainianLeague|CompetitionLeague_1|20||
|0x001501B2|welshLeague|CompetitionLeague_1|20||
|0x001501C6|yugoslavianLeague|CompetitionLeague_1|20||
|0x001501DA|algerianLeague|CompetitionLeague_1|20||
|0x001501EE|argentinianLeague|CompetitionLeague_2|26||
|0x00150208|australianLeague|CompetitionLeague_4_8|70||
|0x0015024E|bolivianLeague|CompetitionLeague_1|20||
|0x00150262|brasilianLeague|CompetitionLeague_1|20||
|0x00150276|chileanLeague|CompetitionLeague_1|20||
|0x0015028A|colombianLeague|CompetitionLeague_1|20||
|0x0015029E|ecuadorLeague|CompetitionLeague_1|20||
|0x001502B2|elSalvadorLeague|CompetitionLeague_4|38||
|0x001502D8|indianLeague|CompetitionLeague_1|20||
|0x001502EC|japaneseLeague|CompetitionLeague_2_4|42||
|0x00150316|mexicanLeague|CompetitionLeague_2|26||
|0x00150330|newZealandLeague|CompetitionLeague_3_6|56||
|0x00150368|paraguayanLeague|CompetitionLeague_1|20||
|0x0015037C|peruvianLeague|CompetitionLeague_1|20||
|0x00150390|southAfricanLeague|CompetitionLeague_1|20||
|0x001503A4|surinamLeague|CompetitionLeague_1|20||
|0x001503B8|taiwaneseLeague|CompetitionLeague_1|20||
|0x001503CC|uruguayanLeague|CompetitionLeague_2_2_8|42||
|0x001503F6|uruguayanLeague1|Leagues_2|24||
|0x0015040E|uruguayanPlayoffs|Playoffs_4|28||
|0x0015042A|americanLeague|CompetitionLeague_1|20||
|0x0015043E|venezuelanLeague|CompetitionLeague_1|20||
|0x00150452|ghanaLeague|CompetitionLeague_1|20||
|0x00150466|albanianCup|CompetitionCup_4|18||
|0x00150478|austrianCup|CompetitionCup_4|18||
|0x0015048A|belarusianCup|CompetitionCup_4|18||
|0x0015049C|belgianCup|CompetitionCup_4|18||
|0x001504AE|bulgarianCup|CompetitionCup_4|18||
|0x001504C0|croatianCup|CompetitionCup_4|18||
|0x001504D2|cypriotCup|CompetitionCup_4|18||
|0x001504E4|czechCup|CompetitionCup_4|18||
|0x001504F6|danishCup|CompetitionCup_4|18||
|0x00150508|englishCup|CompetitionCup_6_2|28||
|0x00150524|englishLeagueCup|CompetitionCup_6_2|28||
|0x00150540|englishCup_1|CompetitionCup_6_2|28||
|0x0015055C|englishLeagueCup_1|CompetitionCup_6_2|28||
|0x00150578|estonianCup|CompetitionCup_4|18||
|0x0015058A|faroeIslesCup|CompetitionCup_4|18||
|0x0015059C|finnishCup|CompetitionCup_4|18||
|0x001505AE|frenchCup|CompetitionCup_6_2|28||
|0x001505CA|germanCup|CompetitionCup_6_2|28||
|0x001505E6|greekCup|CompetitionCup_4|18||
|0x001505F8|hungarianCup|CompetitionCup_4|18||
|0x0015060A|icelandicCup|CompetitionCup_4|18||
|0x0015061C|irishCup|CompetitionCup_4|18||
|0x0015062E|israeliCup|CompetitionCup_4|18||
|0x00150640|italianCup|CompetitionCup_6_2|28||
|0x0015065C|latvianCup|CompetitionCup_4|18||
|0x0015066E|lithuanianCup|CompetitionCup_4|18||
|0x00150680|luxembourgCup|CompetitionCup_4|18||
|0x00150692|malteseCup|CompetitionCup_4|18||
|0x001506A4|dutchCup|CompetitionCup_6|20||
|0x001506B8|northernIrishCup|CompetitionCup_4|18||
|0x001506CA|norwegianCup|CompetitionCup_4|18||
|0x001506DC|polishCup|CompetitionCup_4|18||
|0x001506EE|portugeseCup|CompetitionCup_4|18||
|0x00150700|romanianCup|CompetitionCup_4|18||
|0x00150712|russianCup|CompetitionCup_4|18||
|0x00150724|sanMarinoCup|CompetitionCup_4|18||
|0x00150736|scottishCup|CompetitionCup_6_2|28||
|0x00150752|scottishLeagueCup|CompetitionCup_6_2|28||
|0x0015076E|slovakianCup|CompetitionCup_4|18||
|0x00150780|slovenianCup|CompetitionCup_4|18||
|0x00150792|spanishCup|CompetitionCup_6_2|28||
|0x001507AE|swedishCup|CompetitionCup_4|18||
|0x001507C0|swissCup|CompetitionCup_4|18||
|0x001507D2|turkishCup|CompetitionCup_4|18||
|0x001507E4|ukrainianCup|CompetitionCup_4|18||
|0x001507F6|welshCup|CompetitionCup_4|18||
|0x00150808|yugoslavianCup|CompetitionCup_4|18||
|0x0015081A|algerianCup|CompetitionCup_4|18||
|0x0015082C|australianCup|CompetitionCup_6|20||
|0x00150840|japaneseCup|CompetitionCup_4_2|26||
|0x0015085A|japaneseEmperorsCup|CompetitionCup_4_2|26||
|0x00150874|southAfricanCup|CompetitionCup_4|18||
|0x00150886|taiwaneseCup|CompetitionCup_4|18||
|0x00150898|seasonCycleNationalFlagsA|int16_t[5]|10|Season-cycle-indexed word flags for national competition scheduling.|
|0x001508A2|seasonCycleNationalFlagsB|uint16_t[5]|10|Season-cycle-indexed word flags for alternate national competition scheduling.|
|0x001508AC|careerTeamFlagsBySeason0|uint8_t[20]|20|Per-season team availability flags for region 0.|
|0x001508C0|careerTeamFlagsBySeason1|uint8_t[20]|20|Per-season team availability flags for regions 1-5.|
|0x001508D4|nationalSelectorSeasonMaskA|uint32_t|4|Bitmask for national team selector eligibility by season.|
|0x001508D8|nationalSelectorSeasonMaskB|uint32_t|4|Bitmask for national team selector eligibility by season (alternate).|
|0x001508DC|competitionsTable|Competition*[256]|1024||
|0x00150CDC|worldCupQualifyingGroups|QualifyingGroup_9_2|38||
|0x00150D02|ecQualifyingGroups|QualifyingGroup_9_2|38||
|0x00150D28|customsTable|QualifyingGroup_3|12||
|0x00150D34|worldTable|QualifyingGroup_2_8|16||
|0x00150D44|europeTable|QualifyingGroup_6_44|68||
|0x00150D88|africaTable|QualifyingGroup_3_4|16||
|0x00150D98|southAmericaTable|QualifyingGroup_3_12|24||
|0x00150DB0|northAmericaTable|QualifyingGroup_3_4|16||
|0x00150DC0|asiaTable|QualifyingGroup_3_4|16||
|0x00150DD0|oceaniaTable|QualifyingGroup_3_4|16||
|0x00150DE0|albaniaTable|Competition*[4]|16||
|0x00150DF0|austriaTable|Competition*[4]|16||
|0x00150E00|belgiumTable|Competition*[4]|16||
|0x00150E10|belarusTable|Competition*[4]|16||
|0x00150E20|bulgariaTable|Competition*[4]|16||
|0x00150E30|croatiaTable|Competition*[4]|16||
|0x00150E40|cyprusTable|Competition*[4]|16||
|0x00150E50|czechRepublicTable|Competition*[4]|16||
|0x00150E60|denmarkTable|Competition*[4]|16||
|0x00150E70|englandTable|Competition*[5]|20||
|0x00150E84|estoniaTable|Competition*[4]|16||
|0x00150E94|faroeIslandsTable|Competition*[4]|16||
|0x00150EA4|finlandTable|Competition*[4]|16||
|0x00150EB4|franceTable|Competition*[4]|16||
|0x00150EC4|germanyTable|Competition*[4]|16||
|0x00150ED4|greeceTable|Competition*[4]|16||
|0x00150EE4|hungaryTable|Competition*[4]|16||
|0x00150EF4|icelandTable|Competition*[4]|16||
|0x00150F04|republicIrelandTable|Competition*[4]|16||
|0x00150F14|israelTable|Competition*[4]|16||
|0x00150F24|italyTable|Competition*[4]|16||
|0x00150F34|latviaTable|Competition*[4]|16||
|0x00150F44|lithuaniaTable|Competition*[4]|16||
|0x00150F54|luxembourgTable|Competition*[4]|16||
|0x00150F64|maltaTable|Competition*[4]|16||
|0x00150F74|hollandTable|Competition*[4]|16||
|0x00150F84|northernIrelandTable|Competition*[4]|16||
|0x00150F94|norwayTable|Competition*[4]|16||
|0x00150FA4|polandTable|Competition*[4]|16||
|0x00150FB4|portugalTable|Competition*[4]|16||
|0x00150FC4|romaniaTable|Competition*[4]|16||
|0x00150FD4|russiaTable|Competition*[4]|16||
|0x00150FE4|sanMarinoTable|Competition*[4]|16||
|0x00150FF4|scotlandTable|Competition*[5]|20||
|0x00151008|slovakiaTable|Competition*[4]|16||
|0x00151018|sloveniaTable|Competition*[4]|16||
|0x00151028|spainTable|Competition*[4]|16||
|0x00151038|swedenTable|Competition*[4]|16||
|0x00151048|switzerlandTable|Competition*[4]|16||
|0x00151058|turkeyTable|Competition*[4]|16||
|0x00151068|ukraineTable|Competition*[4]|16||
|0x00151078|walesTable|Competition*[4]|16||
|0x00151088|yugoslaviaTable|Competition*[4]|16||
|0x00151098|algeriaTable|Competition*[4]|16||
|0x001510A8|argentinaTable|Competition*[3]|12||
|0x001510B4|australiaTable|Competition*[4]|16||
|0x001510C4|boliviaTable|Competition*[3]|12||
|0x001510D0|brasilTable|Competition*[3]|12||
|0x001510DC|chileTable|Competition*[3]|12||
|0x001510E8|colombiaTable|Competition*[3]|12||
|0x001510F4|ecuadorTable|Competition*[3]|12||
|0x00151100|elSalvadorTable|Competition*[3]|12||
|0x0015110C|indiaTable|Competition*[3]|12||
|0x00151118|japanTable|Competition*[5]|20||
|0x0015112C|mexicoTable|Competition*[3]|12||
|0x00151138|newZealandTable|Competition*[3]|12||
|0x00151144|paraguayTable|Competition*[3]|12||
|0x00151150|peruTable|Competition*[3]|12||
|0x0015115C|southAfricaTable|Competition*[4]|16||
|0x0015116C|surinamTable|Competition*[3]|12||
|0x00151178|taiwanTable|Competition*[4]|16||
|0x00151188|uruguayTable|Competition*[3]|12||
|0x00151194|usaTable|Competition*[3]|12||
|0x001511A0|venezuelaTable|Competition*[3]|12||
|0x001511AC|ghanaTable|Competition*[3]|12||
|0x001511B8|allCountriesList|CountryNumbers[66]|66||
|0x001511FA|careerCompetitionIdRemapTable|uint8_t[66]|66||
|0x0015123C|euroCupQualGroupSeedLists_4_6_11|uint32_t|4||
|0x00151260|euroCupQualSeedList4|uint32_t|4||
|0x00151264|euroCupQualSeedList6|uint8_t[6]|6||
|0x0015126A|euroCupQualSeedList11|uint8_t[11]|11||
|0x00151275|euroCupQualSeedList22|uint8_t[23]|23||
|0x0015128C|euroCupQualGroupSeedListsReduced_4_6_11|uint32_t|4||
|0x001512B0|euroCupQualSeedListReduced4|uint8_t[4]|4|Euro cup qualifying seed list for pot of 4 teams.|
|0x001512B4|euroCupQualSeedListReduced6|uint8_t[6]|6|Euro cup qualifying seed list for pot of 6 teams.|
|0x001512BA|euroCupQualSeedListReduced11|uint8_t[11]|11|Euro cup qualifying seed list for pot of 11 teams.|
|0x001512C5|euroCupQualSeedListReduced22|uint8_t[23]|23|Euro cup qualifying seed list for pot of 22 teams.|
|0x001512DC|euroCupQualGroupSeedBuckets_15_18_22|uint32_t|4||
|0x00151300|euroCupQualSeedBucket15|uint8_t[15]|15|Expanded seed bucket for euro cup qualifying draw.|
|0x0015130F|euroCupQualSeedBucket18|uint8_t[18]|18|Expanded seed bucket for euro cup qualifying draw.|
|0x00151321|euroCupQualSeedBucket22|uint8_t[22]|22|Expanded seed bucket for euro cup qualifying draw.|
|0x00151337|euroCupQualSeedBucket22Full|uint8_t[23]|23|Full seed bucket for euro cup qualifying draw.|
|0x0015154E|teamIdSelectionProcessedFlags|uint8_t[64]|64||
|0x001517A2|careerRegionPickWeightsTable|uint8_t[32]|32||
|0x001518C8|careerRegionPickWeightsTable2|uint8_t[32]|32||
|0x00151E2C|aDataTeamNnn|uint8_t[14]|14||
|0x00151E3A|aCustomsEdt|uint8_t[12]|12||
|0x00151E46|skipLeagueNumbers|uint16_t|2||
|0x00151EEE|aLoadLiverpool|uint8_t[15]|15||
|0x00151EFD|aError|uint8_t[7]|7||
|0x00151F04|positionsTable|uint8_t*[18]|72||
|0x00151F4C|positionsDefault|uint8_t[11]|11||
|0x00151F57|positions541|uint8_t[11]|11||
|0x00151F62|positions451|uint8_t[11]|11||
|0x00151F6D|positions532|uint8_t[11]|11||
|0x00151F78|positions352|uint8_t[11]|11||
|0x00151F83|positions433|uint8_t[11]|11||
|0x00151F8E|positions424|uint8_t[11]|11||
|0x00151F99|positions343|uint8_t[11]|11||
|0x00151FA4|positionsSweep|uint8_t[11]|11||
|0x00151FAF|positions523|uint8_t[11]|11||
|0x00151FBA|positionsAttack|uint8_t[11]|11||
|0x00151FC5|positionsDefend|uint8_t[11]|11||
|0x00151FD0|divisionStringTable|int8_t*[4]|16||
|0x00151FE0|divStringTable|int8_t*[4]|16||
|0x00151FF0|monthStringTable|int8_t*[12]|48||
|0x00152020|cupRoundStringTable|int8_t*[12]|48||
|0x00152050|roundStringTable|int8_t*[12]|48||
|0x00152080|rndStringTable|int8_t*[15]|60||
|0x001520BC|replayStringTable|int8_t*[3]|12||
|0x001520C8|playerPositionsStringTable|int8_t*[20]|80||
|0x00152118|tacticsStringTable|int8_t*[18]|72||
|0x00152160|fixtureSchedule2Teams|int8_t[2]|2||
|0x00152162|fixtureSchedule3Teams|int8_t[6]|6||
|0x00152168|fixtureSchedule4Teams|int8_t[12]|12||
|0x00152174|fixtureSchedule5Teams|int8_t[20]|20||
|0x00152188|fixtureSchedule6Teams|int8_t[30]|30||
|0x001521A6|fixtureSchedule7Teams|int8_t[42]|42||
|0x001521D0|fixtureSchedule8Teams|int8_t[56]|56||
|0x00152208|fixtureSchedule9Teams|int8_t[72]|72||
|0x00152250|fixtureSchedule10Teams|int8_t[90]|90||
|0x001522AA|fixtureSchedule11Teams|int8_t[110]|110||
|0x00152318|fixtureSchedule12Teams|int8_t[132]|132||
|0x0015239C|fixtureSchedule13Teams|int8_t[156]|156||
|0x00152438|fixtureSchedule14Teams|int8_t[182]|182||
|0x001524EE|fixtureSchedule15Teams|int8_t[210]|210||
|0x001525C0|fixtureSchedule16Teams|int8_t[240]|240||
|0x001526B0|fixtureSchedule17Teams|int8_t[272]|272||
|0x001527C0|fixtureSchedule18Teams|int8_t[306]|306||
|0x001528F2|fixtureSchedule19Teams|int8_t[342]|342||
|0x00152A48|fixtureSchedule20Teams|int8_t[380]|380||
|0x00152BC4|fixtureSchedule21Teams|int8_t[420]|420||
|0x00152D68|fixtureSchedule22Teams|int8_t[462]|462||
|0x00152F36|fixtureSchedule23Teams|int8_t[506]|506||
|0x00153130|fixtureSchedule24Teams|int8_t[552]|552||
|0x00153358|fixtureSchedulePtrTable|int8_t*[23]|92|Pointer table to the 23 round-robin fixture schedules (2-24 teams).|
|0x001533B4|euroChampFixtureData|int8_t[28]|28|European Championship group-stage fixture schedule and lookup data.|
|0x001533D0|avgTeamValueBases|uint8_t[184]|184||
|0x00153488|avgTeamValues|int8_t[131]|131||
|0x0015350B|playerRatingFilterThresholds|int8_t[17]|17|Lookup table mapping filter index to minimum player rating for transfer market.|
|0x0015351C|teamFilenamesTable|uint32_t|4||
|0x0015352C|ingameTeamPlayerOffsets|uint8_t[32]|32|Precalculated table for quicker calculating<br>player offsets in in-game team structure (index * 61)|
|0x0015354C|kColorTableShine|uint8_t[16]|16|This color table is used for shining selected menu entry frame|
|0x0015355C|menuPalette|uint16_t[16]|32||
|0x0015357C|aResigned|uint8_t[13]|13||
|0x00153589|aRetired|uint8_t[12]|12||
|0x00153595|aNational|uint8_t[9]|9||
|0x0015359E|aA|uint8_t[5]|5||
|0x001535A3|a12Season|uint8_t[13]|13||
|0x001535B0|a102Season|uint8_t[14]|14||
|0x001535BE|aManagementReco|uint8_t[27]|27||
|0x001535D9|aQualified|uint8_t[12]|12||
|0x001535E5|aNotQualified|uint8_t[16]|16||
|0x001535F5|aPromoted|uint8_t[11]|11||
|0x00153600|aRelegated|uint8_t[12]|12||
|0x0015360C|aWinners|uint64_t|8||
|0x00153614|aRunnerUp|uint8_t[10]|10||
|0x0015361E|aPosition0|uint8_t[13]|13||
|0x0015362B|aFinalist|uint8_t[9]|9||
|0x00153634|aThirdPlace|uint8_t[12]|12||
|0x00153640|aFourthPlace|uint8_t[13]|13||
|0x0015364D|aReachedSemiFin|uint8_t[19]|19||
|0x00153660|aReachedQuarter|uint8_t[22]|22||
|0x00153676|aKnockedOutInRo|uint8_t[24]|24||
|0x0015368E|aStillInCompeti|uint8_t[21]|21||
|0x001536A3|aSacked|uint8_t[11]|11||
|0x001536AE|aSeasonSTopScor|uint8_t[20]|20||
|0x001536C2|aSeasonSTopScor_0|uint8_t[21]|21||
|0x001536D7|aA0|uint8_t[7]|7||
|0x001536DE|aCareerTotal|uint8_t[13]|13||
|0x001536EB|aAllMatches|uint8_t[12]|12||
|0x001536F7|aPl0W1D2L3F4A5|uint8_t[46]|46||
|0x00153725|aWon0Drawn1Lost|uint8_t[26]|26||
|0x0015373F|aDash|uint16_t|2||
|0x00153741|aSeveral|uint64_t|8||
|0x00153749|aWinnerQualifie|uint8_t[17]|17||
|0x0015375A|aTop0Qualify|uint8_t[15]|15||
|0x00153769|aCoachMatch|uint8_t[12]|12||
|0x00153775|aPlayCoachMatch|uint8_t[17]|17||
|0x00153786|aItIsWithGreatR|uint8_t[52]|52||
|0x001537BA|aRenewYourContr|uint8_t[48]|48||
|0x001537EA|aAndWeLookForwa|uint8_t[39]|39||
|0x00153811|aMemoFromThePre|uint8_t[24]|24||
|0x00153829|aThePresident|uint8_t[14]|14||
|0x00153837|aWellDoneAYouDi|uint8_t[39]|39||
|0x0015385E|aThisSeasonAndW|uint8_t[37]|37||
|0x00153883|aAGoodSeasonAWe|uint8_t[34]|34||
|0x001538A5|aPleasedWithYou|uint8_t[40]|40||
|0x001538CD|aAnUpAndDownSea|uint8_t[42]|42||
|0x001538F7|aCanImproveOnTh|uint8_t[39]|39||
|0x0015391E|aNotAVeryGoodSe|uint8_t[43]|43||
|0x00153949|aImproveOnOurPe|uint8_t[39]|39||
|0x00153970|aAVeryDisappoin|uint8_t[42]|42||
|0x0015399A|aMuchBetterFrom|uint8_t[33]|33||
|0x001539BB|aThanksForAllYo|uint8_t[41]|41||
|0x001539E4|aYouWellInYourN|uint8_t[25]|25||
|0x001539FD|aWelcomeAWeLook|uint8_t[36]|36||
|0x00153A21|aSuccessFromOur|uint8_t[33]|33||
|0x00153A42|aWelcomeAWeHope|uint8_t[40]|40||
|0x00153A6A|aSeasonInManage|uint8_t[49]|49||
|0x00153A9B|aJustANoteToWis|uint8_t[45]|45||
|0x00153AC8|aNewSeason|uint8_t[11]|11||
|0x00153AD3|aWeAllHopeYouEn|uint8_t[53]|53||
|0x00153B08|aBeforeHandingT|uint8_t[47]|47||
|0x00153B37|aWeAllWishYouTh|uint8_t[49]|49||
|0x00153B68|aDistinguishedC|uint8_t[45]|45||
|0x00153B95|aViewOtherTeam|uint8_t[16]|16||
|0x00153BA5|aTheMembersOfTh|uint8_t[40]|40||
|0x00153BCD|aOfAWouldLikeTo|uint8_t[38]|38||
|0x00153BF3|aAsCoachOfTheNa|uint8_t[30]|30||
|0x00153C11|aWeCanPromiseYo|uint8_t[43]|43||
|0x00153C3C|aAnAnnuallyRevi|uint8_t[32]|32||
|0x00153C5C|aWeLookForwardT|uint8_t[36]|36||
|0x00153C80|aTheMembersOfTh_0|uint8_t[40]|40||
|0x00153CA8|aOfAAreDelighte|uint8_t[34]|34||
|0x00153CCA|aAcceptedThePos|uint8_t[52]|52||
|0x00153CFE|aFromTheStartOf|uint8_t[30]|30||
|0x00153D1C|aWeLookForwardT_0|uint8_t[36]|36||
|0x00153D40|aOther|uint8_t[6]|6||
|0x00153D46|aInternationalJ|uint8_t[24]|24||
|0x00153D5E|aInternationalJ_0|uint8_t[32]|32||
|0x00153D7E|aFr|uint8_t[3]|3||
|0x00153D81|aWc|uint8_t[3]|3||
|0x00153D84|aWcq|uint32_t|4||
|0x00153D88|aEc|uint8_t[3]|3||
|0x00153D8B|aEcq|uint32_t|4||
|0x00153D8F|aNac|uint32_t|4||
|0x00153D93|aCa|uint8_t[3]|3||
|0x00153D96|aAnc|uint32_t|4||
|0x00153D9A|aAc|uint8_t[3]|3||
|0x00153D9D|aOc|uint8_t[3]|3||
|0x00153DA0|aTnm|uint32_t|4||
|0x00153DA4|aTr|uint8_t[3]|3||
|0x00153DA7|aClubs|uint8_t[6]|6||
|0x00153DAD|aAddInternation|uint8_t[32]|32||
|0x00153DCD|aAddInternation_0|uint8_t[34]|34||
|0x00153DEF|aAddPlayer|uint8_t[11]|11||
|0x00153DFA|aRemovePlayer|uint8_t[14]|14||
|0x00153E08|aRemovePlayers|uint8_t[15]|15||
|0x00153E17|aToReplace|uint8_t[11]|11||
|0x00153E22|aSelect1MoreInt|uint8_t[41]|41||
|0x00153E4B|aSelect0MoreInt|uint8_t[43]|43||
|0x00153E76|aASquad|uint8_t[9]|9||
|0x00153E7F|aChangeSquad|uint8_t[13]|13||
|0x00153E8C|aSelectSquad|uint8_t[13]|13||
|0x00153E99|aSquadSelected|uint8_t[15]|15||
|0x00153EA8|aCannotPlayOldV|uint8_t[43]|43||
|0x00153ED3|aTraining|uint8_t[9]|9||
|0x00153EDC|aRes|uint32_t|4||
|0x00153EE0|aTrial|uint8_t[6]|6||
|0x00153EE6|aViewATeam|uint8_t[12]|12||
|0x00153EF2|aViewBTeam|uint8_t[12]|12||
|0x00153EFE|aUseMatchTeam|uint8_t[15]|15||
|0x00153F0D|aPleaseNoteATha|uint8_t[37]|37||
|0x00153F32|aBHasLeftTheClu|uint8_t[21]|21||
|0x00153F47|aPleaseNoteATha_0|uint8_t[39]|39||
|0x00153F6E|aBHasLeftTheClu_0|uint8_t[21]|21||
|0x00153F83|aPleaseNoteATha_1|uint8_t[23]|23||
|0x00153F9A|aHasJoinedTheCl|uint8_t[29]|29||
|0x00153FB7|aTspvhcfstpvhcf|uint8_t[131]|131||
|0x0015403A|aECQualifier|uint8_t[15]|15||
|0x00154049|aWorldCupQualif|uint8_t[30]|30||
|0x00154067|aWCQualifier|uint8_t[15]|15||
|0x00154076|aEuropeanTour|uint8_t[14]|14||
|0x00154084|aAfricanTour|uint8_t[13]|13||
|0x00154091|aSouthAmericanT|uint8_t[20]|20||
|0x001540A5|aNorthAmericanT|uint8_t[20]|20||
|0x001540B9|aAsianTour|uint8_t[11]|11||
|0x001540C4|aOceaniaTour|uint8_t[13]|13||
|0x001540D1|aTour|uint8_t[5]|5||
|0x001540D6|aInvitationTour|uint8_t[22]|22||
|0x001540EC|aInvTournament|uint8_t[15]|15||
|0x001540FB|aFriendly|uint8_t[9]|9||
|0x00154104|aFriendly_0|uint8_t[9]|9||
|0x0015410D|aFriendlies|uint8_t[11]|11||
|0x00154118|aWorldCupQualification|uint8_t[25]|25||
|0x00154131|aWorld|uint8_t[6]|6||
|0x00154137|aEuropeanChampionship|uint8_t[23]|23||
|0x0015414E|aWorld_0|uint8_t[6]|6||
|0x00154154|aEuropeanChampi_0|uint8_t[23]|23||
|0x0015416B|aECQualifyingGr|uint8_t[24]|24||
|0x00154183|aECQualifyingGr_0|uint8_t[24]|24||
|0x0015419B|aECQualifyingGr_1|uint8_t[24]|24||
|0x001541B3|aECQualifyingGr_2|uint8_t[24]|24||
|0x001541CB|aECQualifyingGr_3|uint8_t[24]|24||
|0x001541E3|aECQualifyingGr_4|uint8_t[24]|24||
|0x001541FB|aECQualifyingGr_5|uint8_t[24]|24||
|0x00154213|aECQualifyingGr_6|uint8_t[24]|24||
|0x0015422B|aECFinals|uint8_t[12]|12||
|0x00154237|aECQualifier_0|uint8_t[15]|15||
|0x00154246|aCopaAmerica|uint8_t[13]|13||
|0x00154253|aCopaAmerica_0|uint8_t[13]|13||
|0x00154260|aAfricanNations|uint8_t[20]|20||
|0x00154274|aAfricanCup|uint8_t[12]|12||
|0x00154280|aNorthAmericanC|uint8_t[19]|19||
|0x00154293|aNAmericanCup|uint8_t[15]|15||
|0x001542A2|aAsianCup|uint8_t[10]|10||
|0x001542AC|aAsianCup_0|uint8_t[10]|10||
|0x001542B6|aOceaniaCup|uint8_t[12]|12||
|0x001542C2|aOceaniaCup_0|uint8_t[12]|12||
|0x001542CE|aWorldCup|uint8_t[10]|10||
|0x001542D8|aWorldCupQualif_1|uint8_t[24]|24||
|0x001542F0|aWorldCupQualif_2|uint8_t[29]|29||
|0x0015430D|aWorldCupQualif_3|uint8_t[29]|29||
|0x0015432A|aWorldCupQualif_4|uint8_t[29]|29||
|0x00154347|aWorldCupQualif_5|uint8_t[29]|29||
|0x00154364|aWorldCupQualif_6|uint8_t[29]|29||
|0x00154381|aWorldCupQualif_7|uint8_t[29]|29||
|0x0015439E|aWorldCupQualif_8|uint8_t[29]|29||
|0x001543BB|aWorldCupQualif_9|uint8_t[29]|29||
|0x001543D8|aWorldCup_0|uint8_t[10]|10||
|0x001543E2|aWCQualifier_0|uint8_t[15]|15||
|0x001543F1|aFinalGroups|uint8_t[13]|13||
|0x001543FE|aFinalGroups_0|uint8_t[13]|13||
|0x0015440B|aPlayer|uint8_t[7]|7||
|0x00154412|aPlayerCoach|uint8_t[13]|13||
|0x0015441F|aCoach|uint8_t[6]|6||
|0x00154425|aCoach_0|uint8_t[6]|6||
|0x0015442B|aPlayerCoach_0|uint8_t[13]|13||
|0x00154438|aStartCareerAs|uint8_t[16]|16||
|0x00154448|aPlayer_0|uint64_t|8||
|0x00154450|aCoach_1|int8_t[8]|8||
|0x00154458|aPlayer_1|int8_t[8]|8||
|0x00154460|aCoach_2|uint64_t|8||
|0x00154468|aViewResult|uint8_t[12]|12||
|0x00154474|aMatch|uint8_t[10]|10||
|0x0015447E|aResult|uint8_t[11]|11||
|0x00154489|aDivision1|uint8_t[11]|11||
|0x00154494|aDivision2|uint8_t[11]|11||
|0x0015449F|aDivision3|uint8_t[11]|11||
|0x001544AA|aFileSavedByDif|uint8_t[41]|41||
|0x001544D3|aFileSavedOnDif|uint8_t[42]|42||
|0x001544FD|aAllPlayerTeams|uint8_t[23]|23||
|0x00154514|aFriendlyDiyGam|uint8_t[25]|25||
|0x0015452D|aFollowingAVote|uint8_t[54]|54||
|0x00154563|a3MatchesToTurn|uint8_t[57]|57||
|0x0015459C|aFollowingACris|uint8_t[53]|53||
|0x001545D1|aClearTheOverdr|uint8_t[49]|49||
|0x00154602|aContinueCareer|uint8_t[16]|16||
|0x00154612|aWelcomeToOurCl|uint8_t[40]|40||
|0x0015463A|aMuchSuccessFro|uint8_t[38]|38||
|0x00154660|aYourCareerIsOv|uint8_t[20]|20||
|0x00154674|aInsertGameSave|uint8_t[31]|31||
|0x00154693|aHighlights|uint8_t[11]|11||
|0x0015469E|aLoadHighlights|uint8_t[16]|16||
|0x001546AE|aSaveHighlights|uint8_t[16]|16||
|0x001546BE|aViewHighlights|uint8_t[16]|16||
|0x001546CE|aNotAHighlights|uint8_t[22]|22||
|0x001546E4|aHigh|uint8_t[5]|5||
|0x001546E9|aFormation|uint8_t[10]|10||
|0x001546F3|aNotACompetitio|uint8_t[23]|23||
|0x0015470A|aCompetitionFil|uint8_t[35]|35||
|0x0015472D|aCompetitionFil_0|uint8_t[39]|39||
|0x00154754|aTeamsPromoted0|uint8_t[19]|19||
|0x00154767|aTeamsPromoted0_0|uint8_t[43]|43||
|0x00154792|aTeamsRelegated|uint8_t[20]|20||
|0x001547A6|aTeamsRelegated_0|uint8_t[44]|44||
|0x001547D2|aReject|uint8_t[7]|7||
|0x001547D9|aRetire|uint8_t[7]|7||
|0x001547E0|aSaveCareer|uint8_t[12]|12||
|0x001547EC|aRnd1|uint8_t[6]|6||
|0x001547F2|aRnd2|uint8_t[6]|6||
|0x001547F8|aRnd3|uint8_t[6]|6||
|0x001547FE|aRnd4|uint8_t[6]|6||
|0x00154804|aRnd5|uint8_t[6]|6||
|0x0015480A|aRnd6|uint8_t[6]|6||
|0x00154810|aQF|uint32_t|4||
|0x00154814|aSF|uint32_t|4||
|0x00154818|aFinal|uint8_t[6]|6||
|0x0015481E|aFinal_0|uint8_t[6]|6||
|0x00154824|a3rd|uint32_t|4||
|0x00154828|aFinal_1|uint8_t[6]|6||
|0x0015482E|aYourChairman|uint8_t[14]|14||
|0x0015483C|a2Gk|uint8_t[7]|7||
|0x00154843|a3Gk|uint8_t[7]|7||
|0x0015484A|a4Gk|uint8_t[7]|7||
|0x00154851|aLoan|uint8_t[5]|5||
|0x00154856|aContinueA|uint8_t[12]|12||
|0x00154862|aReplayA|uint8_t[10]|10||
|0x0015486C|aSaveA|uint64_t|8||
|0x00154874|a01Season|uint8_t[13]|13||
|0x00154881|a001Season|uint8_t[14]|14||
|0x0015488F|a0EndSeason|uint8_t[14]|14||
|0x0015489D|aViewOppo|uint8_t[10]|10||
|0x001548A7|aViewCompetitio|uint8_t[18]|18||
|0x001548B9|aPound|int8_t[2]|2||
|0x001548BB|nullString_0|uint8_t|1||
|0x001548BC|a1k|int8_t[5]|5||
|0x001548C1|a0m|int8_t[5]|5||
|0x001548C6|a01m|int8_t[8]|8||
|0x001548CE|aSorryAButTheCl|uint8_t[43]|43||
|0x001548F9|aAnyFurtherPlay|uint8_t[41]|41||
|0x00154922|aPleaseNoteATha_2|uint8_t[39]|39||
|0x00154949|aAnyFurtherPlay_0|uint8_t[37]|37||
|0x0015496E|aPleaseTakeNote|uint8_t[49]|49||
|0x0015499F|aEnsureThatWeCl|uint8_t[55]|55||
|0x001549D6|aJustAReminderT|uint8_t[53]|53||
|0x00154A0B|aOrWeWillHaveTo|uint8_t[55]|55||
|0x00154A42|aItIsWithGreatR_0|uint8_t[50]|50||
|0x00154A74|aDecidedToRelie|uint8_t[54]|54||
|0x00154AAA|aPleaseTakeNote_0|uint8_t[52]|52||
|0x00154ADE|aEnsureThatItIs|uint8_t[52]|52||
|0x00154B12|aRememberUnless|uint8_t[50]|50||
|0x00154B44|aWeWillHaveToRe|uint8_t[52]|52||
|0x00154B78|aItIsWithGreatR_1|uint8_t[50]|50||
|0x00154BAA|aDecidedToRelie_0|uint8_t[54]|54||
|0x00154BE0|aJustANoteToWis_0|uint8_t[45]|45||
|0x00154C0D|aNewSeason_0|uint8_t[11]|11||
|0x00154C18|aWeAllHopeYouEn_0|uint8_t[53]|53||
|0x00154C4D|aBeforeHandingT_0|uint8_t[47]|47||
|0x00154C7C|aWelcomeToOurCl_0|uint8_t[49]|49||
|0x00154CAD|aSeasonInManage_0|uint8_t[49]|49||
|0x00154CDE|aWeAllWishYouTh_0|uint8_t[49]|49||
|0x00154D0F|aDistinguishedC_0|uint8_t[45]|45||
|0x00154D3C|aMATCHSTATS|uint8_t[22]|22||
|0x00154D52|aPossession|uint8_t[11]|11||
|0x00154D5D|aGoalAttempts|uint8_t[14]|14||
|0x00154D6B|aOnTarget|uint8_t[10]|10||
|0x00154D75|aCornersWon|uint8_t[12]|12||
|0x00154D81|aFoulsConceded|uint8_t[15]|15||
|0x00154D90|aBookings|uint8_t[9]|9||
|0x00154D99|aSendingsOff|uint8_t[13]|13||
|0x00154DA6|a442|uint8_t[6]|6||
|0x00154DAC|a541|uint8_t[6]|6||
|0x00154DB2|a451|uint8_t[6]|6||
|0x00154DB8|a532|uint8_t[6]|6||
|0x00154DBE|a352|uint8_t[6]|6||
|0x00154DC4|a433|uint8_t[6]|6||
|0x00154DCA|a424|uint8_t[6]|6||
|0x00154DD0|a343|uint8_t[6]|6||
|0x00154DD6|aSweep|uint8_t[6]|6||
|0x00154DDC|a523|uint8_t[6]|6||
|0x00154DE2|aAttack|uint8_t[7]|7||
|0x00154DE9|aDefend|uint8_t[7]|7||
|0x00154DF0|aUSER_A|uint8_t[7]|7||
|0x00154DF7|aUSER_B|uint8_t[7]|7||
|0x00154DFE|aUSER_C|uint8_t[7]|7||
|0x00154E05|aUSER_D|uint8_t[7]|7||
|0x00154E0C|aUSER_E|uint8_t[7]|7||
|0x00154E13|aUSER_F|uint8_t[7]|7||
|0x00154E1A|aLparen|uint16_t|2||
|0x00154E1C|aRparen|uint16_t|2||
|0x00154E1E|aAOfferForB|uint8_t[16]|16||
|0x00154E2E|aAOfferForBAndC|uint8_t[23]|23||
|0x00154E45|aAExchangeOffer|uint8_t[25]|25||
|0x00154E5E|aAExchangeOffer_0|uint8_t[32]|32||
|0x00154E7E|aAOfferFor|uint8_t[13]|13||
|0x00154E8B|aB|uint8_t[3]|3||
|0x00154E8E|aAOfferFor_0|uint8_t[13]|13||
|0x00154E9B|aBAndC|uint8_t[10]|10||
|0x00154EA5|aAExchangeOffer_1|uint8_t[22]|22||
|0x00154EBB|aB_0|uint8_t[3]|3||
|0x00154EBE|aAExchangeOffer_2|uint8_t[22]|22||
|0x00154ED4|aBAndC_0|uint8_t[10]|10||
|0x00154EDE|aAImprovedOffer|uint8_t[25]|25||
|0x00154EF7|aAImprovedOffer_0|uint8_t[32]|32||
|0x00154F17|aAImprovedExcha|uint8_t[34]|34||
|0x00154F39|aAImprovedExcha_0|uint8_t[41]|41||
|0x00154F62|aAImprovedOffer_1|uint8_t[22]|22||
|0x00154F78|aB_1|uint8_t[3]|3||
|0x00154F7B|aAImprovedOffer_2|uint8_t[22]|22||
|0x00154F91|aBAndC_1|uint8_t[10]|10||
|0x00154F9B|aAImprovedExcha_1|uint8_t[31]|31||
|0x00154FBA|aB_2|uint8_t[3]|3||
|0x00154FBD|aAImprovedExcha_2|uint8_t[31]|31||
|0x00154FDC|aBAndC_2|uint8_t[10]|10||
|0x00154FE6|aAFurtherImprov|uint8_t[33]|33||
|0x00155007|aAFurtherImprov_0|uint8_t[40]|40||
|0x0015502F|aAFurtherImprov_1|uint8_t[42]|42||
|0x00155059|aAFurtherImprov_2|uint8_t[49]|49||
|0x0015508A|aAFurtherImprov_3|uint8_t[30]|30||
|0x001550A8|aB_3|uint8_t[3]|3||
|0x001550AB|aAFurtherImprov_4|uint8_t[30]|30||
|0x001550C9|aBAndC_3|uint8_t[10]|10||
|0x001550D3|aAFurtherImprov_5|uint8_t[29]|29||
|0x001550F0|aOfferForB|uint8_t[13]|13||
|0x001550FD|aAFurtherImprov_6|uint8_t[30]|30||
|0x0015511B|aBAndC_4|uint8_t[10]|10||
|0x00155125|aJobOfferFromA|uint8_t[18]|18||
|0x00155137|aJobOfferFromAW|uint8_t[28]|28||
|0x00155153|aDearSirMadam|uint8_t[15]|15||
|0x00155162|aDearAB|uint8_t[11]|11||
|0x0015516D|aWeHereAtAWishT|uint8_t[26]|26||
|0x00155187|aWeHereAtAWishT_0|uint8_t[30]|30||
|0x001551A5|aOurOfferToBuy|uint8_t[17]|17||
|0x001551B6|aWeHereAtAWishT_1|uint8_t[30]|30||
|0x001551D4|aImproveOurOffe|uint8_t[25]|25||
|0x001551ED|aFromAInExchang|uint8_t[24]|24||
|0x00155205|aWeHereAtAWithd|uint8_t[27]|27||
|0x00155220|aOfferOn|uint8_t[9]|9||
|0x00155229|aWeHereAtARefus|uint8_t[32]|32||
|0x00155249|aImproveOnOurOf|uint8_t[28]|28||
|0x00155265|aWeHereAtAAreHa|uint8_t[32]|32||
|0x00155285|aWeHereAtAAreHa_0|uint8_t[36]|36||
|0x001552A9|aSorryAAreUnwil|uint8_t[31]|31||
|0x001552C8|aSorryAAreUnwil_0|uint8_t[35]|35||
|0x001552EB|aInADealWithAFo|uint8_t[22]|22||
|0x00155301|aAsThisPlayerIs|uint8_t[31]|31||
|0x00155320|aAsThesePlayers|uint8_t[35]|35||
|0x00155343|aAndWeWillAccep|uint8_t[38]|38||
|0x00155369|aThisPlayerFrom|uint8_t[27]|27||
|0x00155384|aAndWeWillAccep_0|uint8_t[37]|37||
|0x001553A9|aThesePlayersFr|uint8_t[29]|29||
|0x001553C6|aButWeWouldBeHa|uint8_t[40]|40||
|0x001553EE|aFavourableOffe|uint8_t[17]|17||
|0x001553FF|aUnlessTheOffer|uint8_t[33]|33||
|0x00155420|aWeHereAtAWould|uint8_t[43]|43||
|0x0015544B|aCoachingJobAtO|uint8_t[41]|41||
|0x00155474|aWeCanOfferYouA|uint8_t[47]|47||
|0x001554A3|aWeHopeToBeAble|uint8_t[43]|43||
|0x001554CE|aInTheRegionOfA|uint8_t[43]|43||
|0x001554F9|aWeLookForwardT_1|uint8_t[36]|36||
|0x0015551D|aWeHereAtAAreDe|uint8_t[37]|37||
|0x00155542|aHaveAcceptedTh|uint8_t[48]|48||
|0x00155572|aFromTheStartOf_0|uint8_t[30]|30||
|0x00155590|aWeHopeToBeAble_0|uint8_t[43]|43||
|0x001555BB|aInTheRegionOfA_0|uint8_t[43]|43||
|0x001555E6|aMemoFromTheClu|uint8_t[28]|28||
|0x00155602|aDearAB_0|uint8_t[11]|11||
|0x0015560D|aBestRegards|uint8_t[13]|13||
|0x0015561A|aComeOnAWeCanno|uint8_t[44]|44||
|0x00155646|aOrTheWageBillW|uint8_t[42]|42||
|0x00155670|aSorryAButTheDi|uint8_t[41]|41||
|0x00155699|aMoreTimeToNego|uint8_t[44]|44||
|0x001556C5|aWellDoneAYouDi_0|uint8_t[39]|39||
|0x001556EC|aThisSeasonAndW_0|uint8_t[37]|37||
|0x00155711|aAGoodSeasonAWe_0|uint8_t[34]|34||
|0x00155733|aPleasedWithYou_0|uint8_t[40]|40||
|0x0015575B|aAnUpAndDownSea_0|uint8_t[42]|42||
|0x00155785|aCanImproveOnTh_0|uint8_t[39]|39||
|0x001557AC|aNotAVeryGoodSe_0|uint8_t[43]|43||
|0x001557D7|aImproveTheTeam|uint8_t[43]|43||
|0x00155802|aAVeryDisappoin_0|uint8_t[41]|41||
|0x0015582B|aDemandsMuchBet|uint8_t[41]|41||
|0x00155854|aThanksForAllYo_0|uint8_t[41]|41||
|0x0015587D|aYouWellInYourN_0|uint8_t[25]|25||
|0x00155896|aBankStatement|uint8_t[15]|15||
|0x001558A5|aOldBalance|uint8_t[13]|13||
|0x001558B2|aNewBalance|uint8_t[13]|13||
|0x001558BF|aBalanceAtStart|uint8_t[28]|28||
|0x001558DB|aBalanceAtEndOf|uint8_t[31]|31||
|0x001558FA|aTotalProfit|uint8_t[14]|14||
|0x00155908|aTotalLoss|uint8_t[12]|12||
|0x00155914|aPlayerSales|uint8_t[14]|14||
|0x00155922|aPlayerPurchase|uint8_t[18]|18||
|0x00155934|aGateReceipts|uint8_t[15]|15||
|0x00155943|aGeneralRunning|uint8_t[23]|23||
|0x0015595A|aAdditionalInve|uint8_t[45]|45||
|0x00155987|aAdditionalInve_0|uint8_t[41]|41||
|0x001559B0|aCompetitionBon|uint8_t[33]|33||
|0x001559D1|aSponsorshipFor|uint8_t[34]|34||
|0x001559F3|aSeasonFromSens|uint8_t[27]|27||
|0x00155A0E|aPlayerWagesBil|uint8_t[19]|19||
|0x00155A21|aInsertBlankDis|uint8_t[27]|27||
|0x00155A3C|aInsertSwosDisk|uint8_t[33]|33||
|0x00155A5D|aInsertSwosDisk_0|uint8_t[33]|33||
|0x00155A7E|aCustomTeamsChanged|uint8_t[32]|32||
|0x00155A9E|aTacticsHaveBeenChanged|uint8_t[27]|27||
|0x00155AB9|aEditedTacticsWillBeLost|uint8_t[29]|29||
|0x00155AD6|aDiyCompetitionPrompt|uint8_t[35]|35||
|0x00155AF9|aDiyCompetition|uint8_t[34]|34||
|0x00155B1B|aPresetCompetitionPrompt|uint8_t[35]|35||
|0x00155B3E|aPresetCompetit|uint8_t[34]|34||
|0x00155B60|aSeasonPrompt|uint8_t[35]|35||
|0x00155B83|aSeason|uint8_t[34]|34||
|0x00155BA5|aCareerPrompt|uint8_t[35]|35||
|0x00155BC8|aCareer|uint8_t[34]|34||
|0x00155BEA|aDiy|uint32_t|4||
|0x00155BEE|aPreset|uint8_t[7]|7||
|0x00155BF5|aSeason_0|uint8_t[7]|7||
|0x00155BFC|aCareer_0|uint8_t[7]|7||
|0x00155C03|aTact|uint8_t[5]|5||
|0x00155C08|aName|uint8_t[5]|5||
|0x00155C0D|aMr|uint8_t[3]|3||
|0x00155C10|aMs|uint8_t[3]|3||
|0x00155C13|aOr|uint32_t|4||
|0x00155C17|aPlayEachTeamX1|uint8_t[19]|19||
|0x00155C2A|aPlayEachTeamX2|uint8_t[19]|19||
|0x00155C3D|aPlayEachTeamX3|uint8_t[19]|19||
|0x00155C50|aPlayEachTeamX4|uint8_t[19]|19||
|0x00155C63|aKnockout|uint8_t[9]|9||
|0x00155C6C|a1GroupOf1|uint8_t[14]|14||
|0x00155C7A|a0GroupsOf1|uint8_t[16]|16||
|0x00155C8A|aWinnersOfEachG|uint8_t[32]|32||
|0x00155CAA|aWinnersOfEachG_0|uint8_t[53]|53||
|0x00155CDF|aWinnersOfEachG_1|uint8_t[55]|55||
|0x00155D16|aTop0InEachGrou|uint8_t[31]|31||
|0x00155D35|aTop0InEachGrou_0|uint8_t[50]|50||
|0x00155D67|aTop0InEachGrou_1|uint8_t[54]|54||
|0x00155D9D|aMatchWinnersQu|uint8_t[24]|24||
|0x00155DB5|aMatchWinnersOn|uint8_t[37]|37||
|0x00155DDA|aTop0InGroupQua|uint8_t[26]|26||
|0x00155DF4|aMatchWinnerWin|uint8_t[31]|31||
|0x00155E13|aMatchWinnerOnA|uint8_t[44]|44||
|0x00155E3F|aGroupWinnerWin|uint8_t[31]|31||
|0x00155E5E|aClubTeams|uint8_t[11]|11||
|0x00155E69|aNationalTeams|uint8_t[15]|15||
|0x00155E78|aOriginalCustom|uint8_t[22]|22||
|0x00155E8E|aEditedCustomTe_0|uint8_t[20]|20||
|0x00155EA2|aSeeded|uint8_t[7]|7||
|0x00155EA9|aPlayTournament|uint8_t[16]|16||
|0x00155EB9|aPlayCup|uint8_t[9]|9||
|0x00155EC2|aPlayLeague|uint8_t[12]|12||
|0x00155ECE|aPlaySeason|uint8_t[12]|12||
|0x00155EDA|aPlayFriendly|uint8_t[14]|14||
|0x00155EE8|aViewSelectedTe|uint8_t[20]|20||
|0x00155EFC|aPl|uint8_t[3]|3||
|0x00155EFF|aW|uint16_t|2||
|0x00155F01|aD|uint16_t|2||
|0x00155F03|aL|uint16_t|2||
|0x00155F05|aF|uint16_t|2||
|0x00155F07|aA_0|uint16_t|2||
|0x00155F09|aPts|uint32_t|4||
|0x00155F0D|aNextRoundDraw|uint8_t[16]|16||
|0x00155F1D|aNextRound|uint8_t[11]|11||
|0x00155F28|aPlayReplays|uint8_t[13]|13||
|0x00155F35|a2ndLegRound|uint8_t[14]|14||
|0x00155F43|aDraw|uint8_t[5]|5||
|0x00155F48|aReplay|uint8_t[7]|7||
|0x00155F4F|aReplays|uint64_t|8||
|0x00155F57|a2ndReplay|uint8_t[11]|11||
|0x00155F62|a3rdReplay|uint8_t[11]|11||
|0x00155F6D|a2ndReplays|uint8_t[12]|12||
|0x00155F79|a3rdReplays|uint8_t[12]|12||
|0x00155F85|aComputer|uint8_t[9]|9||
|0x00155F8E|aSelect0Teams|uint8_t[16]|16||
|0x00155F9E|aSelect0MoreTea|uint8_t[21]|21||
|0x00155FB3|aSelect1MoreTea|uint8_t[19]|19||
|0x00155FC6|aSelect0LessTea|uint8_t[21]|21||
|0x00155FDB|aSelect1LessTea|uint8_t[19]|19||
|0x00155FEE|aNat|uint32_t|4||
|0x00155FF2|aNationality|uint8_t[12]|12||
|0x00155FFE|aChooseCompetit|uint8_t[19]|19||
|0x00156011|aChoosePresetCo|uint8_t[26]|26||
|0x0015602B|aChooseSeason|uint8_t[14]|14||
|0x00156039|aSelectTeamToEd|uint8_t[20]|20||
|0x0015604D|aChooseTeamsFor|uint8_t[18]|18||
|0x0015605F|aChangeTeamsFor|uint8_t[18]|18||
|0x00156071|aAllSelectedTea|uint8_t[24]|24||
|0x00156089|aTransferMarket|uint8_t[16]|16||
|0x00156099|aBuyPlayer|uint8_t[11]|11||
|0x001560A4|aBuyOtherDomest|uint8_t[26]|26||
|0x001560BE|aBuyOtherForeig|uint8_t[25]|25||
|0x001560D7|aSelectTeamToMa|uint8_t[22]|22||
|0x001560ED|aSelectTeamToIm|uint8_t[23]|23||
|0x00156104|aSelectSquadToV|uint8_t[21]|21||
|0x00156119|aFriendly_1|uint8_t[9]|9||
|0x00156122|aMakeNewCompeti|uint8_t[21]|21||
|0x00156137|aMakeNewDiyTour|uint8_t[24]|24||
|0x0015614F|aMakeNewDiyLeag|uint8_t[20]|20||
|0x00156163|aMakeNewDiyCup|uint8_t[17]|17||
|0x00156174|aContinue|uint8_t[9]|9||
|0x0015617D|aOn|uint8_t[3]|3||
|0x00156180|aOff|uint32_t|4||
|0x00156184|aOk|uint8_t[3]|3||
|0x00156187|aCopy|uint8_t[5]|5||
|0x0015618C|aUndo|uint8_t[5]|5||
|0x00156191|aExit|uint8_t[5]|5||
|0x00156196|aCancel|uint8_t[7]|7||
|0x0015619D|aImport|uint8_t[7]|7||
|0x001561A4|aFlipOn|uint64_t|8||
|0x001561AC|aFlipOff|uint8_t[9]|9||
|0x001561B5|aDiyCompetition_0|uint8_t[16]|16||
|0x001561C5|aSelectDiyCompe|uint8_t[28]|28||
|0x001561E1|aDiyLeague|uint8_t[11]|11||
|0x001561EC|aDiyCup|uint64_t|8||
|0x001561F4|aDiyTournament|uint8_t[15]|15||
|0x00156203|aDesignDiyLeagu|uint8_t[18]|18||
|0x00156215|aDesignDiyCup|uint8_t[15]|15||
|0x00156224|aDesignDiyTourn|uint8_t[22]|22||
|0x0015623A|aAbort|uint8_t[6]|6||
|0x00156240|aWinners_0|uint64_t|8||
|0x00156248|aV|uint16_t|2||
|0x0015624A|aPlus|uint16_t|2||
|0x0015624C|aMinus|uint16_t|2||
|0x0015624E|aClubBusiness|uint8_t[14]|14||
|0x0015625C|aNewJob|uint64_t|8||
|0x00156264|aNoJobOffers|uint8_t[14]|14||
|0x00156272|aJobOffers|uint8_t[11]|11||
|0x0015627D|aJobOffersBeing|uint8_t[28]|28||
|0x00156299|aFinishSeason|uint8_t[14]|14||
|0x001562A7|aPlayMatch|uint8_t[11]|11||
|0x001562B2|aNextMatch|uint8_t[11]|11||
|0x001562BD|aSquad|uint8_t[6]|6||
|0x001562C3|aSquads|uint8_t[7]|7||
|0x001562CA|aTactics|uint64_t|8||
|0x001562D2|aEditTactics|uint8_t[13]|13||
|0x001562DF|aEditTacticsSel|uint8_t[27]|27||
|0x001562FA|aBallInPlay|uint8_t[13]|13||
|0x00156307|aBallOutOfPlay|uint8_t[17]|17||
|0x00156318|aImportTactics|uint8_t[15]|15||
|0x00156327|aLoadEditedTact|uint8_t[20]|20||
|0x0015633B|aSaveEditedTact|uint8_t[20]|20||
|0x0015634F|aTransfers|uint8_t[10]|10||
|0x00156359|aViewWorld|uint8_t[11]|11||
|0x00156364|aTeams|uint8_t[6]|6||
|0x0015636A|aDescription|uint8_t[12]|12||
|0x00156376|aNumberOfTeams|uint8_t[16]|16||
|0x00156386|aPlayEachTeam|uint8_t[15]|15||
|0x00156395|aPointsForAWin|uint8_t[17]|17||
|0x001563A6|a2PtsForAWin|uint8_t[16]|16||
|0x001563B6|a3PtsForAWin|uint8_t[16]|16||
|0x001563C6|aX0|uint8_t[5]|5||
|0x001563CB|aSubstitutes|uint8_t[12]|12||
|0x001563D7|aFrom|uint8_t[5]|5||
|0x001563DC|a1stLeg|uint64_t|8||
|0x001563E4|a2ndLeg|uint64_t|8||
|0x001563EC|aLeg1|uint8_t[6]|6||
|0x001563F2|aLeg2|uint8_t[6]|6||
|0x001563F8|a1Leg|uint8_t[6]|6||
|0x001563FE|a2Legs|uint8_t[7]|7||
|0x00156405|aNoExtraTime|uint8_t[14]|14||
|0x00156413|aExtraTime|uint8_t[11]|11||
|0x0015641E|aETIfReplay|uint8_t[15]|15||
|0x0015642D|aNoPenalties|uint8_t[13]|13||
|0x0015643A|aPenalties|uint8_t[10]|10||
|0x00156444|aPensIfReplay|uint8_t[15]|15||
|0x00156453|aAfter90Mins|uint8_t[14]|14||
|0x00156461|aAfterExtraTime|uint8_t[17]|17||
|0x00156472|aPitchType|uint8_t[11]|11||
|0x0015647D|aRandom|uint8_t[7]|7||
|0x00156484|aFrozen|uint8_t[7]|7||
|0x0015648B|aMuddy|uint8_t[6]|6||
|0x00156491|aWet|uint32_t|4||
|0x00156495|aSoft|uint8_t[5]|5||
|0x0015649A|aNormal|uint8_t[7]|7||
|0x001564A1|aDry|uint32_t|4||
|0x001564A5|aHard|uint8_t[5]|5||
|0x001564AA|aAwayGoals|uint8_t[11]|11||
|0x001564B5|aTournament|uint8_t[11]|11||
|0x001564C0|aLeague|uint8_t[7]|7||
|0x001564C7|aCup|uint32_t|4||
|0x001564CB|aLeague_0|uint8_t[7]|7||
|0x001564D2|aCup_0|uint32_t|4||
|0x001564D6|aCup_1|uint32_t|4||
|0x001564DA|aCup_2|uint32_t|4||
|0x001564DE|aLeague_1|uint8_t[7]|7||
|0x001564E5|aPlayoffs|uint8_t[9]|9||
|0x001564EE|aPremierDivisio|uint8_t[17]|17||
|0x001564FF|aDivision1_0|uint8_t[11]|11||
|0x0015650A|aDivision2_0|uint8_t[11]|11||
|0x00156515|aDivision3_0|uint8_t[11]|11||
|0x00156520|aPremDiv|uint8_t[9]|9||
|0x00156529|aDiv1|uint8_t[6]|6||
|0x0015652F|aDiv2|uint8_t[6]|6||
|0x00156535|aDiv3|uint8_t[6]|6||
|0x0015653B|aChooseTeam|uint8_t[12]|12||
|0x00156547|aChooseTeams|uint8_t[13]|13||
|0x00156554|aChangeTeams|uint8_t[13]|13||
|0x00156561|aRounds|uint8_t[7]|7||
|0x00156568|aGroupA|uint64_t|8||
|0x00156570|aGroupB|uint64_t|8||
|0x00156578|aGroupC|uint64_t|8||
|0x00156580|aGroupD|uint64_t|8||
|0x00156588|aGroupE|uint64_t|8||
|0x00156590|aGroupF|uint64_t|8||
|0x00156598|aGroupG|uint64_t|8||
|0x001565A0|aGroupH|uint64_t|8||
|0x001565A8|aAttack_0|uint8_t[7]|7||
|0x001565AF|aDefend_0|uint8_t[7]|7||
|0x001565B6|aG|uint16_t|2||
|0x001565B8|aRb|uint8_t[3]|3||
|0x001565BB|aLb|uint8_t[3]|3||
|0x001565BE|aD_0|uint16_t|2||
|0x001565C0|aRw|uint8_t[3]|3||
|0x001565C3|aLw|uint8_t[3]|3||
|0x001565C6|aM|uint16_t|2||
|0x001565C8|aA_1|uint16_t|2||
|0x001565CA|aGoalkeeper|uint8_t[11]|11||
|0x001565D5|aDefender|uint8_t[9]|9||
|0x001565DE|aMidfielder|uint8_t[11]|11||
|0x001565E9|aAttacker|uint8_t[9]|9||
|0x001565F2|aFirstKit|uint8_t[10]|10||
|0x001565FC|aSecondKit|uint8_t[11]|11||
|0x00156607|aCareer_1|uint8_t[7]|7||
|0x0015660E|aCoach_3|uint8_t[6]|6||
|0x00156614|aCoach_4|uint8_t[7]|7||
|0x0015661B|aViewMatch|uint8_t[11]|11||
|0x00156626|aViewHighlights_0|uint8_t[16]|16||
|0x00156636|aManageMatch|uint8_t[13]|13||
|0x00156643|aStats|uint8_t[6]|6||
|0x00156649|aLeadingCompeti|uint8_t[33]|33||
|0x0015666A|aTopGoalScorers|uint8_t[17]|17||
|0x0015667B|aStatistics|uint8_t[11]|11||
|0x00156686|aHighestScorerL|uint8_t[20]|20||
|0x0015669A|aCompetitionInf|uint8_t[17]|17||
|0x001566AB|aViewSquads|uint8_t[12]|12||
|0x001566B7|aViewSquad|uint8_t[11]|11||
|0x001566C2|aManagementReco_0|uint8_t[18]|18||
|0x001566D4|aSeason_1|uint8_t[7]|7||
|0x001566DB|aSeasonal|uint8_t[9]|9||
|0x001566E4|aEditCustomTeam|uint8_t[18]|18||
|0x001566F6|aPresetCompetit_0|uint8_t[19]|19||
|0x00156709|aOptions|uint64_t|8||
|0x00156711|aHighlights_0|uint8_t[11]|11||
|0x0015671C|aBank|uint8_t[5]|5||
|0x00156721|aH|uint32_t|4||
|0x00156725|aA_2|uint32_t|4||
|0x00156729|aFirstRound|uint8_t[12]|12||
|0x00156735|aSecondRound|uint8_t[13]|13||
|0x00156742|aThirdRound|uint8_t[12]|12||
|0x0015674E|aFourthRound|uint8_t[13]|13||
|0x0015675B|aFifthRound|uint8_t[12]|12||
|0x00156767|aSixthRound|uint8_t[12]|12||
|0x00156773|aQuarterFinal|uint8_t[14]|14||
|0x00156781|aSemiFinal|uint8_t[11]|11||
|0x0015678C|aFinal_2|uint8_t[6]|6||
|0x00156792|aFinalGroup|uint8_t[12]|12||
|0x0015679E|aThirdPlacePlay|uint8_t[21]|21||
|0x001567B3|aRound1|uint64_t|8||
|0x001567BB|aRound2|uint64_t|8||
|0x001567C3|aRound3|uint64_t|8||
|0x001567CB|aRound4|uint64_t|8||
|0x001567D3|aRound5|uint64_t|8||
|0x001567DB|aRound6|uint64_t|8||
|0x001567E3|aQFinal|uint64_t|8||
|0x001567EB|aSFinal|uint64_t|8||
|0x001567F3|aFinal_3|uint8_t[6]|6||
|0x001567F9|aFinalGroup_0|uint8_t[12]|12||
|0x00156805|a3rdPlayOff|uint8_t[13]|13||
|0x00156812|aFinal_4|uint8_t[6]|6||
|0x00156818|aEnglish|uint64_t|8||
|0x00156820|aGerman|uint8_t[7]|7||
|0x00156827|aFrench|uint8_t[7]|7||
|0x0015682E|aItalian|uint64_t|8||
|0x00156836|aSpanish|uint64_t|8||
|0x0015683E|a3Mins|uint8_t[7]|7||
|0x00156845|a5Mins|uint8_t[7]|7||
|0x0015684C|a7Mins|uint8_t[7]|7||
|0x00156853|a10Mins|uint64_t|8||
|0x0015685B|aGameLength|uint8_t[12]|12||
|0x00156867|aFixPitchType|uint8_t[15]|15||
|0x00156876|aAutoReplays|uint8_t[13]|13||
|0x00156883|aAutoSaveHighli|uint8_t[21]|21||
|0x00156898|aMenuMusic|uint8_t[11]|11||
|0x001568A3|aLanguage|uint8_t[9]|9||
|0x001568AC|aPlay|uint8_t[5]|5||
|0x001568B1|aGoals|uint8_t[6]|6||
|0x001568B7|aForm|uint8_t[5]|5||
|0x001568BC|aLge|uint32_t|4||
|0x001568C0|aCups|uint8_t[5]|5||
|0x001568C5|aCup_3|uint32_t|4||
|0x001568C9|aInt|uint32_t|4||
|0x001568CD|aTot|uint32_t|4||
|0x001568D1|aOwnGoals|uint8_t[10]|10||
|0x001568DB|aExPlayerGoals|uint8_t[17]|17||
|0x001568EC|aJan|uint32_t|4||
|0x001568F0|aFeb|uint32_t|4||
|0x001568F4|aMar|uint32_t|4||
|0x001568F8|aApr|uint32_t|4||
|0x001568FC|aMay|uint32_t|4||
|0x00156900|aJun|uint32_t|4||
|0x00156904|aJul|uint32_t|4||
|0x00156908|aAug|uint32_t|4||
|0x0015690C|aSep|uint32_t|4||
|0x00156910|aOct|uint32_t|4||
|0x00156914|aNov|uint32_t|4||
|0x00156918|aDec|uint32_t|4||
|0x0015691C|aLoadOldCompeti|uint8_t[21]|21||
|0x00156931|aLoad|uint8_t[5]|5||
|0x00156936|aSave|uint8_t[5]|5||
|0x0015693B|aSaveExit|uint8_t[10]|10||
|0x00156945|aFilename|uint8_t[10]|10||
|0x0015694F|aDiskError|uint8_t[11]|11||
|0x0015695A|aDiskWriteProte|uint8_t[21]|21||
|0x0015696F|aNoDiskInDrive|uint8_t[17]|17||
|0x00156980|aFileNotFound|uint8_t[15]|15||
|0x0015698F|aDiskFull|uint8_t[10]|10||
|0x00156999|aCannotFormatGa|uint8_t[24]|24||
|0x001569B1|aNotATacticsFil|uint8_t[19]|19||
|0x001569C4|aEditedCustomTe|uint8_t[35]|35||
|0x001569E7|aCanOnlySaveMax|uint8_t[39]|39||
|0x00156A0E|aSaveDiskFiling|uint8_t[17]|17||
|0x00156A1F|aFormatSaveDisk|uint8_t[17]|17||
|0x00156A30|aDeleteFile|uint8_t[12]|12||
|0x00156A3C|aAny|uint32_t|4||
|0x00156A40|aPassing|uint64_t|8||
|0x00156A48|aShooting|uint8_t[9]|9||
|0x00156A51|aHeading|uint64_t|8||
|0x00156A59|aTackling|uint8_t[9]|9||
|0x00156A62|aBallControl|uint8_t[13]|13||
|0x00156A6F|aSpeed|uint8_t[6]|6||
|0x00156A75|aFinishing|uint8_t[10]|10||
|0x00156A7F|aFitness|uint64_t|8||
|0x00156A87|aCriteria|uint8_t[9]|9||
|0x00156A90|aPlayersOnDomes|uint8_t[27]|27||
|0x00156AAB|aPlayersOnForei|uint8_t[26]|26||
|0x00156AC5|aType|uint8_t[5]|5||
|0x00156ACA|aApproxValue|uint8_t[13]|13||
|0x00156AD7|aSkills|uint8_t[7]|7||
|0x00156ADE|aList|uint8_t[5]|5||
|0x00156AE3|aMore|uint8_t[5]|5||
|0x00156AE8|aSelectPlayerTo|uint8_t[31]|31||
|0x00156B07|aSelectPlayerTo_0|uint8_t[26]|26||
|0x00156B21|aPutPlayerOnTra|uint8_t[30]|30||
|0x00156B3F|aViewDomesticPl|uint8_t[28]|28||
|0x00156B5B|aViewForeignPla|uint8_t[27]|27||
|0x00156B76|aOffers|uint8_t[7]|7||
|0x00156B7D|aDiscardOffer|uint8_t[14]|14||
|0x00156B8B|aMakeOffer|uint8_t[11]|11||
|0x00156B96|aGiveFreeTransf|uint8_t[19]|19||
|0x00156BA9|aTakeOffMarket|uint8_t[16]|16||
|0x00156BB9|aPlayersCurrent|uint8_t[37]|37||
|0x00156BDE|aPutPlayerOnTra_0|uint8_t[30]|30||
|0x00156BFC|aViewOffers|uint8_t[12]|12||
|0x00156C08|aNoOffers|uint8_t[10]|10||
|0x00156C12|aConfirmOffer|uint8_t[14]|14||
|0x00156C20|aThirdPartyOffe|uint8_t[18]|18||
|0x00156C32|aAcceptOffer|uint8_t[13]|13||
|0x00156C3F|aRejectOffer|uint8_t[13]|13||
|0x00156C4C|aAskForMore|uint8_t[13]|13||
|0x00156C59|aResponseToOffe|uint8_t[18]|18||
|0x00156C6B|aMakeImprovedOf|uint8_t[20]|20||
|0x00156C7F|aJobOffer|uint8_t[10]|10||
|0x00156C89|aAccept|uint8_t[7]|7||
|0x00156C90|aConsider|uint8_t[9]|9||
|0x00156C99|aViewTeam|uint8_t[10]|10||
|0x00156CA3|aViewLeague|uint8_t[13]|13||
|0x00156CB0|a25k|uint8_t[5]|5||
|0x00156CB5|a50k|uint8_t[5]|5||
|0x00156CBA|a75k|uint8_t[5]|5||
|0x00156CBF|a100k|uint8_t[6]|6||
|0x00156CC5|a150k|uint8_t[6]|6||
|0x00156CCB|a200k|uint8_t[6]|6||
|0x00156CD1|a300k|uint8_t[6]|6||
|0x00156CD7|a500k|uint8_t[6]|6||
|0x00156CDD|a750k|uint8_t[6]|6||
|0x00156CE3|a1m|uint32_t|4||
|0x00156CE7|a15m|uint8_t[6]|6||
|0x00156CED|a2m|uint32_t|4||
|0x00156CF1|a3m|uint32_t|4||
|0x00156CF5|a5m|uint32_t|4||
|0x00156CF9|a10m|uint8_t[5]|5||
|0x00156CFE|a15m_0|uint32_t|4||
|0x00156D02|aEuropean|uint8_t[9]|9||
|0x00156D0B|aNorthAmerican|uint8_t[15]|15||
|0x00156D1A|aSouthAmerican|uint8_t[15]|15||
|0x00156D29|aAsian|uint8_t[6]|6||
|0x00156D2F|aOceanian|uint8_t[9]|9||
|0x00156D38|aAfrican|uint64_t|8||
|0x00156D40|aEur|uint32_t|4||
|0x00156D44|aNam|uint32_t|4||
|0x00156D48|aSam|uint32_t|4||
|0x00156D4C|aAsi|uint32_t|4||
|0x00156D50|aOce|uint32_t|4||
|0x00156D54|aAfr|uint32_t|4||
|0x00156D58|aEuro|int8_t[9]|9||
|0x00156D61|aNam_0|int8_t[9]|9||
|0x00156D6A|aSam_0|int8_t[9]|9||
|0x00156D73|aAsi_0|int8_t[9]|9||
|0x00156D7C|aOce_0|int8_t[9]|9||
|0x00156D85|aAfr_0|int8_t[9]|9||
|0x00156D8E|aWorldClubChamp|uint8_t[24]|24||
|0x00156DA6|aWorldClub|uint8_t[11]|11||
|0x00156DB1|aEuropeanChampi_1|uint8_t[23]|23||
|0x00156DC8|aEuropeanCup|uint8_t[13]|13||
|0x00156DD5|aEufaCup|uint8_t[9]|9||
|0x00156DDE|aEufaCup_0|uint8_t[9]|9||
|0x00156DE7|aEuropeanCupWin|uint8_t[25]|25||
|0x00156E00|aEuroCwCup|uint8_t[12]|12||
|0x00156E0C|aSouthAmericanC|uint8_t[19]|19||
|0x00156E1F|aLge_0|int8_t[9]|9||
|0x00156E28|aCup_10|int8_t[9]|9||
|0x00156E31|aCup1|int8_t[9]|9||
|0x00156E3A|aCup2|int8_t[9]|9||
|0x00156E43|aEuro_0|int8_t[9]|9||
|0x00156E4C|aInt_0|int8_t[9]|9||
|0x00156E55|aTot_0|int8_t[9]|9||
|0x00156E5E|aReplay_0|uint8_t[37]|37||
|0x00156E83|aReplay_1|uint8_t[27]|27||
|0x00156E9E|aAET|uint8_t[37]|37||
|0x00156EC3|aAET_0|uint8_t[27]|27||
|0x00156EDE|aAET90Mins23|uint8_t[37]|37||
|0x00156F03|aAET90Mins23_0|uint8_t[27]|27||
|0x00156F1E|aAWin01OnPens|uint8_t[37]|37||
|0x00156F43|aAWin01OnPens_0|uint8_t[27]|27||
|0x00156F5E|aAWin01OnPensAE|uint8_t[37]|37||
|0x00156F83|aAWin01OnPensAE_0|uint8_t[28]|28||
|0x00156F9F|aAWin01OnPensAE_1|uint8_t[42]|42||
|0x00156FC9|aAWin01OnPensAE_2|uint8_t[28]|28||
|0x00156FE5|aAETReplay|uint8_t[37]|37||
|0x0015700A|aAETReplay_0|uint8_t[27]|27||
|0x00157025|aAET90Mins23Rep|uint8_t[37]|37||
|0x0015704A|aAET90Mins23Rep_0|uint8_t[30]|30||
|0x00157068|aAWin01OnPensRe|uint8_t[37]|37||
|0x0015708D|aAWin01OnPens_1|uint8_t[27]|27||
|0x001570A8|aAWin01OnPensAE_3|uint8_t[37]|37||
|0x001570CD|aAWin01OnPensAE_4|uint8_t[28]|28||
|0x001570E9|aAWin01OnPensAE_5|uint8_t[42]|42||
|0x00157113|aAWin01OnPensAE_6|uint8_t[28]|28||
|0x0015712F|a1stLeg01|uint8_t[27]|27||
|0x0015714A|a1stLeg01_0|uint8_t[27]|27||
|0x00157165|aAWin23OnAgg|uint8_t[37]|37||
|0x0015718A|aAWin23OnAgg_0|uint8_t[27]|27||
|0x001571A5|aAWin23OnAggAET|uint8_t[37]|37||
|0x001571CA|aAWin23OnAggAET_0|uint8_t[28]|28||
|0x001571E6|a23OnAggAWinOnA|uint8_t[37]|37||
|0x0015720B|aAWinOnAwayGoal|uint8_t[27]|27||
|0x00157226|a23OnAggAWinOnA_0|uint8_t[42]|42||
|0x00157250|aAWinOnAwayGoal_0|uint8_t[28]|28||
|0x0015726C|a23OnAggAWin01O|uint8_t[37]|37||
|0x00157291|aAWin01OnPens_2|uint8_t[27]|27||
|0x001572AC|a23OnAggAWin01O_0|uint8_t[42]|42||
|0x001572D6|aAWin01OnPensAE_7|uint8_t[28]|28||
|0x001572F2|a23OnAgg|uint8_t[37]|37||
|0x00157317|a23OnAgg_0|uint8_t[27]|27||
|0x0015735C|goalBasePtr|uint32_t*|4|Pointer to current goal in highlight file|
|0x00157360|nextGoalPtr|uint32_t*|4|Pointer to next goal|
|0x00157364|spriteGraphicsPtr|uint8_t*|4||
|0x00157368|useIndividualPlayerSkinColor|uint16_t|2|If this is zero player skin/color will not be individualized, instead they will all<br>be using the skin/color that's most frequent in the team<br>(always 1)|
|0x001573C8|loaderBankBitmap|uint32_t|4||
|0x001573CC|loaderParam|uint32_t|4|Loader-provided startup parameter stored from d5 at boot.|
|0x001573D0|loaderMemTop|uint32_t|4||
|0x001573D4|surnameBuf|uint8_t[24]|24||
|0x001573EC|menuCursorFrame|uint16_t|2||
|0x001573EE|twoPlayers|uint16_t|2|If 0, then no joy2 check<br>1 - if no computer player (2 player game)<br>InitMainMenuStuff sets it to -1|
|0x001573F0|player1ClearFlag|uint16_t|2|!0 - Clear all control flags, 0 - don't<br>used when setting up teams, for blocking other player's controls|
|0x001573F2|player2ClearFlag|uint16_t|2|If it is non zero, joy2 is cleared and not checked|
|0x001573F4|deadVar01|uint16_t|2||
|0x001573F6|deadVar02|uint16_t|2||
|0x001573F8|internationalAutoAdvanceFlag|uint16_t|2|Boolean flag set during Career_AutoAdvanceInternationalCompetitionFixtures.|
|0x001573FA|seasonUpdateInProgress|uint16_t|2|Boolean flag set during Career_AdvanceToNextSeason_UpdateCompetitions.|
|0x001573FC|writeOnlyVar01|uint16_t|2||
|0x001573FE|highlightedLeagueTeamId|uint16_t|2|Team number to highlight in league table view; 0xFFFF when none.|
|0x00157400|oldPlayerSkill|uint16_t|2|?<br>In edit tactics: skill of the player that gets<br>replaced|
|0x00157402|newPlayerSkill|uint16_t|2|?<br>In edit tactics: skill of the player that<br>gets new position|
|0x00157404|team1SelectedPlayerIndex|uint16_t|2||
|0x00157406|team2SelectedPlayerIndex|uint16_t|2||
|0x00157408|careerFileBuffer|uint16_t|2||
|0x0015740A|tmdFileBuffer|uint8_t[54720]|54720||
|0x001649CA|currentSeasonShowing|uint16_t|2||
|0x001649CC|stayingInOldClub|uint16_t|2||
|0x001649CE|overdraftStreak|uint16_t|2||
|0x001649D0|overdraftWarningState|uint16_t|2||
|0x001649D2|performanceWarningState|uint16_t|2||
|0x001649D4|overdraftWarningCooldown|uint16_t|2||
|0x001649D6|performanceWarningCooldown|uint16_t|2||
|0x001649D8|youreSacked|uint16_t|2||
|0x001649DA|retired|uint16_t|2|0  = Active<br>!0 = retired<br>(career)|
|0x001649DC|competitionSlotUpdatedFlag|uint16_t|2|Set to 1 after DIY_UpdateCompetitionProgressOrAdvanceSlot.|
|0x001649DE|careerTeamLostMatch|uint16_t|2||
|0x001649E0|clubBusinessActive|uint16_t|2|If not zero, you're in overdraft|
|0x001649E2|newBalance|uint32_t|4||
|0x001649E6|old_balance|uint32_t|4||
|0x001649EA|playerPurchases|uint32_t|4||
|0x001649EE|playerSales|uint32_t|4||
|0x001649F2|generalRunningCosts|uint32_t|4||
|0x001649F6|playerWagesBill|uint32_t|4||
|0x001649FA|gateReceipts|uint32_t|4||
|0x001649FE|startingBalance|uint32_t|4||
|0x00164A02|startingBalanceCopy|uint32_t|4||
|0x00164A06|competitionBonuses|uint32_t|4||
|0x00164A0A|sensisoftPlcSponsorship|uint32_t|4||
|0x00164A0E|financeTotalsNeedResetFlag|uint16_t|2||
|0x00164A14|weeklyRunningCosts|uint32_t|4||
|0x00164A18|weeklyPlayerWages|uint32_t|4||
|0x00164A1C|totalTeamValue|uint32_t|4||
|0x00164A20|weeklyWageByPlayerIndex|uint8_t[128]|128||
|0x00164AA0|playerFormModifiers|uint8_t[32]|32|Per-player form recovery table indexed by player ordinal.|
|0x00164AC0|sensisoftPlcSponsorshipFactor|uint16_t|2||
|0x00164AC2|additionalInvestments|uint16_t|2|Additional investments from the new chairman.<br>0  - no<br>!0 - yes|
|0x00164AC8|teamValueDivisor|uint16_t|2||
|0x00164ACA|expectedLeagueRankIndex|uint16_t|2||
|0x00164ACC|boardConfidenceHistory0|uint16_t|2||
|0x00164ACE|boardConfidenceHistory1|uint16_t|2||
|0x00164AD0|boardConfidenceHistory2|uint16_t|2||
|0x00164AD2|boardConfidenceHistory3|uint16_t|2||
|0x00164AD4|boardConfidenceScore|uint16_t|2||
|0x00164AD6|previousBoardConfidence|uint16_t|2|Initialized to 0xFFFF in InitCareer; between boardConfidenceScore and playWinCupAnimation.|
|0x00164AD8|playWinCupAnimation|uint16_t|2||
|0x00164ADA|minorTrophyBonusActive|uint16_t|2||
|0x00164ADC|leagueTitleBonusActive|uint16_t|2||
|0x00164ADE|majorTrophyBonusActive|uint16_t|2||
|0x00164AE0|cupBonus1Active|uint16_t|2||
|0x00164AE2|cupBonus2Active|uint16_t|2||
|0x00164AE4|wonWorldCup|uint16_t|2||
|0x00164AE6|wonContinentalCup|uint16_t|2||
|0x00164AE8|wonInvitationTournament|uint16_t|2||
|0x00164AEA|qualifyingStage1PendingFlag0|uint16_t|2||
|0x00164AEC|qualifyingStage1PendingFlag1|uint16_t|2||
|0x00164AEE|qualifyingStage2PendingFlag0|uint16_t|2||
|0x00164AF0|qualifyingStage2PendingFlag1|uint16_t|2||
|0x00164AF2|isCareer|uint16_t|2||
|0x00164AF4|careerMatchSimulatedFlag|uint16_t|2||
|0x00164AF6|gamesPlayed|uint16_t|2|As a team manager|
|0x00164AF8|numWins|uint16_t|2|As a team manager|
|0x00164AFA|numDrawn|uint16_t|2|As a team manager|
|0x00164AFC|numLost|uint16_t|2|As a team manager|
|0x00164AFE|goalsScored|uint16_t|2|As a team manager|
|0x00164B00|goalsTaken|uint16_t|2|As a team manager|
|0x00164B02|boardConfidenceMod0|uint16_t|2||
|0x00164B04|boardConfidenceMod1|uint16_t|2||
|0x00164B06|boardConfidenceMod2|uint16_t|2||
|0x00164B08|boardConfidenceMod3|uint16_t|2||
|0x00164B0A|boardConfidenceValue0|uint16_t|2||
|0x00164B0C|boardConfidenceValue1|uint16_t|2||
|0x00164B0E|boardConfidenceMod4|uint16_t|2||
|0x00164B10|boardConfidenceMod5|uint16_t|2||
|0x00164B12|boardConfidenceMod6|uint16_t|2||
|0x00164B14|boardConfidenceMod7|uint16_t|2||
|0x00164B16|boardConfidenceMod8|uint16_t|2||
|0x00164B18|boardConfidenceMod9|uint16_t|2||
|0x00164B1A|contractNegotiationActive|uint16_t|2|Set to 1 in BeginContractNegotiationSequence.|
|0x00164B1C|wageScalingDivisor|uint16_t|2||
|0x00164B1E|teamNoOfferAccepted|uint16_t|2|-1 = Nothing accepted yet|
|0x00164B20|teamFundsAccepted|uint32_t|4||
|0x00164B24|isNationalSelector|uint16_t|2|0  - Club selector<br>!0 - national selector|
|0x00164B26|someTeamFlags|uint8_t|1|It seems that bit 1 must be set when<br>choosing teams for continent competitions<br>bit 0 must be clear for european championship<br>bit 6 must be set for world cup qualifications<br>bit 7 also (a guess)|
|0x00164B28|lastNationalityCall|uint16_t|2||
|0x00164B2A|nationalTeamNationality|uint8_t|1|Nationality code for the selected national team.|
|0x00164B2B|nationalTeamFileId|uint8_t|1|Team file code for the selected national team.|
|0x00164B2C|sameNationalCallFlag|uint16_t|2|Set to 1 when selTeamNumber equals lastNationalityCall during season init.|
|0x00164B2E|sackedReputationScore|uint16_t|2|Computed reputation when the manager is sacked as national selector.|
|0x00164B30|nationalSelectorReputationPoints|uint16_t|2||
|0x00164B32|nationalTeamFileCode|uint8_t|1||
|0x00164B34|seasonReview|uint16_t|2|>4 - Very dissapointing season<br> 3 - not a very good season<br> 2 - up and down season<br> 1 - good season<br> 0 - excellent season|
|0x00164B36|careerCupPickList|uint32_t|4||
|0x00164B4A|worldCupHostTeam|uint16_t|2|World Cup host/defending champion team number.|
|0x00164B4C|worldCupQualifyingTeam|uint16_t|2|Second World Cup seeded/qualifying team number.|
|0x00164B4E|euroChampionshipQualTeam|uint16_t|2|European Championship qualifying team number.|
|0x00164B50|selTeamNumber|uint16_t|2|Selected team number in career|
|0x00164B52|coachOrPlayer|uint16_t|2|Controls wheter player starts career as a coach<br>or a player-coach (0 = coach, 1 = player-coach,<br>or otherwise ;-))|
|0x00164B54|careerTeamLeague|uint16_t|2||
|0x00164B56|currentDivisionIndex|uint16_t|2||
|0x00164B58|leagueFirstRoundNumber|uint16_t|2|Starting round number for the league.|
|0x00164B5A|playPromotedAnimation|uint16_t|2||
|0x00164B5C|playRelegatedAnimation|uint16_t|2||
|0x00164B5E|mrOrMs|uint16_t|2|Controls wheter it is mr or ms in the career menu<br>0 = mr<br>1 = ms|
|0x00164B60|managerSexBuffer|uint32_t|4||
|0x00164B64|managerNameBuffer|uint8_t[9]|9||
|0x00164B6D|managerSurnameBuffer|uint8_t[13]|13||
|0x00164B7A|plNationality|uint8_t|1|Player nationality when starting career|
|0x00164B7B|pad_164B7B|uint8_t|1||
|0x00164B7C|winCupBonusCount|uint16_t|2||
|0x00164B7E|minorTrophyBonusCount|uint16_t|2||
|0x00164B80|majorTrophyBonusCount|uint16_t|2||
|0x00164B82|careerReputationPoints|uint16_t|2||
|0x00164B84|removedOfferPlayersFromSelectedTeamCount|uint16_t|2||
|0x00164B86|removedOfferPlayersFromOtherTeamsCount|uint16_t|2||
|0x00164B88|homeMarketUpdateBacklog|uint16_t|2|Counter incremented each career week; decremented to trigger home market player removal.|
|0x00164B8A|foreignMarketUpdateBacklog|uint16_t|2|Counter incremented each career week; decremented to trigger foreign market player removal.|
|0x00164B8C|offerExpiryIterationsRemaining|uint16_t|2||
|0x00164B8E|numForeignMarketPlayers|uint16_t|2||
|0x00164B90|numHomeMarketPlayers|uint16_t|2||
|0x00164B92|numOffers|uint16_t|2|For players transfer|
|0x00164B94|foreignMarketPlayers|uint8_t[60]|60||
|0x00164BD0|homeMarketPlayers|uint8_t[100]|100|Format of each element:<br>word - team number<br>byte - player ordinal<br>byte - padding|
|0x00164C34|transferOfferTable|uint8_t[70]|70||
|0x00164C7A|careerSeasonsCompleted|uint16_t|2|Incremented once per season; used to scale foreign player transfer pool size.|
|0x00164C7C|numForeignMarketPlayers2|uint16_t|2||
|0x00164C7E|pendingForeignPlayerCount|uint16_t|2|Count of foreign market players added but not yet applied this season.|
|0x00164C80|seasonTransferQuota|uint16_t|2|Per-season foreign transfer pool quota.|
|0x00164C82|transferPoolSlotLimit|uint16_t|2|Maximum transfer pool additions allowed this season.|
|0x00164C84|offerSwapSlotLimit|uint16_t|2|Maximum offer/swap operations allowed this season.|
|0x00164C86|transferPoolSlotsUsed|uint16_t|2|Count of transfer pool slots consumed this season.|
|0x00164C88|offerSwapSlotsUsed|uint16_t|2|Count of offer/swap slots consumed this season.|
|0x00164C8A|numNewJobOffers|uint16_t|2||
|0x00164C8C|newJobOffers|JobOffer[5]|130||
|0x00164D0E|numJobOffers|uint16_t|2||
|0x00164D10|jobOffers|JobOffer[5]|130||
|0x00164D92|timeToNegotiate|uint16_t|2|0 - No more time to negotiate before playing game|
|0x00164D94|numPlayersOnTransferMarket|uint16_t|2||
|0x00164D96|playersOnTransferMarket|uint8_t[10]|10|Contents are bit numbers|
|0x00164DA0|lastOfferPrimaryPlayerOrdinal|uint16_t|2||
|0x00164DA2|lastOfferExtraPlayersWanted|uint16_t|2||
|0x00164DA4|lastOfferSwapPlayerOrdinal|uint16_t|2||
|0x00164DA6|lastOfferExtraPlayerOrdinal|uint16_t|2||
|0x00164DA8|offerNegotiationAttemptCount|uint16_t|2||
|0x00164DAA|transferMarketRandOffset0|uint16_t|2|Random value (0-15) for transfer market initialization.|
|0x00164DAC|transferMarketRandOffset1|uint16_t|2|Random value (0-15) for transfer market initialization.|
|0x00164DAE|transferMarketRandOffset2|uint16_t|2|Random value (0-15) for transfer market initialization.|
|0x00164DB0|transferMarketPhase|uint16_t|2|Cleared to 0 in Career_InitTransferMarketState.|
|0x00164DB2|careerUnavailablePlayerList|uint8_t[16]|16||
|0x00164DC2|careerUnavailablePlayerLookupTable|uint8_t|1||
|0x00164E12|careerUnavailablePlayerNames|uint8_t|1||
|0x00164F66|currentMatchPlayers|uint8_t[32]|32||
|0x00164F86|careerTeam|TeamFileEx|1292||
|0x00165492|careerNumPlayers|uint16_t|2|Max 16|
|0x00165494|selTeamSelectedPlayerPosition|uint16_t|2||
|0x00165496|removedPlayerStatAccum|uint16_t|2|Accumulates player performance stat bytes from removed players.|
|0x00165498|seasonInformationsArray|uint8_t[2120]|2120||
|0x00165CE0|lastFinancialWeekIndex|uint16_t|2||
|0x00165CE2|diyLeagueSeasonStateTable|uint8_t[2000]|2000||
|0x001664B2|currentTeam|TeamFileEx|1292||
|0x001669BE|playerPositions|uint8_t[32]|32|Translate player index in play match menu to player index in the team file<br>corresponds to playerNumbers in Team (file)|
|0x001669DE|numPlayers|uint16_t|2|In play match menu selected teams|
|0x001669E0|currentTeamNumber|uint16_t|2|Gets compared with team country numbers|
|0x001669E2|currentTeamSelectedPlayerPosition|uint16_t|2||
|0x001669E4|trainingMatchSavedPlayerPos|uint16_t|2|Saved selTeamSelectedPlayerPosition during training match save/restore.|
|0x001669E6|trainingMatchSavedPlayers|uint8_t[32]|32||
|0x00166A06|trainingMatchSavedShirtNums|uint8_t[32]|32|Saved player shirt number bytes for training match state.|
|0x00166A26|trainingMatchSavedTactics|uint16_t|2|Saved TEAMFILE_TACTICS byte for training match state. Accessed with move.b.|
|0x00166A28|lastMatchSavedPlayerPos|uint16_t|2|Saved selTeamSelectedPlayerPosition for last match state.|
|0x00166A2A|lastMatchSavedCoachOrPlayer|uint16_t|2|Saved coachOrPlayer mode for last match state.|
|0x00166A2C|lastMatchPlayers|uint8_t[32]|32|Maybe|
|0x00166A4C|lastMatchSavedShirtNums|uint8_t[32]|32|Saved player shirt number bytes for last match state.|
|0x00166A6C|currentTactics|uint8_t|1||
|0x00166A6D|lastMatchSavedTeamControls|uint8_t|1|Saved TEAMFILE_TEAMCONTROLS byte for last match state.|
|0x00166A6E|careerLastMatchIndexByCompetitionSlot|uint8_t[162]|162||
|0x00166B10|seasonFinished|uint16_t|2|0  - No<br>!0 - yes|
|0x00166B12|careerFinished|uint16_t|2|0  = Still playing<br>!0 = season finished|
|0x00166B14|currentCompetitionPtr|CompetitionCup*|4||
|0x00166B18|secondaryCompetitionPtr|CompetitionCup*|4||
|0x00166B1C|tertiaryCompetitionPtr|uint32_t|4||
|0x00166B20|quaternaryCompetitionPtr|uint32_t|4||
|0x00166B24|diyCompetitionPtr|uint8_t*|4|Pointer to the 5th competition slot (DIY). Cleared on season init.|
|0x00166B28|euroCupSlotIndex|uint16_t|2|Euro cup slot index: 0=major trophy, 1=cup bonus 1, 2=cup bonus 2.|
|0x00166B2A|diyCompetitionTablePtr|uint8_t*|4|Pointer to DIY competition setup table.|
|0x00166B2E|seasonNumberOfSquads|uint16_t|2|Number of squads selected when playing season|
|0x00166B30|seasonSquadTeamNumbers|uint16_t[24]|48|Array of team numbers of squads in the current season.|
|0x00166B60|careerCompetitionSlotPtrTable|uint8_t[20]|20||
|0x00166B74|competitionContext|uint32_t|4||
|0x00166B78|secondaryCompetitionName|int8_t[36]|36|String buffer holding the secondary competition name.|
|0x00166B9C|secondaryCompStringOffset|uint32_t|4|String offset for secondary competition name in season info.|
|0x00166BA4|minorTrophyBonusValue|uint8_t|1||
|0x00166BAE|secondaryCompWinnerTeam|uint16_t|2|Team number of secondary competition winner for bonus check.|
|0x00166BB2|secondaryCompSlotStateA|uint16_t|2|Competition slot state A for secondary competition.|
|0x00166BB4|secondaryCompSlotStateB|uint16_t|2|Competition slot state B for secondary competition.|
|0x00166BB6|secondaryCompSlotStateC|uint16_t|2|Competition slot state C for secondary competition.|
|0x00166BC0|secondaryCompFinished|uint16_t|2|Flag for secondary competition completion.|
|0x001676C8|tertiaryCompetitionContext|uint32_t|4||
|0x001676CC|tertiaryCompetitionName|int8_t[36]|36|String buffer holding the tertiary competition name.|
|0x001676F0|tertiaryCompStringOffset|uint32_t|4|String offset for tertiary competition name in season info.|
|0x001676F8|leagueTitleBonusValue|uint8_t|1||
|0x00167702|tertiaryCompWinnerTeam|uint16_t|2|Team number of tertiary competition winner for bonus check.|
|0x00167706|tertiaryCompSlotStateA|uint16_t|2|Competition slot state A for tertiary competition.|
|0x00167708|tertiaryCompSlotStateB|uint16_t|2|Competition slot state B for tertiary competition.|
|0x0016770A|tertiaryCompSlotStateC|uint16_t|2|Competition slot state C for tertiary competition.|
|0x00167714|tertiaryCompFinished|uint16_t|2|Flag for tertiary competition completion.|
|0x00167B0C|diyCompetitionContext|uint8_t[62]|62|Base of the 5th competition slot (DIY) context buffer.|
|0x00167B4A|diyCompSlotStateA|uint16_t|2|Competition slot state A for DIY competition.|
|0x00167B4C|diyCompSlotStateB|uint16_t|2|Competition slot state B for DIY competition.|
|0x00167B4E|diyCompSlotStateC|uint16_t|2|Competition slot state C for DIY competition.|
|0x00167F50|euroCupsCompetitionContext|uint32_t|4||
|0x00167F54|quaternaryCompetitionName|uint8_t[36]|36|String buffer holding the quaternary competition name.|
|0x00167F78|quaternaryCompStringOffset|uint32_t|4|String offset for quaternary competition name in season info.|
|0x00167F80|majorTrophyOrCupBonusValue|uint8_t|1||
|0x00167F8A|quaternaryCompWinnerTeam|uint16_t|2|Team number of quaternary competition winner for bonus check.|
|0x00167F8E|quaternaryCompSlotStateA|uint16_t|2|Competition slot state A for quaternary competition.|
|0x00167F90|quaternaryCompSlotStateB|uint16_t|2|Competition slot state B for quaternary competition.|
|0x00167F92|quaternaryCompSlotStateC|uint16_t|2|Competition slot state C for quaternary competition.|
|0x00168AA4|teamBudgetRankTable|uint8_t|1||
|0x00168B24|euroCupCopy|CompetitionCup2_4_2_32|78||
|0x00168B72|cupWinnersCupCopy|CompetitionCup_6_2_64|92||
|0x00168BCE|uefaCupCopy|CompetitionCup_6_2_64|92||
|0x00168C2A|invitationTournamentCopy|CompetitionCup_6_2_8|36||
|0x00168C4E|tourCopy|CompetitionCup_6_2_8|36||
|0x00168C72|friendlyCopy|CompetitionCup_6_2_12|40||
|0x00168C9A|europeanChampionships2Copy|CompetitionCup2_4_2_32|78||
|0x00168CE8|ecQualifyingGroup1Copy|CompetitionCup_6_2_12|40||
|0x00168D10|ecQualifyingGroup2Copy|CompetitionCup_6_2_12|40||
|0x00168D38|ecQualifyingGroup3Copy|CompetitionCup_6_2_12|40||
|0x00168D60|ecQualifyingGroup4Copy|CompetitionCup_6_2_12|40||
|0x00168D88|ecQualifyingGroup5Copy|CompetitionCup_6_2_12|40||
|0x00168DB0|ecQualifyingGroup6Copy|CompetitionCup_6_2_12|40||
|0x00168DD8|ecQualifyingGroup7Copy|CompetitionCup_6_2_12|40||
|0x00168E00|ecQualifyingGroup8Copy|CompetitionCup_6_2_8|36||
|0x00168E24|copaAmericaCopy|CompetitionCup2_4_2_24|70||
|0x00168E6A|africanNationsCupCopy|CompetitionCup2_6_2|48||
|0x00168E9A|northAmericanCupCopy|CompetitionCup2_4_2|46||
|0x00168EC8|asianCupCopy|CompetitionCup2_6_2|48||
|0x00168EF8|oceaniaCupCopy|CompetitionCup_6_2|28||
|0x00168F14|worldCup2Copy|CompetitionCup2_6_2_64|112||
|0x00168F84|worldCupQualifyingGroup1Copy|CompetitionCup_6_2_12|40||
|0x00168FAC|worldCupQualifyingGroup2Copy|CompetitionCup_6_2_12|40||
|0x00168FD4|worldCupQualifyingGroup3Copy|CompetitionCup_6_2_12|40||
|0x00168FFC|worldCupQualifyingGroup4Copy|CompetitionCup_6_2_12|40||
|0x00169024|worldCupQualifyingGroup5Copy|CompetitionCup_6_2_12|40||
|0x0016904C|worldCupQualifyingGroup6Copy|CompetitionCup_6_2_12|40||
|0x00169074|worldCupQualifyingGroup7Copy|CompetitionCup_6_2_12|40||
|0x0016909C|worldCupQualifyingGroup8Copy|CompetitionCup_6_2_12|40||
|0x001690C4|northAmericaWorldCupQualificationCopy|CompetitionCup2_6_2_24|72||
|0x0016910C|southAmericaWorldCupQualificationCopy|CompetitionCup2_6_2_16|64||
|0x0016914C|africaWorldCupQualificationCopy|CompetitionCup2_6_2_64|112||
|0x001691BC|asiaWorldCupQualificationCopy|CompetitionCup2_6_2_60|108||
|0x00169228|oceaniaWorldCupQualificationCopy|CompetitionCup_6_2_8|36||
|0x0016924C|teamSelectionKeyCacheIndex|uint16_t|2||
|0x0016924E|teamSelectionKeyCacheOffset|uint16_t|2||
|0x00169250|teamSelectionKeyCacheCount|uint16_t|2||
|0x00169252|careerSlotProcessingInProgress|uint16_t|2||
|0x00169254|teamSelectionKeyCache|uint8_t|1||
|0x00169255|careerJobOfferPhaseBias|uint8_t|1||
|0x001699A2|careerForeignMarketPlayers|MarketPlayer[352]|14784||
|0x0016E082|teamSelectionKeyCacheEnd|uint16_t|2||
|0x0016E084|competitionFileBuffer|int8_t[2]|2||
|0x0016E086|competitionOver|uint16_t|2|1 = Over<br>Used when setting "replay..." or "continue..." in main menu|
|0x0016E088|diyPresetNameOfCompetition|uint8_t[36]|36||
|0x0016E0AC|primaryCompStringOffset|uint32_t|4|String offset for primary competition name in season info.|
|0x0016E0B4|majorTrophyBonusValue|uint8_t|1||
|0x0016E0B6|numDiyTeams|uint16_t|2||
|0x0016E0BE|primaryCompWinnerTeam|uint16_t|2|Team number of primary competition winner.|
|0x0016E0C0|primaryCompSquadViewParam|uint16_t|2|Parameter for SelectAndShowSquadToView for the primary competition.|
|0x0016E0C2|primaryCompSlotStateA|uint16_t|2|Competition slot state A for primary competition.|
|0x0016E0C4|primaryCompSlotStateB|uint16_t|2|Competition slot state B for primary competition.|
|0x0016E0C6|primaryCompSlotStateC|uint16_t|2|Competition slot state C for primary competition.|
|0x0016E0D8|diyTeamMinDivisionIndex|uint16_t|2||
|0x0016E0DA|diyTeamMaxDivisionOffset|uint16_t|2||
|0x0016E0DC|leaguePromotionCount|uint16_t|2|Number of promotion slots in the league.|
|0x0016E0DE|leagueRelegationCount|uint16_t|2|Number of relegation slots in the league.|
|0x0016E0E4|leagueWarningsEnabled|uint16_t|2|Flag enabling league performance/overdraft warnings.|
|0x0016E11E|diyTeamIdListType2|uint8_t[148]|148|Array of team IDs for competition type 2 (cup format).|
|0x0016E1B2|diyTeamIdListType0|uint8_t[288]|288|Array of team IDs for competition type 0 (league format).|
|0x0016E2D2|diyTeamIdListType1|uint8_t[2310]|2310|Array of team IDs for competition type 1.|
|0x0016EBD8|viewRandomPhase|uint8_t|1||
|0x0016EBD9|seasonPlaying|uint8_t|1|Season number in career file|
|0x0016EBDA|inFriendlyMenu|uint16_t|2|ShowFriendlyMenu sets it to 1|
|0x0016EBDC|isNationalTeam|uint16_t|2|1 If team is national team (team number<br>between 80 and 85) in edit tactics|
|0x0016EBDE|gameType|GameTypes|2|This var controls continue/abort prompt<br>and many other things<br>0 = playing nothing<br>1 = DIY competition<br>2 = preset competition<br>3 = season<br>4 = career<br>other values = career|
|0x0016EBE0|contestStarted|uint16_t|2|Maybe, sets it to 0 at start; write-only|
|0x0016EBE2|careerLoadedFlag|uint16_t|2||
|0x0016EBE4|teamTacticsUSERA|TeamTactics|370||
|0x0016ED56|teamTacticsUSERB|TeamTactics|370||
|0x0016EEC8|teamTacticsUSERC|TeamTactics|370||
|0x0016F03A|teamTacticsUSERD|TeamTactics|370||
|0x0016F1AC|teamTacticsUSERE|TeamTactics|370||
|0x0016F31E|teamTacticsUSERF|TeamTactics|370||
|0x0016F490|gameLength|int16_t|2|0 = 3 Min, 1 = 5 min, 2 = 7 min, 3 = 10 min|
|0x0016F492|autoReplays|int16_t|2||
|0x0016F494|menuMusic|int16_t|2|0 = No music|
|0x0016F496|autoSaveHighlights|int16_t|2||
|0x0016F498|allPlayerTeamsEqual|int16_t|2||
|0x0016F49A|pitchType|int16_t|2|-2 = Seasonal<br>-1 = random<br>0  = frozen<br>1  = muddy<br>2  = wet<br>3  = soft<br>4  = normal<br>5  = dry<br>6  = hard|
|0x0016F49C|seed2|uint8_t|1|In Rand|
|0x0016F49D|randXorIndex2|uint8_t|1||
|0x0016F49E|randXorKey2|uint8_t|1|In Rand|
|0x0016F49F|newRandomSeedCopy|uint8_t|1|Write only|
|0x0016F4A0|randomSeed|uint16_t|2|CurrentTick gets copied here from time to time|
|0x0016F4A2|saveFileVersion|uint16_t|2|Save file version marker. Set to 0x1200 on save.|
|0x0016F4A4|saveFileMagic1|uint32_t|4|First 4 bytes of save file magic identifier.|
|0x0016F4A8|saveFileMagic2|uint32_t|4|Second 4 bytes of save file magic identifier.|
|0x0016F4AC|saveFileMagic3|uint32_t|4|Third 4 bytes of save file magic identifier.|
|0x0016F4B0|saveFileAmigaType|uint32_t|4|Amiga type marker set to j_start entry point on save.|
|0x0016F4B4|numSelectedTeams|uint16_t|2||
|0x0016F4B6|selTeamsPtr|TeamFile*|4|Points to selected teams buffer (filled by GoGetTeamsForPlay)|
|0x0016F4BA|selTeamIsComputerFlag|uint8_t|1|Flag: 1=computer-controlled team.|
|0x0016F4BB|selTeamNameBase|uint8_t|1|First byte of team name in selected team buffer.|
|0x0016F4CF|selTeamImportField|uint8_t|1|Field at offset 0x19 in selected team entry, saved/restored during import.|
|0x0016F4D4|selTeamSocksColor|uint8_t|1|Socks primary color byte in selected team entry.|
|0x0016F4F2|selTeamPlayerIndices|uint8_t[1308]|1308|Player index/order array in selected team entry.|
|0x0016FA0E|editTeamsBuffer|uint8_t[43778]|43778||
|0x0017A510|editTeamsSaveVarsArea|uint8_t[21002]|21002||
|0x0017FFE6|saveGameLength|uint16_t|2||
|0x0017FFF2|irqCookieObfuscated|uint32_t|4||
|0x0017FFF6|chipRamBitmapEnd|uint8_t|1|End marker of chip RAM bitmap area used as loop boundary.|
