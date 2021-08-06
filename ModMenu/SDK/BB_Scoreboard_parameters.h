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

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_StartTimer
struct UBB_Scoreboard_C_BBVideo_StartTimer_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideoScoreFontAndMaterial
struct UBB_Scoreboard_C_BBVideoScoreFontAndMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_UpdateScore
struct UBB_Scoreboard_C_BBVideo_UpdateScore_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               complete;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowScoreAndTimer
struct UBB_Scoreboard_C_BBVideo_HideShowScoreAndTimer_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Completed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_HideShowCenterText
struct UBB_Scoreboard_C_BBVideo_HideShowCenterText_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Completed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_ChangeFontAndMaterial
struct UBB_Scoreboard_C_BBVideo_ChangeFontAndMaterial_Params
{
	class UMaterialInterface*                          Material;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                              Font;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                               FontChanged;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BB_UpdatePlayerNames
struct UBB_Scoreboard_C_BB_UpdatePlayerNames_Params
{
	bool                                               PlayerIsHomeTeam;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBVideo_PlayAnimation
struct UBB_Scoreboard_C_BBVideo_PlayAnimation_Params
{
	TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AnimationStarted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearAllMGText
struct UBB_Scoreboard_C_MG_ClearAllMGText_Params
{
	bool                                               TextCleared;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearBottomText
struct UBB_Scoreboard_C_MG_ClearBottomText_Params
{
	bool                                               TextCleared;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_SetBottomText
struct UBB_Scoreboard_C_MG_SetBottomText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TextSet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearCenterText
struct UBB_Scoreboard_C_MG_ClearCenterText_Params
{
	bool                                               TextCleared;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_SetCenterText
struct UBB_Scoreboard_C_MG_SetCenterText_Params
{
	struct FText                                       Text;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               TextSet;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_ShowCenterDisplay
struct UBB_Scoreboard_C_MG_ShowCenterDisplay_Params
{
	bool                                               DisplayShown;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_ClearDistanceScore
struct UBB_Scoreboard_C_MG_ClearDistanceScore_Params
{
	bool                                               ScoreHidden;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_StopCountDown
struct UBB_Scoreboard_C_MG_StopCountDown_Params
{
	bool                                               CountDownStopped;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_HideCenterDisplay
struct UBB_Scoreboard_C_MG_HideCenterDisplay_Params
{
	bool                                               CenterDisplayHidden;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_BeginCountDown
struct UBB_Scoreboard_C_MG_BeginCountDown_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CountdownStarted;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.MG_SetDistanceScore
struct UBB_Scoreboard_C_MG_SetDistanceScore_Params
{
	float                                              Distance;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DistanceUpdated;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateBaserunners
struct UBB_Scoreboard_C_BBGame_UpdateBaserunners_Params
{
	bool                                               RunnerOn1;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnerOn2;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnerOn3;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RunnersUpdated;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateOuts
struct UBB_Scoreboard_C_BBGame_UpdateOuts_Params
{
	int                                                Freebees;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Outs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strikes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OutsUpdated;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_UpdateGameScore
struct UBB_Scoreboard_C_BBGame_UpdateGameScore_Params
{
	int                                                Player1Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Player2Score;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ScoreUpdated;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Deactivate
struct UBB_Scoreboard_C_BBGame_Deactivate_Params
{
	bool                                               BBGameDeactivate;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_Activate
struct UBB_Scoreboard_C_BBGame_Activate_Params
{
	int                                                BallsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               GameActivated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Scoreboard.BB_Scoreboard_C.BBGame_NewInning
struct UBB_Scoreboard_C_BBGame_NewInning_Params
{
	int                                                Inning;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Top;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InningUpdated;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
