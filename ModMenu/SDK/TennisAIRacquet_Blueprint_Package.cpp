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
	 * 		Name   -> Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAIRacquet_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.UserConstructionScript");
		
		ATennisAIRacquet_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayForehandSwingFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAIRacquet_Blueprint_C::PlayForehandSwingFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayForehandSwingFX");
		
		ATennisAIRacquet_Blueprint_C_PlayForehandSwingFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayHitFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATennisAIRacquet_Blueprint_C::PlayHitFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.PlayHitFX");
		
		ATennisAIRacquet_Blueprint_C_PlayHitFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.ExecuteUbergraph_TennisAIRacquet_Blueprint
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATennisAIRacquet_Blueprint_C::ExecuteUbergraph_TennisAIRacquet_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C.ExecuteUbergraph_TennisAIRacquet_Blueprint");
		
		ATennisAIRacquet_Blueprint_C_ExecuteUbergraph_TennisAIRacquet_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisAIRacquet_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisAIRacquet_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisAIRacquet_Blueprint.TennisAIRacquet_Blueprint_C");
		return ptr;
	}

}


