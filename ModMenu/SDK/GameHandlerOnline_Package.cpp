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
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnSevereMessageMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnSevereMessageMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnSevereMessageMenu");
		
		AGameHandlerOnline_C_SpawnSevereMessageMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RemoveErrorMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RemoveErrorMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemoveErrorMenu");
		
		AGameHandlerOnline_C_RemoveErrorMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ClosePauseMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ClosePauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ClosePauseMenu");
		
		AGameHandlerOnline_C_ClosePauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.FailsafeDoubleMenu
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::FailsafeDoubleMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.FailsafeDoubleMenu");
		
		AGameHandlerOnline_C_FailsafeDoubleMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RepairLocalClientState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOnlineGameHandlerClientStates                     NewClientState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::RepairLocalClientState(EOnlineGameHandlerClientStates NewClientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RepairLocalClientState");
		
		AGameHandlerOnline_C_RepairLocalClientState_Params params {};
		params.NewClientState = NewClientState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.UnbindPause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::UnbindPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.UnbindPause");
		
		AGameHandlerOnline_C_UnbindPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.BindPause
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::BindPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BindPause");
		
		AGameHandlerOnline_C_BindPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.CheckRemotePlayerClientState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              RemotePlayerClientState                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AGameHandlerOnline_C::CheckRemotePlayerClientState(const class FScriptDelegate& RemotePlayerClientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CheckRemotePlayerClientState");
		
		AGameHandlerOnline_C_CheckRemotePlayerClientState_Params params {};
		params.RemotePlayerClientState = RemotePlayerClientState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ResetStatusBools
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ResetStatusBools()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResetStatusBools");
		
		AGameHandlerOnline_C_ResetStatusBools_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnExitButton
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               StaticPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              ExitEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnExitButton(bool StaticPosition, const class FScriptDelegate& ExitEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnExitButton");
		
		AGameHandlerOnline_C_SpawnExitButton_Params params {};
		params.StaticPosition = StaticPosition;
		params.ExitEvent = ExitEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ShowMenus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ShowMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ShowMenus");
		
		AGameHandlerOnline_C_ShowMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HideMenus
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::HideMenus()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HideMenus");
		
		AGameHandlerOnline_C_HideMenus_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RemoveAvatarButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RemoveAvatarButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemoveAvatarButtons");
		
		AGameHandlerOnline_C_RemoveAvatarButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarButtons
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnAvatarButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarButtons");
		
		AGameHandlerOnline_C_SpawnAvatarButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnConfirmationMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocText                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        OverrideText                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FScriptDelegate                              Selection                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Static                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnConfirmationMenu(const class FName& LocText, const class FText& OverrideText, const class FScriptDelegate& Selection, bool Static)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnConfirmationMenu");
		
		AGameHandlerOnline_C_SpawnConfirmationMenu_Params params {};
		params.LocText = LocText;
		params.OverrideText = OverrideText;
		params.Selection = Selection;
		params.Static = Static;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnTextTwoMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        LocText0                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        LocText1                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FScriptDelegate                              SelectionFinished                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnTextTwoMenu(const class FName& LocText0, const class FName& LocText1, const class FScriptDelegate& SelectionFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnTextTwoMenu");
		
		AGameHandlerOnline_C_SpawnTextTwoMenu_Params params {};
		params.LocText0 = LocText0;
		params.LocText1 = LocText1;
		params.SelectionFinished = SelectionFinished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.PlayerReady?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Ready                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::PlayerReady(class AScramPlayer* Player, bool* Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayerReady?");
		
		AGameHandlerOnline_C_PlayerReady_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Ready != nullptr)
			*Ready = params.Ready;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportOptionsMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnSportOptionsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportOptionsMenu");
		
		AGameHandlerOnline_C_SpawnSportOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSportMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              ChoiceEvent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnChooseSportMenu(const class FScriptDelegate& ChoiceEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSportMenu");
		
		AGameHandlerOnline_C_SpawnChooseSportMenu_Params params {};
		params.ChoiceEvent = ChoiceEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SetFindMatchGameOptions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SetFindMatchGameOptions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetFindMatchGameOptions");
		
		AGameHandlerOnline_C_SetFindMatchGameOptions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnBowlingGloves
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SpawnBowlingGloves(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnBowlingGloves");
		
		AGameHandlerOnline_C_SpawnBowlingGloves_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnMessageMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Static                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnMessageMenu(const class FText& Text, bool Static)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnMessageMenu");
		
		AGameHandlerOnline_C_SpawnMessageMenu_Params params {};
		params.Text = Text;
		params.Static = Static;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnAwardMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              AwardReadyEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnAwardMenu(const class FScriptDelegate& AwardReadyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAwardMenu");
		
		AGameHandlerOnline_C_SpawnAwardMenu_Params params {};
		params.AwardReadyEvent = AwardReadyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.AwardsEarned?
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AwardWaiting                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::AwardsEarned(bool* AwardWaiting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AwardsEarned?");
		
		AGameHandlerOnline_C_AwardsEarned_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AwardWaiting != nullptr)
			*AwardWaiting = params.AwardWaiting;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnResultsMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              ResultsCompleteEvent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		struct FResultsData                                ResultsData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SpawnResultsMenu(const class FScriptDelegate& ResultsCompleteEvent, const struct FResultsData& ResultsData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnResultsMenu");
		
		AGameHandlerOnline_C_SpawnResultsMenu_Params params {};
		params.ResultsCompleteEvent = ResultsCompleteEvent;
		params.ResultsData = ResultsData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.PrepSport
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::PrepSport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PrepSport");
		
		AGameHandlerOnline_C_PrepSport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RevealRemoteAvatar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RevealRemoteAvatar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RevealRemoteAvatar");
		
		AGameHandlerOnline_C_RevealRemoteAvatar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameManager
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnGameManager()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameManager");
		
		AGameHandlerOnline_C_SpawnGameManager_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportIconMenu
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AMenu_MpSportIcon_C*                         Menu                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SpawnSportIconMenu(class AMenu_MpSportIcon_C** Menu)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnSportIconMenu");
		
		AGameHandlerOnline_C_SpawnSportIconMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Menu != nullptr)
			*Menu = params.Menu;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnMpReadyMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnMpReadyMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnMpReadyMenu");
		
		AGameHandlerOnline_C_SpawnMpReadyMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarChoiceMenu
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnAvatarChoiceMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarChoiceMenu");
		
		AGameHandlerOnline_C_SpawnAvatarChoiceMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.NextMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void AGameHandlerOnline_C::NextMenu(const class FScriptDelegate& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.NextMenu");
		
		AGameHandlerOnline_C_NextMenu_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RemoveNavigationButtons
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RemoveNavigationButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemoveNavigationButtons");
		
		AGameHandlerOnline_C_RemoveNavigationButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.DisableActiveMenuInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::DisableActiveMenuInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.DisableActiveMenuInput");
		
		AGameHandlerOnline_C_DisableActiveMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnNavigationButtons
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ok                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              OkEvent                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               WideSpacing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Next                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FScriptDelegate                              NextEvent                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               Trophy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Home                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               FocusNext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnNavigationButtons(bool Ok, const class FScriptDelegate& OkEvent, bool WideSpacing, bool Next, const class FScriptDelegate& NextEvent, bool Trophy, bool Home, bool FocusNext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnNavigationButtons");
		
		AGameHandlerOnline_C_SpawnNavigationButtons_Params params {};
		params.Ok = Ok;
		params.OkEvent = OkEvent;
		params.WideSpacing = WideSpacing;
		params.Next = Next;
		params.NextEvent = NextEvent;
		params.Trophy = Trophy;
		params.Home = Home;
		params.FocusNext = FocusNext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.EnableActiveMenuInput
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::EnableActiveMenuInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.EnableActiveMenuInput");
		
		AGameHandlerOnline_C_EnableActiveMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnHeader
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FScriptDelegate                              InitialMenuEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 * 		bool                                               StartOpen                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::SpawnHeader(const class FScriptDelegate& InitialMenuEvent, bool StartOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnHeader");
		
		AGameHandlerOnline_C_SpawnHeader_Params params {};
		params.InitialMenuEvent = InitialMenuEvent;
		params.StartOpen = StartOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Initialize");
		
		AGameHandlerOnline_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.UserConstructionScript");
		
		AGameHandlerOnline_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Timeline_MenuScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__FinishedFunc");
		
		AGameHandlerOnline_C_Timeline_MenuScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Timeline_MenuScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Timeline_MenuScale__UpdateFunc");
		
		AGameHandlerOnline_C_Timeline_MenuScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_CB7A18C444F2E804805EC3A08673C765
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnFailure_CB7A18C444F2E804805EC3A08673C765()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_CB7A18C444F2E804805EC3A08673C765");
		
		AGameHandlerOnline_C_OnFailure_CB7A18C444F2E804805EC3A08673C765_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_CB7A18C444F2E804805EC3A08673C765
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnSuccess_CB7A18C444F2E804805EC3A08673C765()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_CB7A18C444F2E804805EC3A08673C765");
		
		AGameHandlerOnline_C_OnSuccess_CB7A18C444F2E804805EC3A08673C765_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_FE43AE584DB619A31AB35583C4B33B9D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnFailure_FE43AE584DB619A31AB35583C4B33B9D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnFailure_FE43AE584DB619A31AB35583C4B33B9D");
		
		AGameHandlerOnline_C_OnFailure_FE43AE584DB619A31AB35583C4B33B9D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_FE43AE584DB619A31AB35583C4B33B9D
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnSuccess_FE43AE584DB619A31AB35583C4B33B9D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnSuccess_FE43AE584DB619A31AB35583C4B33B9D");
		
		AGameHandlerOnline_C_OnSuccess_FE43AE584DB619A31AB35583C4B33B9D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnLoaded_3BE7A01644B7D6F446DF06B53AF96672
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::OnLoaded_3BE7A01644B7D6F446DF06B53AF96672(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnLoaded_3BE7A01644B7D6F446DF06B53AF96672");
		
		AGameHandlerOnline_C_OnLoaded_3BE7A01644B7D6F446DF06B53AF96672_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReceiveBeginPlay");
		
		AGameHandlerOnline_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.InitialMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::InitialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.InitialMenu");
		
		AGameHandlerOnline_C_InitialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ScaleUpMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ScaleUpMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ScaleUpMenu");
		
		AGameHandlerOnline_C_ScaleUpMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ScaleDownMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ScaleDownMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ScaleDownMenu");
		
		AGameHandlerOnline_C_ScaleDownMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::ButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ButtonPressed");
		
		AGameHandlerOnline_C_ButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HomeButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::HomeButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HomeButtonPressed");
		
		AGameHandlerOnline_C_HomeButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.AvatarChoiceMenuOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::AvatarChoiceMenuOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AvatarChoiceMenuOpened");
		
		AGameHandlerOnline_C_AvatarChoiceMenuOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.AvatarSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::AvatarSelected(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AvatarSelected");
		
		AGameHandlerOnline_C_AvatarSelected_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnReadyMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnReadyMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnReadyMenu");
		
		AGameHandlerOnline_C_SpawnReadyMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ReadyMenuOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ReadyMenuOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReadyMenuOpened");
		
		AGameHandlerOnline_C_ReadyMenuOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.AllPlayersReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::AllPlayersReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.AllPlayersReady");
		
		AGameHandlerOnline_C_AllPlayersReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.CloseReadyMenu
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::CloseReadyMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CloseReadyMenu");
		
		AGameHandlerOnline_C_CloseReadyMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnIconMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnIconMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnIconMenu");
		
		AGameHandlerOnline_C_SpawnIconMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.TennisMatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::TennisMatchComplete(EGameResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TennisMatchComplete");
		
		AGameHandlerOnline_C_TennisMatchComplete_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ShowResults
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ShowResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ShowResults");
		
		AGameHandlerOnline_C_ShowResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.GameOver
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::GameOver()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.GameOver");
		
		AGameHandlerOnline_C_GameOver_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnCapsule
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnCapsule");
		
		AGameHandlerOnline_C_SpawnCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.CapsuleOn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::CapsuleOn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CapsuleOn");
		
		AGameHandlerOnline_C_CapsuleOn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SetResults
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        ResultsGameResult                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SetResults(EGameResult ResultsGameResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetResults");
		
		AGameHandlerOnline_C_SetResults_Params params {};
		params.ResultsGameResult = ResultsGameResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.TrophyComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               AllAwardsComplete                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::TrophyComplete(bool AllAwardsComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrophyComplete");
		
		AGameHandlerOnline_C_TrophyComplete_Params params {};
		params.AllAwardsComplete = AllAwardsComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.TrophyReadyToSpawn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::TrophyReadyToSpawn(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrophyReadyToSpawn");
		
		AGameHandlerOnline_C_TrophyReadyToSpawn_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.CreateTrophyMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::CreateTrophyMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CreateTrophyMenu");
		
		AGameHandlerOnline_C_CreateTrophyMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.TrophyLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::TrophyLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrophyLoop");
		
		AGameHandlerOnline_C_TrophyLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.CreateNextFromResultsButton
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::CreateNextFromResultsButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.CreateNextFromResultsButton");
		
		AGameHandlerOnline_C_CreateNextFromResultsButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ResultsDoneSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::ResultsDoneSelected(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResultsDoneSelected");
		
		AGameHandlerOnline_C_ResultsDoneSelected_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReplayRequested
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::RemotePlayerReplayRequested(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReplayRequested");
		
		AGameHandlerOnline_C_RemotePlayerReplayRequested_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RestartMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RestartMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RestartMatch");
		
		AGameHandlerOnline_C_RestartMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::WaitingForRematch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematch");
		
		AGameHandlerOnline_C_WaitingForRematch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematchDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::WaitingForRematchDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.WaitingForRematchDisplayed");
		
		AGameHandlerOnline_C_WaitingForRematchDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.DoNothing
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::DoNothing(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.DoNothing");
		
		AGameHandlerOnline_C_DoNothing_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.BowlingMatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EGameResult                                        MatchResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::BowlingMatchComplete(EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BowlingMatchComplete");
		
		AGameHandlerOnline_C_BowlingMatchComplete_Params params {};
		params.MatchResult = MatchResult;
		params.Player1GamesWon = Player1GamesWon;
		params.Player2GamesWon = Player2GamesWon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.BaseballMatchComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LocalPlayerVictory                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            AwayScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HomeScore                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::BaseballMatchComplete(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BaseballMatchComplete");
		
		AGameHandlerOnline_C_BaseballMatchComplete_Params params {};
		params.LocalPlayerVictory = LocalPlayerVictory;
		params.AwayScore = AwayScore;
		params.HomeScore = HomeScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HeaderHandoffComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::HeaderHandoffComplete(class AActor* DestroyedActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeaderHandoffComplete");
		
		AGameHandlerOnline_C_HeaderHandoffComplete_Params params {};
		params.DestroyedActor = DestroyedActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnAvatarMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnAvatarMenu");
		
		AGameHandlerOnline_C_SpawnAvatarMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelected
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BBHostIsHomeTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::SportOptionsSelected(EScramSport Sport, bool BBHostIsHomeTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelected");
		
		AGameHandlerOnline_C_SportOptionsSelected_Params params {};
		params.Sport = Sport;
		params.BBHostIsHomeTeam = BBHostIsHomeTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Sport Chosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SportChosen(EScramSport Sport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Sport Chosen");
		
		AGameHandlerOnline_C_SportChosen_Params params {};
		params.Sport = Sport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameOptionsMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnGameOptionsMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnGameOptionsMenu");
		
		AGameHandlerOnline_C_SpawnGameOptionsMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsMenuDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SportOptionsMenuDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsMenuDisplayed");
		
		AGameHandlerOnline_C_SportOptionsMenuDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsChosen
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SportOptionsChosen(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsChosen");
		
		AGameHandlerOnline_C_SportOptionsChosen_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnGeoLevelChanged
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FName                                        NewGeoLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::OnGeoLevelChanged(const class FName& NewGeoLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnGeoLevelChanged");
		
		AGameHandlerOnline_C_OnGeoLevelChanged_Params params {};
		params.NewGeoLevel = NewGeoLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.PlayerInitComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::PlayerInitComplete(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayerInitComplete");
		
		AGameHandlerOnline_C_PlayerInitComplete_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnMatchStart
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnMatchStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnMatchStart");
		
		AGameHandlerOnline_C_OnMatchStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReceiveEndPlay");
		
		AGameHandlerOnline_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.FadeComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::FadeComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.FadeComplete");
		
		AGameHandlerOnline_C_FadeComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Shutdown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Shutdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Shutdown");
		
		AGameHandlerOnline_C_Shutdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnInitialPlayerInitComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::OnInitialPlayerInitComplete(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnInitialPlayerInitComplete");
		
		AGameHandlerOnline_C_OnInitialPlayerInitComplete_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::OnRemoteAvatarSelected(class AScramPlayer* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarSelected");
		
		AGameHandlerOnline_C_OnRemoteAvatarSelected_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ResultsDisplayComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               WideNextButton                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::ResultsDisplayComplete(bool WideNextButton)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResultsDisplayComplete");
		
		AGameHandlerOnline_C_ResultsDisplayComplete_Params params {};
		params.WideNextButton = WideNextButton;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.PlayMatchBeginAudio
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::PlayMatchBeginAudio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayMatchBeginAudio");
		
		AGameHandlerOnline_C_PlayMatchBeginAudio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatConnected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayerController*                      PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::HeartbeatConnected(class AScramPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatConnected");
		
		AGameHandlerOnline_C_HeartbeatConnected_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatDisconnected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayerController*                      PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::HeartbeatDisconnected(class AScramPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatDisconnected");
		
		AGameHandlerOnline_C_HeartbeatDisconnected_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatTravelCapsuleClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::HeartbeatTravelCapsuleClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatTravelCapsuleClosed");
		
		AGameHandlerOnline_C_HeartbeatTravelCapsuleClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatReconnected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPlayerController*                      PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::HeartbeatReconnected(class AScramPlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.HeartbeatReconnected");
		
		AGameHandlerOnline_C_HeartbeatReconnected_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnMenuInstruments
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnMenuInstruments()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnMenuInstruments");
		
		AGameHandlerOnline_C_SpawnMenuInstruments_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Net_AllPlayersReconnected
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Net_AllPlayersReconnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Net_AllPlayersReconnected");
		
		AGameHandlerOnline_C_Net_AllPlayersReconnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Local
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnDisconnect_Local()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Local");
		
		AGameHandlerOnline_C_OnDisconnect_Local_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnDisconnect_Remote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote");
		
		AGameHandlerOnline_C_OnDisconnect_Remote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu0
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnDisconnect_Remote_Menu0()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu0");
		
		AGameHandlerOnline_C_OnDisconnect_Remote_Menu0_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu1
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnDisconnect_Remote_Menu1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnDisconnect_Remote_Menu1");
		
		AGameHandlerOnline_C_OnDisconnect_Remote_Menu1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnGameOverMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnGameOverMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnGameOverMenu");
		
		AGameHandlerOnline_C_OnGameOverMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchOrResetMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnRematchOrResetMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchOrResetMenu");
		
		AGameHandlerOnline_C_SpawnRematchOrResetMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendSelectionMade
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::RematchWithFriendSelectionMade(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendSelectionMade");
		
		AGameHandlerOnline_C_RematchWithFriendSelectionMade_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RematchWithFriendOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RematchWithFriendOpened");
		
		AGameHandlerOnline_C_RematchWithFriendOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ReplayChooseSport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ReplayChooseSport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReplayChooseSport");
		
		AGameHandlerOnline_C_ReplayChooseSport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.MulticastReselectSport
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::MulticastReselectSport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MulticastReselectSport");
		
		AGameHandlerOnline_C_MulticastReselectSport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnRematchMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnRematchMenu");
		
		AGameHandlerOnline_C_SpawnRematchMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RematchChoiceMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::RematchChoiceMenu(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RematchChoiceMenu");
		
		AGameHandlerOnline_C_RematchChoiceMenu_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.DisconnectPauseEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::DisconnectPauseEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.DisconnectPauseEvent");
		
		AGameHandlerOnline_C_DisconnectPauseEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginning
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::MatchBeginning()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginning");
		
		AGameHandlerOnline_C_MatchBeginning_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnNetworkFailure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnNetworkFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnNetworkFailure");
		
		AGameHandlerOnline_C_OnNetworkFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.TrySpawnNetworkFailureMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::TrySpawnNetworkFailureMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.TrySpawnNetworkFailureMenu");
		
		AGameHandlerOnline_C_TrySpawnNetworkFailureMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailureMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnNetworkFailureMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailureMenu");
		
		AGameHandlerOnline_C_SpawnNetworkFailureMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureTravelCapsuleClosed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::NetworkFailureTravelCapsuleClosed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureTravelCapsuleClosed");
		
		AGameHandlerOnline_C_NetworkFailureTravelCapsuleClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.GamePaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::GamePaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.GamePaused");
		
		AGameHandlerOnline_C_GamePaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.GameUnpaused
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::GameUnpaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.GameUnpaused");
		
		AGameHandlerOnline_C_GameUnpaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarUnselected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OnRemoteAvatarUnselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OnRemoteAvatarUnselected");
		
		AGameHandlerOnline_C_OnRemoteAvatarUnselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ExitConfirmResult
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::ExitConfirmResult(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ExitConfirmResult");
		
		AGameHandlerOnline_C_ExitConfirmResult_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.WaitinForHostMessageReady
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::WaitinForHostMessageReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.WaitinForHostMessageReady");
		
		AGameHandlerOnline_C_WaitinForHostMessageReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.QuitSelectedPauseMenu
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::QuitSelectedPauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.QuitSelectedPauseMenu");
		
		AGameHandlerOnline_C_QuitSelectedPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OverrideHostReady
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::OverrideHostReady(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OverrideHostReady");
		
		AGameHandlerOnline_C_OverrideHostReady_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OverrideClientReady
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Ready                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::OverrideClientReady(bool Ready)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OverrideClientReady");
		
		AGameHandlerOnline_C_OverrideClientReady_Params params {};
		params.Ready = Ready;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReadyAgain
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RemotePlayerReadyAgain()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RemotePlayerReadyAgain");
		
		AGameHandlerOnline_C_RemotePlayerReadyAgain_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.QuitViaPause
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::QuitViaPause()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.QuitViaPause");
		
		AGameHandlerOnline_C_QuitViaPause_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ResetFromPauseMenu
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ResetFromPauseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ResetFromPauseMenu");
		
		AGameHandlerOnline_C_ResetFromPauseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SendClientExpectedState
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOnlineGameHandlerClientStates                     ExpectedClientState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SendClientExpectedState(EOnlineGameHandlerClientStates ExpectedClientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SendClientExpectedState");
		
		AGameHandlerOnline_C_SendClientExpectedState_Params params {};
		params.ExpectedClientState = ExpectedClientState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SendHostExpectedState
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOnlineGameHandlerClientStates                     ExpectedClientState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::SendHostExpectedState(EOnlineGameHandlerClientStates ExpectedClientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SendHostExpectedState");
		
		AGameHandlerOnline_C_SendHostExpectedState_Params params {};
		params.ExpectedClientState = ExpectedClientState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RequestHostExpectedState
	 * 		Flags  -> (Net, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RequestHostExpectedState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RequestHostExpectedState");
		
		AGameHandlerOnline_C_RequestHostExpectedState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RequestClientExpected
	 * 		Flags  -> (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RequestClientExpected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RequestClientExpected");
		
		AGameHandlerOnline_C_RequestClientExpected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelectedClientOnly
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EScramSport                                        Sport                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               BBHostIsHomeTeam                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AGameHandlerOnline_C::SportOptionsSelectedClientOnly(EScramSport Sport, bool BBHostIsHomeTeam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SportOptionsSelectedClientOnly");
		
		AGameHandlerOnline_C_SportOptionsSelectedClientOnly_Params params {};
		params.Sport = Sport;
		params.BBHostIsHomeTeam = BBHostIsHomeTeam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.RequestSportOptionsSelected
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::RequestSportOptionsSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.RequestSportOptionsSelected");
		
		AGameHandlerOnline_C_RequestSportOptionsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ForfeitResults
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ForfeitResults()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ForfeitResults");
		
		AGameHandlerOnline_C_ForfeitResults_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnChooseSport()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnChooseSport");
		
		AGameHandlerOnline_C_SpawnChooseSport_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.InitialMessageDisplayed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::InitialMessageDisplayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.InitialMessageDisplayed");
		
		AGameHandlerOnline_C_InitialMessageDisplayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ShowConnctionMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ShowConnctionMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ShowConnctionMessage");
		
		AGameHandlerOnline_C_ShowConnctionMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::NetworkFailureExit(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.NetworkFailureExit");
		
		AGameHandlerOnline_C_NetworkFailureExit_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailure
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SpawnNetworkFailure()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SpawnNetworkFailure");
		
		AGameHandlerOnline_C_SpawnNetworkFailure_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.PlayForfeitMusic
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::PlayForfeitMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.PlayForfeitMusic");
		
		AGameHandlerOnline_C_PlayForfeitMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginTravelCapsuleOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::MatchBeginTravelCapsuleOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MatchBeginTravelCapsuleOpened");
		
		AGameHandlerOnline_C_MatchBeginTravelCapsuleOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ServerReady
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ServerReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ServerReady");
		
		AGameHandlerOnline_C_ServerReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Multi_Initialize
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Multi_Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Multi_Initialize");
		
		AGameHandlerOnline_C_Multi_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.BackToChooseSport
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::BackToChooseSport(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BackToChooseSport");
		
		AGameHandlerOnline_C_BackToChooseSport_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.StartTravel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::StartTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.StartTravel");
		
		AGameHandlerOnline_C_StartTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanTravel
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SetClientCanTravel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanTravel");
		
		AGameHandlerOnline_C_SetClientCanTravel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.BeginMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::BeginMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.BeginMatch");
		
		AGameHandlerOnline_C_BeginMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanBeginMatch
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::SetClientCanBeginMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.SetClientCanBeginMatch");
		
		AGameHandlerOnline_C_SetClientCanBeginMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.Multi_BeginMatchOpenCapsule
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::Multi_BeginMatchOpenCapsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.Multi_BeginMatchOpenCapsule");
		
		AGameHandlerOnline_C_Multi_BeginMatchOpenCapsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessageOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ConnectionMessageOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessageOpened");
		
		AGameHandlerOnline_C_ConnectionMessageOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessage
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::ConnectionMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ConnectionMessage");
		
		AGameHandlerOnline_C_ConnectionMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ExecuteUbergraph_GameHandlerOnline
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::ExecuteUbergraph_GameHandlerOnline(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ExecuteUbergraph_GameHandlerOnline");
		
		AGameHandlerOnline_C_ExecuteUbergraph_GameHandlerOnline_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.ReturnExpectedClientState__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EOnlineGameHandlerClientStates                     RemotePlayerExpectedClientState                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AGameHandlerOnline_C::ReturnExpectedClientState__DelegateSignature(EOnlineGameHandlerClientStates RemotePlayerExpectedClientState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.ReturnExpectedClientState__DelegateSignature");
		
		AGameHandlerOnline_C_ReturnExpectedClientState__DelegateSignature_Params params {};
		params.RemotePlayerExpectedClientState = RemotePlayerExpectedClientState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.OldMenuClear__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::OldMenuClear__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.OldMenuClear__DelegateSignature");
		
		AGameHandlerOnline_C_OldMenuClear__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function GameHandlerOnline.GameHandlerOnline_C.MenuOpened__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AGameHandlerOnline_C::MenuOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GameHandlerOnline.GameHandlerOnline_C.MenuOpened__DelegateSignature");
		
		AGameHandlerOnline_C_MenuOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AGameHandlerOnline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AGameHandlerOnline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerOnline.GameHandlerOnline_C");
		return ptr;
	}

}


