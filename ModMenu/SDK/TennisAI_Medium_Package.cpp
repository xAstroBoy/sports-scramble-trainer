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
	 * 		Name   -> PredefinedFunction ATennisAI_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisAI_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisAI_Medium.TennisAI_Medium_C");
		return ptr;
	}

}


