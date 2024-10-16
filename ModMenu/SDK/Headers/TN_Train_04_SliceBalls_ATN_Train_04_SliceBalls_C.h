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
#include "BasicTypes_FName.h"
#include "BallLauncherParameters_FBallLauncherParameters.h"
#include "Engine_FTimerHandle.h"
#include "TN_Train_Base_ATN_Train_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Train_04_SliceBalls
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Training/Tennis/TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C
     * Size -> 0x00EF (FullSize[0x0689] - InheritedSize[0x059A])
     */
    class ATN_Train_04_SliceBalls_C : public TN_Train_Base::ATN_Train_Base_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UAudioComponent*                                     Audio_SliceInstructions;                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        int32_t                                                      maxBalls;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        DelayBetweenLauncherBalls;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      LoopCount;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      BallsMissed;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      BallsRegistered;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        LivingRoom_RightHanded_2;                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<BallLauncherParameters::FBallLauncherParameters> LaunchTargets;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BallLauncherParameters::FBallLauncherParameters              ActiveLaunchParameters;                                  //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AnnouncerAudio_01;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         BallSliced;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      VoiceClips;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         TrainingOver;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FTimerHandle                                         InstructionalVOTimer;                                    //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        bool                                                         TimerStarted;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void SetUpInfoText();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void PreTrainingGameCountDown();
        void CountDownCompleted();
        void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
        void TN_LaunchedBallMissed();
        void LaunchANewBall();
        void PreTrainingAnnouncer();
        void ProcessSliceShot();
        void NotifyTrainingContinue(Engine::AActor* DestroyedActor);
        void CustomEvent_1();
        void CountVoiceClips();
        void AnnouncerExitSequenceComplete();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void StartCustomTimer(float Time);
        void SliceInstructions();
        void ExecuteUbergraph_TN_Train_04_SliceBalls(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Training/Tennis/TN_Train_04_SliceBalls.TN_Train_04_SliceBalls_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
