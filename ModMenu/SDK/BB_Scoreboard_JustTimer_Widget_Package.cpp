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
	 * 		Name   -> Function BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBB_Scoreboard_JustTimer_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C.Construct");
		
		UBB_Scoreboard_JustTimer_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C.ExecuteUbergraph_BB_Scoreboard_JustTimer_Widget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBB_Scoreboard_JustTimer_Widget_C::ExecuteUbergraph_BB_Scoreboard_JustTimer_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C.ExecuteUbergraph_BB_Scoreboard_JustTimer_Widget");
		
		UBB_Scoreboard_JustTimer_Widget_C_ExecuteUbergraph_BB_Scoreboard_JustTimer_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBB_Scoreboard_JustTimer_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBB_Scoreboard_JustTimer_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BB_Scoreboard_JustTimer_Widget.BB_Scoreboard_JustTimer_Widget_C");
		return ptr;
	}

}


