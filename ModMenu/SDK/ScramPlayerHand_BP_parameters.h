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

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.IsVisible
struct AScramPlayerHand_BP_C_IsVisible_Params
{
	bool                                               visible;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UpdateButtonFlashMesh
struct AScramPlayerHand_BP_C_UpdateButtonFlashMesh_Params
{
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.PlayHaptics
struct AScramPlayerHand_BP_C_PlayHaptics_Params
{
	class UHapticFeedbackEffect_Base*                  HapticsEffect;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              HapticsScale;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.UserConstructionScript
struct AScramPlayerHand_BP_C_UserConstructionScript_Params
{
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveBeginPlay
struct AScramPlayerHand_BP_C_ReceiveBeginPlay_Params
{
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ReceiveTick
struct AScramPlayerHand_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.FlashButtons
struct AScramPlayerHand_BP_C_FlashButtons_Params
{
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.StopFlashButtons
struct AScramPlayerHand_BP_C_StopFlashButtons_Params
{
};

// Function ScramPlayerHand_BP.ScramPlayerHand_BP_C.ExecuteUbergraph_ScramPlayerHand_BP
struct AScramPlayerHand_BP_C_ExecuteUbergraph_ScramPlayerHand_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
