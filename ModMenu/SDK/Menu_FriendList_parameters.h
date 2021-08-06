#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Menu_FriendList.Menu_FriendList_C.EnableMenuInput
struct AMenu_FriendList_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_FriendList.Menu_FriendList_C.DisableMenuInput
struct AMenu_FriendList_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_FriendList.Menu_FriendList_C.RemoveSubMenu
struct AMenu_FriendList_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_FriendList.Menu_FriendList_C.HideSubMenu
struct AMenu_FriendList_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_FriendList.Menu_FriendList_C.RestoreSubMenu
struct AMenu_FriendList_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_FriendList.Menu_FriendList_C.ShowMessage
struct AMenu_FriendList_C_ShowMessage_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.HideMessage
struct AMenu_FriendList_C_HideMessage_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.UpdateView
struct AMenu_FriendList_C_UpdateView_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.BuildLists
struct AMenu_FriendList_C_BuildLists_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.Initialize
struct AMenu_FriendList_C_Initialize_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.UserConstructionScript
struct AMenu_FriendList_C_UserConstructionScript_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.ReceiveBeginPlay
struct AMenu_FriendList_C_ReceiveBeginPlay_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.ReceiveTick
struct AMenu_FriendList_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.ReceiveEndPlay
struct AMenu_FriendList_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.ButtonPressed
struct AMenu_FriendList_C_ButtonPressed_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedInvite
struct AMenu_FriendList_C_ButtonSwappedInvite_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.PreviousButtonPressed
struct AMenu_FriendList_C_PreviousButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.NextButtonPressed
struct AMenu_FriendList_C_NextButtonPressed_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedJoin
struct AMenu_FriendList_C_ButtonSwappedJoin_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.DismissInvite
struct AMenu_FriendList_C_DismissInvite_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.RefreshData
struct AMenu_FriendList_C_RefreshData_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.OnGetFriends
struct AMenu_FriendList_C_OnGetFriends_Params
{
	bool                                               wasSuccessful;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FScramFriend>                        friends;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_FriendList.Menu_FriendList_C.InvitesChecked
struct AMenu_FriendList_C_InvitesChecked_Params
{
	bool                                               wasSuccessful;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<struct FScramGameInvite>                    invites;                                                   // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Menu_FriendList.Menu_FriendList_C.ButtonPressedNoSelection
struct AMenu_FriendList_C_ButtonPressedNoSelection_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.ButtonUntouched
struct AMenu_FriendList_C_ButtonUntouched_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.NewInvite
struct AMenu_FriendList_C_NewInvite_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.ExecuteUbergraph_Menu_FriendList
struct AMenu_FriendList_C_ExecuteUbergraph_Menu_FriendList_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_FriendList.Menu_FriendList_C.ConnectionFailure__DelegateSignature
struct AMenu_FriendList_C_ConnectionFailure__DelegateSignature_Params
{
};

// Function Menu_FriendList.Menu_FriendList_C.JoinPlayer__DelegateSignature
struct AMenu_FriendList_C_JoinPlayer__DelegateSignature_Params
{
	struct FScramGameInvite                            JoinPlayer;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_FriendList.Menu_FriendList_C.InvitePlayer__DelegateSignature
struct AMenu_FriendList_C_InvitePlayer__DelegateSignature_Params
{
	struct FScramFriend                                InvitePlayer;                                              // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Menu_FriendList.Menu_FriendList_C.SelectionStarted__DelegateSignature
struct AMenu_FriendList_C_SelectionStarted__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
