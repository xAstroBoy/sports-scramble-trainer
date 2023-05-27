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
	 * 		Name   -> PredefinedFunction ABW_CheeseWheel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_CheeseWheel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_CheeseWheel.BW_CheeseWheel_C");
		return ptr;
	}

}


