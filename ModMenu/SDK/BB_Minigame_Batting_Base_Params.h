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
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_Batting_Base_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Shutdown
	 */
	struct ABB_Minigame_Batting_Base_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9HXI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.CleanupScoreboards
	 */
	struct ABB_Minigame_Batting_Base_C_CleanupScoreboards_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GetGameSelector
	 */
	struct ABB_Minigame_Batting_Base_C_GetGameSelector_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ScoreboardGameOver
	 */
	struct ABB_Minigame_Batting_Base_C_ScoreboardGameOver_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ResetAllWindowActors
	 */
	struct ABB_Minigame_Batting_Base_C_ResetAllWindowActors_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.CountdownTimerStart
	 */
	struct ABB_Minigame_Batting_Base_C_CountdownTimerStart_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.LauncherSetup
	 */
	struct ABB_Minigame_Batting_Base_C_LauncherSetup_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UpdatePointScore
	 */
	struct ABB_Minigame_Batting_Base_C_UpdatePointScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GetRandomPitchSpeed
	 */
	struct ABB_Minigame_Batting_Base_C_GetRandomPitchSpeed_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SetPitchSpeed
	 */
	struct ABB_Minigame_Batting_Base_C_SetPitchSpeed_Params
	{
	public:
		int32_t                                                    Button;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SpawnGameElements
	 */
	struct ABB_Minigame_Batting_Base_C_SpawnGameElements_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UpdateBallDistanceScore
	 */
	struct ABB_Minigame_Batting_Base_C_UpdateBallDistanceScore_Params
	{
	public:
		float                                                      NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Initialize
	 */
	struct ABB_Minigame_Batting_Base_C_Initialize_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UserConstructionScript
	 */
	struct ABB_Minigame_Batting_Base_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_Batting_Base_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.DelayDestroy
	 */
	struct ABB_Minigame_Batting_Base_C_DelayDestroy_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.NewBall
	 */
	struct ABB_Minigame_Batting_Base_C_NewBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GameLoop
	 */
	struct ABB_Minigame_Batting_Base_C_GameLoop_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.PitchedBallHit
	 */
	struct ABB_Minigame_Batting_Base_C_PitchedBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.HitBallHit
	 */
	struct ABB_Minigame_Batting_Base_C_HitBallHit_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Setup
	 */
	struct ABB_Minigame_Batting_Base_C_Setup_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SpawnLauncherSelectionMenu
	 */
	struct ABB_Minigame_Batting_Base_C_SpawnLauncherSelectionMenu_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SetBallSpeed
	 */
	struct ABB_Minigame_Batting_Base_C_SetBallSpeed_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.TeleportComplete
	 */
	struct ABB_Minigame_Batting_Base_C_TeleportComplete_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.NoTeleport
	 */
	struct ABB_Minigame_Batting_Base_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.StartTheCountdown
	 */
	struct ABB_Minigame_Batting_Base_C_StartTheCountdown_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ScoreWindowBroken
	 */
	struct ABB_Minigame_Batting_Base_C_ScoreWindowBroken_Params
	{	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ReceiveEndPlay
	 */
	struct ABB_Minigame_Batting_Base_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ExecuteUbergraph_BB_Minigame_Batting_Base
	 */
	struct ABB_Minigame_Batting_Base_C_ExecuteUbergraph_BB_Minigame_Batting_Base_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KC8L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
