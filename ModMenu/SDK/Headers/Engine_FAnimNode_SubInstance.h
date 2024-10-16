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
#include "Engine_FPoseLink.h"
#include "BasicTypes_FName.h"
#include "BasicTypes_TArray.h"
#include "Engine_FAnimNode_Base.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAnimInstance; };
namespace CG::CoreUObject { class UProperty; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.AnimNode_SubInstance
     * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
     */
    struct FAnimNode_SubInstance : public Engine::FAnimNode_Base
    {
    public:
        Engine::FPoseLink                                            InPose;                                                  //  NoDestructor, NativeAccessSpecifierPublic
        Engine::UAnimInstance*                                       InstanceClass;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            Tag;                                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UAnimInstance*                                       InstanceToRun;                                           //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::UProperty*>                  InstanceProperties;                                      //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::UProperty*>                  SubInstanceProperties;                                   //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        SourcePropertyNames;                                     //  ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FName>                        DestPropertyNames;                                       //  ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x30];                                  //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
