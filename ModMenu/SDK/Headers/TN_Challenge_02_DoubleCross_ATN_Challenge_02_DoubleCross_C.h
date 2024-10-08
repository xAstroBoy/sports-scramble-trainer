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
#include "Engine_FPointerToUberGraphFrame.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "SportsScramble_FScramPlayerPreferences.h"
#include "CrossPlayType_ENUMS.h"
#include "TN_Challenge_Base_ATN_Challenge_Base_C.h"
#include "CoreUObject_FVector.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UChildActorComponent; };
namespace CG::NW_Court_BP { class ANW_Court_BP_C; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::SportsScramble { class AScramPrimitiveActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Challenge_02_DoubleCross
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Challenges/Tennis/TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C
     * Size -> 0x00AE (FullSize[0x0778] - InheritedSize[0x06CA])
     */
    class ATN_Challenge_02_DoubleCross_C : public TN_Challenge_Base::ATN_Challenge_Base_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UChildActorComponent*                                DoubleCross_ParticleTrigger;                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        bool                                                         GameOver;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        TimeBetweenLauncherFire;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         FirstPauseCompleted;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         SecondPauseCompleted;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         ThirdPauseCompleted;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        TargetAnimationPlayRate;                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      GameLength;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        NW_Court_BP::ANW_Court_BP_C*                                 NW_Court;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<BasicTypes::FName>                        Alt_AnnouncerSequence;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        bool                                                         UseAlternateSequence;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0004[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        AnnouncerSequence;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        int32_t                                                      TargetCount;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      TotalCount;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      TimeLeft;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      BonusScore;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::FScramPlayerPreferences                      PreChallengePreferences;                                 //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
        CrossPlayType::ECrossPlayType                                LeftRestriction;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CrossPlayType::ECrossPlayType                                RightRestriction;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0005[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<CrossPlayType::ECrossPlayType>            LaunchPattern;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        int32_t                                                      PatternIndex;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      StreakCount;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      MatchScore;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      MismatchScore;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>           HitBalls;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

    public:
        void SetupRackets();
        void SetupBallLaunchers();
        void SetupInfoText();
        void Initialize();
        void UserConstructionScript();
        void BallLaunched(Engine::AActor* Ball);
        void OnBallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void LaunchedBallPrimitiveDestroyed(SportsScramble::AScramPrimitiveActor* DestroyedPrimitive);
        void SCOREANDDISPLAY(int32_t ScoreValue, const CoreUObject::FVector& BallStrikePos);
        void ReceiveBeginPlay();
        void StartGame();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void AnnouncerPresenting();
        void SetTargetAnimationPlayRate();
        void NotifyChallengeContinue(Engine::AActor* DestroyedActor);
        void SpeedUpTimer();
        void SpeedUp();
        void GameEnd();
        void TN_TriggerCountdown();
        void OnBallHitModifyCollision(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void AnnouncerExitSequenceComplete();
        void ShortCut();
        void ExecuteUbergraph_TN_Challenge_02_DoubleCross(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Challenges/Tennis/TN_Challenge_02_DoubleCross.TN_Challenge_02_DoubleCross_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
