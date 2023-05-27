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
	 * Function Button_Sports.Button_Sports_C.EnableButtons
	 */
	struct AButton_Sports_C_EnableButtons_Params
	{	};

	/**
	 * Function Button_Sports.Button_Sports_C.DisableButtons
	 */
	struct AButton_Sports_C_DisableButtons_Params
	{	};

	/**
	 * Function Button_Sports.Button_Sports_C.Initialize
	 */
	struct AButton_Sports_C_Initialize_Params
	{	};

	/**
	 * Function Button_Sports.Button_Sports_C.UserConstructionScript
	 */
	struct AButton_Sports_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Button_Sports.Button_Sports_C.ReceiveBeginPlay
	 */
	struct AButton_Sports_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Button_Sports.Button_Sports_C.ButtonPressed
	 */
	struct AButton_Sports_C_ButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Sports.Button_Sports_C.ReceiveTick
	 */
	struct AButton_Sports_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Sports.Button_Sports_C.ReceiveEndPlay
	 */
	struct AButton_Sports_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Sports.Button_Sports_C.ButtonSwapComplete
	 */
	struct AButton_Sports_C_ButtonSwapComplete_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Sports.Button_Sports_C.ExecuteUbergraph_Button_Sports
	 */
	struct AButton_Sports_C_ExecuteUbergraph_Button_Sports_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Sports.Button_Sports_C.OptionChanging__DelegateSignature
	 */
	struct AButton_Sports_C_OptionChanging__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_Sports.Button_Sports_C.OptionChanged__DelegateSignature
	 */
	struct AButton_Sports_C_OptionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
