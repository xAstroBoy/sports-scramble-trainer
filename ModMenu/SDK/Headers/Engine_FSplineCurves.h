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
#include "CoreUObject_FInterpCurveVector.h"
#include "CoreUObject_FInterpCurveQuat.h"
#include "CoreUObject_FInterpCurveFloat.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.SplineCurves
     * Size -> 0x0060
     */
    struct FSplineCurves
    {
    public:
        CoreUObject::FInterpCurveVector                              Position;                                                //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FInterpCurveQuat                                Rotation;                                                //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FInterpCurveVector                              Scale;                                                   //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FInterpCurveFloat                               ReparamTable;                                            //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
