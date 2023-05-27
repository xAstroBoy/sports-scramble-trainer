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
	 * 		Name   -> PredefinedFunction ABB_Challenge_06_3rdBase_Helper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABB_Challenge_06_3rdBase_Helper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BB_Challenge_06_3rdBase_Helper.BB_Challenge_06_3rdBase_Helper_C");
		return ptr;
	}

}


