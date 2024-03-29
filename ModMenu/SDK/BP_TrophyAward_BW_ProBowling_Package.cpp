﻿/**
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
	 * 		Name   -> Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_BW_ProBowling_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.UserConstructionScript");
		
		ABP_TrophyAward_BW_ProBowling_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.OnGameEnd
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_BW_ProBowling_C::OnGameEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.OnGameEnd");
		
		ABP_TrophyAward_BW_ProBowling_C_OnGameEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.ExecuteUbergraph_BP_TrophyAward_BW_ProBowling
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_BW_ProBowling_C::ExecuteUbergraph_BP_TrophyAward_BW_ProBowling(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C.ExecuteUbergraph_BP_TrophyAward_BW_ProBowling");
		
		ABP_TrophyAward_BW_ProBowling_C_ExecuteUbergraph_BP_TrophyAward_BW_ProBowling_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_BW_ProBowling_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_BW_ProBowling_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BW_ProBowling.BP_TrophyAward_BW_ProBowling_C");
		return ptr;
	}

}


