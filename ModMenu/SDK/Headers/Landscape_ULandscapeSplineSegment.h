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
#include "Landscape_FLandscapeSplineSegmentConnection.h"
#include "CoreUObject_FInterpCurveVector.h"
#include "BasicTypes_TArray.h"
#include "Landscape_FLandscapeSplineInterpPoint.h"
#include "CoreUObject_FBox.h"
#include "CoreUObject_UObject.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USplineMeshComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Landscape
{
    /**
     * Class /Script/Landscape.LandscapeSplineSegment
     * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
     */
    class ULandscapeSplineSegment : public CoreUObject::UObject
    {
    public:
        Landscape::FLandscapeSplineSegmentConnection                 Connections[0x2];                                        //  Edit, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
        CoreUObject::FInterpCurveVector                              SplineInfo;                                              //  ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<Landscape::FLandscapeSplineInterpPoint>   Points;                                                  //  ZeroConstructor, Protected, NativeAccessSpecifierProtected
        CoreUObject::FBox                                            Bounds;                                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::USplineMeshComponent*>            LocalMeshComponents;                                     //  ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, TextExportTransient, NativeAccessSpecifierProtected

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Landscape.LandscapeSplineSegment");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif