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
#include "BasicTypes_FText.h"
#include "BasicTypes_UScriptDelegate.h"
#include "SlateCore_FTextBlockStyle.h"
#include "SlateCore_FSlateFontInfo.h"
#include "Slate_FVirtualKeyboardOptions.h"
#include "Slate_ENUMS.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "UMG_UTextLayoutWidget.h"
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
     * Class /Script/UMG.MultiLineEditableText
     * Size -> 0x02C0 (FullSize[0x03E8] - InheritedSize[0x0128])
     */
    class UMultiLineEditableText : public UMG::UTextLayoutWidget
    {
    public:
        BasicTypes::FText                                            Text;                                                    //  Edit, NativeAccessSpecifierPublic
        BasicTypes::FText                                            HintText;                                                //  Edit, NativeAccessSpecifierPublic
        BasicTypes::UScriptDelegate                                  HintTextDelegate;                                        //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FTextBlockStyle                                   WidgetStyle;                                             //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        bool                                                         bIsReadOnly;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SlateCore::FSlateFontInfo                                    Font;                                                    //  Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         SelectAllTextWhenFocused;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         ClearTextSelectionOnFocusLoss;                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         RevertTextOnEscape;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         ClearKeyboardFocusOnCommit;                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AllowContextMenu;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Slate::FVirtualKeyboardOptions                               VirtualKeyboardOptions;                                  //  Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
        Slate::EVirtualKeyboardDismissAction                         VirtualKeyboardDismissAction;                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnTextChanged;                                           //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnTextCommitted;                                         //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetText(const BasicTypes::FText& InText);
        void SetIsReadOnly(bool bReadOnly);
        void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const BasicTypes::FText& Text, SlateCore::ETextCommit CommitMethod);
        void OnMultiLineEditableTextChangedEvent__DelegateSignature(const BasicTypes::FText& Text);
        BasicTypes::FText GetText();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.MultiLineEditableText");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
