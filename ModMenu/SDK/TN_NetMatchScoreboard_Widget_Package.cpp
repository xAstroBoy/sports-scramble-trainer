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
	 * 		Name   -> PredefinedFunction UTN_NetMatchScoreboard_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTN_NetMatchScoreboard_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TN_NetMatchScoreboard_Widget.TN_NetMatchScoreboard_Widget_C");
		return ptr;
	}

}


