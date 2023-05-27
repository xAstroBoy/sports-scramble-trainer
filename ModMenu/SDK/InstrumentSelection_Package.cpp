/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.UpdatePosition
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::UpdatePosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.UpdatePosition");
		
		AInstrumentSelection_C_UpdatePosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.DropInstruments
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::DropInstruments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.DropInstruments");
		
		AInstrumentSelection_C_DropInstruments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.DestroyInstrumentSelectionObjects
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::DestroyInstrumentSelectionObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.DestroyInstrumentSelectionObjects");
		
		AInstrumentSelection_C_DestroyInstrumentSelectionObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.CreateInstrumentSelectionObjects
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::CreateInstrumentSelectionObjects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.CreateInstrumentSelectionObjects");
		
		AInstrumentSelection_C_CreateInstrumentSelectionObjects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.UserConstructionScript");
		
		AInstrumentSelection_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AInstrumentSelection_C::InpActEvt_A_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_2");
		
		AInstrumentSelection_C_InpActEvt_A_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AInstrumentSelection_C::InpActEvt_A_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.InpActEvt_A_K2Node_InputActionEvent_1");
		
		AInstrumentSelection_C_InpActEvt_A_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInstrumentSelection_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.ReceiveBeginPlay");
		
		AInstrumentSelection_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.OpenSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::OpenSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.OpenSelection");
		
		AInstrumentSelection_C_OpenSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.CloseSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::CloseSelection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.CloseSelection");
		
		AInstrumentSelection_C_CloseSelection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.InstrumentSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInstrumentSelection_C::InstrumentSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.InstrumentSelected");
		
		AInstrumentSelection_C_InstrumentSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InstrumentSelection.InstrumentSelection_C.ExecuteUbergraph_InstrumentSelection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInstrumentSelection_C::ExecuteUbergraph_InstrumentSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InstrumentSelection.InstrumentSelection_C.ExecuteUbergraph_InstrumentSelection");
		
		AInstrumentSelection_C_ExecuteUbergraph_InstrumentSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInstrumentSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInstrumentSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InstrumentSelection.InstrumentSelection_C");
		return ptr;
	}

}


