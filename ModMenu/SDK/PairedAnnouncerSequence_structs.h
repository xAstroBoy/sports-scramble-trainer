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
	 * UserDefinedStruct PairedAnnouncerSequence.PairedAnnouncerSequence
	 * Size -> 0x002E
	 */
	struct FPairedAnnouncerSequence
	{
	public:
		TArray<struct FAnnouncerGestureSetEntry>                   GestureSequence_4_98BEC3C641DC1A98D61443943CEF3E13;      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       Interruptable_6_5E065C89425F9FD14BCD208357B8DD49;        // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_5285[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnnouncerSequenceSetEntry>                  AudioExpressionSequence_11_B5C8E27E4DD3A682E32BD3B540B098C7; // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor
		float                                                      PairDelay_14_4D777D8B4790FF7408796E81825FA7F5;           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TwoHandPresentAnimation_17_E493F4CB4821946D654F11A2F261ACB3; // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       RightHandPresentAnimation_19_318CA5094377AF6D8CD01FA4A8759D49; // 0x002D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
