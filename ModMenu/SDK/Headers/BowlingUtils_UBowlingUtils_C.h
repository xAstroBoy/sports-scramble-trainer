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
#include "Engine_UBlueprintFunctionLibrary.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class ABowlingBall; };
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingUtils
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/BowlingUtils.BowlingUtils_C
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UBowlingUtils_C : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_GetInstigatorBall(SportsScramble::ABowlingBall* Instigator, CoreUObject::UObject* __WorldContext, SportsScramble::ABowlingBall** Ball);
        void STATIC_GetModifiedScore(Engine::AActor* Instigator, int32_t score, bool bonus, CoreUObject::UObject* __WorldContext, int32_t* ModifiedScore, bool* ModifiedBonus);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/BowlingUtils.BowlingUtils_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
