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
#include "MovieScene_FMovieSceneSequencePlaybackSettings.h"
#include "CoreUObject_FSoftObjectPath.h"
#include "BasicTypes_TArray.h"
#include "Engine_AActor.h"
#include "MovieScene_FMovieSceneObjectBindingID.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::LevelSequence { class ULevelSequencePlayer; };
namespace CG::LevelSequence { class ULevelSequence; };
namespace CG::LevelSequence { class ULevelSequenceBurnInOptions; };
namespace CG::MovieScene { class UMovieSceneBindingOverrides; };
namespace CG::CoreUObject { class UObject; };
namespace CG::LevelSequence { class ULevelSequenceBurnIn; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::LevelSequence
{
    /**
     * Class /Script/LevelSequence.LevelSequenceActor
     * Size -> 0x00A8 (FullSize[0x03D0] - InheritedSize[0x0328])
     */
    class ALevelSequenceActor : public Engine::AActor
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bAutoPlay;                                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        MovieScene::FMovieSceneSequencePlaybackSettings              PlaybackSettings;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
        LevelSequence::ULevelSequencePlayer*                         SequencePlayer;                                          //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        CoreUObject::FSoftObjectPath                                 LevelSequence;                                           //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::AActor*>                          AdditionalEventReceivers;                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
        LevelSequence::ULevelSequenceBurnInOptions*                  BurnInOptions;                                           //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        MovieScene::UMovieSceneBindingOverrides*                     BindingOverrides;                                        //  BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideInstanceData;                                   //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::UObject*                                        DefaultInstanceData;                                     //  BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
        LevelSequence::ULevelSequenceBurnIn*                         BurnInInstance;                                          //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        void SetSequence(LevelSequence::ULevelSequence* InSequence);
        void SetEventReceivers(BasicTypes::TArray<Engine::AActor*> AdditionalReceivers);
        void SetBinding(const MovieScene::FMovieSceneObjectBindingID& Binding, BasicTypes::TArray<Engine::AActor*> Actors, bool bAllowBindingsFromAsset);
        void ResetBindings();
        void ResetBinding(const MovieScene::FMovieSceneObjectBindingID& Binding);
        void RemoveBinding(const MovieScene::FMovieSceneObjectBindingID& Binding, Engine::AActor* Actor);
        LevelSequence::ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
        void AddBinding(const MovieScene::FMovieSceneObjectBindingID& Binding, Engine::AActor* Actor, bool bAllowBindingsFromAsset);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/LevelSequence.LevelSequenceActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
