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
#include "Engine_FBoneReference.h"
#include "BasicTypes_TArray.h"
#include "AnimGraphRuntime_FConstraint.h"
#include "AnimGraphRuntime_FAnimNode_SkeletalControlBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_Constraint
     * Size -> 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
     */
    struct FAnimNode_Constraint : public AnimGraphRuntime::FAnimNode_SkeletalControlBase
    {
    public:
        Engine::FBoneReference                                       BoneToModify;                                            //  Edit, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<AnimGraphRuntime::FConstraint>            ConstraintSetup;                                         //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<float>                                    ConstraintWeights;                                       //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif