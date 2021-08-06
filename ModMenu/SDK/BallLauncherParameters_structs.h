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

// UserDefinedStruct BallLauncherParameters.BallLauncherParameters
// 0x0084
struct FBallLauncherParameters
{
	float                                              BallSpeed_2_22605A2A477B6E524EAE3192F1D2E4EA;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HorizontalVariance_12_CCAD8D63447BF3E6891020BD72C65CB3;    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              VerticalVariance_14_674C7A65400AFBC67534DEB834A0C8CF;      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScramTrajectoryRegion                      TargetRegion_21_3B2870204DCE2C7A57F985BEBC7693A7;          // 0x000C(0x0050) (Edit, BlueprintVisible, NoDestructor)
	float                                              LauncherXPosition_6_60113A7D43D62C7A5418CD8596412C89;      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LauncherYPosition_8_35733AE341C616AD634BFFB58C9507CD;      // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height_10_71A245BC45C9D3AAA2486B9C4F1220C1;                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              CollapseSpeed_16_510BCA514ED25CEC8BD2188A0E6FD15B;         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MovementSpeed_18_1C401CEC4381908200729593DA8D8F76;         // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RaiseSpeed_20_BB872DCF4F927043A49595B088664747;            // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisplayHintLocation_26_8B5DD36B42FBA31910B263A88C3E43A6;   // 0x0074(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_13VO[0x3];                                     // 0x0075(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     HintLocation_27_33716AE44DEE54BF93BB0DB03715CB0F;          // 0x0078(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
