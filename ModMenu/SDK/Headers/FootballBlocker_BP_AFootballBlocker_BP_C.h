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
#include "SportsScramble_ABowlingFootballBlocker.h"
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::BowlingAlley_BP { class ABowlingAlley_BP_C; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::FootballBlocker_BP
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/FootballBlocker_BP.FootballBlocker_BP_C
     * Size -> 0x0010 (FullSize[0x0460] - InheritedSize[0x0450])
     */
    class AFootballBlocker_BP_C : public SportsScramble::ABowlingFootballBlocker
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BowlingAlley_BP::ABowlingAlley_BP_C*                         Alley;                                                   //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void UserConstructionScript();
        void BndEvt__StaticMeshComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(Engine::UPrimitiveComponent* HitComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, const CoreUObject::FVector& NormalImpulse, const Engine::FHitResult& Hit);
        void ReceiveBeginPlay();
        void ExecuteUbergraph_FootballBlocker_BP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/FootballBlocker_BP.FootballBlocker_BP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
