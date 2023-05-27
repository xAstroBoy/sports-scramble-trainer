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
	 * 		Name   -> PredefinedFunction UMessageProgressWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMessageProgressWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MessageProgressWidget.MessageProgressWidget_C");
		return ptr;
	}

}


