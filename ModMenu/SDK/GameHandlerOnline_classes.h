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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GameHandlerOnline.GameHandlerOnline_C
// 0x019D (FullSize[0x04E5] - InheritedSize[0x0348])
class AGameHandlerOnline_C : public AScramHandshakeActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             FarRightButtonPos;                                         // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             StaticBottomMidButtonPos;                                  // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             StaticMenuRoot;                                            // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AvatarButtonRPos;                                          // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AvROffset;                                                 // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AvatarButtonLPos;                                          // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AvLOffset;                                                 // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             BottomRightButtonPos;                                      // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             BottomLeftButtonPos;                                       // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             BottomMidButtonPos;                                        // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             FarLeftButtonPos;                                          // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             LeftButtonPos;                                             // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MenuRoot;                                                  // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MenuScaleRoot;                                             // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             RightButtonPos;                                            // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             OffsetRoot;                                                // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Music;                                                     // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_MenuScale_Alpha_863974084A4C064B038E93A7E471E26C; // 0x03E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_MenuScale__Direction_863974084A4C064B038E93A7E471E26C; // 0x03E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LREW[0x3];                                     // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_MenuScale;                                        // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHeader_C*                                   Header;                                                    // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSport                         Sport;                                                     // 0x0400(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               PlayWithFriend;                                            // 0x0401(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_YQHQ[0x6];                                     // 0x0402(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    MenuOpened;                                                // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OldMenuClear;                                              // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AButton_Standard_C*                          LeftButton;                                                // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          RightButton;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          NextButton;                                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          HomeButton;                                                // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      ActiveSubmenu;                                             // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemotePlayerReady;                                         // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_4PQ5[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMenu_MpReady_C*                             ReadyMenu;                                                 // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReadyMenuFullyOpen;                                        // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MatchOver;                                                 // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_AHSU[0x6];                                     // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMenu_Results_C*                             ResultsMenu;                                               // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FResultsData                                Results;                                                   // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_78CD[0x4];                                     // 0x047C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMenu_TrophyAwarded_C*                       TrophyMenu;                                                // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RemotePlayerWantsRematch;                                  // 0x0488(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaitingOnRemoteRematch;                                    // 0x0489(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BB_HostIsHomeTeam;                                         // 0x048A(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               AvatarMenuOpened;                                          // 0x048B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WaitingToChooseSport;                                      // 0x048C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_PB55[0x3];                                     // 0x048D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AButton_AvatarEdit_C*>                AvatarButtons;                                             // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               NetworkFailureDetected;                                    // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NetworkFailureMenuCanActivate;                             // 0x04A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QEYA[0x6];                                     // 0x04A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      ActiveStaticMenu;                                          // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      GameManager;                                               // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState;                                       // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OWO4[0x7];                                     // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    ReturnExpectedClientState;                                 // 0x04C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               HostForfeit;                                               // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasSeenInitialMessage;                                     // 0x04D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RestoringGame;                                             // 0x04D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MatchStarting;                                             // 0x04D3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KY1W[0x4];                                     // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AButton_Standard_C*                          BackButton;                                                // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReconnectDelayActive;                                      // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ClientCanTravel;                                           // 0x04E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ServerCanTravel;                                           // 0x04E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ClientCanBeginMatch;                                       // 0x04E3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ServerCanBeginMatch;                                       // 0x04E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerOnline.GameHandlerOnline_C");
		return ptr;
	}



	void SpawnSevereMessageMenu();
	void RemoveErrorMenu();
	void ClosePauseMenu();
	void FailsafeDoubleMenu();
	void RepairLocalClientState(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> NewClientState);
	void UnbindPause();
	void BindPause();
	void CheckRemotePlayerClientState(const struct FScriptDelegate& RemotePlayerClientState);
	void ResetStatusBools();
	void SpawnExitButton(bool StaticPosition, const struct FScriptDelegate& ExitEvent);
	void ShowMenus();
	void HideMenus();
	void RemoveAvatarButtons();
	void SpawnAvatarButtons();
	void SpawnConfirmationMenu(const struct FName& LocText, const struct FText& OverrideText, const struct FScriptDelegate& Selection, bool Static);
	void SpawnTextTwoMenu(const struct FName& LocText0, const struct FName& LocText1, const struct FScriptDelegate& SelectionFinished);
	void PlayerReady_(class AScramPlayer* Player, bool* Ready);
	void SpawnSportOptionsMenu();
	void SpawnChooseSportMenu(const struct FScriptDelegate& ChoiceEvent);
	void SetFindMatchGameOptions();
	void SpawnBowlingGloves(class AScramPlayer* Player);
	void SpawnMessageMenu(const struct FText& Text, bool Static);
	void SpawnAwardMenu(const struct FScriptDelegate& AwardReadyEvent);
	void AwardsEarned_(bool* AwardWaiting);
	void SpawnResultsMenu(const struct FScriptDelegate& ResultsCompleteEvent, const struct FResultsData& ResultsData);
	void PrepSport();
	void RevealRemoteAvatar();
	void SpawnGameManager();
	void SpawnSportIconMenu(class AMenu_MpSportIcon_C** Menu);
	void SpawnMpReadyMenu();
	void SpawnAvatarChoiceMenu();
	void NextMenu(const struct FScriptDelegate& Event);
	void RemoveNavigationButtons();
	void DisableActiveMenuInput();
	void SpawnNavigationButtons(bool Ok, const struct FScriptDelegate& OkEvent, bool WideSpacing, bool Next, const struct FScriptDelegate& NextEvent, bool Trophy, bool Home, bool FocusNext);
	void EnableActiveMenuInput();
	void SpawnHeader(const struct FScriptDelegate& InitialMenu_Event, bool StartOpen);
	void Initialize();
	void UserConstructionScript();
	void Timeline_MenuScale__FinishedFunc();
	void Timeline_MenuScale__UpdateFunc();
	void OnFailure_CB7A18C444F2E804805EC3A08673C765();
	void OnSuccess_CB7A18C444F2E804805EC3A08673C765();
	void OnFailure_FE43AE584DB619A31AB35583C4B33B9D();
	void OnSuccess_FE43AE584DB619A31AB35583C4B33B9D();
	void OnLoaded_3BE7A01644B7D6F446DF06B53AF96672(class UObject* Loaded);
	void ReceiveBeginPlay();
	void InitialMenu();
	void ScaleUpMenu();
	void ScaleDownMenu();
	void ButtonPressed(int ID);
	void HomeButtonPressed(int ButtonId);
	void AvatarChoiceMenuOpened();
	void AvatarSelected(int ButtonId);
	void SpawnReadyMenu();
	void ReadyMenuOpened();
	void AllPlayersReady();
	void CloseReadyMenu();
	void SpawnIconMenu();
	void TennisMatchComplete(TEnumAsByte<GameResult_EGameResult> Result);
	void ShowResults();
	void GameOver();
	void SpawnCapsule();
	void CapsuleOn();
	void SetResults(TEnumAsByte<GameResult_EGameResult> Results_Game_Result);
	void TrophyComplete(bool AllAwardsComplete);
	void TrophyReadyToSpawn(int ButtonId);
	void CreateTrophyMenu();
	void TrophyLoop();
	void CreateNextFromResultsButton();
	void ResultsDoneSelected(int ButtonId);
	void RemotePlayerReplayRequested(int ID);
	void RestartMatch();
	void WaitingForRematch();
	void WaitingForRematchDisplayed();
	void DoNothing(int ButtonId);
	void BowlingMatchComplete(TEnumAsByte<GameResult_EGameResult> MatchResult, int Player1GamesWon, int Player2GamesWon);
	void BaseballMatchComplete(bool LocalPlayerVictory, int AwayScore, int HomeScore);
	void HeaderHandoffComplete(class AActor* DestroyedActor);
	void SpawnAvatarMenu();
	void SportOptionsSelected(SportsScramble_EScramSport Sport, bool BBHostIsHomeTeam);
	void Sport_Chosen(SportsScramble_EScramSport Sport);
	void SpawnGameOptionsMenu();
	void SportOptionsMenuDisplayed();
	void SportOptionsChosen(int ButtonId);
	void OnGeoLevelChanged(const struct FName& NewGeoLevel);
	void PlayerInitComplete(class AScramPlayer* Player);
	void OnMatchStart();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void FadeComplete();
	void Shutdown();
	void OnInitialPlayerInitComplete(class AScramPlayer* Player);
	void OnRemoteAvatarSelected(class AScramPlayer* Player);
	void ResultsDisplayComplete(bool WideNextButton);
	void PlayMatchBeginAudio();
	void HeartbeatConnected(class AScramPlayerController* PlayerController);
	void HeartbeatDisconnected(class AScramPlayerController* PlayerController);
	void HeartbeatTravelCapsuleClosed();
	void HeartbeatReconnected(class AScramPlayerController* PlayerController);
	void SpawnMenuInstruments();
	void Net_AllPlayersReconnected();
	void OnDisconnect_Local();
	void OnDisconnect_Remote();
	void OnDisconnect_Remote_Menu0();
	void OnDisconnect_Remote_Menu1();
	void OnGameOverMenu();
	void SpawnRematchOrResetMenu();
	void RematchWithFriendSelectionMade(int ID);
	void RematchWithFriendOpened();
	void ReplayChooseSport();
	void MulticastReselectSport();
	void SpawnRematchMenu();
	void RematchChoiceMenu(int ID);
	void DisconnectPauseEvent();
	void MatchBeginning();
	void OnNetworkFailure();
	void TrySpawnNetworkFailureMenu();
	void SpawnNetworkFailureMenu();
	void NetworkFailureTravelCapsuleClosed();
	void GamePaused();
	void GameUnpaused();
	void OnRemoteAvatarUnselected();
	void ExitConfirmResult(int ID);
	void WaitinForHostMessageReady();
	void QuitSelectedPauseMenu();
	void OverrideHostReady(bool Ready);
	void OverrideClientReady(bool Ready);
	void RemotePlayerReadyAgain();
	void QuitViaPause();
	void ResetFromPauseMenu();
	void SendClientExpectedState(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState);
	void SendHostExpectedState(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> ExpectedClientState);
	void RequestHostExpectedState();
	void RequestClientExpected();
	void SportOptionsSelectedClientOnly(SportsScramble_EScramSport Sport, bool BBHostIsHomeTeam);
	void RequestSportOptionsSelected();
	void ForfeitResults();
	void SpawnChooseSport();
	void InitialMessageDisplayed();
	void ShowConnctionMessage();
	void NetworkFailureExit(int ButtonId);
	void SpawnNetworkFailure();
	void PlayForfeitMusic();
	void MatchBeginTravelCapsuleOpened();
	void ServerReady();
	void Multi_Initialize();
	void BackToChooseSport(int ButtonId);
	void StartTravel();
	void SetClientCanTravel();
	void BeginMatch();
	void SetClientCanBeginMatch();
	void Multi_BeginMatchOpenCapsule();
	void ConnectionMessageOpened();
	void ConnectionMessage();
	void ExecuteUbergraph_GameHandlerOnline(int EntryPoint);
	void ReturnExpectedClientState__DelegateSignature(TEnumAsByte<OnlineGameHandlerClientStates_EOnlineGameHandlerClientStates> RemotePlayerExpectedClientState);
	void OldMenuClear__DelegateSignature();
	void MenuOpened__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
