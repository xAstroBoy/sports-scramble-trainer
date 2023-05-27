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
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.OverrideScoreText
	 */
	struct ATN_MiniGameScoreboard_C_OverrideScoreText_Params
	{
	public:
		class FString                                              InputString;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_RPX9[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideClock
	 */
	struct ATN_MiniGameScoreboard_C_HideClock_Params
	{
	public:
		bool                                                       ClockHidden;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartClock
	 */
	struct ATN_MiniGameScoreboard_C_StartClock_Params
	{
	public:
		int32_t                                                    Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Countdown;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AutoStart;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       TimerStarted;                                            // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q03J[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.PauseClock
	 */
	struct ATN_MiniGameScoreboard_C_PauseClock_Params
	{
	public:
		int32_t                                                    DisplayedTime;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResetClock
	 */
	struct ATN_MiniGameScoreboard_C_ResetClock_Params
	{
	public:
		bool                                                       ClockReset;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_L6XC[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ResumeClock
	 */
	struct ATN_MiniGameScoreboard_C_ResumeClock_Params
	{
	public:
		bool                                                       ClockResumed;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScore
	 */
	struct ATN_MiniGameScoreboard_C_SetScore_Params
	{
	public:
		int32_t                                                    NewScore;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScoreUpdated;                                            // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M56W[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetPoints
	 */
	struct ATN_MiniGameScoreboard_C_SetPoints_Params
	{
	public:
		int32_t                                                    Points;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I08Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetNewClockTime
	 */
	struct ATN_MiniGameScoreboard_C_SetNewClockTime_Params
	{
	public:
		int32_t                                                    NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetScoreRange
	 */
	struct ATN_MiniGameScoreboard_C_SetScoreRange_Params
	{
	public:
		int32_t                                                    CurrentScore;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    GoalScore;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Initialize
	 */
	struct ATN_MiniGameScoreboard_C_Initialize_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScore
	 */
	struct ATN_MiniGameScoreboard_C_HideScore_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.SetClockTime
	 */
	struct ATN_MiniGameScoreboard_C_SetClockTime_Params
	{
	public:
		int32_t                                                    NewTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UserConstructionScript
	 */
	struct ATN_MiniGameScoreboard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__FinishedFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__FinishedFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_TimeTranslation__UpdateFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_TimeTranslation__UpdateFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__FinishedFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__FinishedFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_ScoreTranslation__UpdateFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_ScoreTranslation__UpdateFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__FinishedFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_0__UpdateFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__FinishedFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.Timeline_1__UpdateFunc
	 */
	struct ATN_MiniGameScoreboard_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ClockUpdateLoop
	 */
	struct ATN_MiniGameScoreboard_C_ClockUpdateLoop_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ReceiveBeginPlay
	 */
	struct ATN_MiniGameScoreboard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealTime
	 */
	struct ATN_MiniGameScoreboard_C_RevealTime_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealScore
	 */
	struct ATN_MiniGameScoreboard_C_RevealScore_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideTime
	 */
	struct ATN_MiniGameScoreboard_C_HideTime_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideScoreAnimated
	 */
	struct ATN_MiniGameScoreboard_C_HideScoreAnimated_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewClockTime
	 */
	struct ATN_MiniGameScoreboard_C_RevealNewClockTime_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.RevealNewScoring
	 */
	struct ATN_MiniGameScoreboard_C_RevealNewScoring_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewClockTime
	 */
	struct ATN_MiniGameScoreboard_C_HideNewClockTime_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.HideNewScoring
	 */
	struct ATN_MiniGameScoreboard_C_HideNewScoring_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.StartNewClock
	 */
	struct ATN_MiniGameScoreboard_C_StartNewClock_Params
	{
	public:
		int32_t                                                    Duration;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Countdown;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       AutoStart;                                               // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.UpdateNewClockLoop
	 */
	struct ATN_MiniGameScoreboard_C_UpdateNewClockLoop_Params
	{	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.ExecuteUbergraph_TN_MiniGameScoreboard
	 */
	struct ATN_MiniGameScoreboard_C_ExecuteUbergraph_TN_MiniGameScoreboard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TriggerTimeReached__DelegateSignature
	 */
	struct ATN_MiniGameScoreboard_C_TriggerTimeReached__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentTime;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function TN_MiniGameScoreboard.TN_MiniGameScoreboard_C.TargetTimeReached__DelegateSignature
	 */
	struct ATN_MiniGameScoreboard_C_TargetTimeReached__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
