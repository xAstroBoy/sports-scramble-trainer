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

// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.SetUpInfoText");

	ATN_Challenge_06_ReturnWall_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Initialize");

	ATN_Challenge_06_ReturnWall_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.UserConstructionScript");

	ATN_Challenge_06_ReturnWall_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.StartGame");

	ATN_Challenge_06_ReturnWall_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_06_ReturnWall_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveEndPlay");

	ATN_Challenge_06_ReturnWall_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerPresenting");

	ATN_Challenge_06_ReturnWall_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_06_ReturnWall_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.NotifyChallengeContinue");

	ATN_Challenge_06_ReturnWall_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.GameEnd");

	ATN_Challenge_06_ReturnWall_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.TN_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::TN_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.TN_TriggerCountdown");

	ATN_Challenge_06_ReturnWall_C_TN_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallLauncherBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBallActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_06_ReturnWall_C::ReturnWallLauncherBall(class AActor* NewBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallLauncherBall");

	ATN_Challenge_06_ReturnWall_C_ReturnWallLauncherBall_Params params;
	params.NewBallActor = NewBallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.BallHitSomething
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_06_ReturnWall_C::BallHitSomething(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.BallHitSomething");

	ATN_Challenge_06_ReturnWall_C_BallHitSomething_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Streak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_06_ReturnWall_C::ReturnWallHit(int Streak)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReturnWallHit");

	ATN_Challenge_06_ReturnWall_C_ReturnWallHit_Params params;
	params.Streak = Streak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ReceiveBeginPlay");

	ATN_Challenge_06_ReturnWall_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.Shortcut");

	ATN_Challenge_06_ReturnWall_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AttemptLaunchBall
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::AttemptLaunchBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AttemptLaunchBall");

	ATN_Challenge_06_ReturnWall_C_AttemptLaunchBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_06_ReturnWall_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.AnnouncerExitSequenceComplete");

	ATN_Challenge_06_ReturnWall_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ExecuteUbergraph_TN_Challenge_06_ReturnWall
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_06_ReturnWall_C::ExecuteUbergraph_TN_Challenge_06_ReturnWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_06_ReturnWall.TN_Challenge_06_ReturnWall_C.ExecuteUbergraph_TN_Challenge_06_ReturnWall");

	ATN_Challenge_06_ReturnWall_C_ExecuteUbergraph_TN_Challenge_06_ReturnWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
