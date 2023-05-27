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
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.HideSlowConnection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::HideSlowConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.HideSlowConnection");
		
		AScramPlayerController_BP_C_HideSlowConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.ShowSlowConnection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::ShowSlowConnection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ShowSlowConnection");
		
		AScramPlayerController_BP_C_ShowSlowConnection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnUIFloater
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               NoPause                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               SlowConnection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerController_BP_C::SpawnUIFloater(bool NoPause, const class FText& Error, bool SlowConnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnUIFloater");
		
		AScramPlayerController_BP_C_SpawnUIFloater_Params params {};
		params.NoPause = NoPause;
		params.Error = Error;
		params.SlowConnection = SlowConnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsMultiplayerQueued
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               MultiplayerQueued                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerController_BP_C::IsMultiplayerQueued(bool* MultiplayerQueued)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsMultiplayerQueued");
		
		AScramPlayerController_BP_C_IsMultiplayerQueued_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MultiplayerQueued != nullptr)
			*MultiplayerQueued = params.MultiplayerQueued;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.DoesPauseManagerExist?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Exists                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerController_BP_C::DoesPauseManagerExist(bool* Exists)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.DoesPauseManagerExist?");
		
		AScramPlayerController_BP_C_DoesPauseManagerExist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exists != nullptr)
			*Exists = params.Exists;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsPauseRestricted
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               restricted                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerController_BP_C::IsPauseRestricted(bool* restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.IsPauseRestricted");
		
		AScramPlayerController_BP_C_IsPauseRestricted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (restricted != nullptr)
			*restricted = params.restricted;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnNoPause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::SpawnNoPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.SpawnNoPause");
		
		AScramPlayerController_BP_C_SpawnNoPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.Initialize");
		
		AScramPlayerController_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.UserConstructionScript");
		
		AScramPlayerController_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AScramPlayerController_BP_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.InpActEvt_Pause_K2Node_InputActionEvent_1");
		
		AScramPlayerController_BP_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               CheckIfPausedAllowed                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerController_BP_C::PauseGame(bool CheckIfPausedAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseGame");
		
		AScramPlayerController_BP_C_PauseGame_Params params {};
		params.CheckIfPausedAllowed = CheckIfPausedAllowed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveBeginPlay");
		
		AScramPlayerController_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.UnpauseGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::UnpauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.UnpauseGame");
		
		AScramPlayerController_BP_C_UnpauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEndNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::PauseEndNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEndNotify");
		
		AScramPlayerController_BP_C_PauseEndNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStartNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::PauseStartNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStartNotify");
		
		AScramPlayerController_BP_C_PauseStartNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedPauseGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::QueuedPauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedPauseGame");
		
		AScramPlayerController_BP_C_QueuedPauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedUnpauseGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::QueuedUnpauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.QueuedUnpauseGame");
		
		AScramPlayerController_BP_C_QueuedUnpauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanStartTravel
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGameHandlerOnline_C*                        GameHandler                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerController_BP_C::Server_ClientCanStartTravel(class AGameHandlerOnline_C* GameHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanStartTravel");
		
		AScramPlayerController_BP_C_Server_ClientCanStartTravel_Params params {};
		params.GameHandler = GameHandler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanBeginMatch
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AGameHandlerOnline_C*                        GameHandler                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerController_BP_C::Server_ClientCanBeginMatch(class AGameHandlerOnline_C* GameHandler)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.Server_ClientCanBeginMatch");
		
		AScramPlayerController_BP_C_Server_ClientCanBeginMatch_Params params {};
		params.GameHandler = GameHandler;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.UpdateSlowConnectionDisplay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isOverThreshold                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AScramPlayerController_BP_C::UpdateSlowConnectionDisplay(bool isOverThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.UpdateSlowConnectionDisplay");
		
		AScramPlayerController_BP_C_UpdateSlowConnectionDisplay_Params params {};
		params.isOverThreshold = isOverThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerController_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ReceiveEndPlay");
		
		AScramPlayerController_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.ExecuteUbergraph_ScramPlayerController_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AScramPlayerController_BP_C::ExecuteUbergraph_ScramPlayerController_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.ExecuteUbergraph_ScramPlayerController_BP");
		
		AScramPlayerController_BP_C_ExecuteUbergraph_ScramPlayerController_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEnd__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::PauseEnd__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseEnd__DelegateSignature");
		
		AScramPlayerController_BP_C_PauseEnd__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStart__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AScramPlayerController_BP_C::PauseStart__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ScramPlayerController_BP.ScramPlayerController_BP_C.PauseStart__DelegateSignature");
		
		AScramPlayerController_BP_C_PauseStart__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AScramPlayerController_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AScramPlayerController_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerController_BP.ScramPlayerController_BP_C");
		return ptr;
	}

}


