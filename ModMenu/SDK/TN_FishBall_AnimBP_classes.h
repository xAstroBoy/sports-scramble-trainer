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

// AnimBlueprintGeneratedClass TN_FishBall_AnimBP.TN_FishBall_AnimBP_C
// 0x04E8 (FullSize[0x0888] - InheritedSize[0x03A0])
class UTN_FishBall_AnimBP_C : public UScramBallAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_8E1359494DC35E87E0A42DA3745B7A43;       // 0x03A8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2F1D8544441EBA48918D4D8D4ECDADF9; // 0x03E8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_64EA0EA34C1CEAAC57DDD1B398A5934C; // 0x0430(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_01C7BA88452E91511D6984944CC599A8; // 0x0478(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0A55E8D14CE3DB566141BF94677A6D2F; // 0x04C0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5C014AE4B7FE888FE6E71B33F328AC1; // 0x0508(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_6B7FD2BA49F7E4A6BB4090ADDD9503D6; // 0x05A8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFCDEAB64503834EC46D4E822A509AD0; // 0x05E8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3D34D495444DE99197E66FBAE2E2D51F; // 0x0688(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_180A47DC41712D36CE0D1E984DF09B31; // 0x06C8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9479BC1B472E2496BB2751AD1C032042; // 0x0768(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B60709EE4904B783D25472B5D4F68FD3; // 0x07A8(0x00E0)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TN_FishBall_AnimBP.TN_FishBall_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_FishBall_AnimBP_AnimGraphNode_TransitionResult_64EA0EA34C1CEAAC57DDD1B398A5934C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_FishBall_AnimBP_AnimGraphNode_TransitionResult_01C7BA88452E91511D6984944CC599A8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_FishBall_AnimBP_AnimGraphNode_TransitionResult_0A55E8D14CE3DB566141BF94677A6D2F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_FishBall_AnimBP_AnimGraphNode_TransitionResult_2F1D8544441EBA48918D4D8D4ECDADF9();
	void ExecuteUbergraph_TN_FishBall_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
