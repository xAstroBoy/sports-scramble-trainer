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
#include "SportsScramble_UPitchingAvatarAnimInstance.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UAnimSequenceBase; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::PitcherAvatar_AnimBP
{
    /**
     * AnimBlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/PitcherAvatar_AnimBP.PitcherAvatar_AnimBP_C
     * Size -> 0x1730 (FullSize[0x1B80] - InheritedSize[0x0450])
     */
    class UPitcherAvatar_AnimBP_C : public SportsScramble::UPitchingAvatarAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        AnimGraphRuntime::FAnimNode_Root                             AnimGraphNode_Root_E301D9704F5FA54186955F82D60D17EE;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_B9F5CF23483C625D0C96FEB37F79D00F;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_8ED97554415678D967F8B79EEC049655;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_75FC6EF541125206068677B96C3E934F;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_22617D6F4C59B8D263DABFB5476201BE;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_56E56C914EDA1FF9A1592DB18F5071B0;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_57DF653548059FD006A8D5A02FA32B1E;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_6E7548FD4F53355B0DFFC98530B65D58;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_E5FCFF3A4ECD20835218C0AC224F0803;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_AB69D1044491E62E431BC8B8F464FED4;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_8BC715454E1DD1F74CF404826653F0C5;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_9A1A5671496D2393BE3D43B37C80EBD9;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_1DB73A674DF6D2CCC2896593463A743D;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_D27FE30A485B097EFD45BE9B05180E24;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_E0D452284DE6BCE8F40DC6A5AA106F72;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_3DD92CF74D0B8870E238C2AF159E8E79;
        Engine::FAnimNode_ConvertComponentToLocalSpace               AnimGraphNode_ComponentToLocalSpace_E7B39D214F36959D35B4DDA46C86EF4C;
        Engine::FAnimNode_ConvertLocalToComponentSpace               AnimGraphNode_LocalToComponentSpace_6E9FC3ED4D3F921EF20280970D14FEDC;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_7AE71A4941B56BB070A27AB68FDCAEDE;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_96C1BFC747358B78CA55858D1BC2B38B;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_F491080E47B2570437C8079A561949C7;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_B06AFF084F247250C6BCF2BACEFF85C3;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_7109C5AD4CB42E3463910A8ADA404026;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_DEBA625E45D6BB94DB675E88E4C40E79;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_C93C92AB4222136509FAB9A3FEFA3AC6;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_65CA6FA547D028E223B61689E044AE41;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_045329F943DEA4FD1FC652923F0C4683;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_7FD155CA4291B74AC7336D96CF4B7CE9;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_DE49509F439FD9FFFF4480BFA5511065;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_D60BD2A04452BD823145A6B7F001EEB9;
        Engine::FAnimNode_ConvertComponentToLocalSpace               AnimGraphNode_ComponentToLocalSpace_4881CC374C246423887A0FB229373467;
        Engine::FAnimNode_ConvertLocalToComponentSpace               AnimGraphNode_LocalToComponentSpace_3E2ED9AE42286FBBCA19899DA90A22EB;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_4302A7D84F12297461F28090A17157F6;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_09C6D34F45A9749D41A726A544453E76;
        Engine::FAnimNode_StateMachine                               AnimGraphNode_StateMachine_73E2CB13424529A208A0688986199ADD;
        Engine::UAnimSequenceBase*                                   LeftMittCatch;                                           //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
        Engine::UAnimSequenceBase*                                   RightMittCatch;                                          //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

    public:
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_8BC715454E1DD1F74CF404826653F0C5();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_9A1A5671496D2393BE3D43B37C80EBD9();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_1DB73A674DF6D2CCC2896593463A743D();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_D27FE30A485B097EFD45BE9B05180E24();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_E0D452284DE6BCE8F40DC6A5AA106F72();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_TransitionResult_6E7548FD4F53355B0DFFC98530B65D58();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_TransitionResult_57DF653548059FD006A8D5A02FA32B1E();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_SequencePlayer_F491080E47B2570437C8079A561949C7();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_TransitionResult_56E56C914EDA1FF9A1592DB18F5071B0();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_C93C92AB4222136509FAB9A3FEFA3AC6();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_65CA6FA547D028E223B61689E044AE41();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_045329F943DEA4FD1FC652923F0C4683();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_7FD155CA4291B74AC7336D96CF4B7CE9();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_ModifyBone_DE49509F439FD9FFFF4480BFA5511065();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_TransitionResult_75FC6EF541125206068677B96C3E934F();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_TransitionResult_8ED97554415678D967F8B79EEC049655();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_PitcherAvatar_AnimBP_AnimGraphNode_SequencePlayer_E5FCFF3A4ECD20835218C0AC224F0803();
        void AnimNotify_AnimStarted();
        void ExecuteUbergraph_PitcherAvatar_AnimBP(int32_t EntryPoint);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Blueprints/Sports/Baseball/PitcherAvatar_AnimBP.PitcherAvatar_AnimBP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
