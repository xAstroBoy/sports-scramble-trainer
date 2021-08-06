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

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.AddActorToGameElementList
struct ATN_Minigame_PracticeTargets_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.Shutdown
struct ATN_Minigame_PracticeTargets_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.RefreshActivePayloads
struct ATN_Minigame_PracticeTargets_C_RefreshActivePayloads_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.IsStreakContinued?
struct ATN_Minigame_PracticeTargets_C_IsStreakContinued__Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StreakContinues;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.SpawnGameElements
struct ATN_Minigame_PracticeTargets_C_SpawnGameElements_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.UpdateScore
struct ATN_Minigame_PracticeTargets_C_UpdateScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.RegisterTargets
struct ATN_Minigame_PracticeTargets_C_RegisterTargets_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.Initialize
struct ATN_Minigame_PracticeTargets_C_Initialize_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.UserConstructionScript
struct ATN_Minigame_PracticeTargets_C_UserConstructionScript_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.ReceiveBeginPlay
struct ATN_Minigame_PracticeTargets_C_ReceiveBeginPlay_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.AddScore2
struct ATN_Minigame_PracticeTargets_C_AddScore2_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.DelayDestroy
struct ATN_Minigame_PracticeTargets_C_DelayDestroy_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.NewBall
struct ATN_Minigame_PracticeTargets_C_NewBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.LauncherSelected
struct ATN_Minigame_PracticeTargets_C_LauncherSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.SpawnLauncherSelectionMenu
struct ATN_Minigame_PracticeTargets_C_SpawnLauncherSelectionMenu_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.Setup
struct ATN_Minigame_PracticeTargets_C_Setup_Params
{
};

// Function TN_Minigame_PracticeTargets.TN_Minigame_PracticeTargets_C.ExecuteUbergraph_TN_Minigame_PracticeTargets
struct ATN_Minigame_PracticeTargets_C_ExecuteUbergraph_TN_Minigame_PracticeTargets_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
