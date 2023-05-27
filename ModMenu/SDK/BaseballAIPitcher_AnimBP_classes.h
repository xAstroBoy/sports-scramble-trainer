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
	 * AnimBlueprintGeneratedClass BaseballAIPitcher_AnimBP.BaseballAIPitcher_AnimBP_C
	 * Size -> 0x0F48 (FullSize[0x12B8] - InheritedSize[0x0370])
	 */
	class UBaseballAIPitcher_AnimBP_C : public UBaseballPitcherAIAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0370(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_F7E307884E59E6B454B41ABB117A395A;     // 0x0378(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_C7F27FCB4142CB2502B8F9BE1FB5EB47; // 0x03B8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9BCF8A5045048510DB9484B1B525BAD0; // 0x0400(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3E08C4B645CBB17888F55696615748CD; // 0x0448(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B77EDB9E4E7EA88C602B3E8288B5D4E0; // 0x0490(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_247F1359480A488DE6D54E99F5CA07FB; // 0x04D8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4F90E62D4E2577654EB0BA8DD78F2480; // 0x0520(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2673E6A044C7CA7EA00251BEC1EEE426; // 0x0568(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35EAC3124DCE913193DD169AE43083DB; // 0x05B0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_93C15F5342227914E9D2D2BBC504BE1E; // 0x05F8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B5DCFF03418F30645A44D984D5A5B63A; // 0x0640(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9F9447F94B0C6DBC213B09B0A870AE21; // 0x0688(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_675915324757E10C7C001FAD128D0890; // 0x0728(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_775B30C74CD588907739D3BA1FE74054; // 0x0768(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9A6BD9FC4CF42BCFAB084495CEE5C5AE; // 0x0808(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_94ECBC54407EB9AE0E665F80F896F9C5; // 0x0848(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9248CC3742109B3B294119A1A87681C8; // 0x08E8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9038FA3745462810B0DBA68848579DF7; // 0x0928(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_A6F78D6A47A8B92E68B408BBB8DDF1D3; // 0x09C8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_0FBA35BD46BBF1624DDA919B951434EA; // 0x0A08(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_B181417B45F4757E7EFCC1AF41A73E0B; // 0x0AA8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_45D4746C4192F9AB6283AEA3E66F0DAB; // 0x0AE8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_D013EA4C4342CD383AC4909C981E1413; // 0x0B88(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F721E0064431ED53E429FA857E8C77EC; // 0x0BC8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2D7CB3F24493F79064D8A1BA705E0642; // 0x0C68(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_B3E836DA4E643625C8B982AD14D4A2B9; // 0x0CA8(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_B1A9F6C94AB7C579B31FB3AE8CE2CF82; // 0x0CE8(0x0138)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6EAC133C4F1B18269D30FFB0C0AEFB2E; // 0x0E20(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_BCAFBC6B4331779AD23D36AB71D4B40B; // 0x0E60(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4C14F7654512CDB1304210BB554DB54E; // 0x0F00(0x0040)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_76674739498EABD84B8E2D81DD1B0609; // 0x0F40(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_C328E1FC46E659D2366EF9A460726393; // 0x0F80(0x0138)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_9FC672764A001562738477B5A7EF3D2D; // 0x10B8(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7F23F7FB4E2AA43937E4FEBE73DA4174; // 0x10F8(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6F2BA74C4909336D22C105BA466652F4; // 0x1198(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_189C3A174B51C5E1DACDCCBC4C2086B2; // 0x11D8(0x00E0)

	public:
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIPitcher_AnimBP_AnimGraphNode_TransitionResult_93C15F5342227914E9D2D2BBC504BE1E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIPitcher_AnimBP_AnimGraphNode_TransitionResult_247F1359480A488DE6D54E99F5CA07FB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIPitcher_AnimBP_AnimGraphNode_TransitionResult_B5DCFF03418F30645A44D984D5A5B63A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIPitcher_AnimBP_AnimGraphNode_TransitionResult_3E08C4B645CBB17888F55696615748CD();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_BaseballAIPitcher_AnimBP_AnimGraphNode_TransitionResult_9BCF8A5045048510DB9484B1B525BAD0();
		void AnimNotify_AnimStarted();
		void ExecuteUbergraph_BaseballAIPitcher_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
