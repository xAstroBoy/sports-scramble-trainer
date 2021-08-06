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

// BlueprintGeneratedClass ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C
// 0x000F (FullSize[0x0460] - InheritedSize[0x0451])
class AScramPlayerHand_BP_Right_C : public AScramPlayerHand_BP_C
{
public:
	unsigned char                                      UnknownData_YTV3[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0458(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerHand_BP_Right.ScramPlayerHand_BP_Right_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ScramPlayerHand_BP_Right(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
