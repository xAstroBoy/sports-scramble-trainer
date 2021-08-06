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

// Function ScramPlayer_BP.ScramPlayer_BP_C.Cleanup
struct AScramPlayer_BP_C_Cleanup_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoDecrement
struct AScramPlayer_BP_C_SlomoDecrement_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Array;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoIncrement
struct AScramPlayer_BP_C_SlomoIncrement_Params
{
	int                                                Index;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      Array;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.Slomo
struct AScramPlayer_BP_C_Slomo_Params
{
	float                                              Scale;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetDefaults
struct AScramPlayer_BP_C_SetDefaults_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetCommonPreferences
struct AScramPlayer_BP_C_SetCommonPreferences_Params
{
	struct FCommonPlayerPreferences                    preferences;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.GetCommonPreferences
struct AScramPlayer_BP_C_GetCommonPreferences_Params
{
	struct FCommonPlayerPreferences                    preferences;                                               // (Parm, OutParm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetBowlingPreferences
struct AScramPlayer_BP_C_SetBowlingPreferences_Params
{
	struct FBowlingPlayerPreferences                   preferences;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballBatterPreferences
struct AScramPlayer_BP_C_SetBaseballBatterPreferences_Params
{
	struct FBaseballBatterPreferences                  preferences;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballPitcherPreferences
struct AScramPlayer_BP_C_SetBaseballPitcherPreferences_Params
{
	struct FBaseballPitcherPreferences                 preferences;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetTennisPreferences
struct AScramPlayer_BP_C_SetTennisPreferences_Params
{
	struct FTennisPlayerPreferences                    preferences;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.GetBowlingPreferences
struct AScramPlayer_BP_C_GetBowlingPreferences_Params
{
	struct FBowlingPlayerPreferences                   preferences;                                               // (Parm, OutParm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballBatterPreferences
struct AScramPlayer_BP_C_GetBaseballBatterPreferences_Params
{
	struct FBaseballBatterPreferences                  preferences;                                               // (Parm, OutParm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballPitcherPreferences
struct AScramPlayer_BP_C_GetBaseballPitcherPreferences_Params
{
	struct FBaseballPitcherPreferences                 preferences;                                               // (Parm, OutParm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.GetTennisPreferences
struct AScramPlayer_BP_C_GetTennisPreferences_Params
{
	struct FTennisPlayerPreferences                    preferences;                                               // (Parm, OutParm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.Initialize
struct AScramPlayer_BP_C_Initialize_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetPlayerVisibility
struct AScramPlayer_BP_C_SetPlayerVisibility_Params
{
	bool                                               visible;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.UserConstructionScript
struct AScramPlayer_BP_C_UserConstructionScript_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__FinishedFunc
struct AScramPlayer_BP_C_Timeline_Fade__FinishedFunc_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__UpdateFunc
struct AScramPlayer_BP_C_Timeline_Fade__UpdateFunc_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7
struct AScramPlayer_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8
struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7
struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6
struct AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5
struct AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_6
struct AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_6_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_5
struct AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_5_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4
struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3
struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2
struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1
struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_4
struct AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_4_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_3
struct AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_2
struct AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_2_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_1
struct AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_1_Params
{
	struct FKey                                        Key;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveTick
struct AScramPlayer_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveBeginPlay
struct AScramPlayer_BP_C_ReceiveBeginPlay_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.FadeToBlack
struct AScramPlayer_BP_C_FadeToBlack_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.FadeFromBlack
struct AScramPlayer_BP_C_FadeFromBlack_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.InitialFadeIn
struct AScramPlayer_BP_C_InitialFadeIn_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.GrabbedSomething
struct AScramPlayer_BP_C_GrabbedSomething_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary
struct AScramPlayer_BP_C_OnPlayerOutOfBoundary_Params
{
	struct FTransform                                  ReturnTransform;                                           // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerEnterBoundary
struct AScramPlayer_BP_C_OnPlayerEnterBoundary_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.PauseGame
struct AScramPlayer_BP_C_PauseGame_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.ResumeGame
struct AScramPlayer_BP_C_ResumeGame_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary
struct AScramPlayer_BP_C_QueuedPlayerOutOfBoundary_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerEnterBoundary
struct AScramPlayer_BP_C_QueuedPlayerEnterBoundary_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.ClientReady
struct AScramPlayer_BP_C_ClientReady_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.HostFadeToBlack
struct AScramPlayer_BP_C_HostFadeToBlack_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.SetAvatarMaterials
struct AScramPlayer_BP_C_SetAvatarMaterials_Params
{
	struct FAvatarLook                                 AvatarLook;                                                // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.RecenterDetected
struct AScramPlayer_BP_C_RecenterDetected_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.TravelCapsuleOpened
struct AScramPlayer_BP_C_TravelCapsuleOpened_Params
{
	class UObject*                                     WorldContextObject;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScramEventBasePayload*                      Payload;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveEndPlay
struct AScramPlayer_BP_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.ExecuteUbergraph_ScramPlayer_BP
struct AScramPlayer_BP_C_ExecuteUbergraph_ScramPlayer_BP_Params
{
	int                                                EntryPoint;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerRecentered__DelegateSignature
struct AScramPlayer_BP_C_PlayerRecentered__DelegateSignature_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.RemotePlayerReady__DelegateSignature
struct AScramPlayer_BP_C_RemotePlayerReady__DelegateSignature_Params
{
	int                                                ID;                                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerEnterBoundary__DelegateSignature
struct AScramPlayer_BP_C_PlayerEnterBoundary__DelegateSignature_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature
struct AScramPlayer_BP_C_PlayerExitBoundary__DelegateSignature_Params
{
};

// Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerFadedOut__DelegateSignature
struct AScramPlayer_BP_C_PlayerFadedOut__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
