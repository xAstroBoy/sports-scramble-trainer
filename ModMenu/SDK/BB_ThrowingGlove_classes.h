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
	 * BlueprintGeneratedClass BB_ThrowingGlove.BB_ThrowingGlove_C
	 * Size -> 0x0008 (FullSize[0x0B78] - InheritedSize[0x0B70])
	 */
	class ABB_ThrowingGlove_C : public ABaseballThrowingGlove
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B70(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void BallThrown(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DestroyPrimitive(bool playOut, float Delay);
		void ExecuteUbergraph_BB_ThrowingGlove(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
