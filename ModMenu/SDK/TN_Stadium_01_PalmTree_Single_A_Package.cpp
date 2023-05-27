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
	 * 		Name   -> PredefinedFunction ATN_Stadium_01_PalmTree_Single_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Stadium_01_PalmTree_Single_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Stadium_01_PalmTree_Single_A.TN_Stadium_01_PalmTree_Single_A_C");
		return ptr;
	}

}


