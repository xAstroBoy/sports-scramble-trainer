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
#include "SportsScramble_APlayByPlayTennis.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisPlayByPlay_Blueprint
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Tennis/TennisPlayByPlay_Blueprint.TennisPlayByPlay_Blueprint_C
     * Size -> 0x0008 (FullSize[0x0390] - InheritedSize[0x0388])
     */
    class ATennisPlayByPlay_Blueprint_C : public SportsScramble::APlayByPlayTennis
    {
    public:
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Tennis/TennisPlayByPlay_Blueprint.TennisPlayByPlay_Blueprint_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif