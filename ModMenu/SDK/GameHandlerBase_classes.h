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

// BlueprintGeneratedClass GameHandlerBase.GameHandlerBase_C
// 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
class AGameHandlerBase_C : public AActor
{
public:
	class USceneComponent*                             Root;                                                      // 0x0328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    GameOver;                                                  // 0x0330(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    TeleportThePlayArea;                                       // 0x0340(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameHandlerBase.GameHandlerBase_C");
		return ptr;
	}



	void PreMenuCleanup(bool* empty_return);
	void QuitGame();
	void UserConstructionScript();
	void TeleportThePlayArea__DelegateSignature(SportsScramble_EScramSport Sport, bool TrainingLevel, const struct FName& LevelOverride);
	void GameOver__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
