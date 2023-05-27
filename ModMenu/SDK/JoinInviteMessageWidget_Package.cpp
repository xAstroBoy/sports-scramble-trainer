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
	 * 		Name   -> PredefinedFunction UJoinInviteMessageWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UJoinInviteMessageWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass JoinInviteMessageWidget.JoinInviteMessageWidget_C");
		return ptr;
	}

}


