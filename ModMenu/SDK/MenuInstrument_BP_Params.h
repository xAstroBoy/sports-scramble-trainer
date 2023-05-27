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
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.BallHitRacket
	 */
	struct AMenuInstrument_BP_C_BallHitRacket_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4R59[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AScramBall*                                          Ball;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Callback;                                                // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.GetHand
	 */
	struct AMenuInstrument_BP_C_GetHand_Params
	{
	public:
		class AScramPlayerHand*                                    Hand;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMaterial
	 */
	struct AMenuInstrument_BP_C_InitializeMaterial_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.PlayActivateSound
	 */
	struct AMenuInstrument_BP_C_PlayActivateSound_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.PrepareMotionBlur
	 */
	struct AMenuInstrument_BP_C_PrepareMotionBlur_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.PlaySpawnFX
	 */
	struct AMenuInstrument_BP_C_PlaySpawnFX_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.SetSFXOverride
	 */
	struct AMenuInstrument_BP_C_SetSFXOverride_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HardHit;                                                 // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_OU0J[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.PlayBallHitSound
	 */
	struct AMenuInstrument_BP_C_PlayBallHitSound_Params
	{
	public:
		float                                                      BallSpeed;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GQML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.InitInstrument
	 */
	struct AMenuInstrument_BP_C_InitInstrument_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.UserConstructionScript
	 */
	struct AMenuInstrument_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__FinishedFunc
	 */
	struct AMenuInstrument_BP_C_Grow__FinishedFunc_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.Grow__UpdateFunc
	 */
	struct AMenuInstrument_BP_C_Grow__UpdateFunc_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__FinishedFunc
	 */
	struct AMenuInstrument_BP_C_Shrink__FinishedFunc_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.Shrink__UpdateFunc
	 */
	struct AMenuInstrument_BP_C_Shrink__UpdateFunc_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.ShowInstrument
	 */
	struct AMenuInstrument_BP_C_ShowInstrument_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.ShrinkRemoveInstrument
	 */
	struct AMenuInstrument_BP_C_ShrinkRemoveInstrument_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.InstrumentReleased
	 */
	struct AMenuInstrument_BP_C_InstrumentReleased_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.DestroyPrimitive
	 */
	struct AMenuInstrument_BP_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q3ZJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.SpawnEffect
	 */
	struct AMenuInstrument_BP_C_SpawnEffect_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.DisableSpawnFX
	 */
	struct AMenuInstrument_BP_C_DisableSpawnFX_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.OnChangePointerType
	 */
	struct AMenuInstrument_BP_C_OnChangePointerType_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.ReceiveBeginPlay
	 */
	struct AMenuInstrument_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.AdjustMenuPointer
	 */
	struct AMenuInstrument_BP_C_AdjustMenuPointer_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.InitializeMenuPointer
	 */
	struct AMenuInstrument_BP_C_InitializeMenuPointer_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.OnNotifyInputPress
	 */
	struct AMenuInstrument_BP_C_OnNotifyInputPress_Params
	{	};

	/**
	 * Function MenuInstrument_BP.MenuInstrument_BP_C.ExecuteUbergraph_MenuInstrument_BP
	 */
	struct AMenuInstrument_BP_C_ExecuteUbergraph_MenuInstrument_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
