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
#include "UMG_UPanelWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UWidget; };
namespace CG::UMG { class UGridSlot; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.GridPanel
     * Size -> 0x0030 (FullSize[0x0150] - InheritedSize[0x0120])
     */
    class UGridPanel : public UMG::UPanelWidget
    {
    public:
        BasicTypes::TArray<float>                                    ColumnFill;                                              //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        BasicTypes::TArray<float>                                    RowFill;                                                 //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetRowFill(int32_t ColumnIndex, float Coefficient);
        void SetColumnFill(int32_t ColumnIndex, float Coefficient);
        UMG::UGridSlot* AddChildToGrid(UMG::UWidget* Content);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.GridPanel");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif