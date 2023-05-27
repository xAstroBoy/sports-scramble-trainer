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
	 * 		Name   -> PredefinedFunction ABW_Trail_Hook_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Trail_Hook_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Trail_Hook.BW_Trail_Hook_C");
		return ptr;
	}

}


