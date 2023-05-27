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
	 * 		Name   -> PredefinedFunction ABB_Trail_Normal_SmallGlow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Trail_Normal_SmallGlow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Trail_Normal_SmallGlow.BB_Trail_Normal_SmallGlow_C");
		return ptr;
	}

}


