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
	 * BlueprintGeneratedClass BaseballAIFielder_Blueprint.BaseballAIFielder_Blueprint_C
	 * Size -> 0x005A (FullSize[0x054A] - InheritedSize[0x04F0])
	 */
	class ABaseballAIFielder_Blueprint_C : public AScramBaseballFielderAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04F0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                GloveRed;                                                // 0x04F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Fan_ShadowPlane;                                         // 0x0500(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UInstancedMesh*                                      InstancedMesh;                                           // 0x0508(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                GloveBlue;                                               // 0x0510(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0518(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Spawn_ScaleUp_0C7209B9431ACF2B2711B3A8F961766D; // 0x0520(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Spawn__Direction_0C7209B9431ACF2B2711B3A8F961766D; // 0x0524(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SRAF[0x3];                                   // 0x0525(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Spawn;                                          // 0x0528(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Despawn_ScaleDown_D5F422FD41BF14FCE64FE983A03A6F50; // 0x0530(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Despawn__Direction_D5F422FD41BF14FCE64FE983A03A6F50; // 0x0534(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BEPB[0x3];                                   // 0x0535(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Despawn;                                        // 0x0538(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   FielderMaterial;                                         // 0x0540(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       UseSpawnAnimation;                                       // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       BlueGlove;                                               // 0x0549(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, ExposeOnSpawn

	public:
		void OnRep_RedGlove();
		void OnRep_GloveMaterial();
		void OnRep_FielderMaterial();
		void ApplyGloveMaterial();
		void OnRep_Material();
		void ApplyMaterial();
		void SetMaterial(class UMaterialInstance* FielderMat, bool RedGlove);
		void UserConstructionScript();
		void Timeline_Spawn__FinishedFunc();
		void Timeline_Spawn__UpdateFunc();
		void Timeline_Despawn__FinishedFunc();
		void Timeline_Despawn__UpdateFunc();
		void ReceiveBeginPlay();
		void DespawnFielder();
		void ExecuteUbergraph_BaseballAIFielder_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
