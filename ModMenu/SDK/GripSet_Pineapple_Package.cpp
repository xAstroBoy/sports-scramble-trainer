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
	 * 		Name   -> PredefinedFunction AGripSet_Pineapple_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGripSet_Pineapple_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GripSet_Pineapple.GripSet_Pineapple_C");
		return ptr;
	}

}


