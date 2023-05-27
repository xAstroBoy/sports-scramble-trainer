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
	 * 		Name   -> Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_Right_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.UserConstructionScript");
		
		AScramPlayerHand_BP_Right_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramPlayerHand_BP_Right_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ReceiveBeginPlay");
		
		AScramPlayerHand_BP_Right_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ExecuteUbergraph_ScramPlayerHand_BP_Right
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerHand_BP_Right_C::ExecuteUbergraph_ScramPlayerHand_BP_Right(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C.ExecuteUbergraph_ScramPlayerHand_BP_Right");
		
		AScramPlayerHand_BP_Right_C_ExecuteUbergraph_ScramPlayerHand_BP_Right_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerHand_BP_Right_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerHand_BP_Right_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C");
		return ptr;
	}

}


