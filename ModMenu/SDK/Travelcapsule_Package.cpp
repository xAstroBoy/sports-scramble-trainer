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
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.SFX_Transition_Out
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::SFX_Transition_Out()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.SFX_Transition_Out");
		
		ATravelcapsule_C_SFX_Transition_Out_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.SFX_Transition_In
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::SFX_Transition_In()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.SFX_Transition_In");
		
		ATravelcapsule_C_SFX_Transition_In_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Initialize");
		
		ATravelcapsule_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.UserConstructionScript");
		
		ATravelcapsule_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_ChangeMediaAlpha__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_ChangeMediaAlpha__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_ChangeMediaAlpha__FinishedFunc");
		
		ATravelcapsule_C_Timeline_ChangeMediaAlpha__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_ChangeMediaAlpha__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_ChangeMediaAlpha__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_ChangeMediaAlpha__UpdateFunc");
		
		ATravelcapsule_C_Timeline_ChangeMediaAlpha__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_ColorSwap__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_ColorSwap__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_ColorSwap__FinishedFunc");
		
		ATravelcapsule_C_Timeline_ColorSwap__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_ColorSwap__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_ColorSwap__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_ColorSwap__UpdateFunc");
		
		ATravelcapsule_C_Timeline_ColorSwap__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_PulseColor__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor__FinishedFunc");
		
		ATravelcapsule_C_Timeline_PulseColor__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_PulseColor__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor__UpdateFunc");
		
		ATravelcapsule_C_Timeline_PulseColor__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_PulseColor2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor2__FinishedFunc");
		
		ATravelcapsule_C_Timeline_PulseColor2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATravelcapsule_C::Timeline_PulseColor2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.Timeline_PulseColor2__UpdateFunc");
		
		ATravelcapsule_C_Timeline_PulseColor2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATravelcapsule_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.ReceiveBeginPlay");
		
		ATravelcapsule_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.CloseCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::CloseCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.CloseCapsule");
		
		ATravelcapsule_C_CloseCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.OpenCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::OpenCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.OpenCapsule");
		
		ATravelcapsule_C_OpenCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.SetColorRed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATravelcapsule_C::SetColorRed(bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.SetColorRed");
		
		ATravelcapsule_C_SetColorRed_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.SetColorBlue
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATravelcapsule_C::SetColorBlue(bool Instant)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.SetColorBlue");
		
		ATravelcapsule_C_SetColorBlue_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATravelcapsule_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.ReceiveTick");
		
		ATravelcapsule_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.PulseRewardColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Yellow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Red                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATravelcapsule_C::PulseRewardColor(bool Yellow, bool Red)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.PulseRewardColor");
		
		ATravelcapsule_C_PulseRewardColor_Params params {};
		params.Yellow = Yellow;
		params.Red = Red;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.EndPulse
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::EndPulse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.EndPulse");
		
		ATravelcapsule_C_EndPulse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.ExecuteUbergraph_Travelcapsule
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATravelcapsule_C::ExecuteUbergraph_Travelcapsule(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.ExecuteUbergraph_Travelcapsule");
		
		ATravelcapsule_C_ExecuteUbergraph_Travelcapsule_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.TravelCapsuleClosed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::TravelCapsuleClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.TravelCapsuleClosed__DelegateSignature");
		
		ATravelcapsule_C_TravelCapsuleClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.ColorSwapComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Red                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATravelcapsule_C::ColorSwapComplete__DelegateSignature(bool Red)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.ColorSwapComplete__DelegateSignature");
		
		ATravelcapsule_C_ColorSwapComplete__DelegateSignature_Params params {};
		params.Red = Red;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.TravelCapsuleRemoved__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::TravelCapsuleRemoved__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.TravelCapsuleRemoved__DelegateSignature");
		
		ATravelcapsule_C_TravelCapsuleRemoved__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Travelcapsule.Travelcapsule_C.TravelCapsuleOn__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATravelcapsule_C::TravelCapsuleOn__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Travelcapsule.Travelcapsule_C.TravelCapsuleOn__DelegateSignature");
		
		ATravelcapsule_C_TravelCapsuleOn__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATravelcapsule_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATravelcapsule_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Travelcapsule.Travelcapsule_C");
		return ptr;
	}

}


