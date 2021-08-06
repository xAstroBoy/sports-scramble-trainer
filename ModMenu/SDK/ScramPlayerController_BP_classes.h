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

// BlueprintGeneratedClass ScramPlayerController_BP.ScramPlayerController_BP_C
// 0x0040 (FullSize[0x0730] - InheritedSize[0x06F0])
class AScramPlayerController_BP_C : public AScramPlayerController
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x06F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    PauseStart;                                                // 0x06F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    PauseEnd;                                                  // 0x0708(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UScramGameInstance_C*                        GameInstance;                                              // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANoPause_BP_C*                               NoPauseactor;                                              // 0x0720(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFloaterUi_C*                                Floater;                                                   // 0x0728(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScramPlayerController_BP.ScramPlayerController_BP_C");
		return ptr;
	}



	void HideSlowConnection();
	void ShowSlowConnection();
	void SpawnUIFloater(bool NoPause, const struct FText& Error, bool SlowConnection);
	void IsMultiplayerQueued(bool* MultiplayerQueued);
	void DoesPauseManagerExist_(bool* Exists);
	void IsPauseRestricted(bool* restricted);
	void SpawnNoPause();
	void Initialize();
	void UserConstructionScript();
	void InpActEvt_Pause_K2Node_InputActionEvent_1(const struct FKey& Key);
	void PauseGame(bool CheckIfPausedAllowed);
	void ReceiveBeginPlay();
	void UnpauseGame();
	void PauseEndNotify();
	void PauseStartNotify();
	void QueuedPauseGame();
	void QueuedUnpauseGame();
	void Server_ClientCanStartTravel(class AGameHandlerOnline_C* GameHandler);
	void Server_ClientCanBeginMatch(class AGameHandlerOnline_C* Game_Handler);
	void UpdateSlowConnectionDisplay(bool isOverThreshold);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_ScramPlayerController_BP(int EntryPoint);
	void PauseEnd__DelegateSignature();
	void PauseStart__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
