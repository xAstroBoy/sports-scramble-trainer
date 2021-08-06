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

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.AddActorToGameElementList
struct ABB_Minigame_BaseballGame_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Shutdown
struct ABB_Minigame_BaseballGame_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.SpawnActors
struct ABB_Minigame_BaseballGame_C_SpawnActors_Params
{
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Initialize
struct ABB_Minigame_BaseballGame_C_Initialize_Params
{
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.UserConstructionScript
struct ABB_Minigame_BaseballGame_C_UserConstructionScript_Params
{
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ReceiveBeginPlay
struct ABB_Minigame_BaseballGame_C_ReceiveBeginPlay_Params
{
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.DelayDestroy
struct ABB_Minigame_BaseballGame_C_DelayDestroy_Params
{
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.GameOver
struct ABB_Minigame_BaseballGame_C_GameOver_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ExecuteUbergraph_BB_Minigame_BaseballGame
struct ABB_Minigame_BaseballGame_C_ExecuteUbergraph_BB_Minigame_BaseballGame_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
