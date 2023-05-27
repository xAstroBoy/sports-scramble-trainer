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
	 * BlueprintGeneratedClass TN_ChallengeRacket_Red.TN_ChallengeRacket_Red_C
	 * Size -> 0x0008 (FullSize[0x1048] - InheritedSize[0x1040])
	 */
	class ATN_ChallengeRacket_Red_C : public ATN_ChallengeRacket_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1040(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void UpdateMesh();
		void ExecuteUbergraph_TN_ChallengeRacket_Red(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
