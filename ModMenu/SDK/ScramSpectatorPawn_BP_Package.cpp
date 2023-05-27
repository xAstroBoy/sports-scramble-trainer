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
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.UserConstructionScript");
		
		AScramSpectatorPawn_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.Timeline_FadeOut__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::Timeline_FadeOut__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.Timeline_FadeOut__FinishedFunc");
		
		AScramSpectatorPawn_BP_C_Timeline_FadeOut__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.Timeline_FadeOut__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::Timeline_FadeOut__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.Timeline_FadeOut__UpdateFunc");
		
		AScramSpectatorPawn_BP_C_Timeline_FadeOut__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.InpActEvt_P_K2Node_InputKeyEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramSpectatorPawn_BP_C::InpActEvt_P_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.InpActEvt_P_K2Node_InputKeyEvent_1");
		
		AScramSpectatorPawn_BP_C_InpActEvt_P_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.ReceiveBeginPlay");
		
		AScramSpectatorPawn_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.FadeOut
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::FadeOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.FadeOut");
		
		AScramSpectatorPawn_BP_C_FadeOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.FadeIn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::FadeIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.FadeIn");
		
		AScramSpectatorPawn_BP_C_FadeIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.ExecuteUbergraph_ScramSpectatorPawn_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramSpectatorPawn_BP_C::ExecuteUbergraph_ScramSpectatorPawn_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.ExecuteUbergraph_ScramSpectatorPawn_BP");
		
		AScramSpectatorPawn_BP_C_ExecuteUbergraph_ScramSpectatorPawn_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.SpectatorCamSelfControlStart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::SpectatorCamSelfControlStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.SpectatorCamSelfControlStart__DelegateSignature");
		
		AScramSpectatorPawn_BP_C_SpectatorCamSelfControlStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.SpectatorCamSelfControlEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::SpectatorCamSelfControlEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.SpectatorCamSelfControlEnd__DelegateSignature");
		
		AScramSpectatorPawn_BP_C_SpectatorCamSelfControlEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.SpectatorFadeOutComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramSpectatorPawn_BP_C::SpectatorFadeOutComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C.SpectatorFadeOutComplete__DelegateSignature");
		
		AScramSpectatorPawn_BP_C_SpectatorFadeOutComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramSpectatorPawn_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramSpectatorPawn_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramSpectatorPawn_BP.ScramSpectatorPawn_BP_C");
		return ptr;
	}

}


