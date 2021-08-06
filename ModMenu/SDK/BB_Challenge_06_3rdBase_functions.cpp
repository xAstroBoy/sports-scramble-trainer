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

// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneTimeScales
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinMaxFloat            PopFlyTimeScale                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FMinMaxFloat            SweetSpotTimeScale             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FMinMaxFloat            LineDriveTimeScale             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FMinMaxFloat            GroundBallTimeScale            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ABB_Challenge_06_3rdBase_C::SetZoneTimeScales(const struct FMinMaxFloat& PopFlyTimeScale, const struct FMinMaxFloat& SweetSpotTimeScale, const struct FMinMaxFloat& LineDriveTimeScale, const struct FMinMaxFloat& GroundBallTimeScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneTimeScales");

	ABB_Challenge_06_3rdBase_C_SetZoneTimeScales_Params params;
	params.PopFlyTimeScale = PopFlyTimeScale;
	params.SweetSpotTimeScale = SweetSpotTimeScale;
	params.LineDriveTimeScale = LineDriveTimeScale;
	params.GroundBallTimeScale = GroundBallTimeScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GetNextBallClass
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                  NextBallClass                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::GetNextBallClass(class UClass** NextBallClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GetNextBallClass");

	ABB_Challenge_06_3rdBase_C_GetNextBallClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NextBallClass != nullptr)
		*NextBallClass = params.NextBallClass;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetUpInfoText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::SetUpInfoText()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetUpInfoText");

	ABB_Challenge_06_3rdBase_C_SetUpInfoText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneChances
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          PopFlyChance                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          SweetSpotChance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          LineDriveChance                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          GroundBallChance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::SetZoneChances(float PopFlyChance, float SweetSpotChance, float LineDriveChance, float GroundBallChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetZoneChances");

	ABB_Challenge_06_3rdBase_C_SetZoneChances_Params params;
	params.PopFlyChance = PopFlyChance;
	params.SweetSpotChance = SweetSpotChance;
	params.LineDriveChance = LineDriveChance;
	params.GroundBallChance = GroundBallChance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          TimeBetweenBalls               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          BombChance                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          GoldenBallChance               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::SetParameters(float TimeBetweenBalls, float BombChance, float GoldenBallChance)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.SetParameters");

	ABB_Challenge_06_3rdBase_C_SetParameters_Params params;
	params.TimeBetweenBalls = TimeBetweenBalls;
	params.BombChance = BombChance;
	params.GoldenBallChance = GoldenBallChance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Initialized3rdBase
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::Initialized3rdBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Initialized3rdBase");

	ABB_Challenge_06_3rdBase_C_Initialized3rdBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Cleanup");

	ABB_Challenge_06_3rdBase_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.UserConstructionScript");

	ABB_Challenge_06_3rdBase_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_25CCB05E4E04939CC232B8BB23AB186B
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::OnLoaded_25CCB05E4E04939CC232B8BB23AB186B(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_25CCB05E4E04939CC232B8BB23AB186B");

	ABB_Challenge_06_3rdBase_C_OnLoaded_25CCB05E4E04939CC232B8BB23AB186B_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_70510E9640399C2A919A79A38EF129A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::OnLoaded_70510E9640399C2A919A79A38EF129A0(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_70510E9640399C2A919A79A38EF129A0");

	ABB_Challenge_06_3rdBase_C_OnLoaded_70510E9640399C2A919A79A38EF129A0_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_32444B0A4E135437E255DFAB39579AF8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::OnLoaded_32444B0A4E135437E255DFAB39579AF8(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_32444B0A4E135437E255DFAB39579AF8");

	ABB_Challenge_06_3rdBase_C_OnLoaded_32444B0A4E135437E255DFAB39579AF8_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_49C6C46244429E83F6C5859C5D9D417C
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Loaded                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::OnLoaded_49C6C46244429E83F6C5859C5D9D417C(class UObject* Loaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.OnLoaded_49C6C46244429E83F6C5859C5D9D417C");

	ABB_Challenge_06_3rdBase_C_OnLoaded_49C6C46244429E83F6C5859C5D9D417C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPaused
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::AnnouncerPaused()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPaused");

	ABB_Challenge_06_3rdBase_C_AnnouncerPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPresenting
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::AnnouncerPresenting()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPresenting");

	ABB_Challenge_06_3rdBase_C_AnnouncerPresenting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPlayingSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   SequenceName                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::AnnouncerPlayingSequence(const struct FName& SequenceName)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerPlayingSequence");

	ABB_Challenge_06_3rdBase_C_AnnouncerPlayingSequence_Params params;
	params.SequenceName = SequenceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveBeginPlay");

	ABB_Challenge_06_3rdBase_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.NotifyChallengeContinue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DestroyedActor                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::NotifyChallengeContinue(class AActor* DestroyedActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.NotifyChallengeContinue");

	ABB_Challenge_06_3rdBase_C_NotifyChallengeContinue_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BallHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::BallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BallHit");

	ABB_Challenge_06_3rdBase_C_BallHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ReceiveEndPlay");

	ABB_Challenge_06_3rdBase_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BaseballEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::BaseballEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BaseballEvent");

	ABB_Challenge_06_3rdBase_C_BaseballEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.FireLoop
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::FireLoop()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.FireLoop");

	ABB_Challenge_06_3rdBase_C_FireLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Start_Challenge
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::Start_Challenge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Start_Challenge");

	ABB_Challenge_06_3rdBase_C_Start_Challenge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerExitSequenceComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::AnnouncerExitSequenceComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.AnnouncerExitSequenceComplete");

	ABB_Challenge_06_3rdBase_C_AnnouncerExitSequenceComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BB_TriggerCountdown
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::BB_TriggerCountdown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.BB_TriggerCountdown");

	ABB_Challenge_06_3rdBase_C_BB_TriggerCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GameEnd
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::GameEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.GameEnd");

	ABB_Challenge_06_3rdBase_C_GameEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Shortcut
// (BlueprintCallable, BlueprintEvent)
void ABB_Challenge_06_3rdBase_C::Shortcut()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.Shortcut");

	ABB_Challenge_06_3rdBase_C_Shortcut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ExecuteUbergraph_BB_Challenge_06_3rdBase
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Challenge_06_3rdBase_C::ExecuteUbergraph_BB_Challenge_06_3rdBase(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Challenge_06_3rdBase.BB_Challenge_06_3rdBase_C.ExecuteUbergraph_BB_Challenge_06_3rdBase");

	ABB_Challenge_06_3rdBase_C_ExecuteUbergraph_BB_Challenge_06_3rdBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
