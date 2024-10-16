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
#include "CoreUObject_FFrameRate.h"
#include "Engine_UEngineCustomTimeStep.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TimeManagement
{
    /**
     * Class /Script/TimeManagement.FixedFrameRateCustomTimeStep
     * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
     */
    class UFixedFrameRateCustomTimeStep : public Engine::UEngineCustomTimeStep
    {
    public:
        CoreUObject::FFrameRate                                      FixedFrameRate;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/TimeManagement.FixedFrameRateCustomTimeStep");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
