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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "SportsScramble_AScramPauseCapsule.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::PauseMenu { class APauseMenu_C; };
namespace CG::ScramPlayerController_BP { class AScramPlayerController_BP_C; };
namespace CG::ScramGameState_BP { class AScramGameState_BP_C; };
namespace CG::DemoOptions { class ADemoOptions_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::PauseCapsule
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Player/PauseCapsule.PauseCapsule_C
     * Size -> 0x0078 (FullSize[0x03D0] - InheritedSize[0x0358])
     */
    class APauseCapsule_C : public SportsScramble::AScramPauseCapsule
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_BlackPulse_PulseFraction_888B747745B5438B170A658880780761; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_BlackPulse__Direction_888B747745B5438B170A658880780761; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_BlackPulse;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         CapsuleAlreadyExisted;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        PauseMenu::APauseMenu_C*                                     PauseMenu;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         TransitionReady;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        ScramPlayerController_BP::AScramPlayerController_BP_C*       PlayerController;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        BlackPulseDuration;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ScramGameState_BP::AScramGameState_BP_C*                     GameState;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         PulseEnd;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        DemoOptions::ADemoOptions_C*                                 DemoPauseMenu;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void Cleanup();
        void SpawnPauseMenu();
        void Initialize();
        void UserConstructionScript();
        void Timeline_BlackPulse__FinishedFunc();
        void Timeline_BlackPulse__UpdateFunc();
        void ReceiveBeginPlay();
        void ShowCapsule();
        void Unpause(bool KeepCapsule);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void BlackPulse();
        void BlackPulseOff();
        void CreateCapsule();
        void RemoveCapsule();
        void ReceiveTick(float DeltaSeconds);
        void RemoveThisActor();
        void DemoUnpause(bool KeepCapsule, bool ReenablePause);
        void BeginUnpause();
        void QueuedRemoveCapsule();
        void ExecuteUbergraph_PauseCapsule(int32_t EntryPoint);
        void PulseEnd__DelegateSignature();
        void TransitionReady__DelegateSignature();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Player/PauseCapsule.PauseCapsule_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif