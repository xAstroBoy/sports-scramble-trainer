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
#include "SlateCore_FSlateBrush.h"
#include "SlateCore_FSlateWidgetStyle.h"

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SlateCore
{
    /**
     * ScriptStruct /Script/SlateCore.TableColumnHeaderStyle
     * Size -> 0x04C8 (FullSize[0x04D0] - InheritedSize[0x0008])
     */
    struct FTableColumnHeaderStyle : public SlateCore::FSlateWidgetStyle
    {
    public:
        SlateCore::FSlateBrush                                       SortPrimaryAscendingImage;                               //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       SortPrimaryDescendingImage;                              //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       SortSecondaryAscendingImage;                             //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       SortSecondaryDescendingImage;                            //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       NormalBrush;                                             //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       HoveredBrush;                                            //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       MenuDropdownImage;                                       //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       MenuDropdownNormalBorderBrush;                           //  Edit, NativeAccessSpecifierPublic
        SlateCore::FSlateBrush                                       MenuDropdownHoveredBorderBrush;                          //  Edit, NativeAccessSpecifierPublic
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif