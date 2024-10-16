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
#include "SportsScramble_FScramTennisAIShotProperties.h"
#include "BasicTypes_TArray.h"
#include "SportsScramble_ENUMS.h"
#include "SportsScramble_AScramBaseAI.h"
#include "SportsScramble_FTennisInstrumentProperties.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::SportsScramble { class ATennisBall; };
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class UCurveFloat; };
namespace CG::Engine { class UDataTable; };
namespace CG::SportsScramble { class UTennisAIAnimInstance; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.ScramTennisAI
     * Size -> 0x03D8 (FullSize[0x0740] - InheritedSize[0x0368])
     */
    class AScramTennisAI : public SportsScramble::AScramBaseAI
    {
    public:
        SportsScramble::FScramTennisAIShotProperties                 FirstServe;                                              //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FScramTennisAIShotProperties                 SecondServe;                                             //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FScramTennisAIShotProperties                 FirstServeReturn;                                        //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FScramTennisAIShotProperties                 SecondServeReturn;                                       //  Edit, NoDestructor, NativeAccessSpecifierPublic
        SportsScramble::FScramTennisAIShotProperties                 RallyShot;                                               //  Edit, NoDestructor, NativeAccessSpecifierPublic
        Engine::UAudioComponent*                                     HitSoundPtr;                                             //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UPrimitiveComponent*                                 RacquetPtr;                                              //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SportsScramble::ATennisBall*                                 BallClass;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UStaticMesh*                                         RacquetMesh;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        DelayBeforeRecentering;                                  //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        OvershootTime;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RecenterSpeed;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RecenterChance;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RecenterForServeSpeed;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        RecenterForReceiveServeSpeed;                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinBallHeightAtPlayer;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxBallHeightAtPlayer;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AvoidPlayerDistance;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ServeTossHeight;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ServeHitHeight;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        TimeAtCenterToResetMoveDistance;                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SwingRadius;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxHitHeight;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        IdealHitHeight;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinimumOutDistance;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        FuzzyIn;                                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxOffCourtDistance;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxHitRadius;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxSwingRadius;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ServePositionOffset;                                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        HitPercentageDecayPerRallyShot;                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        HitPercentageFloor;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<SportsScramble::ETennisReaction>          WinReactions;                                            //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<SportsScramble::ETennisReaction>          LoseReactions;                                           //  Edit, ZeroConstructor, NativeAccessSpecifierPublic
        Engine::UCurveFloat*                                         TripChanceVsRallyLength;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UDataTable*                                          ScrambleMods;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ChargedSliceSpeedMultiplier;                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ChargedFlatSpeedMultiplier;                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LobSpeedMultiplier;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        PositiveScrambleTargetHitPercentage;                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        NeutralScrambleTargetHitPercentage;                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxHorizontalAngleForScrambleTarget;                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MaxVerticalAngleForScrambleTarget;                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        PrepSwingTime;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        UnprepSwingTime;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         NetIsRaised;                                             //  BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ScrambleTargetAngleForMaxSpin;                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LobDistanceFromBaseline;                                 //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SportsScramble::EScramSkill                                  ShotSkill;                                               //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::ATennisBall*                                 mpServingBall;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        SportsScramble::ATennisBall*                                 mpMissedBall;                                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x190];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::UTennisAIAnimInstance*                       mpAnimInstance;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        SportsScramble::ATennisBall*                                 mpInterceptingBall;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void SetInstrumentProperties(const SportsScramble::FTennisInstrumentProperties& instrumentProperties);
        void PlayRacquetSound(SportsScramble::ATennisBall* Ball, float BallSpeed);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.ScramTennisAI");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
