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
#include "ScrambleEvent_FScrambleEvent.h"
#include "Engine_AActor.h"
#include "BasicTypes_UScriptDelegate.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::TN_Ball_Base { class ATN_Ball_Base_C; };
namespace CG::TN_Instrument_Base { class ATN_Instrument_Base_C; };
namespace CG::SportsScramble { class AScramSportManagerTennis; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ScrambleEvent_Base
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/ScrambleEvent_Base.ScrambleEvent_Base_C
     * Size -> 0x0058 (FullSize[0x0380] - InheritedSize[0x0328])
     */
    class AScrambleEvent_Base_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        TN_Ball_Base::ATN_Ball_Base_C*                               Ball;                                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        ScrambleEvent::FScrambleEvent                                ScrambleEvent;                                           //  Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        TN_Ball_Base::ATN_Ball_Base_C*                               SubsetBallClass;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        TN_Instrument_Base::ATN_Instrument_Base_C*                   SubsetRacketClass;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        SportsScramble::AScramSportManagerTennis*                    ScramSportManager;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        TN_Ball_Base::ATN_Ball_Base_C* GetNewBallType();
        void QueueScrambleEffect(const BasicTypes::UScriptDelegate& BallHitDelegate, const BasicTypes::UScriptDelegate& OnDestroyedDelegate);
        void ActivateScrambleEffect(TN_Ball_Base::ATN_Ball_Base_C* Ball, Engine::AActor* OtherActor, bool* ScrambleEffectSuccess);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void BallHit(CoreUObject::UObject* WorldContextObject, SportsScramble::UScramEventBasePayload* Payload);
        void DestroySelf(Engine::AActor* DestroyedActor);
        void PerformScrambleEffect(TN_Ball_Base::ATN_Ball_Base_C* NewBall);
        void CheckEquipmentMatch(TN_Ball_Base::ATN_Ball_Base_C* Ball, bool CheckInstrument, TN_Instrument_Base::ATN_Instrument_Base_C* Instrument, bool LocalPlayerInstrument);
        void ExecuteUbergraph_ScrambleEvent_Base(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Scrambles/Tennis/ScrambleEvent_Base.ScrambleEvent_Base_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif