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
#include "BasicTypes_FString.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameplayTags
{
    /**
     * Class /Script/GameplayTags.GameplayTagsDeveloperSettings
     * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
     */
    class UGameplayTagsDeveloperSettings : public CoreUObject::UObject
    {
    public:
        BasicTypes::FString                                          DeveloperConfigName;                                     //  Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GameplayTags.GameplayTagsDeveloperSettings");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
