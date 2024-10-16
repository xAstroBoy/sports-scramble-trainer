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
#include "BasicTypes_TArray.h"
#include "SportsScramble_FBowlingFrameSet.h"
#include "SportsScramble_AScramActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.BowlingScoreKeeper
     * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
     */
    class ABowlingScoreKeeper : public SportsScramble::AScramActor
    {
    public:
        BasicTypes::TArray<SportsScramble::FBowlingFrameSet>         FrameSetPerPlayer;                                       //  BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        int32_t                                                      NumPlayers;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      NumFrames;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MaxPinsPerFrame;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        bool STATIC_TryGetFrameScoreStatic(int32_t* score, const SportsScramble::FBowlingFrameSet& frameSet, int32_t frameIndex);
        bool TryGetFrameScore(int32_t* score, int32_t Player, int32_t frameIndex);
        void ResetFrames();
        bool IsGameDone();
        int32_t GetGameScore(int32_t Player);
        int32_t STATIC_GetFrameScoreUpTo(bool* complete, const SportsScramble::FBowlingFrameSet& frameSet, int32_t maxFrameIndex);
        int32_t GetCurrentPlayer();
        int32_t GetCurrentFrameIndex(int32_t Player);
        bool AreFramesDone(int32_t Player);
        void AddRoll(bool* frameDone, int32_t Player, int32_t Roll);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.BowlingScoreKeeper");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
