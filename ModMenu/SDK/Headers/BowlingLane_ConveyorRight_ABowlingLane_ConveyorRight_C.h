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
#include "BowlingLane_Base_ABowlingLane_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::BowlingConveyor_BP { class ABowlingConveyor_BP_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_ConveyorRight
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_ConveyorRight.BowlingLane_ConveyorRight_C
     * Size -> 0x0038 (FullSize[0x0560] - InheritedSize[0x0528])
     */
    class ABowlingLane_ConveyorRight_C : public BowlingLane_Base::ABowlingLane_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Belt3;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Belt2;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Belt1;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Conveyors;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<BowlingConveyor_BP::ABowlingConveyor_BP_C*> ChildActors;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance

    public:
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_BowlingLane_ConveyorRight(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_ConveyorRight.BowlingLane_ConveyorRight_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
