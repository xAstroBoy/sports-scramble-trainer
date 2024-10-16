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
#include "Engine_ENUMS.h"
#include "Engine_UMaterialExpression.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.MaterialExpressionTextureBase
     * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
     */
    class UMaterialExpressionTextureBase : public Engine::UMaterialExpression
    {
    public:
        Engine::UTexture*                                            Texture;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EMaterialSamplerType                                 SamplerType;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         IsDefaultMeshpaintTexture : 1;                           //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.MaterialExpressionTextureBase");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
