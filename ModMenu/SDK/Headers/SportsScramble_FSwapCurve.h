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
#include "CoreUObject_FTransform.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class UCurveFloat; };
namespace CG::Engine { class UCurveVector; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * ScriptStruct /Script/SportsScramble.SwapCurve
     * Size -> 0x0070
     */
    struct FSwapCurve
    {
    public:
        Engine::UStaticMesh*                                         Icon;                                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FTransform                                      BaseIconTransform;                                       //  Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        Engine::UCurveFloat*                                         IconYawCurve;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UCurveFloat*                                         IconDepthCurve;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UCurveFloat*                                         IconScaleCurve;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UCurveFloat*                                         GlowLerpCurve;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UCurveVector*                                        GlowColorCurve;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
