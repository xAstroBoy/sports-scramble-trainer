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

// Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBaseball
struct AGameHandlerChallenges_C_SetupBaseball_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBowling
struct AGameHandlerChallenges_C_SetupBowling_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.Shutdown
struct AGameHandlerChallenges_C_Shutdown_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.StartChallenges
struct AGameHandlerChallenges_C_StartChallenges_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.SetupTennis
struct AGameHandlerChallenges_C_SetupTennis_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.UserConstructionScript
struct AGameHandlerChallenges_C_UserConstructionScript_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.ReceiveBeginPlay
struct AGameHandlerChallenges_C_ReceiveBeginPlay_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.MiniGameDestroyed
struct AGameHandlerChallenges_C_MiniGameDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.QuitGame
struct AGameHandlerChallenges_C_QuitGame_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.ChallengeComplete
struct AGameHandlerChallenges_C_ChallengeComplete_Params
{
	struct FResultsData                                Results;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.RestartMinigame
struct AGameHandlerChallenges_C_RestartMinigame_Params
{
};

// Function GameHandlerChallenges.GameHandlerChallenges_C.ExecuteUbergraph_GameHandlerChallenges
struct AGameHandlerChallenges_C_ExecuteUbergraph_GameHandlerChallenges_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
