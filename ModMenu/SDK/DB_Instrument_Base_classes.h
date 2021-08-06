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

// BlueprintGeneratedClass DB_Instrument_Base.DB_Instrument_Base_C
// 0x006A (FullSize[0x0DAA] - InheritedSize[0x0D40])
class ADB_Instrument_Base_C : public ADodgeballInstrument
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                             AudioBallHit;                                              // 0x0D48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Grow_Scale_B0F8A0DC4B690B959BF5D69DC73F0AB2;               // 0x0D50(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Grow__Direction_B0F8A0DC4B690B959BF5D69DC73F0AB2;          // 0x0D54(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_OKS7[0x3];                                     // 0x0D55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Grow;                                                      // 0x0D58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Shrink_Scale_EA95E14D4B3913E8ED8DD1939D3C6505;             // 0x0D60(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Shrink__Direction_EA95E14D4B3913E8ED8DD1939D3C6505;        // 0x0D64(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KWW0[0x3];                                     // 0x0D65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Shrink;                                                    // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InitialScale;                                              // 0x0D70(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MJKD[0x4];                                     // 0x0D7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USoundBase*                                  DefaultBallHItSFX;                                         // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                                  DefaultBallHItHardSFX;                                     // 0x0D88(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HardHitSpeedThreshold;                                     // 0x0D90(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinimumHitSpeedThreshold;                                  // 0x0D94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInstrumentSFXOverride>              SFXOverrides;                                              // 0x0D98(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               InitialPhysicsOff;                                         // 0x0DA8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	SportsScramble_EScramInstrumentHitPhysics          OldHitPhysics;                                             // 0x0DA9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DB_Instrument_Base.DB_Instrument_Base_C");
		return ptr;
	}



	void BallHitRacket(float BallSpeed, class UClass* BallClass, class AScramBall* Ball, bool* Callback);
	void SetSFXOverride(class UClass* BallClass, bool HardHit);
	void PlayBallHitSound(float BallSpeed, class UClass* BallClass);
	void InitInstrument();
	void UserConstructionScript();
	void Grow__FinishedFunc();
	void Grow__UpdateFunc();
	void Shrink__FinishedFunc();
	void Shrink__UpdateFunc();
	void ShowInstrument();
	void ShrinkRemoveInstrument();
	void ReceiveBeginPlay();
	void InstrumentReleased(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void DestroyPrimitive(bool playOut, float Delay);
	void ExecuteUbergraph_DB_Instrument_Base(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
