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
#include "Engine_FRawDistributionVector.h"
#include "Engine_UParticleModuleLocationBase.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.ParticleModuleLocationDirect
     * Size -> 0x0140 (FullSize[0x0170] - InheritedSize[0x0030])
     */
    class UParticleModuleLocationDirect : public Engine::UParticleModuleLocationBase
    {
    public:
        Engine::FRawDistributionVector                               Location;                                                //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionVector                               LocationOffset;                                          //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionVector                               ScaleFactor;                                             //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionVector                               Direction;                                               //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ParticleModuleLocationDirect");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif