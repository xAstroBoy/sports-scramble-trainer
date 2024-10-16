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

namespace CG::OculusHMD
{
    // --------------------------------------------------
    // # Enums
    // --------------------------------------------------
    /**
     * Enum /Script/OculusHMD.EBoundaryType
     */
    enum class EBoundaryType : uint8_t
    {
        Boundary_Outer    = 0,
        Boundary_PlayArea = 1,
        Boundary_MAX      = 2
    };

    /**
     * Enum /Script/OculusHMD.ETiledMultiResLevel
     */
    enum class ETiledMultiResLevel : uint8_t
    {
        Off       = 0,
        LMSLow    = 1,
        LMSMedium = 2,
        LMSHigh   = 3,
        MAX       = 4
    };

    /**
     * Enum /Script/OculusHMD.ETrackedDeviceType
     */
    enum class ETrackedDeviceType : uint8_t
    {
        None             = 0,
        HMD              = 1,
        LTouch           = 2,
        RTouch           = 3,
        Touch            = 4,
        DeviceObjectZero = 5,
        All              = 6,
        MAX              = 7
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
