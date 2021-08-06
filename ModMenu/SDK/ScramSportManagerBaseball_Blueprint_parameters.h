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

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetRandomInstrument
struct AScramSportManagerBaseball_Blueprint_C_GetRandomInstrument_Params
{
	SportsScramble_EBaseballInstrumentType             ExcludeType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBaseballInstrumentEntryProperties          NewInstrument;                                             // (Parm, OutParm)
	bool                                               Successful;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBatterRunAdvantage
struct AScramSportManagerBaseball_Blueprint_C_GetBatterRunAdvantage_Params
{
	int                                                ReturnValue;                                               // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SaveBaseballState
struct AScramSportManagerBaseball_Blueprint_C_SaveBaseballState_Params
{
	int                                                VisitorsScore;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Inning;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TopOfInning;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FirstPitchOfInning;                                        // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Outs;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strikes;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BatterInstrument;                                          // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions;                                    // (Parm, OutParm, ZeroConstructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetGloveMaterial
struct AScramSportManagerBaseball_Blueprint_C_GetGloveMaterial_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFielderDifficulty
struct AScramSportManagerBaseball_Blueprint_C_GetFielderDifficulty_Params
{
	SportsScramble_EDifficulty                         NewParam;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnFielder
struct AScramSportManagerBaseball_Blueprint_C_SpawnFielder_Params
{
	SportsScramble_EDifficulty                         Difficulty;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Position;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsOutfielder;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMinMaxAngle                                OutfieldMovementRange;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameSetup
struct AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameSetup_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetMittMaterial
struct AScramSportManagerBaseball_Blueprint_C_GetMittMaterial_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.AI_StrikeLooking
struct AScramSportManagerBaseball_Blueprint_C_AI_StrikeLooking_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateScoreboardNames
struct AScramSportManagerBaseball_Blueprint_C_UpdateScoreboardNames_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetPitchingTargetBindings
struct AScramSportManagerBaseball_Blueprint_C_SetPitchingTargetBindings_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLogoPopup
struct AScramSportManagerBaseball_Blueprint_C_SpawnLogoPopup_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RemoveRunners
struct AScramSportManagerBaseball_Blueprint_C_RemoveRunners_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetStrikezoneSize
struct AScramSportManagerBaseball_Blueprint_C_SetStrikezoneSize_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayScoreboardVideo
struct AScramSportManagerBaseball_Blueprint_C_PlayScoreboardVideo_Params
{
	TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetGameSettings
struct AScramSportManagerBaseball_Blueprint_C_SetGameSettings_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ChooseScrambleGroup
struct AScramSportManagerBaseball_Blueprint_C_ChooseScrambleGroup_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ActivateBattingTee
struct AScramSportManagerBaseball_Blueprint_C_ActivateBattingTee_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HideIndicators
struct AScramSportManagerBaseball_Blueprint_C_HideIndicators_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RequestAllowPitch
struct AScramSportManagerBaseball_Blueprint_C_RequestAllowPitch_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleInstrumentBroken
struct AScramSportManagerBaseball_Blueprint_C_HandleInstrumentBroken_Params
{
	class ABaseballInstrument*                         Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInstrumentSelector
struct AScramSportManagerBaseball_Blueprint_C_SpawnInstrumentSelector_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBattingMaterial
struct AScramSportManagerBaseball_Blueprint_C_GetBattingMaterial_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFieldingMaterial
struct AScramSportManagerBaseball_Blueprint_C_GetFieldingMaterial_Params
{
	class UMaterialInstance*                           Material;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RunnerScores
struct AScramSportManagerBaseball_Blueprint_C_RunnerScores_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetWinningPlayer
struct AScramSportManagerBaseball_Blueprint_C_GetWinningPlayer_Params
{
	int                                                WinnerInt;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.EndGameCleanUp
struct AScramSportManagerBaseball_Blueprint_C_EndGameCleanUp_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLocalHelper
struct AScramSportManagerBaseball_Blueprint_C_SpawnLocalHelper_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ToggleTeamColors
struct AScramSportManagerBaseball_Blueprint_C_ToggleTeamColors_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnTeamActors
struct AScramSportManagerBaseball_Blueprint_C_SpawnTeamActors_Params
{
	bool                                               FieldersOnly;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetupScoreboards
struct AScramSportManagerBaseball_Blueprint_C_SetupScoreboards_Params
{
	int                                                BallsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CleanUpGameElements
struct AScramSportManagerBaseball_Blueprint_C_CleanUpGameElements_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitcherScoring
struct AScramSportManagerBaseball_Blueprint_C_PitcherScoring_Params
{
	int                                                score;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateOutsAndFreebies
struct AScramSportManagerBaseball_Blueprint_C_UpdateOutsAndFreebies_Params
{
	int                                                Outs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Freebies;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strikes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterScoring
struct AScramSportManagerBaseball_Blueprint_C_BatterScoring_Params
{
	int                                                ScoreAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.TeleportPlayer
struct AScramSportManagerBaseball_Blueprint_C_TeleportPlayer_Params
{
	struct FScriptDelegate                             TransitionReady;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	struct FScriptDelegate                             TransitionComplete;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	bool                                               UseTransitionDuration;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ProgressGame
struct AScramSportManagerBaseball_Blueprint_C_ProgressGame_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Initialize
struct AScramSportManagerBaseball_Blueprint_C_Initialize_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnEquipmentAndAI
struct AScramSportManagerBaseball_Blueprint_C_SpawnEquipmentAndAI_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnStrikezone
struct AScramSportManagerBaseball_Blueprint_C_SpawnStrikezone_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatter
struct AScramSportManagerBaseball_Blueprint_C_SpawnAiBatter_Params
{
	class AScramBaseballBatterAI*                      Batter;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcher
struct AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcher_Params
{
	class AScramBaseballPitcherAI*                     Pitcher;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UserConstructionScript
struct AScramSportManagerBaseball_Blueprint_C_UserConstructionScript_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__FinishedFunc
struct AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__FinishedFunc_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__UpdateFunc
struct AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__UpdateFunc_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BaseballEvent
struct AScramSportManagerBaseball_Blueprint_C_BaseballEvent_Params
{
	SportsScramble_EBaseballEvent                      BaseballEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Location;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveBeginPlay
struct AScramSportManagerBaseball_Blueprint_C_ReceiveBeginPlay_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrike
struct AScramSportManagerBaseball_Blueprint_C_RegisterStrike_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterOut
struct AScramSportManagerBaseball_Blueprint_C_RegisterOut_Params
{
	int                                                NewOuts;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayUmpireOut;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               PlayOrgan;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleGameEnd
struct AScramSportManagerBaseball_Blueprint_C_HandleGameEnd_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveEndPlay
struct AScramSportManagerBaseball_Blueprint_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BBGameIntroSequence
struct AScramSportManagerBaseball_Blueprint_C_BBGameIntroSequence_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LocalHelperMessageComplete
struct AScramSportManagerBaseball_Blueprint_C_LocalHelperMessageComplete_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginInning
struct AScramSportManagerBaseball_Blueprint_C_BeginInning_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetDominantHand
struct AScramSportManagerBaseball_Blueprint_C_SetDominantHand_Params
{
	class AActor*                                      DominantHand;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_Mitt_C*                                  Mitt;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnRunnerSpawned
struct AScramSportManagerBaseball_Blueprint_C_OnRunnerSpawned_Params
{
	class AScramBaseballRunnerAI*                      runner;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StartOrgan
struct AScramSportManagerBaseball_Blueprint_C_StartOrgan_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StopOrgan
struct AScramSportManagerBaseball_Blueprint_C_StopOrgan_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CheckForPlayerBattingPosition
struct AScramSportManagerBaseball_Blueprint_C_CheckForPlayerBattingPosition_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayerBatterReady
struct AScramSportManagerBaseball_Blueprint_C_PlayerBatterReady_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginGame
struct AScramSportManagerBaseball_Blueprint_C_BeginGame_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchTargetHit
struct AScramSportManagerBaseball_Blueprint_C_PitchTargetHit_Params
{
	int                                                ScoreAmount;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterHitOutfieldTarget
struct AScramSportManagerBaseball_Blueprint_C_BatterHitOutfieldTarget_Params
{
	class AScramBall*                                  Ball;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TargetId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SendRestartGame
struct AScramSportManagerBaseball_Blueprint_C_SendRestartGame_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateGameScore
struct AScramSportManagerBaseball_Blueprint_C_UpdateGameScore_Params
{
	int                                                NewP1TotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewP2TotalScore;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SwitchSides
struct AScramSportManagerBaseball_Blueprint_C_SwitchSides_Params
{
	bool                                               TopOfTheInning;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentInning;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Single
struct AScramSportManagerBaseball_Blueprint_C_Single_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Double
struct AScramSportManagerBaseball_Blueprint_C_Double_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Triple
struct AScramSportManagerBaseball_Blueprint_C_Triple_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HomeRun
struct AScramSportManagerBaseball_Blueprint_C_HomeRun_Params
{
	bool                                               BasesLoaded;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayFirstPitchSFX
struct AScramSportManagerBaseball_Blueprint_C_PlayFirstPitchSFX_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterCatch
struct AScramSportManagerBaseball_Blueprint_C_RegisterCatch_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterFoul
struct AScramSportManagerBaseball_Blueprint_C_RegisterFoul_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterBall
struct AScramSportManagerBaseball_Blueprint_C_RegisterBall_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateRunners
struct AScramSportManagerBaseball_Blueprint_C_UpdateRunners_Params
{
	bool                                               NewRunnerOnFirst;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewRunnerOnSecond;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               NewRunnerOnThird;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentSelected
struct AScramSportManagerBaseball_Blueprint_C_OnInstrumentSelected_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentBroken
struct AScramSportManagerBaseball_Blueprint_C_OnInstrumentBroken_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PrepNewInning
struct AScramSportManagerBaseball_Blueprint_C_PrepNewInning_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BrokenBat
struct AScramSportManagerBaseball_Blueprint_C_BrokenBat_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NewInstrumentSelected
struct AScramSportManagerBaseball_Blueprint_C_NewInstrumentSelected_Params
{
	class ABaseballInstrument*                         Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.InstrumentSelected
struct AScramSportManagerBaseball_Blueprint_C_InstrumentSelected_Params
{
	class UObject*                                     Instrument;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentsSpawned
struct AScramSportManagerBaseball_Blueprint_C_OnInstrumentsSpawned_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseInfo
struct AScramSportManagerBaseball_Blueprint_C_ShowPauseInfo_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseBubble
struct AScramSportManagerBaseball_Blueprint_C_ShowPauseBubble_Params
{
	bool                                               IsPaused;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameResume
struct AScramSportManagerBaseball_Blueprint_C_OnGameResume_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGamePause
struct AScramSportManagerBaseball_Blueprint_C_OnGamePause_Params
{
	bool                                               WasPausedByMe;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInitialActors
struct AScramSportManagerBaseball_Blueprint_C_SpawnInitialActors_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameReadyToBegin
struct AScramSportManagerBaseball_Blueprint_C_GameReadyToBegin_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetSetupScoreboards
struct AScramSportManagerBaseball_Blueprint_C_NetSetupScoreboards_Params
{
	int                                                BallsCount;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                StrikesCount;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrikeout
struct AScramSportManagerBaseball_Blueprint_C_RegisterStrikeout_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetUpdateOutsAndFreebies
struct AScramSportManagerBaseball_Blueprint_C_NetUpdateOutsAndFreebies_Params
{
	int                                                Outs;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Freebies;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strikes;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ResetCount
struct AScramSportManagerBaseball_Blueprint_C_ResetCount_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetsUpdated
struct AScramSportManagerBaseball_Blueprint_C_PitchingTargetsUpdated_Params
{
	bool                                               TL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               TR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BL;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BR;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetHit
struct AScramSportManagerBaseball_Blueprint_C_PitchingTargetHit_Params
{
	SportsScramble_EBaseballScrambleTargetLocations    Location;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisplayPopup
struct AScramSportManagerBaseball_Blueprint_C_NetDisplayPopup_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetAILook
struct AScramSportManagerBaseball_Blueprint_C_SetAILook_Params
{
	struct FAvatarLook                                 AvatarLook;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameStart
struct AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameStart_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcherDelayed
struct AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcherDelayed_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatterDelayed
struct AScramSportManagerBaseball_Blueprint_C_SpawnAiBatterDelayed_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayErrorSfx
struct AScramSportManagerBaseball_Blueprint_C_PlayErrorSfx_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LoadBaseballState
struct AScramSportManagerBaseball_Blueprint_C_LoadBaseballState_Params
{
	int                                                VisitorsScore;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Inning;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TopOfInning;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               FirstPitchOfInning;                                        // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                Outs;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Strikes;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      BatterInstrument;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FMittSpawnInfo>                      PitcherScrambleOptions;                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ServerReady
struct AScramSportManagerBaseball_Blueprint_C_ServerReady_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_UpdateScoreboardInning
struct AScramSportManagerBaseball_Blueprint_C_Multi_UpdateScoreboardInning_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_SetInning
struct AScramSportManagerBaseball_Blueprint_C_Multi_SetInning_Params
{
	int                                                Inning;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Top;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameDone
struct AScramSportManagerBaseball_Blueprint_C_OnGameDone_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowMitt
struct AScramSportManagerBaseball_Blueprint_C_ShowMitt_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisablePause
struct AScramSportManagerBaseball_Blueprint_C_NetDisablePause_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.DisablePause
struct AScramSportManagerBaseball_Blueprint_C_DisablePause_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShutDown_Bat_PBP
struct AScramSportManagerBaseball_Blueprint_C_ShutDown_Bat_PBP_Params
{
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ExecuteUbergraph_ScramSportManagerBaseball_Blueprint
struct AScramSportManagerBaseball_Blueprint_C_ExecuteUbergraph_ScramSportManagerBaseball_Blueprint_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameCompleted__DelegateSignature
struct AScramSportManagerBaseball_Blueprint_C_GameCompleted__DelegateSignature_Params
{
	bool                                               LocalPlayerVictory;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                AwayScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HomeScore;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnSidesSwitchedDispatcher__DelegateSignature
struct AScramSportManagerBaseball_Blueprint_C_OnSidesSwitchedDispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
