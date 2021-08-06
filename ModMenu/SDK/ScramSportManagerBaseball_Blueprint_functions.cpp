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

// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetRandomInstrument
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballInstrumentType ExcludeType                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBaseballInstrumentEntryProperties NewInstrument                  (Parm, OutParm)
// bool                           Successful                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::GetRandomInstrument(SportsScramble_EBaseballInstrumentType ExcludeType, struct FBaseballInstrumentEntryProperties* NewInstrument, bool* Successful)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetRandomInstrument");

	AScramSportManagerBaseball_Blueprint_C_GetRandomInstrument_Params params;
	params.ExcludeType = ExcludeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewInstrument != nullptr)
		*NewInstrument = params.NewInstrument;
	if (Successful != nullptr)
		*Successful = params.Successful;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBatterRunAdvantage
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int AScramSportManagerBaseball_Blueprint_C::GetBatterRunAdvantage()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBatterRunAdvantage");

	AScramSportManagerBaseball_Blueprint_C_GetBatterRunAdvantage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SaveBaseballState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            VisitorsScore                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Inning                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TopOfInning                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FirstPitchOfInning             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Outs                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Strikes                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BatterInstrument               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FMittSpawnInfo>  PitcherScrambleOptions         (Parm, OutParm, ZeroConstructor)
