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
#include "BasicTypes_TAutoPointer.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BasicTypes
{
    /**
     * 
     * Size -> 0x0000
     */
    template<typename T>
    class TAutoWeakObjectPtr : public BasicTypes::TAutoPointer<T, TWeakObjectPtr<T>>
    {
        friend class FString;
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
