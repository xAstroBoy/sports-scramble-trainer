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

// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetMusicRef
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*              AudioRef                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::GetMusicRef(class USoundBase** AudioRef)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetMusicRef");

	AScramSportManagerBowling_Blueprint_C_GetMusicRef_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AudioRef != nullptr)
		*AudioRef = params.AudioRef;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SaveBowlingState
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBowlingScrambleState   ScrambleState                  (Parm, OutParm)
// TArray<struct FBowlingFrameSet> TraditionalFrameSets           (Parm, OutParm, ZeroConstructor)
void AScramSportManagerBowling_Blueprint_C::SaveBowlingState(struct FBowlingScrambleState* ScrambleState, TArray<struct FBowlingFrameSet>* TraditionalFrameSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SaveBowlingState");

	AScramSportManagerBowling_Blueprint_C_SaveBowlingState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ScrambleState != nullptr)
		*ScrambleState = params.ScrambleState;
	if (TraditionalFrameSets != nullptr)
		*TraditionalFrameSets = params.TraditionalFrameSets;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateMatchScore
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::NetUpdateMatchScore()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateMatchScore");

	AScramSportManagerBowling_Blueprint_C_NetUpdateMatchScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetRelativeScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RelativeScore                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::GetRelativeScore(int* RelativeScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetRelativeScore");

	AScramSportManagerBowling_Blueprint_C_GetRelativeScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RelativeScore != nullptr)
		*RelativeScore = params.RelativeScore;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetHideScoreCards
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::NetHideScoreCards()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetHideScoreCards");

	AScramSportManagerBowling_Blueprint_C_NetHideScoreCards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetPrepareScoreCards
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumFrames                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            NumPlayers                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::NetPrepareScoreCards(int NumFrames, int NumPlayers)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetPrepareScoreCards");

	AScramSportManagerBowling_Blueprint_C_NetPrepareScoreCards_Params params;
	params.NumFrames = NumFrames;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateTraditionalScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::NetUpdateTraditionalScore(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NetUpdateTraditionalScore");

	AScramSportManagerBowling_Blueprint_C_NetUpdateTraditionalScore_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BuildScoreString
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FString                 Result                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::BuildScoreString(int Player, struct FString* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BuildScoreString");

	AScramSportManagerBowling_Blueprint_C_BuildScoreString_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.FilterLaneTypes
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FName>           LanesIn                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           Randomize                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FName>           LanesOut                       (Parm, OutParm, ZeroConstructor)
void AScramSportManagerBowling_Blueprint_C::FilterLaneTypes(TArray<struct FName>* LanesIn, bool Randomize, TArray<struct FName>* LanesOut)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.FilterLaneTypes");

	AScramSportManagerBowling_Blueprint_C_FilterLaneTypes_Params params;
	params.Randomize = Randomize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LanesIn != nullptr)
		*LanesIn = params.LanesIn;
	if (LanesOut != nullptr)
		*LanesOut = params.LanesOut;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateScrambleLists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::UpdateScrambleLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateScrambleLists");

	AScramSportManagerBowling_Blueprint_C_UpdateScrambleLists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SpawnAI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBowling_Blueprint_C::SpawnAI(bool Player1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SpawnAI");

	AScramSportManagerBowling_Blueprint_C_SpawnAI_Params params;
	params.Player1 = Player1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateResults
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Score0                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Score1                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::UpdateResults(int Score0, int Score1)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateResults");

	AScramSportManagerBowling_Blueprint_C_UpdateResults_Params params;
	params.Score0 = Score0;
	params.Score1 = Score1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetVideoBoard
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABW_VideoBoard_Training_C* VideoBoard                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::GetVideoBoard(class ABW_VideoBoard_Training_C** VideoBoard)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GetVideoBoard");

	AScramSportManagerBowling_Blueprint_C_GetVideoBoard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (VideoBoard != nullptr)
		*VideoBoard = params.VideoBoard;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Cleanup");

	AScramSportManagerBowling_Blueprint_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Initialize");

	AScramSportManagerBowling_Blueprint_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UserConstructionScript");

	AScramSportManagerBowling_Blueprint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_F44468EB4040BF2A0703018CD06BD38B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::OnLoaded_F44468EB4040BF2A0703018CD06BD38B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_F44468EB4040BF2A0703018CD06BD38B");

	AScramSportManagerBowling_Blueprint_C_OnLoaded_F44468EB4040BF2A0703018CD06BD38B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_DDE06F4D473B8945A2362CB797C3F835
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::OnLoaded_DDE06F4D473B8945A2362CB797C3F835(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_DDE06F4D473B8945A2362CB797C3F835");

	AScramSportManagerBowling_Blueprint_C_OnLoaded_DDE06F4D473B8945A2362CB797C3F835_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_7650529845E7E25F135EACAAD84131AF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::OnLoaded_7650529845E7E25F135EACAAD84131AF(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnLoaded_7650529845E7E25F135EACAAD84131AF");

	AScramSportManagerBowling_Blueprint_C_OnLoaded_7650529845E7E25F135EACAAD84131AF_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveBeginPlay");

	AScramSportManagerBowling_Blueprint_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ReceiveEndPlay");

	AScramSportManagerBowling_Blueprint_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BowlingEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// int                            Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBowlingEvent   BowlingEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BowlingEvent");

	AScramSportManagerBowling_Blueprint_C_BowlingEvent_Params params;
	params.Player = Player;
	params.BowlingEvent = BowlingEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PregameStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::PregameStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PregameStart");

	AScramSportManagerBowling_Blueprint_C_PregameStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::MatchStart(float TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchStart");

	AScramSportManagerBowling_Blueprint_C_MatchStart_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginGame
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::BeginGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginGame");

	AScramSportManagerBowling_Blueprint_C_BeginGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfGame
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::EndOfGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfGame");

	AScramSportManagerBowling_Blueprint_C_EndOfGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NextGame
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PreviousGameWinner             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Game                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::NextGame(int PreviousGameWinner, int Game)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.NextGame");

	AScramSportManagerBowling_Blueprint_C_NextGame_Params params;
	params.PreviousGameWinner = PreviousGameWinner;
	params.Game = Game;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchOver
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::MatchOver(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchOver");

	AScramSportManagerBowling_Blueprint_C_MatchOver_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBowling_Blueprint_C::ShowPauseInfo(bool IsPaused, bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseInfo");

	AScramSportManagerBowling_Blueprint_C_ShowPauseInfo_Params params;
	params.IsPaused = IsPaused;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseBubble
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsPaused                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBowling_Blueprint_C::ShowPauseBubble(bool IsPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ShowPauseBubble");

	AScramSportManagerBowling_Blueprint_C_ShowPauseBubble_Params params;
	params.IsPaused = IsPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameResume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBowling_Blueprint_C::OnGameResume(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameResume");

	AScramSportManagerBowling_Blueprint_C_OnGameResume_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGamePause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           WasPausedByMe                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBowling_Blueprint_C::OnGamePause(bool WasPausedByMe)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGamePause");

	AScramSportManagerBowling_Blueprint_C_OnGamePause_Params params;
	params.WasPausedByMe = WasPausedByMe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Three
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::Three()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Three");

	AScramSportManagerBowling_Blueprint_C_Three_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Two
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::Two()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.Two");

	AScramSportManagerBowling_Blueprint_C_Two_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndingHorn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::EndingHorn()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndingHorn");

	AScramSportManagerBowling_Blueprint_C_EndingHorn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PreTraditionalGameStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NumFrames                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::PreTraditionalGameStart(int NumFrames)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PreTraditionalGameStart");

	AScramSportManagerBowling_Blueprint_C_PreTraditionalGameStart_Params params;
	params.NumFrames = NumFrames;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::TraditionalMatchStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchStart");

	AScramSportManagerBowling_Blueprint_C_TraditionalMatchStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginTraditionalGame
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::BeginTraditionalGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BeginTraditionalGame");

	AScramSportManagerBowling_Blueprint_C_BeginTraditionalGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfTraditionalGame
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::EndOfTraditionalGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndOfTraditionalGame");

	AScramSportManagerBowling_Blueprint_C_EndOfTraditionalGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchOver
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::TraditionalMatchOver(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalMatchOver");

	AScramSportManagerBowling_Blueprint_C_TraditionalMatchOver_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateTraditionalScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Pins                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::UpdateTraditionalScore(int ID, int Pins)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.UpdateTraditionalScore");

	AScramSportManagerBowling_Blueprint_C_UpdateTraditionalScore_Params params;
	params.ID = ID;
	params.Pins = Pins;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameStart
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::TraditionalFrameStart(int Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameStart");

	AScramSportManagerBowling_Blueprint_C_TraditionalFrameStart_Params params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameEnd
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           isLastFrame                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AScramSportManagerBowling_Blueprint_C::TraditionalFrameEnd(int Player, bool isLastFrame)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.TraditionalFrameEnd");

	AScramSportManagerBowling_Blueprint_C_TraditionalFrameEnd_Params params;
	params.Player = Player;
	params.isLastFrame = isLastFrame;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SetGameTimeRemaining
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundWave*              PlayingSoundWave               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          PlaybackPercent                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::SetGameTimeRemaining(class USoundWave* PlayingSoundWave, float PlaybackPercent)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SetGameTimeRemaining");

	AScramSportManagerBowling_Blueprint_C_SetGameTimeRemaining_Params params;
	params.PlayingSoundWave = PlayingSoundWave;
	params.PlaybackPercent = PlaybackPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameOver
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::GameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameOver");

	AScramSportManagerBowling_Blueprint_C_GameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SyncTimer
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeRemaining                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::SyncTimer(float TimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.SyncTimer");

	AScramSportManagerBowling_Blueprint_C_SyncTimer_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.LoadBowlingState
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FBowlingScrambleState   ScrambleState                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FBowlingFrameSet> TraditionalFrameSets           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AScramSportManagerBowling_Blueprint_C::LoadBowlingState(const struct FBowlingScrambleState& ScrambleState, TArray<struct FBowlingFrameSet> TraditionalFrameSets)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.LoadBowlingState");

	AScramSportManagerBowling_Blueprint_C_LoadBowlingState_Params params;
	params.ScrambleState = ScrambleState;
	params.TraditionalFrameSets = TraditionalFrameSets;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ServerReady
// (Event, Public, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::ServerReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ServerReady");

	AScramSportManagerBowling_Blueprint_C_ServerReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameDone
// (Event, Public, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::OnGameDone()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.OnGameDone");

	AScramSportManagerBowling_Blueprint_C_OnGameDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PlayBonusBallAudio
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::PlayBonusBallAudio(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.PlayBonusBallAudio");

	AScramSportManagerBowling_Blueprint_C_PlayBonusBallAudio_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndGameDisablePause
// (BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::EndGameDisablePause()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.EndGameDisablePause");

	AScramSportManagerBowling_Blueprint_C_EndGameDisablePause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ExecuteUbergraph_ScramSportManagerBowling_Blueprint
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::ExecuteUbergraph_ScramSportManagerBowling_Blueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.ExecuteUbergraph_ScramSportManagerBowling_Blueprint");

	AScramSportManagerBowling_Blueprint_C_ExecuteUbergraph_ScramSportManagerBowling_Blueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameTimeEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::GameTimeEnded__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.GameTimeEnded__DelegateSignature");

	AScramSportManagerBowling_Blueprint_C_GameTimeEnded__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BWGameEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> MatchResult                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AScramSportManagerBowling_Blueprint_C::BWGameEnd__DelegateSignature(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.BWGameEnd__DelegateSignature");

	AScramSportManagerBowling_Blueprint_C_BWGameEnd__DelegateSignature_Params params;
	params.MatchResult = MatchResult;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AScramSportManagerBowling_Blueprint_C::MatchComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function ScramSportManagerBowling_Blueprint.ScramSportManagerBowling_Blueprint_C.MatchComplete__DelegateSignature");

	AScramSportManagerBowling_Blueprint_C_MatchComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
