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
	 * 		Name   -> PredefinedFunction UTennisScrambleWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTennisScrambleWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TennisScrambleWidget.TennisScrambleWidget_C");
		return ptr;
	}

}


