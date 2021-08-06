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

// Function DemoMainMenu.DemoMainMenu_C.ShowMenu
struct ADemoMainMenu_C_ShowMenu_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.HideMenu
struct ADemoMainMenu_C_HideMenu_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.BindPause
struct ADemoMainMenu_C_BindPause_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.RemoveButtons
struct ADemoMainMenu_C_RemoveButtons_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.DisableButtonInput
struct ADemoMainMenu_C_DisableButtonInput_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.SpawnButton
struct ADemoMainMenu_C_SpawnButton_Params
{
	struct FTransform                                  SpawnTransform;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FUI_ButtonData                              ButtonDataStart;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	struct FUI_ButtonData                              ButtonDataToggled;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AButton_Standard_C*                          Button;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DemoMainMenu.DemoMainMenu_C.Initialize
struct ADemoMainMenu_C_Initialize_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.UserConstructionScript
struct ADemoMainMenu_C_UserConstructionScript_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.ReceiveBeginPlay
struct ADemoMainMenu_C_ReceiveBeginPlay_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.SelectionMade
struct ADemoMainMenu_C_SelectionMade_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DemoMainMenu.DemoMainMenu_C.CloseMenu
struct ADemoMainMenu_C_CloseMenu_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.ReceiveTick
struct ADemoMainMenu_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DemoMainMenu.DemoMainMenu_C.ButtonSwapped
struct ADemoMainMenu_C_ButtonSwapped_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DemoMainMenu.DemoMainMenu_C.OpenMenu
struct ADemoMainMenu_C_OpenMenu_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.ButtonDestroyed
struct ADemoMainMenu_C_ButtonDestroyed_Params
{
	class AActor*                                      DestroyedActor;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DemoMainMenu.DemoMainMenu_C.GamePaused
struct ADemoMainMenu_C_GamePaused_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.GameUnpaused
struct ADemoMainMenu_C_GameUnpaused_Params
{
};

// Function DemoMainMenu.DemoMainMenu_C.ExecuteUbergraph_DemoMainMenu
struct ADemoMainMenu_C_ExecuteUbergraph_DemoMainMenu_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function DemoMainMenu.DemoMainMenu_C.ChoiceMade__DelegateSignature
struct ADemoMainMenu_C_ChoiceMade__DelegateSignature_Params
{
	int                                                ButtonId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
