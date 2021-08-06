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

// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_Breakout_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.AddActorToGameElementList");

	ATN_Minigame_Breakout_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_Breakout_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.Shutdown");

	ATN_Minigame_Breakout_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.RefreshActivePayloads
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::RefreshActivePayloads()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.RefreshActivePayloads");

	ATN_Minigame_Breakout_C_RefreshActivePayloads_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.IsStreakContinued
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           StreakContinues                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATN_Minigame_Breakout_C::IsStreakContinued(class AActor* PayloadActor, bool* StreakContinues)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.IsStreakContinued");

	ATN_Minigame_Breakout_C_IsStreakContinued_Params params;
	params.PayloadActor = PayloadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StreakContinues != nullptr)
		*StreakContinues = params.StreakContinues;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.PickNewTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  OldTarget                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::PickNewTarget(class AActor* OldTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.PickNewTarget");

	ATN_Minigame_Breakout_C_PickNewTarget_Params params;
	params.OldTarget = OldTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.SpawnGameElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::SpawnGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.SpawnGameElements");

	ATN_Minigame_Breakout_C_SpawnGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UpdateScore
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewScore                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::UpdateScore(int NewScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UpdateScore");

	ATN_Minigame_Breakout_C_UpdateScore_Params params;
	params.NewScore = NewScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.RegisterTargets
// (Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::RegisterTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.RegisterTargets");

	ATN_Minigame_Breakout_C_RegisterTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.Initialize");

	ATN_Minigame_Breakout_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UserConstructionScript");

	ATN_Minigame_Breakout_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATN_Minigame_Breakout_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ReceiveBeginPlay");

	ATN_Minigame_Breakout_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.AddScore2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PayloadActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                  BallTargetActor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            RegionHit                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::AddScore2(class AActor* PayloadActor, class AActor* BallTargetActor, int RegionHit)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.AddScore2");

	ATN_Minigame_Breakout_C_AddScore2_Params params;
	params.PayloadActor = PayloadActor;
	params.BallTargetActor = BallTargetActor;
	params.RegionHit = RegionHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.DelayDestroy");

	ATN_Minigame_Breakout_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.GameComplete
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::GameComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.GameComplete");

	ATN_Minigame_Breakout_C_GameComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.LauncherSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonSelected                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::LauncherSelected(int ButtonSelected)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.LauncherSelected");

	ATN_Minigame_Breakout_C_LauncherSelected_Params params;
	params.ButtonSelected = ButtonSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.SpawnLauncherSelectionMenu
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::SpawnLauncherSelectionMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.SpawnLauncherSelectionMenu");

	ATN_Minigame_Breakout_C_SpawnLauncherSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.StartGame
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::StartGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.StartGame");

	ATN_Minigame_Breakout_C_StartGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.CountdownComplet
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::CountdownComplet()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.CountdownComplet");

	ATN_Minigame_Breakout_C_CountdownComplet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ResetTargetsOnDelay
// (BlueprintCallable, BlueprintEvent)
void ATN_Minigame_Breakout_C::ResetTargetsOnDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ResetTargetsOnDelay");

	ATN_Minigame_Breakout_C_ResetTargetsOnDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.StartLaunchers
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          BallDelay                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::StartLaunchers(float BallDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.StartLaunchers");

	ATN_Minigame_Breakout_C_StartLaunchers_Params params;
	params.BallDelay = BallDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UpdateLauncherDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          NewDelay                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::UpdateLauncherDelay(float NewDelay)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.UpdateLauncherDelay");

	ATN_Minigame_Breakout_C_UpdateLauncherDelay_Params params;
	params.NewDelay = NewDelay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.NewBall
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewBallActor                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::NewBall(class AActor* NewBallActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.NewBall");

	ATN_Minigame_Breakout_C_NewBall_Params params;
	params.NewBallActor = NewBallActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ReceiveEndPlay");

	ATN_Minigame_Breakout_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ExecuteUbergraph_TN_Minigame_Breakout
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATN_Minigame_Breakout_C::ExecuteUbergraph_TN_Minigame_Breakout(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TN_Minigame_Breakout.TN_Minigame_Breakout_C.ExecuteUbergraph_TN_Minigame_Breakout");

	ATN_Minigame_Breakout_C_ExecuteUbergraph_TN_Minigame_Breakout_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
