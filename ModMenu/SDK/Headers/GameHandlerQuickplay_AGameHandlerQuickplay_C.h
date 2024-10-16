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
#include "SportsScramble_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "GameHandlerBase_AGameHandlerBase_C.h"
#include "GameResult_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::ScramSportManagerTennis_Blueprint { class AScramSportManagerTennis_Blueprint_C; };
namespace CG::ScramSportManagerBowling_Blueprint { class AScramSportManagerBowling_Blueprint_C; };
namespace CG::ScramSportManagerBaseball_Blueprint { class AScramSportManagerBaseball_Blueprint_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::GameHandlerQuickplay
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/GameHandlers/GameHandlerQuickplay.GameHandlerQuickplay_C
     * Size -> 0x0051 (FullSize[0x03A1] - InheritedSize[0x0350])
     */
    class AGameHandlerQuickplay_C : public GameHandlerBase::AGameHandlerBase_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        SportsScramble::EScramSport                                  Sport;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Engine::AActor*>                          Scoreboards;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* TennisManager;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          GameElements;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        ScramSportManagerBowling_Blueprint::AScramSportManagerBowling_Blueprint_C* BowlingManager;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramSportManagerBaseball_Blueprint::AScramSportManagerBaseball_Blueprint_C* BaseballManager;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         PlayerBatting;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

    public:
        void StartBaseball();
        void SetupBaseball();
        void StartBowling();
        void SetupBowling();
        void Shutdown();
        void StartTennis();
        void SetupTennis();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void MatchComplete(GameResult::EGameResult Result);
        void QuitGame();
        void BaseballGameCompleted(bool LocalPlayerVictory, int32_t AwayScore, int32_t HomeScore);
        void BowlingGameComplete(GameResult::EGameResult MatchResult, int32_t Player1GamesWon, int32_t Player2GamesWon);
        void ExecuteUbergraph_GameHandlerQuickplay(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/GameHandlers/GameHandlerQuickplay.GameHandlerQuickplay_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
