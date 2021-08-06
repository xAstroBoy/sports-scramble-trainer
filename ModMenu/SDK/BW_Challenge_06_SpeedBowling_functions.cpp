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

// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UnbindEvents
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::UnbindEvents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UnbindEvents");

	ABW_Challenge_06_SpeedBowling_C_UnbindEvents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.IncrementCycleIndex
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::IncrementCycleIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.IncrementCycleIndex");

	ABW_Challenge_06_SpeedBowling_C_IncrementCycleIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.InitializeChallengeRoom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::InitializeChallengeRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.InitializeChallengeRoom");

	ABW_Challenge_06_SpeedBowling_C_InitializeChallengeRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.SetUpInfoText");

	ABW_Challenge_06_SpeedBowling_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UserConstructionScript");

	ABW_Challenge_06_SpeedBowling_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReceiveBeginPlay");

	ABW_Challenge_06_SpeedBowling_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.StartTraining
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::StartTraining()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.StartTraining");

	ABW_Challenge_06_SpeedBowling_C_StartTraining_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.SpawnBalls
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::SpawnBalls()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.SpawnBalls");

	ABW_Challenge_06_SpeedBowling_C_SpawnBalls_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_06_SpeedBowling_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.NotifyChallengeContinue");

	ABW_Challenge_06_SpeedBowling_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_06_SpeedBowling_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReceiveEndPlay");

	ABW_Challenge_06_SpeedBowling_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.AnnouncerPresenting");

	ABW_Challenge_06_SpeedBowling_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.BW_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::BW_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.BW_TriggerCountdown");

	ABW_Challenge_06_SpeedBowling_C_BW_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.GameEnd");

	ABW_Challenge_06_SpeedBowling_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.Shortcut");

	ABW_Challenge_06_SpeedBowling_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UpdateCurrentScore
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            LaneID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            CurrentScore                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_06_SpeedBowling_C::UpdateCurrentScore(int LaneID, int CurrentScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.UpdateCurrentScore");

	ABW_Challenge_06_SpeedBowling_C_UpdateCurrentScore_Params params;
	params.LaneID = LaneID;
	params.CurrentScore = CurrentScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.CustomTimer
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::CustomTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.CustomTimer");

	ABW_Challenge_06_SpeedBowling_C_CustomTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ChangeLane
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::ChangeLane()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ChangeLane");

	ABW_Challenge_06_SpeedBowling_C_ChangeLane_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.LaneSwapping
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABowlingLane_Base_C*     ReplacementLane                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABowlingLane_Base_C*     OutgoingLane                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_06_SpeedBowling_C::LaneSwapping(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.LaneSwapping");

	ABW_Challenge_06_SpeedBowling_C_LaneSwapping_Params params;
	params.ReplacementLane = ReplacementLane;
	params.OutgoingLane = OutgoingLane;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReduceTime
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::ReduceTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ReduceTime");

	ABW_Challenge_06_SpeedBowling_C_ReduceTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABW_Challenge_06_SpeedBowling_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.AnnouncerExitSequenceComplete");

	ABW_Challenge_06_SpeedBowling_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.BowlingEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Player                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EBowlingEvent   BowlingEvent                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_06_SpeedBowling_C::BowlingEvent(int Player, SportsScramble_EBowlingEvent BowlingEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.BowlingEvent");

	ABW_Challenge_06_SpeedBowling_C_BowlingEvent_Params params;
	params.Player = Player;
	params.BowlingEvent = BowlingEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ExecuteUbergraph_BW_Challenge_06_SpeedBowling
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Challenge_06_SpeedBowling_C::ExecuteUbergraph_BW_Challenge_06_SpeedBowling(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C.ExecuteUbergraph_BW_Challenge_06_SpeedBowling");

	ABW_Challenge_06_SpeedBowling_C_ExecuteUbergraph_BW_Challenge_06_SpeedBowling_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
