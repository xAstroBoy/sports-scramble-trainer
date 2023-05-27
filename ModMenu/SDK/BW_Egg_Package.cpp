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
	 * 		Name   -> Function BW_Egg.BW_Egg_C.HasHatched
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               Hatched                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Egg_C::HasHatched(bool* Hatched)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.HasHatched");
		
		ABW_Egg_C_HasHatched_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hatched != nullptr)
			*Hatched = params.Hatched;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.Local_Hatch
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotionState                                MotionState                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABW_Egg_C::Local_Hatch(const struct FMotionState& MotionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Local_Hatch");
		
		ABW_Egg_C_Local_Hatch_Params params {};
		params.MotionState = MotionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Egg_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.UserConstructionScript");
		
		ABW_Egg_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Egg_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.ReceiveBeginPlay");
		
		ABW_Egg_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Egg_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.ReceiveEndPlay");
		
		ABW_Egg_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.HatchCheck
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Egg_C::HatchCheck(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.HatchCheck");
		
		ABW_Egg_C_HatchCheck_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.HatchFX
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Egg_C::HatchFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.HatchFX");
		
		ABW_Egg_C_HatchFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.Hide Egg
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Egg_C::HideEgg()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Hide Egg");
		
		ABW_Egg_C_HideEgg_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.Turkey Destroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        PrimitveActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Egg_C::TurkeyDestroyed(class AScramPrimitiveActor* PrimitveActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Turkey Destroyed");
		
		ABW_Egg_C_TurkeyDestroyed_Params params {};
		params.PrimitveActor = PrimitveActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.SM_Hatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotionState                                MotionState                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABW_Egg_C::SM_Hatch(const struct FMotionState& MotionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.SM_Hatch");
		
		ABW_Egg_C_SM_Hatch_Params params {};
		params.MotionState = MotionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.Multi_Hatch
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMotionState                                MotionState                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void ABW_Egg_C::Multi_Hatch(const struct FMotionState& MotionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.Multi_Hatch");
		
		ABW_Egg_C_Multi_Hatch_Params params {};
		params.MotionState = MotionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Egg_C::ExecuteUbergraph_BW_Egg(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Egg.BW_Egg_C.ExecuteUbergraph_BW_Egg");
		
		ABW_Egg_C_ExecuteUbergraph_BW_Egg_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Egg_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Egg_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Egg.BW_Egg_C");
		return ptr;
	}

}


