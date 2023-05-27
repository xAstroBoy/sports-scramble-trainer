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
	 * 		Name   -> Function HubMenu.HubMenu_C.SpawnBeacons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    SingleBeacon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::SpawnBeacons(EHubMenuChoices SingleBeacon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnBeacons");
		
		AHubMenu_C_SpawnBeacons_Params params {};
		params.SingleBeacon = SingleBeacon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.ResetMenus
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::ResetMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ResetMenus");
		
		AHubMenu_C_ResetMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.CleanUpSelectors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    KeepSelection                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::CleanUpSelectors(EHubMenuChoices KeepSelection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.CleanUpSelectors");
		
		AHubMenu_C_CleanUpSelectors_Params params {};
		params.KeepSelection = KeepSelection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.UserConstructionScript");
		
		AHubMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B");
		
		AHubMenu_C_OnLoaded_6E812D6A4C2B1D45191638BB6B95DD0B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.OnLoaded_60C27ADA4102D7006D437F83B3BE4A75
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::OnLoaded_60C27ADA4102D7006D437F83B3BE4A75(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.OnLoaded_60C27ADA4102D7006D437F83B3BE4A75");
		
		AHubMenu_C_OnLoaded_60C27ADA4102D7006D437F83B3BE4A75_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_Baseball_K2Node_ComponentBoundEvent_0_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_Bowling_K2Node_ComponentBoundEvent_1_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_BASEBALL_K2Node_ComponentBoundEvent_2_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_BOWLING_K2Node_ComponentBoundEvent_3_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_4_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_MULTIPLAYER_K2Node_ComponentBoundEvent_5_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_6_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AHubMenu_C::BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature");
		
		AHubMenu_C_BndEvt__ScramLookAtActivator_TROPHYROOM_K2Node_ComponentBoundEvent_7_ScramLookAtActivatorDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::SelectionMade(EHubMenuChoices Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SelectionMade");
		
		AHubMenu_C_SelectionMade_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AHubMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ReceiveBeginPlay");
		
		AHubMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SpawnTennis
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::SpawnTennis()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnTennis");
		
		AHubMenu_C_SpawnTennis_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SpawnBaseball
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::SpawnBaseball()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnBaseball");
		
		AHubMenu_C_SpawnBaseball_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SpawnBowling
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::SpawnBowling()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnBowling");
		
		AHubMenu_C_SpawnBowling_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SpawnMultiplayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::SpawnMultiplayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnMultiplayer");
		
		AHubMenu_C_SpawnMultiplayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SpawnTrophy
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::SpawnTrophy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SpawnTrophy");
		
		AHubMenu_C_SpawnTrophy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SelectionFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::SelectionFinished(EHubMenuChoices Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SelectionFinished");
		
		AHubMenu_C_SelectionFinished_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.EndNux
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::EndNux()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.EndNux");
		
		AHubMenu_C_EndNux_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.ShutDownMenuExternal
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::ShutDownMenuExternal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ShutDownMenuExternal");
		
		AHubMenu_C_ShutDownMenuExternal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.PlaySelectionAudio
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::PlaySelectionAudio(EHubMenuChoices Choice)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.PlaySelectionAudio");
		
		AHubMenu_C_PlaySelectionAudio_Params params {};
		params.Choice = Choice;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BeaconsRaised
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::BeaconsRaised()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BeaconsRaised");
		
		AHubMenu_C_BeaconsRaised_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.ActivateLookAt
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::ActivateLookAt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ActivateLookAt");
		
		AHubMenu_C_ActivateLookAt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.TennisButtonDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::TennisButtonDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.TennisButtonDestroyed");
		
		AHubMenu_C_TennisButtonDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BaseballButtonDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::BaseballButtonDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BaseballButtonDestroyed");
		
		AHubMenu_C_BaseballButtonDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.BowlingButtonDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::BowlingButtonDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.BowlingButtonDestroyed");
		
		AHubMenu_C_BowlingButtonDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.MultiplayerButtonDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::MultiplayerButtonDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.MultiplayerButtonDestroyed");
		
		AHubMenu_C_MultiplayerButtonDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.TrophyButtonDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AHubMenu_C::TrophyButtonDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.TrophyButtonDestroyed");
		
		AHubMenu_C_TrophyButtonDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.ExecuteUbergraph_HubMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::ExecuteUbergraph_HubMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.ExecuteUbergraph_HubMenu");
		
		AHubMenu_C_ExecuteUbergraph_HubMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.SelectionStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Choice                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::SelectionStarted__DelegateSignature(EHubMenuChoices Choice, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.SelectionStarted__DelegateSignature");
		
		AHubMenu_C_SelectionStarted__DelegateSignature_Params params {};
		params.Choice = Choice;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function HubMenu.HubMenu_C.HubMenuSelection__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHubMenuChoices                                    Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AHubMenu_C::HubMenuSelection__DelegateSignature(EHubMenuChoices Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HubMenu.HubMenu_C.HubMenuSelection__DelegateSignature");
		
		AHubMenu_C_HubMenuSelection__DelegateSignature_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AHubMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AHubMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HubMenu.HubMenu_C");
		return ptr;
	}

}


