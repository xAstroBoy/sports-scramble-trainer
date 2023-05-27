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
	 * 		Name   -> PredefinedFunction UBaseballBallScrambleDisplay_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseballBallScrambleDisplay_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BaseballBallScrambleDisplay_Widget.BaseballBallScrambleDisplay_Widget_C");
		return ptr;
	}

}


