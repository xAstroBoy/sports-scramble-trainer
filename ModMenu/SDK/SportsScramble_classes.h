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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class SportsScramble.AcceptInviteCallbackProxy
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UAcceptInviteCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRU3[0x90];                                  // 0x0048(0x0090) MISSED OFFSET (PADDING)

	public:
		bool STATIC_FriendInviteClientConnect(class APlayerController* PlayerController);
		class UAcceptInviteCallbackProxy* STATIC_AcceptInvite(class APlayerController* PlayerController, const struct FScramGameInvite& invite);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSceneComponent
	 * Size -> 0x0008 (FullSize[0x0240] - InheritedSize[0x0238])
	 */
	class UScramSceneComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_C9VD[0x8];                                   // 0x0238(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ActorSet
	 * Size -> 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
	 */
	class UActorSet : public UScramSceneComponent
	{
	public:
		ESetMode                                                   Mode;                                                    // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DFMV[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Actors;                                                  // 0x0248(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      WorkingActors;                                           // 0x0258(0x0010) ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DSN9[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		void ResetActors();
		class UClass* GetNextActor();
		void AvoidActor(class UClass* ActorClass);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.AdvancedSessionsLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAdvancedSessionsLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UniqueNetIdToString(const struct FBPUniqueNetId& UniqueNetId, class FString* String);
		void STATIC_SetPlayerName(class APlayerController* PlayerController, const class FString& PlayerName);
		struct FSessionsSearchSetting STATIC_MakeLiteralSessionSearchProperty(const struct FSessionPropertyKeyPair& SessionSearchProperty, EOnlineComparisonOpRedux ComparisonOp);
		struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyString(const class FName& Key, const class FString& Value);
		struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyInt(const class FName& Key, int32_t Value);
		struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyFloat(const class FName& Key, float Value);
		struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyByte(const class FName& Key, unsigned char Value);
		struct FSessionPropertyKeyPair STATIC_MakeLiteralSessionPropertyBool(const class FName& Key, bool Value);
		bool STATIC_IsValidUniqueNetID(const struct FBPUniqueNetId& UniqueNetId);
		bool STATIC_IsValidSession(const struct FBlueprintSessionResult& SessionResult);
		void STATIC_IsPlayerInSession(const struct FBPUniqueNetId& PlayerToCheck, bool* bIsInSession);
		bool STATIC_HasOnlineSubsystem(const class FName& SubSystemName);
		void STATIC_GetUniqueNetIDFromPlayerState(class APlayerState* PlayerState, struct FBPUniqueNetId* UniqueNetId);
		void STATIC_GetUniqueNetID(class APlayerController* PlayerController, struct FBPUniqueNetId* UniqueNetId);
		void STATIC_GetUniqueBuildID(const struct FBlueprintSessionResult& SessionResult, int32_t* UniqueBuildId);
		void STATIC_GetSessionState(EBPOnlineSessionState* SessionState);
		void STATIC_GetSessionSettings(int32_t* NumConnections, int32_t* NumPrivateConnections, bool* bIsLAN, bool* bIsDedicated, bool* bAllowInvites, bool* bAllowJoinInProgress, bool* bIsAnticheatEnabled, int32_t* BuildUniqueID, TArray<struct FSessionPropertyKeyPair>* ExtraSettings, EBlueprintResultSwitch* Result);
		void STATIC_GetSessionPropertyString(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, class FString* SettingValue);
		class FName STATIC_GetSessionPropertyKey(const struct FSessionPropertyKeyPair& SessionProperty);
		void STATIC_GetSessionPropertyInt(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, int32_t* SettingValue);
		void STATIC_GetSessionPropertyFloat(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, float* SettingValue);
		void STATIC_GetSessionPropertyByte(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, unsigned char* SettingValue);
		void STATIC_GetSessionPropertyBool(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, ESessionSettingSearchResult* SearchResult, bool* SettingValue);
		void STATIC_GetPlayerName(class APlayerController* PlayerController, class FString* PlayerName);
		void STATIC_GetNumberOfNetworkPlayers(class UObject* WorldContextObject, int32_t* NumNetPlayers);
		void STATIC_GetNetPlayerIndex(class APlayerController* PlayerController, int32_t* NetPlayerIndex);
		void STATIC_GetExtraSettings(const struct FBlueprintSessionResult& SessionResult, TArray<struct FSessionPropertyKeyPair>* ExtraSettings);
		void STATIC_GetCurrentUniqueBuildID(int32_t* UniqueBuildId);
		void STATIC_FindSessionPropertyIndexByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingName, EBlueprintResultSwitch* Result, int32_t* OutIndex);
		void STATIC_FindSessionPropertyByName(TArray<struct FSessionPropertyKeyPair> ExtraSettings, const class FName& SettingsName, EBlueprintResultSwitch* Result, struct FSessionPropertyKeyPair* OutProperty);
		bool STATIC_EqualEqual_UNetIDUnetID(const struct FBPUniqueNetId& A, const struct FBPUniqueNetId& B);
		void STATIC_AddOrModifyExtraSettings(TArray<struct FSessionPropertyKeyPair>* SettingsArray, TArray<struct FSessionPropertyKeyPair>* NewOrChangedSettings, TArray<struct FSessionPropertyKeyPair>* ModifiedSettingsArray);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballAIAnimInstance
	 * Size -> 0x0004 (FullSize[0x035C] - InheritedSize[0x0358])
	 */
	class UBaseballAIAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_LILG[0x4];                                   // 0x0358(0x0004) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramActor
	 * Size -> 0x0020 (FullSize[0x0348] - InheritedSize[0x0328])
	 */
	class AScramActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_48IJ[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       CanBeHidden;                                             // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JQIG[0x3];                                   // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDebugDrawMode                                             DebugDrawMode;                                           // 0x0334(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LDN2[0x3];                                   // 0x0335(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		TArray<class UAudioComponent*>                             mDynamicAudioComponents;                                 // 0x0338(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		class UAudioComponent* PlayManagedSoundAtLocation(class USoundBase* Sound, const struct FVector& Location, const struct FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundAttenuation* AttenuationSettings, class USoundConcurrency* ConcurrencySettings);
		bool HasBegunPlay();
		class UAudioComponent* AttachSound2D(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class USoundConcurrency* ConcurrencySettings, bool IsUiSound);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramAvatar
	 * Size -> 0x0088 (FullSize[0x03D0] - InheritedSize[0x0348])
	 */
	class AScramAvatar : public AScramActor
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RootBoneName;                                            // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftHandBone;                                            // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightHandBone;                                           // 0x0360(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LeftGrabBone;                                            // 0x0368(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RightGrabBone;                                           // 0x0370(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GlobalColorTeamRed;                                      // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                GlobalColorTeamBlue;                                     // 0x0380(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MaterialPrimaryClothesColor;                             // 0x0388(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScramAvatarAnimInstance*                            mpAnimInstance;                                          // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SpawnSound;                                              // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SpawnParticle;                                           // 0x03A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DebugActor;                                              // 0x03A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UsesSpawnAnimation;                                      // 0x03B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RestoringGame;                                           // 0x03B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYI3[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayer*                                        mpPlayer;                                                // 0x03B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              mpSpawnParticleActor;                                    // 0x03C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KVUN[0x8];                                   // 0x03C8(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlaySpawnAnimation();
		int32_t GetPlayerIndex();
		class AScramPlayer* GetPlayer();
		struct FLinearColor GetGlobalColor(const class FName& globalColorName);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballAvatar
	 * Size -> 0x0010 (FullSize[0x03E0] - InheritedSize[0x03D0])
	 */
	class ABaseballAvatar : public AScramAvatar
	{
	public:
		class UCurveFloat*                                         HeadAngleBodyOffset;                                     // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BodyTurnTime;                                            // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArmReach;                                                // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramMeshActor
	 * Size -> 0x0018 (FullSize[0x0350] - InheritedSize[0x0338])
	 */
	class AScramMeshActor : public AStaticMeshActor
	{
	public:
		unsigned char                                              UnknownData_7PWS[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       CanBeHidden;                                             // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WBWA[0x3];                                   // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDebugDrawMode                                             DebugDrawMode;                                           // 0x0344(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H9JK[0x3];                                   // 0x0345(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		class USkeletalMeshComponent*                              mpSkeletalMesh;                                          // 0x0348(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		bool HasBegunPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPrimitiveActor
	 * Size -> 0x059C (FullSize[0x08EC] - InheritedSize[0x0350])
	 */
	class AScramPrimitiveActor : public AScramMeshActor
	{
	public:
		unsigned char                                              UnknownData_CKYF[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDataTableRowHandle                                 Properties;                                              // 0x0358(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      MassRelativeImpulseThreshold;                            // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SimulatingNetPriority;                                   // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ReplicateMotionState;                                    // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2KER[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPrimitiveDestroyed;                                    // 0x0378(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		bool                                                       mClientTrajectoryPaused;                                 // 0x0388(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4BLH[0x563];                                 // 0x0389(0x0563) Fix size for supers

	public:
		void SetPrimitiveTrajectory(const struct FScramTrajectory& trajectory);
		void ResumeTrajectory();
		void RecreatePhysicsState();
		void PauseTrajectory();
		void OnRep_ClientTrajectoryPaused();
		void NotifyPrimitiveDestroyed();
		void NetResumeTrajectory();
		void NetPauseTrajectory();
		void NetDestroyPrimitive(bool playOut, float Delay);
		bool IsPrimitiveSimulatingPhysics();
		bool IsPrimitivePendingDestroy();
		bool IsPrimitiveInMotion();
		bool IsPrimitiveFollowingSpline();
		bool IsPrimitiveDestroyed();
		void InitializePrimitiveTrajectory(const struct FScramTrajectory& trajectory);
		bool GetTrajectoryPaused();
		class UMeshComponent* GetPrimitiveVisMesh();
		struct FScramTrajectory GetPrimitiveTrajectory();
		struct FQuat GetPrimitiveRotation();
		struct FScramPrimitiveProperties GetPrimitiveProperties();
		struct FVector GetPrimitivePhysicalAngularVelocity();
		struct FMotionState GetPrimitiveMotionState();
		struct FVector GetPrimitiveLocation();
		struct FVector GetPrimitiveLinearVelocity();
		class UPrimitiveComponent* GetPrimitiveComponent();
		int32_t GetFloorBouncesWithCurrentTrajectory();
		int32_t GetEnvironmentBouncesWithCurrentTrajectory();
		void DestroyPrimitive(bool playOut, float Delay);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPrimitiveGrabbable
	 * Size -> 0x010C (FullSize[0x09F8] - InheritedSize[0x08EC])
	 */
	class AScramPrimitiveGrabbable : public AScramPrimitiveActor
	{
	public:
		unsigned char                                              UnknownData_E8NN[0x4];                                   // 0x08EC(0x0004) Fix Super Size
		float                                                      SmoothTime;                                              // 0x08F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CanBeGrabbed;                                            // 0x08F4(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JH1N[0x3];                                   // 0x08F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InitialGrabDuration;                                     // 0x08F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4AOM[0x4];                                   // 0x08FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         InitialGrabPositionAlpha;                                // 0x0900(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         InitialGrabRotationAlpha;                                // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         InitialGrabScaleAlpha;                                   // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         PendingStealPositionAlpha;                               // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         PendingStealRotationAlpha;                               // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         PendingStealScaleAlpha;                                  // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HidesAvatarHands;                                        // 0x0930(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GYG4[0x7];                                   // 0x0931(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         AlternateHandMesh;                                       // 0x0938(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMesh*                                       AlternateHandSkeletalMesh;                               // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              LefthandGripSetClass;                                    // 0x0948(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              RighthandGripSetClass;                                   // 0x0950(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DefaultScale;                                            // 0x0958(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RemoteScale;                                             // 0x0964(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinTrackedFramesForContinuousMotion;                     // 0x0968(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinInferredFramesForContinuousMotion;                    // 0x096C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FlipInLeftHand;                                          // 0x0970(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NPAF[0x7];                                   // 0x0971(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramGripSet*                                       mpLefthandGripSet;                                       // 0x0978(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramGripSet*                                       mpRighthandGripSet;                                      // 0x0980(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMesh*                                         mpMainHandMesh;                                          // 0x0988(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMesh*                                       mpMainHandSkeletalMesh;                                  // 0x0990(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramPrimitiveGrabbable*                            mpProxyGrabbable;                                        // 0x0998(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_48TN[0x58];                                  // 0x09A0(0x0058) Fix size for supers

	public:
		void SetProxyGrabbable(class AScramPrimitiveGrabbable* grabbable);
		void OnGrabbableDeactivated();
		void OnGrabbableActivated();
		bool IsLocallyGrabbed();
		bool InitialGrabInProgress();
		bool GrabbableIsTracked();
		class AScramPrimitiveGrabbable* GetProxyGrabbable();
		bool GetHidesAvatarHands();
		class AScramPlayer* CurrentPlayer();
		class AScramPlayerHand* CurrentHand();
		class AActor* CurrentGrabberActor();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBall
	 * Size -> 0x0128 (FullSize[0x0B20] - InheritedSize[0x09F8])
	 */
	class AScramBall : public AScramPrimitiveGrabbable
	{
	public:
		unsigned char                                              UnknownData_EBE2[0x8];                                   // 0x09F8(0x0008) Fix Super Size
		float                                                      mRandomFloat;                                            // 0x0A00(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_64A6[0x4];                                   // 0x0A04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBlobShadowComponent*                                mpBlobShadow;                                            // 0x0A08(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScramBallAnimInstance*                              mpAnimInstance;                                          // 0x0A10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4AA0[0x100];                                 // 0x0A18(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       mImmuneToInstruments;                                    // 0x0B18(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AKB4[0x7];                                   // 0x0B19(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetImmuneToInstruments(bool immune);
		void SetHitsBallHitters(bool hits);
		void SetHitByInstrument();
		bool IsImmuneToInstruments();
		bool GetHitsBallHitters();
		struct FScramBallProperties GetBallProperties();
		bool EverHitByInstrument();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballBall
	 * Size -> 0x03B0 (FullSize[0x0ED0] - InheritedSize[0x0B20])
	 */
	class ABaseballBall : public AScramBall
	{
	public:
		class UClass*                                              BowlingBallClass;                                        // 0x0B20(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BowlingBallDestroyDelay;                                 // 0x0B28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OIT8[0x4];                                   // 0x0B2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBaseballNetworkUpdate                              mClientSpawnUpdate;                                      // 0x0B30(0x0200) Net, NativeAccessSpecifierPrivate
		bool                                                       mClientHasSpawnUpdate;                                   // 0x0D30(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mVisible;                                                // 0x0D31(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mForcedCharge;                                           // 0x0D32(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mIsImbued;                                               // 0x0D33(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZL2B[0x4];                                   // 0x0D34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingBall*                                        mpBowlingBall;                                           // 0x0D38(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMotionState                                        mNetworkMotionState;                                     // 0x0D40(0x0040) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JI8A[0x16];                                  // 0x0D80(0x0016) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       mCanPitch;                                               // 0x0D96(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K1EA[0x139];                                 // 0x0D97(0x0139) MISSED OFFSET (PADDING)

	public:
		class UObject* TrySetFutureHit();
		void SetVerticalFieldZone(EVerticalFieldZone verticalFieldZone);
		void SetIsThrow(bool isThrow);
		void SetForceCharge(bool shouldCharge);
		void SetBallImbued(bool Imbued);
		void OnShotChanged();
		void OnRep_NetworkMotionState();
		void OnRep_BowlingBall();
		void OnImbuedChanged();
		void OnHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnFloorResultChanged(EFloorResult newFloorResult);
		bool IsRollingPitch();
		bool IsBallImbued();
		EVerticalFieldZone GetVerticalFieldZone();
		struct FBaseballShot GetShot();
		bool GetIsThrow();
		bool GetForceCharge();
		EFloorResult GetFloorResult();
		struct FBaseballBallProperties GetBaseballBallProperties();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballBallClassifier
	 * Size -> 0x0168 (FullSize[0x0490] - InheritedSize[0x0328])
	 */
	class ABaseballBallClassifier : public AActor
	{
	public:
		struct FVector                                             PitchingMound;                                           // 0x0328(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             HomePlate;                                               // 0x0334(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             OutfieldCenter;                                          // 0x0340(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             OutfieldEdge;                                            // 0x034C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             OutfieldLocus;                                           // 0x0358(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DoubleTripleMarkerPos;                                   // 0x0364(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InfieldEdge;                                             // 0x0370(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InnerFoul;                                               // 0x037C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InnerFoulSpeed;                                          // 0x0388(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FenceMargin;                                             // 0x038C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                FieldCollisionTag;                                       // 0x0390(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DVN2[0xF8];                                  // 0x0398(0x00F8) MISSED OFFSET (PADDING)

	public:
		void OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallBounced(EBallState ballState, int32_t numBounces);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballBallScrambleDisplay
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class ABaseballBallScrambleDisplay : public AActor
	{
	public:
		void SetIcon(int32_t Index, class UTexture2D* Icon);
		void GoAway();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSceneComponentActor
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class AScramSceneComponentActor : public AScramActor
	{
	public:
		class USceneComponent*                                     ScramRoot;                                               // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballBallSelector
	 * Size -> 0x0100 (FullSize[0x0450] - InheritedSize[0x0350])
	 */
	class ABaseballBallSelector : public AScramSceneComponentActor
	{
	public:
		struct FTransform                                          UpperRightScrambleTransform;                             // 0x0350(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          UpperLeftScrambleTransform;                              // 0x0380(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LowerRightScrambleTransform;                             // 0x03B0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FTransform                                          LowerLeftScrambleTransform;                              // 0x03E0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ImbuementFalloff;                                        // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              TargetClass;                                             // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ABaseballPitchingTarget*>                     PitchingTargets;                                         // 0x0420(0x0010) BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JYP5[0x8];                                   // 0x0430(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBaseballBallScrambleProperties>             mMasterScrambleList;                                     // 0x0438(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YU3G[0x8];                                   // 0x0448(0x0008) MISSED OFFSET (PADDING)

	public:
		bool TrySpawnScrambleTargets(TArray<EBaseballScrambleTargetLocations> validDisplays, int32_t numToSpawn, const struct FChance& imbueChance, bool localPlayerIsBatter);
		bool TrySetBalls(TArray<struct FBaseballBallScrambleProperties> ballProperties);
		bool TryChangeBallTable(class UDataTable* BallTable);
		void ClearScrambleTargets();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballBatterAIAnimInstance
	 * Size -> 0x0014 (FullSize[0x0370] - InheritedSize[0x035C])
	 */
	class UBaseballBatterAIAnimInstance : public UBaseballAIAnimInstance
	{
	public:
		float                                                      SwingStartTime;                                          // 0x035C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            HeadTrackRotation;                                       // 0x0360(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7070[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballCatcherAIAnimInstance
	 * Size -> 0x0004 (FullSize[0x0360] - InheritedSize[0x035C])
	 */
	class UBaseballCatcherAIAnimInstance : public UBaseballAIAnimInstance
	{
	public:
		unsigned char                                              UnknownData_S31I[0x4];                                   // 0x035C(0x0004) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTarget
	 * Size -> 0x0008 (FullSize[0x0358] - InheritedSize[0x0350])
	 */
	class AScramTarget : public AScramSceneComponentActor
	{
	public:
		unsigned char                                              UnknownData_8FD6[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballField
	 * Size -> 0x0018 (FullSize[0x0370] - InheritedSize[0x0358])
	 */
	class ABaseballField : public AScramTarget
	{
	public:
		class UPhysicalMaterial*                                   FloorMaterial;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PitchDirection;                                          // 0x0360(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XF3O[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballFielderAIAnimInstance
	 * Size -> 0x05A8 (FullSize[0x0900] - InheritedSize[0x0358])
	 */
	class UBaseballFielderAIAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_UDWH[0x8];                                   // 0x0358(0x0008) Fix Super Size
		unsigned char                                              UnknownData_MOAA[0x10];                                  // 0x0360(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFielderAnimInstanceProxy                           Proxy;                                                   // 0x0370(0x0590) BlueprintVisible, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballGlobalDataAsset
	 * Size -> 0x0240 (FullSize[0x0270] - InheritedSize[0x0030])
	 */
	class UBaseballGlobalDataAsset : public UDataAsset
	{
	public:
		struct FBaseballGlobalData                                 Data;                                                    // 0x0030(0x0240) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		void STATIC_GetBatterPlayAreas(struct FBox* minPlayArea, struct FBox* maxPlayArea, struct FBox* maxHazardArea, EBattingSide Side);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramInstrument
	 * Size -> 0x0338 (FullSize[0x0D30] - InheritedSize[0x09F8])
	 */
	class AScramInstrument : public AScramPrimitiveGrabbable
	{
	public:
		unsigned char                                              UnknownData_0IFO[0x8];                                   // 0x09F8(0x0008) Fix Super Size
		EScramInstrumentHitPhysics                                 HitPhysics;                                              // 0x0A00(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_40SS[0x3];                                   // 0x0A01(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScramInstrumentRegion                              BroadSwingRegion;                                        // 0x0A04(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FScramInstrumentRegion                              CriticalSwingRegion;                                     // 0x0A20(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FScramInstrumentRegion                              TightSwingRegion;                                        // 0x0A3C(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FScramInstrumentRegion                              TeeBallServiceRegion;                                    // 0x0A58(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      LeverLength;                                             // 0x0A74(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeverVelocitySmoothTime;                                 // 0x0A78(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseDeadReckoningVelocity;                                // 0x0A7C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CHY9[0x3];                                   // 0x0A7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabberVelocitySmoothTime;                               // 0x0A80(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularVelocitySmoothTime;                               // 0x0A84(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularVelocitySpeedBiasWeight;                          // 0x0A88(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSwingSpeed;                                           // 0x0A8C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SwingSpeedBias;                                          // 0x0A90(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SwingSpeedMultiplier;                                    // 0x0A94(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularVelocityLeverContribution;                        // 0x0A98(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IncomingBallVelocityMultiplier;                          // 0x0A9C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      IncomingBallAngularVelocityMultiplier;                   // 0x0AA0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LateralSpinBias;                                         // 0x0AA4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DowncourtSpinMap;                                        // 0x0AA8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpinSpeedContribution;                                   // 0x0AB0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      NormalImpulseMultiplier;                                 // 0x0AB4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LateralImpulseMultiplier;                                // 0x0AB8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FScramInstrumentSwingGesture                        SwingGesture;                                            // 0x0ABC(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        DowncourtNormalBiasSpeedRange;                           // 0x0AD8(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		ENormalBiasMode                                            DowncourtNormalBiasMode;                                 // 0x0AE0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_453C[0x7];                                   // 0x0AE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         MinDowncourtNormalYawMap;                                // 0x0AE8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         MaxDowncourtNormalYawMap;                                // 0x0AF0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         MinDowncourtNormalPitchMap;                              // 0x0AF8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         MaxDowncourtNormalPitchMap;                              // 0x0B00(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MotionBlurMovementThreshold;                             // 0x0B08(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JLOD[0x4];                                   // 0x0B0C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramInstrumentAnimInstance*                        mpAnimInstance;                                          // 0x0B10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_K9B7[0x208];                                 // 0x0B18(0x0208) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInferredHit>                                mQueuedInferredHits;                                     // 0x0D20(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		struct FVector GetLeverVelocity();
		struct FScramInstrumentProperties GetInstrumentProperties();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballInstrument
	 * Size -> 0x0200 (FullSize[0x0F30] - InheritedSize[0x0D30])
	 */
	class ABaseballInstrument : public AScramInstrument
	{
	public:
		struct FAngle                                              MaxValidSwingAngle;                                      // 0x0D30(0x0004) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CJTH[0x1DD];                                 // 0x0D34(0x01DD) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       mClientNeedsSelectorInitialization;                      // 0x0F11(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TK0B[0x6];                                   // 0x0F12(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseballBall*>                               mSwungAtBalls;                                           // 0x0F18(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XJO8[0x8];                                   // 0x0F28(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnInstrumentBreakEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		bool IsPendingRelease();
		void InstrumentLowHealth(float health);
		struct FBaseballInstrumentProperties GetBaseballInstrumentProperties();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballInstrumentSelector
	 * Size -> 0x00E8 (FullSize[0x0438] - InheritedSize[0x0350])
	 */
	class ABaseballInstrumentSelector : public AScramSceneComponentActor
	{
	public:
		class UStaticMesh*                                         SpawnerMesh;                                             // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystem*                                     SpawnerParticle;                                         // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ParticleFireDelay;                                       // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X8EX[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          Instruments;                                             // 0x0368(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ABaseballInstrument*>                         SpawnedInstruments;                                      // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, RepNotify, Protected, NativeAccessSpecifierProtected
		int32_t                                                    InstrumentDisplayCount;                                  // 0x0380(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstrumentDisplayHeight;                                 // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InstrumentDisplaySpace;                                  // 0x0388(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6UM1[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  DisplayPositionOverrides;                                // 0x0390(0x0010) Edit, BlueprintVisible, Net, ZeroConstructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected
		class UCurveFloat*                                         InstrumentShowScaleCurve;                                // 0x03A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveVector*                                        SpawnerShowScaleCurve;                                   // 0x03A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            RotationOffset;                                          // 0x03B0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_91IL[0x1C];                                  // 0x03BC(0x001C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mWorkingDisplayCount;                                    // 0x03D8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TFEJ[0x4];                                   // 0x03DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomActorTable                                   mInstrumentTable;                                        // 0x03E0(0x0020) NativeAccessSpecifierPrivate
		class UClass*                                              mLastSelected;                                           // 0x0400(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        mDisplayBases;                                           // 0x0408(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UParticleSystemComponent*>                    mDisplayParticle;                                        // 0x0418(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D04S[0x10];                                  // 0x0428(0x0010) MISSED OFFSET (PADDING)

	public:
		bool TrySetInstruments(TArray<struct FBaseballInstrumentEntryProperties> instrumentEntries);
		bool TryChangeInstrumentTable(class UDataTable* InstrumentTable);
		void SetSelectorVisible(bool visible);
		void OnRep_ClientSpawnedInstruments();
		void InstrumentSelected(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGlove
	 * Size -> 0x0040 (FullSize[0x0A38] - InheritedSize[0x09F8])
	 */
	class AScramGlove : public AScramPrimitiveGrabbable
	{
	public:
		unsigned char                                              UnknownData_FKFZ[0x8];                                   // 0x09F8(0x0008) Fix Super Size
		struct FVector                                             GrabberHoldPoint;                                        // 0x0A00(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             GrabberHoldDirection;                                    // 0x0A0C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHapticFeedbackEffect_Base*                          GrabHaptics;                                             // 0x0A18(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHapticFeedbackEffect_Base*                          ReleaseHaptics;                                          // 0x0A20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HapticMultiplier;                                        // 0x0A28(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1R76[0xC];                                   // 0x0A2C(0x000C) Fix size for supers

	public:
		EScramHandedness GetGrabberHandedness();
		void ForceGrab(class AActor* GrabbableActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballMitt
	 * Size -> 0x0178 (FullSize[0x0BB0] - InheritedSize[0x0A38])
	 */
	class ABaseballMitt : public AScramGlove
	{
	public:
		unsigned char                                              UnknownData_X9WF[0x8];                                   // 0x0A38(0x0008) Fix Super Size
		class UAnimationAsset*                                     MainHandAnimationAsset;                                  // 0x0A40(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationAsset*                                     AlternateHandAnimationAsset;                             // 0x0A48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UHapticFeedbackEffect_Base*                          BounceHaptics;                                           // 0x0A50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBox                                                BroadVolume;                                             // 0x0A58(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBox                                                TightVolume;                                             // 0x0A74(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              DisplayAcceptanceAngle;                                  // 0x0A90(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DisplayLength;                                           // 0x0A94(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DisplayCenter;                                           // 0x0A98(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             DisplayRotator;                                          // 0x0AA4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              DisplaySpace;                                            // 0x0AB0(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    SelectionCount;                                          // 0x0AB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DisplayShowPositionCurve;                                // 0x0AB8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DisplayShowScaleCurve;                                   // 0x0AC0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              OpenWideUpAngle;                                         // 0x0AC8(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              OpenWideForwardAngle;                                    // 0x0ACC(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      CatchCloseTime;                                          // 0x0AD0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchCloseDuration;                                      // 0x0AD4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GripCloseTime;                                           // 0x0AD8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CloseEmptyTime;                                          // 0x0ADC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBaseballMittSkillVariations                        SkillVariations[0x3];                                    // 0x0AE0(0x0024) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       CanDropBall;                                             // 0x0B04(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X1SI[0x3];                                   // 0x0B05(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMittSpawnInfo>                              mSpawnableBalls;                                         // 0x0B08(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7MC5[0x10];                                  // 0x0B18(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseballBall*>                               mSpawnedBalls;                                           // 0x0B28(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		TArray<class ABaseballBall*>                               mClientSpawnedBalls;                                     // 0x0B38(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SOYN[0x10];                                  // 0x0B48(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMittBallRecordSet                                  mImmuneBalls;                                            // 0x0B58(0x0010) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U2K4[0x18];                                  // 0x0B68(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMittBallRecordSet                                  mLateGrabBalls;                                          // 0x0B80(0x0010) NativeAccessSpecifierPrivate
		struct FMittBallRecordSet                                  mBounceImmunity;                                         // 0x0B90(0x0010) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LU42[0x10];                                  // 0x0BA0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnScrambleBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnRep_ClientSpawnedBalls();
		bool GetScrambleOptionsFull();
		TArray<struct FMittSpawnInfo> GetScrambleOptions();
		void ClearScrambleOptions();
		void AddScrambleBallWithType(class UClass* BallClass, bool Imbued);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballPitcherAIAnimInstance
	 * Size -> 0x0014 (FullSize[0x0370] - InheritedSize[0x035C])
	 */
	class UBaseballPitcherAIAnimInstance : public UBaseballAIAnimInstance
	{
	public:
		struct FRotator                                            HeadTrackRotation;                                       // 0x035C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWD2[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballPitchingPropManager
	 * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
	 */
	class ABaseballPitchingPropManager : public AScramActor
	{
	public:
		TArray<struct FPitchingProp>                               SpawnableList;                                           // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FPitchingPropInstance>                       mActiveObjects;                                          // 0x0358(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void SpawnRegisteredObjects(EBaseballBallType BallType);
		void ClearAllObjects();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBallTrigger
	 * Size -> 0x00D8 (FullSize[0x0420] - InheritedSize[0x0348])
	 */
	class AScramBallTrigger : public AScramActor
	{
	public:
		unsigned char                                              UnknownData_TYJ4[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EScramIntersectRadiusMode                                  BallRadiusMode;                                          // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramBallTriggerShape                                     Shape;                                                   // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8GKE[0x2];                                   // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Radius;                                                  // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RadiusAABBScale;                                         // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RightMargin;                                             // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LeftMargin;                                              // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TopMargin;                                               // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BottomMargin;                                            // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SupportsMultiplayerAutoTriggering;                       // 0x036C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       TriggerEnabled;                                          // 0x036D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z9AX[0x2];                                   // 0x036E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSportsScramble_FBallHit                            mFutureHit;                                              // 0x0370(0x0020) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7R8O[0x90];                                  // 0x0390(0x0090) MISSED OFFSET (PADDING)

	public:
		void OnTriggered(class AScramBall* Ball);
		bool IsFutureHitPending();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballPitchingTarget
	 * Size -> 0x0020 (FullSize[0x0440] - InheritedSize[0x0420])
	 */
	class ABaseballPitchingTarget : public AScramBallTrigger
	{
	public:
		class UTexture2D*                                          ScrambleIcon;                                            // 0x0420(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BallClass;                                               // 0x0428(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ImbuedBall;                                              // 0x0430(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShowToClient;                                            // 0x0431(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBaseballScrambleTargetLocations                           TargetLocationDesignation;                               // 0x0432(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0H5W[0xD];                                   // 0x0433(0x000D) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballRunnerAIAnimInstance
	 * Size -> 0x0584 (FullSize[0x08E0] - InheritedSize[0x035C])
	 */
	class UBaseballRunnerAIAnimInstance : public UBaseballAIAnimInstance
	{
	public:
		unsigned char                                              UnknownData_XNGI[0x4];                                   // 0x035C(0x0004) Fix Super Size
		struct FRunnerAnimInstanceProxy                            Proxy;                                                   // 0x0360(0x0580) BlueprintVisible, Transient, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.SportState
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USportState : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballState
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UBaseballState : public USportState
	{
	public:
		int32_t                                                    VisitorsScore;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HomeScore;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Inning;                                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TopOfInning;                                             // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FirstPitchOfInning;                                      // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHCF[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Outs;                                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Strikes;                                                 // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Balls;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RunnerOnFirst;                                           // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RunnerOnSecond;                                          // 0x0045(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RunnerOnThird;                                           // 0x0046(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocalPlayerBatting;                                    // 0x0047(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BatterInstrument;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMittSpawnInfo>                              PitcherScrambleOptions;                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ThrowingGlove
	 * Size -> 0x00A8 (FullSize[0x0AE0] - InheritedSize[0x0A38])
	 */
	class AThrowingGlove : public AScramGlove
	{
	public:
		struct FScramGloveThrowRecord                              ThrowData;                                               // 0x0A38(0x001C) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      StartLagDist;                                            // 0x0A54(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurveFitDist;                                            // 0x0A58(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    FirstFrameFilterCount;                                   // 0x0A5C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxReliableInferredFrames;                               // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StartSmoothTime;                                         // 0x0A64(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    VelocitySmoothingFrameCount;                             // 0x0A68(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LinearSmoothing;                                         // 0x0A6C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularSmoothing;                                        // 0x0A70(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              SideArmAngle;                                            // 0x0A74(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      BeginAutoReleaseSpeed;                                   // 0x0A78(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EndAutoReleaseMaxSpeedPercentage;                        // 0x0A7C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugDrawTime;                                           // 0x0A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    DebugCycleFrameCount;                                    // 0x0A84(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CWL3[0x58];                                  // 0x0A88(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BaseballThrowingGlove
	 * Size -> 0x0090 (FullSize[0x0B70] - InheritedSize[0x0AE0])
	 */
	class ABaseballThrowingGlove : public AThrowingGlove
	{
	public:
		class USceneComponent*                                     TrajectoryHelper;                                        // 0x0AE0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramStrikeZone*                                    TargetZone;                                              // 0x0AE8(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      YawBiasStrength;                                         // 0x0AF0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PitchBiasStrength;                                       // 0x0AF4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UnderhandPitchBiasStrength;                              // 0x0AF8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SpinForceConversionAlpha;                                // 0x0AFC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularRotationStrength;                                 // 0x0B00(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KDIP[0x4];                                   // 0x0B04(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         SpeedAlphaMap;                                           // 0x0B08(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxTrackedHandSpeed;                                     // 0x0B10(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MultiplayerMaximumSpeed;                                 // 0x0B14(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FlubSpeedThreshhold;                                     // 0x0B18(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GrabRadiusForStationaryObjects;                          // 0x0B1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GrabRadiusForMovingObjects;                              // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GripFriction;                                            // 0x0B24(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              MaxMeasuredTangentDifference;                            // 0x0B28(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      ReleaseTime;                                             // 0x0B2C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StickDrivenGloveMaxCrossTime;                            // 0x0B30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I6PT[0x4];                                   // 0x0B34(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BowlingGloveClass;                                       // 0x0B38(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InferredPitchOffsetFromHead;                             // 0x0B40(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TZUF[0x4];                                   // 0x0B4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingGlove*                                       mpBowlingGlove;                                          // 0x0B50(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DWHG[0x18];                                  // 0x0B58(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnBowlingGloveRelease(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BattingAvatar
	 * Size -> 0x0030 (FullSize[0x0410] - InheritedSize[0x03E0])
	 */
	class ABattingAvatar : public ABaseballAvatar
	{
	public:
		float                                                      MinTimeBetweenSwings;                                    // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OP1H[0x2C];                                  // 0x03E4(0x002C) MISSED OFFSET (PADDING)

	public:
		void OnSwung(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramAvatarAnimInstance
	 * Size -> 0x00E8 (FullSize[0x0440] - InheritedSize[0x0358])
	 */
	class UScramAvatarAnimInstance : public UAnimInstance
	{
	public:
		struct FRotator                                            HeadRotation;                                            // 0x0358(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TWYQ[0xC];                                   // 0x0364(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          LeftHandTransform;                                       // 0x0370(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightHandTransform;                                      // 0x03A0(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          LeftGrabbableTransform;                                  // 0x03D0(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          RightGrabbableTransform;                                 // 0x0400(0x0030) BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            BodyRotation;                                            // 0x0430(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QM9[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BattingAvatarAnimInstance
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UBattingAvatarAnimInstance : public UScramAvatarAnimInstance
	{
	public:
		EBattingAvatarAnimState                                    DesiredState;                                            // 0x0440(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0441(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2OU1[0xE];                                   // 0x0442(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BlobShadowComponent
	 * Size -> 0x0098 (FullSize[0x02D0] - InheritedSize[0x0238])
	 */
	class UBlobShadowComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_S3LO[0x4];                                   // 0x0238(0x0004) Fix Super Size
		float                                                      MaxCastHeight;                                           // 0x023C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultHeight;                                           // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x0244(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AspectRatio;                                             // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Opacity;                                                 // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ScaleWithDistance;                                       // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6GH2[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FarDistance;                                             // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FarRadius;                                               // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FarOpacity;                                              // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FalloffExponent;                                         // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ZApproachTime;                                           // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FollowParent;                                            // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       visible;                                                 // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9L4C[0x6];                                   // 0x026A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollection*                        MaterialCollection;                                      // 0x0270(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<ECollisionChannel>                                  RayTraceChannels;                                        // 0x0278(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class AActor*                                              mpFollowActor;                                           // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              mpIgnoreActor;                                           // 0x0290(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S30A[0x38];                                  // 0x0298(0x0038) MISSED OFFSET (PADDING)

	public:
		void ScaleOut(float scaleOutTime);
		void ScaleIn(float scaleInTime);
		void FadeOut(float fadeOutTime);
		void FadeIn(float fadeInTime);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BlobShadowManager
	 * Size -> 0x0018 (FullSize[0x0340] - InheritedSize[0x0328])
	 */
	class ABlobShadowManager : public AActor
	{
	public:
		TArray<class UBlobShadowComponent*>                        mBlobShadows;                                            // 0x0328(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K8XG[0x8];                                   // 0x0338(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingAIAnimInstance
	 * Size -> 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
	 */
	class UBowlingAIAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_1UYH[0x8];                                   // 0x0358(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingAlley
	 * Size -> 0x0068 (FullSize[0x03B0] - InheritedSize[0x0348])
	 */
	class ABowlingAlley : public AScramActor
	{
	public:
		TArray<struct FBox>                                        Regions;                                                 // 0x0348(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UPhysicalMaterial*                                   FloorMaterial;                                           // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              mpPlayer;                                                // 0x0360(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ABowlingBall*>                                mBalls;                                                  // 0x0368(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class ABowlingBall*>                                mThrownBalls;                                            // 0x0378(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		class ABowlingPinsetter*                                   mpPinsetter;                                             // 0x0388(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_STEM[0x20];                                  // 0x0390(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetPlayer(class AActor* Player);
		void SetPinsetter(class ABowlingPinsetter* pinsetter);
		void OnBallReleased(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallOut(class ABowlingBall* Ball, bool pit, bool restricted);
		void OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallDestroyed(class AActor* pBallActor);
		bool IsLaneReady();
		int32_t GetScore();
		class AActor* GetPlayer();
		float GetFloorZ();
		class UPhysicalMaterial* GetFloorMaterial();
		TArray<class ABowlingBall*> GetBalls();
		class ABowlingBallReturn* GetBallReturn();
		class ABowlingAlley* STATIC_GetAlley(class AActor* Player);
		class ABowlingLane* GetActiveLane();
		void ClearBalls(bool includeThrownBalls);
		void ClearBall(class ABowlingBall* Ball);
		bool AnyThrownBallsRemaining();
		void AddInstigatorBallCode(class ABowlingBall* Ball);
		void AddBall(class ABowlingBall* Ball);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingAvatar
	 * Size -> 0x0020 (FullSize[0x03F0] - InheritedSize[0x03D0])
	 */
	class ABowlingAvatar : public AScramAvatar
	{
	public:
		float                                                      MaxHeightToPlayThrowAnimation;                           // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZH7[0x4];                                   // 0x03D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBowlingAvatarAnimInstance*                          mpBowlingAnimInstance;                                   // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OW7A[0x10];                                  // 0x03E0(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnBallReleased(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingAvatarAnimInstance
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UBowlingAvatarAnimInstance : public UScramAvatarAnimInstance
	{
	public:
		EBowlingAvatarAnimState                                    DesiredState;                                            // 0x0440(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayingIdle;                                             // 0x0441(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLMM[0xE];                                   // 0x0442(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingBall
	 * Size -> 0x0260 (FullSize[0x0D80] - InheritedSize[0x0B20])
	 */
	class ABowlingBall : public AScramBall
	{
	public:
		class UHapticFeedbackEffect_Base*                          VibrationGrabHaptics;                                    // 0x0B20(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RollVolumeAudioProperty;                                 // 0x0B28(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RollVolumeVsSpeed;                                       // 0x0B30(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RollPitchAudioProperty;                                  // 0x0B38(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveFloat*                                         RollPitchVsSpeed;                                        // 0x0B40(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioComponent*                                     RollingAudio;                                            // 0x0B48(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AddedAsInstigator;                                       // 0x0B50(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9I58[0x7];                                   // 0x0B51(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingAlley*                                       mpAlley;                                                 // 0x0B58(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ABowlingLane*                                        mpCurrentLane;                                           // 0x0B60(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBowlingLaneSpline*                                  mpCurrentSpline;                                         // 0x0B68(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GPFZ[0x210];                                 // 0x0B70(0x0210) MISSED OFFSET (PADDING)

	public:
		void SetValidRoll(bool validRoll);
		void OnThrowChanged();
		void OnHitPin(class ABowlingPin* Pin);
		void OnHitLane(class ABowlingLane* Lane, float bounceSpeed);
		void OnHitFootballBlocker(class ABowlingFootballBlocker* FootballBlocker);
		void OnFloorResultChanged(EFloorResult newFloorResult);
		bool IsBouncing();
		bool GetValidRoll();
		struct FBowlingThrow GetThrow();
		EFloorResult GetFloorResult();
		struct FBowlingBallProperties GetBowlingBallProperties();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingBallReturn
	 * Size -> 0x00A0 (FullSize[0x03F0] - InheritedSize[0x0350])
	 */
	class ABowlingBallReturn : public AScramSceneComponentActor
	{
	public:
		struct FRandomActorTable                                   BallTable;                                               // 0x0350(0x0020) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UClass*                                              OverrideBall;                                            // 0x0370(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimateInTime;                                           // 0x0378(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AnimateOutTime;                                          // 0x037C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StorageDistance;                                         // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HorizontalRangeForLightCone;                             // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        VerticalRangeForLightCone;                               // 0x0388(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       TurnOnConeForHeldBall;                                   // 0x0390(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PQ2S[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     SlideSound;                                              // 0x0398(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                SpeedVar;                                                // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector_NetQuantize                                 mStartPosition;                                          // 0x03A8(0x000C) Net, NoDestructor, NativeAccessSpecifierPrivate
		struct FVector_NetQuantize                                 mStoragePosition;                                        // 0x03B4(0x000C) Net, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WBMU[0x18];                                  // 0x03C0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLightCone>                                  mLightCones;                                             // 0x03D8(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ESKK[0x8];                                   // 0x03E8(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetSlideDirection(bool Forward);
		void ResetBallTable();
		void PreLevelChangeCleanup();
		void OnTrackMotionStop();
		void OnTrackMotionStart();
		void OnReturnSlideStopped();
		void OnReturnSlideStarted();
		void IncrementBallSelection(class UClass* BallClass);
		class UBowlingBallReturnTrack* GetReturnTrack();
		class UClass* GetRandomBall();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingBallReturnSlot
	 * Size -> 0x0078 (FullSize[0x03C8] - InheritedSize[0x0350])
	 */
	class ABowlingBallReturnSlot : public AScramSceneComponentActor
	{
	public:
		float                                                      AttachTime;                                              // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DisposeTime;                                             // 0x0354(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Radius;                                                  // 0x0358(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TopSpeed;                                                // 0x035C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Acceleration;                                            // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6WBD[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     AttachPoint;                                             // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABowlingBall*                                        mpBall;                                                  // 0x0370(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBowlingBallReturnTrack*                             mpTrack;                                                 // 0x0378(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ABowlingBall*                                        mpClientBall;                                            // 0x0380(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBowlingBallReturnTrack*                             mpClientTrack;                                           // 0x0388(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6MVY[0x28];                                  // 0x0390(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mTargetTrackDistance;                                    // 0x03B8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BT8P[0xC];                                   // 0x03BC(0x000C) MISSED OFFSET (PADDING)

	public:
		void OnRep_ClientTrack();
		void OnRep_ClientBall();
		void OnMotionStop();
		void OnMotionStart();
		void OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallAttached();
		bool IsDisposing();
		bool IsBallAttached();
		class ABowlingBall* GetAttachedBall();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingBallReturnTrack
	 * Size -> 0x0018 (FullSize[0x0660] - InheritedSize[0x0648])
	 */
	class UBowlingBallReturnTrack : public USplineComponent
	{
	public:
		TArray<class ABowlingBallReturnSlot*>                      mSlots;                                                  // 0x0648(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SOPC[0x8];                                   // 0x0658(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetupSlot(class ABowlingBall* Ball, class UClass* SlotClass);
		bool HasBall(class ABowlingBall* Ball);
		int32_t GetNumOccupiedSlots();
		void FreeLastSlot(const struct FVector& disposalPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingBallTrigger
	 * Size -> 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
	 */
	class ABowlingBallTrigger : public AScramBallTrigger
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingCenterScoreboard
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class ABowlingCenterScoreboard : public AActor
	{
	public:
		int32_t GetTimeRemaining();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingConveyor
	 * Size -> 0x0028 (FullSize[0x0378] - InheritedSize[0x0350])
	 */
	class ABowlingConveyor : public AScramMeshActor
	{
	public:
		float                                                      ConveyorSpeed;                                           // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4PSL[0x4];                                   // 0x0354(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   ConveyorPhysicsMaterial;                                 // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugForceArrowLength;                                   // 0x0360(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugForceArrowRadius;                                   // 0x0364(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AScramPrimitiveActor*>                        OverlappingActors;                                       // 0x0368(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingFootballBlocker
	 * Size -> 0x0100 (FullSize[0x0450] - InheritedSize[0x0350])
	 */
	class ABowlingFootballBlocker : public AScramMeshActor
	{
	public:
		struct FBox                                                MovementSpace;                                           // 0x0350(0x001C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        MovementSpeed;                                           // 0x036C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FMinMaxAngle                                        HeadingDeltaRange;                                       // 0x0374(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      HeadingSmoothTime;                                       // 0x037C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationSmoothTime;                                      // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedSmoothTime;                                         // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCurveVector*                                        RotationJitter;                                          // 0x0388(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BoundaryHoldTime;                                        // 0x0390(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockingRadius;                                          // 0x0394(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ClientAttachParent;                                      // 0x0398(0x0008) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ClientRelativeLocation;                                  // 0x03A0(0x000C) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ClientRelativeRotation;                                  // 0x03AC(0x000C) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8EIM[0x10];                                  // 0x03B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mTargetSpeed;                                            // 0x03C8(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             mTargetMoveDirection;                                    // 0x03CC(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZX7[0x8];                                   // 0x03D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               mTargetRotation;                                         // 0x03E0(0x0010) Net, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QDSO[0x60];                                  // 0x03F0(0x0060) MISSED OFFSET (PADDING)

	public:
		void StopBlocker();
		void StartBlocker(const struct FTransform& centerTransform, float initialAngleDegrees);
		void DeferredInit();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingForceMagnet
	 * Size -> 0x0098 (FullSize[0x03E8] - InheritedSize[0x0350])
	 */
	class ABowlingForceMagnet : public AScramMeshActor
	{
	public:
		float                                                      MagneticForce;                                           // 0x0350(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMagnetForceType                                           ForceApplication;                                        // 0x0354(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       InvertedForce;                                           // 0x0355(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_25K5[0x2];                                   // 0x0356(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DistanceFalloff;                                         // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       OnlyUseIfClosest;                                        // 0x0360(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ApplyForcesToDrawIn;                                     // 0x0361(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z9V3[0x2];                                   // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Priority;                                                // 0x0364(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PriorityDistance;                                        // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_RUR1[0x7C];                                  // 0x036C(0x007C) MISSED OFFSET (PADDING)

	public:
		void DirectSuckStarted();
		void DeactivateMagnet();
		void ActivateMagnet();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingGlobalDataAsset
	 * Size -> 0x01C0 (FullSize[0x01F0] - InheritedSize[0x0030])
	 */
	class UBowlingGlobalDataAsset : public UDataAsset
	{
	public:
		struct FBowlingGlobalData                                  Data;                                                    // 0x0030(0x01C0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingGlove
	 * Size -> 0x00F8 (FullSize[0x0B30] - InheritedSize[0x0A38])
	 */
	class ABowlingGlove : public AScramGlove
	{
	public:
		unsigned char                                              UnknownData_4GVG[0x4];                                   // 0x0A38(0x0004) Fix Super Size
		float                                                      PointGrabRange;                                          // 0x0A3C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PointAtDirection;                                        // 0x0A40(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LinearVelocitySmoothTime;                                // 0x0A4C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularVelocitySmoothTime;                               // 0x0A50(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ReleaseTime;                                             // 0x0A54(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FollowThroughTime;                                       // 0x0A58(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PostReleaseDebugTime;                                    // 0x0A5C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BeginAutoReleaseSpeed;                                   // 0x0A60(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EndAutoReleaseMaxSpeedPercentage;                        // 0x0A64(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              InferredReleaseYawRandomization;                         // 0x0A68(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FVector                                             ThrowAngularVelocityMultiplier;                          // 0x0A6C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             InferredBowlOffsetFromHead;                              // 0x0A78(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InferredBowlMinimumHeight;                               // 0x0A84(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y7R4[0x78];                                  // 0x0A88(0x0078) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingBall*                                        mpFollowThroughBall;                                     // 0x0B00(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R2U7[0x28];                                  // 0x0B08(0x0028) MISSED OFFSET (PADDING)

	public:
		void OnThrowFinalized(class ABowlingBall* Ball);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingGutterTracker
	 * Size -> 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
	 */
	class UBowlingGutterTracker : public UScramSceneComponent
	{
	public:
		bool                                                       GutterSystemActive;                                      // 0x0240(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       CountsTowardFrame;                                       // 0x0241(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       BallPlayOut;                                             // 0x0242(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3H34[0x1];                                   // 0x0243(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxGutterTime;                                           // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxTrackingLoss;                                         // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      KillTimeDelay;                                           // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGutterBallTracker                                  mLeftTracker;                                            // 0x0250(0x0018) NativeAccessSpecifierPrivate
		struct FGutterBallTracker                                  mRightTracker;                                           // 0x0268(0x0018) NativeAccessSpecifierPrivate

	public:
		void SimpleHitActor(class AActor* OtherActor);
		void ForceClearGutter(bool ClearRight, bool ClearLeft);
		void FireRightParticle();
		void FireLeftParticle();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingLane
	 * Size -> 0x0180 (FullSize[0x04C8] - InheritedSize[0x0348])
	 */
	class ABowlingLane : public AScramActor
	{
	public:
		ELaneType                                                  LaneType;                                                // 0x0348(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DisableBallDriftMotion;                                  // 0x0349(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3Q9S[0x2];                                   // 0x034A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VisualRollFriction;                                      // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBowlingLaneFrictionRegion>                  FrictionRegions;                                         // 0x0350(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FBowlingLanePitRegion>                       PitRegions;                                              // 0x0360(0x0010) Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FBowlingLaneRegion                                  LaneBounceRegion;                                        // 0x0370(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBowlingLaneRegion                                  LaneFloorRegion;                                         // 0x0390(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBowlingLaneRegion                                  TargetAirRegion;                                         // 0x03B0(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBowlingLaneRegion                                  TargetGroundRegion;                                      // 0x03D0(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              MinValidThrowYaw;                                        // 0x03F0(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        ValidThrowPitch;                                         // 0x03F4(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        ThrowBiasSpeedRange;                                     // 0x03FC(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1HFY[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         MinThrowBiasYawMap;                                      // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         MaxThrowBiasYawMap;                                      // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         MinThrowBiasPitchMap;                                    // 0x0418(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         MaxThrowBiasPitchMap;                                    // 0x0420(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              MaxThrowRotationAdjustment;                              // 0x0428(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3EGF[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBowlingLaneAIData                                  AIData;                                                  // 0x0430(0x0060) Edit, Protected, NativeAccessSpecifierProtected
		float                                                      DownLaneAssistPercentModifiers[0x3];                     // 0x0490(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AvoidGuttersAssistPercentModifiers[0x3];                 // 0x049C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SplineAssistPercentModifiers[0x3];                       // 0x04A8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UsesBowlingPins;                                         // 0x04B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_P0NY[0x3];                                   // 0x04B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UBowlingLaneSpline*>                          mSplines;                                                // 0x04B8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void ShowBaseballLane();
		bool ShouldUsePins();
		void HideBaseballLane();
		struct FVector GetDownLaneVector();
		class ABowlingAlley* GetAlley();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingLaneSpline
	 * Size -> 0x0070 (FullSize[0x06B8] - InheritedSize[0x0648])
	 */
	class UBowlingLaneSpline : public USplineComponent
	{
	public:
		unsigned char                                              UnknownData_1HBV[0x8];                                   // 0x0648(0x0008) Fix Super Size
		bool                                                       SplineEnabled;                                           // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FMRT[0x3];                                   // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EndInfluenceDistance;                                    // 0x0654(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EndInfluenceSpeed;                                       // 0x0658(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UJIL[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         InfluenceStrengthAtDistance;                             // 0x0660(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         InfluenceStrengthAtAngle;                                // 0x0668(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         InfluenceStrengthAtSpeed;                                // 0x0670(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AffectsRotation;                                         // 0x0678(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SF9Q[0x3];                                   // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FastestPitchSmoothTime;                                  // 0x067C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FastestYawSmoothTime;                                    // 0x0680(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FastestSpeedSmoothTime;                                  // 0x0684(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FastestRotationSmoothTime;                               // 0x0688(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BounceTolerance;                                         // 0x068C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InfluenceMaxImprovement;                                 // 0x0690(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SPXD[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInfluenceMapper                                    InfluencerMap;                                           // 0x0698(0x0010) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      AILeftRightOffset;                                       // 0x06A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              AIThrowYaw;                                              // 0x06AC(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class ABowlingLane*                                        mpLane;                                                  // 0x06B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingLaneCurve
	 * Size -> 0x0028 (FullSize[0x06E0] - InheritedSize[0x06B8])
	 */
	class UBowlingLaneCurve : public UBowlingLaneSpline
	{
	public:
		struct FVector                                             SplineRight;                                             // 0x06B8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InfluenceTime;                                           // 0x06C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FBowlingBallCurveInfluenceDatum>             mInfluencedBalls;                                        // 0x06C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PK9I[0x8];                                   // 0x06D8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingLaneFlipper
	 * Size -> 0x0058 (FullSize[0x03A8] - InheritedSize[0x0350])
	 */
	class ABowlingLaneFlipper : public AScramMeshActor
	{
	public:
		class USceneComponent*                                     Center;                                                  // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActiveTime;                                              // 0x0358(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        ArcTime;                                                 // 0x035C(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D0MF[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          AudioFeedback;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SoundVolume;                                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J1D3[0x4];                                   // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramTimeLineComponent*                             MovementControl;                                         // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBoxComponent*                                       EffectBox;                                               // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UParticleSystemComponent*                            ParticleFX;                                              // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     mpLaunchTarget;                                          // 0x0390(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BF4P[0x10];                                  // 0x0398(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetLaunchTarget(class USceneComponent* Target);
		void FlipFlipper();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingPin
	 * Size -> 0x0034 (FullSize[0x0920] - InheritedSize[0x08EC])
	 */
	class ABowlingPin : public AScramPrimitiveActor
	{
	public:
		float                                                      DepthTolerance;                                          // 0x08EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LinearRestThreshold;                                     // 0x08F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AngularRestThreshold;                                    // 0x08F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1IL9[0x28];                                  // 0x08F8(0x0028) MISSED OFFSET (PADDING)

	public:
		bool WasKnockedDown();
		void StartCheckingForKnockedDown();
		void OnKnockedDown();
		bool IsAtRest();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingPinsetter
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class ABowlingPinsetter : public AActor
	{
	public:
		TArray<class ABowlingPin*>                                 ActivePins;                                              // 0x0328(0x0010) BlueprintVisible, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		bool ActivePinsCanBeScored();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingPlinko
	 * Size -> 0x0058 (FullSize[0x03A0] - InheritedSize[0x0348])
	 */
	class ABowlingPlinko : public AScramActor
	{
	public:
		struct FMinMaxFloat                                        LocalBallHorizontalRange;                                // 0x0348(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        LocalBallVerticalRange;                                  // 0x0350(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        WidgetHorizontalRange;                                   // 0x0358(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        WidgetVerticalRange;                                     // 0x0360(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      LocalBallResolveDepth;                                   // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2T59[0x34];                                  // 0x036C(0x0034) MISSED OFFSET (PADDING)

	public:
		void ResolveBall(class ABowlingPlinkoBall* Ball, float localY);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingPlinkoBall
	 * Size -> 0x0010 (FullSize[0x0360] - InheritedSize[0x0350])
	 */
	class ABowlingPlinkoBall : public AScramMeshActor
	{
	public:
		class UWidget*                                             mpWidget;                                                // 0x0350(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mResolving;                                              // 0x0358(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LKVM[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetWidget(class UWidget* Widget);
		void SetResolving(bool resolving);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingScoreKeeper
	 * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
	 */
	class ABowlingScoreKeeper : public AScramActor
	{
	public:
		TArray<struct FBowlingFrameSet>                            FrameSetPerPlayer;                                       // 0x0348(0x0010) BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    NumPlayers;                                              // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumFrames;                                               // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxPinsPerFrame;                                         // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HYM2[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (PADDING)

	public:
		bool STATIC_TryGetFrameScoreStatic(int32_t* score, const struct FBowlingFrameSet& frameSet, int32_t frameIndex);
		bool TryGetFrameScore(int32_t* score, int32_t Player, int32_t frameIndex);
		void ResetFrames();
		bool IsGameDone();
		int32_t GetGameScore(int32_t Player);
		int32_t STATIC_GetFrameScoreUpTo(bool* complete, const struct FBowlingFrameSet& frameSet, int32_t maxFrameIndex);
		int32_t GetCurrentPlayer();
		int32_t GetCurrentFrameIndex(int32_t Player);
		bool AreFramesDone(int32_t Player);
		void AddRoll(bool* frameDone, int32_t Player, int32_t Roll);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingSpaceInvaderAlien
	 * Size -> 0x0050 (FullSize[0x03A0] - InheritedSize[0x0350])
	 */
	class ABowlingSpaceInvaderAlien : public AScramSceneComponentActor
	{
	public:
		struct FVector_NetQuantize                                 RelativePosition;                                        // 0x0350(0x000C) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    AlienID;                                                 // 0x035C(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Row;                                                     // 0x0360(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    Column;                                                  // 0x0364(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABowlingLane*                                        Lane;                                                    // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ScoreValuePositive;                                      // 0x0370(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ScoreValueNegative;                                      // 0x0374(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MeshComponent;                                           // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             LastUpdatePostion;                                       // 0x0380(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FNPO[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingSpaceInvaderGroup*                           mpGroup;                                                 // 0x0390(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mIsActive;                                               // 0x0398(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TTVD[0x7];                                   // 0x0399(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateAnimation();
		void UncoverAlien();
		void RunScoreFX(class AActor* Ball);
		void RunEndLaneFX();
		void PatternRemover();
		void HideAlien();
		struct FVector GetRelativePosition();
		class ABowlingSpaceInvaderGroup* GetGroup();
		int32_t GetAlienID();
		bool GetActive();
		void AddScore(int32_t ScoreValue, class AActor* Ball);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingSpaceInvaderGroup
	 * Size -> 0x00C8 (FullSize[0x0418] - InheritedSize[0x0350])
	 */
	class ABowlingSpaceInvaderGroup : public AScramSceneComponentActor
	{
	public:
		float                                                      GameStartDelay;                                          // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlienTimeValue;                                          // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AutoRestart;                                             // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GXM7[0x3];                                   // 0x0359(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ResetTime;                                               // 0x035C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxWidth;                                                // 0x0360(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaxHeight;                                               // 0x0364(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InitialSpeed;                                            // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      UpdateTimeStep;                                          // 0x036C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumUpdateTimeStep;                                   // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      AlienRadius;                                             // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      VerticalBuffer;                                          // 0x0378(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LaneHalfWidth;                                           // 0x037C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LaneLength;                                              // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DownLaneMovement;                                        // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       FixedEdges;                                              // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YYF8[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingLane*                                        Lane;                                                    // 0x0390(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              InvaderClass;                                            // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class ABowlingSpaceInvaderAlien*>                   AlienGroup;                                              // 0x03A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<class USoundBase*>                                  MoveSounds;                                              // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class USoundBase*                                          NegativeSound;                                           // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABowlingSpaceInvaderNetHelper*                       mpNetHelper;                                             // 0x03C8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ITHN[0x28];                                  // 0x03D0(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             mGroupOrigin;                                            // 0x03F8(0x000C) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WN4M[0x14];                                  // 0x0404(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetBaseTimeStep(float newBaseTimeStep);
		void NotifyResetAlienGroup();
		bool IsGroupInitialized();
		bool IsGroupClear(const struct FVector& WorldPosition, float clearMargin);
		bool IsGameplayRunning();
		float GetCurrentTimeStep();
		void EndGameplay();
		void DeferredInitComplete();
		void DeferredInit();
		void ChangeTimeStep(float newTimeStep);
		void BeginGameplay();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingSpaceInvaderNetHelper
	 * Size -> 0x0048 (FullSize[0x0390] - InheritedSize[0x0348])
	 */
	class ABowlingSpaceInvaderNetHelper : public AScramActor
	{
	public:
		TArray<class ABowlingSpaceInvaderAlien*>                   mAliens;                                                 // 0x0348(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YUV[0x28];                                  // 0x0358(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          mpNetSoundSave;                                          // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LXU1[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_UpdateAliens(const struct FVector_NetQuantize& newWorldPos, const struct FQuat& newWorldRot, class USoundBase* pSoundAsset);
		void Server_ShutdownAliens();
		void Server_PrepareAliens();
		void NetMulticast_UpdateAliens(const struct FVector_NetQuantize& newWorldPos, const struct FQuat& newWorldRot, class USoundBase* pSoundAsset);
		void NetMulticast_ShutdownAliens();
		void NetMulticast_PrepareAliens();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingSpinKicker
	 * Size -> 0x0018 (FullSize[0x05A0] - InheritedSize[0x0588])
	 */
	class UBowlingSpinKicker : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_TXZN[0x8];                                   // 0x0588(0x0008) Fix Super Size
		float                                                      SpinForceMultiplier;                                     // 0x0590(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AffectBouncing;                                          // 0x0594(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SendOverNetwork;                                         // 0x0595(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AH4G[0xA];                                   // 0x0596(0x000A) MISSED OFFSET (PADDING)

	public:
		void SimpleBeginOverlap(class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingState
	 * Size -> 0x0090 (FullSize[0x00B8] - InheritedSize[0x0028])
	 */
	class UBowlingState : public USportState
	{
	public:
		struct FBowlingScrambleState                               ScrambleState;                                           // 0x0028(0x0080) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FBowlingFrameSet>                            TraditionalFrameSets;                                    // 0x00A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.BowlingUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBowlingUtils : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SwitchHasBowlingAuthority(class UObject* WorldContextObject, EBowlingAuthority* Branch);
		bool STATIC_ObjectHasBowlingAuthority(class UObject* Object);
		bool STATIC_HasBowlingAuthority(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.CancelOculusMatchmakingCallbackProxy
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UCancelOculusMatchmakingCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KB0E[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		class UCancelOculusMatchmakingCallbackProxy* STATIC_CancelOculusMatchmaking();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DestroyOculusSessionCallbackProxy
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UDestroyOculusSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVFA[0x28];                                  // 0x0048(0x0028) MISSED OFFSET (PADDING)

	public:
		class UDestroyOculusSessionCallbackProxy* STATIC_DestroyOculusSession(class UObject* WorldContextObject, class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballAIAnimInstance
	 * Size -> 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
	 */
	class UDodgeballAIAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_VG8O[0x8];                                   // 0x0358(0x0008) Fix Super Size

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballAvatar
	 * Size -> 0x0000 (FullSize[0x03D0] - InheritedSize[0x03D0])
	 */
	class ADodgeballAvatar : public AScramAvatar
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballBall
	 * Size -> 0x00E0 (FullSize[0x0C00] - InheritedSize[0x0B20])
	 */
	class ADodgeballBall : public AScramBall
	{
	public:
		unsigned char                                              UnknownData_D0GW[0xE0];                                  // 0x0B20(0x00E0) MISSED OFFSET (PADDING)

	public:
		void OnShotChanged();
		struct FDodgeballShot GetShot();
		struct FDodgeballBallProperties GetDodgeballBallProperties();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballCaptainAIAnimInstance
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UDodgeballCaptainAIAnimInstance : public UDodgeballAIAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballGlobalDataAsset
	 * Size -> 0x0258 (FullSize[0x0288] - InheritedSize[0x0030])
	 */
	class UDodgeballGlobalDataAsset : public UDataAsset
	{
	public:
		struct FDodgeballGlobalData                                Data;                                                    // 0x0030(0x0258) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballGlove
	 * Size -> 0x0050 (FullSize[0x0B30] - InheritedSize[0x0AE0])
	 */
	class ADodgeballGlove : public AThrowingGlove
	{
	public:
		class UCurveFloat*                                         ThrowAdjustmentVsAngle;                                  // 0x0AE0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ThrowAdjustmentSpeed;                                    // 0x0AE8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSpeedToAdjustThrow;                                   // 0x0AF0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8L0X[0x4];                                   // 0x0AF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         GrabRadiusVsSpeed;                                       // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GrabRadiusFromHand;                                      // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             PointForward;                                            // 0x0B04(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PointingRadiusPadding;                                   // 0x0B10(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PointingHysteresisMargin;                                // 0x0B14(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAngle                                              PointingLookAtAngle;                                     // 0x0B18(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      ArmLengthForPointing;                                    // 0x0B1C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramDodgeballPawnAI*                               mpPointedAtAI;                                           // 0x0B20(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_A8XS[0x8];                                   // 0x0B28(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlayHaptic(class UHapticFeedbackEffect_Base* haptic, float Scale);
		void ItemThrown(class AActor* Item, const struct FVector& Location, float Speed);
		void ItemPassed(class AActor* Item, const struct FVector& Location);
		void ItemCaught(class AActor* Item, const struct FVector& Location, float Speed);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballInstrument
	 * Size -> 0x0010 (FullSize[0x0D40] - InheritedSize[0x0D30])
	 */
	class ADodgeballInstrument : public AScramInstrument
	{
	public:
		class UCurveFloat*                                         ThrowAdjustmentVsAngle;                                  // 0x0D30(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JUTV[0x8];                                   // 0x0D38(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.DodgeballPawnAIAnimInstance
	 * Size -> 0x0000 (FullSize[0x0360] - InheritedSize[0x0360])
	 */
	class UDodgeballPawnAIAnimInstance : public UDodgeballAIAnimInstance
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramMeshShadow
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	class UScramMeshShadow : public UActorComponent
	{
	public:
		class FName                                                ShadowGroup;                                             // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UpdateInBeginPlay;                                       // 0x00F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UpdateEveryFrame;                                        // 0x00F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EM1G[0x6];                                   // 0x00FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramMeshShadowSettings*                            mpSettings;                                              // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedMesh*                                      mpInstancedMesh;                                         // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		float GetShadowSample();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.FanMeshShadow
	 * Size -> 0x0010 (FullSize[0x0120] - InheritedSize[0x0110])
	 */
	class UFanMeshShadow : public UScramMeshShadow
	{
	public:
		int32_t                                                    NumColors;                                               // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HatUVSplit;                                              // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X6TJ[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		float GetInstancedMeshFloatValue(float shadowSample);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.FieldingPlayerManager
	 * Size -> 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
	 */
	class AFieldingPlayerManager : public AScramActor
	{
	public:
		struct FMinMaxFloat                                        TimeScalesPerZone[0x4];                                  // 0x0348(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxApex;                                                 // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        FieldingHeightRange;                                     // 0x036C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FieldingWidthMinimum;                                    // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTimeScale(EVerticalFieldZone zone, const struct FMinMaxFloat& TimeScale);
		void OnBallInPlay(class ABaseballBall* Ball, EVerticalFieldZone zone);
		struct FMinMaxFloat GetTimeScale(EVerticalFieldZone zone);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.FlyTextLabel
	 * Size -> 0x0058 (FullSize[0x03A0] - InheritedSize[0x0348])
	 */
	class AFlyTextLabel : public AScramActor
	{
	public:
		float                                                      LiftSpeed;                                               // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SizeScale;                                               // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         FlyTextCurve;                                            // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ScaleVsDistanceCurve;                                    // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextRenderComponent*                                TextRenderComponent;                                     // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  PositiveMaterial;                                        // 0x0368(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  NegativeMaterial;                                        // 0x0370(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  BonusMaterial;                                           // 0x0378(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WMMZ[0x20];                                  // 0x0380(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetText(const class FText& Text);
		void SetScore(int32_t score, bool bonus, const class FName& combineTag);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.GameInviteUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGameInviteUtils : public UObject
	{
	public:
		void STATIC_GetFriends(const class FScriptDelegate& Event);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.HoopsLaneIndicator
	 * Size -> 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
	 */
	class UHoopsLaneIndicator : public UScramSceneComponent
	{
	public:
		float                                                      LightInterDelay;                                         // 0x0240(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_8DS6[0x4];                                   // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  IndicatorOnMaterial;                                     // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  IndicatorOffMaterial;                                    // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USoundBase*                                          AudioFeedback;                                           // 0x0258(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SoundVolume;                                             // 0x0260(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XZEQ[0x4];                                   // 0x0264(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingLaneFlipper*                                 mpFlipper;                                               // 0x0268(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        mLightArray;                                             // 0x0270(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_63JH[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		void StopIndicator();
		void StartIndicator();
		void SetFlipper(class ABowlingLaneFlipper* Flipper);
		void ProgressIndicator();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.InstancedFanColorRandomizer
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class UInstancedFanColorRandomizer : public UActorComponent
	{
	public:
		int32_t                                                    NumColors;                                               // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HatUVSplit;                                              // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultShadowValue;                                      // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerFrameUpdate;                                          // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FJO[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                mpStaticMesh;                                            // 0x0100(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UInstancedMesh*                                      mpInstancedMesh;                                         // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScramMeshShadow*                                    mpMeshShadow;                                            // 0x0110(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B66I[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.InstancedMesh
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	class UInstancedMesh : public UActorComponent
	{
	public:
		bool                                                       DoInstance;                                              // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SOGA[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                GroupTag;                                                // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             GetAndSetInstanceFloatValue;                             // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       SetInstanceFloatValueOnBeginPlay;                        // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MDMR[0x3];                                   // 0x0111(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InstanceFloatValue;                                      // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WR7M[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		void UnregisterInstance();
		void SetInstanceFloatValue(float FloatValue);
		void RegisterInstance();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.InstancedMeshManager
	 * Size -> 0x0050 (FullSize[0x0378] - InheritedSize[0x0328])
	 */
	class AInstancedMeshManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_8050[0x50];                                  // 0x0328(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.InviteFriendCallbackProxy
	 * Size -> 0x0078 (FullSize[0x00A0] - InheritedSize[0x0028])
	 */
	class UInviteFriendCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G4U1[0x58];                                  // 0x0048(0x0058) MISSED OFFSET (PADDING)

	public:
		class UInviteFriendCallbackProxy* STATIC_InviteFriend(class APlayerController* PlayerController, const struct FScramFriend& invitedFriend);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.JoinOculusSessionCallbackProxy
	 * Size -> 0x00F8 (FullSize[0x0120] - InheritedSize[0x0028])
	 */
	class UJoinOculusSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYA9[0xD8];                                  // 0x0048(0x00D8) MISSED OFFSET (PADDING)

	public:
		class UJoinOculusSessionCallbackProxy* STATIC_JoinOculusSession(class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.MenuInstrument
	 * Size -> 0x00A0 (FullSize[0x0DD0] - InheritedSize[0x0D30])
	 */
	class AMenuInstrument : public AScramInstrument
	{
	public:
		float                                                      ActivateTime;                                            // 0x0D30(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DeactivateTime;                                          // 0x0D34(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             BaseOffsetFromPivot;                                     // 0x0D38(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3A0J[0x4];                                   // 0x0D44(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        ScaleCurve;                                              // 0x0D48(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                LaserBeam;                                               // 0x0D50(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     LaserRoot;                                               // 0x0D58(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                LaserDot;                                                // 0x0D60(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              DefaultColor;                                            // 0x0D68(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FColor                                              PulseColor;                                              // 0x0D6C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PulseSpeed;                                              // 0x0D70(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DotScaleDefault;                                         // 0x0D74(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PulseDotScaleRadius;                                     // 0x0D78(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLaserPointerLength;                               // 0x0D7C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DefaultLaserDotDistance;                                 // 0x0D80(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DotHitPointOffset;                                       // 0x0D84(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RaycastDistance;                                         // 0x0D88(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScaleConversion;                                         // 0x0D8C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsActive;                                                // 0x0D90(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TT5U[0x3];                                   // 0x0D91(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        DotDistanceThreshold;                                    // 0x0D94(0x0008) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DotSmoothTime;                                           // 0x0D9C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScramBoxInteractableComponent*                      CurrentInteractable;                                     // 0x0DA0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       useMenuPointer;                                          // 0x0DA8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D1TC[0x27];                                  // 0x0DA9(0x0027) MISSED OFFSET (PADDING)

	public:
		void TryMakeActiveMenuInstrument();
		void SetPointerMenuOption(bool useMenuPointer);
		void SetLaserPointerVisibility(bool IsVisible);
		void OnNotifyInputRelease();
		void OnNotifyInputPress();
		void OnChangePointerType();
		void Initialize();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.MovingLaneAssist
	 * Size -> 0x0018 (FullSize[0x06D0] - InheritedSize[0x06B8])
	 */
	class UMovingLaneAssist : public UBowlingLaneSpline
	{
	public:
		unsigned char                                              UnknownData_HR97[0x8];                                   // 0x06B8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_I8VC[0x10];                                  // 0x06C0(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.MusicManager
	 * Size -> 0x0030 (FullSize[0x0380] - InheritedSize[0x0350])
	 */
	class AMusicManager : public AScramSceneComponentActor
	{
	public:
		class UAudioComponent*                                     TrackA;                                                  // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     TrackB;                                                  // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAudioComponent*                                     mpIncomingTrack;                                         // 0x0360(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAudioComponent*                                     mpOutgoingTrack;                                         // 0x0368(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PH64[0x10];                                  // 0x0370(0x0010) MISSED OFFSET (PADDING)

	public:
		void STATIC_StopMusic(float FadeTime);
		void Stop(float FadeTime);
		void STATIC_PlayMusicEntry(const class FName& EntryName, float FadeTime);
		void STATIC_PlayMusic(class USoundBase* Sound, float StartTime, float Volume, float FadeTime);
		void PlayEntry(const class FName& EntryName, float FadeTime);
		void Play(class USoundBase* Sound, float StartTime, float Volume, float FadeTime);
		bool IsPlaying(class USoundBase* Sound);
		bool STATIC_IsMusicPlaying(class USoundBase* Sound);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.NetworkMotionStateManager
	 * Size -> 0x0078 (FullSize[0x03A0] - InheritedSize[0x0328])
	 */
	class ANetworkMotionStateManager : public AActor
	{
	public:
		TMap<class AScramPrimitiveActor*, struct FManagedNetworkMotionState> mSentStates;                                             // 0x0328(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FManagedNetworkMotionState>                  mTryStates;                                              // 0x0378(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FNetworkMotionState>                         mReplicatedStates;                                       // 0x0388(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_547D[0x8];                                   // 0x0398(0x0008) MISSED OFFSET (PADDING)

	public:
		void Server_ApplyReplicatedStates(TArray<struct FNetworkMotionState> States);
		void OnRep_ReplicatedStates();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.PitchingAvatar
	 * Size -> 0x0030 (FullSize[0x0410] - InheritedSize[0x03E0])
	 */
	class APitchingAvatar : public ABaseballAvatar
	{
	public:
		unsigned char                                              UnknownData_PVHT[0x30];                                  // 0x03E0(0x0030) MISSED OFFSET (PADDING)

	public:
		void OnDrop(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.PitchingAvatarAnimInstance
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UPitchingAvatarAnimInstance : public UScramAvatarAnimInstance
	{
	public:
		EPitchingAvatarAnimState                                   DesiredState;                                            // 0x0440(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0441(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G70A[0xE];                                   // 0x0442(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.PitchingPropInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPitchingPropInterface : public UInterface
	{
	public:
		void SetBattingPlayer(class AActor* batterActor);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.PlayByPlay
	 * Size -> 0x0068 (FullSize[0x0390] - InheritedSize[0x0328])
	 */
	class APlayByPlay : public AActor
	{
	public:
		unsigned char                                              UnknownData_FAUW[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     mpPlayingAudio;                                          // 0x0338(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SR8N[0x10];                                  // 0x0340(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAudioComponent*>                             mpAudioComponents;                                       // 0x0350(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TKI7[0x30];                                  // 0x0360(0x0030) MISSED OFFSET (PADDING)

	public:
		void NetMulticast_PlayByPlayEvent(int32_t eventIndex, class AActor* Player);
		bool STATIC_IsQueuedOrPlaying(class UObject* WorldContextObject);
		void CultureChanged();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.PlayByPlayBaseball
	 * Size -> 0x0018 (FullSize[0x03A8] - InheritedSize[0x0390])
	 */
	class APlayByPlayBaseball : public APlayByPlay
	{
	public:
		class UDataTable*                                          PlayByPlays;                                             // 0x0390(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I7UL[0x10];                                  // 0x0398(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void STATIC_BatChange(EBaseballInstrumentType newBatType);
		void STATIC_BallChange(EBaseballBallType newBallType);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.PlayByPlayTennis
	 * Size -> 0x0008 (FullSize[0x0398] - InheritedSize[0x0390])
	 */
	class APlayByPlayTennis : public APlayByPlay
	{
	public:
		class UDataTable*                                          PlayByPlays;                                             // 0x0390(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SendPlayByPlayEvent(ETennisPlayByPlayEvent playByPlayEvent, class AActor* Player);
		void STATIC_RacquetChange(class AActor* Player, const struct FTennisInstrumentProperties& instrumentProps);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramActorFollower
	 * Size -> 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
	 */
	class AScramActorFollower : public AScramActor
	{
	public:
		class AActor*                                              ActorToFollow;                                           // 0x0348(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RotateToVelocity;                                        // 0x0350(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FGBU[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramActorInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramActorInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBallAnimInstance
	 * Size -> 0x0048 (FullSize[0x03A0] - InheritedSize[0x0358])
	 */
	class UScramBallAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_UFXQ[0x8];                                   // 0x0358(0x0008) Fix Super Size
		struct FVector                                             LinearVelocity;                                          // 0x0360(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocity;                                         // 0x036C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasBounced;                                              // 0x0378(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRWU[0x7];                                   // 0x0379(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              mpOwningActor;                                           // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              mpSkeleton;                                              // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       OwnerIsValid;                                            // 0x0390(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_PQZE[0xF];                                   // 0x0391(0x000F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBallHitter
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramBallHitter : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBallManager
	 * Size -> 0x0028 (FullSize[0x0350] - InheritedSize[0x0328])
	 */
	class AScramBallManager : public AActor
	{
	public:
		int32_t                                                    maxBalls;                                                // 0x0328(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CYUN[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AScramBall*>                                  mBalls;                                                  // 0x0330(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class AScramBallTrigger*>                           mBallTriggers;                                           // 0x0340(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void STATIC_SetMaxBalls(int32_t maxBalls);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseAI
	 * Size -> 0x0020 (FullSize[0x0368] - InheritedSize[0x0348])
	 */
	class AScramBaseAI : public AScramActor
	{
	public:
		float                                                      HeadTrackTime;                                           // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNEG[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SpawnSound;                                              // 0x0350(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     SpawnParticle;                                           // 0x0358(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HWK[0x8];                                   // 0x0360(0x0008) MISSED OFFSET (PADDING)

	public:
		void PlaySpawnAnimation();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseAIAnimNotify
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UScramBaseAIAnimNotify : public UAnimNotify
	{
	public:
		class FName                                                Socket;                                                  // 0x0038(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseAIAnimNotifyState
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UScramBaseAIAnimNotifyState : public UAnimNotifyState
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballAIAnimNotify
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UScramBaseballAIAnimNotify : public UScramBaseAIAnimNotify
	{
	public:
		EBaseballAIAnimNotify                                      NotifyType;                                              // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARXG[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballAIAnimNotifyState
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UScramBaseballAIAnimNotifyState : public UScramBaseAIAnimNotifyState
	{
	public:
		EBaseballAIAnimNotify                                      NotifyType;                                              // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PG28[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballBatterAI
	 * Size -> 0x0B10 (FullSize[0x0E78] - InheritedSize[0x0368])
	 */
	class AScramBaseballBatterAI : public AScramBaseAI
	{
	public:
		struct FBaseballStrikeZoneAreaValues                       SwingChance;                                             // 0x0368(0x0014) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBaseballStrikeZoneAreaValues                       ContactChance;                                           // 0x037C(0x0014) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ContactChancePitchSpeedMod;                              // 0x0390(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         ContactChancePitchSpinMod;                               // 0x0398(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResultMediumSpeedMultiplier;                             // 0x03A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ResultSlowSpeedMultiplier;                               // 0x03A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       WaitAfterSwings;                                         // 0x03A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X46Y[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBaseballResultRegionChances                        ResultRegionChancesUL;                                   // 0x03AC(0x001C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBaseballResultRegionChances                        ResultRegionChancesUR;                                   // 0x03C8(0x001C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBaseballResultRegionChances                        ResultRegionChancesLL;                                   // 0x03E4(0x001C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBaseballResultRegionChances                        ResultRegionChancesLR;                                   // 0x0400(0x001C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FBaseballResultRegionChances                        ResultRegionChancesBALL;                                 // 0x041C(0x001C) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        LeftFieldAngles;                                         // 0x0438(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        CenterFieldAngles;                                       // 0x0440(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxAngle                                        RightFieldAngles;                                        // 0x0448(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        GroundBallAngles;                                        // 0x0450(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        LineDriveAngles;                                         // 0x0458(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        SweetSpotAngles;                                         // 0x0460(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        PopFlyAngles;                                            // 0x0468(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        SpeedRange;                                              // 0x0470(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        CriticalFractionRange;                                   // 0x0478(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      SwingHitTime;                                            // 0x0480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        FreebieHitDelay;                                         // 0x0484(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T2S1[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ContactChanceVsEquipment;                                // 0x0490(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          VerticalResultVsBall;                                    // 0x0498(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UseFastLoop;                                             // 0x04A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y9NK[0x7];                                   // 0x04A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimationAsset*                                     FastLoopIdle;                                            // 0x04A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimationAsset*                                     FastLoopSwing;                                           // 0x04B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABaseballInstrument*                                 Bat;                                                     // 0x04B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class ABaseballBall*                                       mpBall;                                                  // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6XZX[0x8];                                   // 0x04C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              mpSkeletalMesh;                                          // 0x04D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseballBatterAIAnimInstance*                       mpAnimInstance;                                          // 0x04D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4089[0x988];                                 // 0x04E0(0x0988) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ABaseballBall*>                               mSwungAtBalls;                                           // 0x0E68(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void PlayBatSound(class ABaseballBall* Ball, float BallSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballCatcherAI
	 * Size -> 0x01C8 (FullSize[0x0530] - InheritedSize[0x0368])
	 */
	class AScramBaseballCatcherAI : public AScramBaseAI
	{
	public:
		float                                                      CatchRadius;                                             // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GloveCatchTime;                                          // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostCatchGloveDelay;                                     // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostCatchDelay;                                          // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GloveRecenterTime;                                       // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U9M[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                HandJoint;                                               // 0x0380(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                GloveMeshComponent;                                      // 0x0390(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                BallMeshComponent;                                       // 0x0398(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     CatchPlaneRoot;                                          // 0x03A0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     ThrowPoint;                                              // 0x03A8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                MittArrows;                                              // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MittArrowUpParameter;                                    // 0x03B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MittArrowDownParameter;                                  // 0x03C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MittArrowLeftParameter;                                  // 0x03C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MittArrowRightParameter;                                 // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScramTrajectoryInfluencerBaseball*                  GloveInfluencer;                                         // 0x03D8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        ThrowFlightTime;                                         // 0x03E0(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        HorizontalVarianceRange;                                 // 0x03E8(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        VerticalVarianceRange;                                   // 0x03F0(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        DepthVarianceRange;                                      // 0x03F8(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		ECatcherGloveMode                                          GloveModes[0x3];                                         // 0x0400(0x0003) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OR0I[0x1];                                   // 0x0403(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DriftMarginHorizontal;                                   // 0x0404(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftMarginTop;                                          // 0x0408(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftMarginBottom;                                       // 0x040C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftFrequencyHorizontal;                                // 0x0410(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftFrequencyVertical;                                  // 0x0414(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftStrikeTimeScale;                                    // 0x0418(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftBallTimeScale;                                      // 0x041C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DriftSmoothTime;                                         // 0x0420(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StickDrivenSmoothTime;                                   // 0x0424(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StickDrivenRecenterDelay;                                // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScriptedGloveLeftRightFraction;                          // 0x042C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScriptedGloveUpDownFraction;                             // 0x0430(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ScriptedSmoothTime;                                      // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialParameterCollection*                        PitchingTargetParameterCollection;                       // 0x0438(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MaterialParameterGlovePos;                               // 0x0440(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                MaterialParameterShadowSize;                             // 0x0448(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GloveShadowSize;                                         // 0x0450(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_534I[0x4];                                   // 0x0454(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MaterialParameterShadowIntensity;                        // 0x0458(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GloveShadowIntensity;                                    // 0x0460(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZM0C[0x4];                                   // 0x0464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballBall*                                       mpBall;                                                  // 0x0468(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_HQ3O[0x10];                                  // 0x0470(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBaseballCatcherAnimState                                  mNetAnimState;                                           // 0x0480(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EBaseballCatcherThrowSide                                  mNetThrowSide;                                           // 0x0481(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JC7Z[0x6];                                   // 0x0482(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseballCatcherAIAnimInstance*                      mpAnimInstance;                                          // 0x0488(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0Q1X[0x88];                                  // 0x0490(0x0088) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mDriftSignY;                                             // 0x0518(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      mDriftSignZ;                                             // 0x051C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_M2U8[0x8];                                   // 0x0520(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialParameterCollectionInstance*                mpPitchingTargetMaterialParameters;                      // 0x0528(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetState(ECatcherAIState newState);
		void SetGloveMode(ECatcherGloveMode gloveMode, EScramSkill Skill);
		void OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallDropped(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallCaught(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		ECatcherGloveMode GetGloveMode(class AScramSportManagerBaseball* pBaseball);
		void BallCaught(class AActor* Ball, const struct FVector& Position, EBaseballBallType BallType, bool Imbued);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballFielderAI
	 * Size -> 0x0188 (FullSize[0x04F0] - InheritedSize[0x0368])
	 */
	class AScramBaseballFielderAI : public AScramBaseAI
	{
	public:
		float                                                      MultiplayerMoveSpeed;                                    // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchRadius;                                             // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchStopRunningRadius;                                  // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchHeight;                                             // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchPrepTime;                                           // 0x0378(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchPauseTime;                                          // 0x037C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchRetireOthersTime;                                   // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CatchRetireOthersDistance;                               // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        PauseBeforeReturnTime;                                   // 0x0388(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      FieldRange;                                              // 0x0390(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSteeringParameters                                 InterceptingSteeringParameters;                          // 0x0394(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      InterceptingSpeedPercentageIncrease;                     // 0x03AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InterceptingSpeedMax;                                    // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FSteeringParameters                                 FieldingSteeringParameters;                              // 0x03B4(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSteeringParameters                                 MultiplayerInterceptingSteeringParameters;               // 0x03CC(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSteeringParameters                                 ReturningSteeringParameters;                             // 0x03E4(0x0018) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      TurnTime;                                                // 0x03FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinRunSpeed;                                             // 0x0400(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LookUpTime;                                              // 0x0404(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DropChancePercentageVsMovement;                          // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         DropChancePercentageVsSpeed;                             // 0x0410(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DropChanceMax;                                           // 0x0418(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DropBallSpeed;                                           // 0x041C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OutfieldMovementScale;                                   // 0x0420(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        OutfieldMovementDistance;                                // 0x0424(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       AlwaysDropBall;                                          // 0x042C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GWGQ[0x3];                                   // 0x042D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BatterRunAdvantageForNoFumble;                           // 0x0430(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugMe;                                                 // 0x0434(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       IsOutfielder;                                            // 0x0435(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SK32[0x2];                                   // 0x0436(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxAngle                                        OutfieldMovementRange;                                   // 0x0438(0x0008) BlueprintVisible, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5S02[0x10];                                  // 0x0440(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       mHasMoveTarget;                                          // 0x0450(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C0F9[0x3];                                   // 0x0451(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector_NetQuantize10                               mMoveTarget;                                             // 0x0454(0x000C) Net, NoDestructor, NativeAccessSpecifierPrivate
		int32_t                                                    mStandStillRefCount;                                     // 0x0460(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EFielderAIState                                            mState;                                                  // 0x0464(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6CN6[0x3];                                   // 0x0465(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mDesiredLookUpAngle;                                     // 0x0468(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mUseFieldingSteeringParams;                              // 0x046C(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_92A8[0x3];                                   // 0x046D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mInterceptingSpeedMultiplier;                            // 0x0470(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RVZ3[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseballFielderAIAnimInstance*                      mpAnimInstance;                                          // 0x0478(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GK6Y[0x40];                                  // 0x0480(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballBall*                                       mpDroppedBall;                                           // 0x04C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ABaseballBall*>                               mIgnoredBalls;                                           // 0x04C8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O20Y[0x18];                                  // 0x04D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnBaseballEvent(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void NetMulticast_SetDesiredAnimState(EBaseballFielderAnimState animState);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballPitcherAI
	 * Size -> 0x0320 (FullSize[0x0688] - InheritedSize[0x0368])
	 */
	class AScramBaseballPitcherAI : public AScramBaseAI
	{
	public:
		class UDataTable*                                          ScrambleMods;                                            // 0x0368(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        DelayBeforePitchTime;                                    // 0x0370(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        HoldTime;                                                // 0x0378(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      BallRegionWidth;                                         // 0x0380(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChanceBallUp;                                            // 0x0384(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChanceBallDown;                                          // 0x0388(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChanceBallLeft;                                          // 0x038C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChanceBallRight;                                         // 0x0390(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             CatchLocation;                                           // 0x0394(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FBowlingThrowParameters                             BowlingThrowParameters;                                  // 0x03A0(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class FName                                                LeftHandBone;                                            // 0x03C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                RightHandBone;                                           // 0x03C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumScrambleBallsToChoose;                                // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       ShowScrambleBalls;                                       // 0x03D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HRSI[0x3];                                   // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAngle                                              HeadTrackPitchClamp;                                     // 0x03D8(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              HeadTrackYawClamp;                                       // 0x03DC(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      PercentageChanceToWinAScrambleBall;                      // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PercentageChanceThatBallIsImbued;                        // 0x03E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PercentageChanceToChooseAScrambleBall;                   // 0x03E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NBF7[0x4];                                   // 0x03EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x03F0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     TargetRoot;                                              // 0x03F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              OverrideBall;                                            // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_34CG[0x10];                                  // 0x0408(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballBall*                                       mpBall;                                                  // 0x0418(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBaseballPitcherAIAnimInstance*                      mpAnimInstance;                                          // 0x0420(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q1SC[0x20];                                  // 0x0428(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMittSpawnInfo>                              mSpawnableBalls;                                         // 0x0448(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y6HA[0x230];                                 // 0x0458(0x0230) MISSED OFFSET (PADDING)

	public:
		void PlayMittSound(class ABaseballBall* Ball, float BallSpeed);
		void GetScrambleBallClass(class UClass** Ball);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBaseballRunnerAI
	 * Size -> 0x0058 (FullSize[0x03C0] - InheritedSize[0x0368])
	 */
	class AScramBaseballRunnerAI : public AScramBaseAI
	{
	public:
		float                                                      MoveSpeed;                                               // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      TurnTime;                                                // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DespawnAnticipationTime;                                 // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DespawnAnimationDuration;                                // 0x0374(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9K94[0x24];                                  // 0x0378(0x0024) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mDestinationBase;                                        // 0x039C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mSnapToDestination;                                      // 0x03A0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8K6X[0xF];                                   // 0x03A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBaseballRunnerAIAnimInstance*                       mpAnimInstance;                                          // 0x03B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZUMQ[0x8];                                   // 0x03B8(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnSpawn();
		void OnDespawn(const struct FVector& Location);
		bool HasReachedHome();
		int32_t GetDestinationBase();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScrambleTarget
	 * Size -> 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
	 */
	class AScrambleTarget : public AScramBallTrigger
	{
	public:
		void GetAiValue(EScrambleTargetAiValue* Value);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBounceLighting
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	class UScramBounceLighting : public UActorComponent
	{
	public:
		class FName                                                LightingGroup;                                           // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                BounceColorParameter;                                    // 0x00F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       UpdateEveryFrame;                                        // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_R6QH[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolateTime;                                         // 0x0104(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMeshComponent*                                      mpMesh;                                                  // 0x0108(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AScramBounceLightingSettings*                        mpSettings;                                              // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_K8LW[0x10];                                  // 0x0118(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TextureSamplerSettings
	 * Size -> 0x0038 (FullSize[0x0360] - InheritedSize[0x0328])
	 */
	class ATextureSamplerSettings : public AActor
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0328(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XCenter;                                                 // 0x0330(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XScale;                                                  // 0x0334(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YCenter;                                                 // 0x0338(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YScale;                                                  // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJWQ[0x20];                                  // 0x0340(0x0020) MISSED OFFSET (PADDING)

	public:
		struct FColor SampleTexture(const struct FVector& worldPos, const struct FColor& DefaultColor);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBounceLightingSettings
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class AScramBounceLightingSettings : public ATextureSamplerSettings
	{
	public:
		class FName                                                LightingGroup;                                           // 0x0360(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBowlingAI
	 * Size -> 0x01D8 (FullSize[0x0540] - InheritedSize[0x0368])
	 */
	class AScramBowlingAI : public AScramBaseAI
	{
	public:
		float                                                      MovingLaneWidthRange;                                    // 0x0368(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoopsLaneTimeEpsilon;                                    // 0x036C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HoopsLaneTimeCorrection;                                 // 0x0370(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBowlingThrowParameters                             ThrowParameters;                                         // 0x0374(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      LeftRightThrowOffset;                                    // 0x0394(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MoveAndTurnTime;                                         // 0x0398(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MinBallCountToChooseFrom;                                // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             ChooseOffset;                                            // 0x03A0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RollOffset;                                              // 0x03AC(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PickUpTime;                                              // 0x03B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EBowlingBallType                                           DebugBallType;                                           // 0x03BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EDifficulty                                                Difficulty;                                              // 0x03BD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_88SJ[0x2];                                   // 0x03BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMinMaxFloat                                        RateOfThrow;                                             // 0x03C0(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		class UCurveFloat*                                         RateOfThrowMatchTimeLeftScalar;                          // 0x03C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UCurveFloat*                                         RateOfThrowScoreDifferentialScalar;                      // 0x03D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      GetABallPhaseMaxTime;                                    // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinTimeToDetectGutterball;                               // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxTimeToDetectStrike;                                   // 0x03E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChanceToChooseGreatBall;                                 // 0x03E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ChanceToChooseBadBall;                                   // 0x03E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EstimatedThrowEventTime;                                 // 0x03EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxTimeToWaitForThrowWindow;                             // 0x03F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_N6AZ[0x4];                                   // 0x03F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              SkeletalMesh;                                            // 0x03F8(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JE4D[0x8];                                   // 0x0400(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABowlingBall*                                        mpBall;                                                  // 0x0408(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBowlingAIAnimInstance*                              mpAnimInstance;                                          // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ABowlingPin*>                                 mPins;                                                   // 0x0418(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BN2I[0x118];                                 // 0x0428(0x0118) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBowlingAIAnimNotify
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UScramBowlingAIAnimNotify : public UScramBaseAIAnimNotify
	{
	public:
		EBowlingAIAnimNotify                                       NotifyType;                                              // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GE4G[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBowlingAIAnimNotifyState
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UScramBowlingAIAnimNotifyState : public UScramBaseAIAnimNotifyState
	{
	public:
		EBowlingAIAnimNotify                                       NotifyType;                                              // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RA3L[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramBoxInteractableComponent
	 * Size -> 0x0048 (FullSize[0x05D0] - InheritedSize[0x0588])
	 */
	class UScramBoxInteractableComponent : public UBoxComponent
	{
	public:
		class FScriptMulticastDelegate                             OnStartPointingAt;                                       // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStopPointingAt;                                        // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActivate;                                              // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDeactivate;                                            // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EIXP[0x8];                                   // 0x05C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramCableComponent
	 * Size -> 0x0000 (FullSize[0x0610] - InheritedSize[0x0610])
	 */
	class UScramCableComponent : public UCableComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramCameraComponent
	 * Size -> 0x0010 (FullSize[0x07A0] - InheritedSize[0x0790])
	 */
	class UScramCameraComponent : public UCameraComponent
	{
	public:
		unsigned char                                              UnknownData_YB1X[0x10];                                  // 0x0790(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramCameraCover
	 * Size -> 0x0048 (FullSize[0x0398] - InheritedSize[0x0350])
	 */
	class AScramCameraCover : public AScramSceneComponentActor
	{
	public:
		class UStaticMeshComponent*                                FlashMesh;                                               // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                FadeOutMesh;                                             // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TrophyVignette;                                          // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                GameInviteVignette;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCoverVignette>                              mVignetteQueue;                                          // 0x0370(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L4JA[0x18];                                  // 0x0380(0x0018) MISSED OFFSET (PADDING)

	public:
		void STATIC_EnqueueVignette(const struct FCoverVignette& vignette);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryInfluencerActor
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class AScramTrajectoryInfluencerActor : public AScramSceneComponentActor
	{
	public:
		unsigned char                                              UnknownData_QKQ2[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Order;                                                   // 0x0358(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumValidScale;                                       // 0x035C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       InfluencerEnabled;                                       // 0x0360(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YJEQ[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetInfluencerEnabled(bool Enabled);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramCourt
	 * Size -> 0x0048 (FullSize[0x03B0] - InheritedSize[0x0368])
	 */
	class AScramCourt : public AScramTrajectoryInfluencerActor
	{
	public:
		class UScramTrajectoryInfluencerRegion*                    NetClearInfluencer;                                      // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScramTrajectoryInfluencerRegion*                    SinglesInBoundsInfluencerFrontOfNet;                     // 0x0370(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScramTrajectoryInfluencerRegion*                    SinglesInBoundsInfluencerBackOfNet;                      // 0x0378(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScramTrajectoryInfluencerRegion*                    DoublesInBoundsInfluencerFrontOfNet;                     // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UScramTrajectoryInfluencerRegion*                    DoublesInBoundsInfluencerBackOfNet;                      // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UPhysicalMaterial*                                   FloorMaterial;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramCourtMatchType                                       matchType;                                               // 0x0398(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TRWK[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FullCourtLength;                                         // 0x039C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SinglesCourtWidth;                                       // 0x03A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DoublesCourtWidth;                                       // 0x03A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ServiceLineDistance;                                     // 0x03A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayAreaMargin;                                          // 0x03AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void STATIC_SetScramCourtMatchType(class UObject* pWorldContextObject, EScramCourtMatchType matchType);
		EScramCourtMatchType STATIC_GetScramCourtMatchType(class UObject* pWorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramDataSingleton
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UScramDataSingleton : public UObject
	{
	public:
		class UTennisGlobalDataAsset*                              TennisData;                                              // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBaseballGlobalDataAsset*                            BaseballData;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UBowlingGlobalDataAsset*                             BowlingData;                                             // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDodgeballGlobalDataAsset*                           DodgeballData;                                           // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramDodgeballAI
	 * Size -> 0x0010 (FullSize[0x0378] - InheritedSize[0x0368])
	 */
	class AScramDodgeballAI : public AScramBaseAI
	{
	public:
		class UPrimitiveComponent*                                 CollisionComponent;                                      // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WDJV[0x8];                                   // 0x0370(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetTeam2();
		void SetTeam1();
		void SetPositionIndex(int32_t Index);
		EScramDodgeballTeam GetTeam();
		int32_t GetPositionIndex();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramDodgeballAIAnimNotify
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UScramDodgeballAIAnimNotify : public UScramBaseAIAnimNotify
	{
	public:
		EDodgeballAIAnimNotify                                     NotifyType;                                              // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QWMP[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramDodgeballAIAnimNotifyState
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UScramDodgeballAIAnimNotifyState : public UScramBaseAIAnimNotifyState
	{
	public:
		EDodgeballAIAnimNotify                                     NotifyType;                                              // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZBA2[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramDodgeballCaptainAI
	 * Size -> 0x0010 (FullSize[0x0388] - InheritedSize[0x0378])
	 */
	class AScramDodgeballCaptainAI : public AScramDodgeballAI
	{
	public:
		unsigned char                                              UnknownData_WQ4F[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDodgeballCaptainAIAnimInstance*                     mpAnimInstance;                                          // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramDodgeballPawnAI
	 * Size -> 0x00A0 (FullSize[0x0418] - InheritedSize[0x0378])
	 */
	class AScramDodgeballPawnAI : public AScramDodgeballAI
	{
	public:
		float                                                      FetchSpeed;                                              // 0x0378(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        ThrowSpeed;                                              // 0x037C(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        PassSpeed;                                               // 0x0384(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      MinimumPassDelay;                                        // 0x038C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                HandSocket;                                              // 0x0390(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HandSocketOffset;                                        // 0x0398(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        DelayBeforeThrowing;                                     // 0x039C(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      DelayAfterPickup;                                        // 0x03A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DelayAfterThrow;                                         // 0x03A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PassUpContribution;                                      // 0x03AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WanderRadius;                                            // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        WanderTime;                                              // 0x03B4(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      WanderSpeed;                                             // 0x03BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WX3H[0x8];                                   // 0x03C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDodgeballPawnAIAnimInstance*                        mpAnimInstance;                                          // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AScramPrimitiveGrabbable*                            mpGrabbable;                                             // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L3ID[0x40];                                  // 0x03D8(0x0040) MISSED OFFSET (PADDING)

	public:
		void StartGame();
		void SetDelayBeforeThrowing(const struct FMinMaxFloat& delayBeforeThrow);
		void KnockedOut();
		void BallThrown(class AActor* Ball, const struct FVector& Location, float Speed);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEquipmentSet
	 * Size -> 0x0018 (FullSize[0x0A10] - InheritedSize[0x09F8])
	 */
	class AScramEquipmentSet : public AScramPrimitiveGrabbable
	{
	public:
		class UClass*                                              DominantHandEquipment;                                   // 0x09F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              OffHandEquipment;                                        // 0x0A00(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BYBV[0x8];                                   // 0x0A08(0x0008) MISSED OFFSET (PADDING)

	public:
		void PostEquipmentSpawn(class AScramPrimitiveGrabbable* DominantHandSpawnedEquipment, class AScramPrimitiveGrabbable* OffHandSpawnedEquipment);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventBasePayload
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramEventBasePayload : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventObjectPayload
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UScramEventObjectPayload : public UScramEventBasePayload
	{
	public:
		class UObject*                                             ObjectParameter;                                         // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UScramEventObjectPayload* STATIC_CreateObjectPayload(class UObject* WorldContextObject, class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventCollisionPayload
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UScramEventCollisionPayload : public UScramEventBasePayload
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0028(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitLocation;                                             // 0x0030(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HitNormal;                                               // 0x003C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class UScramEventCollisionPayload* STATIC_CreateCollisionPayload(class UObject* WorldContextObject, class AActor* OtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventTennisEventPayload
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UScramEventTennisEventPayload : public UScramEventBasePayload
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisEvent                                               TennisEventType;                                         // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7UKB[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventBaseballEventPayload
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UScramEventBaseballEventPayload : public UScramEventBasePayload
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBaseballEvent                                             BaseballEventType;                                       // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WFZ9[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABaseballBall*                                       Ball;                                                    // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventBowlingEventPayload
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UScramEventBowlingEventPayload : public UScramEventBasePayload
	{
	public:
		int32_t                                                    PlayerIndex;                                             // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBowlingEvent                                              BowlingEventType;                                        // 0x002C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RS7T[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              BallActor;                                               // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramEventManager
	 * Size -> 0x0060 (FullSize[0x0388] - InheritedSize[0x0328])
	 */
	class AScramEventManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_HTK3[0x60];                                  // 0x0328(0x0060) MISSED OFFSET (PADDING)

	public:
		void STATIC_UnbindEventFromObjectScramEvent(EScramEvent ScramEvent, class UObject* WorldContextObject, const class FScriptDelegate& Event);
		void STATIC_UnbindEventFromGlobalScramEvent(EScramEvent ScramEvent, const class FScriptDelegate& Event);
		void STATIC_BroadcastScramEvent(EScramEvent ScramEvent, class UObject* WorldContextObject, class UScramEventBasePayload* Payload, bool replicate);
		void STATIC_BindEventToObjectScramEvent(EScramEvent ScramEvent, class UObject* WorldContextObject, const class FScriptDelegate& Event);
		void STATIC_BindEventToGlobalScramEvent(EScramEvent ScramEvent, const class FScriptDelegate& Event);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGameInstance
	 * Size -> 0x02D0 (FullSize[0x0370] - InheritedSize[0x00A0])
	 */
	class UScramGameInstance : public UGameInstance
	{
	public:
		EScramPlatform                                             EditorPlatform;                                          // 0x00A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDifficulty                                                BaseballFilterAiDifficulty;                              // 0x00A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BaseballFilterScrambleBats;                              // 0x00A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BaseballFilterScrambleBalls;                             // 0x00A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseballFilterInnings;                                   // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BaseballFilterFreebiesEnabled;                           // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_469S[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BaseballFilterStrikeoutCount;                            // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseballFilterWalkCount;                                 // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BaseballFilterFreebieCount;                              // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowClientBeginPlay;                                    // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UZUV[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ApplicationWillEnterBackground;                          // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ApplicationHasEnteredForeground;                         // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ApplicationWillDeactivate;                               // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ApplicationHasReactivated;                               // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ApplicationWillTerminate;                                // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FScramSportPreferences                              mSportPreferences;                                       // 0x0110(0x0003) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSWO[0x5];                                   // 0x0113(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USportState*                                         SavedSportState;                                         // 0x0118(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameInviteMaxPingCount;                                  // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BaseballLocalPlayerIsHomeTeam;                           // 0x0124(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G6BA[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPendingGameInvitesUpdated;                             // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGameInvitePing;                                        // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMatchStart;                                            // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNetworkGameFailure;                                    // 0x0158(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPendingGameFailure;                                    // 0x0168(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      InputFocusRegainDelay;                                   // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LQ13[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      mShelfActors;                                            // 0x0180(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UWorld*                                              mpShelfWorld;                                            // 0x0190(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UScramSaveData*                                      mpSaveData;                                              // 0x0198(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ILAW[0x40];                                  // 0x01A0(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FName, float>                                   mAchievementQueueLocal;                                  // 0x01E0(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<class FName, float>                                   mAchievementQueueOculus;                                 // 0x0230(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AKYZ[0xF0];                                  // 0x0280(0x00F0) MISSED OFFSET (PADDING)

	public:
		void StopGameInvitePings();
		void STATIC_StartOculusAchievementSync(class UObject* WorldContextObject);
		void ShowDebugMessage(const class FString& Message, float LifeTime);
		void SetUseVoiceChat(bool useVoice);
		void STATIC_SetLocalizationCulture(class UObject* WorldContextObject, const class FString& Culture);
		void SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook);
		void STATIC_SaveGameData(class UObject* pWorldContextObject);
		void STATIC_RemoveShelfActor(class AActor* Actor);
		void RefreshGameInvites(const class FScriptDelegate& Event);
		void OnInputFocusReceived();
		void OnInputFocusLost();
		void OnHeadsetReconnected();
		void OnHeadsetDisconnected();
		void OnControllerConnectionChanged(bool IsConnected);
		uint32_t LocalNetworkVersionOverride();
		class UTexture2D* STATIC_LoadSoftRefTexture();
		class UObject* STATIC_LoadSoftObject();
		class UClass* STATIC_LoadSoftClassActor();
		void STATIC_LoadGameData(class UObject* pWorldContextObject);
		bool STATIC_LoadArrayFromSoftTextures(TArray<class UTexture2D*>* textureList);
		bool STATIC_IsHeadsetConnected(class UObject* WorldContextObject);
		void InitializePendingGameInvitesComplete(bool wasSuccessful, TArray<struct FScramGameInvite> invites);
		void InitializePendingGameInvites();
		bool STATIC_HasSportStateSaved(class UObject* WorldContextObject);
		bool HasPendingGameInvites();
		bool GetUseVoiceChat();
		class UScramSaveData* STATIC_GetSaveData(class UObject* pWorldContextObject);
		class FString STATIC_GetLocalizationCulture(class UObject* WorldContextObject);
		bool STATIC_DoesUseVoiceChat(class UObject* pWorldContextObject);
		void DismissPendingGameInvite(const struct FScramGameInvite& invite);
		void DismissAllPendingGameInvites();
		void STATIC_ClearSavedSportState(class UObject* WorldContextObject);
		void ClearDebugMessages();
		void BroadcastLocalAvatarLook();
		void BeginListeningForDisconnection();
		void STATIC_AsyncLoadObjects(class UObject* WorldContextObject, const class FScriptDelegate& Delegate);
		void STATIC_AsyncLoadClasses(class UObject* WorldContextObject, const class FScriptDelegate& onSuccessEvent);
		bool STATIC_AreControllersConnected(class UObject* WorldContextObject);
		void STATIC_AddShelfActor(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGameMode
	 * Size -> 0x0050 (FullSize[0x0418] - InheritedSize[0x03C8])
	 */
	class AScramGameMode : public AGameModeBase
	{
	public:
		TArray<class AActor*>                                      SeamlessTravelActors;                                    // 0x03C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVF3[0x30];                                  // 0x03D8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AScramPlayer*>                                mReadyPlayers;                                           // 0x0408(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		bool ServerTravel(const class FString& URL, bool Absolute, bool ShouldSkipGameNotify);
		void ResetMatch();
		struct FScramSportPreferences GetClientSportPreferences();
		void DisallowMultiplayerLogins();
		void ClientSportPreferencesReceived();
		void AllowMatchmakingLogins();
		void AllowFriendLogin(const struct FScramFriend& ScramFriend);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGameState
	 * Size -> 0x00A8 (FullSize[0x0410] - InheritedSize[0x0368])
	 */
	class AScramGameState : public AGameStateBase
	{
	public:
		class FScriptMulticastDelegate                             OnPingStatusChange;                                      // 0x0368(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UClass*                                              activeBallClass;                                         // 0x0378(0x0008) Edit, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramSport                                                Sport;                                                   // 0x0380(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ESKX[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PingSmoothing;                                           // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PingThreshold;                                           // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_93IE[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PauseCapsuleBPClass;                                     // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              TrophyManagerBPClass;                                    // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              MusicManagerClass;                                       // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramPauseCapsule*                                  PauseCapsule;                                            // 0x03A8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class USceneComponent*>                             mPauseHiddenComponents;                                  // 0x03B0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        mPauseHiddenInstancedComponents;                         // 0x03C0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JUJT[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             mAllHiddenComponents;                                    // 0x03D8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        mAllHiddenInstancedComponents;                           // 0x03E8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_PUOK[0x18];                                  // 0x03F8(0x0018) MISSED OFFSET (PADDING)

	public:
		void StartMatch();
		void ShowPausedActors();
		void ShowAllActors();
		void STATIC_SetActiveBallClass(class UObject* pWorldContextObject, class UClass* activeBallClass);
		void OnPauseCapsuleRemoved();
		void OnPauseCapsuleAdded();
		void STATIC_OnActorSpawned(class AActor* Actor);
		bool STATIC_IsLocalGameStatePaused(class UObject* pWorldContextObject);
		bool STATIC_IsGameStatePaused(class UObject* pWorldContextObject);
		bool STATIC_IsActorHidden(class AActor* Actor);
		void HidePausedActors();
		void HideAllActors();
		class AScramSportManagerBase* STATIC_GetSportManager(class UObject* pWorldContextObject);
		EScramSport STATIC_GetSport(class UObject* pWorldContextObject);
		float STATIC_GetSmoothedPingVariance(class UObject* pWorldContextObject);
		float STATIC_GetSmoothedPingTime(class UObject* pWorldContextObject);
		float STATIC_GetScramServerWorldTime(class UObject* pWorldContextObject);
		float STATIC_GetPingTime(class UObject* pWorldContextObject);
		struct FTransform STATIC_GetPauseCapsuleTransform(class UObject* pWorldContextObject);
		class UClass* STATIC_GetActiveBallClass(class UObject* pWorldContextObject);
		void BlueprintCall_OnMultiplayerGameResume(bool isCalledByHost, EGamePauseReason reason);
		void BlueprintCall_OnMultiplayerGamePaused(bool isCalledByHost, EGamePauseReason reason);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGrabbable
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramGrabbable : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGrabber
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramGrabber : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramGripSet
	 * Size -> 0x0020 (FullSize[0x0370] - InheritedSize[0x0350])
	 */
	class AScramGripSet : public AScramSceneComponentActor
	{
	public:
		class USceneComponent*                                     ForehandGrip;                                            // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     BackhandGrip;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     OverheadGrip;                                            // 0x0360(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     UnderhandGrip;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramHandshakeActor
	 * Size -> 0x0000 (FullSize[0x0348] - InheritedSize[0x0348])
	 */
	class AScramHandshakeActor : public AScramActor
	{
	public:
		void ServerReady();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramHitManager
	 * Size -> 0x0078 (FullSize[0x03A0] - InheritedSize[0x0328])
	 */
	class AScramHitManager : public AActor
	{
	public:
		float                                                      MaxBallPhysXSpeed;                                       // 0x0328(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UXWX[0x74];                                  // 0x032C(0x0074) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramHittableActor
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramHittableActor : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramHullVisibility
	 * Size -> 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
	 */
	class UScramHullVisibility : public UScramSceneComponent
	{
	public:
		class UStaticMesh*                                         CullMesh;                                                // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DebugRenderOffset;                                       // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Verts;                                                   // 0x0250(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       VisualizeClipping;                                       // 0x0260(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YHQ[0x1F];                                  // 0x0261(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramInstrumentAnimInstance
	 * Size -> 0x0068 (FullSize[0x03C0] - InheritedSize[0x0358])
	 */
	class UScramInstrumentAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_6ITW[0x4];                                   // 0x0358(0x0004) Fix Super Size
		struct FVector                                             MovementDirection;                                       // 0x035C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstrumentSpeed;                                         // 0x0368(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InstrumentMaxSpeed;                                      // 0x036C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PhysicsBlendWeight;                                      // 0x0370(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMinMaxFloat                                        PhysicsBlendLimits;                                      // 0x0374(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		float                                                      BlendSmoothingTime;                                      // 0x037C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              mpOwningActor;                                           // 0x0380(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USkeletalMeshComponent*                              mpSkeleton;                                              // 0x0388(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       OwnerIsValid;                                            // 0x0390(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A4A0[0x3];                                   // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WorldToLocalForward;                                     // 0x0394(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             WorldToLocalRight;                                       // 0x03A0(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             WorldToLocalUp;                                          // 0x03AC(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XOZV[0x8];                                   // 0x03B8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramInviteManager
	 * Size -> 0x0090 (FullSize[0x03D8] - InheritedSize[0x0348])
	 */
	class AScramInviteManager : public AScramActor
	{
	public:
		class FScriptMulticastDelegate                             OnShellInviteAccepted;                                   // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYOF[0x80];                                  // 0x0358(0x0080) MISSED OFFSET (PADDING)

	public:
		bool HasAcceptedShellInvite();
		class AScramInviteManager* STATIC_GetInviteManager();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramKeyboard
	 * Size -> 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
	 */
	class AScramKeyboard : public AScramActor
	{
	public:
		class USceneComponent*                                     LeftInteractor;                                          // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class USceneComponent*                                     RightInteractor;                                         // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramLauncher
	 * Size -> 0x0130 (FullSize[0x0480] - InheritedSize[0x0350])
	 */
	class AScramLauncher : public AScramSceneComponentActor
	{
	public:
		class USceneComponent*                                     LaunchPoint;                                             // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     LaunchTarget;                                            // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BallClass;                                               // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ScrambleMods;                                            // 0x0368(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseSpeed;                                                // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E610[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TravelSpeed;                                             // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TravelTime;                                              // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LaunchAngularVelocity;                                   // 0x037C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BounceAngularVelocity;                                   // 0x0388(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpinStrengthCompensation;                                // 0x0394(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramLauncherFiringMode                                   FiringMode;                                              // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableSplineCorrection;                                  // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H955[0x2];                                   // 0x039A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScramTrajectoryRegion                              TargetRegion;                                            // 0x039C(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       InsertBounce;                                            // 0x03EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CounteractDamping;                                       // 0x03ED(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       LaunchChargeShot;                                        // 0x03EE(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WSUB[0x1];                                   // 0x03EF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugSimulationTime;                                     // 0x03F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableTennisAvoidCenter;                                 // 0x03F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceAvoidCenter;                                        // 0x03F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETennisShotType                                            TennisShotType;                                          // 0x03F6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x03F7(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBowlingThrowParameters                             BowlingThrowParameters;                                  // 0x03F8(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       LaunchedBallsShouldHitBallHitters;                       // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsScrambleTarget;                                        // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWSL[0x66];                                  // 0x041A(0x0066) MISSED OFFSET (PADDING)

	public:
		bool TryCalculateTrajectory(struct FScramTrajectory* outTrajectory, const struct FVector& launchOrigin, float horizontalVariance, float verticalVariance);
		void SetScrambleMods(class UDataTable* DataTable);
		void SetMinSpaceBetweenLeftRightMargins(float minSpace);
		class AScramBall* LaunchWithTrajectory(const struct FScramTrajectory& trajectory);
		class AScramBall* Launch(float horizontalVariance, float verticalVariance);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramLookAtActivator
	 * Size -> 0x0068 (FullSize[0x02A0] - InheritedSize[0x0238])
	 */
	class UScramLookAtActivator : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_X1KC[0x4];                                   // 0x0238(0x0004) Fix Super Size
		struct FAngle                                              DeactivationAngle;                                       // 0x023C(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              ActivationAnglePitch;                                    // 0x0240(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              DeactivationAnglePitch;                                  // 0x0244(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      ActivationDelay;                                         // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DeactivationDelay;                                       // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             GlancingAt;                                              // 0x0250(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             GlancingAway;                                            // 0x0260(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             LookingAt;                                               // 0x0270(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             LookingAway;                                             // 0x0280(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1B7V[0x10];                                  // 0x0290(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramMeshShadowSettings
	 * Size -> 0x0008 (FullSize[0x0368] - InheritedSize[0x0360])
	 */
	class AScramMeshShadowSettings : public ATextureSamplerSettings
	{
	public:
		class FName                                                ShadowGroup;                                             // 0x0360(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramNetworkHelperComponent
	 * Size -> 0x0000 (FullSize[0x0240] - InheritedSize[0x0240])
	 */
	class UScramNetworkHelperComponent : public UScramSceneComponent
	{
	public:
		void STATIC_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook);
		void Server_UpdateTennisBallTrajectory(class ATennisBall* pBall, const struct FTennisBallNetworkUpdate& Update);
		void Server_UpdateStickDrivenCatcherGlove(class ABaseballThrowingGlove* pGlove, float leftRight, float upDown);
		void Server_UpdateDodgeballBallTrajectory(class ADodgeballBall* pBall, const struct FScramTrajectory& trajectory, const struct FDodgeballShot& newShot);
		void Server_UpdateBowlingBallTrajectory(class ABowlingBall* pBall, const struct FScramTrajectory& trajectory, const struct FBowlingThrow& newThrow);
		void Server_UpdateBaseballBallTrajectory(class ABaseballBall* pBall, const struct FBaseballNetworkUpdate& Update);
		void Server_StartFollowingTrajectoryWithSlowDown(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow, float TimeScale, float Delay, float Duration, float maxStepDown);
		void Server_StartFollowingTrajectory(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow);
		void Server_SportManagerReady(class AScramSportManagerBase* pSportManager);
		void Server_SpawnPitcherScrambleOptions(class ABaseballMitt* pMitt);
		void Server_SetTennisBallRallyCount(class ATennisBall* pBall, int32_t rallyCount);
		void Server_SetPlayerPreferences(class AScramPlayer* pPlayer, const struct FScramPlayerPreferences& preferences);
		void Server_SetPlayerPausedRemote(class AScramPlayer* pPlayer, EGamePauseReason reason, bool paused);
		void Server_SetFutureBallHit(const struct FFutureBallHit& FutureBallHit);
		void Server_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook);
		void Server_ServeTriggerSpawnBall(class AScramPlayerServeTrigger* pServeTrigger, class UClass* BallClass, const struct FTransform& SpawnTransform);
		void Server_ServeBallSpawned(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall);
		void Server_ServeBallGrabbed(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall);
		void Server_SendPlayByPlayEvent(int32_t eventIndex, class AActor* pPlayer);
		void Server_RequestAvatarLook(class AScramPlayer* pPlayer);
		void Server_RemoteGameDone(class AScramSportManagerBase* pSportManager);
		void Server_RemoteApplicationWillTerminate();
		void Server_RemoteApplicationWillEnterBackground();
		void Server_RemoteApplicationWillDeactivate();
		void Server_RemoteApplicationHasReactivated();
		void Server_RemoteApplicationHasEnteredForeground();
		void Server_ReceiveHeartbeat(uint16_t remotePendingNetGeneration, uint16_t remoteEstablishedNetGeneration);
		void Server_PingHandShake(float clientPingTime);
		void Server_MultiplayerGameResume(bool isCalledByHost, EGamePauseReason reason);
		void Server_MultiplayerGamePause(bool isCalledByHost, EGamePauseReason reason);
		void Server_HandshakeActorReady(class AScramHandshakeActor* pHandshakeActor);
		void Server_GrabberRelease(class AActor* pGrabberActor);
		void Server_GrabberGrab(class AActor* pGrabberActor, class AActor* pGrabbableActor, bool snap);
		void Server_DrawDebugSphere(class AActor* pWorldContextObject, const struct FVector_NetQuantize10& Center, float Radius, int32_t Segments, const struct FColor& Color, float LifeTime);
		void Server_DestroyPrimitive(class AScramPrimitiveActor* pPrimitive, bool playOut, float Delay);
		void Server_ClearTennisBallTrajectoryOwnership(class ATennisBall* pBall);
		void Server_ClearPausedTrajectory(class AScramPrimitiveActor* pPrimitive);
		void Server_CallTennisDoubleBounce(class AScramSportManagerTennis* pTennisManager, class ATennisBall* pTrackedBall);
		void Server_BroadcastScramEvent_Tennis(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, ETennisEvent TennisEvent);
		void Server_BroadcastScramEvent_Object(EScramEvent ScramEvent, class AActor* pWorldContextObject, class UObject* pObjectParameter);
		void Server_BroadcastScramEvent_Null(EScramEvent ScramEvent, class AActor* pWorldContextObject);
		void Server_BroadcastScramEvent_Collision(EScramEvent ScramEvent, class AActor* pWorldContextObject, class AActor* pOtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal);
		void Server_BroadcastScramEvent_Bowling(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBowlingEvent BowlingEvent, class AActor* pBowlingBall);
		void Server_BroadcastScramEvent_Baseball(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBaseballEvent BaseballEvent, class ABaseballBall* pBall);
		void Server_BaseballCatcherCaught(class AActor* pCatcher, class ABaseballBall* pBall);
		void Server_BaseballBallPitched(class ABaseballThrowingGlove* pGlove, class ABaseballBall* pBall, float ThrowSpeed);
		void Client_UpdateTennisNextPlayerToHitBall(int32_t nextPlayerIndex, class AScramSportManagerTennis* pTennisManager);
		void Client_UpdateTennisBallTrajectory(class ATennisBall* pBall, const struct FTennisBallNetworkUpdate& Update);
		void Client_UpdateTennisBallInPlay(class ATennisBall* pBall, class ATennisBall* pLastBall, uint32_t ballGeneration, class AScramSportManagerTennis* pTennisManager);
		void Client_UpdateStickDrivenCatcherGlove(class ABaseballThrowingGlove* pGlove, float leftRight, float upDown);
		void Client_UpdateBowlingBallTrajectory(class ABowlingBall* pBall, const struct FScramTrajectory& trajectory, const struct FBowlingThrow& newThrow);
		void Client_UpdateBaseballBallTrajectory(class ABaseballBall* pBall, const struct FBaseballNetworkUpdate& Update);
		void Client_StartFollowingTrajectoryWithSlowDown(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow, float TimeScale, float Delay, float Duration, float maxStepDown);
		void Client_StartFollowingTrajectory(class AScramPrimitiveActor* pPrimitive, const struct FScramTrajectory& trajectoryToFollow);
		void Client_SetTimeScale(class AScramPrimitiveActor* pPrimitive, float TimeScale);
		void Client_SetTennisBallRallyCount(class ATennisBall* pBall, int32_t rallyCount);
		void Client_SetPlayerPreferences(class AScramPlayer* pPlayer, const struct FScramPlayerPreferences& preferences);
		void Client_SetPlayerPausedRemote(class AScramPlayer* pPlayer, EGamePauseReason reason, bool paused);
		void Client_SetFutureBallHit(const struct FFutureBallHit& FutureBallHit);
		void Client_SetAvatarLook(class AScramPlayer* pPlayer, const struct FAvatarLook& AvatarLook);
		void Client_ServeBallSpawned(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall);
		void Client_ServeBallGrabbed(class AScramPlayerServeTrigger* pServeTrigger, class AScramBall* pBall);
		void Client_RemoteGameDone(class AScramSportManagerBase* pSportManager);
		void Client_RemoteApplicationWillTerminate();
		void Client_RemoteApplicationWillEnterBackground();
		void Client_RemoteApplicationWillDeactivate();
		void Client_RemoteApplicationHasReactivated();
		void Client_RemoteApplicationHasEnteredForeground();
		void Client_ReceiveHeartbeat(uint16_t remotePendingNetGeneration, uint16_t remoteEstablishedNetGeneration);
		void Client_PingHandShake();
		void Client_GrabberRelease(class AActor* pGrabberActor);
		void Client_GrabberGrab(class AActor* pGrabberActor, class AActor* pGrabbableActor, bool snap);
		void Client_DrawDebugSphere(class AActor* pWorldContextObject, const struct FVector_NetQuantize10& Center, float Radius, int32_t Segments, const struct FColor& Color, float LifeTime);
		void Client_DestroyPrimitive(class AScramPrimitiveActor* pPrimitive, bool playOut, float Delay);
		void Client_ClearTennisBallTrajectoryOwnership(class ATennisBall* pBall);
		void Client_ClearPausedTrajectory(class AScramPrimitiveActor* pPrimitive);
		void Client_BroadcastScramEvent_Tennis(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, ETennisEvent TennisEvent);
		void Client_BroadcastScramEvent_Object(EScramEvent ScramEvent, class AActor* pWorldContextObject, class UObject* pObjectParameter);
		void Client_BroadcastScramEvent_Null(EScramEvent ScramEvent, class AActor* pWorldContextObject);
		void Client_BroadcastScramEvent_Collision(EScramEvent ScramEvent, class AActor* pWorldContextObject, class AActor* pOtherActor, const struct FVector& HitLocation, const struct FVector& HitNormal);
		void Client_BroadcastScramEvent_Bowling(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBowlingEvent BowlingEvent, class AActor* pBowlingBall);
		void Client_BroadcastScramEvent_Baseball(EScramEvent ScramEvent, class AActor* pWorldContextObject, int32_t PlayerIndex, EBaseballEvent BaseballEvent, class ABaseballBall* pBall);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPauseCapsule
	 * Size -> 0x0030 (FullSize[0x0358] - InheritedSize[0x0328])
	 */
	class AScramPauseCapsule : public AActor
	{
	public:
		float                                                      MinimumUsableRadius;                                     // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnchorPullDistance;                                      // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlackPulseFraction;                                      // 0x0330(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsInTransition;                                          // 0x0334(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT3V[0x3];                                   // 0x0335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPauseCapsuleOn;                                        // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPauseCapsuleRemoved;                                   // 0x0348(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic

	public:
		void ShowCapsule();
		void HideCapsule();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPauseManager
	 * Size -> 0x0010 (FullSize[0x0358] - InheritedSize[0x0348])
	 */
	class AScramPauseManager : public AScramActor
	{
	public:
		unsigned char                                              UnknownData_LJBG[0x10];                                  // 0x0348(0x0010) MISSED OFFSET (PADDING)

	public:
		void STATIC_QueuePauseEvent(const class FScriptDelegate& PauseEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayer
	 * Size -> 0x0628 (FullSize[0x09B0] - InheritedSize[0x0388])
	 */
	class AScramPlayer : public APawn
	{
	public:
		unsigned char                                              UnknownData_PWPL[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerInitComplete;                                    // 0x0390(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAvatarLookChanged;                                     // 0x03A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class USceneComponent*                                     PlayerRoot;                                              // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LeftHandClass;                                           // 0x03B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RightHandClass;                                          // 0x03C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AvatarClassPerSport[0x5];                                // 0x03C8(0x0028) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              LeftHandPossessorClass;                                  // 0x03F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RightHandPossessorClass;                                 // 0x03F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BoundaryClass;                                           // 0x0400(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CameraCoverClass;                                        // 0x0408(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemoteTransformSmoothTime;                               // 0x0410(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestrictedBuffer;                                        // 0x0414(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RestrictedFadeBuffer;                                    // 0x0418(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnPointRadius;                                       // 0x041C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnAreaFrontMargin;                                   // 0x0420(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnAreaBackMargin;                                    // 0x0424(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnAreaLateralMargin;                                 // 0x0428(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReturnAreaMinimumWidth;                                  // 0x042C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxArmLength;                                            // 0x0430(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CheckPermittedArea;                                      // 0x0434(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB1A[0x3];                                   // 0x0435(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayerHand*                                    LeftHand;                                                // 0x0438(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AScramPlayerHand*                                    RightHand;                                               // 0x0440(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AScramAvatar*                                        Avatar;                                                  // 0x0448(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AScramPlayerBoundary*                                Boundary;                                                // 0x0450(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     VR_Controller_HMD;                                       // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScramCameraComponent*                               FirstPersonCamera;                                       // 0x0460(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     PlayerRegionRoot;                                        // 0x0468(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     PlayerFloorRegionRoot;                                   // 0x0470(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandOffsetScale;                                         // 0x0478(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HandScale;                                               // 0x047C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeadPlusHandRadius;                                      // 0x0480(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArmPivotToHead;                                          // 0x0484(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShoulderDropHeight;                                      // 0x0488(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OutOfBoundaryTimeLimit;                                  // 0x048C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DefaultNetVisible;                                       // 0x0490(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDF9[0x3];                                   // 0x0491(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NetworkMotionStateRate;                                  // 0x0494(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPauseRequested;                                        // 0x0498(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26KN[0x18];                                  // 0x04A8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAvatarSelected;                                        // 0x04C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EDebugDrawMode                                             DebugDrawMode;                                           // 0x04D0(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MPRX[0x3];                                   // 0x04D1(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_8JTD[0x4];                                   // 0x04D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ReturnIndicator;                                         // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramVoiceChat*                                     mpVoiceChat;                                             // 0x04E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AScramCameraCover*                                   mpCameraCover;                                           // 0x04E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NRLA[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScramPlayerPreferences                             mPreferences;                                            // 0x04F8(0x000C) Net, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       mRestoringGame;                                          // 0x0504(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y01S[0x30B];                                 // 0x0505(0x030B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerTransforms                                   mClientTransforms;                                       // 0x0810(0x00C0) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GXFD[0x8];                                   // 0x08D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      mClientPlayAreaDiagonal;                                 // 0x08D8(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SKUY[0x4];                                   // 0x08DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerTennisReturn                                 mRepRemoteTennisReturn;                                  // 0x08E0(0x0030) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KNYU[0x3C];                                  // 0x0910(0x003C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       mNetVisible;                                             // 0x094C(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_X94X[0x33];                                  // 0x094D(0x0033) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               mClientPausedPerReason;                                  // 0x0980(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VDM4[0x18];                                  // 0x0990(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANetworkMotionStateManager*                          mpNetworkMotionStateManager;                             // 0x09A8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetWorldTimeDilation(float timeDilation);
		void SetScriptedFadeOutOpacity(float Opacity);
		void SetNetVisible(bool netVisible);
		void SetAvatarMaterials(const struct FAvatarLook& AvatarLook);
		void SetAnchor(const struct FTransform& anchor, const struct FBox& minPlayArea, const struct FBox& maxPlayArea, const struct FBox& maxHazardArea);
		void Server_UpdateTransforms(const struct FPlayerTransforms& Transforms, uint32_t updateCounter);
		void Server_UpdatePlayAreaDiagonal(float newPlayAreaDiagonal);
		void Server_SpawnHands();
		void Server_SetTennisReturnData(const struct FPlayerTennisReturn& newReturnData);
		void Server_SetPlayerReadyForMatch();
		void Server_SetNetVisible(bool netVisible);
		void Server_ClientSelectedAvatar();
		void SavePreferences();
		void ResetAnchor();
		void RecenterDetected();
		void PlayerResume(EGamePauseReason reason, bool multiplayer);
		void PlayerPause(EGamePauseReason reason, bool multiplayer);
		void OnRep_TennisReturnData();
		void OnRep_NetVisible();
		void OnRep_ClientTransforms();
		void OnRep_ClientPlayAreaDiagonal();
		void OnRecenter();
		void OnPlayerOutOfBoundary(const struct FTransform& ReturnTransform);
		void OnPlayerEnterBoundary();
		void NetSetPreferences(const struct FScramPlayerPreferences& preferences);
		void LocalAvatarSelected();
		void LoadPreferences();
		bool IsPlayerRestricted();
		bool IsPlayerPausedExcluded(EGamePauseReason exludedReason);
		bool IsPlayerPaused();
		bool IsPlayerFadedOut();
		bool IsInitComplete();
		bool HasBegunPlay();
		float GetWorldTimeDilation();
		float GetScriptedFadeOutOpacity();
		EScramHandedness GetPreferredHandedness();
		struct FScramPlayerPreferences GetPreferences();
		struct FTransform GetPlayAreaTransform();
		struct FTransform GetOrthogonalAnchor();
		class AScramPlayerHand* GetHand(EScramHandedness Handedness);
		EScramStroke GetDominantStroke();
		EScramHandedness GetDominantHandedness();
		struct FTransform GetAnchor();
		class AScramPrimitiveGrabbable* ForceChangeGrabbable(class UClass* NewGrabbableClass, class AScramPlayerHand* SpecificHand);
		void EnsureHasHands();
		void DestroyAllGrabbables(bool playOut, float Delay);
		void DeferredInit();
		struct FVector ConstrainToPlayArea(const struct FVector& Point, float Radius);
		void Client_ServerSelectedAvatar();
		bool ChangeAvatarBlueprint(class UClass* avatarClass, bool PlaySpawnAnimation);
		bool CanBeSeen();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerBoundary
	 * Size -> 0x00C8 (FullSize[0x0418] - InheritedSize[0x0350])
	 */
	class AScramPlayerBoundary : public AScramSceneComponentActor
	{
	public:
		bool                                                       DebugMinimumPlayArea;                                    // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugOverrideLocalPlayBox;                               // 0x0351(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XJJ8[0x2];                                   // 0x0352(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBox                                                DebugLocalPlayBoxOverride;                               // 0x0354(0x001C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       OverridePlayArea;                                        // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VF7D[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayAreaWidthOverride;                                   // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayAreaLengthOverride;                                  // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaselineMarginOverride;                                  // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       HazardLineVisible;                                       // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I2CP[0x3];                                   // 0x0381(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HazardLineHeight;                                        // 0x0384(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HazardLineBuffer;                                        // 0x0388(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HazardEdgeIncrement;                                     // 0x038C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UStaticMesh*>                                 HazardEdgeMeshes;                                        // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		bool                                                       DebugHazardScaleEnabled;                                 // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1ZFT[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugHazardScaleRateX;                                   // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugHazardScaleRateY;                                   // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DebugHazardScaleCap;                                     // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                HazardCornerTemplate;                                    // 0x03B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                HazardEdgeTemplate;                                      // 0x03B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramPlayer*                                        mpPlayer;                                                // 0x03C0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UStaticMeshComponent*>                        mHazardCorners;                                          // 0x03C8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		TArray<class UStaticMeshComponent*>                        mHazardEdges;                                            // 0x03D8(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1MPU[0x30];                                  // 0x03E8(0x0030) MISSED OFFSET (PADDING)

	public:
		void ResetPlayerAnchor();
		void ResetHazardLine();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerCameraManager
	 * Size -> 0x0000 (FullSize[0x2470] - InheritedSize[0x2470])
	 */
	class AScramPlayerCameraManager : public APlayerCameraManager
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerController
	 * Size -> 0x0078 (FullSize[0x06F0] - InheritedSize[0x0678])
	 */
	class AScramPlayerController : public APlayerController
	{
	public:
		TArray<class AActor*>                                      SeamlessTravelActors;                                    // 0x0678(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     HeartbeatSendInterval;                                   // 0x0688(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     HeartbeatTimeout;                                        // 0x0690(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHeartbeatConnected;                                    // 0x0698(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHeartbeatDisconnected;                                 // 0x06A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHeartbeatSustained;                                    // 0x06B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       mLocalPlayerRestarted;                                   // 0x06C8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQEN[0x7];                                   // 0x06C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScramNetworkHelperComponent*                        NetworkHelper;                                           // 0x06D0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Y8RL[0x18];                                  // 0x06D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void STATIC_UnpauseLocalHeartbeat(class UObject* WorldContextObject);
		void STATIC_StopLocalHeartbeat(class UObject* WorldContextObject);
		void StopHeartbeat();
		void StartHeartbeat();
		void ServerSetSportPreferences(const struct FScramSportPreferences& clientPreferences);
		void ResumeHeartbeatEvents();
		void RestartHeartbeat();
		void STATIC_PauseLocalHeartbeat(class UObject* WorldContextObject);
		bool HasStartedHeartbeat();
		void DEBUGForceHeartbeatTimeout();
		void ClientRequestSportPreferences();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerHand
	 * Size -> 0x00F0 (FullSize[0x0438] - InheritedSize[0x0348])
	 */
	class AScramPlayerHand : public AScramActor
	{
	public:
		unsigned char                                              UnknownData_HO0Z[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GrabberHoldPoint;                                        // 0x0350(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GrabberHoldDirection;                                    // 0x035C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                ProxyModel;                                              // 0x0368(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0370(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5WRZ[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GrabRadius;                                              // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StealRadius;                                             // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBallInfluenceSpeed;                                   // 0x037C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              HighlightedUIObject;                                     // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAngle                                              ForehandAngle;                                           // 0x0388(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              BackhandAngle;                                           // 0x038C(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              OverheadAngle;                                           // 0x0390(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              UnderhandAngle;                                          // 0x0394(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class UHapticFeedbackEffect_Base*                          GrabHaptics;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHapticFeedbackEffect_Base*                          HitHaptics;                                              // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ImpulseHapticExponent;                                   // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MassHapticExponent;                                      // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinHapticFeltImpulse;                                    // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHapticFeltImpulse;                                    // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitHapticMultiplier;                                     // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TDD[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              SwapIndicatorClass;                                      // 0x03C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AScramPlayerController*                              mpPlayerController;                                      // 0x03C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AScramPlayer*                                        mpPlayer;                                                // 0x03D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AScramPlayerHandPossessor*                           mpPossessor;                                             // 0x03D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ASwapIndicator*                                      mpSwapIndicator;                                         // 0x03E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              mpClientSpawnedActor;                                    // 0x03E8(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mpClientHasCurrentGrabbableActor;                        // 0x03F0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D14H[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              mpClientCurrentGrabbableActor;                           // 0x03F8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5N6C[0x38];                                  // 0x0400(0x0038) MISSED OFFSET (PADDING)

	public:
		void SpawnAndGrabActor(class UClass* GrabbableClass);
		void ServerGrabSpawnedActor(class AActor* GrabbableActor);
		void Server_SpawnAndGrabActor(class UClass* ActorClass, const struct FTransform& SpawnTransform);
		void OnRep_ClientSpawnedActor();
		void OnGrabbableHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		bool GrabberIsTracked();
		class AScramPlayer* GetPlayer();
		EScramStroke GetGrabberVerticalStroke();
		EScramStroke GetGrabberStroke();
		EScramStroke GetGrabberHorizontalStroke();
		EScramHandedness GetGrabberHandedness();
		void ForceReleaseCurrentGrabbable();
		void ForceGrab(class AActor* GrabbableActor);
		void DestroyCurrentGrabbable(bool playOut, float Delay);
		void DeferredInit();
		class AActor* CurrentGrabbableActor();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerHandPossessor
	 * Size -> 0x0098 (FullSize[0x03E0] - InheritedSize[0x0348])
	 */
	class AScramPlayerHandPossessor : public AScramActor
	{
	public:
		class UMotionControllerComponent*                          MotionController;                                        // 0x0348(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector                                             RightShoulderOffset;                                     // 0x0350(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ForearmLength;                                           // 0x035C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        UpperArmLengthRange;                                     // 0x0360(0x0008) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAngle                                              MinElbowAngle;                                           // 0x0368(0x0004) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		EScramHandInferenceMode                                    InferenceMode;                                           // 0x036C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DeadReckoningVelocityDecayEnabled;                       // 0x036D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BCSJ[0x2];                                   // 0x036E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DeadReckoningVelocityDecayTime;                          // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DeadReckoningAccelerationDamping;                        // 0x0374(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRotator                                            SteamRotationAdjustment;                                 // 0x0378(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CBKE[0xC];                                   // 0x0384(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramPlayer*                                        mpPlayer;                                                // 0x0390(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramPlayerHand*                                    mpHand;                                                  // 0x0398(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZGHB[0x40];                                  // 0x03A0(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerTrigger
	 * Size -> 0x0018 (FullSize[0x0368] - InheritedSize[0x0350])
	 */
	class AScramPlayerTrigger : public AScramSceneComponentActor
	{
	public:
		float                                                      Width;                                                   // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Length;                                                  // 0x0354(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AScramPlayer*>                                PresentPlayers;                                          // 0x0358(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void OnPlayerStay(class AScramPlayer* Player);
		void OnPlayerExit(class AScramPlayer* Player);
		void OnPlayerEnter(class AScramPlayer* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramPlayerServeTrigger
	 * Size -> 0x00B8 (FullSize[0x0420] - InheritedSize[0x0368])
	 */
	class AScramPlayerServeTrigger : public AScramPlayerTrigger
	{
	public:
		unsigned char                                              UnknownData_B2QY[0x8];                                   // 0x0368(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SpawnOffset;                                             // 0x0370(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      AcceptanceAngle;                                         // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AcceptanceSpeed;                                         // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DilationDuration;                                        // 0x03A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ApexTimeScale;                                           // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeHeight;                                             // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeSeparation;                                         // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeSeparationAngle;                                    // 0x03B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RadialMagnusCompensation;                                // 0x03BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LaunchAngularVelocity;                                   // 0x03C0(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeSpeedFaith;                                         // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinServeSpeed;                                           // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxServeSpeed;                                           // 0x03D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XES0[0x38];                                  // 0x03D8(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AScramBall*                                          mpBall;                                                  // 0x0410(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AScramBall*                                          mpClientBall;                                            // 0x0418(0x0008) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void Show();
		void SetPlayerServing(bool shouldServe);
		void SetAllowRespawn(bool canSpawn);
		void ServeBallSpawned(class AScramBall* Ball);
		void ServeBallGrabbed(class AScramBall* Ball);
		void RespawnBall();
		void ResetServeTrigger();
		void OnRep_ClientBall();
		void Hide();
		void HandleServeTrajectory(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void HandlePostHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void HandleBallGrabbed(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		bool GetPlayerServing();
		class AScramBall* GetBall();
		bool GetAllowRespawn();
		void DespawnCurrentBall();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramReturnTarget
	 * Size -> 0x0068 (FullSize[0x03C0] - InheritedSize[0x0358])
	 */
	class AScramReturnTarget : public AScramTarget
	{
	public:
		float                                                      MinIncomingSpeed;                                        // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMinMaxFloat                                        OutgoingSpeedRange;                                      // 0x035C(0x0008) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		float                                                      CurveWidth;                                              // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      CurveMaxDegrees;                                         // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FScramTrajectoryRegion                              PlayerRegion;                                            // 0x036C(0x0050) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_H37P[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSaveData
	 * Size -> 0x0178 (FullSize[0x01A0] - InheritedSize[0x0028])
	 */
	class UScramSaveData : public USaveGame
	{
	public:
		class FString                                              LocalizationCulture;                                     // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, struct FDateTime>                        TrophyCompletion;                                        // 0x0038(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, ETrainingProgression>                    TrainingProgress;                                        // 0x0088(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, float>                                   HighScores;                                              // 0x00D8(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, int32_t>                                 NamedValues;                                             // 0x0128(0x0050) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       TutorialCompleted;                                       // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FScramSettings                                      UserSettings;                                            // 0x0179(0x0001) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScramPlayerPreferences                             PlayerPreferences;                                       // 0x017A(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HN16[0x2];                                   // 0x0186(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              mSlotName;                                               // 0x0188(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mUserIndex;                                              // 0x0198(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3BY3[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (PADDING)

	public:
		void WipeSaveData();
		void WipeHighScoreData();
		void UnlockTraining(const class FName& TrainingName);
		void SaveNamedValue(const class FName& Name, int32_t Value);
		void SaveHighScore(const class FName& GameName, float score);
		ETrainingProgression GetTrainingProgression(const class FName& TrainingName);
		int32_t GetNamedValue(const class FName& Name);
		float GetHighScore(const class FName& GameName);
		void CompleteTraining(const class FName& TrainingName);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSceneComponentInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramSceneComponentInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSpectatorPawn
	 * Size -> 0x0008 (FullSize[0x03B8] - InheritedSize[0x03B0])
	 */
	class AScramSpectatorPawn : public ASpectatorPawn
	{
	public:
		class UScramNetworkHelperComponent*                        NetworkHelper;                                           // 0x03B0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSportManagerBase
	 * Size -> 0x0050 (FullSize[0x0398] - InheritedSize[0x0348])
	 */
	class AScramSportManagerBase : public AScramActor
	{
	public:
		bool                                                       LocalHumanCanBePlayer;                                   // 0x0348(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RemoteHumanCanBePlayer;                                  // 0x0349(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SaveSportStateInSingleplayer;                            // 0x034A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       SaveSportStateInMultiplayer;                             // 0x034B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CI6B[0x4];                                   // 0x034C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AActor*>                                      mpPlayers;                                               // 0x0350(0x0010) Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class USportState*                                         mpRecentSportState;                                      // 0x0360(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_15X1[0x30];                                  // 0x0368(0x0030) MISSED OFFSET (PADDING)

	public:
		void StopSavingSportState();
		void SetSelectableBallClass(class UClass* BallClass);
		void ServerReady();
		void SaveSportState();
		void OnHeartbeatSustained(class AScramPlayerController* pPlayerController);
		void OnHeartbeatDisconnected(class AScramPlayerController* pPlayerController);
		void OnGameDone();
		void LocalGameDone();
		class AActor* GetPlayer(int32_t Index);
		class AActor* GetOtherPlayer(class AActor* Player);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSportManagerBaseball
	 * Size -> 0x0328 (FullSize[0x06C0] - InheritedSize[0x0398])
	 */
	class AScramSportManagerBaseball : public AScramSportManagerBase
	{
	public:
		float                                                      PitchLookAtTime;                                         // 0x0398(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CatcherThrowLookAtTime;                                  // 0x039C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAngle                                              PitchLookAtAngle;                                        // 0x03A0(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TimeBeforeDeletingBall;                                  // 0x03A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideBattingSkill;                                    // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramSkill                                                OverrideSkillLevel;                                      // 0x03A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJ9U[0x6];                                   // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BallClass;                                               // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          BallScrambleProperties;                                  // 0x03B8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RunnerClass;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OutfieldCenter;                                          // 0x03C8(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OutfieldEdge;                                            // 0x03D4(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OutfieldLocus;                                           // 0x03E0(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DoubleTripleMarkerPos;                                   // 0x03EC(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PitcherPos;                                              // 0x03F8(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InfieldEdge;                                             // 0x0404(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RunnerSpawn;                                             // 0x0410(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FirstBase;                                               // 0x041C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SecondBase;                                              // 0x0428(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ThirdBase;                                               // 0x0434(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HomePlate;                                               // 0x0440(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InnerFoul;                                               // 0x044C(0x000C) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerFoulSpeed;                                          // 0x0458(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBox                                                HomePlateBox;                                            // 0x045C(0x001C) Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       RunnerOnFirst;                                           // 0x0478(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RunnerOnSecond;                                          // 0x0479(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RunnerOnThird;                                           // 0x047A(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsLocalPlayerBatting;                                    // 0x047B(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InstrumentDamageEnabled;                                 // 0x047C(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PitcherScrambleEnabled;                                  // 0x047D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMVL[0x2];                                   // 0x047E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BallsCalledInARow;                                       // 0x0480(0x0004) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WalksAndFreebiesEnabled;                                 // 0x0484(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T42Q[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumBallsForFreebie;                                      // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumBallsForWalk;                                         // 0x048C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFieldedBalls;                                         // 0x0490(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FenceMargin;                                             // 0x0494(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BallScrambleDisplay;                                     // 0x0498(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAngle                                              PitchingRegionAngle;                                     // 0x04A0(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      PitchingMoundExclusionRadius;                            // 0x04A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxInvalidTime;                                          // 0x04A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GroundKillDelay;                                         // 0x04AC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PitcherAvatar;                                           // 0x04B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BatterAvatar;                                            // 0x04B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FieldCollisionTag;                                       // 0x04C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBaseballBallScrambleProperties>             ScrambledBalls;                                          // 0x04C8(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AScramStrikeZone*                                    mpStrikeZone;                                            // 0x04D8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mGameRunning;                                            // 0x04E0(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EUVM[0xF];                                   // 0x04E1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AScramBaseballRunnerAI*>                      mpRunnersAtBase;                                         // 0x04F0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E5QP[0x20];                                  // 0x0500(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBaseballBallScrambleProperties>             mScrambleBallProperties;                                 // 0x0520(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class ABaseballBallScrambleDisplay*                        mpBallScrambleDisplay;                                   // 0x0530(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7QCM[0xD8];                                  // 0x0538(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBaseballBallTrackingHelper                         mTracker;                                                // 0x0610(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FN71[0x60];                                  // 0x0660(0x0060) MISSED OFFSET (PADDING)

	public:
		void SetScrambleBallProperties(TArray<struct FBaseballBallScrambleProperties> Properties);
		void SetBattingSkillOverride(bool shouldOverride, EScramSkill skillLevel);
		void SetBall(class ABaseballBall* Ball);
		void SetAllowPitch(bool allowPitch);
		void SendBaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location, class ABaseballBall* Ball);
		void SaveBaseballState(int32_t* VisitorsScore, int32_t* HomeScore, int32_t* Inning, bool* TopOfInning, bool* FirstPitchOfInning, int32_t* Outs, int32_t* Strikes, class UClass** BatterInstrument, TArray<struct FMittSpawnInfo>* PitcherScrambleOptions);
		void RestartGame(bool RestoringGame);
		void OnStrikeZoneHit(class ABaseballBall* pBall, EScramStrikeResult Result);
		void OnRunnerSpawned(class AScramBaseballRunnerAI* runner);
		void OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void OnBallDeleted(class ABaseballBall* Ball);
		void LoadBaseballState(int32_t VisitorsScore, int32_t HomeScore, int32_t Inning, bool TopOfInning, bool FirstPitchOfInning, int32_t Outs, int32_t Strikes, class UClass* BatterInstrument, TArray<struct FMittSpawnInfo> PitcherScrambleOptions);
		TArray<class ABaseballBall*> GetUnclassifiedBalls();
		TArray<struct FBaseballBallScrambleProperties> GetScrambleBallProperties();
		class AActor* GetPitcher();
		TArray<class ABaseballBall*> GetPitchedBalls();
		bool GetGameRunning();
		TArray<class ABaseballBall*> GetFieldedBalls();
		int32_t GetBatterRunAdvantage();
		class AActor* GetBatter();
		TArray<class ABaseballBall*> GetBalls();
		void DeleteBall(class ABaseballBall* pBall, bool playOut);
		void BaseballEvent(EBaseballEvent BaseballEvent, const struct FVector& Location);
		void AssignStrikeZone(class AScramStrikeZone* strikeZone);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSportManagerBowling
	 * Size -> 0x0000 (FullSize[0x0398] - InheritedSize[0x0398])
	 */
	class AScramSportManagerBowling : public AScramSportManagerBase
	{
	public:
		void SendBowlingEvent(int32_t Player, EBowlingEvent BowlingEvent, class AActor* BallActor);
		void SaveBowlingState(struct FBowlingScrambleState* ScrambleState, TArray<struct FBowlingFrameSet>* TraditionalFrameSets);
		void RestartGame();
		void LoadBowlingState(const struct FBowlingScrambleState& ScrambleState, TArray<struct FBowlingFrameSet> TraditionalFrameSets);
		void BowlingEvent(int32_t Player, EBowlingEvent BowlingEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSportManagerDodgeball
	 * Size -> 0x00B0 (FullSize[0x0448] - InheritedSize[0x0398])
	 */
	class AScramSportManagerDodgeball : public AScramSportManagerBase
	{
	public:
		ECollisionChannel                                          Team1Channel;                                            // 0x0398(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          Team2Channel;                                            // 0x0399(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          BallChannel;                                             // 0x039A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5BL7[0x5];                                   // 0x039B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              BallClass;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              RacketClass;                                             // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerHeadRadius;                                        // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerVsBallRestitution;                                 // 0x03B4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PlayerHeadSpeedMultiplier;                               // 0x03B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_7T4H[0x4];                                   // 0x03BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHapticFeedbackEffect_Base*                          HitHaptic;                                               // 0x03C0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageFlashDuration;                                     // 0x03C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageFlashIntensity;                                    // 0x03CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VUKX[0x8];                                   // 0x03D0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class ADodgeballBall*, int32_t>                       mThrownBalls;                                            // 0x03D8(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V4EM[0x20];                                  // 0x0428(0x0020) MISSED OFFSET (PADDING)

	public:
		void StartGame();
		void OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void DodgeballEvent(EDodgeballEvent DodgeballEvent, class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramSportManagerTennis
	 * Size -> 0x00D8 (FullSize[0x0470] - InheritedSize[0x0398])
	 */
	class AScramSportManagerTennis : public AScramSportManagerBase
	{
	public:
		int32_t                                                    WinMargin;                                               // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointsToWinGame;                                         // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GameWinMargin;                                           // 0x03A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    GamesToWinMatch;                                         // 0x03A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeLookAtTime;                                         // 0x03A8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAngle                                              ServeLookAtAngle;                                        // 0x03AC(0x0004) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LineThicknessForDustPuff;                                // 0x03B0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SW1[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     DustPuff;                                                // 0x03B8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableBadmintonRules;                                    // 0x03C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJHC[0x3];                                   // 0x03C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinShotsForLongRally;                                    // 0x03C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldSwitchServeDuringGame;                             // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H3E7[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumPointsBeforeSwitchingServe;                           // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BallCleanupDelay;                                        // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Player2ServesFirst;                                      // 0x03D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XCI0[0xB];                                   // 0x03D5(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInPlayBallTracker                                  mInPlayBallInfo;                                         // 0x03E0(0x0018) NoDestructor, NativeAccessSpecifierPrivate
		struct FInPlayBallTracker                                  mRepInPlayBallInfo;                                      // 0x03F8(0x0018) Net, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       mSentInitialServeEvent;                                  // 0x0410(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETennisRallyStage                                          mRallyStage;                                             // 0x0411(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_98GE[0x2];                                   // 0x0412(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mRallyShotCount;                                         // 0x0414(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       mBallHitTheNet;                                          // 0x0418(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SM5L[0x3];                                   // 0x0419(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    mServer;                                                 // 0x041C(0x0004) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            mSetScore;                                               // 0x0420(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<int32_t>                                            mGameScore;                                              // 0x0430(0x0010) Net, ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z31Y[0x30];                                  // 0x0440(0x0030) MISSED OFFSET (PADDING)

	public:
		void TennisEvent(int32_t Player, ETennisEvent TennisEvent);
		void SetAllowServe(int32_t Player, bool allowServe);
		void ServerOnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		void SendDebugString(const class FString& S);
		void SaveTennisState(class UClass** Ball, class UClass** player1Instrument, class UClass** player2Instrument, class UClass** activeArenaScramble);
		void RestartMatch(bool resetServer);
		void ReplaceBallInPlay(class AActor* Ball);
		void OnRep_InPlayInfo();
		void LoadTennisState(class UClass* Ball, class UClass* player1Instrument, class UClass* player2Instrument, class UClass* activeArenaScramble);
		class AActor* GetServingPlayer();
		class AActor* GetReceivingPlayer();
		int32_t GetPlayerPoints();
		int32_t GetPlayerGames();
		int32_t GetPlayerDoubleFaults();
		int32_t GetPlayerAces();
		int32_t GetOpponentPoints();
		int32_t GetOpponentGames();
		class AActor* GetNextPlayerToHitBall();
		class AActor* GetBallInPlay();
		void ClientOnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramStrikeZone
	 * Size -> 0x0130 (FullSize[0x0480] - InheritedSize[0x0350])
	 */
	class AScramStrikeZone : public AScramSceneComponentActor
	{
	public:
		unsigned char                                              UnknownData_ZVB5[0x8];                                   // 0x0350(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScramTrajectoryRegion                              FrontRegion;                                             // 0x0358(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FScramTrajectoryRegion                              BackRegion;                                              // 0x03A8(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FScramTrajectoryRegion                              BallRegion;                                              // 0x03F8(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class USceneComponent*                                     FrontRoot;                                               // 0x0448(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     BackRoot;                                                // 0x0450(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScramTrajectoryInfluencerBaseball*                  ThrowInfluencer;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             StrikeZonePitch;                                         // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             StrikeZoneHit;                                           // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTennisAI
	 * Size -> 0x03D8 (FullSize[0x0740] - InheritedSize[0x0368])
	 */
	class AScramTennisAI : public AScramBaseAI
	{
	public:
		struct FScramTennisAIShotProperties                        FirstServe;                                              // 0x0368(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScramTennisAIShotProperties                        SecondServe;                                             // 0x03A8(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScramTennisAIShotProperties                        FirstServeReturn;                                        // 0x03E8(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScramTennisAIShotProperties                        SecondServeReturn;                                       // 0x0428(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FScramTennisAIShotProperties                        RallyShot;                                               // 0x0468(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		class UAudioComponent*                                     HitSoundPtr;                                             // 0x04A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 RacquetPtr;                                              // 0x04B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BallClass;                                               // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMesh*                                         RacquetMesh;                                             // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBeforeRecentering;                                  // 0x04C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootTime;                                           // 0x04CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecenterSpeed;                                           // 0x04D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecenterChance;                                          // 0x04D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecenterForServeSpeed;                                   // 0x04D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RecenterForReceiveServeSpeed;                            // 0x04DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinBallHeightAtPlayer;                                   // 0x04E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBallHeightAtPlayer;                                   // 0x04E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidPlayerDistance;                                     // 0x04E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeTossHeight;                                         // 0x04EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServeHitHeight;                                          // 0x04F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeAtCenterToResetMoveDistance;                         // 0x04F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingRadius;                                             // 0x04F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHitHeight;                                            // 0x04FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      IdealHitHeight;                                          // 0x0500(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumOutDistance;                                      // 0x0504(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FuzzyIn;                                                 // 0x0508(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOffCourtDistance;                                     // 0x050C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHitRadius;                                            // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSwingRadius;                                          // 0x0514(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ServePositionOffset;                                     // 0x0518(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitPercentageDecayPerRallyShot;                          // 0x051C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HitPercentageFloor;                                      // 0x0520(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PRUT[0x4];                                   // 0x0524(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ETennisReaction>                                    WinReactions;                                            // 0x0528(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<ETennisReaction>                                    LoseReactions;                                           // 0x0538(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UCurveFloat*                                         TripChanceVsRallyLength;                                 // 0x0548(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ScrambleMods;                                            // 0x0550(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChargedSliceSpeedMultiplier;                             // 0x0558(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChargedFlatSpeedMultiplier;                              // 0x055C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LobSpeedMultiplier;                                      // 0x0560(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PositiveScrambleTargetHitPercentage;                     // 0x0564(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NeutralScrambleTargetHitPercentage;                      // 0x0568(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHorizontalAngleForScrambleTarget;                     // 0x056C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVerticalAngleForScrambleTarget;                       // 0x0570(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrepSwingTime;                                           // 0x0574(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnprepSwingTime;                                         // 0x0578(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       NetIsRaised;                                             // 0x057C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XSOD[0x3];                                   // 0x057D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScrambleTargetAngleForMaxSpin;                           // 0x0580(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LobDistanceFromBaseline;                                 // 0x0584(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramSkill                                                ShotSkill;                                               // 0x0588(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AWWN[0x7];                                   // 0x0589(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATennisBall*                                         mpServingBall;                                           // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ATennisBall*                                         mpMissedBall;                                            // 0x0598(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CUXP[0x190];                                 // 0x05A0(0x0190) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTennisAIAnimInstance*                               mpAnimInstance;                                          // 0x0730(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ATennisBall*                                         mpInterceptingBall;                                      // 0x0738(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetInstrumentProperties(const struct FTennisInstrumentProperties& instrumentProperties);
		void PlayRacquetSound(class ATennisBall* Ball, float BallSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTennisAIAnimNotify
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UScramTennisAIAnimNotify : public UScramBaseAIAnimNotify
	{
	public:
		ETennisAIAnimNotify                                        NotifyType;                                              // 0x0040(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHIM[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTennisAIAnimNotifyState
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UScramTennisAIAnimNotifyState : public UScramBaseAIAnimNotifyState
	{
	public:
		ETennisAIAnimNotify                                        NotifyType;                                              // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4OVD[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTimeLineComponent
	 * Size -> 0x0068 (FullSize[0x0158] - InheritedSize[0x00F0])
	 */
	class UScramTimeLineComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_Y64H[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PlayRate;                                                // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KHEK[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        PositionCurve;                                           // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramTimeLineCurveSpace                                   PositionMode;                                            // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_TY6P[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        RotationCurve;                                           // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramTimeLineCurveSpace                                   RotationMode;                                            // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_OY6B[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveVector*                                        ScaleCurve;                                              // 0x0120(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramTimeLineCurveSpace                                   ScaleMode;                                               // 0x0128(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EScramTimeLinePlayMode                                     PlayMode;                                                // 0x0129(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LL5Y[0x6];                                   // 0x012A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnFinished;                                              // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_APST[0x10];                                  // 0x0140(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     mpTargetComponent;                                       // 0x0150(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool TimeLineIsRunning();
		void StopTimeLine();
		void StartTimeLine(bool Forward, float StartTime);
		void SetTarget(class USceneComponent* Target);
		void SampleAtTime(float SampleTime);
		void ResumeTimeLine();
		float GetTimeLineLength();
		float GetRemainingTime();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramTrajectoryUtils : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector STATIC_GetInitialLinearVelocity(const struct FScramTrajectory& trajectory);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryInfluencerComponent
	 * Size -> 0x0018 (FullSize[0x0258] - InheritedSize[0x0240])
	 */
	class UScramTrajectoryInfluencerComponent : public UScramSceneComponent
	{
	public:
		unsigned char                                              UnknownData_GAP1[0x8];                                   // 0x0240(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Order;                                                   // 0x0248(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinimumValidScale;                                       // 0x024C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       InfluencerEnabled;                                       // 0x0250(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KVRJ[0x7];                                   // 0x0251(0x0007) Fix size for supers

	public:
		void SetInfluencerEnabled(bool Enabled);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryInfluencerRegion
	 * Size -> 0x0148 (FullSize[0x03A0] - InheritedSize[0x0258])
	 */
	class UScramTrajectoryInfluencerRegion : public UScramTrajectoryInfluencerComponent
	{
	public:
		struct FScramTrajectoryRegion                              TargetRegion;                                            // 0x0258(0x0050) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FScramTrajectoryRegion                              BufferRegion;                                            // 0x02A8(0x0050) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FScramTrajectoryRegion                              SnapRegion;                                              // 0x02F8(0x0050) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FScramTrajectoryRegion                              HintRegion;                                              // 0x0348(0x0050) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       HintEnabled;                                             // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       DebugDrawShotCorrection;                                 // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_EUNI[0x6];                                   // 0x039A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryInfluencerBaseball
	 * Size -> 0x0010 (FullSize[0x03B0] - InheritedSize[0x03A0])
	 */
	class UScramTrajectoryInfluencerBaseball : public UScramTrajectoryInfluencerRegion
	{
	public:
		EBaseballPlayerRole                                        BaseballRole;                                            // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JRLS[0x3];                                   // 0x03A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillFlags;                                              // 0x03A4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VW0I[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void RemoveSkillFlag(EScramSkill Skill);
		bool HasSkillFlag(EScramSkill Skill);
		void AddSkillFlag(EScramSkill Skill);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryInfluencerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramTrajectoryInfluencerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrajectoryInfluencerManager
	 * Size -> 0x0010 (FullSize[0x0338] - InheritedSize[0x0328])
	 */
	class AScramTrajectoryInfluencerManager : public AActor
	{
	public:
		unsigned char                                              UnknownData_A48D[0x10];                                  // 0x0328(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTravelCapsule
	 * Size -> 0x0048 (FullSize[0x0390] - InheritedSize[0x0348])
	 */
	class AScramTravelCapsule : public AScramActor
	{
	public:
		float                                                      FadeOutInnerRadius;                                      // 0x0348(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutOuterRadius;                                      // 0x034C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXVB[0x40];                                  // 0x0350(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrophy
	 * Size -> 0x0110 (FullSize[0x0460] - InheritedSize[0x0350])
	 */
	class AScramTrophy : public AScramSceneComponentActor
	{
	public:
		class FName                                                TrophyName;                                              // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          TrophyDataTable;                                         // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LookAtTimeThreshold;                                     // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAngle                                              LookAtAngleThreshold;                                    // 0x0364(0x0004) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MessageStayTime;                                         // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayOffsetTowardPlayer;                               // 0x036C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayMessageScale;                                     // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCheckingPlayerLookAtMe;                                // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFM6[0xB];                                   // 0x0375(0x000B) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTrophyDefinition                                   TrophyData;                                              // 0x0380(0x00C0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class AScramPlayer*                                        Player;                                                  // 0x0440(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                TrophyMesh;                                              // 0x0448(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NLNM[0x10];                                  // 0x0450(0x0010) MISSED OFFSET (PADDING)

	public:
		bool WasTrophyEarned();
		void OnPlayerStopLookAtTrophy();
		void OnPlayerLookAtTrophy();
		struct FTransform CalculateDisplayTransform();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrophyGlove
	 * Size -> 0x0088 (FullSize[0x0AC0] - InheritedSize[0x0A38])
	 */
	class AScramTrophyGlove : public AScramGlove
	{
	public:
		class ATrophyGrabbable*                                    CurrentGrabbedTrophy;                                    // 0x0A38(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ATrophyGrabbable*                                    CurrentPointingAtTrophy;                                 // 0x0A40(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                LaserPoint;                                              // 0x0A48(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     LaserRoot;                                               // 0x0A50(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                LaserDot;                                                // 0x0A58(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DefaultColor;                                            // 0x0A60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              PulseColor;                                              // 0x0A64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PulseSpeed;                                              // 0x0A68(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotScaleDefault;                                         // 0x0A6C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PulseDotScaleRadius;                                     // 0x0A70(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotHitPointOffset;                                       // 0x0A74(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultLaserPointerLength;                               // 0x0A78(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultLaserDotDistance;                                 // 0x0A7C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TrophyRotateSpeed;                                       // 0x0A80(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RaycastDistance;                                         // 0x0A84(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleConversion;                                         // 0x0A88(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsActive;                                                // 0x0A8C(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsGrabEnabled;                                           // 0x0A8D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K5PQ[0x32];                                  // 0x0A8E(0x0032) MISSED OFFSET (PADDING)

	public:
		void TryMakeActiveTrophyGlove();
		void SetLaserPointerVisibility(bool IsVisible);
		void SetLaserLength(float Length);
		void SetEnableGrab(bool Enabled);
		void OnShouldGrab(class ATrophyGrabbable* Trophy);
		bool IsTriggerPressed();
		bool IsTriggerDownThisFrame();
		bool IsActiveGlove();
		void InputRotateTrophyYaw(float AxisValue);
		void InputRotateTrophyPitch(float AxisValue);
		struct FVector GetTrophyGrabPoint();
		void BindInputYaw(const class FName& AxisName);
		void BindInputPitch(const class FName& AxisName);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramTrophyManager
	 * Size -> 0x0068 (FullSize[0x03B0] - InheritedSize[0x0348])
	 */
	class AScramTrophyManager : public AScramActor
	{
	public:
		class UDataTable*                                          TrophyTable;                                             // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TrophiesEnabled;                                         // 0x0350(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y0QR[0x3];                                   // 0x0351(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TrophyEarnedIgnoreTime;                                  // 0x0354(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H4O1[0x58];                                  // 0x0358(0x0058) MISSED OFFSET (PADDING)

	public:
		bool STATIC_WasTrophyEarned(const class FName& TrophyID, class UObject* pWorldContextObject);
		bool STATIC_WasAvatarEarned(const class FName& avatarID, class UObject* WorldContextObject);
		bool STATIC_TryGetTrophyEarnedDate(struct FDateTime* date, const class FName& TrophyID, class UObject* WorldContextObject);
		void SpawnTrophyNotificationFX();
		void ResetAllTrophy();
		void OnNotifyTrophyEarned(const class FName& Name);
		void OnNotifyOculusUpload();
		void OnNotifyOculusUpdate();
		void InitializeTrophyAwardListeners();
		int32_t STATIC_GetTrophyRequirement(const class FName& TrophyID, class UObject* WorldContextObject);
		int32_t STATIC_GetEarnedTrophyCount(class UObject* pWorldContextObject);
		void STATIC_EarnTrophy(const class FName& TrophyName, class UObject* pWorldContextObject);
		void DeferNotifications(float Duration);
		void ClearAwardListeners();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramUtils
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScramUtils : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_TryGetOculusID(class FString* UniqueId);
		void STATIC_ShowDebugMessage(class UObject* WorldContextObject, const class FString& Message, float LifeTime);
		void STATIC_SetShaderCacheModeFast();
		void STATIC_SetShaderCacheModeBackground();
		void STATIC_SetOnlineSessionCustomSetting(class UObject* WorldContextObject, const class FName& SettingName, int32_t SettingValue);
		void STATIC_SetInstancedVisibility(class UStaticMeshComponent* Target, bool Visibility);
		void STATIC_SavePipelineCache();
		void STATIC_SampleTexture(class UTexture2D* Texture, float U, float V, struct FLinearColor* pixelColor, ESuccessFailure* Branch);
		EScramSport STATIC_RandomSharedSport(const struct FScramSportPreferences& A, const struct FScramSportPreferences& B);
		struct FVector STATIC_PickDestinationPointOnSpline(class AActor* SplineFollower, class USplineComponent* Spline, float LookAheadDistance);
		void STATIC_PauseShaderCacheCompilation();
		void STATIC_MakeActorsFaceLocation(class UObject* WorldContextObject, class UClass* subClass, const struct FVector& Location);
		void STATIC_LaunchOtherApp(const class FString& appID);
		void STATIC_IsShipping(EYesNo* Branch);
		bool STATIC_IsShaderCacheReady();
		bool STATIC_IsHitFloor(class AScramPrimitiveActor* Primitive, const struct FVector& HitLocation);
		bool STATIC_IsHitEnvironmental(class AActor* hitActor);
		bool STATIC_IsChargeShotPossible(class ATennisInstrument* Instrument, class ATennisBall* Ball);
		bool STATIC_HasBinaryShaderCache();
		void STATIC_GoToStore(const class FString& uriPath);
		int32_t STATIC_GetSkipLogos();
		class AActor* STATIC_GetSingleActorExec(class UObject* WorldContextObject, class UClass* ActorClass);
		class AActor* STATIC_GetSingleActor(class UObject* WorldContextObject, class UClass* ActorClass);
		class AScramPlayer* STATIC_GetScramPlayer(class UObject* WorldContextObject);
		int32_t STATIC_GetScramNetworkVersion();
		class AScramGameMode* STATIC_GetScramGameMode(class UObject* WorldContextObject);
		class AScramPlayer* STATIC_GetRemoteScramPlayer(class UObject* WorldContextObject);
		struct FTransform STATIC_GetPlayerTransform(class UObject* WorldContextObject, const struct FVector& OffsetLocation, const struct FRotator& OffsetRotation);
		EScramPlatform STATIC_GetPlatform(class UObject* WorldContextObject);
		int32_t STATIC_GetOnlineSessionCustomSetting(const struct FBlueprintSessionResult& Result, const class FName& SettingName);
		int32_t STATIC_GetNumShaderCompilesRemaining();
		int32_t STATIC_GetNumberOfLines(const class FText& Text);
		int32_t STATIC_GetMatchmakingPool();
		class AScramPlayer* STATIC_GetLocalScramPlayer(class UObject* WorldContextObject);
		int32_t STATIC_GetLengthOfLongestLine(const class FText& Text);
		bool STATIC_GetIsShipping();
		bool STATIC_GetIsEditor();
		bool STATIC_GetIsAndroid();
		int32_t STATIC_GetEarlyAccess();
		int32_t STATIC_GetDemoMode();
		class UObject* STATIC_GetDefaultObject(class UClass* ObjectClass);
		int32_t STATIC_GetDebugMode();
		void STATIC_GetAttachedActorsExec(class AActor* Actor, TArray<class AActor*>* OutActors);
		struct FTransform STATIC_GetAppropriateTransform(class AActor* Actor);
		void STATIC_ControllerIsConnected(EYesNo* Branch);
		void STATIC_ClearDebugMessages(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramVoiceChat
	 * Size -> 0x0030 (FullSize[0x0378] - InheritedSize[0x0348])
	 */
	class AScramVoiceChat : public AScramActor
	{
	public:
		unsigned char                                              UnknownData_Q6RL[0x30];                                  // 0x0348(0x0030) MISSED OFFSET (PADDING)

	public:
		void STATIC_SetVoiceChatMuted(class UObject* WorldContextObject, bool muted);
		void Server_SetClientVoiceChatDesired(bool clientVoiceChatDesired);
		void Server_InitializeVoiceChat(bool clientVoiceChatDesired);
		void STATIC_KillVoiceChat(class UObject* WorldContextObject);
		void DeferredInit();
		void Client_SetServerVoiceChatDesired(bool serverVoiceChatDesired);
		void Client_InitializeVoiceChat(bool serverVoiceChatDesired);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.ScramWidgetComponent
	 * Size -> 0x0000 (FullSize[0x06B0] - InheritedSize[0x06B0])
	 */
	class UScramWidgetComponent : public UWidgetComponent
	{
	public:
		void ExternalInitWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.SkiBallTrigger
	 * Size -> 0x0000 (FullSize[0x0420] - InheritedSize[0x0420])
	 */
	class ASkiBallTrigger : public ABowlingBallTrigger
	{
	public:
		void SetIsPositive(bool positive);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.SpectateSessionCallbackProxy
	 * Size -> 0x0100 (FullSize[0x0128] - InheritedSize[0x0028])
	 */
	class USpectateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NR54[0xE0];                                  // 0x0048(0x00E0) MISSED OFFSET (PADDING)

	public:
		class USpectateSessionCallbackProxy* STATIC_SpectateSession(class UObject* WorldContextObject, class APlayerController* PlayerController, const struct FBlueprintSessionResult& SearchResult);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.SplineMoverComponent
	 * Size -> 0x0058 (FullSize[0x0148] - InheritedSize[0x00F0])
	 */
	class USplineMoverComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnReachedEnd;                                            // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGF6[0x18];                                  // 0x0100(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESplineMovementMode                                        MovementMode;                                            // 0x0118(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RotateToSpline;                                          // 0x0119(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       paused;                                                  // 0x011A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldLoop;                                              // 0x011B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TopSpeed;                                                // 0x011C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Acceleration;                                            // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZELW[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USplineComponent*                                    mpSplineComponent;                                       // 0x0128(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USceneComponent*                                     mpSceneComponent;                                        // 0x0130(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RPF3[0x10];                                  // 0x0138(0x0010) MISSED OFFSET (PADDING)

	public:
		void StartOnSpline(class USplineComponent* SplineComponent, class USceneComponent* SceneComponent, float Distance);
		void Restart();
		float GetCurrentSpeed();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.StartOculusMatchmakingCallbackProxy
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UStartOculusMatchmakingCallbackProxy : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccessHost;                                           // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuccessClient;                                         // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTimeout;                                               // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCancel;                                                // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8E98[0x88];                                  // 0x0078(0x0088) MISSED OFFSET (PADDING)

	public:
		class UStartOculusMatchmakingCallbackProxy* STATIC_StartOculusMatchmaking(class APlayerController* PlayerController, const class FString& poolKey, float Timeout);
		bool STATIC_MatchmakingClientConnect(class APlayerController* PlayerController);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.SwapIndicator
	 * Size -> 0x0280 (FullSize[0x05D0] - InheritedSize[0x0350])
	 */
	class ASwapIndicator : public AScramSceneComponentActor
	{
	public:
		class UStaticMeshComponent*                                SwapCollar;                                              // 0x0350(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UStaticMeshComponent*                                SwapIcon;                                                // 0x0358(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InitialTime;                                             // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ConfirmTime;                                             // 0x0364(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GlowLerpParameter;                                       // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                GlowColorParameter;                                      // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IBUR[0x8];                                   // 0x0378(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSwapVisuals                                        LeftHandVisuals;                                         // 0x0380(0x0100) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FSwapVisuals                                        RightHandVisuals;                                        // 0x0480(0x0100) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		class AScramPlayerHand*                                    mpHand;                                                  // 0x0580(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              mpSwapActor;                                             // 0x0588(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStaticMesh*                                         mpOriginalMesh;                                          // 0x0590(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          mpOriginalMaterials;                                     // 0x0598(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UMaterialInterface*>                          mpSwapMaterials;                                         // 0x05A8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YMQ0[0x18];                                  // 0x05B8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnHandednessSet(EScramHandedness Handedness);
		void OnConfirmSwap();
		void OnBeginSwap();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisAIAnimInstance
	 * Size -> 0x0038 (FullSize[0x0390] - InheritedSize[0x0358])
	 */
	class UTennisAIAnimInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_NRGJ[0x4];                                   // 0x0358(0x0004) Fix Super Size
		float                                                      LocomotionPlayRate;                                      // 0x035C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwingPlayRate;                                           // 0x0360(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            HeadTrackRotation;                                       // 0x0364(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		ETennisAnimState                                           DesiredState;                                            // 0x0370(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M6CT[0x3];                                   // 0x0371(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Reaction;                                                // 0x0374(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SwingResult;                                             // 0x0378(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MoveDirection;                                           // 0x037C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_986I[0x8];                                   // 0x0388(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisAvatar
	 * Size -> 0x0040 (FullSize[0x0410] - InheritedSize[0x03D0])
	 */
	class ATennisAvatar : public AScramAvatar
	{
	public:
		float                                                      RecenteringSmoothTime;                                   // 0x03D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      InterceptingSmoothTimeMultiplier;                        // 0x03D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FollowThroughDuration;                                   // 0x03D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ServeBallDetectionRadius;                                // 0x03DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q33V[0x8];                                   // 0x03E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTennisAvatarAnimInstance*                           mpTennisAnimInstance;                                    // 0x03E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C6XT[0x8];                                   // 0x03F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATennisBall*                                         mpServeBall;                                             // 0x03F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L5IV[0x10];                                  // 0x0400(0x0010) MISSED OFFSET (PADDING)

	public:
		void OnBallHit(class UObject* pWorldContextObject, class UScramEventBasePayload* pPayload);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisAvatarAnimInstance
	 * Size -> 0x0010 (FullSize[0x0450] - InheritedSize[0x0440])
	 */
	class UTennisAvatarAnimInstance : public UScramAvatarAnimInstance
	{
	public:
		ETennisAvatarAnimState                                     DesiredState;                                            // 0x0440(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScramHandedness                                           Handedness;                                              // 0x0441(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HGV7[0xE];                                   // 0x0442(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisBall
	 * Size -> 0x03F0 (FullSize[0x0F10] - InheritedSize[0x0B20])
	 */
	class ATennisBall : public AScramBall
	{
	public:
		bool                                                       AllowForceOutOfPlay;                                     // 0x0B20(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       mClientSpawnHasUpdate;                                   // 0x0B21(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ORDG[0xE];                                   // 0x0B22(0x000E) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTennisBallNetworkUpdate                            mClientSpawnUpdate;                                      // 0x0B30(0x0260) Net, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_481H[0x10];                                  // 0x0D90(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             mpFutureBallHitterObjectToIgnore;                        // 0x0DA0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0KMP[0x8];                                   // 0x0DA8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              mpSender;                                                // 0x0DB0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              mpTarget;                                                // 0x0DB8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NNA9[0x150];                                 // 0x0DC0(0x0150) MISSED OFFSET (PADDING)

	public:
		void OnShotChanged();
		void OnRallyCountChanged();
		struct FTennisBallProperties GetTennisBallProperties();
		class AActor* GetTarget();
		struct FTennisShot GetShot();
		class AActor* GetSender();
		int32_t GetRallyCount();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisBoxComponent
	 * Size -> 0x00A8 (FullSize[0x0630] - InheritedSize[0x0588])
	 */
	class UTennisBoxComponent : public UBoxComponent
	{
	public:
		unsigned char                                              UnknownData_OPUU[0x8];                                   // 0x0588(0x0008) Fix Super Size
		unsigned char                                              UnknownData_5RM9[0x8];                                   // 0x0590(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicalMaterial*                                   PhysicalMaterial;                                        // 0x0598(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AllowHitSplineBallsDynamically;                          // 0x05A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LZCS[0x7];                                   // 0x05A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSportsScramble_FBallHit                            mFutureHit;                                              // 0x05A8(0x0020) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4W72[0x8];                                   // 0x05C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTennisBoxHit>                               mBallHits;                                               // 0x05D0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5UHR[0x50];                                  // 0x05E0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisGlobalDataAsset
	 * Size -> 0x03F8 (FullSize[0x0428] - InheritedSize[0x0030])
	 */
	class UTennisGlobalDataAsset : public UDataAsset
	{
	public:
		struct FTennisGlobalData                                   Data;                                                    // 0x0030(0x03F8) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisInstrument
	 * Size -> 0x0160 (FullSize[0x0E90] - InheritedSize[0x0D30])
	 */
	class ATennisInstrument : public AScramInstrument
	{
	public:
		unsigned char                                              UnknownData_2NLC[0x160];                                 // 0x0D30(0x0160) MISSED OFFSET (PADDING)

	public:
		struct FTennisInstrumentProperties GetTennisInstrumentProperties();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TennisState
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UTennisState : public USportState
	{
	public:
		ETennisRallyStage                                          RallyStage;                                              // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VQ4[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            SetScore;                                                // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            GameScore;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    Server;                                                  // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9G7[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Ball;                                                    // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              player1Instrument;                                       // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              player2Instrument;                                       // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              activeArenaScramble;                                     // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TimeDisplayWidget
	 * Size -> 0x0000 (FullSize[0x0210] - InheritedSize[0x0210])
	 */
	class UTimeDisplayWidget : public UUserWidget
	{
	public:
		class FString FormatTime(float Seconds);
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TravelSpline
	 * Size -> 0x0008 (FullSize[0x0330] - InheritedSize[0x0328])
	 */
	class ATravelSpline : public AActor
	{
	public:
		class USplineComponent*                                    mpSpline;                                                // 0x0328(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TrophyAwardListenerBase
	 * Size -> 0x0018 (FullSize[0x0360] - InheritedSize[0x0348])
	 */
	class ATrophyAwardListenerBase : public AScramActor
	{
	public:
		int32_t                                                    TrophyAwardRequirement;                                  // 0x0348(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TrophyAwardProgress;                                     // 0x034C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TrophyID;                                                // 0x0350(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPersistent;                                            // 0x0358(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MXN[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (PADDING)

	public:
		void UpdateProgress();
		void SaveProgressToSaveData();
		void Refresh();
		int32_t LoadProgressFromSaveData();
		void Initialize();
		void IncreaseProgress();
		void AwardTrophy();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.TrophyGrabbable
	 * Size -> 0x0128 (FullSize[0x0B20] - InheritedSize[0x09F8])
	 */
	class ATrophyGrabbable : public AScramPrimitiveGrabbable
	{
	public:
		struct FVector                                             GrabPositionOffset;                                      // 0x09F8(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            GrabRotationOffset;                                      // 0x0A04(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      GrabbedScaleModifier;                                    // 0x0A10(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RespawnTimeOnRelease;                                    // 0x0A14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CanPlayerInteractWith;                                   // 0x0A18(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TrophyWasEarned;                                         // 0x0A19(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT34[0x6];                                   // 0x0A1A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTrophyDefinition                                   TrophyData;                                              // 0x0A20(0x00C0) BlueprintVisible, NativeAccessSpecifierPublic
		struct FAngle                                              PitchMin;                                                // 0x0AE0(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FAngle                                              PitchMax;                                                // 0x0AE4(0x0004) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUUZ[0x38];                                  // 0x0AE8(0x0038) MISSED OFFSET (PADDING)

	public:
		bool WasTrophyEarned();
		void RespawnTrophy();
		void OverrideInitialRotation(const struct FRotator& overrideRotation);
		void OverrideInitialPosition(const struct FVector& overridePosition);
		void OnTrophyRespawnToOriginalPosition();
		void OnTrophyReleased();
		void OnTrophyGrabbed();
		void OnStopPointingAt();
		void OnStartPointingAt();
		struct FRotator GetInitialRotation();
		struct FVector GetInitialPosition();
		static UClass* StaticClass();
	};

	/**
	 * Class SportsScramble.UpdateSessionCallbackProxyAdvanced
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UUpdateSessionCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailure;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KWBY[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)

	public:
		class UUpdateSessionCallbackProxyAdvanced* STATIC_UpdateSession(class UObject* WorldContextObject, TArray<struct FSessionPropertyKeyPair> ExtraSettings, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
