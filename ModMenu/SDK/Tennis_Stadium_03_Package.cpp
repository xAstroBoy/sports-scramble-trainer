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
	 * 		Name   -> PredefinedFunction ATennis_Stadium_03_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennis_Stadium_03_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Tennis_Stadium_03.Tennis_Stadium_03_C");
		return ptr;
	}

}


