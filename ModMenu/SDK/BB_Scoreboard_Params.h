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
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_StartTimer
	 */
	struct UBB_Scoreboard_C_BBVideo_StartTimer_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       complete;                                                // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideoScoreFontAndMaterial
	 */
	struct UBB_Scoreboard_C_BBVideoScoreFontAndMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       complete;                                                // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_UpdateScore
	 */
	struct UBB_Scoreboard_C_BBVideo_UpdateScore_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       complete;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowScoreAndTimer
	 */
	struct UBB_Scoreboard_C_BBVideo_HideShowScoreAndTimer_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Completed;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowCenterText
	 */
	struct UBB_Scoreboard_C_BBVideo_HideShowCenterText_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Completed;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_ChangeFontAndMaterial
	 */
	struct UBB_Scoreboard_C_BBVideo_ChangeFontAndMaterial_Params
	{
	public:
		class UMaterialInterface*                                  Material;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSlateFontInfo                                      Font;                                                    // 0x0008(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
		bool                                                       FontChanged;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BB_UpdatePlayerNames
	 */
	struct UBB_Scoreboard_C_BB_UpdatePlayerNames_Params
	{
	public:
		bool                                                       PlayerIsHomeTeam;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Callback;                                                // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_PlayAnimation
	 */
	struct UBB_Scoreboard_C_BBVideo_PlayAnimation_Params
	{
	public:
		EBB_ScoreboardVideos                                       Animation;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       AnimationStarted;                                        // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearAllMGText
	 */
	struct UBB_Scoreboard_C_MG_ClearAllMGText_Params
	{
	public:
		bool                                                       TextCleared;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearBottomText
	 */
	struct UBB_Scoreboard_C_MG_ClearBottomText_Params
	{
	public:
		bool                                                       TextCleared;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_SetBottomText
	 */
	struct UBB_Scoreboard_C_MG_SetBottomText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       TextSet;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearCenterText
	 */
	struct UBB_Scoreboard_C_MG_ClearCenterText_Params
	{
	public:
		bool                                                       TextCleared;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_SetCenterText
	 */
	struct UBB_Scoreboard_C_MG_SetCenterText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       TextSet;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_ShowCenterDisplay
	 */
	struct UBB_Scoreboard_C_MG_ShowCenterDisplay_Params
	{
	public:
		bool                                                       DisplayShown;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearDistanceScore
	 */
	struct UBB_Scoreboard_C_MG_ClearDistanceScore_Params
	{
	public:
		bool                                                       ScoreHidden;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_StopCountDown
	 */
	struct UBB_Scoreboard_C_MG_StopCountDown_Params
	{
	public:
		bool                                                       CountDownStopped;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_HideCenterDisplay
	 */
	struct UBB_Scoreboard_C_MG_HideCenterDisplay_Params
	{
	public:
		bool                                                       CenterDisplayHidden;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_BeginCountDown
	 */
	struct UBB_Scoreboard_C_MG_BeginCountDown_Params
	{
	public:
		int32_t                                                    Seconds;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       CountdownStarted;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.MG_SetDistanceScore
	 */
	struct UBB_Scoreboard_C_MG_SetDistanceScore_Params
	{
	public:
		float                                                      Distance;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       DistanceUpdated;                                         // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateBaserunners
	 */
	struct UBB_Scoreboard_C_BBGame_UpdateBaserunners_Params
	{
	public:
		bool                                                       RunnerOn1;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnerOn2;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnerOn3;                                               // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       RunnersUpdated;                                          // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateOuts
	 */
	struct UBB_Scoreboard_C_BBGame_UpdateOuts_Params
	{
	public:
		int32_t                                                    Freebees;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Outs;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Strikes;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       OutsUpdated;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateGameScore
	 */
	struct UBB_Scoreboard_C_BBGame_UpdateGameScore_Params
	{
	public:
		int32_t                                                    Player1Score;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Player2Score;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ScoreUpdated;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Deactivate
	 */
	struct UBB_Scoreboard_C_BBGame_Deactivate_Params
	{
	public:
		bool                                                       BBGameDeactivate;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Activate
	 */
	struct UBB_Scoreboard_C_BBGame_Activate_Params
	{
	public:
		int32_t                                                    BallsCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StrikesCount;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       GameActivated;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Scoreboard.BB_Scoreboard_C.BBGame_NewInning
	 */
	struct UBB_Scoreboard_C_BBGame_NewInning_Params
	{
	public:
		int32_t                                                    Inning;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Top;                                                     // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       InningUpdated;                                           // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
