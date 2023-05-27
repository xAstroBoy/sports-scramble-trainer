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
	 * BlueprintGeneratedClass BP_Trophy_BB_GoldenGlove.BP_Trophy_BB_GoldenGlove_C
	 * Size -> 0x001C (FullSize[0x03F4] - InheritedSize[0x03D8])
	 */
	class ABP_Trophy_BB_GoldenGlove_C : public ABP_TrophyAward_BaseballBase_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AScramPlayer_BP_C*                                   LocalPlayer;                                             // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AScramPlayerHand*                                    CurrentHand;                                             // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DistanceFieldedThreshold;                                // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void GrabbedBall(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveBeginPlay();
		void CatchEvent(const struct FVector& FielderPosition, class AScramPlayer* Player);
		void ExecuteUbergraph_BP_Trophy_BB_GoldenGlove(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
