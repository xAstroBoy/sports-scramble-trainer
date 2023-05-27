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
	 * BlueprintGeneratedClass HitMe.HitMe_C
	 * Size -> 0x0029 (FullSize[0x0371] - InheritedSize[0x0348])
	 */
	class AHitMe_C : public AScramActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0348(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetComponent*                                    Widget;                                                  // 0x0350(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x0358(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_Scale_Alpha_FB3A0E194A64F31BB64B3B9046E705A1;   // 0x0360(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_Scale__Direction_FB3A0E194A64F31BB64B3B9046E705A1; // 0x0364(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YMQT[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_Scale;                                          // 0x0368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GrabMe;                                                  // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn

	public:
		void UserConstructionScript();
		void Timeline_Scale__FinishedFunc();
		void Timeline_Scale__UpdateFunc();
		void ReceiveBeginPlay();
		void Grow();
		void Shrink();
		void ExecuteUbergraph_HitMe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
