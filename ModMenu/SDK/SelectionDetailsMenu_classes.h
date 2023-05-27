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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass SelectionDetailsMenu.SelectionDetailsMenu_C
	 * Size -> 0x0273 (FullSize[0x05A3] - InheritedSize[0x0330])
	 */
	class ASelectionDetailsMenu_C : public ADummyParent_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     FarRightButtonPos;                                       // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarButtonPos;                                         // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarOffset;                                            // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BottomRightButtonPos;                                    // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BottomLeftButtonPos;                                     // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     BottomMidButtonPos;                                      // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FarLeftButtonPos;                                        // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LeftButtonPos;                                           // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MenuRoot;                                                // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MenuScaleRoot;                                           // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RightButtonPos;                                          // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OffsetRoot;                                              // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_MenuScale_Alpha_411D8E3E40322D6C1CFBB29EF192BB43; // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_MenuScale__Direction_411D8E3E40322D6C1CFBB29EF192BB43; // 0x03AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SP82[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_MenuScale;                                      // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESelectionDetailsMenuType                                  MenuType;                                                // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EScramSport                                                Sport;                                                   // 0x03B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EGameModeTypes                                             ResultsType;                                             // 0x03BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_KYFI[0x5];                                   // 0x03BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramGameInstance_C*                                GameInstance;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             QuitToMainMenu;                                          // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AActor*                                              ActiveSubmenu;                                           // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStandLocationIndicator_C*                           StandLocator;                                            // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OldMenuClear;                                            // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SelectionComplete;                                       // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       SelectionMade;                                           // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       SinglePlayer;                                            // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VUWI[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SelectedGame;                                            // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AHeader_C*                                           Header;                                                  // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  LeftButton;                                              // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  RightButton;                                             // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             MenuOpened;                                              // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       QuittingMenu;                                            // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5NIT[0x3];                                   // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FResultsData                                        ResultsData;                                             // 0x0444(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenu_Results_C*                                     ResultsMenu;                                             // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenu_TrophyAwarded_C*                               TrophyMenu;                                              // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramSaveData*                                      SaveData;                                                // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  NextButton;                                              // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  HomeButton;                                              // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenu_Message_C*                                     MenuMessage;                                             // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenu_ChooseSports_C*                                ChooseSportMenu;                                         // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FScramFriend>                                friends;                                                 // 0x0488(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0498(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FScramFriend                                        FriendToInvite;                                          // 0x04A8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		class AMenu_FriendList_C*                                  FriendListMenu;                                          // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FScramGameInvite                                    FriendToJoin;                                            // 0x04E8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		class AScramPlayer_BP_C*                                   LocalPlayer;                                             // 0x0548(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CancelMatchMaking;                                       // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       QuitEarly;                                               // 0x0551(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BVAZ[0x6];                                   // 0x0552(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AButton_Standard_C*                                  InfoButton;                                              // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenu_GameDetails_C*                                 GameDetailsMenu;                                         // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RotationOffset;                                          // 0x0568(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       UnlockNextTraining;                                      // 0x056C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_O82O[0x3];                                   // 0x056D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AButton_AvatarEdit_C*                                AvatarButton;                                            // 0x0570(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             InvitesUpdated;                                          // 0x0578(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       UpdatingInvites;                                         // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		EChallengeResultState                                      ChallengeResultState;                                    // 0x0589(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       WaitingForFriends;                                       // 0x058A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MultiplayerQueued;                                       // 0x058B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IAFL[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        MatchmakingServerTimer;                                  // 0x0590(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  AnnouncerButton;                                         // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DemoMode;                                                // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       RiftTurnAround;                                          // 0x05A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       paused;                                                  // 0x05A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SpawnChooseSportMenu(const class FScriptDelegate& Choice, const class FScriptDelegate& ButtonPressed);
		void GetArrayFromRefs(TArray<class UTexture2D*>* Images);
		void SpawnAnnouncerButton(const class FScriptDelegate& Event);
		void FailsafeDoubleMenu();
		void SpawnConfirmationMenu(const class FName& LocText, const class FText& OverrideText, const class FScriptDelegate& Event);
		void SpawnJoinInviteMenu(const class FScriptDelegate& JoinEvent, const class FScriptDelegate& DismissEvent);
		void SpawnQpDetailsMenu(const class FScriptDelegate& EditEvent, const class FScriptDelegate& SpawnNavEvent, class AMenu_QpDetails_C** Menu);
		void UpdateTeamColor();
		void SpawnEditAvatarMenu();
		void SpawnAvatarButton(const class FScriptDelegate& AvatarEvent);
		void SpawnInfoButton(const class FScriptDelegate& Event);
		void SpawnTrainingOptionsMenu(const class FScriptDelegate& MenuLoaded);
		void SpawnFriendListMenu(TArray<struct FScramFriend>* FriendsList, TArray<struct FScramGameInvite>* InviteList, const class FScriptDelegate& InviteEvent, const class FScriptDelegate& JoinEvent, const class FScriptDelegate& FailEvent);
		void SpawnMessageMenu(const class FText& Message, int32_t TimerDisplay);
		void SpawnChooseSportsMenu(const class FScriptDelegate& UpdateButtonEvent);
		void Spawn3DImageButtonMenu(TArray<class FName>* LocTextNames, TArray<class UTexture2D*>* ImagesL, TArray<class UTexture2D*>* ImagesR, const class FScriptDelegate& Event);
		void AwardsEarned(bool* AwardWaiting);
		void SpawnTrophyAvatarNotification(const class FScriptDelegate& AwardReadyEvent);
		void SpawnResultsMenu(const class FScriptDelegate& ResultsCompleteEvent);
		void SpawnGameDetailsMenu(EGameModeTypes Mode, class AMenu_GameDetails_C** Menu);
		void SpawnSportOptionsMenu(class AMenu_SportOptions_C** Menu);
		void SpawnPnpWinner();
		void SpawnTextTwoMenu(const class FName& LocText0, const class FName& LocText1, const class FScriptDelegate& Event, class AMenu_TextTwo_C** Menu);
		void GetAllPnpGameData(TArray<class UTexture2D*>* ImageList, TArray<class FText>* TitleList);
		void SpawnFeatherMenu(TArray<class UTexture*>* Textures, TArray<class FText>* Texts, int32_t StartIndex, const class FScriptDelegate& Event, class AMenu_Feathered_C** Menu);
		void SpawnPlayerCountMenu();
		void EnableActiveMenuInput();
		void DisableActiveMenuInput();
		void SpawnHeader(const class FScriptDelegate& FirstMenu);
		void GetNextGame(class FName* NextGame);
		void UnbindFromPause();
		void ShowMenus();
		void HideMenus();
		void ProcessResultsData(bool* ExitedEarly);
		void HasOptionsMenu(const class FName& Game, bool* HasOptionMenu);
		void GetSpawnOverride(class FName* SpawnOverride);
		void SpawnIndexButtonMenu(EGameModeTypes Mode, EScramSport Sport, const class FScriptDelegate& Link, class AMenu_IndexSelection_C** Menu);
		void NextMenu(const class FScriptDelegate& Event);
		void SpawnImageButtonMenu(TArray<class FName>* LocTextNames, TArray<class UTexture2D*>* Images, const class FScriptDelegate& Event, class AMenu_PanelImages_C** MenuActor);
		void TypicalButtonSetup(bool Back, bool Replay, bool Ok, bool Play, bool Next, bool WideSpacing, const class FScriptDelegate& LeftEvent, const class FScriptDelegate& RightEvent, const class FScriptDelegate& NextEvent, bool Home, bool Trophy);
		void RemoveNavigationButtons();
		void Cleanup();
		void SpawnNavigationButtons(bool Left, bool Right, const class FText& LeftButtonText, const class FText& RightButtonText, bool WideSpacing, bool Replay, const class FScriptDelegate& LeftEvent, const class FScriptDelegate& RightEvent, const class FScriptDelegate& NextEvent, bool Home, bool Next, bool Trophy);
		void UpdateTitleText(const class FText& Text);
		void Initialize();
		void UserConstructionScript();
		void Timeline_MenuScale__FinishedFunc();
		void Timeline_MenuScale__UpdateFunc();
		void OnFailure_FE43AE584DB619A31AB35583046C6A27();
		void OnSuccess_FE43AE584DB619A31AB35583046C6A27();
		void OnFailure_CB7A18C444F2E804805EC3A046AC96DF();
		void OnSuccess_CB7A18C444F2E804805EC3A046AC96DF();
		void OnFailure_FE43AE584DB619A31AB35583866C1CE2();
		void OnSuccess_FE43AE584DB619A31AB35583866C1CE2();
		void OnFailure_CB7A18C444F2E804805EC3A0C4ACE01A();
		void OnSuccess_CB7A18C444F2E804805EC3A0C4ACE01A();
		void OnFailure_FE43AE584DB619A31AB3558304ED0BB9();
		void OnSuccess_FE43AE584DB619A31AB3558304ED0BB9();
		void OnCancel_D21648FA4F7680E39E435BB326E4A1A7();
		void OnTimeout_D21648FA4F7680E39E435BB326E4A1A7();
		void OnFailure_D21648FA4F7680E39E435BB326E4A1A7();
		void OnSuccessClient_D21648FA4F7680E39E435BB326E4A1A7();
		void OnSuccessHost_D21648FA4F7680E39E435BB326E4A1A7();
		void OnFailure_B603128B47FD5879018CB5924F266D10();
		void OnSuccess_B603128B47FD5879018CB5924F266D10();
		void OnFailure_FC682A0844206A0687EAD6A05F2DED23();
		void OnSuccess_FC682A0844206A0687EAD6A05F2DED23();
		void OnFailure_D2DF35C34C56D5F01118B9942CE1DB3F();
		void OnSuccess_D2DF35C34C56D5F01118B9942CE1DB3F();
		void OnLoaded_CD8BB87247F0975EE92B268E277A296F(class UObject* Loaded);
		void OnFailure_CB7A18C444F2E804805EC3A0CE7B06EC();
		void OnSuccess_CB7A18C444F2E804805EC3A0CE7B06EC();
		void OnFailure_CB7A18C444F2E804805EC3A028C7872D();
		void OnSuccess_CB7A18C444F2E804805EC3A028C7872D();
		void OnLoaded_72F3684D43843E50F6BE3EB232D6B11C(class UObject* Loaded);
		void OnFailure_FE43AE584DB619A31AB355838CBBFA14();
		void OnSuccess_FE43AE584DB619A31AB355838CBBFA14();
		void OnLoaded_65F8B5644AB1897AD4947A92DD9D6D21(class UObject* Loaded);
		void OnFailure_FE43AE584DB619A31AB355836A077BD5();
		void OnSuccess_FE43AE584DB619A31AB355836A077BD5();
		void OnFailure_CB7A18C444F2E804805EC3A0462DF741();
		void OnSuccess_CB7A18C444F2E804805EC3A0462DF741();
		void OnLoaded_B5E770E24EAFDC649AF90EA3EB741D61(class UObject* Loaded);
		void OnLoaded_67060BA04A461053627A9E84D1A971B1(class UObject* Loaded);
		void CreateResultsOnline();
		void CreateOnlineMatchTypeMenu();
		void BackFromOnlineMatchType(int32_t ButtonId);
		void OnlineGameTypeChosen(int32_t Index);
		void SpawnFindMatchChooseSport();
		void SpawnCheckingForFriendsMenu();
		void OnlineMatchTypeReady();
		void FindMatchMenuReady();
		void PlayWithFriendsReady();
		void UpdateNextButton(bool EnableButton);
		void CreateCheckingForPlayers();
		void StartFindMatchMatchmaking();
		void SpawnFriendsListMenu();
		void InviteFriendSelected(const struct FScramFriend& InvitePlayer);
		void JoinFriendSelected(const struct FScramGameInvite& JoinPlayer);
		void FriendsListDisplayed();
		void FailedConnection();
		void FindMatchFailedMessageReady();
		void OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends);
		void InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
		void InvitingFriendMessage();
		void InvitingMessageDisplayed();
		void ShowJoiningMatchMessage();
		void JoinMatchMenuReady();
		void PreparingJoinFindMatch();
		void ClientJoinFriend();
		void ExitFailMessage(int32_t ButtonId);
		void CancelInvite(int32_t ButtonId);
		void CancelFindMatch(int32_t ButtonId);
		void BackToChooseOnlineType(int32_t ButtonId);
		void SportsPoolSelected(int32_t ButtonId);
		void TimedOut();
		void RefreshFailed();
		void CreateJoinInviteMenu();
		void InvitesDismissed();
		void QuickMatchTurnAround();
		void SpawnQuickMatchTurnAround(class AActor* DestroyedActor);
		void QuickMatchTurnAroundCompleted(class AActor* DestroyedActor);
		void TurnAroundHostFriend();
		void SpawnTurnAroundHostFriend(class AActor* DestroyedActor);
		void HostFriendTurnAroundComplete(class AActor* DestroyedActor);
		void TurnAroundJoinMatch();
		void SpawnTurnAroundJoinMatch(class AActor* DestroyedActor);
		void JoinMatchTurnAroundComplete(class AActor* DestroyedActor);
		void TimedOutSelectionMade(int32_t ID);
		void SpawnInviteCancelledMessage();
		void InviteCancelledMessageDisplayed();
		void NoInternet();
		void NewInviteReceived();
		void NewInviteCollected(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
		void ClientInviteJoinFailed(EScramPendingGameFailure failureType);
		void ClientUnrealJoinFailedMenu();
		void ServerInviteJoinFailed(EScramPendingGameFailure failureType);
		void UnrealConnectionFailed(EScramPendingGameFailure FailureType);
		void UnrealConnectionFailedMessage();
		void UnrealConnectedFailedExit(int32_t ButtonId);
		void ServerUnrealJoinFailedMenu();
		void NoFriends();
		void ServerMatchmakingTimeout();
		void OnNewPlayerJoin(class APlayerController* NewPlayer, bool IsSpectator);
		void DeferredInvite();
		void CreateResultsPnpQuickPlay();
		void CreateResultsPnPTournament();
		void CreatePnpPlayerCountMenu();
		void CreatePnPGameType();
		void CreatePnpTournamentCountMenu();
		void PnpQuickPlayGameSelection();
		void StartTournament(int32_t ID);
		void PnPStart();
		void tempEvent();
		void PvpMenuReady();
		void PnpGameTypeReady();
		void TournamentCountReady();
		void PnpSelectionReady();
		void PnpQuickPlaySelectionMade(int32_t Index);
		void PnpGameTypeChosen(int32_t Index);
		void PnpResultsDisplayed();
		void BackToPlayerCountMenu(int32_t ButtonId);
		void BackToPnpGameType(int32_t ButtonId);
		void BackToMultiplayerMode(int32_t ButtonId);
		void PlayerCountComplete(int32_t ButtonId);
		void CreateSportModeMenu();
		void CreateResultsSportQuickplay();
		void CreateResultsTraining();
		void CreateResultsChallenge();
		void SportModeSelected(int32_t ID);
		void SpawnQpInfoMenu();
		void SpawnTrainingSelectionMenu();
		void SpawnChallengesSelectionMenu();
		void SpawnGameInfoScreen();
		void SpawnTrainingOptions();
		void SportMenuModeReady();
		void SelectionMenuReady();
		void QuickPlaySetupReady();
		void GameInfoReady();
		void TrainingOptionsReady();
		void GameSelected(int32_t ID, const class FName& GameName);
		void FinishTrainingOrChallenge();
		void FinishQuickplay();
		void ToggleChallengeInfo(int32_t ButtonId);
		void BackToSportModeMenu(int32_t ButtonId);
		void PlayQuickPlay(int32_t ButtonId);
		void ReturnToSportOptionMenu(int32_t ButtonId);
		void BackToGameSelection(int32_t ButtonId);
		void StartTrainingOrChallenge(int32_t ButtonId);
		void BackToGameInfoScreen(int32_t ButtonId);
		void TrainingOptionsSet(int32_t ButtonId);
		void ResultsReady(bool WideNextButton);
		void ResultsDisplayComplete(bool WideNextButton);
		void FadeToThemeMusic();
		void SportOptionAvatarButtonUsed(int32_t ButtonId);
		void SportOptionEditAvatar();
		void SportOptionEditAvatarOpened();
		void SportOptionEditAvatarComplete(int32_t ButtonId);
		void SportModeAvatarButtonUsed(int32_t ButtonId);
		void SportModeEditAvatar();
		void SportModeEditAvatarOpened();
		void SportModeEditAvatarComplete(int32_t ButtonId);
		void SelectionMenuAvatarButtonUsed(int32_t ButtonId);
		void SelectionMenuEditAvatar();
		void SelectionMenuEditAvatarOpened();
		void SelectionMenuEditAvatarComplete(int32_t ButtonId);
		void GameInfoAvatarButtonUsed(int32_t ButtonId);
		void GameInfoEditAvatar();
		void GameInfoEditAvatarOpened();
		void GameInfoEditAvatarComplete(int32_t ButtonId);
		void TrainingOptionsAvatarButtonUsed(int32_t ButtonId);
		void TrainingOptionsEditAvatar();
		void TrainingOptionsEditAvatarOptions();
		void TrainingOptionsEditAvatarComplete(int32_t ButtonId);
		void EditSportOptionsSelected(int32_t ID);
		void SpawnQpDetailsNavButtons();
		void SpawnSportOptionMenu();
		void BackToQpInfo(int32_t ButtonId);
		void AnnouncerbuttonPressed(int32_t ButtonId);
		void TrainingOptionsLoaded();
		void ReceiveBeginPlay();
		void OpenFirstMenu();
		void InitialMenu();
		void CloseMenu(bool QuitButtonPressed);
		void CreateMultiplayerModeMenu();
		void MultiplayerModeSelected(int32_t ID);
		void ReturnToCenter();
		void CapsuleOn();
		void ReceiveTick(float DeltaSeconds);
		void GamePaused();
		void GameUnpaused();
		void HeaderDestroyed(class AActor* DestroyedActor);
		void ScaleUpMenu();
		void ScaleDownMenu();
		void ButtonPressed(int32_t ID);
		void MultiplayerModeReady();
		void RemoveLastMenu();
		void FinalShutdown();
		void TrophyComplete(bool AllAwardsComplete);
		void CreateTrophyMenu();
		void TrophyLoop();
		void CloseMenuWithHeaderHandoff();
		void DestroyMenuWithHandoff();
		void SkipResults();
		void QuitButtonPressed(int32_t ButtonId);
		void TrophyReadyToSpawn(int32_t ButtonId);
		void NextMenuEarlyExit(int32_t ButtonId);
		void PlayerTurnedAround(class AActor* DestroyedActor);
		void RecenterMenu();
		void DemoMenu();
		void InviteUpdateComplete(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
		void WaitForInvitesUpdateComplete();
		void ChoseSportOpened();
		void DemoSportChosen(EScramSport Sport);
		void RiftTurnAroundComplete(class AActor* DestroyedActor);
		void PlayChooseSportAudio(int32_t ID);
		void ExecuteUbergraph_SelectionDetailsMenu(int32_t EntryPoint);
		void InvitesUpdated__DelegateSignature();
		void MenuOpened__DelegateSignature();
		void SelectionComplete__DelegateSignature(EScramSport Sport, bool SinglePlayer);
		void OldMenuClear__DelegateSignature();
		void QuitToMainMenu__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
