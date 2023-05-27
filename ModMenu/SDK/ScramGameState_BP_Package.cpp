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
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramGameState_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.UserConstructionScript");
		
		AScramGameState_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramGameState_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ReceiveBeginPlay");
		
		AScramGameState_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyPause
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EGamePauseReason                                   reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameState_BP_C::ServerNotifyPause(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyPause");
		
		AScramGameState_BP_C_ServerNotifyPause_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyResume
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EGamePauseReason                                   reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameState_BP_C::ServerNotifyResume(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ServerNotifyResume");
		
		AScramGameState_BP_C_ServerNotifyResume_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGamePaused
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameState_BP_C::BlueprintCall_OnMultiplayerGamePaused(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGamePaused");
		
		AScramGameState_BP_C_BlueprintCall_OnMultiplayerGamePaused_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGameResume
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCalledByHost                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EGamePauseReason                                   reason                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameState_BP_C::BlueprintCall_OnMultiplayerGameResume(bool isCalledByHost, EGamePauseReason reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.BlueprintCall_OnMultiplayerGameResume");
		
		AScramGameState_BP_C_BlueprintCall_OnMultiplayerGameResume_Params params {};
		params.isCalledByHost = isCalledByHost;
		params.reason = reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramGameState_BP.ScramGameState_BP_C.ExecuteUbergraph_ScramGameState_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramGameState_BP_C::ExecuteUbergraph_ScramGameState_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramGameState_BP.ScramGameState_BP_C.ExecuteUbergraph_ScramGameState_BP");
		
		AScramGameState_BP_C_ExecuteUbergraph_ScramGameState_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramGameState_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramGameState_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramGameState_BP.ScramGameState_BP_C");
		return ptr;
	}

}


