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
	 * BlueprintGeneratedClass BP_Trophy_BB_XXX.BP_Trophy_BB_XXX_C
	 * Size -> 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
	 */
	class ABP_Trophy_BB_XXX_C : public ABP_TrophyAward_BaseballBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void Strike(class AScramPlayer* Player, int32_t PlayerId);
		void SwingAndMiss(class AScramPlayer* Player);
		void ExecuteUbergraph_BP_Trophy_BB_XXX(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
