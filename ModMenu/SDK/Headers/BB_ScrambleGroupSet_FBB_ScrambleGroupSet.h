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
#include "Engine_FDataTableRowHandle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_ScrambleGroupSet
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/BB_ScrambleGroupSet.BB_ScrambleGroupSet
     * Size -> 0x0018
     */
    struct FBB_ScrambleGroupSet
    {
    public:
        int32_t                                                      Inning_21_C5429CC24359CE2B10CAFBA244D5998D;              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FDataTableRowHandle>              Groups_22_F017C682490F7D93470B3BA09746566F;              //  Edit, BlueprintVisible, ZeroConstructor
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif