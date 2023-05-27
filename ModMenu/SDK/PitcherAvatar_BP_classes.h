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
	 * BlueprintGeneratedClass PitcherAvatar_BP.PitcherAvatar_BP_C
	 * Size -> 0x0018 (FullSize[0x0428] - InheritedSize[0x0410])
	 */
	class APitcherAvatar_BP_C : public APitchingAvatar
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0410(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      Timeline_0_Alpha_38EA05164800B04FF556E0BB6899910F;       // 0x0418(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_38EA05164800B04FF556E0BB6899910F;  // 0x041C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9KIH[0x3];                                   // 0x041D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0420(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		struct FLinearColor GetGlobalColor(const class FName& globalColorName);
		void UserConstructionScript();
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void ReceiveBeginPlay();
		void TryInitializeMaterial();
		void RevealAvatar_BP(class UObject* WorldContextObject, class UScramEventBasePayload* Payload);
		void ScaleUp();
		void ExecuteUbergraph_PitcherAvatar_BP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
