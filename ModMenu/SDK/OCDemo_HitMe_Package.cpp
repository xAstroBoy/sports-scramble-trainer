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
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AOCDemo_HitMe_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.UserConstructionScript");
		
		AOCDemo_HitMe_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.Timeline_Scale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOCDemo_HitMe_C::Timeline_Scale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.Timeline_Scale__FinishedFunc");
		
		AOCDemo_HitMe_C_Timeline_Scale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.Timeline_Scale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AOCDemo_HitMe_C::Timeline_Scale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.Timeline_Scale__UpdateFunc");
		
		AOCDemo_HitMe_C_Timeline_Scale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AOCDemo_HitMe_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.ReceiveBeginPlay");
		
		AOCDemo_HitMe_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.Grow
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOCDemo_HitMe_C::Grow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.Grow");
		
		AOCDemo_HitMe_C_Grow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.Shrink
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AOCDemo_HitMe_C::Shrink()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.Shrink");
		
		AOCDemo_HitMe_C_Shrink_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function OCDemo_HitMe.OCDemo_HitMe_C.ExecuteUbergraph_OCDemo_HitMe
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AOCDemo_HitMe_C::ExecuteUbergraph_OCDemo_HitMe(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OCDemo_HitMe.OCDemo_HitMe_C.ExecuteUbergraph_OCDemo_HitMe");
		
		AOCDemo_HitMe_C_ExecuteUbergraph_OCDemo_HitMe_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AOCDemo_HitMe_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AOCDemo_HitMe_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OCDemo_HitMe.OCDemo_HitMe_C");
		return ptr;
	}

}


