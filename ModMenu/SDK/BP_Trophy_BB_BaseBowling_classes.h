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
	 * BlueprintGeneratedClass BP_Trophy_BB_BaseBowling.BP_Trophy_BB_BaseBowling_C
	 * Size -> 0x0009 (FullSize[0x03E1] - InheritedSize[0x03D8])
	 */
	class ABP_Trophy_BB_BaseBowling_C : public ABP_TrophyAward_BaseballBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UsingBowlingBall;                                        // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void Strike(class AScramPlayer* Player, int32_t PlayerId);
		void PitchEvent();
		void BadPitch();
		void SwingAndMiss(class AScramPlayer* Player);
		void OnHit();
		void ExecuteUbergraph_BP_Trophy_BB_BaseBowling(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
