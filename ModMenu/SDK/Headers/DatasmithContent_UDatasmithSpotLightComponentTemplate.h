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
#include "DatasmithContent_UDatasmithObjectTemplate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DatasmithContent
{
    /**
     * Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate
     * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
     */
    class UDatasmithSpotLightComponentTemplate : public DatasmithContent::UDatasmithObjectTemplate
    {
    public:
        float                                                        InnerConeAngle;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OuterConeAngle;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/DatasmithContent.DatasmithSpotLightComponentTemplate");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
