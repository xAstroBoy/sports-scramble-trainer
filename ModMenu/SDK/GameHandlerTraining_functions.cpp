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

// Function GameHandlerTraining.GameHandlerTraining_C.SetupBaseball
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::SetupBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.SetupBaseball");

	AGameHandlerTraining_C_SetupBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.SetupBowling
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::SetupBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.SetupBowling");

	AGameHandlerTraining_C_SetupBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.Shutdown
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.Shutdown");

	AGameHandlerTraining_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.StartTraining
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::StartTraining()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.StartTraining");

	AGameHandlerTraining_C_StartTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.SetupTennis
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::SetupTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.SetupTennis");

	AGameHandlerTraining_C_SetupTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.UserConstructionScript");

	AGameHandlerTraining_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGameHandlerTraining_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.ReceiveBeginPlay");

	AGameHandlerTraining_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.MiniGameDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerTraining_C::MiniGameDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.MiniGameDestroyed");

	AGameHandlerTraining_C_MiniGameDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.TrainingComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResultsData            Results                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerTraining_C::TrainingComplete(const struct FResultsData& Results)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.TrainingComplete");

	AGameHandlerTraining_C_TrainingComplete_Params params;
	params.Results = Results;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerTraining_C::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.QuitGame");

	AGameHandlerTraining_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerTraining.GameHandlerTraining_C.ExecuteUbergraph_GameHandlerTraining
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerTraining_C::ExecuteUbergraph_GameHandlerTraining(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerTraining.GameHandlerTraining_C.ExecuteUbergraph_GameHandlerTraining");

	AGameHandlerTraining_C_ExecuteUbergraph_GameHandlerTraining_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
