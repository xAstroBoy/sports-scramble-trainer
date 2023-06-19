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
	 * UserDefinedStruct PlatformMaterialDefinition.PlatformMaterialDefinition
	 * Size -> 0x0018
	 */
	struct FPlatformMaterialDefinition
	{
	public:
		EScramPlatform                                             ScramPlatform_2_DFE06AC54824EBEB5265F687F5E27E4E;        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HWVS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMaterialIndexDefinition>                    Materials_13_9C79F6AA40611B7ED983C3B3B26168C4;           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
