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
#include "BasicTypes_TWeakObjectPtr.h"
#include "BasicTypes_FString.h"
#include "BasicTypes_TSoftObjectPtr.h"
#include "Engine_UPhysicsAsset.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::ClothingSystemRuntimeInterface { class UClothingAssetBase; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.SkeletalMeshClothBuildParams
     * Size -> 0x0058
     */
    struct FSkeletalMeshClothBuildParams
    {
    public:
        BasicTypes::TWeakObjectPtr<ClothingSystemRuntimeInterface::UClothingAssetBase> TargetAsset;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      TargetLod;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRemapParameters;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FString                                          AssetName;                                               //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      LODIndex;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SourceSection;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRemoveFromMesh;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TSoftObjectPtr<Engine::UPhysicsAsset>            PhysicsAsset;                                            //  ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
