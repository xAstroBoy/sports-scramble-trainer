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
	 * 		Name   -> Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_BW_Kingpin_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.UserConstructionScript");
		
		ABP_TrophyAward_BW_Kingpin_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.OnStrike
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_BW_Kingpin_C::OnStrike(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.OnStrike");
		
		ABP_TrophyAward_BW_Kingpin_C_OnStrike_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.ExecuteUbergraph_BP_TrophyAward_BW_Kingpin
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_BW_Kingpin_C::ExecuteUbergraph_BP_TrophyAward_BW_Kingpin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C.ExecuteUbergraph_BP_TrophyAward_BW_Kingpin");
		
		ABP_TrophyAward_BW_Kingpin_C_ExecuteUbergraph_BP_TrophyAward_BW_Kingpin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_BW_Kingpin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_BW_Kingpin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_BW_Kingpin.BP_TrophyAward_BW_Kingpin_C");
		return ptr;
	}

}


