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

// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Fielding_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.Shutdown");

	ABB_Minigame_Pitching_Fielding_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Fielding_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.AddActorToGameElementList");

	ABB_Minigame_Pitching_Fielding_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.SpawnActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::SpawnActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.SpawnActors");

	ABB_Minigame_Pitching_Fielding_C_SpawnActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.InitializeMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::InitializeMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.InitializeMode");

	ABB_Minigame_Pitching_Fielding_C_InitializeMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.UserConstructionScript");

	ABB_Minigame_Pitching_Fielding_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ReceiveBeginPlay");

	ABB_Minigame_Pitching_Fielding_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.DelayDestroy");

	ABB_Minigame_Pitching_Fielding_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.TeleportComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::TeleportComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.TeleportComplete");

	ABB_Minigame_Pitching_Fielding_C_TeleportComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.NoTeleport");

	ABB_Minigame_Pitching_Fielding_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.LaunchBallAtPlayer
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::LaunchBallAtPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.LaunchBallAtPlayer");

	ABB_Minigame_Pitching_Fielding_C_LaunchBallAtPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.EquipmentGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DominantHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Mitt_C*              Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Fielding_C::EquipmentGrabbed(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.EquipmentGrabbed");

	ABB_Minigame_Pitching_Fielding_C_EquipmentGrabbed_Params params;
	params.DominantHand = DominantHand;
	params.Mitt = Mitt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallLaunched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Fielding_C::BallLaunched(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallLaunched");

	ABB_Minigame_Pitching_Fielding_C_BallLaunched_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallCaught
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Fielding_C::BallCaught(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallCaught");

	ABB_Minigame_Pitching_Fielding_C_BallCaught_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.OpenGate
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Fielding_C::OpenGate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.OpenGate");

	ABB_Minigame_Pitching_Fielding_C_OpenGate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Fielding_C::BallDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.BallDestroyed");

	ABB_Minigame_Pitching_Fielding_C_BallDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ExecuteUbergraph_BB_Minigame_Pitching_Fielding
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Fielding_C::ExecuteUbergraph_BB_Minigame_Pitching_Fielding(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Fielding.BB_Minigame_Pitching_Fielding_C.ExecuteUbergraph_BB_Minigame_Pitching_Fielding");

	ABB_Minigame_Pitching_Fielding_C_ExecuteUbergraph_BB_Minigame_Pitching_Fielding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
