#pragma once
#pragma warning(disable: 4267)

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
#include "SportsScramble_FBowlingRoll.h"
#include "SportsScramble_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_ScoreCardRoll_Widget
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class UBW_ScoreCardRoll_Widget_C_ShowRoll_Params
    {
    public:
        SportsScramble::FBowlingRoll                                 Roll;                                                    //  0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
        SportsScramble::EBowlingRollResult                           PriorRollResult;                                         //  0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif