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
#include "SportsScramble_AScramInstrument.h"
#include "SportsScramble_FTennisInstrumentProperties.h"

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
     * Class /Script/SportsScramble.TennisInstrument
     * Size -> 0x0160 (FullSize[0x0E90] - InheritedSize[0x0D30])
     */
    class ATennisInstrument : public SportsScramble::AScramInstrument
    {
    public:
        uint8_t                                                      UnknownData_0000[0x160];                                 //  MISSED OFFSET (PADDING)

    public:
        SportsScramble::FTennisInstrumentProperties GetTennisInstrumentProperties();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.TennisInstrument");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
