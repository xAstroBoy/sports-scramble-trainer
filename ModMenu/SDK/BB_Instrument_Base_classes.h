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

// BlueprintGeneratedClass BB_Instrument_Base.BB_Instrument_Base_C
// 0x0098 (FullSize[0x0FC8] - InheritedSize[0x0F30])
class ABB_Instrument_Base_C : public ABaseballInstrument
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AudioBallHit;                                              // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Grow_Scale_65FADBF8419D91AF5F7C7EB924AC3EB5;               // 0x0F40(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Grow__Direction_65FADBF8419D91AF5F7C7EB924AC3EB5;          // 0x0F44(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_F1GN[0x3];                                     // 0x0F45(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Grow;                                                      // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Shrink_Scale_363674504D70168F86AFCBBCB534288B;             // 0x0F50(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Shrink__Direction_363674504D70168F86AFCBBCB534288B;        // 0x0F54(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_YFXL[0x3];                                     // 0x0F55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Shrink;                                                    // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InitialScale;                                              // 0x0F60(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SUI7[0x4];                                     // 0x0F6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  DefaultBallHItSFX;                                         // 0x0F70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  DefaultBallHItHardSFX;                                     // 0x0F78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HardHitSpeedThreshold;                                     // 0x0F80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumHitSpeedThreshold;                                  // 0x0F84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInstrumentSFXOverride>              SFXOverrides;                                              // 0x0F88(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               InitialPhysicsOff;                                         // 0x0F98(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	SportsScramble_EScramInstrumentHitPhysics          OldHitPhysics;                                             // 0x0F99(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HPKH[0x6];                                     // 0x0F9A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      SFX_SelectedInstrument[0x28];                              // 0x0F9A(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BB_Instrument_Base.BB_Instrument_Base_C.SFX_SelectedInstrument


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Instrument_Base.BB_Instrument_Base_C");
		return ptr;
	}



	void BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback);
	void UpdateMesh();
	void SelectRandomReplacement();
	void PlaySpawnFX();
	void SetSFXOverride(class UClass* BallClass, bool HardHit);
	void PlayBallHitSound(float BallSpeed, class UClass* BallClass);
	void InitInstrument();
	void UserConstructionScript();
	void Grow__FinishedFunc();
	void Grow__UpdateFunc();
	void Shrink__FinishedFunc();
	void Shrink__UpdateFunc();
	void OnLoaded_427B66CA4A4B8B64A37F659956E60B75(class UObject* Loaded);
	void ShowInstrument();
	void ShrinkRemoveInstrument();
	void ReceiveBeginPlay();
	void InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void DestroyPrimitive(bool playOut, float Delay);
	void InstrumentSelected();
	void SpawnEffect(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void DisableSpawnFX();
	void InstrumentHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ExecuteUbergraph_BB_Instrument_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
