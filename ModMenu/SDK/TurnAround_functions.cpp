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

// Function TurnAround.TurnAround_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void ATurnAround_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.Initialize");

	ATurnAround_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void ATurnAround_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.UserConstructionScript");

	ATurnAround_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.Timeline_MenuScale__FinishedFunc
// (BlueprintEvent)
void ATurnAround_C::Timeline_MenuScale__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.Timeline_MenuScale__FinishedFunc");

	ATurnAround_C_Timeline_MenuScale__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.Timeline_MenuScale__UpdateFunc
// (BlueprintEvent)
void ATurnAround_C::Timeline_MenuScale__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.Timeline_MenuScale__UpdateFunc");

	ATurnAround_C_Timeline_MenuScale__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void ATurnAround_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.ReceiveBeginPlay");

	ATurnAround_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATurnAround_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.ButtonPressed");

	ATurnAround_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.ScaleUp
// (BlueprintCallable, BlueprintEvent)
void ATurnAround_C::ScaleUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.ScaleUp");

	ATurnAround_C_ScaleUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATurnAround_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.ReceiveEndPlay");

	ATurnAround_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
// (BlueprintEvent)
void ATurnAround_C::BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature");

	ATurnAround_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TurnAround.TurnAround_C.ExecuteUbergraph_TurnAround
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATurnAround_C::ExecuteUbergraph_TurnAround(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TurnAround.TurnAround_C.ExecuteUbergraph_TurnAround");

	ATurnAround_C_ExecuteUbergraph_TurnAround_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
