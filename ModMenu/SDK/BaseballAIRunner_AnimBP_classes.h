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

// AnimBlueprintGeneratedClass BaseballAIRunner_AnimBP.BaseballAIRunner_AnimBP_C
// 0x05D0 (FullSize[0x0EB0] - InheritedSize[0x08E0])
class UBaseballAIRunner_AnimBP_C : public UBaseballRunnerAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D32D882545A016574F7061B1A0A96030;       // 0x08E8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD8352694C43CB5D8D5360849D903351; // 0x0928(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ECF386F7496C29FDE55F3596CB102D8E; // 0x0970(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F9D2C2B04D0CF310438C9CBAFF5AA237; // 0x09B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD69674844B75E9ACC5937B5D2A3F09B; // 0x0A00(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3C13BDD242B2CCA625A9BF90F7E25D49; // 0x0A48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_EB2D62F841EB7C266E8050A8AA9C1CE9; // 0x0AE8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_22EA53EF4B5791811D46C98D40D922E0; // 0x0B28(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_373C35A04A96DDD4C25E898084AA3ADE; // 0x0BC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9BBCA41E4CA0B3EB8FB4B6B16D643ED2; // 0x0C08(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_665AAB8745097843BD9100AD71DCC790; // 0x0CA8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_931AF2224966B1BACE6BD48C1BB9FE6D; // 0x0CE8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_C6FD1005476923D4886B9DBEA961B519; // 0x0D88(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_317490414F9824AC51B388A7C9179F88; // 0x0DC8(0x00E0)
	class UAnimSequenceBase*                           RunSequence;                                               // 0x0EA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BaseballAIRunner_AnimBP.BaseballAIRunner_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIRunner_AnimBP_AnimGraphNode_TransitionResult_F9D2C2B04D0CF310438C9CBAFF5AA237();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIRunner_AnimBP_AnimGraphNode_TransitionResult_ECF386F7496C29FDE55F3596CB102D8E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIRunner_AnimBP_AnimGraphNode_TransitionResult_AD8352694C43CB5D8D5360849D903351();
	void AnimNotify_RunCycleEnd();
	void ExecuteUbergraph_BaseballAIRunner_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
