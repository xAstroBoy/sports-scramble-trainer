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
	 * 		Name   -> PredefinedFunction ABowlingAI_Normal_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingAI_Normal_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BowlingAI_Normal_Blueprint.BowlingAI_Normal_Blueprint_C");
		return ptr;
	}

}


