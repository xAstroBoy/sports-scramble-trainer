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
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.SetUpTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_C::SetUpTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.SetUpTarget");
		
		ABB_ChallengeTarget_C_SetUpTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.UserConstructionScript");
		
		ABB_ChallengeTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.ReceiveBeginPlay");
		
		ABB_ChallengeTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggered
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_C::OnTriggered(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggered");
		
		ABB_ChallengeTarget_C_OnTriggered_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.ShrinkDestroy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_C::ShrinkDestroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.ShrinkDestroy");
		
		ABB_ChallengeTarget_C_ShrinkDestroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.ExecuteUbergraph_BB_ChallengeTarget
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_C::ExecuteUbergraph_BB_ChallengeTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.ExecuteUbergraph_BB_ChallengeTarget");
		
		ABB_ChallengeTarget_C_ExecuteUbergraph_BB_ChallengeTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggeredHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_ChallengeTarget_C*                       NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_C::OnTriggeredHit__DelegateSignature(class ABB_ChallengeTarget_C* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget.BB_ChallengeTarget_C.OnTriggeredHit__DelegateSignature");
		
		ABB_ChallengeTarget_C_OnTriggeredHit__DelegateSignature_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_ChallengeTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_ChallengeTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_ChallengeTarget.BB_ChallengeTarget_C");
		return ptr;
	}

}


