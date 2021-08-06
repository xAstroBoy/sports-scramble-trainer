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

// BlueprintGeneratedClass DebugMainMenu.DebugMainMenu_C
// 0x0230 (FullSize[0x0558] - InheritedSize[0x0328])
class ADebugMainMenu_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             MenuRoot;                                                  // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MenuScaleRoot;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ScaleDebutMenu_Alpha_EB40260D42F9FF195B99EC9076FFA655; // 0x0350(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ScaleDebutMenu__Direction_EB40260D42F9FF195B99EC9076FFA655; // 0x0354(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5TQU[0x3];                                     // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ScaleDebutMenu;                                   // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugButtonInfo>                    DebugMainMenuButtons;                                      // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	class ADebugHandButton_C*                          HubButton;                                                 // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMultiplayerMenu_C*                          MultiplayerMenu;                                           // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ADebugButtonGroup_C*                         MainMenu;                                                  // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0388(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ShowMainMenu;                                              // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ULevelStreamingDynamic*                      ReturnItLevel;                                             // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                      HRDerbyLevel;                                              // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ULevelStreamingDynamic*>              SportLevels;                                               // 0x03B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FDebugButtonInfo>                    TestsButtons;                                              // 0x03C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	class ADebugButtonGroup_C*                         TestsMenu;                                                 // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                      BowlingLevel;                                              // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BowlingStartPos;                                           // 0x03E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     BaseballStartPos;                                          // 0x03EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TennisStartPos;                                            // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableSubMenus;                                           // 0x0404(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1C4M[0x3];                                     // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ADebugHandButton_C*                          VistaButton;                                               // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATravelcapsule_C*                            TravelCapsule;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    DebugTopMenuActive;                                        // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DebugTopMenuDeactivated;                                   // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	SportsScramble_EScramSport                         Sport;                                                     // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GUUO[0x7];                                     // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      GameSelector;                                              // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    LevelReady;                                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       LevelOverride;                                             // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               LoadTrainingLevel;                                         // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ReturningToHub;                                            // 0x0461(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FOMI[0x6];                                     // 0x0462(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AActor*                                      TestActor;                                                 // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBox                                        TennisMinPlayArea;                                         // 0x0470(0x001C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FBox                                        TennisMaxPlayArea;                                         // 0x048C(0x001C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FBox                                        DefaultMinPlayArea;                                        // 0x04A8(0x001C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FBox                                        DefaultMaxPlayArea;                                        // 0x04C4(0x001C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class ADebugButtonGroup_C*                         MatchmakingCancelMenu;                                     // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugButtonInfo>                    MatchmakingTestCancelButtons;                              // 0x04E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FDebugButtonInfo>                    MatchmakingPrefsButtons;                                   // 0x04F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class ADebugButtonGroup_C*                         MatchmakingPrefsMenu;                                      // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugButtonInfo>                    InvitesButtons;                                            // 0x0510(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class ADebugButtonGroup_C*                         InvitesMenu;                                               // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDebugButtonInfo>                    FriendsButtons;                                            // 0x0528(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class ADebugButtonGroup_C*                         FriendsMenu;                                               // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FScramFriend>                        friends;                                                   // 0x0540(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AHeader_C*                                   Header;                                                    // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DebugMainMenu.DebugMainMenu_C");
		return ptr;
	}



	void DestroyDebugMainMenu();
	void DestroyGameActors();
	void BindTestActor(class AActor* Actor);
	void CreateGameSelector();
	void LoadHub();
	void GlobalCleanup();
	void Initialize();
	void UserConstructionScript();
	void Timeline_ScaleDebutMenu__FinishedFunc();
	void Timeline_ScaleDebutMenu__UpdateFunc();
	void OnFailure_FE43AE584DB619A31AB355837624ACB1();
	void OnSuccess_FE43AE584DB619A31AB355837624ACB1();
	void OnFailure_CB7A18C444F2E804805EC3A034E45049();
	void OnSuccess_CB7A18C444F2E804805EC3A034E45049();
	void OnCancel_E743FFE14EFCF26E822A9C9F86551D97();
	void OnTimeout_E743FFE14EFCF26E822A9C9F86551D97();
	void OnFailure_E743FFE14EFCF26E822A9C9F86551D97();
	void OnSuccessClient_E743FFE14EFCF26E822A9C9F86551D97();
	void OnSuccessHost_E743FFE14EFCF26E822A9C9F86551D97();
	void OnFailure_F616CB334D1CC99D841975AF7AC92006();
	void OnSuccess_F616CB334D1CC99D841975AF7AC92006();
	void OnFailure_3315261D4C69B45B41D5C69D9651E093();
	void OnSuccess_3315261D4C69B45B41D5C69D9651E093();
	void OnFailure_967B8F434732D5BD94D7A48E995A66A5();
	void OnSuccess_967B8F434732D5BD94D7A48E995A66A5();
	void ReceiveBeginPlay();
	void ReturnToHub(int ButtonId);
	void LoadHubReady();
	void GameSelected(int ButtonSelected);
	void SpawnDebugTopMenu();
	void MultiplayerCanceled();
	void StartTennis();
	void SpawnTestsMenu();
	void TestChoiceMade(int ButtonSelected);
	void TestOver(class AActor* DestroyedActor);
	void TeleportToVenue(SportsScramble_EScramSport Sport, bool TrainingLevel, const struct FName& LevelOverride);
	void LoadGameplayLevel();
	void RemoveTravelTunnel(const struct FName& NewGeoLevel);
	void CustomLevelLoaded(const struct FName& NewPrimaryLevel);
	void HubLoaded(const struct FName& NewPrimaryLevel);
	void ReceiveTick(float DeltaSeconds);
	void SpawnGameSelector();
	void MatchmakingChoiceMade(int ButtonSelected);
	void Spawn_Matchmaking_Cancel_Menu();
	void Spawn_Matchmaking_Prefs_Menu();
	void PrefsChoiceMade(int ButtonSelected);
	void OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends);
	void InviteAccepted(int ButtonSelected);
	void InviteFriend(int ButtonSelected);
	void Cancel_Invite_Friend(int ButtonSelected);
	void Refresh_Complete(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
	void DoneWithAvatarMenu(int ButtonId);
	void CustomEvent_1(bool AllAwardsComplete);
	void CustomEvent(int ButtonId);
	void CustomEvent_2();
	void ScaleUpMenu();
	void ScaleDownMenu();
	void CustomEvent_3(bool AllAwardsComplete);
	void CustomEvent_4(int ButtonId);
	void CustomEvent_6(bool AllAwardsComplete);
	void CustomEvent_7(int ButtonId);
	void CustomEvent_9(bool AllAwardsComplete);
	void CustomEvent_10(int ButtonId);
	void CustomEvent_11();
	void CustomEvent_5();
	void CustomEvent_8(bool WideNextButton);
	void CustomEvent_12(int ButtonId);
	void CustomEvent_13(bool WideNextButton);
	void CustomEvent_14(int ButtonId);
	void CustomEvent_15(bool WideNextButton);
	void CustomEvent_16(int ButtonId);
	void CustomEvent_17();
	void CustomEvent_18(bool WideNextButton);
	void CustomEvent_19(int ButtonId);
	void ExecuteUbergraph_DebugMainMenu(int EntryPoint);
	void LevelReady__DelegateSignature();
	void DebugTopMenuDeactivated__DelegateSignature();
	void DebugTopMenuActive__DelegateSignature();
	void ShowMainMenu__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
