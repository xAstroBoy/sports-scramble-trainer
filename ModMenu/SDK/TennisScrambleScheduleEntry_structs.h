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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct TennisScrambleScheduleEntry.TennisScrambleScheduleEntry
	 * Size -> 0x0070
	 */
	struct FTennisScrambleScheduleEntry
	{
	public:
		int32_t                                                    Point_2_606524BB46E481C9BC8347BAA8EB9FA0;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InitialTargetCount_10_962F8DBA4A2057A83EFCF586B17CBC98;  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxTargetCount_12_17D80791417BCA78B246D684789FD47F;      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4LKH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FScramblerTargetSet>                         ScrambleSetInitial_26_70766DF74271363BF67D4AB086BDC0C6;  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<struct FScramblerTargetSet>                         ScrambleSetReinforcements_30_DFB642D0449B679DF869AF80B539008A; // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      ReinforcementDelay_16_C5E783894E849A09F55B9EB15869F217;  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReinforcementCountMin_33_BEE37EE74573AA5ADBEBEDB49041AC74; // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ReinforcementCountMax_34_F94954904F22012C13A335A41B9B846F; // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DDK6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            SpawnLocationsOverrideInitial_35_856434B0465155DAEA75A8B40D4899EB; // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<int32_t>                                            SpawnLocationsOverrideReinforcements_38_16F05BDA4E8D06943456EBB303EADF22; // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor
		TArray<class UClass*>                                      DisabledClasses_42_1FA4B6994B461E6C229A6CB0D224F349;     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
