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

// Function Scoreboard.Scoreboard_C.OverrideScoreText
struct UScoreboard_C_OverrideScoreText_Params
{
	struct FString                                     InputString;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Scoreboard.Scoreboard_C.HideClock
struct UScoreboard_C_HideClock_Params
{
	bool                                               ClockHidden;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Scoreboard.Scoreboard_C.ResumeClock
struct UScoreboard_C_ResumeClock_Params
{
	bool                                               ClockResumed;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Scoreboard.Scoreboard_C.ResetClock
struct UScoreboard_C_ResetClock_Params
{
	bool                                               ClockReset;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Scoreboard.Scoreboard_C.PauseClock
struct UScoreboard_C_PauseClock_Params
{
	int                                                DisplayedTime;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Scoreboard.Scoreboard_C.StartClock
struct UScoreboard_C_StartClock_Params
{
	int                                                Duration;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               AutoStart;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TimerStarted;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Scoreboard.Scoreboard_C.SetScore
struct UScoreboard_C_SetScore_Params
{
	int                                                NewScore;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScoreUpdated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
