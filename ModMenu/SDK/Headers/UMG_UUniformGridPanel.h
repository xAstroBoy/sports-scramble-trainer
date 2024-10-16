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
#include "SlateCore_FMargin.h"
#include "UMG_UPanelWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidget; };
namespace CG::UMG { class UUniformGridSlot; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.UniformGridPanel
     * Size -> 0x0028 (FullSize[0x0148] - InheritedSize[0x0120])
     */
    class UUniformGridPanel : public UMG::UPanelWidget
    {
    public:
        SlateCore::FMargin                                           SlotPadding;                                             //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
        float                                                        MinDesiredSlotWidth;                                     //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        MinDesiredSlotHeight;                                    //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetSlotPadding(const SlateCore::FMargin& InSlotPadding);
        void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
        void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
        UMG::UUniformGridSlot* AddChildToUniformGrid(UMG::UWidget* Content);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.UniformGridPanel");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
