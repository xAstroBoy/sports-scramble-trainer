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
	 * 		Name   -> Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACMN_CelShade_HighlightDirection_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.UserConstructionScript");
		
		ACMN_CelShade_HighlightDirection_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ACMN_CelShade_HighlightDirection_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ReceiveBeginPlay");
		
		ACMN_CelShade_HighlightDirection_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACMN_CelShade_HighlightDirection_BP_C::ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C.ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP");
		
		ACMN_CelShade_HighlightDirection_BP_C_ExecuteUbergraph_CMN_CelShade_HighlightDirection_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACMN_CelShade_HighlightDirection_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACMN_CelShade_HighlightDirection_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CMN_CelShade_HighlightDirection_BP.CMN_CelShade_HighlightDirection_BP_C");
		return ptr;
	}

}


