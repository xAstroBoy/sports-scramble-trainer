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
	 * BlueprintGeneratedClass BP_TrophyGlove.BP_TrophyGlove_C
	 * Size -> 0x0040 (FullSize[0x0B00] - InheritedSize[0x0AC0])
	 */
	class ABP_TrophyGlove_C : public AScramTrophyGlove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0AC0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ChildActor;                                              // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TrophyStartPosition;                                     // 0x0AD0(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CanChange;                                               // 0x0ADC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ShowingMenuInstrument;                                   // 0x0ADD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_A1A8[0x2];                                   // 0x0ADE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        DefaultColor_1;                                          // 0x0AE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        HoverColor;                                              // 0x0AF0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveTrophy();
		void HideGlove(bool shouldHide);
		void SetMenuInstrumentVisibility(bool visible);
		void SpawnFX();
		void ToggleEnable(bool canGrab, bool* hasTrophy);
		void SetRotation(float LerpIndex, class ATrophyGrabbable* Trophy);
		void SetTrophyPosition(float LerpIndex, class ATrophyGrabbable* Trophy);
		void SetScale(float LerpIndex, class ATrophyGrabbable* Trophy);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void OnShouldGrab(class ATrophyGrabbable* Trophy);
		void ExecuteUbergraph_BP_TrophyGlove(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
