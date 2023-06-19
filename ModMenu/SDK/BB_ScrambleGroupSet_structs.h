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
	 * UserDefinedStruct BB_ScrambleGroupSet.BB_ScrambleGroupSet
	 * Size -> 0x0018
	 */
	struct FBB_ScrambleGroupSet
	{
	public:
		int32_t                                                    Inning_21_C5429CC24359CE2B10CAFBA244D5998D;              // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_51XI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDataTableRowHandle>                         Groups_22_F017C682490F7D93470B3BA09746566F;              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
