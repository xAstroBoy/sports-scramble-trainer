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
#include "GeometryCache_UGeometryCacheTrack.h"
#include "GeometryCache_FGeometryCacheMeshData.h"

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
     * Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
     * Size -> 0x00A8 (FullSize[0x0100] - InheritedSize[0x0058])
     */
    class UGeometryCacheTrack_TransformAnimation : public GeometryCache::UGeometryCacheTrack
    {
    public:
        uint8_t                                                      UnknownData_0000[0xA8];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetMesh(const GeometryCache::FGeometryCacheMeshData& NewMeshData);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif