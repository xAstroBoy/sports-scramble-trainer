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
#include "Engine_FPoseLink.h"
#include "Engine_FInputScaleBias.h"
#include "Engine_FAnimNode_Base.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
     * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
     */
    struct FAnimNode_MultiWayBlend : public Engine::FAnimNode_Base
    {
    public:
        BasicTypes::TArray<Engine::FPoseLink>                        Poses;                                                   //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<float>                                    DesiredAlphas;                                           //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bAdditiveNode;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bNormalizeAlpha;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FInputScaleBias                                      AlphaScaleBias;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x14];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif