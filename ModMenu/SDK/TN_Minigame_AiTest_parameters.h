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

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.AddActorToGameElementList
struct ATN_Minigame_AiTest_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.Shutdown
struct ATN_Minigame_AiTest_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.BindToManager
struct ATN_Minigame_AiTest_C_BindToManager_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.OnRep_Manager
struct ATN_Minigame_AiTest_C_OnRep_Manager_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.SpawnGameElements
struct ATN_Minigame_AiTest_C_SpawnGameElements_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.Initialize
struct ATN_Minigame_AiTest_C_Initialize_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.UserConstructionScript
struct ATN_Minigame_AiTest_C_UserConstructionScript_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.ReceiveBeginPlay
struct ATN_Minigame_AiTest_C_ReceiveBeginPlay_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.DelayDestroy
struct ATN_Minigame_AiTest_C_DelayDestroy_Params
{
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.MatchComplete
struct ATN_Minigame_AiTest_C_MatchComplete_Params
{
	TEnumAsByte<GameResult_EGameResult>                Result;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.ReceiveEndPlay
struct ATN_Minigame_AiTest_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_AiTest.TN_Minigame_AiTest_C.ExecuteUbergraph_TN_Minigame_AiTest
struct ATN_Minigame_AiTest_C_ExecuteUbergraph_TN_Minigame_AiTest_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
