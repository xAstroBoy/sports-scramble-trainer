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
	 * Function DebugMainMenu.DebugMainMenu_C.DestroyDebugMainMenu
	 */
	struct ADebugMainMenu_C_DestroyDebugMainMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.DestroyGameActors
	 */
	struct ADebugMainMenu_C_DestroyGameActors_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.BindTestActor
	 */
	struct ADebugMainMenu_C_BindTestActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CreateGameSelector
	 */
	struct ADebugMainMenu_C_CreateGameSelector_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.LoadHub
	 */
	struct ADebugMainMenu_C_LoadHub_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.GlobalCleanup
	 */
	struct ADebugMainMenu_C_GlobalCleanup_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Initialize
	 */
	struct ADebugMainMenu_C_Initialize_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.UserConstructionScript
	 */
	struct ADebugMainMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Timeline_ScaleDebutMenu__FinishedFunc
	 */
	struct ADebugMainMenu_C_Timeline_ScaleDebutMenu__FinishedFunc_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Timeline_ScaleDebutMenu__UpdateFunc
	 */
	struct ADebugMainMenu_C_Timeline_ScaleDebutMenu__UpdateFunc_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnFailure_FE43AE584DB619A31AB355837624ACB1
	 */
	struct ADebugMainMenu_C_OnFailure_FE43AE584DB619A31AB355837624ACB1_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccess_FE43AE584DB619A31AB355837624ACB1
	 */
	struct ADebugMainMenu_C_OnSuccess_FE43AE584DB619A31AB355837624ACB1_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnFailure_CB7A18C444F2E804805EC3A034E45049
	 */
	struct ADebugMainMenu_C_OnFailure_CB7A18C444F2E804805EC3A034E45049_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccess_CB7A18C444F2E804805EC3A034E45049
	 */
	struct ADebugMainMenu_C_OnSuccess_CB7A18C444F2E804805EC3A034E45049_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnCancel_E743FFE14EFCF26E822A9C9F86551D97
	 */
	struct ADebugMainMenu_C_OnCancel_E743FFE14EFCF26E822A9C9F86551D97_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnTimeout_E743FFE14EFCF26E822A9C9F86551D97
	 */
	struct ADebugMainMenu_C_OnTimeout_E743FFE14EFCF26E822A9C9F86551D97_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnFailure_E743FFE14EFCF26E822A9C9F86551D97
	 */
	struct ADebugMainMenu_C_OnFailure_E743FFE14EFCF26E822A9C9F86551D97_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccessClient_E743FFE14EFCF26E822A9C9F86551D97
	 */
	struct ADebugMainMenu_C_OnSuccessClient_E743FFE14EFCF26E822A9C9F86551D97_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccessHost_E743FFE14EFCF26E822A9C9F86551D97
	 */
	struct ADebugMainMenu_C_OnSuccessHost_E743FFE14EFCF26E822A9C9F86551D97_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnFailure_F616CB334D1CC99D841975AF7AC92006
	 */
	struct ADebugMainMenu_C_OnFailure_F616CB334D1CC99D841975AF7AC92006_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccess_F616CB334D1CC99D841975AF7AC92006
	 */
	struct ADebugMainMenu_C_OnSuccess_F616CB334D1CC99D841975AF7AC92006_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnFailure_3315261D4C69B45B41D5C69D9651E093
	 */
	struct ADebugMainMenu_C_OnFailure_3315261D4C69B45B41D5C69D9651E093_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccess_3315261D4C69B45B41D5C69D9651E093
	 */
	struct ADebugMainMenu_C_OnSuccess_3315261D4C69B45B41D5C69D9651E093_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnFailure_967B8F434732D5BD94D7A48E995A66A5
	 */
	struct ADebugMainMenu_C_OnFailure_967B8F434732D5BD94D7A48E995A66A5_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnSuccess_967B8F434732D5BD94D7A48E995A66A5
	 */
	struct ADebugMainMenu_C_OnSuccess_967B8F434732D5BD94D7A48E995A66A5_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ReceiveBeginPlay
	 */
	struct ADebugMainMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ReturnToHub
	 */
	struct ADebugMainMenu_C_ReturnToHub_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.LoadHubReady
	 */
	struct ADebugMainMenu_C_LoadHubReady_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.GameSelected
	 */
	struct ADebugMainMenu_C_GameSelected_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.SpawnDebugTopMenu
	 */
	struct ADebugMainMenu_C_SpawnDebugTopMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.MultiplayerCanceled
	 */
	struct ADebugMainMenu_C_MultiplayerCanceled_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.StartTennis
	 */
	struct ADebugMainMenu_C_StartTennis_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.SpawnTestsMenu
	 */
	struct ADebugMainMenu_C_SpawnTestsMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.TestChoiceMade
	 */
	struct ADebugMainMenu_C_TestChoiceMade_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.TestOver
	 */
	struct ADebugMainMenu_C_TestOver_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.TeleportToVenue
	 */
	struct ADebugMainMenu_C_TeleportToVenue_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       TrainingLevel;                                           // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_M498[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                LevelOverride;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.LoadGameplayLevel
	 */
	struct ADebugMainMenu_C_LoadGameplayLevel_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.RemoveTravelTunnel
	 */
	struct ADebugMainMenu_C_RemoveTravelTunnel_Params
	{
	public:
		class FName                                                NewGeoLevel;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomLevelLoaded
	 */
	struct ADebugMainMenu_C_CustomLevelLoaded_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.HubLoaded
	 */
	struct ADebugMainMenu_C_HubLoaded_Params
	{
	public:
		class FName                                                NewPrimaryLevel;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ReceiveTick
	 */
	struct ADebugMainMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.SpawnGameSelector
	 */
	struct ADebugMainMenu_C_SpawnGameSelector_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.MatchmakingChoiceMade
	 */
	struct ADebugMainMenu_C_MatchmakingChoiceMade_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Spawn Matchmaking Cancel Menu
	 */
	struct ADebugMainMenu_C_SpawnMatchmakingCancelMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Spawn Matchmaking Prefs Menu
	 */
	struct ADebugMainMenu_C_SpawnMatchmakingPrefsMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.PrefsChoiceMade
	 */
	struct ADebugMainMenu_C_PrefsChoiceMade_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.OnGetFriends
	 */
	struct ADebugMainMenu_C_OnGetFriends_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BZ1L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramFriend>                                friends;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.InviteAccepted
	 */
	struct ADebugMainMenu_C_InviteAccepted_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.InviteFriend
	 */
	struct ADebugMainMenu_C_InviteFriend_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Cancel Invite Friend
	 */
	struct ADebugMainMenu_C_CancelInviteFriend_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.Refresh Complete
	 */
	struct ADebugMainMenu_C_RefreshComplete_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4YST[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.DoneWithAvatarMenu
	 */
	struct ADebugMainMenu_C_DoneWithAvatarMenu_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_1
	 */
	struct ADebugMainMenu_C_CustomEvent_1_Params
	{
	public:
		bool                                                       AllAwardsComplete;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent
	 */
	struct ADebugMainMenu_C_CustomEvent_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_2
	 */
	struct ADebugMainMenu_C_CustomEvent_2_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ScaleUpMenu
	 */
	struct ADebugMainMenu_C_ScaleUpMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ScaleDownMenu
	 */
	struct ADebugMainMenu_C_ScaleDownMenu_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_3
	 */
	struct ADebugMainMenu_C_CustomEvent_3_Params
	{
	public:
		bool                                                       AllAwardsComplete;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_4
	 */
	struct ADebugMainMenu_C_CustomEvent_4_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_6
	 */
	struct ADebugMainMenu_C_CustomEvent_6_Params
	{
	public:
		bool                                                       AllAwardsComplete;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_7
	 */
	struct ADebugMainMenu_C_CustomEvent_7_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_9
	 */
	struct ADebugMainMenu_C_CustomEvent_9_Params
	{
	public:
		bool                                                       AllAwardsComplete;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_10
	 */
	struct ADebugMainMenu_C_CustomEvent_10_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_11
	 */
	struct ADebugMainMenu_C_CustomEvent_11_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_5
	 */
	struct ADebugMainMenu_C_CustomEvent_5_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_8
	 */
	struct ADebugMainMenu_C_CustomEvent_8_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_12
	 */
	struct ADebugMainMenu_C_CustomEvent_12_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_13
	 */
	struct ADebugMainMenu_C_CustomEvent_13_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_14
	 */
	struct ADebugMainMenu_C_CustomEvent_14_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_15
	 */
	struct ADebugMainMenu_C_CustomEvent_15_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_16
	 */
	struct ADebugMainMenu_C_CustomEvent_16_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_17
	 */
	struct ADebugMainMenu_C_CustomEvent_17_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_18
	 */
	struct ADebugMainMenu_C_CustomEvent_18_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.CustomEvent_19
	 */
	struct ADebugMainMenu_C_CustomEvent_19_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ExecuteUbergraph_DebugMainMenu
	 */
	struct ADebugMainMenu_C_ExecuteUbergraph_DebugMainMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AO0F[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.LevelReady__DelegateSignature
	 */
	struct ADebugMainMenu_C_LevelReady__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.DebugTopMenuDeactivated__DelegateSignature
	 */
	struct ADebugMainMenu_C_DebugTopMenuDeactivated__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.DebugTopMenuActive__DelegateSignature
	 */
	struct ADebugMainMenu_C_DebugTopMenuActive__DelegateSignature_Params
	{	};

	/**
	 * Function DebugMainMenu.DebugMainMenu_C.ShowMainMenu__DelegateSignature
	 */
	struct ADebugMainMenu_C_ShowMainMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
