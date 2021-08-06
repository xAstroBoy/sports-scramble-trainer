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

// BlueprintGeneratedClass BatterAvatar_BP.BatterAvatar_BP_C
// 0x0018 (FullSize[0x0428] - InheritedSize[0x0410])
class ABatterAvatar_BP_C : public ABattingAvatar
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0410(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              Timeline_0_Alpha_2AFEBB70439211A9A855EC8A9FB22FE3;         // 0x0418(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_2AFEBB70439211A9A855EC8A9FB22FE3;    // 0x041C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9BUS[0x3];                                     // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BatterAvatar_BP.BatterAvatar_BP_C");
		return ptr;
	}



	struct FLinearColor GetGlobalColor(const struct FName& globalColorName);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void RevealAvatar_BP(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ScaleUp();
	void ExecuteUbergraph_BatterAvatar_BP(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
