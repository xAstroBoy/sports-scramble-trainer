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
#include "BasicTypes_FName.h"
#include "SportsScramble_AScramActor.h"
#include "BasicTypes_FText.h"
#include "Engine_ENUMS.h"
#include "GameResult_ENUMS.h"
#include "CoreUObject_FVector.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::Engine { class USoundBase; };
namespace CG::InfoDisplay { class AInfoDisplay_C; };
namespace CG::Countdown { class ACountdown_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::ManagerBowling_LocalHelper
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C
     * Size -> 0x0098 (FullSize[0x03E0] - InheritedSize[0x0348])
     */
    class AManagerBowling_LocalHelper_C : public SportsScramble::AScramActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          DisappointedAudience;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AudienceApplause;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        InfoDisplay::AInfoDisplay_C*                                 InfoPanel;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         IsPlayer1;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundBase*                                          SFX_StingerLose;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_StingerWin;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AnnouncerBallChange;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AnnouncerBasketball;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AnnouncerRollingPin;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          AnnouncerCurlingStone;                                   //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          PlinkoLaunchSound;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Countdown::ACountdown_C*                                     CountdownActor;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         UseAlternateInfo;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            AlternateText_Panel_01;                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::FName                                            AlternateText_Panel_02_Prefix;                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::FName                                            AlternateText_Panel_02_Postfix;                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void DisplayCountdown(Countdown::ACountdown_C** CountdownActor);
        void DisplayInfo(const BasicTypes::FText& DisplayText, float DisplayTime);
        void Cleanup();
        void Initialize();
        void UserConstructionScript();
        void PlayAudienceDisappointed();
        void CrowdApplause();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void DisplayStartOfMatchInfo(int32_t GamesToWin);
        void DisplayNextGame(int32_t PreviousGameWinner, int32_t Game);
        void DisplayMatchOver(GameResult::EGameResult GameResult);
        void PlayAnnouncerBallChange();
        void PlayAnnouncerVO(Engine::USoundBase* AnnouncerVO);
        void ReceiveBeginPlay();
        void PlinkoLaunchSFX(const CoreUObject::FVector& Location);
        void DisplayAlternateMatchInfo(int32_t GamesToWin);
        void DisplayPlayerTurnStart(int32_t Player);
        void DisplayPlayerTurnEnd(int32_t Player);
        void DisplayStartOfTraditionalMatchInfo(int32_t Frames);
        void ExecuteUbergraph_ManagerBowling_LocalHelper(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/ManagerBowling_LocalHelper.ManagerBowling_LocalHelper_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif