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
#include "CMN_ParticleEmitter_ACMN_ParticleEmitter_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Avatar_Spawn_Emitter_Actor
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Avatar_Spawn_Emitter_Actor.Avatar_Spawn_Emitter_Actor_C
     * Size -> 0x0000 (FullSize[0x036A] - InheritedSize[0x036A])
     */
    class AAvatar_Spawn_Emitter_Actor_C : public CMN_ParticleEmitter::ACMN_ParticleEmitter_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Avatar_Spawn_Emitter_Actor.Avatar_Spawn_Emitter_Actor_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif