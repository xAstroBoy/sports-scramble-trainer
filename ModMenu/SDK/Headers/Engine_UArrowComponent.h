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
#include "CoreUObject_FColor.h"
#include "Engine_UPrimitiveComponent.h"
#include "CoreUObject_FLinearColor.h"

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
     * Class /Script/Engine.ArrowComponent
     * Size -> 0x0020 (FullSize[0x0580] - InheritedSize[0x0560])
     */
    class UArrowComponent : public Engine::UPrimitiveComponent
    {
    public:
        CoreUObject::FColor                                          ArrowColor;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ArrowSize;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsScreenSizeScaled;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ScreenSize;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bTreatAsASprite : 1;                                     //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0xF];                                   //  MISSED OFFSET (PADDING)

    public:
        void SetArrowColor(const CoreUObject::FLinearColor& NewColor);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.ArrowComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif