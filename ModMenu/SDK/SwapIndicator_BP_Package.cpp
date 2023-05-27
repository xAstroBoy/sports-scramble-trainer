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
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.SetRiftMeshes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ASwapIndicator_BP_C::SetRiftMeshes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.SetRiftMeshes");
		
		ASwapIndicator_BP_C_SetRiftMeshes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ASwapIndicator_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.UserConstructionScript");
		
		ASwapIndicator_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.OnBeginSwap
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASwapIndicator_BP_C::OnBeginSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.OnBeginSwap");
		
		ASwapIndicator_BP_C_OnBeginSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.OnConfirmSwap
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASwapIndicator_BP_C::OnConfirmSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.OnConfirmSwap");
		
		ASwapIndicator_BP_C_OnConfirmSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ASwapIndicator_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.ReceiveBeginPlay");
		
		ASwapIndicator_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.OnHandednessSet
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		EScramHandedness                                   Handedness                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASwapIndicator_BP_C::OnHandednessSet(EScramHandedness Handedness)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.OnHandednessSet");
		
		ASwapIndicator_BP_C_OnHandednessSet_Params params {};
		params.Handedness = Handedness;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SwapIndicator_BP.SwapIndicator_BP_C.ExecuteUbergraph_SwapIndicator_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ASwapIndicator_BP_C::ExecuteUbergraph_SwapIndicator_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SwapIndicator_BP.SwapIndicator_BP_C.ExecuteUbergraph_SwapIndicator_BP");
		
		ASwapIndicator_BP_C_ExecuteUbergraph_SwapIndicator_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASwapIndicator_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASwapIndicator_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SwapIndicator_BP.SwapIndicator_BP_C");
		return ptr;
	}

}


