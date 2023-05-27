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
	 * 		Name   -> PredefinedFunction UTrophyAwardedInfoWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrophyAwardedInfoWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrophyAwardedInfoWidget.TrophyAwardedInfoWidget_C");
		return ptr;
	}

}


