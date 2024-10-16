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
#include "SportsScramble_FAngle.h"
#include "SportsScramble_ENUMS.h"
#include "BasicTypes_TArray.h"
#include "SportsScramble_AScramSportManagerBase.h"
#include "BasicTypes_FString.h"

// --------------------------------------------------
// # Forwards
// --------------------------------------------------
namespace CG::Engine { class UParticleSystem; };
namespace CG::SportsScramble { class ATennisBall; };
namespace CG::SportsScramble { class ATennisInstrument; };
namespace CG::Engine { class AActor; };
namespace CG::CoreUObject { class UObject; };
namespace CG::SportsScramble { class UScramEventBasePayload; };
namespace CG::CoreUObject { class UClass; };

#ifdef _MSC_VER
    #pragma pack(push, 0x01)
#endif

namespace CG::SportsScramble
{
    /**
     * Class /Script/SportsScramble.ScramSportManagerTennis
     * Size -> 0x00B8 (FullSize[0x0450] - InheritedSize[0x0398])
     */
    class AScramSportManagerTennis : public SportsScramble::AScramSportManagerBase
    {
    public:
        int32_t                                                      WinMargin;                                               //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      PointsToWinGame;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      GameWinMargin;                                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        int32_t                                                      GamesToWinMatch;                                         //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        ServeLookAtTime;                                         //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        SportsScramble::FAngle                                       ServeLookAtAngle;                                        //  Edit, NoDestructor, NativeAccessSpecifierPublic
        float                                                        LineThicknessForDustPuff;                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0000[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        Engine::UParticleSystem*                                     DustPuff;                                                //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         EnableBadmintonRules;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0001[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      MinShotsForLongRally;                                    //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         ShouldSwitchServeDuringGame;                             //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        uint8_t                                                      UnknownData_0002[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      NumPointsBeforeSwitchingServe;                           //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        float                                                        BallCleanupDelay;                                        //  Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         Player2ServesFirst;                                      //  Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
        bool                                                         mSentInitialServeEvent;                                  //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        SportsScramble::ETennisRallyStage                            mRallyStage;                                             //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0003[0x1];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      mBounceCount;                                            //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        int32_t                                                      mNextPlayerToHitBall;                                    //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        int32_t                                                      mRallyShotCount;                                         //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        bool                                                         mBallHitTheNet;                                          //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0004[0x3];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        int32_t                                                      mServer;                                                 //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0005[0x4];                                   //  MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
        SportsScramble::ATennisBall*                                 mpBall;                                                  //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        SportsScramble::ATennisBall*                                 mpLastBall;                                              //  Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
        BasicTypes::TArray<int32_t>                                  mSetScore;                                               //  Net, ZeroConstructor, NativeAccessSpecifierPrivate
        BasicTypes::TArray<int32_t>                                  mGameScore;                                              //  Net, ZeroConstructor, NativeAccessSpecifierPrivate
        uint8_t                                                      UnknownData_0006[0x30];                                  //  MISSED OFFSET (PADDING)

    public:
        void TennisEvent(int32_t Player, SportsScramble::ETennisEvent TennisEvent);
        void SetAllowServe(int32_t Player, bool allowServe);
        void SendDebugString(const BasicTypes::FString& S);
        void SaveTennisState(SportsScramble::ATennisBall** Ball, SportsScramble::ATennisInstrument** player1Instrument, SportsScramble::ATennisInstrument** player2Instrument, Engine::AActor** activeArenaScramble);
        void RestartMatch(bool resetServer);
        void ReplaceBallInPlay(Engine::AActor* Ball);
        void OnBallHit(CoreUObject::UObject* pWorldContextObject, SportsScramble::UScramEventBasePayload* pPayload);
        void LoadTennisState(SportsScramble::ATennisBall* Ball, SportsScramble::ATennisInstrument* player1Instrument, SportsScramble::ATennisInstrument* player2Instrument, Engine::AActor* activeArenaScramble);
        Engine::AActor* GetServingPlayer();
        Engine::AActor* GetReceivingPlayer();
        int32_t GetPlayerPoints();
        int32_t GetPlayerGames();
        int32_t GetPlayerDoubleFaults();
        int32_t GetPlayerAces();
        int32_t GetOpponentPoints();
        int32_t GetOpponentGames();
        Engine::AActor* GetNextPlayerToHitBall();
        Engine::AActor* GetBallInPlay();
        static inline CoreUObject::UClass* StaticClass()
        {
            static CoreUObject::UClass* ptr = nullptr;
            if (!ptr)
                ptr = CoreUObject::UObject::FindClass("Class /Script/SportsScramble.ScramSportManagerTennis");
            return ptr;
        }
    };
}

#ifdef _MSC_VER
    #pragma pack(pop)
#endif
