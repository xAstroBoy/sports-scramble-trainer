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
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerBoundary_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UserConstructionScript");
		
		AScramPlayerBoundary_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupSmallPlayArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerBoundary_BP_C::OCDemo_SetupSmallPlayArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupSmallPlayArea");
		
		AScramPlayerBoundary_BP_C_OCDemo_SetupSmallPlayArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupLargePlayArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerBoundary_BP_C::OCDemo_SetupLargePlayArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.OCDemo_SetupLargePlayArea");
		
		AScramPlayerBoundary_BP_C_OCDemo_SetupLargePlayArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramPlayerBoundary_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveBeginPlay");
		
		AScramPlayerBoundary_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.HideBoundary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerBoundary_BP_C::HideBoundary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.HideBoundary");
		
		AScramPlayerBoundary_BP_C_HideBoundary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UnhideBoundary
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerBoundary_BP_C::UnhideBoundary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.UnhideBoundary");
		
		AScramPlayerBoundary_BP_C_UnhideBoundary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerBoundary_BP_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ReceiveTick");
		
		AScramPlayerBoundary_BP_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ExecuteUbergraph_ScramPlayerBoundary_BP
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerBoundary_BP_C::ExecuteUbergraph_ScramPlayerBoundary_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C.ExecuteUbergraph_ScramPlayerBoundary_BP");
		
		AScramPlayerBoundary_BP_C_ExecuteUbergraph_ScramPlayerBoundary_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerBoundary_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerBoundary_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C");
		return ptr;
	}

}


