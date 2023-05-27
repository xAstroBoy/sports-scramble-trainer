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
	 * 		Name   -> PredefinedFunction ATennisAI_Easy_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisAI_Easy_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisAI_Easy.TennisAI_Easy_C");
		return ptr;
	}

}


