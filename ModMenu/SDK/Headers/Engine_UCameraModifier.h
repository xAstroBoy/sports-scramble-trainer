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
#include "CoreUObject_UObject.h"
#include "Engine_FPostProcessSettings.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class APlayerCameraManager; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.CameraModifier
     * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
     */
    class UCameraModifier : public CoreUObject::UObject
    {
    public:
        bool                                                         bDebug : 1;                                              //  BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bExclusive : 1;                                          //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        uint8_t                                                      Priority;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::APlayerCameraManager*                                CameraOwner;                                             //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        AlphaInTime;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        AlphaOutTime;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        Alpha;                                                   //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        bool IsDisabled();
        Engine::AActor* GetViewTarget();
        void EnableModifier();
        void DisableModifier(bool bImmediate);
        void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, Engine::FPostProcessSettings* PostProcessSettings);
        void BlueprintModifyCamera(float DeltaTime, const CoreUObject::FVector& ViewLocation, const CoreUObject::FRotator& ViewRotation, float FOV, CoreUObject::FVector* NewViewLocation, CoreUObject::FRotator* NewViewRotation, float* NewFOV);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.CameraModifier");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif