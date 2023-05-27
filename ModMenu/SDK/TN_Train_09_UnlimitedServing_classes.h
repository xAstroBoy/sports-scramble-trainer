#pragma once

/**
 * Name: SportsScramble
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass TN_Train_09_UnlimitedServing.TN_Train_09_UnlimitedServing_C
	 * Size -> 0x0107 (FullSize[0x0699] - InheritedSize[0x0592])
	 */
	class ATN_Train_09_UnlimitedServing_C : public ATN_Train_Base_C
	{
	public:
		unsigned char                                              UnknownData_KP7O[0x6];                                   // 0x0592(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0598(0x0008) ZeroConstructor, Transient, DuplicateTransient
		int32_t                                                    maxBalls;                                                // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DelayBetweenLauncherBalls;                               // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LoopCount;                                               // 0x05A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BallsMissed;                                             // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BallsRegistered;                                         // 0x05B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S79V[0x4];                                   // 0x05B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        LivingRoom_RightHanded_2;                                // 0x05B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		TArray<struct FBallLauncherParameters>                     LaunchTargets;                                           // 0x05C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance
		struct FBallLauncherParameters                             ActiveLaunchParameters;                                  // 0x05D8(0x0084) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YICQ[0x4];                                   // 0x065C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDebugButtonInfo>                            ModeButtons;                                             // 0x0660(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference
		class ADebugButtonGroup_C*                                 SmashMenuPlayerSelection;                                // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MenuSelection;                                           // 0x0678(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DQJX[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ATN_Ball_Base_C*                                     BallInPlay;                                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETN_ServingStyle                                           ServeStyle;                                              // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VVYN[0x7];                                   // 0x0689(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              InstrumentClass;                                         // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomBall;                                              // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void UpdateOptions();
		void InitializeTrainingRoom09();
		void UserConstructionScript();
		void ReceiveBeginPlay();
		void TN_TNG_BallHit(class AScramBall* Ball);
		void SpawnServeBall();
		void BallDestroyed(class AScramPrimitiveActor* DestroyedPrimitive);
		void CountDownCompleted();
		void ShowCountdown();
		void Unpaused();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_TN_Train_09_UnlimitedServing(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
