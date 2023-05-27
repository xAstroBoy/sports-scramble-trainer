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
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ANW_Court_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.UserConstructionScript");
		
		ANW_Court_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.Court Lines__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtLines__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.Court Lines__FinishedFunc");
		
		ANW_Court_BP_C_CourtLines__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.Court Lines__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtLines__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.Court Lines__UpdateFunc");
		
		ANW_Court_BP_C_CourtLines__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_ForeSwipe__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtLines__SFX_Event_ForeSwipe__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_ForeSwipe__EventFunc");
		
		ANW_Court_BP_C_CourtLines__SFX_Event_ForeSwipe__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_SideSwipes__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtLines__SFX_Event_SideSwipes__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_SideSwipes__EventFunc");
		
		ANW_Court_BP_C_CourtLines__SFX_Event_SideSwipes__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_MidSwipe__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtLines__SFX_Event_MidSwipe__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_MidSwipe__EventFunc");
		
		ANW_Court_BP_C_CourtLines__SFX_Event_MidSwipe__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_BigSwipe__EventFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtLines__SFX_Event_BigSwipe__EventFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.Court Lines__SFX_Event_BigSwipe__EventFunc");
		
		ANW_Court_BP_C_CourtLines__SFX_Event_BigSwipe__EventFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.InpActEvt_Two_K2Node_InputKeyEvent_3
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANW_Court_BP_C::InpActEvt_Two_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.InpActEvt_Two_K2Node_InputKeyEvent_3");
		
		ANW_Court_BP_C_InpActEvt_Two_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.InpActEvt_Three_K2Node_InputKeyEvent_2
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANW_Court_BP_C::InpActEvt_Three_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.InpActEvt_Three_K2Node_InputKeyEvent_2");
		
		ANW_Court_BP_C_InpActEvt_Three_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.InpActEvt_One_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ANW_Court_BP_C::InpActEvt_One_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.InpActEvt_One_K2Node_InputKeyEvent_1");
		
		ANW_Court_BP_C_InpActEvt_One_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.ShowCourt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANW_Court_BP_C::ShowCourt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.ShowCourt");
		
		ANW_Court_BP_C_ShowCourt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.HideCourt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANW_Court_BP_C::HideCourt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.HideCourt");
		
		ANW_Court_BP_C_HideCourt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.InstantShowCourt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ANW_Court_BP_C::InstantShowCourt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.InstantShowCourt");
		
		ANW_Court_BP_C_InstantShowCourt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ANW_Court_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.ReceiveBeginPlay");
		
		ANW_Court_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.ExecuteUbergraph_NW_Court_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ANW_Court_BP_C::ExecuteUbergraph_NW_Court_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.ExecuteUbergraph_NW_Court_BP");
		
		ANW_Court_BP_C_ExecuteUbergraph_NW_Court_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.CourtHideComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtHideComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.CourtHideComplete__DelegateSignature");
		
		ANW_Court_BP_C_CourtHideComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function NW_Court_BP.NW_Court_BP_C.CourtRevealComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ANW_Court_BP_C::CourtRevealComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function NW_Court_BP.NW_Court_BP_C.CourtRevealComplete__DelegateSignature");
		
		ANW_Court_BP_C_CourtRevealComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANW_Court_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANW_Court_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass NW_Court_BP.NW_Court_BP_C");
		return ptr;
	}

}


