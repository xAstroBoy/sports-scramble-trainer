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
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.AddActorToGameElementList
	 */
	struct ABB_Challenge_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.Shutdown
	 */
	struct ABB_Challenge_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_05_SportManagerPlayerPitching
	 */
	struct ABB_Challenge_Base_C_BB_CHG_05_SportManagerPlayerPitching_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_UpdateScore
	 */
	struct ABB_Challenge_Base_C_BB_CHG_UpdateScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SpawnSportManagerWithAI
	 */
	struct ABB_Challenge_Base_C_BB_CHG_SpawnSportManagerWithAI_Params
	{
	public:
		bool                                                       OverrideBattingSkill;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EScramSkill                                                OverrideSkill;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_31D5[0xE];                                   // 0x0002(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBatIcon
	 */
	struct ABB_Challenge_Base_C_BB_CHG_SwapBatIcon_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBatList
	 */
	struct ABB_Challenge_Base_C_BB_CHG_GetBatList_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_CalculateEndScore
	 */
	struct ABB_Challenge_Base_C_BB_CHG_CalculateEndScore_Params
	{
	public:
		bool                                                       Countdown;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_U5NZ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetScore;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBallIcon
	 */
	struct ABB_Challenge_Base_C_BB_CHG_SwapBallIcon_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBallList
	 */
	struct ABB_Challenge_Base_C_BB_CHG_GetBallList_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.Initialize
	 */
	struct ABB_Challenge_Base_C_Initialize_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.UserConstructionScript
	 */
	struct ABB_Challenge_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.OnLoaded_826C3EA940CB27C0854669A32DADB5D4
	 */
	struct ABB_Challenge_Base_C_OnLoaded_826C3EA940CB27C0854669A32DADB5D4_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_ShowScoreboardAnimation
	 */
	struct ABB_Challenge_Base_C_BB_CHG_ShowScoreboardAnimation_Params
	{
	public:
		EBB_ScoreboardVideos                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreMaterialAndFont
	 */
	struct ABB_Challenge_Base_C_BB_CHG_SetScoreMaterialAndFont_Params
	{
	public:
		int32_t                                                    FontSize;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreVisibility
	 */
	struct ABB_Challenge_Base_C_BB_CHG_SetScoreVisibility_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_AttachTrainingScoreboard
	 */
	struct ABB_Challenge_Base_C_BB_CHG_AttachTrainingScoreboard_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.SetScoreTimerTime
	 */
	struct ABB_Challenge_Base_C_SetScoreTimerTime_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FontSize;                                                // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.AttachTopTimer
	 */
	struct ABB_Challenge_Base_C_AttachTopTimer_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BaseballGameCompleted
	 */
	struct ABB_Challenge_Base_C_BaseballGameCompleted_Params
	{
	public:
		bool                                                       LocalPlayerVictory;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CE4Y[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AwayScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    HomeScore;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.ReceiveBeginPlay
	 */
	struct ABB_Challenge_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.EndOfGame
	 */
	struct ABB_Challenge_Base_C_EndOfGame_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballBallIcon
	 */
	struct ABB_Challenge_Base_C_ShowBaseballBallIcon_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_StartIntroCadence
	 */
	struct ABB_Challenge_Base_C_BB_StartIntroCadence_Params
	{
	public:
		bool                                                       UseChallengeMusic;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseCountdown;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       HomeTeam;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_TriggerCountdown
	 */
	struct ABB_Challenge_Base_C_BB_TriggerCountdown_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballInstrumentIcon
	 */
	struct ABB_Challenge_Base_C_ShowBaseballInstrumentIcon_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.BB_ShowInstrumentAndBallIcons
	 */
	struct ABB_Challenge_Base_C_BB_ShowInstrumentAndBallIcons_Params
	{
	public:
		EBB_ScramIconSetting                                       Settings;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.TriggerAlternateCadence
	 */
	struct ABB_Challenge_Base_C_TriggerAlternateCadence_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.PlayAsync2D
	 */
	struct ABB_Challenge_Base_C_PlayAsync2D_Params
	{	};

	/**
	 * Function BB_Challenge_Base.BB_Challenge_Base_C.ExecuteUbergraph_BB_Challenge_Base
	 */
	struct ABB_Challenge_Base_C_ExecuteUbergraph_BB_Challenge_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KGIP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
