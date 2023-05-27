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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct BB_ScrambleGroup.BB_ScrambleGroup
	 * Size -> 0x0020
	 */
	struct FBB_ScrambleGroup
	{
	public:
		TArray<EBaseballBallType>                                  Balls_53_1FA4B6994B461E6C229A6CB0D224F349;               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<EBaseballInstrumentType>                            Instruments_54_AD811088446B1916F23374A1B06187D7;         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
