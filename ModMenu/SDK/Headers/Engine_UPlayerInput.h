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
#include "Engine_FKeyBind.h"
#include "BasicTypes_FName.h"
#include "CoreUObject_UObject.h"
#include "BasicTypes_FString.h"
#include "InputCore_FKey.h"

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
     * Class /Script/Engine.PlayerInput
     * Size -> 0x0380 (FullSize[0x03A8] - InheritedSize[0x0028])
     */
    class UPlayerInput : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0xF8];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::FKeyBind>                         DebugExecBindings;                                       //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x30];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        InvertedAxis;                                            //  ZeroConstructor, Config, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x238];                                 //  MISSED OFFSET (PADDING)

    public:
        void SetMouseSensitivity(float SensitivityX, float SensitivityY);
        void SetBind(const BasicTypes::FName& BindName, const BasicTypes::FString& Command);
        void InvertAxisKey(const InputCore::FKey& AxisKey);
        void InvertAxis(const BasicTypes::FName& AxisName);
        void ClearSmoothing();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.PlayerInput");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif