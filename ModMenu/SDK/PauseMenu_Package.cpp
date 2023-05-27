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
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UnloadReflection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::UnloadReflection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UnloadReflection");
		
		APauseMenu_C_UnloadReflection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.LoadReflection
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::LoadReflection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.LoadReflection");
		
		APauseMenu_C_LoadReflection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnTempIntroButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnTempIntroButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTempIntroButton");
		
		APauseMenu_C_SpawnTempIntroButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnAudioButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnAudioButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAudioButton");
		
		APauseMenu_C_SpawnAudioButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnAudioOptions
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnAudioOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAudioOptions");
		
		APauseMenu_C_SpawnAudioOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnExtras
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnExtras()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnExtras");
		
		APauseMenu_C_SpawnExtras_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.GetCurrentLanguage
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Language                                                   (Parm, OutParm)
	 */
	void APauseMenu_C::GetCurrentLanguage(class FText* Language)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetCurrentLanguage");
		
		APauseMenu_C_GetCurrentLanguage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Language != nullptr)
			*Language = params.Language;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnLanguageMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnLanguageMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnLanguageMenu");
		
		APauseMenu_C_SpawnLanguageMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnPointerButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnPointerButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnPointerButton");
		
		APauseMenu_C_SpawnPointerButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UpdatePointerType
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::UpdatePointerType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UpdatePointerType");
		
		APauseMenu_C_UpdatePointerType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.RestartGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::RestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartGame");
		
		APauseMenu_C_RestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnRestartButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void APauseMenu_C::SpawnRestartButton(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnRestartButton");
		
		APauseMenu_C_SpawnRestartButton_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnSportOptionButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnSportOptionButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnSportOptionButton");
		
		APauseMenu_C_SpawnSportOptionButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShowDebugMsg
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FString                                      Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              LifeTime                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ShowDebugMsg(const class FString& Message, float LifeTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowDebugMsg");
		
		APauseMenu_C_ShowDebugMsg_Params params {};
		params.Message = Message;
		params.LifeTime = LifeTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SetSport
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SetSport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SetSport");
		
		APauseMenu_C_SetSport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnJoinInviteMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              JoinEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		class FScriptDelegate                              DeclineAllEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void APauseMenu_C::SpawnJoinInviteMenu(const class FScriptDelegate& JoinEvent, const class FScriptDelegate& DeclineAllEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnJoinInviteMenu");
		
		APauseMenu_C_SpawnJoinInviteMenu_Params params {};
		params.JoinEvent = JoinEvent;
		params.DeclineAllEvent = DeclineAllEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnGripButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnGripButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnGripButton");
		
		APauseMenu_C_SpawnGripButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnAvatarOptionsButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnAvatarOptionsButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAvatarOptionsButton");
		
		APauseMenu_C_SpawnAvatarOptionsButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnAvatarMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnAvatarMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAvatarMenu");
		
		APauseMenu_C_SpawnAvatarMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnTrainingOpMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               GoWide                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APauseMenu_C::SpawnTrainingOpMenu(bool* GoWide)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTrainingOpMenu");
		
		APauseMenu_C_SpawnTrainingOpMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (GoWide != nullptr)
			*GoWide = params.GoWide;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnTrainingOptionsButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Back                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void APauseMenu_C::SpawnTrainingOptionsButton(bool Back, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTrainingOptionsButton");
		
		APauseMenu_C_SpawnTrainingOptionsButton_Params params {};
		params.Back = Back;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SwapThrowingGlove
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SwapThrowingGlove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SwapThrowingGlove");
		
		APauseMenu_C_SwapThrowingGlove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SwapInstrumentHand
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SwapInstrumentHand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SwapInstrumentHand");
		
		APauseMenu_C_SwapInstrumentHand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShowInstrument
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ShowInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowInstrument");
		
		APauseMenu_C_ShowInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.HideInstrument
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::HideInstrument()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.HideInstrument");
		
		APauseMenu_C_HideInstrument_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.GetPnpPreferences
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::GetPnpPreferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetPnpPreferences");
		
		APauseMenu_C_GetPnpPreferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.NextMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void APauseMenu_C::NextMenu(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.NextMenu");
		
		APauseMenu_C_NextMenu_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnConfirmationMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void APauseMenu_C::SpawnConfirmationMenu(const class FName& LocText, const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnConfirmationMenu");
		
		APauseMenu_C_SpawnConfirmationMenu_Params params {};
		params.LocText = LocText;
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UpdateVoiceSetting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::UpdateVoiceSetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UpdateVoiceSetting");
		
		APauseMenu_C_UpdateVoiceSetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.RemoveNavButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::RemoveNavButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RemoveNavButtons");
		
		APauseMenu_C_RemoveNavButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShowNoPauseIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ShowNoPauseIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowNoPauseIcon");
		
		APauseMenu_C_ShowNoPauseIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SaveOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SaveOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SaveOptions");
		
		APauseMenu_C_SaveOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.EnableMenuInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::EnableMenuInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.EnableMenuInput");
		
		APauseMenu_C_EnableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnHeader
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnHeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnHeader");
		
		APauseMenu_C_SpawnHeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UpdateBoundarySetting
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::UpdateBoundarySetting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UpdateBoundarySetting");
		
		APauseMenu_C_UpdateBoundarySetting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.DestroyMenuActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::DestroyMenuActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DestroyMenuActors");
		
		APauseMenu_C_DestroyMenuActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.DisableMenuInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::DisableMenuInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DisableMenuInput");
		
		APauseMenu_C_DisableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnQuarterPanel
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LocString                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::SpawnQuarterPanel(class USceneComponent* Loc, const class FName& LocString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnQuarterPanel");
		
		APauseMenu_C_SpawnQuarterPanel_Params params {};
		params.Loc = Loc;
		params.LocString = LocString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SetColumns
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HasAvatarButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APauseMenu_C::SetColumns(bool HasAvatarButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SetColumns");
		
		APauseMenu_C_SetColumns_Params params {};
		params.HasAvatarButton = HasAvatarButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.GetAnchors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             QpPos                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USceneComponent*                             ButtonPos                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::GetAnchors(class USceneComponent** QpPos, class USceneComponent** ButtonPos)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetAnchors");
		
		APauseMenu_C_GetAnchors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QpPos != nullptr)
			*QpPos = params.QpPos;
		if (ButtonPos != nullptr)
			*ButtonPos = params.ButtonPos;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnBackButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              EventBack                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void APauseMenu_C::SpawnBackButtons(const class FScriptDelegate& EventBack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnBackButtons");
		
		APauseMenu_C_SpawnBackButtons_Params params {};
		params.EventBack = EventBack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnQuitButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnQuitButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnQuitButton");
		
		APauseMenu_C_SpawnQuitButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnVoiceChatButton
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnVoiceChatButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnVoiceChatButton");
		
		APauseMenu_C_SpawnVoiceChatButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnSportButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Selection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::SpawnSportButtons(EScramSport Selection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnSportButtons");
		
		APauseMenu_C_SpawnSportButtons_Params params {};
		params.Selection = Selection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnSharedButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnSharedButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnSharedButtons");
		
		APauseMenu_C_SpawnSharedButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ResetGameSelector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ResetGameSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ResetGameSelector");
		
		APauseMenu_C_ResetGameSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.GetDebugGameSelectors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               DebugSelectorExists                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ResetAllowed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APauseMenu_C::GetDebugGameSelectors(bool* DebugSelectorExists, bool* ResetAllowed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GetDebugGameSelectors");
		
		APauseMenu_C_GetDebugGameSelectors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DebugSelectorExists != nullptr)
			*DebugSelectorExists = params.DebugSelectorExists;
		if (ResetAllowed != nullptr)
			*ResetAllowed = params.ResetAllowed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.EndGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::EndGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.EndGame");
		
		APauseMenu_C_EndGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Initialize");
		
		APauseMenu_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UserConstructionScript");
		
		APauseMenu_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APauseMenu_C::Timeline_ScaleMenu__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__FinishedFunc");
		
		APauseMenu_C_Timeline_ScaleMenu__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void APauseMenu_C::Timeline_ScaleMenu__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.Timeline_ScaleMenu__UpdateFunc");
		
		APauseMenu_C_Timeline_ScaleMenu__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.InpActEvt_Pause_K2Node_InputActionEvent_1
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void APauseMenu_C::InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.InpActEvt_Pause_K2Node_InputActionEvent_1");
		
		APauseMenu_C_InpActEvt_Pause_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnFailure_CB7A18C444F2E804805EC3A042280AA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OnFailure_CB7A18C444F2E804805EC3A042280AA5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnFailure_CB7A18C444F2E804805EC3A042280AA5");
		
		APauseMenu_C_OnFailure_CB7A18C444F2E804805EC3A042280AA5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnSuccess_CB7A18C444F2E804805EC3A042280AA5
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OnSuccess_CB7A18C444F2E804805EC3A042280AA5()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnSuccess_CB7A18C444F2E804805EC3A042280AA5");
		
		APauseMenu_C_OnSuccess_CB7A18C444F2E804805EC3A042280AA5_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnFailure_1BED71814B71FE0478E2F1AAE838DA9E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OnFailure_1BED71814B71FE0478E2F1AAE838DA9E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnFailure_1BED71814B71FE0478E2F1AAE838DA9E");
		
		APauseMenu_C_OnFailure_1BED71814B71FE0478E2F1AAE838DA9E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E");
		
		APauseMenu_C_OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnFailure_FE43AE584DB619A31AB3558300E8F65D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OnFailure_FE43AE584DB619A31AB3558300E8F65D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnFailure_FE43AE584DB619A31AB3558300E8F65D");
		
		APauseMenu_C_OnFailure_FE43AE584DB619A31AB3558300E8F65D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OnSuccess_FE43AE584DB619A31AB3558300E8F65D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OnSuccess_FE43AE584DB619A31AB3558300E8F65D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OnSuccess_FE43AE584DB619A31AB3558300E8F65D");
		
		APauseMenu_C_OnSuccess_FE43AE584DB619A31AB3558300E8F65D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BoundaryLineChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::BoundaryLineChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BoundaryLineChanged");
		
		APauseMenu_C_BoundaryLineChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.VoiceChatChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::VoiceChatChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoiceChatChanged");
		
		APauseMenu_C_VoiceChatChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.PitcherHandChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::PitcherHandChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PitcherHandChanged");
		
		APauseMenu_C_PitcherHandChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TennisHandChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::TennisHandChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TennisHandChanged");
		
		APauseMenu_C_TennisHandChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BattingSideChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::BattingSideChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BattingSideChanged");
		
		APauseMenu_C_BattingSideChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BattingHandChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::BattingHandChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BattingHandChanged");
		
		APauseMenu_C_BattingHandChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TennisSkillChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::TennisSkillChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TennisSkillChanged");
		
		APauseMenu_C_TennisSkillChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BattingSkillChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::BattingSkillChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BattingSkillChanged");
		
		APauseMenu_C_BattingSkillChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.PitchingSkillChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::PitchingSkillChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PitchingSkillChanged");
		
		APauseMenu_C_PitchingSkillChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.CatchingSkillChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::CatchingSkillChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CatchingSkillChanged");
		
		APauseMenu_C_CatchingSkillChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BowlingSkillChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::BowlingSkillChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BowlingSkillChanged");
		
		APauseMenu_C_BowlingSkillChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.GripChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::GripChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GripChanged");
		
		APauseMenu_C_GripChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TennisServeStyleChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::TennisServeStyleChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TennisServeStyleChanged");
		
		APauseMenu_C_TennisServeStyleChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.PointerTypeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::PointerTypeChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PointerTypeChanged");
		
		APauseMenu_C_PointerTypeChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.VoiceConfirmationConfirmed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::VoiceConfirmationConfirmed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoiceConfirmationConfirmed");
		
		APauseMenu_C_VoiceConfirmationConfirmed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TipsChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::TipsChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TipsChanged");
		
		APauseMenu_C_TipsChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.GameVolumeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::GameVolumeChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.GameVolumeChanged");
		
		APauseMenu_C_GameVolumeChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShortIntroChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ShortIntroChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShortIntroChanged");
		
		APauseMenu_C_ShortIntroChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.VoipVolumeChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::VoipVolumeChanged(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoipVolumeChanged");
		
		APauseMenu_C_VoipVolumeChanged_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void APauseMenu_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ReceiveBeginPlay");
		
		APauseMenu_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ReceiveTick");
		
		APauseMenu_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ScaleUpMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ScaleUpMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ScaleUpMenu");
		
		APauseMenu_C_ScaleUpMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ScaleDownMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ScaleDownMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ScaleDownMenu");
		
		APauseMenu_C_ScaleDownMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.HeaderDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::HeaderDestroyed(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.HeaderDestroyed");
		
		APauseMenu_C_HeaderDestroyed_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OpenFirstMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OpenFirstMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OpenFirstMenu");
		
		APauseMenu_C_OpenFirstMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TopMenuOpen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::TopMenuOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TopMenuOpen");
		
		APauseMenu_C_TopMenuOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.DisableInputOnButtonPress
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::DisableInputOnButtonPress(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DisableInputOnButtonPress");
		
		APauseMenu_C_DisableInputOnButtonPress_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.CloseMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CloseMenu");
		
		APauseMenu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.CloseMenuButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::CloseMenuButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CloseMenuButtonPressed");
		
		APauseMenu_C_CloseMenuButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SwapToVoiceConfirmation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SwapToVoiceConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SwapToVoiceConfirmation");
		
		APauseMenu_C_SwapToVoiceConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.QuitMultiplayer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::QuitMultiplayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.QuitMultiplayer");
		
		APauseMenu_C_QuitMultiplayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnVoiceConfirmation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnVoiceConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnVoiceConfirmation");
		
		APauseMenu_C_SpawnVoiceConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.VoiceConfirmatinoButtonSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::VoiceConfirmatinoButtonSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.VoiceConfirmatinoButtonSelected");
		
		APauseMenu_C_VoiceConfirmatinoButtonSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ConfirmationMenuReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ConfirmationMenuReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ConfirmationMenuReady");
		
		APauseMenu_C_ConfirmationMenuReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.BackToTop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::BackToTop(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.BackToTop");
		
		APauseMenu_C_BackToTop_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShowForfeit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ShowForfeit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowForfeit");
		
		APauseMenu_C_ShowForfeit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ForfeitConfirmationMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ForfeitConfirmationMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ForfeitConfirmationMade");
		
		APauseMenu_C_ForfeitConfirmationMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ForfeitSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ForfeitSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ForfeitSelected");
		
		APauseMenu_C_ForfeitSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.QuitSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::QuitSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.QuitSelected");
		
		APauseMenu_C_QuitSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ReceiveEndPlay");
		
		APauseMenu_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnTrainingOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnTrainingOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnTrainingOptions");
		
		APauseMenu_C_SpawnTrainingOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TrainingOptionsSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::TrainingOptionsSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TrainingOptionsSelected");
		
		APauseMenu_C_TrainingOptionsSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.TrainingOptionsOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::TrainingOptionsOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.TrainingOptionsOpened");
		
		APauseMenu_C_TrainingOptionsOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.CreateAvatarMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::CreateAvatarMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CreateAvatarMenu");
		
		APauseMenu_C_CreateAvatarMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.AvatarButtonSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::AvatarButtonSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AvatarButtonSelected");
		
		APauseMenu_C_AvatarButtonSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.AvataMenuOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::AvataMenuOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AvataMenuOpened");
		
		APauseMenu_C_AvataMenuOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.OpenMainOptionsMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::OpenMainOptionsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.OpenMainOptionsMenu");
		
		APauseMenu_C_OpenMainOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.CreateJoinInviteMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::CreateJoinInviteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CreateJoinInviteMenu");
		
		APauseMenu_C_CreateJoinInviteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.InvitesChecked
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramGameInvite>                    invites                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void APauseMenu_C::InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.InvitesChecked");
		
		APauseMenu_C_InvitesChecked_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.invites = invites;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.JoinGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramGameInvite                            JoinPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void APauseMenu_C::JoinGame(const struct FScramGameInvite& JoinPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.JoinGame");
		
		APauseMenu_C_JoinGame_Params params {};
		params.JoinPlayer = JoinPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.DeclineAll
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::DeclineAll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.DeclineAll");
		
		APauseMenu_C_DeclineAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.JoinTheMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::JoinTheMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.JoinTheMatch");
		
		APauseMenu_C_JoinTheMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.NoInvitesFound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::NoInvitesFound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.NoInvitesFound");
		
		APauseMenu_C_NoInvitesFound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SportOptionsButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::SportOptionsButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SportOptionsButtonPressed");
		
		APauseMenu_C_SportOptionsButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShowSportOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ShowSportOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowSportOptions");
		
		APauseMenu_C_ShowSportOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SportOptionsOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SportOptionsOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SportOptionsOpened");
		
		APauseMenu_C_SportOptionsOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.RestartConfirmation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::RestartConfirmation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartConfirmation");
		
		APauseMenu_C_RestartConfirmation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.RestartConfirmationChoiceMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::RestartConfirmationChoiceMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartConfirmationChoiceMade");
		
		APauseMenu_C_RestartConfirmationChoiceMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.RestartChallengeSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::RestartChallengeSelected(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RestartChallengeSelected");
		
		APauseMenu_C_RestartChallengeSelected_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.RecenterMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::RecenterMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.RecenterMenu");
		
		APauseMenu_C_RecenterMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ClientUnrealJoinFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramPendingGameFailure                           failureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ClientUnrealJoinFailed(EScramPendingGameFailure failureType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ClientUnrealJoinFailed");
		
		APauseMenu_C_ClientUnrealJoinFailed_Params params {};
		params.failureType = failureType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UnrealJoinFailed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::UnrealJoinFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UnrealJoinFailed");
		
		APauseMenu_C_UnrealJoinFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.LanguageOptionButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::LanguageOptionButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.LanguageOptionButtonPressed");
		
		APauseMenu_C_LanguageOptionButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ShowLanguageOptions
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::ShowLanguageOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ShowLanguageOptions");
		
		APauseMenu_C_ShowLanguageOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ExtrasButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ExtrasButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExtrasButtonPressed");
		
		APauseMenu_C_ExtrasButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnExtrasMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnExtrasMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnExtrasMenu");
		
		APauseMenu_C_SpawnExtrasMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.CustomEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::CustomEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.CustomEvent");
		
		APauseMenu_C_CustomEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.AudioButtonSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::AudioButtonSelected(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AudioButtonSelected");
		
		APauseMenu_C_AudioButtonSelected_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.SpawnAudioMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::SpawnAudioMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.SpawnAudioMenu");
		
		APauseMenu_C_SpawnAudioMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void APauseMenu_C::ExecuteUbergraph_PauseMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.ExecuteUbergraph_PauseMenu");
		
		APauseMenu_C_ExecuteUbergraph_PauseMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.PauseMenuCleared__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::PauseMenuCleared__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PauseMenuCleared__DelegateSignature");
		
		APauseMenu_C_PauseMenuCleared__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.PauseMenuOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::PauseMenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.PauseMenuOpened__DelegateSignature");
		
		APauseMenu_C_PauseMenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.UnPauseReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ForceKeepTravelCapsule                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void APauseMenu_C::UnPauseReady__DelegateSignature(bool ForceKeepTravelCapsule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.UnPauseReady__DelegateSignature");
		
		APauseMenu_C_UnPauseReady__DelegateSignature_Params params {};
		params.ForceKeepTravelCapsule = ForceKeepTravelCapsule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function PauseMenu.PauseMenu_C.AllButtonsDestroyed__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void APauseMenu_C::AllButtonsDestroyed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PauseMenu.PauseMenu_C.AllButtonsDestroyed__DelegateSignature");
		
		APauseMenu_C_AllButtonsDestroyed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APauseMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APauseMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass PauseMenu.PauseMenu_C");
		return ptr;
	}

}


