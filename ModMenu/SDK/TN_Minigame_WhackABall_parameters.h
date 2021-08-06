#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.AddActorToGameElementList
struct ATN_Minigame_WhackABall_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.Shutdown
struct ATN_Minigame_WhackABall_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.RefreshActivePayloads
struct ATN_Minigame_WhackABall_C_RefreshActivePayloads_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.IsStreakContinued
struct ATN_Minigame_WhackABall_C_IsStreakContinued_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StreakContinues;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.PickNewTarget
struct ATN_Minigame_WhackABall_C_PickNewTarget_Params
{
	class AActor*                                      OldTarget;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.SetupGame
struct ATN_Minigame_WhackABall_C_SetupGame_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.SpawnGameElements
struct ATN_Minigame_WhackABall_C_SpawnGameElements_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.UpdateScore
struct ATN_Minigame_WhackABall_C_UpdateScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.RegisterTargets
struct ATN_Minigame_WhackABall_C_RegisterTargets_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.Initialize
struct ATN_Minigame_WhackABall_C_Initialize_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.UserConstructionScript
struct ATN_Minigame_WhackABall_C_UserConstructionScript_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.ReceiveBeginPlay
struct ATN_Minigame_WhackABall_C_ReceiveBeginPlay_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.AddScore2
struct ATN_Minigame_WhackABall_C_AddScore2_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.DelayDestroy
struct ATN_Minigame_WhackABall_C_DelayDestroy_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.LauncherSelected
struct ATN_Minigame_WhackABall_C_LauncherSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.SpawnLauncherSelectionMenu
struct ATN_Minigame_WhackABall_C_SpawnLauncherSelectionMenu_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.StartGame
struct ATN_Minigame_WhackABall_C_StartGame_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.GameEnd
struct ATN_Minigame_WhackABall_C_GameEnd_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.CountdownComplet
struct ATN_Minigame_WhackABall_C_CountdownComplet_Params
{
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.NewBall
struct ATN_Minigame_WhackABall_C_NewBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.ReceiveEndPlay
struct ATN_Minigame_WhackABall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_WhackABall.TN_Minigame_WhackABall_C.ExecuteUbergraph_TN_Minigame_WhackABall
struct ATN_Minigame_WhackABall_C_ExecuteUbergraph_TN_Minigame_WhackABall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
