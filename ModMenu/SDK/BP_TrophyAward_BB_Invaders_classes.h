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
	 * BlueprintGeneratedClass BP_TrophyAward_BB_Invaders.BP_TrophyAward_BB_Invaders_C
	 * Size -> 0x0004 (FullSize[0x03BC] - InheritedSize[0x03B8])
	 */
	class ABP_TrophyAward_BB_Invaders_C : public ABP_TrophyAward_BW_Base_C
	{
	public:
		int32_t                                                    AlienDestroyRequirement;                                 // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetRequirement(int32_t alienCount);
		void AlienEliminated();
		void ResetCount();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
