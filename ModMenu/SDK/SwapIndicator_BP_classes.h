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
	 * BlueprintGeneratedClass SwapIndicator_BP.SwapIndicator_BP_C
	 * Size -> 0x0010 (FullSize[0x05E0] - InheritedSize[0x05D0])
	 */
	class ASwapIndicator_BP_C : public ASwapIndicator
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UParticleSystemComponent*                            BB_Controller_Rings_par;                                 // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void SetRiftMeshes();
		void UserConstructionScript();
		void OnBeginSwap();
		void OnConfirmSwap();
		void ReceiveBeginPlay();
		void OnHandednessSet(EScramHandedness Handedness);
		void ExecuteUbergraph_SwapIndicator_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
