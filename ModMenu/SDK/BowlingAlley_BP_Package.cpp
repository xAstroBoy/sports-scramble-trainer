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
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetBallReturn
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class ABowlingBallReturn* ABowlingAlley_BP_C::GetBallReturn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetBallReturn");
		
		ABowlingAlley_BP_C_GetBallReturn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetOverrideLaneName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FName                                        LaneName                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Name                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::GetOverrideLaneName(const class FName& LaneName, class FName* Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetOverrideLaneName");
		
		ABowlingAlley_BP_C_GetOverrideLaneName_Params params {};
		params.LaneName = LaneName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Name != nullptr)
			*Name = params.Name;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SetQueuedBalls
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class UClass*>                              QueuedBalls                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 */
	void ABowlingAlley_BP_C::SetQueuedBalls(TArray<class UClass*>* QueuedBalls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SetQueuedBalls");
		
		ABowlingAlley_BP_C_SetQueuedBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QueuedBalls != nullptr)
			*QueuedBalls = params.QueuedBalls;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.QueueRandomBalls
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Num                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UClass*>                              Balls                                                      (Parm, OutParm, ZeroConstructor)
	 */
	void ABowlingAlley_BP_C::QueueRandomBalls(int32_t Num, TArray<class UClass*>* Balls)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.QueueRandomBalls");
		
		ABowlingAlley_BP_C_QueueRandomBalls_Params params {};
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Balls != nullptr)
			*Balls = params.Balls;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetLaneManagerFromAlley
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingLaneManager_C*                       BowlingLaneManager                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::GetLaneManagerFromAlley(class ABowlingLaneManager_C** BowlingLaneManager)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetLaneManagerFromAlley");
		
		ABowlingAlley_BP_C_GetLaneManagerFromAlley_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BowlingLaneManager != nullptr)
			*BowlingLaneManager = params.BowlingLaneManager;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetCenterScoreboardFromAlley
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABW_CenterScoreboard_C*                      CenterScoreboard                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::GetCenterScoreboardFromAlley(class ABW_CenterScoreboard_C** CenterScoreboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetCenterScoreboardFromAlley");
		
		ABowlingAlley_BP_C_GetCenterScoreboardFromAlley_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CenterScoreboard != nullptr)
			*CenterScoreboard = params.CenterScoreboard;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.DebugDecrementLane
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::DebugDecrementLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DebugDecrementLane");
		
		ABowlingAlley_BP_C_DebugDecrementLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetScore
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	int32_t ABowlingAlley_BP_C::GetScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetScore");
		
		ABowlingAlley_BP_C_GetScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SendBowlingEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EBowlingEvent                                      BowlingEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABowlingBall*                                Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::SendBowlingEvent(EBowlingEvent BowlingEvent, class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SendBowlingEvent");
		
		ABowlingAlley_BP_C_SendBowlingEvent_Params params {};
		params.BowlingEvent = BowlingEvent;
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SetLaneList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                LaneList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               ResetToAll                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::SetLaneList(TArray<class FName>* LaneList, bool ResetToAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SetLaneList");
		
		ABowlingAlley_BP_C_SetLaneList_Params params {};
		params.ResetToAll = ResetToAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaneList != nullptr)
			*LaneList = params.LaneList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateFrameBallCounter
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::UpdateFrameBallCounter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateFrameBallCounter");
		
		ABowlingAlley_BP_C_UpdateFrameBallCounter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecialBall
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESpecialBallType                                   NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::SpawnSpecialBall(ESpecialBallType NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecialBall");
		
		ABowlingAlley_BP_C_SpawnSpecialBall_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.IsLocallyControlled
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               LocallyControlled                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::IsLocallyControlled(bool* LocallyControlled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.IsLocallyControlled");
		
		ABowlingAlley_BP_C_IsLocallyControlled_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LocallyControlled != nullptr)
			*LocallyControlled = params.LocallyControlled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessAudienceSound
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ProcessAudienceSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessAudienceSound");
		
		ABowlingAlley_BP_C_ProcessAudienceSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.CycleThroughLanes
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::CycleThroughLanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.CycleThroughLanes");
		
		ABowlingAlley_BP_C_CycleThroughLanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.IsLaneReady
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	bool ABowlingAlley_BP_C::IsLaneReady()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.IsLaneReady");
		
		ABowlingAlley_BP_C_IsLaneReady_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ResetScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ResetScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ResetScore");
		
		ABowlingAlley_BP_C_ResetScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.DebugIncrementLane
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::DebugIncrementLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DebugIncrementLane");
		
		ABowlingAlley_BP_C_DebugIncrementLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NewLaneCheck
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               LaneChangeIncoming                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::NewLaneCheck(bool* LaneChangeIncoming)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NewLaneCheck");
		
		ABowlingAlley_BP_C_NewLaneCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaneChangeIncoming != nullptr)
			*LaneChangeIncoming = params.LaneChangeIncoming;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetRandomBall
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::GetRandomBall(class UClass** BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetRandomBall");
		
		ABowlingAlley_BP_C_GetRandomBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (BallClass != nullptr)
			*BallClass = params.BallClass;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessScore
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PinsDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABowlingBall*                                BowlingBall                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ProcessScore(int32_t PinsDown, class ABowlingBall* BowlingBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessScore");
		
		ABowlingAlley_BP_C_ProcessScore_Params params {};
		params.PinsDown = PinsDown;
		params.BowlingBall = BowlingBall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateScoreBoard
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AddedPoints                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::UpdateScoreBoard(int32_t AddedPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.UpdateScoreBoard");
		
		ABowlingAlley_BP_C_UpdateScoreBoard_Params params {};
		params.AddedPoints = AddedPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.GetActiveLane
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
	 */
	class ABowlingLane* ABowlingAlley_BP_C::GetActiveLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.GetActiveLane");
		
		ABowlingAlley_BP_C_GetActiveLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Cleanup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Cleanup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Cleanup");
		
		ABowlingAlley_BP_C_Cleanup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Initialize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Initialize");
		
		ABowlingAlley_BP_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.UserConstructionScript");
		
		ABowlingAlley_BP_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_ShowStrike__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__FinishedFunc");
		
		ABowlingAlley_BP_C_Timeline_ShowStrike__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_ShowStrike__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowStrike__UpdateFunc");
		
		ABowlingAlley_BP_C_Timeline_ShowStrike__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_ShowSpare__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__FinishedFunc");
		
		ABowlingAlley_BP_C_Timeline_ShowSpare__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_ShowSpare__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_ShowSpare__UpdateFunc");
		
		ABowlingAlley_BP_C_Timeline_ShowSpare__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_LargeTrainScore__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__FinishedFunc");
		
		ABowlingAlley_BP_C_Timeline_LargeTrainScore__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_LargeTrainScore__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_LargeTrainScore__UpdateFunc");
		
		ABowlingAlley_BP_C_Timeline_LargeTrainScore__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_SmallTrainScore__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__FinishedFunc");
		
		ABowlingAlley_BP_C_Timeline_SmallTrainScore__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Timeline_SmallTrainScore__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Timeline_SmallTrainScore__UpdateFunc");
		
		ABowlingAlley_BP_C_Timeline_SmallTrainScore__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.CreateDebugButtons
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::CreateDebugButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.CreateDebugButtons");
		
		ABowlingAlley_BP_C_CreateDebugButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.DebugButtonsSelected
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ButtonSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::DebugButtonsSelected(int32_t ButtonSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DebugButtonsSelected");
		
		ABowlingAlley_BP_C_DebugButtonsSelected_Params params {};
		params.ButtonSelected = ButtonSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetCreateDebugButtons
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::NetCreateDebugButtons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetCreateDebugButtons");
		
		ABowlingAlley_BP_C_NetCreateDebugButtons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplayStrike
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::NetDisplayStrike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplayStrike");
		
		ABowlingAlley_BP_C_NetDisplayStrike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplaySpare
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::NetDisplaySpare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetDisplaySpare");
		
		ABowlingAlley_BP_C_NetDisplaySpare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.RedrawScoreBoard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::RedrawScoreBoard(int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.RedrawScoreBoard");
		
		ABowlingAlley_BP_C_RedrawScoreBoard_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetRedrawTrainingScoreboard
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::NetRedrawTrainingScoreboard(int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetRedrawTrainingScoreboard");
		
		ABowlingAlley_BP_C_NetRedrawTrainingScoreboard_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetTrainingScoreFontSize
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewFontSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::NetTrainingScoreFontSize(int32_t NewFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetTrainingScoreFontSize");
		
		ABowlingAlley_BP_C_NetTrainingScoreFontSize_Params params {};
		params.NewFontSize = NewFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ClearTrainingScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ClearTrainingScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ClearTrainingScoreboard");
		
		ABowlingAlley_BP_C_ClearTrainingScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerRedrawTrainingScoreboard
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NewScore                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ServerRedrawTrainingScoreboard(int32_t NewScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerRedrawTrainingScoreboard");
		
		ABowlingAlley_BP_C_ServerRedrawTrainingScoreboard_Params params {};
		params.NewScore = NewScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerUpdateScoreBoard
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AddedPoints                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ServerUpdateScoreBoard(int32_t AddedPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerUpdateScoreBoard");
		
		ABowlingAlley_BP_C_ServerUpdateScoreBoard_Params params {};
		params.AddedPoints = AddedPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetUpdateScoreBoard
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            AddedPoints                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::NetUpdateScoreBoard(int32_t AddedPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetUpdateScoreBoard");
		
		ABowlingAlley_BP_C_NetUpdateScoreBoard_Params params {};
		params.AddedPoints = AddedPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplayStrike
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerDisplayStrike()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplayStrike");
		
		ABowlingAlley_BP_C_ServerDisplayStrike_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplaySpare
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerDisplaySpare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerDisplaySpare");
		
		ABowlingAlley_BP_C_ServerDisplaySpare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.PrepRevealTrainingScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::PrepRevealTrainingScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.PrepRevealTrainingScoreboard");
		
		ABowlingAlley_BP_C_PrepRevealTrainingScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.RevealTrainingScoreboard
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::RevealTrainingScoreboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.RevealTrainingScoreboard");
		
		ABowlingAlley_BP_C_RevealTrainingScoreboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveBeginPlay");
		
		ABowlingAlley_BP_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.BallRollComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Scoring                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Out                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               restricted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::BallRollComplete(class ABowlingBall* Ball, bool Scoring, bool Out, bool restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BallRollComplete");
		
		ABowlingAlley_BP_C_BallRollComplete_Params params {};
		params.Ball = Ball;
		params.Scoring = Scoring;
		params.Out = Out;
		params.restricted = restricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.OnBallOut
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               pit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               restricted                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::OnBallOut(class ABowlingBall* Ball, bool pit, bool restricted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.OnBallOut");
		
		ABowlingAlley_BP_C_OnBallOut_Params params {};
		params.Ball = Ball;
		params.pit = pit;
		params.restricted = restricted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::LaneSwap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwap");
		
		ABowlingAlley_BP_C_LaneSwap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.WaitForPinResetComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::WaitForPinResetComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.WaitForPinResetComplete");
		
		ABowlingAlley_BP_C_WaitForPinResetComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwapComplete
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::LaneSwapComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.LaneSwapComplete");
		
		ABowlingAlley_BP_C_LaneSwapComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveEndPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ReceiveEndPlay");
		
		ABowlingAlley_BP_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.PindeckHidden
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::PindeckHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.PindeckHidden");
		
		ABowlingAlley_BP_C_PindeckHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABW_Ball_Base_C*                             NewBall                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::StandardBallCreated(class ABW_Ball_Base_C* NewBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallCreated");
		
		ABowlingAlley_BP_C_StandardBallCreated_Params params {};
		params.NewBall = NewBall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.EnableAlley
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EnableDebug                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               DisableLaneChanges                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Traditional                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::EnableAlley(bool EnableDebug, bool DisableLaneChanges, bool Traditional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.EnableAlley");
		
		ABowlingAlley_BP_C_EnableAlley_Params params {};
		params.EnableDebug = EnableDebug;
		params.DisableLaneChanges = DisableLaneChanges;
		params.Traditional = Traditional;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.DisableAlley
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               ResetLane                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::DisableAlley(bool ResetLane)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.DisableAlley");
		
		ABowlingAlley_BP_C_DisableAlley_Params params {};
		params.ResetLane = ResetLane;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.AdditionalAddedScore
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            AddedScore                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::AdditionalAddedScore(class AActor* Instigator, int32_t AddedScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.AdditionalAddedScore");
		
		ABowlingAlley_BP_C_AdditionalAddedScore_Params params {};
		params.Instigator = Instigator;
		params.AddedScore = AddedScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.FinishLaneReset
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::FinishLaneReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.FinishLaneReset");
		
		ABowlingAlley_BP_C_FinishLaneReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecificBalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::SpawnSpecificBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnSpecificBalls");
		
		ABowlingAlley_BP_C_SpawnSpecificBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallCreated
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABW_Ball_Base_C*                             NewBall                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ScrambleBallCreated(class ABW_Ball_Base_C* NewBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallCreated");
		
		ABowlingAlley_BP_C_ScrambleBallCreated_Params params {};
		params.NewBall = NewBall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnStandardBalls
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::SpawnStandardBalls()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnStandardBalls");
		
		ABowlingAlley_BP_C_SpawnStandardBalls_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.BallFinishedLane
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramBall*                                  Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::BallFinishedLane(class AScramBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BallFinishedLane");
		
		ABowlingAlley_BP_C_BallFinishedLane_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ClearBall
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ClearBall(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ClearBall");
		
		ABowlingAlley_BP_C_ClearBall_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetPlayerAnnouncerVO
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SoftSoundIDX                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::NetPlayerAnnouncerVO(float Delay, int32_t SoftSoundIDX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetPlayerAnnouncerVO");
		
		ABowlingAlley_BP_C_NetPlayerAnnouncerVO_Params params {};
		params.Delay = Delay;
		params.SoftSoundIDX = SoftSoundIDX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ResetAnnouncerVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ResetAnnouncerVO()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ResetAnnouncerVO");
		
		ABowlingAlley_BP_C_ResetAnnouncerVO_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::StandardBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.StandardBallDestroyed");
		
		ABowlingAlley_BP_C_StandardBallDestroyed_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ScrambleBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ScrambleBallDestroyed");
		
		ABowlingAlley_BP_C_ScrambleBallDestroyed_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.InstigatorBallDestroyed
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AScramPrimitiveActor*                        DestroyedPrimitive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::InstigatorBallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.InstigatorBallDestroyed");
		
		ABowlingAlley_BP_C_InstigatorBallDestroyed_Params params {};
		params.DestroyedPrimitive = DestroyedPrimitive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                InstigatorBall                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::AddInstigatorBall(class ABowlingBall* InstigatorBall)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBall");
		
		ABowlingAlley_BP_C_AddInstigatorBall_Params params {};
		params.InstigatorBall = InstigatorBall;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NotifyGameEnding
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::NotifyGameEnding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NotifyGameEnding");
		
		ABowlingAlley_BP_C_NotifyGameEnding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnRandomBall
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::SpawnRandomBall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpawnRandomBall");
		
		ABowlingAlley_BP_C_SpawnRandomBall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.BeginTraditionalFrame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Solo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::BeginTraditionalFrame(bool Solo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BeginTraditionalFrame");
		
		ABowlingAlley_BP_C_BeginTraditionalFrame_Params params {};
		params.Solo = Solo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.EndTraditionalFrame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Solo                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               LastFrame                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::EndTraditionalFrame(bool Solo, bool LastFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.EndTraditionalFrame");
		
		ABowlingAlley_BP_C_EndTraditionalFrame_Params params {};
		params.Solo = Solo;
		params.LastFrame = LastFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ResetLane
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ResetLane()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ResetLane");
		
		ABowlingAlley_BP_C_ResetLane_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer1BallThrown
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerPlayer1BallThrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer1BallThrown");
		
		ABowlingAlley_BP_C_ServerPlayer1BallThrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer2BallThrown
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerPlayer2BallThrown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayer2BallThrown");
		
		ABowlingAlley_BP_C_ServerPlayer2BallThrown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerCycleThroughLanes
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerCycleThroughLanes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerCycleThroughLanes");
		
		ABowlingAlley_BP_C_ServerCycleThroughLanes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerResetPins
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerResetPins()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerResetPins");
		
		ABowlingAlley_BP_C_ServerResetPins_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayerBallCountReset
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::ServerPlayerBallCountReset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerPlayerBallCountReset");
		
		ABowlingAlley_BP_C_ServerPlayerBallCountReset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerSpawnSpecialBall
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ESpecialBallType                                   NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ServerSpawnSpecialBall(ESpecialBallType NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerSpawnSpecialBall");
		
		ABowlingAlley_BP_C_ServerSpawnSpecialBall_Params params {};
		params.NewParam = NewParam;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ServerProcessPinsDown
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Pins                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ServerProcessPinsDown(int32_t Pins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ServerProcessPinsDown");
		
		ABowlingAlley_BP_C_ServerProcessPinsDown_Params params {};
		params.Pins = Pins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SlideBallReturn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               slideForward                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::SlideBallReturn(bool slideForward)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SlideBallReturn");
		
		ABowlingAlley_BP_C_SlideBallReturn_Params params {};
		params.slideForward = slideForward;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Multi_ResetFrameCounts
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::Multi_ResetFrameCounts()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Multi_ResetFrameCounts");
		
		ABowlingAlley_BP_C_Multi_ResetFrameCounts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.Server_SpawnSpecificBall
	 * 		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      BallClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::Server_SpawnSpecificBall(class UClass* BallClass)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.Server_SpawnSpecificBall");
		
		ABowlingAlley_BP_C_Server_SpawnSpecificBall_Params params {};
		params.BallClass = BallClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.PlayerAnnouncerVO
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              Delay                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::PlayerAnnouncerVO(float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.PlayerAnnouncerVO");
		
		ABowlingAlley_BP_C_PlayerAnnouncerVO_Params params {};
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBallCode
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class ABowlingBall*                                Ball                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::AddInstigatorBallCode(class ABowlingBall* Ball)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.AddInstigatorBallCode");
		
		ABowlingAlley_BP_C_AddInstigatorBallCode_Params params {};
		params.Ball = Ball;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.NetSetLaneList
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FName>                                LaneList                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               ResetToAll                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABowlingAlley_BP_C::NetSetLaneList(TArray<class FName>* LaneList, bool ResetToAll)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.NetSetLaneList");
		
		ABowlingAlley_BP_C_NetSetLaneList_Params params {};
		params.ResetToAll = ResetToAll;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (LaneList != nullptr)
			*LaneList = params.LaneList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.MoveBallReturn
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::MoveBallReturn(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.MoveBallReturn");
		
		ABowlingAlley_BP_C_MoveBallReturn_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ExecuteUbergraph_BowlingAlley_BP
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ExecuteUbergraph_BowlingAlley_BP(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ExecuteUbergraph_BowlingAlley_BP");
		
		ABowlingAlley_BP_C_ExecuteUbergraph_BowlingAlley_BP_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessPinsDown__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Pins                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::ProcessPinsDown__DelegateSignature(int32_t ID, int32_t Pins)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.ProcessPinsDown__DelegateSignature");
		
		ABowlingAlley_BP_C_ProcessPinsDown__DelegateSignature_Params params {};
		params.ID = ID;
		params.Pins = Pins;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.LaneReady__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABowlingAlley_BP_C::LaneReady__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.LaneReady__DelegateSignature");
		
		ABowlingAlley_BP_C_LaneReady__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.SpecialScoring__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            SpecialPoints                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::SpecialScoring__DelegateSignature(int32_t LaneID, int32_t SpecialPoints)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.SpecialScoring__DelegateSignature");
		
		ABowlingAlley_BP_C_SpecialScoring__DelegateSignature_Params params {};
		params.LaneID = LaneID;
		params.SpecialPoints = SpecialPoints;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.CurrentLaneScore__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            LaneID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentScore                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::CurrentLaneScore__DelegateSignature(int32_t LaneID, int32_t CurrentScore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.CurrentLaneScore__DelegateSignature");
		
		ABowlingAlley_BP_C_CurrentLaneScore__DelegateSignature_Params params {};
		params.LaneID = LaneID;
		params.CurrentScore = CurrentScore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BowlingAlley_BP.BowlingAlley_BP_C.BowlingEvent__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlayerId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EBowlingEvent                                      BowlingEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABowlingAlley_BP_C::BowlingEvent__DelegateSignature(int32_t PlayerId, EBowlingEvent BowlingEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BowlingAlley_BP.BowlingAlley_BP_C.BowlingEvent__DelegateSignature");
		
		ABowlingAlley_BP_C_BowlingEvent__DelegateSignature_Params params {};
		params.PlayerId = PlayerId;
		params.BowlingEvent = BowlingEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABowlingAlley_BP_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABowlingAlley_BP_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BowlingAlley_BP.BowlingAlley_BP_C");
		return ptr;
	}

}


