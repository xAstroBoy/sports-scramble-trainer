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
#include "BasicTypes_FName.h"
#include "BasicTypes_TSoftClassPtr.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_TArray.h"
#include "Engine_FDirectoryPath.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "Engine_FPrimaryAssetRules.h"
#include "BasicTypes_FString.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * ScriptStruct /Script/Engine.PrimaryAssetTypeInfo
     * Size -> 0x0088
     */
    struct FPrimaryAssetTypeInfo
    {
    public:
        BasicTypes::FName                                            PrimaryAssetType;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TSoftClassPtr<CoreUObject::UObject>              AssetBaseClass;                                          //  ELEMENT_SIZE_MISMATCH Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0000[0x4];                                   //  FIX WRONG SIZE OF PREVIOUS PROPERTY
        CoreUObject::UObject*                                        AssetBaseClassLoaded;                                    //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasBlueprintClasses;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsEditorOnly;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FDirectoryPath>                   Directories;                                             //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<CoreUObject::FSoftObjectPath>             SpecificAssets;                                          //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        Engine::FPrimaryAssetRules                                   Rules;                                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<BasicTypes::FString>                      AssetScanPaths;                                          //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        bool                                                         bIsDynamicAsset;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      NumberOfAssets;                                          //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif