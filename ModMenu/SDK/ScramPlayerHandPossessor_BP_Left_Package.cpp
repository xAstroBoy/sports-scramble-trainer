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
	 * 		Name   -> PredefinedFunction AScramPlayerHandPossessor_BP_Left_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerHandPossessor_BP_Left_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerHandPossessor_BP_Left.ScramPlayerHandPossessor_BP_Left_C");
		return ptr;
	}

}


