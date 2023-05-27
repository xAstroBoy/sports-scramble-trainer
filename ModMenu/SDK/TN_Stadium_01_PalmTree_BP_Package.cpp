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
	 * 		Name   -> Function TN_Stadium_01_PalmTree_BP.TN_Stadium_01_PalmTree_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Stadium_01_PalmTree_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Stadium_01_PalmTree_BP.TN_Stadium_01_PalmTree_BP_C.UserConstructionScript");
		
		ATN_Stadium_01_PalmTree_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Stadium_01_PalmTree_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Stadium_01_PalmTree_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Stadium_01_PalmTree_BP.TN_Stadium_01_PalmTree_BP_C");
		return ptr;
	}

}


