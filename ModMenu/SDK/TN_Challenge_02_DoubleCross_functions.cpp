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

// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupRackets
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::SetupRackets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupRackets");

	ATN_Challenge_02_DoubleCross_C_SetupRackets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupBallLaunchers
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::SetupBallLaunchers()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetupBallLaunchers");

	ATN_Challenge_02_DoubleCross_C_SetupBallLaunchers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SetUpInfoText");

	ATN_Challenge_02_DoubleCross_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Initialize");

	ATN_Challenge_02_DoubleCross_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.UserConstructionScript");

	ATN_Challenge_02_DoubleCross_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.BallLaunched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::BallLaunched(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.BallLaunched");

	ATN_Challenge_02_DoubleCross_C_BallLaunched_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::OnBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHit");

	ATN_Challenge_02_DoubleCross_C_OnBallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.LaunchedBall Primitive Destroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPrimitiveActor*    DestroyedPrimitive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::LaunchedBall_Primitive_Destroyed(class AScramPrimitiveActor* DestroyedPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.LaunchedBall Primitive Destroyed");

	ATN_Challenge_02_DoubleCross_C_LaunchedBall_Primitive_Destroyed_Params params;
	params.DestroyedPrimitive = DestroyedPrimitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SCORE AND DISPLAY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score_Value                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 BallStrikePos                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::SCORE_AND_DISPLAY(int Score_Value, const struct FVector& BallStrikePos)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SCORE AND DISPLAY");

	ATN_Challenge_02_DoubleCross_C_SCORE_AND_DISPLAY_Params params;
	params.Score_Value = Score_Value;
	params.BallStrikePos = BallStrikePos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveBeginPlay");

	ATN_Challenge_02_DoubleCross_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.StartGame");

	ATN_Challenge_02_DoubleCross_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ReceiveEndPlay");

	ATN_Challenge_02_DoubleCross_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerPresenting");

	ATN_Challenge_02_DoubleCross_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.NotifyChallengeContinue");

	ATN_Challenge_02_DoubleCross_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SpeedUpTimer
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::SpeedUpTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.SpeedUpTimer");

	ATN_Challenge_02_DoubleCross_C_SpeedUpTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.GameEnd");

	ATN_Challenge_02_DoubleCross_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.TN_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::TN_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.TN_TriggerCountdown");

	ATN_Challenge_02_DoubleCross_C_TN_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHitModifyCollision
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::OnBallHitModifyCollision(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.OnBallHitModifyCollision");

	ATN_Challenge_02_DoubleCross_C_OnBallHitModifyCollision_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.AnnouncerExitSequenceComplete");

	ATN_Challenge_02_DoubleCross_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Short Cut
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_02_DoubleCross_C::Short_Cut()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.Short Cut");

	ATN_Challenge_02_DoubleCross_C_Short_Cut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ExecuteUbergraph_TN_Challenge_02_DoubleCross
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_02_DoubleCross_C::ExecuteUbergraph_TN_Challenge_02_DoubleCross(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C.ExecuteUbergraph_TN_Challenge_02_DoubleCross");

	ATN_Challenge_02_DoubleCross_C_ExecuteUbergraph_TN_Challenge_02_DoubleCross_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
