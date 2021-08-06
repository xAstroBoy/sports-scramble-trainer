#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BowlingAvatar_AnimBP.BowlingAvatar_AnimBP_C
// 0x0CF0 (FullSize[0x1140] - InheritedSize[0x0450])
class UBowlingAvatar_AnimBP_C : public UBowlingAvatarAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0450(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_AEFB3F2B446814DE6604D3AF6DE2D7E9;       // 0x0458(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D02191BF4999519DACB6CBAB52AFDFCC; // 0x0498(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A924C80047D591C7AFEC55AAD1451915; // 0x04E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40AAA74240CF5CB38ADA0E9CCBFCA7D2; // 0x0528(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9BB2E7BA4239959451DC86B4D0DEFBC0; // 0x0570(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5BE308824D28E5A86A95D5ABD7451122; // 0x05B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_34053413457296EC3821D3AF3A0F0DDD; // 0x0600(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A688DB584FF2F98D1740798B9209B987; // 0x0648(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3C3B70744853E92E60BC869915E55EA1; // 0x06E8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E135D6534A68459C4FAEBABA2B35DAA2; // 0x0728(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_5522A45A4BF7411EF34D5898DBA78B83; // 0x07C8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0C5BDD534BB13BFC8F0ED5B4CB024191; // 0x0808(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_DDF2A65C45845C7E2C230FAB6E6625E3; // 0x08A8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2E1DF13C4DED669BD8D5A08D7BF8CAB1; // 0x08E8(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_530629BC423F00452842D5848D293AD4; // 0x0A20(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_568935E04ECCFE021EFBB884E74A983F; // 0x0B58(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_917FD76D42B74D15256044A134AA306C; // 0x0C90(0x0138)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8871E8914683CB852D528F9574031DDA; // 0x0DC8(0x0138)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8D63E4714A2538F53E3EB3AFEAD58CF9; // 0x0F00(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_DEDDEC104A4AC9F78EF0419DAD60FF0D; // 0x0F40(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_342543194BDCF45086AA06BAB927C552; // 0x0F80(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6B11D4A54A888E335B84BBAECC04CC68; // 0x1020(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_969CCC464A07570696611583983DE4BC; // 0x1060(0x00E0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BowlingAvatar_AnimBP.BowlingAvatar_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_TransitionResult_34053413457296EC3821D3AF3A0F0DDD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_ModifyBone_2E1DF13C4DED669BD8D5A08D7BF8CAB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_ModifyBone_530629BC423F00452842D5848D293AD4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_ModifyBone_568935E04ECCFE021EFBB884E74A983F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_ModifyBone_917FD76D42B74D15256044A134AA306C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_TransitionResult_5BE308824D28E5A86A95D5ABD7451122();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BowlingAvatar_AnimBP_AnimGraphNode_TransitionResult_9BB2E7BA4239959451DC86B4D0DEFBC0();
	void AnimNotify_AnimStarted();
	void AnimNotify_TransitionNotify_MovedToIdle();
	void ExecuteUbergraph_BowlingAvatar_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
