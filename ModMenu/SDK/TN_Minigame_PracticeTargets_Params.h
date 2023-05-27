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
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.AddActorToGameElementList
	 */
	struct ATN_Minigame_PracticeTargets_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.Shutdown
	 */
	struct ATN_Minigame_PracticeTargets_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9SRO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.RefreshActivePayloads
	 */
	struct ATN_Minigame_PracticeTargets_C_RefreshActivePayloads_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.IsStreakContinued?
	 */
	struct ATN_Minigame_PracticeTargets_C_IsStreakContinued_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StreakContinues;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_N0ZJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.SpawnGameElements
	 */
	struct ATN_Minigame_PracticeTargets_C_SpawnGameElements_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.UpdateScore
	 */
	struct ATN_Minigame_PracticeTargets_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.RegisterTargets
	 */
	struct ATN_Minigame_PracticeTargets_C_RegisterTargets_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.Initialize
	 */
	struct ATN_Minigame_PracticeTargets_C_Initialize_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.UserConstructionScript
	 */
	struct ATN_Minigame_PracticeTargets_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.ReceiveBeginPlay
	 */
	struct ATN_Minigame_PracticeTargets_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.AddScore2
	 */
	struct ATN_Minigame_PracticeTargets_C_AddScore2_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.DelayDestroy
	 */
	struct ATN_Minigame_PracticeTargets_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.NewBall
	 */
	struct ATN_Minigame_PracticeTargets_C_NewBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.LauncherSelected
	 */
	struct ATN_Minigame_PracticeTargets_C_LauncherSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.SpawnLauncherSelectionMenu
	 */
	struct ATN_Minigame_PracticeTargets_C_SpawnLauncherSelectionMenu_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.Setup
	 */
	struct ATN_Minigame_PracticeTargets_C_Setup_Params
	{	};

	/**
	 * Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.ExecuteUbergraph_TN_Minigame_PracticeTargets
	 */
	struct ATN_Minigame_PracticeTargets_C_ExecuteUbergraph_TN_Minigame_PracticeTargets_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CI8C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
