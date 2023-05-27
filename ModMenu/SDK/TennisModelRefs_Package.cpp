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
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisModelRefs.TennisModelRefs_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisModelRefs_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisModelRefs.TennisModelRefs_C.UserConstructionScript");
		
		ATennisModelRefs_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisModelRefs_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisModelRefs_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisModelRefs.TennisModelRefs_C");
		return ptr;
	}

}


