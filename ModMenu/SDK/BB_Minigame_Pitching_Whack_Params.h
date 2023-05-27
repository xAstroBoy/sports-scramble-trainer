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
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.Shutdown
	 */
	struct ABB_Minigame_Pitching_Whack_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ClearWhackTimer
	 */
	struct ABB_Minigame_Pitching_Whack_C_ClearWhackTimer_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackScoreboardGameOver
	 */
	struct ABB_Minigame_Pitching_Whack_C_WhackScoreboardGameOver_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.InitializeWhack
	 */
	struct ABB_Minigame_Pitching_Whack_C_InitializeWhack_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateWhackScoreboard
	 */
	struct ABB_Minigame_Pitching_Whack_C_UpdateWhackScoreboard_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackTimerCountdownStart
	 */
	struct ABB_Minigame_Pitching_Whack_C_WhackTimerCountdownStart_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UserConstructionScript
	 */
	struct ABB_Minigame_Pitching_Whack_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_Pitching_Whack_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.StartCountdown
	 */
	struct ABB_Minigame_Pitching_Whack_C_StartCountdown_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.CountdownComplete
	 */
	struct ABB_Minigame_Pitching_Whack_C_CountdownComplete_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableWhackTargets
	 */
	struct ABB_Minigame_Pitching_Whack_C_DisableWhackTargets_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackEquipmentGrabbed
	 */
	struct ABB_Minigame_Pitching_Whack_C_WhackEquipmentGrabbed_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.GoMessageReceived
	 */
	struct ABB_Minigame_Pitching_Whack_C_GoMessageReceived_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PlayerTeleportComplete
	 */
	struct ABB_Minigame_Pitching_Whack_C_PlayerTeleportComplete_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableTargets
	 */
	struct ABB_Minigame_Pitching_Whack_C_DisableTargets_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PitchTargetCreated
	 */
	struct ABB_Minigame_Pitching_Whack_C_PitchTargetCreated_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateScoreboardScoreValue
	 */
	struct ABB_Minigame_Pitching_Whack_C_UpdateScoreboardScoreValue_Params
	{
	public:
		int32_t                                                    ScoreAmount;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.NoTeleport
	 */
	struct ABB_Minigame_Pitching_Whack_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ExecuteUbergraph_BB_Minigame_Pitching_Whack
	 */
	struct ABB_Minigame_Pitching_Whack_C_ExecuteUbergraph_BB_Minigame_Pitching_Whack_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
