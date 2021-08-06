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

// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.FlashScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor             Color                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ScoreFlashed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPracticeArenaWindow_C::FlashScore(int score, const struct FSlateColor& Color, bool* ScoreFlashed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.FlashScore");

	ABaseballPracticeArenaWindow_C_FlashScore_Params params;
	params.score = score;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreFlashed != nullptr)
		*ScoreFlashed = params.ScoreFlashed;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.HideBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPracticeArenaWindow_C::HideBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.HideBallTarget");

	ABaseballPracticeArenaWindow_C_HideBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ShowBallTarget
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABaseballPracticeArenaWindow_C::ShowBallTarget(bool Instant, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ShowBallTarget");

	ABaseballPracticeArenaWindow_C_ShowBallTarget_Params params;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetTarget
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::ResetTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetTarget");

	ABaseballPracticeArenaWindow_C_ResetTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.DeactivateEverything
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::DeactivateEverything()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.DeactivateEverything");

	ABaseballPracticeArenaWindow_C_DeactivateEverything_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Initialize");

	ABaseballPracticeArenaWindow_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.UserConstructionScript");

	ABaseballPracticeArenaWindow_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ReceiveBeginPlay");

	ABaseballPracticeArenaWindow_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.BreakWindow
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::BreakWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.BreakWindow");

	ABaseballPracticeArenaWindow_C_BreakWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ScorePlayerHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaWindow_C::ScorePlayerHit(class ABB_Ball_Base_C* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ScorePlayerHit");

	ABaseballPracticeArenaWindow_C_ScorePlayerHit_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.CleanupTarget
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::CleanupTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.CleanupTarget");

	ABaseballPracticeArenaWindow_C_CleanupTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetWindow
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::ResetWindow()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ResetWindow");

	ABaseballPracticeArenaWindow_C_ResetWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Deactivate
// (BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::Deactivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.Deactivate");

	ABaseballPracticeArenaWindow_C_Deactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.OnTriggered
// (Event, Public, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaWindow_C::OnTriggered(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.OnTriggered");

	ABaseballPracticeArenaWindow_C_OnTriggered_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ExecuteUbergraph_BaseballPracticeArenaWindow
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaWindow_C::ExecuteUbergraph_BaseballPracticeArenaWindow(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.ExecuteUbergraph_BaseballPracticeArenaWindow");

	ABaseballPracticeArenaWindow_C_ExecuteUbergraph_BaseballPracticeArenaWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.PlayerBrokeWindow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABB_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABaseballPracticeArenaWindow_C::PlayerBrokeWindow__DelegateSignature(class ABB_Ball_Base_C* Ball, int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.PlayerBrokeWindow__DelegateSignature");

	ABaseballPracticeArenaWindow_C_PlayerBrokeWindow__DelegateSignature_Params params;
	params.Ball = Ball;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.WindowOverlapDetected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABaseballPracticeArenaWindow_C::WindowOverlapDetected__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BaseballPracticeArenaWindow.BaseballPracticeArenaWindow_C.WindowOverlapDetected__DelegateSignature");

	ABaseballPracticeArenaWindow_C_WindowOverlapDetected__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
