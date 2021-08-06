// Name: Sport Scramble, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ApplyColors
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            PlayerColor                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            ScoreColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            FrameColorColor                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBW_ScoreCardFrameSet_Widget_C::ApplyColors(const struct FLinearColor& PlayerColor, const struct FLinearColor& ScoreColor, const struct FLinearColor& FrameColorColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ApplyColors");

	UBW_ScoreCardFrameSet_Widget_C_ApplyColors_Params params;
	params.PlayerColor = PlayerColor;
	params.ScoreColor = ScoreColor;
	params.FrameColorColor = FrameColorColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Highlight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            MajorColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            MinorColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBW_ScoreCardFrameSet_Widget_C::Highlight(const struct FLinearColor& MajorColor, const struct FLinearColor& MinorColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Highlight");

	UBW_ScoreCardFrameSet_Widget_C_Highlight_Params params;
	params.MajorColor = MajorColor;
	params.MinorColor = MinorColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Mute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            MajorColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor            MinorColor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBW_ScoreCardFrameSet_Widget_C::Mute(const struct FLinearColor& MajorColor, const struct FLinearColor& MinorColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Mute");

	UBW_ScoreCardFrameSet_Widget_C_Mute_Params params;
	params.MajorColor = MajorColor;
	params.MinorColor = MinorColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.SetColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBW_ScoreCardFrameSet_Widget_C::SetColor(const struct FLinearColor& Color)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.SetColor");

	UBW_ScoreCardFrameSet_Widget_C_SetColor_Params params;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ExecuteUbergraph_BW_ScoreCardFrameSet_Widget
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBW_ScoreCardFrameSet_Widget_C::ExecuteUbergraph_BW_ScoreCardFrameSet_Widget(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ExecuteUbergraph_BW_ScoreCardFrameSet_Widget");

	UBW_ScoreCardFrameSet_Widget_C_ExecuteUbergraph_BW_ScoreCardFrameSet_Widget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
