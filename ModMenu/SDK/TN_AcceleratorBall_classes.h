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
	 * BlueprintGeneratedClass TN_AcceleratorBall.TN_AcceleratorBall_C
	 * Size -> 0x0014 (FullSize[0x116C] - InheritedSize[0x1158])
	 */
	class ATN_AcceleratorBall_C : public ATN_Ball_Base_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1158(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      MaxRacketImpulse_1;                                      // 0x1160(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MinRacketImpulse_1;                                      // 0x1164(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PitchMultiplier;                                         // 0x1168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UserConstructionScript();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void PlayChargedFX(bool NoHitSFX);
		void PlayChargedSliceFX();
		void ExecuteUbergraph_TN_AcceleratorBall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
