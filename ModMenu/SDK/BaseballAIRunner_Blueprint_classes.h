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
	 * BlueprintGeneratedClass BaseballAIRunner_Blueprint.BaseballAIRunner_Blueprint_C
	 * Size -> 0x0058 (FullSize[0x0418] - InheritedSize[0x03C0])
	 */
	class ABaseballAIRunner_Blueprint_C : public AScramBaseballRunnerAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UInstancedMesh*                                      InstancedMesh;                                           // 0x03C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Fan_ShadowPlane;                                         // 0x03D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x03D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleDown_ScaleDown_68D97F034192CA35E6CA7290A3B0F3B8; // 0x03E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleDown__Direction_68D97F034192CA35E6CA7290A3B0F3B8; // 0x03E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3FPW[0x3];                                   // 0x03E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleDown;                                      // 0x03E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleUp_ScaleUp_3721805F4254093B06C8E098411A4011; // 0x03F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleUp__Direction_3721805F4254093B06C8E098411A4011; // 0x03F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DP9I[0x3];                                   // 0x03F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleUp;                                        // 0x03F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   Material;                                                // 0x0400(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    NumComplete;                                             // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocationHolder;                                          // 0x040C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnRep_Material();
		void ApplyMaterial();
		void SetMaterial(class UMaterialInstance* NewMaterial);
		void UserConstructionScript();
		void Timeline_ScaleUp__FinishedFunc();
		void Timeline_ScaleUp__UpdateFunc();
		void Timeline_ScaleDown__FinishedFunc();
		void Timeline_ScaleDown__UpdateFunc();
		void ReceiveBeginPlay();
		void OnSpawn();
		void OnDespawn(const struct FVector& Location);
		void PublicDespawn();
		void ExecuteUbergraph_BaseballAIRunner_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
