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
	 * BlueprintGeneratedClass TennisScramble_HockeyStick.TennisScramble_HockeyStick_C
	 * Size -> 0x0000 (FullSize[0x0380] - InheritedSize[0x0380])
	 */
	class ATennisScramble_HockeyStick_C : public AScrambleEvent_Base_C
	{
	public:
		void RacquetChanged(class AActor* Player, class ATN_Instrument_Base_C* Instrument);
		void GetRandomInstrument(class UClass* InstrumentClass, class UClass** NewInstrument);
		void ActivateScrambleEffect(class ATN_Ball_Base_C* Ball, class AActor* OtherActor, bool* ScrambleEffectSuccess);
		void UserConstructionScript();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
