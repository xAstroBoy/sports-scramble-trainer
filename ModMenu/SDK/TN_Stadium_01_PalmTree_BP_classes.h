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
	 * BlueprintGeneratedClass TN_Stadium_01_PalmTree_BP.TN_Stadium_01_PalmTree_BP_C
	 * Size -> 0x000A (FullSize[0x0332] - InheritedSize[0x0328])
	 */
	class ATN_Stadium_01_PalmTree_BP_C : public AActor
	{
	public:
		class UStaticMeshComponent*                                Inflatable_PalmTree_B_VA;                                // 0x0328(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       FloatValueR;                                             // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		struct FLightingChannels                                   NewVar_1;                                                // 0x0331(0x0001) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
