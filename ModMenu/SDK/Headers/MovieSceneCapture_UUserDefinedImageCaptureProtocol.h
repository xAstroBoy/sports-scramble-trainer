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
#include "ImageWriteQueue_ENUMS.h"
#include "MovieSceneCapture_UUserDefinedCaptureProtocol.h"
#include "MovieSceneCapture_FCapturedPixels.h"
#include "BasicTypes_FName.h"
#include "MovieSceneCapture_FFrameMetrics.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UTexture; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::MovieSceneCapture
{
    /**
     * Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
     * Size -> 0x0008 (FullSize[0x00E8] - InheritedSize[0x00E0])
     */
    class UUserDefinedImageCaptureProtocol : public MovieSceneCapture::UUserDefinedCaptureProtocol
    {
    public:
        ImageWriteQueue::EDesiredImageFormat                         Format;                                                  //  Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         bEnableCompression;                                      //  Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x2];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      CompressionQuality;                                      //  Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

    public:
        void WriteImageToDisk(const MovieSceneCapture::FCapturedPixels& PixelData, const BasicTypes::FName& StreamName, const MovieSceneCapture::FFrameMetrics& FrameMetrics, bool bCopyImageData);
        BasicTypes::FString GenerateFilenameForCurrentFrame();
        BasicTypes::FString GenerateFilenameForBuffer(Engine::UTexture* Buffer, const BasicTypes::FName& StreamName);
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif