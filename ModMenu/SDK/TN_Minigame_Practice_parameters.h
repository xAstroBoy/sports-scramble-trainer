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

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.AddActorToGameElementList
struct ATN_Minigame_Practice_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.Shutdown
struct ATN_Minigame_Practice_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.RefreshActivePayloads
struct ATN_Minigame_Practice_C_RefreshActivePayloads_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.IsStreakContinued?
struct ATN_Minigame_Practice_C_IsStreakContinued__Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StreakContinues;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.SpawnGameElements
struct ATN_Minigame_Practice_C_SpawnGameElements_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.UpdateScore
struct ATN_Minigame_Practice_C_UpdateScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.Initialize
struct ATN_Minigame_Practice_C_Initialize_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.UserConstructionScript
struct ATN_Minigame_Practice_C_UserConstructionScript_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.InpActEvt_Y_K2Node_InputActionEvent_2
struct ATN_Minigame_Practice_C_InpActEvt_Y_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.InpActEvt_B_K2Node_InputActionEvent_1
struct ATN_Minigame_Practice_C_InpActEvt_B_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.ReceiveBeginPlay
struct ATN_Minigame_Practice_C_ReceiveBeginPlay_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.AddScore2
struct ATN_Minigame_Practice_C_AddScore2_Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      BallTargetActor;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RegionHit;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.DelayDestroy
struct ATN_Minigame_Practice_C_DelayDestroy_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.NewBall
struct ATN_Minigame_Practice_C_NewBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.LauncherSelected
struct ATN_Minigame_Practice_C_LauncherSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.SpawnLauncherSelectionMenu
struct ATN_Minigame_Practice_C_SpawnLauncherSelectionMenu_Params
{
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.BallSpawned
struct ATN_Minigame_Practice_C_BallSpawned_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_Practice.TN_Minigame_Practice_C.ExecuteUbergraph_TN_Minigame_Practice
struct ATN_Minigame_Practice_C_ExecuteUbergraph_TN_Minigame_Practice_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
