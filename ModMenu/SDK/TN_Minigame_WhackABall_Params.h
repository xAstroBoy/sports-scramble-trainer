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
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.AddActorToGameElementList
	 */
	struct ATN_Minigame_WhackABall_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.Shutdown
	 */
	struct ATN_Minigame_WhackABall_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QZMX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.RefreshActivePayloads
	 */
	struct ATN_Minigame_WhackABall_C_RefreshActivePayloads_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.IsStreakContinued
	 */
	struct ATN_Minigame_WhackABall_C_IsStreakContinued_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StreakContinues;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JRGW[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.PickNewTarget
	 */
	struct ATN_Minigame_WhackABall_C_PickNewTarget_Params
	{
	public:
		class AActor*                                              OldTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.SetupGame
	 */
	struct ATN_Minigame_WhackABall_C_SetupGame_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.SpawnGameElements
	 */
	struct ATN_Minigame_WhackABall_C_SpawnGameElements_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.UpdateScore
	 */
	struct ATN_Minigame_WhackABall_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.RegisterTargets
	 */
	struct ATN_Minigame_WhackABall_C_RegisterTargets_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.Initialize
	 */
	struct ATN_Minigame_WhackABall_C_Initialize_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.UserConstructionScript
	 */
	struct ATN_Minigame_WhackABall_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.ReceiveBeginPlay
	 */
	struct ATN_Minigame_WhackABall_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.AddScore2
	 */
	struct ATN_Minigame_WhackABall_C_AddScore2_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.DelayDestroy
	 */
	struct ATN_Minigame_WhackABall_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.LauncherSelected
	 */
	struct ATN_Minigame_WhackABall_C_LauncherSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.SpawnLauncherSelectionMenu
	 */
	struct ATN_Minigame_WhackABall_C_SpawnLauncherSelectionMenu_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.StartGame
	 */
	struct ATN_Minigame_WhackABall_C_StartGame_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.GameEnd
	 */
	struct ATN_Minigame_WhackABall_C_GameEnd_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.CountdownComplet
	 */
	struct ATN_Minigame_WhackABall_C_CountdownComplet_Params
	{	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.NewBall
	 */
	struct ATN_Minigame_WhackABall_C_NewBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.ReceiveEndPlay
	 */
	struct ATN_Minigame_WhackABall_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.ExecuteUbergraph_TN_Minigame_WhackABall
	 */
	struct ATN_Minigame_WhackABall_C_ExecuteUbergraph_TN_Minigame_WhackABall_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9FVB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
