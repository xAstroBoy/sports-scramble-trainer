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
	 * UserDefinedStruct BB_ImbuingChance.BB_ImbuingChance
	 * Size -> 0x0008
	 */
	struct FBB_ImbuingChance
	{
	public:
		EBaseballInstrumentType                                    InstrumentType_26_C5429CC24359CE2B10CAFBA244D5998D;      // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UE09[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChance                                             Chance_30_F017C682490F7D93470B3BA09746566F;              // 0x0004(0x0004) Edit, BlueprintVisible, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
