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
#include "Engine_FPoseLink.h"
#include "Engine_FInputScaleBias.h"
#include "Engine_FAnimNode_Base.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.AnimNode_ApplyMeshSpaceAdditive
     * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
     */
    struct FAnimNode_ApplyMeshSpaceAdditive : public Engine::FAnimNode_Base
    {
    public:
        Engine::FPoseLink                                            Base;                                                    //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        Engine::FPoseLink                                            Additive;                                                //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        float                                                        Alpha;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FInputScaleBias                                      AlphaScaleBias;                                          //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        int32_t                                                      LODThreshold;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ActualAlpha;                                             //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif