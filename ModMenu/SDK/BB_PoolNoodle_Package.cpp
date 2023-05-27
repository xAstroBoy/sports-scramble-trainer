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
	 * 		Name   -> Function BB_PoolNoodle.BB_PoolNoodle_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PoolNoodle_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PoolNoodle.BB_PoolNoodle_C.UserConstructionScript");
		
		ABB_PoolNoodle_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PoolNoodle.BB_PoolNoodle_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_PoolNoodle_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PoolNoodle.BB_PoolNoodle_C.ReceiveBeginPlay");
		
		ABB_PoolNoodle_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PoolNoodle.BB_PoolNoodle_C.SetupSkeleton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PoolNoodle_C::SetupSkeleton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PoolNoodle.BB_PoolNoodle_C.SetupSkeleton");
		
		ABB_PoolNoodle_C_SetupSkeleton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PoolNoodle.BB_PoolNoodle_C.ExecuteUbergraph_BB_PoolNoodle
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_PoolNoodle_C::ExecuteUbergraph_BB_PoolNoodle(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PoolNoodle.BB_PoolNoodle_C.ExecuteUbergraph_BB_PoolNoodle");
		
		ABB_PoolNoodle_C_ExecuteUbergraph_BB_PoolNoodle_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_PoolNoodle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_PoolNoodle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_PoolNoodle.BB_PoolNoodle_C");
		return ptr;
	}

}


