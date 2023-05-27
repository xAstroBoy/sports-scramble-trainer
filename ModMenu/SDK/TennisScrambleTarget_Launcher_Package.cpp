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
	 * 		Name   -> PredefinedFunction ATennisScrambleTarget_Launcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisScrambleTarget_Launcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisScrambleTarget_Launcher.TennisScrambleTarget_Launcher_C");
		return ptr;
	}

}


