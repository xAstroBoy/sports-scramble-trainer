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
	 * UserDefinedStruct BB_ScrambleSchedule.BB_ScrambleSchedule
	 * Size -> 0x0010
	 */
	struct FBB_ScrambleSchedule
	{
	public:
		TArray<struct FBB_ScrambleGroupSet>                        GroupSets_21_F017C682490F7D93470B3BA09746566F;           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
