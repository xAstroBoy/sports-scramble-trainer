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
#include "CoreUObject_FGuid.h"
#include "CoreUObject_FIntPoint.h"
#include "Landscape_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "Landscape_FLandscapeProxyMaterialOverride.h"
#include "Engine_FLightingChannels.h"
#include "Engine_FLightmassPrimitiveSettings.h"
#include "Engine_FBodyInstance.h"
#include "Engine_ENUMS.h"
#include "Engine_AActor.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FLinearColor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Landscape { class ULandscapeSplinesComponent; };
namespace CG::Engine { class UPhysicalMaterial; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Landscape { class ULandscapeComponent; };
namespace CG::Landscape { class ULandscapeHeightfieldCollisionComponent; };
namespace CG::Engine { class UHierarchicalInstancedStaticMeshComponent; };
namespace CG::Engine { class UTexture; };
namespace CG::Engine { class USplineComponent; };
namespace CG::Landscape { class ULandscapeLayerInfoObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    /**
     * Class /Script/Landscape.LandscapeProxy
     * Size -> 0x0318 (FullSize[0x0640] - InheritedSize[0x0328])
     */
    class ALandscapeProxy : public Engine::AActor
    {
    public:
        Landscape::ULandscapeSplinesComponent*                       SplineComponent;                                         //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FGuid                                           LandscapeGuid;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FIntPoint                                       LandscapeSectionOffset;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MaxLODLevel;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LODDistanceFactor;                                       //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Landscape::ELandscapeLODFalloff                              LODFalloff;                                              //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ComponentScreenSizeToUseSubSections;                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LOD0DistributionSetting;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LODDistributionSetting;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        TessellationComponentScreenSize;                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UseTessellationComponentScreenSizeFalloff;               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        TessellationComponentScreenSizeFalloff;                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      OccluderGeometryLOD;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      StaticLightingLOD;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UPhysicalMaterial*                                   DefaultPhysMaterial;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        StreamingDistanceMultiplier;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UMaterialInterface*                                  LandscapeMaterial;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterialInterface*                                  LandscapeHoleMaterial;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Landscape::FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride;                              //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        float                                                        NegativeZBoundsExtension;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        PositiveZBoundsExtension;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Landscape::ULandscapeComponent*>          LandscapeComponents;                                     //  ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        BasicTypes::TArray<Landscape::ULandscapeHeightfieldCollisionComponent*> CollisionComponents;                                     //  ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;                                       //  ExportObject, ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x64];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bHasLandscapeGrass;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        StaticLightingResolution;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastStaticShadow : 1;                                   //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastShadowAsTwoSided : 1;                               //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCastFarShadow : 1;                                      //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0007 : 5;                                    //  BIT_FIELD (PADDING)
        uint8_t                                                      UnknownData_0006[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bAffectDistanceFieldLighting : 1;                        //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FLightingChannels                                    LightingChannels;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bUseMaterialPositionOffsetInStaticLighting : 1;          //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bRenderCustomDepth : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0009[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      CustomDepthStencilValue;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LDMaxDrawDistance;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FLightmassPrimitiveSettings                          LightmassSettings;                                       //  Edit, NoDestructor, NativeAccessSpecifierPublic
        int32_t                                                      CollisionMipLevel;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SimpleCollisionMipLevel;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CollisionThickness;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0010[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FBodyInstance                                        BodyInstance;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
        bool                                                         bGenerateOverlapEvents : 1;                              //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bBakeMaterialPositionOffsetIntoCollision : 1;            //  BIT_FIELD Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0011[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      ComponentSizeQuads;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      SubsectionSizeQuads;                                     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      NumSubsections;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUsedForNavigation : 1;                                  //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0012[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bUseDynamicMaterialInstance;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ENavDataGatheringMode                                NavigationGeometryGatheringMode;                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseLandscapeForCullingInvisibleHLODVertices;            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0013[0x51];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetLandscapeMaterialVectorParameterValue(const BasicTypes::FName& ParameterName, const CoreUObject::FLinearColor& Value);
        void SetLandscapeMaterialTextureParameterValue(const BasicTypes::FName& ParameterName, Engine::UTexture* Value);
        void SetLandscapeMaterialScalarParameterValue(const BasicTypes::FName& ParameterName, float Value);
        void EditorSetLandscapeMaterial(Engine::UMaterialInterface* NewLandscapeMaterial);
        void EditorApplySpline(Engine::USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, Landscape::ULandscapeLayerInfoObject* PaintLayer);
        void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
        void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
        void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
        void ChangeLODDistanceFactor(float InLODDistanceFactor);
        void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Landscape.LandscapeProxy");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
