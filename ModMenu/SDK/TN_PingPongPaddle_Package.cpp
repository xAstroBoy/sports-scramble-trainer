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
	 * 		Name   -> PredefinedFunction ATN_PingPongPaddle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_PingPongPaddle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_PingPongPaddle.TN_PingPongPaddle_C");
		return ptr;
	}

}


