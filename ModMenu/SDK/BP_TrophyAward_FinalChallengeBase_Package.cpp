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
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Restore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::Restore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Restore");
		
		ABP_TrophyAward_FinalChallengeBase_C_Restore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.IsNewCompletion
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        GameID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsValid                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::IsNewCompletion(const class FName& GameID, bool* IsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.IsNewCompletion");
		
		ABP_TrophyAward_FinalChallengeBase_C_IsNewCompletion_Params params {};
		params.GameID = GameID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsValid != nullptr)
			*IsValid = params.IsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.GetCompletionCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            CompletedCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::GetCompletionCount(int32_t* CompletedCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.GetCompletionCount");
		
		ABP_TrophyAward_FinalChallengeBase_C_GetCompletionCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CompletedCount != nullptr)
			*CompletedCount = params.CompletedCount;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.RefreshGameProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::RefreshGameProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.RefreshGameProgress");
		
		ABP_TrophyAward_FinalChallengeBase_C_RefreshGameProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnChallengeCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        ChallengeID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::OnChallengeCompleted(const class FName& ChallengeID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnChallengeCompleted");
		
		ABP_TrophyAward_FinalChallengeBase_C_OnChallengeCompleted_Params params {};
		params.ChallengeID = ChallengeID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UpdateChallengeProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::UpdateChallengeProgress()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UpdateChallengeProgress");
		
		ABP_TrophyAward_FinalChallengeBase_C_UpdateChallengeProgress_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.UserConstructionScript");
		
		ABP_TrophyAward_FinalChallengeBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.DebugEarn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::DebugEarn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.DebugEarn");
		
		ABP_TrophyAward_FinalChallengeBase_C_DebugEarn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnTrophyEarned
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::OnTrophyEarned()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.OnTrophyEarned");
		
		ABP_TrophyAward_FinalChallengeBase_C_OnTrophyEarned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ReceiveBeginPlay");
		
		ABP_TrophyAward_FinalChallengeBase_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.Initialize");
		
		ABP_TrophyAward_FinalChallengeBase_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_FinalChallengeBase_C::ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C.ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase");
		
		ABP_TrophyAward_FinalChallengeBase_C_ExecuteUbergraph_BP_TrophyAward_FinalChallengeBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_FinalChallengeBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_FinalChallengeBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_FinalChallengeBase.BP_TrophyAward_FinalChallengeBase_C");
		return ptr;
	}

}


