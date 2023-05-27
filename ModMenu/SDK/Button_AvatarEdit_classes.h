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
	 * BlueprintGeneratedClass Button_AvatarEdit.Button_AvatarEdit_C
	 * Size -> 0x0085 (FullSize[0x03AD] - InheritedSize[0x0328])
	 */
	class AButton_AvatarEdit_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     AvatarPos;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     AvatarScale;                                             // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     ButtonPos;                                               // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleAvatar_Alpha_21503F984212304702C8C985282A6328; // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleAvatar__Direction_21503F984212304702C8C985282A6328; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WALF[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleAvatar;                                    // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ADummyAvatar_C*                                      Avatar;                                                  // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AButton_Standard_C*                                  Button;                                                  // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             EditButtonPressed;                                       // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             EditButtonSwapFinished;                                  // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       NoButton;                                                // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       Opponent;                                                // 0x03A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       ScaleUpAvatar;                                           // 0x03AA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       AvatarSetupScreen;                                       // 0x03AB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       NeutralTeamColor;                                        // 0x03AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void EnableButtons();
		void PlayWave();
		void SpawnAvatar();
		void PlayLook();
		void PlaySad();
		void PlayHappy();
		void DisableButtons();
		void Initialize();
		void UserConstructionScript();
		void Timeline_ScaleAvatar__FinishedFunc();
		void Timeline_ScaleAvatar__UpdateFunc();
		void ReceiveBeginPlay();
		void ButtonPressed(int32_t ButtonId);
		void SwapFinished(int32_t ButtonId);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_Button_AvatarEdit(int32_t EntryPoint);
		void EditButtonSwapFinished__DelegateSignature(int32_t ButtonId);
		void EditButtonPressed__DelegateSignature(int32_t ButtonId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
