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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_UActorComponent.h"

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
     * Class /Script/Engine.PlatformEventsComponent
     * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
     */
    class UPlatformEventsComponent : public Engine::UActorComponent
    {
    public:
        BasicTypes::UScriptMulticastDelegate                         PlatformChangedToLaptopModeDelegate;                     //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         PlatformChangedToTabletModeDelegate;                     //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

    public:
        bool SupportsConvertibleLaptops();
        void PlatformEventDelegate__DelegateSignature();
        bool IsInTabletMode();
        bool IsInLaptopMode();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PlatformEventsComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif