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
#include "BasicTypes_FString.h"
#include "BasicTypes_TArray.h"
#include "Engine_FCurveEdEntry.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.CurveEdTab
     * Size -> 0x0030
     */
    struct FCurveEdTab
    {
    public:
        BasicTypes::FString                                          TabName;                                                 //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FCurveEdEntry>                    Curves;                                                  //  ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        ViewStartInput;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ViewEndInput;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ViewStartOutput;                                         //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ViewEndOutput;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
