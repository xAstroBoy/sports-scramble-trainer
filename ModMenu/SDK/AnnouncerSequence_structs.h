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
	 * UserDefinedStruct AnnouncerSequence.AnnouncerSequence
	 * Size -> 0x0041
	 */
	struct FAnnouncerSequence
	{
	public:
		unsigned char                                              Audio_13_AE0AC07B42B2186C1E52A58C31DFD2D3[0x28];         // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty AnnouncerSequence.AnnouncerSequence.Audio_13_AE0AC07B42B2186C1E52A58C31DFD2D3
		EAnnouncerExpression                                       InitialExpression_5_486E534E4390A6440396F185650B5A02;    // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5692[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDelayedExpression>                          ExpressionSequence_9_7FFC535E45569B4FAE617F9B43FC98EA;   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor
		bool                                                       SitIdleOnComplete_11_5DFDADA540E3322E2E020C9BA95F4FB2;   // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
