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
	 * BlueprintGeneratedClass BaseballAIPitcher_TrainingNoImbued_Blueprint.BaseballAIPitcher_TrainingNoImbued_Blueprint_C
	 * Size -> 0x002F (FullSize[0x0701] - InheritedSize[0x06D2])
	 */
	class ABaseballAIPitcher_TrainingNoImbued_Blueprint_C : public ABaseballAIPitcher_Blueprint_C
	{
	public:
		unsigned char                                              UnknownData_NLLL[0x6];                                   // 0x06D2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		float                                                      TimelineDespawn_ScaleDown_C7149C0040E1A38C38D2C1A5FB2AEE5B; // 0x06E0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TimelineDespawn__Direction_C7149C0040E1A38C38D2C1A5FB2AEE5B; // 0x06E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RSV9[0x3];                                   // 0x06E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TimelineDespawn;                                         // 0x06E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TimelineSpawnIn_ScaleUp_B77B037344D1619874D1DA973C0FBEC4; // 0x06F0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         TimelineSpawnIn__Direction_B77B037344D1619874D1DA973C0FBEC4; // 0x06F4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_URDX[0x3];                                   // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  TimelineSpawnIn;                                         // 0x06F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseSpawnDespawnVFX;                                      // 0x0700(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UserConstructionScript();
		void TimelineSpawnIn__FinishedFunc();
		void TimelineSpawnIn__UpdateFunc();
		void TimelineDespawn__FinishedFunc();
		void TimelineDespawn__UpdateFunc();
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void DespawnPitcher();
		void ExecuteUbergraph_BaseballAIPitcher_TrainingNoImbued_Blueprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
