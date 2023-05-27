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
	 * 		Name   -> PredefinedFunction UInfoScreenWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInfoScreenWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InfoScreenWidget.InfoScreenWidget_C");
		return ptr;
	}

}


