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
#include "BB_Challenge_Base_ABB_Challenge_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::BB_BallLauncher { class ABB_BallLauncher_C; };
namespace CG::BB_StadiumWindowSpawner { class ABB_StadiumWindowSpawner_C; };
namespace CG::SportsScramble { class AScramSportManagerBaseball; };
namespace CG::Engine { class AActor; };
namespace CG::BB_Ball_Base { class ABB_Ball_Base_C; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Challenge_04_ChinaShop
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Challenges/Baseball/BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C
     * Size -> 0x004C (FullSize[0x05DC] - InheritedSize[0x0590])
     */
    class ABB_Challenge_04_ChinaShop_C : public BB_Challenge_Base::ABB_Challenge_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BB_BallLauncher::ABB_BallLauncher_C*                         BallLauncher;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BB_StadiumWindowSpawner::ABB_StadiumWindowSpawner_C*         WindowSpawner;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        LaunchSpeed_Min;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        LaunchSpeed_Max;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<BasicTypes::FName>                        PrimaryAudioList;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        bool                                                         GameRunning;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        LaunchDelay;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::AScramSportManagerBaseball*                  SportManager;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        DeadSpeed;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      WindowScore;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      LightFixtureScore;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void SetupInfoText();
        void LaunchBall();
        void UpdateLauncherSpeeds();
        void UpdateBallType();
        void UpdateScoreAndBoard(int32_t AdditionalScore);
        void GrabInstrument();
        void SpawnElements();
        void Cleanup();
        void UserConstructionScript();
        void BallLaunched(Engine::AActor* NewBallActor);
        void ActorBroken(BB_Ball_Base::ABB_Ball_Base_C* Baseball, int32_t WindowScore);
        void GameLoop();
        void OnBallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void AnnouncerPaused();
        void AnnouncerPresenting();
        void AnnouncerPlayingSequence(const BasicTypes::FName& SequenceName);
        void ReceiveBeginPlay();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void BB_TriggerCountdown();
        void EndGame();
        void Start_Game();
        void AnnouncerExitSequenceComplete();
        void Shortcut();
        void ExecuteUbergraph_BB_Challenge_04_ChinaShop(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Challenges/Baseball/BB_Challenge_04_ChinaShop.BB_Challenge_04_ChinaShop_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif