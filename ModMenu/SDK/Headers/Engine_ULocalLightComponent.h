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
#include "Engine_ENUMS.h"
#include "Engine_FLightmassPointLightSettings.h"
#include "Engine_ULightComponent.h"

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
     * Class /Script/Engine.LocalLightComponent
     * Size -> 0x001C (FullSize[0x037C] - InheritedSize[0x0360])
     */
    class ULocalLightComponent : public Engine::ULightComponent
    {
    public:
        Engine::ELightUnits                                          IntensityUnits;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        Radius;                                                  //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AttenuationRadius;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FLightmassPointLightSettings                         LightmassSettings;                                       //  Edit, NoDestructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x4];                                   //  Fix size for supers

    public:
        void SetAttenuationRadius(float NewRadius);
        float STATIC_GetUnitsConversionFactor(Engine::ELightUnits SrcUnits, Engine::ELightUnits TargetUnits, float CosHalfConeAngle);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.LocalLightComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif