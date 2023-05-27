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
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.EnableMenuInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputEnabled                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_FriendList_C::EnableMenuInput(bool* InputEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.EnableMenuInput");
		
		AMenu_FriendList_C_EnableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputEnabled != nullptr)
			*InputEnabled = params.InputEnabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.DisableMenuInput
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               InputDisabled                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_FriendList_C::DisableMenuInput(bool* InputDisabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.DisableMenuInput");
		
		AMenu_FriendList_C_DisableMenuInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InputDisabled != nullptr)
			*InputDisabled = params.InputDisabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.RemoveSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_FriendList_C::RemoveSubMenu(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.RemoveSubMenu");
		
		AMenu_FriendList_C_RemoveSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.HideSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MenuHidden                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_FriendList_C::HideSubMenu(bool* MenuHidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.HideSubMenu");
		
		AMenu_FriendList_C_HideSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuHidden != nullptr)
			*MenuHidden = params.MenuHidden;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.RestoreSubMenu
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               MenuShown                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AMenu_FriendList_C::RestoreSubMenu(bool* MenuShown)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.RestoreSubMenu");
		
		AMenu_FriendList_C_RestoreSubMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MenuShown != nullptr)
			*MenuShown = params.MenuShown;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ShowMessage
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::ShowMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ShowMessage");
		
		AMenu_FriendList_C_ShowMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.HideMessage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::HideMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.HideMessage");
		
		AMenu_FriendList_C_HideMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.UpdateView
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::UpdateView()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.UpdateView");
		
		AMenu_FriendList_C_UpdateView_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.BuildLists
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::BuildLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.BuildLists");
		
		AMenu_FriendList_C_BuildLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.Initialize");
		
		AMenu_FriendList_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.UserConstructionScript");
		
		AMenu_FriendList_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AMenu_FriendList_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ReceiveBeginPlay");
		
		AMenu_FriendList_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ReceiveTick");
		
		AMenu_FriendList_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ReceiveEndPlay");
		
		AMenu_FriendList_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ButtonPressed(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonPressed");
		
		AMenu_FriendList_C_ButtonPressed_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedInvite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ButtonSwappedInvite(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedInvite");
		
		AMenu_FriendList_C_ButtonSwappedInvite_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.PreviousButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::PreviousButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.PreviousButtonPressed");
		
		AMenu_FriendList_C_PreviousButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.NextButtonPressed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::NextButtonPressed(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.NextButtonPressed");
		
		AMenu_FriendList_C_NextButtonPressed_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedJoin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ButtonSwappedJoin(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedJoin");
		
		AMenu_FriendList_C_ButtonSwappedJoin_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.DismissInvite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::DismissInvite(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.DismissInvite");
		
		AMenu_FriendList_C_DismissInvite_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.RefreshData
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::RefreshData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.RefreshData");
		
		AMenu_FriendList_C_RefreshData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.OnGetFriends
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramFriend>                        friends                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AMenu_FriendList_C::OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.OnGetFriends");
		
		AMenu_FriendList_C_OnGetFriends_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.friends = friends;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.InvitesChecked
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               wasSuccessful                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<struct FScramGameInvite>                    invites                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void AMenu_FriendList_C::InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.InvitesChecked");
		
		AMenu_FriendList_C_InvitesChecked_Params params {};
		params.wasSuccessful = wasSuccessful;
		params.invites = invites;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ButtonPressedNoSelection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ButtonPressedNoSelection(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonPressedNoSelection");
		
		AMenu_FriendList_C_ButtonPressedNoSelection_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ButtonUntouched
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ButtonUntouched(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonUntouched");
		
		AMenu_FriendList_C_ButtonUntouched_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.NewInvite
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::NewInvite()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.NewInvite");
		
		AMenu_FriendList_C_NewInvite_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ExecuteUbergraph_Menu_FriendList
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::ExecuteUbergraph_Menu_FriendList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ExecuteUbergraph_Menu_FriendList");
		
		AMenu_FriendList_C_ExecuteUbergraph_Menu_FriendList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.ConnectionFailure__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void AMenu_FriendList_C::ConnectionFailure__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ConnectionFailure__DelegateSignature");
		
		AMenu_FriendList_C_ConnectionFailure__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.JoinPlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramGameInvite                            JoinPlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMenu_FriendList_C::JoinPlayer__DelegateSignature(const struct FScramGameInvite& JoinPlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.JoinPlayer__DelegateSignature");
		
		AMenu_FriendList_C_JoinPlayer__DelegateSignature_Params params {};
		params.JoinPlayer = JoinPlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.InvitePlayer__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FScramFriend                                InvitePlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void AMenu_FriendList_C::InvitePlayer__DelegateSignature(const struct FScramFriend& InvitePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.InvitePlayer__DelegateSignature");
		
		AMenu_FriendList_C_InvitePlayer__DelegateSignature_Params params {};
		params.InvitePlayer = InvitePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function Menu_FriendList.Menu_FriendList_C.SelectionStarted__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AMenu_FriendList_C::SelectionStarted__DelegateSignature(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.SelectionStarted__DelegateSignature");
		
		AMenu_FriendList_C_SelectionStarted__DelegateSignature_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AMenu_FriendList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AMenu_FriendList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Menu_FriendList.Menu_FriendList_C");
		return ptr;
	}

}


