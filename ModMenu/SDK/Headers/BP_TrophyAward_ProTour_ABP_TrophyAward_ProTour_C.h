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
#include "BP_TrophyAward_TN_MatchCompleteBase_ABP_TrophyAward_TN_MatchCompleteBase_C.h"
#include "SportsScramble_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class AScramPlayer; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BP_TrophyAward_ProTour
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Tennis/BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C
     * Size -> 0x000F (FullSize[0x03C9] - InheritedSize[0x03BA])
     */
    class ABP_TrophyAward_ProTour_C : public BP_TrophyAward_TN_MatchCompleteBase::ABP_TrophyAward_TN_MatchCompleteBase_C
    {
    public:
        uint8_t                                                      UnknownData_0000[0x6];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        bool                                                         UsingPro;                                                //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void GetSkill(SportsScramble::EScramSkill* Skill);
        void UserConstructionScript();
        void DebugEarn();
        void OnScorePoint();
        void ReceiveBeginPlay();
        void BallInPlay();
        void OnMatchComplete(SportsScramble::AScramPlayer* Player);
        void ExecuteUbergraph_BP_TrophyAward_ProTour(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/Trophy/TrophyAward/Tennis/BP_TrophyAward_ProTour.BP_TrophyAward_ProTour_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
