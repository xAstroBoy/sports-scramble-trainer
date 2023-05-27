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
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.RemoveFireAndForgetActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AInfoDisplay_C::RemoveFireAndForgetActor(bool Instant, bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.RemoveFireAndForgetActor");
		
		AInfoDisplay_C_RemoveFireAndForgetActor_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AInfoDisplay_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.Initialize");
		
		AInfoDisplay_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AInfoDisplay_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.UserConstructionScript");
		
		AInfoDisplay_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInfoDisplay_C::Timeline_ScaleUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__FinishedFunc");
		
		AInfoDisplay_C_Timeline_ScaleUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AInfoDisplay_C::Timeline_ScaleUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.Timeline_ScaleUp__UpdateFunc");
		
		AInfoDisplay_C_Timeline_ScaleUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AInfoDisplay_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ReceiveBeginPlay");
		
		AInfoDisplay_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInfoDisplay_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ScaleUp");
		
		AInfoDisplay_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.ScaleDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInfoDisplay_C::ScaleDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ScaleDown");
		
		AInfoDisplay_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.UpdateText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DisplayTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        DisplayText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AInfoDisplay_C::UpdateText(float DisplayTime, const class FText& DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.UpdateText");
		
		AInfoDisplay_C_UpdateText_Params params {};
		params.DisplayTime = DisplayTime;
		params.DisplayText = DisplayText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.ResetDisplayTime
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AInfoDisplay_C::ResetDisplayTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ResetDisplayTime");
		
		AInfoDisplay_C_ResetDisplayTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.ExecuteUbergraph_InfoDisplay
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AInfoDisplay_C::ExecuteUbergraph_InfoDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.ExecuteUbergraph_InfoDisplay");
		
		AInfoDisplay_C_ExecuteUbergraph_InfoDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function InfoDisplay.InfoDisplay_C.CountdownComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AInfoDisplay_C::CountdownComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function InfoDisplay.InfoDisplay_C.CountdownComplete__DelegateSignature");
		
		AInfoDisplay_C_CountdownComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AInfoDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AInfoDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass InfoDisplay.InfoDisplay_C");
		return ptr;
	}

}


