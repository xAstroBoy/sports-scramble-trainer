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
#include "CoreUObject_UStruct.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CoreUObject
{
    /**
     * Class /Script/CoreUObject.Function
     * Size -> 0x0030 (FullSize[0x00B8] - InheritedSize[0x0088])
     */
    class UFunction : public CoreUObject::UStruct
    {
    public:
        uint8_t                                                      Padding_M_FrontSize[0x40];                               //  PREDEFINED PROPERTY
        int32_t                                                      FunctionFlags;                                           //  PREDEFINED PROPERTY
        uint8_t                                                      Padding_M_1[0x24];                                       //  PREDEFINED PROPERTY
        void*                                                        Func;                                                    //  PREDEFINED PROPERTY

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/CoreUObject.Function");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
