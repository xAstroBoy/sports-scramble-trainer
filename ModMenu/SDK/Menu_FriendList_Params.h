#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Menu_FriendList.Menu_FriendList_C.EnableMenuInput
	 */
	struct AMenu_FriendList_C_EnableMenuInput_Params
	{
	public:
		bool                                                       InputEnabled;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_MZDB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.DisableMenuInput
	 */
	struct AMenu_FriendList_C_DisableMenuInput_Params
	{
	public:
		bool                                                       InputDisabled;                                           // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E2CD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.RemoveSubMenu
	 */
	struct AMenu_FriendList_C_RemoveSubMenu_Params
	{
	public:
		bool                                                       Removed;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.HideSubMenu
	 */
	struct AMenu_FriendList_C_HideSubMenu_Params
	{
	public:
		bool                                                       MenuHidden;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.RestoreSubMenu
	 */
	struct AMenu_FriendList_C_RestoreSubMenu_Params
	{
	public:
		bool                                                       MenuShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ShowMessage
	 */
	struct AMenu_FriendList_C_ShowMessage_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.HideMessage
	 */
	struct AMenu_FriendList_C_HideMessage_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.UpdateView
	 */
	struct AMenu_FriendList_C_UpdateView_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.BuildLists
	 */
	struct AMenu_FriendList_C_BuildLists_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.Initialize
	 */
	struct AMenu_FriendList_C_Initialize_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.UserConstructionScript
	 */
	struct AMenu_FriendList_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ReceiveBeginPlay
	 */
	struct AMenu_FriendList_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ReceiveTick
	 */
	struct AMenu_FriendList_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ReceiveEndPlay
	 */
	struct AMenu_FriendList_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ButtonPressed
	 */
	struct AMenu_FriendList_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedInvite
	 */
	struct AMenu_FriendList_C_ButtonSwappedInvite_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.PreviousButtonPressed
	 */
	struct AMenu_FriendList_C_PreviousButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.NextButtonPressed
	 */
	struct AMenu_FriendList_C_NextButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ButtonSwappedJoin
	 */
	struct AMenu_FriendList_C_ButtonSwappedJoin_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.DismissInvite
	 */
	struct AMenu_FriendList_C_DismissInvite_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.RefreshData
	 */
	struct AMenu_FriendList_C_RefreshData_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.OnGetFriends
	 */
	struct AMenu_FriendList_C_OnGetFriends_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Y080[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramFriend>                                friends;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.InvitesChecked
	 */
	struct AMenu_FriendList_C_InvitesChecked_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KGP8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ButtonPressedNoSelection
	 */
	struct AMenu_FriendList_C_ButtonPressedNoSelection_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ButtonUntouched
	 */
	struct AMenu_FriendList_C_ButtonUntouched_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.NewInvite
	 */
	struct AMenu_FriendList_C_NewInvite_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ExecuteUbergraph_Menu_FriendList
	 */
	struct AMenu_FriendList_C_ExecuteUbergraph_Menu_FriendList_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.ConnectionFailure__DelegateSignature
	 */
	struct AMenu_FriendList_C_ConnectionFailure__DelegateSignature_Params
	{	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.JoinPlayer__DelegateSignature
	 */
	struct AMenu_FriendList_C_JoinPlayer__DelegateSignature_Params
	{
	public:
		struct FScramGameInvite                                    JoinPlayer;                                              // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.InvitePlayer__DelegateSignature
	 */
	struct AMenu_FriendList_C_InvitePlayer__DelegateSignature_Params
	{
	public:
		struct FScramFriend                                        InvitePlayer;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Menu_FriendList.Menu_FriendList_C.SelectionStarted__DelegateSignature
	 */
	struct AMenu_FriendList_C_SelectionStarted__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
