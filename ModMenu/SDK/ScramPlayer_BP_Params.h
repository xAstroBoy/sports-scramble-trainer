#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.Cleanup
	 */
	struct AScramPlayer_BP_C_Cleanup_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoDecrement
	 */
	struct AScramPlayer_BP_C_SlomoDecrement_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0Q79[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              Array;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SlomoIncrement
	 */
	struct AScramPlayer_BP_C_SlomoIncrement_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P1OC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<float>                                              Array;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.Slomo
	 */
	struct AScramPlayer_BP_C_Slomo_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ABS3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetDefaults
	 */
	struct AScramPlayer_BP_C_SetDefaults_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetCommonPreferences
	 */
	struct AScramPlayer_BP_C_SetCommonPreferences_Params
	{
	public:
		struct FCommonPlayerPreferences                            preferences;                                             // 0x0000(0x0002)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.GetCommonPreferences
	 */
	struct AScramPlayer_BP_C_GetCommonPreferences_Params
	{
	public:
		struct FCommonPlayerPreferences                            preferences;                                             // 0x0000(0x0002)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetBowlingPreferences
	 */
	struct AScramPlayer_BP_C_SetBowlingPreferences_Params
	{
	public:
		struct FBowlingPlayerPreferences                           preferences;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballBatterPreferences
	 */
	struct AScramPlayer_BP_C_SetBaseballBatterPreferences_Params
	{
	public:
		struct FBaseballBatterPreferences                          preferences;                                             // 0x0000(0x0003)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetBaseballPitcherPreferences
	 */
	struct AScramPlayer_BP_C_SetBaseballPitcherPreferences_Params
	{
	public:
		struct FBaseballPitcherPreferences                         preferences;                                             // 0x0000(0x0003)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetTennisPreferences
	 */
	struct AScramPlayer_BP_C_SetTennisPreferences_Params
	{
	public:
		struct FTennisPlayerPreferences                            preferences;                                             // 0x0000(0x0003)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.GetBowlingPreferences
	 */
	struct AScramPlayer_BP_C_GetBowlingPreferences_Params
	{
	public:
		struct FBowlingPlayerPreferences                           preferences;                                             // 0x0000(0x0001)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballBatterPreferences
	 */
	struct AScramPlayer_BP_C_GetBaseballBatterPreferences_Params
	{
	public:
		struct FBaseballBatterPreferences                          preferences;                                             // 0x0000(0x0003)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.GetBaseballPitcherPreferences
	 */
	struct AScramPlayer_BP_C_GetBaseballPitcherPreferences_Params
	{
	public:
		struct FBaseballPitcherPreferences                         preferences;                                             // 0x0000(0x0003)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.GetTennisPreferences
	 */
	struct AScramPlayer_BP_C_GetTennisPreferences_Params
	{
	public:
		struct FTennisPlayerPreferences                            preferences;                                             // 0x0000(0x0003)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.Initialize
	 */
	struct AScramPlayer_BP_C_Initialize_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetPlayerVisibility
	 */
	struct AScramPlayer_BP_C_SetPlayerVisibility_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.UserConstructionScript
	 */
	struct AScramPlayer_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__FinishedFunc
	 */
	struct AScramPlayer_BP_C_Timeline_Fade__FinishedFunc_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.Timeline_Fade__UpdateFunc
	 */
	struct AScramPlayer_BP_C_Timeline_Fade__UpdateFunc_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7
	 */
	struct AScramPlayer_BP_C_InpActEvt_RightGripTrigger_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_K2Node_InputKeyEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Left_Thumbstick_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_6
	 */
	struct AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_5
	 */
	struct AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Right_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Up_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Left_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1
	 */
	struct AScramPlayer_BP_C_InpActEvt_MotionController_Right_Thumbstick_Down_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_4
	 */
	struct AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_3
	 */
	struct AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_X_K2Node_InputActionEvent_2
	 */
	struct AScramPlayer_BP_C_InpActEvt_X_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InpActEvt_Y_K2Node_InputActionEvent_1
	 */
	struct AScramPlayer_BP_C_InpActEvt_Y_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveTick
	 */
	struct AScramPlayer_BP_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveBeginPlay
	 */
	struct AScramPlayer_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.FadeToBlack
	 */
	struct AScramPlayer_BP_C_FadeToBlack_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.FadeFromBlack
	 */
	struct AScramPlayer_BP_C_FadeFromBlack_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.InitialFadeIn
	 */
	struct AScramPlayer_BP_C_InitialFadeIn_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.GrabbedSomething
	 */
	struct AScramPlayer_BP_C_GrabbedSomething_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerOutOfBoundary
	 */
	struct AScramPlayer_BP_C_OnPlayerOutOfBoundary_Params
	{
	public:
		struct FTransform                                          ReturnTransform;                                         // 0x0000(0x0030)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.OnPlayerEnterBoundary
	 */
	struct AScramPlayer_BP_C_OnPlayerEnterBoundary_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.PauseGame
	 */
	struct AScramPlayer_BP_C_PauseGame_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.ResumeGame
	 */
	struct AScramPlayer_BP_C_ResumeGame_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerOutOfBoundary
	 */
	struct AScramPlayer_BP_C_QueuedPlayerOutOfBoundary_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.QueuedPlayerEnterBoundary
	 */
	struct AScramPlayer_BP_C_QueuedPlayerEnterBoundary_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.ClientReady
	 */
	struct AScramPlayer_BP_C_ClientReady_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.HostFadeToBlack
	 */
	struct AScramPlayer_BP_C_HostFadeToBlack_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.SetAvatarMaterials
	 */
	struct AScramPlayer_BP_C_SetAvatarMaterials_Params
	{
	public:
		struct FAvatarLook                                         AvatarLook;                                              // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.RecenterDetected
	 */
	struct AScramPlayer_BP_C_RecenterDetected_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.TravelCapsuleOpened
	 */
	struct AScramPlayer_BP_C_TravelCapsuleOpened_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.ReceiveEndPlay
	 */
	struct AScramPlayer_BP_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.ExecuteUbergraph_ScramPlayer_BP
	 */
	struct AScramPlayer_BP_C_ExecuteUbergraph_ScramPlayer_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_98Q9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerRecentered__DelegateSignature
	 */
	struct AScramPlayer_BP_C_PlayerRecentered__DelegateSignature_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.RemotePlayerReady__DelegateSignature
	 */
	struct AScramPlayer_BP_C_RemotePlayerReady__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerEnterBoundary__DelegateSignature
	 */
	struct AScramPlayer_BP_C_PlayerEnterBoundary__DelegateSignature_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerExitBoundary__DelegateSignature
	 */
	struct AScramPlayer_BP_C_PlayerExitBoundary__DelegateSignature_Params
	{	};

	/**
	 * Function ScramPlayer_BP.ScramPlayer_BP_C.PlayerFadedOut__DelegateSignature
	 */
	struct AScramPlayer_BP_C_PlayerFadedOut__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
