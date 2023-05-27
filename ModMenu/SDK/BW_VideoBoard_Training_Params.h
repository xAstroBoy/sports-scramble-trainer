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
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.Initialize
	 */
	struct ABW_VideoBoard_Training_C_Initialize_Params
	{	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.UserConstructionScript
	 */
	struct ABW_VideoBoard_Training_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveBeginPlay
	 */
	struct ABW_VideoBoard_Training_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.Reset
	 */
	struct ABW_VideoBoard_Training_C_Reset_Params
	{	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ReceiveEndPlay
	 */
	struct ABW_VideoBoard_Training_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.PlayMatchVideo
	 */
	struct ABW_VideoBoard_Training_C_PlayMatchVideo_Params
	{
	public:
		int32_t                                                    Round;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.ExecuteUbergraph_BW_VideoBoard_Training
	 */
	struct ABW_VideoBoard_Training_C_ExecuteUbergraph_BW_VideoBoard_Training_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoStarted__DelegateSignature
	 */
	struct ABW_VideoBoard_Training_C_MatchVideoStarted__DelegateSignature_Params
	{
	public:
		struct FTimespan                                           Duration;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.VideoFadeOutComplete__DelegateSignature
	 */
	struct ABW_VideoBoard_Training_C_VideoFadeOutComplete__DelegateSignature_Params
	{	};

	/**
	 * Function BW_VideoBoard_Training.BW_VideoBoard_Training_C.MatchVideoComplete__DelegateSignature
	 */
	struct ABW_VideoBoard_Training_C_MatchVideoComplete__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
