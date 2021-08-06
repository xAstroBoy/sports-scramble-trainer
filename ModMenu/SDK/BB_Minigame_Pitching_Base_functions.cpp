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

// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           Callback                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Base_C::AddActorToGameElementList(class AActor* Actor, bool* Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.AddActorToGameElementList");

	ABB_Minigame_Pitching_Base_C_AddActorToGameElementList_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Callback != nullptr)
		*Callback = params.Callback;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShutdownBegun                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Base_C::Shutdown(bool* ShutdownBegun)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Shutdown");

	ABB_Minigame_Pitching_Base_C_Shutdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ShutdownBegun != nullptr)
		*ShutdownBegun = params.ShutdownBegun;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::ClearCurrentBall()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ClearCurrentBall");

	ABB_Minigame_Pitching_Base_C_ClearCurrentBall_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int                            Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                           RollingPitch                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Base_C::GetMaxBounces(class AActor* Actor, int* Result, bool* RollingPitch)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GetMaxBounces");

	ABB_Minigame_Pitching_Base_C_GetMaxBounces_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
	if (RollingPitch != nullptr)
		*RollingPitch = params.RollingPitch;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::UpdatePitchTargetScoreboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchTargetScoreboard");

	ABB_Minigame_Pitching_Base_C_UpdatePitchTargetScoreboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowBallCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Base_C::ResetPitchingScoreboard(bool ShowBallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ResetPitchingScoreboard");

	ABB_Minigame_Pitching_Base_C_ResetPitchingScoreboard_Params params;
	params.ShowBallCount = ShowBallCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::CleanupScoreboards()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CleanupScoreboards");

	ABB_Minigame_Pitching_Base_C_CleanupScoreboards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           UseStrikeZone                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           PlayStrikezoneSounds           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           SpawnTargets                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           DisplayStrikezoneText          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ShowQuad                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Base_C::SpawnGameElements(bool UseStrikeZone, bool PlayStrikezoneSounds, bool SpawnTargets, bool DisplayStrikezoneText, bool ShowQuad)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnGameElements");

	ABB_Minigame_Pitching_Base_C_SpawnGameElements_Params params;
	params.UseStrikeZone = UseStrikeZone;
	params.PlayStrikezoneSounds = PlayStrikezoneSounds;
	params.SpawnTargets = SpawnTargets;
	params.DisplayStrikezoneText = DisplayStrikezoneText;
	params.ShowQuad = ShowQuad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShowBallCount                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_Pitching_Base_C::UpdatePitchingScoreboard(bool ShowBallCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UpdatePitchingScoreboard");

	ABB_Minigame_Pitching_Base_C_UpdatePitchingScoreboard_Params params;
	params.ShowBallCount = ShowBallCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.Initialize");

	ABB_Minigame_Pitching_Base_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.UserConstructionScript");

	ABB_Minigame_Pitching_Base_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ReceiveBeginPlay");

	ABB_Minigame_Pitching_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::DelayDestroy()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.DelayDestroy");

	ABB_Minigame_Pitching_Base_C_DelayDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          delayBeforeThrow               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                          DelayAfterThrow                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::ThrowBallAtPlayer(float delayBeforeThrow, float DelayAfterThrow)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ThrowBallAtPlayer");

	ABB_Minigame_Pitching_Base_C_ThrowBallAtPlayer_Params params;
	params.delayBeforeThrow = delayBeforeThrow;
	params.DelayAfterThrow = DelayAfterThrow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::BallLaunched(class AActor* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallLaunched");

	ABB_Minigame_Pitching_Base_C_BallLaunched_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DominantHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Mitt_C*              Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::EquipmentGrabbedByPlayer(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbedByPlayer");

	ABB_Minigame_Pitching_Base_C_EquipmentGrabbedByPlayer_Params params;
	params.DominantHand = DominantHand;
	params.Mitt = Mitt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::TeleportComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.TeleportComplete");

	ABB_Minigame_Pitching_Base_C_TeleportComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.NoTeleport");

	ABB_Minigame_Pitching_Base_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::SpawnEquipmentSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.SpawnEquipmentSet");

	ABB_Minigame_Pitching_Base_C_SpawnEquipmentSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::GameReadyRunOperations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.GameReadyRunOperations");

	ABB_Minigame_Pitching_Base_C_GameReadyRunOperations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::ActiveBallScramHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallScramHit");

	ABB_Minigame_Pitching_Base_C_ActiveBallScramHit_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::BallCaughtEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallCaughtEvent");

	ABB_Minigame_Pitching_Base_C_BallCaughtEvent_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// SportsScramble_EScramStrikeResult Result                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::StrikeZoneHit(class ABaseballBall* Ball, SportsScramble_EScramStrikeResult Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.StrikeZoneHit");

	ABB_Minigame_Pitching_Base_C_StrikeZoneHit_Params params;
	params.Ball = Ball;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::BallThrown(class ABaseballBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallThrown");

	ABB_Minigame_Pitching_Base_C_BallThrown_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::CurrentBallInvalidated(class UObject* WorldContextObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.CurrentBallInvalidated");

	ABB_Minigame_Pitching_Base_C_CurrentBallInvalidated_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::BallDropped(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.BallDropped");

	ABB_Minigame_Pitching_Base_C_BallDropped_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AScramPrimitiveActor*    DestroyedPrimitive             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::ActiveBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ActiveBallDestroyed");

	ABB_Minigame_Pitching_Base_C_ActiveBallDestroyed_Params params;
	params.DestroyedPrimitive = DestroyedPrimitive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_Pitching_Base_C::ExecuteUbergraph_BB_Minigame_Pitching_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.ExecuteUbergraph_BB_Minigame_Pitching_Base");

	ABB_Minigame_Pitching_Base_C_ExecuteUbergraph_BB_Minigame_Pitching_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_Pitching_Base_C::EquipmentGrabbed__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_Pitching_Base.BB_Minigame_Pitching_Base_C.EquipmentGrabbed__DelegateSignature");

	ABB_Minigame_Pitching_Base_C_EquipmentGrabbed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
