#pragma once

/**
 * ----------------------------------------
 * |        Generated By CheatGear        |
 * ----------------------------------------
 * | Game:    SportsScramble              |
 * | Version: 1                           |
 * | Date:    10/14/2024                  |
 * ----------------------------------------
 */

#include <cstdint>
#include <vector>
#include <string>
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "MovieScene_ENUMS.h"
#include "CoreUObject_FFrameNumber.h"
#include "MovieScene_FMovieSceneSequencePlaybackSettings.h"
#include "MovieScene_FMovieSceneRootEvaluationTemplateInstance.h"
#include "CoreUObject_UObject.h"
#include "CoreUObject_FFrameRate.h"
#include "CoreUObject_FFrameTime.h"
#include "CoreUObject_FQualifiedFrameTime.h"
#include "BasicTypes_TArray.h"
#include "MovieScene_FMovieSceneObjectBindingID.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::MovieScene { class UMovieSceneSequence; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieScene
{
    /**
     * Class /Script/MovieScene.MovieSceneSequencePlayer
     * Size -> 0x07A0 (FullSize[0x07C8] - InheritedSize[0x0028])
     */
    class UMovieSceneSequencePlayer : public CoreUObject::UObject
    {
    public:
        uint8_t                                                      UnknownData_0000[0x348];                                 //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnPlay;                                                  //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnPlayReverse;                                           //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnStop;                                                  //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnPause;                                                 //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        BasicTypes::UScriptMulticastDelegate                         OnFinished;                                              //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        MovieScene::EMovieScenePlayerStatus                          Status;                                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bReversePlayback : 1;                                    //  BIT_FIELD NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0xB];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::UMovieSceneSequence*                             Sequence;                                                //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FFrameNumber                                    StartTime;                                               //  NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      DurationFrames;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      CurrentNumLoops;                                         //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x14];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::FMovieSceneSequencePlaybackSettings              PlaybackSettings;                                        //  Protected, NativeAccessSpecifierProtected
        MovieScene::FMovieSceneRootEvaluationTemplateInstance        RootTemplateInstance;                                    //  Transient, Protected, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0004[0x90];                                  //  MISSED OFFSET (PADDING)

    public:
        void Stop();
        void SetTimeRange(float StartTime, float Duration);
        void SetPlayRate(float PlayRate);
        void SetPlaybackRange(float NewStartTime, float NewEndTime);
        void SetPlaybackPosition(float NewPlaybackPosition);
        void SetFrameRate(const CoreUObject::FFrameRate& FrameRate);
        void SetFrameRange(int32_t StartFrame, int32_t Duration);
        void SetDisableCameraCuts(bool bInDisableCameraCuts);
        void ScrubToSeconds(float TimeInSeconds);
        void ScrubToFrame(const CoreUObject::FFrameTime& NewPosition);
        void Scrub();
        void PlayToSeconds(float TimeInSeconds);
        void PlayToFrame(const CoreUObject::FFrameTime& NewPosition);
        void PlayReverse();
        void PlayLooping(int32_t NumLoops);
        void Play();
        void Pause();
        void JumpToSeconds(float TimeInSeconds);
        void JumpToPosition(float NewPlaybackPosition);
        void JumpToFrame(const CoreUObject::FFrameTime& NewPosition);
        bool IsReversed();
        bool IsPlaying();
        bool IsPaused();
        void GoToEndAndStop();
        CoreUObject::FQualifiedFrameTime GetStartTime();
        float GetPlayRate();
        float GetPlaybackStart();
        float GetPlaybackPosition();
        float GetPlaybackEnd();
        BasicTypes::TArray<MovieScene::FMovieSceneObjectBindingID> GetObjectBindings(CoreUObject::UObject* InObject);
        float GetLength();
        CoreUObject::FFrameRate GetFrameRate();
        int32_t GetFrameDuration();
        CoreUObject::FQualifiedFrameTime GetEndTime();
        CoreUObject::FQualifiedFrameTime GetDuration();
        bool GetDisableCameraCuts();
        CoreUObject::FQualifiedFrameTime GetCurrentTime();
        BasicTypes::TArray<CoreUObject::UObject*> GetBoundObjects(const MovieScene::FMovieSceneObjectBindingID& ObjectBinding);
        void ChangePlaybackDirection();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieScene.MovieSceneSequencePlayer");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
