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
#include "BowlingLane_Base_ABowlingLane_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UChildActorComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::SpaceInvaderGroup_BP { class ASpaceInvaderGroup_BP_C; };
namespace CG::BP_TrophyAward_BB_Invaders { class ABP_TrophyAward_BB_Invaders_C; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_SpaceInvader
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_SpaceInvader.BowlingLane_SpaceInvader_C
     * Size -> 0x0069 (FullSize[0x0591] - InheritedSize[0x0528])
     */
    class ABowlingLane_SpaceInvader_C : public BowlingLane_Base::ABowlingLane_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UChildActorComponent*                                ParticlePool;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     ChallengeWaveSpawn;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     InvaderGame;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        SpaceInvaderGroup_BP::ASpaceInvaderGroup_BP_C*               InvaderGroup;                                            //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BP_TrophyAward_BB_Invaders::ABP_TrophyAward_BB_Invaders_C*   TrophyActor;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         StartImmediately;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         ChallengeMode;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ActiveTime;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<SpaceInvaderGroup_BP::ASpaceInvaderGroup_BP_C*> WaveList;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<BasicTypes::FName>                        PatternList;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        bool                                                         GameplayRunning;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ChallengeSpawnDelay;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SpaceInvaderGroup_BP::ASpaceInvaderGroup_BP_C*               LastActivated;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         CacheDesiredGameState;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void UpdateTrophyAward();
        void GetInactiveController(SpaceInvaderGroup_BP::ASpaceInvaderGroup_BP_C** Controller);
        void ShutdownLane(bool* Callback);
        void SetStartBool(bool StartImmediately);
        void SpawnGroup(bool* Spawned, SpaceInvaderGroup_BP::ASpaceInvaderGroup_BP_C** Controller);
        void Initialize();
        void SetupLane(bool* Callback);
        void UserConstructionScript();
        void SetAlienSpeed(float NewSpeed);
        void SetAlienDeathSpeedModifier(float NewSpeed);
        void RunChallengeMode(float InitialSpeed, BasicTypes::TArray<BasicTypes::FName> Patterns);
        void StartChallengeRunning();
        void StopChallengeRunning();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void BindToControllerEvents(SpaceInvaderGroup_BP::ASpaceInvaderGroup_BP_C* Group);
        void NotifyAlienGroupReset();
        void ChangeGameState(bool Run);
        void ReceiveBeginPlay();
        void Local_AddScore(Engine::AActor* Instigator, int32_t AddedScore);
        void ExecuteUbergraph_BowlingLane_SpaceInvader(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_SpaceInvader.BowlingLane_SpaceInvader_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif