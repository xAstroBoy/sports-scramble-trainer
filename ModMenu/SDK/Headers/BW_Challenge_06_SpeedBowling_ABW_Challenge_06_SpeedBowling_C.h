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
#include "SportsScramble_FRandomActorTable.h"
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "SportsScramble_FRandomActor.h"
#include "BW_LaneData_FBW_LaneData.h"
#include "Engine_FTimerHandle.h"
#include "BW_Challenge_Base_ABW_Challenge_Base_C.h"
#include "Engine_ENUMS.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAudioComponent; };
namespace CG::BW_CenterScoreboard { class ABW_CenterScoreboard_C; };
namespace CG::Engine { class AActor; };
namespace CG::BowlingLane_Base { class ABowlingLane_Base_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Challenge_06_SpeedBowling
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Challenges/Bowling/BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C
     * Size -> 0x00AB (FullSize[0x0604] - InheritedSize[0x0559])
     */
    class ABW_Challenge_06_SpeedBowling_C : public BW_Challenge_Base::ABW_Challenge_Base_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UAudioComponent*                                     Audio_Horn;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        bool                                                         PracticeOver;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FRandomActorTable                            TutorialBallTable;                                       //  Edit, BlueprintVisible, DisableEditOnInstance
        bool                                                         SecondPauseCompleted;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         FirstPauseCompleted;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        PrimaryAudioList;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BW_CenterScoreboard::ABW_CenterScoreboard_C*                 CenterScoreboardBP;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<SportsScramble::FRandomActor>             AssignedBall;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<BW_LaneData::FBW_LaneData>                BW_LaneDataList;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        float                                                        TimeBetweenLaneChanges;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      CycleIndex;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::FTimerHandle                                         LaneChangeTimer;                                         //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        bool                                                         TimerExpiredLaneChange;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         SkipClearTimer;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         SkipTimerReset;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0003[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        DefaultLaneSwapTime;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        FasterLaneSwapTime;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MoreFasterLaneSwapTime;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MaxFastnessLanesSwapTime;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      PlayerStrikeCount;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      StrikesNeededForTrophy;                                  //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void UnbindEvents();
        void IncrementCycleIndex();
        void InitializeChallengeRoom();
        void SetupInfoText();
        void UserConstructionScript();
        void SpawnBalls();
        void NotifyChallengeContinue(Engine::AActor* DestroyedActor);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void AnnouncerPresenting();
        void BW_TriggerCountdown();
        void GameEnd();
        void Shortcut();
        void UpdateCurrentScore(int32_t LaneID, int32_t CurrentScore);
        void CustomTimer();
        void StartTraining();
        void ChangeLane();
        void LaneSwapping(BowlingLane_Base::ABowlingLane_Base_C* ReplacementLane, BowlingLane_Base::ABowlingLane_Base_C* OutgoingLane);
        void ReduceTime();
        void ReceiveBeginPlay();
        void AnnouncerExitSequenceComplete();
        void BowlingEvent(int32_t Player, SportsScramble::EBowlingEvent BowlingEvent);
        void ExecuteUbergraph_BW_Challenge_06_SpeedBowling(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Challenges/Bowling/BW_Challenge_06_SpeedBowling.BW_Challenge_06_SpeedBowling_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif