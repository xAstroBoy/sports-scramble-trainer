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
	 * UserDefinedStruct DebugButtonInfo.DebugButtonInfo
	 * Size -> 0x0048
	 */
	struct FDebugButtonInfo
	{
	public:
		class FString                                              Text_2_9FE5427348839B3E2460ADB0045FBBE6;                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor_13_1B0FD3204C689E1D70A5319D904D03BC;           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_7_ABB84B584D4CED2A5DC4BF92B1BD4F04;                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TwoSided_8_D683EC9643BF7310573D73A0835AAAF1;             // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       AutoDelete_10_24A185A94832A35C79A5298578F87745;          // 0x0029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DPZ7[0x2];                                   // 0x002A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ButtonId_16_349CC616488BA9D7CAF059BA433BF6CE;            // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FText                                                LocText_20_C912785C43CD280A2FE40193194B303A;             // 0x0030(0x0018) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
