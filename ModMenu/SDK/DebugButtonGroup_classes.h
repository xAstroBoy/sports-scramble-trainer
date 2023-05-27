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
	 * BlueprintGeneratedClass DebugButtonGroup.DebugButtonGroup_C
	 * Size -> 0x0068 (FullSize[0x0390] - InheritedSize[0x0328])
	 */
	class ADebugButtonGroup_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     Root;                                                    // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FDebugButtonInfo>                            ButtonInfos;                                             // 0x0338(0x0010) Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, ExposeOnSpawn
		int32_t                                                    Columns;                                                 // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_SYTD[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ChoiceMade;                                              // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Spacing;                                                 // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    ButtonSelected;                                          // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ADebugHandButton_C*>                          Buttons;                                                 // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
		bool                                                       AutoClose;                                               // 0x0378(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_VN7F[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ChoiceMadePreAutoDestroy;                                // 0x0380(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void DestroyButtons();
		void CreateButtons();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ButtonPressed(int32_t ButtonId);
		void ChoiceComplete(class AActor* DestroyedActor);
		void CloseSelected(class AActor* DestroyedActor);
		void DestroyButtonGroup();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_DebugButtonGroup(int32_t EntryPoint);
		void ChoiceMadePreAutoDestroy__DelegateSignature(int32_t ButtonSelected);
		void ChoiceMade__DelegateSignature(int32_t ButtonSelected);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
