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
#include "CoreUObject_FTransform.h"
#include "Engine_ENUMS.h"
#include "Engine_FBoneReference.h"
#include "AnimGraphRuntime_FBoneSocketTarget.h"
#include "AnimGraphRuntime_FAnimNode_SkeletalControlBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_Fabrik
     * Size -> 0x0100 (FullSize[0x01F0] - InheritedSize[0x00F0])
     */
    struct FAnimNode_Fabrik : public AnimGraphRuntime::FAnimNode_SkeletalControlBase
    {
    public:
        CoreUObject::FTransform                                      EffectorTransform;                                       //  Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        Engine::EBoneControlSpace                                    EffectorTransformSpace;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FBoneReference                                       EffectorTransformBone;                                   //  Deprecated, NoDestructor, NativeAccessSpecifierPublic
        AnimGraphRuntime::FBoneSocketTarget                          EffectorTarget;                                          //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::EBoneRotationSource                                  EffectorRotationSource;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FBoneReference                                       TipBone;                                                 //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       RootBone;                                                //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        Precision;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MaxIterations;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableDebugDraw;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0xF];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif