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
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.SetPinPhysicsEnabled
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_Pinsetter_C::SetPinPhysicsEnabled(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.SetPinPhysicsEnabled");
		
		ABW_Pinsetter_C_SetPinPhysicsEnabled_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Initialize");
		
		ABW_Pinsetter_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.GetRollScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PinsKnockedDown                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Pinsetter_C::GetRollScore(int32_t* PinsKnockedDown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.GetRollScore");
		
		ABW_Pinsetter_C_GetRollScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PinsKnockedDown != nullptr)
			*PinsKnockedDown = params.PinsKnockedDown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Cleanup");
		
		ABW_Pinsetter_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.SpawnAllPins
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::SpawnAllPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.SpawnAllPins");
		
		ABW_Pinsetter_C_SpawnAllPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.UserConstructionScript");
		
		ABW_Pinsetter_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_Pinsetter_C::Timeline_PinReset__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__FinishedFunc");
		
		ABW_Pinsetter_C_Timeline_PinReset__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_Pinsetter_C::Timeline_PinReset__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.Timeline_PinReset__UpdateFunc");
		
		ABW_Pinsetter_C_Timeline_PinReset__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ReceiveBeginPlay");
		
		ABW_Pinsetter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Pinsetter_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ReceiveEndPlay");
		
		ABW_Pinsetter_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.ResetPins
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::ResetPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ResetPins");
		
		ABW_Pinsetter_C_ResetPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.RaisePinsetter
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::RaisePinsetter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.RaisePinsetter");
		
		ABW_Pinsetter_C_RaisePinsetter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.LaneChangeComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::LaneChangeComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.LaneChangeComplete");
		
		ABW_Pinsetter_C_LaneChangeComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.ClearPins
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::ClearPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ClearPins");
		
		ABW_Pinsetter_C_ClearPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.ExecuteUbergraph_BW_Pinsetter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_Pinsetter_C::ExecuteUbergraph_BW_Pinsetter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.ExecuteUbergraph_BW_Pinsetter");
		
		ABW_Pinsetter_C_ExecuteUbergraph_BW_Pinsetter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.PindeckHidden__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::PindeckHidden__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.PindeckHidden__DelegateSignature");
		
		ABW_Pinsetter_C_PindeckHidden__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_Pinsetter.BW_Pinsetter_C.PinResetComplete__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_Pinsetter_C::PinResetComplete__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_Pinsetter.BW_Pinsetter_C.PinResetComplete__DelegateSignature");
		
		ABW_Pinsetter_C_PinResetComplete__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_Pinsetter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_Pinsetter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_Pinsetter.BW_Pinsetter_C");
		return ptr;
	}

}


