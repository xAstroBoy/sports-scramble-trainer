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
#include "CoreUObject_FTransform.h"
#include "SportsScramble_ABowlingBallTrigger.h"
#include "CoreUObject_FVector.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class UInstancedMesh; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::BowlingLane_Base { class ABowlingLane_Base_C; };
namespace CG::SportsScramble { class AScramBall; };
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::CroquetHoop_BP
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/CroquetHoop_BP.CroquetHoop_BP_C
     * Size -> 0x0088 (FullSize[0x04A8] - InheritedSize[0x0420])
     */
    class ACroquetHoop_BP_C : public SportsScramble::ABowlingBallTrigger
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        SportsScramble::UInstancedMesh*                              InstancedMesh;                                           //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Hoop;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        int32_t                                                      score;                                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BowlingLane_Base::ABowlingLane_Base_C*                       Lane;                                                    //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        SportsScramble::AScramBall*                                  Last_Scored_ball;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        deathdelay;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        UpAngleTolerance;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          Ball_Impact_Sound;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          ScoreSound;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        KickForce;                                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        KnockDownThreshold;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FTransform                                      InitialTransform;                                        //  Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
        SportsScramble::AScramBall*                                  Last_Hit_Ball;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void ResetPhysicsOnHit();
        void ReadyForPlay(BowlingLane_Base::ABowlingLane_Base_C* Lane);
        void ScorePassup(SportsScramble::AScramBall* InstigatorBall, int32_t score);
        void UserConstructionScript();
        void OnTriggered(SportsScramble::AScramBall* Ball);
        void BndEvt__Hoop_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(Engine::UPrimitiveComponent* HitComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, const CoreUObject::FVector& NormalImpulse, const Engine::FHitResult& Hit);
        void Local_DelayedDestroy(bool PlayParticles, float Delay);
        void DisplayFlyText(int32_t score, bool bonus, const CoreUObject::FVector& WorldLocation);
        void Local_HandleCollision(bool ResetPhysics, const CoreUObject::FVector& ImpactLocation);
        void LR_HandleCollision(bool ResetPhysics, const CoreUObject::FVector& ImpactLocation);
        void Multi_HandleCollision(bool ResetPhysics, const CoreUObject::FVector& ImpactLocation);
        void Server_HandleCollision(bool ResetPhysics, const CoreUObject::FVector& ImpactLocation);
        void LR_DelayedDestroy(bool PlayParticles, float Delay);
        void Multi_DelayedDestroy(bool PlayParticles, float Delay);
        void Server_DelayedDestroy(bool PlayParticles, float Delay);
        void ExecuteUbergraph_CroquetHoop_BP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/ChildActors/CroquetHoop_BP.CroquetHoop_BP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif