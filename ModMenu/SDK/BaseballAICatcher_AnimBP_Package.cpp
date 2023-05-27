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
	 * 		Name   -> Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_SequencePlayer_12CA6B9C426F4A3C210F1AA92AF7A800
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseballAICatcher_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_SequencePlayer_12CA6B9C426F4A3C210F1AA92AF7A800()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_SequencePlayer_12CA6B9C426F4A3C210F1AA92AF7A800");
		
		UBaseballAICatcher_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_SequencePlayer_12CA6B9C426F4A3C210F1AA92AF7A800_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_TransitionResult_7C0B1D244C2CB96DD63424A8145F14DB
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBaseballAICatcher_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_TransitionResult_7C0B1D244C2CB96DD63424A8145F14DB()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_TransitionResult_7C0B1D244C2CB96DD63424A8145F14DB");
		
		UBaseballAICatcher_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_TransitionResult_7C0B1D244C2CB96DD63424A8145F14DB_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.AnimNotify_ReturnToIdle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBaseballAICatcher_AnimBP_C::AnimNotify_ReturnToIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.AnimNotify_ReturnToIdle");
		
		UBaseballAICatcher_AnimBP_C_AnimNotify_ReturnToIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.ExecuteUbergraph_BaseballAICatcher_AnimBP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBaseballAICatcher_AnimBP_C::ExecuteUbergraph_BaseballAICatcher_AnimBP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C.ExecuteUbergraph_BaseballAICatcher_AnimBP");
		
		UBaseballAICatcher_AnimBP_C_ExecuteUbergraph_BaseballAICatcher_AnimBP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBaseballAICatcher_AnimBP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballAICatcher_AnimBP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C");
		return ptr;
	}

}


