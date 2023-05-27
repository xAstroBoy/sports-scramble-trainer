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
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UpdateHandVisibility
	 */
	struct AScramTennisAI_Blueprint_C_UpdateHandVisibility_Params
	{
	public:
		bool                                                       Hidden;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.RandomizeLook
	 */
	struct AScramTennisAI_Blueprint_C_RandomizeLook_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Initialize
	 */
	struct AScramTennisAI_Blueprint_C_Initialize_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayHitSound
	 */
	struct AScramTennisAI_Blueprint_C_PlayHitSound_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WI09[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ChangeRacket
	 */
	struct AScramTennisAI_Blueprint_C_ChangeRacket_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoFX;                                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XENA[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.UserConstructionScript
	 */
	struct AScramTennisAI_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__FinishedFunc
	 */
	struct AScramTennisAI_Blueprint_C_Timeline_ScaleUp__FinishedFunc_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.Timeline_ScaleUp__UpdateFunc
	 */
	struct AScramTennisAI_Blueprint_C_Timeline_ScaleUp__UpdateFunc_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveBeginPlay
	 */
	struct AScramTennisAI_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ReceiveEndPlay
	 */
	struct AScramTennisAI_Blueprint_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlayRacquetSound
	 */
	struct AScramTennisAI_Blueprint_C_PlayRacquetSound_Params
	{
	public:
		class ATennisBall*                                         Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.PlaySwingFX
	 */
	struct AScramTennisAI_Blueprint_C_PlaySwingFX_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ScaleUp
	 */
	struct AScramTennisAI_Blueprint_C_ScaleUp_Params
	{	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.ExecuteUbergraph_ScramTennisAI_Blueprint
	 */
	struct AScramTennisAI_Blueprint_C_ExecuteUbergraph_ScramTennisAI_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramTennisAI_Blueprint.ScramTennisAI_Blueprint_C.AI_Hit_Ball__DelegateSignature
	 */
	struct AScramTennisAI_Blueprint_C_AI_Hit_Ball__DelegateSignature_Params
	{
	public:
		class ATennisBall*                                         Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
