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
	 * 		Name   -> PredefinedFunction USportOptionsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USportOptionsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SportOptionsWidget.SportOptionsWidget_C");
		return ptr;
	}

}


