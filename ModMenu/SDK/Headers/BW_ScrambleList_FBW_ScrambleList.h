#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "SportsScramble_FRandomActorTable.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_ScrambleList
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/BW_ScrambleList.BW_ScrambleList
     * Size -> 0x0031
     */
    struct FBW_ScrambleList
    {
    public:
        SportsScramble::FRandomActorTable                            BallClasses_12_7BE748624B84D64BE916E2B6918CCBF8;         //  Edit, BlueprintVisible
        BasicTypes::TArray<BasicTypes::FName>                        BowlingLaneList_4_E1D6869B4BC1E722A1E9E78CBA87ED08;      //  Edit, BlueprintVisible, ZeroConstructor
        bool                                                         RandomizeLaneOrder_9_EBF8B69B4E865C8EEC85E6B5215E6B32;   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
