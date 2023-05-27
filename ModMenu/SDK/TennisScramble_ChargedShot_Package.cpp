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
	 * 		Name   -> Function TennisScramble_ChargedShot.TennisScramble_ChargedShot_C.GetNewBallType
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* ATennisScramble_ChargedShot_C::GetNewBallType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScramble_ChargedShot.TennisScramble_ChargedShot_C.GetNewBallType");
		
		ATennisScramble_ChargedShot_C_GetNewBallType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TennisScramble_ChargedShot.TennisScramble_ChargedShot_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATennisScramble_ChargedShot_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TennisScramble_ChargedShot.TennisScramble_ChargedShot_C.UserConstructionScript");
		
		ATennisScramble_ChargedShot_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATennisScramble_ChargedShot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATennisScramble_ChargedShot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TennisScramble_ChargedShot.TennisScramble_ChargedShot_C");
		return ptr;
	}

}


