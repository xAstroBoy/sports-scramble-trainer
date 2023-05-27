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
	 * 		Name   -> PredefinedFunction ABB_PitchingPropManager_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_PitchingPropManager_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_PitchingPropManager.BB_PitchingPropManager_C");
		return ptr;
	}

}


