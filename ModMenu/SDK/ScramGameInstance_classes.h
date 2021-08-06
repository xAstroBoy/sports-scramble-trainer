#pragma once

// Name: Sport Scramble, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ScramGameInstance.ScramGameInstance_C
// 0x0480 (FullSize[0x07F0] - InheritedSize[0x0370])
class UScramGameInstance_C : public UScramGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0370(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ADebugString_BP_C*                           DebugStringBP;                                             // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    MultiplayerSessionsFound;                                  // 0x0380(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    NoSessionsFound;                                           // 0x0390(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FString>                             ServerList;                                                // 0x03A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               ServerFound;                                               // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5CEK[0x7];                                     // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    JoinFailed;                                                // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    JoinSuccess;                                               // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               MultiplayerActive;                                         // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_Z9NV[0x7];                                     // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FBlueprintSessionResult>             Sessions;                                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               DebugBallsAllowed;                                         // 0x03F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HB67[0x7];                                     // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      StartingRacket;                                            // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DisableMusicManagers;                                      // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IFW8[0x3];                                     // 0x0401(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MaximumBallCount;                                          // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TeleportTransitionReady;                                   // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ATravelcapsule_C*                            TravelCapsule;                                             // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    TeleportTransitionComplete;                                // 0x0420(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                      DefaultBall_Tennis;                                        // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultBall_Baseball;                                      // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultBall_Bowling;                                       // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultInstrument_Tennis;                                  // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultInstrument_Baseball;                                // 0x0450(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      DefaultInstrument_Bowling;                                 // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       PrimaryLevelName;                                          // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GeoLevelName;                                              // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                      PrimaryLevel;                                              // 0x0470(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                      GeoLevel;                                                  // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    PrimaryLevelChanged;                                       // 0x0480(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    GeoLevelChanged;                                           // 0x0490(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                DemoMode;                                                  // 0x04A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SDJR[0x4];                                     // 0x04A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       LevelName;                                                 // 0x04A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DemoRoomScale;                                             // 0x04B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DemoRightHanded;                                           // 0x04B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QSPA[0x6];                                     // 0x04B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OCDemoSessionFound;                                        // 0x04B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OCDemoSessionNotFound;                                     // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FBlueprintSessionResult                     OCDemoSession;                                             // 0x04D8(0x00B8) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               DemoInitialized;                                           // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DemoNoMultiplayer;                                         // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EKG2[0x6];                                     // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      InitializeInstrument_LeftHand;                             // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      InitializeInstrument_RightHand;                            // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    LevelBPDispatch;                                           // 0x05A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               DisablePlayerFadeInOnSpawn;                                // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               WasSpectator;                                              // 0x05B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               OCDemo_SkipToJoin;                                         // 0x05BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               LoadLevelNoRender;                                         // 0x05BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               DisableInstrumentSpawnFX;                                  // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_QLNO[0x3];                                     // 0x05BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SelectedAvatar;                                            // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       SelectedAvatarSkinColor;                                   // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<GameModeTypes_EGameModeTypes>          ActiveGameMode;                                            // 0x05D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_MPDL[0x3];                                     // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TournamentTotalGames;                                      // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_EDifficulty                         TN_SF_AiDifficulty;                                        // 0x05D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               TN_SF_ScrambleRackets;                                     // 0x05D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TN_SF_ScrambleBalls;                                       // 0x05DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               TN_SF_ScrambleCourt;                                       // 0x05DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<TN_RuleTypes_ETN_RuleTypes>            TN_SF_Ruleset;                                             // 0x05DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_11FY[0x3];                                     // 0x05DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                TN_SF_PointsToWinGame;                                     // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TN_SF_GamesToWinMatch;                                     // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PnP_NumberOfPlayers;                                       // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_V540[0x4];                                     // 0x05EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FMultiplayerData>                    PnP_PlayerData;                                            // 0x05F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    ExistingTeleportTransitionReady;                           // 0x0600(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                DebugMode;                                                 // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasSeenLogos;                                              // 0x0614(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasCompletedTutorial;                                      // 0x0615(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	SportsScramble_EScramSport                         ArenaPairSport;                                            // 0x0616(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ArenaPairTraining;                                         // 0x0617(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	SportsScramble_EDifficulty                         BW_SF_AiDifficulty;                                        // 0x0618(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BW_SF_ScrambleLanes;                                       // 0x0619(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BW_SF_ScrambleBalls;                                       // 0x061A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BW_SF_SpecialBalls;                                        // 0x061B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int                                                BW_SF_GamesToWinMatch;                                     // 0x061C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       GameName;                                                  // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Training_Ball;                                             // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      Training_Instrument;                                       // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	SportsScramble_ETennisShotType                     Training_TnShotType;                                       // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<TN_ShotDirection_ETN_ShotDirection>    Training_TnShotDirection;                                  // 0x0639(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<TN_ServingStyle_ETN_ServingStyle>      Training_TnServeStyle;                                     // 0x063A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1V0M[0x1];                                     // 0x063B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FResultsData                                ActiveGameResults;                                         // 0x063C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowPause;                                                // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               HasSeenAnnouncer;                                          // 0x0649(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KFN1[0x6];                                     // 0x064A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    JoinFailedAll;                                             // 0x0650(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FName                                       Training_Lane;                                             // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Option_ShowBoundaries;                                     // 0x0668(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2X4G[0x7];                                     // 0x0669(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       SpawnLocOverride;                                          // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    HostingFailed;                                             // 0x0678(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    FindSessionsFailed;                                        // 0x0688(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    CheckConnectionResult;                                     // 0x0698(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               GameInitialized;                                           // 0x06A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ErrorMessage_ErrorMessage>             ShowErrorMessage;                                          // 0x06A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RecheckVoicePermission;                                    // 0x06AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BB_PitchingTargets;                                        // 0x06AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsPrivateMatch;                                            // 0x06AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               MultiplayerInviteAccepted;                                 // 0x06AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_TMR6[0x2];                                     // 0x06AE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FName>                               PnP_TournamentList;                                        // 0x06B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<TN_RuleTypes_ETN_RuleTypes>            BW_SF_Ruleset;                                             // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_5EQ7[0x3];                                     // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BW_SF_FrameCount;                                          // 0x06C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DebugMultiplayer;                                          // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_2HWJ[0x7];                                     // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FAvatarLook                                 AvatarLook;                                                // 0x06D0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FAvatarLook                                 RemoteAvatarLook;                                          // 0x06F0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int                                                EarlyAccess;                                               // 0x0710(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EarlyAccessContentUnlocked;                                // 0x0714(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               BB_HittingTargets;                                         // 0x0715(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	SportsScramble_EDifficulty                         BB_LauncherDifficulty;                                     // 0x0716(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BW_NoAi;                                                   // 0x0717(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FScriptMulticastDelegate                    LevelsUnloaded;                                            // 0x0718(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               RestartingChallenge;                                       // 0x0728(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_X531[0x7];                                     // 0x0729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      DefaultInstrument_Menu;                                    // 0x0730(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Option_UseMenuPointer;                                     // 0x0738(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8V5U[0x7];                                     // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScramGameInvite                            ShellGameInvite;                                           // 0x0740(0x0060) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Option_DisableTips;                                        // 0x07A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_XYJT[0x3];                                     // 0x07A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Option_Volume_Game;                                        // 0x07A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Option_Volume_Voip;                                        // 0x07A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_U3SK[0x4];                                     // 0x07AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ULevelStreamingDynamic*                      ReflectionLevel;                                           // 0x07B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HeadsetDisconnected;                                       // 0x07B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7VVY[0x7];                                     // 0x07B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    HeadsetStatusChanged;                                      // 0x07C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    ControllerConnectionChanged;                               // 0x07D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               ControllersConnected;                                      // 0x07E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_U61O[0x7];                                     // 0x07E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AScreenErrorUI_C*                            FloatUI;                                                   // 0x07E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ScramGameInstance.ScramGameInstance_C");
		return ptr;
	}



	void SpawnErrorMessage(const struct FText& ErrorMessage);
	void LoadReflectionLevel();
	void UnloadLevels();
	void SetAnchorToArena(const struct FName& RowName, bool IsHost);
	void CreateTravelCapsuleNoTeleport(const struct FTransform& OverrideTransform, bool UseOverrideTransform, bool Instant, bool StartRed, class ATravelcapsule_C** TravelCapsule, bool* AlreadyExisted);
	void CheckIsSpectator(bool* IsSpectator);
	void PrepareInstrumentReinit();
	void SetSportType(SportsScramble_EScramSport Sport, bool KeepInstruments);
	void EnableMusic();
	void DisableMusic();
	void ForceChangeInstrument(class UClass* NewInstrumentClass, bool DropOldInstrument, class AScramPlayerHand* HandActor_Optional, bool UseHandedness, class AScramInstrument** NewInstrument);
	void DisplayDebugString(const struct FString& DebugString, float Durtation);
	void OnFailure_A6825E2046D1EE4480D53F85A160D238();
	void OnSuccess_A6825E2046D1EE4480D53F85A160D238();
	void OnFailure_E218766E479159D426108DB79AE5A05D();
	void OnSuccess_E218766E479159D426108DB79AE5A05D();
	void OnFailure_A6825E2046D1EE4480D53F85CD6B33B6();
	void OnSuccess_A6825E2046D1EE4480D53F85CD6B33B6();
	void OnFailure_E218766E479159D426108DB7F6EE41D3();
	void OnSuccess_E218766E479159D426108DB7F6EE41D3();
	void OnFailure_A6825E2046D1EE4480D53F85A91F0ECD();
	void OnSuccess_A6825E2046D1EE4480D53F85A91F0ECD();
	void OnFailure_E218766E479159D426108DB7929A7CA8();
	void OnSuccess_E218766E479159D426108DB7929A7CA8();
	void OnFailure_195EB2254E8E108525A7CCA39EDA45EB(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_195EB2254E8E108525A7CCA39EDA45EB(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure_2068A73A4E27B76D6515A3A4308C2A02();
	void OnSuccess_2068A73A4E27B76D6515A3A4308C2A02();
	void OnFailure_FFC99656425C039A8BCC99955A3E5515(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_FFC99656425C039A8BCC99955A3E5515(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure_F9E172BA4FE1D5A046DC01BD48DACA9B();
	void OnSuccess_F9E172BA4FE1D5A046DC01BD48DACA9B();
	void OnFailure_EAD2016E4E26B32FAABA1FA5F88D9CB4();
	void OnSuccess_EAD2016E4E26B32FAABA1FA5F88D9CB4();
	void OnFailure_2E9EF70F49117325F129FCAEC8708411(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_2E9EF70F49117325F129FCAEC8708411(TArray<struct FBlueprintSessionResult> Results);
	void OnFailure_28C0B15B470A9AA54E923CAC6773937B();
	void OnSuccess_28C0B15B470A9AA54E923CAC6773937B();
	void OnFailure_1933FE3C43C128FAB9B71398D3ED0723();
	void OnSuccess_1933FE3C43C128FAB9B71398D3ED0723();
	void OnFailure_B64C966143C1313AC5BD979ACFAE5B69(TArray<struct FBlueprintSessionResult> Results);
	void OnSuccess_B64C966143C1313AC5BD979ACFAE5B69(TArray<struct FBlueprintSessionResult> Results);
	void OnLoaded_A155B1A0419914351D88EF9C6B11F64C(class UObject* Loaded);
	void LoadArena(const struct FName& Level, bool NoRender);
	void GeoLevelLoadComplete();
	void PrimaryLevelLoadComplete();
	void SetLevelVisibility(bool visible);
	void LoadArenaGameplayAndGeo(SportsScramble_EScramSport Sport, bool Training);
	void LoadArenaGeo(const struct FName& NewPrimaryLevel);
	void GeoLevelShown();
	void TeleportPlayArea(const struct FVector& Play_Area_Transform_Location, const struct FRotator& Play_Area_Transform_Rotation, bool UseTransitionDuration, float TransitionDuration, const struct FBox& minPlayArea, const struct FBox& maxPlayArea, const struct FBox& maxHazardArea);
	void TeleportReady();
	void TeleportComplete();
	void HidePlayer();
	void Host_Game(bool LAN, const struct FName& Level);
	void GetSessions(bool LAN);
	void JoinMatch(const struct FString& ServerName, bool LAN);
	void EndMultiplayer();
	void ShowDebugMessage(const struct FString& Message, float LifeTime);
	void OCDemo_FindSession();
	void OCDemo_Host(const struct FName& LevelName, bool Absolute);
	void OCDemo_Join();
	void DebugOCDemoServerList();
	void FindAndJoin();
	void AttemptToJoin(TArray<struct FString>* SessionsFound);
	void SelfSessionsUnbind();
	void TryAnother();
	void CheckConnection();
	void CheckSessionFailed();
	void CheckSessionFound(TArray<struct FString>* SessionsFound);
	void CheckSessionSuccessNoValid();
	void HandleTravelError(TEnumAsByte<Engine_ETravelFailure> failureType);
	void HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> failureType, bool bIsServer);
	void ReceiveInit();
	void AppWillEnterBackground(bool LocalEvent);
	void AppHasEnteredForeground(bool LocalEvent);
	void AppWillDeactivate(bool LocalEvent);
	void AppHasReactivated(bool LocalEvent);
	void AppWillTerminate(bool LocalEvent);
	void SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook);
	void BroadcastLocalAvatarLook();
	void GameInvitePing(int pingCount);
	void ClearDebugMessages();
	void OnShellInviteAccepted(const struct FScramGameInvite& GameInvite);
	void BindShellInviteAcceptedEvent();
	void OnControllerConnectionChanged(bool IsConnected);
	void OnHeadsetReconnected();
	void OnHeadsetDisconnected();
	void OnInputFocusLost();
	void OnInputFocusReceived();
	void Focus_Recieved_PauseEvent();
	void Focus_Lost_PauseEvent();
	void PreliminaryConnectionCheck();
	void ShowErrorMessageOnSpectatorScreen();
	void HideSpectatorMessage();
	void ExecuteUbergraph_ScramGameInstance(int EntryPoint);
	void ControllerConnectionChanged__DelegateSignature(bool IsConnected);
	void HeadsetStatusChanged__DelegateSignature(bool Disconnected);
	void LevelsUnloaded__DelegateSignature();
	void CheckConnectionResult__DelegateSignature(bool ConnectionOk);
	void FindSessionsFailed__DelegateSignature();
	void HostingFailed__DelegateSignature();
	void JoinFailedAll__DelegateSignature();
	void ExistingTeleportTransitionReady__DelegateSignature();
	void LevelBPDispatch__DelegateSignature(int DispatchId);
	void OCDemoSessionNotFound__DelegateSignature();
	void OCDemoSessionFound__DelegateSignature(const struct FBlueprintSessionResult& Session);
	void GeoLevelChanged__DelegateSignature(const struct FName& NewGeoLevel);
	void PrimaryLevelChanged__DelegateSignature(const struct FName& NewPrimaryLevel);
	void TeleportTransitionComplete__DelegateSignature();
	void TeleportTransitionReady__DelegateSignature();
	void JoinSuccess__DelegateSignature();
	void JoinFailed__DelegateSignature();
	void NoSessionsFound__DelegateSignature();
	void MultiplayerSessionsFound__DelegateSignature(TArray<struct FString>* SessionsFound);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
