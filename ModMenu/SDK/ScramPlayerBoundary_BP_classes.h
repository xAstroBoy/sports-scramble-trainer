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
	 * BlueprintGeneratedClass ScramPlayerBoundary_BP.ScramPlayerBoundary_BP_C
	 * Size -> 0x0010 (FullSize[0x0428] - InheritedSize[0x0418])
	 */
	class AScramPlayerBoundary_BP_C : public AScramPlayerBoundary
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0418(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScramGameInstance_C*                                GameInstance;                                            // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void OCDemo_SetupSmallPlayArea();
		void OCDemo_SetupLargePlayArea();
		void ReceiveBeginPlay();
		void HideBoundary();
		void UnhideBoundary();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_ScramPlayerBoundary_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
