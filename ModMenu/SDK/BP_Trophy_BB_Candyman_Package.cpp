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
	 * 		Name   -> Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_Candyman_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.UserConstructionScript");
		
		ABP_Trophy_BB_Candyman_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.OnHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABaseballBall*                               Baseball                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABB_Instrument_Base_C*                       Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBaseballBallType                                  BallType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_Candyman_C::OnHit(class ABaseballBall* Baseball, class ABB_Instrument_Base_C* Instrument, EBaseballBallType BallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.OnHit");
		
		ABP_Trophy_BB_Candyman_C_OnHit_Params params {};
		params.Baseball = Baseball;
		params.Instrument = Instrument;
		params.BallType = BallType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.DebugEarn
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_Trophy_BB_Candyman_C::DebugEarn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.DebugEarn");
		
		ABP_Trophy_BB_Candyman_C_DebugEarn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.ExecuteUbergraph_BP_Trophy_BB_Candyman
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Trophy_BB_Candyman_C::ExecuteUbergraph_BP_Trophy_BB_Candyman(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C.ExecuteUbergraph_BP_Trophy_BB_Candyman");
		
		ABP_Trophy_BB_Candyman_C_ExecuteUbergraph_BP_Trophy_BB_Candyman_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Trophy_BB_Candyman_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Trophy_BB_Candyman_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Trophy_BB_Candyman.BP_Trophy_BB_Candyman_C");
		return ptr;
	}

}


