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
#include "BB_Instrument_Base_ABB_Instrument_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_TennisRacket
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Instruments/Baseball/BB_TennisRacket.BB_TennisRacket_C
     * Size -> 0x0000 (FullSize[0x0FD8] - InheritedSize[0x0FD8])
     */
    class ABB_TennisRacket_C : public BB_Instrument_Base::ABB_Instrument_Base_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Instruments/Baseball/BB_TennisRacket.BB_TennisRacket_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif