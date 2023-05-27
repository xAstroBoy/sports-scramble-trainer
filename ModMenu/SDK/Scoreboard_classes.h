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
	 * BlueprintGeneratedClass Scoreboard.Scoreboard_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScoreboard_C : public UInterface
	{
	public:
		void OverrideScoreText(const class FString& InputString, bool* Callback);
		void HideClock(bool* ClockHidden);
		void ResumeClock(bool* ClockResumed);
		void ResetClock(bool* ClockReset);
		void PauseClock(int32_t* DisplayedTime);
		void StartClock(int32_t Duration, bool Countdown, bool AutoStart, bool* TimerStarted);
		void SetScore(int32_t NewScore, bool* ScoreUpdated);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
