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
	 * BlueprintGeneratedClass BB_Pineapple.BB_Pineapple_C
	 * Size -> 0x0008 (FullSize[0x1040] - InheritedSize[0x1038])
	 */
	class ABB_Pineapple_C : public ABB_Ball_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void ImpactScripting(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ExecuteUbergraph_BB_Pineapple(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
