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
#include "SportsScramble_FBaseballGlobalData.h"
#include "Engine_UDataAsset.h"
#include "CoreUObject_FBox.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.BaseballGlobalDataAsset
     * Size -> 0x0240 (FullSize[0x0270] - InheritedSize[0x0030])
     */
    class UBaseballGlobalDataAsset : public Engine::UDataAsset
    {
    public:
        SportsScramble::FBaseballGlobalData                          Data;                                                    //  Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

    public:
        void STATIC_GetBatterPlayAreas(CoreUObject::FBox* minPlayArea, CoreUObject::FBox* maxPlayArea, CoreUObject::FBox* maxHazardArea, SportsScramble::EBattingSide Side);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.BaseballGlobalDataAsset");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif