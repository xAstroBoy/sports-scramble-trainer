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
	 * 		Name   -> PredefinedFunction UButton_TextOptionWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton_TextOptionWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_TextOptionWidget.Button_TextOptionWidget_C");
		return ptr;
	}

}


