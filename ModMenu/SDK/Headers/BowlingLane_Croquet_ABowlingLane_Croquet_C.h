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
#include "CoreUObject_FVector.h"
#include "BowlingLane_Base_ABowlingLane_Base_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::CroquetHoop_BP { class ACroquetHoop_BP_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_Croquet
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Croquet.BowlingLane_Croquet_C
     * Size -> 0x0050 (FullSize[0x0578] - InheritedSize[0x0528])
     */
    class ABowlingLane_Croquet_C : public BowlingLane_Base::ABowlingLane_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Hoops;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<CoreUObject::FVector>                     RelativePositions;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<CroquetHoop_BP::ACroquetHoop_BP_C*>       HoopsList;                                               //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<CroquetHoop_BP::ACroquetHoop_BP_C*>       HoopsToSpawnPlayer1;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<CroquetHoop_BP::ACroquetHoop_BP_C*>       HoopsToSpawnPlayer2;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance

    public:
        void GetHoopToSpawn(int32_t HoopIndex, CroquetHoop_BP::ACroquetHoop_BP_C** HoopToSpawn);
        void ShutdownLane(bool* Callback);
        void SetupLane(bool* Callback);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void MultiPass_SetupLane();
        void MultiPass_ShutdownLane();
        void ExecuteUbergraph_BowlingLane_Croquet(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Croquet.BowlingLane_Croquet_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif