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

// Function TN_Challenge_Base.TN_Challenge_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.AddActorToGameElementList");

	ATN_Challenge_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.Shutdown");

	ATN_Challenge_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UnbindEvent
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_CHG_UnbindEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UnbindEvent");

	ATN_Challenge_Base_C_TN_CHG_UnbindEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ShowAllWhackTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_CHG_ShowAllWhackTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ShowAllWhackTargets");

	ATN_Challenge_Base_C_TN_CHG_ShowAllWhackTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ResetArenaScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_CHG_ResetArenaScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ResetArenaScoreboards");

	ATN_Challenge_Base_C_TN_CHG_ResetArenaScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UpdateArenaScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UpdateScoreOnly                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_CHG_UpdateArenaScoreboards(int Player1Score, int Player2Score, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_UpdateArenaScoreboards");

	ATN_Challenge_Base_C_TN_CHG_UpdateArenaScoreboards_Params params;
	params.Player1Score = Player1Score;
	params.Player2Score = Player2Score;
	params.Player1Games = Player1Games;
	params.Player2Games = Player2Games;
	params.Player1Serve = Player1Serve;
	params.Player2Serve = Player2Serve;
	params.UpdateScoreOnly = UpdateScoreOnly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_GetArenaScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_CHG_GetArenaScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_GetArenaScoreboards");

	ATN_Challenge_Base_C_TN_CHG_GetArenaScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnChallengeSportManager
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AChallenge_ScramSportManager_TN_C* ChallengeSportMgr              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_SpawnChallengeSportManager(class AChallenge_ScramSportManager_TN_C** ChallengeSportMgr)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnChallengeSportManager");

	ATN_Challenge_Base_C_TN_CHG_SpawnChallengeSportManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ChallengeSportMgr != nullptr)
		*ChallengeSportMgr = params.ChallengeSportMgr;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndTennisMatch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_CalculateEndTennisMatch(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndTennisMatch");

	ATN_Challenge_Base_C_TN_CHG_CalculateEndTennisMatch_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnFloorLightUpGroup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           OutOnly                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InOnly                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Demo                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_CHG_SpawnFloorLightUpGroup(bool Player2, bool OutOnly, bool InOnly, bool Demo)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnFloorLightUpGroup");

	ATN_Challenge_Base_C_TN_CHG_SpawnFloorLightUpGroup_Params params;
	params.Player2 = Player2;
	params.OutOnly = OutOnly;
	params.InOnly = InOnly;
	params.Demo = Demo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnSportManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseScrambler                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseStartOfMatchInfoPanels      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FName                   ScrambleSchedule               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_SpawnSportManager(bool UseScrambler, bool UseStartOfMatchInfoPanels, const struct FName& ScrambleSchedule)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnSportManager");

	ATN_Challenge_Base_C_TN_CHG_SpawnSportManager_Params params;
	params.UseScrambler = UseScrambler;
	params.UseStartOfMatchInfoPanels = UseStartOfMatchInfoPanels;
	params.ScrambleSchedule = ScrambleSchedule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnAIOpponent
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  AIActorClass                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AScramTennisAI*          ScramTennisAI                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_SpawnAIOpponent(class UClass* AIActorClass, class AScramTennisAI** ScramTennisAI)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnAIOpponent");

	ATN_Challenge_Base_C_TN_CHG_SpawnAIOpponent_Params params;
	params.AIActorClass = AIActorClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScramTennisAI != nullptr)
		*ScramTennisAI = params.ScramTennisAI;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnReturnWallAndLauncher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<TN_ReturnWall_ScoreType_ETN_ReturnWall_ScoreType> ReurnWallType                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_SpawnReturnWallAndLauncher(TEnumAsByte<TN_ReturnWall_ScoreType_ETN_ReturnWall_ScoreType> ReurnWallType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SpawnReturnWallAndLauncher");

	ATN_Challenge_Base_C_TN_CHG_SpawnReturnWallAndLauncher_Params params;
	params.ReurnWallType = ReurnWallType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapInstrumentIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  InstrumentClass                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_SwapInstrumentIcon(class UClass* InstrumentClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapInstrumentIcon");

	ATN_Challenge_Base_C_TN_CHG_SwapInstrumentIcon_Params params;
	params.InstrumentClass = InstrumentClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapBallIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AnnounceBall                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_CHG_SwapBallIcon(class UClass* BallClass, bool AnnounceBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_SwapBallIcon");

	ATN_Challenge_Base_C_TN_CHG_SwapBallIcon_Params params;
	params.BallClass = BallClass;
	params.AnnounceBall = AnnounceBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_BallList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::Get_TN_CHG_BallList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_BallList");

	ATN_Challenge_Base_C_Get_TN_CHG_BallList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_InstrumentList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::Get_TN_CHG_InstrumentList()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.Get_TN_CHG_InstrumentList");

	ATN_Challenge_Base_C_Get_TN_CHG_InstrumentList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.RefreshActivePayloads
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::RefreshActivePayloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.RefreshActivePayloads");

	ATN_Challenge_Base_C_RefreshActivePayloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.IsStreakContinued
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           StreakContinues                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::IsStreakContinued(class AActor* PayloadActor, bool* StreakContinues)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.IsStreakContinued");

	ATN_Challenge_Base_C_IsStreakContinued_Params params;
	params.PayloadActor = PayloadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StreakContinues != nullptr)
		*StreakContinues = params.StreakContinues;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.UpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::UpdateScore(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.UpdateScore");

	ATN_Challenge_Base_C_UpdateScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_CalculateEndScore(bool Countdown, int CurrentScore, int TargetScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_CalculateEndScore");

	ATN_Challenge_Base_C_TN_CHG_CalculateEndScore_Params params;
	params.Countdown = Countdown;
	params.CurrentScore = CurrentScore;
	params.TargetScore = TargetScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ScrambleTargetBallHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitLocationX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HitLocationY                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_ScrambleTargetBallHit(float HitLocationX, float HitLocationY)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_ScrambleTargetBallHit");

	ATN_Challenge_Base_C_TN_CHG_ScrambleTargetBallHit_Params params;
	params.HitLocationX = HitLocationX;
	params.HitLocationY = HitLocationY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.PBP_ScrambleTargetHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  EventClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::PBP_ScrambleTargetHit(class UClass* EventClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.PBP_ScrambleTargetHit");

	ATN_Challenge_Base_C_PBP_ScrambleTargetHit_Params params;
	params.EventClass = EventClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessLightNormalShot
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::ProcessLightNormalShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessLightNormalShot");

	ATN_Challenge_Base_C_ProcessLightNormalShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessChargeShot
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::ProcessChargeShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessChargeShot");

	ATN_Challenge_Base_C_ProcessChargeShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ScrambleTargetInstrumentChangeMissed
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_ScrambleTargetInstrumentChangeMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ScrambleTargetInstrumentChangeMissed");

	ATN_Challenge_Base_C_TN_ScrambleTargetInstrumentChangeMissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TRN_InstrumentHit
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_TRN_InstrumentHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TRN_InstrumentHit");

	ATN_Challenge_Base_C_TN_TRN_InstrumentHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.DestroyAllBalls_1
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::DestroyAllBalls_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.DestroyAllBalls_1");

	ATN_Challenge_Base_C_DestroyAllBalls_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessSliceShot
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::ProcessSliceShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ProcessSliceShot");

	ATN_Challenge_Base_C_ProcessSliceShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.PickNew_CHG_WhackTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OldTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::PickNew_CHG_WhackTarget(class AActor* OldTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.PickNew_CHG_WhackTarget");

	ATN_Challenge_Base_C_PickNew_CHG_WhackTarget_Params params;
	params.OldTarget = OldTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.Spawn_CHG_WhackTargets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LowerOnGameEnd                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::Spawn_CHG_WhackTargets(bool LowerOnGameEnd)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.Spawn_CHG_WhackTargets");

	ATN_Challenge_Base_C_Spawn_CHG_WhackTargets_Params params;
	params.LowerOnGameEnd = LowerOnGameEnd;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnServeLauncher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TeeBall                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           MoveSpawnedBalls               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::SpawnServeLauncher(bool TeeBall, bool MoveSpawnedBalls)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnServeLauncher");

	ATN_Challenge_Base_C_SpawnServeLauncher_Params params;
	params.TeeBall = TeeBall;
	params.MoveSpawnedBalls = MoveSpawnedBalls;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnCenterLaucher
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          InitialHeight                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::SpawnCenterLaucher(float InitialHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnCenterLaucher");

	ATN_Challenge_Base_C_SpawnCenterLaucher_Params params;
	params.InitialHeight = InitialHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallMissed
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_LaunchedBallMissed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallMissed");

	ATN_Challenge_Base_C_TN_LaunchedBallMissed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          HitLocationX                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          HitLocationY                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_LaunchedBallHit(float HitLocationX, float HitLocationY)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_LaunchedBallHit");

	ATN_Challenge_Base_C_TN_LaunchedBallHit_Params params;
	params.HitLocationX = HitLocationX;
	params.HitLocationY = HitLocationY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnFloorLightUp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           OutOnly                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InOnly                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           BothInOut                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::SpawnFloorLightUp(bool OutOnly, bool InOnly, bool BothInOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnFloorLightUp");

	ATN_Challenge_Base_C_SpawnFloorLightUp_Params params;
	params.OutOnly = OutOnly;
	params.InOnly = InOnly;
	params.BothInOut = BothInOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnLeftRightLauchers
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SpawnLeftLauncher              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SpawnRightLauncher             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::SpawnLeftRightLauchers(bool SpawnLeftLauncher, bool SpawnRightLauncher)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.SpawnLeftRightLauchers");

	ATN_Challenge_Base_C_SpawnLeftRightLauchers_Params params;
	params.SpawnLeftLauncher = SpawnLeftLauncher;
	params.SpawnRightLauncher = SpawnRightLauncher;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.BallAccuracySound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           In                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::BallAccuracySound(bool In)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.BallAccuracySound");

	ATN_Challenge_Base_C_BallAccuracySound_Params params;
	params.In = In;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.CheckInBounds
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          XLocation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          YLocation                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           PlaySound                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           InBounds                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::CheckInBounds(float XLocation, float YLocation, bool PlaySound, bool* InBounds)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.CheckInBounds");

	ATN_Challenge_Base_C_CheckInBounds_Params params;
	params.XLocation = XLocation;
	params.YLocation = YLocation;
	params.PlaySound = PlaySound;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InBounds != nullptr)
		*InBounds = params.InBounds;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.InitializeBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::InitializeBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.InitializeBase");

	ATN_Challenge_Base_C_InitializeBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.UserConstructionScript");

	ATN_Challenge_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC");

	ATN_Challenge_Base_C_OnLoaded_B009CC43435532B8D5D6D0AF4E5B6CBC_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.SportManager_MatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::SportManager_MatchComplete(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.SportManager_MatchComplete");

	ATN_Challenge_Base_C_SportManager_MatchComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallLauncherBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBallActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::ReturnWallLauncherBall(class AActor* NewBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallLauncherBall");

	ATN_Challenge_Base_C_ReturnWallLauncherBall_Params params;
	params.NewBallActor = NewBallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Streak                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::ReturnWallHit(int Streak)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ReturnWallHit");

	ATN_Challenge_Base_C_ReturnWallHit_Params params;
	params.Streak = Streak;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Challenge_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveBeginPlay");

	ATN_Challenge_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ReceiveEndPlay");

	ATN_Challenge_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.NewLauncherBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBallActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::NewLauncherBall(class AActor* NewBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.NewLauncherBall");

	ATN_Challenge_Base_C_NewLauncherBall_Params params;
	params.NewBallActor = NewBallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.BallHasBeenHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::BallHasBeenHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.BallHasBeenHit");

	ATN_Challenge_Base_C_BallHasBeenHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallSpawned
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_TNG_BallSpawned(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallSpawned");

	ATN_Challenge_Base_C_TN_TNG_BallSpawned_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_TNG_BallHit(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallHit");

	ATN_Challenge_Base_C_TN_TNG_BallHit_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BallTargetActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RegionHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_WallTargetHit(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetHit");

	ATN_Challenge_Base_C_TN_CHG_WallTargetHit_Params params;
	params.PayloadActor = PayloadActor;
	params.BallTargetActor = BallTargetActor;
	params.RegionHit = RegionHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallGrabbed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramBall*              Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_TNG_BallGrabbed(class AScramBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_BallGrabbed");

	ATN_Challenge_Base_C_TN_TNG_BallGrabbed_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.BallShotTypeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// SportsScramble_ETennisShotType ShotType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::BallShotTypeChange(SportsScramble_ETennisShotType ShotType)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.BallShotTypeChange");

	ATN_Challenge_Base_C_BallShotTypeChange_Params params;
	params.ShotType = ShotType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_ScrambleTargetHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATennisScrambleTarget_C* TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                  EventClass                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_TNG_ScrambleTargetHit(class ATennisScrambleTarget_C* TargetActor, class UClass* EventClass, int TargetId)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TNG_ScrambleTargetHit");

	ATN_Challenge_Base_C_TN_TNG_ScrambleTargetHit_Params params;
	params.TargetActor = TargetActor;
	params.EventClass = EventClass;
	params.TargetId = TargetId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ChangeBallClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::ChangeBallClass(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ChangeBallClass");

	ATN_Challenge_Base_C_ChangeBallClass_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.EndOfGame");

	ATN_Challenge_Base_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerExpired
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_CHG_TimerExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerExpired");

	ATN_Challenge_Base_C_TN_CHG_TimerExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerTriggered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            CurrentTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_TimerTriggered(int CurrentTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_TimerTriggered");

	ATN_Challenge_Base_C_TN_CHG_TimerTriggered_Params params;
	params.CurrentTime = CurrentTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetShrinking
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  TargetActor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::TN_CHG_WallTargetShrinking(class AActor* TargetActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_CHG_WallTargetShrinking");

	ATN_Challenge_Base_C_TN_CHG_WallTargetShrinking_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_TriggerCountdown");

	ATN_Challenge_Base_C_TN_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_StartIntroCadence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseChallengeMusic              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseCountdown                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseThreeCategory               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool UseThreeCategory)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_StartIntroCadence");

	ATN_Challenge_Base_C_TN_StartIntroCadence_Params params;
	params.UseChallengeMusic = UseChallengeMusic;
	params.UseCountdown = UseCountdown;
	params.UseThreeCategory = UseThreeCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ShowInstrumentAndBallIcons
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InstrumentBothHands            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_ShowInstrumentAndBallIcons(bool InstrumentBothHands)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_ShowInstrumentAndBallIcons");

	ATN_Challenge_Base_C_TN_ShowInstrumentAndBallIcons_Params params;
	params.InstrumentBothHands = InstrumentBothHands;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TriggerAlternativeCadence
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TriggerAlternativeCadence()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TriggerAlternativeCadence");

	ATN_Challenge_Base_C_TriggerAlternativeCadence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerShowInstrumentIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  OptionalBallClass              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           AnnounceBall                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_AnnouncerShowInstrumentIcon(class UClass* OptionalBallClass, bool AnnounceBall)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerShowInstrumentIcon");

	ATN_Challenge_Base_C_TN_AnnouncerShowInstrumentIcon_Params params;
	params.OptionalBallClass = OptionalBallClass;
	params.AnnounceBall = AnnounceBall;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerPresentation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InstrumentBothHands            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Challenge_Base_C::TN_AnnouncerPresentation(bool InstrumentBothHands)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerPresentation");

	ATN_Challenge_Base_C_TN_AnnouncerPresentation_Params params;
	params.InstrumentBothHands = InstrumentBothHands;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerAcceleratorChallenge
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::TN_AnnouncerAcceleratorChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.TN_AnnouncerAcceleratorChallenge");

	ATN_Challenge_Base_C_TN_AnnouncerAcceleratorChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.PlayAsync2D
// (BlueprintCallable, BlueprintEvent)
void ATN_Challenge_Base_C::PlayAsync2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.PlayAsync2D");

	ATN_Challenge_Base_C_PlayAsync2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Challenge_Base.TN_Challenge_Base_C.ExecuteUbergraph_TN_Challenge_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Challenge_Base_C::ExecuteUbergraph_TN_Challenge_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Challenge_Base.TN_Challenge_Base_C.ExecuteUbergraph_TN_Challenge_Base");

	ATN_Challenge_Base_C_ExecuteUbergraph_TN_Challenge_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
