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
#include "Engine_ENUMS.h"
#include "CoreUObject_FVector.h"
#include "Engine_AActor.h"
#include "CoreUObject_FRotator.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class AController; };
namespace CG::Engine { class APlayerState; };
namespace CG::Engine { class UPawnMovementComponent; };
namespace CG::Engine { class APawn; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::Engine
{
    /**
     * Class /Script/Engine.Pawn
     * Size -> 0x0060 (FullSize[0x0388] - InheritedSize[0x0328])
     */
    class APawn : public Engine::AActor
    {
    public:
        uint8_t                                                      UnknownData_0000[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        bool                                                         bUseControllerRotationPitch : 1;                         //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseControllerRotationYaw : 1;                           //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bUseControllerRotationRoll : 1;                          //  BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bCanAffectNavigationGeneration : 1;                      //  BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        BaseEyeHeight;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAutoReceiveInput                                    AutoPossessPlayer;                                       //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::EAutoPossessAI                                       AutoPossessAI;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      RemoteViewPitch;                                         //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x5];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::AController*                                         AIControllerClass;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::APlayerState*                                        PlayerState;                                             //  BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x8];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::AController*                                         LastHitBy;                                               //  BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::AController*                                         Controller;                                              //  Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0004[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         ControlInputVector;                                      //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FVector                                         LastControlInputVector;                                  //  ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (PADDING)

    public:
        void SpawnDefaultController();
        void SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate);
        void ReceiveUnpossessed(Engine::AController* OldController);
        void ReceivePossessed(Engine::AController* NewController);
        void PawnMakeNoise(float Loudness, const CoreUObject::FVector& NoiseLocation, bool bUseNoiseMakerLocation, Engine::AActor* NoiseMaker);
        void OnRep_PlayerState();
        void OnRep_Controller();
        void LaunchPawn(const CoreUObject::FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
        CoreUObject::FVector K2_GetMovementInputVector();
        bool IsPlayerControlled();
        bool IsMoveInputIgnored();
        bool IsLocallyControlled();
        bool IsControlled();
        CoreUObject::FVector GetPendingMovementInputVector();
        CoreUObject::FVector GetNavAgentLocation();
        Engine::UPawnMovementComponent* GetMovementComponent();
        Engine::AActor* STATIC_GetMovementBaseActor(Engine::APawn* Pawn);
        CoreUObject::FVector GetLastMovementInputVector();
        CoreUObject::FRotator GetControlRotation();
        Engine::AController* GetController();
        CoreUObject::FRotator GetBaseAimRotation();
        void DetachFromControllerPendingDestroy();
        CoreUObject::FVector ConsumeMovementInputVector();
        void AddMovementInput(const CoreUObject::FVector& WorldDirection, float ScaleValue, bool bForce);
        void AddControllerYawInput(float val);
        void AddControllerRollInput(float val);
        void AddControllerPitchInput(float val);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/Engine.Pawn");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif