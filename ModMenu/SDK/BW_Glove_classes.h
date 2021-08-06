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

// BlueprintGeneratedClass BW_Glove.BW_Glove_C
// 0x0068 (FullSize[0x0B98] - InheritedSize[0x0B30])
class ABW_Glove_C : public ABowlingGlove
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B30(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    FinalizeThrow;                                             // 0x0B38(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<class UClass*, class USoundBase*>             SfxMap;                                                    // 0x0B48(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_Glove.BW_Glove_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void BallThrown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ReceiveBeginPlay();
	void OnThrowFinalized(class ABowlingBall* Ball);
	void DestroyPrimitive(bool playOut, float Delay);
	void ExecuteUbergraph_BW_Glove(int EntryPoint);
	void FinalizeThrow__DelegateSignature(class ABowlingBall* BowlingBall);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
