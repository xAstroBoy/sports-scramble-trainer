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
	 * 		Name   -> Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.PlayDefaultMovie
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Playing                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_VideoBoard_Stadium_C::PlayDefaultMovie(bool* Playing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.PlayDefaultMovie");
		
		ABW_VideoBoard_Stadium_C_PlayDefaultMovie_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Playing != nullptr)
			*Playing = params.Playing;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_VideoBoard_Stadium_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C.UserConstructionScript");
		
		ABW_VideoBoard_Stadium_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_VideoBoard_Stadium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_VideoBoard_Stadium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_VideoBoard_Stadium.BW_VideoBoard_Stadium_C");
		return ptr;
	}

}


