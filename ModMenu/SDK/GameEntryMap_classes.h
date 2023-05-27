#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass GameEntryMap.GameEntryMap_C
	 * Size -> 0x0018 (FullSize[0x0348] - InheritedSize[0x0330])
	 */
	class AGameEntryMap_C : public ALevelScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0330(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class APostProcessVolume*                                  PostProcessVolume_RiftS_4_ExecuteUbergraph_GameEntryMap_RefProperty; // 0x0338(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APostProcessVolume*                                  PostProcessVolume_Rift_ExecuteUbergraph_GameEntryMap_RefProperty; // 0x0340(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayerReady(bool* Ready);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_GameEntryMap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
