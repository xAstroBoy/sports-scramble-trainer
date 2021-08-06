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

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideo_StartTimer
struct ABB_Scoreboard_TopTimer_BP_C_BBVideo_StartTimer_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideoScoreFontAndMaterial
struct ABB_Scoreboard_TopTimer_BP_C_BBVideoScoreFontAndMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideo_UpdateScore
struct ABB_Scoreboard_TopTimer_BP_C_BBVideo_UpdateScore_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideo_HideShowScoreAndTimer
struct ABB_Scoreboard_TopTimer_BP_C_BBVideo_HideShowScoreAndTimer_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Completed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideo_HideShowCenterText
struct ABB_Scoreboard_TopTimer_BP_C_BBVideo_HideShowCenterText_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Completed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideo_ChangeFontAndMaterial
struct ABB_Scoreboard_TopTimer_BP_C_BBVideo_ChangeFontAndMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               FontChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BB_UpdatePlayerNames
struct ABB_Scoreboard_TopTimer_BP_C_BB_UpdatePlayerNames_Params
{
	bool                                               PlayerIsHomeTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBVideo_PlayAnimation
struct ABB_Scoreboard_TopTimer_BP_C_BBVideo_PlayAnimation_Params
{
	TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnimationStarted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBGame_UpdateGameScore
struct ABB_Scoreboard_TopTimer_BP_C_BBGame_UpdateGameScore_Params
{
	int                                                Player1Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScoreUpdated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_ClearAllMGText
struct ABB_Scoreboard_TopTimer_BP_C_MG_ClearAllMGText_Params
{
	bool                                               TextCleared;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_ClearBottomText
struct ABB_Scoreboard_TopTimer_BP_C_MG_ClearBottomText_Params
{
	bool                                               TextCleared;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_SetBottomText
struct ABB_Scoreboard_TopTimer_BP_C_MG_SetBottomText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TextSet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_ClearCenterText
struct ABB_Scoreboard_TopTimer_BP_C_MG_ClearCenterText_Params
{
	bool                                               TextCleared;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_SetCenterText
struct ABB_Scoreboard_TopTimer_BP_C_MG_SetCenterText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TextSet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_ShowCenterDisplay
struct ABB_Scoreboard_TopTimer_BP_C_MG_ShowCenterDisplay_Params
{
	bool                                               DisplayShown;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_ClearDistanceScore
struct ABB_Scoreboard_TopTimer_BP_C_MG_ClearDistanceScore_Params
{
	bool                                               ScoreHidden;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_StopCountDown
struct ABB_Scoreboard_TopTimer_BP_C_MG_StopCountDown_Params
{
	bool                                               CountDownStopped;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_HideCenterDisplay
struct ABB_Scoreboard_TopTimer_BP_C_MG_HideCenterDisplay_Params
{
	bool                                               CenterDisplayHidden;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_BeginCountDown
struct ABB_Scoreboard_TopTimer_BP_C_MG_BeginCountDown_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CountdownStarted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.MG_SetDistanceScore
struct ABB_Scoreboard_TopTimer_BP_C_MG_SetDistanceScore_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DistanceUpdated;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBGame_UpdateOuts
struct ABB_Scoreboard_TopTimer_BP_C_BBGame_UpdateOuts_Params
{
	int                                                Freebees;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Outs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strikes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OutsUpdated;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBGame_UpdateBaserunners
struct ABB_Scoreboard_TopTimer_BP_C_BBGame_UpdateBaserunners_Params
{
	bool                                               RunnerOn1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnerOn2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnerOn3;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnersUpdated;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBGame_Deactivate
struct ABB_Scoreboard_TopTimer_BP_C_BBGame_Deactivate_Params
{
	bool                                               BBGameDeactivate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBGame_Activate
struct ABB_Scoreboard_TopTimer_BP_C_BBGame_Activate_Params
{
	int                                                BallsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameActivated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.BBGame_NewInning
struct ABB_Scoreboard_TopTimer_BP_C_BBGame_NewInning_Params
{
	int                                                Inning;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Top;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InningUpdated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.Initialize
struct ABB_Scoreboard_TopTimer_BP_C_Initialize_Params
{
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.UserConstructionScript
struct ABB_Scoreboard_TopTimer_BP_C_UserConstructionScript_Params
{
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.ReceiveBeginPlay
struct ABB_Scoreboard_TopTimer_BP_C_ReceiveBeginPlay_Params
{
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.SetClockTimer
struct ABB_Scoreboard_TopTimer_BP_C_SetClockTimer_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.ClockUpdateLoop
struct ABB_Scoreboard_TopTimer_BP_C_ClockUpdateLoop_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Scoreboard_TopTimer_BP.BB_Scoreboard_TopTimer_BP_C.ExecuteUbergraph_BB_Scoreboard_TopTimer_BP
struct ABB_Scoreboard_TopTimer_BP_C_ExecuteUbergraph_BB_Scoreboard_TopTimer_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
