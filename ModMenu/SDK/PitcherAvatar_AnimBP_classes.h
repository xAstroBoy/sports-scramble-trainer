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
	 * AnimBlueprintGeneratedClass PitcherAvatar_AnimBP.PitcherAvatar_AnimBP_C
	 * Size -> 0x1730 (FullSize[0x1B80] - InheritedSize[0x0450])
	 */
	class UPitcherAvatar_AnimBP_C : public UPitchingAvatarAnimInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0450(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Root                                      AnimGraphNode_Root_E301D9704F5FA54186955F82D60D17EE;     // 0x0458(0x0040)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_B9F5CF23483C625D0C96FEB37F79D00F; // 0x0498(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8ED97554415678D967F8B79EEC049655; // 0x04E0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_75FC6EF541125206068677B96C3E934F; // 0x0528(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22617D6F4C59B8D263DABFB5476201BE; // 0x0570(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_56E56C914EDA1FF9A1592DB18F5071B0; // 0x05B8(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_57DF653548059FD006A8D5A02FA32B1E; // 0x0600(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6E7548FD4F53355B0DFFC98530B65D58; // 0x0648(0x0048)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_E5FCFF3A4ECD20835218C0AC224F0803; // 0x0690(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_AB69D1044491E62E431BC8B8F464FED4; // 0x0730(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8BC715454E1DD1F74CF404826653F0C5; // 0x0770(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_9A1A5671496D2393BE3D43B37C80EBD9; // 0x08A8(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_1DB73A674DF6D2CCC2896593463A743D; // 0x09E0(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_D27FE30A485B097EFD45BE9B05180E24; // 0x0B18(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_E0D452284DE6BCE8F40DC6A5AA106F72; // 0x0C50(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3DD92CF74D0B8870E238C2AF159E8E79; // 0x0D88(0x0138)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_E7B39D214F36959D35B4DDA46C86EF4C; // 0x0EC0(0x0040)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_6E9FC3ED4D3F921EF20280970D14FEDC; // 0x0F00(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7AE71A4941B56BB070A27AB68FDCAEDE; // 0x0F40(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_96C1BFC747358B78CA55858D1BC2B38B; // 0x0FE0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_F491080E47B2570437C8079A561949C7; // 0x1020(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_B06AFF084F247250C6BCF2BACEFF85C3; // 0x10C0(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7109C5AD4CB42E3463910A8ADA404026; // 0x1100(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_DEBA625E45D6BB94DB675E88E4C40E79; // 0x11A0(0x0040)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_C93C92AB4222136509FAB9A3FEFA3AC6; // 0x11E0(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_65CA6FA547D028E223B61689E044AE41; // 0x1318(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_045329F943DEA4FD1FC652923F0C4683; // 0x1450(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7FD155CA4291B74AC7336D96CF4B7CE9; // 0x1588(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_DE49509F439FD9FFFF4480BFA5511065; // 0x16C0(0x0138)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_D60BD2A04452BD823145A6B7F001EEB9; // 0x17F8(0x0138)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace_4881CC374C246423887A0FB229373467; // 0x1930(0x0040)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace_3E2ED9AE42286FBBCA19899DA90A22EB; // 0x1970(0x0040)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4302A7D84F12297461F28090A17157F6; // 0x19B0(0x00A0)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_09C6D34F45A9749D41A726A544453E76; // 0x1A50(0x0040)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_73E2CB13424529A208A0688986199ADD; // 0x1A90(0x00E0)
		class UAnimSequenceBase*                                   LeftMittCatch;                                           // 0x1B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimSequenceBase*                                   RightMittCatch;                                          // 0x1B78(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

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
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
