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
	 * Function Button_TextOption.Button_TextOption_C.EnableButtons
	 */
	struct AButton_TextOption_C_EnableButtons_Params
	{	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.DisableButtons
	 */
	struct AButton_TextOption_C_DisableButtons_Params
	{	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.Initialize
	 */
	struct AButton_TextOption_C_Initialize_Params
	{	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.UserConstructionScript
	 */
	struct AButton_TextOption_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.ReceiveBeginPlay
	 */
	struct AButton_TextOption_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.PreviousButtonPressed
	 */
	struct AButton_TextOption_C_PreviousButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.ReceiveTick
	 */
	struct AButton_TextOption_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.NextButtonPressed
	 */
	struct AButton_TextOption_C_NextButtonPressed_Params
	{
	public:
		int32_t                                                    ButtonId;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.ReceiveEndPlay
	 */
	struct AButton_TextOption_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.ExecuteUbergraph_Button_TextOption
	 */
	struct AButton_TextOption_C_ExecuteUbergraph_Button_TextOption_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Button_TextOption.Button_TextOption_C.OptionChanged__DelegateSignature
	 */
	struct AButton_TextOption_C_OptionChanged__DelegateSignature_Params
	{
	public:
		int32_t                                                    NewIndex;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
