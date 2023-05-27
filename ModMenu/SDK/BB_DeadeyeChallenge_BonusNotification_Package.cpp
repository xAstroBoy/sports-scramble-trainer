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
	 * 		Name   -> PredefinedFunction UBB_DeadeyeChallenge_BonusNotification_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBB_DeadeyeChallenge_BonusNotification_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BB_DeadeyeChallenge_BonusNotification.BB_DeadeyeChallenge_BonusNotification_C");
		return ptr;
	}

}


