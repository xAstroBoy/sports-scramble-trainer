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
namespace CG::BaseballPitchingTarget_BP { class ABaseballPitchingTarget_BP_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_Trophy_BB_Sniper
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Baseball/BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C
     * Size -> 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
     */
    class ABP_Trophy_BB_Sniper_C : public BP_TrophyAward_BaseballBase::ABP_TrophyAward_BaseballBase_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient

    public:
        void UserConstructionScript();
        void TargetHit(BaseballPitchingTarget_BP::ABaseballPitchingTarget_BP_C* PitchingTarget);
        void ExecuteUbergraph_BP_Trophy_BB_Sniper(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Baseball/BP_Trophy_BB_Sniper.BP_Trophy_BB_Sniper_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
