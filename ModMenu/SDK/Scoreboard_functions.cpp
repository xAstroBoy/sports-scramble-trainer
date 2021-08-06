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

// Function Scoreboard.Scoreboard_C.OverrideScoreText
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 InputString                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::OverrideScoreText(const struct FString& InputString, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.OverrideScoreText");

	UScoreboard_C_OverrideScoreText_Params params;
	params.InputString = InputString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function Scoreboard.Scoreboard_C.HideClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClockHidden                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::HideClock(bool* ClockHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.HideClock");

	UScoreboard_C_HideClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClockHidden != nullptr)
		*ClockHidden = params.ClockHidden;

}


// Function Scoreboard.Scoreboard_C.ResumeClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClockResumed                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::ResumeClock(bool* ClockResumed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ResumeClock");

	UScoreboard_C_ResumeClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClockResumed != nullptr)
		*ClockResumed = params.ClockResumed;

}


// Function Scoreboard.Scoreboard_C.ResetClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ClockReset                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::ResetClock(bool* ClockReset)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.ResetClock");

	UScoreboard_C_ResetClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClockReset != nullptr)
		*ClockReset = params.ClockReset;

}


// Function Scoreboard.Scoreboard_C.PauseClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            DisplayedTime                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UScoreboard_C::PauseClock(int* DisplayedTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.PauseClock");

	UScoreboard_C_PauseClock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (DisplayedTime != nullptr)
		*DisplayedTime = params.DisplayedTime;

}


// Function Scoreboard.Scoreboard_C.StartClock
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           AutoStart                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TimerStarted                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::StartClock(int Duration, bool Countdown, bool AutoStart, bool* TimerStarted)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.StartClock");

	UScoreboard_C_StartClock_Params params;
	params.Duration = Duration;
	params.Countdown = Countdown;
	params.AutoStart = AutoStart;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TimerStarted != nullptr)
		*TimerStarted = params.TimerStarted;

}


// Function Scoreboard.Scoreboard_C.SetScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           ScoreUpdated                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UScoreboard_C::SetScore(int NewScore, bool* ScoreUpdated)
{
	static auto fn = UObject::FindObject<UFunction>("Function Scoreboard.Scoreboard_C.SetScore");

	UScoreboard_C_SetScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScoreUpdated != nullptr)
		*ScoreUpdated = params.ScoreUpdated;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
