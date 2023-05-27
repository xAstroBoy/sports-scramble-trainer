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
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_ScoreCard_C::UpdatePlayerNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames");
		
		ABW_ScoreCard_C_UpdatePlayerNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.PrepareForGame
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Hidden                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABW_ScoreCard_C::PrepareForGame(int32_t NumFrames, int32_t NumPlayers, bool Hidden)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.PrepareForGame");
		
		ABW_ScoreCard_C_PrepareForGame_Params params {};
		params.NumFrames = NumFrames;
		params.NumPlayers = NumPlayers;
		params.Hidden = Hidden;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBowlingFrameSet>                    FrameSets                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            CurrentPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_ScoreCard_C::UpdateFrameSets(TArray<struct FBowlingFrameSet> FrameSets, int32_t CurrentPlayer, int32_t CurrentFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets");
		
		ABW_ScoreCard_C_UpdateFrameSets_Params params {};
		params.FrameSets = FrameSets;
		params.CurrentPlayer = CurrentPlayer;
		params.CurrentFrame = CurrentFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.Initialize
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_ScoreCard_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.Initialize");
		
		ABW_ScoreCard_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBowlingFrameSet                            frameSet                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UBW_ScoreCardFrameSet_Widget_C*              FrameSetWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UBW_ScoreCardFrame_Widget_C*>         FrameWidgets                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		bool                                               IsPlayerActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_ScoreCard_C::UpdateFrameSet(const struct FBowlingFrameSet& frameSet, class UBW_ScoreCardFrameSet_Widget_C* FrameSetWidget, TArray<class UBW_ScoreCardFrame_Widget_C*>* FrameWidgets, bool IsPlayerActive, int32_t CurrentFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet");
		
		ABW_ScoreCard_C_UpdateFrameSet_Params params {};
		params.frameSet = frameSet;
		params.FrameSetWidget = FrameSetWidget;
		params.IsPlayerActive = IsPlayerActive;
		params.CurrentFrame = CurrentFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (FrameWidgets != nullptr)
			*FrameWidgets = params.FrameWidgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_ScoreCard_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript");
		
		ABW_ScoreCard_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_ScoreCard_C::Scale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc");
		
		ABW_ScoreCard_C_Scale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void ABW_ScoreCard_C::Scale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc");
		
		ABW_ScoreCard_C_Scale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets
	 * 		Flags  -> (Net, NetReliable, NetMulticast, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FBowlingFrameSet>                    FrameSets                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	 * 		int32_t                                            CurrentPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            CurrentFrame                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_ScoreCard_C::NetUpdateFrameSets(TArray<struct FBowlingFrameSet> FrameSets, int32_t CurrentPlayer, int32_t CurrentFrame)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets");
		
		ABW_ScoreCard_C_NetUpdateFrameSets_Params params {};
		params.FrameSets = FrameSets;
		params.CurrentPlayer = CurrentPlayer;
		params.CurrentFrame = CurrentFrame;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABW_ScoreCard_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay");
		
		ABW_ScoreCard_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            NumFrames                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            NumPlayers                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_ScoreCard_C::NetPrepareForGame(int32_t NumFrames, int32_t NumPlayers)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame");
		
		ABW_ScoreCard_C_NetPrepareForGame_Params params {};
		params.NumFrames = NumFrames;
		params.NumPlayers = NumPlayers;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.NetHide
	 * 		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
	 */
	void ABW_ScoreCard_C::NetHide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.NetHide");
		
		ABW_ScoreCard_C_NetHide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UScramEventBasePayload*                      Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_ScoreCard_C::TravelCapsuleOpened(class UObject* WorldContextObject, class UScramEventBasePayload* Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened");
		
		ABW_ScoreCard_C_TravelCapsuleOpened_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00669880
	 * 		Name   -> Function BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABW_ScoreCard_C::ExecuteUbergraph_BW_ScoreCard(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard");
		
		ABW_ScoreCard_C_ExecuteUbergraph_BW_ScoreCard_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABW_ScoreCard_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABW_ScoreCard_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BW_ScoreCard.BW_ScoreCard_C");
		return ptr;
	}

}


