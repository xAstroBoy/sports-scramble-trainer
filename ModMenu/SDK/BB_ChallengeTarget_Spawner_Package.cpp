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
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.RemoveTargets
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_Spawner_C::RemoveTargets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.RemoveTargets");
		
		ABB_ChallengeTarget_Spawner_C_RemoveTargets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.SpawnTargets
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PatternIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bonus                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            ScoreValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_Spawner_C::SpawnTargets(int32_t PatternIndex, bool bonus, int32_t ScoreValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.SpawnTargets");
		
		ABB_ChallengeTarget_Spawner_C_SpawnTargets_Params params {};
		params.PatternIndex = PatternIndex;
		params.bonus = bonus;
		params.ScoreValue = ScoreValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_Spawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.UserConstructionScript");
		
		ABB_ChallengeTarget_Spawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.Score Target
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABB_ChallengeTarget_C*                       Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_Spawner_C::ScoreTarget(class ABB_ChallengeTarget_C* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.Score Target");
		
		ABB_ChallengeTarget_Spawner_C_ScoreTarget_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_Spawner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveEndPlay");
		
		ABB_ChallengeTarget_Spawner_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABB_ChallengeTarget_Spawner_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ReceiveBeginPlay");
		
		ABB_ChallengeTarget_Spawner_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ExecuteUbergraph_BB_ChallengeTarget_Spawner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_ChallengeTarget_Spawner_C::ExecuteUbergraph_BB_ChallengeTarget_Spawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ExecuteUbergraph_BB_ChallengeTarget_Spawner");
		
		ABB_ChallengeTarget_Spawner_C_ExecuteUbergraph_BB_ChallengeTarget_Spawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.GroupCleared__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               BonusGroup                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_ChallengeTarget_Spawner_C::GroupCleared__DelegateSignature(bool BonusGroup)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.GroupCleared__DelegateSignature");
		
		ABB_ChallengeTarget_Spawner_C_GroupCleared__DelegateSignature_Params params {};
		params.BonusGroup = BonusGroup;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ScoreATarget__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABB_ChallengeTarget_Spawner_C::ScoreATarget__DelegateSignature(bool IsBonus)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C.ScoreATarget__DelegateSignature");
		
		ABB_ChallengeTarget_Spawner_C_ScoreATarget__DelegateSignature_Params params {};
		params.IsBonus = IsBonus;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_ChallengeTarget_Spawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_ChallengeTarget_Spawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_ChallengeTarget_Spawner.BB_ChallengeTarget_Spawner_C");
		return ptr;
	}

}


