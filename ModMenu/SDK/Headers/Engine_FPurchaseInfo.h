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
#include "BasicTypes_FString.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.PurchaseInfo
     * Size -> 0x0040
     */
    struct FPurchaseInfo
    {
    public:
        BasicTypes::FString                                          Identifier;                                              //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          DisplayName;                                             //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          DisplayDescription;                                      //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FString                                          DisplayPrice;                                            //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
