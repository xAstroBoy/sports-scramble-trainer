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
#include "AnimGraphRuntime_FAnimNode_Root.h"
#include "Engine_FAnimNode_TransitionResult.h"
#include "AnimGraphRuntime_FAnimNode_BlendSpacePlayer.h"
#include "AnimGraphRuntime_FAnimNode_StateResult.h"
#include "Engine_FAnimNode_StateMachine.h"
#include "SportsScramble_UScramInstrumentAnimInstance.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TN_PoolNoodle_AnimBP
{
    /**
     * AnimBlueprintGeneratedClass /Game/Blueprints/Instruments/Tennis/TN_PoolNoodle_AnimBP.TN_PoolNoodle_AnimBP_C
     * Size -> 0x044D (FullSize[0x080D] - InheritedSize[0x03C0])
     */
    class UTN_PoolNoodle_AnimBP_C : public SportsScramble::UScramInstrumentAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        AnimGraphRuntime::FAnimNode_Root                             AnimGraphNode_Root_889EAB444C2B7A342BA706AEB7D5E159;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_D434F9B74D45B166601510ABD5A57037;
        AnimGraphRuntime::FAnimNode_BlendSpacePlayer                 AnimGraphNode_BlendSpacePlayer_566FEDD54F70BC9A235DC99039328B14;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_FDF7FB794DC9C393308AAA9B90DF8933;
        AnimGraphRuntime::FAnimNode_BlendSpacePlayer                 AnimGraphNode_BlendSpacePlayer_0DD4EC784305F70367F0CF87091FCB63;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_75C6862B40EE8AF166008FB1389FD6A9;
        Engine::FAnimNode_StateMachine                               AnimGraphNode_StateMachine_4C29A70A4B23025F22FDD2B310F1E331;
        float                                                        GravityForceAlpha;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        GravityContribution;                                     //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        float                                                        SpeedCotnribution;                                       //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        bool                                                         UseGravity;                                              //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

    public:
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_PoolNoodle_AnimBP_AnimGraphNode_TransitionResult_D434F9B74D45B166601510ABD5A57037();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_PoolNoodle_AnimBP_AnimGraphNode_BlendSpacePlayer_566FEDD54F70BC9A235DC99039328B14();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_PoolNoodle_AnimBP_AnimGraphNode_BlendSpacePlayer_0DD4EC784305F70367F0CF87091FCB63();
        void BlueprintBeginPlay();
        void ExecuteUbergraph_TN_PoolNoodle_AnimBP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Blueprints/Instruments/Tennis/TN_PoolNoodle_AnimBP.TN_PoolNoodle_AnimBP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif