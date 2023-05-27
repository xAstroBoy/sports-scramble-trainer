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
	 * Function BW_Bomb.BW_Bomb_C.TryExplode
	 */
	struct ABW_Bomb_C_TryExplode_Params
	{
	public:
		bool                                                       Force;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Success;                                                 // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.HasExploded
	 */
	struct ABW_Bomb_C_HasExploded_Params
	{
	public:
		bool                                                       has;                                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.UserConstructionScript
	 */
	struct ABW_Bomb_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.ReceiveBeginPlay
	 */
	struct ABW_Bomb_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.ReceiveEndPlay
	 */
	struct ABW_Bomb_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.ExplodeCheck
	 */
	struct ABW_Bomb_C_ExplodeCheck_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.Local_ExplodeFX
	 */
	struct ABW_Bomb_C_Local_ExplodeFX_Params
	{	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.PickedUp
	 */
	struct ABW_Bomb_C_PickedUp_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.Multi_ExplodeFX
	 */
	struct ABW_Bomb_C_Multi_ExplodeFX_Params
	{	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.Server_ExplodeFX
	 */
	struct ABW_Bomb_C_Server_ExplodeFX_Params
	{	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.LR_ExplodeFX
	 */
	struct ABW_Bomb_C_LR_ExplodeFX_Params
	{	};

	/**
	 * Function BW_Bomb.BW_Bomb_C.ExecuteUbergraph_BW_Bomb
	 */
	struct ABW_Bomb_C_ExecuteUbergraph_BW_Bomb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
