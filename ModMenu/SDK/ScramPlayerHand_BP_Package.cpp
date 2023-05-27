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
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.IsVisible
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               visible                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerHand_BP_C::IsVisible(bool* visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.IsVisible");
		
		AScramPlayerHand_BP_C_IsVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (visible != nullptr)
			*visible = params.visible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UpdateButtonFlashMesh
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_C::UpdateButtonFlashMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UpdateButtonFlashMesh");
		
		AScramPlayerHand_BP_C_UpdateButtonFlashMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.PlayHaptics
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UHapticFeedbackEffect_Base*                  HapticsEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              HapticsScale                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerHand_BP_C::PlayHaptics(class UHapticFeedbackEffect_Base* HapticsEffect, float HapticsScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.PlayHaptics");
		
		AScramPlayerHand_BP_C_PlayHaptics_Params params {};
		params.HapticsEffect = HapticsEffect;
		params.HapticsScale = HapticsScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UserConstructionScript");
		
		AScramPlayerHand_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveBeginPlay");
		
		AScramPlayerHand_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerHand_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveTick");
		
		AScramPlayerHand_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.FlashButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_C::FlashButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.FlashButtons");
		
		AScramPlayerHand_BP_C_FlashButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.StopFlashButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_C::StopFlashButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.StopFlashButtons");
		
		AScramPlayerHand_BP_C_StopFlashButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ExecuteUbergraph_ScramPlayerHand_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerHand_BP_C::ExecuteUbergraph_ScramPlayerHand_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ExecuteUbergraph_ScramPlayerHand_BP");
		
		AScramPlayerHand_BP_C_ExecuteUbergraph_ScramPlayerHand_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerHand_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerHand_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerHand_BP.ScramPlayerHand_BP_C");
		return ptr;
	}

}


