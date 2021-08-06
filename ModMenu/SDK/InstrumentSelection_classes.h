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

// BlueprintGeneratedClass InstrumentSelection.InstrumentSelection_C
// 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
class AInstrumentSelection_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             Root;                                                      // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               AButtonPressed;                                            // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               SelectionOpen;                                             // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Closing;                                                   // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_21U3[0x5];                                     // 0x033B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Offset;                                                    // 0x0340(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0370(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass InstrumentSelection.InstrumentSelection_C");
		return ptr;
	}



	void UpdatePosition();
	void DropInstruments();
	void DestroyInstrumentSelectionObjects();
	void CreateInstrumentSelectionObjects();
	void UserConstructionScript();
	void InpActEvt_A_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_A_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void OpenSelection();
	void CloseSelection();
	void InstrumentSelected();
	void ExecuteUbergraph_InstrumentSelection(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
