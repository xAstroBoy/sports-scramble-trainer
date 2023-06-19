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
	 * BlueprintGeneratedClass BW_VibroBall.BW_VibroBall_C
	 * Size -> 0x0018 (FullSize[0x0F19] - InheritedSize[0x0F01])
	 */
	class ABW_VibroBall_C : public ABW_Ball_Base_C
	{
	public:
		unsigned char                                              UnknownData_A0UO[0x7];                                   // 0x0F01(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0F08(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAudioComponent*                                     Audio_LoopingVibroball;                                  // 0x0F10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayingSound;                                            // 0x0F18(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void VibroBallGrabbed(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void VibroBallHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_BW_VibroBall(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
