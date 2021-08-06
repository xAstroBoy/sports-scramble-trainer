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

// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_BattingSmash_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.Shutdown");

	ABB_Minigame_BattingSmash_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_BattingSmash_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.AddActorToGameElementList");

	ABB_Minigame_BattingSmash_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.UserConstructionScript");

	ABB_Minigame_BattingSmash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ReceiveBeginPlay");

	ABB_Minigame_BattingSmash_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.LauncherSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_BattingSmash_C::LauncherSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.LauncherSelected");

	ABB_Minigame_BattingSmash_C_LauncherSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ShowBattingOptions
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::ShowBattingOptions()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ShowBattingOptions");

	ABB_Minigame_BattingSmash_C_ShowBattingOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartGame");

	ABB_Minigame_BattingSmash_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartTimer
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::StartTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartTimer");

	ABB_Minigame_BattingSmash_C_StartTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.GameIsOver
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::GameIsOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.GameIsOver");

	ABB_Minigame_BattingSmash_C_GameIsOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartTimedSmashMode
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::StartTimedSmashMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.StartTimedSmashMode");

	ABB_Minigame_BattingSmash_C_StartTimedSmashMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.TeleportComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::TeleportComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.TeleportComplete");

	ABB_Minigame_BattingSmash_C_TeleportComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_BattingSmash_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.NoTeleport");

	ABB_Minigame_BattingSmash_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_BattingSmash_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ReceiveEndPlay");

	ABB_Minigame_BattingSmash_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ExecuteUbergraph_BB_Minigame_BattingSmash
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_BattingSmash_C::ExecuteUbergraph_BB_Minigame_BattingSmash(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C.ExecuteUbergraph_BB_Minigame_BattingSmash");

	ABB_Minigame_BattingSmash_C_ExecuteUbergraph_BB_Minigame_BattingSmash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
