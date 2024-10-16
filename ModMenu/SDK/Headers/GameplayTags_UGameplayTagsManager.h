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
#include "BasicTypes_TArray.h"
#include "GameplayTags_FGameplayTagSource.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UDataTable; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameplayTags
{
    /**
     * Class /Script/GameplayTags.GameplayTagsManager
     * Size -> 0x0168 (FullSize[0x0190] - InheritedSize[0x0028])
     */
    class UGameplayTagsManager : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x80];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<GameplayTags::FGameplayTagSource>         TagSources;                                              //  ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x68];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UDataTable*>                      RestrictedGameplayTagTables;                             //  ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::UDataTable*>                      GameplayTagTables;                                       //  ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x50];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GameplayTags.GameplayTagsManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
