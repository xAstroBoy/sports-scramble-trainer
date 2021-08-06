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

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.OverrideScoreText
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::OverrideScoreText(const struct FString& InputString, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.OverrideScoreText");

	ATN_MiniGameScoreboard_C_OverrideScoreText_Params params;
	params.InputString = InputString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClockHidden                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::HideClock(bool* ClockHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideClock");

	ATN_MiniGameScoreboard_C_HideClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClockHidden != nullptr)
		*ClockHidden = params.ClockHidden;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AutoStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TimerStarted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::StartClock(int Duration, bool Countdown, bool AutoStart, bool* TimerStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartClock");

	ATN_MiniGameScoreboard_C_StartClock_Params params;
	params.Duration = Duration;
	params.Countdown = Countdown;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimerStarted != nullptr)
		*TimerStarted = params.TimerStarted;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.PauseClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DisplayedTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::PauseClock(int* DisplayedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.PauseClock");

	ATN_MiniGameScoreboard_C_PauseClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayedTime != nullptr)
		*DisplayedTime = params.DisplayedTime;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResetClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClockReset                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::ResetClock(bool* ClockReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResetClock");

	ATN_MiniGameScoreboard_C_ResetClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClockReset != nullptr)
		*ClockReset = params.ClockReset;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResumeClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClockResumed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::ResumeClock(bool* ClockResumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResumeClock");

	ATN_MiniGameScoreboard_C_ResumeClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClockResumed != nullptr)
		*ClockResumed = params.ClockResumed;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScore
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScoreUpdated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::SetScore(int NewScore, bool* ScoreUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScore");

	ATN_MiniGameScoreboard_C_SetScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreUpdated != nullptr)
		*ScoreUpdated = params.ScoreUpdated;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::SetPoints(int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetPoints");

	ATN_MiniGameScoreboard_C_SetPoints_Params params;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetNewClockTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::SetNewClockTime(int NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetNewClockTime");

	ATN_MiniGameScoreboard_C_SetNewClockTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScoreRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            GoalScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::SetScoreRange(int CurrentScore, int GoalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScoreRange");

	ATN_MiniGameScoreboard_C_SetScoreRange_Params params;
	params.CurrentScore = CurrentScore;
	params.GoalScore = GoalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Initialize");

	ATN_MiniGameScoreboard_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScore
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::HideScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScore");

	ATN_MiniGameScoreboard_C_HideScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetClockTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewTime                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::SetClockTime(int NewTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetClockTime");

	ATN_MiniGameScoreboard_C_SetClockTime_Params params;
	params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UserConstructionScript");

	ATN_MiniGameScoreboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__FinishedFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_TimeTranslation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__FinishedFunc");

	ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__UpdateFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_TimeTranslation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__UpdateFunc");

	ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__FinishedFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_ScoreTranslation__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__FinishedFunc");

	ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__UpdateFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_ScoreTranslation__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__UpdateFunc");

	ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__FinishedFunc");

	ATN_MiniGameScoreboard_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__UpdateFunc");

	ATN_MiniGameScoreboard_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__FinishedFunc");

	ATN_MiniGameScoreboard_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
void ATN_MiniGameScoreboard_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__UpdateFunc");

	ATN_MiniGameScoreboard_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ClockUpdateLoop
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::ClockUpdateLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ClockUpdateLoop");

	ATN_MiniGameScoreboard_C_ClockUpdateLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_MiniGameScoreboard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ReceiveBeginPlay");

	ATN_MiniGameScoreboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealTime
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::RevealTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealTime");

	ATN_MiniGameScoreboard_C_RevealTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealScore
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::RevealScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealScore");

	ATN_MiniGameScoreboard_C_RevealScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideTime
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::HideTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideTime");

	ATN_MiniGameScoreboard_C_HideTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScoreAnimated
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::HideScoreAnimated()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScoreAnimated");

	ATN_MiniGameScoreboard_C_HideScoreAnimated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewClockTime
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::RevealNewClockTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewClockTime");

	ATN_MiniGameScoreboard_C_RevealNewClockTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewScoring
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::RevealNewScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewScoring");

	ATN_MiniGameScoreboard_C_RevealNewScoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewClockTime
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::HideNewClockTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewClockTime");

	ATN_MiniGameScoreboard_C_HideNewClockTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewScoring
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::HideNewScoring()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewScoring");

	ATN_MiniGameScoreboard_C_HideNewScoring_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartNewClock
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AutoStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_MiniGameScoreboard_C::StartNewClock(int Duration, bool Countdown, bool AutoStart)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartNewClock");

	ATN_MiniGameScoreboard_C_StartNewClock_Params params;
	params.Duration = Duration;
	params.Countdown = Countdown;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UpdateNewClockLoop
// (BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::UpdateNewClockLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UpdateNewClockLoop");

	ATN_MiniGameScoreboard_C_UpdateNewClockLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ExecuteUbergraph_TN_MiniGameScoreboard
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::ExecuteUbergraph_TN_MiniGameScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ExecuteUbergraph_TN_MiniGameScoreboard");

	ATN_MiniGameScoreboard_C_ExecuteUbergraph_TN_MiniGameScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TriggerTimeReached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_MiniGameScoreboard_C::TriggerTimeReached__DelegateSignature(int CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TriggerTimeReached__DelegateSignature");

	ATN_MiniGameScoreboard_C_TriggerTimeReached__DelegateSignature_Params params;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TargetTimeReached__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ATN_MiniGameScoreboard_C::TargetTimeReached__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TargetTimeReached__DelegateSignature");

	ATN_MiniGameScoreboard_C_TargetTimeReached__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
