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
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.Shutdown
	 */
	struct ABB_Minigame_BattingSmash_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_BattingSmash_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.UserConstructionScript
	 */
	struct ABB_Minigame_BattingSmash_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_BattingSmash_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.LauncherSelected
	 */
	struct ABB_Minigame_BattingSmash_C_LauncherSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ShowBattingOptions
	 */
	struct ABB_Minigame_BattingSmash_C_ShowBattingOptions_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartGame
	 */
	struct ABB_Minigame_BattingSmash_C_StartGame_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartTimer
	 */
	struct ABB_Minigame_BattingSmash_C_StartTimer_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.GameIsOver
	 */
	struct ABB_Minigame_BattingSmash_C_GameIsOver_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartTimedSmashMode
	 */
	struct ABB_Minigame_BattingSmash_C_StartTimedSmashMode_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.TeleportComplete
	 */
	struct ABB_Minigame_BattingSmash_C_TeleportComplete_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.NoTeleport
	 */
	struct ABB_Minigame_BattingSmash_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ReceiveEndPlay
	 */
	struct ABB_Minigame_BattingSmash_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ExecuteUbergraph_BB_Minigame_BattingSmash
	 */
	struct ABB_Minigame_BattingSmash_C_ExecuteUbergraph_BB_Minigame_BattingSmash_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
