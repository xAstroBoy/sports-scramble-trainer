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

// AnimBlueprintGeneratedClass TN_PoolNoodle_AnimBP.TN_PoolNoodle_AnimBP_C
// 0x044D (FullSize[0x080D] - InheritedSize[0x03C0])
class UTN_PoolNoodle_AnimBP_C : public UScramInstrumentAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_889EAB444C2B7A342BA706AEB7D5E159;       // 0x03C8(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D434F9B74D45B166601510ABD5A57037; // 0x0408(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_566FEDD54F70BC9A235DC99039328B14; // 0x0450(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FDF7FB794DC9C393308AAA9B90DF8933; // 0x0578(0x0040)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0DD4EC784305F70367F0CF87091FCB63; // 0x05B8(0x0128)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_75C6862B40EE8AF166008FB1389FD6A9; // 0x06E0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_4C29A70A4B23025F22FDD2B310F1E331; // 0x0720(0x00E0)
	float                                              GravityForceAlpha;                                         // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GravityContribution;                                       // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SpeedCotnribution;                                         // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseGravity;                                                // 0x080C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TN_PoolNoodle_AnimBP.TN_PoolNoodle_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_PoolNoodle_AnimBP_AnimGraphNode_TransitionResult_D434F9B74D45B166601510ABD5A57037();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_PoolNoodle_AnimBP_AnimGraphNode_BlendSpacePlayer_566FEDD54F70BC9A235DC99039328B14();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TN_PoolNoodle_AnimBP_AnimGraphNode_BlendSpacePlayer_0DD4EC784305F70367F0CF87091FCB63();
	void BlueprintBeginPlay();
	void ExecuteUbergraph_TN_PoolNoodle_AnimBP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
