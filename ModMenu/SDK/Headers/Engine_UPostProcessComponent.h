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
#include "Engine_FPostProcessSettings.h"
#include "Engine_USceneComponent.h"
#include "BasicTypes_TScriptInterface.h"
#include "Engine_IBlendableInterface.h"

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
     * Class /Script/Engine.PostProcessComponent
     * Size -> 0x04F8 (FullSize[0x0730] - InheritedSize[0x0238])
     */
    class UPostProcessComponent : public Engine::USceneComponent
    {
    public:
        uint8_t                                                      UnknownData_0001[0x8];                                   //  Fix Super Size
        Engine::FPostProcessSettings                                 Settings;                                                //  Edit, BlueprintVisible, Interp, NativeAccessSpecifierPublic
        float                                                        Priority;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        BlendRadius;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        BlendWeight;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnabled : 1;                                            //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUnbound : 1;                                            //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (PADDING)

    public:
        void AddOrUpdateBlendable(const BasicTypes::TScriptInterface<Engine::IBlendableInterface>& InBlendableObject, float InWeight);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PostProcessComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
