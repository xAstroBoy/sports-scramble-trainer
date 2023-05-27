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
	 * Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchWarn_Enabled?
	 */
	struct AEquipmentMatchCheck_C_EquipmentMatchWarn_Enabled_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       EquipmentMatchWarningAllowed;                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Instrument
	 */
	struct AEquipmentMatchCheck_C_EquipmentMatchCheck_Instrument_Params
	{
	public:
		class ATN_Instrument_Base_C*                               Instrument;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       LocalPlayer;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_06NW[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ATN_Ball_Base_C*                                     BallOptional;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Match;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentMatchCheck.EquipmentMatchCheck_C.EquipmentMatchCheck_Ball
	 */
	struct AEquipmentMatchCheck_C_EquipmentMatchCheck_Ball_Params
	{
	public:
		class ATN_Ball_Base_C*                                     Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Match;                                                   // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function EquipmentMatchCheck.EquipmentMatchCheck_C.UserConstructionScript
	 */
	struct AEquipmentMatchCheck_C_UserConstructionScript_Params
	{	};

	/**
	 * Function EquipmentMatchCheck.EquipmentMatchCheck_C.ReceiveBeginPlay
	 */
	struct AEquipmentMatchCheck_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function EquipmentMatchCheck.EquipmentMatchCheck_C.ExecuteUbergraph_EquipmentMatchCheck
	 */
	struct AEquipmentMatchCheck_C_ExecuteUbergraph_EquipmentMatchCheck_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
