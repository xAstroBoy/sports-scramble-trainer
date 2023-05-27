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
	 * UserDefinedStruct TN_BallTypes.TN_BallTypes
	 * Size -> 0x0070
	 */
	struct FTN_BallTypes
	{
	public:
		class UClass*                                              BallClass_2_5E2FAF4A45A5C1C7DBB60DB1C98E87F0;            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         SelectionMesh_5_EED69D43456EF1314A16BD8E5161D5AD;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          SelectoinMeshOffset_10_FC3760E147ADE9E6BD2D7BBC06C864EE; // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class UTexture2D*                                          ScrambleIcon_13_60BCADE14C476C54E86DA0ABFE2FE64E;        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ExcludedFromSelection_15_ED35E5E04F74DF2B9AD080AB18682E43; // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExcludedFromRandomScrambler_29_FCBC74484537257372CCC198D0270B53; // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExcludedFromEquipMatchingScrambler_28_9C20EF25465520C2000751937E6E4F05; // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExcludedFromEquipMatchWarning_26_FE9465FA40307B2DB9BF2296F044C706; // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		struct FVector                                             ServeScale_32_9F2D05B746D5C1B8757C90B6D440F56C;          // 0x004C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                DisplayName_35_836E4A424D52E6CB47F1ADBE0A5B7F3F;         // 0x0058(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
