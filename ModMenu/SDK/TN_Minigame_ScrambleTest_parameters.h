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

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.AddActorToGameElementList
struct ATN_Minigame_ScrambleTest_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.Shutdown
struct ATN_Minigame_ScrambleTest_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.RefreshActivePayloads
struct ATN_Minigame_ScrambleTest_C_RefreshActivePayloads_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.IsStreakContinued?
struct ATN_Minigame_ScrambleTest_C_IsStreakContinued__Params
{
	class AActor*                                      PayloadActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               StreakContinues;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.SpawnGameElements
struct ATN_Minigame_ScrambleTest_C_SpawnGameElements_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.UpdateScore
struct ATN_Minigame_ScrambleTest_C_UpdateScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.Initialize
struct ATN_Minigame_ScrambleTest_C_Initialize_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.UserConstructionScript
struct ATN_Minigame_ScrambleTest_C_UserConstructionScript_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.ReceiveBeginPlay
struct ATN_Minigame_ScrambleTest_C_ReceiveBeginPlay_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.DelayDestroy
struct ATN_Minigame_ScrambleTest_C_DelayDestroy_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.NewBall
struct ATN_Minigame_ScrambleTest_C_NewBall_Params
{
	class AActor*                                      NewBallActor;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.GameLoop
struct ATN_Minigame_ScrambleTest_C_GameLoop_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.LauncherSelected
struct ATN_Minigame_ScrambleTest_C_LauncherSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.SpawnLauncherSelectionMenu
struct ATN_Minigame_ScrambleTest_C_SpawnLauncherSelectionMenu_Params
{
};

// Function TN_Minigame_ScrambleTest.TN_Minigame_ScrambleTest_C.ExecuteUbergraph_TN_Minigame_ScrambleTest
struct ATN_Minigame_ScrambleTest_C_ExecuteUbergraph_TN_Minigame_ScrambleTest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
