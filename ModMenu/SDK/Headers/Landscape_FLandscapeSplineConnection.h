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

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Landscape { class ULandscapeSplineSegment; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    /**
     * ScriptStruct /Script/Landscape.LandscapeSplineConnection
     * Size -> 0x0010
     */
    struct FLandscapeSplineConnection
    {
    public:
        Landscape::ULandscapeSplineSegment*                          Segment;                                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         End : 1;                                                 //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
