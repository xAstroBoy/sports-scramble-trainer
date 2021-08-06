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

// BlueprintGeneratedClass BW_BallReturnSlot.BW_BallReturnSlot_C
// 0x0008 (FullSize[0x03D0] - InheritedSize[0x03C8])
class ABW_BallReturnSlot_C : public ABowlingBallReturnSlot
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BW_BallReturnSlot.BW_BallReturnSlot_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnBallAttached();
	void OnMotionStart();
	void OnMotionStop();
	void ExecuteUbergraph_BW_BallReturnSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
