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

// BlueprintGeneratedClass TN_AcceleratorBall.TN_AcceleratorBall_C
// 0x0014 (FullSize[0x116C] - InheritedSize[0x1158])
class ATN_AcceleratorBall_C : public ATN_Ball_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1158(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              MaxRacketImpulse_1;                                        // 0x1160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinRacketImpulse_1;                                        // 0x1164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PitchMultiplier;                                           // 0x1168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_AcceleratorBall.TN_AcceleratorBall_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void PlayChargedFX(bool NoHitSFX);
	void PlayChargedSliceFX();
	void ExecuteUbergraph_TN_AcceleratorBall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
