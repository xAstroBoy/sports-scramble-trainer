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
	 * 		Name   -> Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnHit
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATennisBall*                                 TennisBall                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ATN_Instrument_Base_C*                       Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETennisBallType                                    BallType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_Tennis_InstrumentHitBase_C::OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, ETennisBallType BallType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnHit");
		
		ABP_TrophyAward_Tennis_InstrumentHitBase_C_OnHit_Params params {};
		params.TennisBall = TennisBall;
		params.Instrument = Instrument;
		params.BallType = BallType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_Tennis_InstrumentHitBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.UserConstructionScript");
		
		ABP_TrophyAward_Tennis_InstrumentHitBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnInstrumentHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_Tennis_InstrumentHitBase_C::OnInstrumentHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.OnInstrumentHit");
		
		ABP_TrophyAward_Tennis_InstrumentHitBase_C_OnInstrumentHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_Tennis_InstrumentHitBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ReceiveEndPlay");
		
		ABP_TrophyAward_Tennis_InstrumentHitBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_Tennis_InstrumentHitBase_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.Initialize");
		
		ABP_TrophyAward_Tennis_InstrumentHitBase_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_Tennis_InstrumentHitBase_C::ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C.ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase");
		
		ABP_TrophyAward_Tennis_InstrumentHitBase_C_ExecuteUbergraph_BP_TrophyAward_Tennis_InstrumentHitBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_Tennis_InstrumentHitBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_Tennis_InstrumentHitBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_Tennis_InstrumentHitBase.BP_TrophyAward_Tennis_InstrumentHitBase_C");
		return ptr;
	}

}


