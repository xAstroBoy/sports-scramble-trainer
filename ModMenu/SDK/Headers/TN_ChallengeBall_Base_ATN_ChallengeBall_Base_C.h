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
#include "SportsScramble_FMinMaxFloat.h"
#include "SportsScramble_ENUMS.h"
#include "TN_Ball_Base_ATN_Ball_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UParticleSystemComponent; };
namespace CG::Engine { class UParticleSystem; };
namespace CG::Engine { class USoundBase; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_ChallengeBall_Base
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Balls/Tennis/TN_ChallengeBall_Base.TN_ChallengeBall_Base_C
     * Size -> 0x0037 (FullSize[0x1169] - InheritedSize[0x1132])
     */
    class ATN_ChallengeBall_Base_C : public TN_Ball_Base::ATN_Ball_Base_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UParticleSystemComponent*                            TN_Ball_Glow;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        MaxRacketImpulse_1;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        MinRacketImpulse_1;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     CelebrationParticle;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::FMinMaxFloat                                 CelebrateScale;                                          //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
        Engine::USoundBase*                                          CelebrationSound;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::ETennisShotType                              LastType;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void UserConstructionScript();
        void ChallengeChangeTrailColor();
        void ChallengePompDestruction(float TimeDelay);
        void ReceiveBeginPlay();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ChallengeHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void SetTrail(SportsScramble::ETennisShotType ShotType, bool NoHitSFX);
        void ExecuteUbergraph_TN_ChallengeBall_Base(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Balls/Tennis/TN_ChallengeBall_Base.TN_ChallengeBall_Base_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif