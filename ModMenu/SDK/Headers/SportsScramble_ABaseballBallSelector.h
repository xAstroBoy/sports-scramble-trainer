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
#include "CoreUObject_FTransform.h"
#include "BasicTypes_TArray.h"
#include "SportsScramble_FBaseballBallScrambleProperties.h"
#include "SportsScramble_AScramSceneComponentActor.h"
#include "SportsScramble_ENUMS.h"
#include "SportsScramble_FChance.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UCurveFloat; };
namespace CG::SportsScramble { class ABaseballPitchingTarget; };
namespace CG::Engine { class UDataTable; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.BaseballBallSelector
     * Size -> 0x0100 (FullSize[0x0450] - InheritedSize[0x0350])
     */
    class ABaseballBallSelector : public SportsScramble::AScramSceneComponentActor
    {
    public:
        CoreUObject::FTransform                                      UpperRightScrambleTransform;                             //  Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        CoreUObject::FTransform                                      UpperLeftScrambleTransform;                              //  Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        CoreUObject::FTransform                                      LowerRightScrambleTransform;                             //  Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        CoreUObject::FTransform                                      LowerLeftScrambleTransform;                              //  Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         ImbuementFalloff;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::ABaseballPitchingTarget*                     TargetClass;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<SportsScramble::ABaseballPitchingTarget*> PitchingTargets;                                         //  BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<SportsScramble::FBaseballBallScrambleProperties> mMasterScrambleList;                                     //  ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        bool TrySpawnScrambleTargets(BasicTypes::TArray<SportsScramble::EBaseballScrambleTargetLocations> validDisplays, int32_t numToSpawn, const SportsScramble::FChance& imbueChance, bool localPlayerIsBatter);
        bool TrySetBalls(BasicTypes::TArray<SportsScramble::FBaseballBallScrambleProperties> ballProperties);
        bool TryChangeBallTable(Engine::UDataTable* BallTable);
        void ClearScrambleTargets();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.BaseballBallSelector");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif