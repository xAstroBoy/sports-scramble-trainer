#pragma once
#pragma warning(disable: 4267)

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
#include "SlateCore_FSlateColor.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BallTarget
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class IBallTarget_C_ShowBallTarget_Params
    {
    public:
        bool                                                         Instant;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         Callback;                                                //  0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBallTarget_C_HideBallTarget_Params
    {
    public:
        bool                                                         Instant;                                                 //  0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
        bool                                                         Callback;                                                //  0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class IBallTarget_C_FlashScore_Params
    {
    public:
        int32_t                                                      score;                                                   //  0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
        uint8_t                                                      UnknownData_0000[0x4];                                   //  0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
        SlateCore::FSlateColor                                       Color;                                                   //  0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
        bool                                                         ScoreFlashed;                                            //  0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
