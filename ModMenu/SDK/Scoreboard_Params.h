#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Scoreboard.Scoreboard_C.OverrideScoreText
	 */
	struct UScoreboard_C_OverrideScoreText_Params
	{
	public:
		class FString                                              InputString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scoreboard.Scoreboard_C.HideClock
	 */
	struct UScoreboard_C_HideClock_Params
	{
	public:
		bool                                                       ClockHidden;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scoreboard.Scoreboard_C.ResumeClock
	 */
	struct UScoreboard_C_ResumeClock_Params
	{
	public:
		bool                                                       ClockResumed;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scoreboard.Scoreboard_C.ResetClock
	 */
	struct UScoreboard_C_ResetClock_Params
	{
	public:
		bool                                                       ClockReset;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scoreboard.Scoreboard_C.PauseClock
	 */
	struct UScoreboard_C_PauseClock_Params
	{
	public:
		int32_t                                                    DisplayedTime;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Scoreboard.Scoreboard_C.StartClock
	 */
	struct UScoreboard_C_StartClock_Params
	{
	public:
		int32_t                                                    Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Countdown;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AutoStart;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TimerStarted;                                            // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Scoreboard.Scoreboard_C.SetScore
	 */
	struct UScoreboard_C_SetScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScoreUpdated;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
