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

// BlueprintGeneratedClass TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C
// 0x0048 (FullSize[0x0370] - InheritedSize[0x0328])
class ATN_Minigame_ReturnWall_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0328(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                              Scoreboards;                                               // 0x0338(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                              GameElements;                                              // 0x0348(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class ATN_ReturnWall_C*                            GameWall;                                                  // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABallLauncher_C*                             LauncherLeft;                                              // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButtonIcon_C*                               ButtonIcon;                                                // 0x0368(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TN_Minigame_ReturnWall.TN_Minigame_ReturnWall_C");
		return ptr;
	}



	void AddActorToGameElementList(class AActor* Actor, bool* Callback);
	void Shutdown(bool* ShutdownBegun);
	void SpawnGameElements();
	void UpdateScore(int NewScore);
	void Initialize();
	void UserConstructionScript();
	void InpActEvt_A_K2Node_InputActionEvent_1(const struct FKey& Key);
	void ReceiveBeginPlay();
	void DelayDestroy();
	void ReturnWallHit(int Streak);
	void HideNets(const struct FName& NewGeo);
	void AllowPlayerInput();
	void ExecuteUbergraph_TN_Minigame_ReturnWall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
