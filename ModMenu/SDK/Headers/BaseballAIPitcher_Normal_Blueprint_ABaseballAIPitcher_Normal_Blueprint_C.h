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
#include "BaseballAIPitcher_Blueprint_ABaseballAIPitcher_Blueprint_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballAIPitcher_Normal_Blueprint
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/AI/Baseball/BaseballAIPitcher_Normal_Blueprint.BaseballAIPitcher_Normal_Blueprint_C
     * Size -> 0x0000 (FullSize[0x06D2] - InheritedSize[0x06D2])
     */
    class ABaseballAIPitcher_Normal_Blueprint_C : public BaseballAIPitcher_Blueprint::ABaseballAIPitcher_Blueprint_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/AI/Baseball/BaseballAIPitcher_Normal_Blueprint.BaseballAIPitcher_Normal_Blueprint_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif