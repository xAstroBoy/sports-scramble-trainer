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
	 * BlueprintGeneratedClass CMN_Trail_Base.CMN_Trail_Base_C
	 * Size -> 0x0024 (FullSize[0x037C] - InheritedSize[0x0358])
	 */
	class ACMN_Trail_Base_C : public AScramActorFollower
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            Trail_Head;                                              // 0x0360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UParticleSystemComponent*                            Trail;                                                   // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      fadeOutTime;                                             // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateColor(const struct FLinearColor& Color);
		void DestroyTrailHead();
		void Setup(class AActor* Parent);
		void FadeOut(bool snap);
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_CMN_Trail_Base(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
