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
#include "CoreUObject_FVector.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "BasicTypes_FName.h"
#include "SportsScramble_ENUMS.h"
#include "Engine_AActor.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class URotatingMovementComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::SportsScramble { class AScramBall; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::BallSelectionObject { class ABallSelectionObject_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BallSelectionObject
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Debug/BallSelectionObject.BallSelectionObject_C
     * Size -> 0x0099 (FullSize[0x03C1] - InheritedSize[0x0328])
     */
    class ABallSelectionObject_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::URotatingMovementComponent*                          RotatingMovement;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                Mesh;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_0__Direction_50EC050D4019EBD7F2B093A2885B88D7;  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_1;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Touched_Scale_AE6DB016408EAD83733CCC80C1FC3025;          //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Touched__Direction_AE6DB016408EAD83733CCC80C1FC3025;     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Touched;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ScaleDown_Scale_A7A57A1A47FEDF54835BC2B929C14655; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ScaleDown__Direction_A7A57A1A47FEDF54835BC2B929C14655; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ScaleDown;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ScaleUp_Scale_B0C30F9C4D4A484852D1A39DBC7BD3FD; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ScaleUp__Direction_B0C30F9C4D4A484852D1A39DBC7BD3FD; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0003[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ScaleUp;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         InitialScale;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         BallSelectionObjectSelected;                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        bool                                                         AllowPress;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0005[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            BallType;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        SportsScramble::AScramBall*                                  BallClass;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::EScramSport                                  Sport;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void Initialize();
        void UserConstructionScript();
        void Timeline_ScaleUp__FinishedFunc();
        void Timeline_ScaleUp__UpdateFunc();
        void Timeline_ScaleDown__FinishedFunc();
        void Timeline_ScaleDown__UpdateFunc();
        void Touched__FinishedFunc();
        void Touched__UpdateFunc();
        void Timeline_0__FinishedFunc();
        void Timeline_0__UpdateFunc();
        void ObjectTouched();
        void BndEvt__Button_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(Engine::UPrimitiveComponent* OverlappedComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const Engine::FHitResult& SweepResult);
        void ReceiveBeginPlay();
        void ScaleUp();
        void ScaleDown();
        void ScaleDownWithAllowCheck();
        void Rotation();
        void ExecuteUbergraph_BallSelectionObject(int32_t EntryPoint);
        void BallSelectionObjectSelected__DelegateSignature(SportsScramble::AScramBall* BallSelected, BallSelectionObject::ABallSelectionObject_C* Object);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Debug/BallSelectionObject.BallSelectionObject_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
