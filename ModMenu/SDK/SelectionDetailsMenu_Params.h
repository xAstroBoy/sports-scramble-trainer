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
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnChooseSportMenu_Params
	{
	public:
		class FScriptDelegate                                      Choice;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      ButtonPressed;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetArrayFromRefs
	 */
	struct ASelectionDetailsMenu_C_GetArrayFromRefs_Params
	{
	public:
		unsigned char                                              UnknownData_4AEN[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UTexture2D*>                                  Images;                                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAnnouncerButton
	 */
	struct ASelectionDetailsMenu_C_SpawnAnnouncerButton_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailsafeDoubleMenu
	 */
	struct ASelectionDetailsMenu_C_FailsafeDoubleMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnConfirmationMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnConfirmationMenu_Params
	{
	public:
		class FName                                                LocText;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                OverrideText;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FScriptDelegate                                      Event;                                                   // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnJoinInviteMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnJoinInviteMenu_Params
	{
	public:
		class FScriptDelegate                                      JoinEvent;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      DismissEvent;                                            // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnQpDetailsMenu_Params
	{
	public:
		class FScriptDelegate                                      EditEvent;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      SpawnNavEvent;                                           // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class AMenu_QpDetails_C*                                   Menu;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTeamColor
	 */
	struct ASelectionDetailsMenu_C_UpdateTeamColor_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnEditAvatarMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnEditAvatarMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnAvatarButton
	 */
	struct ASelectionDetailsMenu_C_SpawnAvatarButton_Params
	{
	public:
		class FScriptDelegate                                      AvatarEvent;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInfoButton
	 */
	struct ASelectionDetailsMenu_C_SpawnInfoButton_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptionsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnTrainingOptionsMenu_Params
	{
	public:
		class FScriptDelegate                                      MenuLoaded;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendListMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnFriendListMenu_Params
	{
	public:
		TArray<struct FScramFriend>                                FriendsList;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<struct FScramGameInvite>                            InviteList;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FScriptDelegate                                      InviteEvent;                                             // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      JoinEvent;                                               // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      FailEvent;                                               // 0x0040(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnMessageMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnMessageMenu_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TimerDisplay;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_56RX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChooseSportsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnChooseSportsMenu_Params
	{
	public:
		class FScriptDelegate                                      UpdateButtonEvent;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.Spawn3DImageButtonMenu
	 */
	struct ASelectionDetailsMenu_C_Spawn3DImageButtonMenu_Params
	{
	public:
		TArray<class FName>                                        LocTextNames;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UTexture2D*>                                  ImagesL;                                                 // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UTexture2D*>                                  ImagesR;                                                 // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FScriptDelegate                                      Event;                                                   // 0x0030(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.AwardsEarned?
	 */
	struct ASelectionDetailsMenu_C_AwardsEarned_Params
	{
	public:
		bool                                                       AwardWaiting;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S5LJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrophyAvatarNotification
	 */
	struct ASelectionDetailsMenu_C_SpawnTrophyAvatarNotification_Params
	{
	public:
		class FScriptDelegate                                      AwardReadyEvent;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnResultsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnResultsMenu_Params
	{
	public:
		class FScriptDelegate                                      ResultsCompleteEvent;                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameDetailsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnGameDetailsMenu_Params
	{
	public:
		EGameModeTypes                                             Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9B2M[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AMenu_GameDetails_C*                                 Menu;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnSportOptionsMenu_Params
	{
	public:
		class AMenu_SportOptions_C*                                Menu;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X1GW[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPnpWinner
	 */
	struct ASelectionDetailsMenu_C_SpawnPnpWinner_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTextTwoMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnTextTwoMenu_Params
	{
	public:
		class FName                                                LocText0;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                LocText1;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FScriptDelegate                                      Event;                                                   // 0x0010(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class AMenu_TextTwo_C*                                     Menu;                                                    // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetAllPnpGameData
	 */
	struct ASelectionDetailsMenu_C_GetAllPnpGameData_Params
	{
	public:
		TArray<class UTexture2D*>                                  ImageList;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		TArray<class FText>                                        TitleList;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFeatherMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnFeatherMenu_Params
	{
	public:
		TArray<class UTexture*>                                    Textures;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class FText>                                        Texts;                                                   // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		int32_t                                                    StartIndex;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_49T3[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Event;                                                   // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class AMenu_Feathered_C*                                   Menu;                                                    // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnPlayerCountMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnPlayerCountMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.EnableActiveMenuInput
	 */
	struct ASelectionDetailsMenu_C_EnableActiveMenuInput_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.DisableActiveMenuInput
	 */
	struct ASelectionDetailsMenu_C_DisableActiveMenuInput_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnHeader
	 */
	struct ASelectionDetailsMenu_C_SpawnHeader_Params
	{
	public:
		class FScriptDelegate                                      FirstMenu;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetNextGame
	 */
	struct ASelectionDetailsMenu_C_GetNextGame_Params
	{
	public:
		class FName                                                NextGame;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnbindFromPause
	 */
	struct ASelectionDetailsMenu_C_UnbindFromPause_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowMenus
	 */
	struct ASelectionDetailsMenu_C_ShowMenus_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.HideMenus
	 */
	struct ASelectionDetailsMenu_C_HideMenus_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ProcessResultsData
	 */
	struct ASelectionDetailsMenu_C_ProcessResultsData_Params
	{
	public:
		bool                                                       ExitedEarly;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.HasOptionsMenu
	 */
	struct ASelectionDetailsMenu_C_HasOptionsMenu_Params
	{
	public:
		class FName                                                Game;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HasOptionMenu;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9C1Z[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GetSpawnOverride
	 */
	struct ASelectionDetailsMenu_C_GetSpawnOverride_Params
	{
	public:
		class FName                                                SpawnOverride;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnIndexButtonMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnIndexButtonMenu_Params
	{
	public:
		EGameModeTypes                                             Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EScramSport                                                Sport;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PKTQ[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Link;                                                    // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class AMenu_IndexSelection_C*                              Menu;                                                    // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenu
	 */
	struct ASelectionDetailsMenu_C_NextMenu_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnImageButtonMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnImageButtonMenu_Params
	{
	public:
		TArray<class FName>                                        LocTextNames;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		TArray<class UTexture2D*>                                  Images;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class FScriptDelegate                                      Event;                                                   // 0x0020(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class AMenu_PanelImages_C*                                 MenuActor;                                               // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TypicalButtonSetup
	 */
	struct ASelectionDetailsMenu_C_TypicalButtonSetup_Params
	{
	public:
		bool                                                       Back;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Replay;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Ok;                                                      // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Play;                                                    // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Next;                                                    // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       WideSpacing;                                             // 0x0005(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_E4Q3[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      LeftEvent;                                               // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      RightEvent;                                              // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      NextEvent;                                               // 0x0028(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Home;                                                    // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Trophy;                                                  // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AL22[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveNavigationButtons
	 */
	struct ASelectionDetailsMenu_C_RemoveNavigationButtons_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.Cleanup
	 */
	struct ASelectionDetailsMenu_C_Cleanup_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnNavigationButtons
	 */
	struct ASelectionDetailsMenu_C_SpawnNavigationButtons_Params
	{
	public:
		bool                                                       Left;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Right;                                                   // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_44S7[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                LeftButtonText;                                          // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                RightButtonText;                                         // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       WideSpacing;                                             // 0x0038(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Replay;                                                  // 0x0039(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SQE5[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      LeftEvent;                                               // 0x0040(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      RightEvent;                                              // 0x0050(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		class FScriptDelegate                                      NextEvent;                                               // 0x0060(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
		bool                                                       Home;                                                    // 0x0070(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Next;                                                    // 0x0071(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Trophy;                                                  // 0x0072(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateTitleText
	 */
	struct ASelectionDetailsMenu_C_UpdateTitleText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.Initialize
	 */
	struct ASelectionDetailsMenu_C_Initialize_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UserConstructionScript
	 */
	struct ASelectionDetailsMenu_C_UserConstructionScript_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__FinishedFunc
	 */
	struct ASelectionDetailsMenu_C_Timeline_MenuScale__FinishedFunc_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.Timeline_MenuScale__UpdateFunc
	 */
	struct ASelectionDetailsMenu_C_Timeline_MenuScale__UpdateFunc_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583046C6A27
	 */
	struct ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB35583046C6A27_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583046C6A27
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB35583046C6A27_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A046AC96DF
	 */
	struct ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A046AC96DF_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A046AC96DF
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A046AC96DF_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB35583866C1CE2
	 */
	struct ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB35583866C1CE2_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB35583866C1CE2
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB35583866C1CE2_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A
	 */
	struct ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB3558304ED0BB9
	 */
	struct ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB3558304ED0BB9_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB3558304ED0BB9
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB3558304ED0BB9_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnCancel_D21648FA4F7680E39E435BB326E4A1A7
	 */
	struct ASelectionDetailsMenu_C_OnCancel_D21648FA4F7680E39E435BB326E4A1A7_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnTimeout_D21648FA4F7680E39E435BB326E4A1A7
	 */
	struct ASelectionDetailsMenu_C_OnTimeout_D21648FA4F7680E39E435BB326E4A1A7_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D21648FA4F7680E39E435BB326E4A1A7
	 */
	struct ASelectionDetailsMenu_C_OnFailure_D21648FA4F7680E39E435BB326E4A1A7_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7
	 */
	struct ASelectionDetailsMenu_C_OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7
	 */
	struct ASelectionDetailsMenu_C_OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_B603128B47FD5879018CB5924F266D10
	 */
	struct ASelectionDetailsMenu_C_OnFailure_B603128B47FD5879018CB5924F266D10_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_B603128B47FD5879018CB5924F266D10
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_B603128B47FD5879018CB5924F266D10_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FC682A0844206A0687EAD6A05F2DED23
	 */
	struct ASelectionDetailsMenu_C_OnFailure_FC682A0844206A0687EAD6A05F2DED23_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FC682A0844206A0687EAD6A05F2DED23
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_FC682A0844206A0687EAD6A05F2DED23_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F
	 */
	struct ASelectionDetailsMenu_C_OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_CD8BB87247F0975EE92B268E277A296F
	 */
	struct ASelectionDetailsMenu_C_OnLoaded_CD8BB87247F0975EE92B268E277A296F_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC
	 */
	struct ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A028C7872D
	 */
	struct ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A028C7872D_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A028C7872D
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A028C7872D_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_72F3684D43843E50F6BE3EB232D6B11C
	 */
	struct ASelectionDetailsMenu_C_OnLoaded_72F3684D43843E50F6BE3EB232D6B11C_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355838CBBFA14
	 */
	struct ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB355838CBBFA14_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355838CBBFA14
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB355838CBBFA14_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21
	 */
	struct ASelectionDetailsMenu_C_OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_FE43AE584DB619A31AB355836A077BD5
	 */
	struct ASelectionDetailsMenu_C_OnFailure_FE43AE584DB619A31AB355836A077BD5_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_FE43AE584DB619A31AB355836A077BD5
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_FE43AE584DB619A31AB355836A077BD5_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnFailure_CB7A18C444F2E804805EC3A0462DF741
	 */
	struct ASelectionDetailsMenu_C_OnFailure_CB7A18C444F2E804805EC3A0462DF741_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnSuccess_CB7A18C444F2E804805EC3A0462DF741
	 */
	struct ASelectionDetailsMenu_C_OnSuccess_CB7A18C444F2E804805EC3A0462DF741_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61
	 */
	struct ASelectionDetailsMenu_C_OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnLoaded_67060BA04A461053627A9E84D1A971B1
	 */
	struct ASelectionDetailsMenu_C_OnLoaded_67060BA04A461053627A9E84D1A971B1_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsOnline
	 */
	struct ASelectionDetailsMenu_C_CreateResultsOnline_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateOnlineMatchTypeMenu
	 */
	struct ASelectionDetailsMenu_C_CreateOnlineMatchTypeMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackFromOnlineMatchType
	 */
	struct ASelectionDetailsMenu_C_BackFromOnlineMatchType_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineGameTypeChosen
	 */
	struct ASelectionDetailsMenu_C_OnlineGameTypeChosen_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFindMatchChooseSport
	 */
	struct ASelectionDetailsMenu_C_SpawnFindMatchChooseSport_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnCheckingForFriendsMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnCheckingForFriendsMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnlineMatchTypeReady
	 */
	struct ASelectionDetailsMenu_C_OnlineMatchTypeReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchMenuReady
	 */
	struct ASelectionDetailsMenu_C_FindMatchMenuReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayWithFriendsReady
	 */
	struct ASelectionDetailsMenu_C_PlayWithFriendsReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UpdateNextButton
	 */
	struct ASelectionDetailsMenu_C_UpdateNextButton_Params
	{
	public:
		bool                                                       EnableButton;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateCheckingForPlayers
	 */
	struct ASelectionDetailsMenu_C_CreateCheckingForPlayers_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartFindMatchMatchmaking
	 */
	struct ASelectionDetailsMenu_C_StartFindMatchMatchmaking_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnFriendsListMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnFriendsListMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteFriendSelected
	 */
	struct ASelectionDetailsMenu_C_InviteFriendSelected_Params
	{
	public:
		struct FScramFriend                                        InvitePlayer;                                            // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinFriendSelected
	 */
	struct ASelectionDetailsMenu_C_JoinFriendSelected_Params
	{
	public:
		struct FScramGameInvite                                    JoinPlayer;                                              // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FriendsListDisplayed
	 */
	struct ASelectionDetailsMenu_C_FriendsListDisplayed_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FailedConnection
	 */
	struct ASelectionDetailsMenu_C_FailedConnection_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FindMatchFailedMessageReady
	 */
	struct ASelectionDetailsMenu_C_FindMatchFailedMessageReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnGetFriends
	 */
	struct ASelectionDetailsMenu_C_OnGetFriends_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CJN5[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramFriend>                                friends;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesChecked
	 */
	struct ASelectionDetailsMenu_C_InvitesChecked_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QX5X[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingFriendMessage
	 */
	struct ASelectionDetailsMenu_C_InvitingFriendMessage_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitingMessageDisplayed
	 */
	struct ASelectionDetailsMenu_C_InvitingMessageDisplayed_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ShowJoiningMatchMessage
	 */
	struct ASelectionDetailsMenu_C_ShowJoiningMatchMessage_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchMenuReady
	 */
	struct ASelectionDetailsMenu_C_JoinMatchMenuReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PreparingJoinFindMatch
	 */
	struct ASelectionDetailsMenu_C_PreparingJoinFindMatch_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientJoinFriend
	 */
	struct ASelectionDetailsMenu_C_ClientJoinFriend_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExitFailMessage
	 */
	struct ASelectionDetailsMenu_C_ExitFailMessage_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelInvite
	 */
	struct ASelectionDetailsMenu_C_CancelInvite_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CancelFindMatch
	 */
	struct ASelectionDetailsMenu_C_CancelFindMatch_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToChooseOnlineType
	 */
	struct ASelectionDetailsMenu_C_BackToChooseOnlineType_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportsPoolSelected
	 */
	struct ASelectionDetailsMenu_C_SportsPoolSelected_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOut
	 */
	struct ASelectionDetailsMenu_C_TimedOut_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.RefreshFailed
	 */
	struct ASelectionDetailsMenu_C_RefreshFailed_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateJoinInviteMenu
	 */
	struct ASelectionDetailsMenu_C_CreateJoinInviteMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesDismissed
	 */
	struct ASelectionDetailsMenu_C_InvitesDismissed_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAround
	 */
	struct ASelectionDetailsMenu_C_QuickMatchTurnAround_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQuickMatchTurnAround
	 */
	struct ASelectionDetailsMenu_C_SpawnQuickMatchTurnAround_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickMatchTurnAroundCompleted
	 */
	struct ASelectionDetailsMenu_C_QuickMatchTurnAroundCompleted_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundHostFriend
	 */
	struct ASelectionDetailsMenu_C_TurnAroundHostFriend_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundHostFriend
	 */
	struct ASelectionDetailsMenu_C_SpawnTurnAroundHostFriend_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.HostFriendTurnAroundComplete
	 */
	struct ASelectionDetailsMenu_C_HostFriendTurnAroundComplete_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TurnAroundJoinMatch
	 */
	struct ASelectionDetailsMenu_C_TurnAroundJoinMatch_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTurnAroundJoinMatch
	 */
	struct ASelectionDetailsMenu_C_SpawnTurnAroundJoinMatch_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.JoinMatchTurnAroundComplete
	 */
	struct ASelectionDetailsMenu_C_JoinMatchTurnAroundComplete_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TimedOutSelectionMade
	 */
	struct ASelectionDetailsMenu_C_TimedOutSelectionMade_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnInviteCancelledMessage
	 */
	struct ASelectionDetailsMenu_C_SpawnInviteCancelledMessage_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteCancelledMessageDisplayed
	 */
	struct ASelectionDetailsMenu_C_InviteCancelledMessageDisplayed_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoInternet
	 */
	struct ASelectionDetailsMenu_C_NoInternet_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteReceived
	 */
	struct ASelectionDetailsMenu_C_NewInviteReceived_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.NewInviteCollected
	 */
	struct ASelectionDetailsMenu_C_NewInviteCollected_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GF36[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientInviteJoinFailed
	 */
	struct ASelectionDetailsMenu_C_ClientInviteJoinFailed_Params
	{
	public:
		EScramPendingGameFailure                                   failureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ClientUnrealJoinFailedMenu
	 */
	struct ASelectionDetailsMenu_C_ClientUnrealJoinFailedMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerInviteJoinFailed
	 */
	struct ASelectionDetailsMenu_C_ServerInviteJoinFailed_Params
	{
	public:
		EScramPendingGameFailure                                   failureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailed
	 */
	struct ASelectionDetailsMenu_C_UnrealConnectionFailed_Params
	{
	public:
		EScramPendingGameFailure                                   FailureType;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectionFailedMessage
	 */
	struct ASelectionDetailsMenu_C_UnrealConnectionFailedMessage_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.UnrealConnectedFailedExit
	 */
	struct ASelectionDetailsMenu_C_UnrealConnectedFailedExit_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerUnrealJoinFailedMenu
	 */
	struct ASelectionDetailsMenu_C_ServerUnrealJoinFailedMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.NoFriends
	 */
	struct ASelectionDetailsMenu_C_NoFriends_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ServerMatchmakingTimeout
	 */
	struct ASelectionDetailsMenu_C_ServerMatchmakingTimeout_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OnNewPlayerJoin
	 */
	struct ASelectionDetailsMenu_C_OnNewPlayerJoin_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpectator;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.DeferredInvite
	 */
	struct ASelectionDetailsMenu_C_DeferredInvite_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnpQuickPlay
	 */
	struct ASelectionDetailsMenu_C_CreateResultsPnpQuickPlay_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsPnPTournament
	 */
	struct ASelectionDetailsMenu_C_CreateResultsPnPTournament_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpPlayerCountMenu
	 */
	struct ASelectionDetailsMenu_C_CreatePnpPlayerCountMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnPGameType
	 */
	struct ASelectionDetailsMenu_C_CreatePnPGameType_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreatePnpTournamentCountMenu
	 */
	struct ASelectionDetailsMenu_C_CreatePnpTournamentCountMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlayGameSelection
	 */
	struct ASelectionDetailsMenu_C_PnpQuickPlayGameSelection_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTournament
	 */
	struct ASelectionDetailsMenu_C_StartTournament_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnPStart
	 */
	struct ASelectionDetailsMenu_C_PnPStart_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.tempEvent
	 */
	struct ASelectionDetailsMenu_C_tempEvent_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PvpMenuReady
	 */
	struct ASelectionDetailsMenu_C_PvpMenuReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeReady
	 */
	struct ASelectionDetailsMenu_C_PnpGameTypeReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TournamentCountReady
	 */
	struct ASelectionDetailsMenu_C_TournamentCountReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpSelectionReady
	 */
	struct ASelectionDetailsMenu_C_PnpSelectionReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpQuickPlaySelectionMade
	 */
	struct ASelectionDetailsMenu_C_PnpQuickPlaySelectionMade_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpGameTypeChosen
	 */
	struct ASelectionDetailsMenu_C_PnpGameTypeChosen_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PnpResultsDisplayed
	 */
	struct ASelectionDetailsMenu_C_PnpResultsDisplayed_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPlayerCountMenu
	 */
	struct ASelectionDetailsMenu_C_BackToPlayerCountMenu_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToPnpGameType
	 */
	struct ASelectionDetailsMenu_C_BackToPnpGameType_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToMultiplayerMode
	 */
	struct ASelectionDetailsMenu_C_BackToMultiplayerMode_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerCountComplete
	 */
	struct ASelectionDetailsMenu_C_PlayerCountComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateSportModeMenu
	 */
	struct ASelectionDetailsMenu_C_CreateSportModeMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsSportQuickplay
	 */
	struct ASelectionDetailsMenu_C_CreateResultsSportQuickplay_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsTraining
	 */
	struct ASelectionDetailsMenu_C_CreateResultsTraining_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateResultsChallenge
	 */
	struct ASelectionDetailsMenu_C_CreateResultsChallenge_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeSelected
	 */
	struct ASelectionDetailsMenu_C_SportModeSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpInfoMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnQpInfoMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingSelectionMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnTrainingSelectionMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnChallengesSelectionMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnChallengesSelectionMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnGameInfoScreen
	 */
	struct ASelectionDetailsMenu_C_SpawnGameInfoScreen_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnTrainingOptions
	 */
	struct ASelectionDetailsMenu_C_SpawnTrainingOptions_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportMenuModeReady
	 */
	struct ASelectionDetailsMenu_C_SportMenuModeReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuReady
	 */
	struct ASelectionDetailsMenu_C_SelectionMenuReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuickPlaySetupReady
	 */
	struct ASelectionDetailsMenu_C_QuickPlaySetupReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoReady
	 */
	struct ASelectionDetailsMenu_C_GameInfoReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsReady
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameSelected
	 */
	struct ASelectionDetailsMenu_C_GameSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LHIT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                GameName;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishTrainingOrChallenge
	 */
	struct ASelectionDetailsMenu_C_FinishTrainingOrChallenge_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinishQuickplay
	 */
	struct ASelectionDetailsMenu_C_FinishQuickplay_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ToggleChallengeInfo
	 */
	struct ASelectionDetailsMenu_C_ToggleChallengeInfo_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToSportModeMenu
	 */
	struct ASelectionDetailsMenu_C_BackToSportModeMenu_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayQuickPlay
	 */
	struct ASelectionDetailsMenu_C_PlayQuickPlay_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToSportOptionMenu
	 */
	struct ASelectionDetailsMenu_C_ReturnToSportOptionMenu_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameSelection
	 */
	struct ASelectionDetailsMenu_C_BackToGameSelection_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.StartTrainingOrChallenge
	 */
	struct ASelectionDetailsMenu_C_StartTrainingOrChallenge_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToGameInfoScreen
	 */
	struct ASelectionDetailsMenu_C_BackToGameInfoScreen_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsSet
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsSet_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsReady
	 */
	struct ASelectionDetailsMenu_C_ResultsReady_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ResultsDisplayComplete
	 */
	struct ASelectionDetailsMenu_C_ResultsDisplayComplete_Params
	{
	public:
		bool                                                       WideNextButton;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FadeToThemeMusic
	 */
	struct ASelectionDetailsMenu_C_FadeToThemeMusic_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionAvatarButtonUsed
	 */
	struct ASelectionDetailsMenu_C_SportOptionAvatarButtonUsed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatar
	 */
	struct ASelectionDetailsMenu_C_SportOptionEditAvatar_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarOpened
	 */
	struct ASelectionDetailsMenu_C_SportOptionEditAvatarOpened_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportOptionEditAvatarComplete
	 */
	struct ASelectionDetailsMenu_C_SportOptionEditAvatarComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeAvatarButtonUsed
	 */
	struct ASelectionDetailsMenu_C_SportModeAvatarButtonUsed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatar
	 */
	struct ASelectionDetailsMenu_C_SportModeEditAvatar_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarOpened
	 */
	struct ASelectionDetailsMenu_C_SportModeEditAvatarOpened_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SportModeEditAvatarComplete
	 */
	struct ASelectionDetailsMenu_C_SportModeEditAvatarComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuAvatarButtonUsed
	 */
	struct ASelectionDetailsMenu_C_SelectionMenuAvatarButtonUsed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatar
	 */
	struct ASelectionDetailsMenu_C_SelectionMenuEditAvatar_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarOpened
	 */
	struct ASelectionDetailsMenu_C_SelectionMenuEditAvatarOpened_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionMenuEditAvatarComplete
	 */
	struct ASelectionDetailsMenu_C_SelectionMenuEditAvatarComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoAvatarButtonUsed
	 */
	struct ASelectionDetailsMenu_C_GameInfoAvatarButtonUsed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatar
	 */
	struct ASelectionDetailsMenu_C_GameInfoEditAvatar_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarOpened
	 */
	struct ASelectionDetailsMenu_C_GameInfoEditAvatarOpened_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameInfoEditAvatarComplete
	 */
	struct ASelectionDetailsMenu_C_GameInfoEditAvatarComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsAvatarButtonUsed
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsAvatarButtonUsed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatar
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsEditAvatar_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarOptions
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsEditAvatarOptions_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsEditAvatarComplete
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsEditAvatarComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.EditSportOptionsSelected
	 */
	struct ASelectionDetailsMenu_C_EditSportOptionsSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnQpDetailsNavButtons
	 */
	struct ASelectionDetailsMenu_C_SpawnQpDetailsNavButtons_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SpawnSportOptionMenu
	 */
	struct ASelectionDetailsMenu_C_SpawnSportOptionMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.BackToQpInfo
	 */
	struct ASelectionDetailsMenu_C_BackToQpInfo_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.AnnouncerbuttonPressed
	 */
	struct ASelectionDetailsMenu_C_AnnouncerbuttonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrainingOptionsLoaded
	 */
	struct ASelectionDetailsMenu_C_TrainingOptionsLoaded_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveBeginPlay
	 */
	struct ASelectionDetailsMenu_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OpenFirstMenu
	 */
	struct ASelectionDetailsMenu_C_OpenFirstMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InitialMenu
	 */
	struct ASelectionDetailsMenu_C_InitialMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenu
	 */
	struct ASelectionDetailsMenu_C_CloseMenu_Params
	{
	public:
		bool                                                       QuitButtonPressed;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateMultiplayerModeMenu
	 */
	struct ASelectionDetailsMenu_C_CreateMultiplayerModeMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeSelected
	 */
	struct ASelectionDetailsMenu_C_MultiplayerModeSelected_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReturnToCenter
	 */
	struct ASelectionDetailsMenu_C_ReturnToCenter_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CapsuleOn
	 */
	struct ASelectionDetailsMenu_C_CapsuleOn_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ReceiveTick
	 */
	struct ASelectionDetailsMenu_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GamePaused
	 */
	struct ASelectionDetailsMenu_C_GamePaused_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.GameUnpaused
	 */
	struct ASelectionDetailsMenu_C_GameUnpaused_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.HeaderDestroyed
	 */
	struct ASelectionDetailsMenu_C_HeaderDestroyed_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleUpMenu
	 */
	struct ASelectionDetailsMenu_C_ScaleUpMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ScaleDownMenu
	 */
	struct ASelectionDetailsMenu_C_ScaleDownMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ButtonPressed
	 */
	struct ASelectionDetailsMenu_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.MultiplayerModeReady
	 */
	struct ASelectionDetailsMenu_C_MultiplayerModeReady_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.RemoveLastMenu
	 */
	struct ASelectionDetailsMenu_C_RemoveLastMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.FinalShutdown
	 */
	struct ASelectionDetailsMenu_C_FinalShutdown_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyComplete
	 */
	struct ASelectionDetailsMenu_C_TrophyComplete_Params
	{
	public:
		bool                                                       AllAwardsComplete;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CreateTrophyMenu
	 */
	struct ASelectionDetailsMenu_C_CreateTrophyMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyLoop
	 */
	struct ASelectionDetailsMenu_C_TrophyLoop_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.CloseMenuWithHeaderHandoff
	 */
	struct ASelectionDetailsMenu_C_CloseMenuWithHeaderHandoff_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.DestroyMenuWithHandoff
	 */
	struct ASelectionDetailsMenu_C_DestroyMenuWithHandoff_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SkipResults
	 */
	struct ASelectionDetailsMenu_C_SkipResults_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitButtonPressed
	 */
	struct ASelectionDetailsMenu_C_QuitButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.TrophyReadyToSpawn
	 */
	struct ASelectionDetailsMenu_C_TrophyReadyToSpawn_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.NextMenuEarlyExit
	 */
	struct ASelectionDetailsMenu_C_NextMenuEarlyExit_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayerTurnedAround
	 */
	struct ASelectionDetailsMenu_C_PlayerTurnedAround_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.RecenterMenu
	 */
	struct ASelectionDetailsMenu_C_RecenterMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoMenu
	 */
	struct ASelectionDetailsMenu_C_DemoMenu_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InviteUpdateComplete
	 */
	struct ASelectionDetailsMenu_C_InviteUpdateComplete_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_7Z29[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.WaitForInvitesUpdateComplete
	 */
	struct ASelectionDetailsMenu_C_WaitForInvitesUpdateComplete_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ChoseSportOpened
	 */
	struct ASelectionDetailsMenu_C_ChoseSportOpened_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.DemoSportChosen
	 */
	struct ASelectionDetailsMenu_C_DemoSportChosen_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.RiftTurnAroundComplete
	 */
	struct ASelectionDetailsMenu_C_RiftTurnAroundComplete_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.PlayChooseSportAudio
	 */
	struct ASelectionDetailsMenu_C_PlayChooseSportAudio_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.ExecuteUbergraph_SelectionDetailsMenu
	 */
	struct ASelectionDetailsMenu_C_ExecuteUbergraph_SelectionDetailsMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SBEU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.InvitesUpdated__DelegateSignature
	 */
	struct ASelectionDetailsMenu_C_InvitesUpdated__DelegateSignature_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.MenuOpened__DelegateSignature
	 */
	struct ASelectionDetailsMenu_C_MenuOpened__DelegateSignature_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.SelectionComplete__DelegateSignature
	 */
	struct ASelectionDetailsMenu_C_SelectionComplete__DelegateSignature_Params
	{
	public:
		EScramSport                                                Sport;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SinglePlayer;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.OldMenuClear__DelegateSignature
	 */
	struct ASelectionDetailsMenu_C_OldMenuClear__DelegateSignature_Params
	{	};

	/**
	 * Function SelectionDetailsMenu.SelectionDetailsMenu_C.QuitToMainMenu__DelegateSignature
	 */
	struct ASelectionDetailsMenu_C_QuitToMainMenu__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
