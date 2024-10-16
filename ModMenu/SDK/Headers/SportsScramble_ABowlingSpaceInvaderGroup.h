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
#include "CoreUObject_FVector.h"
#include "SportsScramble_AScramSceneComponentActor.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::SportsScramble { class ABowlingLane; };
namespace CG::SportsScramble { class ABowlingSpaceInvaderAlien; };
namespace CG::Engine { class USoundBase; };
namespace CG::SportsScramble { class ABowlingSpaceInvaderNetHelper; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.BowlingSpaceInvaderGroup
     * Size -> 0x00C8 (FullSize[0x0418] - InheritedSize[0x0350])
     */
    class ABowlingSpaceInvaderGroup : public SportsScramble::AScramSceneComponentActor
    {
    public:
        float                                                        GameStartDelay;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        AlienTimeValue;                                          //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         AutoRestart;                                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        float                                                        ResetTime;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      MaxWidth;                                                //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        int32_t                                                      MaxHeight;                                               //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        InitialSpeed;                                            //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        UpdateTimeStep;                                          //  Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        MinimumUpdateTimeStep;                                   //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        AlienRadius;                                             //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        VerticalBuffer;                                          //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        LaneHalfWidth;                                           //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        LaneLength;                                              //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        float                                                        DownLaneMovement;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        bool                                                         FixedEdges;                                              //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        uint8_t                                                      UnknownData_0001[0x7];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::ABowlingLane*                                Lane;                                                    //  Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::ABowlingSpaceInvaderAlien*                   InvaderClass;                                            //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
        BasicTypes::TArray<SportsScramble::ABowlingSpaceInvaderAlien*> AlienGroup;                                              //  BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        BasicTypes::TArray<Engine::USoundBase*>                      MoveSounds;                                              //  Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected
        Engine::USoundBase*                                          NegativeSound;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
        SportsScramble::ABowlingSpaceInvaderNetHelper*               mpNetHelper;                                             //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0002[0x28];                                  //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        CoreUObject::FVector                                         mGroupOrigin;                                            //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x14];                                  //  MISSED OFFSET (PADDING)

    public:
        void SetBaseTimeStep(float newBaseTimeStep);
        void NotifyResetAlienGroup();
        bool IsGroupClear(const CoreUObject::FVector& WorldPosition, float clearMargin);
        bool IsGameplayRunning();
        float GetCurrentTimeStep();
        void EndGameplay();
        void DeferredInitComplete();
        void DeferredInit();
        void ChangeTimeStep(float newTimeStep);
        void BeginGameplay();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.BowlingSpaceInvaderGroup");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
