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
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class USceneComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::DemoTraining_ResultsWidget { class UDemoTraining_ResultsWidget_C; };
namespace CG::Header { class AHeader_C; };
namespace CG::DemoTraining_ResultsScore { class UDemoTraining_ResultsScore_C; };
namespace CG::Button_Standard { class AButton_Standard_C; };
namespace CG::Engine { class USoundBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DemoTraining_Results
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Demo/DemoTraining_Results.DemoTraining_Results_C
     * Size -> 0x0180 (FullSize[0x04A8] - InheritedSize[0x0328])
     */
    class ADemoTraining_Results_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::UAudioComponent*                                     SFX_TrainingResults;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMeshBacking;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMeshBackingSmall;                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     ExitLoc;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Scene2;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     ReplayLoc;                                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Scene;                                                   //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       WidgetTextComp;                                          //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     BackingRoot;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       WidgetScoreComp;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMeshBox;                                           //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     BoxRoot;                                                 //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     MenuRoot;                                                //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_MoveInnerMessage_Alpha_EE6672194401FB1F5046FE963CB88D8E; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_MoveInnerMessage__Direction_EE6672194401FB1F5046FE963CB88D8E; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_MoveInnerMessage;                               //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ScaleText_Alpha_E76949E34CEF5A16EA67F5AE36E902C3; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ScaleText__Direction_E76949E34CEF5A16EA67F5AE36E902C3; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ScaleText;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ShowMessage_Alpha_9846040A48ABF9F0D0CAF3A796C9BB3E; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ShowMessage__Direction_9846040A48ABF9F0D0CAF3A796C9BB3E; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ShowMessage;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ShowHighScore_Alpha_5130421E44F2048D39233FA7F9F37A24; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ShowHighScore__Direction_5130421E44F2048D39233FA7F9F37A24; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0003[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ShowHighScore;                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_SwapBoxText_Alpha_301A1EF145EA46D73CECC5A5B0F4CE88; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_SwapBoxText__Direction_301A1EF145EA46D73CECC5A5B0F4CE88; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0004[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_SwapBoxText;                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ScaleBox_Alpha_DE6ED898401CDBCDC9455A9B0239EAA3; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ScaleBox__Direction_DE6ED898401CDBCDC9455A9B0239EAA3; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0005[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ScaleBox;                                       //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_ScaleMenu_Alpha_32EEB68C442552D203C09FABDC05E350; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_ScaleMenu__Direction_32EEB68C442552D203C09FABDC05E350; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0006[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_ScaleMenu;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         ChoiceMade;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        int32_t                                                      Choice;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0007[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         AllButtonsDestroyed;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        BasicTypes::UScriptMulticastDelegate                         ChoiceMadePreDestroy;                                    //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        int32_t                                                      score;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        int32_t                                                      HighScore;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
        bool                                                         NewHighScore;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0008[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        DemoTraining_ResultsWidget::UDemoTraining_ResultsWidget_C*   TextWidget;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Header::AHeader_C*                                           Header;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        DemoTraining_ResultsScore::UDemoTraining_ResultsScore_C*     ScoreWidget;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Button_Standard::AButton_Standard_C*                         ReplayButton;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Button_Standard::AButton_Standard_C*                         ExitButton;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_TrainingComplete_Grow;                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_TrainingComplete_Slide;                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_ScoreBox_Reveal;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_Score_Swipe;                                         //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::USoundBase*                                          SFX_HighScore;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void EnableMenuInput(bool* InputEnabled);
        void DisableMenuInput(bool* InputDisabled);
        void RestoreSubMenu(bool* MenuShown);
        void HideSubMenu(bool* MenuHidden);
        void RemoveSubMenu(bool* Removed);
        void SpawnButtons();
        void DisableButtons();
        void RemoveButtons();
        void Initialize();
        void UserConstructionScript();
        void Timeline_ScaleMenu__FinishedFunc();
        void Timeline_ScaleMenu__UpdateFunc();
        void Timeline_ScaleBox__FinishedFunc();
        void Timeline_ScaleBox__UpdateFunc();
        void Timeline_SwapBoxText__FinishedFunc();
        void Timeline_SwapBoxText__UpdateFunc();
        void Timeline_ShowHighScore__FinishedFunc();
        void Timeline_ShowHighScore__UpdateFunc();
        void Timeline_ShowMessage__FinishedFunc();
        void Timeline_ShowMessage__UpdateFunc();
        void Timeline_ScaleText__FinishedFunc();
        void Timeline_ScaleText__UpdateFunc();
        void Timeline_MoveInnerMessage__FinishedFunc();
        void Timeline_MoveInnerMessage__UpdateFunc();
        void ReceiveBeginPlay();
        void SelectionMade(int32_t ID);
        void ReceiveTick(float DeltaSeconds);
        void DisplayMenu();
        void MenuComplete(Engine::AActor* DestroyedActor);
        void RemoveMenu();
        void ButtonPressed(int32_t ID);
        void RevealBox();
        void ShowScore();
        void ShowHighScore();
        void RevealMessage();
        void MoveMessage();
        void ShowInnerMessage();
        void ExecuteUbergraph_DemoTraining_Results(int32_t EntryPoint);
        void ChoiceMadePreDestroy__DelegateSignature(int32_t ButtonId);
        void AllButtonsDestroyed__DelegateSignature();
        void ChoiceMade__DelegateSignature(int32_t ButtonId);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Demo/DemoTraining_Results.DemoTraining_Results_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif