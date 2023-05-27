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
	 * 		Name   -> Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UTennisArenaScoreboardWidget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.PreConstruct");
		
		UTennisArenaScoreboardWidget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.ExecuteUbergraph_TennisArenaScoreboardWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UTennisArenaScoreboardWidget_C::ExecuteUbergraph_TennisArenaScoreboardWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C.ExecuteUbergraph_TennisArenaScoreboardWidget");
		
		UTennisArenaScoreboardWidget_C_ExecuteUbergraph_TennisArenaScoreboardWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTennisArenaScoreboardWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisArenaScoreboardWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C");
		return ptr;
	}

}


