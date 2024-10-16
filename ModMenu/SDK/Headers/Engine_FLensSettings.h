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
#include "Engine_FLensBloomSettings.h"
#include "Engine_FLensImperfectionSettings.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.LensSettings
     * Size -> 0x00E0
     */
    struct FLensSettings
    {
    public:
        Engine::FLensBloomSettings                                   Bloom;                                                   //  Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
        Engine::FLensImperfectionSettings                            Imperfections;                                           //  Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic
        float                                                        ChromaticAberration;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
