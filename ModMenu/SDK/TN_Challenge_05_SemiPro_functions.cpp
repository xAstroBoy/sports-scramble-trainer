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

// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SetUpInfoText");

	ATN_Challenge_05_SemiPro_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_05_SemiPro_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.AddActorToGameElementList");

	ATN_Challenge_05_SemiPro_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_05_SemiPro_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shutdown");

	ATN_Challenge_05_SemiPro_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Initialize");

	ATN_Challenge_05_SemiPro_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.UserConstructionScript");

	ATN_Challenge_05_SemiPro_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_05_SemiPro_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveEndPlay");

	ATN_Challenge_05_SemiPro_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SportManager_MatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_05_SemiPro_C::SportManager_MatchComplete(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.SportManager_MatchComplete");

	ATN_Challenge_05_SemiPro_C_SportManager_MatchComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_05_SemiPro_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.NotifyChallengeContinue");

	ATN_Challenge_05_SemiPro_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.TriggerAlternativeCadence
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::TriggerAlternativeCadence()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.TriggerAlternativeCadence");

	ATN_Challenge_05_SemiPro_C_TriggerAlternativeCadence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.DelayDestroy");

	ATN_Challenge_05_SemiPro_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.OnInstrumentGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_05_SemiPro_C::OnInstrumentGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.OnInstrumentGrabbed");

	ATN_Challenge_05_SemiPro_C_OnInstrumentGrabbed_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ReceiveBeginPlay");

	ATN_Challenge_05_SemiPro_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_05_SemiPro_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.Shortcut");

	ATN_Challenge_05_SemiPro_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ExecuteUbergraph_TN_Challenge_05_SemiPro
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_05_SemiPro_C::ExecuteUbergraph_TN_Challenge_05_SemiPro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_05_SemiPro.TN_Challenge_05_SemiPro_C.ExecuteUbergraph_TN_Challenge_05_SemiPro");

	ATN_Challenge_05_SemiPro_C_ExecuteUbergraph_TN_Challenge_05_SemiPro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
