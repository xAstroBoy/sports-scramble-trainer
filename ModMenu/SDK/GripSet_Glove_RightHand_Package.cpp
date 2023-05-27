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
	 * 		Name   -> PredefinedFunction AGripSet_Glove_RightHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGripSet_Glove_RightHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GripSet_Glove_RightHand.GripSet_Glove_RightHand_C");
		return ptr;
	}

}


