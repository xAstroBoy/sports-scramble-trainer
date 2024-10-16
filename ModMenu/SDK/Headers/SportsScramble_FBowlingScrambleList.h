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

namespace CG::SportsScramble
{
    /**
     * ScriptStruct /Script/SportsScramble.BowlingScrambleList
     * Size -> 0x0038
     */
    struct FBowlingScrambleList
    {
    public:
        SportsScramble::FRandomActorTable                            BallClasses;                                             //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        LaneList;                                                //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         RandomizeLaneOrder;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
