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
	 * BlueprintGeneratedClass SpaceInvaderLane.SpaceInvaderLane_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpaceInvaderLane_C : public UInterface
	{
	public:
		void UpdateAlienSpeed(float NewSpeed, bool* SpeedUpdated);
		void SetInvaderLaneGameState(bool Run, bool* StateSet);
		void BeginChallengeMode(float Speed, TArray<class FName> Patterns, bool* ChallengeModeStarted);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
