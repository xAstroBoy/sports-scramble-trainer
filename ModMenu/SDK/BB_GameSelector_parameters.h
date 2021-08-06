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

// Function BB_GameSelector.BB_GameSelector_C.Cleanup
struct ABB_GameSelector_C_Cleanup_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.ResetInstrument
struct ABB_GameSelector_C_ResetInstrument_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.VanishAllBalls
struct ABB_GameSelector_C_VanishAllBalls_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.Initialize
struct ABB_GameSelector_C_Initialize_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.DestroyGameManagers
struct ABB_GameSelector_C_DestroyGameManagers_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.UserConstructionScript
struct ABB_GameSelector_C_UserConstructionScript_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.ReceiveBeginPlay
struct ABB_GameSelector_C_ReceiveBeginPlay_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.ReceiveEndPlay
struct ABB_GameSelector_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GameSelector.BB_GameSelector_C.SpawnGameTypeSelectionMenu
struct ABB_GameSelector_C_SpawnGameTypeSelectionMenu_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.GameTypeSelected
struct ABB_GameSelector_C_GameTypeSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GameSelector.BB_GameSelector_C.GameOver
struct ABB_GameSelector_C_GameOver_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.SpawnPitchingGameSelector
struct ABB_GameSelector_C_SpawnPitchingGameSelector_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.PitchingGameSelected
struct ABB_GameSelector_C_PitchingGameSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GameSelector.BB_GameSelector_C.SpawnBattingGameSelector
struct ABB_GameSelector_C_SpawnBattingGameSelector_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.BattingGameSelected
struct ABB_GameSelector_C_BattingGameSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GameSelector.BB_GameSelector_C.ResetGame
struct ABB_GameSelector_C_ResetGame_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.HomeAwayMenu
struct ABB_GameSelector_C_HomeAwayMenu_Params
{
};

// Function BB_GameSelector.BB_GameSelector_C.SubChoiceMade
struct ABB_GameSelector_C_SubChoiceMade_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GameSelector.BB_GameSelector_C.ExecuteUbergraph_BB_GameSelector
struct ABB_GameSelector_C_ExecuteUbergraph_BB_GameSelector_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BB_GameSelector.BB_GameSelector_C.ResetButtonPressed__DelegateSignature
struct ABB_GameSelector_C_ResetButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
