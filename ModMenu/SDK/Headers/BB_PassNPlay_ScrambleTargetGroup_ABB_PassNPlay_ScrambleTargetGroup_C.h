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
#include "BasicTypes_TArray.h"
#include "BB_ScramIconSetting_ENUMS.h"
#include "Engine_AActor.h"
#include "CoreUObject_FTransform.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::TennisScrambleIconNoLauncher { class ATennisScrambleIconNoLauncher_C; };
namespace CG::ScramSportManagerTennis_Blueprint { class AScramSportManagerTennis_Blueprint_C; };
namespace CG::ScrambleEvent_Base { class AScrambleEvent_Base_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BB_PassNPlay_ScrambleTargetGroup
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C
     * Size -> 0x0071 (FullSize[0x0399] - InheritedSize[0x0328])
     */
    class ABB_PassNPlay_ScrambleTargetGroup_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Icon_Left;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Icon_Right;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Scene;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        RotateInstrument_Alpha_CEE6B71F406B03232C6EB9BA364AE23A; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   RotateInstrument__Direction_CEE6B71F406B03232C6EB9BA364AE23A; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  RotateInstrument;                                        //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        RotateBall_Alpha_3ABA8990476C0BA44B5DBE8E4C0231E8;       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   RotateBall__Direction_3ABA8990476C0BA44B5DBE8E4C0231E8;  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  RotateBall;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<TennisScrambleIconNoLauncher::ATennisScrambleIconNoLauncher_C*> ActiveTargets;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance
        ScramSportManagerTennis_Blueprint::AScramSportManagerTennis_Blueprint_C* TennisManager;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         ManagedGamePaused;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        TennisScrambleIconNoLauncher::ATennisScrambleIconNoLauncher_C* Icon_Instrument;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TennisScrambleIconNoLauncher::ATennisScrambleIconNoLauncher_C* Icon_Ball;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BB_ScramIconSetting::EBB_ScramIconSetting                    Settings;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

    public:
        void RemoveGameElement(bool* Removed);
        void SpawnIcon_Ball(const CoreUObject::FTransform& Transform, int32_t ID, ScrambleEvent_Base::AScrambleEvent_Base_C* ScrambleClass);
        void RemoveAllTargets();
        void SpawnIcon_Instrument(const CoreUObject::FTransform& Transform, int32_t ID, ScrambleEvent_Base::AScrambleEvent_Base_C* ScrambleClass);
        void Initialize();
        void UserConstructionScript();
        void RotateBall__FinishedFunc();
        void RotateBall__UpdateFunc();
        void RotateInstrument__FinishedFunc();
        void RotateInstrument__UpdateFunc();
        void ReceiveBeginPlay();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void RotateBallIcon();
        void RotateInstrumentIcon();
        void StopBallIcon();
        void StopInstrumentIcon();
        void ExecuteUbergraph_BB_PassNPlay_ScrambleTargetGroup(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/BB_PassNPlay_ScrambleTargetGroup.BB_PassNPlay_ScrambleTargetGroup_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif