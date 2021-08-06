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

// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnCatcherWithVFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::SpawnCatcherWithVFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnCatcherWithVFX");

	ABB_Minigame_PracticeSportManager_C_SpawnCatcherWithVFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnFielders
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::SpawnFielders()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnFielders");

	ABB_Minigame_PracticeSportManager_C_SpawnFielders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnInstrumentSelector
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InstrumentDamageEnabled        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_PracticeSportManager_C::SpawnInstrumentSelector(bool InstrumentDamageEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnInstrumentSelector");

	ABB_Minigame_PracticeSportManager_C_SpawnInstrumentSelector_Params params;
	params.InstrumentDamageEnabled = InstrumentDamageEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentSelected
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballInstrument*     SelectedInstrument             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::InstrumentSelected(class ABaseballInstrument** SelectedInstrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentSelected");

	ABB_Minigame_PracticeSportManager_C_InstrumentSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SelectedInstrument != nullptr)
		*SelectedInstrument = params.SelectedInstrument;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentBroken
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballInstrument*     Instrument                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::InstrumentBroken(class ABaseballInstrument** Instrument)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InstrumentBroken");

	ABB_Minigame_PracticeSportManager_C_InstrumentBroken_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Instrument != nullptr)
		*Instrument = params.Instrument;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnPitcher
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PitcherActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::SpawnPitcher(class AActor** PitcherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnPitcher");

	ABB_Minigame_PracticeSportManager_C_SpawnPitcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PitcherActor != nullptr)
		*PitcherActor = params.PitcherActor;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.EndGameCleanUp
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::EndGameCleanUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.EndGameCleanUp");

	ABB_Minigame_PracticeSportManager_C_EndGameCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnLocalHelper
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::SpawnLocalHelper()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnLocalHelper");

	ABB_Minigame_PracticeSportManager_C_SpawnLocalHelper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CleanUpGameElements
