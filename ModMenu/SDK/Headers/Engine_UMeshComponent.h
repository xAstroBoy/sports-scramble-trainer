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
#include "BasicTypes_TArray.h"
#include "Engine_UPrimitiveComponent.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UMaterialInterface; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.MeshComponent
     * Size -> 0x0028 (FullSize[0x0588] - InheritedSize[0x0560])
     */
    class UMeshComponent : public Engine::UPrimitiveComponent
    {
    public:
        BasicTypes::TArray<Engine::UMaterialInterface*>              OverrideMaterials;                                       //  Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x18];                                  //  Fix size for supers

    public:
        void SetVectorParameterValueOnMaterials(const BasicTypes::FName& ParameterName, const CoreUObject::FVector& ParameterValue);
        void SetScalarParameterValueOnMaterials(const BasicTypes::FName& ParameterName, float ParameterValue);
        void PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int32_t CinematicTextureGroups);
        bool IsMaterialSlotNameValid(const BasicTypes::FName& MaterialSlotName);
        BasicTypes::TArray<BasicTypes::FName> GetMaterialSlotNames();
        BasicTypes::TArray<Engine::UMaterialInterface*> GetMaterials();
        int32_t GetMaterialIndex(const BasicTypes::FName& MaterialSlotName);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MeshComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
