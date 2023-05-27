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
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABB_StadiumWindowSpawner_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.UserConstructionScript");
		
		ABB_StadiumWindowSpawner_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ActivateBreakables
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_StadiumWindowSpawner_C::ActivateBreakables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ActivateBreakables");
		
		ABB_StadiumWindowSpawner_C_ActivateBreakables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ResetBreakables
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_StadiumWindowSpawner_C::ResetBreakables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ResetBreakables");
		
		ABB_StadiumWindowSpawner_C_ResetBreakables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.CleanUpAllBreakables
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABB_StadiumWindowSpawner_C::CleanUpAllBreakables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.CleanUpAllBreakables");
		
		ABB_StadiumWindowSpawner_C_CleanUpAllBreakables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_StadiumWindowSpawner_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ReceiveEndPlay");
		
		ABB_StadiumWindowSpawner_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.SetBreakableScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            WindowScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            LightFixtureScore                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_StadiumWindowSpawner_C::SetBreakableScore(int32_t WindowScore, int32_t LightFixtureScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.SetBreakableScore");
		
		ABB_StadiumWindowSpawner_C_SetBreakableScore_Params params {};
		params.WindowScore = WindowScore;
		params.LightFixtureScore = LightFixtureScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ExecuteUbergraph_BB_StadiumWindowSpawner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABB_StadiumWindowSpawner_C::ExecuteUbergraph_BB_StadiumWindowSpawner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C.ExecuteUbergraph_BB_StadiumWindowSpawner");
		
		ABB_StadiumWindowSpawner_C_ExecuteUbergraph_BB_StadiumWindowSpawner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABB_StadiumWindowSpawner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_StadiumWindowSpawner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_StadiumWindowSpawner.BB_StadiumWindowSpawner_C");
		return ptr;
	}

}


