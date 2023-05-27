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
	 * Function FunctionLibrary.FunctionLibrary_C.PlayThemeMusic
	 */
	struct UFunctionLibrary_C_PlayThemeMusic_Params
	{
	public:
		bool                                                       PlayIntro;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X2XX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FadeTime;                                                // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetPlayerNames
	 */
	struct UFunctionLibrary_C_GetPlayerNames_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    MaxLength;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LI3Z[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Player1;                                                 // 0x0018(0x0018)  (Parm, OutParm)
		class FText                                                Player2;                                                 // 0x0030(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetBaseballInstrumentProperties
	 */
	struct UFunctionLibrary_C_GetBaseballInstrumentProperties_Params
	{
	public:
		TArray<EBaseballInstrumentType>                            InstrumentTypes;                                         // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FBaseballInstrumentEntryProperties>          Properties;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetBaseballBallProperties
	 */
	struct UFunctionLibrary_C_GetBaseballBallProperties_Params
	{
	public:
		TArray<EBaseballBallType>                                  BallTypes;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FBaseballBallScrambleProperties>             Properties;                                              // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.IsButtonTouchActor
	 */
	struct UFunctionLibrary_C_IsButtonTouchActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YMB3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.RemoveAllFireAndForgetActors
	 */
	struct UFunctionLibrary_C_RemoveAllFireAndForgetActors_Params
	{
	public:
		bool                                                       Instant;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Z33K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetLocText
	 */
	struct UFunctionLibrary_C_GetLocText_Params
	{
	public:
		class FName                                                LocTextName;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Text;                                                    // 0x0010(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.DestroyAllGrabbables
	 */
	struct UFunctionLibrary_C_DestroyAllGrabbables_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.CheckMatchFromClasses
	 */
	struct UFunctionLibrary_C_CheckMatchFromClasses_Params
	{
	public:
		class UClass*                                              InstrumentClass;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CCZM[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromBallClasses
	 */
	struct UFunctionLibrary_C_GetMatchesFromBallClasses_Params
	{
	public:
		TArray<class UClass*>                                      BallClasses;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       UseScramblerExclusions;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_X22T[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      RacketClasses;                                           // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetMatchesFromRacketClasses
	 */
	struct UFunctionLibrary_C_GetMatchesFromRacketClasses_Params
	{
	public:
		TArray<class UClass*>                                      RacketClasses;                                           // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
		bool                                                       UseScramblerExclusions;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_39CV[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             __WorldContext;                                          // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      BallClasses;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisBallClass
	 */
	struct UFunctionLibrary_C_GetActiveTennisBallClass_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function FunctionLibrary.FunctionLibrary_C.GetActiveTennisRacketClasses
	 */
	struct UFunctionLibrary_C_GetActiveTennisRacketClasses_Params
	{
	public:
		class UObject*                                             __WorldContext;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      RacketClasses;                                           // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