void AScramSportManagerBaseball_Blueprint_C::SaveBaseballState(int* VisitorsScore, int* HomeScore, int* Inning, bool* TopOfInning, bool* FirstPitchOfInning, int* Outs, int* Strikes, class UClass** BatterInstrument, TArray<struct FMittSpawnInfo>* PitcherScrambleOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SaveBaseballState");

	AScramSportManagerBaseball_Blueprint_C_SaveBaseballState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VisitorsScore != nullptr)
		*VisitorsScore = params.VisitorsScore;
	if (HomeScore != nullptr)
		*HomeScore = params.HomeScore;
	if (Inning != nullptr)
		*Inning = params.Inning;
	if (TopOfInning != nullptr)
		*TopOfInning = params.TopOfInning;
	if (FirstPitchOfInning != nullptr)
		*FirstPitchOfInning = params.FirstPitchOfInning;
	if (Outs != nullptr)
		*Outs = params.Outs;
	if (Strikes != nullptr)
		*Strikes = params.Strikes;
	if (BatterInstrument != nullptr)
		*BatterInstrument = params.BatterInstrument;
	if (PitcherScrambleOptions != nullptr)
		*PitcherScrambleOptions = params.PitcherScrambleOptions;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetGloveMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GetGloveMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetGloveMaterial");

	AScramSportManagerBaseball_Blueprint_C_GetGloveMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFielderDifficulty
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// SportsScramble_EDifficulty     NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GetFielderDifficulty(SportsScramble_EDifficulty* NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFielderDifficulty");

	AScramSportManagerBaseball_Blueprint_C_GetFielderDifficulty_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnFielder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EDifficulty     Difficulty                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*         Position                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           IsOutfielder                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMinMaxAngle            OutfieldMovementRange          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::SpawnFielder(SportsScramble_EDifficulty Difficulty, class USceneComponent* Position, bool IsOutfielder, const struct FMinMaxAngle& OutfieldMovementRange)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnFielder");

	AScramSportManagerBaseball_Blueprint_C_SpawnFielder_Params params;
	params.Difficulty = Difficulty;
	params.Position = Position;
	params.IsOutfielder = IsOutfielder;
	params.OutfieldMovementRange = OutfieldMovementRange;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameSetup
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::BB_ChallengeGameSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameSetup");

	AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetMittMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GetMittMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetMittMaterial");

	AScramSportManagerBaseball_Blueprint_C_GetMittMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.AI_StrikeLooking
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::AI_StrikeLooking()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.AI_StrikeLooking");

	AScramSportManagerBaseball_Blueprint_C_AI_StrikeLooking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateScoreboardNames
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::UpdateScoreboardNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateScoreboardNames");

	AScramSportManagerBaseball_Blueprint_C_UpdateScoreboardNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetPitchingTargetBindings
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SetPitchingTargetBindings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetPitchingTargetBindings");

	AScramSportManagerBaseball_Blueprint_C_SetPitchingTargetBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLogoPopup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnLogoPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLogoPopup");

	AScramSportManagerBaseball_Blueprint_C_SpawnLogoPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RemoveRunners
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RemoveRunners()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RemoveRunners");

	AScramSportManagerBaseball_Blueprint_C_RemoveRunners_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetStrikezoneSize
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SetStrikezoneSize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetStrikezoneSize");

	AScramSportManagerBaseball_Blueprint_C_SetStrikezoneSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayScoreboardVideo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::PlayScoreboardVideo(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayScoreboardVideo");

	AScramSportManagerBaseball_Blueprint_C_PlayScoreboardVideo_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetGameSettings
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SetGameSettings()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetGameSettings");

	AScramSportManagerBaseball_Blueprint_C_SetGameSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ChooseScrambleGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ChooseScrambleGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ChooseScrambleGroup");

	AScramSportManagerBaseball_Blueprint_C_ChooseScrambleGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ActivateBattingTee
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ActivateBattingTee()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ActivateBattingTee");

	AScramSportManagerBaseball_Blueprint_C_ActivateBattingTee_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HideIndicators
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::HideIndicators()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HideIndicators");

	AScramSportManagerBaseball_Blueprint_C_HideIndicators_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RequestAllowPitch
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RequestAllowPitch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RequestAllowPitch");

	AScramSportManagerBaseball_Blueprint_C_RequestAllowPitch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleInstrumentBroken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballInstrument*     Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::HandleInstrumentBroken(class ABaseballInstrument* Instrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleInstrumentBroken");

	AScramSportManagerBaseball_Blueprint_C_HandleInstrumentBroken_Params params;
	params.Instrument = Instrument;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInstrumentSelector
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnInstrumentSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInstrumentSelector");

	AScramSportManagerBaseball_Blueprint_C_SpawnInstrumentSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBattingMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GetBattingMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetBattingMaterial");

	AScramSportManagerBaseball_Blueprint_C_GetBattingMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFieldingMaterial
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMaterialInstance*       Material                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GetFieldingMaterial(class UMaterialInstance** Material)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetFieldingMaterial");

	AScramSportManagerBaseball_Blueprint_C_GetFieldingMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Material != nullptr)
		*Material = params.Material;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RunnerScores
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RunnerScores()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RunnerScores");

	AScramSportManagerBaseball_Blueprint_C_RunnerScores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetWinningPlayer
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            WinnerInt                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GetWinningPlayer(int* WinnerInt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GetWinningPlayer");

	AScramSportManagerBaseball_Blueprint_C_GetWinningPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WinnerInt != nullptr)
		*WinnerInt = params.WinnerInt;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.EndGameCleanUp
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::EndGameCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.EndGameCleanUp");

	AScramSportManagerBaseball_Blueprint_C_EndGameCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLocalHelper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnLocalHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnLocalHelper");

	AScramSportManagerBaseball_Blueprint_C_SpawnLocalHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ToggleTeamColors
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ToggleTeamColors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ToggleTeamColors");

	AScramSportManagerBaseball_Blueprint_C_ToggleTeamColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnTeamActors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           FieldersOnly                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::SpawnTeamActors(bool FieldersOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnTeamActors");

	AScramSportManagerBaseball_Blueprint_C_SpawnTeamActors_Params params;
	params.FieldersOnly = FieldersOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetupScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BallsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StrikesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::SetupScoreboards(int BallsCount, int StrikesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetupScoreboards");

	AScramSportManagerBaseball_Blueprint_C_SetupScoreboards_Params params;
	params.BallsCount = BallsCount;
	params.StrikesCount = StrikesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CleanUpGameElements
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::CleanUpGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CleanUpGameElements");

	AScramSportManagerBaseball_Blueprint_C_CleanUpGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitcherScoring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::PitcherScoring(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitcherScoring");

	AScramSportManagerBaseball_Blueprint_C_PitcherScoring_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateOutsAndFreebies
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Outs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Freebies                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Strikes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::UpdateOutsAndFreebies(int Outs, int Freebies, int Strikes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateOutsAndFreebies");

	AScramSportManagerBaseball_Blueprint_C_UpdateOutsAndFreebies_Params params;
	params.Outs = Outs;
	params.Freebies = Freebies;
	params.Strikes = Strikes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterScoring
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::BatterScoring(int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterScoring");

	AScramSportManagerBaseball_Blueprint_C_BatterScoring_Params params;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.TeleportPlayer
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScriptDelegate         TransitionReady                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// struct FScriptDelegate         TransitionComplete             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// bool                           UseTransitionDuration          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::TeleportPlayer(const struct FScriptDelegate& TransitionReady, const struct FScriptDelegate& TransitionComplete, bool UseTransitionDuration)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.TeleportPlayer");

	AScramSportManagerBaseball_Blueprint_C_TeleportPlayer_Params params;
	params.TransitionReady = TransitionReady;
	params.TransitionComplete = TransitionComplete;
	params.UseTransitionDuration = UseTransitionDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ProgressGame
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ProgressGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ProgressGame");

	AScramSportManagerBaseball_Blueprint_C_ProgressGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Initialize");

	AScramSportManagerBaseball_Blueprint_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnEquipmentAndAI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnEquipmentAndAI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnEquipmentAndAI");

	AScramSportManagerBaseball_Blueprint_C_SpawnEquipmentAndAI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnStrikezone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnStrikezone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnStrikezone");

	AScramSportManagerBaseball_Blueprint_C_SpawnStrikezone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBaseballBatterAI*  Batter                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::SpawnAiBatter(class AScramBaseballBatterAI** Batter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatter");

	AScramSportManagerBaseball_Blueprint_C_SpawnAiBatter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Batter != nullptr)
		*Batter = params.Batter;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBaseballPitcherAI* Pitcher                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::SpawnAiPitcher(class AScramBaseballPitcherAI** Pitcher)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcher");

	AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pitcher != nullptr)
		*Pitcher = params.Pitcher;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UserConstructionScript");

	AScramSportManagerBaseball_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__FinishedFunc
// (BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Timeline_OrganFade__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__FinishedFunc");

	AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__UpdateFunc
// (BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Timeline_OrganFade__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Timeline_OrganFade__UpdateFunc");

	AScramSportManagerBaseball_Blueprint_C_Timeline_OrganFade__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BaseballEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballEvent  BaseballEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::BaseballEvent(SportsScramble_EBaseballEvent BaseballEvent, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BaseballEvent");

	AScramSportManagerBaseball_Blueprint_C_BaseballEvent_Params params;
	params.BaseballEvent = BaseballEvent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveBeginPlay");

	AScramSportManagerBaseball_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrike
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RegisterStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrike");

	AScramSportManagerBaseball_Blueprint_C_RegisterStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterOut
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewOuts                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PlayUmpireOut                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           PlayOrgan                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::RegisterOut(int NewOuts, bool PlayUmpireOut, bool PlayOrgan)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterOut");

	AScramSportManagerBaseball_Blueprint_C_RegisterOut_Params params;
	params.NewOuts = NewOuts;
	params.PlayUmpireOut = PlayUmpireOut;
	params.PlayOrgan = PlayOrgan;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleGameEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::HandleGameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HandleGameEnd");

	AScramSportManagerBaseball_Blueprint_C_HandleGameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ReceiveEndPlay");

	AScramSportManagerBaseball_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BBGameIntroSequence
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::BBGameIntroSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BBGameIntroSequence");

	AScramSportManagerBaseball_Blueprint_C_BBGameIntroSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LocalHelperMessageComplete
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::LocalHelperMessageComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LocalHelperMessageComplete");

	AScramSportManagerBaseball_Blueprint_C_LocalHelperMessageComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginInning
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::BeginInning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginInning");

	AScramSportManagerBaseball_Blueprint_C_BeginInning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetDominantHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DominantHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Mitt_C*              Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::SetDominantHand(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetDominantHand");

	AScramSportManagerBaseball_Blueprint_C_SetDominantHand_Params params;
	params.DominantHand = DominantHand;
	params.Mitt = Mitt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnRunnerSpawned
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AScramBaseballRunnerAI*  runner                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::OnRunnerSpawned(class AScramBaseballRunnerAI* runner)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnRunnerSpawned");

	AScramSportManagerBaseball_Blueprint_C_OnRunnerSpawned_Params params;
	params.runner = runner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StartOrgan
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::StartOrgan()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StartOrgan");

	AScramSportManagerBaseball_Blueprint_C_StartOrgan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StopOrgan
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::StopOrgan()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.StopOrgan");

	AScramSportManagerBaseball_Blueprint_C_StopOrgan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CheckForPlayerBattingPosition
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::CheckForPlayerBattingPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.CheckForPlayerBattingPosition");

	AScramSportManagerBaseball_Blueprint_C_CheckForPlayerBattingPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayerBatterReady
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::PlayerBatterReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayerBatterReady");

	AScramSportManagerBaseball_Blueprint_C_PlayerBatterReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginGame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::BeginGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BeginGame");

	AScramSportManagerBaseball_Blueprint_C_BeginGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::PitchTargetHit(int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchTargetHit");

	AScramSportManagerBaseball_Blueprint_C_PitchTargetHit_Params params;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterHitOutfieldTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::BatterHitOutfieldTarget(class AScramBall* Ball, int TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BatterHitOutfieldTarget");

	AScramSportManagerBaseball_Blueprint_C_BatterHitOutfieldTarget_Params params;
	params.Ball = Ball;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SendRestartGame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SendRestartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SendRestartGame");

	AScramSportManagerBaseball_Blueprint_C_SendRestartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateGameScore
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewP1TotalScore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NewP2TotalScore                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::UpdateGameScore(int NewP1TotalScore, int NewP2TotalScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateGameScore");

	AScramSportManagerBaseball_Blueprint_C_UpdateGameScore_Params params;
	params.NewP1TotalScore = NewP1TotalScore;
	params.NewP2TotalScore = NewP2TotalScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SwitchSides
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TopOfTheInning                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentInning                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::SwitchSides(bool TopOfTheInning, int CurrentInning)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SwitchSides");

	AScramSportManagerBaseball_Blueprint_C_SwitchSides_Params params;
	params.TopOfTheInning = TopOfTheInning;
	params.CurrentInning = CurrentInning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Single
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Single()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Single");

	AScramSportManagerBaseball_Blueprint_C_Single_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Double
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Double()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Double");

	AScramSportManagerBaseball_Blueprint_C_Double_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Triple
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Triple()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Triple");

	AScramSportManagerBaseball_Blueprint_C_Triple_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HomeRun
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BasesLoaded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::HomeRun(bool BasesLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.HomeRun");

	AScramSportManagerBaseball_Blueprint_C_HomeRun_Params params;
	params.BasesLoaded = BasesLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayFirstPitchSFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::PlayFirstPitchSFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayFirstPitchSFX");

	AScramSportManagerBaseball_Blueprint_C_PlayFirstPitchSFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterCatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RegisterCatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterCatch");

	AScramSportManagerBaseball_Blueprint_C_RegisterCatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterFoul
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RegisterFoul()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterFoul");

	AScramSportManagerBaseball_Blueprint_C_RegisterFoul_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterBall
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RegisterBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterBall");

	AScramSportManagerBaseball_Blueprint_C_RegisterBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateRunners
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           NewRunnerOnFirst               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewRunnerOnSecond              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           NewRunnerOnThird               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::UpdateRunners(bool NewRunnerOnFirst, bool NewRunnerOnSecond, bool NewRunnerOnThird)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.UpdateRunners");

	AScramSportManagerBaseball_Blueprint_C_UpdateRunners_Params params;
	params.NewRunnerOnFirst = NewRunnerOnFirst;
	params.NewRunnerOnSecond = NewRunnerOnSecond;
	params.NewRunnerOnThird = NewRunnerOnThird;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::OnInstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentSelected");

	AScramSportManagerBaseball_Blueprint_C_OnInstrumentSelected_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentBroken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::OnInstrumentBroken(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentBroken");

	AScramSportManagerBaseball_Blueprint_C_OnInstrumentBroken_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PrepNewInning
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::PrepNewInning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PrepNewInning");

	AScramSportManagerBaseball_Blueprint_C_PrepNewInning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BrokenBat
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::BrokenBat()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BrokenBat");

	AScramSportManagerBaseball_Blueprint_C_BrokenBat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NewInstrumentSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballInstrument*     Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::NewInstrumentSelected(class ABaseballInstrument* Instrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NewInstrumentSelected");

	AScramSportManagerBaseball_Blueprint_C_NewInstrumentSelected_Params params;
	params.Instrument = Instrument;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.InstrumentSelected
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::InstrumentSelected(class UObject* Instrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.InstrumentSelected");

	AScramSportManagerBaseball_Blueprint_C_InstrumentSelected_Params params;
	params.Instrument = Instrument;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentsSpawned
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::OnInstrumentsSpawned(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnInstrumentsSpawned");

	AScramSportManagerBaseball_Blueprint_C_OnInstrumentsSpawned_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::ShowPauseInfo(bool IsPaused, bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseInfo");

	AScramSportManagerBaseball_Blueprint_C_ShowPauseInfo_Params params;
	params.IsPaused = IsPaused;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseBubble
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::ShowPauseBubble(bool IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowPauseBubble");

	AScramSportManagerBaseball_Blueprint_C_ShowPauseBubble_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameResume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::OnGameResume(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameResume");

	AScramSportManagerBaseball_Blueprint_C_OnGameResume_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGamePause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::OnGamePause(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGamePause");

	AScramSportManagerBaseball_Blueprint_C_OnGamePause_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInitialActors
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnInitialActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnInitialActors");

	AScramSportManagerBaseball_Blueprint_C_SpawnInitialActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameReadyToBegin
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::GameReadyToBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameReadyToBegin");

	AScramSportManagerBaseball_Blueprint_C_GameReadyToBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetSetupScoreboards
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BallsCount                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            StrikesCount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::NetSetupScoreboards(int BallsCount, int StrikesCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetSetupScoreboards");

	AScramSportManagerBaseball_Blueprint_C_NetSetupScoreboards_Params params;
	params.BallsCount = BallsCount;
	params.StrikesCount = StrikesCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrikeout
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::RegisterStrikeout()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.RegisterStrikeout");

	AScramSportManagerBaseball_Blueprint_C_RegisterStrikeout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetUpdateOutsAndFreebies
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Outs                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Freebies                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Strikes                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::NetUpdateOutsAndFreebies(int Outs, int Freebies, int Strikes)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetUpdateOutsAndFreebies");

	AScramSportManagerBaseball_Blueprint_C_NetUpdateOutsAndFreebies_Params params;
	params.Outs = Outs;
	params.Freebies = Freebies;
	params.Strikes = Strikes;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ResetCount
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ResetCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ResetCount");

	AScramSportManagerBaseball_Blueprint_C_ResetCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TL                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           TR                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BL                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BR                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::PitchingTargetsUpdated(bool TL, bool TR, bool BL, bool BR)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetsUpdated");

	AScramSportManagerBaseball_Blueprint_C_PitchingTargetsUpdated_Params params;
	params.TL = TL;
	params.TR = TR;
	params.BL = BL;
	params.BR = BR;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballScrambleTargetLocations Location                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::PitchingTargetHit(SportsScramble_EBaseballScrambleTargetLocations Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PitchingTargetHit");

	AScramSportManagerBaseball_Blueprint_C_PitchingTargetHit_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisplayPopup
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::NetDisplayPopup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisplayPopup");

	AScramSportManagerBaseball_Blueprint_C_NetDisplayPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetAILook
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAvatarLook             AvatarLook                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::SetAILook(const struct FAvatarLook& AvatarLook)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SetAILook");

	AScramSportManagerBaseball_Blueprint_C_SetAILook_Params params;
	params.AvatarLook = AvatarLook;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameStart
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::BB_ChallengeGameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.BB_ChallengeGameStart");

	AScramSportManagerBaseball_Blueprint_C_BB_ChallengeGameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcherDelayed
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnAiPitcherDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiPitcherDelayed");

	AScramSportManagerBaseball_Blueprint_C_SpawnAiPitcherDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatterDelayed
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::SpawnAiBatterDelayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.SpawnAiBatterDelayed");

	AScramSportManagerBaseball_Blueprint_C_SpawnAiBatterDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayErrorSfx
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::PlayErrorSfx()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.PlayErrorSfx");

	AScramSportManagerBaseball_Blueprint_C_PlayErrorSfx_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LoadBaseballState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// int                            VisitorsScore                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Inning                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           TopOfInning                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           FirstPitchOfInning             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            Outs                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Strikes                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  BatterInstrument               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FMittSpawnInfo>  PitcherScrambleOptions         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AScramSportManagerBaseball_Blueprint_C::LoadBaseballState(int VisitorsScore, int HomeScore, int Inning, bool TopOfInning, bool FirstPitchOfInning, int Outs, int Strikes, class UClass* BatterInstrument, TArray<struct FMittSpawnInfo> PitcherScrambleOptions)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.LoadBaseballState");

	AScramSportManagerBaseball_Blueprint_C_LoadBaseballState_Params params;
	params.VisitorsScore = VisitorsScore;
	params.HomeScore = HomeScore;
	params.Inning = Inning;
	params.TopOfInning = TopOfInning;
	params.FirstPitchOfInning = FirstPitchOfInning;
	params.Outs = Outs;
	params.Strikes = Strikes;
	params.BatterInstrument = BatterInstrument;
	params.PitcherScrambleOptions = PitcherScrambleOptions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ServerReady
// (Event, Public, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ServerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ServerReady");

	AScramSportManagerBaseball_Blueprint_C_ServerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_UpdateScoreboardInning
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::Multi_UpdateScoreboardInning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_UpdateScoreboardInning");

	AScramSportManagerBaseball_Blueprint_C_Multi_UpdateScoreboardInning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_SetInning
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Inning                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Top                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBaseball_Blueprint_C::Multi_SetInning(int Inning, bool Top)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.Multi_SetInning");

	AScramSportManagerBaseball_Blueprint_C_Multi_SetInning_Params params;
	params.Inning = Inning;
	params.Top = Top;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameDone
// (Event, Public, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::OnGameDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnGameDone");

	AScramSportManagerBaseball_Blueprint_C_OnGameDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowMitt
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::ShowMitt(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShowMitt");

	AScramSportManagerBaseball_Blueprint_C_ShowMitt_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisablePause
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::NetDisablePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.NetDisablePause");

	AScramSportManagerBaseball_Blueprint_C_NetDisablePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.DisablePause
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::DisablePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.DisablePause");

	AScramSportManagerBaseball_Blueprint_C_DisablePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShutDown_Bat_PBP
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::ShutDown_Bat_PBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ShutDown_Bat_PBP");

	AScramSportManagerBaseball_Blueprint_C_ShutDown_Bat_PBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ExecuteUbergraph_ScramSportManagerBaseball_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::ExecuteUbergraph_ScramSportManagerBaseball_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.ExecuteUbergraph_ScramSportManagerBaseball_Blueprint");

	AScramSportManagerBaseball_Blueprint_C_ExecuteUbergraph_ScramSportManagerBaseball_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerVictory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AwayScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBaseball_Blueprint_C::GameCompleted__DelegateSignature(bool LocalPlayerVictory, int AwayScore, int HomeScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.GameCompleted__DelegateSignature");

	AScramSportManagerBaseball_Blueprint_C_GameCompleted__DelegateSignature_Params params;
	params.LocalPlayerVictory = LocalPlayerVictory;
	params.AwayScore = AwayScore;
	params.HomeScore = HomeScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnSidesSwitchedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBaseball_Blueprint_C::OnSidesSwitchedDispatcher__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBaseball_Blueprint.ScramSportManagerBaseball_Blueprint_C.OnSidesSwitchedDispatcher__DelegateSignature");

	AScramSportManagerBaseball_Blueprint_C_OnSidesSwitchedDispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
