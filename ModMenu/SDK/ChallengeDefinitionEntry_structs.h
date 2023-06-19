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
	 * UserDefinedStruct ChallengeDefinitionEntry.ChallengeDefinitionEntry
	 * Size -> 0x00C4
	 */
	struct FChallengeDefinitionEntry
	{
	public:
		EScramSport                                                Sport_2_91C890A94F86972300BB239BC0F160C8;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HD6W[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ChallengeClass_20_E1996BE849B3759CFDC40A88588A6C1D;      // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Title_8_BEFC0FED49F408C0E395AAA079E79F5F;                // 0x0010(0x0018) Edit, BlueprintVisible
		class FText                                                Description_10_7FA0F7514C564A6F57B95790A7CE8882;         // 0x0028(0x0018) Edit, BlueprintVisible
		int32_t                                                    UnlockOverride_13_F13694EB49BB7C3D934546BD4D6C14C5;      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_71HI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnLocOverride_23_4E035CA247EE48EC416524A4A5F48514;    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseStandardArena_25_AF24346B4D8AEA3E4CD89496B7AC03DD;    // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_F7JE[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelOverride_28_B9D91FAE40792A85368261992E46CDE4;       // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TrophyRow_31_89C5A53A468062F75741748FE1A59C1F;           // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PreviewImageLeft_51_31007C5F4048728C13703E8B49B8553B[0x28]; // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ChallengeDefinitionEntry.ChallengeDefinitionEntry.PreviewImageLeft_51_31007C5F4048728C13703E8B49B8553B
		unsigned char                                              PreviewImageRight_52_AF6546AE492137C9059F48B0947DFD1F[0x28]; // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ChallengeDefinitionEntry.ChallengeDefinitionEntry.PreviewImageRight_52_AF6546AE492137C9059F48B0947DFD1F
		bool                                                       NotScored_43_1045B8B44501A6798BC0D0A90F60D345;           // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_EZV0[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TrophyTargetScore_46_27E4780E4091F1EF7AB646AD58F745DF;   // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ChallengeTargetScore_50_A4148CC2497364787469EB9416B800C6; // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
