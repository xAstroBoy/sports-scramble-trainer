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
	 * 		Name   -> PredefinedFunction UButton_3dPanelImageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UButton_3dPanelImageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Button_3dPanelImageWidget.Button_3dPanelImageWidget_C");
		return ptr;
	}

}


