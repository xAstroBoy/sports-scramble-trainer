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
#include "SportsScramble_ABowlingBallReturnSlot.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BW_BallReturnSlot
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/BW_BallReturnSlot.BW_BallReturnSlot_C
     * Size -> 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
     */
    class ABW_BallReturnSlot_C : public SportsScramble::ABowlingBallReturnSlot
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient

    public:
        void UserConstructionScript();
        void OnBallAttached();
        void OnMotionStart();
        void OnMotionStop();
        void ExecuteUbergraph_BW_BallReturnSlot(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Sports/Bowling/BW_BallReturnSlot.BW_BallReturnSlot_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
