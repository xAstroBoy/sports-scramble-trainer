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
	 * 		Name   -> PredefinedFunction UButtonIconWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButtonIconWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ButtonIconWidget.ButtonIconWidget_C");
		return ptr;
	}

}


