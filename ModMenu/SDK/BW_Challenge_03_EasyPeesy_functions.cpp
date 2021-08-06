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

// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.InitializeChallengeRoom
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_03_EasyPeesy_C::InitializeChallengeRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.InitializeChallengeRoom");

	ABW_Challenge_03_EasyPeesy_C_InitializeChallengeRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_03_EasyPeesy_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.SetUpInfoText");

	ABW_Challenge_03_EasyPeesy_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_03_EasyPeesy_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.UserConstructionScript");

	ABW_Challenge_03_EasyPeesy_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Challenge_03_EasyPeesy_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.ReceiveBeginPlay");

	ABW_Challenge_03_EasyPeesy_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_03_EasyPeesy_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.NotifyChallengeContinue");

	ABW_Challenge_03_EasyPeesy_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_03_EasyPeesy_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.ReceiveEndPlay");

	ABW_Challenge_03_EasyPeesy_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_03_EasyPeesy_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.Shortcut");

	ABW_Challenge_03_EasyPeesy_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.BW_CHG_SportManagerGameEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> MatchResult                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_03_EasyPeesy_C::BW_CHG_SportManagerGameEnd(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.BW_CHG_SportManagerGameEnd");

	ABW_Challenge_03_EasyPeesy_C_BW_CHG_SportManagerGameEnd_Params params;
	params.MatchResult = MatchResult;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_03_EasyPeesy_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.AnnouncerExitSequenceComplete");

	ABW_Challenge_03_EasyPeesy_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.ExecuteUbergraph_BW_Challenge_03_EasyPeesy
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_03_EasyPeesy_C::ExecuteUbergraph_BW_Challenge_03_EasyPeesy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_03_EasyPeesy.BW_Challenge_03_EasyPeesy_C.ExecuteUbergraph_BW_Challenge_03_EasyPeesy");

	ABW_Challenge_03_EasyPeesy_C_ExecuteUbergraph_BW_Challenge_03_EasyPeesy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
