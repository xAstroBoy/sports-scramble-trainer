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
	 * BlueprintGeneratedClass FrontEndManager.FrontEndManager_C
	 * Size -> 0x01A8 (FullSize[0x04D0] - InheritedSize[0x0328])
	 */
	class AFrontEndManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     MenuRoot;                                                // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MenuScaleRoot;                                           // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     StaticBottomButtonRoot;                                  // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            LoopingConfetti_Leftovers;                               // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConfettiCannon_06;                                       // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConfettiCannon_05;                                       // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConfettiCannon_04;                                       // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConfettiCannon_03;                                       // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConfettiCannon_02;                                       // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ConfettiCannon_01;                                       // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioMenu;                                               // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioLogoDisappear;                                      // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAudioComponent*                                     AudioIntro;                                              // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ErrorMessageScale_Alpha_A59E351D4C3828FDC44A39ABEEF795D9; // 0x03A8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ErrorMessageScale__Direction_A59E351D4C3828FDC44A39ABEEF795D9; // 0x03AC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DYBF[0x3];                                   // 0x03AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ErrorMessageScale;                              // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_RotateAnnouncer_Alpha_4B4F0E704FF2B70B4EF3E98B5E3E60C8; // 0x03B8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_RotateAnnouncer__Direction_4B4F0E704FF2B70B4EF3E98B5E3E60C8; // 0x03BC(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S02I[0x3];                                   // 0x03BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_RotateAnnouncer;                                // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    _int_;                                                   // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsSpectator;                                             // 0x03D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TutorialJustCompleted;                                   // 0x03D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_X8BO[0x2];                                   // 0x03D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayer_BP_C*                                   Player;                                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TripleTapEnabled;                                        // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_I1UR[0x3];                                   // 0x03E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ButtonPresses;                                           // 0x03E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMainMenu_C*                                         MainMenu;                                                // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADebugMainMenu_C*                                    DebugMainMenu;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADebugHandButton_C*                                  TempMenu;                                                // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASelectionDetailsMenu_C*                             DetailsMenu;                                             // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSport                                                Sport;                                                   // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LoadTrainingLevel;                                       // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_84DC[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelOverride;                                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSport                                                SelectedSport;                                           // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Selected1P;                                              // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_MR4C[0x6];                                   // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGameHandlerBase_C*                                  ActiveGameHandler;                                       // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AStandLocationIndicator_C*                           StandLocator;                                            // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASS_Logo_C*                                          Logo;                                                    // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AAnnouncer_BP_C*                                     Announcer;                                               // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableLogoSpawn;                                        // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0UMG[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADebugHandButton_C*                                  TrophyResetButton;                                       // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnnouncer_AnimBP_C*                                 AnnouncerAnimBP;                                         // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ReplayNux;                                               // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerInitLocCorrect;                                    // 0x0459(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PlayerInitLocWrong;                                      // 0x045A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DoSetup;                                                 // 0x045B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_CPBQ[0x4];                                   // 0x045C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHubMenu_C*                                          HubMenu;                                                 // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              VoicePermissionString;                                   // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class AMainMenuStand_C*                                    MenuStand;                                               // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MenuOffset;                                              // 0x0480(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AnnouncerAngle;                                          // 0x0484(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AlreadyLoopingConfetti;                                  // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       AllowOptionMenu;                                         // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGZ9[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AHeader_C*                                           Header;                                                  // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AMenu_Message_C*                                     ErrorMenu;                                               // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ErrorButton;                                             // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IntroMessageDisplayed;                                   // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShortIntro;                                              // 0x04A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       DemoMode;                                                // 0x04AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WLBX[0x5];                                   // 0x04AB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADemoMainMenu_C*                                     DemoMainMenu;                                            // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        BeginIntroTimer_H;                                         // 0x04B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        RevealTimer;                                             // 0x04C0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AnnouncerTimer;                                          // 0x04C8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void SetDemoVars();
		void PlayThemeMusic(bool PlayIntro, float FadeTime);
		void SpawnMenuStand();
		void TeleportPlayAreaToArena(const class FName& RowName, bool UseTransitionDuration, float TransitionDuration);
		void RemoveLogo();
		void SpawnLogo(bool LogoOnly);
		void SpawnGame(class AGameHandlerBase_C** GameplayHandler);
		void SpawnTempMenu(const class FScriptDelegate& Event);
		void DemoStart();
		void CheckDebugMode(bool* DebugActive);
		void CheckDemoMode(bool* DemoActive);
		void Initialize();
		void UserConstructionScript();
		void Timeline_RotateAnnouncer__FinishedFunc();
		void Timeline_RotateAnnouncer__UpdateFunc();
		void Timeline_ErrorMessageScale__FinishedFunc();
		void Timeline_ErrorMessageScale__UpdateFunc();
		void OnFailure_FE43AE584DB619A31AB35583454BD2A5();
		void OnSuccess_FE43AE584DB619A31AB35583454BD2A5();
		void OnFailure_CB7A18C444F2E804805EC3A0078B2E5D();
		void OnSuccess_CB7A18C444F2E804805EC3A0078B2E5D();
		void OnLoaded_67BCE369435FE89733A9EA9A9E7BE47D(class UObject* Loaded);
		void OnLoaded_4D0F72764B0410B81B87F38AD33A1025(class UObject* Loaded);
		void InpActEvt_DebugButton_K2Node_InputActionEvent_2(const struct FKey& Key);
		void OnFailure_CB7A18C444F2E804805EC3A01E43AE2F();
		void OnSuccess_CB7A18C444F2E804805EC3A01E43AE2F();
		void OnFailure_FE43AE584DB619A31AB355835C8352D7();
		void OnSuccess_FE43AE584DB619A31AB355835C8352D7();
		void InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key);
		void OnFailure_9E6C8D1F493095BCB7D1C4B4615CCC02();
		void OnSuccess_9E6C8D1F493095BCB7D1C4B4615CCC02();
		void SpawnDemoMainMenu();
		void DemoMainMenuChoiceMade(int32_t ButtonId);
		void BuyNow();
		void BuyNowPositionReady();
		void BuyNowReady();
		void CustomEvent_4(int32_t ID);
		void SpawnFeaturesMenu();
		void DestroyFeaturesMenu(int32_t ButtonId);
		void Features();
		void FeaturePositionReady();
		void ShowFeatures();
		void BeginIntro();
		void StartAnnouncerAudio();
		void AnnouncerReveal();
		void AnnouncerTransform();
		void TransformComplete();
		void AnnouncerExitComplete();
		void ShortIntroBegin();
		void NuxIntroBegin();
		void Hub01AnimComplete();
		void Hub02AnimComplete();
		void Hub03AnimComplete();
		void Hub04AnimComplete();
		void ReturnAnnouncerToSpawn(bool UseHubExit);
		void ShortIntroClipComplete();
		void RevealBeacon(EHubMenuChoices BeaconType);
		void RotateAnnouncer(EHubMenuChoices Choice, float Angle);
		void StartShortAnnouncer();
		void StartReveal();
		void BeginIntroTimer();
		void RevealTimerReturn();
		void TeleportToVenue(EScramSport Sport, bool TrainingLevel, const class FName& LevelOverride);
		void LoadGameplayLevel();
		void RemoveTravelTunnel(const class FName& NewGeoLevel);
		void CustomLevelLoaded(const class FName& NewPrimaryLevel);
		void ReadyToStartGame();
		void GameHandlerTeleport(EScramSport Sport, bool TrainingLevel, const class FName& LevelOverride);
		void ResetGameplayLevel(const class FName& SpawnLocOverride);
		void ReceiveBeginPlay();
		void AllowSwap();
		void CreateMainMenu();
		void ShowLogoScreen();
		void ToggleDebugMenu();
		void DisallowSwap();
		void CreateDebugMenu();
		void MainMenuSelectionMade(EMainMenuChoices Choice);
		void SpawnHubMenu(bool NUX);
		void HubMenuSelection(EHubMenuChoices Selection);
		void CreateDetailsMenu(ESelectionDetailsMenuType MenuType, EScramSport Sport, EGameModeTypes ResultsType);
		void GameSelectionMade(EScramSport Sport, bool SinglePlayer);
		void ReturnToHub();
		void ReadyToReturnToHub();
		void PlayerHasReturnedToHub(const class FName& NewPrimaryLevel);
		void ReloadHub();
		void HiddenHubLoaded(const class FName& NewPrimaryLevel);
		void LevelChanged(const class FName& Level);
		void SpawnResultsScreen();
		void ReceiveTick(float DeltaSeconds);
		void TrophyRoomLoaded(const class FName& NewPrimaryLevel);
		void GoToTrophyRoom();
		void TrophyRoomPositionConfirmed();
		void ReadyToLoadTrophyRoom();
		void ExitTrophies(int32_t ButtonId);
		void DebugResetTrophies(int32_t ButtonId);
		void SetupDone(class AActor* DestroyedActor);
		void QuitGame();
		void ShowQuitConfirmation();
		void ReadyToShowConfirmation();
		void QuitChoiceMade(int32_t ID);
		void PlayerReadyForIntro();
		void PlayerFadedOut();
		void OptionMenuPostionConfirmed();
		void ReadyToSpawnOptionsMenu();
		void ShowOptionsMenu();
		void OptionsMenuDestroyed(class AActor* DestroyedActor);
		void StandButtonPressed(int32_t ID);
		void StandSelectionMade(int32_t ID);
		void CloseMenuStnad(EHubMenuChoices Choice, float Angle);
		void SpawnIntroOnlyConfettiCannonVFX();
		void LevelsUnloaded();
		void HubSelectionStarted(EHubMenuChoices Choice, float Angle);
		void StartLoopingConfetti();
		void StopLoopingConfetti();
		void ShellInviteFromRelaunchFailed();
		void OnShellInviteAccepted(const struct FScramGameInvite& GameInvite);
		void ClientUnrealJoinFailed(EScramPendingGameFailure failureType);
		void ErrorMessageComplete(class AActor* DestroyedActor);
		void ScaleUpErrorMessage();
		void ScaleDownErrorMessage();
		void DisplayErrorMessage();
		void SpawnErrorMenu();
		void ErrorButtonPressed(int32_t ButtonId);
		void DisplayIntroMessage();
		void EndIntroMessage(int32_t ButtonId);
		void ContinueSetup();
		void ContinueIntro();
		void ChooseLanguage();
		void LanguageSelected(int32_t ID);
		void ExecuteUbergraph_FrontEndManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
