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

// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.FlashScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPracticeArenaLight_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.FlashScore");

	ABaseballPracticeArenaLight_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPracticeArenaLight_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.HideBallTarget");

	ABaseballPracticeArenaLight_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPracticeArenaLight_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ShowBallTarget");

	ABaseballPracticeArenaLight_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetTarget
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::ResetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetTarget");

	ABaseballPracticeArenaLight_C_ResetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.DeactivateEverything
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::DeactivateEverything()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.DeactivateEverything");

	ABaseballPracticeArenaLight_C_DeactivateEverything_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Initialize");

	ABaseballPracticeArenaLight_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.UserConstructionScript");

	ABaseballPracticeArenaLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballPracticeArenaLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ReceiveBeginPlay");

	ABaseballPracticeArenaLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.BreakLightFixture
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::BreakLightFixture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.BreakLightFixture");

	ABaseballPracticeArenaLight_C_BreakLightFixture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ScorePlayerHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaLight_C::ScorePlayerHit(class ABB_Ball_Base_C* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ScorePlayerHit");

	ABaseballPracticeArenaLight_C_ScorePlayerHit_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.CleanupTarget
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::CleanupTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.CleanupTarget");

	ABaseballPracticeArenaLight_C_CleanupTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetLightFixture
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::ResetLightFixture()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ResetLightFixture");

	ABaseballPracticeArenaLight_C_ResetLightFixture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.Deactivate");

	ABaseballPracticeArenaLight_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaLight_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.OnTriggered");

	ABaseballPracticeArenaLight_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ExecuteUbergraph_BaseballPracticeArenaLight
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaLight_C::ExecuteUbergraph_BaseballPracticeArenaLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.ExecuteUbergraph_BaseballPracticeArenaLight");

	ABaseballPracticeArenaLight_C_ExecuteUbergraph_BaseballPracticeArenaLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.PlayerBrokeLightFixture__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaLight_C::PlayerBrokeLightFixture__DelegateSignature(class ABB_Ball_Base_C* Ball, int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.PlayerBrokeLightFixture__DelegateSignature");

	ABaseballPracticeArenaLight_C_PlayerBrokeLightFixture__DelegateSignature_Params params;
	params.Ball = Ball;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.LightFixtureHitDetected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaLight_C::LightFixtureHitDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaLight.BaseballPracticeArenaLight_C.LightFixtureHitDetected__DelegateSignature");

	ABaseballPracticeArenaLight_C_LightFixtureHitDetected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
