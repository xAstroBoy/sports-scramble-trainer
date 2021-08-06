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

// Function MultiplayerMenu.MultiplayerMenu_C.UserConstructionScript
struct AMultiplayerMenu_C_UserConstructionScript_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.ReceiveBeginPlay
struct AMultiplayerMenu_C_ReceiveBeginPlay_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.SessionsFound
struct AMultiplayerMenu_C_SessionsFound_Params
{
	TArray<struct FString>                             SessionsFound;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function MultiplayerMenu.MultiplayerMenu_C.NoSessionsFound
struct AMultiplayerMenu_C_NoSessionsFound_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.UnbindFromInstance
struct AMultiplayerMenu_C_UnbindFromInstance_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.CreateButtons
struct AMultiplayerMenu_C_CreateButtons_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.ChoiceMade
struct AMultiplayerMenu_C_ChoiceMade_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiplayerMenu.MultiplayerMenu_C.JoinFailed
struct AMultiplayerMenu_C_JoinFailed_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.JoinSuccess
struct AMultiplayerMenu_C_JoinSuccess_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.GameSelected
struct AMultiplayerMenu_C_GameSelected_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiplayerMenu.MultiplayerMenu_C.SpawnTypeSelectionMenu
struct AMultiplayerMenu_C_SpawnTypeSelectionMenu_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.GetSessions
struct AMultiplayerMenu_C_GetSessions_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.CreateSportButtons
struct AMultiplayerMenu_C_CreateSportButtons_Params
{
};

// Function MultiplayerMenu.MultiplayerMenu_C.SportChosen
struct AMultiplayerMenu_C_SportChosen_Params
{
	int                                                ButtonSelected;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiplayerMenu.MultiplayerMenu_C.ReceiveTick
struct AMultiplayerMenu_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiplayerMenu.MultiplayerMenu_C.AvatarDone
struct AMultiplayerMenu_C_AvatarDone_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiplayerMenu.MultiplayerMenu_C.ExecuteUbergraph_MultiplayerMenu
struct AMultiplayerMenu_C_ExecuteUbergraph_MultiplayerMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MultiplayerMenu.MultiplayerMenu_C.BackButtonSelected__DelegateSignature
struct AMultiplayerMenu_C_BackButtonSelected__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
