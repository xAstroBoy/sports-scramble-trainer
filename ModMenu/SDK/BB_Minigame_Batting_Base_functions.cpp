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

// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Batting_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.AddActorToGameElementList");

	ABB_Minigame_Batting_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Batting_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Shutdown");

	ABB_Minigame_Batting_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.CleanupScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::CleanupScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.CleanupScoreboards");

	ABB_Minigame_Batting_Base_C_CleanupScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GetGameSelector
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::GetGameSelector()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GetGameSelector");

	ABB_Minigame_Batting_Base_C_GetGameSelector_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ScoreboardGameOver
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::ScoreboardGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ScoreboardGameOver");

	ABB_Minigame_Batting_Base_C_ScoreboardGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ResetAllWindowActors
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::ResetAllWindowActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ResetAllWindowActors");

	ABB_Minigame_Batting_Base_C_ResetAllWindowActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.CountdownTimerStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::CountdownTimerStart(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.CountdownTimerStart");

	ABB_Minigame_Batting_Base_C_CountdownTimerStart_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.LauncherSetup
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::LauncherSetup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.LauncherSetup");

	ABB_Minigame_Batting_Base_C_LauncherSetup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UpdatePointScore
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::UpdatePointScore(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UpdatePointScore");

	ABB_Minigame_Batting_Base_C_UpdatePointScore_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GetRandomPitchSpeed
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::GetRandomPitchSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GetRandomPitchSpeed");

	ABB_Minigame_Batting_Base_C_GetRandomPitchSpeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SetPitchSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::SetPitchSpeed(int Button)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SetPitchSpeed");

	ABB_Minigame_Batting_Base_C_SetPitchSpeed_Params params;
	params.Button = Button;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SpawnGameElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::SpawnGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SpawnGameElements");

	ABB_Minigame_Batting_Base_C_SpawnGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UpdateBallDistanceScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::UpdateBallDistanceScore(float NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UpdateBallDistanceScore");

	ABB_Minigame_Batting_Base_C_UpdateBallDistanceScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Initialize");

	ABB_Minigame_Batting_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.UserConstructionScript");

	ABB_Minigame_Batting_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ReceiveBeginPlay");

	ABB_Minigame_Batting_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.DelayDestroy");

	ABB_Minigame_Batting_Base_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.NewBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBallActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::NewBall(class AActor* NewBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.NewBall");

	ABB_Minigame_Batting_Base_C_NewBall_Params params;
	params.NewBallActor = NewBallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GameLoop
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::GameLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.GameLoop");

	ABB_Minigame_Batting_Base_C_GameLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.PitchedBallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::PitchedBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.PitchedBallHit");

	ABB_Minigame_Batting_Base_C_PitchedBallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.HitBallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::HitBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.HitBallHit");

	ABB_Minigame_Batting_Base_C_HitBallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Setup
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::Setup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.Setup");

	ABB_Minigame_Batting_Base_C_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SpawnLauncherSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::SpawnLauncherSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SpawnLauncherSelectionMenu");

	ABB_Minigame_Batting_Base_C_SpawnLauncherSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SetBallSpeed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::SetBallSpeed(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.SetBallSpeed");

	ABB_Minigame_Batting_Base_C_SetBallSpeed_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.TeleportComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::TeleportComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.TeleportComplete");

	ABB_Minigame_Batting_Base_C_TeleportComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.NoTeleport");

	ABB_Minigame_Batting_Base_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.StartTheCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::StartTheCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.StartTheCountdown");

	ABB_Minigame_Batting_Base_C_StartTheCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ScoreWindowBroken
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Batting_Base_C::ScoreWindowBroken()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ScoreWindowBroken");

	ABB_Minigame_Batting_Base_C_ScoreWindowBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ReceiveEndPlay");

	ABB_Minigame_Batting_Base_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ExecuteUbergraph_BB_Minigame_Batting_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Batting_Base_C::ExecuteUbergraph_BB_Minigame_Batting_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C.ExecuteUbergraph_BB_Minigame_Batting_Base");

	ABB_Minigame_Batting_Base_C_ExecuteUbergraph_BB_Minigame_Batting_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
