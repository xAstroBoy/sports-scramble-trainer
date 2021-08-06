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

// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateWidgetOnCultureChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::UpdateWidgetOnCultureChange()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateWidgetOnCultureChange");

	ATennisArenaScoreboard_C_UpdateWidgetOnCultureChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SetLocText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::SetLocText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.SetLocText");

	ATennisArenaScoreboard_C_SetLocText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnBallIndicator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LeftSide                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisArenaScoreboard_C::SpawnBallIndicator(bool LeftSide)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnBallIndicator");

	ATennisArenaScoreboard_C_SpawnBallIndicator_Params params;
	params.LeftSide = LeftSide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateNetworkNames
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::UpdateNetworkNames()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateNetworkNames");

	ATennisArenaScoreboard_C_UpdateNetworkNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateRuleType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           TraditionalScoring             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisArenaScoreboard_C::UpdateRuleType(bool TraditionalScoring)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateRuleType");

	ATennisArenaScoreboard_C_UpdateRuleType_Params params;
	params.TraditionalScoring = TraditionalScoring;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateServeIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisArenaScoreboard_C::UpdateServeIndicator(bool Player1Serve, bool Player2Serve)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateServeIndicator");

	ATennisArenaScoreboard_C_UpdateServeIndicator_Params params;
	params.Player1Serve = Player1Serve;
	params.Player2Serve = Player2Serve;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player1Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Score                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player1Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Player2Games                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Player1Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           Player2Serve                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           UpdateScoreOnly                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATennisArenaScoreboard_C::UpdateScore(int Player1Score, int Player2Score, int Player1Games, int Player2Games, bool Player1Serve, bool Player2Serve, bool UpdateScoreOnly)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.UpdateScore");

	ATennisArenaScoreboard_C_UpdateScore_Params params;
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


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.Initialize");

	ATennisArenaScoreboard_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.UserConstructionScript");

	ATennisArenaScoreboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__FinishedFunc
// (BlueprintEvent)
void ATennisArenaScoreboard_C::Timeline_Cover1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__FinishedFunc");

	ATennisArenaScoreboard_C_Timeline_Cover1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__UpdateFunc
// (BlueprintEvent)
void ATennisArenaScoreboard_C::Timeline_Cover1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover1__UpdateFunc");

	ATennisArenaScoreboard_C_Timeline_Cover1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__FinishedFunc
// (BlueprintEvent)
void ATennisArenaScoreboard_C::Timeline_Cover2__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__FinishedFunc");

	ATennisArenaScoreboard_C_Timeline_Cover2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__UpdateFunc
// (BlueprintEvent)
void ATennisArenaScoreboard_C::Timeline_Cover2__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.Timeline_Cover2__UpdateFunc");

	ATennisArenaScoreboard_C_Timeline_Cover2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATennisArenaScoreboard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveBeginPlay");

	ATennisArenaScoreboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP1Serve
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::ShowP1Serve()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP1Serve");

	ATennisArenaScoreboard_C_ShowP1Serve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP1Serve
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::HideP1Serve()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP1Serve");

	ATennisArenaScoreboard_C_HideP1Serve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP2Serve
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::ShowP2Serve()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowP2Serve");

	ATennisArenaScoreboard_C_ShowP2Serve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP2Serve
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::HideP2Serve()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.HideP2Serve");

	ATennisArenaScoreboard_C_HideP2Serve_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowLeftSideServe
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::ShowLeftSideServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowLeftSideServe");

	ATennisArenaScoreboard_C_ShowLeftSideServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.RightSideDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisArenaScoreboard_C::RightSideDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.RightSideDestroyed");

	ATennisArenaScoreboard_C_RightSideDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowRightSideServe
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::ShowRightSideServe()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ShowRightSideServe");

	ATennisArenaScoreboard_C_ShowRightSideServe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.LeftSideDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisArenaScoreboard_C::LeftSideDestroyed(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.LeftSideDestroyed");

	ATennisArenaScoreboard_C_LeftSideDestroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnRight
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::SpawnRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnRight");

	ATennisArenaScoreboard_C_SpawnRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnLeft
// (BlueprintCallable, BlueprintEvent)
void ATennisArenaScoreboard_C::SpawnLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.SpawnLeft");

	ATennisArenaScoreboard_C_SpawnLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisArenaScoreboard_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ReceiveEndPlay");

	ATennisArenaScoreboard_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.TravelCapsuleOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisArenaScoreboard_C::TravelCapsuleOpen(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.TravelCapsuleOpen");

	ATennisArenaScoreboard_C_TravelCapsuleOpen_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TennisArenaScoreboard.TennisArenaScoreboard_C.ExecuteUbergraph_TennisArenaScoreboard
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATennisArenaScoreboard_C::ExecuteUbergraph_TennisArenaScoreboard(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboard.TennisArenaScoreboard_C.ExecuteUbergraph_TennisArenaScoreboard");

	ATennisArenaScoreboard_C_ExecuteUbergraph_TennisArenaScoreboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
