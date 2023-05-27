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
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisNet_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.UserConstructionScript");
		
		ATennisNet_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATennisNet_BP_C::Timeline_HideNet__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__FinishedFunc");
		
		ATennisNet_BP_C_Timeline_HideNet__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATennisNet_BP_C::Timeline_HideNet__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.Timeline_HideNet__UpdateFunc");
		
		ATennisNet_BP_C_Timeline_HideNet__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATennisNet_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.ReceiveBeginPlay");
		
		ATennisNet_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.HideNet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisNet_BP_C::HideNet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.HideNet");
		
		ATennisNet_BP_C_HideNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.ShowNet
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisNet_BP_C::ShowNet()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.ShowNet");
		
		ATennisNet_BP_C_ShowNet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.PlayNetMoveSFX 
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisNet_BP_C::PlayNetMoveSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.PlayNetMoveSFX ");
		
		ATennisNet_BP_C_PlayNetMoveSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisNet_BP.TennisNet_BP_C.ExecuteUbergraph_TennisNet_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisNet_BP_C::ExecuteUbergraph_TennisNet_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisNet_BP.TennisNet_BP_C.ExecuteUbergraph_TennisNet_BP");
		
		ATennisNet_BP_C_ExecuteUbergraph_TennisNet_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisNet_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisNet_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisNet_BP.TennisNet_BP_C");
		return ptr;
	}

}


