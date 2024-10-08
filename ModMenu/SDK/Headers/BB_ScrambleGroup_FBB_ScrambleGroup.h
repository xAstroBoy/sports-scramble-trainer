#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "BasicTypes_TArray.h"
#include "SportsScramble_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_ScrambleGroup
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/BB_ScrambleGroup.BB_ScrambleGroup
     * Size -> 0x0020
     */
    struct FBB_ScrambleGroup
    {
    public:
        BasicTypes::TArray<SportsScramble::EBaseballBallType>        Balls_53_1FA4B6994B461E6C229A6CB0D224F349;               //  Edit, BlueprintVisible, ZeroConstructor
        BasicTypes::TArray<SportsScramble::EBaseballInstrumentType>  Instruments_54_AD811088446B1916F23374A1B06187D7;         //  Edit, BlueprintVisible, ZeroConstructor
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
