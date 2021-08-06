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

// BlueprintGeneratedClass BP_TrophyAward_Ace.BP_TrophyAward_Ace_C
// 0x000F (FullSize[0x03B8] - InheritedSize[0x03A9])
class ABP_TrophyAward_Ace_C : public ABP_TrophyAward_TennisBase_C
{
public:
	unsigned char                                      UnknownData_J078[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TrophyAward_Ace.BP_TrophyAward_Ace_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnAceEvent();
	void ExecuteUbergraph_BP_TrophyAward_Ace(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
