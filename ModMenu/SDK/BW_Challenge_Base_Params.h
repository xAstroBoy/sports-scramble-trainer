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
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.AddActorToGameElementList
	 */
	struct ABW_Challenge_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.Shutdown
	 */
	struct ABW_Challenge_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_GameEndResetLane
	 */
	struct ABW_Challenge_Base_C_BW_GameEndResetLane_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SpawnSportMgr
	 */
	struct ABW_Challenge_Base_C_BW_CHG_SpawnSportMgr_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_CalculateEndScore
	 */
	struct ABW_Challenge_Base_C_BW_CHG_CalculateEndScore_Params
	{
	public:
		bool                                                       Countdown;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7FM7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    TargetScore;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6XTQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SwapBallIcon
	 */
	struct ABW_Challenge_Base_C_BW_CHG_SwapBallIcon_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_GetBallList
	 */
	struct ABW_Challenge_Base_C_BW_CHG_GetBallList_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.ToggleLaneChanging
	 */
	struct ABW_Challenge_Base_C_ToggleLaneChanging_Params
	{
	public:
		bool                                                       DisableLaneChanges;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_ShowScoreboard
	 */
	struct ABW_Challenge_Base_C_BW_CHG_ShowScoreboard_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.ResetLane
	 */
	struct ABW_Challenge_Base_C_ResetLane_Params
	{
	public:
		bool                                                       ResetScore;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetPins;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetBallCounter;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.Initialize
	 */
	struct ABW_Challenge_Base_C_Initialize_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.UserConstructionScript
	 */
	struct ABW_Challenge_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.OnLoaded_D8F17837414AF61326DAA8A87E4A9166
	 */
	struct ABW_Challenge_Base_C_OnLoaded_D8F17837414AF61326DAA8A87E4A9166_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.ReceiveBeginPlay
	 */
	struct ABW_Challenge_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BowlingEvent
	 */
	struct ABW_Challenge_Base_C_BowlingEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.SpecificBallCreated
	 */
	struct ABW_Challenge_Base_C_SpecificBallCreated_Params
	{
	public:
		class ABW_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.RandomBallCreated
	 */
	struct ABW_Challenge_Base_C_RandomBallCreated_Params
	{
	public:
		class ABW_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.GetCurrentLaneScore
	 */
	struct ABW_Challenge_Base_C_GetCurrentLaneScore_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    CurrentScore;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.EndOfGame
	 */
	struct ABW_Challenge_Base_C_EndOfGame_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.SpecialScoreEvent
	 */
	struct ABW_Challenge_Base_C_SpecialScoreEvent_Params
	{
	public:
		int32_t                                                    LaneID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Points;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.ShowBowlingBallIcon
	 */
	struct ABW_Challenge_Base_C_ShowBowlingBallIcon_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_StartIntroCadence
	 */
	struct ABW_Challenge_Base_C_BW_StartIntroCadence_Params
	{
	public:
		unsigned char                                              UnknownData_TCWJ[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		bool                                                       UseChallengeMusic;                                       // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseCountdown;                                            // 0x0029(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       ResetLane;                                               // 0x002A(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       UseTrainingScore;                                        // 0x002B(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_TriggerCountdown
	 */
	struct ABW_Challenge_Base_C_BW_TriggerCountdown_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SportManagerGameEnd
	 */
	struct ABW_Challenge_Base_C_BW_CHG_SportManagerGameEnd_Params
	{
	public:
		EGameResult                                                MatchResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZG0U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Player1GamesWon;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2GamesWon;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.BW_AnnouncerPresentation
	 */
	struct ABW_Challenge_Base_C_BW_AnnouncerPresentation_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.LaneIsReady
	 */
	struct ABW_Challenge_Base_C_LaneIsReady_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.PlayAsync2D
	 */
	struct ABW_Challenge_Base_C_PlayAsync2D_Params
	{	};

	/**
	 * Function BW_Challenge_Base.BW_Challenge_Base_C.ExecuteUbergraph_BW_Challenge_Base
	 */
	struct ABW_Challenge_Base_C_ExecuteUbergraph_BW_Challenge_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VHQR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
