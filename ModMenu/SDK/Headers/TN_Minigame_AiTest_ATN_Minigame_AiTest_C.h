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
#include "Engine_AActor.h"
#include "GameResult_ENUMS.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };
namespace CG::TN_GameSelector { class ATN_GameSelector_C; };
namespace CG::ScramSportManagerTennis_Blueprint { class AScramSportManagerTennis_Blueprint_C; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Minigame_AiTest
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Minigames/Tennis/TN_Minigame_AiTest.TN_Minigame_AiTest_C
     * Size -> 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
     */
    class ATN_Minigame_AiTest_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     DefaultSceneRoot;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          Scoreboards;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<Engine::AActor*>                          GameElements;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        TN_GameSelector::ATN_GameSelector_C*                         GameSelector;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* Manager;                                                 //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void ShutDown(bool* ShutdownBegun);
        void BindToManager();
        void OnRep_Manager();
        void SpawnGameElements();
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void DelayDestroy();
        void MatchComplete(GameResult::EGameResult Result);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_TN_Minigame_AiTest(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Minigames/Tennis/TN_Minigame_AiTest.TN_Minigame_AiTest_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif