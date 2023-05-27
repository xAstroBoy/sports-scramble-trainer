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
	 * 		Name   -> Function SkeeBallLane.SkeeBallLane_C.CallClearPatternAndResolve
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               PatternCleared                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkeeBallLane_C::CallClearPatternAndResolve(bool* PatternCleared)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkeeBallLane.SkeeBallLane_C.CallClearPatternAndResolve");
		
		USkeeBallLane_C_CallClearPatternAndResolve_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PatternCleared != nullptr)
			*PatternCleared = params.PatternCleared;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SkeeBallLane.SkeeBallLane_C.UpdateGoodHoleCount
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewGoodHoleCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HoleCountUpdated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkeeBallLane_C::UpdateGoodHoleCount(int32_t NewGoodHoleCount, bool* HoleCountUpdated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkeeBallLane.SkeeBallLane_C.UpdateGoodHoleCount");
		
		USkeeBallLane_C_UpdateGoodHoleCount_Params params {};
		params.NewGoodHoleCount = NewGoodHoleCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HoleCountUpdated != nullptr)
			*HoleCountUpdated = params.HoleCountUpdated;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function SkeeBallLane.SkeeBallLane_C.ShowScoreboard
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ScoreboardRaised                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USkeeBallLane_C::ShowScoreboard(bool* ScoreboardRaised)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SkeeBallLane.SkeeBallLane_C.ShowScoreboard");
		
		USkeeBallLane_C_ShowScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreboardRaised != nullptr)
			*ScoreboardRaised = params.ScoreboardRaised;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USkeeBallLane_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USkeeBallLane_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass SkeeBallLane.SkeeBallLane_C");
		return ptr;
	}

}


