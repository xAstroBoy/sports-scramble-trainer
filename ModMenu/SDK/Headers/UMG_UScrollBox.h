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
#include "SlateCore_FScrollBoxStyle.h"
#include "SlateCore_FScrollBarStyle.h"
#include "SlateCore_ENUMS.h"
#include "UMG_ENUMS.h"
#include "CoreUObject_FVector2D.h"
#include "Slate_ENUMS.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "UMG_UPanelWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SlateCore { class USlateWidgetStyleAsset; };
namespace CG::UMG { class UWidget; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.ScrollBox
     * Size -> 0x0748 (FullSize[0x0868] - InheritedSize[0x0120])
     */
    class UScrollBox : public UMG::UPanelWidget
    {
    public:
        SlateCore::FScrollBoxStyle                                   WidgetStyle;                                             //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FScrollBarStyle                                   WidgetBarStyle;                                          //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::USlateWidgetStyleAsset*                           Style;                                                   //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::USlateWidgetStyleAsset*                           BarStyle;                                                //  ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::EOrientation                                      Orientation;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        UMG::ESlateVisibility                                        ScrollBarVisibility;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::EConsumeMouseWheel                                ConsumeMouseWheel;                                       //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector2D                                       ScrollbarThickness;                                      //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AlwaysShowScrollbar;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AllowOverscroll;                                         //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Slate::EDescendantScrollDestination                          NavigationDestination;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        NavigationScrollPadding;                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowRightClickDragScrolling;                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnUserScrolled;                                          //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x18];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetScrollOffset(float NewScrollOffset);
        void SetScrollBarVisibility(UMG::ESlateVisibility NewScrollBarVisibility);
        void SetScrollbarThickness(const CoreUObject::FVector2D& NewScrollbarThickness);
        void SetOrientation(SlateCore::EOrientation NewOrientation);
        void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
        void SetAllowOverscroll(bool NewAllowOverscroll);
        void ScrollWidgetIntoView(UMG::UWidget* WidgetToFind, bool AnimateScroll, Slate::EDescendantScrollDestination ScrollDestination);
        void ScrollToStart();
        void ScrollToEnd();
        float GetViewOffsetFraction();
        float GetScrollOffset();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.ScrollBox");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif