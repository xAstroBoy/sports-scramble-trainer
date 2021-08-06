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

// Function BB_Challenge_Base.BB_Challenge_Base_C.AddActorToGameElementList
struct ABB_Challenge_Base_C_AddActorToGameElementList_Params
{
	class AActor*                                      Actor;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Callback;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.Shutdown
struct ABB_Challenge_Base_C_Shutdown_Params
{
	bool                                               ShutdownBegun;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_05_SportManagerPlayerPitching
struct ABB_Challenge_Base_C_BB_CHG_05_SportManagerPlayerPitching_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_UpdateScore
struct ABB_Challenge_Base_C_BB_CHG_UpdateScore_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SpawnSportManagerWithAI
struct ABB_Challenge_Base_C_BB_CHG_SpawnSportManagerWithAI_Params
{
	bool                                               Override_Batting_Skill;                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	SportsScramble_EScramSkill                         Override_Skill;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBatIcon
struct ABB_Challenge_Base_C_BB_CHG_SwapBatIcon_Params
{
	class UClass*                                      InstrumentClass;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBatList
struct ABB_Challenge_Base_C_BB_CHG_GetBatList_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_CalculateEndScore
struct ABB_Challenge_Base_C_BB_CHG_CalculateEndScore_Params
{
	bool                                               Countdown;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentScore;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBallIcon
struct ABB_Challenge_Base_C_BB_CHG_SwapBallIcon_Params
{
	class UClass*                                      BallClass;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBallList
struct ABB_Challenge_Base_C_BB_CHG_GetBallList_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.Initialize
struct ABB_Challenge_Base_C_Initialize_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.UserConstructionScript
struct ABB_Challenge_Base_C_UserConstructionScript_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.OnLoaded_826C3EA940CB27C0854669A32DADB5D4
struct ABB_Challenge_Base_C_OnLoaded_826C3EA940CB27C0854669A32DADB5D4_Params
{
	class UObject*                                     Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_ShowScoreboardAnimation
struct ABB_Challenge_Base_C_BB_CHG_ShowScoreboardAnimation_Params
{
	TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreMaterialAndFont
struct ABB_Challenge_Base_C_BB_CHG_SetScoreMaterialAndFont_Params
{
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreVisibility
struct ABB_Challenge_Base_C_BB_CHG_SetScoreVisibility_Params
{
	UMG_ESlateVisibility                               Visibility;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_AttachTrainingScoreboard
struct ABB_Challenge_Base_C_BB_CHG_AttachTrainingScoreboard_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.SetScoreTimerTime
struct ABB_Challenge_Base_C_SetScoreTimerTime_Params
{
	int                                                Seconds;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FontSize;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.AttachTopTimer
struct ABB_Challenge_Base_C_AttachTopTimer_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BaseballGameCompleted
struct ABB_Challenge_Base_C_BaseballGameCompleted_Params
{
	bool                                               LocalPlayerVictory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AwayScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.ReceiveBeginPlay
struct ABB_Challenge_Base_C_ReceiveBeginPlay_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.EndOfGame
struct ABB_Challenge_Base_C_EndOfGame_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballBallIcon
struct ABB_Challenge_Base_C_ShowBaseballBallIcon_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_StartIntroCadence
struct ABB_Challenge_Base_C_BB_StartIntroCadence_Params
{
	bool                                               UseChallengeMusic;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               UseCountdown;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               HomeTeam;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_TriggerCountdown
struct ABB_Challenge_Base_C_BB_TriggerCountdown_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballInstrumentIcon
struct ABB_Challenge_Base_C_ShowBaseballInstrumentIcon_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_ShowInstrumentAndBallIcons
struct ABB_Challenge_Base_C_BB_ShowInstrumentAndBallIcons_Params
{
	TEnumAsByte<BB_ScramIconSetting_EBB_ScramIconSetting> Settings;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.TriggerAlternateCadence
struct ABB_Challenge_Base_C_TriggerAlternateCadence_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.PlayAsync2D
struct ABB_Challenge_Base_C_PlayAsync2D_Params
{
};

// Function BB_Challenge_Base.BB_Challenge_Base_C.ExecuteUbergraph_BB_Challenge_Base
struct ABB_Challenge_Base_C_ExecuteUbergraph_BB_Challenge_Base_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
