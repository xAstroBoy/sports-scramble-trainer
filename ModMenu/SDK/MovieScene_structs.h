﻿#pragma once

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
	 * Enum MovieScene.EMovieSceneKeyInterpolation
	 */
	enum class EMovieSceneKeyInterpolation : uint8_t
	{
		Auto     = 0,
		User     = 1,
		Break    = 2,
		Linear   = 3,
		Constant = 4,
		MAX      = 5
	};

	/**
	 * Enum MovieScene.EMovieSceneBlendType
	 */
	enum class EMovieSceneBlendType : uint8_t
	{
		Absolute = 0,
		Additive = 1,
		Relative = 2,
		MAX      = 3
	};

	/**
	 * Enum MovieScene.EMovieSceneBuiltInEasing
	 */
	enum class EMovieSceneBuiltInEasing : uint8_t
	{
		Linear     = 0,
		SinIn      = 1,
		SinOut     = 2,
		SinInOut   = 3,
		QuadIn     = 4,
		QuadOut    = 5,
		QuadInOut  = 6,
		CubicIn    = 7,
		CubicOut   = 8,
		CubicInOut = 9,
		QuartIn    = 10,
		QuartOut   = 11,
		QuartInOut = 12,
		QuintIn    = 13,
		QuintOut   = 14,
		QuintInOut = 15,
		ExpoIn     = 16,
		ExpoOut    = 17,
		ExpoInOut  = 18,
		CircIn     = 19,
		CircOut    = 20,
		CircInOut  = 21,
		MAX        = 22
	};

	/**
	 * Enum MovieScene.EEvaluationMethod
	 */
	enum class EEvaluationMethod : uint8_t
	{
		Static = 0,
		Swept  = 1,
		MAX    = 2
	};

	/**
	 * Enum MovieScene.EUpdateClockSource
	 */
	enum class EUpdateClockSource : uint8_t
	{
		Tick     = 0,
		Platform = 1,
		Audio    = 2,
		MAX      = 3
	};

	/**
	 * Enum MovieScene.EMovieSceneEvaluationType
	 */
	enum class EMovieSceneEvaluationType : uint8_t
	{
		FrameLocked   = 0,
		WithSubFrames = 1,
		MAX           = 2
	};

	/**
	 * Enum MovieScene.EMovieScenePlayerStatus
	 */
	enum class EMovieScenePlayerStatus : uint8_t
	{
		Stopped   = 0,
		Playing   = 1,
		Recording = 2,
		Scrubbing = 3,
		Jumping   = 4,
		Stepping  = 5,
		Paused    = 6,
		MAX       = 7
	};

	/**
	 * Enum MovieScene.EMovieSceneObjectBindingSpace
	 */
	enum class EMovieSceneObjectBindingSpace : uint8_t
	{
		Local = 0,
		Root  = 1,
		MAX   = 2
	};

	/**
	 * Enum MovieScene.EMovieSceneCompletionMode
	 */
	enum class EMovieSceneCompletionMode : uint8_t
	{
		KeepState      = 0,
		RestoreState   = 1,
		ProjectDefault = 2,
		MAX            = 3
	};

	/**
	 * Enum MovieScene.ESectionEvaluationFlags
	 */
	enum class ESectionEvaluationFlags : uint8_t
	{
		None     = 0,
		PreRoll  = 1,
		PostRoll = 2,
		MAX      = 3
	};

	/**
	 * Enum MovieScene.ESpawnOwnership
	 */
	enum class ESpawnOwnership : uint8_t
	{
		InnerSequence  = 0,
		MasterSequence = 1,
		External       = 2,
		MAX            = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieScene.MovieSceneSectionEvalOptions
	 * Size -> 0x0002
	 */
	struct FMovieSceneSectionEvalOptions
	{
	public:
		bool                                                       bCanEditCompletionMode;                                  // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMovieSceneCompletionMode                                  CompletionMode;                                          // 0x0001(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEasingSettings
	 * Size -> 0x0038
	 */
	struct FMovieSceneEasingSettings
	{
	public:
		int32_t                                                    AutoEaseInDuration;                                      // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AutoEaseOutDuration;                                     // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseIn[0x10];                                            // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty MovieScene.MovieSceneEasingSettings.EaseIn
		bool                                                       bManualEaseIn;                                           // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9PFS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseInDuration;                                    // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EaseOut[0x10];                                           // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty MovieScene.MovieSceneEasingSettings.EaseOut
		bool                                                       bManualEaseOut;                                          // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BI1E[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ManualEaseOutDuration;                                   // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFrameRange
	 * Size -> 0x0010
	 */
	struct FMovieSceneFrameRange
	{
	public:
		unsigned char                                              UnknownData_GY1W[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.OptionalMovieSceneBlendType
	 * Size -> 0x0002
	 */
	struct FOptionalMovieSceneBlendType
	{
	public:
		EMovieSceneBlendType                                       BlendType;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsValid;                                                // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackEvalOptions
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackEvalOptions
	{
	public:
		bool                                                       bCanEvaluateNearestSection : 1;                          // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvalNearestSection : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateInPreroll : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateInPostroll : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateNearestSection : 1;                             // 0x0000(0x0001) BIT_FIELD Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMUL[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSpawnable
	 * Size -> 0x0090
	 */
	struct FMovieSceneSpawnable
	{
	public:
		struct FTransform                                          SpawnTransform;                                          // 0x0000(0x0030) Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		TArray<class FName>                                        Tags;                                                    // 0x0030(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0050(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UObject*                                             ObjectTemplate;                                          // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FGuid>                                       ChildPossessables;                                       // 0x0068(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		ESpawnOwnership                                            Ownership;                                               // 0x0078(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P0WB[0x7];                                   // 0x0079(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LevelName;                                               // 0x0080(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HVTM[0x8];                                   // 0x0088(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieScenePossessable
	 * Size -> 0x0048
	 */
	struct FMovieScenePossessable
	{
	public:
		TArray<class FName>                                        Tags;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
		struct FGuid                                               Guid;                                                    // 0x0010(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              Name;                                                    // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              PossessedObjectClass;                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               ParentGuid;                                              // 0x0038(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBinding
	 * Size -> 0x0030
	 */
	struct FMovieSceneBinding
	{
	public:
		struct FGuid                                               ObjectGuid;                                              // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              BindingName;                                             // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMovieSceneTrack*>                            Tracks;                                                  // 0x0020(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneObjectBindingID
	 * Size -> 0x0018
	 */
	struct FMovieSceneObjectBindingID
	{
	public:
		int32_t                                                    SequenceID;                                              // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMovieSceneObjectBindingSpace                              Space;                                                   // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SJEG[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               Guid;                                                    // 0x0008(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBindingOverrideData
	 * Size -> 0x0024
	 */
	struct FMovieSceneBindingOverrideData
	{
	public:
		struct FMovieSceneObjectBindingID                          ObjectBindingId;                                         // 0x0000(0x0018) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesDefault;                                       // 0x0020(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AIM[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackIdentifier
	 * Size -> 0x0004
	 */
	struct FMovieSceneTrackIdentifier
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegment
	 * Size -> 0x0058
	 */
	struct FMovieSceneSegment
	{
	public:
		unsigned char                                              UnknownData_SR95[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTrackSegments
	 * Size -> 0x0020
	 */
	struct FMovieSceneEvaluationTrackSegments
	{
	public:
		TArray<int32_t>                                            SegmentIdentifierToIndex;                                // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneSegment>                          SortedSegments;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.SectionEvaluationDataTree
	 * Size -> 0x0060
	 */
	struct FSectionEvaluationDataTree
	{
	public:
		unsigned char                                              UnknownData_18LW[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
	 * Size -> 0x0038
	 */
	struct FMovieSceneEvalTemplatePtr
	{
	public:
		unsigned char                                              UnknownData_6EV3[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
	 * Size -> 0x0038
	 */
	struct FMovieSceneTrackImplementationPtr
	{
	public:
		unsigned char                                              UnknownData_XURI[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTrack
	 * Size -> 0x00F8
	 */
	struct FMovieSceneEvaluationTrack
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		uint16_t                                                   EvaluationPriority;                                      // 0x0010(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EEvaluationMethod                                          EvaluationMethod;                                        // 0x0012(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZZSF[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEvaluationTrackSegments                  Segments;                                                // 0x0018(0x0020) NativeAccessSpecifierPrivate
		class UMovieSceneTrack*                                    SourceTrack;                                             // 0x0038(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSectionEvaluationDataTree                          EvaluationTree;                                          // 0x0040(0x0060) NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvalTemplatePtr>                  ChildTemplates;                                          // 0x00A0(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FMovieSceneTrackImplementationPtr                   TrackTemplate;                                           // 0x00B0(0x0038) NativeAccessSpecifierPrivate
		class FName                                                EvaluationGroup;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEvaluateInPreroll : 1;                                  // 0x00F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEvaluateInPostroll : 1;                                 // 0x00F0(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OW9P[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationGroupLUTIndex
	{
	public:
		int32_t                                                    LUTOffset;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumInitPtrs;                                             // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEvalPtrs;                                             // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceID
	 * Size -> 0x0004
	 */
	struct FMovieSceneSequenceID
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
	 * Size -> 0x0008
	 */
	struct FMovieSceneEvaluationFieldTrackPtr
	{
	public:
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTrackIdentifier                          TrackIdentifier;                                         // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSegmentIdentifier
	 * Size -> 0x0004
	 */
	struct FMovieSceneSegmentIdentifier
	{
	public:
		int32_t                                                    IdentifierIndex;                                         // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
	 * Size -> 0x0004 (FullSize[0x000C] - InheritedSize[0x0008])
	 */
	struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
	{
	public:
		struct FMovieSceneSegmentIdentifier                        SegmentID;                                               // 0x0008(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationGroup
	 * Size -> 0x0020
	 */
	struct FMovieSceneEvaluationGroup
	{
	public:
		TArray<struct FMovieSceneEvaluationGroupLUTIndex>          LUTIndices;                                              // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneEvaluationFieldSegmentPtr>        SegmentPtrLUT;                                           // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationKey
	 * Size -> 0x000C
	 */
	struct FMovieSceneEvaluationKey
	{
	public:
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneTrackIdentifier                          TrackIdentifier;                                         // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SectionIndex;                                            // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
	 * Size -> 0x0010
	 */
	struct FMovieSceneOrderedEvaluationKey
	{
	public:
		struct FMovieSceneEvaluationKey                            Key;                                                     // 0x0000(0x000C) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   EvaluationIndex;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationMetaData
	 * Size -> 0x0070
	 */
	struct FMovieSceneEvaluationMetaData
	{
	public:
		TArray<struct FMovieSceneSequenceID>                       ActiveSequences;                                         // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneOrderedEvaluationKey>             ActiveEntities;                                          // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FMovieSceneSequenceID, uint32_t>               SubTemplateSerialNumbers;                                // 0x0020(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationField
	 * Size -> 0x0030
	 */
	struct FMovieSceneEvaluationField
	{
	public:
		TArray<struct FMovieSceneFrameRange>                       Ranges;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationGroup>                  Groups;                                                  // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneEvaluationMetaData>               MetaData;                                                // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceTransform
	 * Size -> 0x000C
	 */
	struct FMovieSceneSequenceTransform
	{
	public:
		float                                                      TimeScale;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameTime                                          Offset;                                                  // 0x0004(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceInstanceDataPtr
	{
	public:
		unsigned char                                              UnknownData_6M14[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSequenceData
	 * Size -> 0x00A8
	 */
	struct FMovieSceneSubSequenceData
	{
	public:
		struct FSoftObjectPath                                     Sequence;                                                // 0x0000(0x0018) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceTransform                        RootToSequenceTransform;                                 // 0x0018(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FFrameRate                                          TickResolution;                                          // 0x0024(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               DeterministicSequenceID;                                 // 0x002C(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PlayRange;                                               // 0x0030(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PreRollRange;                                            // 0x0040(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FMovieSceneFrameRange                               PostRollRange;                                           // 0x0050(0x0010) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    HierarchicalBias;                                        // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G7MQ[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequenceInstanceDataPtr                  InstanceData;                                            // 0x0068(0x0018) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YIC4[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGuid                                               SubSectionSignature;                                     // 0x0088(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneSequenceTransform                        OuterToInnerTransform;                                   // 0x0098(0x000C) NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q6XY[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
	 * Size -> 0x0018
	 */
	struct FMovieSceneSequenceHierarchyNode
	{
	public:
		struct FMovieSceneSequenceID                               ParentID;                                                // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U41R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FMovieSceneSequenceID>                       Children;                                                // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceHierarchy
	 * Size -> 0x00A0
	 */
	struct FMovieSceneSequenceHierarchy
	{
	public:
		TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                            // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                               // 0x0050(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
	 * Size -> 0x0004
	 */
	struct FMovieSceneEvaluationTemplateSerialNumber
	{
	public:
		uint32_t                                                   Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
	 * Size -> 0x00A8
	 */
	struct FMovieSceneTemplateGenerationLedger
	{
	public:
		struct FMovieSceneTrackIdentifier                          LastTrackIdentifier;                                     // 0x0000(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S9K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FGuid, struct FMovieSceneTrackIdentifier>      TrackSignatureToTrackIdentifier;                         // 0x0008(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		TMap<struct FGuid, struct FMovieSceneFrameRange>           SubSectionRanges;                                        // 0x0058(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackFieldData
	 * Size -> 0x0060
	 */
	struct FMovieSceneTrackFieldData
	{
	public:
		unsigned char                                              UnknownData_IGMF[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSectionFieldData
	 * Size -> 0x0060
	 */
	struct FMovieSceneSubSectionFieldData
	{
	public:
		unsigned char                                              UnknownData_VSMB[0x60];                                  // 0x0000(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationTemplate
	 * Size -> 0x02F0
	 */
	struct FMovieSceneEvaluationTemplate
	{
	public:
		TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                                  // 0x0000(0x0050) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_51A3[0x50];                                  // 0x0050(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneEvaluationField                          EvaluationField;                                         // 0x00A0(0x0030) NativeAccessSpecifierPublic
		struct FMovieSceneSequenceHierarchy                        Hierarchy;                                               // 0x00D0(0x00A0) NativeAccessSpecifierPublic
		struct FGuid                                               SequenceSignature;                                       // 0x0170(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneEvaluationTemplateSerialNumber           TemplateSerialNumber;                                    // 0x0180(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5N6N[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTemplateGenerationLedger                 TemplateLedger;                                          // 0x0188(0x00A8) NativeAccessSpecifierPrivate
		struct FMovieSceneTrackFieldData                           TrackFieldData;                                          // 0x0230(0x0060) NativeAccessSpecifierPrivate
		struct FMovieSceneSubSectionFieldData                      SubSectionFieldData;                                     // 0x0290(0x0060) NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
	 * Size -> 0x0040
	 */
	struct FMovieSceneSequencePlaybackSettings
	{
	public:
		int32_t                                                    LoopCount;                                               // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomStartTime;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS24[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartTime;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRestoreState;                                           // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableMovementInput;                                   // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableLookAtInput;                                     // 0x0012(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidePlayer;                                             // 0x0013(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideHud;                                                // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableCameraCuts;                                      // 0x0015(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPauseAtEnd;                                             // 0x0016(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IX35[0x1];                                   // 0x0017(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             InstanceData;                                            // 0x0018(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BindingOverrides[0x10];                                  // 0x0020(0x0010) UNKNOWN PROPERTY: InterfaceProperty MovieScene.MovieSceneSequencePlaybackSettings.BindingOverrides
		unsigned char                                              UnknownData_9T45[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
	 * Size -> 0x0300
	 */
	struct FMovieSceneRootEvaluationTemplateInstance
	{
	public:
		unsigned char                                              UnknownData_IEYA[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FMovieSceneSequenceID, class UObject*>         DirectorInstances;                                       // 0x0018(0x0050) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OBRN[0x298];                                 // 0x0068(0x0298) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSectionParameters
	 * Size -> 0x0018
	 */
	struct FMovieSceneSectionParameters
	{
	public:
		struct FFrameNumber                                        StartFrameOffset;                                        // 0x0000(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TimeScale;                                               // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HierarchicalBias;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartOffset;                                             // 0x000C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PrerollTime;                                             // 0x0010(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PostrollTime;                                            // 0x0014(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplateBase
	 * Size -> 0x0010
	 */
	struct FMovieSceneEvalTemplateBase
	{
	public:
		unsigned char                                              UnknownData_ZIIO[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvalTemplate
	 * Size -> 0x0010 (FullSize[0x0020] - InheritedSize[0x0010])
	 */
	struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
	{
	public:
		EMovieSceneCompletionMode                                  CompletionMode;                                          // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z7DA[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMovieSceneSection*                                  SourceSection;                                           // 0x0018(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackLabels
	 * Size -> 0x0010
	 */
	struct FMovieSceneTrackLabels
	{
	public:
		TArray<class FString>                                      Strings;                                                 // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneExpansionState
	 * Size -> 0x0001
	 */
	struct FMovieSceneExpansionState
	{
	public:
		bool                                                       bExpanded;                                               // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEditorData
	 * Size -> 0x00E0
	 */
	struct FMovieSceneEditorData
	{
	public:
		TMap<class FString, struct FMovieSceneExpansionState>      ExpansionStates;                                         // 0x0000(0x0050) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     ViewStart;                                               // 0x0050(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ViewEnd;                                                 // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     WorkStart;                                               // 0x0060(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     WorkEnd;                                                 // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MarkedFrames[0x50];                                      // 0x0070(0x0050) UNKNOWN PROPERTY: SetProperty MovieScene.MovieSceneEditorData.MarkedFrames
		struct FFloatRange                                         WorkingRange;                                            // 0x00C0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFloatRange                                         ViewRange;                                               // 0x00D0(0x0010) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTimecodeSource
	 * Size -> 0x0018
	 */
	struct FMovieSceneTimecodeSource
	{
	public:
		struct FTimecode                                           Timecode;                                                // 0x0000(0x0014) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        DeltaFrame;                                              // 0x0014(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneChannel
	 * Size -> 0x0008
	 */
	struct FMovieSceneChannel
	{
	public:
		unsigned char                                              UnknownData_9BRV[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneBoolChannel
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FMovieSceneBoolChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		bool                                                       DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J3OT[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2DLX[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneByteChannel
	 * Size -> 0x0090 (FullSize[0x0098] - InheritedSize[0x0008])
	 */
	struct FMovieSceneByteChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              DefaultValue;                                            // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0019(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0N98[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UEnum*                                               Enum;                                                    // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OOUP[0x60];                                  // 0x0038(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyHandleMap
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
	{	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEmptyStruct
	 * Size -> 0x0001
	 */
	struct FMovieSceneEmptyStruct
	{
	public:
		unsigned char                                              UnknownData_I4HJ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneEvaluationOperand
	 * Size -> 0x0014
	 */
	struct FMovieSceneEvaluationOperand
	{
	public:
		struct FGuid                                               ObjectBindingId;                                         // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMovieSceneSequenceID                               SequenceID;                                              // 0x0010(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSubSectionData
	 * Size -> 0x001C
	 */
	struct FMovieSceneSubSectionData
	{
	public:
		TWeakObjectPtr<class UMovieSceneSubSection>                Section;                                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               ObjectBindingId;                                         // 0x0008(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESectionEvaluationFlags                                    Flags;                                                   // 0x0018(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F49K[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTangentData
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentData
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IM2N[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArriveTangentWeight;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatValue
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValue
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0004(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0005(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7GE4[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTangentData                              Tangent;                                                 // 0x0008(0x0014) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneFloatChannel
	 * Size -> 0x0098 (FullSize[0x00A0] - InheritedSize[0x0008])
	 */
	struct FMovieSceneFloatChannel : public FMovieSceneChannel
	{
	public:
		ERichCurveExtrapolation                                    PreInfinityExtrap;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveExtrapolation                                    PostInfinityExtrap;                                      // 0x0009(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F9FJ[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FMovieSceneFloatValue>                       Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      DefaultValue;                                            // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_E418[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneKeyHandleMap                             KeyHandles;                                              // 0x0038(0x0060) Transient, NativeAccessSpecifierPrivate
		struct FFrameRate                                          TickResolution;                                          // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneIntegerChannel
	 * Size -> 0x0088 (FullSize[0x0090] - InheritedSize[0x0008])
	 */
	struct FMovieSceneIntegerChannel : public FMovieSceneChannel
	{
	public:
		TArray<struct FFrameNumber>                                Times;                                                   // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		int32_t                                                    DefaultValue;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bHasDefaultValue;                                        // 0x001C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0QDZ[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Values;                                                  // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JEW0[0x60];                                  // 0x0030(0x0060) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyStruct
	 * Size -> 0x0008
	 */
	struct FMovieSceneKeyStruct
	{
	public:
		unsigned char                                              UnknownData_R19I[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneKeyTimeStruct
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
	{
	public:
		struct FFrameNumber                                        Time;                                                    // 0x0008(0x0004) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B39E[0x1C];                                  // 0x000C(0x001C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertySectionData
	 * Size -> 0x0028
	 */
	struct FMovieScenePropertySectionData
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyPath;                                            // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FunctionName;                                            // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NotifyFunctionName;                                      // 0x0020(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MovieScene.MovieScenePropertySectionTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FMovieScenePropertySectionData                      PropertyData;                                            // 0x0020(0x0028) Protected, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct MovieScene.SectionEvaluationData
	 * Size -> 0x000C
	 */
	struct FSectionEvaluationData
	{
	public:
		int32_t                                                    ImplIndex;                                               // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FFrameNumber                                        ForcedTime;                                              // 0x0004(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESectionEvaluationFlags                                    Flags;                                                   // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M078[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.MovieSceneSequenceInstanceData
	 * Size -> 0x0008
	 */
	struct FMovieSceneSequenceInstanceData
	{
	public:
		unsigned char                                              UnknownData_9EKX[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieScene.TestMovieSceneEvalTemplate
	 * Size -> 0x0000 (FullSize[0x0020] - InheritedSize[0x0020])
	 */
	struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
	{	};

	/**
	 * ScriptStruct MovieScene.MovieSceneTrackImplementation
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
