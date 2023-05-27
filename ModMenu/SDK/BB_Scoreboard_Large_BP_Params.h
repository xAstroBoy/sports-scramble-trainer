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
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_StartTimer
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideo_StartTimer_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       complete;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideoScoreFontAndMaterial
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideoScoreFontAndMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       complete;                                                // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_UpdateScore
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideo_UpdateScore_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       complete;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowScoreAndTimer
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideo_HideShowScoreAndTimer_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Completed;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_HideShowCenterText
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideo_HideShowCenterText_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Completed;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_T2C6[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_ChangeFontAndMaterial
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideo_ChangeFontAndMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       FontChanged;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BB_UpdatePlayerNames
	 */
	struct ABB_Scoreboard_Large_BP_C_BB_UpdatePlayerNames_Params
	{
	public:
		bool                                                       PlayerIsHomeTeam;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBVideo_PlayAnimation
	 */
	struct ABB_Scoreboard_Large_BP_C_BBVideo_PlayAnimation_Params
	{
	public:
		EBB_ScoreboardVideos                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnimationStarted;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateGameScore
	 */
	struct ABB_Scoreboard_Large_BP_C_BBGame_UpdateGameScore_Params
	{
	public:
		int32_t                                                    Player1Score;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Score;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScoreUpdated;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_53KI[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearAllMGText
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_ClearAllMGText_Params
	{
	public:
		bool                                                       TextCleared;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearBottomText
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_ClearBottomText_Params
	{
	public:
		bool                                                       TextCleared;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetBottomText
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_SetBottomText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       TextSet;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearCenterText
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_ClearCenterText_Params
	{
	public:
		bool                                                       TextCleared;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetCenterText
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_SetCenterText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       TextSet;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ShowCenterDisplay
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_ShowCenterDisplay_Params
	{
	public:
		bool                                                       DisplayShown;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_ClearDistanceScore
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_ClearDistanceScore_Params
	{
	public:
		bool                                                       ScoreHidden;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_StopCountDown
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_StopCountDown_Params
	{
	public:
		bool                                                       CountDownStopped;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_HideCenterDisplay
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_HideCenterDisplay_Params
	{
	public:
		bool                                                       CenterDisplayHidden;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_BeginCountDown
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_BeginCountDown_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CountdownStarted;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MG_SetDistanceScore
	 */
	struct ABB_Scoreboard_Large_BP_C_MG_SetDistanceScore_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DistanceUpdated;                                         // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FL6H[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateOuts
	 */
	struct ABB_Scoreboard_Large_BP_C_BBGame_UpdateOuts_Params
	{
	public:
		int32_t                                                    Freebees;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Outs;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Strikes;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutsUpdated;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_UpdateBaserunners
	 */
	struct ABB_Scoreboard_Large_BP_C_BBGame_UpdateBaserunners_Params
	{
	public:
		bool                                                       RunnerOn1;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnerOn2;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnerOn3;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnersUpdated;                                          // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Deactivate
	 */
	struct ABB_Scoreboard_Large_BP_C_BBGame_Deactivate_Params
	{
	public:
		bool                                                       BBGameDeactivate;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_Activate
	 */
	struct ABB_Scoreboard_Large_BP_C_BBGame_Activate_Params
	{
	public:
		int32_t                                                    BallsCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StrikesCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GameActivated;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BBGame_NewInning
	 */
	struct ABB_Scoreboard_Large_BP_C_BBGame_NewInning_Params
	{
	public:
		int32_t                                                    Inning;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Top;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InningUpdated;                                           // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.SetCountDownTime
	 */
	struct ABB_Scoreboard_Large_BP_C_SetCountDownTime_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JVUB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Initialize
	 */
	struct ABB_Scoreboard_Large_BP_C_Initialize_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.UserConstructionScript
	 */
	struct ABB_Scoreboard_Large_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__FinishedFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_LogoLoop__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_LogoLoop__UpdateFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_LogoLoop__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__FinishedFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_Countdown__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_Countdown__UpdateFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_Countdown__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__FinishedFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_StrikeOut__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_StrikeOut__UpdateFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_StrikeOut__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__FinishedFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_HR1__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR1__UpdateFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_HR1__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__FinishedFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_HR3__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR3__UpdateFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_HR3__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__FinishedFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_HR2__FinishedFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Timeline_HR2__UpdateFunc
	 */
	struct ABB_Scoreboard_Large_BP_C_Timeline_HR2__UpdateFunc_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayVideo
	 */
	struct ABB_Scoreboard_Large_BP_C_PlayVideo_Params
	{
	public:
		EBB_ScoreboardVideos                                       Video;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.EnterLogo
	 */
	struct ABB_Scoreboard_Large_BP_C_EnterLogo_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Enter Countdown
	 */
	struct ABB_Scoreboard_Large_BP_C_EnterCountdown_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitLogo
	 */
	struct ABB_Scoreboard_Large_BP_C_ExitLogo_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.NextVideoSwap
	 */
	struct ABB_Scoreboard_Large_BP_C_NextVideoSwap_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExitCountdown
	 */
	struct ABB_Scoreboard_Large_BP_C_ExitCountdown_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Strikeout Timeline
	 */
	struct ABB_Scoreboard_Large_BP_C_PlayStrikeoutTimeline_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.Play Homerun Intro Timeline
	 */
	struct ABB_Scoreboard_Large_BP_C_PlayHomerunIntroTimeline_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.PlayGrandSlamIntroTimeline
	 */
	struct ABB_Scoreboard_Large_BP_C_PlayGrandSlamIntroTimeline_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ReceiveBeginPlay
	 */
	struct ABB_Scoreboard_Large_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.BeginCountdown
	 */
	struct ABB_Scoreboard_Large_BP_C_BeginCountdown_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.ExecuteUbergraph_BB_Scoreboard_Large_BP
	 */
	struct ABB_Scoreboard_Large_BP_C_ExecuteUbergraph_BB_Scoreboard_Large_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BSA3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerDisplayReady__DelegateSignature
	 */
	struct ABB_Scoreboard_Large_BP_C_TimerDisplayReady__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.TimerCountdownComplete__DelegateSignature
	 */
	struct ABB_Scoreboard_Large_BP_C_TimerCountdownComplete__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaSequenceComplete__DelegateSignature
	 */
	struct ABB_Scoreboard_Large_BP_C_MediaSequenceComplete__DelegateSignature_Params
	{	};

	/**
	 * Function BB_Scoreboard_Large_BP.BB_Scoreboard_Large_BP_C.MediaComplete__DelegateSignature
	 */
	struct ABB_Scoreboard_Large_BP_C_MediaComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
