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
	 * UserDefinedStruct BW_BallTypes.BW_BallTypes
	 * Size -> 0x0090
	 */
	struct FBW_BallTypes
	{
	public:
		class UClass*                                              BallClass_31_5E2FAF4A45A5C1C7DBB60DB1C98E87F0;           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMesh*                                         SelectionMesh_5_EED69D43456EF1314A16BD8E5161D5AD;        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          SelectoinMeshOffset_10_FC3760E147ADE9E6BD2D7BBC06C864EE; // 0x0010(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor
		class UTexture2D*                                          ScrambleIcon_13_60BCADE14C476C54E86DA0ABFE2FE64E;        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ExcludedFromSelection_15_ED35E5E04F74DF2B9AD080AB18682E43; // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExcludedFromRandomScrambler_29_FCBC74484537257372CCC198D0270B53; // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       ExcludeFromBWChallenges_40_30552064443E8141A7ADD1A13CE154E2; // 0x004A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		EBW_Quality                                                Quality_34_0870E9524BE8BC4F90DC3C84918CA3CC;             // 0x004B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WVBK[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              AnnoucnerVO_44_84FC41074C89D1603BC4078D736C174F[0x28];   // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty BW_BallTypes.BW_BallTypes.AnnoucnerVO_44_84FC41074C89D1603BC4078D736C174F
		class FText                                                DisplayName_43_14AAA2F148ABB87E1785C3B86BCEB472;         // 0x0078(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
