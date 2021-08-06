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

// Function GameHandlerTraining.GameHandlerTraining_C.SetupBaseball
struct AGameHandlerTraining_C_SetupBaseball_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.SetupBowling
struct AGameHandlerTraining_C_SetupBowling_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.Shutdown
struct AGameHandlerTraining_C_Shutdown_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.StartTraining
struct AGameHandlerTraining_C_StartTraining_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.SetupTennis
struct AGameHandlerTraining_C_SetupTennis_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.UserConstructionScript
struct AGameHandlerTraining_C_UserConstructionScript_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.ReceiveBeginPlay
struct AGameHandlerTraining_C_ReceiveBeginPlay_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.MiniGameDestroyed
struct AGameHandlerTraining_C_MiniGameDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerTraining.GameHandlerTraining_C.TrainingComplete
struct AGameHandlerTraining_C_TrainingComplete_Params
{
	struct FResultsData                                Results;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerTraining.GameHandlerTraining_C.QuitGame
struct AGameHandlerTraining_C_QuitGame_Params
{
};

// Function GameHandlerTraining.GameHandlerTraining_C.ExecuteUbergraph_GameHandlerTraining
struct AGameHandlerTraining_C_ExecuteUbergraph_GameHandlerTraining_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
