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
#include "Engine_FPointerToUberGraphFrame.h"
#include "BP_TrophyAward_BaseballBase_ABP_TrophyAward_BaseballBase_C.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class AScramPlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Trophy_BB_RunRule
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Baseball/BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C
     * Size -> 0x000C (FullSize[0x03E4] - InheritedSize[0x03D8])
     */
    class ABP_Trophy_BB_RunRule_C : public BP_TrophyAward_BaseballBase::ABP_TrophyAward_BaseballBase_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        int32_t                                                      ScoreThreshold;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void UserConstructionScript();
        void RunnerHome(SportsScramble::AScramPlayer* Player, int32_t PlayerId);
        void ExecuteUbergraph_BP_Trophy_BB_RunRule(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Baseball/BP_Trophy_BB_RunRule.BP_Trophy_BB_RunRule_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
