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
#include "CoreUObject_FBox.h"
#include "CoreUObject_FBoxSphereBounds.h"
#include "Engine_UInstancedStaticMeshComponent.h"

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
     * Class /Script/Engine.HierarchicalInstancedStaticMeshComponent
     * Size -> 0x00E8 (FullSize[0x0778] - InheritedSize[0x0690])
     */
    class UHierarchicalInstancedStaticMeshComponent : public Engine::UInstancedStaticMeshComponent
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<int32_t>                                  SortedInstances;                                         //  ZeroConstructor, NativeAccessSpecifierPublic
        int32_t                                                      NumBuiltInstances;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FBox                                            BuiltInstanceBounds;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FBox                                            UnbuiltInstanceBounds;                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<CoreUObject::FBox>                        UnbuiltInstanceBoundsList;                               //  ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bEnableDensityScaling : 1;                               //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      OcclusionLayerNumNodes;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FBoxSphereBounds                                CacheMeshExtendedBounds;                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bDisableCollision;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      InstanceCountToRender;                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x4C];                                  //  Fix size for supers

    public:
        bool RemoveInstances(BasicTypes::TArray<int32_t> InstancesToRemove);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.HierarchicalInstancedStaticMeshComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif