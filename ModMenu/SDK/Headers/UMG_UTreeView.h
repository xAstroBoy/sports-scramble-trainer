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
#include "BasicTypes_UScriptDelegate.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "UMG_UListView.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::UMG
{
    /**
     * Class /Script/UMG.TreeView
     * Size -> 0x0058 (FullSize[0x0388] - InheritedSize[0x0330])
     */
    class UTreeView : public UMG::UListView
    {
    public:
        uint8_t                                                      UnknownData_0000[0x10];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptDelegate                                  BP_OnGetItemChildren;                                    //  Edit, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPrivate
        BasicTypes::UScriptMulticastDelegate                         BP_OnItemExpansionChanged;                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0001[0x28];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetItemExpansion(CoreUObject::UObject* Item, bool bExpandItem);
        void ExpandAll();
        void CollapseAll();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/UMG.TreeView");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif