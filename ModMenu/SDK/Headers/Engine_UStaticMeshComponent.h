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
#include "CoreUObject_FColor.h"
#include "BasicTypes_TArray.h"
#include "Engine_FStaticMeshComponentLODInfo.h"
#include "Engine_FStreamingTextureBuildInfo.h"
#include "Engine_FLightmassPrimitiveSettings.h"
#include "Engine_UMeshComponent.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMesh; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.StaticMeshComponent
     * Size -> 0x0070 (FullSize[0x05F8] - InheritedSize[0x0588])
     */
    class UStaticMeshComponent : public Engine::UMeshComponent
    {
    public:
        uint8_t                                                      UnknownData_0002[0x4];                                   //  Fix Super Size
        int32_t                                                      PreviousLODLevel;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MinLOD;                                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SubDivisionStepSize;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UStaticMesh*                                         StaticMesh;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        CoreUObject::FColor                                          WireframeColorOverride;                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideLightMapRes : 1;                                //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIgnoreInstanceForTextureStreaming : 1;                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDisallowMeshPaintPerInstance : 1;                       //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastDistanceFieldIndirectShadow : 1;                    //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideNavigationExport : 1;                           //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideMinLOD : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideWireframeColor : 1;                             //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bForceNavigationObstacle : 1;                            //  BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideDistanceFieldSelfShadowBias : 1;                //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseSubDivisions : 1;                                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseDefaultCollision : 1;                                //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bReverseCulling : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      OverriddenLightMapRes;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DistanceFieldIndirectShadowMinVisibility;                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DistanceFieldSelfShadowBias;                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StreamingDistanceMultiplier;                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FStaticMeshComponentLODInfo>      LODData;                                                 //  ZeroConstructor, Transient, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FStreamingTextureBuildInfo>       StreamingTextureData;                                    //  ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic
        Engine::FLightmassPrimitiveSettings                          LightmassSettings;                                       //  Edit, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x8];                                   //  Fix size for supers

    public:
        bool SetStaticMesh(Engine::UStaticMesh* NewMesh);
        void SetReverseCulling(bool ReverseCulling);
        void SetForcedLodModel(int32_t NewForcedLodModel);
        void SetDistanceFieldSelfShadowBias(float NewValue);
        void OnRep_StaticMesh(Engine::UStaticMesh* OldStaticMesh);
        void GetLocalBounds(CoreUObject::FVector* Min, CoreUObject::FVector* Max);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.StaticMeshComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
