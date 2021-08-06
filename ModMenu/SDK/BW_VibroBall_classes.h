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

// BlueprintGeneratedClass BW_VibroBall.BW_VibroBall_C
// 0x0018 (FullSize[0x0F19] - InheritedSize[0x0F01])
class ABW_VibroBall_C : public ABW_Ball_Base_C
{
public:
	unsigned char                                      UnknownData_GWOJ[0x7];                                     // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             Audio_LoopingVibroball;                                    // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               PlayingSound;                                              // 0x0F18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_VibroBall.BW_VibroBall_C");
		return ptr;
	}



	void UserConstructionScript();
	void VibroBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void VibroBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_BW_VibroBall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
