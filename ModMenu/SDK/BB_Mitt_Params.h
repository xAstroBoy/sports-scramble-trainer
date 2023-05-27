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
	 * Function BB_Mitt.BB_Mitt_C.OnRep_Material
	 */
	struct ABB_Mitt_C_OnRep_Material_Params
	{	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.ApplyMaterial
	 */
	struct ABB_Mitt_C_ApplyMaterial_Params
	{	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.SetMaterial
	 */
	struct ABB_Mitt_C_SetMaterial_Params
	{
	public:
		class UMaterialInstance*                                   NewMaterial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.UserConstructionScript
	 */
	struct ABB_Mitt_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.ReceiveBeginPlay
	 */
	struct ABB_Mitt_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.BallCatch
	 */
	struct ABB_Mitt_C_BallCatch_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.ASyncScrambleLoad
	 */
	struct ABB_Mitt_C_ASyncScrambleLoad_Params
	{	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.SetColors
	 */
	struct ABB_Mitt_C_SetColors_Params
	{
	public:
		bool                                                       HomeTeam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.NetSetColors
	 */
	struct ABB_Mitt_C_NetSetColors_Params
	{
	public:
		bool                                                       HomeTeam;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.DestroyPrimitive
	 */
	struct ABB_Mitt_C_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AU8P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.NetResetColor
	 */
	struct ABB_Mitt_C_NetResetColor_Params
	{	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.ExecuteUbergraph_BB_Mitt
	 */
	struct ABB_Mitt_C_ExecuteUbergraph_BB_Mitt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8PU8[0xC];                                   // 0x0004(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BB_Mitt.BB_Mitt_C.BallCaught__DelegateSignature
	 */
	struct ABB_Mitt_C_BallCaught__DelegateSignature_Params
	{
	public:
		class UScramEventBasePayload*                              Payload;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
