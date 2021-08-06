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

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage2
struct ABP_TrophyAwardBase_C_DebugMessage2_Params
{
	struct FString                                     Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FString                                     Value;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.NewFunction_1
struct ABP_TrophyAwardBase_C_NewFunction_1_Params
{
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ModeCheck
struct ABP_TrophyAwardBase_C_ModeCheck_Params
{
	bool                                               shldContinue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.CheckPlayer
struct ABP_TrophyAwardBase_C_CheckPlayer_Params
{
	int                                                PlayerIndex;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsLocalPlayer;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.IsMultiplayer
struct ABP_TrophyAwardBase_C_IsMultiplayer_Params
{
	bool                                               isMulti;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ForceEarn
struct ABP_TrophyAwardBase_C_ForceEarn_Params
{
	class AActor*                                      WorldObject;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventTennisEventPayload*               Payload;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugEarn
struct ABP_TrophyAwardBase_C_DebugEarn_Params
{
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.DebugMessage
struct ABP_TrophyAwardBase_C_DebugMessage_Params
{
	struct FString                                     Message;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.UserConstructionScript
struct ABP_TrophyAwardBase_C_UserConstructionScript_Params
{
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ReceiveBeginPlay
struct ABP_TrophyAwardBase_C_ReceiveBeginPlay_Params
{
};

// Function BP_TrophyAwardBase.BP_TrophyAwardBase_C.ExecuteUbergraph_BP_TrophyAwardBase
struct ABP_TrophyAwardBase_C_ExecuteUbergraph_BP_TrophyAwardBase_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
