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
#include "CoreUObject_FInterpCurveLinearColor.h"
#include "Engine_UInterpTrack.h"

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
     * Class /Script/Engine.InterpTrackLinearColorBase
     * Size -> 0x0020 (FullSize[0x0090] - InheritedSize[0x0070])
     */
    class UInterpTrackLinearColorBase : public Engine::UInterpTrack
    {
    public:
        CoreUObject::FInterpCurveLinearColor                         LinearColorTrack;                                        //  ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        CurveTension;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.InterpTrackLinearColorBase");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif