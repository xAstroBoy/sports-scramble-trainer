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
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetBlurTranslationAndScale
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CarX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Translation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::GetBlurTranslationAndScale(float CarX, float* Translation, float* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetBlurTranslationAndScale");
		
		ABW_CenterScoreboard_C_GetBlurTranslationAndScale_Params params {};
		params.CarX = CarX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Translation != nullptr)
			*Translation = params.Translation;
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetCarPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Red                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CarPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::GetCarPosition(bool Red, float* CarPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetCarPosition");
		
		ABW_CenterScoreboard_C_GetCarPosition_Params params {};
		params.Red = Red;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CarPosition != nullptr)
			*CarPosition = params.CarPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetAbsoluteCarPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		float                                              CarPosition                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::GetAbsoluteCarPosition(float* CarPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetAbsoluteCarPosition");
		
		ABW_CenterScoreboard_C_GetAbsoluteCarPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CarPosition != nullptr)
			*CarPosition = params.CarPosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetRelativeCarPosition
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Red                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              RelativePosition                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::GetRelativeCarPosition(bool Red, float* RelativePosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetRelativeCarPosition");
		
		ABW_CenterScoreboard_C_GetRelativeCarPosition_Params params {};
		params.Red = Red;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RelativePosition != nullptr)
			*RelativePosition = params.RelativePosition;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeTraditionalActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::InitializeTraditionalActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeTraditionalActors");
		
		ABW_CenterScoreboard_C_InitializeTraditionalActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateVideoScoreboardActor
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Traditional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ActorFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_CenterScoreboard_C::UpdateVideoScoreboardActor(bool Traditional, bool* ActorFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateVideoScoreboardActor");
		
		ABW_CenterScoreboard_C_UpdateVideoScoreboardActor_Params params {};
		params.Traditional = Traditional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorFound != nullptr)
			*ActorFound = params.ActorFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetTimeRemaining
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t ABW_CenterScoreboard_C::GetTimeRemaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.GetTimeRemaining");
		
		ABW_CenterScoreboard_C_GetTimeRemaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeRoadActors
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::InitializeRoadActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.InitializeRoadActors");
		
		ABW_CenterScoreboard_C_InitializeRoadActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.Initialize");
		
		ABW_CenterScoreboard_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UserConstructionScript");
		
		ABW_CenterScoreboard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::StartRoad__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__FinishedFunc");
		
		ABW_CenterScoreboard_C_StartRoad__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::StartRoad__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRoad__UpdateFunc");
		
		ABW_CenterScoreboard_C_StartRoad__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::BlueCarDriftTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__FinishedFunc");
		
		ABW_CenterScoreboard_C_BlueCarDriftTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::BlueCarDriftTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriftTimeline__UpdateFunc");
		
		ABW_CenterScoreboard_C_BlueCarDriftTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::RedCarDriftTimeline__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__FinishedFunc");
		
		ABW_CenterScoreboard_C_RedCarDriftTimeline__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::RedCarDriftTimeline__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriftTimeline__UpdateFunc");
		
		ABW_CenterScoreboard_C_RedCarDriftTimeline__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateFinishLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__FinishedFunc");
		
		ABW_CenterScoreboard_C_AnimateFinishLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateFinishLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateFinishLine__UpdateFunc");
		
		ABW_CenterScoreboard_C_AnimateFinishLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateStartingLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__FinishedFunc");
		
		ABW_CenterScoreboard_C_AnimateStartingLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateStartingLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateStartingLine__UpdateFunc");
		
		ABW_CenterScoreboard_C_AnimateStartingLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::BlueCarDriveAway__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__FinishedFunc");
		
		ABW_CenterScoreboard_C_BlueCarDriveAway__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::BlueCarDriveAway__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDriveAway__UpdateFunc");
		
		ABW_CenterScoreboard_C_BlueCarDriveAway__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::RedCarDriveAway__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__FinishedFunc");
		
		ABW_CenterScoreboard_C_RedCarDriveAway__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::RedCarDriveAway__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDriveAway__UpdateFunc");
		
		ABW_CenterScoreboard_C_RedCarDriveAway__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateBlueCarY__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__FinishedFunc");
		
		ABW_CenterScoreboard_C_AnimateBlueCarY__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateBlueCarY__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateBlueCarY__UpdateFunc");
		
		ABW_CenterScoreboard_C_AnimateBlueCarY__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateRedCarY__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__FinishedFunc");
		
		ABW_CenterScoreboard_C_AnimateRedCarY__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::AnimateRedCarY__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.AnimateRedCarY__UpdateFunc");
		
		ABW_CenterScoreboard_C_AnimateRedCarY__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ScaleStartingLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__FinishedFunc");
		
		ABW_CenterScoreboard_C_ScaleStartingLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ScaleStartingLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ScaleStartingLine__UpdateFunc");
		
		ABW_CenterScoreboard_C_ScaleStartingLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::SpawnAnimBlueCar__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__FinishedFunc");
		
		ABW_CenterScoreboard_C_SpawnAnimBlueCar__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::SpawnAnimBlueCar__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimBlueCar__UpdateFunc");
		
		ABW_CenterScoreboard_C_SpawnAnimBlueCar__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::SpawnAnimRedCar__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__FinishedFunc");
		
		ABW_CenterScoreboard_C_SpawnAnimRedCar__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::SpawnAnimRedCar__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.SpawnAnimRedCar__UpdateFunc");
		
		ABW_CenterScoreboard_C_SpawnAnimRedCar__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::Timeline_TestingFinishLine__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__FinishedFunc");
		
		ABW_CenterScoreboard_C_Timeline_TestingFinishLine__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::Timeline_TestingFinishLine__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.Timeline_TestingFinishLine__UpdateFunc");
		
		ABW_CenterScoreboard_C_Timeline_TestingFinishLine__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveBeginPlay");
		
		ABW_CenterScoreboard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::BW_StartTimer(int32_t Count)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimer");
		
		ABW_CenterScoreboard_C_BW_StartTimer_Params params {};
		params.Count = Count;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::TimerLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerLoop");
		
		ABW_CenterScoreboard_C_TimerLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ClearTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ClearTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ClearTimer");
		
		ABW_CenterScoreboard_C_ClearTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall1Thrown
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AlleyID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::PlayerBall1Thrown(int32_t AlleyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall1Thrown");
		
		ABW_CenterScoreboard_C_PlayerBall1Thrown_Params params {};
		params.AlleyID = AlleyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall2Thrown
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AlleyID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::PlayerBall2Thrown(int32_t AlleyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBall2Thrown");
		
		ABW_CenterScoreboard_C_PlayerBall2Thrown_Params params {};
		params.AlleyID = AlleyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBallCountReset
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AlleyID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::PlayerBallCountReset(int32_t AlleyID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.PlayerBallCountReset");
		
		ABW_CenterScoreboard_C_PlayerBallCountReset_Params params {};
		params.AlleyID = AlleyID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceTrack
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::StartRaceTrack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceTrack");
		
		ABW_CenterScoreboard_C_StartRaceTrack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopMovingRoad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::StopMovingRoad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopMovingRoad");
		
		ABW_CenterScoreboard_C_StopMovingRoad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDrift
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::BlueCarDrift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarDrift");
		
		ABW_CenterScoreboard_C_BlueCarDrift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDrift
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::RedCarDrift()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarDrift");
		
		ABW_CenterScoreboard_C_RedCarDrift_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowFinishLine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               TrainingTimer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_CenterScoreboard_C::ShowFinishLine(bool TrainingTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowFinishLine");
		
		ABW_CenterScoreboard_C_ShowFinishLine_Params params {};
		params.TrainingTimer = TrainingTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideFinishLine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::HideFinishLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideFinishLine");
		
		ABW_CenterScoreboard_C_HideFinishLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetStartLine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ResetStartLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetStartLine");
		
		ABW_CenterScoreboard_C_ResetStartLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::BlueCarExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BlueCarExit");
		
		ABW_CenterScoreboard_C_BlueCarExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarExit
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::RedCarExit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.RedCarExit");
		
		ABW_CenterScoreboard_C_RedCarExit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ReceiveTick");
		
		ABW_CenterScoreboard_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateCarFromScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::UpdateCarFromScore(int32_t Player, int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateCarFromScore");
		
		ABW_CenterScoreboard_C_UpdateCarFromScore_Params params {};
		params.Player = Player;
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateBlueCarPosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::UpdateBlueCarPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateBlueCarPosition");
		
		ABW_CenterScoreboard_C_UpdateBlueCarPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateRedCarPosition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::UpdateRedCarPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateRedCarPosition");
		
		ABW_CenterScoreboard_C_UpdateRedCarPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.CarsExitScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::CarsExitScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.CarsExitScoreboard");
		
		ABW_CenterScoreboard_C_CarsExitScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetBlueCar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ResetBlueCar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetBlueCar");
		
		ABW_CenterScoreboard_C_ResetBlueCar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetRedCar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ResetRedCar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetRedCar");
		
		ABW_CenterScoreboard_C_ResetRedCar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetCars
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ResetCars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ResetCars");
		
		ABW_CenterScoreboard_C_ResetCars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceSounds
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::StartRaceSounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StartRaceSounds");
		
		ABW_CenterScoreboard_C_StartRaceSounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopRaceLoop
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::StopRaceLoop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.StopRaceLoop");
		
		ABW_CenterScoreboard_C_StopRaceLoop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimerNoRace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::BW_StartTimerNoRace(int32_t Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_StartTimerNoRace");
		
		ABW_CenterScoreboard_C_BW_StartTimerNoRace_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_SetInitialTimer
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InitialTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               TrainingTimer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_CenterScoreboard_C::BW_SetInitialTimer(int32_t InitialTime, bool TrainingTimer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.BW_SetInitialTimer");
		
		ABW_CenterScoreboard_C_BW_SetInitialTimer_Params params {};
		params.InitialTime = InitialTime;
		params.TrainingTimer = TrainingTimer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowTrainingFinishLine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::ShowTrainingFinishLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ShowTrainingFinishLine");
		
		ABW_CenterScoreboard_C_ShowTrainingFinishLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideTrainingFinishLine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABW_CenterScoreboard_C::HideTrainingFinishLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.HideTrainingFinishLine");
		
		ABW_CenterScoreboard_C_HideTrainingFinishLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateMatchScore
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Player1GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Player2GamesWon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::UpdateMatchScore(int32_t Player1GamesWon, int32_t Player2GamesWon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.UpdateMatchScore");
		
		ABW_CenterScoreboard_C_UpdateMatchScore_Params params {};
		params.Player1GamesWon = Player1GamesWon;
		params.Player2GamesWon = Player2GamesWon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.TravelCapsuleOpening
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::TravelCapsuleOpening(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.TravelCapsuleOpening");
		
		ABW_CenterScoreboard_C_TravelCapsuleOpening_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.ExecuteUbergraph_BW_CenterScoreboard
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::ExecuteUbergraph_BW_CenterScoreboard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.ExecuteUbergraph_BW_CenterScoreboard");
		
		ABW_CenterScoreboard_C_ExecuteUbergraph_BW_CenterScoreboard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerChange__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            TimeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_CenterScoreboard_C::TimerChange__DelegateSignature(int32_t TimeLeft)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_CenterScoreboard.BW_CenterScoreboard_C.TimerChange__DelegateSignature");
		
		ABW_CenterScoreboard_C_TimerChange__DelegateSignature_Params params {};
		params.TimeLeft = TimeLeft;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_CenterScoreboard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_CenterScoreboard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_CenterScoreboard.BW_CenterScoreboard_C");
		return ptr;
	}

}


