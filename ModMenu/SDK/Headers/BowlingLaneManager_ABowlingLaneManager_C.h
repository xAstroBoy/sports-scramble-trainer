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
#include "Engine_ENUMS.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::BowlingLane_Base { class ABowlingLane_Base_C; };
namespace CG::Engine { class USoundBase; };
namespace CG::BowlingAlley_BP { class ABowlingAlley_BP_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLaneManager
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLaneManager.BowlingLaneManager_C
     * Size -> 0x0098 (FullSize[0x03C0] - InheritedSize[0x0328])
     */
    class ABowlingLaneManager_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UAudioComponent*                                     Audio_LaneSound;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                EditorMesh;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_Rotate_Alpha_0DA3F042474D40A582343AA1760E3357;  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_Rotate__Direction_0DA3F042474D40A582343AA1760E3357; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_Rotate;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BowlingLane_Base::ABowlingLane_Base_C*                       InitialLane;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        BowlingLane_Base::ABowlingLane_Base_C*                       ActiveLane;                                              //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BowlingLane_Base::ABowlingLane_Base_C*                       ReplacementLane;                                         //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         LaneSwapComplete;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        BowlingLane_Base::ABowlingLane_Base_C*                       NewLaneClass;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         LaneSwapActive;                                          //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        DelayBeforeInit;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AnnouncerVO;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         LocallyControlled;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        bool                                                         Player1;                                                 //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0002[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BowlingLane_Base::ABowlingLane_Base_C*                       OutgoingLane;                                            //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BowlingAlley_BP::ABowlingAlley_BP_C*                         Alley;                                                   //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         LaneManagerReplacingLane;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

    public:
        void GetActiveLaneFromLaneManager(BowlingLane_Base::ABowlingLane_Base_C** ActiveLane);
        void Cleanup();
        void Initialize();
        void UserConstructionScript();
        void Timeline_Rotate__FinishedFunc();
        void Timeline_Rotate__UpdateFunc();
        void ReceiveBeginPlay();
        void LaneManagerNewLane(BowlingLane_Base::ABowlingLane_Base_C* NewLane, Engine::USoundBase* AnnouncerVO);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void SpawnNewLane();
        void LaneSetupComplete();
        void RotateLanes(Engine::USoundBase* AnnouncerVO);
        void ExecuteUbergraph_BowlingLaneManager(int32_t EntryPoint);
        void LaneManagerReplacingLane__DelegateSignature(BowlingLane_Base::ABowlingLane_Base_C* ReplacementLane, BowlingLane_Base::ABowlingLane_Base_C* OutgoingLane);
        void LaneSwapComplete__DelegateSignature();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLaneManager.BowlingLaneManager_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
