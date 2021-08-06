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

// Function BW_GameSelector.BW_GameSelector_C.ResetRacket
struct ABW_GameSelector_C_ResetRacket_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.DestroyAllMenus
struct ABW_GameSelector_C_DestroyAllMenus_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.VanishAllBalls
struct ABW_GameSelector_C_VanishAllBalls_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.Initialize
struct ABW_GameSelector_C_Initialize_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.DestroyGameManagers
struct ABW_GameSelector_C_DestroyGameManagers_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.UserConstructionScript
struct ABW_GameSelector_C_UserConstructionScript_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.ReceiveBeginPlay
struct ABW_GameSelector_C_ReceiveBeginPlay_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.GameSelected
struct ABW_GameSelector_C_GameSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_GameSelector.BW_GameSelector_C.SpawnGameSelectionMenu
struct ABW_GameSelector_C_SpawnGameSelectionMenu_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.GameOver
struct ABW_GameSelector_C_GameOver_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.ReceiveEndPlay
struct ABW_GameSelector_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BW_GameSelector.BW_GameSelector_C.ResetGame
struct ABW_GameSelector_C_ResetGame_Params
{
};

// Function BW_GameSelector.BW_GameSelector_C.ExecuteUbergraph_BW_GameSelector
struct ABW_GameSelector_C_ExecuteUbergraph_BW_GameSelector_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
