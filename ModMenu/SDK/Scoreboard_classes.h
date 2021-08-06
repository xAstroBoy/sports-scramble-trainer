#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Scoreboard.Scoreboard_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UScoreboard_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Scoreboard.Scoreboard_C");
		return ptr;
	}



	void OverrideScoreText(const struct FString& InputString, bool* Callback);
	void HideClock(bool* ClockHidden);
	void ResumeClock(bool* ClockResumed);
	void ResetClock(bool* ClockReset);
	void PauseClock(int* DisplayedTime);
	void StartClock(int Duration, bool Countdown, bool AutoStart, bool* TimerStarted);
	void SetScore(int NewScore, bool* ScoreUpdated);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
