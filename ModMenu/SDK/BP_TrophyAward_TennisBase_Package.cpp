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
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TennisBase_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.UserConstructionScript");
		
		ABP_TrophyAward_TennisBase_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TennisBase_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ReceiveEndPlay");
		
		ABP_TrophyAward_TennisBase_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnTennisEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TennisBase_C::OnTennisEvent(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnTennisEvent");
		
		ABP_TrophyAward_TennisBase_C_OnTennisEvent_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.Initialize
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TennisBase_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.Initialize");
		
		ABP_TrophyAward_TennisBase_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnScorePoint
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TennisBase_C::OnScorePoint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnScorePoint");
		
		ABP_TrophyAward_TennisBase_C_OnScorePoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnMatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TennisBase_C::OnMatchComplete(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnMatchComplete");
		
		ABP_TrophyAward_TennisBase_C_OnMatchComplete_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnAceEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TennisBase_C::OnAceEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.OnAceEvent");
		
		ABP_TrophyAward_TennisBase_C_OnAceEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.BallInPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TrophyAward_TennisBase_C::BallInPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.BallInPlay");
		
		ABP_TrophyAward_TennisBase_C_BallInPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ExecuteUbergraph_BP_TrophyAward_TennisBase
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TrophyAward_TennisBase_C::ExecuteUbergraph_BP_TrophyAward_TennisBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C.ExecuteUbergraph_BP_TrophyAward_TennisBase");
		
		ABP_TrophyAward_TennisBase_C_ExecuteUbergraph_BP_TrophyAward_TennisBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TrophyAward_TennisBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TrophyAward_TennisBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_TennisBase.BP_TrophyAward_TennisBase_C");
		return ptr;
	}

}


