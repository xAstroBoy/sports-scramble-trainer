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
#include "SportsScramble_FAvatarLook.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "SportsScramble_AScramBaseballBatterAI.h"
#include "Engine_ENUMS.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USkeletalMeshComponent; };
namespace CG::BB_InstrumentSelector { class ABB_InstrumentSelector_C; };
namespace CG::SportsScramble { class ABaseballInstrument; };
namespace CG::SportsScramble { class ABaseballBall; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BaseballAIBatter_Blueprint
{
    /**
     * BlueprintGeneratedClass /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C
     * Size -> 0x005A (FullSize[0x0ED2] - InheritedSize[0x0E78])
     */
    class ABaseballAIBatter_Blueprint_C : public SportsScramble::AScramBaseballBatterAI
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        Engine::USkeletalMeshComponent*                              SkeletalMesh;                                            //  BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
        BB_InstrumentSelector::ABB_InstrumentSelector_C*             BatSelector;                                             //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         HomeTeam;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0000[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::FAvatarLook                                  PresetLook;                                              //  Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
        bool                                                         RandomizeAvatar;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         LookRandomzied;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
        bool                                                         UseRemotePlayerLook;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
        bool                                                         HandHidden;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void SetLook();
        void RandomizeLook();
        void ClearBat();
        void SetBat(SportsScramble::ABaseballInstrument* BatClass, bool PlayEffects);
        void SetTeamColor(bool Home);
        void UserConstructionScript();
        void ReceiveBeginPlay();
        void PlayBatSound(SportsScramble::ABaseballBall* Ball, float BallSpeed);
        void ReceiveEndPlay(Engine::EEndPlayReason EndPlayReason);
        void ExecuteUbergraph_BaseballAIBatter_Blueprint(int32_t EntryPoint);
        void LookRandomzied__DelegateSignature(const SportsScramble::FAvatarLook& AvatarLook);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("BlueprintGeneratedClass /Game/Blueprints/AI/Baseball/BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif