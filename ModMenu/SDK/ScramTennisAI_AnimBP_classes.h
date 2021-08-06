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

// AnimBlueprintGeneratedClass ScramTennisAI_AnimBP.ScramTennisAI_AnimBP_C
// 0x1528 (FullSize[0x18B8] - InheritedSize[0x0390])
class UScramTennisAI_AnimBP_C : public UTennisAIAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0390(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D8CF000B45497057D5AD81A98BF35CCA;       // 0x0398(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1EED930C4DA9F71AFF661AB302A6574E; // 0x03D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_47578A91436C6A8D1A8A3C86D2F9D591; // 0x0420(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DEB565A049AAB00EE9DA1E92673C4C31; // 0x0468(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0041FF4B446F72C3DC0F3A8A49BD3F3F; // 0x04B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E1BD907B40E5F5510CD5ECB2A9A7E03A; // 0x04F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_40ACD8CF4C70AA8DBC7EC1BB45F31950; // 0x0540(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DA72B4014E984EF3ECBCFEA301449D35; // 0x0588(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_84C8503241AEEEDCBD4B6ABF51C270BF; // 0x05D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_727962294C8D35C6192B1B8D3C45DFCD; // 0x0618(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_5EC2169C4F9BEEFD7012299F250573AD; // 0x0660(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80F8DB9142D0167D7F5B4084D4962035; // 0x06A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2238B3CF4616494924C233BD01A29C6A; // 0x06F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_842300A346BAE43059FD279E90A8F77A; // 0x0738(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_42C771014E37E27F270B6C94FDA6848C; // 0x0780(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E7272BDA4A53884BCB1538931B25F97B; // 0x07C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_502F385D4E161A445C137B9150AF5C8B; // 0x0810(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_08D22B96459EA0DD65D4EDB746F10DE5; // 0x0858(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FE2F3724607C34F97F350ABA907E2EC; // 0x08A0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FB71761446C8C36878A467ABAEBE1552; // 0x08E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BC55658C444E08F580C33EA4DFB7BB2D; // 0x0930(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7915A8134C2C7D5E24CB6A8760CA8EEB; // 0x0978(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_E47B495E4607AF9E7F7B17867A0C0163; // 0x0A18(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_456C250F4C27F5FF015ACF855C09F008; // 0x0A58(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C77ABCB248C4D1516F3DA5879BD8E818; // 0x0AF8(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1CA0BC45413DFFC361EB638722C28BF9; // 0x0B98(0x00A0)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_D51397D947B1F1689F3A86A729F2A060; // 0x0C38(0x00D0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_7FA18C314063C6F27F2689AD0AA2CA5F; // 0x0D08(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7DDFAB0B4D8BA17FAFA2D3A931593BBE; // 0x0D48(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_F9786E514FC41D6EB286118375A698CA; // 0x0DE8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B90DF9804FF08E092FFE97A239EC9EFA; // 0x0E28(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_0C6BCFBB4C73D3F217F7CAB76CCD0757; // 0x0EC8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_059C872F47F5E67B0A807A966BAE528B; // 0x0F08(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_70F0C50F4D9553D714BA7F869E8F23E6; // 0x0FA8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4027B029424807FE3A064DBB5AE4022D; // 0x0FE8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_2FBFF73648237A131CE3CC9AADB79169; // 0x1088(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F5FD7A6C413DAC22A95A34872FBB5C70; // 0x10C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_11733AF3453048C3FAF55EB2345E55AA; // 0x1168(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB7A3187442F735A3A6C4389D0BA1BB1; // 0x11A8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_31DF338845FFD2AC9EB0F7831D1DE8EF; // 0x1248(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_46DA403742E5BA15C4340ABAC8193664; // 0x1288(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_296CEA6F423568408DD6AE9287FF4C2B; // 0x1328(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_8EDB34BF4C57619A550CD0BCCE455A81; // 0x1368(0x0040)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_B71F9F7E4DEF00AC1CC0988D62B757E1; // 0x13A8(0x0040)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_E184F4714C6604D3CF64679C60D852F8; // 0x13E8(0x0138)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_ECCC1CAC498D8A231D94D28DBE0491AA; // 0x1520(0x00F8)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09B7EAC1401CD98D218C628C804B7DF2; // 0x1618(0x00A0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5B7F1644385FF3CBAACEEB66477BD77; // 0x16B8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_D0349B194E52AB832B4102A3AD9252EE; // 0x1758(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_AD524CEA4ED83CB873F09793BBD6DF5F; // 0x1798(0x00E0)
	TArray<class UAnimSequence*>                       Forehands;                                                 // 0x1878(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       Reactions;                                                 // 0x1888(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimSequence*>                       Backhands;                                                 // 0x1898(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    PlaySwingFX;                                               // 0x18A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ScramTennisAI_AnimBP.ScramTennisAI_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_42C771014E37E27F270B6C94FDA6848C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_E7272BDA4A53884BCB1538931B25F97B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_5EC2169C4F9BEEFD7012299F250573AD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_502F385D4E161A445C137B9150AF5C8B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_08D22B96459EA0DD65D4EDB746F10DE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_3FE2F3724607C34F97F350ABA907E2EC();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_FB71761446C8C36878A467ABAEBE1552();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_727962294C8D35C6192B1B8D3C45DFCD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_BlendListByInt_D51397D947B1F1689F3A86A729F2A060();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_84C8503241AEEEDCBD4B6ABF51C270BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_SequencePlayer_7DDFAB0B4D8BA17FAFA2D3A931593BBE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_DA72B4014E984EF3ECBCFEA301449D35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_SequencePlayer_AB7A3187442F735A3A6C4389D0BA1BB1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_40ACD8CF4C70AA8DBC7EC1BB45F31950();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_SequencePlayer_46DA403742E5BA15C4340ABAC8193664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_E1BD907B40E5F5510CD5ECB2A9A7E03A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_842300A346BAE43059FD279E90A8F77A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ScramTennisAI_AnimBP_AnimGraphNode_TransitionResult_0041FF4B446F72C3DC0F3A8A49BD3F3F();
	void AnimNotify_AnimStarted();
	void AnimNotify_TN_AI_Backhand();
	void AnimNotify_TN_AI_Forehand();
	void AnimNotify_TN_AI_Service();
	void ExecuteUbergraph_ScramTennisAI_AnimBP(int EntryPoint);
	void PlaySwingFX__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
