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
	 * 		Name   -> PredefinedFunction UScramDataSingleton_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UScramDataSingleton_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramDataSingleton_BP.ScramDataSingleton_BP_C");
		return ptr;
	}

}


