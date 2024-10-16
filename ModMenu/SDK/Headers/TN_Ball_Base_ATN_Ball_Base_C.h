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
#include "CoreUObject_FVector.h"
#include "BasicTypes_TMap.h"
#include "SportsScramble_ENUMS.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "CoreUObject_FLinearColor.h"
#include "CrossPlayType_ENUMS.h"
#include "SportsScramble_ATennisBall.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class UScramBounceLighting; };
namespace CG::SportsScramble { class UBlobShadowComponent; };
namespace CG::Engine { class UParticleSystem; };
namespace CG::Engine { class USoundBase; };
namespace CG::CMN_Imbued_Base { class ACMN_Imbued_Base_C; };
namespace CG::Engine { class UParticleSystemComponent; };
namespace CG::CMN_Trail_Base { class ACMN_Trail_Base_C; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Ball_Base
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Balls/Tennis/TN_Ball_Base.TN_Ball_Base_C
     * Size -> 0x0232 (FullSize[0x1132] - InheritedSize[0x0F00])
     */
    class ATN_Ball_Base_C : public SportsScramble::ATennisBall
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        SportsScramble::UScramBounceLighting*                        ScramBounceLighting;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        SportsScramble::UBlobShadowComponent*                        BlobShadow;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        bool                                                         DebugPrintHitSpeed;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        bool                                                         DisableScramble;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        bool                                                         PreviousHitByInstrument;                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UParticleSystem*                                     SpawnVFX;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         SpawnVFXScale;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundBase*                                          SpawnSFX;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          DespawnSFX;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CMN_Imbued_Base::ACMN_Imbued_Base_C*                         ImbuedVFX;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CMN_Imbued_Base::ACMN_Imbued_Base_C*                         ImbuedParticle;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         ImbuedVFXScale;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UParticleSystem*                                     ChargedHitVFX;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     ChargedVFX;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystemComponent*                            ChargedParticle;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         ChargedVFXScale;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundBase*                                          ChargedHitSFX;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     SliceVFX;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystemComponent*                            SliceParticle;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystemComponent*                            ChargedSliceParticle;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         SliceVFXScale;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundBase*                                          SliceSFX;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     ChargedSliceVFX;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         ChargedSliceVFXScale;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundBase*                                          ChargedSliceHitSFX;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CMN_Trail_Base::ACMN_Trail_Base_C*                           CurrentTrail;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     SliceBounceVFX;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         BounceVFXScale;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0006[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UParticleSystem*                                     NormalBounceVFX;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     ChargeBounceVFX;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          BounceSFX;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          BounceSliceSFX;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          BounceChargedSFX;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          BounceChargedSliceSFX;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TrailScalar;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0007[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TMap<SportsScramble::ETennisShotType, CMN_Trail_Base::ACMN_Trail_Base_C*> TrailMap;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TMap<SportsScramble::ETennisShotType, float>     TrailScaleMap;                                           //  Edit, BlueprintVisible, ZeroConstructor
        float                                                        ChargePitchMultiplier;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0008[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UParticleSystem*                                     NormalHitVFX;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_HitNet;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          NewBounceSound;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     LocalPlayerHitVFX;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UParticleSystem*                                     SliceHitVFX;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         BallShotTypeChange;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        CoreUObject::FLinearColor                                    ImbuedTrailColor;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         Imbued;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        CrossPlayType::ECrossPlayType                                CrossPlayRestriction;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void PlaySliceSound();
        void PlayHitNetSound();
        void PlayEnvironmentBounceSound(const CoreUObject::FVector& Normal);
        void LocalPlayerInstrumentImpactFX();
        void PlayNormalHitFX(Engine::AActor* GrabberActor);
        void PlayChargeSliceBounceFX(const CoreUObject::FVector& Normal, const CoreUObject::FVector& Location);
        void PlayNormalBounceFX(const CoreUObject::FVector& Normal, const CoreUObject::FVector& Location);
        void PlayChargeBounceFX(const CoreUObject::FVector& Normal, const CoreUObject::FVector& Location);
        void PlaySliceBounceFX(const CoreUObject::FVector& Normal, const CoreUObject::FVector& Location);
        void StopAllShotTypeFX();
        void StopChargedSliceFX();
        void PlayChargedSliceFX();
        void StopSliceFX();
        void PlaySliceFX();
        void StopChargedFX();
        void PlayChargedFX(bool NoHitSFX);
        void StopImbuedFX();
        void PlayImbuedFX();
        void PlayDespawnFX();
        void PlaySpawnFX();
        void SetTrail(SportsScramble::ETennisShotType ShotType, bool NoHitSFX);
        void ClearTrail();
        void BallVanish(bool playOut);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void BallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void BallGrabbed(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void OnShotChanged();
        void ReceiveTick(float DeltaSeconds);
        void DestroyPrimitive(bool playOut, float Delay);
        void NetPlayImbuedFX();
        void NetStopImbuedFX();
        void ExecuteUbergraph_TN_Ball_Base(int32_t EntryPoint);
        void BallShotTypeChange__DelegateSignature(SportsScramble::ETennisShotType ShotType);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Balls/Tennis/TN_Ball_Base.TN_Ball_Base_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
