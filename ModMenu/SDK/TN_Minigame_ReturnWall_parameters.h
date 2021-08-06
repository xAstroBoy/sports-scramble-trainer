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

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AddActorToGameElementList
struct ATN_Minigame_ReturnWall_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Shutdown
struct ATN_Minigame_ReturnWall_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.SpawnGameElements
struct ATN_Minigame_ReturnWall_C_SpawnGameElements_Params
{
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UpdateScore
struct ATN_Minigame_ReturnWall_C_UpdateScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.Initialize
struct ATN_Minigame_ReturnWall_C_Initialize_Params
{
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.UserConstructionScript
struct ATN_Minigame_ReturnWall_C_UserConstructionScript_Params
{
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.InpActEvt_A_K2Node_InputActionEvent_1
struct ATN_Minigame_ReturnWall_C_InpActEvt_A_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReceiveBeginPlay
struct ATN_Minigame_ReturnWall_C_ReceiveBeginPlay_Params
{
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.DelayDestroy
struct ATN_Minigame_ReturnWall_C_DelayDestroy_Params
{
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ReturnWallHit
struct ATN_Minigame_ReturnWall_C_ReturnWallHit_Params
{
	int                                                Streak;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.HideNets
struct ATN_Minigame_ReturnWall_C_HideNets_Params
{
	struct FName                                       NewGeo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.AllowPlayerInput
struct ATN_Minigame_ReturnWall_C_AllowPlayerInput_Params
{
};

// Function TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C.ExecuteUbergraph_TN_Minigame_ReturnWall
struct ATN_Minigame_ReturnWall_C_ExecuteUbergraph_TN_Minigame_ReturnWall_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
