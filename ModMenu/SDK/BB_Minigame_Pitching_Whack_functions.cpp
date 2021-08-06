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

// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Whack_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.Shutdown");

	ABB_Minigame_Pitching_Whack_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ClearWhackTimer
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::ClearWhackTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ClearWhackTimer");

	ABB_Minigame_Pitching_Whack_C_ClearWhackTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackScoreboardGameOver
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::WhackScoreboardGameOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackScoreboardGameOver");

	ABB_Minigame_Pitching_Whack_C_WhackScoreboardGameOver_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.InitializeWhack
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::InitializeWhack()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.InitializeWhack");

	ABB_Minigame_Pitching_Whack_C_InitializeWhack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateWhackScoreboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            score                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Whack_C::UpdateWhackScoreboard(int score)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateWhackScoreboard");

	ABB_Minigame_Pitching_Whack_C_UpdateWhackScoreboard_Params params;
	params.score = score;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackTimerCountdownStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Seconds                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Whack_C::WhackTimerCountdownStart(int Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackTimerCountdownStart");

	ABB_Minigame_Pitching_Whack_C_WhackTimerCountdownStart_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UserConstructionScript");

	ABB_Minigame_Pitching_Whack_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ReceiveBeginPlay");

	ABB_Minigame_Pitching_Whack_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.StartCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::StartCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.StartCountdown");

	ABB_Minigame_Pitching_Whack_C_StartCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.CountDownComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::CountDownComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.CountDownComplete");

	ABB_Minigame_Pitching_Whack_C_CountDownComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableWhackTargets
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::DisableWhackTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableWhackTargets");

	ABB_Minigame_Pitching_Whack_C_DisableWhackTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackEquipmentGrabbed
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::WhackEquipmentGrabbed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.WhackEquipmentGrabbed");

	ABB_Minigame_Pitching_Whack_C_WhackEquipmentGrabbed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.GoMessageReceived
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::GoMessageReceived()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.GoMessageReceived");

	ABB_Minigame_Pitching_Whack_C_GoMessageReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PlayerTeleportComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::PlayerTeleportComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PlayerTeleportComplete");

	ABB_Minigame_Pitching_Whack_C_PlayerTeleportComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableTargets
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::DisableTargets()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.DisableTargets");

	ABB_Minigame_Pitching_Whack_C_DisableTargets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PitchTargetCreated
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::PitchTargetCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.PitchTargetCreated");

	ABB_Minigame_Pitching_Whack_C_PitchTargetCreated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateScoreboardScoreValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ScoreAmount                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Whack_C::UpdateScoreboardScoreValue(int ScoreAmount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.UpdateScoreboardScoreValue");

	ABB_Minigame_Pitching_Whack_C_UpdateScoreboardScoreValue_Params params;
	params.ScoreAmount = ScoreAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Whack_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.NoTeleport");

	ABB_Minigame_Pitching_Whack_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ExecuteUbergraph_BB_Minigame_Pitching_Whack
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Whack_C::ExecuteUbergraph_BB_Minigame_Pitching_Whack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Whack.BB_Minigame_Pitching_Whack_C.ExecuteUbergraph_BB_Minigame_Pitching_Whack");

	ABB_Minigame_Pitching_Whack_C_ExecuteUbergraph_BB_Minigame_Pitching_Whack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
