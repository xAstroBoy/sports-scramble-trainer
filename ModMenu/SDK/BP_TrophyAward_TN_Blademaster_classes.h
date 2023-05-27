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
	 * BlueprintGeneratedClass BP_TrophyAward_TN_Blademaster.BP_TrophyAward_TN_Blademaster_C
	 * Size -> 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
	 */
	class ABP_TrophyAward_TN_Blademaster_C : public ABP_TrophyAward_Tennis_InstrumentHitBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void DebugEarn();
		void OnHit(class ATennisBall* TennisBall, class ATN_Instrument_Base_C* Instrument, ETennisBallType BallType);
		void ExecuteUbergraph_BP_TrophyAward_TN_Blademaster(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
