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
#include "BasicTypes_FName.h"
#include "AnimGraphRuntime_FBoneSocketTarget.h"
#include "CoreUObject_FVector.h"
#include "Engine_ENUMS.h"
#include "AnimationCore_FAxis.h"
#include "AnimGraphRuntime_ENUMS.h"
#include "AnimGraphRuntime_FAnimNode_SkeletalControlBase.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::AnimGraphRuntime
{
    /**
     * ScriptStruct /Script/AnimGraphRuntime.AnimNode_LookAt
     * Size -> 0x0130 (FullSize[0x0220] - InheritedSize[0x00F0])
     */
    struct FAnimNode_LookAt : public AnimGraphRuntime::FAnimNode_SkeletalControlBase
    {
    public:
        Engine::FBoneReference                                       BoneToModify;                                            //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::FBoneReference                                       LookAtBone;                                              //  Deprecated, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::FName                                            LookAtSocket;                                            //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        AnimGraphRuntime::FBoneSocketTarget                          LookAtTarget;                                            //  Edit, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FVector                                         LookAtLocation;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAxisOption                                          LookAtAxis;                                              //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         CustomLookAtAxis;                                        //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimationCore::FAxis                                         LookAt_Axis;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bUseLookUpAxis;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAxisOption                                          LookUpAxis;                                              //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         CustomLookUpAxis;                                        //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimationCore::FAxis                                         LookUp_Axis;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        LookAtClamp;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        AnimGraphRuntime::EInterpolationBlend                        InterpolationType;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        InterpolationTime;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        InterpolationTriggerThreashold;                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x34];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif