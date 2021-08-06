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

// BlueprintGeneratedClass TN_ChallengeBall_Red.TN_ChallengeBall_Red_C
// 0x000F (FullSize[0x1198] - InheritedSize[0x1189])
class ATN_ChallengeBall_Red_C : public ATN_ChallengeBall_Base_C
{
public:
	unsigned char                                      UnknownData_T2L5[0x7];                                     // 0x1189(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x1190(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_ChallengeBall_Red.TN_ChallengeBall_Red_C");
		return ptr;
	}



	void UserConstructionScript();
	void UpdateMesh();
	void ExecuteUbergraph_TN_ChallengeBall_Red(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
