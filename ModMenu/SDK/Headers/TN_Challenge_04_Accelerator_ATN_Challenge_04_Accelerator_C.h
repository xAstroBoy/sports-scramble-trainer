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
#include "TN_Challenge_Base_ATN_Challenge_Base_C.h"
#include "Engine_ENUMS.h"
#include "GameResult_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::Challenge_ScramSportManager_TN { class AChallenge_ScramSportManager_TN_C; };
namespace CG::SportsScramble { class AScramTennisAI; };
namespace CG::SportsScramble { class ATennisBall; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Challenge_04_Accelerator
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C
     * Size -> 0x0063 (FullSize[0x072D] - InheritedSize[0x06CA])
     */
    class ATN_Challenge_04_Accelerator_C : public TN_Challenge_Base::ATN_Challenge_Base_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BasicTypes::TArray<Engine::AActor*>                          Scoreboards;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<BasicTypes::FName>                        AnnouncerSequence;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        int32_t                                                      PlayerHitCount;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Challenge_ScramSportManager_TN::AChallenge_ScramSportManager_TN_C* SportMgr;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      GameLength;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         GameOver;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         FirstPauseCompleted;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         SecondPauseCompleted;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::AScramTennisAI*                              AI_Opponent;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::ATennisBall*                                 ActiveBall;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      AddedScore;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      OldGamesToWinMatch;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      OldPointToWinGame;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ValuesSet;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void SetupInfoText();
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void ShutDown(bool* ShutdownBegun);
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void DelayDestroy();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void SportManager_MatchComplete(GameResult::EGameResult Result);
        void NotifyChallengeContinue(Engine::AActor* DestroyedActor);
        void TN_TriggerCountdown();
        void BallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void Shortcut();
        void ResetScore(Engine::AActor* DestroyedActor);
        void StartGame();
        void GameEnd();
        void AnnouncerPresenting();
        void AnnouncerExitSequenceComplete();
        void AI_Hit_Ball(SportsScramble::ATennisBall* Ball);
        void ExecuteUbergraph_TN_Challenge_04_Accelerator(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Challenges/Tennis/TN_Challenge_04_Accelerator.TN_Challenge_04_Accelerator_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif