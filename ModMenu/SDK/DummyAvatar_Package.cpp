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
	 * 		Name   -> Function DummyAvatar.DummyAvatar_C.SetLook
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FAvatarLook                                 AvatarLook                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ADummyAvatar_C::SetLook(const struct FAvatarLook& AvatarLook)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.SetLook");
		
		ADummyAvatar_C_SetLook_Params params {};
		params.AvatarLook = AvatarLook;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DummyAvatar.DummyAvatar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ADummyAvatar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.UserConstructionScript");
		
		ADummyAvatar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DummyAvatar.DummyAvatar_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ADummyAvatar_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.ReceiveBeginPlay");
		
		ADummyAvatar_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function DummyAvatar.DummyAvatar_C.ExecuteUbergraph_DummyAvatar
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADummyAvatar_C::ExecuteUbergraph_DummyAvatar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DummyAvatar.DummyAvatar_C.ExecuteUbergraph_DummyAvatar");
		
		ADummyAvatar_C_ExecuteUbergraph_DummyAvatar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADummyAvatar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADummyAvatar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass DummyAvatar.DummyAvatar_C");
		return ptr;
	}

}


