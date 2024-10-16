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
#include "BasicTypes_TArray.h"
#include "Engine_FNameCurveKey.h"
#include "Engine_FIndexedCurve.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.NameCurve
     * Size -> 0x0010 (FullSize[0x0068] - InheritedSize[0x0058])
     */
    struct FNameCurve : public Engine::FIndexedCurve
    {
    public:
        BasicTypes::TArray<Engine::FNameCurveKey>                    Keys;                                                    //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
