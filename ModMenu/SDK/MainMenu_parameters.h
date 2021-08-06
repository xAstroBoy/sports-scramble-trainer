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

// Function MainMenu.MainMenu_C.SpawnButton
struct AMainMenu_C_SpawnButton_Params
{
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FUI_ButtonData                              ButtonDataStart;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUI_ButtonData                              ButtonDataToggled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          Button;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.DestroyMainMenu
struct AMainMenu_C_DestroyMainMenu_Params
{
};

// Function MainMenu.MainMenu_C.Initialize
struct AMainMenu_C_Initialize_Params
{
};

// Function MainMenu.MainMenu_C.UserConstructionScript
struct AMainMenu_C_UserConstructionScript_Params
{
};

// Function MainMenu.MainMenu_C.ReceiveBeginPlay
struct AMainMenu_C_ReceiveBeginPlay_Params
{
};

// Function MainMenu.MainMenu_C.SelectionMade
struct AMainMenu_C_SelectionMade_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.ButtonSwapped
struct AMainMenu_C_ButtonSwapped_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.ButtonDestroyed
struct AMainMenu_C_ButtonDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.ButtonTouched
struct AMainMenu_C_ButtonTouched_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.ButtonUntouched
struct AMainMenu_C_ButtonUntouched_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.CreateMenu
struct AMainMenu_C_CreateMenu_Params
{
};

// Function MainMenu.MainMenu_C.ExecuteUbergraph_MainMenu
struct AMainMenu_C_ExecuteUbergraph_MainMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.MainMenuSelectionMade__DelegateSignature
struct AMainMenu_C_MainMenuSelectionMade__DelegateSignature_Params
{
	TEnumAsByte<MainMenuChoices_EMainMenuChoices>      Choice;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function MainMenu.MainMenu_C.TopMenuDeactivated__DelegateSignature
struct AMainMenu_C_TopMenuDeactivated__DelegateSignature_Params
{
};

// Function MainMenu.MainMenu_C.TopMenuActivated__DelegateSignature
struct AMainMenu_C_TopMenuActivated__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
