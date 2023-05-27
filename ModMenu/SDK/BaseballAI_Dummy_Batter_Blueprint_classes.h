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
	 * BlueprintGeneratedClass BaseballAI_Dummy_Batter_Blueprint.BaseballAI_Dummy_Batter_Blueprint_C
	 * Size -> 0x0010 (FullSize[0x0E88] - InheritedSize[0x0E78])
	 */
	class ABaseballAI_Dummy_Batter_Blueprint_C : public AScramBaseballBatterAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0E78(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0E80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BaseballAI_Dummy_Batter_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
