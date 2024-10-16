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
#include "SportsScramble_FChance.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * ScriptStruct /Script/SportsScramble.TennisGlobalSkillData
     * Size -> 0x0010
     */
    struct FTennisGlobalSkillData
    {
    public:
        SportsScramble::FChance                                      BaseOutOfPlayChance;                                     //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FChance                                      ChargeShotOutOfPlayChance;                               //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        DownCourtBiasPercent;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ExtraSwingSpeedPercent;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
