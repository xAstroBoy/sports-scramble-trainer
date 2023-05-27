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
	 * 		Name   -> PredefinedFunction UChooseSportsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChooseSportsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChooseSportsWidget.ChooseSportsWidget_C");
		return ptr;
	}

}


