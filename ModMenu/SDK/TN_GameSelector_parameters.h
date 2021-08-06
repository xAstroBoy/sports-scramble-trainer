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

// Function TN_GameSelector.TN_GameSelector_C.Initialize_Spectator
struct ATN_GameSelector_C_Initialize_Spectator_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.ResetRacket
struct ATN_GameSelector_C_ResetRacket_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.DestroyAllMenus
struct ATN_GameSelector_C_DestroyAllMenus_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.VanishAllBalls
struct ATN_GameSelector_C_VanishAllBalls_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.Initialize
struct ATN_GameSelector_C_Initialize_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.DestroyGameManagers
struct ATN_GameSelector_C_DestroyGameManagers_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.UserConstructionScript
struct ATN_GameSelector_C_UserConstructionScript_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.OnLoaded_D047EA744DB91F927291E1A0E96E30B4
struct ATN_GameSelector_C_OnLoaded_D047EA744DB91F927291E1A0E96E30B4_Params
{
	class UClass*                                      Loaded;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_GameSelector.TN_GameSelector_C.ReceiveBeginPlay
struct ATN_GameSelector_C_ReceiveBeginPlay_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.GameSelected
struct ATN_GameSelector_C_GameSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_GameSelector.TN_GameSelector_C.SpawnGameSelectionMenu
struct ATN_GameSelector_C_SpawnGameSelectionMenu_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.GameOver
struct ATN_GameSelector_C_GameOver_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.ReceiveEndPlay
struct ATN_GameSelector_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_GameSelector.TN_GameSelector_C.ResetGame
struct ATN_GameSelector_C_ResetGame_Params
{
};

// Function TN_GameSelector.TN_GameSelector_C.ExecuteUbergraph_TN_GameSelector
struct ATN_GameSelector_C_ExecuteUbergraph_TN_GameSelector_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TN_GameSelector.TN_GameSelector_C.GeoChanged__DelegateSignature
struct ATN_GameSelector_C_GeoChanged__DelegateSignature_Params
{
	struct FName                                       NewGeo;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
