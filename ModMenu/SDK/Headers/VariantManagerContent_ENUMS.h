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

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::VariantManagerContent
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/VariantManagerContent.EPropertyValueCategory
     */
    enum class EPropertyValueCategory : uint8_t
    {
        Generic          = 0,
        RelativeLocation = 1,
        RelativeRotation = 2,
        RelativeScale3D  = 3,
        bVisible         = 4,
        Material         = 5,
        MAX              = 6
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
