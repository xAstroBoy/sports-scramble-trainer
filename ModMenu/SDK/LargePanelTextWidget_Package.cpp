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
	 * 		Name   -> PredefinedFunction ULargePanelTextWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULargePanelTextWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LargePanelTextWidget.LargePanelTextWidget_C");
		return ptr;
	}

}


