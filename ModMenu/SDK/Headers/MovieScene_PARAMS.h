#pragma once
#pragma warning(disable: 4267)

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    09/09/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "CoreUObject_FFrameRate.h"
#include "CoreUObject_FFrameTime.h"
#include "CoreUObject_FQualifiedFrameTime.h"
#include "BasicTypes_TArray.h"
#include "MovieScene_FMovieSceneObjectBindingID.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    // --------------------------------------------------
    // # Classes
    // --------------------------------------------------
    /**
     * 
     * Size -> 0x0000
     */
    class IMovieSceneEasingFunction_OnEvaluate_Params
    {
    public:
        float                                                        Interp;                                                  //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        ReturnValue;                                             //  0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_Stop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetTimeRange_Params
    {
    public:
        float                                                        StartTime;                                               //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        Duration;                                                //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetPlayRate_Params
    {
    public:
        float                                                        PlayRate;                                                //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetPlaybackRange_Params
    {
    public:
        float                                                        NewStartTime;                                            //  0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        float                                                        NewEndTime;                                              //  0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetPlaybackPosition_Params
    {
    public:
        float                                                        NewPlaybackPosition;                                     //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetFrameRate_Params
    {
    public:
        CoreUObject::FFrameRate                                      FrameRate;                                               //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetFrameRange_Params
    {
    public:
        int32_t                                                      StartFrame;                                              //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        int32_t                                                      Duration;                                                //  0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_SetDisableCameraCuts_Params
    {
    public:
        bool                                                         bInDisableCameraCuts;                                    //  0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_ScrubToSeconds_Params
    {
    public:
        float                                                        TimeInSeconds;                                           //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_ScrubToFrame_Params
    {
    public:
        CoreUObject::FFrameTime                                      NewPosition;                                             //  0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_Scrub_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_PlayToSeconds_Params
    {
    public:
        float                                                        TimeInSeconds;                                           //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_PlayToFrame_Params
    {
    public:
        CoreUObject::FFrameTime                                      NewPosition;                                             //  0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_PlayReverse_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_PlayLooping_Params
    {
    public:
        int32_t                                                      NumLoops;                                                //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_Play_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_Pause_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_JumpToSeconds_Params
    {
    public:
        float                                                        TimeInSeconds;                                           //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_JumpToPosition_Params
    {
    public:
        float                                                        NewPlaybackPosition;                                     //  0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_JumpToFrame_Params
    {
    public:
        CoreUObject::FFrameTime                                      NewPosition;                                             //  0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_IsReversed_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_IsPlaying_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_IsPaused_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GoToEndAndStop_Params
    {
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetStartTime_Params
    {
    public:
        CoreUObject::FQualifiedFrameTime                             ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetPlayRate_Params
    {
    public:
        float                                                        ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetPlaybackStart_Params
    {
    public:
        float                                                        ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetPlaybackPosition_Params
    {
    public:
        float                                                        ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetPlaybackEnd_Params
    {
    public:
        float                                                        ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetObjectBindings_Params
    {
    public:
        CoreUObject::UObject*                                        InObject;                                                //  0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<MovieScene::FMovieSceneObjectBindingID>   ReturnValue;                                             //  0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetLength_Params
    {
    public:
        float                                                        ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetFrameRate_Params
    {
    public:
        CoreUObject::FFrameRate                                      ReturnValue;                                             //  0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetFrameDuration_Params
    {
    public:
        int32_t                                                      ReturnValue;                                             //  0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetEndTime_Params
    {
    public:
        CoreUObject::FQualifiedFrameTime                             ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetDuration_Params
    {
    public:
        CoreUObject::FQualifiedFrameTime                             ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetDisableCameraCuts_Params
    {
    public:
        bool                                                         ReturnValue;                                             //  0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetCurrentTime_Params
    {
    public:
        CoreUObject::FQualifiedFrameTime                             ReturnValue;                                             //  0x0000(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_GetBoundObjects_Params
    {
    public:
        MovieScene::FMovieSceneObjectBindingID                       ObjectBinding;                                           //  0x0000(0x0018)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
        BasicTypes::TArray<CoreUObject::UObject*>                    ReturnValue;                                             //  0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
    };

    /**
     * 
     * Size -> 0x0000
     */
    class UMovieSceneSequencePlayer_ChangePlaybackDirection_Params
    {
    };

}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif