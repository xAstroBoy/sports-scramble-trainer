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
#include "AnimGraphRuntime_FAnimNode_BlendListByEnum.h"
#include "AnimGraphRuntime_FAnimNode_ModifyBone.h"
#include "Engine_FAnimNode_ConvertComponentToLocalSpace.h"
#include "Engine_FAnimNode_ConvertLocalToComponentSpace.h"
#include "Engine_FAnimNode_StateMachine.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "SportsScramble_UTennisAvatarAnimInstance.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::TennisAvatar_AnimBP
{
    /**
     * AnimBlueprintGeneratedClass /Game/Blueprints/Sports/Tennis/TennisAvatar_AnimBP.TennisAvatar_AnimBP_C
     * Size -> 0x12E0 (FullSize[0x1730] - InheritedSize[0x0450])
     */
    class UTennisAvatar_AnimBP_C : public SportsScramble::UTennisAvatarAnimInstance
    {
    public:
        Engine::FPointerToUberGraphFrame                             UberGraphFrame;                                          //  ZeroConstructor, Transient, DuplicateTransient
        AnimGraphRuntime::FAnimNode_Root                             AnimGraphNode_Root_F9AB24014CD8BDBAE5D551877185A19B;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_40D5EF8749D9BA9B3D1762B3479A6B15;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_4FCEA28847E3CF7FB5727B827F48A669;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_F6745FAE409654A22321479905872C91;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_E21642544BE3867831EA2286204554A3;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_FBEADB664B42F1CBD920B9933D732394;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_09DD48E0481AB1C278DFF6AC1D37D440;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_486CF5304E39C257EEC378805AE22E9A;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_77BC79BE425FC1D40024B6B33CB143B9;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_7BE8B6744FE6CBC4DD7CDEAA12652AE7;
        Engine::FAnimNode_TransitionResult                           AnimGraphNode_TransitionResult_F319490C45083840408A43BC5385262F;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_485989A643F9035A2173DF801BA2C210;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_3D30F9CD4AB1540837C46DA92A1B880A;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_E41057AF494DF46407681B8399E4A9B3;
        AnimGraphRuntime::FAnimNode_BlendListByEnum                  AnimGraphNode_BlendListByEnum_F16A1EC24FF8DCC04D656A88807977C1;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_8E5376BA44C295664C3844944476E470;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_94EBC2D64CC1BBAF6EF40FB79934A8FA;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_31D349B64ED0EED624E04AA44219D8B3;
        AnimGraphRuntime::FAnimNode_BlendListByEnum                  AnimGraphNode_BlendListByEnum_0D10B54348DEDCB3D3781F81AE53A504;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_D04425654B221EB6B45D4A81E413B0AD;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_93DA51E64C9B5D85F1E515A79F9739C0;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_61464A8B41A7E7B0F370508583D2205C;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_FE673932475FB44EFDC2A4916340B447;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_15159193439DEEAEBB611A9B3F09C9AC;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_D7AE66A745804A6D0F4C7F80ADE2AC10;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_954ECBA149AA7C7C6C913185BE67EBFF;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_A49FD9924CD4BC435F94F8B3673BCE12;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_15D7068040A83F2F67F665A347B8DED8;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_4F26117D4FFB8455D9714CB465B692BE;
        AnimGraphRuntime::FAnimNode_ModifyBone                       AnimGraphNode_ModifyBone_804E8CEC4B05A3BC57C9E9857C2B6D77;
        Engine::FAnimNode_ConvertComponentToLocalSpace               AnimGraphNode_ComponentToLocalSpace_4D82C347422F31BC450AA19FE0F122C2;
        Engine::FAnimNode_ConvertLocalToComponentSpace               AnimGraphNode_LocalToComponentSpace_B9CE943F489EE2B86B062AA542BC49D9;
        Engine::FAnimNode_SequencePlayer                             AnimGraphNode_SequencePlayer_DD06F0DD49D2452BFDDFD7A2CF384345;
        AnimGraphRuntime::FAnimNode_StateResult                      AnimGraphNode_StateResult_991B26B74AE20186889C388F14054E37;
        Engine::FAnimNode_StateMachine                               AnimGraphNode_StateMachine_B6FC0C5F4F8642AF8A10A7A0AE49E321;
        BasicTypes::UScriptMulticastDelegate                         PlayAvatarSwingVFX;                                      //  Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

    public:
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_TransitionResult_F319490C45083840408A43BC5385262F();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_TransitionResult_77BC79BE425FC1D40024B6B33CB143B9();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_TransitionResult_486CF5304E39C257EEC378805AE22E9A();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_ModifyBone_954ECBA149AA7C7C6C913185BE67EBFF();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_ModifyBone_A49FD9924CD4BC435F94F8B3673BCE12();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_ModifyBone_15D7068040A83F2F67F665A347B8DED8();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_ModifyBone_4F26117D4FFB8455D9714CB465B692BE();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_TransitionResult_E21642544BE3867831EA2286204554A3();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_TransitionResult_F6745FAE409654A22321479905872C91();
        void EvaluateGraphExposedInputs_ExecuteUbergraph_TennisAvatar_AnimBP_AnimGraphNode_TransitionResult_7BE8B6744FE6CBC4DD7CDEAA12652AE7();
        void AnimNotify_AnimStarted();
        void AnimNotify_AvatarPlayForehandVFX();
        void AnimNotify_AvatarPlayBackhandVFX();
        void AnimNotify_AvatarPlayServeVFX();
        void ExecuteUbergraph_TennisAvatar_AnimBP(int32_t EntryPoint);
        void PlayAvatarSwingVFX__DelegateSignature();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("AnimBlueprintGeneratedClass /Game/Blueprints/Sports/Tennis/TennisAvatar_AnimBP.TennisAvatar_AnimBP_C");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
