// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBaseball
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::SetupBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBaseball");

	AGameHandlerChallenges_C_SetupBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBowling
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::SetupBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.SetupBowling");

	AGameHandlerChallenges_C_SetupBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.Shutdown
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.Shutdown");

	AGameHandlerChallenges_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.StartChallenges
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::StartChallenges()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.StartChallenges");

	AGameHandlerChallenges_C_StartChallenges_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.SetupTennis
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::SetupTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.SetupTennis");

	AGameHandlerChallenges_C_SetupTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.UserConstructionScript");

	AGameHandlerChallenges_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGameHandlerChallenges_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.ReceiveBeginPlay");

	AGameHandlerChallenges_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.MiniGameDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerChallenges_C::MiniGameDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.MiniGameDestroyed");

	AGameHandlerChallenges_C_MiniGameDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.QuitGame");

	AGameHandlerChallenges_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.ChallengeComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResultsData            Results                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerChallenges_C::ChallengeComplete(const struct FResultsData& Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.ChallengeComplete");

	AGameHandlerChallenges_C_ChallengeComplete_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.RestartMinigame
// (BlueprintCallable, BlueprintEvent)
void AGameHandlerChallenges_C::RestartMinigame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.RestartMinigame");

	AGameHandlerChallenges_C_RestartMinigame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerChallenges.GameHandlerChallenges_C.ExecuteUbergraph_GameHandlerChallenges
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerChallenges_C::ExecuteUbergraph_GameHandlerChallenges(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerChallenges.GameHandlerChallenges_C.ExecuteUbergraph_GameHandlerChallenges");

	AGameHandlerChallenges_C_ExecuteUbergraph_GameHandlerChallenges_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
