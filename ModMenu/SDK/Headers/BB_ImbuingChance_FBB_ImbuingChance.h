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
#include "SportsScramble_ENUMS.h"
#include "SportsScramble_FChance.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_ImbuingChance
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/BB_ImbuingChance.BB_ImbuingChance
     * Size -> 0x0008
     */
    struct FBB_ImbuingChance
    {
    public:
        SportsScramble::EBaseballInstrumentType                      InstrumentType_26_C5429CC24359CE2B10CAFBA244D5998D;      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FChance                                      Chance_30_F017C682490F7D93470B3BA09746566F;              //  Edit, BlueprintVisible, NoDestructor
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif