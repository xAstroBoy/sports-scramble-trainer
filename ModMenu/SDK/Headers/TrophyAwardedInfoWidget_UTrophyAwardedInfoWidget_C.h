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
#include "UMG_UUserWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UTextBlock; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TrophyAwardedInfoWidget
{
    /**
     * WidgetBlueprintGeneratedClass /Game/Blueprints/UI/Frontend/SubMenus/TrophyAwardedInfoWidget.TrophyAwardedInfoWidget_C
     * Size -> 0x0020 (FullSize[0x0230] - InheritedSize[0x0210])
     */
    class UTrophyAwardedInfoWidget_C : public UMG::UUserWidget
    {
    public:
        UMG::UTextBlock*                                             Text_Date;                                               //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Text_Id;                                                 //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Text_Info;                                               //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Text_Subtitle;                                           //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/Blueprints/UI/Frontend/SubMenus/TrophyAwardedInfoWidget.TrophyAwardedInfoWidget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif