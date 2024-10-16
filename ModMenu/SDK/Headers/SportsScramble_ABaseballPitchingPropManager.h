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
#include "BasicTypes_TArray.h"
#include "SportsScramble_FPitchingProp.h"
#include "SportsScramble_FPitchingPropInstance.h"
#include "SportsScramble_AScramActor.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.BaseballPitchingPropManager
     * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
     */
    class ABaseballPitchingPropManager : public SportsScramble::AScramActor
    {
    public:
        BasicTypes::TArray<SportsScramble::FPitchingProp>            SpawnableList;                                           //  Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<SportsScramble::FPitchingPropInstance>    mActiveObjects;                                          //  ZeroConstructor, NativeAccessSpecifierPrivate

    public:
        void SpawnRegisteredObjects(SportsScramble::EBaseballBallType BallType);
        void ClearAllObjects();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.BaseballPitchingPropManager");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
