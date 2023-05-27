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
	 * 		Name   -> PredefinedFunction ACMN_Trail_DoubleCross_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACMN_Trail_DoubleCross_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CMN_Trail_DoubleCross.CMN_Trail_DoubleCross_C");
		return ptr;
	}

}


