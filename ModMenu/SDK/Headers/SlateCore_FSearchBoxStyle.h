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
#include "SlateCore_FEditableTextBoxStyle.h"
#include "SlateCore_FSlateFontInfo.h"
#include "SlateCore_FSlateBrush.h"
#include "SlateCore_FMargin.h"
#include "SlateCore_FSlateWidgetStyle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SlateCore
{
    /**
     * ScriptStruct /Script/SlateCore.SearchBoxStyle
     * Size -> 0x0A88 (FullSize[0x0A90] - InheritedSize[0x0008])
     */
    struct FSearchBoxStyle : public SlateCore::FSlateWidgetStyle
    {
    public:
        SlateCore::FEditableTextBoxStyle                             TextBoxStyle;                                            //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateFontInfo                                    ActiveFontInfo;                                          //  Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       UpArrowImage;                                            //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       DownArrowImage;                                          //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       GlassImage;                                              //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       ClearImage;                                              //  Edit, NativeAccessSpecifierPublic
        SlateCore::FMargin                                           ImagePadding;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        bool                                                         bLeftAlignButtons;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (PADDING)
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif