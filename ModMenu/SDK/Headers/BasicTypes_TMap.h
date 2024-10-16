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
#include "BasicTypes_TSet.h"
#include "BasicTypes_TPair.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BasicTypes
{
    /**
     * 
     * Size -> 0x0000
     */
    template<typename Key, typename Value>
    class TMap
    {
    public:
        BasicTypes::TSet<BasicTypes::TPair<Key, Value>>              Data;
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
