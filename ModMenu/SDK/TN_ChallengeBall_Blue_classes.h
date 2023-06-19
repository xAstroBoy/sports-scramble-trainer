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
	 * BlueprintGeneratedClass TN_ChallengeBall_Blue.TN_ChallengeBall_Blue_C
	 * Size -> 0x000F (FullSize[0x1198] - InheritedSize[0x1189])
	 */
	class ATN_ChallengeBall_Blue_C : public ATN_ChallengeBall_Base_C
	{
	public:
		unsigned char                                              UnknownData_E47Z[0x7];                                   // 0x1189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1190(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void UpdateMesh();
		void ExecuteUbergraph_TN_ChallengeBall_Blue(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
