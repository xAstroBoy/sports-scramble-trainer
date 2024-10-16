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
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };
namespace CG::BowlingAlley_BP { class ABowlingAlley_BP_C; };
namespace CG::ScramSportManagerBowling_Blueprint { class AScramSportManagerBowling_Blueprint_C; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_Minigame_Practice
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Minigames/Bowling/BW_Minigame_Practice.BW_Minigame_Practice_C
     * Size -> 0x0038 (FullSize[0x0360] - InheritedSize[0x0328])
     */
    class ABW_Minigame_Practice_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          GameElements;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<BowlingAlley_BP::ABowlingAlley_BP_C*>     BowlingAlleys;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        ScramSportManagerBowling_Blueprint::AScramSportManagerBowling_Blueprint_C* SportManager;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void Shutdown(bool* ShutdownBegun);
        void SpawnGameElements();
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void DelayDestroy();
        void ExecuteUbergraph_BW_Minigame_Practice(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Minigames/Bowling/BW_Minigame_Practice.BW_Minigame_Practice_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
