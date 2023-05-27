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
	 * 		Name   -> PredefinedFunction AAvatar_Spawn_Emitter_Actor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAvatar_Spawn_Emitter_Actor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Avatar_Spawn_Emitter_Actor.Avatar_Spawn_Emitter_Actor_C");
		return ptr;
	}

}


