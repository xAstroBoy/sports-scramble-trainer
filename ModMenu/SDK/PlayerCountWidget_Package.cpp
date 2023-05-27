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
	 * 		Name   -> PredefinedFunction UPlayerCountWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerCountWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerCountWidget.PlayerCountWidget_C");
		return ptr;
	}

}


