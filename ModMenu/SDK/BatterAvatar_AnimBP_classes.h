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
	 * AnimBlueprintGeneratedClass BatterAvatar_AnimBP.BatterAvatar_AnimBP_C
	 * Size -> 0x1078 (FullSize[0x14C8] - InheritedSize[0x0450])
	 */
	class UBatterAvatar_AnimBP_C : public UBattingAvatarAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_5D5531634D7770A2E6EB3080A0D00C4A;     // 0x0458(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36E2A4E54B02504CC8D864A238CF79AE; // 0x0498(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37F051AF4EFC347E4C6A7AAEE46EB81B; // 0x04E0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6CEB92BB49FE447D70DA57AC9D5D0BA3; // 0x0528(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B21478034ACBCB44E94DE48C4E2FAC9F; // 0x0570(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_BF881CDC44093E8F0A5DCC9C2EF890D3; // 0x05B8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_F61AFE85429377E40119F2BE4C51CC3E; // 0x0600(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_1E5570FA4963303D9C86799B05649565; // 0x0648(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_FCFE6F934F7BB1FCACDF56AFC7E10E34; // 0x0690(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_542C91424DD64D4D991C9B9CE32FCDA0; // 0x06D8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3A39ACE640318C0FA6BFB0967976F26B; // 0x0778(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_92C0D5204A917C5A81362381A372E2DE; // 0x07B8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9CDD37174625C25B4E1680A2E08F54C6; // 0x0858(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_636724134C57177082D0B3B9BFFDE519; // 0x0898(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_64EA298A4D8BD14C0C298FA4B2CA8DE7; // 0x0938(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_CD3CAD77405557A28E6E4490D7F89992; // 0x0978(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3179C6EF429E8519CB6653A61C45DF30; // 0x0A18(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_DAD5D4DE41A4A8B843DB06B680D92600; // 0x0A58(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7B6747514DD8A8F758473B9ED5BB9C49; // 0x0AF8(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_E3F7F7AE4C9776A65D9921B6E7B84B50; // 0x0B38(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_DED721724718F5B65D95BF842F81F675; // 0x0C70(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_14785E9A4451702E1E9B61969544FEC1; // 0x0DA8(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6EDF73C145182413AB5FD3B0BE5BF624; // 0x0EE0(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_92745FF5492EB6698733D7BB6D97289D; // 0x1018(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_B141E608473C3A1A011B26B3CF87ED2E; // 0x1150(0x0138)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_DE78D2884E68741B67C95A8BF1BAEF59; // 0x1288(0x0040)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_0587E04F4183FDF0D61326A523D6D0B2; // 0x12C8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_93D1DB4346A0E0A1A1566F951DEF962B; // 0x1308(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_F69A9CF2439AD6CB0FB0CD8F2A8FCB8C; // 0x13A8(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6155DE1C4A1300C607A556B870343999; // 0x13E8(0x00E0)

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
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
