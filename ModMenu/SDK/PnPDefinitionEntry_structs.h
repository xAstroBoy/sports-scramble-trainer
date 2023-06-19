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
	 * UserDefinedStruct PnPDefinitionEntry.PnpDefinitionEntry
	 * Size -> 0x0069
	 */
	struct FPnpDefinitionEntry
	{
	public:
		EScramSport                                                Sport_2_91C890A94F86972300BB239BC0F160C8;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_01GG[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PnPGameClass_21_E1996BE849B3759CFDC40A88588A6C1D;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Title_8_BEFC0FED49F408C0E395AAA079E79F5F;                // 0x0010(0x0018) Edit, BlueprintVisible
		class FText                                                Description_10_7FA0F7514C564A6F57B95790A7CE8882;         // 0x0028(0x0018) Edit, BlueprintVisible
		int32_t                                                    UnlockOverride_13_F13694EB49BB7C3D934546BD4D6C14C5;      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5K2Q[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          PreviewImage_17_26A2E52A4BA8AFE5BF71D299064327E8;        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                SpawnLocOverride_24_81A902FB4F0561AE812483AB0C6222B1;    // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseStandardArena_26_67CB4B434426C3FFA6D82C8971059239;    // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LB8O[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelOverride_29_28D51240433E631649EC3784FED3217E;       // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EPnpGameType                                               PnpGameType_33_5EAE034C4A7A2DB12879FBAE7D38D298;         // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
