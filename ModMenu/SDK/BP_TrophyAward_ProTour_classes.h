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
	 * BlueprintGeneratedClass BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C
	 * Size -> 0x000F (FullSize[0x03C9] - InheritedSize[0x03BA])
	 */
	class ABP_TrophyAward_ProTour_C : public ABP_TrophyAward_TN_MatchCompleteBase_C
	{
	public:
		unsigned char                                              UnknownData_W8WD[0x6];                                   // 0x03BA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       UsingPro;                                                // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetSkill(EScramSkill* Skill);
		void UserConstructionScript();
		void DebugEarn();
		void OnScorePoint();
		void ReceiveBeginPlay();
		void BallInPlay();
		void OnMatchComplete(class AScramPlayer* Player);
		void ExecuteUbergraph_BP_TrophyAward_ProTour(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
