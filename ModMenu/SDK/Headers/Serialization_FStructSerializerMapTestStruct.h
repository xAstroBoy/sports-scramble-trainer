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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FString.h"
#include "CoreUObject_FVector.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Serialization
{
    /**
     * ScriptStruct /Script/Serialization.StructSerializerMapTestStruct
     * Size -> 0x00F0
     */
    struct FStructSerializerMapTestStruct
    {
    public:
        BasicTypes::TMap<int32_t, BasicTypes::FString>               IntToStr;                                                //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FString, BasicTypes::FString>   StrToStr;                                                //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FString, CoreUObject::FVector>  StrToVec;                                                //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif