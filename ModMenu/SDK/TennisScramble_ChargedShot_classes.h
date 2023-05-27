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
	 * BlueprintGeneratedClass TennisScramble_ChargedShot.TennisScramble_ChargedShot_C
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class ATennisScramble_ChargedShot_C : public AScrambleEvent_Base_C
	{
	public:
		class UClass* GetNewBallType();
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
