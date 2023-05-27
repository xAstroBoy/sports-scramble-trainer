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
	 * UserDefinedStruct TennisScrambleSchedule.TennisScrambleSchedule
	 * Size -> 0x0030
	 */
	struct FTennisScrambleSchedule
	{
	public:
		TArray<struct FTennisScrambleScheduleEntry>                Game1_7_F017C682490F7D93470B3BA09746566F;                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FTennisScrambleScheduleEntry>                Game2_12_CBAB5A684221A2AD814CCA9047422FE9;               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FTennisScrambleScheduleEntry>                Game3_13_5E23BA2245C6AC40518C1896B22DBB3D;               // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
