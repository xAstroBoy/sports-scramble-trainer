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

// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_BaseballGame_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.AddActorToGameElementList");

	ABB_Minigame_BaseballGame_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_BaseballGame_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Shutdown");

	ABB_Minigame_BaseballGame_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.SpawnActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BaseballGame_C::SpawnActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.SpawnActors");

	ABB_Minigame_BaseballGame_C_SpawnActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BaseballGame_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.Initialize");

	ABB_Minigame_BaseballGame_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BaseballGame_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.UserConstructionScript");

	ABB_Minigame_BaseballGame_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_BaseballGame_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ReceiveBeginPlay");

	ABB_Minigame_BaseballGame_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BaseballGame_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.DelayDestroy");

	ABB_Minigame_BaseballGame_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.GameOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_BaseballGame_C::GameOver(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.GameOver");

	ABB_Minigame_BaseballGame_C_GameOver_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ExecuteUbergraph_BB_Minigame_BaseballGame
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_BaseballGame_C::ExecuteUbergraph_BB_Minigame_BaseballGame(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BaseballGame.BB_Minigame_BaseballGame_C.ExecuteUbergraph_BB_Minigame_BaseballGame");

	ABB_Minigame_BaseballGame_C_ExecuteUbergraph_BB_Minigame_BaseballGame_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
