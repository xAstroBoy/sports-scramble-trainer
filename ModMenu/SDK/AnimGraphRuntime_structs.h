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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AnimGraphRuntime.ESphericalLimitType
	 */
	enum class ESphericalLimitType : uint8_t
	{
		Inner = 0,
		Outer = 1,
		MAX   = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysSimSpaceType
	 */
	enum class EAnimPhysSimSpaceType : uint8_t
	{
		AnimPhysSimSpaceTypeComponent                = 0,
		AnimPhysSimSpaceTypeActor                    = 1,
		AnimPhysSimSpaceTypeWorld                    = 2,
		AnimPhysSimSpaceTypeRootRelative             = 3,
		AnimPhysSimSpaceTypeBoneRelative             = 4,
		AnimPhysSimSpaceTypeAnimPhysSimSpaceType_MAX = 5
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysLinearConstraintType
	 */
	enum class EAnimPhysLinearConstraintType : uint8_t
	{
		AnimPhysLinearConstraintTypeFree                             = 0,
		AnimPhysLinearConstraintTypeLimited                          = 1,
		AnimPhysLinearConstraintTypeAnimPhysLinearConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.AnimPhysAngularConstraintType
	 */
	enum class EAnimPhysAngularConstraintType : uint8_t
	{
		AnimPhysAngularConstraintTypeAngular                           = 0,
		AnimPhysAngularConstraintTypeCone                              = 1,
		AnimPhysAngularConstraintTypeAnimPhysAngularConstraintType_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenDestinationMode
	 */
	enum class EDrivenDestinationMode : uint8_t
	{
		Bone              = 0,
		MorphTarget       = 1,
		MaterialParameter = 2,
		MAX               = 3
	};

	/**
	 * Enum AnimGraphRuntime.EDrivenBoneModificationMode
	 */
	enum class EDrivenBoneModificationMode : uint8_t
	{
		AddToInput       = 0,
		ReplaceComponent = 1,
		AddToRefPose     = 2,
		MAX              = 3
	};

	/**
	 * Enum AnimGraphRuntime.EConstraintOffsetOption
	 */
	enum class EConstraintOffsetOption : uint8_t
	{
		None           = 0,
		Offset_RefPose = 1,
		MAX            = 2
	};

	/**
	 * Enum AnimGraphRuntime.CopyBoneDeltaMode
	 */
	enum class ECopyBoneDeltaMode : uint8_t
	{
		CopyBoneDeltaModeAccumulate            = 0,
		CopyBoneDeltaModeCopy                  = 1,
		CopyBoneDeltaModeCopyBoneDeltaMode_MAX = 2
	};

	/**
	 * Enum AnimGraphRuntime.EInterpolationBlend
	 */
	enum class EInterpolationBlend : uint8_t
	{
		Linear             = 0,
		Cubic              = 1,
		Sinusoidal         = 2,
		EaseInOutExponent2 = 3,
		EaseInOutExponent3 = 4,
		EaseInOutExponent4 = 5,
		EaseInOutExponent5 = 6,
		MAX                = 7
	};

	/**
	 * Enum AnimGraphRuntime.EBoneModificationMode
	 */
	enum class EBoneModificationMode : uint8_t
	{
		BMM_Ignore   = 0,
		BMM_Replace  = 1,
		BMM_Additive = 2,
		BMM_MAX      = 3
	};

	/**
	 * Enum AnimGraphRuntime.EModifyCurveApplyMode
	 */
	enum class EModifyCurveApplyMode : uint8_t
	{
		Add                   = 0,
		Scale                 = 1,
		Blend                 = 2,
		WeightedMovingAverage = 3,
		RemapCurve            = 4,
		MAX                   = 5
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverOutput
	 */
	enum class EPoseDriverOutput : uint8_t
	{
		DrivePoses  = 0,
		DriveCurves = 1,
		MAX         = 2
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverSource
	 */
	enum class EPoseDriverSource : uint8_t
	{
		Rotation    = 0,
		Translation = 1,
		MAX         = 2
	};

	/**
	 * Enum AnimGraphRuntime.EPoseDriverType
	 */
	enum class EPoseDriverType : uint8_t
	{
		SwingAndTwist = 0,
		SwingOnly     = 1,
		Translation   = 2,
		MAX           = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESnapshotSourceMode
	 */
	enum class ESnapshotSourceMode : uint8_t
	{
		NamedSnapshot = 0,
		SnapshotPin   = 1,
		MAX           = 2
	};

	/**
	 * Enum AnimGraphRuntime.ERefPoseType
	 */
	enum class ERefPoseType : uint8_t
	{
		EIT_LocalSpace = 0,
		EIT_Additive   = 1,
		EIT_MAX        = 2
	};

	/**
	 * Enum AnimGraphRuntime.ESimulationSpace
	 */
	enum class ESimulationSpace : uint8_t
	{
		ComponentSpace = 0,
		WorldSpace     = 1,
		BaseBoneSpace  = 2,
		MAX            = 3
	};

	/**
	 * Enum AnimGraphRuntime.EScaleChainInitialLength
	 */
	enum class EScaleChainInitialLength : uint8_t
	{
		FixedDefaultLengthValue = 0,
		Distance                = 1,
		ChainLength             = 2,
		MAX                     = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESequenceEvalReinit
	 */
	enum class ESequenceEvalReinit : uint8_t
	{
		NoReset       = 0,
		StartPosition = 1,
		ExplicitTime  = 2,
		MAX           = 3
	};

	/**
	 * Enum AnimGraphRuntime.ESplineBoneAxis
	 */
	enum class ESplineBoneAxis : uint8_t
	{
		X   = 0,
		Y   = 1,
		Z   = 2,
		MAX = 3
	};

	/**
	 * Enum AnimGraphRuntime.ERBFDistanceMethod
	 */
	enum class ERBFDistanceMethod : uint8_t
	{
		Euclidean  = 0,
		Quaternion = 1,
		SwingAngle = 2,
		MAX        = 3
	};

	/**
	 * Enum AnimGraphRuntime.ERBFFunctionType
	 */
	enum class ERBFFunctionType : uint8_t
	{
		Gaussian    = 0,
		Exponential = 1,
		Linear      = 2,
		Cubic       = 3,
		Quintic     = 4,
		MAX         = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
	 * Size -> 0x00D0 (FullSize[0x0128] - InheritedSize[0x0058])
	 */
	struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
	{
	public:
		float                                                      X;                                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Z;                                                       // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoop;                                                   // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OK6B[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetPlayTimeWhenBlendSpaceChanges;                     // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M84G[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlendFilter                                        BlendFilter;                                             // 0x0080(0x0090) Protected, NativeAccessSpecifierProtected
		TArray<struct FBlendSampleData>                            BlendSampleDataCache;                                    // 0x0110(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class UBlendSpaceBase*                                     PreviousBlendSpace;                                      // 0x0120(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
	 * Size -> 0x00E8 (FullSize[0x0210] - InheritedSize[0x0128])
	 */
	struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0128(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLODEnabled;                                           // 0x013C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NBVZ[0x3];                                   // 0x013D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LookAtLocation;                                          // 0x0140(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F4RB[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SourceSocketName;                                        // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PivotSocketName;                                         // 0x0158(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SocketAxis;                                              // 0x0160(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      SocketBoneReference;                                     // 0x0170(0x0018) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3HU4[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          SocketLocalTransform;                                    // 0x0190(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      PivotSocketBoneReference;                                // 0x01C0(0x0018) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGM8[0x8];                                   // 0x01D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PivotSocketLocalTransform;                               // 0x01E0(0x0030) IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
	{
	public:
		struct FComponentSpacePoseLink                             ComponentPose;                                           // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0044(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1LY[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0050(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0058(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x00B0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN53[0x10];                                  // 0x00E0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
	 * Size -> 0x005C
	 */
	struct FAnimPhysConstraintSetup
	{
	public:
		EAnimPhysLinearConstraintType                              LinearXLimitType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysLinearConstraintType                              LinearYLimitType;                                        // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysLinearConstraintType                              LinearZLimitType;                                        // 0x0002(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHG5[0x1];                                   // 0x0003(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LinearAxesMin;                                           // 0x0004(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LinearAxesMax;                                           // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysAngularConstraintType                             AngularConstraintType;                                   // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysTwistAxis                                         TwistAxis;                                               // 0x001D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JG02[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConeAngle;                                               // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularXAngle;                                           // 0x0024(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularYAngle;                                           // 0x0028(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularZAngle;                                           // 0x002C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMin;                                        // 0x0030(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularLimitsMax;                                        // 0x003C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimPhysTwistAxis                                         AngularTargetAxis;                                       // 0x0048(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61XX[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AngularTarget;                                           // 0x004C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearFullyLocked;                                      // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBHK[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
	 * Size -> 0x0050
	 */
	struct FAnimPhysPlanarLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E558[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          PlaneTransform;                                          // 0x0020(0x0030) Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
	 * Size -> 0x0030
	 */
	struct FAnimPhysSphericalLimit
	{
	public:
		struct FBoneReference                                      DrivingBone;                                             // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             SphereLocalOffset;                                       // 0x0018(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LimitRadius;                                             // 0x0024(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESphericalLimitType                                        LimitType;                                               // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U57Y[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
	 * Size -> 0x02B0 (FullSize[0x03A0] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
	{
	public:
		EAnimPhysSimSpaceType                                      SimulationSpace;                                         // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSF4[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      RelativeSpaceBone;                                       // 0x00F8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bChain;                                                  // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M80K[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BoundBone;                                               // 0x0118(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEnd;                                                // 0x0130(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtents;                                              // 0x0148(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocalJointOffset;                                        // 0x0154(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityScale;                                            // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GravityOverride;                                         // 0x0164(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGravityOverride;                                     // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLinearSpring;                                           // 0x0171(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAngularSpring;                                          // 0x0172(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P40D[0x1];                                   // 0x0173(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearSpringConstant;                                    // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularSpringConstant;                                   // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWind;                                             // 0x017C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWindWasEnabled;                                         // 0x017D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFOZ[0x2];                                   // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WindScale;                                               // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0184(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x0190(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x019C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLinearDamping;                                  // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H21Z[0x3];                                   // 0x01A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LinearDampingOverride;                                   // 0x01AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularDamping;                                 // 0x01B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WMVU[0x3];                                   // 0x01B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularDampingOverride;                                  // 0x01B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAngularBias;                                    // 0x01B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_95OP[0x3];                                   // 0x01B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AngularBiasOverride;                                     // 0x01BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoUpdate;                                               // 0x01C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoEval;                                                 // 0x01C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J78L[0x2];                                   // 0x01C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumSolverIterationsPreUpdate;                            // 0x01C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumSolverIterationsPostUpdate;                           // 0x01C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAnimPhysConstraintSetup                            ConstraintSetup;                                         // 0x01CC(0x005C) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit;                                         // 0x0228(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MRVQ[0x7];                                   // 0x0229(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x0230(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSphericalLimits;                                     // 0x0240(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJJ3[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAnimPhysSphericalLimit>                     SphericalLimits;                                         // 0x0248(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EAnimPhysCollisionType                                     CollisionType;                                           // 0x0258(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXWE[0x3];                                   // 0x0259(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SphereCollisionRadius;                                   // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0260(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MOB[0x134];                                 // 0x026C(0x0134) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
	 * Size -> 0x00C0 (FullSize[0x00F0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ApplyAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x0060(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0065(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJNJ[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0068(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x00C0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AngularRangeLimit
	 * Size -> 0x0030
	 */
	struct FAngularRangeLimit
	{
	public:
		struct FVector                                             LimitMin;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LimitMax;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      Bone;                                                    // 0x0018(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
	 * Size -> 0x0020 (FullSize[0x0110] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
	{
	public:
		TArray<struct FAngularRangeLimit>                          AngularRangeLimits;                                      // 0x00F0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     AngularOffsets;                                          // 0x0100(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
	 * Size -> 0x0038
	 */
	struct FBlendBoneByChannelEntry
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0018(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBlendTranslation;                                       // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRotation;                                          // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendScale;                                             // 0x0032(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL18[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y8IM[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlendBoneByChannelEntry>                    BoneDefinitions;                                         // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TransformsSpace;                                         // 0x0070(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CJA[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InternalBlendAlpha;                                      // 0x0074(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBIsRelevant;                                            // 0x0078(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C1TG[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlendBoneByChannelEntry>                    ValidBoneEntries;                                        // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_BlendListBase : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   BlendPose;                                               // 0x0030(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendTime;                                               // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendType;                                               // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LNGH[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomBlendCurve;                                        // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlendProfile*                                       BlendProfile;                                            // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAlphaBlend>                                 Blends;                                                  // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<float>                                              RemainingBlendTimes;                                     // 0x0088(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		int32_t                                                    LastActiveChildIndex;                                    // 0x0098(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NBAH[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBlendSampleData>                            PerBoneSampleData;                                       // 0x00A0(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_INX0[0x10];                                  // 0x00B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bResetChildOnActivation;                                 // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VZKS[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
	{
	public:
		bool                                                       bActiveValue;                                            // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7B3L[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
	 * Size -> 0x0018 (FullSize[0x00E0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
	{
	public:
		TArray<int32_t>                                            EnumToPoseIndex;                                         // 0x00C8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ActiveEnumValue;                                         // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Y34[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
	{
	public:
		int32_t                                                    ActiveChildIndex;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVXN[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
	 * Size -> 0x0008 (FullSize[0x0130] - InheritedSize[0x0128])
	 */
	struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
	{
	public:
		float                                                      NormalizedTime;                                          // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JRS[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
	 * Size -> 0x0078 (FullSize[0x0168] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EComponentType                                             SourceComponent;                                         // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L3NI[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         DrivingCurve;                                            // 0x0110(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRange;                                               // 0x011C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_68VC[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RangeMin;                                                // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x0128(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x012C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDrivenDestinationMode                                     DestinationMode;                                         // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_231B[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ParameterName;                                           // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0140(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EComponentType                                             TargetComponent;                                         // 0x0158(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AV0L[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAffectTargetTranslationX : 1;                           // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationY : 1;                           // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetTranslationZ : 1;                           // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationX : 1;                              // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationY : 1;                              // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetRotationZ : 1;                              // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleX : 1;                                 // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleY : 1;                                 // 0x015C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectTargetScaleZ : 1;                                 // 0x015D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UKE0[0x2];                                   // 0x015E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EDrivenBoneModificationMode                                ModificationMode;                                        // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUPU[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.SocketReference
	 * Size -> 0x0040
	 */
	struct FSocketReference
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QPJV[0x38];                                  // 0x0008(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.BoneSocketTarget
	 * Size -> 0x0060
	 */
	struct FBoneSocketTarget
	{
	public:
		bool                                                       bUseSocket;                                              // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTHN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BoneReference;                                           // 0x0008(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FSocketReference                                    SocketReference;                                         // 0x0020(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
	 * Size -> 0x00C0 (FullSize[0x01B0] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FVector                                             EffectorLocation;                                        // 0x00F0(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x00FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FHEB[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x0100(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TipBone;                                                 // 0x0160(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x0178(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStartFromTail;                                          // 0x0198(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x0199(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FDE[0x6];                                   // 0x019A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              RotationLimitPerJoints;                                  // 0x01A0(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AnimGraphRuntime.Constraint
	 * Size -> 0x0028
	 */
	struct FConstraint
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EConstraintOffsetOption                                    OffsetOption;                                            // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETransformConstraintType                                   TransformType;                                           // 0x0019(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFilterOptionPerAxis                                PerAxis;                                                 // 0x001A(0x0003) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NOSN[0xB];                                   // 0x001D(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Constraint
	 * Size -> 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FConstraint>                                 ConstraintSetup;                                         // 0x0108(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ConstraintWeights;                                       // 0x0118(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FN83[0x10];                                  // 0x0128(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x0122(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ControlSpace;                                            // 0x0123(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QXK3[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
	 * Size -> 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SourceBone;                                              // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      TargetBone;                                              // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCopyTranslation;                                        // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyRotation;                                           // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyScale;                                              // 0x0122(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECopyBoneDeltaMode                                         CopyMode;                                                // 0x0123(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TranslationMultiplier;                                   // 0x0124(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationMultiplier;                                      // 0x0128(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplier;                                         // 0x012C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
	 * Size -> 0x00B8 (FullSize[0x00E8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
	{
	public:
		TWeakObjectPtr<class USkeletalMeshComponent>               SourceMeshComponent;                                     // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAttachedParent;                                      // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCopyCurves;                                             // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQEZ[0xAE];                                  // 0x003A(0x00AE) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	struct FAnimNode_CurveSource : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SourceBinding;                                           // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R2CI[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CurveSource[0x10];                                       // 0x0050(0x0010) UNKNOWN PROPERTY: InterfaceProperty AnimGraphRuntime.AnimNode_CurveSource.CurveSource
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
	 * Size -> 0x0100 (FullSize[0x01F0] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FTransform                                          EffectorTransform;                                       // 0x00F0(0x0030) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          EffectorTransformSpace;                                  // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NW9[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      EffectorTransformBone;                                   // 0x0128(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x0140(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		EBoneRotationSource                                        EffectorRotationSource;                                  // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C22U[0x7];                                   // 0x01A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      TipBone;                                                 // 0x01A8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RootBone;                                                // 0x01C0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Precision;                                               // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDraw;                                        // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TY2K[0xF];                                   // 0x01E1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
	 * Size -> 0x0078 (FullSize[0x0168] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      RightHandFK;                                             // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandFK;                                              // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      RightHandIK;                                             // 0x0120(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LeftHandIK;                                              // 0x0138(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              IKBonesToMove;                                           // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      HandFKWeight;                                            // 0x0160(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJI3[0x4];                                   // 0x0164(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
	 * Size -> 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPoseLink>                                   BlendPoses;                                              // 0x0040(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FInputBlendPose>                             LayerSetup;                                              // 0x0050(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x0060(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceRotationBlend;                                 // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECurveBlendOption                                          CurveBlendOption;                                        // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlendRootMotionBasedOnRootBone;                         // 0x0072(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasRelevantPoses;                                       // 0x0073(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPerBoneBlendWeight>                         PerBoneBlendWeights;                                     // 0x0078(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		struct FGuid                                               SkeletonGuid;                                            // 0x0088(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGuid                                               VirtualBoneGuid;                                         // 0x0098(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FXFW[0x30];                                  // 0x00A8(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
	 * Size -> 0x0040
	 */
	struct FAnimLegIKDefinition
	{
	public:
		struct FBoneReference                                      IKFootBone;                                              // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      FKFootBone;                                              // 0x0018(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumBonesInLimb;                                          // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      FootBoneForwardAxis;                                     // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      HingeRotationAxis;                                       // 0x0035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableRotationLimit;                                    // 0x0036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0N4[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinRotationAngle;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableKneeTwistCorrection;                              // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y68N[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimLegIKData
	 * Size -> 0x00B0
	 */
	struct FAnimLegIKData
	{
	public:
		unsigned char                                              UnknownData_VDWM[0xB0];                                  // 0x0000(0x00B0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LegIK
	 * Size -> 0x0030 (FullSize[0x0120] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      ReachPrecision;                                          // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterations;                                           // 0x00F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAnimLegIKDefinition>                        LegsDefinition;                                          // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimLegIKData>                              LegsData;                                                // 0x0108(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDVP[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChain
	 * Size -> 0x0040
	 */
	struct FIKChain
	{
	public:
		unsigned char                                              UnknownData_UV8G[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.IKChainLink
	 * Size -> 0x0040
	 */
	struct FIKChainLink
	{
	public:
		unsigned char                                              UnknownData_GSDQ[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_LookAt
	 * Size -> 0x0130 (FullSize[0x0220] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      LookAtBone;                                              // 0x0108(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                LookAtSocket;                                            // 0x0120(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERHU[0x8];                                   // 0x0128(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   LookAtTarget;                                            // 0x0130(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LookAtLocation;                                          // 0x0190(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxisOption                                                LookAtAxis;                                              // 0x019C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSB4[0x3];                                   // 0x019D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLookAtAxis;                                        // 0x01A0(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookAt_Axis;                                             // 0x01AC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseLookUpAxis;                                          // 0x01BC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxisOption                                                LookUpAxis;                                              // 0x01BD(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJ9A[0x2];                                   // 0x01BE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomLookUpAxis;                                        // 0x01C0(0x000C) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAxis                                               LookUp_Axis;                                             // 0x01CC(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LookAtClamp;                                             // 0x01DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInterpolationBlend                                        InterpolationType;                                       // 0x01E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OIJE[0x3];                                   // 0x01E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpolationTime;                                       // 0x01E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpolationTriggerThreashold;                          // 0x01E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TA4[0x34];                                  // 0x01EC(0x0034) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Base;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           Additive;                                                // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMeshSpaceAdditive;                                      // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6YLL[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
	 * Size -> 0x0048 (FullSize[0x0138] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToModify;                                            // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Translation;                                             // 0x0108(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0114(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0120(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      TranslationMode;                                         // 0x012C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      RotationMode;                                            // 0x012D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneModificationMode                                      ScaleMode;                                               // 0x012E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          TranslationSpace;                                        // 0x012F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          RotationSpace;                                           // 0x0130(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneControlSpace                                          ScaleSpace;                                              // 0x0131(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4Z4B[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
	 * Size -> 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ModifyCurve : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0030(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		EModifyCurveApplyMode                                      ApplyMode;                                               // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CUVW[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              CurveValues;                                             // 0x0048(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              LastCurveValues;                                         // 0x0058(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class FName>                                        CurveNames;                                              // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USGG[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
	 * Size -> 0x0040 (FullSize[0x0070] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MultiWayBlend : public FAnimNode_Base
	{
	public:
		TArray<struct FPoseLink>                                   Poses;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              DesiredAlphas;                                           // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAdditiveNode;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNormalizeAlpha;                                         // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMRR[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0054(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5QL1[0x14];                                  // 0x005C(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
	 * Size -> 0x0040 (FullSize[0x0130] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      BoneToObserve;                                           // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          DisplaySpace;                                            // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRelativeToRefPose;                                      // 0x0109(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4WW4[0x2];                                   // 0x010A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Translation;                                             // 0x010C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0118(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0124(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
	 * Size -> 0x0038 (FullSize[0x0090] - InheritedSize[0x0058])
	 */
	struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
	{
	public:
		class UPoseAsset*                                          PoseAsset;                                               // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T8Y[0x30];                                  // 0x0060(0x0030) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
	 * Size -> 0x0020 (FullSize[0x00B0] - InheritedSize[0x0090])
	 */
	struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0090(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          BlendOption;                                             // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRQK[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         CustomCurve;                                             // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
	{
	public:
		class FName                                                PoseName;                                                // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PoseWeight;                                              // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X4OI[0x4];                                   // 0x009C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFParams
	 * Size -> 0x0010
	 */
	struct FRBFParams
	{
	public:
		int32_t                                                    TargetDimensions;                                        // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFFunctionType                                           Function;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERBFDistanceMethod                                         DistanceMethod;                                          // 0x0009(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneAxis                                                  TwistAxis;                                               // 0x000A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LHPA[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WeightThreshold;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.PoseDriverTransform
	 * Size -> 0x0018
	 */
	struct FPoseDriverTransform
	{
	public:
		struct FVector                                             TargetTranslation;                                       // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.PoseDriverTarget
	 * Size -> 0x00A8
	 */
	struct FPoseDriverTarget
	{
	public:
		TArray<struct FPoseDriverTransform>                        BoneTransforms;                                          // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRotator                                            TargetRotation;                                          // 0x0010(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      TargetScale;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomCurve;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q1UK[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          CustomCurve;                                             // 0x0028(0x0070) Edit, NativeAccessSpecifierPublic
		class FName                                                DrivenName;                                              // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S8NQ[0x8];                                   // 0x00A0(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
	 * Size -> 0x00D0 (FullSize[0x0160] - InheritedSize[0x0090])
	 */
	struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
	{
	public:
		struct FPoseLink                                           SourcePose;                                              // 0x0090(0x0010) Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              SourceBones;                                             // 0x00A0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bOnlyDriveSelectedBones;                                 // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SMUO[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              OnlyDriveBones;                                          // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EvalSpaceBone;                                           // 0x00C8(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FRBFParams                                          RBFParams;                                               // 0x00E0(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		EPoseDriverSource                                          DriveSource;                                             // 0x00F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPoseDriverOutput                                          DriveOutput;                                             // 0x00F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KNEQ[0x6];                                   // 0x00F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPoseDriverTarget>                           PoseTargets;                                             // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SourceBone;                                              // 0x0108(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		EBoneAxis                                                  TwistAxis;                                               // 0x0120(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPoseDriverType                                            Type;                                                    // 0x0121(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YMLE[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RadialScaling;                                           // 0x0124(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K6J[0x38];                                  // 0x0128(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_PoseSnapshot : public FAnimNode_Base
	{
	public:
		ESnapshotSourceMode                                        Mode;                                                    // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IGLK[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SnapshotName;                                            // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPoseSnapshot                                       Snapshot;                                                // 0x0040(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EGLI[0x38];                                  // 0x0078(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
	 * Size -> 0x0058
	 */
	struct FRandomPlayerSequenceEntry
	{
	public:
		class UAnimSequence*                                       Sequence;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToPlay;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinLoopCount;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxLoopCount;                                            // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPlayRate;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPlayRate;                                             // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5XN0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         BlendIn;                                                 // 0x0020(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RandomPlayer : public FAnimNode_Base
	{
	public:
		bool                                                       bShuffleMode;                                            // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PKEZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRandomPlayerSequenceEntry>                  Entries;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9L00[0x48];                                  // 0x0048(0x0048) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RefPose
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RefPose : public FAnimNode_Base
	{
	public:
		ERefPoseType                                               RefPoseType;                                             // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MKKZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
	 * Size -> 0x0010 (FullSize[0x0100] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_9VYQ[0x10];                                  // 0x00F0(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
	 * Size -> 0x0480 (FullSize[0x0570] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
	{
	public:
		class UPhysicsAsset*                                       OverridePhysicsAsset;                                    // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OverrideWorldGravity;                                    // 0x00F8(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExternalForce;                                           // 0x0104(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearAccScale;                                 // 0x0110(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLinearVelScale;                                 // 0x011C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentAppliedLinearAccClamp;                          // 0x0128(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          OverlapChannel;                                          // 0x0134(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableWorldGeometry;                                    // 0x0135(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BS4H[0x2];                                   // 0x0136(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESimulationSpace                                           SimulationSpace;                                         // 0x0138(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YLUD[0x3];                                   // 0x0139(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_UNWP[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      BaseBoneRef;                                             // 0x0140(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideWorldGravity;                                   // 0x0158(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EDPH[0x3];                                   // 0x0159(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CachedBoundsScale;                                       // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTransferBoneVelocities;                                 // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFreezeIncomingPoseOnStart;                              // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bComponentSpaceSimulation;                               // 0x0162(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UKKF[0x40D];                                 // 0x0163(0x040D) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Root
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Root : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Result;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_RotateRootBone : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Yaw;                                                     // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                PitchScaleBiasClamp;                                     // 0x0048(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                YawScaleBiasClamp;                                       // 0x0078(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            MeshToComponent;                                         // 0x00A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ActualPitch;                                             // 0x00B4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualYaw;                                               // 0x00B8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RBB[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
	 * Size -> 0x0038 (FullSize[0x0128] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TargetBone;                                              // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      SourceBone;                                              // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoneAxis                                                  RotationAxisToRefer;                                     // 0x0124(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAdditive;                                             // 0x0125(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z1LG[0x2];                                   // 0x0126(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
	 * Size -> 0x00B8 (FullSize[0x01E0] - InheritedSize[0x0128])
	 */
	struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
	{
	public:
		struct FPoseLink                                           BasePose;                                                // 0x0128(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    LODThreshold;                                            // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLODEnabled;                                           // 0x013C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x013D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0FSS[0x2];                                   // 0x013E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0144(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x014C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0150(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_35TA[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0158(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x01A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x01B0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	struct FAnimNode_ScaleChainLength : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0030(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      DefaultChainLength;                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U0IN[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneReference                                      ChainStartBone;                                          // 0x0048(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      ChainEndBone;                                            // 0x0060(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		EScaleChainInitialLength                                   ChainInitialLength;                                      // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5A4M[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x007C(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Alpha;                                                   // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualAlpha;                                             // 0x008C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0090(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bBoneIndicesCached;                                      // 0x0098(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZXC[0x17];                                  // 0x0099(0x0017) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
	 * Size -> 0x0018 (FullSize[0x0070] - InheritedSize[0x0058])
	 */
	struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
	{
	public:
		class UAnimSequenceBase*                                   Sequence;                                                // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplicitTime;                                            // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShouldLoop;                                             // 0x0064(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTeleportToExplicitTime;                                 // 0x0065(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9R92[0x2];                                   // 0x0066(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartPosition;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESequenceEvalReinit                                        ReinitializationBehavior;                                // 0x006C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReinitialized;                                          // 0x006D(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NA01[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Slot
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	struct FAnimNode_Slot : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           Source;                                                  // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                SlotName;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUpdateSourcePose;                                 // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RAEM[0x1F];                                  // 0x0049(0x001F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
	 * Size -> 0x0020
	 */
	struct FSplineIKCachedBoneData
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0018) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    RefSkeletonIndex;                                        // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GA8W[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
	 * Size -> 0x01A0 (FullSize[0x0290] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      StartBone;                                               // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FBoneReference                                      EndBone;                                                 // 0x0108(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		ESplineBoneAxis                                            BoneAxis;                                                // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCalculateSpline;                                    // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V5K8[0x2];                                   // 0x0122(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PointCount;                                              // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  ControlPoints;                                           // 0x0128(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      Roll;                                                    // 0x0138(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistStart;                                              // 0x013C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TwistEnd;                                                // 0x0140(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J3U[0x4];                                   // 0x0144(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAlphaBlend                                         TwistBlend;                                              // 0x0148(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Stretch;                                                 // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Offset;                                                  // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4YZ3[0x70];                                  // 0x0188(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSplineCurves                                       BoneSpline;                                              // 0x01F8(0x0060) NativeAccessSpecifierPrivate
		float                                                      OriginalSplineLength;                                    // 0x0258(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IZO2[0x4];                                   // 0x025C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSplineIKCachedBoneData>                     CachedBoneReferences;                                    // 0x0260(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<float>                                              CachedBoneLengths;                                       // 0x0270(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FQuat>                                       CachedOffsetRotations;                                   // 0x0280(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
	 * Size -> 0x0068 (FullSize[0x0158] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      SpringBone;                                              // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLimitDisplacement;                                      // 0x0108(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K3GU[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxDisplacement;                                         // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringStiffness;                                         // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringDamping;                                           // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ErrorResetThresh;                                        // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoZSpring;                                              // 0x011C(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTranslateX;                                             // 0x011D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTranslateY;                                             // 0x011E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTranslateZ;                                             // 0x011F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateX;                                                // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateY;                                                // 0x0121(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateZ;                                                // 0x0122(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9OR[0x35];                                  // 0x0123(0x0035) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_StateResult
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	struct FAnimNode_StateResult : public FAnimNode_Root
	{	};

	/**
	 * ScriptStruct AnimGraphRuntime.RotationLimit
	 * Size -> 0x0018
	 */
	struct FRotationLimit
	{
	public:
		struct FVector                                             LimitMin;                                                // 0x0000(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LimitMax;                                                // 0x000C(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_Trail
	 * Size -> 0x0190 (FullSize[0x0280] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      TrailBone;                                               // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    ChainLength;                                             // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      ChainBoneAxis;                                           // 0x010C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvertChainBoneAxis : 1;                                // 0x010D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitStretch : 1;                                       // 0x010D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitRotation : 1;                                      // 0x010D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePlanarLimit : 1;                                     // 0x010D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActorSpaceFakeVel : 1;                                  // 0x010D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReorientParentToChild : 1;                              // 0x010D(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZGU6[0x2];                                   // 0x010E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   UnwindingSize;                                           // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RelaxationSpeedScale;                                    // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRuntimeFloatCurve                                  TrailRelaxationSpeed;                                    // 0x0118(0x0078) Edit, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                RelaxationSpeedScaleInputProcessor;                      // 0x0190(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FRotationLimit>                              RotationLimits;                                          // 0x01C0(0x0010) Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     RotationOffsets;                                         // 0x01D0(0x0010) Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FAnimPhysPlanarLimit>                        PlanarLimits;                                            // 0x01E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      StretchLimit;                                            // 0x01F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FakeVelocity;                                            // 0x01F4(0x000C) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBoneReference                                      BaseJoint;                                               // 0x0200(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      LastBoneRotationAnimAlphaBlend;                          // 0x0218(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RMV[0x64];                                  // 0x021C(0x0064) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
	 * Size -> 0x0028
	 */
	struct FReferenceBoneFrame
	{
	public:
		struct FBoneReference                                      Bone;                                                    // 0x0000(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               Axis;                                                    // 0x0018(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
	 * Size -> 0x0088 (FullSize[0x0178] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FReferenceBoneFrame                                 BaseFrame;                                               // 0x00F0(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FReferenceBoneFrame                                 TwistFrame;                                              // 0x0118(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAxis                                               TwistPlaneNormalAxis;                                    // 0x0140(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RangeMax;                                                // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMin;                                             // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemappedMax;                                             // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PW91[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnimCurveParam                                     Curve;                                                   // 0x0160(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4SPP[0x8];                                   // 0x0170(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
	 * Size -> 0x0150 (FullSize[0x0240] - InheritedSize[0x00F0])
	 */
	struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
	{
	public:
		struct FBoneReference                                      IKBone;                                                  // 0x00F0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowStretching : 1;                                    // 0x0108(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_27FI[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartStretchRatio;                                       // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStretchScale;                                         // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           StretchLimits;                                           // 0x0114(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTakeRotationFromEffectorSpace : 1;                      // 0x011C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaintainEffectorRelRot : 1;                             // 0x011C(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BYZ[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EBoneControlSpace                                          EffectorLocationSpace;                                   // 0x0120(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LOFO[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                EffectorSpaceBoneName;                                   // 0x0128(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             EffectorLocation;                                        // 0x0130(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H120[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   EffectorTarget;                                          // 0x0140(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		EBoneControlSpace                                          JointTargetLocationSpace;                                // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KU20[0x3];                                   // 0x01A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             JointTargetLocation;                                     // 0x01A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                JointTargetSpaceBoneName;                                // 0x01B0(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OMRY[0x8];                                   // 0x01B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBoneSocketTarget                                   JointTarget;                                             // 0x01C0(0x0060) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAllowTwist;                                             // 0x0220(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G1CA[0x3];                                   // 0x0221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAxis                                               TwistAxis;                                               // 0x0224(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bNoTwist;                                                // 0x0234(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFQO[0xB];                                   // 0x0235(0x000B) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
	 * Size -> 0x00C8 (FullSize[0x00F8] - InheritedSize[0x0030])
	 */
	struct FAnimNode_TwoWayBlend : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           A;                                                       // 0x0030(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FPoseLink                                           B;                                                       // 0x0040(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EAnimAlphaInputType                                        AlphaInputType;                                          // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2FI2[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Alpha;                                                   // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBias                                     AlphaScaleBias;                                          // 0x0058(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAlphaBoolEnabled;                                       // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTAU[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInputAlphaBoolBlend                                AlphaBoolBlend;                                          // 0x0068(0x0050) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                AlphaCurveName;                                          // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FInputScaleBiasClamp                                AlphaScaleBiasClamp;                                     // 0x00C0(0x0030) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InternalBlendAlpha;                                      // 0x00F0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAIsRelevant;                                            // 0x00F4(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBIsRelevant;                                            // 0x00F5(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bResetChildOnActivation;                                 // 0x00F6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SGS5[0x1];                                   // 0x00F7(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
	 * Size -> 0x0220 (FullSize[0x0790] - InheritedSize[0x0570])
	 */
	struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
	{
	public:
		unsigned char                                              UnknownData_NNI8[0x220];                                 // 0x0570(0x0220) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFEntry
	 * Size -> 0x0010
	 */
	struct FRBFEntry
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AnimGraphRuntime.RBFTarget
	 * Size -> 0x0078 (FullSize[0x0088] - InheritedSize[0x0010])
	 */
	struct FRBFTarget : public FRBFEntry
	{
	public:
		float                                                      ScaleFactor;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyCustomCurve;                                       // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0EZ8[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRichCurve                                          CustomCurve;                                             // 0x0018(0x0070) Edit, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
