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
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UChildActorComponent; };
namespace CG::PinballTab_BP { class APinballTab_BP_C; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_Bumpers
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C
     * Size -> 0x00F0 (FullSize[0x0618] - InheritedSize[0x0528])
     */
    class ABowlingLane_Bumpers_C : public BowlingLane_Base::ABowlingLane_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UChildActorComponent*                                PinballTab_Red11;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red10;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red9;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red8;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red7;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red6;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red5;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red4;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red3;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red2;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red1;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Red0;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue11;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue10;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue9;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue8;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue7;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue6;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue5;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue4;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue3;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue2;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue1;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                PinballTab_Blue0;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        FlyTextLifeSpan;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      FlyTextScoreAmount;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        FlashLength;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<PinballTab_BP::APinballTab_BP_C*>         PinballTabs;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        PinballTab_BP::APinballTab_BP_C*                             FlashedTab;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SwapAllTabLocations();
        void SwapTabLocations(Engine::USceneComponent* RedTab, Engine::USceneComponent* BlueTab);
        void UnflashPinballTab(PinballTab_BP::APinballTab_BP_C* Tab);
        void FlashClosestPinballTab(const CoreUObject::FVector& Position);
        void UserConstructionScript();
        void BndEvt__StaticMesh_Col_Gutter_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(Engine::UPrimitiveComponent* HitComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, const CoreUObject::FVector& NormalImpulse, const Engine::FHitResult& Hit);
        void Local_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus);
        void ReceiveBeginPlay();
        void LR_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus);
        void Multi_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus);
        void Server_BounceFX(const CoreUObject::FVector& Location, int32_t ModifiedScore, bool ModifiedBonus);
        void ExecuteUbergraph_BowlingLane_Bumpers(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_Bumpers.BowlingLane_Bumpers_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
