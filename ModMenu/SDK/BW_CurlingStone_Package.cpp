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
	 * 		Name   -> PredefinedFunction ABW_CurlingStone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_CurlingStone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_CurlingStone.BW_CurlingStone_C");
		return ptr;
	}

}


