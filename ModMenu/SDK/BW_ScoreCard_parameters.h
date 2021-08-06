#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BW_ScoreCard.BW_ScoreCard_C.UpdatePlayerNames
struct ABW_ScoreCard_C_UpdatePlayerNames_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.PrepareForGame
struct ABW_ScoreCard_C_PrepareForGame_Params
{
	int                                                NumFrames;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Hidden;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSets
struct ABW_ScoreCard_C_UpdateFrameSets_Params
{
	TArray<struct FBowlingFrameSet>                    FrameSets;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CurrentPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentFrame;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_ScoreCard.BW_ScoreCard_C.Initialize
struct ABW_ScoreCard_C_Initialize_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.UpdateFrameSet
struct ABW_ScoreCard_C_UpdateFrameSet_Params
{
	struct FBowlingFrameSet                            frameSet;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UBW_ScoreCardFrameSet_Widget_C*              FrameSetWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UBW_ScoreCardFrame_Widget_C*>         FrameWidgets;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsPlayerActive;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                CurrentFrame;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_ScoreCard.BW_ScoreCard_C.UserConstructionScript
struct ABW_ScoreCard_C_UserConstructionScript_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.Scale__FinishedFunc
struct ABW_ScoreCard_C_Scale__FinishedFunc_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.Scale__UpdateFunc
struct ABW_ScoreCard_C_Scale__UpdateFunc_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.NetUpdateFrameSets
struct ABW_ScoreCard_C_NetUpdateFrameSets_Params
{
	TArray<struct FBowlingFrameSet>                    FrameSets;                                                 // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	int                                                CurrentPlayer;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                CurrentFrame;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_ScoreCard.BW_ScoreCard_C.ReceiveBeginPlay
struct ABW_ScoreCard_C_ReceiveBeginPlay_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.NetPrepareForGame
struct ABW_ScoreCard_C_NetPrepareForGame_Params
{
	int                                                NumFrames;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumPlayers;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_ScoreCard.BW_ScoreCard_C.NetHide
struct ABW_ScoreCard_C_NetHide_Params
{
};

// Function BW_ScoreCard.BW_ScoreCard_C.TravelCapsuleOpened
struct ABW_ScoreCard_C_TravelCapsuleOpened_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_ScoreCard.BW_ScoreCard_C.ExecuteUbergraph_BW_ScoreCard
struct ABW_ScoreCard_C_ExecuteUbergraph_BW_ScoreCard_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
