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
#include "BasicTypes_TArray.h"
#include "SlateCore_FSlateColor.h"
#include "CoreUObject_FVector2D.h"
#include "SportsScramble_AScramTarget.h"
#include "Engine_FHitResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UBoxComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::UMG { class UTextBlock; };
namespace CG::Tball_Impact_BP { class ATball_Impact_BP_C; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class AActor; };
namespace CG::Engine { class USceneComponent; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Pitching_Target_02
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Targets/Baseball/Pitching_Target_02.Pitching_Target_02_C
     * Size -> 0x00CC (FullSize[0x0424] - InheritedSize[0x0358])
     */
    class APitching_Target_02_C : public SportsScramble::AScramTarget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UBoxComponent*                                       BallOverlapDetection;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       FlashScoreWidget;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMeshOuter;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        ChangeSize_Scale_F7B5E7404970E33ED2A7A9B23B676B7A;       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   ChangeSize__Direction_F7B5E7404970E33ED2A7A9B23B676B7A;  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  ChangeSize;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         TargetOverlapDetection;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        float                                                        FlashTime;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        UMG::UTextBlock*                                             ScoreText;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        CoreUObject::FVector                                         InitialScale;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<Tball_Impact_BP::ATball_Impact_BP_C*>     Impacts;                                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        Engine::UMaterialInterface*                                  TargetMaterial;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        SlateCore::FSlateColor                                       FlashScoreColor;                                         //  Edit, BlueprintVisible
        int32_t                                                      FlashScoreAmount;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ShowFlashScore;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        bool                                                         ShowTargetScore;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0003[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector2D                                       DrawSize;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         PlayStrikeSound;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0004[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundBase*                                          StrikeSound;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          ImpactSound;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        ImpactSoundMultiplier;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void HideBallTarget(bool Instant, bool* Callback);
        void ShowBallTarget(bool Instant, bool* Callback);
        void FlashScore(int32_t score, const SlateCore::FSlateColor& Color, bool* ScoreFlashed);
        void ShowScore(int32_t score, const SlateCore::FSlateColor& Color, const CoreUObject::FVector2D& Size);
        void Initialize();
        void SetTargetMaterial();
        void RemoveMarks();
        void UserConstructionScript();
        void ChangeSize__FinishedFunc();
        void ChangeSize__UpdateFunc();
        void ReceiveBeginPlay();
        void Grow();
        void Shrink(bool PlaySound);
        void BndEvt__BallOverlapDetection_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(Engine::UPrimitiveComponent* OverlappedComponent, Engine::AActor* OtherActor, Engine::UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const Engine::FHitResult& SweepResult);
        void Impact(bool PlayStrikeSound);
        void HideScoreOnDelay(float DelayTime, Engine::USceneComponent* Widget);
        void ExecuteUbergraph_Pitching_Target_02(int32_t EntryPoint);
        void TargetOverlapDetection__DelegateSignature();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Targets/Baseball/Pitching_Target_02.Pitching_Target_02_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
