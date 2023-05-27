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
	 * BlueprintGeneratedClass Menu_3dPanelImages.Menu_3dPanelImages_C
	 * Size -> 0x00A8 (FullSize[0x03D0] - InheritedSize[0x0328])
	 */
	class AMenu_3dPanelImages_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     PanelPosR;                                               // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PanelPosCR;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PanelPosCL;                                              // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PanelPosL;                                               // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PanelPosC;                                               // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Scene;                                                   // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SelectionStarted;                                        // 0x0360(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             SelectionComplete;                                       // 0x0370(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<class FName>                                        LocTextNames;                                            // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<class UTexture2D*>                                  ImagesL;                                                 // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<class AButton_PanelImage_C*>                        Buttons;                                                 // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		TArray<class UTexture2D*>                                  ImagesR;                                                 // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn
		TArray<class AButton_3dPanelImage_C*>                      Buttons3d;                                               // 0x03C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

	public:
		void EnableMenuInput(bool* InputEnabled);
		void DisableMenuInput(bool* InputDisabled);
		void RemoveSubMenu(bool* Removed);
		void HideSubMenu(bool* MenuHidden);
		void RestoreSubMenu(bool* MenuShown);
		void Initialize();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ButtonPressed(int32_t ID);
		void ButtonSwapped(int32_t ID);
		void DisableMenu();
		void ExecuteUbergraph_Menu_3dPanelImages(int32_t EntryPoint);
		void SelectionComplete__DelegateSignature(int32_t ID);
		void SelectionStarted__DelegateSignature(int32_t ID);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
