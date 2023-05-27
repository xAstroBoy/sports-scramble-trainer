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
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.HideTargetScores
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::HideTargetScores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.HideTargetScores");
		
		ABB_BattingTarget_C_HideTargetScores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.HideAllTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::HideAllTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.HideAllTargets");
		
		ABB_BattingTarget_C_HideAllTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.SetAllTargetsUnbroken
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::SetAllTargetsUnbroken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.SetAllTargetsUnbroken");
		
		ABB_BattingTarget_C_SetAllTargetsUnbroken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.PickNewRandomTarget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::PickNewRandomTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.PickNewRandomTarget");
		
		ABB_BattingTarget_C_PickNewRandomTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Initialize");
		
		ABB_BattingTarget_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.UserConstructionScript");
		
		ABB_BattingTarget_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.ReceiveBeginPlay");
		
		ABB_BattingTarget_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Target_01_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::Target_01_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Target_01_Overlap");
		
		ABB_BattingTarget_C_Target_01_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Target_02_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::Target_02_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Target_02_Overlap");
		
		ABB_BattingTarget_C_Target_02_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Target_03_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::Target_03_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Target_03_Overlap");
		
		ABB_BattingTarget_C_Target_03_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Target_04_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::Target_04_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Target_04_Overlap");
		
		ABB_BattingTarget_C_Target_04_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Target_05_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::Target_05_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Target_05_Overlap");
		
		ABB_BattingTarget_C_Target_05_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.PickRandomTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::PickRandomTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.PickRandomTarget");
		
		ABB_BattingTarget_C_PickRandomTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Training_SpawnTarget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABatting_Target_01_C*                        BattingTarget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::Training_SpawnTarget(class ABatting_Target_01_C* BattingTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Training_SpawnTarget");
		
		ABB_BattingTarget_C_Training_SpawnTarget_Params params {};
		params.BattingTarget = BattingTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Training_DespawnTargets
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class ABatting_Target_01_C*>                TargetsToDespawn                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABB_BattingTarget_C::Training_DespawnTargets(TArray<class ABatting_Target_01_C*> TargetsToDespawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Training_DespawnTargets");
		
		ABB_BattingTarget_C_Training_DespawnTargets_Params params {};
		params.TargetsToDespawn = TargetsToDespawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Training_InitialTargetSetup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::Training_InitialTargetSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Training_InitialTargetSetup");
		
		ABB_BattingTarget_C_Training_InitialTargetSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Training_ToggleImpactSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               UseImpactSound                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_BattingTarget_C::Training_ToggleImpactSound(bool UseImpactSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Training_ToggleImpactSound");
		
		ABB_BattingTarget_C_Training_ToggleImpactSound_Params params {};
		params.UseImpactSound = UseImpactSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.Training_UnlimitiedBattingSetup
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::Training_UnlimitiedBattingSetup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.Training_UnlimitiedBattingSetup");
		
		ABB_BattingTarget_C_Training_UnlimitiedBattingSetup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.RemoveBattingTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::RemoveBattingTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.RemoveBattingTargets");
		
		ABB_BattingTarget_C_RemoveBattingTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.BindToTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::BindToTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.BindToTargets");
		
		ABB_BattingTarget_C_BindToTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.BindToTrainingTargets
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_BattingTarget_C::BindToTrainingTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.BindToTrainingTargets");
		
		ABB_BattingTarget_C_BindToTrainingTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_01_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::TrainingTarget_01_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_01_Overlap");
		
		ABB_BattingTarget_C_TrainingTarget_01_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_02_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::TrainingTarget_02_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_02_Overlap");
		
		ABB_BattingTarget_C_TrainingTarget_02_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_03_Overlap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::TrainingTarget_03_Overlap(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.TrainingTarget_03_Overlap");
		
		ABB_BattingTarget_C_TrainingTarget_03_Overlap_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.ExecuteUbergraph_BB_BattingTarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::ExecuteUbergraph_BB_BattingTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.ExecuteUbergraph_BB_BattingTarget");
		
		ABB_BattingTarget_C_ExecuteUbergraph_BB_BattingTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_BattingTarget.BB_BattingTarget_C.ScoreBatter__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TargetID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_BattingTarget_C::ScoreBatter__DelegateSignature(class AScramBall* Ball, int32_t TargetID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_BattingTarget.BB_BattingTarget_C.ScoreBatter__DelegateSignature");
		
		ABB_BattingTarget_C_ScoreBatter__DelegateSignature_Params params {};
		params.Ball = Ball;
		params.TargetID = TargetID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_BattingTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_BattingTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_BattingTarget.BB_BattingTarget_C");
		return ptr;
	}

}


