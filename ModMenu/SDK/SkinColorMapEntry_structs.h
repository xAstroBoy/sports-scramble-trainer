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
	 * UserDefinedStruct SkinColorMapEntry.SkinColorMapEntry
	 * Size -> 0x0020
	 */
	struct FSkinColorMapEntry
	{
	public:
		class FName                                                SkinColorBase_2_90AD60704C4B5D0DB7AF3C9AFAA013F4;        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SkinColorShadow_4_37B7E7F4499161E9F3068E8A1EDF3B78;      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EarlyAccess_8_287D7C1E40E34F90F6A1FFA13E6D258C;          // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EAvatarMaterialOverride                                    MaterialOverride_11_EB5C7FEF4A872779A2BBA7BC645D5898;    // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AiDisabled_6_9573FA5E4E90C9398E335FA84A90A6EC;           // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EREE[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SkinPack_14_2F52F7A44FDCB5455DCE5FA7A35093F8;            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
