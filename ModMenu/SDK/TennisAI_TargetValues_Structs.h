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
	 * UserDefinedStruct TennisAI_TargetValues.TennisAI_TargetValues
	 * Size -> 0x0008
	 */
	struct FTennisAI_TargetValues
	{
	public:
		EScrambleTargetAiValue                                     Environment_2_4B3D2315497D36E82C6EF9A688D49469;          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     RandomInstrument_4_CD1B01844F8E2519E55842A537CE2E53;     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     RandomBall_6_4013F2454C21549BF0CE0A851A4ABAF3;           // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     SpecificBallMatchAIRacket_9_2F8FBFF5437FAE95C3BA5DAF357C69FB; // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     SpecificBallMatchPlayerRacket_11_21C3FDCD470BA9061744B1B0E26FBDF5; // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     SpecificBallMatchNone_13_31B496A34D532AEC7223768842155364; // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     SpecificRacketMatchBall_15_242364CE454D901A202D7399AD1A2EFD; // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EScrambleTargetAiValue                                     SpecificRacketNoMatch_17_47BE8EF24EE84D368E38B89AD445BE2F; // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
