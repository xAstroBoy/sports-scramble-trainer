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
	 * 		Name   -> Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Blimp_Anim_A_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.UserConstructionScript");
		
		ATN_Blimp_Anim_A_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.Timeline_0__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Blimp_Anim_A_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.Timeline_0__FinishedFunc");
		
		ATN_Blimp_Anim_A_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.Timeline_0__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Blimp_Anim_A_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.Timeline_0__UpdateFunc");
		
		ATN_Blimp_Anim_A_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Blimp_Anim_A_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.ReceiveBeginPlay");
		
		ATN_Blimp_Anim_A_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.ExecuteUbergraph_TN_Blimp_Anim_A
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Blimp_Anim_A_C::ExecuteUbergraph_TN_Blimp_Anim_A(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Blimp_Anim_A.TN_Blimp_Anim_A_C.ExecuteUbergraph_TN_Blimp_Anim_A");
		
		ATN_Blimp_Anim_A_C_ExecuteUbergraph_TN_Blimp_Anim_A_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Blimp_Anim_A_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Blimp_Anim_A_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Blimp_Anim_A.TN_Blimp_Anim_A_C");
		return ptr;
	}

}


