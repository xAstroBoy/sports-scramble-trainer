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

// Function InstrumentSelection.InstrumentSelection_C.UpdatePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::UpdatePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.UpdatePosition");

	AInstrumentSelection_C_UpdatePosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.DropInstruments
// (Public, BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::DropInstruments()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.DropInstruments");

	AInstrumentSelection_C_DropInstruments_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.DestroyInstrumentSelectionObjects
// (Public, BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::DestroyInstrumentSelectionObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.DestroyInstrumentSelectionObjects");

	AInstrumentSelection_C_DestroyInstrumentSelectionObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.CreateInstrumentSelectionObjects
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::CreateInstrumentSelectionObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.CreateInstrumentSelectionObjects");

	AInstrumentSelection_C_CreateInstrumentSelectionObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.UserConstructionScript");

	AInstrumentSelection_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AInstrumentSelection_C::InpActEvt_A_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_2");

	AInstrumentSelection_C_InpActEvt_A_K2Node_InputActionEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void AInstrumentSelection_C::InpActEvt_A_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_1");

	AInstrumentSelection_C_InpActEvt_A_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AInstrumentSelection_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.ReceiveBeginPlay");

	AInstrumentSelection_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.OpenSelection
// (BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::OpenSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.OpenSelection");

	AInstrumentSelection_C_OpenSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.CloseSelection
// (BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::CloseSelection()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.CloseSelection");

	AInstrumentSelection_C_CloseSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.InstrumentSelected
// (BlueprintCallable, BlueprintEvent)
void AInstrumentSelection_C::InstrumentSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.InstrumentSelected");

	AInstrumentSelection_C_InstrumentSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function InstrumentSelection.InstrumentSelection_C.ExecuteUbergraph_InstrumentSelection
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AInstrumentSelection_C::ExecuteUbergraph_InstrumentSelection(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.ExecuteUbergraph_InstrumentSelection");

	AInstrumentSelection_C_ExecuteUbergraph_InstrumentSelection_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
