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

// Function BW_Challenge_Base.BW_Challenge_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Challenge_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.AddActorToGameElementList");

	ABW_Challenge_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Challenge_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.Shutdown");

	ABW_Challenge_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_GameEndResetLane
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::BW_GameEndResetLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_GameEndResetLane");

	ABW_Challenge_Base_C_BW_GameEndResetLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SpawnSportMgr
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::BW_CHG_SpawnSportMgr()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SpawnSportMgr");

	ABW_Challenge_Base_C_BW_CHG_SpawnSportMgr_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_CalculateEndScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Countdown                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            TargetScore                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::BW_CHG_CalculateEndScore(bool Countdown, int CurrentScore, int TargetScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_CalculateEndScore");

	ABW_Challenge_Base_C_BW_CHG_CalculateEndScore_Params params;
	params.Countdown = Countdown;
	params.CurrentScore = CurrentScore;
	params.TargetScore = TargetScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SwapBallIcon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  BallClass                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::BW_CHG_SwapBallIcon(class UClass* BallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SwapBallIcon");

	ABW_Challenge_Base_C_BW_CHG_SwapBallIcon_Params params;
	params.BallClass = BallClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_GetBallList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::BW_CHG_GetBallList()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_GetBallList");

	ABW_Challenge_Base_C_BW_CHG_GetBallList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.ToggleLaneChanging
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           DisableLaneChanges             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Challenge_Base_C::ToggleLaneChanging(bool DisableLaneChanges)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.ToggleLaneChanging");

	ABW_Challenge_Base_C_ToggleLaneChanging_Params params;
	params.DisableLaneChanges = DisableLaneChanges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_ShowScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::BW_CHG_ShowScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_ShowScoreboard");

	ABW_Challenge_Base_C_BW_CHG_ShowScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.ResetLane
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ResetScore                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetPins                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetBallCounter               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Challenge_Base_C::ResetLane(bool ResetScore, bool ResetPins, bool ResetBallCounter)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.ResetLane");

	ABW_Challenge_Base_C_ResetLane_Params params;
	params.ResetScore = ResetScore;
	params.ResetPins = ResetPins;
	params.ResetBallCounter = ResetBallCounter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.Initialize");

	ABW_Challenge_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.UserConstructionScript");

	ABW_Challenge_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.OnLoaded_D8F17837414AF61326DAA8A87E4A9166
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::OnLoaded_D8F17837414AF61326DAA8A87E4A9166(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.OnLoaded_D8F17837414AF61326DAA8A87E4A9166");

	ABW_Challenge_Base_C_OnLoaded_D8F17837414AF61326DAA8A87E4A9166_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Challenge_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.ReceiveBeginPlay");

	ABW_Challenge_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BowlingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBowlingEvent   BowlingEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BowlingEvent");

	ABW_Challenge_Base_C_BowlingEvent_Params params;
	params.Player = Player;
	params.BowlingEvent = BowlingEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.SpecificBallCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::SpecificBallCreated(class ABW_Ball_Base_C* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.SpecificBallCreated");

	ABW_Challenge_Base_C_SpecificBallCreated_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.RandomBallCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_Ball_Base_C*         Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::RandomBallCreated(class ABW_Ball_Base_C* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.RandomBallCreated");

	ABW_Challenge_Base_C_RandomBallCreated_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.GetCurrentLaneScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::GetCurrentLaneScore(int LaneID, int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.GetCurrentLaneScore");

	ABW_Challenge_Base_C_GetCurrentLaneScore_Params params;
	params.LaneID = LaneID;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.EndOfGame");

	ABW_Challenge_Base_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.SpecialScoreEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Points                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::SpecialScoreEvent(int LaneID, int Points)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.SpecialScoreEvent");

	ABW_Challenge_Base_C_SpecialScoreEvent_Params params;
	params.LaneID = LaneID;
	params.Points = Points;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.ShowBowlingBallIcon
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::ShowBowlingBallIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.ShowBowlingBallIcon");

	ABW_Challenge_Base_C_ShowBowlingBallIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_StartIntroCadence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseChallengeMusic              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseCountdown                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ResetLane                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UseTrainingScore               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Challenge_Base_C::BW_StartIntroCadence(bool UseChallengeMusic, bool UseCountdown, bool ResetLane, bool UseTrainingScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_StartIntroCadence");

	ABW_Challenge_Base_C_BW_StartIntroCadence_Params params;
	params.UseChallengeMusic = UseChallengeMusic;
	params.UseCountdown = UseCountdown;
	params.ResetLane = ResetLane;
	params.UseTrainingScore = UseTrainingScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::BW_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_TriggerCountdown");

	ABW_Challenge_Base_C_BW_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SportManagerGameEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> MatchResult                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::BW_CHG_SportManagerGameEnd(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_CHG_SportManagerGameEnd");

	ABW_Challenge_Base_C_BW_CHG_SportManagerGameEnd_Params params;
	params.MatchResult = MatchResult;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.BW_AnnouncerPresentation
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::BW_AnnouncerPresentation()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.BW_AnnouncerPresentation");

	ABW_Challenge_Base_C_BW_AnnouncerPresentation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.LaneIsReady
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::LaneIsReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.LaneIsReady");

	ABW_Challenge_Base_C_LaneIsReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.PlayAsync2D
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_Base_C::PlayAsync2D()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.PlayAsync2D");

	ABW_Challenge_Base_C_PlayAsync2D_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_Base.BW_Challenge_Base_C.ExecuteUbergraph_BW_Challenge_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_Base_C::ExecuteUbergraph_BW_Challenge_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_Base.BW_Challenge_Base_C.ExecuteUbergraph_BW_Challenge_Base");

	ABW_Challenge_Base_C_ExecuteUbergraph_BW_Challenge_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
