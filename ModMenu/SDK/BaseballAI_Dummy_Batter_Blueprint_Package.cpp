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
	 * 		Name   -> Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABaseballAI_Dummy_Batter_Blueprint_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.UserConstructionScript");
		
		ABaseballAI_Dummy_Batter_Blueprint_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABaseballAI_Dummy_Batter_Blueprint_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveBeginPlay");
		
		ABaseballAI_Dummy_Batter_Blueprint_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAI_Dummy_Batter_Blueprint_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ReceiveEndPlay");
		
		ABaseballAI_Dummy_Batter_Blueprint_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABaseballAI_Dummy_Batter_Blueprint_C::ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C.ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint");
		
		ABaseballAI_Dummy_Batter_Blueprint_C_ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABaseballAI_Dummy_Batter_Blueprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABaseballAI_Dummy_Batter_Blueprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C");
		return ptr;
	}

}


