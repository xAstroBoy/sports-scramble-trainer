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
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.AddActorToGameElementList
	 */
	struct ATN_Minigame_VelocityTests_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.Shutdown
	 */
	struct ATN_Minigame_VelocityTests_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H659[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.RefreshActivePayloads
	 */
	struct ATN_Minigame_VelocityTests_C_RefreshActivePayloads_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.IsStreakContinued?
	 */
	struct ATN_Minigame_VelocityTests_C_IsStreakContinued_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StreakContinues;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P54N[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.SpawnGameElements
	 */
	struct ATN_Minigame_VelocityTests_C_SpawnGameElements_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.UpdateScore
	 */
	struct ATN_Minigame_VelocityTests_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.Initialize
	 */
	struct ATN_Minigame_VelocityTests_C_Initialize_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.UserConstructionScript
	 */
	struct ATN_Minigame_VelocityTests_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.ReceiveBeginPlay
	 */
	struct ATN_Minigame_VelocityTests_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.DelayDestroy
	 */
	struct ATN_Minigame_VelocityTests_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.NewBall
	 */
	struct ATN_Minigame_VelocityTests_C_NewBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.GameLoop
	 */
	struct ATN_Minigame_VelocityTests_C_GameLoop_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.LauncherSelected
	 */
	struct ATN_Minigame_VelocityTests_C_LauncherSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.SpawnLauncherSelectionMenu
	 */
	struct ATN_Minigame_VelocityTests_C_SpawnLauncherSelectionMenu_Params
	{	};

	/**
	 * Function TN_Minigame_VelocityTests.TN_Minigame_VelocityTests_C.ExecuteUbergraph_TN_Minigame_VelocityTests
	 */
	struct ATN_Minigame_VelocityTests_C_ExecuteUbergraph_TN_Minigame_VelocityTests_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
