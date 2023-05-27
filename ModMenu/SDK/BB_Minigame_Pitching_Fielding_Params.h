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
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.Shutdown
	 */
	struct ABB_Minigame_Pitching_Fielding_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P8AI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.AddActorToGameElementList
	 */
	struct ABB_Minigame_Pitching_Fielding_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.SpawnActors
	 */
	struct ABB_Minigame_Pitching_Fielding_C_SpawnActors_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.InitializeMode
	 */
	struct ABB_Minigame_Pitching_Fielding_C_InitializeMode_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.UserConstructionScript
	 */
	struct ABB_Minigame_Pitching_Fielding_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ReceiveBeginPlay
	 */
	struct ABB_Minigame_Pitching_Fielding_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.DelayDestroy
	 */
	struct ABB_Minigame_Pitching_Fielding_C_DelayDestroy_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.TeleportComplete
	 */
	struct ABB_Minigame_Pitching_Fielding_C_TeleportComplete_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.NoTeleport
	 */
	struct ABB_Minigame_Pitching_Fielding_C_NoTeleport_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.LaunchBallAtPlayer
	 */
	struct ABB_Minigame_Pitching_Fielding_C_LaunchBallAtPlayer_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.EquipmentGrabbed
	 */
	struct ABB_Minigame_Pitching_Fielding_C_EquipmentGrabbed_Params
	{
	public:
		class AActor*                                              DominantHand;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABB_Mitt_C*                                          Mitt;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallLaunched
	 */
	struct ABB_Minigame_Pitching_Fielding_C_BallLaunched_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallCaught
	 */
	struct ABB_Minigame_Pitching_Fielding_C_BallCaught_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.OpenGate
	 */
	struct ABB_Minigame_Pitching_Fielding_C_OpenGate_Params
	{	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallDestroyed
	 */
	struct ABB_Minigame_Pitching_Fielding_C_BallDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ExecuteUbergraph_BB_Minigame_Pitching_Fielding
	 */
	struct ABB_Minigame_Pitching_Fielding_C_ExecuteUbergraph_BB_Minigame_Pitching_Fielding_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U016[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
