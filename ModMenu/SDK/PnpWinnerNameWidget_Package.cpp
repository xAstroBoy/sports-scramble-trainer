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
	 * 		Name   -> PredefinedFunction UPnpWinnerNameWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPnpWinnerNameWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PnpWinnerNameWidget.PnpWinnerNameWidget_C");
		return ptr;
	}

}


