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
	 * BlueprintGeneratedClass CMN_HockeyStick.CMN_HockeyStick_C
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class ACMN_HockeyStick_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0328(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                CMN_Racket_HockeyStick;                                  // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void PlaySpawnFX();
		void UserConstructionScript();
		void SpawnEffect();
		void ExecuteUbergraph_CMN_HockeyStick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
