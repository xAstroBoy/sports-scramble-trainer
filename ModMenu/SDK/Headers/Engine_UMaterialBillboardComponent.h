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
#include "Engine_FMaterialSpriteElement.h"
#include "Engine_UPrimitiveComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UCurveFloat; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.MaterialBillboardComponent
     * Size -> 0x0010 (FullSize[0x0570] - InheritedSize[0x0560])
     */
    class UMaterialBillboardComponent : public Engine::UPrimitiveComponent
    {
    public:
        BasicTypes::TArray<Engine::FMaterialSpriteElement>           Elements;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

    public:
        void SetElements(BasicTypes::TArray<Engine::FMaterialSpriteElement> NewElements);
        void AddElement(Engine::UMaterialInterface* Material, Engine::UCurveFloat* DistanceToOpacityCurve, bool bSizeIsInScreenSpace, float BaseSizeX, float BaseSizeY, Engine::UCurveFloat* DistanceToSizeCurve);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialBillboardComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif