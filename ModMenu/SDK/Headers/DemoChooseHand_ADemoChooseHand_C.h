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
#include "Engine_AActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class UChildActorComponent; };
namespace CG::UMG { class UWidgetComponent; };
namespace CG::Engine { class UStaticMeshComponent; };
namespace CG::Engine { class UTimelineComponent; };
namespace CG::DemoChooseHandWidget { class UDemoChooseHandWidget_C; };
namespace CG::Header { class AHeader_C; };
namespace CG::Button_Standard { class AButton_Standard_C; };
namespace CG::ScramGameInstance { class UScramGameInstance_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::DemoChooseHand
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Demo/DemoChooseHand.DemoChooseHand_C
     * Size -> 0x00A1 (FullSize[0x03C9] - InheritedSize[0x0328])
     */
    class ADemoChooseHand_C : public Engine::AActor
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USceneComponent*                                     PositionMR;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     PositionML;                                              //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                ChildActorRightHand;                                     //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                ChildActorLeftHand;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        UMG::UWidgetComponent*                                       WidgetComponent;                                         //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                StaticMesh1;                                             //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UStaticMeshComponent*                                MeshBacking1;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     MenuRoot;                                                //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::UChildActorComponent*                                Header;                                                  //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        Engine::USceneComponent*                                     Root;                                                    //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        float                                                        Timeline_MenuScale_Alpha_1E345CE94B0001785276848A07D0C4CA; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::ETimelineDirection                                   Timeline_MenuScale__Direction_1E345CE94B0001785276848A07D0C4CA; //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTimelineComponent*                                  Timeline_MenuScale;                                      //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         ChoiceMade;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        DemoChooseHandWidget::UDemoChooseHandWidget_C*               Widget;                                                  //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Header::AHeader_C*                                           HeaderActor;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Button_Standard::AButton_Standard_C*                         LeftButton;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Button_Standard::AButton_Standard_C*                         RightButton;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        ScramGameInstance::UScramGameInstance_C*                     GameInstance;                                            //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         Removing;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
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
        void ExecuteUbergraph_DemoChooseHand(int32_t EntryPoint);
        void ChoiceMade__DelegateSignature(int32_t ButtonId);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Demo/DemoChooseHand.DemoChooseHand_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
