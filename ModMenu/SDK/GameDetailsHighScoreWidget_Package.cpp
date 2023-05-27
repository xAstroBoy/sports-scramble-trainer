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
	 * 		Name   -> PredefinedFunction UGameDetailsHighScoreWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGameDetailsHighScoreWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameDetailsHighScoreWidget.GameDetailsHighScoreWidget_C");
		return ptr;
	}

}


