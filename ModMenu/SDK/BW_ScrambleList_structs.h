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
	 * UserDefinedStruct BW_ScrambleList.BW_ScrambleList
	 * Size -> 0x0031
	 */
	struct FBW_ScrambleList
	{
	public:
		struct FRandomActorTable                                   BallClasses_12_7BE748624B84D64BE916E2B6918CCBF8;         // 0x0000(0x0020) Edit, BlueprintVisible
		TArray<class FName>                                        BowlingLaneList_4_E1D6869B4BC1E722A1E9E78CBA87ED08;      // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       RandomizeLaneOrder_9_EBF8B69B4E865C8EEC85E6B5215E6B32;   // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
