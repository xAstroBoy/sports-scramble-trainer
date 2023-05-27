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
	 * 		Name   -> Function BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C.ShowRoll
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingRoll                                Roll                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		EBowlingRollResult                                 PriorRollResult                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBW_ScoreCardRoll_Widget_C::ShowRoll(const struct FBowlingRoll& Roll, EBowlingRollResult PriorRollResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C.ShowRoll");
		
		UBW_ScoreCardRoll_Widget_C_ShowRoll_Params params {};
		params.Roll = Roll;
		params.PriorRollResult = PriorRollResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBW_ScoreCardRoll_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBW_ScoreCardRoll_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BW_ScoreCardRoll_Widget.BW_ScoreCardRoll_Widget_C");
		return ptr;
	}

}


