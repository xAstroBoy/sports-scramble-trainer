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

// BlueprintGeneratedClass IntroSetup.IntroSetup_C
// 0x00D8 (FullSize[0x0400] - InheritedSize[0x0328])
class AIntroSetup_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             AvatarMenuPos;                                             // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             NextButtonLoc;                                             // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             HeaderLoc;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioVoice;                                                // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PositionMR;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PositionML;                                                // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            WidgetComponent;                                           // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh1;                                               // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        MeshBacking1;                                              // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             MenuRoot;                                                  // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Root;                                                      // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_MenuScale_Alpha_41B1E83D41A0AECE23F0E28844E5C49E; // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_MenuScale__Direction_41B1E83D41A0AECE23F0E28844E5C49E; // 0x038C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KEJN[0x3];                                     // 0x038D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_MenuScale;                                        // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    ChoiceMade;                                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AButton_Standard_C*                          LeftButton;                                                // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          RightButton;                                               // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Removing;                                                  // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_ENSX[0x3];                                     // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Progress;                                                  // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHeader_C*                                   Header;                                                    // 0x03C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIntroSetupWidget_C*                         SetupWidget;                                               // 0x03D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                VoiceTimer;                                                // 0x03D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AScramPlayer_BP_C*                           Player;                                                    // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AvatarMenuActive;                                          // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_T82X[0x7];                                     // 0x03E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMenu_AvatarSetup_C*                         AvatarMenu;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          CompleteButton;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IntroSetup.IntroSetup_C");
		return ptr;
	}



	void SpawnCompleteButton();
	void SpawnAvatarMenu();
	void PlayVoiceSelectionMade(int Choice);
	void PlayVoiceMenuOpen();
	void UpdateChoice(int Choice, int Progress);
	void SpawnButtons();
	void SpawnHeader();
	void MenuVisibility(bool Visibility);
	void Initialize();
	void UserConstructionScript();
	void Timeline_MenuScale__FinishedFunc();
	void Timeline_MenuScale__UpdateFunc();
	void OnLoaded_4E178D054C9768A0BCED61AFD58B3A39(class UObject* Loaded);
	void OnLoaded_F8A0EDC54CC06C1740724DA97E25564D(class UObject* Loaded);
	void OnLoaded_C7DDB53445A29D84A5023A87AE6CAEED(class UObject* Loaded);
	void OnLoaded_4B3D2FC944CA225C28B5E499FEB8B58C(class UObject* Loaded);
	void OnLoaded_717C72CD421866AB659C9E89CE31CF32(class UObject* Loaded);
	void OnLoaded_02601EDC4E2E53F7E5E534B8DC7B379A(class UObject* Loaded);
	void OnLoaded_F557699F4197EA203F7A65B0CB8DE6DC(class UObject* Loaded);
	void ReceiveBeginPlay();
	void SelectionMade(int ID);
	void CloseMenu();
	void ReceiveTick(float DeltaSeconds);
	void ButtonSwapped(int ID);
	void OpenMenu();
	void HeaderDestroyed(class AActor* DestroyedActor);
	void DelayedChoiceEffect(int Choice, int Progress);
	void PlayDelayedVoice();
	void CompleteButtonSwapped(int ID);
	void AvatarSetupAnimComplete();
	void AsyncPlayMenuOpen();
	void AsyncPlaySelectionMade(int Choice);
	void ExecuteUbergraph_IntroSetup(int EntryPoint);
	void ChoiceMade__DelegateSignature(int ButtonId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
