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
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.FlashScore
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            score                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateColor                                 Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ScoreFlashed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_ReturnWall_C::FlashScore(int32_t score, const struct FSlateColor& Color, bool* ScoreFlashed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.FlashScore");
		
		ATN_ReturnWall_C_FlashScore_Params params {};
		params.score = score;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ScoreFlashed != nullptr)
			*ScoreFlashed = params.ScoreFlashed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.HideBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_ReturnWall_C::HideBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.HideBallTarget");
		
		ATN_ReturnWall_C_HideBallTarget_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ShowBallTarget
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Instant                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Callback                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_ReturnWall_C::ShowBallTarget(bool Instant, bool* Callback)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ShowBallTarget");
		
		ATN_ReturnWall_C_ShowBallTarget_Params params {};
		params.Instant = Instant;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Callback != nullptr)
			*Callback = params.Callback;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.RemoveGameElement
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Removed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ATN_ReturnWall_C::RemoveGameElement(bool* Removed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.RemoveGameElement");
		
		ATN_ReturnWall_C_RemoveGameElement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Removed != nullptr)
			*Removed = params.Removed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.AreStreaksContinued
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::AreStreaksContinued()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.AreStreaksContinued");
		
		ATN_ReturnWall_C_AreStreaksContinued_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.GetFlyTextTransform
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::GetFlyTextTransform(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.GetFlyTextTransform");
		
		ATN_ReturnWall_C_GetFlyTextTransform_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Initialize");
		
		ATN_ReturnWall_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.RemoveImpacts
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::RemoveImpacts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.RemoveImpacts");
		
		ATN_ReturnWall_C_RemoveImpacts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.CreateImpact
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::CreateImpact(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CreateImpact");
		
		ATN_ReturnWall_C_CreateImpact_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.UserConstructionScript");
		
		ATN_ReturnWall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_Move__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__FinishedFunc");
		
		ATN_ReturnWall_C_Timeline_Move__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_Move__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_Move__UpdateFunc");
		
		ATN_ReturnWall_C_Timeline_Move__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_FirstResize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__FinishedFunc");
		
		ATN_ReturnWall_C_Timeline_FirstResize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_FirstResize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_FirstResize__UpdateFunc");
		
		ATN_ReturnWall_C_Timeline_FirstResize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_SecondResize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__FinishedFunc");
		
		ATN_ReturnWall_C_Timeline_SecondResize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_SecondResize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_SecondResize__UpdateFunc");
		
		ATN_ReturnWall_C_Timeline_SecondResize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_ThirdResize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__FinishedFunc");
		
		ATN_ReturnWall_C_Timeline_ThirdResize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_ThirdResize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ThirdResize__UpdateFunc");
		
		ATN_ReturnWall_C_Timeline_ThirdResize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_ResetOriginalSize__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__FinishedFunc");
		
		ATN_ReturnWall_C_Timeline_ResetOriginalSize__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ATN_ReturnWall_C::Timeline_ResetOriginalSize__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.Timeline_ResetOriginalSize__UpdateFunc");
		
		ATN_ReturnWall_C_Timeline_ResetOriginalSize__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_B0FBF894492B325F15CF9C8269818093
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::OnLoaded_B0FBF894492B325F15CF9C8269818093(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_B0FBF894492B325F15CF9C8269818093");
		
		ATN_ReturnWall_C_OnLoaded_B0FBF894492B325F15CF9C8269818093_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_13BD0E934DE2D426979204B30A43C614
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::OnLoaded_13BD0E934DE2D426979204B30A43C614(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_13BD0E934DE2D426979204B30A43C614");
		
		ATN_ReturnWall_C_OnLoaded_13BD0E934DE2D426979204B30A43C614_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361");
		
		ATN_ReturnWall_C_OnLoaded_7DB9D9504C36AD96E1FF1BB3DB142361_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.RiseUp
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::RiseUp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.RiseUp");
		
		ATN_ReturnWall_C_RiseUp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.LowerDown
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::LowerDown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.LowerDown");
		
		ATN_ReturnWall_C_LowerDown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ReceiveBeginPlay");
		
		ATN_ReturnWall_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.TargetHit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::TargetHit(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.TargetHit");
		
		ATN_ReturnWall_C_TargetHit_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ReceiveEndPlay");
		
		ATN_ReturnWall_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakHits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::CalculateStreakHits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakHits");
		
		ATN_ReturnWall_C_CalculateStreakHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.CalculateCumulativeHits
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::CalculateCumulativeHits()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CalculateCumulativeHits");
		
		ATN_ReturnWall_C_CalculateCumulativeHits_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.FirstResize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::FirstResize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.FirstResize");
		
		ATN_ReturnWall_C_FirstResize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.SecondResize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::SecondResize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.SecondResize");
		
		ATN_ReturnWall_C_SecondResize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ThirdResize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::ThirdResize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ThirdResize");
		
		ATN_ReturnWall_C_ThirdResize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ResetOriginalSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::ResetOriginalSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ResetOriginalSize");
		
		ATN_ReturnWall_C_ResetOriginalSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakMultiplier
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::CalculateStreakMultiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.CalculateStreakMultiplier");
		
		ATN_ReturnWall_C_CalculateStreakMultiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.TargetMaterialFlash
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ATN_ReturnWall_C::TargetMaterialFlash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.TargetMaterialFlash");
		
		ATN_ReturnWall_C_TargetMaterialFlash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ExecuteUbergraph_TN_ReturnWall
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::ExecuteUbergraph_TN_ReturnWall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ExecuteUbergraph_TN_ReturnWall");
		
		ATN_ReturnWall_C_ExecuteUbergraph_TN_ReturnWall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function TN_ReturnWall.TN_ReturnWall_C.ReturnWallHit__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentStreak                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ATN_ReturnWall_C::ReturnWallHit__DelegateSignature(int32_t CurrentStreak)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function TN_ReturnWall.TN_ReturnWall_C.ReturnWallHit__DelegateSignature");
		
		ATN_ReturnWall_C_ReturnWallHit__DelegateSignature_Params params {};
		params.CurrentStreak = CurrentStreak;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATN_ReturnWall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATN_ReturnWall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass TN_ReturnWall.TN_ReturnWall_C");
		return ptr;
	}

}


