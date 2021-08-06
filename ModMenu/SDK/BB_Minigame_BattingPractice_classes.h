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

// BlueprintGeneratedClass BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C
// 0x000C (FullSize[0x043C] - InheritedSize[0x0430])
class ABB_Minigame_BattingPractice_C : public ABB_Minigame_Batting_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0430(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              DelayOnPitches;                                            // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_BattingPractice.BB_Minigame_BattingPractice_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BB_Minigame_BattingPractice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
