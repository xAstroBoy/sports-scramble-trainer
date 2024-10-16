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
#include "BasicTypes_TArray.h"
#include "Engine_FAudioComponentParam.h"
#include "BasicTypes_FName.h"
#include "Engine_FSoundAttenuationSettings.h"
#include "Engine_ENUMS.h"
#include "BasicTypes_UScriptMulticastDelegate.h"
#include "BasicTypes_UScriptDelegate.h"
#include "BasicTypes_TWeakObjectPtr.h"
#include "Engine_USceneComponent.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class USoundClass; };
namespace CG::Engine { class USoundAttenuation; };
namespace CG::Engine { class USoundConcurrency; };
namespace CG::Engine { class USoundWave; };
namespace CG::Engine { class USoundSubmix; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.AudioComponent
     * Size -> 0x0418 (FullSize[0x0650] - InheritedSize[0x0238])
     */
    class UAudioComponent : public Engine::USceneComponent
    {
    public:
        Engine::USoundBase*                                          Sound;                                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::TArray<Engine::FAudioComponentParam>             InstanceParameters;                                      //  Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic
        Engine::USoundClass*                                         SoundClassOverride;                                      //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAutoDestroy : 1;                                        //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bStopWhenOwnerDestroyed : 1;                             //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bShouldRemainActiveIfDropped : 1;                        //  BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bAllowSpatialization : 1;                                //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideAttenuation : 1;                                //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bOverrideSubtitlePriority : 1;                           //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bIsUISound : 1;                                          //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableLowPassFilter : 1;                                //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0000 : 6;                                    //  BIT_FIELD (PADDING)
        bool                                                         bOverridePriority : 1;                                   //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bSuppressSubtitles : 1;                                  //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         UnknownData_0001 : 3;                                    //  BIT_FIELD (PADDING)
        bool                                                         bAutoManageAttachment : 1;                               //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::FName                                            AudioComponentUserID;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        PitchModulationMin;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        PitchModulationMax;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VolumeModulationMin;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VolumeModulationMax;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        VolumeMultiplier;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      EnvelopeFollowerAttackTime;                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      EnvelopeFollowerReleaseTime;                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        Priority;                                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        SubtitlePriority;                                        //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        PitchMultiplier;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        LowPassFilterFrequency;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0003[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::USoundAttenuation*                                   AttenuationSettings;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::FSoundAttenuationSettings                            AttenuationOverrides;                                    //  Edit, BlueprintVisible, NativeAccessSpecifierPublic
        Engine::USoundConcurrency*                                   ConcurrencySettings;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::EAttachmentRule                                      AutoAttachLocationRule;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAttachmentRule                                      AutoAttachRotationRule;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAttachmentRule                                      AutoAttachScaleRule;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0005[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnAudioFinished;                                         //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0006[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnAudioPlaybackPercent;                                  //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0007[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnAudioSingleEnvelopeValue;                              //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0008[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptMulticastDelegate                         OnAudioMultiEnvelopeValue;                               //  ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0009[0x18];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        BasicTypes::UScriptDelegate                                  OnQueueSubtitles;                                        //  ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
        BasicTypes::TWeakObjectPtr<Engine::USceneComponent>          AutoAttachParent;                                        //  Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        BasicTypes::FName                                            AutoAttachSocketName;                                    //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0010[0x38];                                  //  MISSED OFFSET (PADDING)

    public:
        void Stop();
        void SetWaveParameter(const BasicTypes::FName& InName, Engine::USoundWave* InWave);
        void SetVolumeMultiplier(float NewVolumeMultiplier);
        void SetUISound(bool bInUISound);
        void SetSubmixSend(Engine::USoundSubmix* Submix, float SendLevel);
        void SetSound(Engine::USoundBase* NewSound);
        void SetPitchMultiplier(float NewPitchMultiplier);
        void SetPaused(bool bPause);
        void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
        void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
        void SetIntParameter(const BasicTypes::FName& InName, int32_t inInt);
        void SetFloatParameter(const BasicTypes::FName& InName, float InFloat);
        void SetBoolParameter(const BasicTypes::FName& InName, bool InBool);
        void Play(float StartTime);
        bool IsPlaying();
        void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
        void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
        bool BP_GetAttenuationSettingsToApply(Engine::FSoundAttenuationSettings* OutAttenuationSettings);
        void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
        void AdjustAttenuation(const Engine::FSoundAttenuationSettings& InAttenuationSettings);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.AudioComponent");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