// (Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::CleanUpGameElements()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CleanUpGameElements");

	ABB_Minigame_PracticeSportManager_C_CleanUpGameElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.TeleportPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::TeleportPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.TeleportPlayer");

	ABB_Minigame_PracticeSportManager_C_TeleportPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Initialize");

	ABB_Minigame_PracticeSportManager_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnEquipmentAndAI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           PlayerBatting                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_PracticeSportManager_C::SpawnEquipmentAndAI(bool PlayerBatting)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnEquipmentAndAI");

	ABB_Minigame_PracticeSportManager_C_SpawnEquipmentAndAI_Params params;
	params.PlayerBatting = PlayerBatting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Minigame_SpawnStrikezone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ShrinkOnSpawn                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           CatcherPresent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_PracticeSportManager_C::Minigame_SpawnStrikezone(bool ShrinkOnSpawn, bool CatcherPresent)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.Minigame_SpawnStrikezone");

	ABB_Minigame_PracticeSportManager_C_Minigame_SpawnStrikezone_Params params;
	params.ShrinkOnSpawn = ShrinkOnSpawn;
	params.CatcherPresent = CatcherPresent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnBatter
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  BattingActor                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::SpawnBatter(class AActor** BattingActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SpawnBatter");

	ABB_Minigame_PracticeSportManager_C_SpawnBatter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BattingActor != nullptr)
		*BattingActor = params.BattingActor;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.UserConstructionScript");

	ABB_Minigame_PracticeSportManager_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.BaseballEvent
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// SportsScramble_EBaseballEvent  BaseballEvent                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                 Location                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::BaseballEvent(SportsScramble_EBaseballEvent BaseballEvent, const struct FVector& Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.BaseballEvent");

	ABB_Minigame_PracticeSportManager_C_BaseballEvent_Params params;
	params.BaseballEvent = BaseballEvent;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveBeginPlay");

	ABB_Minigame_PracticeSportManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.NoTeleport
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::NoTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.NoTeleport");

	ABB_Minigame_PracticeSportManager_C_NoTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HandleBackOrResetButton
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::HandleBackOrResetButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HandleBackOrResetButton");

	ABB_Minigame_PracticeSportManager_C_HandleBackOrResetButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.GameSelectorReset
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::GameSelectorReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.GameSelectorReset");

	ABB_Minigame_PracticeSportManager_C_GameSelectorReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ReceiveEndPlay");

	ABB_Minigame_PracticeSportManager_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.FinishedTeleport
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::FinishedTeleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.FinishedTeleport");

	ABB_Minigame_PracticeSportManager_C_FinishedTeleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SetDominantHand
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  DominantHand                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABB_Mitt_C*              Mitt                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::SetDominantHand(class AActor* DominantHand, class ABB_Mitt_C* Mitt)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SetDominantHand");

	ABB_Minigame_PracticeSportManager_C_SetDominantHand_Params params;
	params.DominantHand = DominantHand;
	params.Mitt = Mitt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::OnInstrumentSelected(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentSelected");

	ABB_Minigame_PracticeSportManager_C_OnInstrumentSelected_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentBroken
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 WorldContextObject             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScramEventBasePayload*  Payload                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::OnInstrumentBroken(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.OnInstrumentBroken");

	ABB_Minigame_PracticeSportManager_C_OnInstrumentBroken_Params params;
	params.WorldContextObject = WorldContextObject;
	params.Payload = Payload;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RemoveCatcher
// (BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::RemoveCatcher()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RemoveCatcher");

	ABB_Minigame_PracticeSportManager_C_RemoveCatcher_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ExecuteUbergraph_BB_Minigame_PracticeSportManager
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::ExecuteUbergraph_BB_Minigame_PracticeSportManager(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ExecuteUbergraph_BB_Minigame_PracticeSportManager");

	ABB_Minigame_PracticeSportManager_C_ExecuteUbergraph_BB_Minigame_PracticeSportManager_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnersReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::RunnersReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnersReady__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_RunnersReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnerHome__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::RunnerHome__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.RunnerHome__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_RunnerHome__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InvalidHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::InvalidHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.InvalidHit__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_InvalidHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ValidHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::ValidHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.ValidHit__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_ValidHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitHomerun__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           BasesLoaded                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABB_Minigame_PracticeSportManager_C::HitHomerun__DelegateSignature(bool BasesLoaded)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitHomerun__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_HitHomerun__DelegateSignature_Params params;
	params.BasesLoaded = BasesLoaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitTriple__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::HitTriple__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitTriple__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_HitTriple__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitDouble__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::HitDouble__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitDouble__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_HitDouble__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitSingle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::HitSingle__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitSingle__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_HitSingle__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitFoul__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::HitFoul__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitFoul__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_HitFoul__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitCaught__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 BallLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::HitCaught__DelegateSignature(const struct FVector& BallLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.HitCaught__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_HitCaught__DelegateSignature_Params params;
	params.BallLocation = BallLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CatcherThrow__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseballBall*           Ball                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABB_Minigame_PracticeSportManager_C::CatcherThrow__DelegateSignature(class ABaseballBall* Ball)
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.CatcherThrow__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_CatcherThrow__DelegateSignature_Params params;
	params.Ball = Ball;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedStrike__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::PitchedStrike__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedStrike__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_PitchedStrike__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedBall__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::PitchedBall__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchedBall__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_PitchedBall__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SwingAndMiss__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::SwingAndMiss__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.SwingAndMiss__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_SwingAndMiss__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchHit__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::PitchHit__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitchHit__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_PitchHit__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherPitched__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::PitcherPitched__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherPitched__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_PitcherPitched__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABB_Minigame_PracticeSportManager_C::PitcherReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BB_Minigame_PracticeSportManager.BB_Minigame_PracticeSportManager_C.PitcherReady__DelegateSignature");

	ABB_Minigame_PracticeSportManager_C_PitcherReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
