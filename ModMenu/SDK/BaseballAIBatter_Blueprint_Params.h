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
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetLook
	 */
	struct ABaseballAIBatter_Blueprint_C_SetLook_Params
	{	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.RandomizeLook
	 */
	struct ABaseballAIBatter_Blueprint_C_RandomizeLook_Params
	{	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ClearBat
	 */
	struct ABaseballAIBatter_Blueprint_C_ClearBat_Params
	{	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetBat
	 */
	struct ABaseballAIBatter_Blueprint_C_SetBat_Params
	{
	public:
		class UClass*                                              BatClass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PlayEffects;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UR1G[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.SetTeamColor
	 */
	struct ABaseballAIBatter_Blueprint_C_SetTeamColor_Params
	{
	public:
		bool                                                       Home;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A858[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.UserConstructionScript
	 */
	struct ABaseballAIBatter_Blueprint_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveBeginPlay
	 */
	struct ABaseballAIBatter_Blueprint_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.PlayBatSound
	 */
	struct ABaseballAIBatter_Blueprint_C_PlayBatSound_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ReceiveEndPlay
	 */
	struct ABaseballAIBatter_Blueprint_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.ExecuteUbergraph_BaseballAIBatter_Blueprint
	 */
	struct ABaseballAIBatter_Blueprint_C_ExecuteUbergraph_BaseballAIBatter_Blueprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9DA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BaseballAIBatter_Blueprint.BaseballAIBatter_Blueprint_C.LookRandomzied__DelegateSignature
	 */
	struct ABaseballAIBatter_Blueprint_C_LookRandomzied__DelegateSignature_Params
	{
	public:
		struct FAvatarLook                                         AvatarLook;                                              // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
