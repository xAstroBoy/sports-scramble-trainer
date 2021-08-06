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

// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.InitializeChallenge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::InitializeChallenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.InitializeChallenge");

	ABB_Challenge_01_HRD_C_InitializeChallenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.SetUpInfoText");

	ABB_Challenge_01_HRD_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.CheckProperAudioList
// (Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           UseAlternate                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Challenge_01_HRD_C::CheckProperAudioList(bool* UseAlternate)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.CheckProperAudioList");

	ABB_Challenge_01_HRD_C_CheckProperAudioList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UseAlternate != nullptr)
		*UseAlternate = params.UseAlternate;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBat
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Instrument_Class           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Challenge_01_HRD_C::RequestNewBat(class UClass** New_Instrument_Class, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBat");

	ABB_Challenge_01_HRD_C_RequestNewBat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (New_Instrument_Class != nullptr)
		*New_Instrument_Class = params.New_Instrument_Class;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBall
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  New_Ball_Class                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Challenge_01_HRD_C::RequestNewBall(class UClass** New_Ball_Class, bool* Success)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.RequestNewBall");

	ABB_Challenge_01_HRD_C_RequestNewBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (New_Ball_Class != nullptr)
		*New_Ball_Class = params.New_Ball_Class;
	if (Success != nullptr)
		*Success = params.Success;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Cleanup");

	ABB_Challenge_01_HRD_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.UserConstructionScript");

	ABB_Challenge_01_HRD_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_618E959F46A70B0ED3A8958638CE6E1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_01_HRD_C::OnLoaded_618E959F46A70B0ED3A8958638CE6E1E(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_618E959F46A70B0ED3A8958638CE6E1E");

	ABB_Challenge_01_HRD_C_OnLoaded_618E959F46A70B0ED3A8958638CE6E1E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_3FA9753143D16E5E38723691EAE3CEF5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_01_HRD_C::OnLoaded_3FA9753143D16E5E38723691EAE3CEF5(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_3FA9753143D16E5E38723691EAE3CEF5");

	ABB_Challenge_01_HRD_C_OnLoaded_3FA9753143D16E5E38723691EAE3CEF5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_01_HRD_C::OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD");

	ABB_Challenge_01_HRD_C_OnLoaded_7516DD6F4DA5C7F8453FFA8DFC85BCCD_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPlayingSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SequenceName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_01_HRD_C::AnnouncerPlayingSequence(const struct FName& SequenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPlayingSequence");

	ABB_Challenge_01_HRD_C_AnnouncerPlayingSequence_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPresenting");

	ABB_Challenge_01_HRD_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPaused
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::AnnouncerPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerPaused");

	ABB_Challenge_01_HRD_C_AnnouncerPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Challenge_01_HRD_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveBeginPlay");

	ABB_Challenge_01_HRD_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.BB_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::BB_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.BB_TriggerCountdown");

	ABB_Challenge_01_HRD_C_BB_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Start_Game
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::Start_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Start_Game");

	ABB_Challenge_01_HRD_C_Start_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.End_Game
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::End_Game()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.End_Game");

	ABB_Challenge_01_HRD_C_End_Game_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_01_HRD_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ReceiveEndPlay");

	ABB_Challenge_01_HRD_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.AnnouncerExitSequenceComplete");

	ABB_Challenge_01_HRD_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerScoredRun
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::PlayerScoredRun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerScoredRun");

	ABB_Challenge_01_HRD_C_PlayerScoredRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerHitHomerun
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::PlayerHitHomerun()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.PlayerHitHomerun");

	ABB_Challenge_01_HRD_C_PlayerHitHomerun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_01_HRD_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.Shortcut");

	ABB_Challenge_01_HRD_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ExecuteUbergraph_BB_Challenge_01_HRD
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_01_HRD_C::ExecuteUbergraph_BB_Challenge_01_HRD(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_01_HRD.BB_Challenge_01_HRD_C.ExecuteUbergraph_BB_Challenge_01_HRD");

	ABB_Challenge_01_HRD_C_ExecuteUbergraph_BB_Challenge_01_HRD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
