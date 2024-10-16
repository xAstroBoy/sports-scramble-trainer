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
#include "Engine_UReflectionCaptureComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UDrawSphereComponent; };
namespace CG::Engine { class UBoxComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.PlaneReflectionCaptureComponent
     * Size -> 0x0014 (FullSize[0x02C0] - InheritedSize[0x02AC])
     */
    class UPlaneReflectionCaptureComponent : public Engine::UReflectionCaptureComponent
    {
    public:
        uint8_t                                                      UnknownData_0000[0x4];                                   //  Fix Super Size
        Engine::UDrawSphereComponent*                                PreviewInfluenceRadius;                                  //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UBoxComponent*                                       PreviewCaptureBox;                                       //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PlaneReflectionCaptureComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
