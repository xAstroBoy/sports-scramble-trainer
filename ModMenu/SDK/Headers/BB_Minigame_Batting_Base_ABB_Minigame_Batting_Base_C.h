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
#include "DebugButtonInfo_FDebugButtonInfo.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FTransform.h"
#include "Engine_AActor.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UObject; };
namespace CG::BB_BallLauncher { class ABB_BallLauncher_C; };
namespace CG::DebugButtonGroup { class ADebugButtonGroup_C; };
namespace CG::BB_Ball_Base { class ABB_Ball_Base_C; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::Countdown { class ACountdown_C; };
namespace CG::BB_GameSelector { class ABB_GameSelector_C; };
namespace CG::BB_PitchingPropManager { class ABB_PitchingPropManager_C; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Minigame_Batting_Base
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Minigames/Baseball/BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C
     * Size -> 0x0108 (FullSize[0x0430] - InheritedSize[0x0328])
     */
    class ABB_Minigame_Batting_Base_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          GameElements;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BB_BallLauncher::ABB_BallLauncher_C*                         BallLauncher;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<DebugButtonInfo::FDebugButtonInfo>        LauncherSelectionButtons;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
        DebugButtonGroup::ADebugButtonGroup_C*                       LaucherChoiceMenu;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ShowLauncherSpeedMenu;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         PitchAtRandomSpeed;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BB_Ball_Base::ABB_Ball_Base_C*                               HitBall;                                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         PlayerPos;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        CurrentDistance;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        FinalPitchSpeed;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        SlowPitchSpeed;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MediumPitchSpeed;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        FastPitchSpeed;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MoveYMin;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MoveYMax;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MinLauncherHeight;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MaxLauncherHeight;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        horizontalVariance;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        verticalVariance;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        DelayBetweenPitches;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TargetRegionRightMargin;                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TargetRegionLeftMargin;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TargetRegionTopMargin;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TargetRegionBottomMargin;                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         TimedGameMode;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      CurrentPointScore;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Countdown::ACountdown_C*                                     CountdownActor;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         GameOver;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         ShowTargetFlashScore;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0003[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BB_GameSelector::ABB_GameSelector_C*                         GameSelector;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MinimumSpeedVariance;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         UseDistanceScoreboard;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0004[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BB_PitchingPropManager::ABB_PitchingPropManager_C*           PitchingPropManager;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FTransform                                      PitchingLocation;                                        //  Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void ShutDown(bool* ShutdownBegun);
        void CleanupScoreboards();
        void GetGameSelector();
        void ScoreboardGameOver();
        void ResetAllWindowActors();
        void CountdownTimerStart(int32_t Seconds);
        void LauncherSetup();
        void UpdatePointScore(int32_t score);
        void GetRandomPitchSpeed();
        void SetPitchSpeed(int32_t Button);
        void SpawnGameElements();
        void UpdateBallDistanceScore(float NewScore);
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void DelayDestroy();
        void NewBall(Engine::AActor* NewBallActor);
        void GameLoop();
        void PitchedBallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void HitBallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void Setup();
        void SpawnLauncherSelectionMenu();
        void SetBallSpeed(int32_t ButtonSelected);
        void TeleportComplete();
        void NoTeleport();
        void StartTheCountdown();
        void ScoreWindowBroken();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_BB_Minigame_Batting_Base(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Minigames/Baseball/BB_Minigame_Batting_Base.BB_Minigame_Batting_Base_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif