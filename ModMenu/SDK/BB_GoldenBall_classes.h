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

// BlueprintGeneratedClass BB_GoldenBall.BB_GoldenBall_C
// 0x0008 (FullSize[0x1040] - InheritedSize[0x1038])
class ABB_GoldenBall_C : public ABB_Ball_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1038(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_GoldenBall.BB_GoldenBall_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void GoldenBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
	void ExecuteUbergraph_BB_GoldenBall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
