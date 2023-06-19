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
	 * BlueprintGeneratedClass TennisAvatar_BP.TennisAvatar_BP_C
	 * Size -> 0x0020 (FullSize[0x0430] - InheritedSize[0x0410])
	 */
	class ATennisAvatar_BP_C : public ATennisAvatar
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UScramBounceLighting*                                ScramBounceLighting;                                     // 0x0418(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_ScaleUp_Alpha_CCE23B064CEA4DBCF9BE6BAE7C5A142E; // 0x0420(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_ScaleUp__Direction_CCE23B064CEA4DBCF9BE6BAE7C5A142E; // 0x0424(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_M588[0x3];                                   // 0x0425(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_ScaleUp;                                        // 0x0428(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CanPlayInstrumentVFX(class AScramPlayerHand* Hand);
		void UserConstructionScript();
		void Timeline_ScaleUp__FinishedFunc();
		void Timeline_ScaleUp__UpdateFunc();
		void ScaleUp();
		void TryInitializeMaterial();
		void RevealAvatar();
		void ReceiveBeginPlay();
		void CapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void PlayVFX();
		void ExecuteUbergraph_TennisAvatar_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
