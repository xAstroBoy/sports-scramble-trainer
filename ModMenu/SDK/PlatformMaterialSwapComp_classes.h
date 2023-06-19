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
	 * BlueprintGeneratedClass PlatformMaterialSwapComp.PlatformMaterialSwapComp_C
	 * Size -> 0x0028 (FullSize[0x0260] - InheritedSize[0x0238])
	 */
	class UPlatformMaterialSwapComp_C : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_PJX7[0x8];                                   // 0x0238(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0240(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x0248(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FPlatformMaterialDefinition>                 PlatformMaterialDefinitions;                             // 0x0250(0x0010) Edit, BlueprintVisible, ZeroConstructor

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_PlatformMaterialSwapComp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
