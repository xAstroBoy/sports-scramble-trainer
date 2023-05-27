/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.OverrideScoreText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      InputString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::OverrideScoreText(const class FString& InputString, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.OverrideScoreText");
		
		ATN_MiniGameScoreboard_C_OverrideScoreText_Params params {};
		params.InputString = InputString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideClock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ClockHidden                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::HideClock(bool* ClockHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideClock");
		
		ATN_MiniGameScoreboard_C_HideClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockHidden != nullptr)
			*ClockHidden = params.ClockHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartClock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Countdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AutoStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               TimerStarted                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::StartClock(int32_t Duration, bool Countdown, bool AutoStart, bool* TimerStarted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartClock");
		
		ATN_MiniGameScoreboard_C_StartClock_Params params {};
		params.Duration = Duration;
		params.Countdown = Countdown;
		params.AutoStart = AutoStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TimerStarted != nullptr)
			*TimerStarted = params.TimerStarted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.PauseClock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            DisplayedTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::PauseClock(int32_t* DisplayedTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.PauseClock");
		
		ATN_MiniGameScoreboard_C_PauseClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayedTime != nullptr)
			*DisplayedTime = params.DisplayedTime;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResetClock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ClockReset                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::ResetClock(bool* ClockReset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResetClock");
		
		ATN_MiniGameScoreboard_C_ResetClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockReset != nullptr)
			*ClockReset = params.ClockReset;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResumeClock
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ClockResumed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::ResumeClock(bool* ClockResumed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResumeClock");
		
		ATN_MiniGameScoreboard_C_ResumeClock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClockResumed != nullptr)
			*ClockResumed = params.ClockResumed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ScoreUpdated                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::SetScore(int32_t NewScore, bool* ScoreUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScore");
		
		ATN_MiniGameScoreboard_C_SetScore_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreUpdated != nullptr)
			*ScoreUpdated = params.ScoreUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetPoints
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::SetPoints(int32_t Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetPoints");
		
		ATN_MiniGameScoreboard_C_SetPoints_Params params {};
		params.Points = Points;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetNewClockTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::SetNewClockTime(int32_t NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetNewClockTime");
		
		ATN_MiniGameScoreboard_C_SetNewClockTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScoreRange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            GoalScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::SetScoreRange(int32_t CurrentScore, int32_t GoalScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScoreRange");
		
		ATN_MiniGameScoreboard_C_SetScoreRange_Params params {};
		params.CurrentScore = CurrentScore;
		params.GoalScore = GoalScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Initialize");
		
		ATN_MiniGameScoreboard_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::HideScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScore");
		
		ATN_MiniGameScoreboard_C_HideScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetClockTime
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::SetClockTime(int32_t NewTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetClockTime");
		
		ATN_MiniGameScoreboard_C_SetClockTime_Params params {};
		params.NewTime = NewTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UserConstructionScript");
		
		ATN_MiniGameScoreboard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_TimeTranslation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__FinishedFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_TimeTranslation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__UpdateFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_ScoreTranslation__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__FinishedFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_ScoreTranslation__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__UpdateFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__FinishedFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__UpdateFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__FinishedFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__UpdateFunc");
		
		ATN_MiniGameScoreboard_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ClockUpdateLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::ClockUpdateLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ClockUpdateLoop");
		
		ATN_MiniGameScoreboard_C_ClockUpdateLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ReceiveBeginPlay");
		
		ATN_MiniGameScoreboard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::RevealTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealTime");
		
		ATN_MiniGameScoreboard_C_RevealTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::RevealScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealScore");
		
		ATN_MiniGameScoreboard_C_RevealScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::HideTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideTime");
		
		ATN_MiniGameScoreboard_C_HideTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScoreAnimated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::HideScoreAnimated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScoreAnimated");
		
		ATN_MiniGameScoreboard_C_HideScoreAnimated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewClockTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::RevealNewClockTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewClockTime");
		
		ATN_MiniGameScoreboard_C_RevealNewClockTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewScoring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::RevealNewScoring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewScoring");
		
		ATN_MiniGameScoreboard_C_RevealNewScoring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewClockTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::HideNewClockTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewClockTime");
		
		ATN_MiniGameScoreboard_C_HideNewClockTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewScoring
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::HideNewScoring()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewScoring");
		
		ATN_MiniGameScoreboard_C_HideNewScoring_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartNewClock
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Countdown                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               AutoStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_MiniGameScoreboard_C::StartNewClock(int32_t Duration, bool Countdown, bool AutoStart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartNewClock");
		
		ATN_MiniGameScoreboard_C_StartNewClock_Params params {};
		params.Duration = Duration;
		params.Countdown = Countdown;
		params.AutoStart = AutoStart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UpdateNewClockLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::UpdateNewClockLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UpdateNewClockLoop");
		
		ATN_MiniGameScoreboard_C_UpdateNewClockLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ExecuteUbergraph_TN_MiniGameScoreboard
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::ExecuteUbergraph_TN_MiniGameScoreboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ExecuteUbergraph_TN_MiniGameScoreboard");
		
		ATN_MiniGameScoreboard_C_ExecuteUbergraph_TN_MiniGameScoreboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TriggerTimeReached__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_MiniGameScoreboard_C::TriggerTimeReached__DelegateSignature(int32_t CurrentTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TriggerTimeReached__DelegateSignature");
		
		ATN_MiniGameScoreboard_C_TriggerTimeReached__DelegateSignature_Params params {};
		params.CurrentTime = CurrentTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TargetTimeReached__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_MiniGameScoreboard_C::TargetTimeReached__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TargetTimeReached__DelegateSignature");
		
		ATN_MiniGameScoreboard_C_TargetTimeReached__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_MiniGameScoreboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_MiniGameScoreboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_MiniGameScoreboard.TN_MiniGameScoreboard_C");
		return ptr;
	}

}


