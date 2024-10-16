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
#include "CoreUObject_FVector.h"
#include "CoreUObject_FTransform.h"
#include "SportsScramble_FScramTrajectory.h"
#include "CoreUObject_FRotator.h"
#include "SportsScramble_AScrambleTarget.h"
#include "BasicTypes_TArray.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::SportsScramble { class UScramTrajectoryInfluencerRegion; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::ScrambleEvent_Base { class AScrambleEvent_Base_C; };
namespace CG::TennisScrambleWidget { class UTennisScrambleWidget_C; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::TN_Instrument_Base { class ATN_Instrument_Base_C; };
namespace CG::Engine { class UTexture2D; };
namespace CG::ScramSportManagerTennis_Blueprint { class AScramSportManagerTennis_Blueprint_C; };
namespace CG::TennisScrambleTarget_Launcher { class ATennisScrambleTarget_Launcher_C; };
namespace CG::Engine { class UParticleSystem; };
namespace CG::SportsScramble { class AScramBall; };
namespace CG::TennisScrambleTarget { class ATennisScrambleTarget_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisScrambleTarget
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C
     * Size -> 0x0600 (FullSize[0x0A20] - InheritedSize[0x0420])
     */
    class ATennisScrambleTarget_C : public SportsScramble::AScrambleTarget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UAudioComponent*                                     TN_ScrambleTarget_Shrink_Cue;                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UAudioComponent*                                     TN_ScrambleTarget_Grow_Cue;                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                RadialPulse;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                MeshFrame;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                MeshCannon;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     MeshParent;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        SportsScramble::UScramTrajectoryInfluencerRegion*            Target_Influencer;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       WidgetFront;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       WidgetBack;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Widgets;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_Size_Change_Scale_F1EB380E44B6E2915355239A2DA4BAEF; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_Size_Change__Direction_F1EB380E44B6E2915355239A2DA4BAEF; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_Size_Change;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_SpinCannon_Spin_B762EAD0498082E4E063F7BD77F2E690; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_SpinCannon__Direction_B762EAD0498082E4E063F7BD77F2E690; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_SpinCannon;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_RotateCannon_Alpha_922D06A3440FEC72145F35BE60A37592; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_RotateCannon__Direction_922D06A3440FEC72145F35BE60A37592; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_RotateCannon;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         InstrumentHitBallsOnly;                                  //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleEvent;                                           //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        TennisScrambleWidget::UTennisScrambleWidget_C*               FrontIcon;                                               //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TennisScrambleWidget::UTennisScrambleWidget_C*               BackIcon;                                                //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         ScrambleTargetRemoved;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        int32_t                                                      ID;                                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        CoreUObject::FVector                                         InitialScale;                                            //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         EffectEnabled;                                           //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0004[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TN_Ball_Base::ATN_Ball_Base_C*                               SubsetBallClass;                                         //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TN_Instrument_Base::ATN_Instrument_Base_C*                   SubsetInstrumentClass;                                   //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TryMatchChance;                                          //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTexture2D*                                          Texture;                                                 //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         Shrinking;                                               //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0006[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TN_Ball_Base::ATN_Ball_Base_C*                               OldBall;                                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0007[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FTransform                                      OldBallTransform;                                        //  Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
        ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* SportManager;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        TN_Ball_Base::ATN_Ball_Base_C*                               OldBallClass;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         BallIsInPlay;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0008[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TN_Ball_Base::ATN_Ball_Base_C*                               NewBallClass;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScrambleEvent_Base::AScrambleEvent_Base_C*                   ScrambleEventActor;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TennisScrambleTarget_Launcher::ATennisScrambleTarget_Launcher_C* Launcher;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ReturnToHitter;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0009[0xF];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FScramTrajectory                             OldTrajectory;                                           //  Edit, BlueprintVisible, DisableEditOnInstance
        float                                                        FireDelay;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FRotator                                        InitialRotation;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        CoreUObject::FRotator                                        EndRotation;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0010[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UParticleSystem*                                     SpawnVFX;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0011[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FTransform                                      VFXOffset;                                               //  Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
        BasicTypes::UScriptMulticastDelegate                         ScrambleTargetHit;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        CoreUObject::FVector                                         LaunchLocation;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0012[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FScramTrajectory                             NewTrajectory;                                           //  Edit, BlueprintVisible, DisableEditOnInstance
        CoreUObject::FVector                                         InitialLocation;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        HVarience;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         BallFiredFromTarget;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

    public:
        void RemoveGameElement(bool* Removed);
        void SpawnScrambleEffect(TN_Ball_Base::ATN_Ball_Base_C* Ball);
        void SetupNewTarget();
        void DisableIcon();
        void RemoveOldBall(TN_Ball_Base::ATN_Ball_Base_C* Ball);
        void GetExistingSubclasses(BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>* ActiveBallClasses, BasicTypes::TArray<TN_Instrument_Base::ATN_Instrument_Base_C*>* ActiveInstrumentClasses);
        void GetAiValue(SportsScramble::EScrambleTargetAiValue* Value);
        void GetRandomRacketType(Engine::UTexture2D** ScrambleIcon);
        void GetRandomBallType(Engine::UTexture2D** ScrambleIcon);
        void Initialize();
        void UserConstructionScript();
        void Timeline_Size_Change__FinishedFunc();
        void Timeline_Size_Change__UpdateFunc();
        void Timeline_RotateCannon__FinishedFunc();
        void Timeline_RotateCannon__UpdateFunc();
        void Timeline_SpinCannon__FinishedFunc();
        void Timeline_SpinCannon__UpdateFunc();
        void ReceiveBeginPlay();
        void Grow();
        void Shrink();
        void OnTriggered(SportsScramble::AScramBall* Ball);
        void SetupCannon();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void FireCannon();
        void RotateCannon();
        void SpinCannon();
        void FireFX();
        void ApplyCannonRotation(const SportsScramble::FScramTrajectory& trajectory);
        void SetCannonRotation(const CoreUObject::FRotator& Rotation);
        void ExecuteUbergraph_TennisScrambleTarget(int32_t EntryPoint);
        void BallFiredFromTarget__DelegateSignature(TN_Ball_Base::ATN_Ball_Base_C* BallFired);
        void ScrambleTargetHit__DelegateSignature(TennisScrambleTarget::ATennisScrambleTarget_C* TargetActor, ScrambleEvent_Base::AScrambleEvent_Base_C* ScrambleEvent, int32_t ID);
        void ScrambleTargetRemoved__DelegateSignature(TennisScrambleTarget::ATennisScrambleTarget_C* TargetActor, ScrambleEvent_Base::AScrambleEvent_Base_C* ScrambleEvent, int32_t ID);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/TennisScrambleTarget.TennisScrambleTarget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
