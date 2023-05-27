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
	 * 		Name   -> PredefinedFunction UTrainingOptionsWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTrainingOptionsWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TrainingOptionsWidget.TrainingOptionsWidget_C");
		return ptr;
	}

}


