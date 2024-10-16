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
#include "SlateCore_FSlateBrush.h"
#include "SlateCore_FMargin.h"
#include "SlateCore_FSlateSound.h"
#include "SlateCore_FSlateWidgetStyle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SlateCore
{
    /**
     * ScriptStruct /Script/SlateCore.ButtonStyle
     * Size -> 0x0270 (FullSize[0x0278] - InheritedSize[0x0008])
     */
    struct FButtonStyle : public SlateCore::FSlateWidgetStyle
    {
    public:
        SlateCore::FSlateBrush                                       Normal;                                                  //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       Hovered;                                                 //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       Pressed;                                                 //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       Disabled;                                                //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           NormalPadding;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           PressedPadding;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FSlateSound                                       PressedSlateSound;                                       //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
        SlateCore::FSlateSound                                       HoveredSlateSound;                                       //  Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
