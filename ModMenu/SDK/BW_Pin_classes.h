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

// BlueprintGeneratedClass BW_Pin.BW_Pin_C
// 0x0052 (FullSize[0x0972] - InheritedSize[0x0920])
class ABW_Pin_C : public ABowlingPin
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0920(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UInstancedMesh*                              InstancedMesh;                                             // 0x0928(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Shrink_Scale_D46F3A234E89FD8FB05F328799728497;    // 0x0930(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Shrink__Direction_D46F3A234E89FD8FB05F328799728497; // 0x0934(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IH6U[0x3];                                     // 0x0935(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Shrink;                                           // 0x0938(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InitialScale;                                              // 0x0940(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OO6H[0x4];                                     // 0x094C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABW_Pinsetter_C*                             pinsetter;                                                 // 0x0950(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               Player1;                                                   // 0x0958(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_WIDS[0x7];                                     // 0x0959(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ABW_Ball_Base_C*                             InstigatingBall;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABowlingAlley_BP_C*                          Alley;                                                     // 0x0968(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               SinglePinSound;                                            // 0x0970(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               ExtraPinsLane;                                             // 0x0971(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Pin.BW_Pin_C");
		return ptr;
	}



	void Exploded(class AActor* Instigator, const struct FVector& LinearImpulse, const struct FVector& AngularImpulse, bool VelChange, bool* Valid);
	void TrySetInstigatingBall(class AActor* Actor);
	void UserConstructionScript();
	void Timeline_Shrink__FinishedFunc();
	void Timeline_Shrink__UpdateFunc();
	void SM_RemovePin(float Delay);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void PinHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void BonusFX(const struct FVector& Location, int ModifiedScore, bool ModifiedBonus);
	void OnKnockedDown();
	void DestroyPrimitive(bool playOut, float Delay);
	void ServerBonusFX(const struct FVector& Location, int ModifiedScore, bool ModifiedBonus);
	void Multi_RemovePin(float Delay);
	void ExecuteUbergraph_BW_Pin(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
