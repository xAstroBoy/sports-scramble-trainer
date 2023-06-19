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
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.AddActorToGameElementList
	 */
	struct ATN_Minigame_Breakout_C_AddActorToGameElementList_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.Shutdown
	 */
	struct ATN_Minigame_Breakout_C_Shutdown_Params
	{
	public:
		bool                                                       ShutdownBegun;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XB5B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.RefreshActivePayloads
	 */
	struct ATN_Minigame_Breakout_C_RefreshActivePayloads_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.IsStreakContinued
	 */
	struct ATN_Minigame_Breakout_C_IsStreakContinued_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StreakContinues;                                         // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_LLHZ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.PickNewTarget
	 */
	struct ATN_Minigame_Breakout_C_PickNewTarget_Params
	{
	public:
		class AActor*                                              OldTarget;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.SpawnGameElements
	 */
	struct ATN_Minigame_Breakout_C_SpawnGameElements_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UpdateScore
	 */
	struct ATN_Minigame_Breakout_C_UpdateScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.RegisterTargets
	 */
	struct ATN_Minigame_Breakout_C_RegisterTargets_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.Initialize
	 */
	struct ATN_Minigame_Breakout_C_Initialize_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UserConstructionScript
	 */
	struct ATN_Minigame_Breakout_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ReceiveBeginPlay
	 */
	struct ATN_Minigame_Breakout_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.AddScore2
	 */
	struct ATN_Minigame_Breakout_C_AddScore2_Params
	{
	public:
		class AActor*                                              PayloadActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              BallTargetActor;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    RegionHit;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.DelayDestroy
	 */
	struct ATN_Minigame_Breakout_C_DelayDestroy_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.GameComplete
	 */
	struct ATN_Minigame_Breakout_C_GameComplete_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.LauncherSelected
	 */
	struct ATN_Minigame_Breakout_C_LauncherSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.SpawnLauncherSelectionMenu
	 */
	struct ATN_Minigame_Breakout_C_SpawnLauncherSelectionMenu_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.StartGame
	 */
	struct ATN_Minigame_Breakout_C_StartGame_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.CountdownComplet
	 */
	struct ATN_Minigame_Breakout_C_CountdownComplet_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ResetTargetsOnDelay
	 */
	struct ATN_Minigame_Breakout_C_ResetTargetsOnDelay_Params
	{	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.StartLaunchers
	 */
	struct ATN_Minigame_Breakout_C_StartLaunchers_Params
	{
	public:
		float                                                      BallDelay;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UpdateLauncherDelay
	 */
	struct ATN_Minigame_Breakout_C_UpdateLauncherDelay_Params
	{
	public:
		float                                                      NewDelay;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.NewBall
	 */
	struct ATN_Minigame_Breakout_C_NewBall_Params
	{
	public:
		class AActor*                                              NewBallActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ReceiveEndPlay
	 */
	struct ATN_Minigame_Breakout_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ExecuteUbergraph_TN_Minigame_Breakout
	 */
	struct ATN_Minigame_Breakout_C_ExecuteUbergraph_TN_Minigame_Breakout_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L1LD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
