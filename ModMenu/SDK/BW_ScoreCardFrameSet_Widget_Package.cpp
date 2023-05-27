/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ApplyColors
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                PlayerColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                ScoreColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                FrameColorColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBW_ScoreCardFrameSet_Widget_C::ApplyColors(const struct FLinearColor& PlayerColor, const struct FLinearColor& ScoreColor, const struct FLinearColor& FrameColorColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ApplyColors");
		
		UBW_ScoreCardFrameSet_Widget_C_ApplyColors_Params params {};
		params.PlayerColor = PlayerColor;
		params.ScoreColor = ScoreColor;
		params.FrameColorColor = FrameColorColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Highlight
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                MajorColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MinorColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBW_ScoreCardFrameSet_Widget_C::Highlight(const struct FLinearColor& MajorColor, const struct FLinearColor& MinorColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Highlight");
		
		UBW_ScoreCardFrameSet_Widget_C_Highlight_Params params {};
		params.MajorColor = MajorColor;
		params.MinorColor = MinorColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Mute
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                MajorColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                MinorColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBW_ScoreCardFrameSet_Widget_C::Mute(const struct FLinearColor& MajorColor, const struct FLinearColor& MinorColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.Mute");
		
		UBW_ScoreCardFrameSet_Widget_C_Mute_Params params {};
		params.MajorColor = MajorColor;
		params.MinorColor = MinorColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.SetColor
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBW_ScoreCardFrameSet_Widget_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.SetColor");
		
		UBW_ScoreCardFrameSet_Widget_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ExecuteUbergraph_BW_ScoreCardFrameSet_Widget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBW_ScoreCardFrameSet_Widget_C::ExecuteUbergraph_BW_ScoreCardFrameSet_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C.ExecuteUbergraph_BW_ScoreCardFrameSet_Widget");
		
		UBW_ScoreCardFrameSet_Widget_C_ExecuteUbergraph_BW_ScoreCardFrameSet_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBW_ScoreCardFrameSet_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBW_ScoreCardFrameSet_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BW_ScoreCardFrameSet_Widget.BW_ScoreCardFrameSet_Widget_C");
		return ptr;
	}

}


