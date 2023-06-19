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
	 * BlueprintGeneratedClass BP_Trophy_BB_Guesser.BP_Trophy_BB_Guesser_C
	 * Size -> 0x000C (FullSize[0x03C0] - InheritedSize[0x03B4])
	 */
	class ABP_Trophy_BB_Guesser_C : public ABP_TrophyAward_Baseball_InstrumentHitBase_C
	{
	public:
		unsigned char                                              UnknownData_S1DK[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void OnHit(class ABaseballBall* Baseball, class ABB_Instrument_Base_C* Instrument, EBaseballBallType BallType);
		void DebugEarn();
		void ExecuteUbergraph_BP_Trophy_BB_Guesser(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
