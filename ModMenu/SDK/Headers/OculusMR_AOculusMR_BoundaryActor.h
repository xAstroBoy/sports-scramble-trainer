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
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::OculusMR { class UOculusMR_BoundaryMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OculusMR
{
    /**
     * Class /Script/OculusMR.OculusMR_BoundaryActor
     * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
     */
    class AOculusMR_BoundaryActor : public Engine::AActor
    {
    public:
        OculusMR::UOculusMR_BoundaryMeshComponent*                   BoundaryMeshComponent;                                   //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OculusMR.OculusMR_BoundaryActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
