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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBW_ScoreCardBackground_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBW_ScoreCardBackground_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BW_ScoreCardBackground_Widget.BW_ScoreCardBackground_Widget_C");
		return ptr;
	}

}


