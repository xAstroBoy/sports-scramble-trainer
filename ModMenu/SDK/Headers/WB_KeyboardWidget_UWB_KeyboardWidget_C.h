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
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "BasicTypes_TArray.h"
#include "UMG_UUserWidget.h"
#include "BasicTypes_FText.h"
#include "InputCore_FKey.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UCanvasPanel; };
namespace CG::WB_KeyboardKeyWidget { class UWB_KeyboardKeyWidget_C; };
namespace CG::UMG { class UTextBlock; };
namespace CG::UMG { class UWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::WB_KeyboardWidget
{
    /**
     * WidgetBlueprintGeneratedClass /Game/VR_Keyboard/Blueprints/Widgets/WB_KeyboardWidget.WB_KeyboardWidget_C
     * Size -> 0x0058 (FullSize[0x0268] - InheritedSize[0x0210])
     */
    class UWB_KeyboardWidget_C : public UMG::UUserWidget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UCanvasPanel*                                           AlphaKeysPanel;                                          //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C*               BackspaceKey;                                            //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Output_Text_Name;                                        //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C*               SpacebarKey;                                             //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        BasicTypes::UScriptMulticastDelegate                         KeyPressed;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        BasicTypes::TArray<WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C*> AlphaKeys;                                               //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
        BasicTypes::UScriptMulticastDelegate                         KeyReleased;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

    public:
        void Construct();
        void Alpha_KeyPressed_Event(const BasicTypes::FText& KeyText, WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C* KeyWidget, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        void BndEvt__ShiftKey_K2Node_ComponentBoundEvent_0_KeyPressed__DelegateSignature(const BasicTypes::FText& KeyText, WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C* KeyWidget, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        void BndEvt__BackspaceKey_K2Node_ComponentBoundEvent_1_KeyPressed__DelegateSignature(const BasicTypes::FText& KeyText, WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C* KeyWidget, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        void KeyReleased_Event_1(const BasicTypes::FText& KeyText, UMG::UWidget* KeyWidget, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        void BndEvt__SpacebarKey_K2Node_ComponentBoundEvent_50_KeyPressed__DelegateSignature(const BasicTypes::FText& KeyText, WB_KeyboardKeyWidget::UWB_KeyboardKeyWidget_C* KeyWidget, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        void ExecuteUbergraph_WB_KeyboardWidget(int32_t EntryPoint);
        void KeyReleased__DelegateSignature(const BasicTypes::FText& Text, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        void KeyPressed__DelegateSignature(const BasicTypes::FText& Text, const InputCore::FKey& Key, const InputCore::FKey& Modifier);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/VR_Keyboard/Blueprints/Widgets/WB_KeyboardWidget.WB_KeyboardWidget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif