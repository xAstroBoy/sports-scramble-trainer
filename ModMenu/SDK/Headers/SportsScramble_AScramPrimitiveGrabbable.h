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
#include "CoreUObject_FVector.h"
#include "SportsScramble_AScramPrimitiveActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UCurveFloat; };
namespace CG::Engine { class UStaticMesh; };
namespace CG::Engine { class USkeletalMesh; };
namespace CG::SportsScramble { class AScramGripSet; };
namespace CG::SportsScramble { class AScramPrimitiveGrabbable; };
namespace CG::SportsScramble { class AScramPlayer; };
namespace CG::SportsScramble { class AScramPlayerHand; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.ScramPrimitiveGrabbable
     * Size -> 0x010C (FullSize[0x09F8] - InheritedSize[0x08EC])
     */
    class AScramPrimitiveGrabbable : public SportsScramble::AScramPrimitiveActor
    {
    public:
        uint8_t                                                      UnknownData_0005[0x4];                                   //  Fix Super Size
        float                                                        SmoothTime;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         CanBeGrabbed;                                            //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        InitialGrabDuration;                                     //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UCurveFloat*                                         InitialGrabPositionAlpha;                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         InitialGrabRotationAlpha;                                //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         InitialGrabScaleAlpha;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         PendingStealPositionAlpha;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         PendingStealRotationAlpha;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UCurveFloat*                                         PendingStealScaleAlpha;                                  //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         HidesAvatarHands;                                        //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0002[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UStaticMesh*                                         AlternateHandMesh;                                       //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::USkeletalMesh*                                       AlternateHandSkeletalMesh;                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::AScramGripSet*                               LefthandGripSetClass;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::AScramGripSet*                               RighthandGripSetClass;                                   //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        CoreUObject::FVector                                         DefaultScale;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        RemoteScale;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MinTrackedFramesForContinuousMotion;                     //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MinInferredFramesForContinuousMotion;                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         FlipInLeftHand;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0003[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::AScramGripSet*                               mpLefthandGripSet;                                       //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::AScramGripSet*                               mpRighthandGripSet;                                      //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::UStaticMesh*                                         mpMainHandMesh;                                          //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        Engine::USkeletalMesh*                                       mpMainHandSkeletalMesh;                                  //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::AScramPrimitiveGrabbable*                    mpProxyGrabbable;                                        //  ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0006[0x58];                                  //  Fix size for supers

    public:
        void SetProxyGrabbable(SportsScramble::AScramPrimitiveGrabbable* grabbable);
        void OnGrabbableDeactivated();
        void OnGrabbableActivated();
        bool IsLocallyGrabbed();
        bool InitialGrabInProgress();
        bool GrabbableIsTracked();
        SportsScramble::AScramPrimitiveGrabbable* GetProxyGrabbable();
        bool GetHidesAvatarHands();
        SportsScramble::AScramPlayer* CurrentPlayer();
        SportsScramble::AScramPlayerHand* CurrentHand();
        Engine::AActor* CurrentGrabberActor();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.ScramPrimitiveGrabbable");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif