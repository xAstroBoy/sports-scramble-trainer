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
#include "BasicTypes_TMap.h"
#include "BasicTypes_FName.h"
#include "Engine_FNodeItem.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.NodeMappingContainer
     * Size -> 0x0140 (FullSize[0x0168] - InheritedSize[0x0028])
     */
    class UNodeMappingContainer : public CoreUObject::UObject
    {
    public:
        BasicTypes::TMap<BasicTypes::FName, Engine::FNodeItem>       SourceItems;                                             //  Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
        BasicTypes::TMap<BasicTypes::FName, Engine::FNodeItem>       TargetItems;                                             //  Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
        BasicTypes::TMap<BasicTypes::FName, BasicTypes::FName>       SourceToTarget;                                          //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TSoftObjectPtr<CoreUObject::UObject>             SourceAsset;                                             //  ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x4];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        BasicTypes::TSoftObjectPtr<CoreUObject::UObject>             TargetAsset;                                             //  ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x4];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.NodeMappingContainer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
