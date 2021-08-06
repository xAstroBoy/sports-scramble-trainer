// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.FinalizeChallengeScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RunnersYetToScore              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::FinalizeChallengeScore(int* RunnersYetToScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.FinalizeChallengeScore");

	AHRD_Challenge_Manager_C_FinalizeChallengeScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RunnersYetToScore != nullptr)
		*RunnersYetToScore = params.RunnersYetToScore;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TryLaunchBall
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::TryLaunchBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TryLaunchBall");

	AHRD_Challenge_Manager_C_TryLaunchBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateLauncherSpeed
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Min_Speed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          Max_Speed                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::UpdateLauncherSpeed(float* Min_Speed, float* Max_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateLauncherSpeed");

	AHRD_Challenge_Manager_C_UpdateLauncherSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Min_Speed != nullptr)
		*Min_Speed = params.Min_Speed;
	if (Max_Speed != nullptr)
		*Max_Speed = params.Max_Speed;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateScoreboardNames
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::UpdateScoreboardNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateScoreboardNames");

	AHRD_Challenge_Manager_C_UpdateScoreboardNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLogoPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::SpawnLogoPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLogoPopup");

	AHRD_Challenge_Manager_C_SpawnLogoPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayScoreboardVideo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::PlayScoreboardVideo(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayScoreboardVideo");

	AHRD_Challenge_Manager_C_PlayScoreboardVideo_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::SetGameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetGameSettings");

	AHRD_Challenge_Manager_C_SetGameSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HideIndicators
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::HideIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HideIndicators");

	AHRD_Challenge_Manager_C_HideIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetBattingMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::GetBattingMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetBattingMaterial");

	AHRD_Challenge_Manager_C_GetBattingMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetFieldingMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::GetFieldingMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetFieldingMaterial");

	AHRD_Challenge_Manager_C_GetFieldingMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnerScores
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::RunnerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnerScores");

	AHRD_Challenge_Manager_C_RunnerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetWinningPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinnerInt                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::GetWinningPlayer(int* WinnerInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GetWinningPlayer");

	AHRD_Challenge_Manager_C_GetWinningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WinnerInt != nullptr)
		*WinnerInt = params.WinnerInt;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGameCleanUp
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::EndGameCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGameCleanUp");

	AHRD_Challenge_Manager_C_EndGameCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLocalHelper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::SpawnLocalHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnLocalHelper");

	AHRD_Challenge_Manager_C_SpawnLocalHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ToggleTeamColors
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::ToggleTeamColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ToggleTeamColors");

	AHRD_Challenge_Manager_C_ToggleTeamColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnTeamActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FieldersOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::SpawnTeamActors(bool FieldersOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnTeamActors");

	AHRD_Challenge_Manager_C_SpawnTeamActors_Params params;
	params.FieldersOnly = FieldersOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetupScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BallsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StrikesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::SetupScoreboards(int BallsCount, int StrikesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SetupScoreboards");

	AHRD_Challenge_Manager_C_SetupScoreboards_Params params;
	params.BallsCount = BallsCount;
	params.StrikesCount = StrikesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CleanUpGameElements
// (Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::CleanUpGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CleanUpGameElements");

	AHRD_Challenge_Manager_C_CleanUpGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PitcherScoring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::PitcherScoring(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PitcherScoring");

	AHRD_Challenge_Manager_C_PitcherScoring_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BatterScoring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::BatterScoring(int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BatterScoring");

	AHRD_Challenge_Manager_C_BatterScoring_Params params;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         TransitionReady                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         TransitionComplete             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           UseTransitionDuration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::TeleportPlayer(const struct FScriptDelegate& TransitionReady, const struct FScriptDelegate& TransitionComplete, bool UseTransitionDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportPlayer");

	AHRD_Challenge_Manager_C_TeleportPlayer_Params params;
	params.TransitionReady = TransitionReady;
	params.TransitionComplete = TransitionComplete;
	params.UseTransitionDuration = UseTransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Initialize");

	AHRD_Challenge_Manager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAndSetEquipment
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Ball_Class                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  Instrument_Class               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::SpawnAndSetEquipment(class UClass* Ball_Class, class UClass* Instrument_Class)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAndSetEquipment");

	AHRD_Challenge_Manager_C_SpawnAndSetEquipment_Params params;
	params.Ball_Class = Ball_Class;
	params.Instrument_Class = Instrument_Class;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAiPitcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PitcherActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::SpawnAiPitcher(class AActor** PitcherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnAiPitcher");

	AHRD_Challenge_Manager_C_SpawnAiPitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PitcherActor != nullptr)
		*PitcherActor = params.PitcherActor;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UserConstructionScript");

	AHRD_Challenge_Manager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BaseballEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballEvent  BaseballEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::BaseballEvent(SportsScramble_EBaseballEvent BaseballEvent, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BaseballEvent");

	AHRD_Challenge_Manager_C_BaseballEvent_Params params;
	params.BaseballEvent = BaseballEvent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AHRD_Challenge_Manager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveBeginPlay");

	AHRD_Challenge_Manager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ReceiveEndPlay");

	AHRD_Challenge_Manager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.LocalHelperMessageComplete
// (BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::LocalHelperMessageComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.LocalHelperMessageComplete");

	AHRD_Challenge_Manager_C_LocalHelperMessageComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnRunnerSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AScramBaseballRunnerAI*  runner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::OnRunnerSpawned(class AScramBaseballRunnerAI* runner)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnRunnerSpawned");

	AHRD_Challenge_Manager_C_OnRunnerSpawned_Params params;
	params.runner = runner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CheckForPlayerBattingPosition
// (BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::CheckForPlayerBattingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.CheckForPlayerBattingPosition");

	AHRD_Challenge_Manager_C_CheckForPlayerBattingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerBatterReady
// (BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::PlayerBatterReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerBatterReady");

	AHRD_Challenge_Manager_C_PlayerBatterReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BeginGame
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::BeginGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.BeginGame");

	AHRD_Challenge_Manager_C_BeginGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateGameScore
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewP1TotalScore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewP2TotalScore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::UpdateGameScore(int NewP1TotalScore, int NewP2TotalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateGameScore");

	AHRD_Challenge_Manager_C_UpdateGameScore_Params params;
	params.NewP1TotalScore = NewP1TotalScore;
	params.NewP2TotalScore = NewP2TotalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Single
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::Single()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Single");

	AHRD_Challenge_Manager_C_Single_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Double
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::Double()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Double");

	AHRD_Challenge_Manager_C_Double_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Triple
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::Triple()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.Triple");

	AHRD_Challenge_Manager_C_Triple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HomeRun
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BasesLoaded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::HomeRun(bool BasesLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.HomeRun");

	AHRD_Challenge_Manager_C_HomeRun_Params params;
	params.BasesLoaded = BasesLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterCatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::RegisterCatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterCatch");

	AHRD_Challenge_Manager_C_RegisterCatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterFoul
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::RegisterFoul()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RegisterFoul");

	AHRD_Challenge_Manager_C_RegisterFoul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateRunners
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewRunnerOnFirst               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewRunnerOnSecond              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewRunnerOnThird               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::UpdateRunners(bool NewRunnerOnFirst, bool NewRunnerOnSecond, bool NewRunnerOnThird)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.UpdateRunners");

	AHRD_Challenge_Manager_C_UpdateRunners_Params params;
	params.NewRunnerOnFirst = NewRunnerOnFirst;
	params.NewRunnerOnSecond = NewRunnerOnSecond;
	params.NewRunnerOnThird = NewRunnerOnThird;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::ShowPauseInfo(bool IsPaused, bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseInfo");

	AHRD_Challenge_Manager_C_ShowPauseInfo_Params params;
	params.IsPaused = IsPaused;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseBubble
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::ShowPauseBubble(bool IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ShowPauseBubble");

	AHRD_Challenge_Manager_C_ShowPauseBubble_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGameResume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::OnGameResume(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGameResume");

	AHRD_Challenge_Manager_C_OnGameResume_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGamePause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AHRD_Challenge_Manager_C::OnGamePause(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.OnGamePause");

	AHRD_Challenge_Manager_C_OnGamePause_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnInitialActors
// (BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::SpawnInitialActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.SpawnInitialActors");

	AHRD_Challenge_Manager_C_SpawnInitialActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetSetupScoreboards
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BallsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StrikesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::NetSetupScoreboards(int BallsCount, int StrikesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetSetupScoreboards");

	AHRD_Challenge_Manager_C_NetSetupScoreboards_Params params;
	params.BallsCount = BallsCount;
	params.StrikesCount = StrikesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetDisplayPopup
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::NetDisplayPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.NetDisplayPopup");

	AHRD_Challenge_Manager_C_NetDisplayPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          ScoreDelay                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::EndGame(float ScoreDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.EndGame");

	AHRD_Challenge_Manager_C_EndGame_Params params;
	params.ScoreDelay = ScoreDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameRunLoop
// (BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::GameRunLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameRunLoop");

	AHRD_Challenge_Manager_C_GameRunLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ExecuteUbergraph_HRD_Challenge_Manager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::ExecuteUbergraph_HRD_Challenge_Manager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.ExecuteUbergraph_HRD_Challenge_Manager");

	AHRD_Challenge_Manager_C_ExecuteUbergraph_HRD_Challenge_Manager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnersReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::RunnersReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.RunnersReady__DelegateSignature");

	AHRD_Challenge_Manager_C_RunnersReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerHitHomerun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::PlayerHitHomerun__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerHitHomerun__DelegateSignature");

	AHRD_Challenge_Manager_C_PlayerHitHomerun__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerScoredRun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::PlayerScoredRun__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.PlayerScoredRun__DelegateSignature");

	AHRD_Challenge_Manager_C_PlayerScoredRun__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AHRD_Challenge_Manager_C::TeleportComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.TeleportComplete__DelegateSignature");

	AHRD_Challenge_Manager_C_TeleportComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PlayerScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeRunCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AHRD_Challenge_Manager_C::GameCompleted__DelegateSignature(int PlayerScore, int HomeRunCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function HRD_Challenge_Manager.HRD_Challenge_Manager_C.GameCompleted__DelegateSignature");

	AHRD_Challenge_Manager_C_GameCompleted__DelegateSignature_Params params;
	params.PlayerScore = PlayerScore;
	params.HomeRunCount = HomeRunCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
