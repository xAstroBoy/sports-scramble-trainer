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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FString.h"
#include "Overlay_UOverlays.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Overlay { class UBasicOverlays; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Overlay
{
    /**
     * Class /Script/Overlay.LocalizedOverlays
     * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
     */
    class ULocalizedOverlays : public Overlay::UOverlays
    {
    public:
        Overlay::UBasicOverlays*                                     DefaultOverlays;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FString, Overlay::UBasicOverlays*> LocaleToOverlaysMap;                                     //  Edit, ZeroConstructor, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Overlay.LocalizedOverlays");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
