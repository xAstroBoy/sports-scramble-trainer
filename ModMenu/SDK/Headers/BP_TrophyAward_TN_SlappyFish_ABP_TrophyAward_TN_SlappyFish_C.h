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
#include "BP_TrophyAward_Tennis_InstrumentHitBase_ABP_TrophyAward_Tennis_InstrumentHitBase_C.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class ATennisBall; };
namespace CG::TN_Instrument_Base { class ATN_Instrument_Base_C; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyAward_TN_SlappyFish
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Tennis/BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C
     * Size -> 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
     */
    class ABP_TrophyAward_TN_SlappyFish_C : public BP_TrophyAward_Tennis_InstrumentHitBase::ABP_TrophyAward_Tennis_InstrumentHitBase_C
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient

    public:
        void UserConstructionScript();
        void DebugEarn();
        void OnHit(SportsScramble::ATennisBall* TennisBall, TN_Instrument_Base::ATN_Instrument_Base_C* Instrument, SportsScramble::ETennisBallType BallType);
        void ExecuteUbergraph_BP_TrophyAward_TN_SlappyFish(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Tennis/BP_TrophyAward_TN_SlappyFish.BP_TrophyAward_TN_SlappyFish_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
