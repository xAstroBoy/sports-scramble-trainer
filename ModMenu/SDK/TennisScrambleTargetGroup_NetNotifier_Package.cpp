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
	 * 		Name   -> Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_NetNotifier_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.UserConstructionScript");
		
		ATennisScrambleTargetGroup_NetNotifier_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_NetNotifier_C::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.OnTriggered");
		
		ATennisScrambleTargetGroup_NetNotifier_C_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisScrambleTargetGroup_NetNotifier_C::ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier");
		
		ATennisScrambleTargetGroup_NetNotifier_C_ExecuteUbergraph_TennisScrambleTargetGroup_NetNotifier_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.TriggeredByBall__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScrambleTargetGroup_NetNotifier_C::TriggeredByBall__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C.TriggeredByBall__DelegateSignature");
		
		ATennisScrambleTargetGroup_NetNotifier_C_TriggeredByBall__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisScrambleTargetGroup_NetNotifier_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisScrambleTargetGroup_NetNotifier_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisScrambleTargetGroup_NetNotifier.TennisScrambleTargetGroup_NetNotifier_C");
		return ptr;
	}

}


