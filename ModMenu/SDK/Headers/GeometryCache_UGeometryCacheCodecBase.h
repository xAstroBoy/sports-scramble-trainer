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
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GeometryCache
{
    /**
     * Class /Script/GeometryCache.GeometryCacheCodecBase
     * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
     */
    class UGeometryCacheCodecBase : public CoreUObject::UObject
    {
    public:
        BasicTypes::TArray<int32_t>                                  TopologyRanges;                                          //  Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GeometryCache.GeometryCacheCodecBase");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif