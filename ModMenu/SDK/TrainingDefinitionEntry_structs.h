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
	 * UserDefinedStruct TrainingDefinitionEntry.TrainingDefinitionEntry
	 * Size -> 0x00A8
	 */
	struct FTrainingDefinitionEntry
	{
	public:
		EScramSport                                                Sport_2_91C890A94F86972300BB239BC0F160C8;                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J6EA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              TrainingClass_19_E1996BE849B3759CFDC40A88588A6C1D;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                Title_8_BEFC0FED49F408C0E395AAA079E79F5F;                // 0x0010(0x0018) Edit, BlueprintVisible
		class FText                                                Description_10_7FA0F7514C564A6F57B95790A7CE8882;         // 0x0028(0x0018) Edit, BlueprintVisible
		int32_t                                                    UnlockOverride_13_F13694EB49BB7C3D934546BD4D6C14C5;      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HasOptionsMenu_21_B7F3F45C49E53A8C0C3C249220A9C59C;      // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       DisableNextButton_25_0759972D476289045B2984B1944D8B8B;   // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OFU6[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SpawnLocOverride_28_C8C3C1244386BA71609DEDA84C82E08B;    // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseStandardArena_31_62F0E647418CA2D771679996FDD2214B;    // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LA3C[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              PreviewImageLeft_37_F10C8B44446E1FE457FC0298D09AFB4C[0x28]; // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty TrainingDefinitionEntry.TrainingDefinitionEntry.PreviewImageLeft_37_F10C8B44446E1FE457FC0298D09AFB4C
		unsigned char                                              PreviewImageRight_38_76D2ECC443603849CEEB079B361498CE[0x28]; // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty TrainingDefinitionEntry.TrainingDefinitionEntry.PreviewImageRight_38_76D2ECC443603849CEEB079B361498CE
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
