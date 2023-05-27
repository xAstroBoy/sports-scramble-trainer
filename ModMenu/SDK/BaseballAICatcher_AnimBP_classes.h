#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass BaseballAICatcher_AnimBP.BaseballAICatcher_AnimBP_C
	 * Size -> 0x0378 (FullSize[0x06D8] - InheritedSize[0x0360])
	 */
	class UBaseballAICatcher_AnimBP_C : public UBaseballCatcherAIAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0360(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_5C1A8321402D18FEAB9CB0BE5A336D08;     // 0x0368(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F303352C430ADCD04AC42A85D70F7930; // 0x03A8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7C0B1D244C2CB96DD63424A8145F14DB; // 0x03F0(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12CA6B9C426F4A3C210F1AA92AF7A800; // 0x0438(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_A7A4D1DE48939661CF213A9904B1A5A1; // 0x04D8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_735E7F064ABCDEBFA1E41DB064FCCD93; // 0x0518(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2035A7144E7C2AD8B2FE28BF6049D716; // 0x05B8(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_CD06CD864C8C84FCA98FC792D064E75A; // 0x05F8(0x00E0)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_SequencePlayer_12CA6B9C426F4A3C210F1AA92AF7A800();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAICatcher_AnimBP_AnimGraphNode_TransitionResult_7C0B1D244C2CB96DD63424A8145F14DB();
		void AnimNotify_ReturnToIdle();
		void ExecuteUbergraph_BaseballAICatcher_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
