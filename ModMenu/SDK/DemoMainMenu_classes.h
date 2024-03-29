﻿#pragma once

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
	 * BlueprintGeneratedClass DemoMainMenu.DemoMainMenu_C
	 * Size -> 0x006A (FullSize[0x0392] - InheritedSize[0x0328])
	 */
	class ADemoMainMenu_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Position3;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Position2;                                               // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Position1;                                               // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Position0;                                               // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     MenuRoot;                                                // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ChoiceMade;                                              // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class AButton_Standard_C*>                          Buttons;                                                 // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TouchActor;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Touching;                                                // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowFeatures;                                            // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ShowMenu();
		void HideMenu();
		void BindPause();
		void RemoveButtons();
		void DisableButtonInput();
		void SpawnButton(const struct FTransform& SpawnTransform, const struct FUI_ButtonData& ButtonDataStart, const struct FUI_ButtonData& ButtonDataToggled, int32_t ID, class AButton_Standard_C** Button);
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void SelectionMade(int32_t ID);
		void CloseMenu();
		void ReceiveTick(float DeltaSeconds);
		void ButtonSwapped(int32_t ID);
		void OpenMenu();
		void ButtonDestroyed(class AActor* DestroyedActor);
		void GamePaused();
		void GameUnpaused();
		void ExecuteUbergraph_DemoMainMenu(int32_t EntryPoint);
		void ChoiceMade__DelegateSignature(int32_t ButtonId);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
