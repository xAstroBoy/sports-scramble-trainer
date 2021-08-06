#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.OverrideScoreText
struct ATN_MiniGameScoreboard_C_OverrideScoreText_Params
{
	struct FString                                     InputString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideClock
struct ATN_MiniGameScoreboard_C_HideClock_Params
{
	bool                                               ClockHidden;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartClock
struct ATN_MiniGameScoreboard_C_StartClock_Params
{
	int                                                Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TimerStarted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.PauseClock
struct ATN_MiniGameScoreboard_C_PauseClock_Params
{
	int                                                DisplayedTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResetClock
struct ATN_MiniGameScoreboard_C_ResetClock_Params
{
	bool                                               ClockReset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResumeClock
struct ATN_MiniGameScoreboard_C_ResumeClock_Params
{
	bool                                               ClockResumed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScore
struct ATN_MiniGameScoreboard_C_SetScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScoreUpdated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetPoints
struct ATN_MiniGameScoreboard_C_SetPoints_Params
{
	int                                                Points;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetNewClockTime
struct ATN_MiniGameScoreboard_C_SetNewClockTime_Params
{
	int                                                NewTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScoreRange
struct ATN_MiniGameScoreboard_C_SetScoreRange_Params
{
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GoalScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Initialize
struct ATN_MiniGameScoreboard_C_Initialize_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScore
struct ATN_MiniGameScoreboard_C_HideScore_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetClockTime
struct ATN_MiniGameScoreboard_C_SetClockTime_Params
{
	int                                                NewTime;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UserConstructionScript
struct ATN_MiniGameScoreboard_C_UserConstructionScript_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__FinishedFunc
struct ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__FinishedFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__UpdateFunc
struct ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__UpdateFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__FinishedFunc
struct ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__FinishedFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__UpdateFunc
struct ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__UpdateFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__FinishedFunc
struct ATN_MiniGameScoreboard_C_Timeline_0__FinishedFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__UpdateFunc
struct ATN_MiniGameScoreboard_C_Timeline_0__UpdateFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__FinishedFunc
struct ATN_MiniGameScoreboard_C_Timeline_1__FinishedFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__UpdateFunc
struct ATN_MiniGameScoreboard_C_Timeline_1__UpdateFunc_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ClockUpdateLoop
struct ATN_MiniGameScoreboard_C_ClockUpdateLoop_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ReceiveBeginPlay
struct ATN_MiniGameScoreboard_C_ReceiveBeginPlay_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealTime
struct ATN_MiniGameScoreboard_C_RevealTime_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealScore
struct ATN_MiniGameScoreboard_C_RevealScore_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideTime
struct ATN_MiniGameScoreboard_C_HideTime_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScoreAnimated
struct ATN_MiniGameScoreboard_C_HideScoreAnimated_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewClockTime
struct ATN_MiniGameScoreboard_C_RevealNewClockTime_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewScoring
struct ATN_MiniGameScoreboard_C_RevealNewScoring_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewClockTime
struct ATN_MiniGameScoreboard_C_HideNewClockTime_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewScoring
struct ATN_MiniGameScoreboard_C_HideNewScoring_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartNewClock
struct ATN_MiniGameScoreboard_C_StartNewClock_Params
{
	int                                                Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UpdateNewClockLoop
struct ATN_MiniGameScoreboard_C_UpdateNewClockLoop_Params
{
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ExecuteUbergraph_TN_MiniGameScoreboard
struct ATN_MiniGameScoreboard_C_ExecuteUbergraph_TN_MiniGameScoreboard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TriggerTimeReached__DelegateSignature
struct ATN_MiniGameScoreboard_C_TriggerTimeReached__DelegateSignature_Params
{
	int                                                CurrentTime;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TargetTimeReached__DelegateSignature
struct ATN_MiniGameScoreboard_C_TargetTimeReached__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
