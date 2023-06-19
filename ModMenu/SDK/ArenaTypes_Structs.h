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
	 * UserDefinedStruct ArenaTypes.ArenaTypes
	 * Size -> 0x0148
	 */
	struct FArenaTypes
	{
	public:
		class FText                                                ButtonText_5_6348712E46EC9C36ACE4D58C1BBCE03A;           // 0x0000(0x0018) Edit, BlueprintVisible
		ELevelType                                                 Type_13_F1722F2E4FDB66C322A7489DD03DCF91;                // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScramSport                                                Sport_20_0E70584E46BA09E58746EBAE5B781A28;               // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UB0S[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          DefaultStartLocation_24_C34EF8364B9D55CE28A7CDA4FD280F8E; // 0x0020(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FBox                                                MinPlayArea_29_9AD9A5FA424C16C76AD65983AAD98EBA;         // 0x0050(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBox                                                MaxPlayArea_31_DF942561498868F79BAF0C8F81C53A80;         // 0x006C(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBox                                                MaxHazardArea_45_BFC944894DE862DEEE614AA192BACB3F;       // 0x0088(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BEGO[0xC];                                   // 0x00A4(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          P2StartLocation_34_10938E8E4990942648AAE696C9E6F096;     // 0x00B0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		struct FBox                                                P2MinPlayArea_37_D7E023924A68EAC26D47F7A898B4FDB6;       // 0x00E0(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBox                                                P2MaxPlayArea_39_3595CFFB47D00ED368DBDBBA56791838;       // 0x00FC(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FBox                                                P2MaxHazardArea_47_CF10CFE440646F3506E2E9869C44C66B;     // 0x0118(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_L8DL[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              LevelString_42_B7A13DBA4F062F2B723B09B14B176033;         // 0x0138(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
