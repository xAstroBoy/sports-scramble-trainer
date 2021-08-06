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

// Function BW_Minigame_Practice.BW_Minigame_Practice_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Minigame_Practice_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.AddActorToGameElementList");

	ABW_Minigame_Practice_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Minigame_Practice_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.Shutdown");

	ABW_Minigame_Practice_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.SpawnGameElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Minigame_Practice_C::SpawnGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.SpawnGameElements");

	ABW_Minigame_Practice_C_SpawnGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Minigame_Practice_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.Initialize");

	ABW_Minigame_Practice_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Minigame_Practice_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.UserConstructionScript");

	ABW_Minigame_Practice_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Minigame_Practice_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.ReceiveBeginPlay");

	ABW_Minigame_Practice_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ABW_Minigame_Practice_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.DelayDestroy");

	ABW_Minigame_Practice_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Minigame_Practice.BW_Minigame_Practice_C.ExecuteUbergraph_BW_Minigame_Practice
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Minigame_Practice_C::ExecuteUbergraph_BW_Minigame_Practice(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Minigame_Practice.BW_Minigame_Practice_C.ExecuteUbergraph_BW_Minigame_Practice");

	ABW_Minigame_Practice_C_ExecuteUbergraph_BW_Minigame_Practice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
