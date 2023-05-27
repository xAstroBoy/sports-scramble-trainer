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
	 * BlueprintGeneratedClass BowlingAI_Blueprint.BowlingAI_Blueprint_C
	 * Size -> 0x000A (FullSize[0x054A] - InheritedSize[0x0540])
	 */
	class ABowlingAI_Blueprint_C : public AScramBowlingAI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0540(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       Player1;                                                 // 0x0548(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       RandomizeAvatar;                                         // 0x0549(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void RandomizeLook();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BowlingAI_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
