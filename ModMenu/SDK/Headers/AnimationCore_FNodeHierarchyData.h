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
#include "BasicTypes_TArray.h"
#include "AnimationCore_FNodeObject.h"
#include "CoreUObject_FTransform.h"
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimationCore
{
    /**
     * ScriptStruct /Script/AnimationCore.NodeHierarchyData
     * Size -> 0x0070
     */
    struct FNodeHierarchyData
    {
    public:
        BasicTypes::TArray<AnimationCore::FNodeObject>               Nodes;                                                   //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FTransform>                  Transforms;                                              //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TMap<BasicTypes::FName, int32_t>                 NodeNameToIndexMapping;                                  //  ZeroConstructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif