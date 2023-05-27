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
	 * 		Name   -> PredefinedFunction UPnpWinnerTitleWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPnpWinnerTitleWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PnpWinnerTitleWidget.PnpWinnerTitleWidget_C");
		return ptr;
	}

}


