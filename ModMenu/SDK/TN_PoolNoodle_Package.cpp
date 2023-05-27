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
	 * 		Name   -> Function TN_PoolNoodle.TN_PoolNoodle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PoolNoodle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.UserConstructionScript");
		
		ATN_PoolNoodle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PoolNoodle.TN_PoolNoodle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_PoolNoodle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.ReceiveBeginPlay");
		
		ATN_PoolNoodle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PoolNoodle.TN_PoolNoodle_C.UpdateSkeleton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_PoolNoodle_C::UpdateSkeleton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.UpdateSkeleton");
		
		ATN_PoolNoodle_C_UpdateSkeleton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_PoolNoodle.TN_PoolNoodle_C.ExecuteUbergraph_TN_PoolNoodle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_PoolNoodle_C::ExecuteUbergraph_TN_PoolNoodle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_PoolNoodle.TN_PoolNoodle_C.ExecuteUbergraph_TN_PoolNoodle");
		
		ATN_PoolNoodle_C_ExecuteUbergraph_TN_PoolNoodle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_PoolNoodle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_PoolNoodle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_PoolNoodle.TN_PoolNoodle_C");
		return ptr;
	}

}


