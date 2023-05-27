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
	 * 		Name   -> Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.AnimNotify_AvatarEnteredLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDummyAvatarAnimBp_C::AnimNotify_AvatarEnteredLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.AnimNotify_AvatarEnteredLoop");
		
		UDummyAvatarAnimBp_C_AnimNotify_AvatarEnteredLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.PlayLook
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UDummyAvatarAnimBp_C::PlayLook()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.PlayLook");
		
		UDummyAvatarAnimBp_C_PlayLook_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.ExecuteUbergraph_DummyAvatarAnimBp
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UDummyAvatarAnimBp_C::ExecuteUbergraph_DummyAvatarAnimBp(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatarAnimBp.DummyAvatarAnimBp_C.ExecuteUbergraph_DummyAvatarAnimBp");
		
		UDummyAvatarAnimBp_C_ExecuteUbergraph_DummyAvatarAnimBp_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDummyAvatarAnimBp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDummyAvatarAnimBp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass DummyAvatarAnimBp.DummyAvatarAnimBp_C");
		return ptr;
	}

}


