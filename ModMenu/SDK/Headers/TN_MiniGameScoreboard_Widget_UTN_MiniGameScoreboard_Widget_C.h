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
namespace CG::UMG { class UImage; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_MiniGameScoreboard_Widget
{
    /**
     * WidgetBlueprintGeneratedClass /Game/Blueprints/UI/Tennis/TN_MiniGameScoreboard_Widget.TN_MiniGameScoreboard_Widget_C
     * Size -> 0x0030 (FullSize[0x0240] - InheritedSize[0x0210])
     */
    class UTN_MiniGameScoreboard_Widget_C : public UMG::UUserWidget
    {
    public:
        UMG::UTextBlock*                                             Count;                                                   //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UImage*                                                 Image_1;                                                 //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Points;                                                  //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             ScoreText;                                               //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Timer;                                                   //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             TimeText;                                                //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/Blueprints/UI/Tennis/TN_MiniGameScoreboard_Widget.TN_MiniGameScoreboard_Widget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif