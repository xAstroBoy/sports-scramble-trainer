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
#include "TN_Instrument_Base_ATN_Instrument_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_PingPongPaddle
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Instruments/Tennis/TN_PingPongPaddle.TN_PingPongPaddle_C
     * Size -> 0x0000 (FullSize[0x0FB8] - InheritedSize[0x0FB8])
     */
    class ATN_PingPongPaddle_C : public TN_Instrument_Base::ATN_Instrument_Base_C
    {
    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Instruments/Tennis/TN_PingPongPaddle.TN_PingPongPaddle_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
