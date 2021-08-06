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

// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SetUpInfoText");

	ATN_Challenge_04_Accelerator_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_04_Accelerator_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AddActorToGameElementList");

	ATN_Challenge_04_Accelerator_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_04_Accelerator_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shutdown");

	ATN_Challenge_04_Accelerator_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Initialize");

	ATN_Challenge_04_Accelerator_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.UserConstructionScript");

	ATN_Challenge_04_Accelerator_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveBeginPlay");

	ATN_Challenge_04_Accelerator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DelayDestroy");

	ATN_Challenge_04_Accelerator_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ReceiveEndPlay");

	ATN_Challenge_04_Accelerator_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::SportManager_MatchComplete(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.SportManager_MatchComplete");

	ATN_Challenge_04_Accelerator_C_SportManager_MatchComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.NotifyChallengeContinue");

	ATN_Challenge_04_Accelerator_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::TN_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.TN_TriggerCountdown");

	ATN_Challenge_04_Accelerator_C_TN_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallHit");

	ATN_Challenge_04_Accelerator_C_BallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Shortcut");

	ATN_Challenge_04_Accelerator_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::ResetScore(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ResetScore");

	ATN_Challenge_04_Accelerator_C_ResetScore_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.StartGame");

	ATN_Challenge_04_Accelerator_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.GameEnd");

	ATN_Challenge_04_Accelerator_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerPresenting");

	ATN_Challenge_04_Accelerator_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AnnouncerExitSequenceComplete");

	ATN_Challenge_04_Accelerator_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisBall*             Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::AI_Hit_Ball(class ATennisBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.AI_Hit_Ball");

	ATN_Challenge_04_Accelerator_C_AI_Hit_Ball_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Ready Challenge State
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::Ready_Challenge_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.Ready Challenge State");

	ATN_Challenge_04_Accelerator_C_Ready_Challenge_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DisableAIServing
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::DisableAIServing()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.DisableAIServing");

	ATN_Challenge_04_Accelerator_C_DisableAIServing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallnPlay
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_04_Accelerator_C::BallnPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.BallnPlay");

	ATN_Challenge_04_Accelerator_C_BallnPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_04_Accelerator_C::ExecuteUbergraph_TN_Challenge_04_Accelerator(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C.ExecuteUbergraph_TN_Challenge_04_Accelerator");

	ATN_Challenge_04_Accelerator_C_ExecuteUbergraph_TN_Challenge_04_Accelerator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
