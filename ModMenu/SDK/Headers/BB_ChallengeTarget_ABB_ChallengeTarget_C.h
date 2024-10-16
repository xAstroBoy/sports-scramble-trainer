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
#include "CoreUObject_FLinearColor.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "BallTrigger_ABallTrigger_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class UScramTrajectoryInfluencerRegion; };
namespace CG::Engine { class UParticleSystemComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::SportsScramble { class UScramTimeLineComponent; };
namespace CG::Engine { class USoundBase; };
namespace CG::SportsScramble { class AScramBall; };
namespace CG::BB_ChallengeTarget { class ABB_ChallengeTarget_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_ChallengeTarget
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Targets/Baseball/BB_ChallengeTarget.BB_ChallengeTarget_C
     * Size -> 0x005E (FullSize[0x04BC] - InheritedSize[0x045E])
     */
    class ABB_ChallengeTarget_C : public BallTrigger::ABallTrigger_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        SportsScramble::UScramTrajectoryInfluencerRegion*            ScramTrajectoryInfluencerRegion;                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystemComponent*                            ParticleSystem;                                          //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Frame;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        SportsScramble::UScramTimeLineComponent*                     ScramTimeLine;                                           //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        CoreUObject::FLinearColor                                    Emission;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         IsBonus;                                                 //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnTriggeredHit;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        Engine::USoundBase*                                          ScoreSound;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      ScoreValue;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void SetUpTarget();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void OnTriggered(SportsScramble::AScramBall* Ball);
        void ShrinkDestroy();
        void ExecuteUbergraph_BB_ChallengeTarget(int32_t EntryPoint);
        void OnTriggeredHit__DelegateSignature(BB_ChallengeTarget::ABB_ChallengeTarget_C* NewParam);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Targets/Baseball/BB_ChallengeTarget.BB_ChallengeTarget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
