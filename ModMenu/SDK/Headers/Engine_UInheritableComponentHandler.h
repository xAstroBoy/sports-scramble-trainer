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
#include "BasicTypes_TArray.h"
#include "Engine_FComponentOverrideRecord.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UActorComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.InheritableComponentHandler
     * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
     */
    class UInheritableComponentHandler : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<Engine::FComponentOverrideRecord>         Records;                                                 //  ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
        BasicTypes::TArray<Engine::UActorComponent*>                 UnnecessaryComponents;                                   //  ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InheritableComponentHandler");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif