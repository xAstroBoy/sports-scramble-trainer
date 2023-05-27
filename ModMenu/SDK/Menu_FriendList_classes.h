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
	 * BlueprintGeneratedClass Menu_FriendList.Menu_FriendList_C
	 * Size -> 0x0248 (FullSize[0x0570] - InheritedSize[0x0328])
	 */
	class AMenu_FriendList_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                MeshOfflineTop;                                          // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeshOfflineBottom;                                       // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                MeshOfflineMiddle;                                       // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetOfflineComp;                                       // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     OfflineParent;                                           // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosWideBottom;                                     // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosWideMiddle;                                     // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosWideTop;                                        // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     WideButtons;                                             // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ArrowPosBottom;                                          // 0x0378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ArrowPosTop;                                             // 0x0380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Arrows;                                                  // 0x0388(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosBottomL;                                        // 0x0390(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosMiddleL;                                        // 0x0398(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosBottomR;                                        // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosMiddleR;                                        // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosTopL;                                           // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     LeftButtons;                                             // 0x03B8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPosTopR;                                           // 0x03C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     RightButtons;                                            // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_Bottom;                                       // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_Middle;                                       // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_Top;                                          // 0x03E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh_Backing;                                      // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    WidgetNamesComp;                                         // 0x03F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<class AButton_Standard_C*>                          Buttons;                                                 // 0x0400(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class AButton_Arrow_C*>                             ArrowButtons;                                            // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<struct FScramFriend>                                FriendsList;                                             // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<struct FScramGameInvite>                            InviteList;                                              // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<struct FScramFriend>                                FriendsList_TestData;                                    // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FScramGameInvite>                            InviteList_TestData;                                     // 0x0450(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FUI_FriendStatus>                            FriendStatusList;                                        // 0x0460(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		int32_t                                                    DisplayIndex;                                            // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D576[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UFriendListWidget_C*                                 FriendsListWidget;                                       // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFriendListOfflineWidget_C*                          OfflineWidget;                                           // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonInviteTop;                                         // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonInviteMiddle;                                      // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonInviteBottom;                                      // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonJoinTop;                                           // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonJoinMiddle;                                        // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonJoinBottom;                                        // 0x04B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SelectionStarted;                                        // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AButton_Arrow_C*                                     ArrowUp;                                                 // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Arrow_C*                                     ArrowDown;                                               // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             InvitePlayer;                                            // 0x04D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             JoinPlayer;                                              // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UScramGameInstance_C*                                GameInstance;                                            // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ConnectionFailure;                                       // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       AllowPauseSet;                                           // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A42U[0x7];                                   // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AButton_Standard_C*                                  ButtonDeclineTop;                                        // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonDeclineMiddle;                                     // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  ButtonDeclineBottom;                                     // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RefreshNeeded;                                           // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7X8S[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FScramGameInvite>                            InviteListNew;                                           // 0x0538(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<struct FScramFriend>                                FriendsListNew;                                          // 0x0548(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		struct FTimerHandle                                        RefreshTimer;                                            // 0x0558(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       SelectionMade;                                           // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Refreshing;                                              // 0x0561(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_6KGD[0x6];                                   // 0x0562(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayer_BP_C*                                   LocalPlayer;                                             // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EnableMenuInput(bool* InputEnabled);
		void DisableMenuInput(bool* InputDisabled);
		void RemoveSubMenu(bool* Removed);
		void HideSubMenu(bool* MenuHidden);
		void RestoreSubMenu(bool* MenuShown);
		void ShowMessage();
		void HideMessage();
		void UpdateView();
		void BuildLists();
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ButtonPressed(int32_t ID);
		void ButtonSwappedInvite(int32_t ID);
		void PreviousButtonPressed(int32_t ButtonId);
		void NextButtonPressed(int32_t ButtonId);
		void ButtonSwappedJoin(int32_t ID);
		void DismissInvite(int32_t ID);
		void RefreshData();
		void OnGetFriends(bool wasSuccessful, TArray<struct FScramFriend> friends);
		void InvitesChecked(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
		void ButtonPressedNoSelection(int32_t ID);
		void ButtonUntouched(int32_t ID);
		void NewInvite();
		void ExecuteUbergraph_Menu_FriendList(int32_t EntryPoint);
		void ConnectionFailure__DelegateSignature();
		void JoinPlayer__DelegateSignature(const struct FScramGameInvite& JoinPlayer);
		void InvitePlayer__DelegateSignature(const struct FScramFriend& InvitePlayer);
		void SelectionStarted__DelegateSignature(int32_t ID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
