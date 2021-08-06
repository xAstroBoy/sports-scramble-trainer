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

// BlueprintGeneratedClass Menu_PanelImages.Menu_PanelImages_C
// 0x0088 (FullSize[0x03B0] - InheritedSize[0x0328])
class AMenu_PanelImages_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             PanelPosR;                                                 // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PanelPosCR;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PanelPosCL;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PanelPosL;                                                 // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             PanelPosC;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SelectionStarted;                                          // 0x0360(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    SelectionComplete;                                         // 0x0370(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FName>                               LocTextNames;                                              // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<class UTexture2D*>                          Images;                                                    // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<class AButton_PanelImage_C*>                Buttons;                                                   // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Menu_PanelImages.Menu_PanelImages_C");
		return ptr;
	}



	void EnableMenuInput(bool* InputEnabled);
	void DisableMenuInput(bool* InputDisabled);
	void RemoveSubMenu(bool* Removed);
	void HideSubMenu(bool* MenuHidden);
	void RestoreSubMenu(bool* MenuShown);
	void Initialize();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ButtonPressed(int ID);
	void ButtonSwapped(int ID);
	void DisableMenu();
	void ExecuteUbergraph_Menu_PanelImages(int EntryPoint);
	void SelectionComplete__DelegateSignature(int ID);
	void SelectionStarted__DelegateSignature(int ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
