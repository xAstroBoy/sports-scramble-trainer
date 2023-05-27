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
	 * 		Name   -> PredefinedFunction UFriendListOfflineWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFriendListOfflineWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FriendListOfflineWidget.FriendListOfflineWidget_C");
		return ptr;
	}

}


