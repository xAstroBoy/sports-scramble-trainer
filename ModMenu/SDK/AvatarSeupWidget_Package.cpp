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
	 * 		Name   -> PredefinedFunction UAvatarSeupWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAvatarSeupWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AvatarSeupWidget.AvatarSeupWidget_C");
		return ptr;
	}

}


