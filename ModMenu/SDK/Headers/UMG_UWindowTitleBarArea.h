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
#include "UMG_UContentWidget.h"
#include "SlateCore_ENUMS.h"
#include "SlateCore_FMargin.h"

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
     * Class /Script/UMG.WindowTitleBarArea
     * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
     */
    class UWindowTitleBarArea : public UMG::UContentWidget
    {
    public:
        bool                                                         bWindowButtonsEnabled;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bDoubleClickTogglesFullscreen;                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x1E];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetVerticalAlignment(SlateCore::EVerticalAlignment InVerticalAlignment);
        void SetPadding(const SlateCore::FMargin& InPadding);
        void SetHorizontalAlignment(SlateCore::EHorizontalAlignment InHorizontalAlignment);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.WindowTitleBarArea");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif