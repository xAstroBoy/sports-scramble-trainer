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
	 * 		Name   -> PredefinedFunction UHub_MenuButtonWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHub_MenuButtonWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Hub_MenuButtonWidget.Hub_MenuButtonWidget_C");
		return ptr;
	}

}


