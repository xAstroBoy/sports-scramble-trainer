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
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.UserConstructionScript");
		
		ATN_Scoreboard_TennisBall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.Timeline_Scale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::Timeline_Scale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.Timeline_Scale__FinishedFunc");
		
		ATN_Scoreboard_TennisBall_C_Timeline_Scale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.Timeline_Scale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::Timeline_Scale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.Timeline_Scale__UpdateFunc");
		
		ATN_Scoreboard_TennisBall_C_Timeline_Scale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ReceiveBeginPlay");
		
		ATN_Scoreboard_TennisBall_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ScaleUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::ScaleUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ScaleUp");
		
		ATN_Scoreboard_TennisBall_C_ScaleUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ScaleDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::ScaleDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ScaleDown");
		
		ATN_Scoreboard_TennisBall_C_ScaleDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ExecuteUbergraph_TN_Scoreboard_TennisBall
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_Scoreboard_TennisBall_C::ExecuteUbergraph_TN_Scoreboard_TennisBall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ExecuteUbergraph_TN_Scoreboard_TennisBall");
		
		ATN_Scoreboard_TennisBall_C_ExecuteUbergraph_TN_Scoreboard_TennisBall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ScaleUpComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_Scoreboard_TennisBall_C::ScaleUpComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C.ScaleUpComplete__DelegateSignature");
		
		ATN_Scoreboard_TennisBall_C_ScaleUpComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_Scoreboard_TennisBall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_Scoreboard_TennisBall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_Scoreboard_TennisBall.TN_Scoreboard_TennisBall_C");
		return ptr;
	}

}


