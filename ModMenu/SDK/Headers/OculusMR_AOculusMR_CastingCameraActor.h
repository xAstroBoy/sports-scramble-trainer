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
#include "Engine_ASceneCapture2D.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::HeadMountedDisplay { class UVRNotificationsComponent; };
namespace CG::Engine { class UTexture2D; };
namespace CG::OculusMR { class UOculusMR_PlaneMeshComponent; };
namespace CG::Engine { class UMaterial; };
namespace CG::Engine { class UMaterialInstanceDynamic; };
namespace CG::OculusMR { class AOculusMR_BoundaryActor; };
namespace CG::CoreUObject { class UClass; };
namespace CG::Engine { class UTextureRenderTarget2D; };
namespace CG::OculusMR { class UOculusMR_Settings; };
namespace CG::OculusMR { class UOculusMR_State; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::OculusMR
{
    /**
     * Class /Script/OculusMR.OculusMR_CastingCameraActor
     * Size -> 0x00F8 (FullSize[0x0430] - InheritedSize[0x0338])
     */
    class AOculusMR_CastingCameraActor : public Engine::ASceneCapture2D
    {
    public:
        HeadMountedDisplay::UVRNotificationsComponent*               VRNotificationComponent;                                 //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UTexture2D*                                          CameraColorTexture;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UTexture2D*                                          CameraDepthTexture;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        OculusMR::UOculusMR_PlaneMeshComponent*                      PlaneMeshComponent;                                      //  ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterial*                                           ChromaKeyMaterial;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterial*                                           ChromaKeyLitMaterial;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterial*                                           OpaqueColoredMaterial;                                   //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterialInstanceDynamic*                            ChromaKeyMaterialInstance;                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterialInstanceDynamic*                            ChromaKeyLitMaterialInstance;                            //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterialInstanceDynamic*                            CameraFrameMaterialInstance;                             //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UMaterialInstanceDynamic*                            BackdropMaterialInstance;                                //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        OculusMR::AOculusMR_BoundaryActor*                           BoundaryActor;                                           //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::ASceneCapture2D*                                     BoundarySceneCaptureActor;                               //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        Engine::UTexture2D*                                          DefaultTexture_White;                                    //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x60];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UTextureRenderTarget2D*                              BackgroundRenderTarget;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::ASceneCapture2D*                                     ForegroundCaptureActor;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        Engine::UTextureRenderTarget2D*                              ForegroundRenderTarget;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        OculusMR::UOculusMR_Settings*                                MRSettings;                                              //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        OculusMR::UOculusMR_State*                                   MRState;                                                 //  ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

    public:
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/OculusMR.OculusMR_CastingCameraActor");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif