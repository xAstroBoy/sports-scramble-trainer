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
#include "Engine_FPointerToUberGraphFrame.h"
#include "UMG_UUserWidget.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::UMG { class UTextBlock; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OCDemo_HitMe_Widget
{
    /**
     * WidgetBlueprintGeneratedClass /Game/Blueprints/OCDemo/OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C
     * Size -> 0x0010 (FullSize[0x0220] - InheritedSize[0x0210])
     */
    class UOCDemo_HitMe_Widget_C : public UMG::UUserWidget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UTextBlock*                                             HitMeText;                                               //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void PreConstruct(bool IsDesignTime);
        void ExecuteUbergraph_OCDemo_HitMe_Widget(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/Blueprints/OCDemo/OCDemo_HitMe_Widget.OCDemo_HitMe_Widget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif