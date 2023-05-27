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
	 * BlueprintGeneratedClass BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C
	 * Size -> 0x000C (FullSize[0x03E4] - InheritedSize[0x03D8])
	 */
	class ABP_Trophy_BB_RunRule_C : public ABP_TrophyAward_BaseballBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    ScoreThreshold;                                          // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void RunnerHome(class AScramPlayer* Player, int32_t PlayerId);
		void ExecuteUbergraph_BP_Trophy_BB_RunRule(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
