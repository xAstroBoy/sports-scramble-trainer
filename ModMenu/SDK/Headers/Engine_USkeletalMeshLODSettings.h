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
#include "Engine_FPerPlatformInt.h"
#include "BasicTypes_TArray.h"
#include "Engine_FSkeletalMeshLODGroupSettings.h"
#include "Engine_UDataAsset.h"

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
     * Class /Script/Engine.SkeletalMeshLODSettings
     * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
     */
    class USkeletalMeshLODSettings : public Engine::UDataAsset
    {
    public:
        Engine::FPerPlatformInt                                      MinLOD;                                                  //  Edit, Config, GlobalConfig, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FSkeletalMeshLODGroupSettings>    LODGroups;                                               //  Edit, ZeroConstructor, Config, GlobalConfig, Protected, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SkeletalMeshLODSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif