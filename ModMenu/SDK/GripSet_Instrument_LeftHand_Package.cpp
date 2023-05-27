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
	 * 		Name   -> PredefinedFunction AGripSet_Instrument_LeftHand_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGripSet_Instrument_LeftHand_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GripSet_Instrument_LeftHand.GripSet_Instrument_LeftHand_C");
		return ptr;
	}

}


