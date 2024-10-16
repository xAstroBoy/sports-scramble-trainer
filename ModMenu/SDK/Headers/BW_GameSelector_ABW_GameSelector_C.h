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
#include "DebugButtonInfo_FDebugButtonInfo.h"
#include "Engine_AActor.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::DebugButtonGroup { class ADebugButtonGroup_C; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::DebugMainMenu { class ADebugMainMenu_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_GameSelector
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/UI/GameSelectors/BW_GameSelector.BW_GameSelector_C
     * Size -> 0x0041 (FullSize[0x0369] - InheritedSize[0x0328])
     */
    class ABW_GameSelector_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BasicTypes::TArray<DebugButtonInfo::FDebugButtonInfo>        Buttons;                                                 //  Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference
        DebugButtonGroup::ADebugButtonGroup_C*                       MainMenu;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         GameActive;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        DebugMainMenu::ADebugMainMenu_C*                             DebugMainMenu;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         AllowReset;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void ResetRacket();
        void DestroyAllMenus();
        void VanishAllBalls();
        void Initialize();
        void DestroyGameManagers();
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void GameSelected(int32_t ButtonSelected);
        void SpawnGameSelectionMenu();
        void GameOver();
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ResetGame();
        void ExecuteUbergraph_BW_GameSelector(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/UI/GameSelectors/BW_GameSelector.BW_GameSelector_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
