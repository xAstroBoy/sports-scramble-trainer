#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct MultiplayerData.MultiplayerData
// 0x001E
struct FMultiplayerData
{
	struct FString                                     PlayerName_35_47748C9B482331E2E47F7FB191DD1BC9;            // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int                                                PlayerScore_37_BB7D7B5A49C64D0B478D039CCF4C6D59;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramHandedness                    SwingHand_53_2F58B95A4A28066920C06784A80396B4;             // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramHandedness                    ThrowingHand_55_2253D4BE4AFDE2A60EB6EABB02267951;          // 0x0015(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EBattingSide                        BattingSide_58_3C2350FE4335A9CDF892E8AABEEF96DE;           // 0x0016(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSkill                         SkillLevelTennis_61_EDD4B6544D800CE0C0BC599D1EB7113B;      // 0x0017(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSkill                         SkillLevelPitching_65_32AC18C7459DE2E5635FE285938449B2;    // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSkill                         SkillLevelCatching_69_7649DE304A455150737A5E9DC385B2D8;    // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSkill                         SkillLevelBatting_66_57898BF1402D751237882DA1906ED343;     // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EScramSkill                         SkillLevelBowling_67_A8B8628C46E171BE41C496B7EDB5CE94;     // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SkillLevelBattingHasBeenSet_72_BCA9A8FF49ABD2838E1962BCEBC7DD19; // 0x001C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               SkillLevelBowlingHasBeenSet_74_119B538D449E0C53DC93ADA114F8064A; // 0x001D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
