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
	 * 		Name   -> PredefinedFunction ATennisAI_Impossible_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisAI_Impossible_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisAI_Impossible.TennisAI_Impossible_C");
		return ptr;
	}

}


