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
	 * Function Header.Header_C.SetRed
	 */
	struct AHeader_C_SetRed_Params
	{	};

	/**
	 * Function Header.Header_C.UpdateHeaderText
	 */
	struct AHeader_C_UpdateHeaderText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Header.Header_C.Initialize
	 */
	struct AHeader_C_Initialize_Params
	{	};

	/**
	 * Function Header.Header_C.UserConstructionScript
	 */
	struct AHeader_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_Brackets__FinishedFunc
	 */
	struct AHeader_C_Timeline_Brackets__FinishedFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_Brackets__UpdateFunc
	 */
	struct AHeader_C_Timeline_Brackets__UpdateFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_RingsGrow__FinishedFunc
	 */
	struct AHeader_C_Timeline_RingsGrow__FinishedFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_RingsGrow__UpdateFunc
	 */
	struct AHeader_C_Timeline_RingsGrow__UpdateFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_RingMoveMinor__FinishedFunc
	 */
	struct AHeader_C_Timeline_RingMoveMinor__FinishedFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_RingMoveMinor__UpdateFunc
	 */
	struct AHeader_C_Timeline_RingMoveMinor__UpdateFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_ScaleWidget__FinishedFunc
	 */
	struct AHeader_C_Timeline_ScaleWidget__FinishedFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_ScaleWidget__UpdateFunc
	 */
	struct AHeader_C_Timeline_ScaleWidget__UpdateFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_RingMoveMajor__FinishedFunc
	 */
	struct AHeader_C_Timeline_RingMoveMajor__FinishedFunc_Params
	{	};

	/**
	 * Function Header.Header_C.Timeline_RingMoveMajor__UpdateFunc
	 */
	struct AHeader_C_Timeline_RingMoveMajor__UpdateFunc_Params
	{	};

	/**
	 * Function Header.Header_C.ReceiveBeginPlay
	 */
	struct AHeader_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Header.Header_C.ReceiveTick
	 */
	struct AHeader_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Header.Header_C.OpenBracket
	 */
	struct AHeader_C_OpenBracket_Params
	{	};

	/**
	 * Function Header.Header_C.CloseBracket
	 */
	struct AHeader_C_CloseBracket_Params
	{	};

	/**
	 * Function Header.Header_C.DestroyHeader
	 */
	struct AHeader_C_DestroyHeader_Params
	{	};

	/**
	 * Function Header.Header_C.OpenRings
	 */
	struct AHeader_C_OpenRings_Params
	{	};

	/**
	 * Function Header.Header_C.CloseRings
	 */
	struct AHeader_C_CloseRings_Params
	{	};

	/**
	 * Function Header.Header_C.FinishOpenRings
	 */
	struct AHeader_C_FinishOpenRings_Params
	{	};

	/**
	 * Function Header.Header_C.FinishCloseRings
	 */
	struct AHeader_C_FinishCloseRings_Params
	{	};

	/**
	 * Function Header.Header_C.ShowWidget
	 */
	struct AHeader_C_ShowWidget_Params
	{	};

	/**
	 * Function Header.Header_C.HideWidget
	 */
	struct AHeader_C_HideWidget_Params
	{	};

	/**
	 * Function Header.Header_C.StartRingOpen
	 */
	struct AHeader_C_StartRingOpen_Params
	{	};

	/**
	 * Function Header.Header_C.FinishRingClose
	 */
	struct AHeader_C_FinishRingClose_Params
	{	};

	/**
	 * Function Header.Header_C.PlaySFX_BracketOpen
	 */
	struct AHeader_C_PlaySFX_BracketOpen_Params
	{	};

	/**
	 * Function Header.Header_C.PlaySFX_BracketClose
	 */
	struct AHeader_C_PlaySFX_BracketClose_Params
	{	};

	/**
	 * Function Header.Header_C.PlaySFX_RingsFinishUp
	 */
	struct AHeader_C_PlaySFX_RingsFinishUp_Params
	{	};

	/**
	 * Function Header.Header_C.PlaySFX_RingsFinishDown
	 */
	struct AHeader_C_PlaySFX_RingsFinishDown_Params
	{	};

	/**
	 * Function Header.Header_C.InstantOpen
	 */
	struct AHeader_C_InstantOpen_Params
	{	};

	/**
	 * Function Header.Header_C.ExecuteUbergraph_Header
	 */
	struct AHeader_C_ExecuteUbergraph_Header_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Header.Header_C.RemoveMenu__DelegateSignature
	 */
	struct AHeader_C_RemoveMenu__DelegateSignature_Params
	{	};

	/**
	 * Function Header.Header_C.SpawnInitialMenu__DelegateSignature
	 */
	struct AHeader_C_SpawnInitialMenu__DelegateSignature_Params
	{	};

	/**
	 * Function Header.Header_C.BracketOpen__DelegateSignature
	 */
	struct AHeader_C_BracketOpen__DelegateSignature_Params
	{	};

	/**
	 * Function Header.Header_C.BracketClosed__DelegateSignature
	 */
	struct AHeader_C_BracketClosed__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
