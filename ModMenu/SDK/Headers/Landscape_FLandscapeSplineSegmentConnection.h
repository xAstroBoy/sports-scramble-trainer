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
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Landscape { class ULandscapeSplineControlPoint; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    /**
     * ScriptStruct /Script/Landscape.LandscapeSplineSegmentConnection
     * Size -> 0x0018
     */
    struct FLandscapeSplineSegmentConnection
    {
    public:
        Landscape::ULandscapeSplineControlPoint*                     ControlPoint;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        TangentLen;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            SocketName;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif