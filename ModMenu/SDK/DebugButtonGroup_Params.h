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
	 * Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtons
	 */
	struct ADebugButtonGroup_C_DestroyButtons_Params
	{	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.CreateButtons
	 */
	struct ADebugButtonGroup_C_CreateButtons_Params
	{	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.UserConstructionScript
	 */
	struct ADebugButtonGroup_C_UserConstructionScript_Params
	{	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.ReceiveBeginPlay
	 */
	struct ADebugButtonGroup_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.Button Pressed
	 */
	struct ADebugButtonGroup_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.ChoiceComplete
	 */
	struct ADebugButtonGroup_C_ChoiceComplete_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.CloseSelected
	 */
	struct ADebugButtonGroup_C_CloseSelected_Params
	{
	public:
		class AActor*                                              DestroyedActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.DestroyButtonGroup
	 */
	struct ADebugButtonGroup_C_DestroyButtonGroup_Params
	{	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.ReceiveTick
	 */
	struct ADebugButtonGroup_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.ExecuteUbergraph_DebugButtonGroup
	 */
	struct ADebugButtonGroup_C_ExecuteUbergraph_DebugButtonGroup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMadePreAutoDestroy__DelegateSignature
	 */
	struct ADebugButtonGroup_C_ChoiceMadePreAutoDestroy__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DebugButtonGroup.DebugButtonGroup_C.ChoiceMade__DelegateSignature
	 */
	struct ADebugButtonGroup_C_ChoiceMade__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonSelected;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
