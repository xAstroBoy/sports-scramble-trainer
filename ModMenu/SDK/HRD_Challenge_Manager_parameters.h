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

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.FinalizeChallengeScore
struct AHRD_Challenge_Manager_C_FinalizeChallengeScore_Params
{
	int                                                RunnersYetToScore;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TryLaunchBall
struct AHRD_Challenge_Manager_C_TryLaunchBall_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateLauncherSpeed
struct AHRD_Challenge_Manager_C_UpdateLauncherSpeed_Params
{
	float                                              Min_Speed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Max_Speed;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateScoreboardNames
struct AHRD_Challenge_Manager_C_UpdateScoreboardNames_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLogoPopup
struct AHRD_Challenge_Manager_C_SpawnLogoPopup_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayScoreboardVideo
struct AHRD_Challenge_Manager_C_PlayScoreboardVideo_Params
{
	TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetGameSettings
struct AHRD_Challenge_Manager_C_SetGameSettings_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HideIndicators
struct AHRD_Challenge_Manager_C_HideIndicators_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetBattingMaterial
struct AHRD_Challenge_Manager_C_GetBattingMaterial_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetFieldingMaterial
struct AHRD_Challenge_Manager_C_GetFieldingMaterial_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnerScores
struct AHRD_Challenge_Manager_C_RunnerScores_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetWinningPlayer
struct AHRD_Challenge_Manager_C_GetWinningPlayer_Params
{
	int                                                WinnerInt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGameCleanUp
struct AHRD_Challenge_Manager_C_EndGameCleanUp_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLocalHelper
struct AHRD_Challenge_Manager_C_SpawnLocalHelper_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ToggleTeamColors
struct AHRD_Challenge_Manager_C_ToggleTeamColors_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnTeamActors
struct AHRD_Challenge_Manager_C_SpawnTeamActors_Params
{
	bool                                               FieldersOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetupScoreboards
struct AHRD_Challenge_Manager_C_SetupScoreboards_Params
{
	int                                                BallsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CleanUpGameElements
struct AHRD_Challenge_Manager_C_CleanUpGameElements_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PitcherScoring
struct AHRD_Challenge_Manager_C_PitcherScoring_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BatterScoring
struct AHRD_Challenge_Manager_C_BatterScoring_Params
{
	int                                                ScoreAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportPlayer
struct AHRD_Challenge_Manager_C_TeleportPlayer_Params
{
	struct FScriptDelegate                             TransitionReady;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FScriptDelegate                             TransitionComplete;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               UseTransitionDuration;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Initialize
struct AHRD_Challenge_Manager_C_Initialize_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAndSetEquipment
struct AHRD_Challenge_Manager_C_SpawnAndSetEquipment_Params
{
	class UClass*                                      Ball_Class;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Instrument_Class;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAiPitcher
struct AHRD_Challenge_Manager_C_SpawnAiPitcher_Params
{
	class AActor*                                      PitcherActor;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UserConstructionScript
struct AHRD_Challenge_Manager_C_UserConstructionScript_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BaseballEvent
struct AHRD_Challenge_Manager_C_BaseballEvent_Params
{
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveBeginPlay
struct AHRD_Challenge_Manager_C_ReceiveBeginPlay_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveEndPlay
struct AHRD_Challenge_Manager_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.LocalHelperMessageComplete
struct AHRD_Challenge_Manager_C_LocalHelperMessageComplete_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnRunnerSpawned
struct AHRD_Challenge_Manager_C_OnRunnerSpawned_Params
{
	class AScramBaseballRunnerAI*                      runner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CheckForPlayerBattingPosition
struct AHRD_Challenge_Manager_C_CheckForPlayerBattingPosition_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerBatterReady
struct AHRD_Challenge_Manager_C_PlayerBatterReady_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BeginGame
struct AHRD_Challenge_Manager_C_BeginGame_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateGameScore
struct AHRD_Challenge_Manager_C_UpdateGameScore_Params
{
	int                                                NewP1TotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewP2TotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Single
struct AHRD_Challenge_Manager_C_Single_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Double
struct AHRD_Challenge_Manager_C_Double_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Triple
struct AHRD_Challenge_Manager_C_Triple_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HomeRun
struct AHRD_Challenge_Manager_C_HomeRun_Params
{
	bool                                               BasesLoaded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterCatch
struct AHRD_Challenge_Manager_C_RegisterCatch_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterFoul
struct AHRD_Challenge_Manager_C_RegisterFoul_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateRunners
struct AHRD_Challenge_Manager_C_UpdateRunners_Params
{
	bool                                               NewRunnerOnFirst;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewRunnerOnSecond;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewRunnerOnThird;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseInfo
struct AHRD_Challenge_Manager_C_ShowPauseInfo_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseBubble
struct AHRD_Challenge_Manager_C_ShowPauseBubble_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGameResume
struct AHRD_Challenge_Manager_C_OnGameResume_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGamePause
struct AHRD_Challenge_Manager_C_OnGamePause_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnInitialActors
struct AHRD_Challenge_Manager_C_SpawnInitialActors_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetSetupScoreboards
struct AHRD_Challenge_Manager_C_NetSetupScoreboards_Params
{
	int                                                BallsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetDisplayPopup
struct AHRD_Challenge_Manager_C_NetDisplayPopup_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGame
struct AHRD_Challenge_Manager_C_EndGame_Params
{
	float                                              ScoreDelay;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameRunLoop
struct AHRD_Challenge_Manager_C_GameRunLoop_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ExecuteUbergraph_HRD_Challenge_Manager
struct AHRD_Challenge_Manager_C_ExecuteUbergraph_HRD_Challenge_Manager_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnersReady__DelegateSignature
struct AHRD_Challenge_Manager_C_RunnersReady__DelegateSignature_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerHitHomerun__DelegateSignature
struct AHRD_Challenge_Manager_C_PlayerHitHomerun__DelegateSignature_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerScoredRun__DelegateSignature
struct AHRD_Challenge_Manager_C_PlayerScoredRun__DelegateSignature_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportComplete__DelegateSignature
struct AHRD_Challenge_Manager_C_TeleportComplete__DelegateSignature_Params
{
};

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameCompleted__DelegateSignature
struct AHRD_Challenge_Manager_C_GameCompleted__DelegateSignature_Params
{
	int                                                PlayerScore;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeRunCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
