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
#include "AnimGraphRuntime_FAnimNode_Root.h"
#include "Engine_FAnimNode_TransitionResult.h"
#include "Engine_FAnimNode_SequencePlayer.h"
#include "AnimGraphRuntime_FAnimNode_StateResult.h"
#include "AnimGraphRuntime_FAnimNode_ModifyBone.h"
#include "Engine_FAnimNode_ConvertComponentToLocalSpace.h"
#include "Engine_FAnimNode_ConvertLocalToComponentSpace.h"
#include "Engine_FAnimNode_StateMachine.h"
#include "SportsScramble_UBattingAvatarAnimInstance.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::BatterAvatar_AnimBP
{
    /**
     * AnimBlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/BatterAvatar_AnimBP.BatterAvatar_AnimBP_C
     * Size -> 0x1078 (FullSize[0x14C8] - InheritedSize[0x0450])
     */
    class UBatterAvatar_AnimBP_C : public SportsScramble::UBattingAvatarAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        AnimGraphRuntime::FAnimNode_Root                             AnimGraphNode_Root_5D5531634D7770A2E6EB3080A0D00C4A;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_36E2A4E54B02504CC8D864A238CF79AE;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_37F051AF4EFC347E4C6A7AAEE46EB81B;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_6CEB92BB49FE447D70DA57AC9D5D0BA3;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_B21478034ACBCB44E94DE48C4E2FAC9F;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_BF881CDC44093E8F0A5DCC9C2EF890D3;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_F61AFE85429377E40119F2BE4C51CC3E;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_1E5570FA4963303D9C86799B05649565;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_FCFE6F934F7BB1FCACDF56AFC7E10E34;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_542C91424DD64D4D991C9B9CE32FCDA0;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_3A39ACE640318C0FA6BFB0967976F26B;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_92C0D5204A917C5A81362381A372E2DE;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_9CDD37174625C25B4E1680A2E08F54C6;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_636724134C57177082D0B3B9BFFDE519;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_64EA298A4D8BD14C0C298FA4B2CA8DE7;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_CD3CAD77405557A28E6E4490D7F89992;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_3179C6EF429E8519CB6653A61C45DF30;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_DAD5D4DE41A4A8B843DB06B680D92600;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_7B6747514DD8A8F758473B9ED5BB9C49;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_E3F7F7AE4C9776A65D9921B6E7B84B50;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_DED721724718F5B65D95BF842F81F675;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_14785E9A4451702E1E9B61969544FEC1;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_6EDF73C145182413AB5FD3B0BE5BF624;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_92745FF5492EB6698733D7BB6D97289D;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_B141E608473C3A1A011B26B3CF87ED2E;
        Engine::FAnimNode_ConvertComponentToLocalSpace               AnimGraphNode_ComponentToLocalSpace_DE78D2884E68741B67C95A8BF1BAEF59;
        Engine::FAnimNode_ConvertLocalToComponentSpace               AnimGraphNode_LocalToComponentSpace_0587E04F4183FDF0D61326A523D6D0B2;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_93D1DB4346A0E0A1A1566F951DEF962B;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_F69A9CF2439AD6CB0FB0CD8F2A8FCB8C;
        Engine::FAnimNode_StateMachine                               AnimGraphNode_StateMachine_6155DE1C4A1300C607A556B870343999;

    public:
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_TransitionResult_FCFE6F934F7BB1FCACDF56AFC7E10E34();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_ModifyBone_E3F7F7AE4C9776A65D9921B6E7B84B50();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_ModifyBone_DED721724718F5B65D95BF842F81F675();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_ModifyBone_14785E9A4451702E1E9B61969544FEC1();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_ModifyBone_6EDF73C145182413AB5FD3B0BE5BF624();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_ModifyBone_92745FF5492EB6698733D7BB6D97289D();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_TransitionResult_1E5570FA4963303D9C86799B05649565();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_BatterAvatar_AnimBP_AnimGraphNode_TransitionResult_F61AFE85429377E40119F2BE4C51CC3E();
        void AnimNotify_AnimStarted();
        void ExecuteUbergraph_BatterAvatar_AnimBP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/BatterAvatar_AnimBP.BatterAvatar_AnimBP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
