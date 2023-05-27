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
	 * 		Name   -> Function LaneEndBallTrigger.LaneEndBallTrigger_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ALaneEndBallTrigger_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.UserConstructionScript");
		
		ALaneEndBallTrigger_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function LaneEndBallTrigger.LaneEndBallTrigger_C.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaneEndBallTrigger_C::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.OnTriggered");
		
		ALaneEndBallTrigger_C_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function LaneEndBallTrigger.LaneEndBallTrigger_C.ExecuteUbergraph_LaneEndBallTrigger
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaneEndBallTrigger_C::ExecuteUbergraph_LaneEndBallTrigger(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.ExecuteUbergraph_LaneEndBallTrigger");
		
		ALaneEndBallTrigger_C_ExecuteUbergraph_LaneEndBallTrigger_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function LaneEndBallTrigger.LaneEndBallTrigger_C.TriggeredByBall__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ALaneEndBallTrigger_C::TriggeredByBall__DelegateSignature(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LaneEndBallTrigger.LaneEndBallTrigger_C.TriggeredByBall__DelegateSignature");
		
		ALaneEndBallTrigger_C_TriggeredByBall__DelegateSignature_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALaneEndBallTrigger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALaneEndBallTrigger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass LaneEndBallTrigger.LaneEndBallTrigger_C");
		return ptr;
	}

}


