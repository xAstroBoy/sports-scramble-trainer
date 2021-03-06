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

// BlueprintGeneratedClass Menu_JoinInvite.Menu_JoinInvite_C
// 0x0160 (FullSize[0x0488] - InheritedSize[0x0328])
class AMenu_JoinInvite_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             AudioSlide;                                                // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            WidgetMessageComp;                                         // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DeclineAllPos;                                             // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ListOffset;                                                // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ScaleRoot;                                                 // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh_Middle;                                         // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        StaticMesh_Top;                                            // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            WidgetNamesComp;                                           // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             RightButtons;                                              // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Arrows;                                                    // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ArrowPosBottom;                                            // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ArrowPosTop;                                               // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ButtonPosMiddleR;                                          // 0x0398(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ButtonPosTopR;                                             // 0x03A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x03A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_ScaleMenu_Alpha_5F9C35E64A50CABEA258C59E40A85BB1; // 0x03B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_ScaleMenu__Direction_5F9C35E64A50CABEA258C59E40A85BB1; // 0x03B4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_26NP[0x3];                                     // 0x03B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_ScaleMenu;                                        // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_MoveMessage_Alpha_6DF8BAB0417746D3C4DD65937281A7B5; // 0x03C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_MoveMessage__Direction_6DF8BAB0417746D3C4DD65937281A7B5; // 0x03C4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_042W[0x3];                                     // 0x03C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_MoveMessage;                                      // 0x03C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AButton_Standard_C*>                  Buttons;                                                   // 0x03D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AButton_Arrow_C*>                     ArrowButtons;                                              // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<struct FScramGameInvite>                    InviteList;                                                // 0x03F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	TArray<struct FScramGameInvite>                    InviteList_TestData;                                       // 0x0400(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                DisplayIndex;                                              // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GE4R[0x4];                                     // 0x0414(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AButton_Standard_C*                          ButtonJoinTop;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          ButtonJoinMiddle;                                          // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          ButtonJoinBottom;                                          // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    SelectionStarted;                                          // 0x0430(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AButton_Arrow_C*                             ArrowUp;                                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Arrow_C*                             ArrowDown;                                                 // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    JoinPlayer;                                                // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    DeclineAll;                                                // 0x0460(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UJoinInviteWidget_C*                         JoinInviteWidget;                                          // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Red;                                                       // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_5WQT[0x7];                                     // 0x0479(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UJoinInviteMessageWidget_C*                  MessageWidget;                                             // 0x0480(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Menu_JoinInvite.Menu_JoinInvite_C");
		return ptr;
	}



	void EnableMenuInput(bool* InputEnabled);
	void DisableMenuInput(bool* InputDisabled);
	void RemoveSubMenu(bool* Removed);
	void HideSubMenu(bool* MenuHidden);
	void RestoreSubMenu(bool* MenuShown);
	void InitializeMenu();
	void UpdateView();
	void Initialize();
	void UserConstructionScript();
	void Timeline_MoveMessage__FinishedFunc();
	void Timeline_MoveMessage__UpdateFunc();
	void Timeline_ScaleMenu__FinishedFunc();
	void Timeline_ScaleMenu__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ButtonPressed(int ID);
	void PreviousButtonPressed(int ButtonId);
	void NextButtonPressed(int ButtonId);
	void ButtonSwappedJoin(int ID);
	void DeclineAllSwapped(int ID);
	void ShowMessage();
	void ScaleMenu();
	void ExecuteUbergraph_Menu_JoinInvite(int EntryPoint);
	void DeclineAll__DelegateSignature();
	void JoinPlayer__DelegateSignature(const struct FScramGameInvite& JoinPlayer);
	void SelectionStarted__DelegateSignature(int ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
