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
	 * BlueprintGeneratedClass BP_TrophyAward_Ace.BP_TrophyAward_Ace_C
	 * Size -> 0x000F (FullSize[0x03B8] - InheritedSize[0x03A9])
	 */
	class ABP_TrophyAward_Ace_C : public ABP_TrophyAward_TennisBase_C
	{
	public:
		unsigned char                                              UnknownData_WYXW[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03B0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void OnAceEvent();
		void ExecuteUbergraph_BP_TrophyAward_Ace(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
