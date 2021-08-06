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

// Function BW_Pinsetter.BW_Pinsetter_C.SetPinPhysicsEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Enabled                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABW_Pinsetter_C::SetPinPhysicsEnabled(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.SetPinPhysicsEnabled");

	ABW_Pinsetter_C_SetPinPhysicsEnabled_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Initialize");

	ABW_Pinsetter_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.GetRollScore
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            PinsKnockedDown                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pinsetter_C::GetRollScore(int* PinsKnockedDown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.GetRollScore");

	ABW_Pinsetter_C_GetRollScore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinsKnockedDown != nullptr)
		*PinsKnockedDown = params.PinsKnockedDown;

}


// Function BW_Pinsetter.BW_Pinsetter_C.Cleanup
// (Public, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::Cleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Cleanup");

	ABW_Pinsetter_C_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.SpawnAllPins
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::SpawnAllPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.SpawnAllPins");

	ABW_Pinsetter_C_SpawnAllPins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.UserConstructionScript");

	ABW_Pinsetter_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__FinishedFunc
// (BlueprintEvent)
void ABW_Pinsetter_C::Timeline_PinReset__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__FinishedFunc");

	ABW_Pinsetter_C_Timeline_PinReset__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__UpdateFunc
// (BlueprintEvent)
void ABW_Pinsetter_C::Timeline_PinReset__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__UpdateFunc");

	ABW_Pinsetter_C_Timeline_PinReset__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ABW_Pinsetter_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ReceiveBeginPlay");

	ABW_Pinsetter_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pinsetter_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ReceiveEndPlay");

	ABW_Pinsetter_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.ResetPins
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::ResetPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ResetPins");

	ABW_Pinsetter_C_ResetPins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.RaisePinsetter
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::RaisePinsetter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.RaisePinsetter");

	ABW_Pinsetter_C_RaisePinsetter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.LaneChangeComplete
// (BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::LaneChangeComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.LaneChangeComplete");

	ABW_Pinsetter_C_LaneChangeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.ClearPins
// (BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::ClearPins()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ClearPins");

	ABW_Pinsetter_C_ClearPins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.ExecuteUbergraph_BW_Pinsetter
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABW_Pinsetter_C::ExecuteUbergraph_BW_Pinsetter(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ExecuteUbergraph_BW_Pinsetter");

	ABW_Pinsetter_C_ExecuteUbergraph_BW_Pinsetter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.PindeckHidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::PindeckHidden__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.PindeckHidden__DelegateSignature");

	ABW_Pinsetter_C_PindeckHidden__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_Pinsetter.BW_Pinsetter_C.PinResetComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ABW_Pinsetter_C::PinResetComplete__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.PinResetComplete__DelegateSignature");

	ABW_Pinsetter_C_PinResetComplete__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
