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
	 * BlueprintGeneratedClass BowlingLaneManager.BowlingLaneManager_C
	 * Size -> 0x00D8 (FullSize[0x0400] - InheritedSize[0x0328])
	 */
	class ABowlingLaneManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_LaneSound;                                         // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                EditorMesh;                                              // 0x0338(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0340(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Rotate_Alpha_0DA3F042474D40A582343AA1760E3357;  // 0x0348(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Rotate__Direction_0DA3F042474D40A582343AA1760E3357; // 0x034C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X8CC[0x3];                                   // 0x034D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Rotate;                                         // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              InitialLane[0x28];                                       // 0x0358(0x0028) UNKNOWN PROPERTY: SoftClassProperty BowlingLaneManager.BowlingLaneManager_C.InitialLane
		class ABowlingLane_Base_C*                                 ActiveLane;                                              // 0x0380(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABowlingLane_Base_C*                                 ReplacementLane;                                         // 0x0388(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             LaneSwapComplete;                                        // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       LaneSwapActive;                                          // 0x03A0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KQNW[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DelayBeforeInit;                                         // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USoundBase*                                          AnnouncerVO;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LocallyControlled;                                       // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Player1;                                                 // 0x03B1(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		unsigned char                                              UnknownData_RMDK[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingLane_Base_C*                                 OutgoingLane;                                            // 0x03B8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ABowlingAlley_BP_C*                                  Alley;                                                   // 0x03C0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             LaneManagerReplacingLane;                                // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		unsigned char                                              NewLaneClassRef[0x28];                                   // 0x03D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty BowlingLaneManager.BowlingLaneManager_C.NewLaneClassRef

	public:
		void GetActiveLaneFromLaneManager(class ABowlingLane_Base_C** ActiveLane);
		void Cleanup();
		void Initialize();
		void UserConstructionScript();
		void Timeline_Rotate__FinishedFunc();
		void Timeline_Rotate__UpdateFunc();
		void OnLoaded_A340E5A5483A21462088559EC818FD3F(class UClass* Loaded);
		void OnLoaded_E6FCE9674C6651125FB54A88D97CC36B(class UClass* Loaded);
		void ReceiveBeginPlay();
		void LaneManagerNewLane();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void SpawnNewLane();
		void LaneSetupComplete();
		void RotateLanes(class USoundBase* AnnouncerVO);
		void ExecuteUbergraph_BowlingLaneManager(int32_t EntryPoint);
		void LaneManagerReplacingLane__DelegateSignature(class ABowlingLane_Base_C* ReplacementLane, class ABowlingLane_Base_C* OutgoingLane);
		void LaneSwapComplete__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
