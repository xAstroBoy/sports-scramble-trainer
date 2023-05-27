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
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.ServerForceUpdateDormancy
	 */
	struct AScramGameMode_BP_C_ServerForceUpdateDormancy_Params
	{	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.UserConstructionScript
	 */
	struct AScramGameMode_BP_C_UserConstructionScript_Params
	{	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.K2_OnLogout
	 */
	struct AScramGameMode_BP_C_K2_OnLogout_Params
	{
	public:
		class AController*                                         ExitingController;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.ReceiveBeginPlay
	 */
	struct AScramGameMode_BP_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.StartOnlineMatchOfType
	 */
	struct AScramGameMode_BP_C_StartOnlineMatchOfType_Params
	{
	public:
		EScramSport                                                SportType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.ClientSportPreferencesReceived
	 */
	struct AScramGameMode_BP_C_ClientSportPreferencesReceived_Params
	{	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.K2_PostLogin
	 */
	struct AScramGameMode_BP_C_K2_PostLogin_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.SpawnOnlineGameHandler
	 */
	struct AScramGameMode_BP_C_SpawnOnlineGameHandler_Params
	{	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.ExecuteUbergraph_ScramGameMode_BP
	 */
	struct AScramGameMode_BP_C_ExecuteUbergraph_ScramGameMode_BP_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.ClientPlayerExit__DelegateSignature
	 */
	struct AScramGameMode_BP_C_ClientPlayerExit__DelegateSignature_Params
	{
	public:
		class AController*                                         ExitingPlayer;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpectator;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ScramGameMode_BP.ScramGameMode_BP_C.NewPlayerJoin__DelegateSignature
	 */
	struct AScramGameMode_BP_C_NewPlayerJoin__DelegateSignature_Params
	{
	public:
		class APlayerController*                                   NewPlayer;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsSpectator;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
