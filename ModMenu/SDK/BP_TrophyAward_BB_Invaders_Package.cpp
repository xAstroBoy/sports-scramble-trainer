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
	 * 		Name   -> Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.SetRequirement
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            alienCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_BB_Invaders_C::SetRequirement(int32_t alienCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.SetRequirement");
		
		ABP_TrophyAward_BB_Invaders_C_SetRequirement_Params params {};
		params.alienCount = alienCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.AlienEliminated
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_BB_Invaders_C::AlienEliminated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.AlienEliminated");
		
		ABP_TrophyAward_BB_Invaders_C_AlienEliminated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.ResetCount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_BB_Invaders_C::ResetCount()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.ResetCount");
		
		ABP_TrophyAward_BB_Invaders_C_ResetCount_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_BB_Invaders_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C.UserConstructionScript");
		
		ABP_TrophyAward_BB_Invaders_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_BB_Invaders_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_BB_Invaders_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C");
		return ptr;
	}

}


