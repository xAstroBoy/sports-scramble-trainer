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
#include "BasicTypes_TArray.h"
#include "UMG_UWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UPanelSlot; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.PanelWidget
     * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
     */
    class UPanelWidget : public UMG::UWidget
    {
    public:
        BasicTypes::TArray<UMG::UPanelSlot*>                         Slots;                                                   //  ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (PADDING)

    public:
        bool RemoveChildAt(int32_t Index);
        bool RemoveChild(UMG::UWidget* Content);
        bool HasChild(UMG::UWidget* Content);
        bool HasAnyChildren();
        int32_t GetChildrenCount();
        int32_t GetChildIndex(UMG::UWidget* Content);
        UMG::UWidget* GetChildAt(int32_t Index);
        void ClearChildren();
        UMG::UPanelSlot* AddChild(UMG::UWidget* Content);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.PanelWidget");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif