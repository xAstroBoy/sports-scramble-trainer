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
	 * BlueprintGeneratedClass BP_TrophyGrabbable.BP_TrophyGrabbable_C
	 * Size -> 0x00B8 (FullSize[0x0C40] - InheritedSize[0x0B88])
	 */
	class ABP_TrophyGrabbable_C : public ABP_TrophyGrabbableBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B88(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Cubbie;                                                  // 0x0B90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Pivot;                                                   // 0x0B98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    Widget;                                                  // 0x0BA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       Box;                                                     // 0x0BA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_0_0_NewTrack_0_B5FAF22A4DFEB85A4A7758BB4FF27E7B; // 0x0BB0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0_0__Direction_B5FAF22A4DFEB85A4A7758BB4FF27E7B; // 0x0BB4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J77U[0x3];                                   // 0x0BB5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_0_1;                                            // 0x0BB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AInfoDisplay_C*                                      DisplayActor;                                            // 0x0BC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABP_TrophyRoomMonitorDisplay_C*                      MonitorDisplay;                                          // 0x0BC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ACubbyEffect_C*                                      CubbyEffect;                                             // 0x0BD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              CubbyEffectClass;                                        // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDataTableRowHandle                                 TrophyDataEntry;                                         // 0x0BE0(0x0010) Edit, BlueprintVisible, NoDestructor
		bool                                                       ForceTrophyEarn;                                         // 0x0BF0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       ForceShowTrophy;                                         // 0x0BF1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_83SM[0x6];                                   // 0x0BF2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATrophyProp_Base_C*                                  TrophyProp;                                              // 0x0BF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PivotRotationOffset;                                     // 0x0C00(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CubbiePositionLoc;                                       // 0x0C0C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SportColor;                                              // 0x0C18(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSport                                                SportType;                                               // 0x0C24(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NNUH[0x3];                                   // 0x0C25(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATrophyAwardListenerBase*                            TrophyAward;                                             // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrentProgress;                                         // 0x0C30(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TrophyRequirement;                                       // 0x0C34(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       respawning;                                              // 0x0C38(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_7ASO[0x3];                                   // 0x0C39(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HapticScale;                                             // 0x0C3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayHaptic();
		void GetTrophyAwardListener(class UClass* TrophyAward);
		void InitializeCubbieMaterial();
		void InitColor();
		void InitializeWidget();
		void SpawnTrophyProp(bool* wasCreated);
		void SpawnHighlighters();
		void SetTrophyInstanceVisibility(bool instanceVisible);
		void GetIntegerRowInDataTable(const class FName& Name, int32_t* Order);
		void DoRespawn();
		void CheckTrophyEarned();
		void HideDisplay();
		void ShowInfoOnDisplay();
		void SetHighlight(bool lightOn);
		void InitializeDataTable();
		void UserConstructionScript();
		void Timeline_0_0__FinishedFunc();
		void Timeline_0_0__UpdateFunc();
		void OnStopPointingAt();
		void OnStartPointingAt();
		void SetVisibility(bool visible);
		void OnTrophyRespawnToOriginalPosition();
		void OnTrophyReleased();
		void Play_SFX_Highlight();
		void Init();
		void Play_Grab_SFX();
		void DestroyTrophy();
		void OnTrophyGrabbed();
		void ExecuteUbergraph_BP_TrophyGrabbable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
