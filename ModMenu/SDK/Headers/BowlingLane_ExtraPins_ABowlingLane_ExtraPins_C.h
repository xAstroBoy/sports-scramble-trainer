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
#include "BowlingLane_Base_ABowlingLane_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Pinsetter_ExtraPins { class APinsetter_ExtraPins_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_ExtraPins
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_ExtraPins.BowlingLane_ExtraPins_C
     * Size -> 0x0018 (FullSize[0x0540] - InheritedSize[0x0528])
     */
    class ABowlingLane_ExtraPins_C : public BowlingLane_Base::ABowlingLane_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     ExtraPinSetter;                                          //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Pinsetter_ExtraPins::APinsetter_ExtraPins_C*                 ExtraPinsetter;                                          //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void ShutdownLane(bool* Callback);
        void SetupLane(bool* Callback);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void Multi_ChangePinState(bool PhysicsState);
        void ExecuteUbergraph_BowlingLane_ExtraPins(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_ExtraPins.BowlingLane_ExtraPins_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif