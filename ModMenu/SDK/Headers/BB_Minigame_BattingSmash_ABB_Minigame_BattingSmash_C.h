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
#include "BB_Minigame_Batting_Base_ABB_Minigame_Batting_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::DebugButtonGroup { class ADebugButtonGroup_C; };
namespace CG::BB_Scoreboard_Large_BP { class ABB_Scoreboard_Large_BP_C; };
namespace CG::BB_Scoreboard_Training_BP { class ABB_Scoreboard_Training_BP_C; };
namespace CG::BB_StadiumWindowSpawner { class ABB_StadiumWindowSpawner_C; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_Minigame_BattingSmash
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Minigames/Baseball/BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C
     * Size -> 0x0049 (FullSize[0x0479] - InheritedSize[0x0430])
     */
    class ABB_Minigame_BattingSmash_C : public BB_Minigame_Batting_Base::ABB_Minigame_Batting_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BasicTypes::TArray<DebugButtonInfo::FDebugButtonInfo>        ModeButtons;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
        DebugButtonGroup::ADebugButtonGroup_C*                       SmashMenuPlayerSelection;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      MenuSelection;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      CountdownTimer;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        DelayBeforeFirstPitch;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BB_Scoreboard_Large_BP::ABB_Scoreboard_Large_BP_C*           LargeScoreboard;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BB_Scoreboard_Training_BP::ABB_Scoreboard_Training_BP_C*     TrainingScoreboard;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BB_StadiumWindowSpawner::ABB_StadiumWindowSpawner_C*         WindowSpawner;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ShowScore;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void ShutDown(bool* ShutdownBegun);
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void LauncherSelected(int32_t ButtonSelected);
        void ShowBattingOptions();
        void StartGame();
        void StartTimer();
        void GameIsOver();
        void StartTimedSmashMode();
        void TeleportComplete();
        void NoTeleport();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_BB_Minigame_BattingSmash(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Minigames/Baseball/BB_Minigame_BattingSmash.BB_Minigame_BattingSmash_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif