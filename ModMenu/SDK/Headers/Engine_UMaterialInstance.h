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
#include "Engine_FScalarParameterValue.h"
#include "Engine_FVectorParameterValue.h"
#include "Engine_FTextureParameterValue.h"
#include "Engine_FFontParameterValue.h"
#include "Engine_FMaterialInstanceBasePropertyOverrides.h"
#include "Engine_FStaticParameterSet.h"
#include "Engine_UMaterialInterface.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UPhysicalMaterial; };
namespace CG::CoreUObject { class UClass; };
namespace CG::Engine { class UTexture; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.MaterialInstance
     * Size -> 0x0160 (FullSize[0x01E8] - InheritedSize[0x0088])
     */
    class UMaterialInstance : public Engine::UMaterialInterface
    {
    public:
        Engine::UPhysicalMaterial*                                   PhysMaterial;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterialInterface*                                  Parent;                                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasStaticPermutationResource : 1;                       //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideSubsurfaceProfile : 1;                          //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FScalarParameterValue>            ScalarParameterValues;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FVectorParameterValue>            VectorParameterValues;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FTextureParameterValue>           TextureParameterValues;                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FFontParameterValue>              FontParameterValues;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        bool                                                         bOverrideBaseProperties;                                 //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FMaterialInstanceBasePropertyOverrides               BasePropertyOverrides;                                   //  Edit, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x28];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::UTexture*>                        PermutationTextureReferences;                            //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        Engine::FStaticParameterSet                                  StaticParameters;                                        //  NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x78];                                  //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialInstance");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif