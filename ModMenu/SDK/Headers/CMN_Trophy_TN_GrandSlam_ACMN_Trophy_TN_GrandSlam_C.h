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
#include "TrophyProp_Base_ATrophyProp_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CMN_Trophy_TN_GrandSlam
{
    /**
     * BlueprintGeneratedClass /Game/Props/Common/Trophies/Blueprints/CMN_Trophy_TN_GrandSlam.CMN_Trophy_TN_GrandSlam_C
     * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
     */
    class ACMN_Trophy_TN_GrandSlam_C : public TrophyProp_Base::ATrophyProp_Base_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Props/Common/Trophies/Blueprints/CMN_Trophy_TN_GrandSlam.CMN_Trophy_TN_GrandSlam_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
