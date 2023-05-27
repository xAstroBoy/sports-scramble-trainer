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
	 * 		Name   -> Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchWarn_Enabled?
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               EquipmentMatchWarningAllowed                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEquipmentMatchCheck_C::EquipmentMatchWarn_Enabled(class AActor* Actor, bool* EquipmentMatchWarningAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchWarn_Enabled?");
		
		AEquipmentMatchCheck_C_EquipmentMatchWarn_Enabled_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EquipmentMatchWarningAllowed != nullptr)
			*EquipmentMatchWarningAllowed = params.EquipmentMatchWarningAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Instrument
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATN_Instrument_Base_C*                       Instrument                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LocalPlayer                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class ATN_Ball_Base_C*                             BallOptional                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEquipmentMatchCheck_C::EquipmentMatchCheck_Instrument(class ATN_Instrument_Base_C* Instrument, bool LocalPlayer, class ATN_Ball_Base_C* BallOptional, bool* Match)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Instrument");
		
		AEquipmentMatchCheck_C_EquipmentMatchCheck_Instrument_Params params {};
		params.Instrument = Instrument;
		params.LocalPlayer = LocalPlayer;
		params.BallOptional = BallOptional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Ball
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ATN_Ball_Base_C*                             Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Match                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AEquipmentMatchCheck_C::EquipmentMatchCheck_Ball(class ATN_Ball_Base_C* Ball, bool* Match)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Ball");
		
		AEquipmentMatchCheck_C_EquipmentMatchCheck_Ball_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Match != nullptr)
			*Match = params.Match;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function EquipmentMatchCheck.EquipmentMatchCheck_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AEquipmentMatchCheck_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.UserConstructionScript");
		
		AEquipmentMatchCheck_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function EquipmentMatchCheck.EquipmentMatchCheck_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AEquipmentMatchCheck_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.ReceiveBeginPlay");
		
		AEquipmentMatchCheck_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function EquipmentMatchCheck.EquipmentMatchCheck_C.ExecuteUbergraph_EquipmentMatchCheck
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AEquipmentMatchCheck_C::ExecuteUbergraph_EquipmentMatchCheck(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EquipmentMatchCheck.EquipmentMatchCheck_C.ExecuteUbergraph_EquipmentMatchCheck");
		
		AEquipmentMatchCheck_C_ExecuteUbergraph_EquipmentMatchCheck_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AEquipmentMatchCheck_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AEquipmentMatchCheck_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass EquipmentMatchCheck.EquipmentMatchCheck_C");
		return ptr;
	}

}


