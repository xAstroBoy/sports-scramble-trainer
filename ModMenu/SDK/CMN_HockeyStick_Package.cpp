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
	 * 		Name   -> Function CMN_HockeyStick.CMN_HockeyStick_C.PlaySpawnFX
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACMN_HockeyStick_C::PlaySpawnFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.PlaySpawnFX");
		
		ACMN_HockeyStick_C_PlaySpawnFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_HockeyStick.CMN_HockeyStick_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACMN_HockeyStick_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.UserConstructionScript");
		
		ACMN_HockeyStick_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_HockeyStick.CMN_HockeyStick_C.SpawnEffect
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ACMN_HockeyStick_C::SpawnEffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.SpawnEffect");
		
		ACMN_HockeyStick_C_SpawnEffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function CMN_HockeyStick.CMN_HockeyStick_C.ExecuteUbergraph_CMN_HockeyStick
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACMN_HockeyStick_C::ExecuteUbergraph_CMN_HockeyStick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CMN_HockeyStick.CMN_HockeyStick_C.ExecuteUbergraph_CMN_HockeyStick");
		
		ACMN_HockeyStick_C_ExecuteUbergraph_CMN_HockeyStick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACMN_HockeyStick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACMN_HockeyStick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CMN_HockeyStick.CMN_HockeyStick_C");
		return ptr;
	}

}


