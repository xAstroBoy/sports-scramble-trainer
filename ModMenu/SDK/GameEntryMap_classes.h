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

// BlueprintGeneratedClass GameEntryMap.GameEntryMap_C
// 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
class AGameEntryMap_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0330(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class APostProcessVolume*                          PostProcessVolume_RiftS_4_ExecuteUbergraph_GameEntryMap_RefProperty; // 0x0338(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                          PostProcessVolume_Rift_ExecuteUbergraph_GameEntryMap_RefProperty; // 0x0340(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GameEntryMap.GameEntryMap_C");
		return ptr;
	}



	void PlayerReady_(bool* Ready);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_GameEntryMap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
