#pragma once

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
#include "Engine_UBlueprintFunctionLibrary.h"
#include "BasicTypes_FName.h"
#include "Engine_FLatentActionInfo.h"
#include "CoreUObject_FVector.h"
#include "CoreUObject_FRotator.h"
#include "Engine_ENUMS.h"
#include "Engine_FDialogueContext.h"
#include "CoreUObject_FIntVector.h"
#include "BasicTypes_FString.h"
#include "CoreUObject_FVector2D.h"
#include "Engine_FHitResult.h"
#include "BasicTypes_TArray.h"
#include "CoreUObject_FTransform.h"
#include "Engine_FPredictProjectilePathParams.h"
#include "Engine_FPredictProjectilePathResult.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::CoreUObject { class UObject; };
namespace CG::Engine { class USoundBase; };
namespace CG::Engine { class USceneComponent; };
namespace CG::Engine { class USoundAttenuation; };
namespace CG::Engine { class USoundConcurrency; };
namespace CG::Engine { class UAudioComponent; };
namespace CG::Engine { class UForceFeedbackEffect; };
namespace CG::Engine { class UForceFeedbackAttenuation; };
namespace CG::Engine { class UForceFeedbackComponent; };
namespace CG::Engine { class UParticleSystem; };
namespace CG::Engine { class UParticleSystemComponent; };
namespace CG::Engine { class UDialogueWave; };
namespace CG::Engine { class UMaterialInterface; };
namespace CG::Engine { class UDecalComponent; };
namespace CG::Engine { class USoundMix; };
namespace CG::Engine { class USoundClass; };
namespace CG::Engine { class APlayerController; };
namespace CG::Engine { class USaveGame; };
namespace CG::Engine { class UCameraShake; };
namespace CG::Engine { class AActor; };
namespace CG::Engine { class UPhysicalMaterial; };
namespace CG::Engine { class UPrimitiveComponent; };
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class ULevelStreaming; };
namespace CG::Engine { class APawn; };
namespace CG::Engine { class ACharacter; };
namespace CG::Engine { class APlayerCameraManager; };
namespace CG::Engine { class AGameStateBase; };
namespace CG::Engine { class AGameModeBase; };
namespace CG::Engine { class UGameInstance; };
namespace CG::Engine { class UReverbEffect; };
namespace CG::CoreUObject { class IInterface; };
namespace CG::Engine { class UBlueprint; };
namespace CG::Engine { class UDamageType; };
namespace CG::Engine { class AController; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.GameplayStatics
     * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
     */
    class UGameplayStatics : public Engine::UBlueprintFunctionLibrary
    {
    public:
        void STATIC_UnloadStreamLevel(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& LevelName, const Engine::FLatentActionInfo& LatentInfo, bool bShouldBlockOnUnload);
        bool STATIC_SuggestProjectileVelocity_CustomArc(CoreUObject::UObject* WorldContextObject, CoreUObject::FVector* OutLaunchVelocity, const CoreUObject::FVector& StartPos, const CoreUObject::FVector& EndPos, float OverrideGravityZ, float ArcParam);
        Engine::UAudioComponent* STATIC_SpawnSoundAttached(Engine::USoundBase* Sound, Engine::USceneComponent* AttachToComponent, const BasicTypes::FName& AttachPointName, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, Engine::EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundAttenuation* AttenuationSettings, Engine::USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
        Engine::UAudioComponent* STATIC_SpawnSoundAtLocation(CoreUObject::UObject* WorldContextObject, Engine::USoundBase* Sound, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundAttenuation* AttenuationSettings, Engine::USoundConcurrency* ConcurrencySettings, bool bAutoDestroy);
        Engine::UAudioComponent* STATIC_SpawnSound2D(CoreUObject::UObject* WorldContextObject, Engine::USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
        CoreUObject::UObject* STATIC_SpawnObject(CoreUObject::UObject* ObjectClass, CoreUObject::UObject* Outer);
        Engine::UForceFeedbackComponent* STATIC_SpawnForceFeedbackAttached(Engine::UForceFeedbackEffect* ForceFeedbackEffect, Engine::USceneComponent* AttachToComponent, const BasicTypes::FName& AttachPointName, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, Engine::EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bLooping, float IntensityMultiplier, float StartTime, Engine::UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
        Engine::UForceFeedbackComponent* STATIC_SpawnForceFeedbackAtLocation(CoreUObject::UObject* WorldContextObject, Engine::UForceFeedbackEffect* ForceFeedbackEffect, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, bool bLooping, float IntensityMultiplier, float StartTime, Engine::UForceFeedbackAttenuation* AttenuationSettings, bool bAutoDestroy);
        Engine::UParticleSystemComponent* STATIC_SpawnEmitterAttached(Engine::UParticleSystem* EmitterTemplate, Engine::USceneComponent* AttachToComponent, const BasicTypes::FName& AttachPointName, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, const CoreUObject::FVector& Scale, Engine::EAttachLocation LocationType, bool bAutoDestroy, Engine::EPSCPoolMethod PoolingMethod);
        Engine::UParticleSystemComponent* STATIC_SpawnEmitterAtLocation(CoreUObject::UObject* WorldContextObject, Engine::UParticleSystem* EmitterTemplate, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, const CoreUObject::FVector& Scale, bool bAutoDestroy, Engine::EPSCPoolMethod PoolingMethod);
        Engine::UAudioComponent* STATIC_SpawnDialogueAttached(Engine::UDialogueWave* Dialogue, const Engine::FDialogueContext& Context, Engine::USceneComponent* AttachToComponent, const BasicTypes::FName& AttachPointName, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, Engine::EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
        Engine::UAudioComponent* STATIC_SpawnDialogueAtLocation(CoreUObject::UObject* WorldContextObject, Engine::UDialogueWave* Dialogue, const Engine::FDialogueContext& Context, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundAttenuation* AttenuationSettings, bool bAutoDestroy);
        Engine::UAudioComponent* STATIC_SpawnDialogue2D(CoreUObject::UObject* WorldContextObject, Engine::UDialogueWave* Dialogue, const Engine::FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime, bool bAutoDestroy);
        Engine::UDecalComponent* STATIC_SpawnDecalAttached(Engine::UMaterialInterface* DecalMaterial, const CoreUObject::FVector& DecalSize, Engine::USceneComponent* AttachToComponent, const BasicTypes::FName& AttachPointName, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, Engine::EAttachLocation LocationType, float LifeSpan);
        Engine::UDecalComponent* STATIC_SpawnDecalAtLocation(CoreUObject::UObject* WorldContextObject, Engine::UMaterialInterface* DecalMaterial, const CoreUObject::FVector& DecalSize, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, float LifeSpan);
        void STATIC_SetWorldOriginLocation(CoreUObject::UObject* WorldContextObject, const CoreUObject::FIntVector& NewLocation);
        void STATIC_SetSubtitlesEnabled(bool bEnabled);
        void STATIC_SetSoundMixClassOverride(CoreUObject::UObject* WorldContextObject, Engine::USoundMix* InSoundMixModifier, Engine::USoundClass* InSoundClass, float Volume, float Pitch, float fadeInTime, bool bApplyToChildren);
        void STATIC_SetPlayerControllerID(Engine::APlayerController* Player, int32_t ControllerId);
        void STATIC_SetGlobalTimeDilation(CoreUObject::UObject* WorldContextObject, float timeDilation);
        void STATIC_SetGlobalPitchModulation(CoreUObject::UObject* WorldContextObject, float PitchModulation, float TimeSec);
        void STATIC_SetGlobalListenerFocusParameters(CoreUObject::UObject* WorldContextObject, float FocusAzimuthScale, float NonFocusAzimuthScale, float FocusDistanceScale, float NonFocusDistanceScale, float FocusVolumeScale, float NonFocusVolumeScale, float FocusPriorityScale, float NonFocusPriorityScale);
        bool STATIC_SetGamePaused(CoreUObject::UObject* WorldContextObject, bool bPaused);
        void STATIC_SetEnableWorldRendering(CoreUObject::UObject* WorldContextObject, bool bEnable);
        void STATIC_SetBaseSoundMix(CoreUObject::UObject* WorldContextObject, Engine::USoundMix* InSoundMix);
        bool STATIC_SaveGameToSlot(Engine::USaveGame* SaveGameObject, const BasicTypes::FString& SlotName, int32_t UserIndex);
        void STATIC_RemovePlayer(Engine::APlayerController* Player, bool bDestroyPawn);
        CoreUObject::FVector STATIC_RebaseZeroOriginOntoLocal(CoreUObject::UObject* WorldContextObject, const CoreUObject::FVector& WorldLocation);
        CoreUObject::FVector STATIC_RebaseLocalOriginOntoZero(CoreUObject::UObject* WorldContextObject, const CoreUObject::FVector& WorldLocation);
        void STATIC_PushSoundMixModifier(CoreUObject::UObject* WorldContextObject, Engine::USoundMix* InSoundMixModifier);
        bool STATIC_ProjectWorldToScreen(Engine::APlayerController* Player, const CoreUObject::FVector& WorldPosition, CoreUObject::FVector2D* ScreenPosition, bool bPlayerViewportRelative);
        void STATIC_PopSoundMixModifier(CoreUObject::UObject* WorldContextObject, Engine::USoundMix* InSoundMixModifier);
        void STATIC_PlayWorldCameraShake(CoreUObject::UObject* WorldContextObject, Engine::UCameraShake* Shake, const CoreUObject::FVector& Epicenter, float InnerRadius, float OuterRadius, float Falloff, bool bOrientShakeTowardsEpicenter);
        void STATIC_PlaySoundAtLocation(CoreUObject::UObject* WorldContextObject, Engine::USoundBase* Sound, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundAttenuation* AttenuationSettings, Engine::USoundConcurrency* ConcurrencySettings, Engine::AActor* OwningActor);
        void STATIC_PlaySound2D(CoreUObject::UObject* WorldContextObject, Engine::USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundConcurrency* ConcurrencySettings, Engine::AActor* OwningActor, bool IsUiSound);
        void STATIC_PlayDialogueAtLocation(CoreUObject::UObject* WorldContextObject, Engine::UDialogueWave* Dialogue, const Engine::FDialogueContext& Context, const CoreUObject::FVector& Location, const CoreUObject::FRotator& Rotation, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundAttenuation* AttenuationSettings);
        void STATIC_PlayDialogue2D(CoreUObject::UObject* WorldContextObject, Engine::UDialogueWave* Dialogue, const Engine::FDialogueContext& Context, float VolumeMultiplier, float PitchMultiplier, float StartTime);
        BasicTypes::FString STATIC_ParseOption(const BasicTypes::FString& Options, const BasicTypes::FString& Key);
        void STATIC_OpenLevel(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& LevelName, bool bAbsolute, const BasicTypes::FString& Options);
        Engine::FHitResult STATIC_MakeHitResult(bool bBlockingHit, bool bInitialOverlap, float Time, float Distance, const CoreUObject::FVector& Location, const CoreUObject::FVector& ImpactPoint, const CoreUObject::FVector& Normal, const CoreUObject::FVector& ImpactNormal, Engine::UPhysicalMaterial* PhysMat, Engine::AActor* hitActor, Engine::UPrimitiveComponent* HitComponent, const BasicTypes::FName& HitBoneName, int32_t HitItem, int32_t FaceIndex, const CoreUObject::FVector& TraceStart, const CoreUObject::FVector& TraceEnd);
        void STATIC_LoadStreamLevel(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, const Engine::FLatentActionInfo& LatentInfo);
        Engine::USaveGame* STATIC_LoadGameFromSlot(const BasicTypes::FString& SlotName, int32_t UserIndex);
        bool STATIC_IsGamePaused(CoreUObject::UObject* WorldContextObject);
        bool STATIC_HasOption(const BasicTypes::FString& Options, const BasicTypes::FString& InKey);
        bool STATIC_HasLaunchOption(const BasicTypes::FString& OptionToCheck);
        int32_t STATIC_GrassOverlappingSphereCount(CoreUObject::UObject* WorldContextObject, Engine::UStaticMesh* StaticMesh, const CoreUObject::FVector& CenterPosition, float Radius);
        CoreUObject::FIntVector STATIC_GetWorldOriginLocation(CoreUObject::UObject* WorldContextObject);
        float STATIC_GetWorldDeltaSeconds(CoreUObject::UObject* WorldContextObject);
        float STATIC_GetUnpausedTimeSeconds(CoreUObject::UObject* WorldContextObject);
        float STATIC_GetTimeSeconds(CoreUObject::UObject* WorldContextObject);
        Engine::EPhysicalSurface STATIC_GetSurfaceType(const Engine::FHitResult& Hit);
        Engine::ULevelStreaming* STATIC_GetStreamingLevel(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& PackageName);
        float STATIC_GetRealTimeSeconds(CoreUObject::UObject* WorldContextObject);
        Engine::APawn* STATIC_GetPlayerPawn(CoreUObject::UObject* WorldContextObject, int32_t PlayerIndex);
        int32_t STATIC_GetPlayerControllerID(Engine::APlayerController* Player);
        Engine::APlayerController* STATIC_GetPlayerController(CoreUObject::UObject* WorldContextObject, int32_t PlayerIndex);
        Engine::ACharacter* STATIC_GetPlayerCharacter(CoreUObject::UObject* WorldContextObject, int32_t PlayerIndex);
        Engine::APlayerCameraManager* STATIC_GetPlayerCameraManager(CoreUObject::UObject* WorldContextObject, int32_t PlayerIndex);
        BasicTypes::FString STATIC_GetPlatformName();
        CoreUObject::UObject* STATIC_GetObjectClass(CoreUObject::UObject* Object);
        void STATIC_GetKeyValue(const BasicTypes::FString& Pair, BasicTypes::FString* Key, BasicTypes::FString* Value);
        int32_t STATIC_GetIntOption(const BasicTypes::FString& Options, const BasicTypes::FString& Key, int32_t DefaultValue);
        float STATIC_GetGlobalTimeDilation(CoreUObject::UObject* WorldContextObject);
        Engine::AGameStateBase* STATIC_GetGameState(CoreUObject::UObject* WorldContextObject);
        Engine::AGameModeBase* STATIC_GetGameMode(CoreUObject::UObject* WorldContextObject);
        Engine::UGameInstance* STATIC_GetGameInstance(CoreUObject::UObject* WorldContextObject);
        bool STATIC_GetEnableWorldRendering(CoreUObject::UObject* WorldContextObject);
        Engine::UReverbEffect* STATIC_GetCurrentReverbEffect(CoreUObject::UObject* WorldContextObject);
        BasicTypes::FString STATIC_GetCurrentLevelName(CoreUObject::UObject* WorldContextObject, bool bRemovePrefixString);
        float STATIC_GetAudioTimeSeconds(CoreUObject::UObject* WorldContextObject);
        void STATIC_GetAllActorsWithTag(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& Tag, BasicTypes::TArray<Engine::AActor*>* OutActors);
        void STATIC_GetAllActorsWithInterface(CoreUObject::UObject* WorldContextObject, CoreUObject::IInterface* Interface, BasicTypes::TArray<Engine::AActor*>* OutActors);
        void STATIC_GetAllActorsOfClass(CoreUObject::UObject* WorldContextObject, Engine::AActor* ActorClass, BasicTypes::TArray<Engine::AActor*>* OutActors);
        void STATIC_GetActorArrayBounds(BasicTypes::TArray<Engine::AActor*> Actors, bool bOnlyCollidingComponents, CoreUObject::FVector* Center, CoreUObject::FVector* BoxExtent);
        CoreUObject::FVector STATIC_GetActorArrayAverageLocation(BasicTypes::TArray<Engine::AActor*> Actors);
        void STATIC_GetAccurateRealTime(CoreUObject::UObject* WorldContextObject, int32_t* Seconds, float* PartialSeconds);
        void STATIC_FlushLevelStreaming(CoreUObject::UObject* WorldContextObject);
        Engine::AActor* STATIC_FinishSpawningActor(Engine::AActor* Actor, const CoreUObject::FTransform& SpawnTransform);
        bool STATIC_FindCollisionUV(const Engine::FHitResult& Hit, int32_t UVChannel, CoreUObject::FVector2D* UV);
        void STATIC_EnableLiveStreaming(bool Enable);
        bool STATIC_DoesSaveGameExist(const BasicTypes::FString& SlotName, int32_t UserIndex);
        bool STATIC_DeprojectScreenToWorld(Engine::APlayerController* Player, const CoreUObject::FVector2D& ScreenPosition, CoreUObject::FVector* WorldPosition, CoreUObject::FVector* WorldDirection);
        bool STATIC_DeleteGameInSlot(const BasicTypes::FString& SlotName, int32_t UserIndex);
        void STATIC_DeactivateReverbEffect(CoreUObject::UObject* WorldContextObject, const BasicTypes::FName& TagName);
        Engine::UAudioComponent* STATIC_CreateSound2D(CoreUObject::UObject* WorldContextObject, Engine::USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, Engine::USoundConcurrency* ConcurrencySettings, bool bPersistAcrossLevelTransition, bool bAutoDestroy);
        Engine::USaveGame* STATIC_CreateSaveGameObjectFromBlueprint(Engine::UBlueprint* SaveGameBlueprint);
        Engine::USaveGame* STATIC_CreateSaveGameObject(Engine::USaveGame* SaveGameClass);
        Engine::APlayerController* STATIC_CreatePlayer(CoreUObject::UObject* WorldContextObject, int32_t ControllerId, bool bSpawnPawn);
        void STATIC_ClearSoundMixModifiers(CoreUObject::UObject* WorldContextObject);
        void STATIC_ClearSoundMixClassOverride(CoreUObject::UObject* WorldContextObject, Engine::USoundMix* InSoundMixModifier, Engine::USoundClass* InSoundClass, float fadeOutTime);
        void STATIC_CancelAsyncLoading();
        void STATIC_BreakHitResult(const Engine::FHitResult& Hit, bool* bBlockingHit, bool* bInitialOverlap, float* Time, float* Distance, CoreUObject::FVector* Location, CoreUObject::FVector* ImpactPoint, CoreUObject::FVector* Normal, CoreUObject::FVector* ImpactNormal, Engine::UPhysicalMaterial** PhysMat, Engine::AActor** hitActor, Engine::UPrimitiveComponent** HitComponent, BasicTypes::FName* HitBoneName, int32_t* HitItem, int32_t* FaceIndex, CoreUObject::FVector* TraceStart, CoreUObject::FVector* TraceEnd);
        bool STATIC_BlueprintSuggestProjectileVelocity(CoreUObject::UObject* WorldContextObject, CoreUObject::FVector* TossVelocity, const CoreUObject::FVector& StartLocation, const CoreUObject::FVector& EndLocation, float LaunchSpeed, float OverrideGravityZ, Engine::ESuggestProjVelocityTraceOption TraceOption, float CollisionRadius, bool bFavorHighArc, bool bDrawDebug);
        bool STATIC_Blueprint_PredictProjectilePath_ByTraceChannel(CoreUObject::UObject* WorldContextObject, Engine::FHitResult* OutHit, BasicTypes::TArray<CoreUObject::FVector>* OutPathPositions, CoreUObject::FVector* OutLastTraceDestination, const CoreUObject::FVector& StartPos, const CoreUObject::FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, Engine::ECollisionChannel TraceChannel, bool bTraceComplex, BasicTypes::TArray<Engine::AActor*> ActorsToIgnore, Engine::EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
        bool STATIC_Blueprint_PredictProjectilePath_ByObjectType(CoreUObject::UObject* WorldContextObject, Engine::FHitResult* OutHit, BasicTypes::TArray<CoreUObject::FVector>* OutPathPositions, CoreUObject::FVector* OutLastTraceDestination, const CoreUObject::FVector& StartPos, const CoreUObject::FVector& LaunchVelocity, bool bTracePath, float ProjectileRadius, BasicTypes::TArray<Engine::EObjectTypeQuery> ObjectTypes, bool bTraceComplex, BasicTypes::TArray<Engine::AActor*> ActorsToIgnore, Engine::EDrawDebugTrace DrawDebugType, float DrawDebugTime, float SimFrequency, float MaxSimTime, float OverrideGravityZ);
        bool STATIC_Blueprint_PredictProjectilePath_Advanced(CoreUObject::UObject* WorldContextObject, const Engine::FPredictProjectilePathParams& PredictParams, Engine::FPredictProjectilePathResult* PredictResult);
        Engine::AActor* STATIC_BeginSpawningActorFromClass(CoreUObject::UObject* WorldContextObject, Engine::AActor* ActorClass, const CoreUObject::FTransform& SpawnTransform, bool bNoCollisionFail, Engine::AActor* Owner);
        Engine::AActor* STATIC_BeginSpawningActorFromBlueprint(CoreUObject::UObject* WorldContextObject, Engine::UBlueprint* Blueprint, const CoreUObject::FTransform& SpawnTransform, bool bNoCollisionFail);
        Engine::AActor* STATIC_BeginDeferredActorSpawnFromClass(CoreUObject::UObject* WorldContextObject, Engine::AActor* ActorClass, const CoreUObject::FTransform& SpawnTransform, Engine::ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, Engine::AActor* Owner);
        bool STATIC_AreSubtitlesEnabled();
        bool STATIC_AreAnyListenersWithinRange(CoreUObject::UObject* WorldContextObject, const CoreUObject::FVector& Location, float MaximumRange);
        bool STATIC_ApplyRadialDamageWithFalloff(CoreUObject::UObject* WorldContextObject, float BaseDamage, float MinimumDamage, const CoreUObject::FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, Engine::UDamageType* DamageTypeClass, BasicTypes::TArray<Engine::AActor*> IgnoreActors, Engine::AActor* DamageCauser, Engine::AController* InstigatedByController, Engine::ECollisionChannel DamagePreventionChannel);
        bool STATIC_ApplyRadialDamage(CoreUObject::UObject* WorldContextObject, float BaseDamage, const CoreUObject::FVector& Origin, float DamageRadius, Engine::UDamageType* DamageTypeClass, BasicTypes::TArray<Engine::AActor*> IgnoreActors, Engine::AActor* DamageCauser, Engine::AController* InstigatedByController, bool bDoFullDamage, Engine::ECollisionChannel DamagePreventionChannel);
        float STATIC_ApplyPointDamage(Engine::AActor* DamagedActor, float BaseDamage, const CoreUObject::FVector& HitFromDirection, const Engine::FHitResult& HitInfo, Engine::AController* EventInstigator, Engine::AActor* DamageCauser, Engine::UDamageType* DamageTypeClass);
        float STATIC_ApplyDamage(Engine::AActor* DamagedActor, float BaseDamage, Engine::AController* EventInstigator, Engine::AActor* DamageCauser, Engine::UDamageType* DamageTypeClass);
        void STATIC_ActivateReverbEffect(CoreUObject::UObject* WorldContextObject, Engine::UReverbEffect* ReverbEffect, const BasicTypes::FName& TagName, float Priority, float Volume, float FadeTime);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.GameplayStatics");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif