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
namespace CG::UMG { class UHorizontalBox; };
namespace CG::UMG { class UVerticalBox; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisArenaScoreboardWidget
{
    /**
     * WidgetBlueprintGeneratedClass /Game/Blueprints/Environments/Tennis/TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C
     * Size -> 0x0080 (FullSize[0x0290] - InheritedSize[0x0210])
     */
    class UTennisArenaScoreboardWidget_C : public UMG::UUserWidget
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        UMG::UTextBlock*                                             GameP1;                                                  //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             GameP2;                                                  //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UHorizontalBox*                                         Games_Parent;                                            //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             MatchP1;                                                 //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             MatchP2;                                                 //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Player1Games;                                            //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Player1Score;                                            //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UVerticalBox*                                           Player1Serving;                                          //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Player1Text;                                             //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Player2Games;                                            //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Player2Score;                                            //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UVerticalBox*                                           Player2Serving;                                          //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             Player2Text;                                             //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             ServingP1Text;                                           //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
        UMG::UTextBlock*                                             ServingP2Text;                                           //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

    public:
        void PreConstruct(bool IsDesignTime);
        void ExecuteUbergraph_TennisArenaScoreboardWidget(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("WidgetBlueprintGeneratedClass /Game/Blueprints/Environments/Tennis/TennisArenaScoreboardWidget.TennisArenaScoreboardWidget_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif