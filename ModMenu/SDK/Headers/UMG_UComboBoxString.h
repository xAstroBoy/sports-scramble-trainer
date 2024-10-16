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
#include "BasicTypes_TArray.h"
#include "BasicTypes_FString.h"
#include "SlateCore_FComboBoxStyle.h"
#include "SlateCore_FTableRowStyle.h"
#include "SlateCore_FMargin.h"
#include "SlateCore_FSlateFontInfo.h"
#include "SlateCore_FSlateColor.h"
#include "BasicTypes_UScriptDelegate.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "UMG_UWidget.h"
#include "SlateCore_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.ComboBoxString
     * Size -> 0x0BC0 (FullSize[0x0CC8] - InheritedSize[0x0108])
     */
    class UComboBoxString : public UMG::UWidget
    {
    public:
        BasicTypes::TArray<BasicTypes::FString>                      DefaultOptions;                                          //  Edit, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::FString                                          SelectedOption;                                          //  Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        SlateCore::FComboBoxStyle                                    WidgetStyle;                                             //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FTableRowStyle                                    ItemStyle;                                               //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           ContentPadding;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        float                                                        MaxListHeight;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         HasDownArrow;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         EnableGamepadNavigationMode;                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FSlateFontInfo                                    Font;                                                    //  Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::FSlateColor                                       ForegroundColor;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
        bool                                                         bIsFocusable;                                            //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptDelegate                                  OnGenerateWidgetEvent;                                   //  Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnSelectionChanged;                                      //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnOpening;                                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x40];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetSelectedOption(const BasicTypes::FString& Option);
        bool RemoveOption(const BasicTypes::FString& Option);
        void RefreshOptions();
        void OnSelectionChangedEvent__DelegateSignature(const BasicTypes::FString& SelectedItem, SlateCore::ESelectInfo SelectionType);
        void OnOpeningEvent__DelegateSignature();
        BasicTypes::FString GetSelectedOption();
        int32_t GetOptionCount();
        BasicTypes::FString GetOptionAtIndex(int32_t Index);
        int32_t FindOptionIndex(const BasicTypes::FString& Option);
        void ClearSelection();
        void ClearOptions();
        void AddOption(const BasicTypes::FString& Option);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.ComboBoxString");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
