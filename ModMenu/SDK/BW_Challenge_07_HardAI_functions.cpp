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

// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.GetTrophyID
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   TrophyID                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_07_HardAI_C::GetTrophyID(struct FName* TrophyID)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.GetTrophyID");

	ABW_Challenge_07_HardAI_C_GetTrophyID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TrophyID != nullptr)
		*TrophyID = params.TrophyID;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.InitializeChallengeRoom
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_07_HardAI_C::InitializeChallengeRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.InitializeChallengeRoom");

	ABW_Challenge_07_HardAI_C_InitializeChallengeRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_07_HardAI_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.SetUpInfoText");

	ABW_Challenge_07_HardAI_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_07_HardAI_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.UserConstructionScript");

	ABW_Challenge_07_HardAI_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Challenge_07_HardAI_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveBeginPlay");

	ABW_Challenge_07_HardAI_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_07_HardAI_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.NotifyChallengeContinue");

	ABW_Challenge_07_HardAI_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_07_HardAI_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ReceiveEndPlay");

	ABW_Challenge_07_HardAI_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_07_HardAI_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.Shortcut");

	ABW_Challenge_07_HardAI_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.BW_CHG_SportManagerGameEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TEnumAsByte<GameResult_EGameResult> MatchResult                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2GamesWon                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_07_HardAI_C::BW_CHG_SportManagerGameEnd(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.BW_CHG_SportManagerGameEnd");

	ABW_Challenge_07_HardAI_C_BW_CHG_SportManagerGameEnd_Params params;
	params.MatchResult = MatchResult;
	params.Player1GamesWon = Player1GamesWon;
	params.Player2GamesWon = Player2GamesWon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_07_HardAI_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.AnnouncerExitSequenceComplete");

	ABW_Challenge_07_HardAI_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.OnScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_07_HardAI_C::OnScore(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.OnScore");

	ABW_Challenge_07_HardAI_C_OnScore_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ExecuteUbergraph_BW_Challenge_07_HardAI
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_07_HardAI_C::ExecuteUbergraph_BW_Challenge_07_HardAI(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_07_HardAI.BW_Challenge_07_HardAI_C.ExecuteUbergraph_BW_Challenge_07_HardAI");

	ABW_Challenge_07_HardAI_C_ExecuteUbergraph_BW_Challenge_07_HardAI_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
