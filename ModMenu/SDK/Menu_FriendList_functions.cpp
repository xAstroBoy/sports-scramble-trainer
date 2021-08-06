// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Menu_FriendList.Menu_FriendList_C.EnableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputEnabled                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_FriendList_C::EnableMenuInput(bool* InputEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.EnableMenuInput");

	AMenu_FriendList_C_EnableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputEnabled != nullptr)
		*InputEnabled = params.InputEnabled;

}


// Function Menu_FriendList.Menu_FriendList_C.DisableMenuInput
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           InputDisabled                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_FriendList_C::DisableMenuInput(bool* InputDisabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.DisableMenuInput");

	AMenu_FriendList_C_DisableMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputDisabled != nullptr)
		*InputDisabled = params.InputDisabled;

}


// Function Menu_FriendList.Menu_FriendList_C.RemoveSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Removed                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_FriendList_C::RemoveSubMenu(bool* Removed)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.RemoveSubMenu");

	AMenu_FriendList_C_RemoveSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Removed != nullptr)
		*Removed = params.Removed;

}


// Function Menu_FriendList.Menu_FriendList_C.HideSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuHidden                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_FriendList_C::HideSubMenu(bool* MenuHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.HideSubMenu");

	AMenu_FriendList_C_HideSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuHidden != nullptr)
		*MenuHidden = params.MenuHidden;

}


// Function Menu_FriendList.Menu_FriendList_C.RestoreSubMenu
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           MenuShown                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void AMenu_FriendList_C::RestoreSubMenu(bool* MenuShown)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.RestoreSubMenu");

	AMenu_FriendList_C_RestoreSubMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MenuShown != nullptr)
		*MenuShown = params.MenuShown;

}


// Function Menu_FriendList.Menu_FriendList_C.ShowMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::ShowMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ShowMessage");

	AMenu_FriendList_C_ShowMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.HideMessage
// (Public, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::HideMessage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.HideMessage");

	AMenu_FriendList_C_HideMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.UpdateView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::UpdateView()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.UpdateView");

	AMenu_FriendList_C_UpdateView_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.BuildLists
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::BuildLists()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.BuildLists");

	AMenu_FriendList_C_BuildLists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::Initialize()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.Initialize");

	AMenu_FriendList_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.UserConstructionScript");

	AMenu_FriendList_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
void AMenu_FriendList_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ReceiveBeginPlay");

	AMenu_FriendList_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ReceiveTick");

	AMenu_FriendList_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<Engine_EEndPlayReason> EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ReceiveEndPlay");

	AMenu_FriendList_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ButtonPressed(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonPressed");

	AMenu_FriendList_C_ButtonPressed_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ButtonSwappedInvite(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedInvite");

	AMenu_FriendList_C_ButtonSwappedInvite_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.PreviousButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::PreviousButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.PreviousButtonPressed");

	AMenu_FriendList_C_PreviousButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.NextButtonPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonId                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::NextButtonPressed(int ButtonId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.NextButtonPressed");

	AMenu_FriendList_C_NextButtonPressed_Params params;
	params.ButtonId = ButtonId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedJoin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ButtonSwappedJoin(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedJoin");

	AMenu_FriendList_C_ButtonSwappedJoin_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.DismissInvite
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::DismissInvite(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.DismissInvite");

	AMenu_FriendList_C_DismissInvite_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.RefreshData
// (BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.RefreshData");

	AMenu_FriendList_C_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.OnGetFriends
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramFriend>    friends                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AMenu_FriendList_C::OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.OnGetFriends");

	AMenu_FriendList_C_OnGetFriends_Params params;
	params.wasSuccessful = wasSuccessful;
	params.friends = friends;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.InvitesChecked
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           wasSuccessful                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FScramGameInvite> invites                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
void AMenu_FriendList_C::InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.InvitesChecked");

	AMenu_FriendList_C_InvitesChecked_Params params;
	params.wasSuccessful = wasSuccessful;
	params.invites = invites;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ButtonPressedNoSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ButtonPressedNoSelection(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonPressedNoSelection");

	AMenu_FriendList_C_ButtonPressedNoSelection_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ButtonUntouched
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ButtonUntouched(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ButtonUntouched");

	AMenu_FriendList_C_ButtonUntouched_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.NewInvite
// (BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::NewInvite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.NewInvite");

	AMenu_FriendList_C_NewInvite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ExecuteUbergraph_Menu_FriendList
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::ExecuteUbergraph_Menu_FriendList(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ExecuteUbergraph_Menu_FriendList");

	AMenu_FriendList_C_ExecuteUbergraph_Menu_FriendList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.ConnectionFailure__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
void AMenu_FriendList_C::ConnectionFailure__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.ConnectionFailure__DelegateSignature");

	AMenu_FriendList_C_ConnectionFailure__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.JoinPlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramGameInvite        JoinPlayer                     (BlueprintVisible, BlueprintReadOnly, Parm)
void AMenu_FriendList_C::JoinPlayer__DelegateSignature(const struct FScramGameInvite& JoinPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.JoinPlayer__DelegateSignature");

	AMenu_FriendList_C_JoinPlayer__DelegateSignature_Params params;
	params.JoinPlayer = JoinPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.InvitePlayer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FScramFriend            InvitePlayer                   (BlueprintVisible, BlueprintReadOnly, Parm)
void AMenu_FriendList_C::InvitePlayer__DelegateSignature(const struct FScramFriend& InvitePlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.InvitePlayer__DelegateSignature");

	AMenu_FriendList_C_InvitePlayer__DelegateSignature_Params params;
	params.InvitePlayer = InvitePlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Menu_FriendList.Menu_FriendList_C.SelectionStarted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMenu_FriendList_C::SelectionStarted__DelegateSignature(int ID)
{
	static auto fn = UObject::FindObject<UFunction>("Function Menu_FriendList.Menu_FriendList_C.SelectionStarted__DelegateSignature");

	AMenu_FriendList_C_SelectionStarted__DelegateSignature_Params params;
	params.ID = ID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
