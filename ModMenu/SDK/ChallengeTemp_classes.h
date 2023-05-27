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
	 * BlueprintGeneratedClass ChallengeTemp.ChallengeTemp_C
	 * Size -> 0x000F (FullSize[0x04A0] - InheritedSize[0x0491])
	 */
	class AChallengeTemp_C : public AChallengeBase_C
	{
	public:
		unsigned char                                              UnknownData_M0OO[0x7];                                   // 0x0491(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0498(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_ChallengeTemp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
