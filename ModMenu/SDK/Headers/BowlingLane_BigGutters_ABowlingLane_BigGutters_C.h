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
#include "Engine_ENUMS.h"
#include "CoreUObject_FVector.h"
#include "BasicTypes_TArray.h"
#include "BowlingLane_Base_ABowlingLane_Base_C.h"
#include "CoreUObject_FRotator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::ScoreField { class AScoreField_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BowlingLane_BigGutters
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_BigGutters.BowlingLane_BigGutters_C
     * Size -> 0x00EC (FullSize[0x0614] - InheritedSize[0x0528])
     */
    class ABowlingLane_BigGutters_C : public BowlingLane_Base::ABowlingLane_Base_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     ScoreField02;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     _ScoreFields;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     ScoreField01;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UAudioComponent*                                     AudioBridgeUpDown;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UAudioComponent*                                     AudioInOut;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UAudioComponent*                                     AudioUpDown;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMesh_RightBlind;                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMesh_LeftBlind;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        BridgeUpDown_Alpha_105C1C8B4D9731E40858289ADCE24613;     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   BridgeUpDown__Direction_105C1C8B4D9731E40858289ADCE24613; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  BridgeUpDown;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        BlindsUpDown_Alpha_5248B61F4DF4FE4B03A991ADD3A6A5A4;     //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   BlindsUpDown__Direction_5248B61F4DF4FE4B03A991ADD3A6A5A4; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  BlindsUpDown;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        BlindsInOut_Alpha_00450E2E44356490C15F09AB188D53A0;      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   BlindsInOut__Direction_00450E2E44356490C15F09AB188D53A0; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  BlindsInOut;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         LeftBlindInitialLocation;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         RightBlindInitialLocation;                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         LeftBlindThirdLocation;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         RightBlindThirdLocation;                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         LeftBlindSecondLocation;                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         RightBlindSecondLocation;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         BridgeInitialLocation;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         BridgeFinalLocation;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<ScoreField::AScoreField_C*>               Scorefields;                                             //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        int32_t                                                      PositiveScore;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SpawnScoreFields(int32_t ScoreAmount, const CoreUObject::FVector& RelativeLocation, const CoreUObject::FRotator& RelativeRotation, Engine::USceneComponent* ParentSceneComp, const CoreUObject::FVector& RelativeScale, ScoreField::AScoreField_C** ScoreFiel);
        void Initialize();
        void SetupLane(bool* Callback);
        void ShutdownLane(bool* Callback);
        void UserConstructionScript();
        void BlindsInOut__FinishedFunc();
        void BlindsInOut__UpdateFunc();
        void BlindsUpDown__FinishedFunc();
        void BlindsUpDown__UpdateFunc();
        void BridgeUpDown__FinishedFunc();
        void BridgeUpDown__UpdateFunc();
        void ReceiveBeginPlay();
        void BlindsOut();
        void BlindsIn();
        void BlindsDown();
        void BlindsUp();
        void RaiseBridge();
        void LowerBridge();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ScoreFieldsUp();
        void StartSetup();
        void StartShutdown();
        void ExecuteUbergraph_BowlingLane_BigGutters(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/Lanes/BowlingLane_BigGutters.BowlingLane_BigGutters_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif