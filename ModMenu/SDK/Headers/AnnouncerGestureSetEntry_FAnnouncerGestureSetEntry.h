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
#include "AnnouncerGestures_ENUMS.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnnouncerGestureSetEntry
{
    /**
     * UserDefinedStruct /Game/Datatables/Structs/AnnouncerGestureSetEntry.AnnouncerGestureSetEntry
     * Size -> 0x0008
     */
    struct FAnnouncerGestureSetEntry
    {
    public:
        AnnouncerGestures::EAnnouncerGestures                        Gesture_2_B78FDEEA430A16F40EE078B6A682E684;              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        Delay_5_742491A6478E40EEE0819EB85834CA31;                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
