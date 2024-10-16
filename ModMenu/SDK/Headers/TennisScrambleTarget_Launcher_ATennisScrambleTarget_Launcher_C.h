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
#include "SportsScramble_AScramLauncher.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisScrambleTarget_Launcher
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget_Launcher.TennisScrambleTarget_Launcher_C
     * Size -> 0x0000 (FullSize[0x0478] - InheritedSize[0x0478])
     */
    class ATennisScrambleTarget_Launcher_C : public SportsScramble::AScramLauncher
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget_Launcher.TennisScrambleTarget_Launcher_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
