#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetMusicRef
	 */
	struct AScramSportManagerBowling_Blueprint_C_GetMusicRef_Params
	{
	public:
		class USoundBase*                                          AudioRef;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SaveBowlingState
	 */
	struct AScramSportManagerBowling_Blueprint_C_SaveBowlingState_Params
	{
	public:
		struct FBowlingScrambleState                               ScrambleState;                                           // 0x0000(0x0080)  (Parm, OutParm)
		TArray<struct FBowlingFrameSet>                            TraditionalFrameSets;                                    // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateMatchScore
	 */
	struct AScramSportManagerBowling_Blueprint_C_NetUpdateMatchScore_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetRelativeScore
	 */
	struct AScramSportManagerBowling_Blueprint_C_GetRelativeScore_Params
	{
	public:
		int32_t                                                    RelativeScore;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetHideScoreCards
	 */
	struct AScramSportManagerBowling_Blueprint_C_NetHideScoreCards_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetPrepareScoreCards
	 */
	struct AScramSportManagerBowling_Blueprint_C_NetPrepareScoreCards_Params
	{
	public:
		int32_t                                                    NumFrames;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumPlayers;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateTraditionalScore
	 */
	struct AScramSportManagerBowling_Blueprint_C_NetUpdateTraditionalScore_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BuildScoreString
	 */
	struct AScramSportManagerBowling_Blueprint_C_BuildScoreString_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6QTD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Result;                                                  // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.FilterLaneTypes
	 */
	struct AScramSportManagerBowling_Blueprint_C_FilterLaneTypes_Params
	{
	public:
		TArray<class FName>                                        LanesIn;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       Randomize;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_K849[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FName>                                        LanesOut;                                                // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateScrambleLists
	 */
	struct AScramSportManagerBowling_Blueprint_C_UpdateScrambleLists_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SpawnAI
	 */
	struct AScramSportManagerBowling_Blueprint_C_SpawnAI_Params
	{
	public:
		bool                                                       Player1;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MYJ8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateResults
	 */
	struct AScramSportManagerBowling_Blueprint_C_UpdateResults_Params
	{
	public:
		int32_t                                                    Score0;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Score1;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetVideoBoard
	 */
	struct AScramSportManagerBowling_Blueprint_C_GetVideoBoard_Params
	{
	public:
		class ABW_VideoBoard_Training_C*                           VideoBoard;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Cleanup
	 */
	struct AScramSportManagerBowling_Blueprint_C_Cleanup_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Initialize
	 */
	struct AScramSportManagerBowling_Blueprint_C_Initialize_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UserConstructionScript
	 */
	struct AScramSportManagerBowling_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_F44468EB4040BF2A0703018CD06BD38B
	 */
	struct AScramSportManagerBowling_Blueprint_C_OnLoaded_F44468EB4040BF2A0703018CD06BD38B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_DDE06F4D473B8945A2362CB797C3F835
	 */
	struct AScramSportManagerBowling_Blueprint_C_OnLoaded_DDE06F4D473B8945A2362CB797C3F835_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_7650529845E7E25F135EACAAD84131AF
	 */
	struct AScramSportManagerBowling_Blueprint_C_OnLoaded_7650529845E7E25F135EACAAD84131AF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveBeginPlay
	 */
	struct AScramSportManagerBowling_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveEndPlay
	 */
	struct AScramSportManagerBowling_Blueprint_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BowlingEvent
	 */
	struct AScramSportManagerBowling_Blueprint_C_BowlingEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PregameStart
	 */
	struct AScramSportManagerBowling_Blueprint_C_PregameStart_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchStart
	 */
	struct AScramSportManagerBowling_Blueprint_C_MatchStart_Params
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginGame
	 */
	struct AScramSportManagerBowling_Blueprint_C_BeginGame_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfGame
	 */
	struct AScramSportManagerBowling_Blueprint_C_EndOfGame_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NextGame
	 */
	struct AScramSportManagerBowling_Blueprint_C_NextGame_Params
	{
	public:
		int32_t                                                    PreviousGameWinner;                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Game;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchOver
	 */
	struct AScramSportManagerBowling_Blueprint_C_MatchOver_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseInfo
	 */
	struct AScramSportManagerBowling_Blueprint_C_ShowPauseInfo_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WasPausedByMe;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseBubble
	 */
	struct AScramSportManagerBowling_Blueprint_C_ShowPauseBubble_Params
	{
	public:
		bool                                                       IsPaused;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameResume
	 */
	struct AScramSportManagerBowling_Blueprint_C_OnGameResume_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGamePause
	 */
	struct AScramSportManagerBowling_Blueprint_C_OnGamePause_Params
	{
	public:
		bool                                                       WasPausedByMe;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Three
	 */
	struct AScramSportManagerBowling_Blueprint_C_Three_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Two
	 */
	struct AScramSportManagerBowling_Blueprint_C_Two_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndingHorn
	 */
	struct AScramSportManagerBowling_Blueprint_C_EndingHorn_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PreTraditionalGameStart
	 */
	struct AScramSportManagerBowling_Blueprint_C_PreTraditionalGameStart_Params
	{
	public:
		int32_t                                                    NumFrames;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchStart
	 */
	struct AScramSportManagerBowling_Blueprint_C_TraditionalMatchStart_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginTraditionalGame
	 */
	struct AScramSportManagerBowling_Blueprint_C_BeginTraditionalGame_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfTraditionalGame
	 */
	struct AScramSportManagerBowling_Blueprint_C_EndOfTraditionalGame_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchOver
	 */
	struct AScramSportManagerBowling_Blueprint_C_TraditionalMatchOver_Params
	{
	public:
		EGameResult                                                Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateTraditionalScore
	 */
	struct AScramSportManagerBowling_Blueprint_C_UpdateTraditionalScore_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Pins;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameStart
	 */
	struct AScramSportManagerBowling_Blueprint_C_TraditionalFrameStart_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameEnd
	 */
	struct AScramSportManagerBowling_Blueprint_C_TraditionalFrameEnd_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       isLastFrame;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SetGameTimeRemaining
	 */
	struct AScramSportManagerBowling_Blueprint_C_SetGameTimeRemaining_Params
	{
	public:
		class USoundWave*                                          PlayingSoundWave;                                        // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      PlaybackPercent;                                         // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameOver
	 */
	struct AScramSportManagerBowling_Blueprint_C_GameOver_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SyncTimer
	 */
	struct AScramSportManagerBowling_Blueprint_C_SyncTimer_Params
	{
	public:
		float                                                      TimeRemaining;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.LoadBowlingState
	 */
	struct AScramSportManagerBowling_Blueprint_C_LoadBowlingState_Params
	{
	public:
		struct FBowlingScrambleState                               ScrambleState;                                           // 0x0000(0x0080)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<struct FBowlingFrameSet>                            TraditionalFrameSets;                                    // 0x0080(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ServerReady
	 */
	struct AScramSportManagerBowling_Blueprint_C_ServerReady_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameDone
	 */
	struct AScramSportManagerBowling_Blueprint_C_OnGameDone_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PlayBonusBallAudio
	 */
	struct AScramSportManagerBowling_Blueprint_C_PlayBonusBallAudio_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndGameDisablePause
	 */
	struct AScramSportManagerBowling_Blueprint_C_EndGameDisablePause_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ExecuteUbergraph_ScramSportManagerBowling_Blueprint
	 */
	struct AScramSportManagerBowling_Blueprint_C_ExecuteUbergraph_ScramSportManagerBowling_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V7NN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameTimeEnded__DelegateSignature
	 */
	struct AScramSportManagerBowling_Blueprint_C_GameTimeEnded__DelegateSignature_Params
	{	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BWGameEnd__DelegateSignature
	 */
	struct AScramSportManagerBowling_Blueprint_C_BWGameEnd__DelegateSignature_Params
	{
	public:
		EGameResult                                                MatchResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DG1G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchComplete__DelegateSignature
	 */
	struct AScramSportManagerBowling_Blueprint_C_MatchComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
