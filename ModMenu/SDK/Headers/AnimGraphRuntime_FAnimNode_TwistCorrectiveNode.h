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
#include "AnimGraphRuntime_FReferenceBoneFrame.h"
#include "AnimationCore_FAxis.h"
#include "Engine_FAnimCurveParam.h"
#include "AnimGraphRuntime_FAnimNode_SkeletalControlBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
     * Size -> 0x0088 (FullSize[0x0178] - InheritedSize[0x00F0])
     */
    struct FAnimNode_TwistCorrectiveNode : public AnimGraphRuntime::FAnimNode_SkeletalControlBase
    {
    public:
        AnimGraphRuntime::FReferenceBoneFrame                        BaseFrame;                                               //  Edit, NoDestructor, NativeAccessSpecifierPublic
        AnimGraphRuntime::FReferenceBoneFrame                        TwistFrame;                                              //  Edit, NoDestructor, NativeAccessSpecifierPublic
        AnimationCore::FAxis                                         TwistPlaneNormalAxis;                                    //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        RangeMax;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RemappedMin;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RemappedMax;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FAnimCurveParam                                      Curve;                                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif