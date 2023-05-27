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
	 * BlueprintGeneratedClass TN_GolfClub.TN_GolfClub_C
	 * Size -> 0x0008 (FullSize[0x0FC0] - InheritedSize[0x0FB8])
	 */
	class ATN_GolfClub_C : public ATN_Instrument_Base_C
	{
	public:
		class UParticleSystemComponent*                            SwingParticleSystem_1;                                   // 0x0FB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
