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
#include "SportsScramble_ENUMS.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::Button_Standard { class AButton_Standard_C; };
namespace CG::QpDetailsWidget { class UQpDetailsWidget_C; };
namespace CG::QpDetailsInfoWidget { class UQpDetailsInfoWidget_C; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Menu_QpDetails
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C
     * Size -> 0x00B8 (FullSize[0x03E0] - InheritedSize[0x0328])
     */
    class AMenu_QpDetails_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UStaticMeshComponent*                                BoxMesh;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     BoxRoot;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     ButtonPos0;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       BoxWidget;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMesh_Back;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       Widget;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ScaleBox_Alpha_E390F4114B9989A96170CF828D1C5F25; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ScaleBox__Direction_E390F4114B9989A96170CF828D1C5F25; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ScaleBox;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        TimelineMoveMessage_Alpha_262667794F0A9CAEE305A8A3F3FBF541; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   TimelineMoveMessage__Direction_262667794F0A9CAEE305A8A3F3FBF541; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  TimelineMoveMessage;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         EditButtonPressed;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        BasicTypes::UScriptMulticastDelegate                         EditButtonSwapped;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        Button_Standard::AButton_Standard_C*                         Button;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        QpDetailsWidget::UQpDetailsWidget_C*                         DetailsWidget;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        QpDetailsInfoWidget::UQpDetailsInfoWidget_C*                 InfoWidget;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        SportsScramble::EScramSport                                  Sport;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         SpawnNavButtons;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void EnableMenuInput(bool* InputEnabled);
        void DisableMenuInput(bool* InputDisabled);
        void RemoveSubMenu(bool* Removed);
        void HideSubMenu(bool* MenuHidden);
        void RestoreSubMenu(bool* MenuShown);
        void SpawnButton();
        void EnableButtons();
        void DisableButtons();
        void Initialize();
        void UserConstructionScript();
        void TimelineMoveMessage__FinishedFunc();
        void TimelineMoveMessage__UpdateFunc();
        void Timeline_ScaleBox__FinishedFunc();
        void Timeline_ScaleBox__UpdateFunc();
        void ReceiveBeginPlay();
        void ReceiveTick(float DeltaSeconds);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ButtonPressed(int32_t ID);
        void ButtonSwapped(int32_t ID);
        void MoveTitle();
        void ShowBox();
        void ExecuteUbergraph_Menu_QpDetails(int32_t EntryPoint);
        void SpawnNavButtons__DelegateSignature();
        void EditButtonSwapped__DelegateSignature(int32_t ID);
        void EditButtonPressed__DelegateSignature(int32_t ID);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/UI/Frontend/SubMenus/Menu_QpDetails.Menu_QpDetails_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif