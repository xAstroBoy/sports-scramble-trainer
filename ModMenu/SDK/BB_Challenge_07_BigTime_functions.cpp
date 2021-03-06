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

// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.StopPlayingAudioComponents
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::StopPlayingAudioComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.StopPlayingAudioComponents");

	ABB_Challenge_07_BigTime_C_StopPlayingAudioComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.SetUpInfoText");

	ABB_Challenge_07_BigTime_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.BB_Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::BB_Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.BB_Initialize");

	ABB_Challenge_07_BigTime_C_BB_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.UserConstructionScript");

	ABB_Challenge_07_BigTime_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ReceiveBeginPlay");

	ABB_Challenge_07_BigTime_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_07_BigTime_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ReceiveEndPlay");

	ABB_Challenge_07_BigTime_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.BaseballGameCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           LocalPlayerVictory             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int                            AwayScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            HomeScore                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_07_BigTime_C::BaseballGameCompleted(bool LocalPlayerVictory, int AwayScore, int HomeScore)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.BaseballGameCompleted");

	ABB_Challenge_07_BigTime_C_BaseballGameCompleted_Params params;
	params.LocalPlayerVictory = LocalPlayerVictory;
	params.AwayScore = AwayScore;
	params.HomeScore = HomeScore;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.AnnouncerExitSequenceComplete");

	ABB_Challenge_07_BigTime_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.TriggerAlternateCadence
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::TriggerAlternateCadence()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.TriggerAlternateCadence");

	ABB_Challenge_07_BigTime_C_TriggerAlternateCadence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_07_BigTime_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.Shortcut");

	ABB_Challenge_07_BigTime_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ExecuteUbergraph_BB_Challenge_07_BigTime
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_07_BigTime_C::ExecuteUbergraph_BB_Challenge_07_BigTime(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_07_BigTime.BB_Challenge_07_BigTime_C.ExecuteUbergraph_BB_Challenge_07_BigTime");

	ABB_Challenge_07_BigTime_C_ExecuteUbergraph_BB_Challenge_07_BigTime_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
