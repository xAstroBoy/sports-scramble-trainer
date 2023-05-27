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
	 * 		Name   -> PredefinedFunction AFlyTextLabel_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AFlyTextLabel_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass FlyTextLabel_Blueprint.FlyTextLabel_Blueprint_C");
		return ptr;
	}

}


