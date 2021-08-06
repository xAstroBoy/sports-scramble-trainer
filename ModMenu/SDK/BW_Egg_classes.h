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

// BlueprintGeneratedClass BW_Egg.BW_Egg_C
// 0x0059 (FullSize[0x0F5A] - InheritedSize[0x0F01])
class ABW_Egg_C : public ABW_Ball_Base_C
{
public:
	unsigned char                                      UnknownData_YHZD[0x7];                                     // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HatchVFXScale;                                             // 0x0F10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurkeyRotations;                                           // 0x0F14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurkeyOffsets;                                             // 0x0F18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurkeyDelays;                                              // 0x0F1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TurkeyKicks;                                               // 0x0F20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I1XQ[0x4];                                     // 0x0F24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBW_EggHatchParams>                  HatchParams;                                               // 0x0F28(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                                  HatchSFX;                                                  // 0x0F38(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABW_Turkey_C*>                        TurkeyList;                                                // 0x0F40(0x0010) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UParticleSystem*                             HatchVFX;                                                  // 0x0F50(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HatchCalled;                                               // 0x0F58(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HadBowlingAuthority;                                       // 0x0F59(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Egg.BW_Egg_C");
		return ptr;
	}



	void HasHatched(bool* Hatched);
	void Local_Hatch(const struct FMotionState& MotionState);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void HatchCheck(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void HatchFX();
	void Hide_Egg();
	void Turkey_Destroyed(class AScramPrimitiveActor* Primitve_Actor);
	void SM_Hatch(const struct FMotionState& MotionState);
	void Multi_Hatch(const struct FMotionState& MotionState);
	void ExecuteUbergraph_BW_Egg(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
