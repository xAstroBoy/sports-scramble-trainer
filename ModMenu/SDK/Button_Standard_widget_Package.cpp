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
	 * 		Name   -> PredefinedFunction UButton_Standard_widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton_Standard_widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_Standard_widget.Button_Standard_widget_C");
		return ptr;
	}

}


