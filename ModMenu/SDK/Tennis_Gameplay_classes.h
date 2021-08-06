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

// BlueprintGeneratedClass Tennis_Gameplay.Tennis_Gameplay_C
// 0x0020 (FullSize[0x0350] - InheritedSize[0x0330])
class ATennis_Gameplay_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                      SportDebugMenu;                                            // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                          PostProcessVolume_Rift_ExecuteUbergraph_Tennis_Gameplay_RefProperty; // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                          PostProcessVolume_RiftS_4_ExecuteUbergraph_Tennis_Gameplay_RefProperty; // 0x0348(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tennis_Gameplay.Tennis_Gameplay_C");
		return ptr;
	}



	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void SpawnMenu(const struct FName& NewGeoLevel);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Tennis_Gameplay(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
