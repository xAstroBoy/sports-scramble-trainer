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
#include "Engine_FCachedKeyToActionInfo.h"
#include "Engine_UActorComponent.h"
#include "InputCore_FKey.h"
#include "CoreUObject_FVector.h"
#include "Engine_ENUMS.h"

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
     * Class /Script/Engine.InputComponent
     * Size -> 0x0088 (FullSize[0x0178] - InheritedSize[0x00F0])
     */
    class UInputComponent : public Engine::UActorComponent
    {
    public:
        uint8_t                                                      UnknownData_0000[0x70];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FCachedKeyToActionInfo>           CachedKeyToActionInfo;                                   //  ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        bool WasControllerKeyJustReleased(const InputCore::FKey& Key);
        bool WasControllerKeyJustPressed(const InputCore::FKey& Key);
        bool IsControllerKeyDown(const InputCore::FKey& Key);
        void GetTouchState(int32_t FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
        CoreUObject::FVector GetControllerVectorKeyState(const InputCore::FKey& Key);
        void GetControllerMouseDelta(float* DeltaX, float* DeltaY);
        float GetControllerKeyTimeDown(const InputCore::FKey& Key);
        void GetControllerAnalogStickState(Engine::EControllerAnalogStick WhichStick, float* StickX, float* StickY);
        float GetControllerAnalogKeyState(const InputCore::FKey& Key);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InputComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif