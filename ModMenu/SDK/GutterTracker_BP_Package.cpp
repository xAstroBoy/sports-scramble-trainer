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
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.FireLeftParticle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGutterTracker_BP_C::FireLeftParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.FireLeftParticle");
		
		UGutterTracker_BP_C_FireLeftParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.FireRightParticle
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UGutterTracker_BP_C::FireRightParticle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.FireRightParticle");
		
		UGutterTracker_BP_C_FireRightParticle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.Left Net MultiCast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UGutterTracker_BP_C::LeftNetMultiCast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.Left Net MultiCast");
		
		UGutterTracker_BP_C_LeftNetMultiCast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.Right Net Multicast
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void UGutterTracker_BP_C::RightNetMulticast()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.Right Net Multicast");
		
		UGutterTracker_BP_C_RightNetMulticast_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGutterTracker_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.ReceiveEndPlay");
		
		UGutterTracker_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.Left Server Callup
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UGutterTracker_BP_C::LeftServerCallup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.Left Server Callup");
		
		UGutterTracker_BP_C_LeftServerCallup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.Right Server Callup
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void UGutterTracker_BP_C::RightServerCallup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.Right Server Callup");
		
		UGutterTracker_BP_C_RightServerCallup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GutterTracker_BP.GutterTracker_BP_C.ExecuteUbergraph_GutterTracker_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGutterTracker_BP_C::ExecuteUbergraph_GutterTracker_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GutterTracker_BP.GutterTracker_BP_C.ExecuteUbergraph_GutterTracker_BP");
		
		UGutterTracker_BP_C_ExecuteUbergraph_GutterTracker_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGutterTracker_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGutterTracker_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GutterTracker_BP.GutterTracker_BP_C");
		return ptr;
	}

}


