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
#include "CoreUObject_FBoxSphereBounds.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"
#include "Engine_FSkeletalMaterial.h"
#include "Engine_FBoneMirrorInfo.h"
#include "Engine_FSkeletalMeshLODInfo.h"
#include "Engine_FPerPlatformInt.h"
#include "CoreUObject_ENUMS.h"
#include "Engine_FSkeletalMeshSamplingInfo.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_FName.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeleton; };
namespace CG::Engine { class UBodySetup; };
namespace CG::Engine { class UPhysicsAsset; };
namespace CG::Engine { class UNodeMappingContainer; };
namespace CG::Engine { class UMorphTarget; };
namespace CG::Engine { class UAnimInstance; };
namespace CG::ClothingSystemRuntimeInterface { class UClothingAssetBase; };
namespace CG::Engine { class UAssetUserData; };
namespace CG::Engine { class USkeletalMeshSocket; };
namespace CG::Engine { class USkeletalMeshLODSettings; };
namespace CG::Engine { class UBlueprint; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.SkeletalMesh
     * Size -> 0x02D0 (FullSize[0x02F8] - InheritedSize[0x0028])
     */
    class USkeletalMesh : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x20];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USkeleton*                                           Skeleton;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FBoxSphereBounds                                ImportedBounds;                                          //  ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
        CoreUObject::FBoxSphereBounds                                ExtendedBounds;                                          //  ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
        CoreUObject::FVector                                         PositiveBoundsExtension;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FVector                                         NegativeBoundsExtension;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::FSkeletalMaterial>                Materials;                                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FBoneMirrorInfo>                  SkelMirrorTable;                                         //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FSkeletalMeshLODInfo>             LODInfo;                                                 //  Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
        Engine::FPerPlatformInt                                      MinLOD;                                                  //  Edit, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::EAxis                                           SkelMirrorAxis;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::EAxis                                           SkelMirrorFlipAxis;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnablePerPolyCollision : 1;                             //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0001 : 1;                                    //  BIT_FIELD (PADDING)
        bool                                                         bHasVertexColors : 1;                                    //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseHighPrecisionTangentBasis : 1;                       //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseFullPrecisionUVs : 1;                                //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bHasBeenSimplified : 1;                                  //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UBodySetup*                                          BodySetup;                                               //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPhysicsAsset*                                       PhysicsAsset;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPhysicsAsset*                                       ShadowPhysicsAsset;                                      //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UNodeMappingContainer*>           NodeMappingData;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::UMorphTarget*>                    MorphTargets;                                            //  BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x170];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UAnimInstance*                                       PostProcessAnimBlueprint;                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<ClothingSystemRuntimeInterface::UClothingAssetBase*> MeshClothingAssets;                                      //  Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
        Engine::FSkeletalMeshSamplingInfo                            SamplingInfo;                                            //  Edit, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::UAssetUserData*>                  AssetUserData;                                           //  Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::USkeletalMeshSocket*>             Sockets;                                                 //  ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetLODSettings(Engine::USkeletalMeshLODSettings* InLODSettings);
        int32_t NumSockets();
        bool IsSectionUsingCloth(int32_t InSectionIndex, bool bCheckCorrespondingSections);
        Engine::USkeletalMeshSocket* GetSocketByIndex(int32_t Index);
        Engine::UNodeMappingContainer* GetNodeMappingContainer(Engine::UBlueprint* SourceAsset);
        CoreUObject::FBoxSphereBounds GetImportedBounds();
        CoreUObject::FBoxSphereBounds GetBounds();
        Engine::USkeletalMeshSocket* FindSocketAndIndex(const BasicTypes::FName& InSocketName, int32_t* OutIndex);
        Engine::USkeletalMeshSocket* FindSocket(const BasicTypes::FName& InSocketName);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.SkeletalMesh");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif