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
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BW_ScrambleList.BW_ScrambleList
// 0x0031
struct FBW_ScrambleList
{
	struct FRandomActorTable                           BallClasses_12_7BE748624B84D64BE916E2B6918CCBF8;           // 0x0000(0x0020) (Edit, BlueprintVisible)
	TArray<struct FName>                               BowlingLaneList_4_E1D6869B4BC1E722A1E9E78CBA87ED08;        // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               RandomizeLaneOrder_9_EBF8B69B4E865C8EEC85E6B5215E6B32;     // 0x0030(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
