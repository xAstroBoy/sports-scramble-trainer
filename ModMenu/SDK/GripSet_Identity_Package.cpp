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
	 * 		Name   -> PredefinedFunction AGripSet_Identity_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGripSet_Identity_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GripSet_Identity.GripSet_Identity_C");
		return ptr;
	}

}


