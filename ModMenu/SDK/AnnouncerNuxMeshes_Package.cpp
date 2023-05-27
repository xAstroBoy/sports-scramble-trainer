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
	 * 		Name   -> Function AnnouncerNuxMeshes.AnnouncerNuxMeshes_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AAnnouncerNuxMeshes_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AnnouncerNuxMeshes.AnnouncerNuxMeshes_C.UserConstructionScript");
		
		AAnnouncerNuxMeshes_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AAnnouncerNuxMeshes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AAnnouncerNuxMeshes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AnnouncerNuxMeshes.AnnouncerNuxMeshes_C");
		return ptr;
	}

}


