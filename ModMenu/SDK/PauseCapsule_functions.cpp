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

// Function PauseCapsule.PauseCapsule_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Cleanup");

	APauseCapsule_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.SpawnPauseMenu
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::SpawnPauseMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.SpawnPauseMenu");

	APauseCapsule_C_SpawnPauseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Initialize");

	APauseCapsule_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.UserConstructionScript");

	APauseCapsule_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__FinishedFunc
// (BlueprintEvent)
void APauseCapsule_C::Timeline_BlackPulse__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__FinishedFunc");

	APauseCapsule_C_Timeline_BlackPulse__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__UpdateFunc
// (BlueprintEvent)
void APauseCapsule_C::Timeline_BlackPulse__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Timeline_BlackPulse__UpdateFunc");

	APauseCapsule_C_Timeline_BlackPulse__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void APauseCapsule_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ReceiveBeginPlay");

	APauseCapsule_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.ShowCapsule
// (Event, Public, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::ShowCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ShowCapsule");

	APauseCapsule_C_ShowCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.Unpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeepCapsule                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APauseCapsule_C::Unpause(bool KeepCapsule)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.Unpause");

	APauseCapsule_C_Unpause_Params params;
	params.KeepCapsule = KeepCapsule;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseCapsule_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ReceiveEndPlay");

	APauseCapsule_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.BlackPulse
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::BlackPulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.BlackPulse");

	APauseCapsule_C_BlackPulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.BlackPulseOff
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::BlackPulseOff()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.BlackPulseOff");

	APauseCapsule_C_BlackPulseOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.CreateCapsule
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::CreateCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.CreateCapsule");

	APauseCapsule_C_CreateCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.RemoveCapsule
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::RemoveCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.RemoveCapsule");

	APauseCapsule_C_RemoveCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseCapsule_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ReceiveTick");

	APauseCapsule_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.RemoveThisActor
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::RemoveThisActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.RemoveThisActor");

	APauseCapsule_C_RemoveThisActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.DemoUnpause
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           KeepCapsule                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                           ReenablePause                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void APauseCapsule_C::DemoUnpause(bool KeepCapsule, bool ReenablePause)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.DemoUnpause");

	APauseCapsule_C_DemoUnpause_Params params;
	params.KeepCapsule = KeepCapsule;
	params.ReenablePause = ReenablePause;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.BeginUnpause
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::BeginUnpause()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.BeginUnpause");

	APauseCapsule_C_BeginUnpause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.QueuedRemoveCapsule
// (BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::QueuedRemoveCapsule()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.QueuedRemoveCapsule");

	APauseCapsule_C_QueuedRemoveCapsule_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.ExecuteUbergraph_PauseCapsule
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void APauseCapsule_C::ExecuteUbergraph_PauseCapsule(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.ExecuteUbergraph_PauseCapsule");

	APauseCapsule_C_ExecuteUbergraph_PauseCapsule_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.PulseEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::PulseEnd__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.PulseEnd__DelegateSignature");

	APauseCapsule_C_PulseEnd__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PauseCapsule.PauseCapsule_C.TransitionReady__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void APauseCapsule_C::TransitionReady__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function PauseCapsule.PauseCapsule_C.TransitionReady__DelegateSignature");

	APauseCapsule_C_TransitionReady__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
