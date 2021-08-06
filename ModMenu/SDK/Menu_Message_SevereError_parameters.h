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

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.EnableMenuInput
struct AMenu_Message_SevereError_C_EnableMenuInput_Params
{
	bool                                               InputEnabled;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.DisableMenuInput
struct AMenu_Message_SevereError_C_DisableMenuInput_Params
{
	bool                                               InputDisabled;                                             // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.RemoveSubMenu
struct AMenu_Message_SevereError_C_RemoveSubMenu_Params
{
	bool                                               Removed;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.HideSubMenu
struct AMenu_Message_SevereError_C_HideSubMenu_Params
{
	bool                                               MenuHidden;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.RestoreSubMenu
struct AMenu_Message_SevereError_C_RestoreSubMenu_Params
{
	bool                                               MenuShown;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.Initialize
struct AMenu_Message_SevereError_C_Initialize_Params
{
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.UpdateMaterial
struct AMenu_Message_SevereError_C_UpdateMaterial_Params
{
	class UCanvas*                                     Canvas;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.UserConstructionScript
struct AMenu_Message_SevereError_C_UserConstructionScript_Params
{
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.ReceiveBeginPlay
struct AMenu_Message_SevereError_C_ReceiveBeginPlay_Params
{
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.Update Target Canvas
struct AMenu_Message_SevereError_C_Update_Target_Canvas_Params
{
	class UCanvas*                                     Canvas;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Width;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Height;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function Menu_Message_SevereError.Menu_Message_SevereError_C.ExecuteUbergraph_Menu_Message_SevereError
struct AMenu_Message_SevereError_C_ExecuteUbergraph_Menu_Message_SevereError_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
