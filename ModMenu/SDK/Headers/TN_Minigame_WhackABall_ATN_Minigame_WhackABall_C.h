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
#include "Engine_FPointerToUberGraphFrame.h"
#include "BasicTypes_TArray.h"
#include "DebugButtonInfo_FDebugButtonInfo.h"
#include "Engine_AActor.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };
namespace CG::CenterReturnWall { class ACenterReturnWall_C; };
namespace CG::DebugButtonGroup { class ADebugButtonGroup_C; };
namespace CG::TN_GameSelector { class ATN_GameSelector_C; };
namespace CG::BallLauncher { class ABallLauncher_C; };
namespace CG::Countdown { class ACountdown_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Minigame_WhackABall
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Minigames/Tennis/TN_Minigame_WhackABall.TN_Minigame_WhackABall_C
     * Size -> 0x00C0 (FullSize[0x03E8] - InheritedSize[0x0328])
     */
    class ATN_Minigame_WhackABall_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        int32_t                                                      Streak;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::AActor*                                              StreakActor;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      TargetHitReward;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      BullseyeHitReward;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      score;                                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      MiddleHitReward;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          Scoreboards;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<Engine::AActor*>                          GameElements;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        CenterReturnWall::ACenterReturnWall_C*                       GameWall;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          BallTargets;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<DebugButtonInfo::FDebugButtonInfo>        LauncherSelectionButtons;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
        DebugButtonGroup::ADebugButtonGroup_C*                       LauncherChoiceButtons;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      LauncherSelection;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TN_GameSelector::ATN_GameSelector_C*                         GameSelector;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          ActivePayloads;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BallLauncher::ABallLauncher_C*                               LauncherLeft;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BallLauncher::ABallLauncher_C*                               LauncherRight;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         GameOver;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Countdown::ACountdown_C*                                     CountdownActor;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void Shutdown(bool* ShutdownBegun);
        void RefreshActivePayloads();
        void IsStreakContinued(Engine::AActor* PayloadActor, bool* StreakContinues);
        void PickNewTarget(Engine::AActor* OldTarget);
        void SetupGame();
        void SpawnGameElements();
        void UpdateScore(int32_t NewScore);
        void RegisterTargets();
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void AddScore2(Engine::AActor* PayloadActor, Engine::AActor* BallTargetActor, int32_t RegionHit);
        void DelayDestroy();
        void LauncherSelected(int32_t ButtonSelected);
        void SpawnLauncherSelectionMenu();
        void StartGame();
        void GameEnd();
        void CountdownComplet();
        void NewBall(Engine::AActor* NewBallActor);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_TN_Minigame_WhackABall(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Minigames/Tennis/TN_Minigame_WhackABall.TN_Minigame_WhackABall_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
