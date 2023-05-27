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
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.CanPlayInstrumentVFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayerHand*                            Hand                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisAvatar_BP_C::CanPlayInstrumentVFX(class AScramPlayerHand* Hand)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.CanPlayInstrumentVFX");
		
		ATennisAvatar_BP_C_CanPlayInstrumentVFX_Params params {};
		params.Hand = Hand;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.UserConstructionScript");
		
		ATennisAvatar_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::Timeline_ScaleUp__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__FinishedFunc");
		
		ATennisAvatar_BP_C_Timeline_ScaleUp__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::Timeline_ScaleUp__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.Timeline_ScaleUp__UpdateFunc");
		
		ATennisAvatar_BP_C_Timeline_ScaleUp__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.ScaleUp");
		
		ATennisAvatar_BP_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.TryInitializeMaterial
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::TryInitializeMaterial()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.TryInitializeMaterial");
		
		ATennisAvatar_BP_C_TryInitializeMaterial_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.RevealAvatar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::RevealAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.RevealAvatar");
		
		ATennisAvatar_BP_C_RevealAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.ReceiveBeginPlay");
		
		ATennisAvatar_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.CapsuleOpening
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisAvatar_BP_C::CapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.CapsuleOpening");
		
		ATennisAvatar_BP_C_CapsuleOpening_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.PlayVFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAvatar_BP_C::PlayVFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.PlayVFX");
		
		ATennisAvatar_BP_C_PlayVFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAvatar_BP.TennisAvatar_BP_C.ExecuteUbergraph_TennisAvatar_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisAvatar_BP_C::ExecuteUbergraph_TennisAvatar_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAvatar_BP.TennisAvatar_BP_C.ExecuteUbergraph_TennisAvatar_BP");
		
		ATennisAvatar_BP_C_ExecuteUbergraph_TennisAvatar_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisAvatar_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisAvatar_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisAvatar_BP.TennisAvatar_BP_C");
		return ptr;
	}

}


