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
	 * 		Name   -> Function BW_BallReturnSlot.BW_BallReturnSlot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_BallReturnSlot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.UserConstructionScript");
		
		ABW_BallReturnSlot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnBallAttached
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_BallReturnSlot_C::OnBallAttached()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnBallAttached");
		
		ABW_BallReturnSlot_C_OnBallAttached_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStart
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_BallReturnSlot_C::OnMotionStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStart");
		
		ABW_BallReturnSlot_C_OnMotionStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStop
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_BallReturnSlot_C::OnMotionStop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.OnMotionStop");
		
		ABW_BallReturnSlot_C_OnMotionStop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_BallReturnSlot.BW_BallReturnSlot_C.ExecuteUbergraph_BW_BallReturnSlot
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_BallReturnSlot_C::ExecuteUbergraph_BW_BallReturnSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_BallReturnSlot.BW_BallReturnSlot_C.ExecuteUbergraph_BW_BallReturnSlot");
		
		ABW_BallReturnSlot_C_ExecuteUbergraph_BW_BallReturnSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_BallReturnSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_BallReturnSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_BallReturnSlot.BW_BallReturnSlot_C");
		return ptr;
	}

}


