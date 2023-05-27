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
	 * 		Name   -> PredefinedFunction ABaseballAIPitcher_Easy_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAIPitcher_Easy_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAIPitcher_Easy_Blueprint.BaseballAIPitcher_Easy_Blueprint_C");
		return ptr;
	}

}


