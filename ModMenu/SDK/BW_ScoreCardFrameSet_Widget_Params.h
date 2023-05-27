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
	 * Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ApplyColors
	 */
	struct UBW_ScoreCardFrameSet_Widget_C_ApplyColors_Params
	{
	public:
		struct FLinearColor                                        PlayerColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        ScoreColor;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        FrameColorColor;                                         // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Highlight
	 */
	struct UBW_ScoreCardFrameSet_Widget_C_Highlight_Params
	{
	public:
		struct FLinearColor                                        MajorColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MinorColor;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Mute
	 */
	struct UBW_ScoreCardFrameSet_Widget_C_Mute_Params
	{
	public:
		struct FLinearColor                                        MajorColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        MinorColor;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.SetColor
	 */
	struct UBW_ScoreCardFrameSet_Widget_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ExecuteUbergraph_BW_ScoreCardFrameSet_Widget
	 */
	struct UBW_ScoreCardFrameSet_Widget_C_ExecuteUbergraph_BW_ScoreCardFrameSet_Widget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
