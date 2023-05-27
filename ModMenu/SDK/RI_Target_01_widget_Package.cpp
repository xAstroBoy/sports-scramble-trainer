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
	 * 		Name   -> PredefinedFunction URI_Target_01_widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URI_Target_01_widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RI_Target_01_widget.RI_Target_01_widget_C");
		return ptr;
	}

}


