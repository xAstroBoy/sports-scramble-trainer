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

// Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBaseball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::StartBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBaseball");

	AGameHandlerQuickplay_C_StartBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBaseball
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::SetupBaseball()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBaseball");

	AGameHandlerQuickplay_C_SetupBaseball_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBowling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::StartBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartBowling");

	AGameHandlerQuickplay_C_StartBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBowling
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::SetupBowling()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupBowling");

	AGameHandlerQuickplay_C_SetupBowling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.Shutdown
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::Shutdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.Shutdown");

	AGameHandlerQuickplay_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartTennis
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::StartTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.StartTennis");

	AGameHandlerQuickplay_C_StartTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupTennis
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::SetupTennis()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.SetupTennis");

	AGameHandlerQuickplay_C_SetupTennis_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.UserConstructionScript");

	AGameHandlerQuickplay_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AGameHandlerQuickplay_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.ReceiveBeginPlay");

	AGameHandlerQuickplay_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.MatchComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> Result                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerQuickplay_C::MatchComplete(TEnumAsByte<GameResult_EGameResult> Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.MatchComplete");

	AGameHandlerQuickplay_C_MatchComplete_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
void AGameHandlerQuickplay_C::QuitGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.QuitGame");

	AGameHandlerQuickplay_C_QuitGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.BaseballGameCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerVictory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AwayScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerQuickplay_C::BaseballGameCompleted(bool LocalPlayerVictory, int AwayScore, int HomeScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.BaseballGameCompleted");

	AGameHandlerQuickplay_C_BaseballGameCompleted_Params params;
	params.LocalPlayerVictory = LocalPlayerVictory;
	params.AwayScore = AwayScore;
	params.HomeScore = HomeScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.BowlingGameComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> MatchResult                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerQuickplay_C::BowlingGameComplete(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.BowlingGameComplete");

	AGameHandlerQuickplay_C_BowlingGameComplete_Params params;
	params.MatchResult = MatchResult;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function GameHandlerQuickplay.GameHandlerQuickplay_C.ExecuteUbergraph_GameHandlerQuickplay
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AGameHandlerQuickplay_C::ExecuteUbergraph_GameHandlerQuickplay(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameHandlerQuickplay.GameHandlerQuickplay_C.ExecuteUbergraph_GameHandlerQuickplay");

	AGameHandlerQuickplay_C_ExecuteUbergraph_GameHandlerQuickplay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
