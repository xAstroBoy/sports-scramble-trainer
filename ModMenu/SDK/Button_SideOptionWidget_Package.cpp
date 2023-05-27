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
	 * 		Name   -> PredefinedFunction UButton_SideOptionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton_SideOptionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_SideOptionWidget.Button_SideOptionWidget_C");
		return ptr;
	}

}


