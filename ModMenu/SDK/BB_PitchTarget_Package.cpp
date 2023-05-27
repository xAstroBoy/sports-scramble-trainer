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
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.HideAvatar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::HideAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.HideAvatar");
		
		ABB_PitchTarget_C_HideAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.SetAllTargetsUnbroken
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::SetAllTargetsUnbroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.SetAllTargetsUnbroken");
		
		ABB_PitchTarget_C_SetAllTargetsUnbroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.DisableTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::DisableTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.DisableTargets");
		
		ABB_PitchTarget_C_DisableTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.SetTargetVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::SetTargetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.SetTargetVisibility");
		
		ABB_PitchTarget_C_SetTargetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.PickNewRandomTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::PickNewRandomTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.PickNewRandomTarget");
		
		ABB_PitchTarget_C_PickNewRandomTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ResetTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::ResetTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ResetTargets");
		
		ABB_PitchTarget_C_ResetTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ValidateTargets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APitching_Target_02_C*                       TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Validation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_PitchTarget_C::ValidateTargets(class APitching_Target_02_C* TargetActor, bool* Validation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ValidateTargets");
		
		ABB_PitchTarget_C_ValidateTargets_Params params {};
		params.TargetActor = TargetActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Validation != nullptr)
			*Validation = params.Validation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Initialize");
		
		ABB_PitchTarget_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ShowDebugText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      String                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_PitchTarget_C::ShowDebugText(const class FString& String, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ShowDebugText");
		
		ABB_PitchTarget_C_ShowDebugText_Params params {};
		params.String = String;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.MaintainTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::MaintainTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.MaintainTargets");
		
		ABB_PitchTarget_C_MaintainTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.UserConstructionScript");
		
		ABB_PitchTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ReceiveBeginPlay");
		
		ABB_PitchTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ResetAllTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::ResetAllTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ResetAllTargets");
		
		ABB_PitchTarget_C_ResetAllTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.Target_5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::Target_5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_5");
		
		ABB_PitchTarget_C_Target_5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.Target_4
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::Target_4()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_4");
		
		ABB_PitchTarget_C_Target_4_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.Target_2
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::Target_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_2");
		
		ABB_PitchTarget_C_Target_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ResetDoubleHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::ResetDoubleHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ResetDoubleHit");
		
		ABB_PitchTarget_C_ResetDoubleHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.Target_3
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::Target_3()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.Target_3");
		
		ABB_PitchTarget_C_Target_3_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.PickRandomTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::PickRandomTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.PickRandomTarget");
		
		ABB_PitchTarget_C_PickRandomTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.SpawnInitialRandomTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::SpawnInitialRandomTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.SpawnInitialRandomTarget");
		
		ABB_PitchTarget_C_SpawnInitialRandomTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ShrinkAndPickNewTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::ShrinkAndPickNewTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ShrinkAndPickNewTarget");
		
		ABB_PitchTarget_C_ShrinkAndPickNewTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.ExecuteUbergraph_BB_PitchTarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_PitchTarget_C::ExecuteUbergraph_BB_PitchTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.ExecuteUbergraph_BB_PitchTarget");
		
		ABB_PitchTarget_C_ExecuteUbergraph_BB_PitchTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.TargetHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_PitchTarget_C::TargetHit__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.TargetHit__DelegateSignature");
		
		ABB_PitchTarget_C_TargetHit__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_PitchTarget.BB_PitchTarget_C.UpdateScoreboardScore__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ScoreAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_PitchTarget_C::UpdateScoreboardScore__DelegateSignature(int32_t ScoreAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_PitchTarget.BB_PitchTarget_C.UpdateScoreboardScore__DelegateSignature");
		
		ABB_PitchTarget_C_UpdateScoreboardScore__DelegateSignature_Params params {};
		params.ScoreAmount = ScoreAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_PitchTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_PitchTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_PitchTarget.BB_PitchTarget_C");
		return ptr;
	}

}


