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
#include "Engine_FRawDistributionFloat.h"
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
     * Class /Script/Engine.ParticleModuleLocationPrimitiveTriangle
     * Size -> 0x00F8 (FullSize[0x0128] - InheritedSize[0x0030])
     */
    class UParticleModuleLocationPrimitiveTriangle : public Engine::UParticleModuleLocationBase
    {
    public:
        Engine::FRawDistributionVector                               StartOffset;                                             //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionFloat                                Height;                                                  //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionFloat                                Angle;                                                   //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
        Engine::FRawDistributionFloat                                Thickness;                                               //  Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ParticleModuleLocationPrimitiveTriangle");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif