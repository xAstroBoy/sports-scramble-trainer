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
#include "UI_RoomDetailsData_FUI_RoomDetailsData.h"
#include "GameResult_ENUMS.h"
#include "TrainingBase_ATrainingBase_C.h"
#include "Engine_ENUMS.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AActor; };
namespace CG::TN_GameSelector { class ATN_GameSelector_C; };
namespace CG::ScramSportManagerTennis_Blueprint { class AScramSportManagerTennis_Blueprint_C; };
namespace CG::BallLauncher { class ABallLauncher_C; };
namespace CG::Travelcapsule { class ATravelcapsule_C; };
namespace CG::CoreUObject { class UObject; };
namespace CG::FloorLightUpGroup { class AFloorLightUpGroup_C; };
namespace CG::TN_NetMatchScoreboard { class ATN_NetMatchScoreboard_C; };
namespace CG::Engine { class USoundBase; };
namespace CG::ServeLocationIndicator { class AServeLocationIndicator_C; };
namespace CG::ServeLauncher { class AServeLauncher_C; };
namespace CG::TN_TRN_CHG_TargetWall { class ATN_TRN_CHG_TargetWall_C; };
namespace CG::TennisTrainingScrambleTargetGroup { class ATennisTrainingScrambleTargetGroup_C; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::SportsScramble { class AScramBall; };
namespace CG::TennisNet_BP { class ATennisNet_BP_C; };
namespace CG::ScrambleEvent_Base { class AScrambleEvent_Base_C; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::TennisScrambleTarget { class ATennisScrambleTarget_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_Train_Base
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Training/Tennis/TN_Train_Base.TN_Train_Base_C
     * Size -> 0x0181 (FullSize[0x059A] - InheritedSize[0x0419])
     */
    class ATN_Train_Base_C : public TrainingBase::ATrainingBase_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        BasicTypes::TArray<Engine::AActor*>                          Scoreboards;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        TN_GameSelector::ATN_GameSelector_C*                         GameSelector;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* Manager;                                                 //  Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BallLauncher::ABallLauncher_C*                               LauncherLeft;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        UI_RoomDetailsData::FUI_RoomDetailsData                      LevelData;                                               //  Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
        Travelcapsule::ATravelcapsule_C*                             TravelCapsule;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         LevelWon;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::UObject*                                        ResultsMenu;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BallLauncher::ABallLauncher_C*                               LauncherRight;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          ActivePayloads;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        FloorLightUpGroup::AFloorLightUpGroup_C*                     LightUpGroup;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        int32_t                                                      Bounces;                                                 //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TN_NetMatchScoreboard::ATN_NetMatchScoreboard_C*             NetScoreBoard;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_BallGoodSound;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_BallBadSound;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         LevelCompleted;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BallLauncher::ABallLauncher_C*                               LauncherCenter;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ServeLocationIndicator::AServeLocationIndicator_C*           ServeLocationIndicator;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ServeLauncher::AServeLauncher_C*                             ServeLauncher;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TN_TRN_CHG_TargetWall::ATN_TRN_CHG_TargetWall_C*             GameWall;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<Engine::AActor*>                          BallTargets;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        BasicTypes::TArray<Engine::AActor*>                          TargetPool;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        bool                                                         BindToBallSpawned;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0004[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TennisTrainingScrambleTargetGroup::ATennisTrainingScrambleTargetGroup_C* TennisTargetGroup;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>           ValidBallClassList;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        SportsScramble::AScramBall*                                  BallClass;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<TN_Ball_Base::ATN_Ball_Base_C*>           DisabledBallClassList;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        TennisNet_BP::ATennisNet_BP_C*                               TennisNet;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        GameResult::EGameResult                                      TrainingResult;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         IgnoreBallsNeverHitByInstruments;                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor

    public:
        void AddActorToGameElementList(Engine::AActor* Actor, bool* Callback);
        void ShutDown(bool* ShutdownBegun);
        void TN_UnbindEvents();
        void TN_CalculateEndScore(int32_t CurrentScore, int32_t TargetScore);
        void GetListOfBallClasses();
        void GetRandomBallClass();
        void TN_ScrambleTargetBallHit(float HitLocationX, float HitLocationY);
        void PBP_ScrambleTargetHit(ScrambleEvent_Base::AScrambleEvent_Base_C* EventClass);
        void ProcessLightNormalShot();
        void ProcessChargeShot();
        void TN_ScrambleTargetInstrumentChangeMissed();
        void TN_TRN_InstrumentHit();
        void SpawnScrambler();
        void DestroyAllBalls_1();
        void ProcessSliceShot();
        void FindNewTrainingTarget(Engine::AActor* OldTarget);
        void SpawnTrainingTargets();
        void SpawnServeLauncher(bool TeeBall, bool MoveSpawnedBalls);
        void SpawnCenterLaucher(float InitialHeight);
        void TN_LaunchedBallMissed();
        void TN_LaunchedBallHit(float HitLocationX, float HitLocationY);
        void SpawnFloorLightUp(bool OutOnly, bool InOnly, bool BothInOut);
        void SpawnLeftRightLauchers(bool SpawnLeftLauncher, bool SpawnRightLauncher);
        void SpawnNetScoreboard();
        void BallAccuracySound(bool In);
        void CheckInBounds(float XLocation, float YLocation, bool PlaySound, bool* InBounds);
        void Initialize();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void NewLauncherBall(Engine::AActor* NewBallActor);
        void BallHasBeenHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void TN_TNG_BallSpawned(SportsScramble::AScramBall* Ball);
        void TN_TNG_BallHit(SportsScramble::AScramBall* Ball);
        void TN_TNG_WallTargetHit(Engine::AActor* PayloadActor, Engine::AActor* BallTargetActor, int32_t RegionHit);
        void TN_TNG_BallGrabbed(SportsScramble::AScramBall* Ball);
        void BallShotTypeChange(SportsScramble::ETennisShotType ShotType);
        void ScrambleTargetLaunchedBall(TN_Ball_Base::ATN_Ball_Base_C* LaunchedBall);
        void ScrambleIconBallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void TN_TNG_ScrambleTargetHit(TennisScrambleTarget::ATennisScrambleTarget_C* TargetActor, ScrambleEvent_Base::AScrambleEvent_Base_C* EventClass, int32_t TargetID);
        void ScrambleIconBallTypeShotChange(SportsScramble::ETennisShotType ShotType);
        void ChangeBallClass(SportsScramble::AScramBall* BallClass);
        void EndOfGame();
        void ExecuteUbergraph_TN_Train_Base(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Training/Tennis/TN_Train_Base.TN_Train_Base_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif