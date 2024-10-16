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
#include "Engine_FTimerHandle.h"
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UAudioComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::Button_Standard { class AButton_Standard_C; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::Header { class AHeader_C; };
namespace CG::IntroSetupWidget { class UIntroSetupWidget_C; };
namespace CG::ScramPlayer_BP { class AScramPlayer_BP_C; };
namespace CG::Menu_AvatarSetup { class AMenu_AvatarSetup_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::IntroSetup
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/UI/Frontend/IntroSetup.IntroSetup_C
     * Size -> 0x00D8 (FullSize[0x0400] - InheritedSize[0x0328])
     */
    class AIntroSetup_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     AvatarMenuPos;                                           //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     NextButtonLoc;                                           //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     HeaderLoc;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UAudioComponent*                                     AudioVoice;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     PositionMR;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     PositionML;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       WidgetComponent;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMesh1;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                MeshBacking1;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     MenuRoot;                                                //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_MenuScale_Alpha_41B1E83D41A0AECE23F0E28844E5C49E; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_MenuScale__Direction_41B1E83D41A0AECE23F0E28844E5C49E; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_MenuScale;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         ChoiceMade;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        Button_Standard::AButton_Standard_C*                         LeftButton;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Button_Standard::AButton_Standard_C*                         RightButton;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         Removing;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      Progress;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Header::AHeader_C*                                           Header;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        IntroSetupWidget::UIntroSetupWidget_C*                       SetupWidget;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::FTimerHandle                                         VoiceTimer;                                              //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
        ScramPlayer_BP::AScramPlayer_BP_C*                           Player;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         AvatarMenuActive;                                        //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Menu_AvatarSetup::AMenu_AvatarSetup_C*                       AvatarMenu;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Button_Standard::AButton_Standard_C*                         CompleteButton;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void SpawnCompleteButton();
        void SpawnAvatarMenu();
        void PlayVoiceSelectionMade(int32_t Choice);
        void PlayVoiceMenuOpen();
        void UpdateChoice(int32_t Choice, int32_t Progress);
        void SpawnButtons();
        void SpawnHeader();
        void MenuVisibility(bool Visibility);
        void Initialize();
        void UserConstructionScript();
        void Timeline_MenuScale__FinishedFunc();
        void Timeline_MenuScale__UpdateFunc();
        void ReceiveBeginPlay();
        void SelectionMade(int32_t ID);
        void CloseMenu();
        void ReceiveTick(float DeltaSeconds);
        void ButtonSwapped(int32_t ID);
        void OpenMenu();
        void HeaderDestroyed(Engine::AActor* DestroyedActor);
        void DelayedChoiceEffect(int32_t Choice, int32_t Progress);
        void PlayDelayedVoice();
        void CompleteButtonSwapped(int32_t ID);
        void AvatarSetupAnimComplete();
        void ExecuteUbergraph_IntroSetup(int32_t EntryPoint);
        void ChoiceMade__DelegateSignature(int32_t ButtonId);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/UI/Frontend/IntroSetup.IntroSetup_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
