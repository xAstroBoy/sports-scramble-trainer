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

// BlueprintGeneratedClass BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C
// 0x001F (FullSize[0x0460] - InheritedSize[0x0441])
class ABB_Minigame_Pitching_Practice_C : public ABB_Minigame_Pitching_Base_C
{
public:
	unsigned char                                      UnknownData_L8ZT[0x7];                                     // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AServeLauncher_C*                            ServeLauncher;                                             // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PracticeDelayBeforeThrow;                                  // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PracticeDelayAfterThrow;                                   // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BB_Minigame_Pitching_Practice.BB_Minigame_Pitching_Practice_C");
		return ptr;
	}



	void DisableScoreOnWindows();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ThrowPlayerTheBall();
	void PlayerTeleportComplete();
	void NoTeleport();
	void ExecuteUbergraph_BB_Minigame_Pitching_Practice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
