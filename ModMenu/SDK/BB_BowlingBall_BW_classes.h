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

// BlueprintGeneratedClass BB_BowlingBall_BW.BB_BowlingBall_BW_C
// 0x000F (FullSize[0x0F10] - InheritedSize[0x0F01])
class ABB_BowlingBall_BW_C : public ABW_Ball_Base_C
{
public:
	unsigned char                                      UnknownData_Q7XO[0x7];                                     // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F08(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_BowlingBall_BW.BB_BowlingBall_BW_C");
		return ptr;
	}



	void UserConstructionScript();
	void UpdateMesh();
	void ExecuteUbergraph_BB_BowlingBall_BW(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
