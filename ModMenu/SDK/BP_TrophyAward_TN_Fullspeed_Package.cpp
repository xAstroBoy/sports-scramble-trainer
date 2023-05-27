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
	 * 		Name   -> Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TN_Fullspeed_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.UserConstructionScript");
		
		ABP_TrophyAward_TN_Fullspeed_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.DebugEarn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TN_Fullspeed_C::DebugEarn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.DebugEarn");
		
		ABP_TrophyAward_TN_Fullspeed_C_DebugEarn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.OnHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisBall*                                 TennisBall                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATN_Instrument_Base_C*                       Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETennisBallType                                    BallType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TN_Fullspeed_C::OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, ETennisBallType BallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.OnHit");
		
		ABP_TrophyAward_TN_Fullspeed_C_OnHit_Params params {};
		params.TennisBall = TennisBall;
		params.Instrument = Instrument;
		params.BallType = BallType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.ExecuteUbergraph_BP_TrophyAward_TN_Fullspeed
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TN_Fullspeed_C::ExecuteUbergraph_BP_TrophyAward_TN_Fullspeed(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C.ExecuteUbergraph_BP_TrophyAward_TN_Fullspeed");
		
		ABP_TrophyAward_TN_Fullspeed_C_ExecuteUbergraph_BP_TrophyAward_TN_Fullspeed_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_TN_Fullspeed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_TN_Fullspeed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_TN_Fullspeed.BP_TrophyAward_TN_Fullspeed_C");
		return ptr;
	}

}


