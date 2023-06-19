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
	 * Function SportsScramble.AcceptInviteCallbackProxy.FriendInviteClientConnect
	 */
	struct UAcceptInviteCallbackProxy_FriendInviteClientConnect_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AcceptInviteCallbackProxy.AcceptInvite
	 */
	struct UAcceptInviteCallbackProxy_AcceptInvite_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScramGameInvite                                    invite;                                                  // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UAcceptInviteCallbackProxy*                          ReturnValue;                                             // 0x0068(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ActorSet.ResetActors
	 */
	struct UActorSet_ResetActors_Params
	{	};

	/**
	 * Function SportsScramble.ActorSet.GetNextActor
	 */
	struct UActorSet_GetNextActor_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ActorSet.AvoidActor
	 */
	struct UActorSet_AvoidActor_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.UniqueNetIdToString
	 */
	struct UAdvancedSessionsLibrary_UniqueNetIdToString_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              String;                                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.SetPlayerName
	 */
	struct UAdvancedSessionsLibrary_SetPlayerName_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionSearchProperty_Params
	{
	public:
		struct FSessionPropertyKeyPair                             SessionSearchProperty;                                   // 0x0000(0x0020)  (Parm, NativeAccessSpecifierPublic)
		EOnlineComparisonOpRedux                                   ComparisonOp;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PY3E[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionsSearchSetting                              ReturnValue;                                             // 0x0028(0x0028)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyString_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Value;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0018(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyInt_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JSFW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyFloat_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Value;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L1DH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyByte_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2GNG[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool
	 */
	struct UAdvancedSessionsLibrary_MakeLiteralSessionPropertyBool_Params
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Value;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D96V[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             ReturnValue;                                             // 0x0010(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.IsValidUniqueNetID
	 */
	struct UAdvancedSessionsLibrary_IsValidUniqueNetID_Params
	{
	public:
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.IsValidSession
	 */
	struct UAdvancedSessionsLibrary_IsValidSession_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.IsPlayerInSession
	 */
	struct UAdvancedSessionsLibrary_IsPlayerInSession_Params
	{
	public:
		struct FBPUniqueNetId                                      PlayerToCheck;                                           // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsInSession;                                            // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.HasOnlineSubsystem
	 */
	struct UAdvancedSessionsLibrary_HasOnlineSubsystem_Params
	{
	public:
		class FName                                                SubSystemName;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState
	 */
	struct UAdvancedSessionsLibrary_GetUniqueNetIDFromPlayerState_Params
	{
	public:
		class APlayerState*                                        PlayerState;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetUniqueNetID
	 */
	struct UAdvancedSessionsLibrary_GetUniqueNetID_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      UniqueNetId;                                             // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetUniqueBuildID
	 */
	struct UAdvancedSessionsLibrary_GetUniqueBuildID_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x00B8)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    UniqueBuildId;                                           // 0x00B8(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionState
	 */
	struct UAdvancedSessionsLibrary_GetSessionState_Params
	{
	public:
		EBPOnlineSessionState                                      SessionState;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionSettings
	 */
	struct UAdvancedSessionsLibrary_GetSessionSettings_Params
	{
	public:
		int32_t                                                    NumConnections;                                          // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumPrivateConnections;                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsLAN;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDedicated;                                            // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowInvites;                                           // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinInProgress;                                    // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsAnticheatEnabled;                                     // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PNBA[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    BuildUniqueID;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6ATL[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyString
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyString_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U2UW[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              SettingValue;                                            // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyKey
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyKey_Params
	{
	public:
		struct FSessionPropertyKeyPair                             SessionProperty;                                         // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyInt
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyInt_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_F1IS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    SettingValue;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyFloat
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyFloat_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QJVK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      SettingValue;                                            // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyByte
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyByte_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              SettingValue;                                            // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetSessionPropertyBool
	 */
	struct UAdvancedSessionsLibrary_GetSessionPropertyBool_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESessionSettingSearchResult                                SearchResult;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       SettingValue;                                            // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetPlayerName
	 */
	struct UAdvancedSessionsLibrary_GetPlayerName_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayerName;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers
	 */
	struct UAdvancedSessionsLibrary_GetNumberOfNetworkPlayers_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumNetPlayers;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetNetPlayerIndex
	 */
	struct UAdvancedSessionsLibrary_GetNetPlayerIndex_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NetPlayerIndex;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetExtraSettings
	 */
	struct UAdvancedSessionsLibrary_GetExtraSettings_Params
	{
	public:
		struct FBlueprintSessionResult                             SessionResult;                                           // 0x0000(0x00B8)  (Parm, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x00B8(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.GetCurrentUniqueBuildID
	 */
	struct UAdvancedSessionsLibrary_GetCurrentUniqueBuildID_Params
	{
	public:
		int32_t                                                    UniqueBuildId;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyIndexByName
	 */
	struct UAdvancedSessionsLibrary_FindSessionPropertyIndexByName_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_13VW[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    OutIndex;                                                // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.FindSessionPropertyByName
	 */
	struct UAdvancedSessionsLibrary_FindSessionPropertyByName_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingsName;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBlueprintResultSwitch                                     Result;                                                  // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_93WO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FSessionPropertyKeyPair                             OutProperty;                                             // 0x0020(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID
	 */
	struct UAdvancedSessionsLibrary_EqualEqual_UNetIDUnetID_Params
	{
	public:
		struct FBPUniqueNetId                                      A;                                                       // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBPUniqueNetId                                      B;                                                       // 0x0020(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.AdvancedSessionsLibrary.AddOrModifyExtraSettings
	 */
	struct UAdvancedSessionsLibrary_AddOrModifyExtraSettings_Params
	{
	public:
		TArray<struct FSessionPropertyKeyPair>                     SettingsArray;                                           // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     NewOrChangedSettings;                                    // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ModifiedSettingsArray;                                   // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramActor.PlayManagedSoundAtLocation
	 */
	struct AScramActor_PlayManagedSoundAtLocation_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            Rotation;                                                // 0x0014(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x0024(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8OPG[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundAttenuation*                                   AttenuationSettings;                                     // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0038(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAudioComponent*                                     ReturnValue;                                             // 0x0040(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramActor.HasBegunPlay
	 */
	struct AScramActor_HasBegunPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramActor.AttachSound2D
	 */
	struct AScramActor_AttachSound2D_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      VolumeMultiplier;                                        // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MWGR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USoundConcurrency*                                   ConcurrencySettings;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       IsUiSound;                                               // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M5GU[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAudioComponent*                                     ReturnValue;                                             // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramAvatar.PlaySpawnAnimation
	 */
	struct AScramAvatar_PlaySpawnAnimation_Params
	{	};

	/**
	 * Function SportsScramble.ScramAvatar.GetPlayerIndex
	 */
	struct AScramAvatar_GetPlayerIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramAvatar.GetPlayer
	 */
	struct AScramAvatar_GetPlayer_Params
	{
	public:
		class AScramPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramAvatar.GetGlobalColor
	 */
	struct AScramAvatar_GetGlobalColor_Params
	{
	public:
		class FName                                                globalColorName;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramMeshActor.HasBegunPlay
	 */
	struct AScramMeshActor_HasBegunPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.SetPrimitiveTrajectory
	 */
	struct AScramPrimitiveActor_SetPrimitiveTrajectory_Params
	{
	public:
		struct FScramTrajectory                                    trajectory;                                              // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.ResumeTrajectory
	 */
	struct AScramPrimitiveActor_ResumeTrajectory_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.RecreatePhysicsState
	 */
	struct AScramPrimitiveActor_RecreatePhysicsState_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.PauseTrajectory
	 */
	struct AScramPrimitiveActor_PauseTrajectory_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.OnRep_ClientTrajectoryPaused
	 */
	struct AScramPrimitiveActor_OnRep_ClientTrajectoryPaused_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.NotifyPrimitiveDestroyed
	 */
	struct AScramPrimitiveActor_NotifyPrimitiveDestroyed_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.NetResumeTrajectory
	 */
	struct AScramPrimitiveActor_NetResumeTrajectory_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.NetPauseTrajectory
	 */
	struct AScramPrimitiveActor_NetPauseTrajectory_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.NetDestroyPrimitive
	 */
	struct AScramPrimitiveActor_NetDestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MZL6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.IsPrimitiveSimulatingPhysics
	 */
	struct AScramPrimitiveActor_IsPrimitiveSimulatingPhysics_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.IsPrimitivePendingDestroy
	 */
	struct AScramPrimitiveActor_IsPrimitivePendingDestroy_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.IsPrimitiveInMotion
	 */
	struct AScramPrimitiveActor_IsPrimitiveInMotion_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.IsPrimitiveFollowingSpline
	 */
	struct AScramPrimitiveActor_IsPrimitiveFollowingSpline_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.IsPrimitiveDestroyed
	 */
	struct AScramPrimitiveActor_IsPrimitiveDestroyed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.InitializePrimitiveTrajectory
	 */
	struct AScramPrimitiveActor_InitializePrimitiveTrajectory_Params
	{
	public:
		struct FScramTrajectory                                    trajectory;                                              // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetTrajectoryPaused
	 */
	struct AScramPrimitiveActor_GetTrajectoryPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveVisMesh
	 */
	struct AScramPrimitiveActor_GetPrimitiveVisMesh_Params
	{
	public:
		class UMeshComponent*                                      ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveTrajectory
	 */
	struct AScramPrimitiveActor_GetPrimitiveTrajectory_Params
	{
	public:
		struct FScramTrajectory                                    ReturnValue;                                             // 0x0000(0x01F0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveRotation
	 */
	struct AScramPrimitiveActor_GetPrimitiveRotation_Params
	{
	public:
		struct FQuat                                               ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveProperties
	 */
	struct AScramPrimitiveActor_GetPrimitiveProperties_Params
	{
	public:
		struct FScramPrimitiveProperties                           ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitivePhysicalAngularVelocity
	 */
	struct AScramPrimitiveActor_GetPrimitivePhysicalAngularVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveMotionState
	 */
	struct AScramPrimitiveActor_GetPrimitiveMotionState_Params
	{
	public:
		struct FMotionState                                        ReturnValue;                                             // 0x0000(0x0040)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLocation
	 */
	struct AScramPrimitiveActor_GetPrimitiveLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveLinearVelocity
	 */
	struct AScramPrimitiveActor_GetPrimitiveLinearVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetPrimitiveComponent
	 */
	struct AScramPrimitiveActor_GetPrimitiveComponent_Params
	{
	public:
		class UPrimitiveComponent*                                 ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetFloorBouncesWithCurrentTrajectory
	 */
	struct AScramPrimitiveActor_GetFloorBouncesWithCurrentTrajectory_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.GetEnvironmentBouncesWithCurrentTrajectory
	 */
	struct AScramPrimitiveActor_GetEnvironmentBouncesWithCurrentTrajectory_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveActor.DestroyPrimitive
	 */
	struct AScramPrimitiveActor_DestroyPrimitive_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BSEU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.SetProxyGrabbable
	 */
	struct AScramPrimitiveGrabbable_SetProxyGrabbable_Params
	{
	public:
		class AScramPrimitiveGrabbable*                            grabbable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableDeactivated
	 */
	struct AScramPrimitiveGrabbable_OnGrabbableDeactivated_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.OnGrabbableActivated
	 */
	struct AScramPrimitiveGrabbable_OnGrabbableActivated_Params
	{	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.IsLocallyGrabbed
	 */
	struct AScramPrimitiveGrabbable_IsLocallyGrabbed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.InitialGrabInProgress
	 */
	struct AScramPrimitiveGrabbable_InitialGrabInProgress_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.GrabbableIsTracked
	 */
	struct AScramPrimitiveGrabbable_GrabbableIsTracked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.GetProxyGrabbable
	 */
	struct AScramPrimitiveGrabbable_GetProxyGrabbable_Params
	{
	public:
		class AScramPrimitiveGrabbable*                            ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.GetHidesAvatarHands
	 */
	struct AScramPrimitiveGrabbable_GetHidesAvatarHands_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.CurrentPlayer
	 */
	struct AScramPrimitiveGrabbable_CurrentPlayer_Params
	{
	public:
		class AScramPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.CurrentHand
	 */
	struct AScramPrimitiveGrabbable_CurrentHand_Params
	{
	public:
		class AScramPlayerHand*                                    ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPrimitiveGrabbable.CurrentGrabberActor
	 */
	struct AScramPrimitiveGrabbable_CurrentGrabberActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBall.SetImmuneToInstruments
	 */
	struct AScramBall_SetImmuneToInstruments_Params
	{
	public:
		bool                                                       immune;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBall.SetHitsBallHitters
	 */
	struct AScramBall_SetHitsBallHitters_Params
	{
	public:
		bool                                                       hits;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBall.SetHitByInstrument
	 */
	struct AScramBall_SetHitByInstrument_Params
	{	};

	/**
	 * Function SportsScramble.ScramBall.IsImmuneToInstruments
	 */
	struct AScramBall_IsImmuneToInstruments_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBall.GetHitsBallHitters
	 */
	struct AScramBall_GetHitsBallHitters_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBall.GetBallProperties
	 */
	struct AScramBall_GetBallProperties_Params
	{
	public:
		struct FScramBallProperties                                ReturnValue;                                             // 0x0000(0x00C8)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBall.EverHitByInstrument
	 */
	struct AScramBall_EverHitByInstrument_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.TrySetFutureHit
	 */
	struct ABaseballBall_TrySetFutureHit_Params
	{
	public:
		class UObject*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.SetVerticalFieldZone
	 */
	struct ABaseballBall_SetVerticalFieldZone_Params
	{
	public:
		EVerticalFieldZone                                         verticalFieldZone;                                       // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.SetIsThrow
	 */
	struct ABaseballBall_SetIsThrow_Params
	{
	public:
		bool                                                       isThrow;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.SetForceCharge
	 */
	struct ABaseballBall_SetForceCharge_Params
	{
	public:
		bool                                                       shouldCharge;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.SetBallImbued
	 */
	struct ABaseballBall_SetBallImbued_Params
	{
	public:
		bool                                                       Imbued;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.OnShotChanged
	 */
	struct ABaseballBall_OnShotChanged_Params
	{	};

	/**
	 * Function SportsScramble.BaseballBall.OnRep_NetworkMotionState
	 */
	struct ABaseballBall_OnRep_NetworkMotionState_Params
	{	};

	/**
	 * Function SportsScramble.BaseballBall.OnRep_BowlingBall
	 */
	struct ABaseballBall_OnRep_BowlingBall_Params
	{	};

	/**
	 * Function SportsScramble.BaseballBall.OnImbuedChanged
	 */
	struct ABaseballBall_OnImbuedChanged_Params
	{	};

	/**
	 * Function SportsScramble.BaseballBall.OnHit
	 */
	struct ABaseballBall_OnHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.OnFloorResultChanged
	 */
	struct ABaseballBall_OnFloorResultChanged_Params
	{
	public:
		EFloorResult                                               newFloorResult;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.IsRollingPitch
	 */
	struct ABaseballBall_IsRollingPitch_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.IsBallImbued
	 */
	struct ABaseballBall_IsBallImbued_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.GetVerticalFieldZone
	 */
	struct ABaseballBall_GetVerticalFieldZone_Params
	{
	public:
		EVerticalFieldZone                                         ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.GetShot
	 */
	struct ABaseballBall_GetShot_Params
	{
	public:
		struct FBaseballShot                                       ReturnValue;                                             // 0x0000(0x0003)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.GetIsThrow
	 */
	struct ABaseballBall_GetIsThrow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.GetForceCharge
	 */
	struct ABaseballBall_GetForceCharge_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.GetFloorResult
	 */
	struct ABaseballBall_GetFloorResult_Params
	{
	public:
		EFloorResult                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBall.GetBaseballBallProperties
	 */
	struct ABaseballBall_GetBaseballBallProperties_Params
	{
	public:
		struct FBaseballBallProperties                             ReturnValue;                                             // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallClassifier.OnBallHit
	 */
	struct ABaseballBallClassifier_OnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallClassifier.OnBallBounced
	 */
	struct ABaseballBallClassifier_OnBallBounced_Params
	{
	public:
		EBallState                                                 ballState;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D18W[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    numBounces;                                              // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallScrambleDisplay.SetIcon
	 */
	struct ABaseballBallScrambleDisplay_SetIcon_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C7EP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallScrambleDisplay.GoAway
	 */
	struct ABaseballBallScrambleDisplay_GoAway_Params
	{	};

	/**
	 * Function SportsScramble.BaseballBallSelector.TrySpawnScrambleTargets
	 */
	struct ABaseballBallSelector_TrySpawnScrambleTargets_Params
	{
	public:
		TArray<EBaseballScrambleTargetLocations>                   validDisplays;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    numToSpawn;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FChance                                             imbueChance;                                             // 0x0014(0x0004)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       localPlayerIsBatter;                                     // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallSelector.TrySetBalls
	 */
	struct ABaseballBallSelector_TrySetBalls_Params
	{
	public:
		TArray<struct FBaseballBallScrambleProperties>             ballProperties;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallSelector.TryChangeBallTable
	 */
	struct ABaseballBallSelector_TryChangeBallTable_Params
	{
	public:
		class UDataTable*                                          BallTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballBallSelector.ClearScrambleTargets
	 */
	struct ABaseballBallSelector_ClearScrambleTargets_Params
	{	};

	/**
	 * Function SportsScramble.BaseballGlobalDataAsset.GetBatterPlayAreas
	 */
	struct UBaseballGlobalDataAsset_GetBatterPlayAreas_Params
	{
	public:
		struct FBox                                                minPlayArea;                                             // 0x0000(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox                                                maxPlayArea;                                             // 0x001C(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox                                                maxHazardArea;                                           // 0x0038(0x001C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		EBattingSide                                               Side;                                                    // 0x0054(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramInstrument.GetLeverVelocity
	 */
	struct AScramInstrument_GetLeverVelocity_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramInstrument.GetInstrumentProperties
	 */
	struct AScramInstrument_GetInstrumentProperties_Params
	{
	public:
		struct FScramInstrumentProperties                          ReturnValue;                                             // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrument.OnInstrumentBreakEvent
	 */
	struct ABaseballInstrument_OnInstrumentBreakEvent_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrument.IsPendingRelease
	 */
	struct ABaseballInstrument_IsPendingRelease_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrument.InstrumentLowHealth
	 */
	struct ABaseballInstrument_InstrumentLowHealth_Params
	{
	public:
		float                                                      health;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrument.GetBaseballInstrumentProperties
	 */
	struct ABaseballInstrument_GetBaseballInstrumentProperties_Params
	{
	public:
		struct FBaseballInstrumentProperties                       ReturnValue;                                             // 0x0000(0x00D0)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrumentSelector.TrySetInstruments
	 */
	struct ABaseballInstrumentSelector_TrySetInstruments_Params
	{
	public:
		TArray<struct FBaseballInstrumentEntryProperties>          instrumentEntries;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrumentSelector.TryChangeInstrumentTable
	 */
	struct ABaseballInstrumentSelector_TryChangeInstrumentTable_Params
	{
	public:
		class UDataTable*                                          InstrumentTable;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrumentSelector.SetSelectorVisible
	 */
	struct ABaseballInstrumentSelector_SetSelectorVisible_Params
	{
	public:
		bool                                                       visible;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballInstrumentSelector.OnRep_ClientSpawnedInstruments
	 */
	struct ABaseballInstrumentSelector_OnRep_ClientSpawnedInstruments_Params
	{	};

	/**
	 * Function SportsScramble.BaseballInstrumentSelector.InstrumentSelected
	 */
	struct ABaseballInstrumentSelector_InstrumentSelected_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGlove.GetGrabberHandedness
	 */
	struct AScramGlove_GetGrabberHandedness_Params
	{
	public:
		EScramHandedness                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGlove.ForceGrab
	 */
	struct AScramGlove_ForceGrab_Params
	{
	public:
		class AActor*                                              GrabbableActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballMitt.OnScrambleBallGrabbed
	 */
	struct ABaseballMitt_OnScrambleBallGrabbed_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballMitt.OnRep_ClientSpawnedBalls
	 */
	struct ABaseballMitt_OnRep_ClientSpawnedBalls_Params
	{	};

	/**
	 * Function SportsScramble.BaseballMitt.GetScrambleOptionsFull
	 */
	struct ABaseballMitt_GetScrambleOptionsFull_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballMitt.GetScrambleOptions
	 */
	struct ABaseballMitt_GetScrambleOptions_Params
	{
	public:
		TArray<struct FMittSpawnInfo>                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballMitt.ClearScrambleOptions
	 */
	struct ABaseballMitt_ClearScrambleOptions_Params
	{	};

	/**
	 * Function SportsScramble.BaseballMitt.AddScrambleBallWithType
	 */
	struct ABaseballMitt_AddScrambleBallWithType_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Imbued;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballPitchingPropManager.SpawnRegisteredObjects
	 */
	struct ABaseballPitchingPropManager_SpawnRegisteredObjects_Params
	{
	public:
		EBaseballBallType                                          BallType;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballPitchingPropManager.ClearAllObjects
	 */
	struct ABaseballPitchingPropManager_ClearAllObjects_Params
	{	};

	/**
	 * Function SportsScramble.ScramBallTrigger.OnTriggered
	 */
	struct AScramBallTrigger_OnTriggered_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBallTrigger.IsFutureHitPending
	 */
	struct AScramBallTrigger_IsFutureHitPending_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BaseballThrowingGlove.OnBowlingGloveRelease
	 */
	struct ABaseballThrowingGlove_OnBowlingGloveRelease_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BattingAvatar.OnSwung
	 */
	struct ABattingAvatar_OnSwung_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BattingAvatar.OnHit
	 */
	struct ABattingAvatar_OnHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BlobShadowComponent.ScaleOut
	 */
	struct UBlobShadowComponent_ScaleOut_Params
	{
	public:
		float                                                      scaleOutTime;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BlobShadowComponent.ScaleIn
	 */
	struct UBlobShadowComponent_ScaleIn_Params
	{
	public:
		float                                                      scaleInTime;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BlobShadowComponent.FadeOut
	 */
	struct UBlobShadowComponent_FadeOut_Params
	{
	public:
		float                                                      fadeOutTime;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BlobShadowComponent.FadeIn
	 */
	struct UBlobShadowComponent_FadeIn_Params
	{
	public:
		float                                                      fadeInTime;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.SetPlayer
	 */
	struct ABowlingAlley_SetPlayer_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.SetPinsetter
	 */
	struct ABowlingAlley_SetPinsetter_Params
	{
	public:
		class ABowlingPinsetter*                                   pinsetter;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.OnBallReleased
	 */
	struct ABowlingAlley_OnBallReleased_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.OnBallOut
	 */
	struct ABowlingAlley_OnBallOut_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       pit;                                                     // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       restricted;                                              // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.OnBallGrabbed
	 */
	struct ABowlingAlley_OnBallGrabbed_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.OnBallDestroyed
	 */
	struct ABowlingAlley_OnBallDestroyed_Params
	{
	public:
		class AActor*                                              pBallActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.IsLaneReady
	 */
	struct ABowlingAlley_IsLaneReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetScore
	 */
	struct ABowlingAlley_GetScore_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetPlayer
	 */
	struct ABowlingAlley_GetPlayer_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetFloorZ
	 */
	struct ABowlingAlley_GetFloorZ_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetFloorMaterial
	 */
	struct ABowlingAlley_GetFloorMaterial_Params
	{
	public:
		class UPhysicalMaterial*                                   ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetBalls
	 */
	struct ABowlingAlley_GetBalls_Params
	{
	public:
		TArray<class ABowlingBall*>                                ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetBallReturn
	 */
	struct ABowlingAlley_GetBallReturn_Params
	{
	public:
		class ABowlingBallReturn*                                  ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetAlley
	 */
	struct ABowlingAlley_GetAlley_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABowlingAlley*                                       ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.GetActiveLane
	 */
	struct ABowlingAlley_GetActiveLane_Params
	{
	public:
		class ABowlingLane*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.ClearBalls
	 */
	struct ABowlingAlley_ClearBalls_Params
	{
	public:
		bool                                                       includeThrownBalls;                                      // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.ClearBall
	 */
	struct ABowlingAlley_ClearBall_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.AnyThrownBallsRemaining
	 */
	struct ABowlingAlley_AnyThrownBallsRemaining_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.AddInstigatorBallCode
	 */
	struct ABowlingAlley_AddInstigatorBallCode_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAlley.AddBall
	 */
	struct ABowlingAlley_AddBall_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingAvatar.OnBallReleased
	 */
	struct ABowlingAvatar_OnBallReleased_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.SetValidRoll
	 */
	struct ABowlingBall_SetValidRoll_Params
	{
	public:
		bool                                                       validRoll;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.OnThrowChanged
	 */
	struct ABowlingBall_OnThrowChanged_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBall.OnHitPin
	 */
	struct ABowlingBall_OnHitPin_Params
	{
	public:
		class ABowlingPin*                                         Pin;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.OnHitLane
	 */
	struct ABowlingBall_OnHitLane_Params
	{
	public:
		class ABowlingLane*                                        Lane;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      bounceSpeed;                                             // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.OnHitFootballBlocker
	 */
	struct ABowlingBall_OnHitFootballBlocker_Params
	{
	public:
		class ABowlingFootballBlocker*                             FootballBlocker;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.OnFloorResultChanged
	 */
	struct ABowlingBall_OnFloorResultChanged_Params
	{
	public:
		EFloorResult                                               newFloorResult;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.IsBouncing
	 */
	struct ABowlingBall_IsBouncing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.GetValidRoll
	 */
	struct ABowlingBall_GetValidRoll_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.GetThrow
	 */
	struct ABowlingBall_GetThrow_Params
	{
	public:
		struct FBowlingThrow                                       ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.GetFloorResult
	 */
	struct ABowlingBall_GetFloorResult_Params
	{
	public:
		EFloorResult                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBall.GetBowlingBallProperties
	 */
	struct ABowlingBall_GetBowlingBallProperties_Params
	{
	public:
		struct FBowlingBallProperties                              ReturnValue;                                             // 0x0000(0x0180)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturn.SetSlideDirection
	 */
	struct ABowlingBallReturn_SetSlideDirection_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturn.ResetBallTable
	 */
	struct ABowlingBallReturn_ResetBallTable_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturn.PreLevelChangeCleanup
	 */
	struct ABowlingBallReturn_PreLevelChangeCleanup_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturn.OnTrackMotionStop
	 */
	struct ABowlingBallReturn_OnTrackMotionStop_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturn.OnTrackMotionStart
	 */
	struct ABowlingBallReturn_OnTrackMotionStart_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturn.OnReturnSlideStopped
	 */
	struct ABowlingBallReturn_OnReturnSlideStopped_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturn.OnReturnSlideStarted
	 */
	struct ABowlingBallReturn_OnReturnSlideStarted_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturn.IncrementBallSelection
	 */
	struct ABowlingBallReturn_IncrementBallSelection_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturn.GetReturnTrack
	 */
	struct ABowlingBallReturn_GetReturnTrack_Params
	{
	public:
		class UBowlingBallReturnTrack*                             ReturnValue;                                             // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturn.GetRandomBall
	 */
	struct ABowlingBallReturn_GetRandomBall_Params
	{
	public:
		class UClass*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientTrack
	 */
	struct ABowlingBallReturnSlot_OnRep_ClientTrack_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.OnRep_ClientBall
	 */
	struct ABowlingBallReturnSlot_OnRep_ClientBall_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.OnMotionStop
	 */
	struct ABowlingBallReturnSlot_OnMotionStop_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.OnMotionStart
	 */
	struct ABowlingBallReturnSlot_OnMotionStart_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.OnBallGrabbed
	 */
	struct ABowlingBallReturnSlot_OnBallGrabbed_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.OnBallAttached
	 */
	struct ABowlingBallReturnSlot_OnBallAttached_Params
	{	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.IsDisposing
	 */
	struct ABowlingBallReturnSlot_IsDisposing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.IsBallAttached
	 */
	struct ABowlingBallReturnSlot_IsBallAttached_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnSlot.GetAttachedBall
	 */
	struct ABowlingBallReturnSlot_GetAttachedBall_Params
	{
	public:
		class ABowlingBall*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnTrack.SetupSlot
	 */
	struct UBowlingBallReturnTrack_SetupSlot_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              SlotClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnTrack.HasBall
	 */
	struct UBowlingBallReturnTrack_HasBall_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnTrack.GetNumOccupiedSlots
	 */
	struct UBowlingBallReturnTrack_GetNumOccupiedSlots_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingBallReturnTrack.FreeLastSlot
	 */
	struct UBowlingBallReturnTrack_FreeLastSlot_Params
	{
	public:
		struct FVector                                             disposalPoint;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingCenterScoreboard.GetTimeRemaining
	 */
	struct ABowlingCenterScoreboard_GetTimeRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingFootballBlocker.StopBlocker
	 */
	struct ABowlingFootballBlocker_StopBlocker_Params
	{	};

	/**
	 * Function SportsScramble.BowlingFootballBlocker.StartBlocker
	 */
	struct ABowlingFootballBlocker_StartBlocker_Params
	{
	public:
		struct FTransform                                          centerTransform;                                         // 0x0000(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      initialAngleDegrees;                                     // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingFootballBlocker.DeferredInit
	 */
	struct ABowlingFootballBlocker_DeferredInit_Params
	{	};

	/**
	 * Function SportsScramble.BowlingForceMagnet.DirectSuckStarted
	 */
	struct ABowlingForceMagnet_DirectSuckStarted_Params
	{	};

	/**
	 * Function SportsScramble.BowlingForceMagnet.DeactivateMagnet
	 */
	struct ABowlingForceMagnet_DeactivateMagnet_Params
	{	};

	/**
	 * Function SportsScramble.BowlingForceMagnet.ActivateMagnet
	 */
	struct ABowlingForceMagnet_ActivateMagnet_Params
	{	};

	/**
	 * Function SportsScramble.BowlingGlove.OnThrowFinalized
	 */
	struct ABowlingGlove_OnThrowFinalized_Params
	{
	public:
		class ABowlingBall*                                        Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingGutterTracker.SimpleHitActor
	 */
	struct UBowlingGutterTracker_SimpleHitActor_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingGutterTracker.ForceClearGutter
	 */
	struct UBowlingGutterTracker_ForceClearGutter_Params
	{
	public:
		bool                                                       ClearRight;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ClearLeft;                                               // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingGutterTracker.FireRightParticle
	 */
	struct UBowlingGutterTracker_FireRightParticle_Params
	{	};

	/**
	 * Function SportsScramble.BowlingGutterTracker.FireLeftParticle
	 */
	struct UBowlingGutterTracker_FireLeftParticle_Params
	{	};

	/**
	 * Function SportsScramble.BowlingLane.ShowBaseballLane
	 */
	struct ABowlingLane_ShowBaseballLane_Params
	{	};

	/**
	 * Function SportsScramble.BowlingLane.ShouldUsePins
	 */
	struct ABowlingLane_ShouldUsePins_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingLane.HideBaseballLane
	 */
	struct ABowlingLane_HideBaseballLane_Params
	{	};

	/**
	 * Function SportsScramble.BowlingLane.GetDownLaneVector
	 */
	struct ABowlingLane_GetDownLaneVector_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingLane.GetAlley
	 */
	struct ABowlingLane_GetAlley_Params
	{
	public:
		class ABowlingAlley*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingLaneFlipper.SetLaunchTarget
	 */
	struct ABowlingLaneFlipper_SetLaunchTarget_Params
	{
	public:
		class USceneComponent*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingLaneFlipper.FlipFlipper
	 */
	struct ABowlingLaneFlipper_FlipFlipper_Params
	{	};

	/**
	 * Function SportsScramble.BowlingPin.WasKnockedDown
	 */
	struct ABowlingPin_WasKnockedDown_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingPin.StartCheckingForKnockedDown
	 */
	struct ABowlingPin_StartCheckingForKnockedDown_Params
	{	};

	/**
	 * Function SportsScramble.BowlingPin.OnKnockedDown
	 */
	struct ABowlingPin_OnKnockedDown_Params
	{	};

	/**
	 * Function SportsScramble.BowlingPin.IsAtRest
	 */
	struct ABowlingPin_IsAtRest_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingPinsetter.ActivePinsCanBeScored
	 */
	struct ABowlingPinsetter_ActivePinsCanBeScored_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingPlinko.ResolveBall
	 */
	struct ABowlingPlinko_ResolveBall_Params
	{
	public:
		class ABowlingPlinkoBall*                                  Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      localY;                                                  // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingPlinkoBall.SetWidget
	 */
	struct ABowlingPlinkoBall_SetWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingPlinkoBall.SetResolving
	 */
	struct ABowlingPlinkoBall_SetResolving_Params
	{
	public:
		bool                                                       resolving;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.TryGetFrameScoreStatic
	 */
	struct ABowlingScoreKeeper_TryGetFrameScoreStatic_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7CLZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBowlingFrameSet                                    frameSet;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.TryGetFrameScore
	 */
	struct ABowlingScoreKeeper_TryGetFrameScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Player;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    frameIndex;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.ResetFrames
	 */
	struct ABowlingScoreKeeper_ResetFrames_Params
	{	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.IsGameDone
	 */
	struct ABowlingScoreKeeper_IsGameDone_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.GetGameScore
	 */
	struct ABowlingScoreKeeper_GetGameScore_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.GetFrameScoreUpTo
	 */
	struct ABowlingScoreKeeper_GetFrameScoreUpTo_Params
	{
	public:
		bool                                                       complete;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_L5B8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBowlingFrameSet                                    frameSet;                                                // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    maxFrameIndex;                                           // 0x0028(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x002C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.GetCurrentPlayer
	 */
	struct ABowlingScoreKeeper_GetCurrentPlayer_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.GetCurrentFrameIndex
	 */
	struct ABowlingScoreKeeper_GetCurrentFrameIndex_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.AreFramesDone
	 */
	struct ABowlingScoreKeeper_AreFramesDone_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingScoreKeeper.AddRoll
	 */
	struct ABowlingScoreKeeper_AddRoll_Params
	{
	public:
		bool                                                       frameDone;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GZX3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Player;                                                  // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Roll;                                                    // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.UpdateAnimation
	 */
	struct ABowlingSpaceInvaderAlien_UpdateAnimation_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.UncoverAlien
	 */
	struct ABowlingSpaceInvaderAlien_UncoverAlien_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.RunScoreFX
	 */
	struct ABowlingSpaceInvaderAlien_RunScoreFX_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.RunEndLaneFX
	 */
	struct ABowlingSpaceInvaderAlien_RunEndLaneFX_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.PatternRemover
	 */
	struct ABowlingSpaceInvaderAlien_PatternRemover_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.HideAlien
	 */
	struct ABowlingSpaceInvaderAlien_HideAlien_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.GetRelativePosition
	 */
	struct ABowlingSpaceInvaderAlien_GetRelativePosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.GetGroup
	 */
	struct ABowlingSpaceInvaderAlien_GetGroup_Params
	{
	public:
		class ABowlingSpaceInvaderGroup*                           ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.GetAlienID
	 */
	struct ABowlingSpaceInvaderAlien_GetAlienID_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.GetActive
	 */
	struct ABowlingSpaceInvaderAlien_GetActive_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderAlien.AddScore
	 */
	struct ABowlingSpaceInvaderAlien_AddScore_Params
	{
	public:
		int32_t                                                    ScoreValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NOZV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Ball;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.SetBaseTimeStep
	 */
	struct ABowlingSpaceInvaderGroup_SetBaseTimeStep_Params
	{
	public:
		float                                                      newBaseTimeStep;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.NotifyResetAlienGroup
	 */
	struct ABowlingSpaceInvaderGroup_NotifyResetAlienGroup_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupInitialized
	 */
	struct ABowlingSpaceInvaderGroup_IsGroupInitialized_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.IsGroupClear
	 */
	struct ABowlingSpaceInvaderGroup_IsGroupClear_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      clearMargin;                                             // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.IsGameplayRunning
	 */
	struct ABowlingSpaceInvaderGroup_IsGameplayRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.GetCurrentTimeStep
	 */
	struct ABowlingSpaceInvaderGroup_GetCurrentTimeStep_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.EndGameplay
	 */
	struct ABowlingSpaceInvaderGroup_EndGameplay_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInitComplete
	 */
	struct ABowlingSpaceInvaderGroup_DeferredInitComplete_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.DeferredInit
	 */
	struct ABowlingSpaceInvaderGroup_DeferredInit_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.ChangeTimeStep
	 */
	struct ABowlingSpaceInvaderGroup_ChangeTimeStep_Params
	{
	public:
		float                                                      newTimeStep;                                             // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderGroup.BeginGameplay
	 */
	struct ABowlingSpaceInvaderGroup_BeginGameplay_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_UpdateAliens
	 */
	struct ABowlingSpaceInvaderNetHelper_Server_UpdateAliens_Params
	{
	public:
		struct FVector_NetQuantize                                 newWorldPos;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6W0V[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               newWorldRot;                                             // 0x0010(0x0010)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class USoundBase*                                          pSoundAsset;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_ShutdownAliens
	 */
	struct ABowlingSpaceInvaderNetHelper_Server_ShutdownAliens_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderNetHelper.Server_PrepareAliens
	 */
	struct ABowlingSpaceInvaderNetHelper_Server_PrepareAliens_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_UpdateAliens
	 */
	struct ABowlingSpaceInvaderNetHelper_NetMulticast_UpdateAliens_Params
	{
	public:
		struct FVector_NetQuantize                                 newWorldPos;                                             // 0x0000(0x000C)  (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OS1K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuat                                               newWorldRot;                                             // 0x0010(0x0010)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class USoundBase*                                          pSoundAsset;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_ShutdownAliens
	 */
	struct ABowlingSpaceInvaderNetHelper_NetMulticast_ShutdownAliens_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpaceInvaderNetHelper.NetMulticast_PrepareAliens
	 */
	struct ABowlingSpaceInvaderNetHelper_NetMulticast_PrepareAliens_Params
	{	};

	/**
	 * Function SportsScramble.BowlingSpinKicker.SimpleBeginOverlap
	 */
	struct UBowlingSpinKicker_SimpleBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingUtils.SwitchHasBowlingAuthority
	 */
	struct UBowlingUtils_SwitchHasBowlingAuthority_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBowlingAuthority                                          Branch;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingUtils.ObjectHasBowlingAuthority
	 */
	struct UBowlingUtils_ObjectHasBowlingAuthority_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.BowlingUtils.HasBowlingAuthority
	 */
	struct UBowlingUtils_HasBowlingAuthority_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.CancelOculusMatchmakingCallbackProxy.CancelOculusMatchmaking
	 */
	struct UCancelOculusMatchmakingCallbackProxy_CancelOculusMatchmaking_Params
	{
	public:
		class UCancelOculusMatchmakingCallbackProxy*               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DestroyOculusSessionCallbackProxy.DestroyOculusSession
	 */
	struct UDestroyOculusSessionCallbackProxy_DestroyOculusSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDestroyOculusSessionCallbackProxy*                  ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DodgeballBall.OnShotChanged
	 */
	struct ADodgeballBall_OnShotChanged_Params
	{	};

	/**
	 * Function SportsScramble.DodgeballBall.GetShot
	 */
	struct ADodgeballBall_GetShot_Params
	{
	public:
		struct FDodgeballShot                                      ReturnValue;                                             // 0x0000(0x0003)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DodgeballBall.GetDodgeballBallProperties
	 */
	struct ADodgeballBall_GetDodgeballBallProperties_Params
	{
	public:
		struct FDodgeballBallProperties                            ReturnValue;                                             // 0x0000(0x00D8)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DodgeballGlove.PlayHaptic
	 */
	struct ADodgeballGlove_PlayHaptic_Params
	{
	public:
		class UHapticFeedbackEffect_Base*                          haptic;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Scale;                                                   // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DodgeballGlove.ItemThrown
	 */
	struct ADodgeballGlove_ItemThrown_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DodgeballGlove.ItemPassed
	 */
	struct ADodgeballGlove_ItemPassed_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.DodgeballGlove.ItemCaught
	 */
	struct ADodgeballGlove_ItemCaught_Params
	{
	public:
		class AActor*                                              Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramMeshShadow.GetShadowSample
	 */
	struct UScramMeshShadow_GetShadowSample_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.FanMeshShadow.GetInstancedMeshFloatValue
	 */
	struct UFanMeshShadow_GetInstancedMeshFloatValue_Params
	{
	public:
		float                                                      shadowSample;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.FieldingPlayerManager.SetTimeScale
	 */
	struct AFieldingPlayerManager_SetTimeScale_Params
	{
	public:
		EVerticalFieldZone                                         zone;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RY5K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinMaxFloat                                        TimeScale;                                               // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.FieldingPlayerManager.OnBallInPlay
	 */
	struct AFieldingPlayerManager_OnBallInPlay_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EVerticalFieldZone                                         zone;                                                    // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.FieldingPlayerManager.GetTimeScale
	 */
	struct AFieldingPlayerManager_GetTimeScale_Params
	{
	public:
		EVerticalFieldZone                                         zone;                                                    // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GQI3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FMinMaxFloat                                        ReturnValue;                                             // 0x0004(0x0008)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.FlyTextLabel.SetText
	 */
	struct AFlyTextLabel_SetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.FlyTextLabel.SetScore
	 */
	struct AFlyTextLabel_SetScore_Params
	{
	public:
		int32_t                                                    score;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bonus;                                                   // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OJ0V[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                combineTag;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.GameInviteUtils.GetFriends
	 */
	struct UGameInviteUtils_GetFriends_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.HoopsLaneIndicator.StopIndicator
	 */
	struct UHoopsLaneIndicator_StopIndicator_Params
	{	};

	/**
	 * Function SportsScramble.HoopsLaneIndicator.StartIndicator
	 */
	struct UHoopsLaneIndicator_StartIndicator_Params
	{	};

	/**
	 * Function SportsScramble.HoopsLaneIndicator.SetFlipper
	 */
	struct UHoopsLaneIndicator_SetFlipper_Params
	{
	public:
		class ABowlingLaneFlipper*                                 Flipper;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.HoopsLaneIndicator.ProgressIndicator
	 */
	struct UHoopsLaneIndicator_ProgressIndicator_Params
	{	};

	/**
	 * Function SportsScramble.InstancedMesh.UnregisterInstance
	 */
	struct UInstancedMesh_UnregisterInstance_Params
	{	};

	/**
	 * Function SportsScramble.InstancedMesh.SetInstanceFloatValue
	 */
	struct UInstancedMesh_SetInstanceFloatValue_Params
	{
	public:
		float                                                      FloatValue;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.InstancedMesh.RegisterInstance
	 */
	struct UInstancedMesh_RegisterInstance_Params
	{	};

	/**
	 * Function SportsScramble.InviteFriendCallbackProxy.InviteFriend
	 */
	struct UInviteFriendCallbackProxy_InviteFriend_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScramFriend                                        invitedFriend;                                           // 0x0008(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UInviteFriendCallbackProxy*                          ReturnValue;                                             // 0x0040(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.JoinOculusSessionCallbackProxy.JoinOculusSession
	 */
	struct UJoinOculusSessionCallbackProxy_JoinOculusSession_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class UJoinOculusSessionCallbackProxy*                     ReturnValue;                                             // 0x00C0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MenuInstrument.TryMakeActiveMenuInstrument
	 */
	struct AMenuInstrument_TryMakeActiveMenuInstrument_Params
	{	};

	/**
	 * Function SportsScramble.MenuInstrument.SetPointerMenuOption
	 */
	struct AMenuInstrument_SetPointerMenuOption_Params
	{
	public:
		bool                                                       useMenuPointer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MenuInstrument.SetLaserPointerVisibility
	 */
	struct AMenuInstrument_SetLaserPointerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MenuInstrument.OnNotifyInputRelease
	 */
	struct AMenuInstrument_OnNotifyInputRelease_Params
	{	};

	/**
	 * Function SportsScramble.MenuInstrument.OnNotifyInputPress
	 */
	struct AMenuInstrument_OnNotifyInputPress_Params
	{	};

	/**
	 * Function SportsScramble.MenuInstrument.OnChangePointerType
	 */
	struct AMenuInstrument_OnChangePointerType_Params
	{	};

	/**
	 * Function SportsScramble.MenuInstrument.Initialize
	 */
	struct AMenuInstrument_Initialize_Params
	{	};

	/**
	 * Function SportsScramble.MusicManager.StopMusic
	 */
	struct AMusicManager_StopMusic_Params
	{
	public:
		float                                                      FadeTime;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.Stop
	 */
	struct AMusicManager_Stop_Params
	{
	public:
		float                                                      FadeTime;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.PlayMusicEntry
	 */
	struct AMusicManager_PlayMusicEntry_Params
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTime;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.PlayMusic
	 */
	struct AMusicManager_PlayMusic_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Volume;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTime;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.PlayEntry
	 */
	struct AMusicManager_PlayEntry_Params
	{
	public:
		class FName                                                EntryName;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTime;                                                // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.Play
	 */
	struct AMusicManager_Play_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Volume;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      FadeTime;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.IsPlaying
	 */
	struct AMusicManager_IsPlaying_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.MusicManager.IsMusicPlaying
	 */
	struct AMusicManager_IsMusicPlaying_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.NetworkMotionStateManager.Server_ApplyReplicatedStates
	 */
	struct ANetworkMotionStateManager_Server_ApplyReplicatedStates_Params
	{
	public:
		TArray<struct FNetworkMotionState>                         States;                                                  // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.NetworkMotionStateManager.OnRep_ReplicatedStates
	 */
	struct ANetworkMotionStateManager_OnRep_ReplicatedStates_Params
	{	};

	/**
	 * Function SportsScramble.PitchingAvatar.OnDrop
	 */
	struct APitchingAvatar_OnDrop_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PitchingAvatar.OnBaseballEvent
	 */
	struct APitchingAvatar_OnBaseballEvent_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PitchingAvatar.OnBallGrabbed
	 */
	struct APitchingAvatar_OnBallGrabbed_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PitchingPropInterface.SetBattingPlayer
	 */
	struct UPitchingPropInterface_SetBattingPlayer_Params
	{
	public:
		class AActor*                                              batterActor;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlay.NetMulticast_PlayByPlayEvent
	 */
	struct APlayByPlay_NetMulticast_PlayByPlayEvent_Params
	{
	public:
		int32_t                                                    eventIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZR2S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlay.IsQueuedOrPlaying
	 */
	struct APlayByPlay_IsQueuedOrPlaying_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlay.CultureChanged
	 */
	struct APlayByPlay_CultureChanged_Params
	{	};

	/**
	 * Function SportsScramble.PlayByPlayBaseball.OnBaseballEvent
	 */
	struct APlayByPlayBaseball_OnBaseballEvent_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlayBaseball.BatChange
	 */
	struct APlayByPlayBaseball_BatChange_Params
	{
	public:
		EBaseballInstrumentType                                    newBatType;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlayBaseball.BallChange
	 */
	struct APlayByPlayBaseball_BallChange_Params
	{
	public:
		EBaseballBallType                                          newBallType;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlayTennis.SendPlayByPlayEvent
	 */
	struct APlayByPlayTennis_SendPlayByPlayEvent_Params
	{
	public:
		ETennisPlayByPlayEvent                                     playByPlayEvent;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NRCS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Player;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.PlayByPlayTennis.RacquetChange
	 */
	struct APlayByPlayTennis_RacquetChange_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTennisInstrumentProperties                         instrumentProps;                                         // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBallManager.SetMaxBalls
	 */
	struct AScramBallManager_SetMaxBalls_Params
	{
	public:
		int32_t                                                    maxBalls;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseAI.PlaySpawnAnimation
	 */
	struct AScramBaseAI_PlaySpawnAnimation_Params
	{	};

	/**
	 * Function SportsScramble.ScramBaseballBatterAI.PlayBatSound
	 */
	struct AScramBaseballBatterAI_PlayBatSound_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.SetState
	 */
	struct AScramBaseballCatcherAI_SetState_Params
	{
	public:
		ECatcherAIState                                            newState;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.SetGloveMode
	 */
	struct AScramBaseballCatcherAI_SetGloveMode_Params
	{
	public:
		ECatcherGloveMode                                          gloveMode;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramSkill                                                Skill;                                                   // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.OnBallHit
	 */
	struct AScramBaseballCatcherAI_OnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.OnBallDropped
	 */
	struct AScramBaseballCatcherAI_OnBallDropped_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.OnBallCaught
	 */
	struct AScramBaseballCatcherAI_OnBallCaught_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.GetGloveMode
	 */
	struct AScramBaseballCatcherAI_GetGloveMode_Params
	{
	public:
		class AScramSportManagerBaseball*                          pBaseball;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECatcherGloveMode                                          ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballCatcherAI.BallCaught
	 */
	struct AScramBaseballCatcherAI_BallCaught_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Position;                                                // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBaseballBallType                                          BallType;                                                // 0x0014(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Imbued;                                                  // 0x0015(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballFielderAI.OnBaseballEvent
	 */
	struct AScramBaseballFielderAI_OnBaseballEvent_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballFielderAI.NetMulticast_SetDesiredAnimState
	 */
	struct AScramBaseballFielderAI_NetMulticast_SetDesiredAnimState_Params
	{
	public:
		EBaseballFielderAnimState                                  animState;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballPitcherAI.PlayMittSound
	 */
	struct AScramBaseballPitcherAI_PlayMittSound_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballPitcherAI.GetScrambleBallClass
	 */
	struct AScramBaseballPitcherAI_GetScrambleBallClass_Params
	{
	public:
		class UClass*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballRunnerAI.OnSpawn
	 */
	struct AScramBaseballRunnerAI_OnSpawn_Params
	{	};

	/**
	 * Function SportsScramble.ScramBaseballRunnerAI.OnDespawn
	 */
	struct AScramBaseballRunnerAI_OnDespawn_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballRunnerAI.HasReachedHome
	 */
	struct AScramBaseballRunnerAI_HasReachedHome_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramBaseballRunnerAI.GetDestinationBase
	 */
	struct AScramBaseballRunnerAI_GetDestinationBase_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScrambleTarget.GetAiValue
	 */
	struct AScrambleTarget_GetAiValue_Params
	{
	public:
		EScrambleTargetAiValue                                     Value;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TextureSamplerSettings.SampleTexture
	 */
	struct ATextureSamplerSettings_SampleTexture_Params
	{
	public:
		struct FVector                                             worldPos;                                                // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              DefaultColor;                                            // 0x000C(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              ReturnValue;                                             // 0x0010(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramCameraCover.EnqueueVignette
	 */
	struct AScramCameraCover_EnqueueVignette_Params
	{
	public:
		struct FCoverVignette                                      vignette;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrajectoryInfluencerActor.SetInfluencerEnabled
	 */
	struct AScramTrajectoryInfluencerActor_SetInfluencerEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramCourt.SetScramCourtMatchType
	 */
	struct AScramCourt_SetScramCourtMatchType_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramCourtMatchType                                       matchType;                                               // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramCourt.GetScramCourtMatchType
	 */
	struct AScramCourt_GetScramCourtMatchType_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramCourtMatchType                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramDodgeballAI.SetTeam2
	 */
	struct AScramDodgeballAI_SetTeam2_Params
	{	};

	/**
	 * Function SportsScramble.ScramDodgeballAI.SetTeam1
	 */
	struct AScramDodgeballAI_SetTeam1_Params
	{	};

	/**
	 * Function SportsScramble.ScramDodgeballAI.SetPositionIndex
	 */
	struct AScramDodgeballAI_SetPositionIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramDodgeballAI.GetTeam
	 */
	struct AScramDodgeballAI_GetTeam_Params
	{
	public:
		EScramDodgeballTeam                                        ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramDodgeballAI.GetPositionIndex
	 */
	struct AScramDodgeballAI_GetPositionIndex_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramDodgeballPawnAI.StartGame
	 */
	struct AScramDodgeballPawnAI_StartGame_Params
	{	};

	/**
	 * Function SportsScramble.ScramDodgeballPawnAI.SetDelayBeforeThrowing
	 */
	struct AScramDodgeballPawnAI_SetDelayBeforeThrowing_Params
	{
	public:
		struct FMinMaxFloat                                        delayBeforeThrow;                                        // 0x0000(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramDodgeballPawnAI.KnockedOut
	 */
	struct AScramDodgeballPawnAI_KnockedOut_Params
	{	};

	/**
	 * Function SportsScramble.ScramDodgeballPawnAI.BallThrown
	 */
	struct AScramDodgeballPawnAI_BallThrown_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Speed;                                                   // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEquipmentSet.PostEquipmentSpawn
	 */
	struct AScramEquipmentSet_PostEquipmentSpawn_Params
	{
	public:
		class AScramPrimitiveGrabbable*                            DominantHandSpawnedEquipment;                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramPrimitiveGrabbable*                            OffHandSpawnedEquipment;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventObjectPayload.CreateObjectPayload
	 */
	struct UScramEventObjectPayload_CreateObjectPayload_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Object;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventObjectPayload*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventCollisionPayload.CreateCollisionPayload
	 */
	struct UScramEventCollisionPayload_CreateCollisionPayload_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNormal;                                               // 0x001C(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventCollisionPayload*                         ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventManager.UnbindEventFromObjectScramEvent
	 */
	struct AScramEventManager_UnbindEventFromObjectScramEvent_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_D3VQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Event;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventManager.UnbindEventFromGlobalScramEvent
	 */
	struct AScramEventManager_UnbindEventFromGlobalScramEvent_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AUFX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Event;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventManager.BroadcastScramEvent
	 */
	struct AScramEventManager_BroadcastScramEvent_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_295R[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              Payload;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       replicate;                                               // 0x0018(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventManager.BindEventToObjectScramEvent
	 */
	struct AScramEventManager_BindEventToObjectScramEvent_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0CAI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      Event;                                                   // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramEventManager.BindEventToGlobalScramEvent
	 */
	struct AScramEventManager_BindEventToGlobalScramEvent_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KY30[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Event;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.StopGameInvitePings
	 */
	struct UScramGameInstance_StopGameInvitePings_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.StartOculusAchievementSync
	 */
	struct UScramGameInstance_StartOculusAchievementSync_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.ShowDebugMessage
	 */
	struct UScramGameInstance_ShowDebugMessage_Params
	{
	public:
		class FString                                              Message;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LifeTime;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.SetUseVoiceChat
	 */
	struct UScramGameInstance_SetUseVoiceChat_Params
	{
	public:
		bool                                                       useVoice;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.SetLocalizationCulture
	 */
	struct UScramGameInstance_SetLocalizationCulture_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Culture;                                                 // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.SetAvatarLook
	 */
	struct UScramGameInstance_SetAvatarLook_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAvatarLook                                         AvatarLook;                                              // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.SaveGameData
	 */
	struct UScramGameInstance_SaveGameData_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.RemoveShelfActor
	 */
	struct UScramGameInstance_RemoveShelfActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.RefreshGameInvites
	 */
	struct UScramGameInstance_RefreshGameInvites_Params
	{
	public:
		class FScriptDelegate                                      Event;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.OnInputFocusReceived
	 */
	struct UScramGameInstance_OnInputFocusReceived_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.OnInputFocusLost
	 */
	struct UScramGameInstance_OnInputFocusLost_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.OnHeadsetReconnected
	 */
	struct UScramGameInstance_OnHeadsetReconnected_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.OnHeadsetDisconnected
	 */
	struct UScramGameInstance_OnHeadsetDisconnected_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.OnControllerConnectionChanged
	 */
	struct UScramGameInstance_OnControllerConnectionChanged_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.LocalNetworkVersionOverride
	 */
	struct UScramGameInstance_LocalNetworkVersionOverride_Params
	{
	public:
		uint32_t                                                   ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.LoadSoftRefTexture
	 */
	struct UScramGameInstance_LoadSoftRefTexture_Params
	{
	public:
		unsigned char                                              UnknownData_L1AY[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UTexture2D*                                          ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.LoadSoftObject
	 */
	struct UScramGameInstance_LoadSoftObject_Params
	{
	public:
		unsigned char                                              UnknownData_WBRV[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.LoadSoftClassActor
	 */
	struct UScramGameInstance_LoadSoftClassActor_Params
	{
	public:
		unsigned char                                              UnknownData_SHLX[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.LoadGameData
	 */
	struct UScramGameInstance_LoadGameData_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.LoadArrayFromSoftTextures
	 */
	struct UScramGameInstance_LoadArrayFromSoftTextures_Params
	{
	public:
		unsigned char                                              UnknownData_DOGB[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UTexture2D*>                                  textureList;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.IsHeadsetConnected
	 */
	struct UScramGameInstance_IsHeadsetConnected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.InitializePendingGameInvitesComplete
	 */
	struct UScramGameInstance_InitializePendingGameInvitesComplete_Params
	{
	public:
		bool                                                       wasSuccessful;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NWQ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FScramGameInvite>                            invites;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.InitializePendingGameInvites
	 */
	struct UScramGameInstance_InitializePendingGameInvites_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.HasSportStateSaved
	 */
	struct UScramGameInstance_HasSportStateSaved_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.HasPendingGameInvites
	 */
	struct UScramGameInstance_HasPendingGameInvites_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.GetUseVoiceChat
	 */
	struct UScramGameInstance_GetUseVoiceChat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.GetSaveData
	 */
	struct UScramGameInstance_GetSaveData_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramSaveData*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.GetLocalizationCulture
	 */
	struct UScramGameInstance_GetLocalizationCulture_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.DoesUseVoiceChat
	 */
	struct UScramGameInstance_DoesUseVoiceChat_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.DismissPendingGameInvite
	 */
	struct UScramGameInstance_DismissPendingGameInvite_Params
	{
	public:
		struct FScramGameInvite                                    invite;                                                  // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.DismissAllPendingGameInvites
	 */
	struct UScramGameInstance_DismissAllPendingGameInvites_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.ClearSavedSportState
	 */
	struct UScramGameInstance_ClearSavedSportState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.ClearDebugMessages
	 */
	struct UScramGameInstance_ClearDebugMessages_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.BroadcastLocalAvatarLook
	 */
	struct UScramGameInstance_BroadcastLocalAvatarLook_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.BeginListeningForDisconnection
	 */
	struct UScramGameInstance_BeginListeningForDisconnection_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameInstance.AsyncLoadObjects
	 */
	struct UScramGameInstance_AsyncLoadObjects_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6A0G[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      Delegate;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.AsyncLoadClasses
	 */
	struct UScramGameInstance_AsyncLoadClasses_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9YRJ[0x10];                                  // 0x0008(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      onSuccessEvent;                                          // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.AreControllersConnected
	 */
	struct UScramGameInstance_AreControllersConnected_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameInstance.AddShelfActor
	 */
	struct UScramGameInstance_AddShelfActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameMode.ServerTravel
	 */
	struct AScramGameMode_ServerTravel_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Absolute;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ShouldSkipGameNotify;                                    // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameMode.ResetMatch
	 */
	struct AScramGameMode_ResetMatch_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameMode.GetClientSportPreferences
	 */
	struct AScramGameMode_GetClientSportPreferences_Params
	{
	public:
		struct FScramSportPreferences                              ReturnValue;                                             // 0x0000(0x0003)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameMode.DisallowMultiplayerLogins
	 */
	struct AScramGameMode_DisallowMultiplayerLogins_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameMode.ClientSportPreferencesReceived
	 */
	struct AScramGameMode_ClientSportPreferencesReceived_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameMode.AllowMatchmakingLogins
	 */
	struct AScramGameMode_AllowMatchmakingLogins_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameMode.AllowFriendLogin
	 */
	struct AScramGameMode_AllowFriendLogin_Params
	{
	public:
		struct FScramFriend                                        ScramFriend;                                             // 0x0000(0x0038)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.StartMatch
	 */
	struct AScramGameState_StartMatch_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.ShowPausedActors
	 */
	struct AScramGameState_ShowPausedActors_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.ShowAllActors
	 */
	struct AScramGameState_ShowAllActors_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.SetActiveBallClass
	 */
	struct AScramGameState_SetActiveBallClass_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              activeBallClass;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.OnPauseCapsuleRemoved
	 */
	struct AScramGameState_OnPauseCapsuleRemoved_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.OnPauseCapsuleAdded
	 */
	struct AScramGameState_OnPauseCapsuleAdded_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.OnActorSpawned
	 */
	struct AScramGameState_OnActorSpawned_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.IsLocalGameStatePaused
	 */
	struct AScramGameState_IsLocalGameStatePaused_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.IsGameStatePaused
	 */
	struct AScramGameState_IsGameStatePaused_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.IsActorHidden
	 */
	struct AScramGameState_IsActorHidden_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.HidePausedActors
	 */
	struct AScramGameState_HidePausedActors_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.HideAllActors
	 */
	struct AScramGameState_HideAllActors_Params
	{	};

	/**
	 * Function SportsScramble.ScramGameState.GetSportManager
	 */
	struct AScramGameState_GetSportManager_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramSportManagerBase*                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetSport
	 */
	struct AScramGameState_GetSport_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramSport                                                ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetSmoothedPingVariance
	 */
	struct AScramGameState_GetSmoothedPingVariance_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetSmoothedPingTime
	 */
	struct AScramGameState_GetSmoothedPingTime_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetScramServerWorldTime
	 */
	struct AScramGameState_GetScramServerWorldTime_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetPingTime
	 */
	struct AScramGameState_GetPingTime_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetPauseCapsuleTransform
	 */
	struct AScramGameState_GetPauseCapsuleTransform_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OFRU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.GetActiveBallClass
	 */
	struct AScramGameState_GetActiveBallClass_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGameResume
	 */
	struct AScramGameState_BlueprintCall_OnMultiplayerGameResume_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramGameState.BlueprintCall_OnMultiplayerGamePaused
	 */
	struct AScramGameState_BlueprintCall_OnMultiplayerGamePaused_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramHandshakeActor.ServerReady
	 */
	struct AScramHandshakeActor_ServerReady_Params
	{	};

	/**
	 * Function SportsScramble.ScramInviteManager.HasAcceptedShellInvite
	 */
	struct AScramInviteManager_HasAcceptedShellInvite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramInviteManager.GetInviteManager
	 */
	struct AScramInviteManager_GetInviteManager_Params
	{
	public:
		class AScramInviteManager*                                 ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramLauncher.TryCalculateTrajectory
	 */
	struct AScramLauncher_TryCalculateTrajectory_Params
	{
	public:
		struct FScramTrajectory                                    outTrajectory;                                           // 0x0000(0x01F0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FVector                                             launchOrigin;                                            // 0x01F0(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      horizontalVariance;                                      // 0x01FC(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      verticalVariance;                                        // 0x0200(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0204(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramLauncher.SetScrambleMods
	 */
	struct AScramLauncher_SetScrambleMods_Params
	{
	public:
		class UDataTable*                                          DataTable;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramLauncher.SetMinSpaceBetweenLeftRightMargins
	 */
	struct AScramLauncher_SetMinSpaceBetweenLeftRightMargins_Params
	{
	public:
		float                                                      minSpace;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramLauncher.LaunchWithTrajectory
	 */
	struct AScramLauncher_LaunchWithTrajectory_Params
	{
	public:
		struct FScramTrajectory                                    trajectory;                                              // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class AScramBall*                                          ReturnValue;                                             // 0x01F0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramLauncher.Launch
	 */
	struct AScramLauncher_Launch_Params
	{
	public:
		float                                                      horizontalVariance;                                      // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      verticalVariance;                                        // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramBall*                                          ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.SetAvatarLook
	 */
	struct UScramNetworkHelperComponent_SetAvatarLook_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAvatarLook                                         AvatarLook;                                              // 0x0008(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateTennisBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Server_UpdateTennisBallTrajectory_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KCKF[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTennisBallNetworkUpdate                            Update;                                                  // 0x0010(0x0260)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateStickDrivenCatcherGlove
	 */
	struct UScramNetworkHelperComponent_Server_UpdateStickDrivenCatcherGlove_Params
	{
	public:
		class ABaseballThrowingGlove*                              pGlove;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      leftRight;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      upDown;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateDodgeballBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Server_UpdateDodgeballBallTrajectory_Params
	{
	public:
		class ADodgeballBall*                                      pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KR90[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectory;                                              // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FDodgeballShot                                      newShot;                                                 // 0x0200(0x0003)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBowlingBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Server_UpdateBowlingBallTrajectory_Params
	{
	public:
		class ABowlingBall*                                        pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PER2[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectory;                                              // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBowlingThrow                                       newThrow;                                                // 0x0200(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_UpdateBaseballBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Server_UpdateBaseballBallTrajectory_Params
	{
	public:
		class ABaseballBall*                                       pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Y7NU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBaseballNetworkUpdate                              Update;                                                  // 0x0010(0x0200)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectoryWithSlowDown
	 */
	struct UScramNetworkHelperComponent_Server_StartFollowingTrajectoryWithSlowDown_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MX1D[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectoryToFollow;                                      // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      TimeScale;                                               // 0x0200(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0204(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0208(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxStepDown;                                             // 0x020C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_StartFollowingTrajectory
	 */
	struct UScramNetworkHelperComponent_Server_StartFollowingTrajectory_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EAJ9[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectoryToFollow;                                      // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SportManagerReady
	 */
	struct UScramNetworkHelperComponent_Server_SportManagerReady_Params
	{
	public:
		class AScramSportManagerBase*                              pSportManager;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SpawnPitcherScrambleOptions
	 */
	struct UScramNetworkHelperComponent_Server_SpawnPitcherScrambleOptions_Params
	{
	public:
		class ABaseballMitt*                                       pMitt;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SetTennisBallRallyCount
	 */
	struct UScramNetworkHelperComponent_Server_SetTennisBallRallyCount_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    rallyCount;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPreferences
	 */
	struct UScramNetworkHelperComponent_Server_SetPlayerPreferences_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScramPlayerPreferences                             preferences;                                             // 0x0008(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SetPlayerPausedRemote
	 */
	struct UScramNetworkHelperComponent_Server_SetPlayerPausedRemote_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGamePauseReason                                           reason;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       paused;                                                  // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SetFutureBallHit
	 */
	struct UScramNetworkHelperComponent_Server_SetFutureBallHit_Params
	{
	public:
		struct FFutureBallHit                                      FutureBallHit;                                           // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SetAvatarLook
	 */
	struct UScramNetworkHelperComponent_Server_SetAvatarLook_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAvatarLook                                         AvatarLook;                                              // 0x0008(0x0020)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_ServeTriggerSpawnBall
	 */
	struct UScramNetworkHelperComponent_Server_ServeTriggerSpawnBall_Params
	{
	public:
		class AScramPlayerServeTrigger*                            pServeTrigger;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              BallClass;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallSpawned
	 */
	struct UScramNetworkHelperComponent_Server_ServeBallSpawned_Params
	{
	public:
		class AScramPlayerServeTrigger*                            pServeTrigger;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramBall*                                          pBall;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_ServeBallGrabbed
	 */
	struct UScramNetworkHelperComponent_Server_ServeBallGrabbed_Params
	{
	public:
		class AScramPlayerServeTrigger*                            pServeTrigger;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramBall*                                          pBall;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_SendPlayByPlayEvent
	 */
	struct UScramNetworkHelperComponent_Server_SendPlayByPlayEvent_Params
	{
	public:
		int32_t                                                    eventIndex;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A385[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pPlayer;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RequestAvatarLook
	 */
	struct UScramNetworkHelperComponent_Server_RequestAvatarLook_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteGameDone
	 */
	struct UScramNetworkHelperComponent_Server_RemoteGameDone_Params
	{
	public:
		class AScramSportManagerBase*                              pSportManager;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillTerminate
	 */
	struct UScramNetworkHelperComponent_Server_RemoteApplicationWillTerminate_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillEnterBackground
	 */
	struct UScramNetworkHelperComponent_Server_RemoteApplicationWillEnterBackground_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationWillDeactivate
	 */
	struct UScramNetworkHelperComponent_Server_RemoteApplicationWillDeactivate_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasReactivated
	 */
	struct UScramNetworkHelperComponent_Server_RemoteApplicationHasReactivated_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_RemoteApplicationHasEnteredForeground
	 */
	struct UScramNetworkHelperComponent_Server_RemoteApplicationHasEnteredForeground_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_ReceiveHeartbeat
	 */
	struct UScramNetworkHelperComponent_Server_ReceiveHeartbeat_Params
	{
	public:
		uint16_t                                                   remotePendingNetGeneration;                              // 0x0000(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint16_t                                                   remoteEstablishedNetGeneration;                          // 0x0002(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_PingHandShake
	 */
	struct UScramNetworkHelperComponent_Server_PingHandShake_Params
	{
	public:
		float                                                      clientPingTime;                                          // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGameResume
	 */
	struct UScramNetworkHelperComponent_Server_MultiplayerGameResume_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_MultiplayerGamePause
	 */
	struct UScramNetworkHelperComponent_Server_MultiplayerGamePause_Params
	{
	public:
		bool                                                       isCalledByHost;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGamePauseReason                                           reason;                                                  // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_HandshakeActorReady
	 */
	struct UScramNetworkHelperComponent_Server_HandshakeActorReady_Params
	{
	public:
		class AScramHandshakeActor*                                pHandshakeActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberRelease
	 */
	struct UScramNetworkHelperComponent_Server_GrabberRelease_Params
	{
	public:
		class AActor*                                              pGrabberActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_GrabberGrab
	 */
	struct UScramNetworkHelperComponent_Server_GrabberGrab_Params
	{
	public:
		class AActor*                                              pGrabberActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              pGrabbableActor;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       snap;                                                    // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_DrawDebugSphere
	 */
	struct UScramNetworkHelperComponent_Server_DrawDebugSphere_Params
	{
	public:
		class AActor*                                              pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               Center;                                                  // 0x0008(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Segments;                                                // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LifeTime;                                                // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_DestroyPrimitive
	 */
	struct UScramNetworkHelperComponent_Server_DestroyPrimitive_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       playOut;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JFHI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_ClearTennisBallTrajectoryOwnership
	 */
	struct UScramNetworkHelperComponent_Server_ClearTennisBallTrajectoryOwnership_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_ClearPausedTrajectory
	 */
	struct UScramNetworkHelperComponent_Server_ClearPausedTrajectory_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_CallTennisDoubleBounce
	 */
	struct UScramNetworkHelperComponent_Server_CallTennisDoubleBounce_Params
	{
	public:
		class AScramSportManagerTennis*                            pTennisManager;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATennisBall*                                         pTrackedBall;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Tennis
	 */
	struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Tennis_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U9RW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETennisEvent                                               TennisEvent;                                             // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Object
	 */
	struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Object_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z80E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             pObjectParameter;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Null
	 */
	struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Null_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OOVD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Collision
	 */
	struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Collision_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I8J3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              pOtherActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNormal;                                               // 0x0024(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Bowling
	 */
	struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Bowling_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C5ZS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WXCB[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pBowlingBall;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BroadcastScramEvent_Baseball
	 */
	struct UScramNetworkHelperComponent_Server_BroadcastScramEvent_Baseball_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_96P2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBaseballEvent                                             BaseballEvent;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9675[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABaseballBall*                                       pBall;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballCatcherCaught
	 */
	struct UScramNetworkHelperComponent_Server_BaseballCatcherCaught_Params
	{
	public:
		class AActor*                                              pCatcher;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABaseballBall*                                       pBall;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Server_BaseballBallPitched
	 */
	struct UScramNetworkHelperComponent_Server_BaseballBallPitched_Params
	{
	public:
		class ABaseballThrowingGlove*                              pGlove;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABaseballBall*                                       pBall;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ThrowSpeed;                                              // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisNextPlayerToHitBall
	 */
	struct UScramNetworkHelperComponent_Client_UpdateTennisNextPlayerToHitBall_Params
	{
	public:
		int32_t                                                    nextPlayerIndex;                                         // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_33S5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramSportManagerTennis*                            pTennisManager;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Client_UpdateTennisBallTrajectory_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z7W6[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTennisBallNetworkUpdate                            Update;                                                  // 0x0010(0x0260)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateTennisBallInPlay
	 */
	struct UScramNetworkHelperComponent_Client_UpdateTennisBallInPlay_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATennisBall*                                         pLastBall;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32_t                                                   ballGeneration;                                          // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9RPX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramSportManagerTennis*                            pTennisManager;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateStickDrivenCatcherGlove
	 */
	struct UScramNetworkHelperComponent_Client_UpdateStickDrivenCatcherGlove_Params
	{
	public:
		class ABaseballThrowingGlove*                              pGlove;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      leftRight;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      upDown;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBowlingBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Client_UpdateBowlingBallTrajectory_Params
	{
	public:
		class ABowlingBall*                                        pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0BSO[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectory;                                              // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FBowlingThrow                                       newThrow;                                                // 0x0200(0x0004)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_UpdateBaseballBallTrajectory
	 */
	struct UScramNetworkHelperComponent_Client_UpdateBaseballBallTrajectory_Params
	{
	public:
		class ABaseballBall*                                       pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_AWA0[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FBaseballNetworkUpdate                              Update;                                                  // 0x0010(0x0200)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectoryWithSlowDown
	 */
	struct UScramNetworkHelperComponent_Client_StartFollowingTrajectoryWithSlowDown_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z8CU[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectoryToFollow;                                      // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      TimeScale;                                               // 0x0200(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Delay;                                                   // 0x0204(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Duration;                                                // 0x0208(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      maxStepDown;                                             // 0x020C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_StartFollowingTrajectory
	 */
	struct UScramNetworkHelperComponent_Client_StartFollowingTrajectory_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FSBX[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FScramTrajectory                                    trajectoryToFollow;                                      // 0x0010(0x01F0)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_SetTimeScale
	 */
	struct UScramNetworkHelperComponent_Client_SetTimeScale_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      TimeScale;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_SetTennisBallRallyCount
	 */
	struct UScramNetworkHelperComponent_Client_SetTennisBallRallyCount_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    rallyCount;                                              // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPreferences
	 */
	struct UScramNetworkHelperComponent_Client_SetPlayerPreferences_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FScramPlayerPreferences                             preferences;                                             // 0x0008(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_SetPlayerPausedRemote
	 */
	struct UScramNetworkHelperComponent_Client_SetPlayerPausedRemote_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGamePauseReason                                           reason;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       paused;                                                  // 0x0009(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_SetFutureBallHit
	 */
	struct UScramNetworkHelperComponent_Client_SetFutureBallHit_Params
	{
	public:
		struct FFutureBallHit                                      FutureBallHit;                                           // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_SetAvatarLook
	 */
	struct UScramNetworkHelperComponent_Client_SetAvatarLook_Params
	{
	public:
		class AScramPlayer*                                        pPlayer;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FAvatarLook                                         AvatarLook;                                              // 0x0008(0x0020)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallSpawned
	 */
	struct UScramNetworkHelperComponent_Client_ServeBallSpawned_Params
	{
	public:
		class AScramPlayerServeTrigger*                            pServeTrigger;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramBall*                                          pBall;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_ServeBallGrabbed
	 */
	struct UScramNetworkHelperComponent_Client_ServeBallGrabbed_Params
	{
	public:
		class AScramPlayerServeTrigger*                            pServeTrigger;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramBall*                                          pBall;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteGameDone
	 */
	struct UScramNetworkHelperComponent_Client_RemoteGameDone_Params
	{
	public:
		class AScramSportManagerBase*                              pSportManager;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillTerminate
	 */
	struct UScramNetworkHelperComponent_Client_RemoteApplicationWillTerminate_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillEnterBackground
	 */
	struct UScramNetworkHelperComponent_Client_RemoteApplicationWillEnterBackground_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationWillDeactivate
	 */
	struct UScramNetworkHelperComponent_Client_RemoteApplicationWillDeactivate_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasReactivated
	 */
	struct UScramNetworkHelperComponent_Client_RemoteApplicationHasReactivated_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_RemoteApplicationHasEnteredForeground
	 */
	struct UScramNetworkHelperComponent_Client_RemoteApplicationHasEnteredForeground_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_ReceiveHeartbeat
	 */
	struct UScramNetworkHelperComponent_Client_ReceiveHeartbeat_Params
	{
	public:
		uint16_t                                                   remotePendingNetGeneration;                              // 0x0000(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint16_t                                                   remoteEstablishedNetGeneration;                          // 0x0002(0x0002)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_PingHandShake
	 */
	struct UScramNetworkHelperComponent_Client_PingHandShake_Params
	{	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberRelease
	 */
	struct UScramNetworkHelperComponent_Client_GrabberRelease_Params
	{
	public:
		class AActor*                                              pGrabberActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_GrabberGrab
	 */
	struct UScramNetworkHelperComponent_Client_GrabberGrab_Params
	{
	public:
		class AActor*                                              pGrabberActor;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              pGrabbableActor;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       snap;                                                    // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_DrawDebugSphere
	 */
	struct UScramNetworkHelperComponent_Client_DrawDebugSphere_Params
	{
	public:
		class AActor*                                              pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector_NetQuantize10                               Center;                                                  // 0x0008(0x000C)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Segments;                                                // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FColor                                              Color;                                                   // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LifeTime;                                                // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_DestroyPrimitive
	 */
	struct UScramNetworkHelperComponent_Client_DestroyPrimitive_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       playOut;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZSCB[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_ClearTennisBallTrajectoryOwnership
	 */
	struct UScramNetworkHelperComponent_Client_ClearTennisBallTrajectoryOwnership_Params
	{
	public:
		class ATennisBall*                                         pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_ClearPausedTrajectory
	 */
	struct UScramNetworkHelperComponent_Client_ClearPausedTrajectory_Params
	{
	public:
		class AScramPrimitiveActor*                                pPrimitive;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Tennis
	 */
	struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Tennis_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_OXHI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETennisEvent                                               TennisEvent;                                             // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Object
	 */
	struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Object_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7ZSW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             pObjectParameter;                                        // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Null
	 */
	struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Null_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_36U1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Collision
	 */
	struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Collision_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MS7S[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              pOtherActor;                                             // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0018(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitNormal;                                               // 0x0024(0x000C)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Bowling
	 */
	struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Bowling_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q2W9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BZUV[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pBowlingBall;                                            // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramNetworkHelperComponent.Client_BroadcastScramEvent_Baseball
	 */
	struct UScramNetworkHelperComponent_Client_BroadcastScramEvent_Baseball_Params
	{
	public:
		EScramEvent                                                ScramEvent;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_539C[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PlayerIndex;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBaseballEvent                                             BaseballEvent;                                           // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XIBX[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ABaseballBall*                                       pBall;                                                   // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPauseCapsule.ShowCapsule
	 */
	struct AScramPauseCapsule_ShowCapsule_Params
	{	};

	/**
	 * Function SportsScramble.ScramPauseCapsule.HideCapsule
	 */
	struct AScramPauseCapsule_HideCapsule_Params
	{	};

	/**
	 * Function SportsScramble.ScramPauseManager.QueuePauseEvent
	 */
	struct AScramPauseManager_QueuePauseEvent_Params
	{
	public:
		class FScriptDelegate                                      PauseEvent;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.SetWorldTimeDilation
	 */
	struct AScramPlayer_SetWorldTimeDilation_Params
	{
	public:
		float                                                      timeDilation;                                            // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.SetScriptedFadeOutOpacity
	 */
	struct AScramPlayer_SetScriptedFadeOutOpacity_Params
	{
	public:
		float                                                      Opacity;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.SetNetVisible
	 */
	struct AScramPlayer_SetNetVisible_Params
	{
	public:
		bool                                                       netVisible;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.SetAvatarMaterials
	 */
	struct AScramPlayer_SetAvatarMaterials_Params
	{
	public:
		struct FAvatarLook                                         AvatarLook;                                              // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.SetAnchor
	 */
	struct AScramPlayer_SetAnchor_Params
	{
	public:
		struct FTransform                                          anchor;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox                                                minPlayArea;                                             // 0x0030(0x001C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox                                                maxPlayArea;                                             // 0x004C(0x001C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FBox                                                maxHazardArea;                                           // 0x0068(0x001C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_UpdateTransforms
	 */
	struct AScramPlayer_Server_UpdateTransforms_Params
	{
	public:
		struct FPlayerTransforms                                   Transforms;                                              // 0x0000(0x00C0)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		uint32_t                                                   updateCounter;                                           // 0x00C0(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_UpdatePlayAreaDiagonal
	 */
	struct AScramPlayer_Server_UpdatePlayAreaDiagonal_Params
	{
	public:
		float                                                      newPlayAreaDiagonal;                                     // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_SpawnHands
	 */
	struct AScramPlayer_Server_SpawnHands_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_SetTennisReturnData
	 */
	struct AScramPlayer_Server_SetTennisReturnData_Params
	{
	public:
		struct FPlayerTennisReturn                                 newReturnData;                                           // 0x0000(0x0030)  (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_SetPlayerReadyForMatch
	 */
	struct AScramPlayer_Server_SetPlayerReadyForMatch_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_SetNetVisible
	 */
	struct AScramPlayer_Server_SetNetVisible_Params
	{
	public:
		bool                                                       netVisible;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.Server_ClientSelectedAvatar
	 */
	struct AScramPlayer_Server_ClientSelectedAvatar_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.SavePreferences
	 */
	struct AScramPlayer_SavePreferences_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.ResetAnchor
	 */
	struct AScramPlayer_ResetAnchor_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.RecenterDetected
	 */
	struct AScramPlayer_RecenterDetected_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.PlayerResume
	 */
	struct AScramPlayer_PlayerResume_Params
	{
	public:
		EGamePauseReason                                           reason;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       multiplayer;                                             // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.PlayerPause
	 */
	struct AScramPlayer_PlayerPause_Params
	{
	public:
		EGamePauseReason                                           reason;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       multiplayer;                                             // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.OnRep_TennisReturnData
	 */
	struct AScramPlayer_OnRep_TennisReturnData_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.OnRep_NetVisible
	 */
	struct AScramPlayer_OnRep_NetVisible_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.OnRep_ClientTransforms
	 */
	struct AScramPlayer_OnRep_ClientTransforms_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.OnRep_ClientPlayAreaDiagonal
	 */
	struct AScramPlayer_OnRep_ClientPlayAreaDiagonal_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.OnRecenter
	 */
	struct AScramPlayer_OnRecenter_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.OnPlayerOutOfBoundary
	 */
	struct AScramPlayer_OnPlayerOutOfBoundary_Params
	{
	public:
		struct FTransform                                          ReturnTransform;                                         // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.OnPlayerEnterBoundary
	 */
	struct AScramPlayer_OnPlayerEnterBoundary_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.NetSetPreferences
	 */
	struct AScramPlayer_NetSetPreferences_Params
	{
	public:
		struct FScramPlayerPreferences                             preferences;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.LocalAvatarSelected
	 */
	struct AScramPlayer_LocalAvatarSelected_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.LoadPreferences
	 */
	struct AScramPlayer_LoadPreferences_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.IsPlayerRestricted
	 */
	struct AScramPlayer_IsPlayerRestricted_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.IsPlayerPausedExcluded
	 */
	struct AScramPlayer_IsPlayerPausedExcluded_Params
	{
	public:
		EGamePauseReason                                           exludedReason;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.IsPlayerPaused
	 */
	struct AScramPlayer_IsPlayerPaused_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.IsPlayerFadedOut
	 */
	struct AScramPlayer_IsPlayerFadedOut_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.IsInitComplete
	 */
	struct AScramPlayer_IsInitComplete_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.HasBegunPlay
	 */
	struct AScramPlayer_HasBegunPlay_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetWorldTimeDilation
	 */
	struct AScramPlayer_GetWorldTimeDilation_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetScriptedFadeOutOpacity
	 */
	struct AScramPlayer_GetScriptedFadeOutOpacity_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetPreferredHandedness
	 */
	struct AScramPlayer_GetPreferredHandedness_Params
	{
	public:
		EScramHandedness                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetPreferences
	 */
	struct AScramPlayer_GetPreferences_Params
	{
	public:
		struct FScramPlayerPreferences                             ReturnValue;                                             // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetPlayAreaTransform
	 */
	struct AScramPlayer_GetPlayAreaTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetOrthogonalAnchor
	 */
	struct AScramPlayer_GetOrthogonalAnchor_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetHand
	 */
	struct AScramPlayer_GetHand_Params
	{
	public:
		EScramHandedness                                           Handedness;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7KPU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AScramPlayerHand*                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetDominantStroke
	 */
	struct AScramPlayer_GetDominantStroke_Params
	{
	public:
		EScramStroke                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetDominantHandedness
	 */
	struct AScramPlayer_GetDominantHandedness_Params
	{
	public:
		EScramHandedness                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.GetAnchor
	 */
	struct AScramPlayer_GetAnchor_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.ForceChangeGrabbable
	 */
	struct AScramPlayer_ForceChangeGrabbable_Params
	{
	public:
		class UClass*                                              NewGrabbableClass;                                       // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramPlayerHand*                                    SpecificHand;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramPrimitiveGrabbable*                            ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.EnsureHasHands
	 */
	struct AScramPlayer_EnsureHasHands_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.DestroyAllGrabbables
	 */
	struct AScramPlayer_DestroyAllGrabbables_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DQVA[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.DeferredInit
	 */
	struct AScramPlayer_DeferredInit_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.ConstrainToPlayArea
	 */
	struct AScramPlayer_ConstrainToPlayArea_Params
	{
	public:
		struct FVector                                             Point;                                                   // 0x0000(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Radius;                                                  // 0x000C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.Client_ServerSelectedAvatar
	 */
	struct AScramPlayer_Client_ServerSelectedAvatar_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayer.ChangeAvatarBlueprint
	 */
	struct AScramPlayer_ChangeAvatarBlueprint_Params
	{
	public:
		class UClass*                                              avatarClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       PlaySpawnAnimation;                                      // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayer.CanBeSeen
	 */
	struct AScramPlayer_CanBeSeen_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerBoundary.ResetPlayerAnchor
	 */
	struct AScramPlayerBoundary_ResetPlayerAnchor_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerBoundary.ResetHazardLine
	 */
	struct AScramPlayerBoundary_ResetHazardLine_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerController.UnpauseLocalHeartbeat
	 */
	struct AScramPlayerController_UnpauseLocalHeartbeat_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerController.StopLocalHeartbeat
	 */
	struct AScramPlayerController_StopLocalHeartbeat_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerController.StopHeartbeat
	 */
	struct AScramPlayerController_StopHeartbeat_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerController.StartHeartbeat
	 */
	struct AScramPlayerController_StartHeartbeat_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerController.ServerSetSportPreferences
	 */
	struct AScramPlayerController_ServerSetSportPreferences_Params
	{
	public:
		struct FScramSportPreferences                              clientPreferences;                                       // 0x0000(0x0003)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerController.ResumeHeartbeatEvents
	 */
	struct AScramPlayerController_ResumeHeartbeatEvents_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerController.RestartHeartbeat
	 */
	struct AScramPlayerController_RestartHeartbeat_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerController.PauseLocalHeartbeat
	 */
	struct AScramPlayerController_PauseLocalHeartbeat_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerController.HasStartedHeartbeat
	 */
	struct AScramPlayerController_HasStartedHeartbeat_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerController.DEBUGForceHeartbeatTimeout
	 */
	struct AScramPlayerController_DEBUGForceHeartbeatTimeout_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerController.ClientRequestSportPreferences
	 */
	struct AScramPlayerController_ClientRequestSportPreferences_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerHand.SpawnAndGrabActor
	 */
	struct AScramPlayerHand_SpawnAndGrabActor_Params
	{
	public:
		class UClass*                                              GrabbableClass;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.ServerGrabSpawnedActor
	 */
	struct AScramPlayerHand_ServerGrabSpawnedActor_Params
	{
	public:
		class AActor*                                              GrabbableActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.Server_SpawnAndGrabActor
	 */
	struct AScramPlayerHand_Server_SpawnAndGrabActor_Params
	{
	public:
		class UClass*                                              ActorClass;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IY7H[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          SpawnTransform;                                          // 0x0010(0x0030)  (ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.OnRep_ClientSpawnedActor
	 */
	struct AScramPlayerHand_OnRep_ClientSpawnedActor_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerHand.OnGrabbableHit
	 */
	struct AScramPlayerHand_OnGrabbableHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.GrabberIsTracked
	 */
	struct AScramPlayerHand_GrabberIsTracked_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.GetPlayer
	 */
	struct AScramPlayerHand_GetPlayer_Params
	{
	public:
		class AScramPlayer*                                        ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.GetGrabberVerticalStroke
	 */
	struct AScramPlayerHand_GetGrabberVerticalStroke_Params
	{
	public:
		EScramStroke                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.GetGrabberStroke
	 */
	struct AScramPlayerHand_GetGrabberStroke_Params
	{
	public:
		EScramStroke                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.GetGrabberHorizontalStroke
	 */
	struct AScramPlayerHand_GetGrabberHorizontalStroke_Params
	{
	public:
		EScramStroke                                               ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.GetGrabberHandedness
	 */
	struct AScramPlayerHand_GetGrabberHandedness_Params
	{
	public:
		EScramHandedness                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.ForceReleaseCurrentGrabbable
	 */
	struct AScramPlayerHand_ForceReleaseCurrentGrabbable_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerHand.ForceGrab
	 */
	struct AScramPlayerHand_ForceGrab_Params
	{
	public:
		class AActor*                                              GrabbableActor;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.DestroyCurrentGrabbable
	 */
	struct AScramPlayerHand_DestroyCurrentGrabbable_Params
	{
	public:
		bool                                                       playOut;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4UEF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Delay;                                                   // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerHand.DeferredInit
	 */
	struct AScramPlayerHand_DeferredInit_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerHand.CurrentGrabbableActor
	 */
	struct AScramPlayerHand_CurrentGrabbableActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerTrigger.OnPlayerStay
	 */
	struct AScramPlayerTrigger_OnPlayerStay_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerTrigger.OnPlayerExit
	 */
	struct AScramPlayerTrigger_OnPlayerExit_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerTrigger.OnPlayerEnter
	 */
	struct AScramPlayerTrigger_OnPlayerEnter_Params
	{
	public:
		class AScramPlayer*                                        Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.Show
	 */
	struct AScramPlayerServeTrigger_Show_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.SetPlayerServing
	 */
	struct AScramPlayerServeTrigger_SetPlayerServing_Params
	{
	public:
		bool                                                       shouldServe;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.SetAllowRespawn
	 */
	struct AScramPlayerServeTrigger_SetAllowRespawn_Params
	{
	public:
		bool                                                       canSpawn;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.ServeBallSpawned
	 */
	struct AScramPlayerServeTrigger_ServeBallSpawned_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.ServeBallGrabbed
	 */
	struct AScramPlayerServeTrigger_ServeBallGrabbed_Params
	{
	public:
		class AScramBall*                                          Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.RespawnBall
	 */
	struct AScramPlayerServeTrigger_RespawnBall_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.ResetServeTrigger
	 */
	struct AScramPlayerServeTrigger_ResetServeTrigger_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.OnRep_ClientBall
	 */
	struct AScramPlayerServeTrigger_OnRep_ClientBall_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.Hide
	 */
	struct AScramPlayerServeTrigger_Hide_Params
	{	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.HandleServeTrajectory
	 */
	struct AScramPlayerServeTrigger_HandleServeTrajectory_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.HandlePostHit
	 */
	struct AScramPlayerServeTrigger_HandlePostHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.HandleBallGrabbed
	 */
	struct AScramPlayerServeTrigger_HandleBallGrabbed_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.GetPlayerServing
	 */
	struct AScramPlayerServeTrigger_GetPlayerServing_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.GetBall
	 */
	struct AScramPlayerServeTrigger_GetBall_Params
	{
	public:
		class AScramBall*                                          ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.GetAllowRespawn
	 */
	struct AScramPlayerServeTrigger_GetAllowRespawn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramPlayerServeTrigger.DespawnCurrentBall
	 */
	struct AScramPlayerServeTrigger_DespawnCurrentBall_Params
	{	};

	/**
	 * Function SportsScramble.ScramSaveData.WipeSaveData
	 */
	struct UScramSaveData_WipeSaveData_Params
	{	};

	/**
	 * Function SportsScramble.ScramSaveData.WipeHighScoreData
	 */
	struct UScramSaveData_WipeHighScoreData_Params
	{	};

	/**
	 * Function SportsScramble.ScramSaveData.UnlockTraining
	 */
	struct UScramSaveData_UnlockTraining_Params
	{
	public:
		class FName                                                TrainingName;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSaveData.SaveNamedValue
	 */
	struct UScramSaveData_SaveNamedValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Value;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSaveData.SaveHighScore
	 */
	struct UScramSaveData_SaveHighScore_Params
	{
	public:
		class FName                                                GameName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      score;                                                   // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSaveData.GetTrainingProgression
	 */
	struct UScramSaveData_GetTrainingProgression_Params
	{
	public:
		class FName                                                TrainingName;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETrainingProgression                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSaveData.GetNamedValue
	 */
	struct UScramSaveData_GetNamedValue_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSaveData.GetHighScore
	 */
	struct UScramSaveData_GetHighScore_Params
	{
	public:
		class FName                                                GameName;                                                // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSaveData.CompleteTraining
	 */
	struct UScramSaveData_CompleteTraining_Params
	{
	public:
		class FName                                                TrainingName;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.StopSavingSportState
	 */
	struct AScramSportManagerBase_StopSavingSportState_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.SetSelectableBallClass
	 */
	struct AScramSportManagerBase_SetSelectableBallClass_Params
	{
	public:
		class UClass*                                              BallClass;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.ServerReady
	 */
	struct AScramSportManagerBase_ServerReady_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.SaveSportState
	 */
	struct AScramSportManagerBase_SaveSportState_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.OnHeartbeatSustained
	 */
	struct AScramSportManagerBase_OnHeartbeatSustained_Params
	{
	public:
		class AScramPlayerController*                              pPlayerController;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.OnHeartbeatDisconnected
	 */
	struct AScramSportManagerBase_OnHeartbeatDisconnected_Params
	{
	public:
		class AScramPlayerController*                              pPlayerController;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.OnGameDone
	 */
	struct AScramSportManagerBase_OnGameDone_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.LocalGameDone
	 */
	struct AScramSportManagerBase_LocalGameDone_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.GetPlayer
	 */
	struct AScramSportManagerBase_GetPlayer_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TO8V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBase.GetOtherPlayer
	 */
	struct AScramSportManagerBase_GetOtherPlayer_Params
	{
	public:
		class AActor*                                              Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.SetScrambleBallProperties
	 */
	struct AScramSportManagerBaseball_SetScrambleBallProperties_Params
	{
	public:
		TArray<struct FBaseballBallScrambleProperties>             Properties;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.SetBattingSkillOverride
	 */
	struct AScramSportManagerBaseball_SetBattingSkillOverride_Params
	{
	public:
		bool                                                       shouldOverride;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramSkill                                                skillLevel;                                              // 0x0001(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.SetBall
	 */
	struct AScramSportManagerBaseball_SetBall_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.SetAllowPitch
	 */
	struct AScramSportManagerBaseball_SetAllowPitch_Params
	{
	public:
		bool                                                       allowPitch;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.SendBaseballEvent
	 */
	struct AScramSportManagerBaseball_SendBaseballEvent_Params
	{
	public:
		EBaseballEvent                                             BaseballEvent;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9ECH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ABaseballBall*                                       Ball;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.SaveBaseballState
	 */
	struct AScramSportManagerBaseball_SaveBaseballState_Params
	{
	public:
		int32_t                                                    VisitorsScore;                                           // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HomeScore;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Inning;                                                  // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TopOfInning;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FirstPitchOfInning;                                      // 0x000D(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZFBW[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Outs;                                                    // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Strikes;                                                 // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              BatterInstrument;                                        // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMittSpawnInfo>                              PitcherScrambleOptions;                                  // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.RestartGame
	 */
	struct AScramSportManagerBaseball_RestartGame_Params
	{
	public:
		bool                                                       RestoringGame;                                           // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.OnStrikeZoneHit
	 */
	struct AScramSportManagerBaseball_OnStrikeZoneHit_Params
	{
	public:
		class ABaseballBall*                                       pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramStrikeResult                                         Result;                                                  // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.OnRunnerSpawned
	 */
	struct AScramSportManagerBaseball_OnRunnerSpawned_Params
	{
	public:
		class AScramBaseballRunnerAI*                              runner;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.OnBallHit
	 */
	struct AScramSportManagerBaseball_OnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.OnBallDeleted
	 */
	struct AScramSportManagerBaseball_OnBallDeleted_Params
	{
	public:
		class ABaseballBall*                                       Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.LoadBaseballState
	 */
	struct AScramSportManagerBaseball_LoadBaseballState_Params
	{
	public:
		int32_t                                                    VisitorsScore;                                           // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    HomeScore;                                               // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Inning;                                                  // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       TopOfInning;                                             // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       FirstPitchOfInning;                                      // 0x000D(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4LQO[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Outs;                                                    // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Strikes;                                                 // 0x0014(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              BatterInstrument;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMittSpawnInfo>                              PitcherScrambleOptions;                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetUnclassifiedBalls
	 */
	struct AScramSportManagerBaseball_GetUnclassifiedBalls_Params
	{
	public:
		TArray<class ABaseballBall*>                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetScrambleBallProperties
	 */
	struct AScramSportManagerBaseball_GetScrambleBallProperties_Params
	{
	public:
		TArray<struct FBaseballBallScrambleProperties>             ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetPitcher
	 */
	struct AScramSportManagerBaseball_GetPitcher_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetPitchedBalls
	 */
	struct AScramSportManagerBaseball_GetPitchedBalls_Params
	{
	public:
		TArray<class ABaseballBall*>                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetGameRunning
	 */
	struct AScramSportManagerBaseball_GetGameRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetFieldedBalls
	 */
	struct AScramSportManagerBaseball_GetFieldedBalls_Params
	{
	public:
		TArray<class ABaseballBall*>                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetBatterRunAdvantage
	 */
	struct AScramSportManagerBaseball_GetBatterRunAdvantage_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetBatter
	 */
	struct AScramSportManagerBaseball_GetBatter_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.GetBalls
	 */
	struct AScramSportManagerBaseball_GetBalls_Params
	{
	public:
		TArray<class ABaseballBall*>                               ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.DeleteBall
	 */
	struct AScramSportManagerBaseball_DeleteBall_Params
	{
	public:
		class ABaseballBall*                                       pBall;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       playOut;                                                 // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.BaseballEvent
	 */
	struct AScramSportManagerBaseball_BaseballEvent_Params
	{
	public:
		EBaseballEvent                                             BaseballEvent;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PYQR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Location;                                                // 0x0004(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBaseball.AssignStrikeZone
	 */
	struct AScramSportManagerBaseball_AssignStrikeZone_Params
	{
	public:
		class AScramStrikeZone*                                    strikeZone;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBowling.SendBowlingEvent
	 */
	struct AScramSportManagerBowling_SendBowlingEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_63X9[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              BallActor;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBowling.SaveBowlingState
	 */
	struct AScramSportManagerBowling_SaveBowlingState_Params
	{
	public:
		struct FBowlingScrambleState                               ScrambleState;                                           // 0x0000(0x0080)  (Parm, OutParm, NativeAccessSpecifierPublic)
		TArray<struct FBowlingFrameSet>                            TraditionalFrameSets;                                    // 0x0080(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBowling.RestartGame
	 */
	struct AScramSportManagerBowling_RestartGame_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerBowling.LoadBowlingState
	 */
	struct AScramSportManagerBowling_LoadBowlingState_Params
	{
	public:
		struct FBowlingScrambleState                               ScrambleState;                                           // 0x0000(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FBowlingFrameSet>                            TraditionalFrameSets;                                    // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerBowling.BowlingEvent
	 */
	struct AScramSportManagerBowling_BowlingEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBowlingEvent                                              BowlingEvent;                                            // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerDodgeball.StartGame
	 */
	struct AScramSportManagerDodgeball_StartGame_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerDodgeball.OnBallHit
	 */
	struct AScramSportManagerDodgeball_OnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerDodgeball.DodgeballEvent
	 */
	struct AScramSportManagerDodgeball_DodgeballEvent_Params
	{
	public:
		EDodgeballEvent                                            DodgeballEvent;                                          // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6RKD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.TennisEvent
	 */
	struct AScramSportManagerTennis_TennisEvent_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETennisEvent                                               TennisEvent;                                             // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.SetAllowServe
	 */
	struct AScramSportManagerTennis_SetAllowServe_Params
	{
	public:
		int32_t                                                    Player;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       allowServe;                                              // 0x0004(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.ServerOnBallHit
	 */
	struct AScramSportManagerTennis_ServerOnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.SendDebugString
	 */
	struct AScramSportManagerTennis_SendDebugString_Params
	{
	public:
		class FString                                              S;                                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.SaveTennisState
	 */
	struct AScramSportManagerTennis_SaveTennisState_Params
	{
	public:
		class UClass*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              player1Instrument;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              player2Instrument;                                       // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              activeArenaScramble;                                     // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.RestartMatch
	 */
	struct AScramSportManagerTennis_RestartMatch_Params
	{
	public:
		bool                                                       resetServer;                                             // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.ReplaceBallInPlay
	 */
	struct AScramSportManagerTennis_ReplaceBallInPlay_Params
	{
	public:
		class AActor*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.OnRep_InPlayInfo
	 */
	struct AScramSportManagerTennis_OnRep_InPlayInfo_Params
	{	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.LoadTennisState
	 */
	struct AScramSportManagerTennis_LoadTennisState_Params
	{
	public:
		class UClass*                                              Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              player1Instrument;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              player2Instrument;                                       // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              activeArenaScramble;                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetServingPlayer
	 */
	struct AScramSportManagerTennis_GetServingPlayer_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetReceivingPlayer
	 */
	struct AScramSportManagerTennis_GetReceivingPlayer_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetPlayerPoints
	 */
	struct AScramSportManagerTennis_GetPlayerPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetPlayerGames
	 */
	struct AScramSportManagerTennis_GetPlayerGames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetPlayerDoubleFaults
	 */
	struct AScramSportManagerTennis_GetPlayerDoubleFaults_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetPlayerAces
	 */
	struct AScramSportManagerTennis_GetPlayerAces_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetOpponentPoints
	 */
	struct AScramSportManagerTennis_GetOpponentPoints_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetOpponentGames
	 */
	struct AScramSportManagerTennis_GetOpponentGames_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetNextPlayerToHitBall
	 */
	struct AScramSportManagerTennis_GetNextPlayerToHitBall_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.GetBallInPlay
	 */
	struct AScramSportManagerTennis_GetBallInPlay_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramSportManagerTennis.ClientOnBallHit
	 */
	struct AScramSportManagerTennis_ClientOnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTennisAI.SetInstrumentProperties
	 */
	struct AScramTennisAI_SetInstrumentProperties_Params
	{
	public:
		struct FTennisInstrumentProperties                         instrumentProperties;                                    // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTennisAI.PlayRacquetSound
	 */
	struct AScramTennisAI_PlayRacquetSound_Params
	{
	public:
		class ATennisBall*                                         Ball;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      BallSpeed;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.TimeLineIsRunning
	 */
	struct UScramTimeLineComponent_TimeLineIsRunning_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.StopTimeLine
	 */
	struct UScramTimeLineComponent_StopTimeLine_Params
	{	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.StartTimeLine
	 */
	struct UScramTimeLineComponent_StartTimeLine_Params
	{
	public:
		bool                                                       Forward;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GSJT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      StartTime;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.SetTarget
	 */
	struct UScramTimeLineComponent_SetTarget_Params
	{
	public:
		class USceneComponent*                                     Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.SampleAtTime
	 */
	struct UScramTimeLineComponent_SampleAtTime_Params
	{
	public:
		float                                                      SampleTime;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.ResumeTimeLine
	 */
	struct UScramTimeLineComponent_ResumeTimeLine_Params
	{	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.GetTimeLineLength
	 */
	struct UScramTimeLineComponent_GetTimeLineLength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTimeLineComponent.GetRemainingTime
	 */
	struct UScramTimeLineComponent_GetRemainingTime_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrajectoryUtils.GetInitialLinearVelocity
	 */
	struct UScramTrajectoryUtils_GetInitialLinearVelocity_Params
	{
	public:
		struct FScramTrajectory                                    trajectory;                                              // 0x0000(0x01F0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x01F0(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrajectoryInfluencerComponent.SetInfluencerEnabled
	 */
	struct UScramTrajectoryInfluencerComponent_SetInfluencerEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrajectoryInfluencerBaseball.RemoveSkillFlag
	 */
	struct UScramTrajectoryInfluencerBaseball_RemoveSkillFlag_Params
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrajectoryInfluencerBaseball.HasSkillFlag
	 */
	struct UScramTrajectoryInfluencerBaseball_HasSkillFlag_Params
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrajectoryInfluencerBaseball.AddSkillFlag
	 */
	struct UScramTrajectoryInfluencerBaseball_AddSkillFlag_Params
	{
	public:
		EScramSkill                                                Skill;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophy.WasTrophyEarned
	 */
	struct AScramTrophy_WasTrophyEarned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophy.OnPlayerStopLookAtTrophy
	 */
	struct AScramTrophy_OnPlayerStopLookAtTrophy_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophy.OnPlayerLookAtTrophy
	 */
	struct AScramTrophy_OnPlayerLookAtTrophy_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophy.CalculateDisplayTransform
	 */
	struct AScramTrophy_CalculateDisplayTransform_Params
	{
	public:
		struct FTransform                                          ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.TryMakeActiveTrophyGlove
	 */
	struct AScramTrophyGlove_TryMakeActiveTrophyGlove_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.SetLaserPointerVisibility
	 */
	struct AScramTrophyGlove_SetLaserPointerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.SetLaserLength
	 */
	struct AScramTrophyGlove_SetLaserLength_Params
	{
	public:
		float                                                      Length;                                                  // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.SetEnableGrab
	 */
	struct AScramTrophyGlove_SetEnableGrab_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.OnShouldGrab
	 */
	struct AScramTrophyGlove_OnShouldGrab_Params
	{
	public:
		class ATrophyGrabbable*                                    Trophy;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.IsTriggerPressed
	 */
	struct AScramTrophyGlove_IsTriggerPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.IsTriggerDownThisFrame
	 */
	struct AScramTrophyGlove_IsTriggerDownThisFrame_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.IsActiveGlove
	 */
	struct AScramTrophyGlove_IsActiveGlove_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.InputRotateTrophyYaw
	 */
	struct AScramTrophyGlove_InputRotateTrophyYaw_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.InputRotateTrophyPitch
	 */
	struct AScramTrophyGlove_InputRotateTrophyPitch_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.GetTrophyGrabPoint
	 */
	struct AScramTrophyGlove_GetTrophyGrabPoint_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.BindInputYaw
	 */
	struct AScramTrophyGlove_BindInputYaw_Params
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyGlove.BindInputPitch
	 */
	struct AScramTrophyGlove_BindInputPitch_Params
	{
	public:
		class FName                                                AxisName;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.WasTrophyEarned
	 */
	struct AScramTrophyManager_WasTrophyEarned_Params
	{
	public:
		class FName                                                TrophyID;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.WasAvatarEarned
	 */
	struct AScramTrophyManager_WasAvatarEarned_Params
	{
	public:
		class FName                                                avatarID;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.TryGetTrophyEarnedDate
	 */
	struct AScramTrophyManager_TryGetTrophyEarnedDate_Params
	{
	public:
		struct FDateTime                                           date;                                                    // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                TrophyID;                                                // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.SpawnTrophyNotificationFX
	 */
	struct AScramTrophyManager_SpawnTrophyNotificationFX_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophyManager.ResetAllTrophy
	 */
	struct AScramTrophyManager_ResetAllTrophy_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophyManager.OnNotifyTrophyEarned
	 */
	struct AScramTrophyManager_OnNotifyTrophyEarned_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpload
	 */
	struct AScramTrophyManager_OnNotifyOculusUpload_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophyManager.OnNotifyOculusUpdate
	 */
	struct AScramTrophyManager_OnNotifyOculusUpdate_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophyManager.InitializeTrophyAwardListeners
	 */
	struct AScramTrophyManager_InitializeTrophyAwardListeners_Params
	{	};

	/**
	 * Function SportsScramble.ScramTrophyManager.GetTrophyRequirement
	 */
	struct AScramTrophyManager_GetTrophyRequirement_Params
	{
	public:
		class FName                                                TrophyID;                                                // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             WorldContextObject;                                      // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.GetEarnedTrophyCount
	 */
	struct AScramTrophyManager_GetEarnedTrophyCount_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.EarnTrophy
	 */
	struct AScramTrophyManager_EarnTrophy_Params
	{
	public:
		class FName                                                TrophyName;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             pWorldContextObject;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.DeferNotifications
	 */
	struct AScramTrophyManager_DeferNotifications_Params
	{
	public:
		float                                                      Duration;                                                // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramTrophyManager.ClearAwardListeners
	 */
	struct AScramTrophyManager_ClearAwardListeners_Params
	{	};

	/**
	 * Function SportsScramble.ScramUtils.TryGetOculusID
	 */
	struct UScramUtils_TryGetOculusID_Params
	{
	public:
		class FString                                              UniqueId;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.ShowDebugMessage
	 */
	struct UScramUtils_ShowDebugMessage_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Message;                                                 // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LifeTime;                                                // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.SetShaderCacheModeFast
	 */
	struct UScramUtils_SetShaderCacheModeFast_Params
	{	};

	/**
	 * Function SportsScramble.ScramUtils.SetShaderCacheModeBackground
	 */
	struct UScramUtils_SetShaderCacheModeBackground_Params
	{	};

	/**
	 * Function SportsScramble.ScramUtils.SetOnlineSessionCustomSetting
	 */
	struct UScramUtils_SetOnlineSessionCustomSetting_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SettingValue;                                            // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.SetInstancedVisibility
	 */
	struct UScramUtils_SetInstancedVisibility_Params
	{
	public:
		class UStaticMeshComponent*                                Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       Visibility;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.SavePipelineCache
	 */
	struct UScramUtils_SavePipelineCache_Params
	{	};

	/**
	 * Function SportsScramble.ScramUtils.SampleTexture
	 */
	struct UScramUtils_SampleTexture_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      U;                                                       // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      V;                                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FLinearColor                                        pixelColor;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESuccessFailure                                            Branch;                                                  // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.RandomSharedSport
	 */
	struct UScramUtils_RandomSharedSport_Params
	{
	public:
		struct FScramSportPreferences                              A;                                                       // 0x0000(0x0003)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		struct FScramSportPreferences                              B;                                                       // 0x0003(0x0003)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		EScramSport                                                ReturnValue;                                             // 0x0006(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.PickDestinationPointOnSpline
	 */
	struct UScramUtils_PickDestinationPointOnSpline_Params
	{
	public:
		class AActor*                                              SplineFollower;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USplineComponent*                                    Spline;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      LookAheadDistance;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ReturnValue;                                             // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.PauseShaderCacheCompilation
	 */
	struct UScramUtils_PauseShaderCacheCompilation_Params
	{	};

	/**
	 * Function SportsScramble.ScramUtils.MakeActorsFaceLocation
	 */
	struct UScramUtils_MakeActorsFaceLocation_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              subClass;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Location;                                                // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.LaunchOtherApp
	 */
	struct UScramUtils_LaunchOtherApp_Params
	{
	public:
		class FString                                              appID;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.IsShipping
	 */
	struct UScramUtils_IsShipping_Params
	{
	public:
		EYesNo                                                     Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.IsShaderCacheReady
	 */
	struct UScramUtils_IsShaderCacheReady_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.IsHitFloor
	 */
	struct UScramUtils_IsHitFloor_Params
	{
	public:
		class AScramPrimitiveActor*                                Primitive;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             HitLocation;                                             // 0x0008(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.IsHitEnvironmental
	 */
	struct UScramUtils_IsHitEnvironmental_Params
	{
	public:
		class AActor*                                              hitActor;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.IsChargeShotPossible
	 */
	struct UScramUtils_IsChargeShotPossible_Params
	{
	public:
		class ATennisInstrument*                                   Instrument;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ATennisBall*                                         Ball;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.HasBinaryShaderCache
	 */
	struct UScramUtils_HasBinaryShaderCache_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GoToStore
	 */
	struct UScramUtils_GoToStore_Params
	{
	public:
		class FString                                              uriPath;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetSkipLogos
	 */
	struct UScramUtils_GetSkipLogos_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetSingleActorExec
	 */
	struct UScramUtils_GetSingleActorExec_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetSingleActor
	 */
	struct UScramUtils_GetSingleActor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              ActorClass;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetScramPlayer
	 */
	struct UScramUtils_GetScramPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramPlayer*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetScramNetworkVersion
	 */
	struct UScramUtils_GetScramNetworkVersion_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetScramGameMode
	 */
	struct UScramUtils_GetScramGameMode_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramGameMode*                                      ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetRemoteScramPlayer
	 */
	struct UScramUtils_GetRemoteScramPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramPlayer*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetPlayerTransform
	 */
	struct UScramUtils_GetPlayerTransform_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             OffsetLocation;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            OffsetRotation;                                          // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0020(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetPlatform
	 */
	struct UScramUtils_GetPlatform_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EScramPlatform                                             ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetOnlineSessionCustomSetting
	 */
	struct UScramUtils_GetOnlineSessionCustomSetting_Params
	{
	public:
		struct FBlueprintSessionResult                             Result;                                                  // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FName                                                SettingName;                                             // 0x00B8(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x00C0(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetNumShaderCompilesRemaining
	 */
	struct UScramUtils_GetNumShaderCompilesRemaining_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetNumberOfLines
	 */
	struct UScramUtils_GetNumberOfLines_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetMatchmakingPool
	 */
	struct UScramUtils_GetMatchmakingPool_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetLocalScramPlayer
	 */
	struct UScramUtils_GetLocalScramPlayer_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AScramPlayer*                                        ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetLengthOfLongestLine
	 */
	struct UScramUtils_GetLengthOfLongestLine_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetIsShipping
	 */
	struct UScramUtils_GetIsShipping_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetIsEditor
	 */
	struct UScramUtils_GetIsEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetIsAndroid
	 */
	struct UScramUtils_GetIsAndroid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetEarlyAccess
	 */
	struct UScramUtils_GetEarlyAccess_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetDemoMode
	 */
	struct UScramUtils_GetDemoMode_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetDefaultObject
	 */
	struct UScramUtils_GetDefaultObject_Params
	{
	public:
		class UClass*                                              ObjectClass;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetDebugMode
	 */
	struct UScramUtils_GetDebugMode_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetAttachedActorsExec
	 */
	struct UScramUtils_GetAttachedActorsExec_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      OutActors;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.GetAppropriateTransform
	 */
	struct UScramUtils_GetAppropriateTransform_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3K1U[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0030)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.ControllerIsConnected
	 */
	struct UScramUtils_ControllerIsConnected_Params
	{
	public:
		EYesNo                                                     Branch;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramUtils.ClearDebugMessages
	 */
	struct UScramUtils_ClearDebugMessages_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramVoiceChat.SetVoiceChatMuted
	 */
	struct AScramVoiceChat_SetVoiceChatMuted_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       muted;                                                   // 0x0008(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramVoiceChat.Server_SetClientVoiceChatDesired
	 */
	struct AScramVoiceChat_Server_SetClientVoiceChatDesired_Params
	{
	public:
		bool                                                       clientVoiceChatDesired;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramVoiceChat.Server_InitializeVoiceChat
	 */
	struct AScramVoiceChat_Server_InitializeVoiceChat_Params
	{
	public:
		bool                                                       clientVoiceChatDesired;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramVoiceChat.KillVoiceChat
	 */
	struct AScramVoiceChat_KillVoiceChat_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramVoiceChat.DeferredInit
	 */
	struct AScramVoiceChat_DeferredInit_Params
	{	};

	/**
	 * Function SportsScramble.ScramVoiceChat.Client_SetServerVoiceChatDesired
	 */
	struct AScramVoiceChat_Client_SetServerVoiceChatDesired_Params
	{
	public:
		bool                                                       serverVoiceChatDesired;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramVoiceChat.Client_InitializeVoiceChat
	 */
	struct AScramVoiceChat_Client_InitializeVoiceChat_Params
	{
	public:
		bool                                                       serverVoiceChatDesired;                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.ScramWidgetComponent.ExternalInitWidget
	 */
	struct UScramWidgetComponent_ExternalInitWidget_Params
	{	};

	/**
	 * Function SportsScramble.SkiBallTrigger.SetIsPositive
	 */
	struct ASkiBallTrigger_SetIsPositive_Params
	{
	public:
		bool                                                       positive;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.SpectateSessionCallbackProxy.SpectateSession
	 */
	struct USpectateSessionCallbackProxy_SpectateSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APlayerController*                                   PlayerController;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FBlueprintSessionResult                             SearchResult;                                            // 0x0010(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class USpectateSessionCallbackProxy*                       ReturnValue;                                             // 0x00C8(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.SplineMoverComponent.StartOnSpline
	 */
	struct USplineMoverComponent_StartOnSpline_Params
	{
	public:
		class USplineComponent*                                    SplineComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     SceneComponent;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.SplineMoverComponent.Restart
	 */
	struct USplineMoverComponent_Restart_Params
	{	};

	/**
	 * Function SportsScramble.SplineMoverComponent.GetCurrentSpeed
	 */
	struct USplineMoverComponent_GetCurrentSpeed_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.StartOculusMatchmakingCallbackProxy.StartOculusMatchmaking
	 */
	struct UStartOculusMatchmakingCallbackProxy_StartOculusMatchmaking_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              poolKey;                                                 // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Timeout;                                                 // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7SD3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UStartOculusMatchmakingCallbackProxy*                ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.StartOculusMatchmakingCallbackProxy.MatchmakingClientConnect
	 */
	struct UStartOculusMatchmakingCallbackProxy_MatchmakingClientConnect_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.SwapIndicator.OnHandednessSet
	 */
	struct ASwapIndicator_OnHandednessSet_Params
	{
	public:
		EScramHandedness                                           Handedness;                                              // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.SwapIndicator.OnConfirmSwap
	 */
	struct ASwapIndicator_OnConfirmSwap_Params
	{	};

	/**
	 * Function SportsScramble.SwapIndicator.OnBeginSwap
	 */
	struct ASwapIndicator_OnBeginSwap_Params
	{	};

	/**
	 * Function SportsScramble.TennisAvatar.OnBallHit
	 */
	struct ATennisAvatar_OnBallHit_Params
	{
	public:
		class UObject*                                             pWorldContextObject;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UScramEventBasePayload*                              pPayload;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TennisBall.OnShotChanged
	 */
	struct ATennisBall_OnShotChanged_Params
	{	};

	/**
	 * Function SportsScramble.TennisBall.OnRallyCountChanged
	 */
	struct ATennisBall_OnRallyCountChanged_Params
	{	};

	/**
	 * Function SportsScramble.TennisBall.GetTennisBallProperties
	 */
	struct ATennisBall_GetTennisBallProperties_Params
	{
	public:
		struct FTennisBallProperties                               ReturnValue;                                             // 0x0000(0x0128)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TennisBall.GetTarget
	 */
	struct ATennisBall_GetTarget_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TennisBall.GetShot
	 */
	struct ATennisBall_GetShot_Params
	{
	public:
		struct FTennisShot                                         ReturnValue;                                             // 0x0000(0x0003)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TennisBall.GetSender
	 */
	struct ATennisBall_GetSender_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TennisBall.GetRallyCount
	 */
	struct ATennisBall_GetRallyCount_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TennisInstrument.GetTennisInstrumentProperties
	 */
	struct ATennisInstrument_GetTennisInstrumentProperties_Params
	{
	public:
		struct FTennisInstrumentProperties                         ReturnValue;                                             // 0x0000(0x00B8)  (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TimeDisplayWidget.FormatTime
	 */
	struct UTimeDisplayWidget_FormatTime_Params
	{
	public:
		float                                                      Seconds;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PQVX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.UpdateProgress
	 */
	struct ATrophyAwardListenerBase_UpdateProgress_Params
	{	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.SaveProgressToSaveData
	 */
	struct ATrophyAwardListenerBase_SaveProgressToSaveData_Params
	{	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.Refresh
	 */
	struct ATrophyAwardListenerBase_Refresh_Params
	{	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.LoadProgressFromSaveData
	 */
	struct ATrophyAwardListenerBase_LoadProgressFromSaveData_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.Initialize
	 */
	struct ATrophyAwardListenerBase_Initialize_Params
	{	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.IncreaseProgress
	 */
	struct ATrophyAwardListenerBase_IncreaseProgress_Params
	{	};

	/**
	 * Function SportsScramble.TrophyAwardListenerBase.AwardTrophy
	 */
	struct ATrophyAwardListenerBase_AwardTrophy_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.WasTrophyEarned
	 */
	struct ATrophyGrabbable_WasTrophyEarned_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TrophyGrabbable.RespawnTrophy
	 */
	struct ATrophyGrabbable_RespawnTrophy_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OverrideInitialRotation
	 */
	struct ATrophyGrabbable_OverrideInitialRotation_Params
	{
	public:
		struct FRotator                                            overrideRotation;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OverrideInitialPosition
	 */
	struct ATrophyGrabbable_OverrideInitialPosition_Params
	{
	public:
		struct FVector                                             overridePosition;                                        // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OnTrophyRespawnToOriginalPosition
	 */
	struct ATrophyGrabbable_OnTrophyRespawnToOriginalPosition_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OnTrophyReleased
	 */
	struct ATrophyGrabbable_OnTrophyReleased_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OnTrophyGrabbed
	 */
	struct ATrophyGrabbable_OnTrophyGrabbed_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OnStopPointingAt
	 */
	struct ATrophyGrabbable_OnStopPointingAt_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.OnStartPointingAt
	 */
	struct ATrophyGrabbable_OnStartPointingAt_Params
	{	};

	/**
	 * Function SportsScramble.TrophyGrabbable.GetInitialRotation
	 */
	struct ATrophyGrabbable_GetInitialRotation_Params
	{
	public:
		struct FRotator                                            ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.TrophyGrabbable.GetInitialPosition
	 */
	struct ATrophyGrabbable_GetInitialPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function SportsScramble.UpdateSessionCallbackProxyAdvanced.UpdateSession
	 */
	struct UUpdateSessionCallbackProxyAdvanced_UpdateSession_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FSessionPropertyKeyPair>                     ExtraSettings;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    PublicConnections;                                       // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    PrivateConnections;                                      // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bUseLAN;                                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowInvites;                                           // 0x0021(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowJoinInProgress;                                    // 0x0022(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bRefreshOnlineData;                                      // 0x0023(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsDedicatedServer;                                      // 0x0024(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9OV2[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UUpdateSessionCallbackProxyAdvanced*                 ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
