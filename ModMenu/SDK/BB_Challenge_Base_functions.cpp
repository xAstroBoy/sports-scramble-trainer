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

// Function BB_Challenge_Base.BB_Challenge_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Challenge_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.AddActorToGameElementList");

	ABB_Challenge_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Challenge_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.Shutdown");

	ABB_Challenge_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_05_SportManagerPlayerPitching
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::BB_CHG_05_SportManagerPlayerPitching()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_05_SportManagerPlayerPitching");

	ABB_Challenge_Base_C_BB_CHG_05_SportManagerPlayerPitching_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_UpdateScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_UpdateScore(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_UpdateScore");

	ABB_Challenge_Base_C_BB_CHG_UpdateScore_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SpawnSportManagerWithAI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Override_Batting_Skill         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// SportsScramble_EScramSkill     Override_Skill                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_SpawnSportManagerWithAI(bool Override_Batting_Skill, SportsScramble_EScramSkill Override_Skill)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SpawnSportManagerWithAI");

	ABB_Challenge_Base_C_BB_CHG_SpawnSportManagerWithAI_Params params;
	params.Override_Batting_Skill = Override_Batting_Skill;
	params.Override_Skill = Override_Skill;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBatIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_SwapBatIcon(class UClass* InstrumentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBatIcon");

	ABB_Challenge_Base_C_BB_CHG_SwapBatIcon_Params params;
	params.InstrumentClass = InstrumentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBatList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::BB_CHG_GetBatList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBatList");

	ABB_Challenge_Base_C_BB_CHG_GetBatList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_CalculateEndScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_CalculateEndScore(bool Countdown, int CurrentScore, int TargetScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_CalculateEndScore");

	ABB_Challenge_Base_C_BB_CHG_CalculateEndScore_Params params;
	params.Countdown = Countdown;
	params.CurrentScore = CurrentScore;
	params.TargetScore = TargetScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBallIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_SwapBallIcon(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SwapBallIcon");

	ABB_Challenge_Base_C_BB_CHG_SwapBallIcon_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBallList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::BB_CHG_GetBallList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_GetBallList");

	ABB_Challenge_Base_C_BB_CHG_GetBallList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.Initialize");

	ABB_Challenge_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.UserConstructionScript");

	ABB_Challenge_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.OnLoaded_826C3EA940CB27C0854669A32DADB5D4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::OnLoaded_826C3EA940CB27C0854669A32DADB5D4(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.OnLoaded_826C3EA940CB27C0854669A32DADB5D4");

	ABB_Challenge_Base_C_OnLoaded_826C3EA940CB27C0854669A32DADB5D4_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_ShowScoreboardAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_ShowScoreboardAnimation(TEnumAsByte<BB_ScoreboardVideos_EBB_ScoreboardVideos> Animation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_ShowScoreboardAnimation");

	ABB_Challenge_Base_C_BB_CHG_ShowScoreboardAnimation_Params params;
	params.Animation = Animation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreMaterialAndFont
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_SetScoreMaterialAndFont(int FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreMaterialAndFont");

	ABB_Challenge_Base_C_BB_CHG_SetScoreMaterialAndFont_Params params;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// UMG_ESlateVisibility           Visibility                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_CHG_SetScoreVisibility(UMG_ESlateVisibility Visibility)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_SetScoreVisibility");

	ABB_Challenge_Base_C_BB_CHG_SetScoreVisibility_Params params;
	params.Visibility = Visibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_AttachTrainingScoreboard
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::BB_CHG_AttachTrainingScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_CHG_AttachTrainingScoreboard");

	ABB_Challenge_Base_C_BB_CHG_AttachTrainingScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.SetScoreTimerTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            FontSize                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::SetScoreTimerTime(int Seconds, int FontSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.SetScoreTimerTime");

	ABB_Challenge_Base_C_SetScoreTimerTime_Params params;
	params.Seconds = Seconds;
	params.FontSize = FontSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.AttachTopTimer
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::AttachTopTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.AttachTopTimer");

	ABB_Challenge_Base_C_AttachTopTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BaseballGameCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerVictory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AwayScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BaseballGameCompleted(bool LocalPlayerVictory, int AwayScore, int HomeScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BaseballGameCompleted");

	ABB_Challenge_Base_C_BaseballGameCompleted_Params params;
	params.LocalPlayerVictory = LocalPlayerVictory;
	params.AwayScore = AwayScore;
	params.HomeScore = HomeScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Challenge_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ReceiveBeginPlay");

	ABB_Challenge_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.EndOfGame");

	ABB_Challenge_Base_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballBallIcon
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::ShowBaseballBallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballBallIcon");

	ABB_Challenge_Base_C_ShowBaseballBallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_StartIntroCadence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseChallengeMusic              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseCountdown                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           HomeTeam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Challenge_Base_C::BB_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool HomeTeam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_StartIntroCadence");

	ABB_Challenge_Base_C_BB_StartIntroCadence_Params params;
	params.UseChallengeMusic = UseChallengeMusic;
	params.UseCountdown = UseCountdown;
	params.HomeTeam = HomeTeam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::BB_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_TriggerCountdown");

	ABB_Challenge_Base_C_BB_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballInstrumentIcon
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::ShowBaseballInstrumentIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ShowBaseballInstrumentIcon");

	ABB_Challenge_Base_C_ShowBaseballInstrumentIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.BB_ShowInstrumentAndBallIcons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<BB_ScramIconSetting_EBB_ScramIconSetting> Settings                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::BB_ShowInstrumentAndBallIcons(TEnumAsByte<BB_ScramIconSetting_EBB_ScramIconSetting> Settings)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.BB_ShowInstrumentAndBallIcons");

	ABB_Challenge_Base_C_BB_ShowInstrumentAndBallIcons_Params params;
	params.Settings = Settings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.TriggerAlternateCadence
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::TriggerAlternateCadence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.TriggerAlternateCadence");

	ABB_Challenge_Base_C_TriggerAlternateCadence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.PlayAsync2D
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_Base_C::PlayAsync2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.PlayAsync2D");

	ABB_Challenge_Base_C_PlayAsync2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_Base.BB_Challenge_Base_C.ExecuteUbergraph_BB_Challenge_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_Base_C::ExecuteUbergraph_BB_Challenge_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_Base.BB_Challenge_Base_C.ExecuteUbergraph_BB_Challenge_Base");

	ABB_Challenge_Base_C_ExecuteUbergraph_BB_Challenge_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
