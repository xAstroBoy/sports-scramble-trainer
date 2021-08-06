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

// BlueprintGeneratedClass PauseMenu.PauseMenu_C
// 0x0343 (FullSize[0x066B] - InheritedSize[0x0328])
class APauseMenu_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             HeaderRoot;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavBL;                                                     // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavBR;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavBM;                                                     // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavFR;                                                     // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavR;                                                      // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavFL;                                                     // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NavL;                                                      // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MenuRoot;                                                  // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             OffsetRoot;                                                // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AvatarOffset;                                              // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             AvatarPos;                                                 // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pos0_Top;                                                  // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        BoundaryMesh;                                              // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             SpawnedMenuRoot;                                           // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pos2_Bottom;                                               // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pos2_Top;                                                  // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pos1_Bottom;                                               // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pos1_Top;                                                  // 0x03C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Pos0_Bottom;                                               // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             QpPos2_Bottom;                                             // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             QpPos2_Top;                                                // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Column02;                                                  // 0x03E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             QpPos1_Bottom;                                             // 0x03E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             QpPos1_Top;                                                // 0x03F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Column1;                                                   // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Column0;                                                   // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             QpPos0_Bottom;                                             // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             QpPos0_Top;                                                // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ScaleMenu_Alpha_A5860E7E47AA6B9DA1A6928B4DBCCA91; // 0x0420(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ScaleMenu__Direction_A5860E7E47AA6B9DA1A6928B4DBCCA91; // 0x0424(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_RSO4[0x3];                                     // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ScaleMenu;                                        // 0x0428(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Closing;                                                   // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_LSMH[0x7];                                     // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    AllButtonsDestroyed;                                       // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    UnPauseReady;                                              // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               MenuExited;                                                // 0x0458(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               KeepCapsule;                                               // 0x0459(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Q0N7[0x6];                                     // 0x045A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABB_GameSelector_C*                          DebugBbSelector;                                           // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABW_GameSelector_C*                          DebugBwGameSelector;                                       // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATN_GameSelector_C*                          DebugTnGameSelector;                                       // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InstantClose;                                              // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               EndingGame;                                                // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_L8XJ[0x2];                                     // 0x0482(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                PanelCount;                                                // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              MenuActor;                                                 // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    PauseMenuOpened;                                           // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PauseMenuCleared;                                          // 0x04A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ShouldSaveSettings;                                        // 0x04B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_MSTA[0x7];                                     // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UScramSaveData*                              SaveData;                                                  // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InputEnabled;                                              // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_9UF6[0x7];                                     // 0x04C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ANoPause_BP_C*                               NoPauseactor;                                              // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHeader_C*                                   Header;                                                    // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AButton_Standard_C*>                  StandardButtons;                                           // 0x04E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               OptionScreen;                                              // 0x04F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_CIG4[0x7];                                     // 0x04F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AButton_Standard_C*                          LeftButton;                                                // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     VoicePermissionString;                                     // 0x0500(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AScramPlayer_BP_C*                           Player;                                                    // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AScramPlayerController*                      PlayerController;                                          // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          VoiceChatButton;                                           // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               QuittingMp;                                                // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_D4ZZ[0x7];                                     // 0x0529(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMenu_Confirmation_C*                        ConfirmationMenu;                                          // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASelectionDetailsMenu_C*                     MenuManager;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScramPlayerPreferences                     preferences;                                               // 0x0540(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_P3E5[0x4];                                     // 0x054C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class AButton_SideOption_C*>                SideButtons;                                               // 0x0550(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FName>                               SkillNames;                                                // 0x0560(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AButton_TextOption_C*>                TextOptionButtons;                                         // 0x0570(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                               BatSideChanged;                                            // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PlaySwapFX;                                                // 0x0581(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               NoSwap;                                                    // 0x0582(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Pitching;                                                  // 0x0583(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               PitchingHandChanged;                                       // 0x0584(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_17TZ[0x3];                                     // 0x0585(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AButton_Standard_C*                          QuitButton;                                                // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TrainingOptions;                                           // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	SportsScramble_EScramSport                         Sport;                                                     // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IU37[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AButton_Standard_C*                          TrainingOptionOrRestartButton;                             // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_AvatarEdit_C*                        AvatarButton;                                              // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FScramGameInvite>                    invites;                                                   // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScramGameInvite                            FriendToJoin;                                              // 0x05B8(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               NeedToJoin;                                                // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_42G4[0x7];                                     // 0x0619(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               CatchingSkillNames;                                        // 0x0620(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               ShowDebugMessages;                                         // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ABEF[0x7];                                     // 0x0631(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               ServiceStyleNames;                                         // 0x0638(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AButton_Sports_C*                            SportOptionsButton;                                        // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSport                         SelectedSport;                                             // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Red;                                                       // 0x0651(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TrainingOptionsLastMenu;                                   // 0x0652(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ChallengeActive;                                           // 0x0653(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               RestartingChallenge;                                       // 0x0654(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ActiveGame;                                                // 0x0655(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBatting;                                                 // 0x0656(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TrainingActive;                                            // 0x0657(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               VoiceConfirmed;                                            // 0x0658(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_03AK[0x7];                                     // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AGameHandlerOnline_C*                        OnlineGameHandler;                                         // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableInstrumentSwap;                                     // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DemoMode;                                                  // 0x0669(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReflectionActive;                                          // 0x066A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PauseMenu.PauseMenu_C");
		return ptr;
	}



	void UnloadReflection();
	void LoadReflection();
	void SpawnTempIntroButton();
	void SpawnAudioButton();
	void SpawnAudioOptions();
	void SpawnExtras();
	void GetCurrentLanguage(struct FText* Language);
	void SpawnLanguageMenu();
	void SpawnPointerButton();
	void UpdatePointerType();
	void RestartGame();
	void SpawnRestartButton(const struct FScriptDelegate& Event);
	void SpawnSportOptionButton();
	void ShowDebugMsg(const struct FString& Message, float LifeTime);
	void SetSport();
	void SpawnJoinInviteMenu(const struct FScriptDelegate& JoinEvent, const struct FScriptDelegate& DeclineAllEvent);
	void SpawnGripButton();
	void SpawnAvatarOptionsButton();
	void SpawnAvatarMenu();
	void SpawnTrainingOpMenu(bool* GoWide);
	void SpawnTrainingOptionsButton(bool Back, const struct FScriptDelegate& Event);
	void SwapThrowingGlove();
	void SwapInstrumentHand();
	void ShowInstrument();
	void HideInstrument();
	void GetPnpPreferences();
	void NextMenu(const struct FScriptDelegate& Event);
	void SpawnConfirmationMenu(const struct FName& LocText, const struct FScriptDelegate& Event);
	void UpdateVoiceSetting();
	void RemoveNavButtons();
	void ShowNoPauseIcon();
	void SaveOptions();
	void EnableMenuInput();
	void SpawnHeader();
	void UpdateBoundarySetting();
	void DestroyMenuActors();
	void DisableMenuInput();
	void SpawnQuarterPanel(class USceneComponent* Loc, const struct FName& LocString);
	void SetColumns(bool HasAvatarButton);
	void GetAnchors(class USceneComponent** QpPos, class USceneComponent** ButtonPos);
	void SpawnBackButtons(const struct FScriptDelegate& EventBack);
	void SpawnQuitButton();
	void SpawnVoiceChatButton();
	void SpawnSportButtons(SportsScramble_EScramSport Selection);
	void SpawnSharedButtons();
	void ResetGameSelector();
	void GetDebugGameSelectors(bool* DebugSelectorExists, bool* ResetAllowed);
	void EndGame();
	void Initialize();
	void UserConstructionScript();
	void Timeline_ScaleMenu__FinishedFunc();
	void Timeline_ScaleMenu__UpdateFunc();
	void InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key);
	void OnFailure_CB7A18C444F2E804805EC3A042280AA5();
	void OnSuccess_CB7A18C444F2E804805EC3A042280AA5();
	void OnFailure_1BED71814B71FE0478E2F1AAE838DA9E();
	void OnSuccess_1BED71814B71FE0478E2F1AAE838DA9E();
	void OnFailure_FE43AE584DB619A31AB3558300E8F65D();
	void OnSuccess_FE43AE584DB619A31AB3558300E8F65D();
	void BoundaryLineChanged(int ID);
	void VoiceChatChanged(int ID);
	void PitcherHandChanged(int ID);
	void TennisHandChanged(int ID);
	void BattingSideChanged(int ID);
	void BattingHandChanged(int ID);
	void TennisSkillChanged(int ID);
	void BattingSkillChanged(int ID);
	void PitchingSkillChanged(int ID);
	void CatchingSkillChanged(int ID);
	void BowlingSkillChanged(int ID);
	void GripChanged(int ID);
	void TennisServeStyleChanged(int ID);
	void PointerTypeChanged(int ID);
	void VoiceConfirmationConfirmed();
	void TipsChanged(int ID);
	void GameVolumeChanged(int ID);
	void ShortIntroChanged(int ID);
	void VoipVolumeChanged(int ID);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ScaleUpMenu();
	void ScaleDownMenu();
	void HeaderDestroyed(class AActor* DestroyedActor);
	void OpenFirstMenu();
	void TopMenuOpen();
	void DisableInputOnButtonPress(int ID);
	void CloseMenu();
	void CloseMenuButtonPressed(int ButtonId);
	void SwapToVoiceConfirmation();
	void QuitMultiplayer();
	void SpawnVoiceConfirmation();
	void VoiceConfirmatinoButtonSelected(int ID);
	void ConfirmationMenuReady();
	void BackToTop(int ButtonId);
	void ShowForfeit();
	void ForfeitConfirmationMade(int ID);
	void ForfeitSelected(int ID);
	void QuitSelected(int ID);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void SpawnTrainingOptions();
	void TrainingOptionsSelected(int ID);
	void TrainingOptionsOpened();
	void CreateAvatarMenu();
	void AvatarButtonSelected(int ID);
	void AvataMenuOpened();
	void OpenMainOptionsMenu();
	void CreateJoinInviteMenu();
	void InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
	void JoinGame(const struct FScramGameInvite& JoinPlayer);
	void DeclineAll();
	void JoinTheMatch();
	void NoInvitesFound();
	void SportOptionsButtonPressed(int ID);
	void ShowSportOptions();
	void SportOptionsOpened();
	void RestartConfirmation();
	void RestartConfirmationChoiceMade(int ID);
	void RestartChallengeSelected(int ButtonId);
	void RecenterMenu();
	void ClientUnrealJoinFailed(SportsScramble_EScramPendingGameFailure failureType);
	void UnrealJoinFailed();
	void LanguageOptionButtonPressed(int ID);
	void ShowLanguageOptions();
	void ExtrasButtonPressed(int ID);
	void SpawnExtrasMenu();
	void CustomEvent();
	void AudioButtonSelected(int ID);
	void SpawnAudioMenu();
	void ExecuteUbergraph_PauseMenu(int EntryPoint);
	void PauseMenuCleared__DelegateSignature();
	void PauseMenuOpened__DelegateSignature();
	void UnPauseReady__DelegateSignature(bool ForceKeepTravelCapsule);
	void AllButtonsDestroyed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
