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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FName.h"
#include "BallLauncherParameters_FBallLauncherParameters.h"
#include "SportsScramble_ENUMS.h"
#include "TN_ShotDirection_ENUMS.h"
#include "TN_Train_Base_ATN_Train_Base_C.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class AScramBall; };
namespace CG::SportsScramble { class AScramInstrument; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Train_08_UnlimitedVolley
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Training/Tennis/TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C
     * Size -> 0x012A (FullSize[0x06C4] - InheritedSize[0x059A])
     */
    class ATN_Train_08_UnlimitedVolley_C : public TN_Train_Base::ATN_Train_Base_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        float                                                        DelayBetweenLauncherBalls;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::TArray<BasicTypes::FName>                        LivingRoom_ForehandOnly;                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<BallLauncherParameters::FBallLauncherParameters> LaunchTargets;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        SportsScramble::AScramBall*                                  BallClass_1;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::ETennisShotType                              LaunchSetting;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TN_ShotDirection::ETN_ShotDirection                          LaunchSide;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::AScramInstrument*                            InstrumentClass;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>           ValidBallClassList_0_1;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        bool                                                         RandomBall;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0003[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        DelayBetweenLaunches;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<BasicTypes::FName>                        LivingRoom_BackhandOnly;                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<BasicTypes::FName>                        LivingRoom_Alternating;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::TArray<BasicTypes::FName>                        LivingRoom_Random;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::FName                                            LivingRoom_Forehand;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::FName                                            LivingRoom_Backhand;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BallLauncherParameters::FBallLauncherParameters              LaunchTarget;                                            //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        int32_t                                                      BallDirectionIndex;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void UpdateOptions();
        void GetNextLaunchTarget(BallLauncherParameters::FBallLauncherParameters* LauncherParameter);
        void GetRandomLaunchTargetList();
        void InitializeTrainingRoom08();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void LaunchLoop();
        void NormalLaunch();
        void ChargeShot();
        void SliceShot();
        void ChangePlayerInstrument(SportsScramble::AScramInstrument* PlayerInstrumentClass);
        void CountDownCompleted();
        void ShowCountdown();
        void Unpaused();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_TN_Train_08_UnlimitedVolley(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Training/Tennis/TN_Train_08_UnlimitedVolley.TN_Train_08_UnlimitedVolley_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif