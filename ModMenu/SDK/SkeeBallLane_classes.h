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
	 * BlueprintGeneratedClass SkeeBallLane.SkeeBallLane_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USkeeBallLane_C : public UInterface
	{
	public:
		void CallClearPatternAndResolve(bool* PatternCleared);
		void UpdateGoodHoleCount(int32_t NewGoodHoleCount, bool* HoleCountUpdated);
		void ShowScoreboard(bool* ScoreboardRaised);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
